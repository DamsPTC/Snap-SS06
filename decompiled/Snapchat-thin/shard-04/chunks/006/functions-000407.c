/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1036cfe24; end: 1036cfe2f; -[_TtC32SCLensPlusServicesImplementation22ImagineLensServiceImpl isImagineLensActiveStateBlocked:] */

uint FUN_1036cfe24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1036cfcb8(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 1036cfe30; end: 1036cfe97;  */

uint FUN_1036cfe30(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  (*param_4)(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 1036cfe98; end: 1036d03f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1036cfe98(ulong param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long unaff_x20;
  undefined8 uVar14;
  byte bStack_70;
  undefined7 uStack_6f;
  
  lVar11 = _DAT_112f87788;
  uVar6 = *(ulong *)(unaff_x20 + _DAT_112f87788);
  if (uVar6 != 0) {
    lVar9 = param_2;
    func_0x000107c61174();
    uVar7 = uVar6;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar8 = uVar7;
    func_0x000107c5faec();
    lVar12 = lVar9;
    func_0x000107c61170(uVar7);
    if (uVar8 == param_1 && lVar9 == param_2) {
      func_0x000107c6142c();
      iVar5 = (int)lVar9;
    }
    else {
      lVar12 = lVar9;
      func_0x000107c605b8(uVar8,lVar9,param_1,param_2,0);
      func_0x000107c6142c();
      iVar5 = (int)lVar9;
      if ((uVar8 & 1) == 0) {
        func_0x000107c61170(uVar6);
        goto LAB_1036d027c;
      }
    }
    func_0x000100773c70();
    if (iVar5 == 1) {
      uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112f87880);
      func_0x000107c6157c(uVar14);
      func_0x0001000c74f0(&bStack_70);
      func_0x000107c61574(uVar14);
      if ((bStack_70 & 1) == 0) {
        uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112f87878);
        func_0x000107c6157c(uVar14);
        func_0x0001000c74f0(&bStack_70);
        func_0x000107c61574(uVar14);
        uVar7 = CONCAT71(uStack_6f,bStack_70);
        if (uVar7 != 0) {
          uVar8 = uVar7;
          func_0x000107c4b1dc();
          func_0x000107c61180();
          uVar10 = uVar8;
          func_0x000107c5faec();
          func_0x000107c61170(uVar8);
          if ((uVar10 == param_1) && (lVar12 == param_2)) {
            func_0x000107c6142c(lVar12);
          }
          else {
            func_0x000107c605b8(uVar10,lVar12,param_1,param_2,0);
            func_0x000107c6142c(lVar12);
            if ((uVar10 & 1) == 0) {
              func_0x000107c61170(uVar7);
              goto LAB_1036d0264;
            }
          }
          uVar8 = uVar7;
          func_0x000107c49f7c();
          func_0x000107c61170(uVar7);
          if ((uVar8 & 1) != 0) goto LAB_1036d0034;
        }
      }
LAB_1036d0264:
      func_0x000107c61170(uVar6);
      *(undefined1 *)(unaff_x20 + _DAT_112f87850) = 1;
    }
    else {
LAB_1036d0034:
      uVar14 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f87808) + _DAT_113036458);
      func_0x000107c6157c(uVar14);
      func_0x0001000d224c(&bStack_70);
      func_0x000107c61574(uVar14);
      uVar7 = CONCAT71(uStack_6f,bStack_70);
      uVar8 = uVar7;
      func_0x000107c49f90();
      lVar9 = _DAT_112f877c0;
      if ((uVar8 & 1) != 0) {
        uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112f877c0);
        func_0x000107c6157c(uVar14);
        func_0x0001000c74f0(&bStack_70);
        func_0x000107c61574(uVar14);
        if (CONCAT71(uStack_6f,bStack_70) == 0) {
          lVar11 = *(long *)(unaff_x20 + _DAT_112f87790);
          if ((lVar11 == 0) || (func_0x000107c49f7c(), (int)lVar11 == 0)) {
            func_0x000107c615e8(uVar7);
            func_0x000107c61170(uVar6);
            *(undefined1 *)(unaff_x20 + _DAT_112f87850) = 1;
            uVar14 = *(undefined8 *)(unaff_x20 + lVar9);
            goto LAB_1036d0288;
          }
        }
        else {
          func_0x000107c61170();
        }
        *(undefined1 *)(unaff_x20 + _DAT_112f87848) = 1;
        FUN_1036d3288(0,0,1);
        func_0x000107c615e8(uVar7);
        func_0x000107c61170(uVar6);
        uVar14 = *(undefined8 *)(unaff_x20 + lVar9);
        goto LAB_1036d0288;
      }
      func_0x0001000d224c(&bStack_70);
      uVar8 = CONCAT71(uStack_6f,bStack_70);
      uVar10 = uVar8;
      func_0x000107c45190();
      func_0x000107c615e8(uVar8);
      lVar9 = _DAT_112f877c0;
      if ((uVar10 & 1) == 0) {
        uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112f877c0);
        func_0x000107c6157c(uVar14);
        func_0x0001000c74f0(&bStack_70);
        func_0x000107c61574(uVar14);
        lVar12 = CONCAT71(uStack_6f,bStack_70);
        if (lVar12 != 0) {
          FUN_1036d3288(1,0,1);
          func_0x000107c61170(uVar6);
          func_0x000107c615e8(uVar7);
LAB_1036d01a0:
          uVar14 = *(undefined8 *)(unaff_x20 + lVar9);
          func_0x000107c6157c(uVar14);
          func_0x000100075034(FUN_1036d3b50,0,PTR___sytN_11034f1b0 + 8);
          func_0x000107c61574(uVar14);
          return lVar12;
        }
        lVar12 = *(long *)(unaff_x20 + _DAT_112f87790);
        if ((lVar12 == 0) || (func_0x000107c49f7c(), (int)lVar12 == 0)) {
          func_0x000107c615e8(uVar7);
          func_0x000107c61170(uVar6);
          *(undefined1 *)(unaff_x20 + _DAT_112f87850) = 1;
          uVar14 = *(undefined8 *)(unaff_x20 + lVar9);
        }
        else {
          if ((*(byte *)(unaff_x20 + _DAT_112f87840) & 1) == 0) {
            *(undefined1 *)(unaff_x20 + _DAT_112f87840) = 1;
            uVar14 = 0;
            FUN_1036d3288(1,0,1);
            lVar11 = *(long *)(unaff_x20 + lVar11);
            if (lVar11 == 0) {
              func_0x000107c615e8(uVar7);
              func_0x000107c61170(uVar6);
              lVar12 = 0;
            }
            else {
              func_0x000100773b04();
              func_0x000107c61174();
              lVar13 = lVar11;
              func_0x000107c4b1dc();
              func_0x000107c61180();
              lVar12 = lVar13;
              func_0x000107c5faec();
              func_0x000107c61170(lVar13);
              uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f877f0);
              uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112f877f0))[1];
              uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f877f8);
              uVar4 = ((undefined8 *)(unaff_x20 + _DAT_112f877f8))[1];
              func_0x000107c6157c(uVar3);
              func_0x000107c6157c(uVar4);
              func_0x00010450db68(0,0,0,0,lVar12,uVar14,uVar1,uVar3,uVar2,uVar4);
              func_0x000107c61170(lVar11);
              func_0x000107c615e8(uVar7);
              func_0x000107c61170(uVar6);
            }
            goto LAB_1036d01a0;
          }
          func_0x000107c615e8(uVar7);
          func_0x000107c61170(uVar6);
          uVar14 = *(undefined8 *)(unaff_x20 + lVar9);
        }
        goto LAB_1036d0288;
      }
      *(undefined1 *)(unaff_x20 + _DAT_112f87850) = 1;
      FUN_1036d3288(0,0,1);
      func_0x000107c61170(uVar6);
      func_0x000107c615e8(uVar7);
    }
  }
LAB_1036d027c:
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112f877c0);
LAB_1036d0288:
  func_0x000107c6157c(uVar14);
  func_0x000100075034(FUN_1036d3b50,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar14);
  return 0;
}



/* Entry: 1036d03f8; end: 1036d045f; -[_TtC32SCLensPlusServicesImplementation22ImagineLensServiceImpl consumeActiveStateParams:] */

void FUN_1036d03f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1036cfe98(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1036d0460; end: 1036d0573;  */

/* WARNING: Possible PIC construction at 0x0001036d04c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d050c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036d04c8) */
/* WARNING: Removing unreachable block (ram,0x0001036d0510) */
/* WARNING: Removing unreachable block (ram,0x0001036d051c) */
/* WARNING: Removing unreachable block (ram,0x0001036d055c) */

void FUN_1036d0460(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c4b1dc();
  func_0x000107c61180();
  lVar1 = param_1;
  func_0x000107c5faec();
  lVar2 = param_2;
  func_0x000107c61170();
  func_0x000100773cf0();
  if ((lVar2 != 0) && ((lVar1 != param_1 || (lVar2 != param_2)))) {
    func_0x000107c605b8(lVar1,param_2,param_1,lVar2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1036d0574; end: 1036d05c3; -[_TtC32SCLensPlusServicesImplementation22ImagineLensServiceImpl willOpenLensForActiveStateCheck:] */

/* WARNING: Possible PIC construction at 0x0001036d05ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036d05b0) */

void FUN_1036d0574(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1036d0460(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1036d05c4; end: 1036d0803;  */

/* WARNING: Possible PIC construction at 0x0001036d06a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d06e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036d06a4) */
/* WARNING: Removing unreachable block (ram,0x0001036d06b0) */
/* WARNING: Removing unreachable block (ram,0x0001036d06e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d05c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  lVar1 = *(long *)(unaff_x20 + _DAT_112f87788);
  if (lVar1 == 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112f87830);
    if (lVar1 == 0) goto LAB_1036d06f0;
    lVar8 = 0;
    lVar9 = 0;
    lVar7 = param_3;
LAB_1036d0648:
    func_0x000107c4b1dc();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
    param_3 = lVar7;
    if (lVar8 != 0) {
      if ((lVar7 != 0) && (lVar9 != lVar2 || lVar8 != lVar7)) {
        func_0x000107c605b8(lVar9,lVar8,lVar2,lVar7,0);
      }
      goto code_r0x000107c6142c;
    }
  }
  else {
    func_0x000107c4b1dc();
    func_0x000107c61180();
    lVar9 = lVar1;
    func_0x000107c5faec();
    lVar7 = param_3;
    func_0x000107c61170(lVar1);
    lVar1 = *(long *)(unaff_x20 + _DAT_112f87830);
    lVar8 = param_3;
    if (lVar1 != 0) goto LAB_1036d0648;
  }
  lVar8 = param_3;
  if (lVar8 == 0) {
LAB_1036d06f0:
    lVar1 = *(long *)(unaff_x20 + _DAT_112f877c8);
    if (lVar1 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar1 != 0) {
        pcVar3 = "deselectImagineLens(after:)";
        func_0x0001000c10c0("deselectImagineLens(after:)");
        func_0x000107c61180();
        puVar4 = &UNK_1106819a8;
        func_0x000107c613fc(&UNK_1106819a8,0x18,7);
        func_0x000107c61614(puVar4 + 0x10);
        puVar5 = &UNK_110681db8;
        func_0x000107c613fc(&UNK_110681db8,0x20,7);
        *(undefined **)(puVar5 + 0x10) = puVar4;
        *(long *)(puVar5 + 0x18) = lVar1;
        pcStack_60 = FUN_1036d3dcc;
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0x42000000;
        puStack_70 = &UNK_1000f6b44;
        puStack_68 = &UNK_110681dd0;
        puStack_58 = puVar5;
        func_0x000107c60bc4(&puStack_80);
        puVar4 = puStack_58;
        func_0x000107c615f0(lVar1);
        func_0x000107c61574(puVar4);
        func_0x000107c4e528(param_1,pcVar3);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c615e8(lVar1);
        func_0x000107c615e8(pcVar3);
      }
    }
    return;
  }
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar8);
  return;
}



/* Entry: 1036d0804; end: 1036d0987;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d0804(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 auStack_68 [24];
  
  puVar3 = auStack_68;
  func_0x000107c61428(param_1 + 0x10,puVar3,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    return;
  }
  uVar1 = *(ulong *)(param_1 + _DAT_112f87788);
  if (uVar1 == 0) {
    uVar1 = *(ulong *)(param_1 + _DAT_112f87830);
    if (uVar1 != 0) {
      puVar5 = (undefined1 *)0x0;
      uVar6 = 0;
      puVar4 = puVar3;
      goto LAB_1036d08b0;
    }
  }
  else {
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar6 = uVar1;
    func_0x000107c5faec();
    puVar4 = puVar3;
    func_0x000107c61170(uVar1);
    uVar1 = *(ulong *)(param_1 + _DAT_112f87830);
    puVar5 = puVar3;
    if (uVar1 == 0) {
      if (puVar3 != (undefined1 *)0x0) goto LAB_1036d091c;
    }
    else {
LAB_1036d08b0:
      func_0x000107c4b1dc();
      func_0x000107c61180();
      uVar2 = uVar1;
      func_0x000107c5faec();
      func_0x000107c61170(uVar1);
      if (puVar5 == (undefined1 *)0x0) {
        if (puVar4 != (undefined1 *)0x0) {
          func_0x000107c6142c(puVar4);
          goto LAB_1036d0964;
        }
      }
      else {
        if (puVar4 == (undefined1 *)0x0) {
LAB_1036d091c:
          func_0x000107c61170(param_1);
          func_0x000107c6142c(puVar5);
          return;
        }
        if (uVar6 == uVar2 && puVar5 == puVar4) {
          func_0x000107c6142c(puVar5);
          func_0x000107c6142c(puVar4);
        }
        else {
          func_0x000107c605b8(uVar6,puVar5,uVar2,puVar4,0);
          func_0x000107c6142c(puVar5);
          func_0x000107c6142c(puVar4);
          if ((uVar6 & 1) == 0) goto LAB_1036d0964;
        }
      }
    }
  }
  func_0x000107c51c34(param_2);
LAB_1036d0964:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1036d0988; end: 1036d09bf; -[_TtC32SCLensPlusServicesImplementation22ImagineLensServiceImpl deselectImagineLensAfter:] */

void FUN_1036d0988(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_1036d05c4(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1036d09c0; end: 1036d0b1b;  */

/* WARNING: Possible PIC construction at 0x0001036d0a6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d0aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036d0a70) */
/* WARNING: Removing unreachable block (ram,0x0001036d0a7c) */
/* WARNING: Removing unreachable block (ram,0x0001036d0aa4) */
/* WARNING: Removing unreachable block (ram,0x0001036d0aac) */
/* WARNING: Removing unreachable block (ram,0x0001036d0ac0) */
/* WARNING: Removing unreachable block (ram,0x0001036d0afc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d09c0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f87788);
  if (lVar1 != 0) {
    func_0x000107c4b1dc();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5faec();
    lVar4 = param_2;
    func_0x000107c61170(lVar1);
    lVar1 = *(long *)(unaff_x20 + _DAT_112f87830);
    if (lVar1 != 0) {
      func_0x000107c4b1dc();
      func_0x000107c61180();
      lVar3 = lVar1;
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
      if (lVar2 != lVar3 || param_2 != lVar4) {
        func_0x000107c605b8(lVar2,param_2,lVar3,lVar4,0);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 1036d0b1c; end: 1036d0b43; -[_TtC32SCLensPlusServicesImplementation22ImagineLensServiceImpl handleImagineLensPreviewExit] */

void FUN_1036d0b1c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1036d09c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036d0b44; end: 1036d0c97;  */

/* WARNING: Possible PIC construction at 0x0001036d0c44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036d0c48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d0b44(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  func_0x000100773c70();
  if (((int)param_1 == 1) && (func_0x000100773cf0(), param_2 != 0)) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112f87760);
    func_0x000107c4b2f8();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      uVar3 = param_1;
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c3fa4c(lVar2);
      func_0x000107c61170(uVar3);
      puVar4 = &UNK_110681f98;
      func_0x000107c613fc(&UNK_110681f98,0x28,7);
      *(long *)(puVar4 + 0x10) = unaff_x20;
      *(undefined8 *)(puVar4 + 0x18) = param_1;
      *(long *)(puVar4 + 0x20) = param_2;
      func_0x000107c61174();
      func_0x0001001ca524(10,4,0x38,4,0,0,&UNK_10dbfb7f0,puVar4,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(puVar4);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 1036d0c98; end: 1036d0cff;  */

void FUN_1036d0c98(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x40) = param_2;
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1036d0d00;
  plVar1[9] = param_4;
  plVar1[10] = param_2;
  plVar1[8] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036d229c,0,0);
  return;
}



/* Entry: 1036d0d00; end: 1036d0db3;  */

void FUN_1036d0d00(long param_1)

{
  long *plVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar3 = *unaff_x22;
  lVar4 = *unaff_x22;
  *(long *)(lVar3 + 0x50) = param_1;
  *(long *)(lVar3 + 0x58) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x48));
  if (unaff_x20 == 0) {
    if (param_1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001036d0db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 8))();
      return;
    }
    plVar1 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(lVar3 + 0x60) = plVar1;
    *plVar1 = lVar4;
    plVar1[1] = (long)FUN_1036d0db4;
    lVar3 = *(long *)(lVar3 + 0x40);
    plVar1[4] = param_1;
    plVar1[5] = lVar3;
    pcVar2 = FUN_1036ce260;
  }
  else {
    pcVar2 = FUN_1036d0f88;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 1036d0db4; end: 1036d0e13;  */

void FUN_1036d0db4(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x68) = param_1;
  *(long *)(lVar2 + 0x70) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1036d0e14;
  }
  else {
    pcVar1 = (code *)0x1036d0fb8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1036d0e14; end: 1036d0f87;  */

void FUN_1036d0e14(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  lVar5 = *(long *)(unaff_x22 + 0x68);
  if (lVar5 == 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
    puVar1 = PTR_PTR_1126b0820;
    func_0x000107c61168();
    func_0x000107c4b184();
    func_0x000107c61180();
    func_0x000107c5e5dc();
    func_0x000107c61180();
    func_0x000107c61170();
    puVar2 = puVar1;
    func_0x000107c3ecc8();
    func_0x000107c61180();
    pcVar3 = "willEnterModularCamera()";
    func_0x0001000c10c0("willEnterModularCamera()");
    func_0x000107c61180();
    puVar4 = &UNK_110681fc0;
    func_0x000107c613fc(&UNK_110681fc0,0x20,7);
    puVar8 = (undefined8 *)(unaff_x22 + 0x10);
    *puVar8 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(puVar4 + 0x10) = uVar7;
    *(undefined **)(puVar4 + 0x18) = puVar2;
    *(code **)(unaff_x22 + 0x30) = FUN_1036d4030;
    *(undefined **)(unaff_x22 + 0x38) = puVar4;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x20) = &UNK_1000f6b44;
    *(undefined **)(unaff_x22 + 0x28) = &UNK_110681fd8;
    func_0x000107c60bc4(puVar8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
    func_0x000107c61174(uVar7);
    func_0x000107c61174(puVar2);
    func_0x000107c61574(uVar9);
    func_0x000107c4e524(pcVar3);
    func_0x000107c60bd0(puVar8);
    func_0x000107c615e8(pcVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(lVar5);
  }
  func_0x000107c61170(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001036d0f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1036d0f88; end: 1036d0ff3;  */

void FUN_1036d0f88(void)

{
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x0001036d0fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1036d0ff4; end: 1036d127b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d0ff4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112f87790);
  *(undefined8 *)(param_1 + _DAT_112f87790) = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61170(uVar3);
  if (*(char *)(param_1 + _DAT_112f87888) == '\x01') {
    lVar1 = *(long *)(param_1 + _DAT_112f87760);
    func_0x000107c4b2f8();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c4e718(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
      return;
    }
  }
  return;
}



/* Entry: 1036d127c; end: 1036d13d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d127c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_1130364e0;
  lVar5 = *(long *)(unaff_x20 + _DAT_112f87808);
  func_0x000107c61428(lVar5 + _DAT_1130364e0,auStack_58,0,0);
  lVar5 = lVar5 + lVar1;
  func_0x000107c61618();
  if (lVar5 != 0) {
    lVar1 = lVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar1 != 0) {
      lVar5 = lVar1;
      func_0x000107c4f060(lVar1);
      func_0x000107c61180();
      puVar2 = &UNK_1106819a8;
      func_0x000107c613fc(&UNK_1106819a8,0x18,7);
      func_0x000107c61614(puVar2 + 0x10);
      uStack_68 = 0x1036d3d5c;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_100b5fdac;
      puStack_70 = &UNK_110681d80;
      ppuVar3 = &puStack_88;
      puStack_60 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      func_0x000107c61574(puStack_60);
      lVar4 = lVar5;
      func_0x000107c5c320(lVar5);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(lVar5);
      func_0x000107c3e924(lVar4);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(lVar4);
    }
  }
  return;
}



/* Entry: 1036d13d4; end: 1036d146f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d13d4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112f87880);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_2);
    uStack_50 = param_1;
    func_0x000100075034(FUN_1036d3d64,auStack_60,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 1036d1470; end: 1036d16eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d1470(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_78 [24];
  
  puVar7 = auStack_78;
  func_0x000107c61428(param_2 + 0x10,puVar7,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    return;
  }
  uVar10 = *(undefined8 *)(param_2 + _DAT_112f87830);
  *(ulong *)(param_2 + _DAT_112f87830) = param_1;
  func_0x000107c61174();
  func_0x000107c61170(uVar10);
  uVar3 = param_1;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar6 = uVar3;
  func_0x000107c5faec();
  puVar8 = puVar7;
  func_0x000107c61170(uVar3);
  lVar1 = _DAT_112f87788;
  uVar3 = *(ulong *)(param_2 + _DAT_112f87788);
  if (uVar3 == 0) {
    func_0x000107c6142c(puVar7);
    puVar9 = puVar8;
LAB_1036d15dc:
    *(undefined1 *)(param_2 + _DAT_112f87850) = 0;
  }
  else {
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c5faec();
    puVar9 = puVar8;
    func_0x000107c61170(uVar3);
    if (uVar6 == uVar4 && puVar7 == puVar8) {
      func_0x000107c6142c(puVar7);
      func_0x000107c6142c(puVar8);
    }
    else {
      puVar9 = puVar7;
      func_0x000107c605b8(uVar6,puVar7,uVar4,puVar8,0);
      func_0x000107c6142c(puVar7);
      func_0x000107c6142c(puVar8);
      if ((uVar6 & 1) == 0) goto LAB_1036d15dc;
    }
    lVar2 = _DAT_112f87838;
    if ((*(char *)(param_2 + _DAT_112f87838) != '\x01') &&
       ((lVar5 = *(long *)(param_2 + _DAT_112f87790), lVar5 == 0 ||
        (func_0x000107c49f7c(), (int)lVar5 == 0)))) {
      *(undefined1 *)(param_2 + _DAT_112f87848) = 0;
      goto LAB_1036d15dc;
    }
    *(undefined1 *)(param_2 + lVar2) = 2;
  }
  lVar2 = _DAT_112f87838;
  if (*(char *)(param_2 + _DAT_112f87838) == '\x02') {
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar3 = param_1;
    func_0x000107c5faec();
    puVar7 = puVar9;
    func_0x000107c61170(param_1);
    uVar6 = *(ulong *)(param_2 + lVar1);
    if (uVar6 == 0) {
      func_0x000107c6142c(puVar9);
    }
    else {
      func_0x000107c4b1dc();
      func_0x000107c61180();
      uVar4 = uVar6;
      func_0x000107c5faec();
      func_0x000107c61170(uVar6);
      if ((uVar3 == uVar4) && (puVar9 == puVar7)) {
        func_0x000107c61170(param_2);
        func_0x000107c6142c(puVar9);
        func_0x000107c6142c(puVar7);
        return;
      }
      func_0x000107c605b8(uVar3,puVar9,uVar4,puVar7,0);
      func_0x000107c6142c(puVar9);
      func_0x000107c6142c(puVar7);
      if ((uVar3 & 1) != 0) goto LAB_1036d16c4;
    }
    *(undefined1 *)(param_2 + lVar2) = 0;
    *(undefined1 *)(param_2 + _DAT_112f87840) = 0;
  }
LAB_1036d16c4:
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1036d16ec; end: 1036d1853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d16ec(int param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  func_0x000100773c70();
  if (param_1 == 1) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112f87800);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5c6d8();
      func_0x000107c61180();
      pcVar3 = "setupCallStateObservation()";
      func_0x0001000c10c0("setupCallStateObservation()");
      func_0x000107c61180();
      lVar4 = lVar2;
      func_0x000107c4da88(lVar2);
      func_0x000107c61180();
      func_0x000107c615e8(pcVar3);
      puVar5 = &UNK_1106819a8;
      func_0x000107c613fc(&UNK_1106819a8,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      uStack_50 = 0x1036d3d4c;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_10104e6fc;
      puStack_58 = &UNK_110681ce0;
      puStack_48 = puVar5;
      func_0x000107c60bc4(&puStack_70);
      func_0x000107c61574(puStack_48);
      lVar7 = lVar4;
      func_0x000107c5c320(lVar4);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(lVar4);
      func_0x000107c3e924(lVar7);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar7);
    }
  }
  return;
}



/* Entry: 1036d1854; end: 1036d18eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d1854(long param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c40808();
    if (0 < param_1 != (bool)*(char *)(param_2 + _DAT_112f87858)) {
      *(bool *)(param_2 + _DAT_112f87858) = 0 < param_1;
      if (param_1 < 1) {
        func_0x0001036d19d8();
      }
      else {
        FUN_1036d18ec();
      }
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1036d18ec; end: 1036d1a67;  */

/* WARNING: Possible PIC construction at 0x0001036d1938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d1994: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036d193c) */
/* WARNING: Removing unreachable block (ram,0x0001036d1940) */
/* WARNING: Removing unreachable block (ram,0x0001036d19c4) */
/* WARNING: Removing unreachable block (ram,0x0001036d1950) */
/* WARNING: Removing unreachable block (ram,0x0001036d196c) */
/* WARNING: Removing unreachable block (ram,0x0001036d1984) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x0001036d1998) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d18ec(int param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000100773c70();
  if (param_1 == 1) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f87760);
    func_0x000107c4b2f8(uVar1);
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1036d1a68; end: 1036d1e83;  */

/* WARNING: Possible PIC construction at 0x0001036d1bc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036d1bc8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d1a68(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f877c8);
  if (lVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar4 = *(long *)(unaff_x20 + _DAT_112f87788);
      if (lVar4 != 0) {
        uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f87770);
        func_0x000107c61174();
        func_0x000107c4218c(uVar5);
        func_0x000107c4b2e0(lVar1);
        func_0x000107c61180();
        puVar2 = &UNK_1106819a8;
        func_0x000107c613fc(&UNK_1106819a8,0x18,7);
        func_0x000107c61614(puVar2 + 0x10);
        puVar3 = &UNK_110681ca0;
        func_0x000107c613fc(&UNK_110681ca0,0x30,7);
        *(undefined8 *)(puVar3 + 0x10) = param_1;
        *(undefined8 *)(puVar3 + 0x18) = param_2;
        *(undefined **)(puVar3 + 0x20) = puVar2;
        *(long *)(puVar3 + 0x28) = lVar4;
        uStack_70 = 0x1036d3d40;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_101218f4c;
        puStack_78 = &UNK_110681cb8;
        puStack_68 = puVar3;
        func_0x000107c60bc4(&puStack_90);
        puVar2 = puStack_68;
        func_0x000107c61174(lVar4);
        func_0x000100b64c10(param_1,param_2);
        func_0x000107c61574(puVar2);
        func_0x000107c5c320(lVar1);
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
      return;
    }
  }
  return;
}



/* Entry: 1036d1e84; end: 1036d1fa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d1e84(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f877c8);
  if (lVar2 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar1 = _DAT_112f87778;
    if (lVar2 != 0) {
      func_0x000107c4218c(*(undefined8 *)(unaff_x20 + _DAT_112f87778));
      lVar3 = lVar2;
      func_0x000107c4b2e0();
      func_0x000107c61180();
      puVar4 = &UNK_1106819a8;
      func_0x000107c613fc(&UNK_1106819a8,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      uStack_50 = 0x1036d3d38;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_101218f4c;
      puStack_58 = &UNK_110681c68;
      puStack_48 = puVar4;
      func_0x000107c60bc4(&puStack_70);
      func_0x000107c61574(puStack_48);
      lVar6 = lVar3;
      func_0x000107c5c320();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(lVar3);
      uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
      *(long *)(unaff_x20 + lVar1) = lVar6;
      func_0x000107c61170(uVar7);
    }
  }
  return;
}



/* Entry: 1036d1fa8; end: 1036d21d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d1fa8(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  puVar2 = (undefined *)(param_2 + 0x10);
  func_0x000107c61618();
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  uStack_50 = 0;
  uVar3 = 0;
  func_0x000100c70ba8(0);
  func_0x000107c5fc50(param_1,&uStack_50,uVar3);
  uVar4 = uStack_50;
  if (uStack_50 == 0) goto LAB_1036d21a8;
  uVar7 = uStack_50 & 0xffffffffffffff8;
  if (uStack_50 >> 0x3e == 0) {
    if (*(long *)(uVar7 + 0x10) != 0) goto LAB_1036d2020;
LAB_1036d20f8:
    func_0x000107c6142c(uVar4);
LAB_1036d2100:
    uVar3 = *(undefined8 *)(puVar2 + _DAT_112f877a8);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61174(uVar3);
    func_0x000107c45a48(puVar6);
    func_0x000107c4d664(uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar6);
    uVar3 = *(undefined8 *)(puVar2 + _DAT_112f877b0);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61174(uVar3);
  }
  else {
    uVar5 = uStack_50;
    if (-1 < (long)uStack_50) {
      uVar5 = uVar7;
    }
    func_0x000107c60480();
    if (uVar5 == 0) goto LAB_1036d20f8;
LAB_1036d2020:
    if ((uVar4 & 0xc000000000000001) == 0) {
      if (*(long *)(uVar7 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1036d21d4);
        (*pcVar1)();
      }
      uVar7 = *(ulong *)(uVar4 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar7 = 0;
      func_0x000100ff3f88(0,uVar4);
    }
    func_0x000107c6142c(uVar4);
    uVar4 = uVar7;
    func_0x000107c4a144();
    func_0x000107c61170(uVar7);
    if ((uVar4 & 1) == 0) goto LAB_1036d2100;
    uVar3 = *(undefined8 *)(puVar2 + _DAT_112f877a8);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61174(uVar3);
    func_0x000107c45a48(puVar6);
    func_0x000107c4d664(uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar6);
    uVar3 = *(undefined8 *)(puVar2 + _DAT_112f877b0);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61174(uVar3);
  }
  func_0x000107c45a48(puVar6);
  func_0x000107c4d664(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  puVar2 = puVar6;
LAB_1036d21a8:
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1036d21d4; end: 1036d227f; -[_TtC32SCLensPlusServicesImplementation22ImagineLensServiceImpl isImagineLens:] */

uint FUN_1036d21d4(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  func_0x000107c5faec();
  lVar2 = param_2;
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000100773cf0();
  if (lVar2 == 0) {
    func_0x000107c61170(param_1);
    uVar3 = 0;
  }
  else {
    if ((lVar1 == param_3) && (lVar2 == param_2)) {
      uVar3 = 1;
    }
    else {
      func_0x000107c605b8();
      uVar3 = (uint)lVar1;
    }
    func_0x000107c61170(param_1);
    func_0x000107c6142c(param_2);
    param_2 = lVar2;
  }
  func_0x000107c6142c(param_2);
  return uVar3 & 1;
}



/* Entry: 1036d2280; end: 1036d229b;  */

void FUN_1036d2280(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036d229c,0,0);
  return;
}



/* Entry: 1036d229c; end: 1036d252f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d229c(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x22;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  puVar1 = *(undefined1 **)(*(long *)(unaff_x22 + 0x50) + _DAT_112f87758);
  func_0x000107c3f770();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170();
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
    func_0x000107c41574();
    func_0x000107c61180();
    func_0x000107c615e8(puVar2);
    puVar2 = puVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    *(undefined1 **)(unaff_x22 + 0x58) = puVar2;
    func_0x000107c61170();
    if (puVar2 != (undefined1 *)0x0) {
      uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x40);
      func_0x0001000285a8(0x112f878c8,&UNK_10dbfb7b8);
      puVar5 = &UNK_110681ac0;
      func_0x000107c613fc(&UNK_110681ac0,0x30,7);
      *(undefined1 **)(puVar5 + 0x10) = puVar2;
      *(undefined8 *)(puVar5 + 0x18) = uVar12;
      *(undefined8 *)(puVar5 + 0x20) = uVar3;
      *(undefined8 *)(puVar5 + 0x28) = uVar9;
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar9);
      func_0x000107c615f0(puVar2);
      uVar3 = 0;
      func_0x0001048897a0(0,1,0,FUN_1036d38e8,puVar5);
      *(undefined8 *)(unaff_x22 + 0x60) = uVar3;
      func_0x000107c61574(puVar5);
      plVar4 = (long *)0x80;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x68) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_1036d2530;
                    /* WARNING: Could not recover jumptable at 0x0001036d2408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      FUN_1036d3b80();
      return;
    }
  }
  lVar10 = *(long *)(unaff_x22 + 0x50);
  FUN_1036d38a8();
  puVar5 = &UNK_110682080;
  func_0x000107c613f8(&UNK_110682080,puVar1,0,0);
  *puVar1 = 0;
  uVar9 = *(undefined8 *)(lVar10 + _DAT_112f87870);
  func_0x000107c614cc();
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  lVar7 = *(long *)(unaff_x22 + 0x20);
  func_0x000107c60640(uVar3);
  lVar10 = lVar7;
  func_0x000107c5fadc();
  func_0x000107c6142c();
  func_0x000100773cf0();
  if (lVar10 == 0) {
    lVar11 = 0;
    lVar10 = lVar7;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c();
    lVar11 = lVar7;
  }
  func_0x000100773c70();
  *(long *)(unaff_x22 + 0x30) = lVar10;
  puVar6 = PTR___sSiN_11034deb0;
  puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar8);
  func_0x000106bddd8c(uVar9,uVar3,lVar11,puVar6,0,1);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(uVar3);
  func_0x000107c614ac(puVar5);
                    /* WARNING: Could not recover jumptable at 0x0001036d252c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1036d2530; end: 1036d2583;  */

void FUN_1036d2530(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x70) = param_1;
  *(undefined1 *)(lVar1 + 0x78) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036d2584,0,0);
  return;
}



/* Entry: 1036d2584; end: 1036d263f;  */

void FUN_1036d2584(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x78) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x70);
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x38,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar3);
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x0001036d2610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c615e8(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001036d263c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Entry: 1036d2640; end: 1036d275b;  */

void FUN_1036d2640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c4b288(param_2);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  puVar1 = &UNK_1106819a8;
  func_0x000107c613fc(&UNK_1106819a8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_5);
  puVar2 = &UNK_110681b10;
  func_0x000107c613fc(&UNK_110681b10,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  uStack_40 = 0x1036d3d10;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1016c1d3c;
  puStack_48 = &UNK_110681b28;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c5dc64(param_2);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1036d275c; end: 1036d2bdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d275c(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 auStack_98 [2];
  undefined8 uStack_88;
  long lStack_80;
  
  if (param_2 == 0) {
    if (param_1 == 0) {
      func_0x000107c61428(param_3 + 0x10,&puStack_c8,0,0);
      puVar6 = (undefined1 *)(param_3 + 0x10);
      func_0x000107c61618();
      if (puVar6 != (undefined1 *)0x0) {
        puVar7 = puVar6;
        FUN_1036d38a8();
        puVar8 = &UNK_110682080;
        func_0x000107c613f8(&UNK_110682080,puVar7,0,0);
        *puVar7 = 1;
        uVar12 = *(undefined8 *)(puVar6 + _DAT_112f87870);
        func_0x000107c614cc();
        lVar13 = lStack_80;
        func_0x000107c60640(uStack_88);
        uVar9 = uStack_88;
        lVar11 = lVar13;
        func_0x000107c5fadc();
        func_0x000107c6142c();
        func_0x000100773cf0();
        if (lVar11 == 0) {
          lVar13 = 0;
        }
        else {
          func_0x000107c5fadc();
          func_0x000107c6142c();
        }
        func_0x000100773c70();
        puVar10 = PTR___sSiN_11034deb0;
        puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar4);
        func_0x000106bddd8c(uVar12,uVar9,lVar13,puVar10,0,1);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(lVar13);
        func_0x000107c61170(puVar10);
        func_0x000107c614ac(puVar8);
        func_0x000107c61170(puVar6);
      }
      auStack_98[0] = 0;
      func_0x000100b60084(auStack_98);
    }
    else {
      puVar8 = &UNK_110681b60;
      func_0x000107c613fc(&UNK_110681b60,0x20,7);
      *(long *)(puVar8 + 0x10) = param_3;
      *(undefined8 *)(puVar8 + 0x18) = param_4;
      puVar10 = &UNK_110681b88;
      func_0x000107c613fc(&UNK_110681b88,0x20,7);
      *(undefined8 *)(puVar10 + 0x10) = 0x1036d3d18;
      *(undefined **)(puVar10 + 0x18) = puVar8;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_a8 = (code *)0x1036d3d20;
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0x42000000;
      puStack_b8 = &UNK_100fe2610;
      puStack_b0 = &UNK_110681ba0;
      ppuVar2 = &puStack_c8;
      puStack_a0 = puVar10;
      func_0x000107c60bc4(ppuVar2);
      puVar10 = puStack_a0;
      func_0x000107c61174(param_1);
      func_0x000107c6157c(param_3);
      func_0x000107c6157c(param_4);
      func_0x000107c61574(puVar10);
      pcStack_a8 = FUN_1036ce198;
      puStack_a0 = (undefined *)0x0;
      puStack_c8 = puVar1;
      uStack_c0 = 0x42000000;
      puStack_b8 = &UNK_100de6bdc;
      puStack_b0 = &UNK_110681bc8;
      ppuVar3 = &puStack_c8;
      func_0x000107c60bc4(ppuVar3);
      func_0x000107c61574(puStack_a0);
      puVar10 = &UNK_110681c00;
      func_0x000107c613fc(&UNK_110681c00,0x20,7);
      *(long *)(puVar10 + 0x10) = param_3;
      *(undefined8 *)(puVar10 + 0x18) = param_4;
      puVar4 = &UNK_110681c28;
      func_0x000107c613fc(&UNK_110681c28,0x20,7);
      *(undefined8 *)(puVar4 + 0x10) = 0x1036d3d28;
      *(undefined **)(puVar4 + 0x18) = puVar10;
      pcStack_a8 = (code *)0x1036d3d30;
      puStack_c8 = puVar1;
      uStack_c0 = 0x42000000;
      puStack_b8 = &UNK_100fe2654;
      puStack_b0 = &UNK_110681c40;
      ppuVar5 = &puStack_c8;
      puStack_a0 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      puVar4 = puStack_a0;
      func_0x000107c6157c(param_3);
      func_0x000107c6157c(param_4);
      func_0x000107c61574(puVar4);
      func_0x000107c4c744(param_1);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c60bd0(ppuVar2);
      func_0x000107c61574(puVar10);
      func_0x000107c61574(puVar8);
      func_0x000107c61170(param_1);
    }
  }
  else {
    func_0x000107c61428(param_3 + 0x10,&puStack_c8,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 == 0) {
      func_0x000107c614b0(param_2);
    }
    else {
      uVar12 = *(undefined8 *)(param_3 + _DAT_112f87870);
      func_0x000107c614cc(param_2,auStack_d0,auStack_e8);
      func_0x000107c614b0(param_2);
      lVar13 = lStack_d8;
      func_0x000107c60640(uStack_e0);
      uVar9 = uStack_e0;
      lVar11 = lVar13;
      func_0x000107c5fadc();
      func_0x000107c6142c();
      func_0x000100773cf0();
      if (lVar11 == 0) {
        lVar13 = 0;
      }
      else {
        func_0x000107c5fadc();
        func_0x000107c6142c();
      }
      func_0x000100773c70();
      puVar8 = PTR___sSiN_11034deb0;
      puVar10 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar10);
      func_0x000106bddd8c(uVar12,uVar9,lVar13,puVar8,0,1);
      func_0x000107c61170(param_3);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(lVar13);
      func_0x000107c61170(puVar8);
    }
    func_0x00010488ade0(param_2);
    func_0x000107c614ac(param_2);
  }
  return;
}



/* Entry: 1036d2be0; end: 1036d31b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d2be0(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puStack_70;
  undefined1 auStack_68 [24];
  
  puVar6 = auStack_68;
  func_0x000107c61428(param_3 + 0x10,puVar6,0,0);
  puVar1 = (undefined1 *)(param_3 + 0x10);
  func_0x000107c61618();
  if (puVar1 != (undefined1 *)0x0) {
    uVar5 = *(undefined8 *)(puVar1 + _DAT_112f87870);
    puVar2 = puVar1;
    func_0x000100773cf0();
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = (undefined1 *)0x0;
      puStack_70 = puVar2;
    }
    else {
      func_0x000107c5fadc();
      func_0x000107c6142c();
      puStack_70 = puVar6;
      puVar6 = puVar2;
    }
    func_0x000100773c70();
    puVar3 = PTR___sSiN_11034deb0;
    puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar4);
    func_0x000106bddd8c(uVar5,0,puVar6,puVar3,1,1);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar3);
  }
  puStack_70 = param_1;
  func_0x000107c61174(param_1);
  func_0x000100b60084(&puStack_70);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1036d31b4; end: 1036d320f;  */

void FUN_1036d31b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c4e718(param_1,param_2,param_2);
  func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_1036d127c();
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1036d3210; end: 1036d3287;  */

void FUN_1036d3210(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4d664(*(undefined8 *)(param_1 + *param_3));
    FUN_1036d1e84();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1036d3288; end: 1036d3427;  */

/* WARNING: Possible PIC construction at 0x0001036d334c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d33d8: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d3288(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126e22e8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = puVar1;
  func_0x000100773c70();
  if (((int)puVar2 == 1) || (*(int *)(unaff_x20 + _DAT_112f87860) - 2U < 3)) {
    func_0x000107c545fc(puVar1);
  }
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112f87788);
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c556bc(puVar1);
    func_0x000107c59558(puVar1);
    func_0x000107c59560(puVar1);
    if (param_3 != '\x01') {
      func_0x000107c55e78(puVar1);
    }
    puVar2 = *(undefined **)(unaff_x20 + _DAT_112f87818);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (puVar2 != (undefined *)0x0) {
      puVar3 = puVar2;
      func_0x000107c4b3f8();
      func_0x000107c61180();
      func_0x000107c615e8(puVar2);
      if (puVar3 != (undefined *)0x0) {
        func_0x000107c55e70(puVar1);
        puVar1 = puVar3;
        goto code_r0x000107c61170;
      }
    }
    lVar4 = *(long *)(unaff_x20 + _DAT_112f87810);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      func_0x000107c4bfb0();
      func_0x000107c615e8(lVar4);
    }
  }
  else {
    func_0x000107c4b1dc();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    func_0x000107c549e0(puVar1);
    puVar1 = puVar2;
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1036d3428; end: 1036d3483; -[_TtC32SCLensPlusServicesImplementation22ImagineLensServiceImpl init] */

void FUN_1036d3428(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensPlusServicesImplementation.ImagineLensServiceImpl",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036d3454);
  (*pcVar1)();
}



/* Entry: 1036d3484; end: 1036d3697; -[_TtC32SCLensPlusServicesImplementation22ImagineLensServiceImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036d34a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d3580: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d35b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d35d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d3628: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d367c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036d362c) */
/* WARNING: Removing unreachable block (ram,0x0001036d35dc) */
/* WARNING: Removing unreachable block (ram,0x0001036d35b4) */
/* WARNING: Removing unreachable block (ram,0x0001036d3584) */
/* WARNING: Removing unreachable block (ram,0x0001036d34a4) */
/* WARNING: Removing unreachable block (ram,0x0001036d3680) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d3484(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f87750));
  return;
}



/* Entry: 1036d3698; end: 1036d37ef;  */

int FUN_1036d3698(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1036d3714;
        goto LAB_1036d36f8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1036d36f8:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1036d3714:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1036d37f0; end: 1036d389b;  */

void FUN_1036d37f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f878b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbfb78c;
  func_0x000107c61520(&UNK_10dbfb78c,&UNK_110681988);
  puRam0000000112f878b8 = puVar1;
  return;
}



/* Entry: 1036d389c; end: 1036d38a7;  */

void FUN_1036d389c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c4e718(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1036d127c();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1036d38a8; end: 1036d38e7;  */

void FUN_1036d38a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f878c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbfb900;
  func_0x000107c61520(&UNK_10dbfb900,&UNK_110682080);
  puRam0000000112f878c0 = puVar1;
  return;
}



/* Entry: 1036d38e8; end: 1036d38f3;  */

void FUN_1036d38e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  ppuVar6 = &puStack_60;
  func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c4b288(uVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  puVar4 = &UNK_1106819a8;
  func_0x000107c613fc(&UNK_1106819a8,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,uVar1);
  puVar5 = &UNK_110681b10;
  func_0x000107c613fc(&UNK_110681b10,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  uStack_40 = 0x1036d3d10;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1016c1d3c;
  puStack_48 = &UNK_110681b28;
  puStack_38 = puVar5;
  func_0x000107c60bc4(&puStack_60);
  puVar4 = puStack_38;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(puVar4);
  func_0x000107c5dc64(uVar3);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 1036d38f4; end: 1036d39a3;  */

void FUN_1036d38f4(void)

{
  byte bVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690((ulong)bVar1 + 1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1036d39a4; end: 1036d39d3;  */

void FUN_1036d39a4(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 2) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 1) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1036d39d4; end: 1036d39fb;  */

void FUN_1036d39d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0001036d41d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorP10FoundationAC13CustomNSErrorRzrlE7_domainSSvg_110351348)(param_1,uVar1);
  return;
}



/* Entry: 1036d39fc; end: 1036d3a43;  */

void FUN_1036d39fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x0001036d41d4();
  uVar2 = uVar1;
  func_0x0001036d4214();
  uVar3 = uVar2;
  func_0x000100e2203c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss5ErrorP10FoundationAC13CustomNSErrorRzSYRzs17FixedWidthInteger8RawValueSYRpzrlE5_codeSivg_110351338
  )(param_1,uVar1,uVar2,uVar3);
  return;
}



/* Entry: 1036d3a44; end: 1036d3a77;  */

void FUN_1036d3a44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE9_userInfoyXlSgvg_11034ee00)();
  return;
}



/* Entry: 1036d3a78; end: 1036d3b4f;  */

long FUN_1036d3a78(void)

{
  undefined8 uVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  char *unaff_x20;
  undefined1 auStack_80 [80];
  
  puVar6 = auStack_80;
  uVar1 = 0xd000000000000022;
  pcVar2 = "willEnterModularCamera()";
  if (*unaff_x20 != '\x01') {
    uVar1 = 0xd00000000000001c;
    pcVar2 = "ture_not_available";
  }
  lVar3 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  uVar4 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  *(undefined **)(lVar3 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar3 + 0x28) = puVar6;
  *(undefined8 *)(lVar3 + 0x30) = uVar1;
  *(ulong *)(lVar3 + 0x38) = (ulong)pcVar2 | 0x8000000000000000;
  lVar5 = lVar3;
  func_0x000100214a84(lVar3);
  func_0x000107c61588(lVar3);
  func_0x000100f15a0c((undefined8 *)(lVar3 + 0x20));
  return lVar5;
}



/* Entry: 1036d3b50; end: 1036d3b7f;  */

void FUN_1036d3b50(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
  *param_1 = 0;
  return;
}



/* Entry: 1036d3b80; end: 1036d3b97;  */

void FUN_1036d3b80(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036d3b98,0,0);
  return;
}



/* Entry: 1036d3b98; end: 1036d3c5f;  */

void FUN_1036d3b98(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x0001036d3be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1036d3c60;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110681ae8;
  func_0x000107c613fc(&UNK_110681ae8,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,FUN_1036d3cb0,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1036d3c60; end: 1036d3c9f;  */

void FUN_1036d3c60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036d3ca0,0,0);
  return;
}



/* Entry: 1036d3ca0; end: 1036d3caf;  */

void FUN_1036d3ca0(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001036d3cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 1036d3cb0; end: 1036d3cfb;  */

void FUN_1036d3cb0(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  FUN_1036d3cfc(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 1036d3cfc; end: 1036d3d63;  */

void FUN_1036d3cfc(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_11034f320)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1036d3d64; end: 1036d3d93;  */

void FUN_1036d3d64(undefined1 *param_1)

{
  undefined1 uVar1;
  long unaff_x20;
  
  uVar1 = (undefined1)*(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c3ebcc();
  *param_1 = uVar1;
  return;
}



/* Entry: 1036d3d94; end: 1036d3dcb;  */

void FUN_1036d3d94(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1036d3dcc; end: 1036d3ddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d3dcc(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar5 = auStack_68;
  func_0x000107c61428(lVar2 + 0x10,puVar5,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  uVar3 = *(ulong *)(lVar2 + _DAT_112f87788);
  if (uVar3 == 0) {
    uVar3 = *(ulong *)(lVar2 + _DAT_112f87830);
    if (uVar3 != 0) {
      puVar7 = (undefined1 *)0x0;
      uVar8 = 0;
      puVar6 = puVar5;
      goto LAB_1036d08b0;
    }
  }
  else {
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar8 = uVar3;
    func_0x000107c5faec();
    puVar6 = puVar5;
    func_0x000107c61170(uVar3);
    uVar3 = *(ulong *)(lVar2 + _DAT_112f87830);
    puVar7 = puVar5;
    if (uVar3 == 0) {
      if (puVar5 != (undefined1 *)0x0) goto LAB_1036d091c;
    }
    else {
LAB_1036d08b0:
      func_0x000107c4b1dc();
      func_0x000107c61180();
      uVar4 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170(uVar3);
      if (puVar7 == (undefined1 *)0x0) {
        if (puVar6 != (undefined1 *)0x0) {
          func_0x000107c6142c(puVar6);
          goto LAB_1036d0964;
        }
      }
      else {
        if (puVar6 == (undefined1 *)0x0) {
LAB_1036d091c:
          func_0x000107c61170(lVar2);
          func_0x000107c6142c(puVar7);
          return;
        }
        if (uVar8 == uVar4 && puVar7 == puVar6) {
          func_0x000107c6142c(puVar7);
          func_0x000107c6142c(puVar6);
        }
        else {
          func_0x000107c605b8(uVar8,puVar7,uVar4,puVar6,0);
          func_0x000107c6142c(puVar7);
          func_0x000107c6142c(puVar6);
          if ((uVar8 & 1) == 0) goto LAB_1036d0964;
        }
      }
    }
  }
  func_0x000107c51c34(uVar1);
LAB_1036d0964:
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 1036d3de0; end: 1036d3e23;  */

void FUN_1036d3de0(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61170(*param_1);
  *param_1 = uVar1;
  func_0x000107c61174(uVar1);
  return;
}



/* Entry: 1036d3e24; end: 1036d3e2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d3e24(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar6 = auStack_58;
  func_0x000107c61428(unaff_x20 + 0x10,puVar6,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000100773cf0();
    if (puVar6 != (undefined1 *)0x0) {
      puVar3 = &UNK_1106819a8;
      func_0x000107c613fc(&UNK_1106819a8,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,lVar1);
      puVar4 = &UNK_110681e80;
      func_0x000107c613fc(&UNK_110681e80,0x28,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(long *)(puVar4 + 0x18) = lVar2;
      *(undefined1 **)(puVar4 + 0x20) = puVar6;
      uVar5 = 10;
      func_0x0001001ca524(10,4,0x38,4,0,0,&UNK_10dbfb7d8,puVar4,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(uVar5);
    }
    lVar2 = _DAT_112f87780;
    func_0x000107c4218c(*(undefined8 *)(lVar1 + _DAT_112f87780));
    uVar5 = *(undefined8 *)(lVar1 + lVar2);
    *(undefined8 *)(lVar1 + lVar2) = 0;
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar5);
  }
  return;
}



/* Entry: 1036d3e2c; end: 1036d3e97;  */

void FUN_1036d3e2c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1036d431c;
  plVar3[6] = lVar2;
  plVar3[7] = lVar4;
  plVar3[5] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036ce8d0,0,0);
  return;
}



/* Entry: 1036d3e98; end: 1036d3ea3;  */

void FUN_1036d3e98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar5 = &puStack_70;
  puVar3 = &UNK_1106819a8;
  func_0x000107c613fc(&UNK_1106819a8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,uVar2);
  puVar4 = &UNK_110681ed0;
  func_0x000107c613fc(&UNK_110681ed0,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  pcStack_50 = FUN_1036d3ee4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101286f34;
  puStack_58 = &UNK_110681ee8;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c6157c(param_1);
  func_0x000107c61174(uVar6);
  func_0x000107c61574(puVar3);
  func_0x000107c5dc64(uVar1);
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 1036d3ea4; end: 1036d3ee3;  */

void FUN_1036d3ea4(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1036d3ee4; end: 1036d3eef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d3ee4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 in_x6;
  undefined8 in_x7;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 auStack_68 [3];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  if (param_2 == 0) {
    auStack_68[0] = uVar6;
    func_0x000107c61174(uVar6,0,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
    func_0x000100b60084(auStack_68);
    func_0x000107c61170(uVar6);
  }
  else {
    func_0x000107c61428(lVar1 + 0x10,auStack_68,0,0);
    lVar1 = lVar1 + 0x10;
    func_0x000107c61618();
    if (lVar1 == 0) {
      func_0x000107c614b0(param_2);
    }
    else {
      uVar7 = *(undefined8 *)(lVar1 + _DAT_112f87870);
      func_0x000107c614cc(param_2,auStack_70,auStack_88);
      func_0x000107c614b0(param_2);
      lVar2 = lStack_78;
      func_0x000107c60640(uStack_80);
      uVar6 = uStack_80;
      lVar3 = lVar2;
      func_0x000107c5fadc();
      func_0x000107c6142c();
      func_0x000100773cf0();
      if (lVar3 == 0) {
        lVar8 = 0;
        lVar3 = lVar2;
      }
      else {
        func_0x000107c5fadc();
        func_0x000107c6142c();
        lVar8 = lVar2;
      }
      func_0x000100773c70();
      puVar4 = PTR___sSiN_11034deb0;
      puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar5);
      func_0x000106bddd8c(uVar7,uVar6,lVar8,puVar4,0,1,in_x6,in_x7,lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(lVar8);
      func_0x000107c61170(puVar4);
    }
    func_0x00010488ade0(param_2);
    func_0x000107c614ac(param_2);
  }
  return;
}



/* Entry: 1036d3ef0; end: 1036d3f1b;  */

void FUN_1036d3ef0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1036d3f1c; end: 1036d3f87;  */

void FUN_1036d3f1c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1036d3f88;
  plVar3[6] = lVar2;
  plVar3[7] = lVar4;
  plVar3[5] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036ce8d0,0,0);
  return;
}



/* Entry: 1036d3f88; end: 1036d3fc3;  */

void FUN_1036d3f88(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001036d3fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1036d3fc4; end: 1036d402f;  */

void FUN_1036d3fc4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x1036d4320;
  plVar4[8] = lVar1;
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  plVar4[9] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_1036d0d00;
  plVar3[9] = lVar5;
  plVar3[10] = lVar1;
  plVar3[8] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036d229c,0,0);
  return;
}



/* Entry: 1036d4030; end: 1036d4193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d4030(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(lVar3 + _DAT_112f87790);
  *(undefined8 *)(lVar3 + _DAT_112f87790) = uVar1;
  func_0x000107c61174(uVar1);
  func_0x000107c61170(uVar4);
  if (*(char *)(lVar3 + _DAT_112f87888) == '\x01') {
    lVar2 = *(long *)(lVar3 + _DAT_112f87760);
    func_0x000107c4b2f8();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      func_0x000107c4e718(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
      return;
    }
  }
  return;
}



/* Entry: 1036d4194; end: 1036d4253;  */

void FUN_1036d4194(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f878d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbfb8d8;
  func_0x000107c61520(&UNK_10dbfb8d8,&UNK_110682080);
  puRam0000000112f878d0 = puVar1;
  return;
}



/* Entry: 1036d4254; end: 1036d42df;  */

undefined1 FUN_1036d4254(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 1036d42e0; end: 1036d431b;  */

void FUN_1036d42e0(void)

{
  FUN_1036d3de0();
  return;
}



/* Entry: 1036d431c; end: 1036d4323;  */

void FUN_1036d431c(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001036d3fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1036d4324; end: 1036d43fb;  */

void FUN_1036d4324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_7;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x78) = param_14;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x88) = param_16;
  *(undefined8 *)(unaff_x20 + 0x80) = param_15;
  *(undefined8 *)(unaff_x20 + 0x90) = param_20;
  *(undefined8 *)(unaff_x20 + 0x98) = param_19;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_17;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_18;
  return;
}



/* Entry: 1036d43fc; end: 1036d45d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d43fc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x000107c61174();
    func_0x000107c61574(param_1);
    lVar1 = *(long *)(lVar2 + _DAT_1130385c0);
    func_0x000107c61174();
    func_0x000107c61170(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c403cc();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      if (lVar1 != 0) {
        func_0x000107c3f2f8(lVar1);
        func_0x000107c61180();
        func_0x000107c61170(lVar1);
      }
    }
  }
  return;
}



/* Entry: 1036d45d8; end: 1036d48e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d45d8(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 uStack_89;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    lVar11 = 0;
    ppuVar14 = (undefined **)0x0;
  }
  else {
    uVar13 = *(undefined8 *)(*(long *)(param_2 + 0x18) + _DAT_1130385c0);
    uVar3 = *(undefined8 *)(param_2 + 0x70);
    uVar4 = *(undefined8 *)(param_2 + 0x78);
    uVar19 = *(undefined8 *)(param_2 + 0x80);
    uVar5 = *(undefined8 *)(param_2 + 0x60);
    uVar2 = *(undefined8 *)(param_2 + 0x68);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c4af30();
    func_0x000107c61180();
    uVar7 = *(undefined8 *)(param_2 + 0x30);
    uVar6 = *(undefined8 *)(*(long *)(param_2 + 0x28) + _DAT_113036498);
    uVar16 = *(undefined8 *)(param_2 + 0x50);
    func_0x000107c6157c();
    func_0x000107c61174();
    func_0x000107c4b028();
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(param_2 + 0x88);
    uVar20 = *(undefined8 *)(*(long *)(param_2 + 0x28) + _DAT_113036458);
    uVar21 = *(undefined8 *)(*(long *)(param_2 + 0x28) + _DAT_113036468);
    uVar17 = *(undefined8 *)(param_2 + 0xa0);
    func_0x000107c61174();
    func_0x000107c6157c(uVar20);
    func_0x000107c6157c(uVar21);
    func_0x000107c5c848();
    func_0x000107c61180();
    uVar18 = *(undefined8 *)(param_2 + 0xa8);
    uVar15 = *(undefined8 *)(param_2 + 0x90);
    uVar22 = *(undefined8 *)(param_2 + 0x98);
    uVar23 = *(undefined8 *)(*(long *)(param_2 + 0x10) + _DAT_113082470);
    lVar9 = 0;
    FUN_1036ce12c();
    lVar11 = lVar9;
    func_0x000107c610f8();
    *(undefined8 *)(lVar11 + _DAT_112f87710) = uVar15;
    *(undefined8 *)(lVar11 + _DAT_112f87718) = uVar22;
    *(undefined8 *)(lVar11 + _DAT_112f87720) = uVar23;
    puVar1 = PTR_s_init_1125d9248;
    lStack_88 = lVar11;
    lStack_80 = lVar9;
    func_0x000107c61174();
    func_0x000107c61174(uVar15);
    func_0x000107c61174(uVar22);
    plVar10 = &lStack_88;
    func_0x000107c61154(plVar10,puVar1);
    lVar9 = 0;
    func_0x0001036c9f18();
    func_0x000107c613fc();
    *(undefined8 *)(lVar9 + 0x10) = uVar8;
    uVar15 = *(undefined8 *)(*(long *)(param_2 + 0x58) + _DAT_113083868);
    uVar22 = *(undefined8 *)(*(long *)(param_2 + 0x10) + _DAT_113082470);
    lVar11 = 0;
    func_0x0001036c5efc();
    func_0x000107c613fc();
    uStack_89 = 0;
    func_0x0001000285a8(0x112d382e0,&UNK_10d91a6b0);
    func_0x000107c613fc();
    func_0x000107c61174();
    puVar12 = &uStack_89;
    func_0x00010006c248();
    *(undefined8 *)(lVar11 + 0xb0) = 0;
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    *(undefined8 *)(lVar11 + 0x18) = uVar2;
    *(undefined8 *)(lVar11 + 0x20) = uVar3;
    *(undefined8 *)(lVar11 + 0x28) = uVar4;
    *(undefined8 *)(lVar11 + 0x30) = uVar19;
    *(undefined8 *)(lVar11 + 0x38) = uVar5;
    *(undefined8 *)(lVar11 + 0x40) = uVar6;
    *(undefined8 *)(lVar11 + 0x48) = uVar7;
    *(undefined8 *)(lVar11 + 0x50) = uVar16;
    *(long *)(lVar11 + 0x58) = lVar9;
    *(undefined ***)(lVar11 + 0x60) = &PTR_DAT_110681250;
    *(undefined8 *)(lVar11 + 0x68) = uVar20;
    *(undefined8 *)(lVar11 + 0x70) = uVar21;
    *(long **)(lVar11 + 0x78) = plVar10;
    *(undefined ***)(lVar11 + 0x80) = &PTR_DAT_1106818f8;
    *(undefined8 *)(lVar11 + 0x88) = uVar17;
    *(undefined8 *)(lVar11 + 0x90) = uVar18;
    *(undefined8 *)(lVar11 + 0x98) = uVar15;
    *(undefined8 *)(lVar11 + 0xa0) = uVar22;
    *(undefined1 **)(lVar11 + 0xa8) = puVar12;
    func_0x000107c61574(param_2);
    ppuVar14 = &PTR_DAT_1106809a0;
  }
  *param_1 = lVar11;
  param_1[1] = (long)ppuVar14;
  return;
}



/* Entry: 1036d48e4; end: 1036d4937;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1036d48e4(void)

{
  long lVar1;
  long unaff_x20;
  
  if ((*(int *)(*(long *)(unaff_x20 + 0x10) + _DAT_113082430) != 3) &&
     (lVar1 = *(long *)(unaff_x20 + 0xb0), lVar1 != 0)) {
    func_0x000107c61174();
    func_0x0001036d10a8();
    func_0x000107c61170(lVar1);
  }
  return 0;
}



/* Entry: 1036d4938; end: 1036d4ac7;  */

/* WARNING: Possible PIC construction at 0x0001036d4944: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d4954: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d4964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d4974: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d4984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d4994: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d49a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d49b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d49c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d49d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036d49c8) */
/* WARNING: Removing unreachable block (ram,0x0001036d49b8) */
/* WARNING: Removing unreachable block (ram,0x0001036d49a8) */
/* WARNING: Removing unreachable block (ram,0x0001036d4998) */
/* WARNING: Removing unreachable block (ram,0x0001036d4988) */
/* WARNING: Removing unreachable block (ram,0x0001036d4978) */
/* WARNING: Removing unreachable block (ram,0x0001036d4968) */
/* WARNING: Removing unreachable block (ram,0x0001036d4958) */
/* WARNING: Removing unreachable block (ram,0x0001036d4948) */
/* WARNING: Removing unreachable block (ram,0x0001036d49d8) */

void FUN_1036d4938(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1036d4ac8; end: 1036d4aeb;  */

void FUN_1036d4ac8(undefined8 *param_1,undefined8 param_2)

{
  func_0x0001007739a4();
  *param_1 = param_2;
  return;
}



/* Entry: 1036d4aec; end: 1036d4b03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d4aec(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + 0x18);
    func_0x000107c61174();
    func_0x000107c61574(lVar1);
    lVar2 = *(long *)(lVar3 + _DAT_1130385c0);
    func_0x000107c61174();
    func_0x000107c61170(lVar3);
    lVar1 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      lVar3 = lVar1;
      func_0x000107c403cc();
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      if (lVar3 != 0) {
        func_0x000107c3f2f8(lVar3);
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
      }
    }
  }
  return;
}



/* Entry: 1036d4b04; end: 1036d4b13; -[_TtC32SCLensPlusServicesImplementation36ImagineLensSourceRectDismissAnimator transitionDuration:] */

undefined8 FUN_1036d4b04(void)

{
  return 0x3fc3333333333333;
}



/* Entry: 1036d4b14; end: 1036d4dd7;  */

/* WARNING: Possible PIC construction at 0x0001036d4bd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d4d90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036d4bd8) */
/* WARNING: Removing unreachable block (ram,0x0001036d4d94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d4b14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  
  puVar3 = param_5;
  func_0x000107c403bc();
  func_0x000107c61180();
  puVar4 = param_5;
  func_0x000107c5ded8();
  func_0x000107c61180();
  if (puVar4 == (undefined8 *)0x0) {
    func_0x000107c3fef0(param_5);
  }
  else {
    func_0x000107c3ec60(puVar3);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f87a70);
    puVar5 = puVar1 + 4;
    func_0x000107c61618();
    if (puVar5 == (undefined8 *)0x0) {
      uVar9 = *(undefined8 *)PTR__CGRectNull_1103475e8;
      uVar10 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 8);
      uVar11 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x10);
      uVar12 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x18);
      FUN_1036d6074(uVar9,uVar10,uVar11,uVar12);
      bVar8 = (byte)puVar5;
      if (((ulong)puVar5 & 1) == 0) {
        bVar8 = 0;
      }
      else {
        FUN_1036d6074(param_1,param_2,param_3,param_4);
      }
      puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
      puVar7 = &UNK_1106821b8;
      func_0x000107c613fc(&UNK_1106821b8,0x60,7);
      puVar7[0x10] = bVar8 & 1;
      *(undefined8 **)(puVar7 + 0x18) = puVar4;
      *(undefined8 *)(puVar7 + 0x20) = uVar9;
      *(undefined8 *)(puVar7 + 0x28) = uVar10;
      *(undefined8 *)(puVar7 + 0x30) = uVar11;
      *(undefined8 *)(puVar7 + 0x38) = uVar12;
      *(undefined8 *)(puVar7 + 0x40) = param_1;
      *(undefined8 *)(puVar7 + 0x48) = param_2;
      *(undefined8 *)(puVar7 + 0x50) = param_3;
      *(undefined8 *)(puVar7 + 0x58) = param_4;
      puVar2 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_a0 = FUN_1036d50b0;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      puStack_b0 = &UNK_1000f6b44;
      puStack_a8 = &UNK_1106821d0;
      puStack_98 = puVar7;
      func_0x000107c60bc4(&puStack_c0);
      puVar7 = puStack_98;
      func_0x000107c61174();
      func_0x000107c61574(puVar7);
      puVar7 = &UNK_110682208;
      func_0x000107c613fc(&UNK_110682208,0x20,7);
      *(undefined8 **)(puVar7 + 0x10) = puVar4;
      *(undefined8 **)(puVar7 + 0x18) = param_5;
      pcStack_a0 = FUN_1036d50e8;
      puStack_c0 = puVar2;
      uStack_b8 = 0x42000000;
      puStack_b0 = &UNK_100288f10;
      puStack_a8 = &UNK_110682220;
      puStack_98 = puVar7;
      func_0x000107c60bc4(&puStack_c0);
      puVar7 = puStack_98;
      func_0x000107c61174(puVar4);
      func_0x000107c615f0(param_5);
      func_0x000107c61574(puVar7);
      func_0x000107c3dcd4(0x3fc3333333333333,0,puVar6);
    }
    else {
      func_0x000107c40734(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar3);
      puVar3 = puVar5;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1036d4dd8; end: 1036d4fd7;  */

/* WARNING: Possible PIC construction at 0x0001036d4f44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036d4f48) */

void FUN_1036d4dd8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  ulong param_9,undefined8 param_10)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_90 [48];
  
  if ((param_9 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    dVar2 = param_5;
    func_0x000107c609cc(param_5,param_6,param_7,param_8);
    if ((0.0 < dVar2) &&
       (dVar2 = param_5, func_0x000107c609b0(param_5,param_6,param_7,param_8), 0.0 < dVar2)) {
      dVar2 = param_1;
      func_0x000107c609cc(param_1,param_2,param_3,param_4);
      dVar3 = param_5;
      func_0x000107c609cc(param_5,param_6,param_7,param_8);
      dVar4 = param_1;
      func_0x000107c609b0(param_1,param_2,param_3,param_4);
      func_0x000107c609b0(param_5,param_6,param_7,param_8);
      func_0x000107c6088c(auStack_90,dVar2 / dVar3,dVar4 / param_5);
      func_0x000107c5a03c(param_10);
      dVar2 = param_1;
      func_0x000107c609bc(param_1,param_2,param_3,param_4);
      func_0x000107c609c0(param_1,param_2,param_3,param_4);
      func_0x000107c532b4(dVar2,param_1,param_10);
    }
    uVar1 = 0x3fe6666666666666;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,param_10,PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1036d4fd8; end: 1036d501f; -[_TtC32SCLensPlusServicesImplementation36ImagineLensSourceRectDismissAnimator animateTransition:] */

void FUN_1036d4fd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_1036d4b14(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036d5020; end: 1036d507f; -[_TtC32SCLensPlusServicesImplementation36ImagineLensSourceRectDismissAnimator init] */

void FUN_1036d5020(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensPlusServicesImplementation.ImagineLensSourceRectDismissAnimator",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036d504c);
  (*pcVar1)();
}



/* Entry: 1036d5080; end: 1036d508f; -[_TtC32SCLensPlusServicesImplementation36ImagineLensSourceRectDismissAnimator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1036d5080(long param_1)

{
  param_1 = param_1 + _DAT_112f87a70;
  (*(code *)(undefined *)0x1036d5180)();
  return param_1;
}



/* Entry: 1036d5090; end: 1036d50af;  */

void FUN_1036d5090(void)

{
  func_0x000107c61168(&PTR_PTR_1128e2568);
  return;
}



/* Entry: 1036d50b0; end: 1036d50e7;  */

/* WARNING: Possible PIC construction at 0x0001036d4f44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036d4f48) */

void FUN_1036d50b0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_90 [48];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  dVar5 = *(double *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
  dVar9 = *(double *)(unaff_x20 + 0x40);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x58);
  if ((*(byte *)(unaff_x20 + 0x10) & 1) == 0) {
    uVar6 = 0;
  }
  else {
    dVar2 = dVar9;
    func_0x000107c609cc(dVar9,uVar10,uVar11,uVar12);
    if ((0.0 < dVar2) &&
       (dVar2 = dVar9, func_0x000107c609b0(dVar9,uVar10,uVar11,uVar12), 0.0 < dVar2)) {
      dVar2 = dVar5;
      func_0x000107c609cc(dVar5,uVar6,uVar7,uVar8);
      dVar3 = dVar9;
      func_0x000107c609cc(dVar9,uVar10,uVar11,uVar12);
      dVar4 = dVar5;
      func_0x000107c609b0(dVar5,uVar6,uVar7,uVar8);
      func_0x000107c609b0(dVar9,uVar10,uVar11,uVar12);
      func_0x000107c6088c(auStack_90,dVar2 / dVar3,dVar4 / dVar9);
      func_0x000107c5a03c(uVar1);
      dVar9 = dVar5;
      func_0x000107c609bc(dVar5,uVar6,uVar7,uVar8);
      func_0x000107c609c0(dVar5,uVar6,uVar7,uVar8);
      func_0x000107c532b4(dVar9,dVar5,uVar1);
    }
    uVar6 = 0x3fe6666666666666;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar6,uVar1,PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1036d50e8; end: 1036d514b;  */

void FUN_1036d50e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c4ff34(*(undefined8 *)(unaff_x20 + 0x10));
  uVar2 = uVar1;
  func_0x000107c5cf60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf43bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_completeTransition__1125ae898,(uint)uVar2 ^ 1);
  return;
}



/* Entry: 1036d514c; end: 1036d5153;  */

void FUN_1036d514c(long param_1,long param_2)

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



/* Entry: 1036d5154; end: 1036d51e3;  */

long FUN_1036d5154(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1036d51e4; end: 1036d5253;  */

undefined8 * FUN_1036d51e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  func_0x000107c61608(param_1 + 4,param_2 + 4);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 1036d5254; end: 1036d52cb;  */

undefined8 * FUN_1036d5254(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  func_0x000107c61620(param_1 + 4,param_2 + 4);
  param_1[5] = param_2[5];
  return param_1;
}



/* Entry: 1036d52cc; end: 1036d5397;  */

int FUN_1036d52cc(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 10);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1036d5398; end: 1036d547f;  */

undefined *
FUN_1036d5398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x28);
  puVar1 = (undefined *)0x0;
  if (lVar3 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIImageView_1126aec28);
    func_0x000107c61174(lVar3);
    func_0x000107c46db4(puVar1,param_7,lVar3);
    func_0x000107c61174();
    func_0x000107c54b80(param_1,param_2,param_3,param_4);
    func_0x000107c53840(puVar1,param_7,2);
    puVar2 = puVar1;
    func_0x000107c4aba4(puVar1);
    func_0x000107c61180();
    func_0x000107c539d4(0x4020000000000000);
    func_0x000107c61170(puVar2);
    func_0x000107c526c0(param_5,puVar1);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(puVar1);
  }
  return puVar1;
}



/* Entry: 1036d5480; end: 1036d5487; -[_TtC32SCLensPlusServicesImplementation36ImagineLensSourceRectPresentAnimator transitionDuration:] */

undefined8 FUN_1036d5480(void)

{
  return 0x3fd0000000000000;
}



/* Entry: 1036d5488; end: 1036d5993;  */

/* WARNING: Possible PIC construction at 0x0001036d55a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d5780: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d57a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d57e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d5938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d5948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d55b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036d593c) */
/* WARNING: Removing unreachable block (ram,0x0001036d57e8) */
/* WARNING: Removing unreachable block (ram,0x0001036d57a8) */
/* WARNING: Removing unreachable block (ram,0x0001036d57d0) */
/* WARNING: Removing unreachable block (ram,0x0001036d5784) */
/* WARNING: Removing unreachable block (ram,0x0001036d55ac) */
/* WARNING: Removing unreachable block (ram,0x0001036d594c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d5488(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  
  puVar3 = param_5;
  func_0x000107c403bc();
  func_0x000107c61180();
  puVar4 = param_5;
  func_0x000107c5de84();
  func_0x000107c61180();
  if (puVar4 == (undefined8 *)0x0) {
    func_0x000107c3fef0(param_5);
    puVar4 = puVar3;
  }
  else {
    puVar5 = param_5;
    func_0x000107c5ded8();
    func_0x000107c61180();
    if (puVar5 != (undefined8 *)0x0) {
      func_0x000107c43538(param_5);
      func_0x000107c54b80(puVar5);
      func_0x000107c52ab8(puVar5);
      func_0x000107c526c0(0,puVar5);
      func_0x000107c3d89c(puVar3);
      func_0x000107c4abfc(puVar3);
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f87aa0);
      puVar4 = puVar1 + 4;
      func_0x000107c61618();
      if (puVar4 == (undefined8 *)0x0) {
        dVar12 = *(double *)PTR__CGRectNull_1103475e8;
        uVar13 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 8);
        uVar14 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x10);
        uVar15 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x18);
        FUN_1036d6074(dVar12,uVar13,uVar14,uVar15);
        if (((ulong)puVar4 & 1) == 0) {
          puVar6 = &UNK_1106822e0;
          func_0x000107c613fc(&UNK_1106822e0,0x18,7);
          *(undefined8 *)(puVar6 + 0x10) = 0;
        }
        else {
          FUN_1036d6074(param_1,param_2,param_3,param_4);
          puVar6 = &UNK_1106822e0;
          func_0x000107c613fc(&UNK_1106822e0,0x18,7);
          *(undefined8 *)(puVar6 + 0x10) = 0;
          if (((ulong)puVar4 & 1) != 0) {
            dVar9 = param_1;
            func_0x000107c609cc(param_1,param_2,param_3,param_4);
            if ((0.0 < dVar9) &&
               (dVar9 = param_1, func_0x000107c609b0(param_1,param_2,param_3,param_4), 0.0 < dVar9))
            {
              dVar9 = dVar12;
              func_0x000107c609cc(dVar12,uVar13,uVar14,uVar15);
              dVar10 = param_1;
              func_0x000107c609cc(param_1,param_2,param_3,param_4);
              dVar11 = dVar12;
              func_0x000107c609b0(dVar12,uVar13,uVar14,uVar15);
              func_0x000107c609b0(param_1,param_2,param_3,param_4);
              func_0x000107c6088c(&puStack_d0,dVar9 / dVar10,dVar11 / param_1);
              func_0x000107c5a03c(puVar5);
              dVar9 = dVar12;
              func_0x000107c609bc(dVar12,uVar13,uVar14,uVar15);
              func_0x000107c609c0(dVar12,uVar13,uVar14,uVar15);
              func_0x000107c532b4(dVar9,dVar12,puVar5);
            }
            func_0x000107c4aba4(puVar5);
            func_0x000107c61180();
            func_0x000107c539d4(0x4020000000000000);
            puVar4 = puVar5;
            goto code_r0x000107c61170;
          }
        }
        puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
        func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
        puVar8 = &UNK_110682308;
        func_0x000107c613fc(&UNK_110682308,0x40,7);
        *(undefined8 **)(puVar8 + 0x10) = puVar5;
        *(double *)(puVar8 + 0x18) = param_1;
        *(undefined8 *)(puVar8 + 0x20) = param_2;
        *(undefined8 *)(puVar8 + 0x28) = param_3;
        *(undefined8 *)(puVar8 + 0x30) = param_4;
        *(undefined **)(puVar8 + 0x38) = puVar6;
        puVar2 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_b0 = FUN_1036d5c20;
        puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c8 = 0x42000000;
        puStack_c0 = &UNK_1000f6b44;
        puStack_b8 = &UNK_110682320;
        puStack_a8 = puVar8;
        func_0x000107c60bc4(&puStack_d0);
        puVar8 = puStack_a8;
        func_0x000107c61174();
        func_0x000107c6157c(puVar6);
        func_0x000107c61574(puVar8);
        puVar8 = &UNK_110682358;
        func_0x000107c613fc(&UNK_110682358,0x28,7);
        *(undefined **)(puVar8 + 0x10) = puVar6;
        *(undefined8 **)(puVar8 + 0x18) = puVar5;
        *(undefined8 **)(puVar8 + 0x20) = param_5;
        pcStack_b0 = (code *)0x1036d5c50;
        puStack_d0 = puVar2;
        uStack_c8 = 0x42000000;
        puStack_c0 = &UNK_100288f10;
        puStack_b8 = &UNK_110682370;
        puStack_a8 = puVar8;
        func_0x000107c60bc4(&puStack_d0);
        puVar8 = puStack_a8;
        func_0x000107c61174(puVar5);
        func_0x000107c6157c(puVar6);
        func_0x000107c615f0(param_5);
        func_0x000107c61574(puVar8);
        func_0x000107c3dcd4(0x3fd0000000000000,0,puVar7);
        puVar4 = puVar3;
      }
      else {
        func_0x000107c40734(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar3);
      }
    }
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}


