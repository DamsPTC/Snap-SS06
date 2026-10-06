/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103146bc8; end: 103146da7;  */

void FUN_103146bc8(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  (*param_1)();
  puVar1 = &UNK_1106133d0;
  func_0x000107c613fc(&UNK_1106133d0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_7;
  uStack_50 = 0x103148598;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1106133e8;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(param_6);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(param_5);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c615e8(param_3);
  return;
}



/* Entry: 103146da8; end: 103146e97;  */

void FUN_103146da8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined1 auStack_68 [24];
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0xa8);
  lVar2 = *(long *)(unaff_x20 + 0xb0);
  if (lVar2 != 0) {
    lVar4 = *(long *)(unaff_x20 + 0x28);
    if (lVar4 != 0) {
      func_0x000107c61438(lVar2,2);
      func_0x000107c6071c();
      uVar1 = 0;
      func_0x00010434b3d0(0);
      func_0x000107c610f8();
      func_0x00010434b1f8(param_1,uVar3,lVar2,2,uVar1);
      func_0x000107c4f644(lVar4);
      func_0x000107c61170(uVar3);
      func_0x000107c6142c(lVar2);
      lVar2 = *(long *)(unaff_x20 + 0xb0);
    }
    *(undefined8 *)(unaff_x20 + 0xa8) = 0;
    *(undefined8 *)(unaff_x20 + 0xb0) = 0;
    func_0x000107c6142c(lVar2);
  }
  func_0x000107c61428(unaff_x20 + 0xd8,auStack_68,0,0);
  pcVar5 = *(code **)(unaff_x20 + 0xd8);
  if (pcVar5 != (code *)0x0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0xe0);
    func_0x000107c6157c(uVar3);
    (*pcVar5)();
    func_0x000100d370bc(pcVar5,uVar3);
  }
  return;
}



/* Entry: 103146e98; end: 103147103;  */

/* WARNING: Possible PIC construction at 0x000103146ef4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103147078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103147088: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010314707c) */
/* WARNING: Removing unreachable block (ram,0x000103146ef8) */
/* WARNING: Removing unreachable block (ram,0x000103147100) */
/* WARNING: Removing unreachable block (ram,0x000103146efc) */
/* WARNING: Removing unreachable block (ram,0x000103146f08) */
/* WARNING: Removing unreachable block (ram,0x000103146f0c) */
/* WARNING: Removing unreachable block (ram,0x000103146f10) */
/* WARNING: Removing unreachable block (ram,0x000103146f1c) */
/* WARNING: Removing unreachable block (ram,0x000103146f20) */
/* WARNING: Removing unreachable block (ram,0x0001031470c8) */
/* WARNING: Removing unreachable block (ram,0x000103146f24) */
/* WARNING: Removing unreachable block (ram,0x0001031470fc) */
/* WARNING: Removing unreachable block (ram,0x000103147054) */
/* WARNING: Removing unreachable block (ram,0x00010314708c) */

void FUN_103146e98(code *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  func_0x000107c4a02c();
  if ((int)puVar1 != 0) {
    func_0x000103145e28();
    func_0x000107c5de64();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  (*param_1)(0);
  return;
}



/* Entry: 103147104; end: 1031471f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103147104(void)

{
  bool bVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar2 = 0x112f44078;
  func_0x0001000285a8(0x112f44078,&UNK_10db90470);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = _DAT_112f44080;
  puVar4 = auStack_60 + -extraout_x8;
  lVar5 = *(long *)(unaff_x20 + 0x80);
  bVar1 = false;
  if (lVar5 != 0) {
    func_0x000107c61428(lVar5 + _DAT_112f44080,auStack_58,0,0);
    FUN_1031484c8(lVar5 + lVar2,puVar4,0x112f44078,&UNK_10db90470);
    lVar2 = 0;
    FUN_10313e71c();
    puVar3 = puVar4;
    (**(code **)(*(long *)(lVar2 + -8) + 0x30))(puVar4,1,lVar2);
    bVar1 = (int)puVar3 != 1;
    func_0x000103148510(puVar4,0x112f44078,&UNK_10db90470);
  }
  return bVar1;
}



/* Entry: 1031471f4; end: 103147547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031471f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar11 = 0x112f44078;
  puVar7 = &UNK_10db90470;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  puVar9 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = (long)puVar9 - extraout_x12;
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  func_0x000107c4a02c();
  if ((int)puVar1 == 0) {
    return;
  }
  if ((*(byte *)(unaff_x20 + 0xa0) & 1) != 0) {
    return;
  }
  lVar12 = *(long *)(unaff_x20 + 0x60);
  lVar4 = lVar12;
  if (lVar12 == 0) {
    func_0x000103145e28();
    puVar3 = puVar1;
    func_0x000107c4a714();
    func_0x000107c61170(puVar1);
    if ((int)puVar3 == 0) {
      return;
    }
    lVar4 = *(long *)(unaff_x20 + 0x78);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
      return;
    }
  }
  lVar2 = _DAT_112f44080;
  lVar10 = *(long *)(unaff_x20 + 0x80);
  if (lVar10 == 0) {
    func_0x000107c61174();
  }
  else {
    lStack_a8 = lVar4;
    func_0x000107c61428(lVar10 + _DAT_112f44080,auStack_88,0,0);
    puVar7 = (undefined *)0x112f44078;
    FUN_1031484c8(lVar10 + lVar2,lVar11,0x112f44078,&UNK_10db90470);
    lVar2 = 0;
    FUN_10313e71c();
    lVar4 = lVar11;
    (**(code **)(*(long *)(lVar2 + -8) + 0x30))(lVar11,1,lVar2);
    func_0x000107c61174(lVar12);
    func_0x000103148510(lVar11,0x112f44078,&UNK_10db90470);
    if ((int)lVar4 != 1) {
      func_0x000107c61170(lStack_a8);
      return;
    }
    lVar2 = *(long *)(unaff_x20 + 0x80);
    lVar12 = lVar11;
    lVar4 = lStack_a8;
    if (lVar2 != 0) {
      puVar7 = *(undefined **)(unaff_x20 + 0x88);
      lVar12 = lVar2;
      lVar11 = lVar2;
      goto LAB_1031473b8;
    }
  }
  (**(code **)(unaff_x20 + 0x50))(*(undefined8 *)(unaff_x20 + 0x58));
  lVar2 = 0;
  lVar11 = *(long *)(unaff_x20 + 0x80);
LAB_1031473b8:
  *(long *)(unaff_x20 + 0x80) = lVar12;
  *(undefined **)(unaff_x20 + 0x88) = puVar7;
  func_0x000107c615f0(lVar2);
  func_0x000107c615f0(lVar12);
  func_0x000107c615e8(lVar11);
  func_0x000107c61604(lVar12 + 0x10,lVar4);
  puVar13 = (undefined8 *)(unaff_x20 + 0x90);
  uVar5 = *puVar13;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x98);
  *puVar13 = param_3;
  *(undefined8 *)(unaff_x20 + 0x98) = param_4;
  func_0x000100d370bc(uVar5,uVar8);
  puVar7 = &UNK_110613358;
  func_0x000107c613fc(&UNK_110613358,0x18,7);
  func_0x000107c61644(puVar7 + 0x10,unaff_x20);
  puVar1 = &UNK_1106134c0;
  func_0x000107c613fc(&UNK_1106134c0,0x28,7);
  *(undefined **)(puVar1 + 0x10) = puVar7;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  func_0x000107c61580(param_4,2);
  func_0x000107c6157c(puVar7);
  FUN_10313a3a4(param_1,param_2,FUN_10314863c,puVar1);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c61170(lVar4);
  lVar11 = _DAT_112f44080;
  func_0x000107c61428(lVar12 + _DAT_112f44080,auStack_a0,0,0);
  FUN_1031484c8(lVar12 + lVar11,puVar9,0x112f44078,&UNK_10db90470);
  func_0x000107c615e8(lVar12);
  lVar11 = 0;
  FUN_10313e71c();
  puVar6 = puVar9;
  (**(code **)(*(long *)(lVar11 + -8) + 0x30))(puVar9,1,lVar11);
  func_0x000103148510(puVar9,0x112f44078,&UNK_10db90470);
  if ((int)puVar6 == 1) {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x90);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x98);
    *puVar13 = 0;
    *(undefined8 *)(unaff_x20 + 0x98) = 0;
    func_0x000100d370bc(uVar5,uVar8);
  }
  return;
}



/* Entry: 103147548; end: 1031475d3;  */

void FUN_103147548(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x90);
    uVar2 = *(undefined8 *)(param_3 + 0x98);
    *(undefined8 *)(param_3 + 0x90) = 0;
    *(undefined8 *)(param_3 + 0x98) = 0;
    func_0x000100d370bc(uVar1,uVar2);
    func_0x000107c61574(param_3);
  }
  (*param_4)(param_1,param_2);
  return;
}



/* Entry: 1031475d4; end: 103147703;  */

void FUN_1031475d4(code *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  undefined *puVar4;
  
  lVar6 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffb0 + -extraout_x8;
  puVar4 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  iVar3 = (int)puVar4;
  func_0x000107c4a02c();
  if ((iVar3 != 0) && (lVar6 = *(long *)(unaff_x20 + 0x80), lVar6 != 0)) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x90);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x98);
    *(undefined8 *)(unaff_x20 + 0x90) = 0;
    *(undefined8 *)(unaff_x20 + 0x98) = 0;
    func_0x000107c615f0(lVar6);
    func_0x000100d370bc(uVar1,uVar2);
    FUN_10313bb68(param_3,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar6);
    return;
  }
  lVar6 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(puVar5,1,1,lVar6);
  (*param_1)(puVar5);
  func_0x000103148510(puVar5,0x112d36580,&UNK_10d9016d0);
  return;
}



/* Entry: 103147704; end: 1031479bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103147704(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar3 = 0x112f44078;
  func_0x0001000285a8(0x112f44078,&UNK_10db90470);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_70 + -extraout_x8;
  if ((*(byte *)(unaff_x20 + 0xa0) & 1) != 0) {
    return;
  }
  *(undefined1 *)(unaff_x20 + 0xa0) = 1;
  lVar3 = _DAT_112f44080;
  lVar9 = *(long *)(unaff_x20 + 0x80);
  if (lVar9 != 0) {
    func_0x000107c61428(lVar9 + _DAT_112f44080,auStack_68,0,0);
    FUN_1031484c8(lVar9 + lVar3,puVar7,0x112f44078,&UNK_10db90470);
    lVar3 = 0;
    FUN_10313e71c();
    puVar4 = puVar7;
    (**(code **)(*(long *)(lVar3 + -8) + 0x30))(puVar7,1,lVar3);
    func_0x000103148510(puVar7,0x112f44078,&UNK_10db90470);
    if ((int)puVar4 != 1) {
      uVar8 = *(undefined8 *)(unaff_x20 + 0x90);
      uVar5 = *(undefined8 *)(unaff_x20 + 0x98);
      *(undefined8 *)(unaff_x20 + 0x90) = 0;
      *(undefined8 *)(unaff_x20 + 0x98) = 0;
      func_0x000100d370bc(uVar8,uVar5);
      lVar3 = *(long *)(unaff_x20 + 0x80);
      if (lVar3 == 0) goto LAB_103147870;
      uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
      puVar6 = &UNK_110613308;
      func_0x000107c613fc(&UNK_110613308,0x18,7);
      *(undefined8 *)(puVar6 + 0x10) = uVar8;
      func_0x000107c615f0(lVar3);
      func_0x000107c61174(uVar8);
      FUN_10313bb68(1,0x1031484c0,puVar6);
      func_0x000107c615e8(lVar3);
      func_0x000107c61574(puVar6);
    }
    if (*(long *)(unaff_x20 + 0x80) != 0) {
      func_0x000107c61604(*(long *)(unaff_x20 + 0x80) + 0x10,0);
    }
  }
LAB_103147870:
  uVar8 = *(undefined8 *)(unaff_x20 + 0xa8);
  puVar6 = *(undefined **)(unaff_x20 + 0xb0);
  if (puVar6 != (undefined *)0x0) {
    lVar3 = *(long *)(unaff_x20 + 0x28);
    if (lVar3 != 0) {
      func_0x000107c61438(puVar6,2);
      func_0x000107c6071c();
      uVar5 = 0;
      func_0x00010434b3d0(0);
      func_0x000107c610f8();
      func_0x00010434b1f8(param_1,uVar8,puVar6,2,uVar5);
      func_0x000107c4f644(lVar3);
      func_0x000107c61170(uVar8);
      func_0x000107c6142c(puVar6);
      puVar6 = *(undefined **)(unaff_x20 + 0xb0);
    }
    *(undefined8 *)(unaff_x20 + 0xa8) = 0;
    *(undefined8 *)(unaff_x20 + 0xb0) = 0;
    func_0x000107c6142c();
  }
  lVar3 = *(long *)(unaff_x20 + 0x28);
  if (lVar3 != 0) {
    FUN_1031485b0(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0();
    func_0x000107c4f640(lVar3);
    func_0x000107c61170();
  }
  func_0x000103145e28();
  FUN_10314c058();
  func_0x000107c61170(puVar6);
  func_0x000107c5e37c(*(undefined8 *)(unaff_x20 + 0x78));
  iVar2 = (int)*(undefined8 *)(unaff_x20 + 0x78);
  func_0x000107c4a714();
  if (iVar2 != 0) {
    lVar3 = *(long *)(unaff_x20 + 0x78);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031479bc);
      (*pcVar1)();
    }
    func_0x000107c4ff34();
    func_0x000107c61170(lVar3);
  }
  func_0x000107c4ff2c(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 1031479bc; end: 103147aeb;  */

void FUN_1031479bc(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar4 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_1031484c8(param_1,puVar3,0x112d36580,&UNK_10d9016d0);
  puVar2 = puVar3;
  (**(code **)(lVar5 + 0x30))(puVar3,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x000103148510(puVar3,0x112d36580,&UNK_10d9016d0);
  }
  else {
    (**(code **)(lVar5 + 0x20))(lVar4,puVar3,lVar1);
    FUN_103138560(lVar4);
    (**(code **)(lVar5 + 8))(lVar4,lVar1);
  }
  return;
}



/* Entry: 103147aec; end: 103147c97;  */

void FUN_103147aec(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar1 = 0x112d36580;
  uStack_68 = param_4;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar4 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar3 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  lVar6 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_1031484c8(param_1,lVar5,0x112d36580,&UNK_10d9016d0);
  lVar1 = lVar5;
  (**(code **)(lVar3 + 0x30))(lVar5,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x000103148510(lVar5,0x112d36580,&UNK_10d9016d0);
  }
  else {
    (**(code **)(lVar3 + 0x20))(lVar6,lVar5,lVar2);
    FUN_103138560(lVar6);
    (**(code **)(lVar3 + 8))(lVar6,lVar2);
  }
  if (param_3 != (code *)0x0) {
    (**(code **)(lVar3 + 0x38))(puVar4,1,1,lVar2);
    (*param_3)(2,puVar4);
    func_0x000103148510(puVar4,0x112d36580,&UNK_10d9016d0);
  }
  return;
}



/* Entry: 103147c98; end: 103147d4b;  */

void FUN_103147c98(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000100d370bc(*(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000100d370bc(*(undefined8 *)(unaff_x20 + 200),*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000100d370bc(*(undefined8 *)(unaff_x20 + 0xd8),*(undefined8 *)(unaff_x20 + 0xe0));
  return;
}



/* Entry: 103147d4c; end: 103147ddb;  */

long FUN_103147d4c(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000103145e28();
  lVar2 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (lVar2 != 0) {
    return lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103147d90);
  (*pcVar1)();
}



/* Entry: 103147ddc; end: 103147e2b;  */

void FUN_103147ddc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 200,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 200);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xd0);
  *(undefined8 *)(unaff_x20 + 200) = param_1;
  *(undefined8 *)(unaff_x20 + 0xd0) = param_2;
  func_0x000100d370bc(uVar1,uVar2);
  return;
}



/* Entry: 103147e2c; end: 103147e5b;  */

undefined1  [16] FUN_103147e2c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000107c61428(unaff_x20 + 200,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 200;
  auVar1._0_8_ = 0x103148688;
  return auVar1;
}



/* Entry: 103147e5c; end: 103147ea7;  */

undefined1  [16] FUN_103147e5c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0xd8,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0xd8);
  func_0x000100d371b0(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0xd8),
                      *(undefined8 *)(unaff_x20 + 0xe0));
  return auVar1;
}



/* Entry: 103147ea8; end: 103147ef7;  */

void FUN_103147ea8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0xd8,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xe0);
  *(undefined8 *)(unaff_x20 + 0xd8) = param_1;
  *(undefined8 *)(unaff_x20 + 0xe0) = param_2;
  func_0x000100d370bc(uVar1,uVar2);
  return;
}



/* Entry: 103147ef8; end: 103147f27;  */

undefined1  [16] FUN_103147ef8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000107c61428(unaff_x20 + 0xd8,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0xd8;
  auVar1._0_8_ = FUN_103147f28;
  return auVar1;
}



/* Entry: 103147f28; end: 103147f43;  */

void FUN_103147f28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103147f44; end: 103147f73;  */

void FUN_103147f44(undefined8 param_1,undefined8 param_2)

{
  FUN_1031475d4(param_1,param_2,0);
  return;
}



/* Entry: 103147f74; end: 10314823f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_103147f74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long unaff_x20;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  undefined1 auVar18 [16];
  long lStack_70;
  long lStack_68;
  
  uVar14 = *(ulong *)(unaff_x20 + 0x10);
  lVar16 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c614f0();
  (**(code **)(lVar16 + 0x18))();
  uVar6 = uVar14;
  (**(code **)(lVar16 + 0x10))(uVar14,lVar16);
  if ((uVar6 & 1) == 0) {
    plVar17 = (long *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
    lVar7 = 0;
    FUN_10314455c();
    lVar8 = lVar7;
    func_0x000107c610f8();
    func_0x000107c61614(lVar8 + _DAT_112f44b18,0);
    lVar5 = _DAT_112f44b20;
    func_0x000107c61174(param_6);
    func_0x000107c615f0(uVar2);
    func_0x000107c615f0(uVar3);
    func_0x000107c61434(param_4);
    func_0x000107c61434(param_5);
    func_0x000107c61434(param_2);
    pcVar9 = "WebLensJSBridge";
    func_0x0001000c10c0();
    func_0x000107c61180();
    *(char **)(lVar8 + lVar5) = pcVar9;
    puVar1 = (undefined8 *)(lVar8 + _DAT_112f44b00);
    *puVar1 = uVar2;
    puVar1[1] = uVar15;
    puVar1 = (undefined8 *)(lVar8 + _DAT_112f44b08);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1 = (undefined8 *)(lVar8 + _DAT_112f44b10);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1[3] = param_3;
    puVar1[4] = param_4;
    puVar1[5] = param_5;
    puVar1[6] = param_6;
    plVar17 = &lStack_70;
    lStack_70 = lVar8;
    lStack_68 = lVar7;
    func_0x000107c61154(plVar17,PTR_s_init_1125d9248);
  }
  uVar6 = uVar14;
  (**(code **)(lVar16 + 8))(uVar14,lVar16);
  (**(code **)(lVar16 + 0x50))(uVar14,lVar16);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  puVar10 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c615f0(uVar2);
  func_0x000107c615f0(uVar15);
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar11 = puVar10;
  FUN_103148454();
  func_0x000107c613fc();
  *(undefined8 *)(puVar11 + 0x70) = 0;
  *(undefined8 *)(puVar11 + 0x68) = 0;
  *(undefined8 *)(puVar11 + 0x80) = 0;
  *(undefined8 *)(puVar11 + 0x78) = 0;
  *(undefined8 *)(puVar11 + 0x90) = 0;
  *(undefined8 *)(puVar11 + 0x88) = 0;
  *(undefined8 *)(puVar11 + 0x99) = 0;
  *(undefined8 *)(puVar11 + 0x91) = 0;
  *(undefined8 *)(puVar11 + 0xb0) = 0;
  *(undefined8 *)(puVar11 + 0xa8) = 0;
  *(undefined8 *)(puVar11 + 0xc0) = 0;
  *(undefined8 *)(puVar11 + 0xb8) = 0;
  *(undefined8 *)(puVar11 + 0xd0) = 0;
  *(undefined8 *)(puVar11 + 200) = 0;
  *(undefined8 *)(puVar11 + 0xe0) = 0;
  *(undefined8 *)(puVar11 + 0xd8) = 0;
  puVar11[0x10] = (byte)uVar6 & 1;
  puVar11[0x11] = (byte)uVar14 & 1;
  *(code **)(puVar11 + 0x18) = FUN_10313fb7c;
  *(undefined8 *)(puVar11 + 0x20) = 0;
  *(undefined8 *)(puVar11 + 0x28) = uVar15;
  *(undefined8 *)(puVar11 + 0x30) = uVar2;
  *(undefined8 *)(puVar11 + 0x38) = uVar3;
  *(long **)(puVar11 + 0x40) = plVar17;
  *(undefined **)(puVar11 + 0x48) = puVar10;
  puVar12 = &UNK_1106132b8;
  func_0x000107c613fc(&UNK_1106132b8,0x18,7);
  *(undefined **)(puVar12 + 0x10) = puVar10;
  puVar13 = &UNK_1106132e0;
  func_0x000107c613fc(&UNK_1106132e0,0x20,7);
  *(code **)(puVar13 + 0x10) = FUN_1031484b4;
  *(undefined **)(puVar13 + 0x18) = puVar12;
  *(undefined8 *)(puVar11 + 0x50) = 0x1031484bc;
  *(undefined **)(puVar11 + 0x58) = puVar13;
  *(undefined8 *)(puVar11 + 0x60) = 0;
  func_0x000107c61174(puVar10);
  auVar18._8_8_ = &PTR_DAT_110613230;
  auVar18._0_8_ = puVar11;
  return auVar18;
}



/* Entry: 103148240; end: 103148283;  */

void FUN_103148240(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103148284; end: 1031482ab;  */

void FUN_103148284(void)

{
  FUN_103147f74();
  return;
}



/* Entry: 1031482ac; end: 1031482f3;  */

void FUN_1031482ac(undefined1 param_1,undefined1 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined1 *)(unaff_x20 + 0x10) = param_1;
  *(undefined1 *)(unaff_x20 + 0x11) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 1031482f4; end: 103148317;  */

void FUN_1031482f4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103148318; end: 103148337;  */

void FUN_103148318(void)

{
  FUN_103148338();
  return;
}



/* Entry: 103148338; end: 103148453;  */

undefined1  [16] FUN_103148338(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  uVar1 = *(undefined1 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined1 *)(unaff_x20 + 0x11);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c615f0(uVar7);
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar4 = puVar3;
  FUN_103148454();
  func_0x000107c613fc();
  *(undefined8 *)(puVar4 + 0x70) = 0;
  *(undefined8 *)(puVar4 + 0x68) = 0;
  *(undefined8 *)(puVar4 + 0x80) = 0;
  *(undefined8 *)(puVar4 + 0x78) = 0;
  *(undefined8 *)(puVar4 + 0x90) = 0;
  *(undefined8 *)(puVar4 + 0x88) = 0;
  *(undefined8 *)(puVar4 + 0x99) = 0;
  *(undefined8 *)(puVar4 + 0x91) = 0;
  *(undefined8 *)(puVar4 + 0xb0) = 0;
  *(undefined8 *)(puVar4 + 0xa8) = 0;
  *(undefined8 *)(puVar4 + 0xc0) = 0;
  *(undefined8 *)(puVar4 + 0xb8) = 0;
  *(undefined8 *)(puVar4 + 0xd0) = 0;
  *(undefined8 *)(puVar4 + 200) = 0;
  *(undefined8 *)(puVar4 + 0xe0) = 0;
  *(undefined8 *)(puVar4 + 0xd8) = 0;
  puVar4[0x10] = uVar1;
  puVar4[0x11] = uVar2;
  *(code **)(puVar4 + 0x18) = FUN_10313fb7c;
  *(undefined8 *)(puVar4 + 0x20) = 0;
  *(undefined8 *)(puVar4 + 0x28) = uVar7;
  *(undefined8 *)(puVar4 + 0x30) = 0;
  *(undefined8 *)(puVar4 + 0x38) = 0;
  *(undefined8 *)(puVar4 + 0x40) = 0;
  *(undefined **)(puVar4 + 0x48) = puVar3;
  puVar5 = &UNK_1106134e8;
  func_0x000107c613fc(&UNK_1106134e8,0x18,7);
  *(undefined **)(puVar5 + 0x10) = puVar3;
  puVar6 = &UNK_110613510;
  func_0x000107c613fc(&UNK_110613510,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = 0x103148690;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  *(undefined8 *)(puVar4 + 0x50) = 0x10314868c;
  *(undefined **)(puVar4 + 0x58) = puVar6;
  *(undefined8 *)(puVar4 + 0x60) = 0;
  func_0x000107c61174(puVar3);
  auVar8._8_8_ = &PTR_DAT_110613230;
  auVar8._0_8_ = puVar4;
  return auVar8;
}



/* Entry: 103148454; end: 1031484b3;  */

void FUN_103148454(void)

{
  func_0x000107c61168(&PTR_PTR_112f44b90);
  return;
}



/* Entry: 1031484b4; end: 1031484c7;  */

void FUN_1031484b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &uStack_60;
  func_0x00010313e600();
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  func_0x000107c613fc();
  func_0x000107c61174(uVar2);
  FUN_10313a14c(&uStack_60,uVar2);
  *param_1 = puVar1;
  param_1[1] = &PTR_DAT_110612588;
  return;
}



/* Entry: 1031484c8; end: 10314854f;  */

undefined8 FUN_1031484c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103148550; end: 1031485af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103148550(void)

{
  long lVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    pcVar2 = *(code **)(lVar1 + _DAT_112f44e78);
    if (pcVar2 == (code *)0x0) {
      func_0x000107c61170();
    }
    else {
      uVar3 = ((undefined8 *)(lVar1 + _DAT_112f44e78))[1];
      func_0x000100b64c10(pcVar2,uVar3);
      func_0x000107c61170(lVar1);
      (*pcVar2)();
      func_0x00010058d43c(pcVar2,uVar3);
    }
  }
  return;
}



/* Entry: 1031485b0; end: 10314863b;  */

void FUN_1031485b0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10314863c; end: 103148647;  */

void FUN_10314863c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  pcVar3 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0,*(undefined8 *)(unaff_x20 + 0x20));
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(lVar4 + 0x90);
    uVar2 = *(undefined8 *)(lVar4 + 0x98);
    *(undefined8 *)(lVar4 + 0x90) = 0;
    *(undefined8 *)(lVar4 + 0x98) = 0;
    func_0x000100d370bc(uVar1,uVar2);
    func_0x000107c61574(lVar4);
  }
  (*pcVar3)(param_1,param_2);
  return;
}



/* Entry: 103148648; end: 103148677;  */

undefined1  [16] FUN_103148648(void)

{
  long unaff_x20;
  undefined1 auStack_30 [16];
  
  (**(code **)(unaff_x20 + 0x10))(auStack_30);
  return auStack_30;
}



/* Entry: 103148678; end: 103148693;  */

void FUN_103148678(long param_1,long param_2)

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



/* Entry: 103148694; end: 103148717;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103148694(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f44e18);
  uVar2 = *puVar1;
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c615e8(uVar2);
  puVar1 = (undefined8 *)(param_1 + _DAT_112f44e20);
  uVar2 = puVar1[1];
  *puVar1 = param_4;
  puVar1[1] = param_5;
  func_0x000107c615f0(param_2);
  func_0x000107c61434(param_5);
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 103148718; end: 1031487af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103148718(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f44e18);
  uVar3 = *puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c615e8(uVar3);
  puVar1 = (undefined8 *)(param_1 + _DAT_112f44e20);
  uVar3 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  func_0x000107c6142c(uVar3);
  lVar2 = _DAT_112f44e28;
  func_0x000107c61428(param_1 + _DAT_112f44e28,auStack_48,1,0);
  uVar3 = *(undefined8 *)(param_1 + lVar2);
  *(undefined **)(param_1 + lVar2) = PTR___swiftEmptySetSingleton_11034f1d8;
  func_0x000107c6142c(uVar3);
  return;
}



/* Entry: 1031487b0; end: 103149843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031487b0(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  long extraout_x8;
  long extraout_x8_00;
  long lVar15;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar16;
  code *pcVar17;
  ulong *puVar18;
  code *pcVar19;
  ulong uVar20;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x13;
  long lVar21;
  long unaff_x20;
  long lVar22;
  ulong uVar23;
  ulong *puVar24;
  ulong uVar25;
  ulong uVar26;
  ulong auStack_140 [3];
  code *pcStack_128;
  long lStack_120;
  code *pcStack_118;
  code *pcStack_110;
  ulong *puStack_108;
  ulong *puStack_100;
  ulong *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_a0;
  undefined1 auStack_90 [48];
  
  lVar2 = 0;
  func_0x000107c5efc8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar15 = (long)auStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_f0 = lVar15;
  func_0x000107c5efd0();
  lStack_e8 = *(long *)(lVar2 + -8);
  lStack_e0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e8 + 0x40));
  puVar18 = (ulong *)(lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puStack_f8 = puVar18;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar19 = (code *)((long)puVar18 - extraout_x12);
  pcStack_118 = pcVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar19 = pcVar19 + -extraout_x12_00;
  pcStack_110 = pcVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcStack_128 = pcVar19 + -extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar20 = (long)(pcVar19 + -extraout_x12_01) - extraout_x12_02;
  auStack_140[0] = uVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar18 = (ulong *)(uVar20 - extraout_x12_03);
  puStack_108 = puVar18;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = (long)puVar18 - extraout_x12_04;
  lVar2 = 0x112d36580;
  lStack_120 = lVar15;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar23 = lVar15 - extraout_x8_01;
  lVar15 = 0;
  func_0x000107c5eb08();
  lVar21 = *(long *)(lVar15 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  lVar22 = uVar23 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5ede0();
  puVar24 = *(ulong **)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = lVar22 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  auStack_140[1] = extraout_x13;
  auStack_140[2] = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar18 = (ulong *)(lVar2 - extraout_x12_05);
  puStack_100 = *(ulong **)(unaff_x20 + _DAT_112f44df0);
  func_0x000100087bd4(0x10314a120,&puStack_c0,PTR___sytN_11034f1b0 + 8);
  lVar2 = param_1;
  lStack_d0 = param_1;
  func_0x000107c50300(param_1);
  func_0x000107c61180();
  func_0x000107c5eae8(lVar22);
  func_0x000107c61170(lVar2);
  func_0x000107c5eaf0(uVar23);
  (**(code **)(lVar21 + 8))(lVar22,lVar15);
  uVar20 = uVar23;
  lStack_d8 = lVar3;
  (*(code *)puVar24[6])(uVar23,1,lVar3);
  if ((int)uVar20 == 1) {
    FUN_10314a6f0(uVar23,0x112d36580,&UNK_10d9016d0);
  }
  else {
    pcVar19 = (code *)puVar24[4];
    (*pcVar19)(puVar18,uVar23,lStack_d8);
    puVar4 = puVar18;
    FUN_10314a138();
    if (uVar23 != 0) {
      puVar5 = puVar4;
      uVar16 = uVar23;
      func_0x000107c5edc4();
      puVar6 = puVar5;
      func_0x00010434a540();
      uVar20 = *puVar6;
      uVar12 = puVar6[1];
      func_0x000107c61434(uVar12);
      uVar25 = uVar12;
      func_0x000107c5fbb4(uVar20,uVar12,puVar5,uVar16);
      func_0x000107c6142c(uVar16);
      func_0x000107c6142c(uVar12);
      if ((uVar20 & 1) != 0) {
        puStack_f8 = puVar24;
        func_0x000107c6142c(uVar23);
        lVar2 = *(long *)(unaff_x20 + _DAT_112f44e10);
        if (lVar2 != 0) {
          lVar3 = ((long *)(unaff_x20 + _DAT_112f44e10))[1];
          func_0x000107c614f0();
          lVar15 = lVar2;
          func_0x000107c5edc4();
          uVar20 = uVar25;
          (**(code **)(lVar3 + 0x10))();
          func_0x000107c6142c(uVar25);
          if (lVar3 != 0) {
            uVar1 = (uint)(uVar20 >> 0x20);
            uVar13 = uVar1 >> 0x1e;
            if (uVar1 >> 0x1e < 2) {
              if (uVar13 == 0) {
                uVar23 = uVar20 >> 0x30 & 0xff;
              }
              else {
                iVar14 = (int)((ulong)lVar15 >> 0x20);
                if (SBORROW4(iVar14,(int)lVar15)) {
                    /* WARNING: Does not return */
                  pcVar19 = (code *)SoftwareBreakpoint(1,0x103149840);
                  (*pcVar19)();
                }
                uVar23 = (ulong)(iVar14 - (int)lVar15);
              }
            }
            else if (uVar13 == 2) {
              uVar23 = *(long *)(lVar15 + 0x18) - *(long *)(lVar15 + 0x10);
              if (SBORROW8(*(long *)(lVar15 + 0x18),*(long *)(lVar15 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar19 = (code *)SoftwareBreakpoint(1,0x10314922c);
                (*pcVar19)();
              }
            }
            else {
              uVar23 = 0;
            }
            puVar24 = puVar18;
            func_0x00010314a314(puVar18,lVar2,lVar3,uVar23,
                                *(undefined1 *)(unaff_x20 + _DAT_112f44e00));
            lVar21 = lStack_f0;
            if (puVar24 == (ulong *)0x0) {
              func_0x000107c5efb8(lStack_f0);
              puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
              func_0x000101f20194(PTR___swiftEmptyArrayStorage_11034f1c8);
              puVar9 = puVar8;
              func_0x000101f202a0();
              func_0x000107c5ed28(lStack_120,lVar21,puVar8,lStack_e0,puVar9);
              func_0x000107c5efcc();
              FUN_10314b044(unaff_x20 + _DAT_112f44e08,&puStack_c0,0x112f44260,&UNK_10db90460);
              if (param_1 == 0) {
                FUN_10314a6f0(&puStack_c0,0x112f44260,&UNK_10db90460);
              }
              else {
                func_0x0001000a8868(&puStack_c0,param_1);
                (**(code **)(lStack_a0 + 0xa8))
                          (0x707365725f646162,0xec00000065736e6f,param_1,lStack_a0);
                func_0x0001000834e4(&puStack_c0);
              }
              FUN_103149e60(lStack_d0,lVar21);
              func_0x000107c61170(lVar21);
              FUN_10314af94(lVar15,uVar20,lVar2,lVar3);
              (**(code **)(lStack_e8 + 8))(lStack_120,lStack_e0);
            }
            else {
              FUN_103149d28(lStack_d0,puVar24,lVar15,uVar20);
              func_0x000107c61170(puVar24);
              FUN_10314af94(lVar15,uVar20,lVar2,lVar3);
            }
            pcVar19 = (code *)puStack_f8[1];
            lVar2 = lStack_d8;
            goto LAB_103148cbc;
          }
        }
        lVar2 = lStack_f0;
        func_0x000107c5efb0(lStack_f0);
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000101f20194(PTR___swiftEmptyArrayStorage_11034f1c8);
        puVar9 = puVar8;
        func_0x000101f202a0();
        lVar15 = lStack_e0;
        puVar24 = puStack_108;
        func_0x000107c5ed28(puStack_108,lVar2,puVar8,lStack_e0,puVar9);
        func_0x000107c5efcc();
        FUN_10314b044(unaff_x20 + _DAT_112f44e08,&puStack_c0,0x112f44260,&UNK_10db90460);
        if (param_1 == 0) {
          FUN_10314a6f0(&puStack_c0,0x112f44260,&UNK_10db90460);
        }
        else {
          func_0x0001000a8868(&puStack_c0,param_1);
          (**(code **)(lStack_a0 + 0xa8))(0x696d5f616964656d,0xed0000676e697373,param_1,lStack_a0);
          func_0x0001000834e4(&puStack_c0);
        }
        puVar4 = puStack_f8;
        FUN_103149e60(lStack_d0,lVar2);
        func_0x000107c61170(lVar2);
        (**(code **)(lStack_e8 + 8))(puVar24,lVar15);
        pcVar19 = (code *)puVar4[1];
        lVar2 = lStack_d8;
        goto LAB_103148cbc;
      }
      puVar5 = puVar4;
      uVar20 = uVar23;
      puStack_108 = puVar18;
      func_0x000107c5fadc();
      puVar18 = puVar5;
      func_0x000107c4e440();
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      puVar5 = puVar18;
      func_0x000107c5faec();
      func_0x000107c61170(puVar18);
      uVar12 = uVar20;
      func_0x000107c5fb1c();
      func_0x000107c6142c(uVar20);
      uVar20 = uVar12;
      FUN_10314a730();
      func_0x000107c6142c(uVar12);
      uVar7 = 0x112f44e58;
      func_0x0001000285a8(0x112f44e58,&UNK_10db90f60);
      func_0x000100087bd4(&puStack_c0,FUN_10314adfc,auStack_90,uVar7);
      lVar15 = lStack_b8;
      puVar8 = puStack_c0;
      if (puStack_c0 == (undefined *)0x0) {
        func_0x000107c6142c(uVar23);
        func_0x000107c6142c(uVar20);
        func_0x000107c6142c(param_1);
        lVar2 = lStack_f0;
        func_0x000107c5efbc(lStack_f0);
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000101f20194(PTR___swiftEmptyArrayStorage_11034f1c8);
        puVar9 = puVar8;
        func_0x000101f202a0();
        lVar15 = lStack_e0;
        pcVar19 = pcStack_118;
        func_0x000107c5ed28(pcStack_118,lVar2,puVar8,lStack_e0,puVar9);
        func_0x000107c5efcc();
        FUN_10314b044(unaff_x20 + _DAT_112f44e08,&puStack_c0,0x112f44260,&UNK_10db90460);
        if (param_1 == 0) {
          FUN_10314a6f0(&puStack_c0,0x112f44260,&UNK_10db90460);
        }
        else {
          func_0x0001000a8868(&puStack_c0,param_1);
          (**(code **)(lStack_a0 + 0xa8))(0x65646165725f6f6e,0xe900000000000072,param_1,lStack_a0);
          func_0x0001000834e4(&puStack_c0);
        }
        FUN_103149e60(lStack_d0,lVar2);
        func_0x000107c61170(lVar2);
        pcVar17 = *(code **)(lStack_e8 + 8);
      }
      else {
        pcStack_118 = pcVar19;
        puStack_100 = puVar5;
        func_0x000107c615f0(puStack_c0);
        uVar12 = uVar23;
        FUN_10314ae4c(puVar4,uVar23,unaff_x20,param_1);
        func_0x000107c6142c(uVar23);
        func_0x000107c6142c(param_1);
        puVar9 = puVar8;
        func_0x000107c614f0(puVar8);
        puVar18 = puVar4;
        (**(code **)(lVar15 + 0x10))(puVar4,uVar12,puVar9,lVar15);
        if ((long)puVar18 < 0) {
          func_0x000107c6142c(uVar20);
          func_0x000107c6142c(uVar12);
          lVar2 = lStack_f0;
          func_0x000107c5efb0(lStack_f0);
          puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x000101f20194(PTR___swiftEmptyArrayStorage_11034f1c8);
          puVar10 = puVar9;
          func_0x000101f202a0();
          lVar15 = lStack_e0;
          func_0x000107c5ed28(pcStack_110,lVar2,puVar9,lStack_e0,puVar10);
          func_0x000107c5efcc();
          FUN_10314b044(unaff_x20 + _DAT_112f44e08,&puStack_c0,0x112f44260,&UNK_10db90460);
          if (param_1 == 0) {
            FUN_10314a6f0(&puStack_c0,0x112f44260,&UNK_10db90460);
          }
          else {
            func_0x0001000a8868(&puStack_c0,param_1);
            (**(code **)(lStack_a0 + 0xa8))(0x696d5f7972746e65,0xed0000676e697373,param_1,lStack_a0)
            ;
            func_0x0001000834e4(&puStack_c0);
          }
          FUN_103149e60(lStack_d0,lVar2);
          func_0x000107c615ec(puVar8,2);
          func_0x000107c61170(lVar2);
          pcVar17 = *(code **)(lStack_e8 + 8);
          pcVar19 = pcStack_110;
        }
        else {
          if ((ulong *)0x8000 < puVar18) {
            lStack_e0 = *(long *)(unaff_x20 + _DAT_112f44df8);
            puVar9 = &UNK_110613558;
            func_0x000107c613fc(&UNK_110613558,0x18,7);
            func_0x000107c61614(puVar9 + 0x10,unaff_x20);
            lVar2 = lStack_d8;
            uVar23 = auStack_140[2];
            (*(code *)puVar24[2])(auStack_140[2],puStack_108,lStack_d8);
            uVar16 = (ulong)(byte)puVar24[10];
            uVar25 = uVar16 + 0x40 & (uVar16 ^ 0xffffffffffffffff);
            uVar26 = auStack_140[1] + uVar25 + 7 & 0xfffffffffffffff8;
            puVar10 = &UNK_110613580;
            func_0x000107c613fc(&UNK_110613580,uVar26 + 0x10,uVar16 | 7);
            lVar3 = lStack_d0;
            *(undefined **)(puVar10 + 0x10) = puVar9;
            *(undefined **)(puVar10 + 0x18) = puVar8;
            *(long *)(puVar10 + 0x20) = lVar15;
            *(ulong **)(puVar10 + 0x28) = puVar4;
            *(ulong *)(puVar10 + 0x30) = uVar12;
            *(long *)(puVar10 + 0x38) = lStack_d0;
            puStack_f8 = puVar24;
            (*pcStack_118)(puVar10 + uVar25,uVar23,lVar2);
            *(ulong **)(puVar10 + uVar26) = puStack_100;
            *(ulong *)((long)(puVar10 + uVar26) + 8) = uVar20;
            puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
            lStack_b8 = 0x42000000;
            ppuVar11 = &puStack_c0;
            func_0x000107c60bc4(ppuVar11);
            func_0x000107c615f0(puVar8);
            func_0x000107c615f0(lVar3);
            func_0x000107c61574(puVar10);
            func_0x000107c4e524(lStack_e0);
            func_0x000107c60bd0(ppuVar11);
            func_0x000107c615ec(puVar8,2);
            pcVar19 = (code *)puStack_f8[1];
            puVar18 = puStack_108;
            goto LAB_103148cbc;
          }
          uVar23 = uVar12;
          (**(code **)(lVar15 + 0x18))(puVar4,uVar12,puVar9,lVar15);
          func_0x000107c6142c(uVar12);
          puVar18 = puStack_108;
          if (uVar23 >> 0x3c < 0xf) {
            puStack_f8 = puVar24;
            uVar1 = (uint)(uVar23 >> 0x20);
            uVar13 = uVar1 >> 0x1e;
            if (uVar1 >> 0x1e < 2) {
              if (uVar13 == 0) {
                uVar12 = uVar23 >> 0x30 & 0xff;
              }
              else {
                iVar14 = (int)((ulong)puVar4 >> 0x20);
                if (SBORROW4(iVar14,(int)puVar4)) {
                    /* WARNING: Does not return */
                  pcVar19 = (code *)SoftwareBreakpoint(1,0x103149844);
                  (*pcVar19)();
                }
                uVar12 = (ulong)(iVar14 - (int)puVar4);
              }
            }
            else if (uVar13 == 2) {
              uVar12 = puVar4[3] - puVar4[2];
              if (SBORROW8(puVar4[3],puVar4[2])) {
                    /* WARNING: Does not return */
                pcVar19 = (code *)SoftwareBreakpoint(1,0x103149608);
                (*pcVar19)();
              }
            }
            else {
              uVar12 = 0;
            }
            puVar24 = puStack_108;
            func_0x00010314a314(puStack_108,puStack_100,uVar20,uVar12,
                                *(undefined1 *)(unaff_x20 + _DAT_112f44e00));
            lVar2 = lStack_f0;
            if (puVar24 == (ulong *)0x0) {
              func_0x000107c5efb8(lStack_f0);
              puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
              func_0x000101f20194(PTR___swiftEmptyArrayStorage_11034f1c8);
              puVar10 = puVar9;
              func_0x000101f202a0();
              lVar15 = lStack_e0;
              func_0x000107c5ed28(auStack_140[0],lVar2,puVar9,lStack_e0,puVar10);
              func_0x000107c5efcc();
              FUN_10314b044(unaff_x20 + _DAT_112f44e08,&puStack_c0,0x112f44260,&UNK_10db90460);
              if (param_1 == 0) {
                FUN_10314a6f0(&puStack_c0,0x112f44260,&UNK_10db90460);
              }
              else {
                func_0x0001000a8868(&puStack_c0,param_1);
                lVar15 = lStack_e0;
                (**(code **)(lStack_a0 + 0xa8))
                          (0x707365725f646162,0xec00000065736e6f,param_1,lStack_a0);
                func_0x0001000834e4(&puStack_c0);
              }
              FUN_103149e60(lStack_d0,lVar2);
              func_0x000107c61170(lVar2);
              func_0x000107c6142c(uVar20);
              func_0x0001000b44c0(puVar4,uVar23);
              func_0x000107c615ec(puVar8,2);
              (**(code **)(lStack_e8 + 8))(auStack_140[0],lVar15);
              pcVar19 = (code *)puStack_f8[1];
              puVar18 = puStack_108;
              lVar2 = lStack_d8;
            }
            else {
              FUN_103149d28(lStack_d0,puVar24,puVar4,uVar23);
              func_0x000107c61170(puVar24);
              func_0x000107c6142c(uVar20);
              func_0x0001000b44c0(puVar4,uVar23);
              func_0x000107c615ec(puVar8,2);
              pcVar19 = (code *)puStack_f8[1];
              lVar2 = lStack_d8;
            }
            goto LAB_103148cbc;
          }
          func_0x000107c6142c(uVar20);
          lVar2 = lStack_f0;
          func_0x000107c5efb0(lStack_f0);
          puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x000101f20194(PTR___swiftEmptyArrayStorage_11034f1c8);
          puVar10 = puVar9;
          func_0x000101f202a0();
          lVar15 = lStack_e0;
          func_0x000107c5ed28(pcStack_128,lVar2,puVar9,lStack_e0,puVar10);
          func_0x000107c5efcc();
          FUN_10314b044(unaff_x20 + _DAT_112f44e08,&puStack_c0,0x112f44260,&UNK_10db90460);
          if (param_1 == 0) {
            FUN_10314a6f0(&puStack_c0,0x112f44260,&UNK_10db90460);
          }
          else {
            func_0x0001000a8868(&puStack_c0,param_1);
            (**(code **)(lStack_a0 + 0xa8))(0x6961665f64616572,0xeb0000000064656c,param_1,lStack_a0)
            ;
            func_0x0001000834e4(&puStack_c0);
          }
          FUN_103149e60(lStack_d0,lVar2);
          func_0x000107c615ec(puVar8,2);
          func_0x000107c61170(lVar2);
          pcVar17 = *(code **)(lStack_e8 + 8);
          pcVar19 = pcStack_128;
        }
      }
      (*pcVar17)(pcVar19,lVar15);
      pcVar19 = (code *)puVar24[1];
      puVar18 = puStack_108;
      lVar2 = lStack_d8;
      goto LAB_103148cbc;
    }
    (*(code *)puVar24[1])(puVar18,lStack_d8);
  }
  lVar15 = lStack_f0;
  func_0x000107c5efb0(lStack_f0);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000101f20194(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar9 = puVar8;
  func_0x000101f202a0();
  lVar2 = lStack_e0;
  puVar18 = puStack_f8;
  func_0x000107c5ed28(puStack_f8,lVar15,puVar8,lStack_e0,puVar9);
  func_0x000107c5efcc();
  FUN_10314b044(unaff_x20 + _DAT_112f44e08,&puStack_c0,0x112f44260,&UNK_10db90460);
  if (param_1 == 0) {
    FUN_10314a6f0(&puStack_c0,0x112f44260,&UNK_10db90460);
  }
  else {
    func_0x0001000a8868(&puStack_c0,param_1);
    (**(code **)(lStack_a0 + 0xa8))(0x6c72755f646162,0xe700000000000000,param_1,lStack_a0);
    func_0x0001000834e4(&puStack_c0);
  }
  FUN_103149e60(lStack_d0,lVar15);
  func_0x000107c61170(lVar15);
  pcVar19 = *(code **)(lStack_e8 + 8);
LAB_103148cbc:
  (*pcVar19)(puVar18,lVar2);
  return;
}



/* Entry: 103149844; end: 10314988b; -[_TtC23WebLensesImplementation20WebLensSchemeHandler webView:startURLSchemeTask:] */

void FUN_103149844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_1031487b0(param_4);
  func_0x000107c615e8(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10314988c; end: 10314990f; -[_TtC23WebLensesImplementation20WebLensSchemeHandler webView:stopURLSchemeTask:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10314988c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_1;
  uStack_38 = param_4;
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  func_0x000100087bd4(0x10314a108,auStack_50,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_4);
  return;
}



/* Entry: 103149910; end: 103149d27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103149910(long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar10;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [24];
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  uStack_b8 = param_8;
  uStack_a8 = param_6;
  func_0x000107c5efc8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar6 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5efd0();
  lStack_b0 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar10 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c614f0(param_2);
    (**(code **)(param_3 + 0x18))(param_4,param_5,param_2,param_3);
    if (param_5 >> 0x3c < 0xf) {
      uVar1 = (uint)(param_5 >> 0x20);
      uVar8 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar8 == 0) {
          uVar7 = param_5 >> 0x30 & 0xff;
        }
        else {
          iVar9 = (int)((ulong)param_4 >> 0x20);
          if (SBORROW4(iVar9,(int)param_4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103149d28);
            (*pcVar2)();
          }
          uVar7 = (ulong)(iVar9 - (int)param_4);
        }
      }
      else if (uVar8 == 2) {
        uVar7 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
        if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103149d24);
          (*pcVar2)();
        }
      }
      else {
        uVar7 = 0;
      }
      func_0x00010314a314(param_7,uStack_b8,param_9,uVar7,*(undefined1 *)(param_1 + _DAT_112f44e00))
      ;
      if (param_7 == 0) {
        func_0x000107c5efb8(puVar6);
        puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000101f20194(PTR___swiftEmptyArrayStorage_11034f1c8);
        puVar5 = puVar4;
        func_0x000101f202a0();
        func_0x000107c5ed28(lVar10,puVar6,puVar4,lVar3,puVar5);
        func_0x000107c5efcc();
        FUN_10314b044(param_1 + _DAT_112f44e08,auStack_a0,0x112f44260,&UNK_10db90460);
        if (lStack_88 == 0) {
          FUN_10314a6f0(auStack_a0,0x112f44260,&UNK_10db90460);
        }
        else {
          func_0x0001000a8868(auStack_a0,lStack_88);
          (**(code **)(lStack_80 + 0xa8))(0x707365725f646162,0xec00000065736e6f,lStack_88,lStack_80)
          ;
          func_0x0001000834e4(auStack_a0);
        }
        FUN_103149e60(uStack_a8,puVar6);
        func_0x000107c61170(puVar6);
        (**(code **)(lStack_b0 + 8))(lVar10,lVar3);
      }
      else {
        FUN_103149d28(uStack_a8,param_7,param_4,param_5);
        func_0x000107c61170(param_1);
        param_1 = param_7;
      }
      func_0x000107c61170(param_1);
      func_0x0001000b44c0(param_4,param_5);
    }
    else {
      func_0x000107c5efb0(puVar6);
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000101f20194(PTR___swiftEmptyArrayStorage_11034f1c8);
      puVar5 = puVar4;
      func_0x000101f202a0();
      func_0x000107c5ed28(lVar10 - extraout_x12,puVar6,puVar4,lVar3,puVar5);
      func_0x000107c5efcc();
      FUN_10314b044(param_1 + _DAT_112f44e08,auStack_a0,0x112f44260,&UNK_10db90460);
      if (lStack_88 == 0) {
        FUN_10314a6f0(auStack_a0,0x112f44260,&UNK_10db90460);
      }
      else {
        func_0x0001000a8868(auStack_a0,lStack_88);
        (**(code **)(lStack_80 + 0xa8))(0x6961665f64616572,0xeb0000000064656c,lStack_88,lStack_80);
        func_0x0001000834e4(auStack_a0);
      }
      FUN_103149e60(uStack_a8,puVar6);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(param_1);
      (**(code **)(lStack_b0 + 8))(lVar10 - extraout_x12,lVar3);
    }
  }
  return;
}



/* Entry: 103149d28; end: 103149e5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103149d28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_80 [16];
  char cStack_51;
  
  func_0x000100087bd4(&cStack_51,0x10314b0b4,auStack_80,PTR___sSbN_11034dd40);
  if (cStack_51 == '\x01') {
    func_0x000107c41c8c(param_1);
    func_0x000100087bd4(&cStack_51,FUN_10314afc0,auStack_80,PTR___sSbN_11034dd40);
    if (cStack_51 == '\x01') {
      func_0x000107c5ee20(param_3,param_4);
      func_0x000107c41c78(param_1);
      func_0x000107c61170(param_3);
      func_0x000100087bd4(&cStack_51,0x10314b0c8,auStack_80,PTR___sSbN_11034dd40);
      if (cStack_51 == '\x01') {
        func_0x000107c41bc4(param_1);
        func_0x000100087bd4(FUN_10314b08c,auStack_80,PTR___sytN_11034f1b0 + 8);
      }
    }
  }
  return;
}



/* Entry: 103149e60; end: 103149f17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103149e60(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_70 [16];
  char cStack_41;
  
  func_0x000100087bd4(&cStack_41,0x10314b0dc,auStack_70,PTR___sSbN_11034dd40);
  if (cStack_41 == '\x01') {
    func_0x000107c5ed2c(param_2);
    func_0x000107c41bc0(param_1);
    func_0x000107c61170(param_2);
    func_0x000100087bd4(0x10314b0a0,auStack_70,PTR___sytN_11034f1b0 + 8);
  }
  return;
}



/* Entry: 103149f18; end: 103149f83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103149f18(long param_1,undefined8 param_2)

{
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [8];
  
  func_0x000107c61428(param_1 + _DAT_112f44e28,auStack_50,0x21,0);
  func_0x00010125e974(auStack_38,param_2);
  func_0x000107c614a8(auStack_50);
  return;
}



/* Entry: 103149f84; end: 103149feb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103149f84(long param_1,undefined8 param_2)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + _DAT_112f44e28,auStack_48,0x21,0);
  func_0x000101274d60(param_2);
  func_0x000107c614a8(auStack_48);
  return;
}



/* Entry: 103149fec; end: 10314a04b; -[_TtC23WebLensesImplementation20WebLensSchemeHandler init] */

void FUN_103149fec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebLensesImplementation.WebLensSchemeHandler",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10314a018);
  (*pcVar1)();
}



/* Entry: 10314a04c; end: 10314a0e7; -[_TtC23WebLensesImplementation20WebLensSchemeHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010314a0cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010314a0d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10314a04c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f44df0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f44df8));
  FUN_10314a6f0(param_1 + _DAT_112f44e08,0x112f44260,&UNK_10db90460);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f44e10));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f44e18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f44e20 + 8))
  ;
  return;
}



/* Entry: 10314a0e8; end: 10314a137;  */

void FUN_10314a0e8(void)

{
  func_0x000107c61168(&PTR_PTR_1128ba478);
  return;
}



/* Entry: 10314a138; end: 10314a6ef;  */

undefined1  [16] FUN_10314a138(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  
  func_0x000107c5ed74();
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar13 = *(ulong *)(param_1 + 0x10);
  if (uVar13 != 0) {
    uVar11 = 0;
    do {
      plVar12 = (long *)(param_1 + 0x28 + uVar11 * 0x10);
      uVar14 = uVar11;
      while( true ) {
        if (*(ulong *)(param_1 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10314a314);
          (*pcVar5)();
        }
        uVar1 = plVar12[-1];
        lVar3 = *plVar12;
        if ((uVar1 != 0x2f || lVar3 != -0x1f00000000000000) &&
           (uVar11 = uVar1, func_0x000107c605b8(uVar1,lVar3,0x2f,0xe100000000000000,0),
           (uVar11 & 1) == 0)) break;
        uVar14 = uVar14 + 1;
        plVar12 = plVar12 + 2;
        if (uVar13 == uVar14) goto LAB_10314a268;
      }
      func_0x000107c61434(lVar3);
      puVar6 = puVar4;
      func_0x000107c61558();
      if (((ulong)puVar6 & 1) == 0) {
        func_0x000100403514(0,*(long *)(puVar4 + 0x10) + 1,1);
      }
      uVar2 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar2) {
        func_0x000100403514(1 < *(ulong *)(puVar4 + 0x18),uVar2 + 1,1);
      }
      uVar11 = uVar14 + 1;
      *(ulong *)(puVar4 + 0x10) = uVar2 + 1;
      *(ulong *)(puVar4 + uVar2 * 0x10 + 0x20) = uVar1;
      *(long *)(puVar4 + uVar2 * 0x10 + 0x28) = lVar3;
    } while (uVar13 - 1 != uVar14);
  }
LAB_10314a268:
  func_0x000107c6142c(param_1);
  if (*(long *)(puVar4 + 0x10) != 0) {
    uVar13 = 0;
    func_0x000100077018(0x2e2e,0xe200000000000000,puVar4);
    if ((uVar13 & 1) == 0) {
      uVar8 = 0x112d38270;
      func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
      uVar9 = uVar8;
      func_0x00010011d734();
      uVar7 = 0x2f;
      uVar10 = 0xe100000000000000;
      func_0x000107c5fa80(0x2f,0xe100000000000000,uVar8,uVar9);
      func_0x000107c61574(puVar4);
      goto LAB_10314a2f0;
    }
  }
  func_0x000107c61574(puVar4);
  uVar7 = 0;
  uVar10 = 0;
LAB_10314a2f0:
  auVar15._8_8_ = uVar10;
  auVar15._0_8_ = uVar7;
  return auVar15;
}



/* Entry: 10314a6f0; end: 10314a72f;  */

undefined8 FUN_10314a6f0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10314a730; end: 10314adfb;  */

undefined1  [16] FUN_10314a730(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  
  if (param_1 == 0x6c6d7468 && param_2 == -0x1c00000000000000) {
LAB_10314a7c4:
    pcVar4 = "text/html; charset=utf-8";
  }
  else {
    uVar3 = 0;
    func_0x000107c605b8(0x6c6d7468,0xe400000000000000,param_1,param_2,0);
    if (((uVar3 & 1) != 0) || ((param_1 == 0x6d7468 && (param_2 == -0x1d00000000000000))))
    goto LAB_10314a7c4;
    uVar3 = 0;
    func_0x000107c605b8(0x6d7468,0xe300000000000000,param_1,param_2,0);
    if ((uVar3 & 1) != 0) goto LAB_10314a7c4;
    if ((param_1 == 0x736a) && (param_2 == -0x1e00000000000000)) {
LAB_10314a80c:
      uVar3 = 0x800000010f1286e0;
      uVar1 = 0xd000000000000025;
      goto LAB_10314a7dc;
    }
    uVar3 = 0;
    func_0x000107c605b8(0x736a,0xe200000000000000,param_1,param_2,0);
    if (((uVar3 & 1) != 0) || (param_1 == 0x736a6d && param_2 == -0x1d00000000000000))
    goto LAB_10314a80c;
    uVar3 = 0x736a6d;
    func_0x000107c605b8(0x736a6d,0xe300000000000000,param_1,param_2,0);
    if ((uVar3 & 1) != 0) goto LAB_10314a80c;
    uVar3 = 0x737363;
    if (((param_1 == 0x737363) && (param_2 == -0x1d00000000000000)) ||
       (func_0x000107c605b8(0x737363,0xe300000000000000,param_1,param_2,0), (uVar3 & 1) != 0)) {
      uVar3 = 0x800000010f1286c0;
      uVar1 = 0xd000000000000017;
      goto LAB_10314a7dc;
    }
    if ((param_1 == 0x6e6f736a) && (param_2 == -0x1c00000000000000)) {
LAB_10314a910:
      uVar3 = 0x800000010f1286a0;
      uVar1 = 0xd00000000000001f;
      goto LAB_10314a7dc;
    }
    uVar3 = 0;
    func_0x000107c605b8(0x6e6f736a,0xe400000000000000,param_1,param_2,0);
    if ((uVar3 & 1) != 0) goto LAB_10314a910;
    if ((param_1 == 0x6d736177) && (param_2 == -0x1c00000000000000)) {
LAB_10314a96c:
      uVar3 = 0x800000010f128680;
      uVar1 = 0xd000000000000010;
      goto LAB_10314a7dc;
    }
    uVar3 = 0x6d736177;
    func_0x000107c605b8(0x6d736177,0xe400000000000000,param_1,param_2,0);
    if ((uVar3 & 1) != 0) goto LAB_10314a96c;
    if ((param_1 != 0x61746164) || (param_2 != -0x1c00000000000000)) {
      uVar3 = 0;
      func_0x000107c605b8(0x61746164,0xe400000000000000,param_1,param_2,0);
      if (((uVar3 & 1) == 0) && (param_1 != 0x6e6962 || param_2 != -0x1d00000000000000)) {
        uVar3 = 0;
        func_0x000107c605b8(0x6e6962,0xe300000000000000,param_1,param_2,0);
        if ((uVar3 & 1) == 0) {
          uVar1 = 0x6e702f6567616d69;
          if ((param_1 == 0x676e70) && (param_2 == -0x1d00000000000000)) {
            uVar3 = 0xe900000000000067;
            goto LAB_10314a7dc;
          }
          uVar3 = 0;
          func_0x000107c605b8(0x676e70,0xe300000000000000,param_1,param_2,0);
          if ((uVar3 & 1) != 0) {
            uVar3 = 0xe900000000000067;
            goto LAB_10314a7dc;
          }
          uVar1 = 0x706a2f6567616d69;
          uVar3 = 0;
          if ((param_1 != 0x67706a) || (param_2 != -0x1d00000000000000)) {
            func_0x000107c605b8(0x67706a,0xe300000000000000,param_1,param_2,0);
            if (((uVar3 & 1) == 0) && (param_1 != 0x6765706a || param_2 != -0x1c00000000000000)) {
              uVar3 = 0;
              func_0x000107c605b8(0x6765706a,0xe400000000000000,param_1,param_2,0);
              if ((uVar3 & 1) == 0) {
                uVar1 = 0x69672f6567616d69;
                if ((param_1 != 0x666967) || (param_2 != -0x1d00000000000000)) {
                  uVar3 = 0x666967;
                  func_0x000107c605b8(0x666967,0xe300000000000000,param_1,param_2,0);
                  if ((uVar3 & 1) == 0) {
                    uVar3 = 0xea00000000007062;
                    if ((param_1 != 0x70626577) || (param_2 != -0x1c00000000000000)) {
                      uVar2 = 0x70626577;
                      func_0x000107c605b8(0x70626577,0xe400000000000000,param_1,param_2,0);
                      if ((uVar2 & 1) == 0) {
                        uVar3 = 0xed00006c6d782b67;
                        uVar2 = 0x677673;
                        if (((param_1 == 0x677673) && (param_2 == -0x1d00000000000000)) ||
                           (func_0x000107c605b8(0x677673,0xe300000000000000,param_1,param_2,0),
                           (uVar2 & 1) != 0)) {
                          uVar1 = 0x76732f6567616d69;
                          goto LAB_10314a7dc;
                        }
                        uVar1 = 0x706d2f6f69647561;
                        if ((param_1 != 0x33706d) || (param_2 != -0x1d00000000000000)) {
                          uVar3 = 0x33706d;
                          func_0x000107c605b8(0x33706d,0xe300000000000000,param_1,param_2,0);
                          if ((uVar3 & 1) == 0) {
                            uVar2 = 0x34706d;
                            uVar3 = 0xe900000000000034;
                            if (((param_1 == 0x34706d) && (param_2 == -0x1d00000000000000)) ||
                               (func_0x000107c605b8(0x34706d,0xe300000000000000,param_1,param_2,0),
                               (uVar2 & 1) != 0)) {
                              uVar1 = 0x706d2f6f65646976;
                              goto LAB_10314a7dc;
                            }
                            uVar1 = 0x6674742f746e6f66;
                            uVar3 = 0;
                            if (((param_1 != 0x667474) || (param_2 != -0x1d00000000000000)) &&
                               (func_0x000107c605b8(0x667474,0xe300000000000000,param_1,param_2,0),
                               (uVar3 & 1) == 0)) {
                              uVar1 = 0x66746f2f746e6f66;
                              uVar3 = 0x66746f;
                              if (((param_1 != 0x66746f) || (param_2 != -0x1d00000000000000)) &&
                                 (func_0x000107c605b8(0x66746f,0xe300000000000000,param_1,param_2,0)
                                 , (uVar3 & 1) == 0)) {
                                if ((param_1 != 0x66666f77) || (param_2 != -0x1c00000000000000)) {
                                  uVar3 = 0x66666f77;
                                  func_0x000107c605b8(0x66666f77,0xe400000000000000,param_1,param_2,
                                                      0);
                                  if ((uVar3 & 1) == 0) {
                                    uVar3 = 0x3266666f77;
                                    if (((param_1 == 0x3266666f77) &&
                                        (param_2 == -0x1b00000000000000)) ||
                                       (func_0x000107c605b8(0x3266666f77,0xe500000000000000,param_1,
                                                            param_2,0), (uVar3 & 1) != 0)) {
                                      uVar1 = 0x666f772f746e6f66;
                                      uVar3 = 0xea00000000003266;
                                      goto LAB_10314a7dc;
                                    }
                                    goto LAB_10314a9a8;
                                  }
                                }
                                uVar3 = 0xe900000000000066;
                                uVar1 = 0x666f772f746e6f66;
                                goto LAB_10314a7dc;
                              }
                            }
                            uVar3 = 0xe800000000000000;
                            goto LAB_10314a7dc;
                          }
                        }
                        goto LAB_10314aab8;
                      }
                    }
                    uVar1 = 0x65772f6567616d69;
                    goto LAB_10314a7dc;
                  }
                }
                uVar3 = 0xe900000000000066;
                goto LAB_10314a7dc;
              }
            }
          }
LAB_10314aab8:
          uVar3 = 0xea00000000006765;
          goto LAB_10314a7dc;
        }
      }
    }
LAB_10314a9a8:
    pcVar4 = "application/octet-stream";
  }
  uVar1 = 0xd000000000000018;
  uVar3 = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
LAB_10314a7dc:
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = uVar1;
  return auVar5;
}



/* Entry: 10314adfc; end: 10314ae4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10314adfc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(lVar2 + _DAT_112f44e18);
  uVar1 = *(undefined8 *)(lVar2 + _DAT_112f44e18);
  param_1[1] = ((undefined8 *)(lVar2 + _DAT_112f44e18))[1];
  *param_1 = uVar3;
  uVar3 = ((undefined8 *)(lVar2 + _DAT_112f44e20))[1];
  param_1[2] = *(undefined8 *)(lVar2 + _DAT_112f44e20);
  param_1[3] = uVar3;
  func_0x000107c615f0(uVar1);
  func_0x000107c61434(uVar3);
  return;
}



/* Entry: 10314ae4c; end: 10314af17;  */

undefined1  [16] FUN_10314ae4c(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_3 & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar1 = param_4 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    func_0x000107c5fb78();
  }
  else {
    func_0x000107c5fb78(param_3,param_4);
    func_0x000107c61434(0xe100000000000000);
    func_0x000107c5fb78(0x2f,0xe100000000000000);
    func_0x000107c6142c(0xe100000000000000);
    func_0x000107c61434(0xe100000000000000);
    func_0x000107c5fb78(param_1,param_2);
    func_0x000107c6142c(0xe100000000000000);
  }
  auVar2._8_8_ = 0xe100000000000000;
  auVar2._0_8_ = 0x2f;
  return auVar2;
}



/* Entry: 10314af18; end: 10314af77;  */

void FUN_10314af18(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar3 = uVar3 + 0x40 & (uVar3 ^ 0xffffffffffffffff);
  puVar1 = (undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar2 + -8) + 0x40) + uVar3 + 7 & 0xfffffffffffffff8));
  FUN_103149910(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                unaff_x20 + uVar3,*puVar1,puVar1[1]);
  return;
}



/* Entry: 10314af78; end: 10314af93;  */

void FUN_10314af78(long param_1,long param_2)

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



/* Entry: 10314af94; end: 10314afbf;  */

void FUN_10314af94(void)

{
  long in_x3;
  
  if (in_x3 != 0) {
    func_0x00010006c090();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(in_x3);
    return;
  }
  return;
}



/* Entry: 10314afc0; end: 10314afd3;  */

void FUN_10314afc0(void)

{
  FUN_10314afd4();
  return;
}



/* Entry: 10314afd4; end: 10314b043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10314afd4(byte *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112f44e28;
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + _DAT_112f44e28,auStack_58,0,0);
  func_0x0001014f49b4(uVar3,*(undefined8 *)(lVar1 + lVar2));
  *param_1 = (byte)uVar3 & 1;
  return;
}



/* Entry: 10314b044; end: 10314b08b;  */

undefined8 FUN_10314b044(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10314b08c; end: 10314b0ef;  */

void FUN_10314b08c(void)

{
  func_0x00010314a108();
  return;
}



/* Entry: 10314b0f0; end: 10314b183;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10314b0f0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    pcVar1 = *(code **)(param_1 + _DAT_112f44e78);
    if (pcVar1 == (code *)0x0) {
      func_0x000107c61170();
    }
    else {
      uVar2 = ((undefined8 *)(param_1 + _DAT_112f44e78))[1];
      func_0x000100b64c10(pcVar1,uVar2);
      func_0x000107c61170(param_1);
      (*pcVar1)();
      func_0x00010058d43c(pcVar1,uVar2);
    }
  }
  return;
}



/* Entry: 10314b184; end: 10314b20b; -[_TtC23WebLensesImplementation27WebLensSimpleViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10314b184(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f44e68);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f44e70);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f44e78);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000001d,0x800000010ef19c10,
                      "WebLensesImplementation/WebLensSimpleViewController.swift",0x39,2,0x31,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10314b20c);
  (*pcVar2)();
}



/* Entry: 10314b20c; end: 10314b347;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10314b20c(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidLoad_112684cd8);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10314b340);
    (*pcVar1)();
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c52b50(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar3);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    FUN_10314bc9c();
    func_0x000107c61170(lVar2);
    uVar4 = 0;
    func_0x00010314b7d4(0);
    func_0x000107c610f8();
    func_0x000107c48c2c();
    func_0x000107c5317c();
    func_0x000107c53fcc(uVar4);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      func_0x000107c3d6fc();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(unaff_x20);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10314b348);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10314b344);
  (*pcVar1)();
}



/* Entry: 10314b348; end: 10314b36f; -[_TtC23WebLensesImplementation27WebLensSimpleViewController viewDidLoad] */

void FUN_10314b348(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10314b20c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10314b370; end: 10314b443;  */

void FUN_10314b370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = unaff_x20;
  uVar3 = param_1;
  uVar4 = param_2;
  func_0x000107c4a714();
  if ((int)lVar2 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10314b440);
      (*pcVar1)();
    }
    func_0x000107c3ec60();
    func_0x000107c61170(lVar2);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10314b444);
      (*pcVar1)();
    }
    func_0x000107c4071c(param_1,param_2);
    func_0x000107c61170(unaff_x20);
    func_0x000107c609a4(uVar3,uVar4,param_3,param_4,param_1,param_2);
  }
  return;
}



/* Entry: 10314b444; end: 10314b4b3; -[_TtC23WebLensesImplementation27WebLensSimpleViewController handleTouchDown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10314b444(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112f44e70);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_112f44e70))[1];
  func_0x000107c61174();
  func_0x000100b64c10(pcVar1,uVar2);
  (*pcVar1)();
  func_0x000107c61170(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10314b4b4; end: 10314b4df; -[_TtC23WebLensesImplementation27WebLensSimpleViewController initWithNibName:bundle:] */

void FUN_10314b4b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebLensesImplementation.WebLensSimpleViewController",0x33,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10314b4e0);
  (*pcVar1)();
}



/* Entry: 10314b4e0; end: 10314b4e3;  */

void FUN_10314b4e0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10314b4e4; end: 10314b547; -[_TtC23WebLensesImplementation27WebLensSimpleViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010314b514: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010314b518) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10314b4e4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f44e60));
  if (*(long *)(param_1 + _DAT_112f44e68) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112f44e68))[1]);
    return;
  }
  return;
}



/* Entry: 10314b548; end: 10314b567;  */

void FUN_10314b548(void)

{
  func_0x000107c61168(&PTR_PTR_1128ba570);
  return;
}



/* Entry: 10314b568; end: 10314b56f; -[_TtC23WebLensesImplementation27WebLensSimpleViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_10314b568(void)

{
  return 1;
}



/* Entry: 10314b570; end: 10314b5f3; -[_TtC23WebLensesImplementationP33_4056DC8D0946EE2F3C4277F8EDB9E67B26TouchDownGestureRecognizer touchesBegan:withEvent:] */

void FUN_10314b570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x000102be1030(0);
  uVar2 = uVar1;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar1,uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_10314bb44(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 10314b5f4; end: 10314b737;  */

undefined1 * FUN_10314b5f4(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  func_0x000107c614f0();
  FUN_10314bc08(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_80,lStack_68);
    lVar3 = *(long *)(lStack_68 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
    puVar1 = auStack_80 + (-0x10 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(lVar3 + 0x10))(puVar1);
    puVar2 = puVar1;
    func_0x000107c605b0(puVar1,lStack_68);
    (**(code **)(lVar3 + 8))(puVar1,lStack_68);
    func_0x000100183ab8(auStack_80);
  }
  puVar1 = &stack0xffffffffffffff70;
  func_0x000107c61154(puVar1,PTR_s_initWithTarget_action__1125f1c48,puVar2,param_2);
  func_0x000107c615e8(puVar2);
  func_0x00010314bc50(param_1,0x112d387f8,&UNK_10d902650);
  return puVar1;
}



/* Entry: 10314b738; end: 10314b79f; -[_TtC23WebLensesImplementationP33_4056DC8D0946EE2F3C4277F8EDB9E67B26TouchDownGestureRecognizer initWithTarget:action:] */

void FUN_10314b738(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  FUN_10314b5f4(&uStack_50,param_4);
  return;
}



/* Entry: 10314b7a0; end: 10314b7f3;  */

void FUN_10314b7a0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10314b7f4; end: 10314bb43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10314b7f4(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined *puVar10;
  long lVar11;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_8;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f44e68);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f44e70);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f44e78);
  lVar3 = 0;
  FUN_10314d038();
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112f44ed0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f44ed8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f44ee0);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f44ee8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_112f44f00) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f44f08);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f44f10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f44f18);
  lVar5 = 0;
  FUN_10314a0e8();
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar11 = _DAT_112f44df0;
  func_0x00010006a340(0);
  func_0x000107c613fc();
  uVar7 = param_6;
  func_0x000107c61174();
  func_0x000107c615f0(param_1);
  uVar8 = param_4;
  func_0x000107c615f0();
  func_0x00010006a360();
  *(undefined8 *)(lVar6 + lVar11) = uVar8;
  puVar1 = (undefined8 *)(lVar6 + _DAT_112f44e18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar6 + _DAT_112f44e20);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  *(undefined **)(lVar6 + _DAT_112f44e28) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined8 *)(lVar6 + _DAT_112f44df8) = param_1;
  *(undefined1 *)(lVar6 + _DAT_112f44e00) = param_2;
  puVar1 = (undefined8 *)(lVar6 + _DAT_112f44e10);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  FUN_10314bc08(param_7,lVar6 + _DAT_112f44e08,0x112f44260,&UNK_10db90460);
  plVar9 = &lStack_70;
  lStack_70 = lVar6;
  lStack_68 = lVar5;
  func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
  *(long **)(lVar4 + _DAT_112f44ef0) = plVar9;
  *(undefined1 *)(lVar4 + _DAT_112f44ef8) = param_3;
  *(undefined8 *)(lVar4 + _DAT_112f44f20) = param_6;
  plVar9 = &lStack_80;
  lStack_80 = lVar4;
  lStack_78 = lVar3;
  func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
  *(long **)(lVar2 + _DAT_112f44e60) = plVar9;
  plVar9 = &lStack_90;
  lStack_90 = lVar2;
  lStack_88 = param_8;
  func_0x000107c61154(plVar9,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(uVar7);
  func_0x00010314bc50(param_7,0x112f44260,&UNK_10db90460);
  lVar11 = *(long *)((long)plVar9 + _DAT_112f44e60);
  puVar10 = &UNK_1106135d0;
  func_0x000107c613fc(&UNK_1106135d0,0x18,7);
  func_0x000107c61614(puVar10 + 0x10,plVar9);
  puVar1 = (undefined8 *)(lVar11 + _DAT_112f44f10);
  uVar7 = *puVar1;
  uVar8 = puVar1[1];
  *puVar1 = FUN_10314bc90;
  puVar1[1] = puVar10;
  func_0x000107c61174(lVar11);
  func_0x000107c6157c(puVar10);
  func_0x00010058d43c(uVar7,uVar8);
  func_0x000107c61574(puVar10);
  func_0x000107c61170(lVar11);
  return plVar9;
}



/* Entry: 10314bb44; end: 10314bc07;  */

/* WARNING: Possible PIC construction at 0x00010314bbe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010314bbbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010314bbe8) */

void FUN_10314bb44(long param_1)

{
  long unaff_x20;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000102be0e84();
    if (param_1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
      return;
    }
    func_0x000107c4b8b8();
    func_0x000107c3ec60();
    func_0x000107c609a4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c209fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10314bc08; end: 10314bc8f;  */

undefined8 FUN_10314bc08(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10314bc90; end: 10314bc9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10314bc90(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    pcVar2 = *(code **)(lVar1 + _DAT_112f44e78);
    if (pcVar2 == (code *)0x0) {
      func_0x000107c61170();
    }
    else {
      uVar3 = ((undefined8 *)(lVar1 + _DAT_112f44e78))[1];
      func_0x000100b64c10(pcVar2,uVar3);
      func_0x000107c61170(lVar1);
      (*pcVar2)();
      func_0x00010058d43c(pcVar2,uVar3);
    }
  }
  return;
}



/* Entry: 10314bc9c; end: 10314c057;  */

/* WARNING: Possible PIC construction at 0x00010314bcf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010314be14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010314be3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010314be70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010314be98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010314becc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010314bef4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010314bf28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010314bf68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010314bf2c) */
/* WARNING: Removing unreachable block (ram,0x00010314bef8) */
/* WARNING: Removing unreachable block (ram,0x00010314bed0) */
/* WARNING: Removing unreachable block (ram,0x00010314be9c) */
/* WARNING: Removing unreachable block (ram,0x00010314be74) */
/* WARNING: Removing unreachable block (ram,0x00010314be40) */
/* WARNING: Removing unreachable block (ram,0x00010314be18) */
/* WARNING: Removing unreachable block (ram,0x00010314bcfc) */
/* WARNING: Removing unreachable block (ram,0x00010314bd0c) */
/* WARNING: Removing unreachable block (ram,0x00010314bd34) */
/* WARNING: Removing unreachable block (ram,0x00010314bd60) */
/* WARNING: Removing unreachable block (ram,0x00010314bf6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10314bc9c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  lVar1 = _DAT_112f44ed0;
  if (*(long *)(unaff_x20 + _DAT_112f44ed0) != 0) {
    return;
  }
  FUN_10314c3b0();
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10314c058; end: 10314c25f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10314c058(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  
  if (*(char *)(unaff_x20 + _DAT_112f44ef8) == '\x01') {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f44ed0);
    if (lVar2 != 0) {
      func_0x000107c40110();
      func_0x000107c61180();
      lVar4 = lVar2;
      func_0x000107c5d90c();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      uVar3 = 0x45736e656c626577;
      func_0x000107c5fadc(0x45736e656c626577,0xec000000726f7272);
      func_0x000107c4fff8(lVar4);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(uVar3);
    }
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112f44f20);
  if (lVar2 != 0) {
    func_0x000107c61604(lVar2 + _DAT_112f44b18,0);
    lVar4 = *(long *)(lVar2 + _DAT_112f44b08);
    if (lVar4 != 0) {
      lVar5 = ((long *)(lVar2 + _DAT_112f44b08))[1];
      func_0x000107c614f0(lVar4);
      (**(code **)(lVar5 + 0x18))(lVar2,&PTR_DAT_1106130b8,lVar4,lVar5);
    }
  }
  lVar2 = _DAT_112f44ed0;
  if (*(long *)(unaff_x20 + _DAT_112f44ed0) != 0) {
    func_0x000107c5be3c();
    lVar2 = *(long *)(unaff_x20 + lVar2);
    if (lVar2 != 0) {
      func_0x000107c61174();
      uVar3 = 0;
      func_0x000107c5fadc(0,0xe000000000000000);
      func_0x000107c4b73c(lVar2);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(uVar3);
    }
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f44ed8);
  uVar3 = *puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c615e8(uVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f44ee8);
  uVar3 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c6142c(uVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f44ee0);
  uVar3 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  func_0x000107c6142c(uVar3);
  uStack_50 = *(undefined8 *)(unaff_x20 + _DAT_112f44ef0);
  func_0x000100087bd4(FUN_10314dfc8,auStack_60,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 10314c260; end: 10314c3af;  */

void FUN_10314c260(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___WKUserScript_1126d6bd0;
  func_0x000107c610f8();
  uVar2 = 0xd0000000000000eb;
  func_0x000107c5fadc(0xd0000000000000eb,0x800000010f128b30);
  func_0x000107c488ac();
  func_0x000107c61170(uVar2);
  puRam0000000113806ea0 = puVar1;
  return;
}



/* Entry: 10314c3b0; end: 10314c903;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10314c3b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long unaff_x20;
  long lVar11;
  long lStack_70;
  long lStack_68;
  
  plVar8 = &lStack_70;
  puVar2 = PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c526a4();
  func_0x000107c564a0(puVar2);
  func_0x000107c5268c(puVar2);
  puVar3 = PTR__OBJC_CLASS___WKWebsiteDataStore_1126d6c38;
  func_0x000107c61168(PTR__OBJC_CLASS___WKWebsiteDataStore_1126d6c38);
  func_0x000107c4d720();
  func_0x000107c61180();
  func_0x000107c5a6f0(puVar2);
  func_0x000107c61170(puVar3);
  uVar4 = 0x736e656c626577;
  func_0x000107c5fadc(0x736e656c626577,0xe700000000000000);
  func_0x000107c5a128(puVar2);
  func_0x000107c61170(uVar4);
  puVar3 = PTR__OBJC_CLASS___WKUserContentController_1126d44b8;
  func_0x000107c610f8(PTR__OBJC_CLASS___WKUserContentController_1126d44b8);
  func_0x000107c453e4();
  if (lRam0000000112f44f80 != -1) {
    func_0x000107c61568(0x112f44f80,FUN_10314c260);
  }
  func_0x000107c3d938(puVar3);
  if (lRam0000000112f44f88 != -1) {
    func_0x000107c61568(0x112f44f88,0x10314c340);
  }
  func_0x000107c3d938(puVar3);
  if (lRam0000000112f44f90 != -1) {
    func_0x000107c61568(0x112f44f90,0x10314c2d0);
  }
  func_0x000107c3d938(puVar3);
  if (*(char *)(unaff_x20 + _DAT_112f44ef8) == '\x01') {
    if (lRam0000000112f44a58 != -1) {
      func_0x000107c61568(0x112f44a58,FUN_103143bcc);
    }
    uVar9 = uRam0000000113806e98;
    uVar4 = uRam0000000113806e90;
    puVar5 = PTR__OBJC_CLASS___WKUserScript_1126d6bd0;
    func_0x000107c610f8(PTR__OBJC_CLASS___WKUserScript_1126d6bd0);
    func_0x000107c5fadc(uVar4,uVar9);
    func_0x000107c488ac(puVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c3d938(puVar3);
    func_0x000107c61170(puVar5);
    lVar6 = 0;
    FUN_10314dd48();
    lVar7 = lVar6;
    func_0x000107c610f8();
    lVar11 = _DAT_112f44f50;
    func_0x000107c61614(lVar7 + _DAT_112f44f50,0);
    func_0x000107c61604(lVar7 + lVar11);
    lStack_70 = lVar7;
    lStack_68 = lVar6;
    func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
    uVar4 = 0x45736e656c626577;
    func_0x000107c5fadc(0x45736e656c626577,0xec000000726f7272);
    func_0x000107c3d838(puVar3);
    func_0x000107c61170(plVar8);
    func_0x000107c61170(uVar4);
  }
  lVar11 = *(long *)(unaff_x20 + _DAT_112f44f20);
  if (lVar11 != 0) {
    puVar5 = PTR__OBJC_CLASS___WKContentWorld_1126d6e98;
    func_0x000107c61168(PTR__OBJC_CLASS___WKContentWorld_1126d6e98);
    func_0x000107c61174(lVar11);
    func_0x000107c61174();
    func_0x000107c4e2f8(puVar5);
    func_0x000107c61180();
    uVar4 = 0xd000000000000011;
    func_0x000107c5fadc(0xd000000000000011,0x800000010f128210);
    func_0x000107c3d83c(puVar3);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar4);
  }
  func_0x000107c5a308(puVar2);
  puVar5 = puVar2;
  func_0x000107c4ec80(puVar2);
  func_0x000107c61180();
  func_0x000107c55944();
  func_0x000107c61170(puVar5);
  puVar5 = puVar2;
  func_0x000107c41644();
  func_0x000107c61180();
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c5768c();
    func_0x000107c61170(puVar5);
    puVar5 = puVar2;
    func_0x000107c41644();
    func_0x000107c61180();
    if (puVar5 != (undefined *)0x0) {
      func_0x000107c526a0();
      func_0x000107c61170(puVar5);
      puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x000107c4c194();
      func_0x000107c61180();
      func_0x000107c3ec60();
      func_0x000107c61170(puVar5);
      uVar9 = 0;
      func_0x000104848678(0);
      func_0x000107c610f8();
      func_0x000107c469b0(param_1,param_2,param_3,param_4);
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c61174(uVar9);
      puVar10 = puVar5;
      func_0x000107c3fa94(puVar5);
      func_0x000107c61180();
      func_0x000107c52b50(uVar9);
      func_0x000107c61170(puVar10);
      func_0x000107c61174(uVar9);
      uVar4 = uVar9;
      func_0x000107c51a60();
      func_0x000107c61180();
      func_0x000107c3fa94(puVar5);
      func_0x000107c61180();
      func_0x000107c52b50(uVar4);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c56f90(uVar9);
      func_0x000107c61170(uVar9);
      func_0x000107c526a8(uVar9);
      func_0x000107c569dc(uVar9);
      func_0x000107c5a110(uVar9);
      uVar4 = uVar9;
      func_0x000107c51a60(uVar9);
      func_0x000107c61180();
      func_0x000107c53828();
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
      return uVar9;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10314c904);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10314c900);
  (*pcVar1)();
}



/* Entry: 10314c904; end: 10314cf4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10314c904(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  ulong param_5,undefined *param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong *puVar11;
  long extraout_x8;
  long lVar12;
  long extraout_x8_00;
  long lVar13;
  long lVar14;
  long extraout_x8_01;
  long lVar15;
  long extraout_x8_02;
  long lVar16;
  long extraout_x8_03;
  long lVar17;
  long extraout_x12;
  long unaff_x20;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  code *pcVar21;
  ulong uVar22;
  long lVar23;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  ulong uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar1 = 0;
  uStack_120 = param_3;
  uStack_118 = param_4;
  func_0x000107c5eb08();
  lVar23 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar23 + 0x40));
  lVar12 = (long)&lStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar12 - extraout_x8_00;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar17 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar17 - extraout_x12;
  lVar3 = 0;
  func_0x000107c5ec24();
  lVar18 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar16 = lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5eb9c();
  lVar20 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar20 + 0x40));
  uVar22 = lVar16 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(unaff_x20 + _DAT_112f44ed0);
  if (lVar5 == 0) {
    uStack_b0 = 0;
    puStack_a8 = (undefined *)0xe000000000000000;
    func_0x000107c602fc(0x39);
    func_0x000107c5fb78(0xd000000000000037,0x800000010f1287b0);
    func_0x000107c5fb78(param_5,param_6);
  }
  else {
    lStack_140 = lVar23;
    lStack_138 = lVar1;
    lStack_130 = lVar18;
    lStack_128 = lVar3;
    uStack_b0 = param_5;
    puStack_a8 = param_6;
    func_0x000107c61174();
    uVar6 = 0x2f;
    func_0x000107c5eb6c(uVar22,0x2f,0xe100000000000000);
    func_0x000100e8b654();
    uVar7 = uVar22;
    puVar10 = PTR___sSSN_11034da80;
    func_0x000107c601f0(uVar22,PTR___sSSN_11034da80,uVar6);
    pcVar21 = *(code **)(lVar20 + 8);
    (*pcVar21)(uVar22,lVar4);
    uVar9 = uVar7 & 0xffffffffffff;
    if (((ulong)puVar10 & 0x2000000000000000) != 0) {
      uVar9 = (ulong)puVar10 >> 0x38 & 0xf;
    }
    if (uVar9 != 0) {
      uStack_78 = 0x2f;
      uStack_70 = 0xe100000000000000;
      puVar8 = &uStack_78;
      uStack_b0 = uVar7;
      puStack_a8 = puVar10;
      func_0x000107c601dc(puVar8,PTR___sSSN_11034da80,PTR___sSSN_11034da80,uVar6,uVar6);
      uVar9 = 0;
      func_0x000100077018(0x2e2e,0xe200000000000000,puVar8);
      func_0x000107c6142c(puVar8);
      if ((uVar9 & 1) == 0) {
        func_0x000107c5ec20(lVar16);
        func_0x000107c5ec10(0x736e656c626577,0xe700000000000000);
        func_0x000107c5ebf0(0x736e656c,0xe400000000000000);
        uStack_b0 = 0x2f;
        puStack_a8 = (undefined *)0xe100000000000000;
        func_0x000107c5fb78(uVar7,puVar10);
        func_0x000107c5ebf8(uStack_b0,puStack_a8);
        func_0x000107c5ebe8(lVar13);
        lVar1 = lVar13;
        (**(code **)(lVar14 + 0x30))(lVar13,1,lVar2);
        if ((int)lVar1 == 1) {
          FUN_10314e7b0(lVar13,0x112d36580,&UNK_10d9016d0);
          uStack_b0 = 0;
          puStack_a8 = (undefined *)0xe000000000000000;
          func_0x000107c602fc(0x24);
          func_0x000107c6142c(puStack_a8);
          uStack_b0 = 0xd000000000000027;
          puStack_a8 = (undefined *)0x800000010f1287f0;
          func_0x000107c5fb78(uVar7,puVar10);
          func_0x000107c61170(lVar5);
          func_0x000107c6142c(puVar10);
          func_0x000107c6142c(puStack_a8);
        }
        else {
          func_0x000107c6142c(puVar10);
          (**(code **)(lVar14 + 0x20))(lVar15,lVar13,lVar2);
          uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112f44ef0);
          uStack_b0 = uStack_120;
          puStack_a8 = (undefined *)uStack_118;
          func_0x000107c5eb6c(uVar22,0x2f,0xe100000000000000);
          uVar9 = uVar22;
          puVar10 = PTR___sSSN_11034da80;
          func_0x000107c601f0(uVar22,PTR___sSSN_11034da80,uVar6);
          (*pcVar21)(uVar22,lVar4);
          puVar11 = &uStack_b0;
          uStack_a0 = uVar19;
          uStack_98 = param_1;
          uStack_90 = param_2;
          uStack_88 = uVar9;
          puStack_80 = puVar10;
          func_0x000100087bd4(0x10314dfe0,puVar11,PTR___sytN_11034f1b0 + 8);
          func_0x000107c6142c(puVar10);
          uStack_b0 = 0;
          puStack_a8 = (undefined *)0xe000000000000000;
          func_0x000107c602fc(0x10);
          func_0x000107c6142c(puStack_a8);
          uStack_b0 = 0x697461676976614e;
          puStack_a8 = (undefined *)0xee00206f7420676e;
          func_0x000107c5ed70();
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar11);
          func_0x000107c6142c(puStack_a8);
          (**(code **)(lVar14 + 0x10))(lVar17,lVar15,lVar2);
          func_0x000107c5eaec(lVar12,0x404e000000000000,lVar17,0);
          func_0x000107c5eae0();
          (**(code **)(lStack_140 + 8))(lVar12,lStack_138);
          lVar1 = lVar5;
          func_0x000107c4b768(lVar5);
          func_0x000107c61180();
          func_0x000107c61170(lVar17);
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar5);
          (**(code **)(lVar14 + 8))(lVar15,lVar2);
        }
        (**(code **)(lStack_130 + 8))(lVar16,lStack_128);
        return;
      }
    }
    func_0x000107c6142c(puVar10);
    uStack_b0 = 0;
    puStack_a8 = (undefined *)0xe000000000000000;
    func_0x000107c602fc(0x16);
    func_0x000107c6142c(puStack_a8);
    uStack_b0 = 0xd000000000000014;
    puStack_a8 = (undefined *)0x800000010f128820;
    func_0x000107c5fb78(param_5,param_6);
    func_0x000107c61170(lVar5);
  }
  func_0x000107c6142c(puStack_a8);
  return;
}



/* Entry: 10314cf4c; end: 10314cf77; -[_TtC23WebLensesImplementation18WebLensWebViewHost init] */

void FUN_10314cf4c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebLensesImplementation.WebLensWebViewHost",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10314cf78);
  (*pcVar1)();
}



/* Entry: 10314cf78; end: 10314cf7b;  */

void FUN_10314cf78(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10314cf7c; end: 10314d037; -[_TtC23WebLensesImplementation18WebLensWebViewHost .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010314cf98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010314cfe0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010314cf9c) */
/* WARNING: Removing unreachable block (ram,0x00010314cfe4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10314cf7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f44ed0));
  return;
}



/* Entry: 10314d038; end: 10314d057;  */

void FUN_10314d038(void)

{
  func_0x000107c61168(&PTR_PTR_1128ba6f8);
  return;
}



/* Entry: 10314d058; end: 10314d05b; -[_TtC23WebLensesImplementation18WebLensWebViewHost webView:didStartProvisionalNavigation:] */

void FUN_10314d058(void)

{
  return;
}



/* Entry: 10314d05c; end: 10314d0c3; -[_TtC23WebLensesImplementation18WebLensWebViewHost webView:didFinishNavigation:] */

/* WARNING: Possible PIC construction at 0x00010314d0a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010314d0a8) */

void FUN_10314d05c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_10314e000(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10314d0c4; end: 10314d337;  */

/* WARNING: Possible PIC construction at 0x00010314d1a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010314d1e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010314d300: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010314d1e4) */
/* WARNING: Removing unreachable block (ram,0x00010314d1ac) */
/* WARNING: Removing unreachable block (ram,0x00010314d21c) */
/* WARNING: Removing unreachable block (ram,0x00010314d1c0) */
/* WARNING: Removing unreachable block (ram,0x00010314d228) */
/* WARNING: Removing unreachable block (ram,0x00010314d234) */
/* WARNING: Removing unreachable block (ram,0x00010314d2a0) */
/* WARNING: Removing unreachable block (ram,0x00010314d27c) */
/* WARNING: Removing unreachable block (ram,0x00010314d2c0) */
/* WARNING: Removing unreachable block (ram,0x00010314d2c4) */
/* WARNING: Removing unreachable block (ram,0x00010314d1d0) */
/* WARNING: Removing unreachable block (ram,0x00010314d304) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10314d0c4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if (*(char *)(unaff_x20 + _DAT_112f44ef8) != '\x01') {
    return;
  }
  func_0x000107c5ed2c(param_1);
  if (*(long *)(unaff_x20 + _DAT_112f44f18) != 0) {
    func_0x000107c6157c(((long *)(unaff_x20 + _DAT_112f44f18))[1]);
    func_0x000107c4b85c(param_1);
    func_0x000107c61180();
    func_0x000107c5faec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10314d338; end: 10314d407; -[_TtC23WebLensesImplementation18WebLensWebViewHost webView:didFailNavigation:withError:] */

void FUN_10314d338(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 in_x4;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  func_0x000107c61174(in_x4);
  func_0x000107c61174(param_1);
  func_0x000107c602fc(0x15);
  func_0x000107c6142c(uStack_38);
  uStack_40 = 0xd000000000000013;
  uStack_38 = 0x800000010f128900;
  func_0x000107c614cc(in_x4,auStack_48,auStack_60);
  uVar1 = uStack_50;
  func_0x000107c60640(uStack_58,uStack_50);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uStack_38);
  FUN_10314d0c4(in_x4);
  func_0x000107c61170(in_x4);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10314d408; end: 10314d4d7; -[_TtC23WebLensesImplementation18WebLensWebViewHost webView:didFailProvisionalNavigation:withError:] */

void FUN_10314d408(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 in_x4;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  func_0x000107c61174(in_x4);
  func_0x000107c61174(param_1);
  func_0x000107c602fc(0x21);
  func_0x000107c6142c(uStack_38);
  uStack_40 = 0xd00000000000001f;
  uStack_38 = 0x800000010f1288e0;
  func_0x000107c614cc(in_x4,auStack_48,auStack_60);
  uVar1 = uStack_50;
  func_0x000107c60640(uStack_58,uStack_50);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uStack_38);
  FUN_10314d0c4(in_x4);
  func_0x000107c61170(in_x4);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10314d4d8; end: 10314d567; -[_TtC23WebLensesImplementation18WebLensWebViewHost webView:decidePolicyForNavigationAction:decisionHandler:] */

/* WARNING: Possible PIC construction at 0x00010314d548: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010314d54c) */

void FUN_10314d4d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c60bc4(param_5);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_10314e1dc(param_4,param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10314d568; end: 10314d5b3; -[_TtC23WebLensesImplementation18WebLensWebViewHost webViewWebContentProcessDidTerminate:] */

/* WARNING: Possible PIC construction at 0x00010314d59c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010314d5a0) */

void FUN_10314d568(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10314e4e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10314d5b4; end: 10314d5c3; -[_TtC23WebLensesImplementation18WebLensWebViewHost webView:requestMediaCapturePermissionForOrigin:initiatedByFrame:type:decisionHandler:] */

void FUN_10314d5b4(void)

{
  long in_x6;
  
                    /* WARNING: Could not recover jumptable at 0x00010314d5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x6 + 0x10))(in_x6,2);
  return;
}



/* Entry: 10314d5c4; end: 10314d5d3; -[_TtC23WebLensesImplementation18WebLensWebViewHost webView:requestDeviceOrientationAndMotionPermissionForOrigin:initiatedByFrame:decisionHandler:] */

void FUN_10314d5c4(void)

{
  long in_x5;
  
                    /* WARNING: Could not recover jumptable at 0x00010314d5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x5 + 0x10))(in_x5,2);
  return;
}



/* Entry: 10314d5d4; end: 10314d5e3; -[_TtC23WebLensesImplementation18WebLensWebViewHost webView:runOpenPanelWithParameters:initiatedByFrame:completionHandler:] */

void FUN_10314d5d4(void)

{
  long in_x5;
  
                    /* WARNING: Could not recover jumptable at 0x00010314d5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x5 + 0x10))(in_x5,0);
  return;
}



/* Entry: 10314d5e4; end: 10314d5eb; -[_TtC23WebLensesImplementation18WebLensWebViewHost webView:createWebViewWithConfiguration:forNavigationAction:windowFeatures:] */

void FUN_10314d5e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10314d5ec; end: 10314dc6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10314d5ec(undefined8 param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  code *pcVar12;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  func_0x0001000bb420(param_1,&lStack_b0);
  uVar13 = 0x112d472a8;
  func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
  puVar1 = PTR___sypN_11034f1a8;
  plVar2 = &lStack_110;
  func_0x000107c6147c(plVar2,&lStack_b0,PTR___sypN_11034f1a8 + 8,uVar13,6);
  lVar7 = lStack_110;
  if (((ulong)plVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(lStack_110 + 0x10) == 0) goto LAB_10314d830;
  func_0x000107c61434(lStack_110);
  lVar3 = 0x646e696b;
  uVar4 = 0;
  func_0x000100029284(0x646e696b);
  if ((uVar4 & 1) == 0) {
    func_0x000107c6142c(lVar7);
    goto LAB_10314d830;
  }
  func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar3 * 0x20,&lStack_b0);
  func_0x000107c6142c(lVar7);
  plVar2 = &lStack_110;
  func_0x000107c6147c(plVar2,&lStack_b0,puVar1 + 8,PTR___sSSN_11034da80,6);
  lVar5 = lStack_108;
  lVar3 = lStack_110;
  if (((ulong)plVar2 & 1) == 0) goto LAB_10314d830;
  uVar4 = 0x7468677561636e75;
  if (((lStack_110 == 0x7468677561636e75) && (lStack_108 == -0x11ff8d908d8d9aa1)) ||
     (func_0x000107c605b8(0x7468677561636e75,0xee00726f7272655f,lStack_110,lStack_108,0),
     (uVar4 & 1) != 0)) {
    lVar3 = 0;
  }
  else {
    if ((lVar3 != -0x2fffffffffffffed) || (lVar5 != -0x7ffffffef0ed7790)) {
      uVar4 = 0xd000000000000013;
      func_0x000107c605b8(0xd000000000000013,0x800000010f128870,lVar3,lVar5,0);
      if ((uVar4 & 1) == 0) {
        uVar4 = 0x5f656c6f736e6f63;
        if (((lVar3 != 0x5f656c6f736e6f63) || (lVar5 != -0x12ffff8d908d8d9b)) &&
           (func_0x000107c605b8(0x5f656c6f736e6f63,0xed0000726f727265,lVar3,lVar5,0),
           (uVar4 & 1) == 0)) {
          func_0x000107c6142c(lVar7);
          lStack_b0 = 0;
          lStack_a8 = 0xe000000000000000;
          func_0x000107c602fc(0x2b);
          func_0x000107c6142c(lStack_a8);
          lStack_b0 = -0x2fffffffffffffd7;
          lStack_a8 = -0x7ffffffef0ed7770;
          func_0x000107c5fb78(lVar3,lVar5);
          func_0x000107c6142c(lVar5);
          lVar7 = lStack_a8;
          goto LAB_10314d830;
        }
        lVar3 = 2;
        goto LAB_10314d6fc;
      }
    }
    lVar3 = 1;
  }
LAB_10314d6fc:
  func_0x000107c6142c(lVar5);
  if (0x31 < *(long *)(unaff_x20 + _DAT_112f44f00)) {
LAB_10314d830:
    func_0x000107c6142c(lVar7);
    return;
  }
  *(long *)(unaff_x20 + _DAT_112f44f00) = *(long *)(unaff_x20 + _DAT_112f44f00) + 1;
  pcVar12 = *(code **)(unaff_x20 + _DAT_112f44f18);
  if (pcVar12 == (code *)0x0) goto LAB_10314d830;
  uVar13 = ((undefined8 *)(unaff_x20 + _DAT_112f44f18))[1];
  if (*(long *)(lVar7 + 0x10) == 0) {
    func_0x000107c6157c(uVar13);
LAB_10314d8b4:
    lVar5 = 0;
    lVar14 = -0x2000000000000000;
  }
  else {
    func_0x000107c61434(lVar7);
    FUN_10314e7a0(pcVar12,uVar13);
    lVar5 = 0x6567617373656d;
    uVar4 = 0;
    func_0x000100029284(0x6567617373656d);
    if ((uVar4 & 1) == 0) {
      func_0x000107c6142c(lVar7);
      goto LAB_10314d8b4;
    }
    func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar5 * 0x20,&lStack_b0);
    func_0x000107c6142c(lVar7);
    plVar2 = &lStack_110;
    puVar10 = PTR___sSSN_11034da80;
    func_0x000107c6147c(plVar2,&lStack_b0,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar14 = lStack_108;
    lVar5 = lStack_110;
    if (((ulong)plVar2 & 1) == 0) goto LAB_10314d8b4;
    func_0x000107c61434(lStack_108);
    lVar8 = lVar5;
    func_0x000107c5fb5c(lVar5,lVar14);
    if (lVar8 < 0x401) {
      func_0x000107c6142c(lVar14);
    }
    else {
      lVar6 = 0x400;
      lVar8 = lVar14;
      func_0x000101297580(0x400,lVar5,lVar14);
      func_0x000107c6142c(lVar14);
      func_0x000107c5fb2c(lVar6,lVar5,lVar8,puVar10);
      func_0x000107c6142c(puVar10);
      func_0x000107c6142c(lVar14);
      lVar14 = lVar5;
      lVar5 = lVar6;
    }
  }
  if (*(long *)(lVar7 + 0x10) == 0) {
LAB_10314d9b0:
    lVar15 = *(long *)(lVar7 + 0x10);
    lVar9 = 0;
    lVar8 = -0x2000000000000000;
joined_r0x00010314d9c0:
    if (lVar15 == 0) goto LAB_10314daa0;
LAB_10314d9c4:
    func_0x000107c61434(lVar7);
    lVar6 = 0x656372756f73;
    uVar4 = 0;
    func_0x000100029284(0x656372756f73);
    if ((uVar4 & 1) == 0) {
      func_0x000107c6142c(lVar7);
      goto LAB_10314daa0;
    }
    func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar6 * 0x20,&lStack_b0);
    func_0x000107c6142c(lVar7);
    plVar2 = &lStack_110;
    puVar10 = PTR___sSSN_11034da80;
    func_0x000107c6147c(plVar2,&lStack_b0,puVar1 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)plVar2 & 1) == 0) goto LAB_10314daa0;
    func_0x000107c61434(lStack_108);
    lVar6 = lStack_110;
    func_0x000107c5fb5c(lStack_110,lStack_108);
    if (lVar6 < 0x401) {
      func_0x000107c6142c(lStack_108);
      lVar11 = *(long *)(lVar7 + 0x10);
      lVar6 = lStack_110;
      lVar15 = lStack_108;
      goto joined_r0x00010314dc0c;
    }
    lVar6 = 0x400;
    lVar15 = lStack_110;
    lVar11 = lStack_108;
    func_0x000101297580();
    func_0x000107c6142c(lStack_108);
    func_0x000107c5fb2c(lVar6,lVar15,lVar11,puVar10);
    func_0x000107c6142c(puVar10);
    func_0x000107c6142c(lStack_108);
    if (*(long *)(lVar7 + 0x10) != 0) goto LAB_10314dab0;
LAB_10314daf0:
    uStack_c8 = 0;
    uStack_d0 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x000107c61434(lVar7);
    lVar8 = 0x6b63617473;
    uVar4 = 0;
    func_0x000100029284(0x6b63617473);
    if ((uVar4 & 1) == 0) {
      func_0x000107c6142c(lVar7);
      goto LAB_10314d9b0;
    }
    func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar8 * 0x20,&lStack_b0);
    func_0x000107c6142c(lVar7);
    plVar2 = &lStack_110;
    puVar10 = PTR___sSSN_11034da80;
    func_0x000107c6147c(plVar2,&lStack_b0,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar6 = lStack_108;
    lVar8 = lStack_110;
    if (((ulong)plVar2 & 1) == 0) goto LAB_10314d9b0;
    func_0x000107c61434(lStack_108);
    lVar9 = lVar8;
    func_0x000107c5fb5c(lVar8,lVar6);
    if (lVar9 < 0x1001) {
      func_0x000107c6142c(lVar6);
      lVar15 = *(long *)(lVar7 + 0x10);
      lVar9 = lVar8;
      lVar8 = lVar6;
      goto joined_r0x00010314d9c0;
    }
    lVar9 = 0x1000;
    lVar15 = lVar6;
    func_0x000101297580(0x1000,lVar8,lVar6);
    func_0x000107c6142c(lVar6);
    func_0x000107c5fb2c(lVar9,lVar8,lVar15,puVar10);
    func_0x000107c6142c(puVar10);
    func_0x000107c6142c(lVar6);
    if (*(long *)(lVar7 + 0x10) != 0) goto LAB_10314d9c4;
LAB_10314daa0:
    lVar6 = 0;
    lVar15 = -0x2000000000000000;
    lVar11 = *(long *)(lVar7 + 0x10);
joined_r0x00010314dc0c:
    if (lVar11 == 0) goto LAB_10314daf0;
LAB_10314dab0:
    func_0x000107c61434(lVar7);
    lVar11 = 0x656e696c;
    uVar4 = 0;
    func_0x000100029284(0x656e696c);
    if ((uVar4 & 1) == 0) {
      func_0x000107c6142c(lVar7);
      goto LAB_10314daf0;
    }
    func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar11 * 0x20,&uStack_d0);
    func_0x000107c6142c(lVar7);
  }
  func_0x000107c6142c(lVar7);
  if (lStack_b8 == 0) {
    func_0x00010314e7b0(&uStack_d0,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar2 = &lStack_b0;
    func_0x000107c6147c(plVar2,&uStack_d0,puVar1 + 8,PTR___sSiN_11034deb0,6);
    if ((int)plVar2 != 0) goto LAB_10314db4c;
  }
  lStack_b0 = 0;
LAB_10314db4c:
  lStack_110 = lVar3;
  lStack_108 = lVar5;
  lStack_100 = lVar14;
  lStack_f8 = lVar9;
  lStack_f0 = lVar8;
  lStack_e8 = lVar6;
  lStack_e0 = lVar15;
  lStack_d8 = lStack_b0;
  lStack_78 = lStack_b0;
  lStack_b0 = lVar3;
  lStack_a8 = lVar5;
  lStack_a0 = lVar14;
  lStack_98 = lVar9;
  lStack_90 = lVar8;
  lStack_88 = lVar6;
  lStack_80 = lVar15;
  (*pcVar12)(&lStack_b0);
  func_0x00010314e7f0(&lStack_110);
  func_0x000100d372f0(pcVar12,uVar13);
  return;
}



/* Entry: 10314dc70; end: 10314dcd7; -[_TtC23WebLensesImplementationP33_D5DA41BA9856C113C2F4E0428FC29BF318ScriptMessageProxy userContentController:didReceiveScriptMessage:] */

/* WARNING: Possible PIC construction at 0x00010314dcb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010314dcbc) */

void FUN_10314dc70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x00010314e690(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


