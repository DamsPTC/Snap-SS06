/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100fe972c; end: 100fe97af;  */

void FUN_100fe972c(void)

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



/* Entry: 100fe97b0; end: 100fe97d7;  */

bool FUN_100fe97b0(void)

{
  char *unaff_x20;
  
  return *unaff_x20 != '\x02';
}



/* Entry: 100fe97d8; end: 100fe99af;  */

void FUN_100fe97d8(undefined **param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_90;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  uVar3 = 0;
  if ((long)param_1 < 0) {
    func_0x000107c614cc((ulong)param_1 & 0x7fffffffffffffff,auStack_48,auStack_60);
    FUN_101010328(uStack_58,uStack_50);
  }
  else {
    ppuStack_90 = param_1;
    func_0x000107c614b0();
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    uVar2 = 0x112d53600;
    func_0x0001000285a8(0x112d53600,&UNK_10d91a660);
    func_0x000107c6147c(&uStack_c0,&ppuStack_90,uVar1,uVar2,0xe);
    if ((uVar3 & 1) == 0) {
      uStack_a0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      lVar6 = 0x112d53608;
      FUN_100fea12c(&uStack_c0,0x112d53608,&UNK_10d91a010);
      func_0x000107c5ed2c();
      ppuVar4 = param_1;
      func_0x000107c42210();
      func_0x000107c61180();
      ppuVar5 = ppuVar4;
      func_0x000107c5faec();
      lVar7 = lVar6;
      func_0x000107c61170(ppuVar4);
      func_0x000107c3fcb0();
      ppuVar4 = &PTR____CFConstantStringClassReference_110e877f8;
      func_0x000107c5faec();
      if ((ppuVar4 == ppuVar5) && (lVar7 == lVar6)) {
        func_0x000107c6142c(lVar6);
        func_0x000107c6142c(lVar7);
        func_0x000107c61170(param_1);
      }
      else {
        func_0x000107c605b8();
        func_0x000107c6142c(lVar6);
        func_0x000107c6142c(lVar7);
        func_0x000107c61170(param_1);
      }
    }
    else {
      FUN_100c9f42c(&uStack_c0,auStack_88);
      func_0x0001000a8868(auStack_88,uStack_70);
      (**(code **)(lStack_68 + 0x10))(uStack_70,lStack_68);
      func_0x0001000834e4(auStack_88);
    }
  }
  return;
}



/* Entry: 100fe99b0; end: 100fe9fc3;  */

undefined8 FUN_100fe99b0(undefined **param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  iVar1 = (int)&uStack_b0;
  ppuVar11 = (undefined **)((ulong)param_1 & 0x7fffffffffffffff);
  ppuVar4 = ppuVar11;
  if (-1 < (long)param_1) {
    ppuVar4 = param_1;
  }
  ppuStack_80 = ppuVar4;
  func_0x000107c614b0(ppuVar11);
  func_0x000107c614b0(ppuVar11);
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  uVar3 = 0x112d511d0;
  func_0x0001000285a8(0x112d511d0,&UNK_10d91a670);
  func_0x000107c6147c(&uStack_b0,&ppuStack_80,uVar2,uVar3,0xe);
  if (iVar1 != 0) {
    FUN_100c9f42c(&uStack_b0,auStack_78);
    func_0x0001000a8868(auStack_78,uStack_60);
    uVar2 = uStack_60;
    (**(code **)(lStack_58 + 0x10))(uStack_60,lStack_58);
    func_0x000107c614ac(ppuVar11);
    func_0x0001000834e4(auStack_78);
    return uVar2;
  }
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  lVar8 = 0x112d511d8;
  FUN_100fea12c(&uStack_b0,0x112d511d8,&UNK_10d917cb0);
  func_0x000107c5ed2c();
  ppuVar5 = ppuVar4;
  func_0x000107c42210();
  func_0x000107c61180();
  ppuVar6 = ppuVar5;
  func_0x000107c5faec();
  lVar9 = lVar8;
  func_0x000107c61170(ppuVar5);
  ppuVar7 = ppuVar4;
  func_0x000107c3fcb0();
  ppuVar5 = &PTR____CFConstantStringClassReference_110e877f8;
  func_0x000107c5faec();
  if ((ppuVar5 == ppuVar6) && (lVar9 == lVar8)) {
    func_0x000107c6142c(lVar9);
    lVar10 = lVar9;
LAB_100fe9b2c:
    if (ppuVar7 == (undefined **)0xb) {
      func_0x000107c6142c(lVar8);
      func_0x000107c61170(ppuVar4);
      func_0x000107c614ac(ppuVar11);
      return 0x19;
    }
  }
  else {
    lVar10 = lVar9;
    func_0x000107c605b8();
    func_0x000107c6142c(lVar9);
    if (((ulong)ppuVar5 & 1) != 0) goto LAB_100fe9b2c;
  }
  ppuVar5 = &PTR____CFConstantStringClassReference_110e877f8;
  func_0x000107c5faec();
  if ((ppuVar5 == ppuVar6) && (lVar10 == lVar8)) {
    func_0x000107c6142c(lVar10);
    lVar9 = lVar10;
LAB_100fe9ba0:
    if (ppuVar7 == (undefined **)0x1d) {
      func_0x000107c6142c(lVar8);
      func_0x000107c61170(ppuVar4);
      func_0x000107c614ac(ppuVar11);
      return 0x12;
    }
  }
  else {
    lVar9 = lVar10;
    func_0x000107c605b8();
    func_0x000107c6142c(lVar10);
    if (((ulong)ppuVar5 & 1) != 0) goto LAB_100fe9ba0;
  }
  ppuVar5 = &PTR____CFConstantStringClassReference_110e877f8;
  func_0x000107c5faec();
  if ((ppuVar5 == ppuVar6) && (lVar9 == lVar8)) {
    func_0x000107c6142c(lVar9);
    lVar10 = lVar9;
LAB_100fe9c14:
    if (ppuVar7 == (undefined **)0x1e) {
      func_0x000107c6142c(lVar8);
      func_0x000107c61170(ppuVar4);
      func_0x000107c614ac(ppuVar11);
      return 0x13;
    }
  }
  else {
    lVar10 = lVar9;
    func_0x000107c605b8();
    func_0x000107c6142c(lVar9);
    if (((ulong)ppuVar5 & 1) != 0) goto LAB_100fe9c14;
  }
  ppuVar5 = &PTR____CFConstantStringClassReference_110e877f8;
  func_0x000107c5faec();
  if ((ppuVar5 == ppuVar6) && (lVar10 == lVar8)) {
    func_0x000107c6142c(lVar10);
    lVar9 = lVar10;
LAB_100fe9c88:
    if (ppuVar7 == (undefined **)0x1f) {
      func_0x000107c6142c(lVar8);
      func_0x000107c61170(ppuVar4);
      func_0x000107c614ac(ppuVar11);
      return 0x14;
    }
  }
  else {
    lVar9 = lVar10;
    func_0x000107c605b8();
    func_0x000107c6142c(lVar10);
    if (((ulong)ppuVar5 & 1) != 0) goto LAB_100fe9c88;
  }
  ppuVar5 = &PTR____CFConstantStringClassReference_110e877f8;
  func_0x000107c5faec();
  if ((ppuVar5 == ppuVar6) && (lVar9 == lVar8)) {
    func_0x000107c6142c(lVar9);
    lVar10 = lVar9;
LAB_100fe9cfc:
    if (ppuVar7 == (undefined **)0x20) {
      func_0x000107c6142c(lVar8);
      func_0x000107c61170(ppuVar4);
      func_0x000107c614ac(ppuVar11);
      return 0x15;
    }
  }
  else {
    lVar10 = lVar9;
    func_0x000107c605b8();
    func_0x000107c6142c(lVar9);
    if (((ulong)ppuVar5 & 1) != 0) goto LAB_100fe9cfc;
  }
  ppuVar5 = &PTR____CFConstantStringClassReference_110e877f8;
  func_0x000107c5faec();
  if ((ppuVar5 == ppuVar6) && (lVar10 == lVar8)) {
    func_0x000107c6142c(lVar10);
    lVar9 = lVar10;
LAB_100fe9d70:
    if (ppuVar7 == (undefined **)0x21) {
      func_0x000107c6142c(lVar8);
      func_0x000107c61170(ppuVar4);
      func_0x000107c614ac(ppuVar11);
      return 0x16;
    }
  }
  else {
    lVar9 = lVar10;
    func_0x000107c605b8();
    func_0x000107c6142c(lVar10);
    if (((ulong)ppuVar5 & 1) != 0) goto LAB_100fe9d70;
  }
  ppuVar5 = &PTR____CFConstantStringClassReference_110e877f8;
  func_0x000107c5faec();
  if ((ppuVar5 == ppuVar6) && (lVar9 == lVar8)) {
    func_0x000107c6142c(lVar9);
    lVar10 = lVar9;
LAB_100fe9de4:
    if (ppuVar7 == (undefined **)0x22) {
      func_0x000107c6142c(lVar8);
      func_0x000107c61170(ppuVar4);
      func_0x000107c614ac(ppuVar11);
      return 0x17;
    }
  }
  else {
    lVar10 = lVar9;
    func_0x000107c605b8();
    func_0x000107c6142c(lVar9);
    if (((ulong)ppuVar5 & 1) != 0) goto LAB_100fe9de4;
  }
  ppuVar5 = &PTR____CFConstantStringClassReference_110e877f8;
  func_0x000107c5faec();
  if ((ppuVar5 == ppuVar6) && (lVar10 == lVar8)) {
    func_0x000107c6142c(lVar10);
    lVar9 = lVar10;
LAB_100fe9e58:
    if (ppuVar7 == (undefined **)0x8) {
      func_0x000107c6142c(lVar8);
      func_0x000107c61170(ppuVar4);
      func_0x000107c614ac(ppuVar11);
      return 0x18;
    }
  }
  else {
    lVar9 = lVar10;
    func_0x000107c605b8();
    func_0x000107c6142c(lVar10);
    if (((ulong)ppuVar5 & 1) != 0) goto LAB_100fe9e58;
  }
  ppuVar5 = &PTR____CFConstantStringClassReference_110e877f8;
  func_0x000107c5faec();
  if ((ppuVar5 == ppuVar6) && (lVar9 == lVar8)) {
    func_0x000107c6142c(lVar9);
    lVar10 = lVar9;
  }
  else {
    lVar10 = lVar9;
    func_0x000107c605b8();
    func_0x000107c6142c(lVar9);
    if (((ulong)ppuVar5 & 1) == 0) goto LAB_100fe9ef4;
  }
  if (ppuVar7 == (undefined **)0x1a) {
    func_0x000107c6142c(lVar8);
    func_0x000107c61170(ppuVar4);
    func_0x000107c614ac(ppuVar11);
    return 0x1a;
  }
LAB_100fe9ef4:
  ppuVar5 = &PTR____CFConstantStringClassReference_110e877f8;
  func_0x000107c5faec();
  if ((ppuVar5 == ppuVar6) && (lVar10 == lVar8)) {
    func_0x000107c61434(lVar8);
    func_0x000107c614ac(ppuVar11);
    func_0x000107c6142c(lVar10);
    func_0x000107c61430(lVar8,2);
    func_0x000107c61170(ppuVar4);
  }
  else {
    func_0x000107c605b8();
    func_0x000107c61434(lVar8);
    func_0x000107c614ac(ppuVar11);
    func_0x000107c6142c(lVar10);
    func_0x000107c61430(lVar8,2);
    func_0x000107c61170(ppuVar4);
    if (((ulong)ppuVar5 & 1) == 0) {
      return 0x1b;
    }
  }
  if (ppuVar7 != (undefined **)0x10) {
    return 0x1b;
  }
  return 0x1f;
}



/* Entry: 100fe9fc4; end: 100fe9fe3;  */

void FUN_100fe9fc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 100fe9fe4; end: 100fea063;  */

void FUN_100fe9fe4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d535d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d919fd0;
  func_0x000107c61520(&UNK_10d919fd0,&UNK_110374bb8);
  puRam0000000112d535d8 = puVar1;
  return;
}



/* Entry: 100fea064; end: 100fea067;  */

void FUN_100fea064(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d535e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d919e88;
  func_0x000107c61520(&UNK_10d919e88,&UNK_110374b28);
  puRam0000000112d535e8 = puVar1;
  return;
}



/* Entry: 100fea068; end: 100fea0e7;  */

void FUN_100fea068(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d535e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d919e88;
  func_0x000107c61520(&UNK_10d919e88,&UNK_110374b28);
  puRam0000000112d535e8 = puVar1;
  return;
}



/* Entry: 100fea0e8; end: 100fea0eb;  */

void FUN_100fea0e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d535f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d919f28;
  func_0x000107c61520(&UNK_10d919f28,&UNK_110374a98);
  puRam0000000112d535f8 = puVar1;
  return;
}



/* Entry: 100fea0ec; end: 100fea12b;  */

void FUN_100fea0ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d535f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d919f28;
  func_0x000107c61520(&UNK_10d919f28,&UNK_110374a98);
  puRam0000000112d535f8 = puVar1;
  return;
}



/* Entry: 100fea12c; end: 100fea16b;  */

undefined8 FUN_100fea12c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100fea16c; end: 100fea1db;  */

undefined1 FUN_100fea16c(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 100fea1dc; end: 100fea277;  */

/* WARNING: Possible PIC construction at 0x000100fea21c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100fea220) */

void FUN_100fea1dc(void)

{
  func_0x000107c602fc(0x1b);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe000000000000000);
  return;
}



/* Entry: 100fea278; end: 100fea3eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fea278(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long alStack_90 [2];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [40];
  
  lVar1 = 0x112d50c58;
  func_0x0001000285a8(0x112d50c58,&UNK_10d9175c0);
  lVar9 = *(long *)(lVar1 + -8);
  lVar7 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar7 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &UNK_110374d20;
  func_0x000107c613fc(&UNK_110374d20,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  FUN_100fee750(unaff_x20 + 0x48,auStack_78);
  (**(code **)(lVar9 + 0x10))(auStack_80 + -extraout_x8,param_1,lVar1);
  uVar6 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar10 = uVar6 + 0x38 & (uVar6 ^ 0xffffffffffffffff);
  uVar8 = lVar7 + uVar10 + 7 & 0xfffffffffffffff8;
  puVar3 = &UNK_110374dc0;
  func_0x000107c613fc(&UNK_110374dc0,uVar8 + 8,uVar6 | 7);
  FUN_100c9f624(auStack_78,puVar3 + 0x10);
  (**(code **)(lVar9 + 0x20))(puVar3 + uVar10,auStack_80 + -extraout_x8,lVar1);
  *(undefined **)(puVar3 + uVar8) = puVar2;
  *(undefined **)((long)alStack_90 + -extraout_x8) = PTR___sytN_11034f1b0 + 8;
  uVar4 = 0x41;
  func_0x000100859150(0x41,0,0x48,3,0,0,&UNK_10d91a1a0,puVar3);
  func_0x000107c61574(puVar3);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d53670);
  *(undefined8 *)(unaff_x20 + _DAT_112d53670) = uVar4;
  func_0x000107c61574(uVar5);
  return;
}



/* Entry: 100fea3ec; end: 100fea78f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fea3ec(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  code *pcVar12;
  undefined1 auStack_90 [8];
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  long lStack_70;
  undefined8 uStack_68;
  
  lVar4 = 0x112d53870;
  func_0x0001000285a8(0x112d53870,&UNK_10d91abf0);
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_90 + -extraout_x8;
  lVar5 = 0x112d53810;
  func_0x0001000285a8(0x112d53810,&UNK_10d91a118);
  lVar10 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = _DAT_112d53618;
  (**(code **)(lVar10 + 0x10))((long)puVar8 - extraout_x8_00,unaff_x20 + _DAT_112d53618,lVar5);
  func_0x000107c5fd2c(lVar5);
  pcVar12 = *(code **)(lVar10 + 8);
  (*pcVar12)((long)puVar8 - extraout_x8_00,lVar5);
  lStack_88 = _DAT_112d53640;
  (**(code **)(lVar9 + 0x10))(puVar8,unaff_x20 + _DAT_112d53640,lVar4);
  func_0x000107c5fd2c(lVar4);
  pcVar11 = *(code **)(lVar9 + 8);
  (*pcVar11)(puVar8,lVar4);
  lVar9 = _DAT_112d53620;
  puVar1 = PTR___sytN_11034f1b0;
  lVar10 = *(long *)(unaff_x20 + _DAT_112d53620);
  if (lVar10 != 0) {
    func_0x000107c6157c(lVar10);
    uVar7 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c5fd50(lVar10,puVar1 + 8,uVar7,PTR___ss5ErrorWS_11034ee10);
    func_0x000107c61574(lVar10);
  }
  lStack_80 = _DAT_112d53670;
  lVar10 = *(long *)(unaff_x20 + _DAT_112d53670);
  if (lVar10 != 0) {
    func_0x000107c6157c(lVar10);
    uVar7 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c5fd50(lVar10,puVar1 + 8,uVar7,PTR___ss5ErrorWS_11034ee10);
    func_0x000107c61574(lVar10);
  }
  lVar10 = _DAT_112d53628;
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d53628);
  func_0x000107c6157c(uVar7);
  func_0x0001000c74f0(auStack_78);
  func_0x000107c61574(uVar7);
  if (lStack_70 != 0) {
    func_0x000107c3f474(uStack_68);
    func_0x000107c615e8(uStack_68);
    func_0x000107c6142c(lStack_70);
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001000834e4(unaff_x20 + 0x20);
  func_0x0001000834e4(unaff_x20 + 0x48);
  func_0x0001000834e4(unaff_x20 + 0x70);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  lVar2 = _DAT_112d53610;
  lVar6 = 0x112d53800;
  func_0x0001000285a8(0x112d53800,&UNK_10d91ad10);
  (**(code **)(*(long *)(lVar6 + -8) + 8))(unaff_x20 + lVar2,lVar6);
  (*pcVar12)(unaff_x20 + lVar3,lVar5);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + lVar9));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + lVar10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112d53630));
  lVar3 = _DAT_112d53638;
  lVar5 = 0x112d53808;
  func_0x0001000285a8(0x112d53808,&UNK_10d91a100);
  (**(code **)(*(long *)(lVar5 + -8) + 8))(unaff_x20 + lVar3,lVar5);
  (*pcVar11)(unaff_x20 + lStack_88,lVar4);
  lVar5 = _DAT_112d53648;
  lVar4 = 0x112d53868;
  func_0x0001000285a8(0x112d53868,&UNK_10d91a190);
  (**(code **)(*(long *)(lVar4 + -8) + 8))(unaff_x20 + lVar5,lVar4);
  lVar5 = _DAT_112d53650;
  lVar4 = 0x112d53850;
  func_0x0001000285a8(0x112d53850,&UNK_10d91ad40);
  (**(code **)(*(long *)(lVar4 + -8) + 8))(unaff_x20 + lVar5,lVar4);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + _DAT_112d53658));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112d53660));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112d53668));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + lStack_80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112d53678));
  return;
}



/* Entry: 100fea790; end: 100fea7b3;  */

void FUN_100fea790(void)

{
  FUN_100fea3ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100fea7b4; end: 100fea7bb;  */

void FUN_100fea7b4(void)

{
  if (lRam0000000112d536a8 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e61d828);
  return;
}



/* Entry: 100fea7bc; end: 100fea7f3;  */

void FUN_100fea7bc(undefined8 param_1)

{
  if (lRam0000000112d536a8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e61d828);
  return;
}



/* Entry: 100fea7f4; end: 100fea9df;  */

void FUN_100fea7f4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR___sBoWV_11034d678;
  puStack_d8 = PTR___sBoWV_11034d678 + 0x40;
  puStack_c8 = &UNK_10d91a078;
  puStack_c0 = &UNK_10d91a078;
  puStack_b0 = PTR___sBOWV_11034d658 + 0x40;
  puStack_b8 = &UNK_10d91a078;
  puStack_a8 = PTR___syycWV_11034f1c0 + 0x40;
  uVar3 = 0x112d536b8;
  lVar2 = 0x13f;
  puStack_d0 = puStack_d8;
  FUN_100fea9e0(0x13f,0x112d536b8,&UNK_110376e60,PTR___sScSMa_11034fda0);
  if (uVar3 < 0x40) {
    lStack_a0 = *(long *)(lVar2 + -8) + 0x40;
    uVar3 = 0x112d536c0;
    lVar2 = 0x13f;
    FUN_100fea9e0(0x13f,0x112d536c0,&UNK_110376e60,PTR___sScS12ContinuationVMa_11034fd50);
    if (uVar3 < 0x40) {
      lStack_98 = *(long *)(lVar2 + -8) + 0x40;
      puStack_90 = &UNK_10d91a090;
      puStack_88 = puVar1 + 0x40;
      uVar3 = 0x112d536c8;
      lVar2 = 0x13f;
      puStack_80 = puStack_88;
      FUN_100fea9e0(0x13f,0x112d536c8,&UNK_110375810,PTR___sScSMa_11034fda0);
      if (uVar3 < 0x40) {
        lStack_78 = *(long *)(lVar2 + -8) + 0x40;
        uVar3 = 0x112d536d0;
        lVar2 = 0x13f;
        FUN_100fea9e0(0x13f,0x112d536d0,&UNK_110375810,PTR___sScS12ContinuationVMa_11034fd50);
        if (uVar3 < 0x40) {
          lStack_70 = *(long *)(lVar2 + -8) + 0x40;
          uVar3 = 0x112d536d8;
          lVar2 = 0x13f;
          FUN_100fea9e0(0x13f,0x112d536d8,&UNK_110375090,PTR___sScSMa_11034fda0);
          if (uVar3 < 0x40) {
            lStack_68 = *(long *)(lVar2 + -8) + 0x40;
            uVar3 = 0x112d536e0;
            lVar2 = 0x13f;
            FUN_100fea9e0(0x13f,0x112d536e0,&UNK_110375090,PTR___sScS12ContinuationVMa_11034fd50);
            if (uVar3 < 0x40) {
              lStack_60 = *(long *)(lVar2 + -8) + 0x40;
              puStack_58 = &UNK_10d91a0a8;
              puStack_50 = puVar1 + 0x40;
              puStack_40 = &UNK_10d91a090;
              puStack_48 = puStack_50;
              puStack_38 = puStack_50;
              func_0x000107c61630(param_1,0x100,0x15,&puStack_d8,param_1 + 0x50);
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 100fea9e0; end: 100feaa23;  */

void FUN_100fea9e0(long param_1,long *param_2,long param_3,code *param_4)

{
  if (*param_2 != 0) {
    return;
  }
  (*param_4)();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 100feaa24; end: 100feaac3;  */

void FUN_100feaa24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  lVar2 = 0x112d52ce8;
  func_0x0001000285a8(0x112d52ce8,&UNK_10d9195f0);
  *(long *)(unaff_x22 + 0x78) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar1;
  lVar2 = 0x112d53878;
  func_0x0001000285a8(0x112d53878,&UNK_10d91a1b0);
  *(long *)(unaff_x22 + 0x90) = lVar2;
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100feaac4,0,0);
  return;
}



/* Entry: 100feaac4; end: 100feac43;  */

void FUN_100feaac4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long unaff_x22;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar1 = *(long *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar2 = *(long *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x0001000a8868(*(long *)(unaff_x22 + 0x60),
                      *(undefined8 *)(*(long *)(unaff_x22 + 0x60) + 0x18));
  FUN_100fdce34(uVar4);
  uVar7 = 0x112d50c58;
  func_0x0001000285a8(0x112d50c58,&UNK_10d9175c0);
  uVar8 = 0x112d53880;
  FUN_100fee86c(0x112d53880,0x112d52ce8,&UNK_10d9195f0);
  uVar9 = 0x112d53888;
  FUN_100fee86c(0x112d53888,0x112d50c58,&UNK_10d9175c0);
  func_0x00010410b100(uVar3,uVar4,uVar6,uVar5,uVar7,uVar8,uVar9);
  (**(code **)(lVar1 + 8))(uVar4,uVar5);
  func_0x00010410b214();
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar10;
  func_0x000100fee8b0(uVar3,0x112d53878,&UNK_10d91a1b0);
  *(undefined8 *)(unaff_x22 + 0x58) = uVar10;
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x40,0,0);
  plVar11 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa8) = plVar11;
  func_0x0001000285a8(0x112d53890,&UNK_10d91a1b8);
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_100feac44;
  plVar11[2] = unaff_x22 + 0x10;
  plVar11[3] = unaff_x22 + 0x58;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_10410b850,0,0);
  return;
}



/* Entry: 100feac44; end: 100feaca3;  */

void FUN_100feac44(void)

{
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xa8));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100feaca4,0,0);
  return;
}



/* Entry: 100feaca4; end: 100feae23;  */

void FUN_100feaca4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
  cVar3 = *(char *)(unaff_x22 + 0x28);
  if (cVar3 == -1) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar4 = *(undefined1 *)(unaff_x22 + 0x38);
    uVar6 = *(long *)(unaff_x22 + 0x70) + 0x10;
    func_0x000107c61648();
    if (uVar6 == 0) {
      uVar6 = *(ulong *)(unaff_x22 + 0xa0);
    }
    else {
      uVar5 = uVar6;
      func_0x000107c5fd5c();
      if ((uVar5 & 1) == 0) {
        FUN_100feae84(uVar9,uVar4,uVar8,uVar1,uVar2,cVar3);
        func_0x000107c61574(uVar6);
        FUN_100fee8f0(uVar9,uVar4);
        FUN_100fee90c(uVar8,uVar1,uVar2,cVar3);
        plVar7 = (long *)0x30;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0xb0) = plVar7;
        func_0x0001000285a8(0x112d53890,&UNK_10d91a1b8);
        *plVar7 = unaff_x22;
        plVar7[1] = (long)FUN_100feae24;
        plVar7[2] = unaff_x22 + 0x10;
        plVar7[3] = unaff_x22 + 0x58;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(&UNK_10410b850,0,0);
        return;
      }
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
    }
    func_0x000107c61574(uVar6);
    FUN_100fee8f0(uVar9,uVar4);
    FUN_100fee90c(uVar8,uVar1,uVar2,cVar3);
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x98));
  func_0x000107c615c0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000100fead78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100feae24; end: 100feae83;  */

void FUN_100feae24(void)

{
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xb0));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100feaca4,0,0);
  return;
}



/* Entry: 100feae84; end: 100feb2c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100feae84(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long lVar8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar9;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined1 uStack_68;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar13 = &stack0xffffffffffffff40 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d53818;
  func_0x0001000285a8(0x112d53818,&UNK_10d91a138);
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = (undefined8 *)(puVar13 + -extraout_x8_00);
  lVar3 = 0x112d53898;
  func_0x0001000285a8(0x112d53898,&UNK_10d91a1c0);
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = (undefined8 *)((long)puVar15 - extraout_x8_01);
  if (param_2 == '\0') {
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d53630);
    func_0x000107c6157c(uVar10);
    func_0x000100075034(0x100feb2d0,0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar10);
    puStack_80 = (undefined *)CONCAT71(puStack_80._1_7_,2);
    uVar10 = 0x112d53870;
    func_0x0001000285a8(0x112d53870,&UNK_10d91abf0);
    func_0x000107c5fd28(puVar12,&puStack_80,uVar10);
    (**(code **)(lVar14 + 8))(puVar12,lVar3);
    uVar7 = 0x800000010ef1ecd0;
    uVar10 = 0xd000000000000031;
    (**(code **)(unaff_x20 + 0xa0))();
    FUN_100feb2dc();
    puVar5 = &UNK_110374d20;
    func_0x000107c613fc(&UNK_110374d20,0x18,7);
    func_0x000107c61644(puVar5 + 0x10);
    puVar6 = &UNK_110374de8;
    func_0x000107c613fc(&UNK_110374de8,0x50,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(undefined8 *)(puVar6 + 0x18) = param_3;
    *(undefined8 *)(puVar6 + 0x20) = param_4;
    *(undefined8 *)(puVar6 + 0x28) = param_5;
    puVar6[0x30] = (char)param_6;
    *(undefined8 *)(puVar6 + 0x38) = param_1;
    *(undefined8 *)(puVar6 + 0x40) = uVar10;
    *(undefined8 *)(puVar6 + 0x48) = uVar7;
    func_0x000107c6157c(puVar5);
    FUN_100fee9d0(param_3,param_4,param_5,param_6);
    FUN_100feea04(param_1,0);
    func_0x000107c61434(uVar7);
    FUN_100febb24(uVar10,uVar7,&UNK_10d91a1d0,puVar6);
    func_0x000107c61574(puVar5);
    func_0x000107c6142c(uVar7);
    func_0x000107c61574(puVar6);
  }
  else {
    if (param_2 == '\x01') {
      puStack_80 = (undefined *)CONCAT71(puStack_80._1_7_,2);
      uVar10 = 0x112d53870;
      func_0x0001000285a8(0x112d53870,&UNK_10d91abf0);
      func_0x000107c5fd28(puVar12,&puStack_80,uVar10);
      (**(code **)(lVar14 + 8))(puVar12,lVar3);
      FUN_100fee54c();
      puVar4 = (undefined8 *)&UNK_1103754e0;
      func_0x000107c613f8(&UNK_1103754e0,puVar12,0,0);
      *puVar12 = param_1;
      puVar12 = puVar4;
      FUN_100fe9fe4();
      puVar5 = &UNK_110374bb8;
      func_0x000107c613f8(&UNK_110374bb8,puVar12,0,0);
      *puVar12 = puVar4;
      func_0x000107c614b0();
      func_0x000107c5eec4(puVar13);
      func_0x000107c5eeac();
      (**(code **)(lVar11 + 8))(puVar13,lVar1);
      uStack_68 = 3;
      uVar10 = 0x112d53810;
      puStack_80 = puVar5;
      uStack_78 = param_1;
      puStack_70 = puVar12;
      func_0x0001000285a8(0x112d53810,&UNK_10d91a118);
      func_0x000107c5fd28(puVar15,&puStack_80,uVar10);
      pcVar9 = *(code **)(lVar8 + 8);
      puVar12 = puVar15;
      lVar3 = lVar2;
    }
    else {
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d53630);
      func_0x000107c6157c(uVar10);
      func_0x000100075034(FUN_100feb2c8,0,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar10);
      puStack_80 = (undefined *)CONCAT71(puStack_80._1_7_,1);
      uVar10 = 0x112d53870;
      func_0x0001000285a8(0x112d53870,&UNK_10d91abf0);
      func_0x000107c5fd28(puVar12,&puStack_80,uVar10);
      pcVar9 = *(code **)(lVar14 + 8);
    }
    (*pcVar9)(puVar12,lVar3);
  }
  return;
}



/* Entry: 100feb2c8; end: 100feb2db;  */

void FUN_100feb2c8(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 100feb2dc; end: 100feb4ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100feb2dc(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined1 auVar12 [16];
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  lVar2 = 0x112d53818;
  puVar6 = &UNK_10d91a138;
  func_0x0001000285a8();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&lStack_80 - extraout_x8;
  lVar3 = 0;
  func_0x000107c5eec8();
  lVar11 = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar7 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eec4(lVar7);
  func_0x000107c5eeac();
  (**(code **)(lVar11 + 8))(lVar7,lVar3);
  uStack_70 = 0;
  uStack_68 = 0;
  lStack_80 = lVar4;
  puStack_78 = puVar6;
  func_0x000107c61434(puVar6);
  uVar5 = 0x112d53810;
  func_0x0001000285a8(0x112d53810,&UNK_10d91a118);
  func_0x000107c5fd28(lVar8,&lStack_80,uVar5);
  pcVar10 = *(code **)(lVar9 + 8);
  (*pcVar10)(lVar8,lVar2);
  lStack_80 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_70 = 0;
  uStack_68 = 1;
  func_0x000107c5fd28(lVar8,&lStack_80,uVar5);
  (*pcVar10)(lVar8,lVar2);
  pcVar10 = *(code **)(unaff_x20 + 0xa0);
  lStack_80 = 0;
  puStack_78 = (undefined *)0xe000000000000000;
  func_0x000107c602fc(0x24);
  func_0x000107c6142c(puStack_78);
  lStack_80 = -0x2fffffffffffffde;
  puStack_78 = (undefined *)0x800000010ef1ec30;
  func_0x000107c5fb78(lVar4,puVar6);
  puVar1 = puStack_78;
  (*pcVar10)(lStack_80,puStack_78);
  func_0x000107c6142c(puVar1);
  auVar12._8_8_ = puVar6;
  auVar12._0_8_ = lVar4;
  return auVar12;
}



/* Entry: 100feb4ac; end: 100feb4d3;  */

void FUN_100feb4ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_7;
  *(undefined8 *)(unaff_x22 + 0x58) = param_8;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = param_6;
  *(undefined1 *)(unaff_x22 + 0x79) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100feb4d4,0,0);
  return;
}



/* Entry: 100feb4d4; end: 100feb5fb;  */

void FUN_100feb4d4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x22;
  
  lVar11 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar11 + 0x10,unaff_x22 + 0x10,0,0);
  lVar11 = lVar11 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x60) = lVar11;
  if (lVar11 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    if (*(char *)(unaff_x22 + 0x79) != '\x01') {
      lVar1 = *(long *)(unaff_x22 + 0x38);
      lVar3 = *(long *)(unaff_x22 + 0x40);
      plVar7 = (long *)0xb0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x68) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_100feb5fc;
      lVar2 = *(long *)(unaff_x22 + 0x50);
      lVar9 = *(long *)(unaff_x22 + 0x48);
      lVar10 = *(long *)(unaff_x22 + 0x30);
      plVar7[0xb] = *(long *)(unaff_x22 + 0x58);
      plVar7[0xc] = lVar11;
      plVar7[9] = lVar9;
      plVar7[10] = lVar2;
      plVar7[7] = lVar1;
      plVar7[8] = lVar3;
      plVar7[6] = lVar10;
      lVar11 = 0x112d53818;
      func_0x0001000285a8(0x112d53818,&UNK_10d91a138);
      plVar7[0xd] = lVar11;
      lVar11 = *(long *)(lVar11 + -8);
      plVar7[0xe] = lVar11;
      uVar8 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar7[0xf] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_100feb738,0,0);
      return;
    }
    uVar4 = *(undefined1 *)(unaff_x22 + 0x30);
    *(undefined1 *)(unaff_x22 + 0x78) = uVar4;
    puVar5 = (undefined1 *)0x2;
    func_0x000100029b9c(2,0x12,0,0);
    puVar6 = puVar5;
    if ((int)puVar5 != 0) {
      FUN_100fdddf0();
      puVar6 = (undefined1 *)(unaff_x22 + 0x78);
      func_0x000107c61658(puVar6,&UNK_110374120,puVar5);
    }
    FUN_100fdddf0();
    func_0x000107c613f8(&UNK_110374120,puVar6,0,0);
    *puVar6 = uVar4;
    func_0x000107c61574(lVar11);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000100feb5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100feb5fc; end: 100feb737;  */

void FUN_100feb5fc(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x70) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x68));
  if (unaff_x20 == 0) {
    uVar1 = 0x100feb658;
  }
  else {
    uVar1 = 0x100feb68c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 100feb738; end: 100feb8b3;  */

void FUN_100feb738(ulong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  
  func_0x000107c5fd5c();
  if ((param_1 & 1) != 0) {
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x000100feb790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar4 = *(long *)(unaff_x22 + 0x60);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x30);
  pcVar2 = *(code **)(lVar4 + 0xa0);
  func_0x000107c602fc(0x26);
  func_0x000107c6142c(0xe000000000000000);
  FUN_100fdcd04(uVar11,uVar8,uVar5);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar8);
  func_0x000107c5fb78(0x6f6973736553202e,0xeb00000000203a6e);
  func_0x000107c5fb78(uVar10,uVar1);
  (*pcVar2)(0xd000000000000017,0x800000010ef1ed10);
  func_0x000107c6142c(0x800000010ef1ed10);
  FUN_100febeb0();
  plVar7 = (long *)(lVar4 + 0x20);
  func_0x0001000a8868(plVar7,*(undefined8 *)(lVar4 + 0x38));
  lVar9 = *plVar7;
  plVar7 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100feb8b4;
  lVar4 = *(long *)(unaff_x22 + 0x40);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  lVar6 = *(long *)(unaff_x22 + 0x38);
  plVar7[5] = *(long *)(unaff_x22 + 0x48);
  plVar7[6] = lVar9;
  plVar7[3] = lVar6;
  plVar7[4] = lVar4;
  plVar7[2] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff1048,lVar9,0);
  return;
}



/* Entry: 100feb8b4; end: 100feb937;  */

void FUN_100feb8b4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x88) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x80));
  if (unaff_x20 != 0) {
    func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x000100feb90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  *(undefined8 *)(lVar1 + 0x90) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100feb938,0,0);
  return;
}



/* Entry: 100feb938; end: 100feba4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100feb938(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x70);
  uVar6 = *(ulong *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x90));
  *(undefined8 *)(unaff_x22 + 0x10) = 0x3fef5c28f5c28f5c;
  *(undefined8 *)(unaff_x22 + 0x18) = 0;
  *(undefined8 *)(unaff_x22 + 0x20) = 0;
  *(undefined1 *)(unaff_x22 + 0x28) = 1;
  uVar5 = 0x112d53810;
  func_0x0001000285a8(0x112d53810,&UNK_10d91a118);
  func_0x000107c5fd28(uVar6,(undefined8 *)(unaff_x22 + 0x10),uVar5);
  (**(code **)(lVar1 + 8))(uVar6,uVar2);
  func_0x000107c5fd5c();
  if ((uVar6 & 1) != 0) {
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x88));
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x000100feb9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  plVar7 = (long *)0x160;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x98) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100feba50;
  lVar10 = *(long *)(unaff_x22 + 0x88);
  lVar3 = *(long *)(unaff_x22 + 0x60);
  lVar9 = *(long *)(unaff_x22 + 0x50);
  lVar1 = *(long *)(unaff_x22 + 0x38);
  lVar4 = *(long *)(unaff_x22 + 0x40);
  lVar8 = *(long *)(unaff_x22 + 0x30);
  plVar7[0x1f] = *(long *)(unaff_x22 + 0x58);
  plVar7[0x20] = lVar3;
  plVar7[0x1d] = lVar4;
  plVar7[0x1e] = lVar9;
  plVar7[0x1b] = lVar8;
  plVar7[0x1c] = lVar1;
  plVar7[0x1a] = lVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100febff4,0,0);
  return;
}



/* Entry: 100feba50; end: 100febb23;  */

void FUN_100feba50(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x98));
  if (unaff_x20 == 0) {
    uVar1 = 0x100febaac;
  }
  else {
    uVar1 = 0x100febae8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 100febb24; end: 100febcdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100febb24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long alStack_80 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0x112d53810;
  uStack_70 = param_3;
  uStack_68 = param_1;
  func_0x0001000285a8(0x112d53810,&UNK_10d91a118);
  lVar7 = *(long *)(lVar2 + -8);
  lVar10 = *(long *)(lVar7 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar10 + 0xfU & 0xfffffffffffffff0);
  lVar1 = _DAT_112d53620;
  puVar3 = PTR___sytN_11034f1b0;
  lVar9 = (long)&uStack_70 + -extraout_x8;
  lVar11 = *(long *)(unaff_x20 + _DAT_112d53620);
  if (lVar11 != 0) {
    func_0x000107c6157c(lVar11);
    uVar4 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c5fd50(lVar11,puVar3 + 8,uVar4,PTR___ss5ErrorWS_11034ee10);
    func_0x000107c61574(lVar11);
  }
  (**(code **)(lVar7 + 0x10))(lVar9,unaff_x20 + _DAT_112d53618,lVar2);
  uVar6 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar12 = uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff);
  uVar8 = lVar10 + uVar12 + 7 & 0xfffffffffffffff8;
  puVar3 = &UNK_110374d70;
  func_0x000107c613fc(&UNK_110374d70,uVar8 + 0x10,uVar6 | 7);
  *(undefined8 *)(puVar3 + 0x10) = uStack_70;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  (**(code **)(lVar7 + 0x20))(puVar3 + uVar12,lVar9,lVar2);
  *(undefined8 *)(puVar3 + uVar8) = uStack_68;
  *(undefined8 *)((long)(puVar3 + uVar8) + 8) = param_2;
  func_0x000107c6157c(param_4);
  func_0x000107c61434(param_2);
  *(undefined **)((long)alStack_80 + -extraout_x8) = PTR___sytN_11034f1b0 + 8;
  uVar4 = 0x41;
  func_0x000100859150(0x41,0,0x48,3,0,0,&UNK_10d91a130,puVar3);
  func_0x000107c61574(puVar3);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar4;
  func_0x000107c61574(uVar5);
  return;
}



/* Entry: 100febce0; end: 100febd77;  */

void FUN_100febce0(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = param_6;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  lVar4 = 0x112d53818;
  func_0x0001000285a8(0x112d53818,&UNK_10d91a138);
  *(long *)(unaff_x22 + 0x48) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x50) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x58) = uVar2;
  iVar1 = *param_2;
  plVar3 = (long *)(ulong)(uint)param_2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100febd78;
                    /* WARNING: Could not recover jumptable at 0x000100febd74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))();
  return;
}



/* Entry: 100febd78; end: 100febde3;  */

void FUN_100febd78(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x60));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100febde4,0,0);
    return;
  }
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x000100febde0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 100febde4; end: 100febeaf;  */

void FUN_100febde4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar1 = *(long *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  FUN_100fe9fe4();
  puVar5 = &UNK_110374bb8;
  func_0x000107c613f8(&UNK_110374bb8,param_1,0,0);
  *param_1 = uVar7;
  *(undefined8 *)(unaff_x22 + 0x10) = puVar5;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
  *(undefined1 *)(unaff_x22 + 0x28) = 3;
  func_0x000107c61434(uVar6);
  uVar6 = 0x112d53810;
  func_0x0001000285a8(0x112d53810,&UNK_10d91a118);
  func_0x000107c5fd28(uVar2,(undefined8 *)(unaff_x22 + 0x10),uVar6);
  (**(code **)(lVar1 + 8))(uVar2,uVar3);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x000100febeac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100febeb0; end: 100febfcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100febeb0(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d53628);
  func_0x000107c6157c(uVar4);
  func_0x0001000c74f0(&lStack_68);
  func_0x000107c61574(uVar4);
  lVar3 = lStack_60;
  lVar2 = lStack_68;
  if (lStack_60 != 0) {
    pcVar1 = *(code **)(unaff_x20 + 0xa0);
    lStack_68 = 0;
    lStack_60 = 0xe000000000000000;
    func_0x000107c602fc(0x27);
    func_0x000107c6142c(lStack_60);
    lStack_68 = -0x2fffffffffffffdb;
    lStack_60 = 0x800000010ef1ec60;
    func_0x000107c61434(lVar3);
    func_0x000107c5fb78(lVar2,lVar3);
    func_0x000107c6142c(lVar3);
    lVar2 = lStack_60;
    (*pcVar1)(lStack_68,lStack_60);
    func_0x000107c6142c(lVar2);
    func_0x000107c3f474(uStack_58);
    func_0x0001000d224c(&lStack_68);
    lVar2 = lStack_68;
    if (lStack_68 != 0) {
      func_0x000107c50554(lStack_68);
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c615e8(uStack_58);
    func_0x000107c6142c(lVar3);
  }
  return;
}



/* Entry: 100febfd0; end: 100febff3;  */

void FUN_100febfd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xf8) = param_6;
  *(undefined8 *)(unaff_x22 + 0x100) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100febff4,0,0);
  return;
}



/* Entry: 100febff4; end: 100fec38f;  */

/* WARNING: Removing unreachable block (ram,0x000100fec114) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100febff4(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  long unaff_x22;
  long lVar14;
  long lVar15;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xf0);
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(unaff_x22 + 0x100) + 0xa0);
  func_0x000107c602fc(0x22);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(uVar13,uVar3);
  puVar2 = (undefined1 *)0x800000010ef1ec00;
  (*UNRECOVERED_JUMPTABLE)(0xd000000000000020,0x800000010ef1ec00);
  func_0x000107c6142c();
  func_0x0001000d224c(unaff_x22 + 0x78);
  lVar10 = *(long *)(unaff_x22 + 0x78);
  *(long *)(unaff_x22 + 0x108) = lVar10;
  if (lVar10 == 0) {
    func_0x000100fea024();
    func_0x000107c613f8(&UNK_110374b28,puVar2,0,0);
    *puVar2 = 0;
    func_0x000107c61654();
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    func_0x000107c4ee14();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0xb0) = lVar10;
    uVar3 = 0x112d53828;
    func_0x0001000285a8(0x112d53828,&UNK_10d91a148);
    uVar13 = uVar3;
    func_0x000100fea024();
    *(undefined8 *)(unaff_x22 + 0x110) = uVar13;
    func_0x0001048da008(unaff_x22 + 0xa8,FUN_100fec828,0,uVar3,&UNK_110374b28,uVar13,
                        unaff_x22 + 0x51);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
    lVar1 = *(long *)(unaff_x22 + 0x100);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xf0);
    func_0x000107c615e8(lVar10);
    plVar11 = *(long **)(unaff_x22 + 0xa8);
    *(long **)(unaff_x22 + 0x118) = plVar11;
    func_0x0001000a8868(lVar1 + 0x70,*(undefined8 *)(lVar1 + 0x88));
    uVar13 = 0;
    func_0x000100fef61c(0);
    plVar4 = plVar11;
    FUN_100fef63c(plVar11,uVar13,&PTR_DAT_110374e18);
    *(undefined8 *)(unaff_x22 + 0x120) = _DAT_112d53618;
    lVar10 = 0x112d53810;
    func_0x0001000285a8(0x112d53810,&UNK_10d91a118);
    *(long *)(unaff_x22 + 0x128) = lVar10;
    lVar14 = *(long *)(lVar10 + -8);
    lVar15 = *(long *)(lVar14 + 0x40);
    uVar5 = lVar15 + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar5);
    (**(code **)(lVar14 + 0x10))();
    uVar9 = (ulong)*(byte *)(lVar14 + 0x50);
    uVar12 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
    puVar6 = &UNK_110374d98;
    func_0x000107c613fc(&UNK_110374d98,uVar12 + lVar15,uVar9 | 7);
    (**(code **)(lVar14 + 0x20))(puVar6 + uVar12,uVar5,lVar10);
    func_0x000107c615c0(uVar5);
    UNRECOVERED_JUMPTABLE = FUN_100fee58c;
    puVar7 = puVar6;
    (**(code **)(*plVar4 + 0x60))();
    func_0x000107c61574(puVar6);
    func_0x000107c61574(plVar4);
    *(code **)(unaff_x22 + 0x130) = UNRECOVERED_JUMPTABLE;
    *(undefined **)(unaff_x22 + 0x138) = puVar7;
    uVar13 = *(undefined8 *)(lVar1 + _DAT_112d53628);
    *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
    *(long **)(unaff_x22 + 0x30) = plVar11;
    func_0x000107c6157c(uVar13);
    func_0x000100075034(FUN_100fee5d4,unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
    *(undefined8 *)(unaff_x22 + 0x140) = 0;
    func_0x000107c61574(uVar13);
    func_0x000107c506cc();
    func_0x000107c61180();
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100fec390);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lVar10 = *(long *)(unaff_x22 + 0x100);
    func_0x0001000285a8(0x112d53830,&UNK_10d91a150);
    plVar4 = plVar11;
    func_0x000100759c94(plVar11,*(undefined8 *)(lVar10 + 0x98));
    *(long **)(unaff_x22 + 0x148) = plVar4;
    func_0x000107c61170(plVar11);
    plVar4 = (long *)0x80;
    UNRECOVERED_JUMPTABLE = FUN_100ff4538;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x150) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_100fec390;
  }
                    /* WARNING: Could not recover jumptable at 0x000100fec388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100fec390; end: 100fec3e3;  */

void FUN_100fec390(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x158) = param_1;
  *(undefined1 *)(lVar1 + 0x53) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x150));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fec3e4,0,0);
  return;
}



/* Entry: 100fec3e4; end: 100fec827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fec3e4(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  if (*(char *)(unaff_x22 + 0x53) == '\x01') {
    *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x158);
    iVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar3 != 0) {
      uVar11 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 200,uVar11,PTR___ss5ErrorWS_11034ee10);
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0x130);
    lVar10 = *(long *)(unaff_x22 + 0x138);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x108);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x148));
    func_0x000107c614f0(uVar8);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar10 + 8);
  }
  else {
    lVar10 = *(long *)(unaff_x22 + 0x140);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x110);
    *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x158);
    uVar11 = 0x112d53838;
    func_0x0001000285a8(0x112d53838,&UNK_10d91a158);
    func_0x0001048da008(unaff_x22 + 0xb8,FUN_100fec958,0,uVar11,&UNK_110374b28,uVar8,
                        unaff_x22 + 0x52);
    uVar1 = *(undefined1 *)(unaff_x22 + 0x53);
    uVar16 = *(ulong *)(unaff_x22 + 0x158);
    if (lVar10 == 0) {
      func_0x000100fee600(uVar16,uVar1);
      puVar9 = *(undefined **)(unaff_x22 + 0xb8);
      func_0x000107c5fd5c();
      if ((uVar16 & 1) == 0) {
        uVar11 = *(undefined8 *)(unaff_x22 + 0x128);
        lVar10 = 0x112d53818;
        func_0x0001000285a8(0x112d53818,&UNK_10d91a138);
        lVar17 = *(long *)(lVar10 + -8);
        uVar16 = *(long *)(lVar17 + 0x40) + 0xf;
        uVar4 = uVar16 & 0xfffffffffffffff0;
        func_0x000107c615b8(uVar4);
        *(undefined8 *)(unaff_x22 + 0x40) = 0;
        *(undefined8 *)(unaff_x22 + 0x48) = 0;
        *(undefined8 *)(unaff_x22 + 0x38) = 0x3ff0000000000000;
        *(undefined1 *)(unaff_x22 + 0x50) = 1;
        func_0x000107c5fd28(uVar4,unaff_x22 + 0x38,uVar11);
        UNRECOVERED_JUMPTABLE = *(code **)(lVar17 + 8);
        (*UNRECOVERED_JUMPTABLE)(uVar4,lVar10);
        func_0x000107c615c0(uVar4);
        puVar5 = puVar9;
        func_0x000107c2babc();
        func_0x000107c61180();
        puVar12 = puVar5;
        func_0x000107c309c4();
        func_0x000107c61180();
        if (puVar12 == (undefined *)0x0) {
          puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e != 0) goto LAB_100fec7b0;
LAB_100fec664:
          puVar12 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar11 = 0;
          func_0x000100fee630(0);
          puVar6 = puVar12;
          func_0x000107c5fc54(puVar12,uVar11);
          func_0x000107c61170(puVar12);
          if ((ulong)puVar6 >> 0x3e == 0) goto LAB_100fec664;
LAB_100fec7b0:
          puVar12 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar6) {
            puVar12 = puVar6;
          }
          func_0x000107c60480();
        }
        func_0x000107c6142c(puVar6);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x148);
        if (puVar12 == (undefined *)0x0) {
          uVar8 = *(undefined8 *)(unaff_x22 + 0x130);
          lVar10 = *(long *)(unaff_x22 + 0x138);
          puVar7 = *(undefined1 **)(unaff_x22 + 0x110);
          uVar13 = *(undefined8 *)(unaff_x22 + 0x118);
          uVar14 = *(undefined8 *)(unaff_x22 + 0x108);
          func_0x000107c613f8(&UNK_110374b28,puVar7,0,0);
          *puVar7 = 4;
          func_0x000107c61654();
          func_0x000107c61170(puVar5);
          func_0x000107c61170(puVar9);
          func_0x000107c61574(uVar11);
          func_0x000107c614f0(uVar8);
          UNRECOVERED_JUMPTABLE = *(code **)(lVar10 + 8);
          goto LAB_100fec530;
        }
        uVar13 = *(undefined8 *)(unaff_x22 + 0x128);
        uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
        lVar17 = *(long *)(unaff_x22 + 0x100);
        uVar15 = *(undefined8 *)(unaff_x22 + 0xf0);
        uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
        uVar16 = uVar16 & 0xfffffffffffffff0;
        func_0x000107c615b8(uVar16);
        uVar19 = *(undefined8 *)(unaff_x22 + 0xe8);
        uVar18 = *(undefined8 *)(unaff_x22 + 0xe0);
        *(undefined **)(unaff_x22 + 0x58) = puVar5;
        *(undefined8 *)(unaff_x22 + 0x60) = uVar15;
        *(undefined8 *)(unaff_x22 + 0x68) = uVar8;
        *(undefined1 *)(unaff_x22 + 0x70) = 2;
        func_0x000107c61174(puVar5);
        func_0x000107c61434(uVar8);
        func_0x000107c5fd28(uVar16,unaff_x22 + 0x58,uVar13);
        (*UNRECOVERED_JUMPTABLE)(uVar16,lVar10);
        func_0x000107c615c0(uVar16);
        uVar8 = *(undefined8 *)(lVar17 + _DAT_112d53678);
        *(undefined8 *)(unaff_x22 + 0x90) = uVar14;
        *(undefined8 *)(unaff_x22 + 0xa0) = uVar19;
        *(undefined8 *)(unaff_x22 + 0x98) = uVar18;
        func_0x000107c6157c(uVar8);
        func_0x000100075034(0x100fee614,unaff_x22 + 0x80,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar9);
        func_0x000107c61574(uVar11);
      }
      else {
        uVar8 = *(undefined8 *)(unaff_x22 + 0x148);
        func_0x000107c61170(puVar9);
      }
      func_0x000107c61574(uVar8);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x130);
      lVar10 = *(long *)(unaff_x22 + 0x138);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x118);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x108);
      func_0x000107c614f0(uVar11);
      (**(code **)(lVar10 + 8))();
      func_0x000107c615e8(uVar13);
      func_0x000107c615e8(uVar11);
      func_0x000107c615e8(uVar8);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_100fec554;
    }
    uVar11 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x130);
    lVar10 = *(long *)(unaff_x22 + 0x138);
    puVar7 = *(undefined1 **)(unaff_x22 + 0x110);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar2 = *(undefined1 *)(unaff_x22 + 0x52);
    func_0x000107c613f8(&UNK_110374b28,puVar7,0,0);
    *puVar7 = uVar2;
    func_0x000107c61574(uVar11);
    func_0x000100fee600(uVar16,uVar1);
    func_0x000107c614f0(uVar8);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar10 + 8);
  }
LAB_100fec530:
  (*UNRECOVERED_JUMPTABLE)();
  func_0x000107c615e8(uVar8);
  func_0x000107c615e8(uVar13);
  func_0x000107c615e8(uVar14);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_100fec554:
                    /* WARNING: Could not recover jumptable at 0x000100fec570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100fec828; end: 100fec833;  */

void FUN_100fec828(undefined1 *param_1)

{
  *param_1 = 2;
  return;
}



/* Entry: 100fec834; end: 100fec8f3;  */

void FUN_100fec834(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long lVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  lVar1 = 0x112d53818;
  func_0x0001000285a8(0x112d53818,&UNK_10d91a138);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_60 = *param_1;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 1;
  uVar2 = 0x112d53810;
  func_0x0001000285a8(0x112d53810,&UNK_10d91a118);
  func_0x000107c5fd28((long)&uStack_60 - extraout_x8,&uStack_60,uVar2);
  (**(code **)(lVar3 + 8))((long)&uStack_60 - extraout_x8,lVar1);
  return;
}



/* Entry: 100fec8f4; end: 100fec957;  */

void FUN_100fec8f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000100fee6a4(*param_1,param_1[1],param_1[2]);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  func_0x000107c61434(param_3);
  func_0x000107c615f0(param_4);
  return;
}



/* Entry: 100fec958; end: 100fec963;  */

void FUN_100fec958(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}



/* Entry: 100fec964; end: 100fec9c7;  */

void FUN_100fec964(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100fee674(*param_1,param_1[1],param_1[2]);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  func_0x000107c61434(param_3);
  func_0x000107c61174(param_4);
  return;
}



/* Entry: 100fec9c8; end: 100fec9e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fec9c8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_112d53610;
  lVar2 = 0x112d53800;
  lVar3 = *unaff_x20;
  func_0x0001000285a8(0x112d53800,&UNK_10d91ad10);
                    /* WARNING: Could not recover jumptable at 0x000100fee2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 100fec9e4; end: 100feca37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fec9e4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_112d53638;
  lVar2 = 0x112d53808;
  func_0x0001000285a8(0x112d53808,&UNK_10d91a100);
                    /* WARNING: Could not recover jumptable at 0x000100feca34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,unaff_x20 + lVar1,lVar2);
  return;
}



/* Entry: 100feca38; end: 100feca4f;  */

void FUN_100feca38(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x100) = param_1;
  *(undefined8 *)(unaff_x22 + 0x108) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100feca50,0,0);
  return;
}



/* Entry: 100feca50; end: 100fecc13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100feca50(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long unaff_x22;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(unaff_x22 + 0x108);
  (**(code **)(lVar6 + 0xa0))(0xd000000000000014,0x800000010ef1ec90);
  lVar1 = 0x112d53848;
  func_0x0001000285a8(0x112d53848,&UNK_10d91a160);
  lVar7 = *(long *)(lVar1 + -8);
  uVar2 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar2);
  *(undefined8 *)(unaff_x22 + 0xd8) = 0;
  *(undefined8 *)(unaff_x22 + 0xd0) = 1;
  *(undefined1 *)(unaff_x22 + 0xe0) = 3;
  uVar4 = 0x112d53850;
  func_0x0001000285a8(0x112d53850,&UNK_10d91ad40);
  func_0x000107c5fd28(uVar2,(undefined8 *)(unaff_x22 + 0xd0),uVar4);
  (**(code **)(lVar7 + 8))(uVar2,lVar1);
  func_0x000107c615c0(uVar2);
  lVar1 = _DAT_112d53668;
  *(long *)(unaff_x22 + 0x110) = _DAT_112d53668;
  puVar5 = *(undefined1 **)(lVar6 + lVar1);
  func_0x000107c6157c(puVar5);
  func_0x000100075034(FUN_100fed690,0,PTR___sytN_11034f1b0 + 8);
  *(undefined8 *)(unaff_x22 + 0x118) = 0;
  func_0x000107c61574();
  func_0x0001000d224c(unaff_x22 + 0xe8);
  *(long *)(unaff_x22 + 0x120) = *(long *)(unaff_x22 + 0xe8);
  if (*(long *)(unaff_x22 + 0xe8) != 0) {
    puVar3 = (undefined8 *)(*(long *)(unaff_x22 + 0x108) + 0x20);
    func_0x0001000a8868(puVar3,*(undefined8 *)(*(long *)(unaff_x22 + 0x108) + 0x38));
    uVar4 = *puVar3;
    *(undefined8 *)(unaff_x22 + 0x128) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100fecc14,uVar4,0);
    return;
  }
  func_0x000100fea0a8();
  func_0x000107c613f8(&UNK_110374a98,puVar5,0,0);
  *puVar5 = 0;
  func_0x000107c61654();
  FUN_100fed6a8(*(undefined8 *)(unaff_x22 + 0x108));
                    /* WARNING: Could not recover jumptable at 0x000100fecc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fecc14; end: 100feccab;  */

void FUN_100fecc14(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(*(long *)(unaff_x22 + 0x128) + 0xd8);
  *(undefined8 **)(unaff_x22 + 0x130) = puVar1;
  uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0x128) + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x138) = uVar4;
  if (puVar1 == (undefined8 *)0x0) {
    FUN_100fee54c();
    puVar2 = &UNK_1103754e0;
    func_0x000107c613f8(&UNK_1103754e0,puVar1,0,0);
    *(undefined **)(unaff_x22 + 0x148) = puVar2;
    *puVar1 = 0;
    func_0x000107c61654();
    pcVar3 = FUN_100fecec0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c61434(uVar4);
    pcVar3 = FUN_100feccac;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 100feccac; end: 100fecebf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100feccac(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar6 = *(ulong *)(unaff_x22 + 0x138);
  if (uVar6 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    if (-1 < (long)uVar6) {
      uVar6 = uVar6 & 0xffffffffffffff8;
    }
    func_0x000107c60480();
  }
  puVar3 = *(undefined1 **)(unaff_x22 + 0x120);
  uVar7 = *(undefined8 *)(*(long *)(unaff_x22 + 0x108) + *(long *)(unaff_x22 + 0x110));
  *(ulong *)(unaff_x22 + 0x20) = uVar6;
  func_0x000107c61174(*(undefined8 *)(unaff_x22 + 0x130));
  func_0x000107c6157c(uVar7);
  puVar2 = PTR___sytN_11034f1b0;
  func_0x000100075034(FUN_100fee6d4,unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar7);
  func_0x000100fed830();
  func_0x000107c5009c();
  func_0x000107c61180();
  *(undefined1 **)(unaff_x22 + 0x140) = puVar3;
  if (puVar3 == (undefined1 *)0x0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x120);
    func_0x000100fea0a8();
    func_0x000107c613f8(&UNK_110374a98,puVar3,0,0);
    *puVar3 = 1;
    func_0x000107c61654();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar7);
    func_0x000107c6142c(uVar1);
    func_0x000107c615e8(uVar8);
    func_0x000100fed6a8(*(undefined8 *)(unaff_x22 + 0x108));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(unaff_x22 + 0x108) + _DAT_112d53660);
    *(undefined1 **)(unaff_x22 + 0x60) = puVar3;
    func_0x000107c6157c(uVar7);
    func_0x000100075034(FUN_100fee6e0,unaff_x22 + 0x50,puVar2 + 8);
    func_0x000107c61574(uVar7);
    FUN_100fed9a4(puVar3);
    func_0x000107c506cc();
    func_0x000107c61180();
    if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100fecec0);
      (*UNRECOVERED_JUMPTABLE)();
    }
    func_0x0001000285a8(0x112d51130,&UNK_10d9b85a0);
    puVar4 = puVar3;
    func_0x000100759c94(puVar3,0);
    *(undefined1 **)(unaff_x22 + 0x150) = puVar4;
    func_0x000107c61170(puVar3);
    plVar5 = (long *)0x80;
    UNRECOVERED_JUMPTABLE = FUN_100ff4658;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x158) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = 0x100fecefc;
  }
                    /* WARNING: Could not recover jumptable at 0x000100fecea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100fecec0; end: 100fecf4f;  */

void FUN_100fecec0(void)

{
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x120));
  FUN_100fed6a8(*(undefined8 *)(unaff_x22 + 0x108));
                    /* WARNING: Could not recover jumptable at 0x000100fecef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fecf50; end: 100fed1e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fecf50(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar7 = *(long *)(unaff_x22 + 0x160);
  if (*(char *)(unaff_x22 + 0xe1) == '\x01') {
    *(long *)(unaff_x22 + 0xf0) = lVar7;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar4 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0xf0,uVar4,PTR___ss5ErrorWS_11034ee10);
    }
    uVar4 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x120);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x150));
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar11);
    func_0x000107c615e8(uVar8);
    func_0x000107c615e8(uVar13);
    func_0x000107c6142c(uVar4);
  }
  else {
    puVar3 = *(undefined1 **)(unaff_x22 + 0x150);
    func_0x000107c61574();
    if (lVar7 == 0) {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x138);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x140);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x130);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x120);
      func_0x000100fea0a8();
      func_0x000107c613f8(&UNK_110374a98,puVar3,0,0);
      *puVar3 = 1;
      func_0x000107c61654();
      func_0x000107c615e8(uVar8);
      func_0x000107c61170(uVar13);
      func_0x000107c61170(uVar13);
      func_0x000107c6142c(uVar4);
    }
    else {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x160);
      lVar7 = *(long *)(unaff_x22 + 0x108);
      func_0x000107c615f0();
      func_0x000107c5b198();
      func_0x000107c61180();
      *(undefined8 *)(unaff_x22 + 0x168) = uVar4;
      uVar8 = *(undefined8 *)(lVar7 + _DAT_112d53678);
      func_0x000107c6157c(uVar8);
      func_0x0001000c74f0(unaff_x22 + 0xb8);
      func_0x000107c61574(uVar8);
      puVar3 = *(undefined1 **)(unaff_x22 + 0xb8);
      *(undefined1 **)(unaff_x22 + 0x170) = puVar3;
      *(long *)(unaff_x22 + 0x178) = *(long *)(unaff_x22 + 0xc0);
      *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 200);
      if (*(long *)(unaff_x22 + 0xc0) != 0) {
        lVar7 = *(long *)(unaff_x22 + 0x108);
        FUN_100feea2c();
        plVar9 = *(long **)(lVar7 + 0x10);
        plVar5 = (long *)0x70;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x188) = plVar5;
        *plVar5 = unaff_x22;
        plVar5[1] = (long)FUN_100fed1e4;
        plVar5[5] = unaff_x22 + 0x90;
        plVar5[6] = (long)plVar9;
        lVar10 = *(long *)(*plVar9 + 0x50);
        plVar5[7] = lVar10;
        lVar7 = 0;
        __sSqMa(0,lVar10);
        plVar5[8] = lVar7;
        lVar7 = *(long *)(lVar7 + -8);
        plVar5[9] = lVar7;
        uVar6 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc();
        plVar5[10] = uVar6;
        lVar7 = *(long *)(lVar10 + -8);
        plVar5[0xb] = lVar7;
        uVar6 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc();
        plVar5[0xc] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
        return;
      }
      uVar12 = *(undefined8 *)(unaff_x22 + 0x160);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x138);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x140);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x130);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x120);
      uVar1 = *(undefined1 *)(unaff_x22 + 0xe1);
      func_0x000100fea0a8();
      func_0x000107c613f8(&UNK_110374a98,puVar3,0,0);
      *puVar3 = 1;
      func_0x000107c61654();
      func_0x000107c61170(uVar4);
      FUN_100fee724(uVar12,uVar1);
      FUN_100fee724(uVar12,uVar1);
      func_0x000107c615e8(uVar13);
      func_0x000107c61170(uVar14);
      func_0x000107c61170(uVar14);
      func_0x000107c6142c(uVar8);
    }
    func_0x000107c615e8(uVar11);
  }
  FUN_100fed6a8(*(undefined8 *)(unaff_x22 + 0x108));
                    /* WARNING: Could not recover jumptable at 0x000100fed1e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fed1e4; end: 100fed22b;  */

void FUN_100fed1e4(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x188));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fed22c,0,0);
  return;
}



/* Entry: 100fed22c; end: 100fed2cb;  */

void FUN_100fed22c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar3 = *(long *)(unaff_x22 + 0xb0);
  func_0x0001000a8868(unaff_x22 + 0x90,uVar2);
  piVar5 = *(int **)(lVar3 + 0x20);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 400) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100fed2cc;
                    /* WARNING: Could not recover jumptable at 0x000100fed2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (unaff_x22 + 0x68,*(undefined8 *)(unaff_x22 + 0x168),"performTranscoding()",0x14,
             0x5000000000000002,0x14a,unaff_x22 + 0xf8,uVar2,lVar3);
  return;
}



/* Entry: 100fed2cc; end: 100fed32f;  */

void FUN_100fed2cc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x198) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 400));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100fed458;
  }
  else {
    func_0x000100fee738(*(undefined8 *)(lVar2 + 0xf8));
    pcVar1 = FUN_100fed330;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100fed330; end: 100fed457;  */

void FUN_100fed330(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  func_0x0001000834e4(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x88) = 0;
  *(undefined8 *)(unaff_x22 + 0x80) = 0;
  *(undefined8 *)(unaff_x22 + 0x78) = 0;
  puVar8 = (undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x70) = 0;
  *puVar8 = 0;
  uVar1 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar7 = *(undefined1 *)(unaff_x22 + 0xe1);
  func_0x000100fee8b0(puVar8,0x112d53858,&UNK_10d91a180);
  func_0x000100fea0a8();
  func_0x000107c613f8(&UNK_110374a98,puVar8,0,0);
  *(undefined1 *)puVar8 = 1;
  func_0x000107c61654();
  func_0x000107c6142c(uVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  FUN_100fee724(uVar2,uVar7);
  FUN_100fee724(uVar2,uVar7);
  func_0x000107c615e8(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c6142c(uVar3);
  func_0x000107c615e8(uVar9);
  FUN_100fed6a8(*(undefined8 *)(unaff_x22 + 0x108));
                    /* WARNING: Could not recover jumptable at 0x000100fed454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fed458; end: 100fed68f;  */

void FUN_100fed458(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 uVar9;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  func_0x0001000834e4(unaff_x22 + 0x90);
  if (*(long *)(unaff_x22 + 0x80) == 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x178);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x160);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x168);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar9 = *(undefined1 *)(unaff_x22 + 0xe1);
    puVar10 = (undefined1 *)(unaff_x22 + 0x68);
    func_0x000100fee8b0(puVar10,0x112d53858,&UNK_10d91a180);
    func_0x000100fea0a8();
    func_0x000107c613f8(&UNK_110374a98,puVar10,0,0);
    *puVar10 = 1;
    func_0x000107c61654();
    func_0x000107c6142c(uVar1);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    FUN_100fee724(uVar2,uVar9);
    FUN_100fee724(uVar2,uVar9);
    func_0x000107c615e8(uVar7);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar11);
    func_0x000107c6142c(uVar3);
    func_0x000107c615e8(uVar12);
    FUN_100fed6a8(*(undefined8 *)(unaff_x22 + 0x108));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x178);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x168);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x170);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x160);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x120);
    lVar4 = *(long *)(unaff_x22 + 0x108);
    lVar8 = *(long *)(unaff_x22 + 0x110);
    lVar13 = *(long *)(unaff_x22 + 0x100);
    uVar9 = *(undefined1 *)(unaff_x22 + 0xe1);
    FUN_100fee724(uVar15,uVar9);
    FUN_100c9f624(unaff_x22 + 0x68,unaff_x22 + 0x28);
    uVar12 = *(undefined8 *)(lVar4 + lVar8);
    func_0x000107c6157c(uVar12);
    func_0x000100075034(FUN_100feda7c,0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar12);
    FUN_100fee750(unaff_x22 + 0x28,lVar13);
    func_0x000107c61434(uVar1);
    uVar12 = uVar5;
    func_0x000107c5cd58();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    FUN_100fee724(uVar15,uVar9);
    func_0x000107c615e8(uVar7);
    func_0x000107c615e8(uVar11);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar14);
    func_0x000107c6142c(uVar3);
    func_0x0001000834e4(unaff_x22 + 0x28);
    func_0x000107c6142c(uVar1);
    func_0x000107c61170(uVar5);
    *(undefined8 *)(lVar13 + 0x28) = uVar6;
    *(undefined8 *)(lVar13 + 0x30) = uVar1;
    *(undefined8 *)(lVar13 + 0x38) = uVar12;
    FUN_100fed6a8(lVar4);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000100fed68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100fed690; end: 100fed6a7;  */

void FUN_100fed690(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 1;
  *(undefined2 *)(param_1 + 2) = 3;
  return;
}



/* Entry: 100fed6a8; end: 100fed9a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fed6a8(long param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined1 auStack_80 [16];
  ulong uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  byte bStack_5f;
  undefined8 uStack_58;
  
  lVar1 = 0x112d53848;
  func_0x0001000285a8(0x112d53848,&UNK_10d91a160);
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = *(long *)(param_1 + _DAT_112d53658);
  if (lVar3 != 0) {
    lVar5 = ((long *)(param_1 + _DAT_112d53658))[1];
    lVar2 = lVar3;
    func_0x000107c614f0(lVar3);
    pcVar7 = *(code **)(lVar5 + 8);
    func_0x000107c615f0(lVar3);
    (*pcVar7)(lVar2,lVar5);
    func_0x000107c615e8(lVar3);
  }
  lVar3 = _DAT_112d53668;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112d53668);
  func_0x000107c6157c(uVar4);
  func_0x0001000c74f0(&uStack_70);
  func_0x000107c61574(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar3);
  func_0x000107c6157c(uVar4);
  func_0x0001000c74f0(&uStack_70);
  func_0x000107c61574(uVar4);
  uStack_68 = uStack_58;
  uStack_60 = 1;
  uVar4 = 0x112d53850;
  uStack_70 = (ulong)bStack_5f;
  func_0x0001000285a8(0x112d53850,&UNK_10d91ad40);
  func_0x000107c5fd28(auStack_80 + -extraout_x8,&uStack_70,uVar4);
  (**(code **)(lVar6 + 8))(auStack_80 + -extraout_x8,lVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar3);
  func_0x000107c6157c(uVar4);
  func_0x000100075034(FUN_100fee5f0,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar4);
  return;
}



/* Entry: 100fed9a4; end: 100feda7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fed9a4(long *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  
  func_0x000107c4f3f4();
  func_0x000107c61180();
  if (param_1 != (long *)0x0) {
    func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
    plVar3 = param_1;
    func_0x0001000b637c();
    func_0x000107c61170(param_1);
    puVar4 = &UNK_110374d20;
    func_0x000107c613fc(&UNK_110374d20,0x18,7);
    func_0x000107c61644(puVar4 + 0x10);
    uVar5 = 0x100fee748;
    puVar7 = puVar4;
    (**(code **)(*plVar3 + 0x60))();
    func_0x000107c61574(plVar3);
    func_0x000107c61574(puVar4);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d53658);
    uVar6 = *puVar1;
    *puVar1 = uVar5;
    puVar1[1] = puVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100feda7c);
  (*pcVar2)();
}



/* Entry: 100feda7c; end: 100feda87;  */

void FUN_100feda7c(long param_1)

{
  *(undefined1 *)(param_1 + 0x11) = 1;
  return;
}



/* Entry: 100feda88; end: 100fedc7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100feda88(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d53678);
  func_0x000107c6157c(uVar7);
  func_0x0001000c74f0(&uStack_68);
  func_0x000107c61574(uVar7);
  lVar2 = lStack_60;
  uVar7 = uStack_68;
  if (lStack_60 != 0) {
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d53630);
    func_0x000107c6157c(uVar8);
    func_0x0001000c74f0(&uStack_68);
    func_0x000107c61574(uVar8);
    if ((char)uStack_68 == '\x01') {
      pcVar1 = *(code **)(unaff_x20 + 0xa0);
      uStack_68 = 0;
      lStack_60 = 0xe000000000000000;
      func_0x000107c602fc(0x1b);
      func_0x000107c6142c(lStack_60);
      uStack_68 = 0xd000000000000019;
      lStack_60 = 0x800000010ef1ebe0;
      lVar3 = lVar2;
      FUN_100fdcd04(uVar7,lVar2,uStack_58);
      func_0x000107c5fb78();
      func_0x000107c6142c(lVar3);
      lVar3 = lStack_60;
      lVar6 = lStack_60;
      (*pcVar1)(uStack_68);
      func_0x000107c6142c();
      FUN_100fedf24();
      func_0x000100fed830();
      FUN_100feb2dc();
      puVar4 = &UNK_110374d20;
      func_0x000107c613fc(&UNK_110374d20,0x18,7);
      func_0x000107c61644(puVar4 + 0x10);
      puVar5 = &UNK_110374d48;
      func_0x000107c613fc(&UNK_110374d48,0x40,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(undefined8 *)(puVar5 + 0x18) = uVar7;
      *(long *)(puVar5 + 0x20) = lVar2;
      *(undefined8 *)(puVar5 + 0x28) = uStack_58;
      *(long *)(puVar5 + 0x30) = lVar3;
      *(long *)(puVar5 + 0x38) = lVar6;
      func_0x000107c6157c(puVar4);
      func_0x000107c61434(lVar2);
      uVar7 = uStack_58;
      func_0x000107c61174(uStack_58);
      func_0x000107c61434(lVar6);
      FUN_100febb24(lVar3,lVar6,&UNK_10d91a110,puVar5);
      func_0x000107c61170(uVar7);
      func_0x000107c6142c(lVar2);
      func_0x000107c61574(puVar4);
      func_0x000107c6142c(lVar6);
      func_0x000107c61574(puVar5);
    }
    else {
      func_0x000107c61170(uStack_58);
      func_0x000107c6142c(lStack_60);
    }
  }
  return;
}



/* Entry: 100fedc7c; end: 100fedc9b;  */

void FUN_100fedc7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_6;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fedc9c,0,0);
  return;
}



/* Entry: 100fedc9c; end: 100fedd1f;  */

void FUN_100fedc9c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x58) = lVar3;
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + 0x20);
    func_0x0001000a8868(puVar1,*(undefined8 *)(lVar3 + 0x38));
    uVar2 = *puVar1;
    *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100fedd20,uVar2,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100fedd1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fedd20; end: 100feddb7;  */

void FUN_100fedd20(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(*(long *)(unaff_x22 + 0x60) + 0xd8);
  *(undefined8 **)(unaff_x22 + 0x68) = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    FUN_100fee54c();
    puVar2 = &UNK_1103754e0;
    func_0x000107c613f8(&UNK_1103754e0,puVar1,0,0);
    *(undefined **)(unaff_x22 + 0x88) = puVar2;
    *puVar1 = 0;
    func_0x000107c61654();
    pcVar3 = (code *)0x100fede70;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0x60) + 0xe0);
    *(undefined8 *)(unaff_x22 + 0x70) = uVar4;
    func_0x000107c61174();
    func_0x000107c61434(uVar4);
    pcVar3 = FUN_100feddb8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 100feddb8; end: 100fede13;  */

void FUN_100feddb8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x68);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x70));
  plVar7 = (long *)0x160;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x78) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100fede14;
  lVar4 = *(long *)(unaff_x22 + 0x58);
  lVar2 = *(long *)(unaff_x22 + 0x40);
  lVar5 = *(long *)(unaff_x22 + 0x48);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  lVar6 = *(long *)(unaff_x22 + 0x38);
  plVar7[0x1f] = *(long *)(unaff_x22 + 0x50);
  plVar7[0x20] = lVar4;
  plVar7[0x1d] = lVar2;
  plVar7[0x1e] = lVar5;
  plVar7[0x1b] = lVar3;
  plVar7[0x1c] = lVar6;
  plVar7[0x1a] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100febff4,0,0);
  return;
}



/* Entry: 100fede14; end: 100fedf23;  */

void FUN_100fede14(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x80) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x78));
  if (unaff_x20 == 0) {
    uVar1 = 0x100fedea4;
  }
  else {
    uVar1 = 0x100fedee4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 100fedf24; end: 100fee123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fedf24(void)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined1 auStack_80 [16];
  long lStack_70;
  long lStack_68;
  byte bStack_60;
  long lStack_58;
  
  lVar1 = 0x112d53848;
  func_0x0001000285a8(0x112d53848,&UNK_10d91a160);
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = *(long *)(unaff_x20 + _DAT_112d53658);
  if (lVar3 != 0) {
    lVar5 = ((long *)(unaff_x20 + _DAT_112d53658))[1];
    lVar2 = lVar3;
    func_0x000107c614f0(lVar3);
    pcVar7 = *(code **)(lVar5 + 8);
    func_0x000107c615f0(lVar3);
    (*pcVar7)(lVar2,lVar5);
    func_0x000107c615e8(lVar3);
  }
  lVar3 = _DAT_112d53668;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d53668);
  func_0x000107c6157c(uVar4);
  func_0x0001000c74f0(&lStack_70);
  func_0x000107c61574(uVar4);
  if (0 < lStack_58) {
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    func_0x000107c6157c(uVar4);
    func_0x0001000c74f0(&lStack_70);
    func_0x000107c61574(uVar4);
    if ((2 < bStack_60) && (lStack_68 != 0 || lStack_70 != 0)) {
      uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
      func_0x000107c6157c(uVar4);
      func_0x0001000c74f0(&lStack_70);
      func_0x000107c61574(uVar4);
      lStack_70 = lStack_58;
      lStack_68 = 0;
      bStack_60 = 2;
      uVar4 = 0x112d53850;
      func_0x0001000285a8(0x112d53850,&UNK_10d91ad40);
      func_0x000107c5fd28(auStack_80 + -extraout_x8,&lStack_70,uVar4);
      (**(code **)(lVar6 + 8))(auStack_80 + -extraout_x8,lVar1);
    }
  }
  lVar1 = _DAT_112d53660;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d53660);
  func_0x000107c6157c(uVar4);
  func_0x0001000c74f0(&lStack_70);
  func_0x000107c61574(uVar4);
  lVar3 = lStack_70;
  if (lStack_70 != 0) {
    func_0x000107c3f474(lStack_70);
    func_0x000107c615e8(lVar3);
  }
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c6157c(uVar4);
  func_0x000100075034(FUN_100fee220,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar4);
  return;
}



/* Entry: 100fee124; end: 100fee21f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fee124(undefined8 param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long extraout_x8;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112d53848;
  func_0x0001000285a8(0x112d53848,&UNK_10d91a160);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = *param_2;
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    func_0x000107c5fdcc(uVar2);
    uStack_68 = 0;
    uStack_60 = 0;
    uVar2 = 0x112d53850;
    uStack_70 = param_1;
    func_0x0001000285a8(0x112d53850,&UNK_10d91ad40);
    func_0x000107c5fd28((long)&uStack_70 - extraout_x8,&uStack_70,uVar2);
    func_0x000107c61574(param_3);
    (**(code **)(lVar3 + 8))((long)&uStack_70 - extraout_x8,lVar1);
  }
  return;
}



/* Entry: 100fee220; end: 100fee24f;  */

void FUN_100fee220(undefined8 *param_1)

{
  func_0x000107c615e8(*param_1);
  *param_1 = 0;
  return;
}



/* Entry: 100fee250; end: 100fee26b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fee250(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_112d53648;
  lVar2 = 0x112d53868;
  lVar3 = *unaff_x20;
  func_0x0001000285a8(0x112d53868,&UNK_10d91a190);
                    /* WARNING: Could not recover jumptable at 0x000100fee2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 100fee26c; end: 100fee2b7;  */

void FUN_100fee26c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  long param_5,undefined8 param_6)

{
  long *unaff_x20;
  long lVar1;
  long lVar2;
  
  lVar1 = *unaff_x20;
  lVar2 = *param_4;
  func_0x0001000285a8(param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x000100fee2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_5 + -8) + 0x10))(param_1,lVar1 + lVar2,param_5);
  return;
}



/* Entry: 100fee2b8; end: 100fee30b;  */

void FUN_100fee2b8(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x1a0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100fee30c;
  plVar1[0x20] = param_1;
  plVar1[0x21] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100feca50,0,0);
  return;
}



/* Entry: 100fee30c; end: 100fee36f;  */

void FUN_100fee30c(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x18) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x10));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100fee370,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100fee36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 100fee370; end: 100fee3d3;  */

void FUN_100fee370(ulong *param_1)

{
  ulong uVar1;
  long unaff_x22;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x18);
  FUN_100fe9fe4();
  func_0x000107c613f8(&UNK_110374bb8,param_1,0,0);
  *param_1 = uVar1 | 0x8000000000000000;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000100fee3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fee3d4; end: 100fee417;  */

void FUN_100fee3d4(void)

{
  FUN_100fedf24();
  func_0x000100fed830();
  return;
}



/* Entry: 100fee418; end: 100fee48f;  */

void FUN_100fee418(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x100feea24;
  plVar7[9] = lVar3;
  plVar7[10] = lVar6;
  plVar7[7] = lVar2;
  plVar7[8] = lVar5;
  plVar7[5] = lVar1;
  plVar7[6] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fedc9c,0,0);
  return;
}



/* Entry: 100fee490; end: 100fee54b;  */

void FUN_100fee490(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x20;
  long unaff_x22;
  
  lVar7 = 0x112d53810;
  func_0x0001000285a8(0x112d53810,&UNK_10d91a118);
  uVar8 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  uVar8 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar7 + -8) + 0x40) + uVar8 + 7 & 0xfffffffffffffff8));
  lVar7 = *plVar5;
  lVar4 = plVar5[1];
  plVar6 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x100feea20;
  plVar6[7] = lVar7;
  plVar6[8] = lVar4;
  plVar6[6] = unaff_x20 + uVar8;
  lVar7 = 0x112d53818;
  func_0x0001000285a8(0x112d53818,&UNK_10d91a138,uVar3);
  plVar6[9] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar6[10] = lVar7;
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0xb] = uVar8;
  iVar1 = *piVar2;
  plVar5 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  plVar6[0xc] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = (long)FUN_100febd78;
                    /* WARNING: Could not recover jumptable at 0x000100febd74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



/* Entry: 100fee54c; end: 100fee58b;  */

void FUN_100fee54c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d53820 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91a618;
  func_0x000107c61520(&UNK_10d91a618,&UNK_1103754e0);
  puRam0000000112d53820 = puVar1;
  return;
}



/* Entry: 100fee58c; end: 100fee5d3;  */

void FUN_100fee58c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long extraout_x8;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  lVar2 = 0x112d53810;
  func_0x0001000285a8(0x112d53810,&UNK_10d91a118);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar2 = 0x112d53818;
  func_0x0001000285a8(uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff),0x112d53818,&UNK_10d91a138);
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_60 = *param_1;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 1;
  uVar1 = 0x112d53810;
  func_0x0001000285a8(0x112d53810,&UNK_10d91a118);
  func_0x000107c5fd28((long)&uStack_60 - extraout_x8,&uStack_60,uVar1);
  (**(code **)(lVar4 + 8))((long)&uStack_60 - extraout_x8,lVar2);
  return;
}



/* Entry: 100fee5d4; end: 100fee5ef;  */

void FUN_100fee5d4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100fec8f4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 100fee5f0; end: 100fee613;  */

void FUN_100fee5f0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 3;
  return;
}



/* Entry: 100fee614; end: 100fee673;  */

void FUN_100fee614(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100fec964(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 100fee674; end: 100fee6d3;  */

void FUN_100fee674(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 100fee6d4; end: 100fee6df;  */

void FUN_100fee6d4(long param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(unaff_x20 + 0x10);
  return;
}



/* Entry: 100fee6e0; end: 100fee723;  */

void FUN_100fee6e0(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c615e8(*param_1);
  *param_1 = uVar1;
  func_0x000107c615f0(uVar1);
  return;
}



/* Entry: 100fee724; end: 100fee74f;  */

void FUN_100fee724(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 100fee750; end: 100fee793;  */

long FUN_100fee750(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100fee794; end: 100fee82f;  */

void FUN_100fee794(void)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = 0x112d50c58;
  func_0x0001000285a8(0x112d50c58,&UNK_10d9175c0);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar2 = uVar2 + 0x38 & (uVar2 ^ 0xffffffffffffffff);
  lVar3 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar2 + 7 & 0xffffffffffffff8));
  plVar1 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100fee830;
  plVar1[0xd] = unaff_x20 + uVar2;
  plVar1[0xe] = lVar3;
  plVar1[0xc] = unaff_x20 + 0x10;
  lVar3 = 0x112d52ce8;
  func_0x0001000285a8(0x112d52ce8,&UNK_10d9195f0);
  plVar1[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[0x10] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x11] = uVar2;
  lVar3 = 0x112d53878;
  func_0x0001000285a8(0x112d53878,&UNK_10d91a1b0);
  plVar1[0x12] = lVar3;
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x13] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100feaac4,0,0);
  return;
}



/* Entry: 100fee830; end: 100fee86b;  */

void FUN_100fee830(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fee868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fee86c; end: 100fee8ef;  */

void FUN_100fee86c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sScSyxGScisMc_11034fdb0;
    func_0x000107c61520(PTR___sScSyxGScisMc_11034fdb0,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 100fee8f0; end: 100fee90b;  */

void FUN_100fee8f0(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
  if (param_2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 100fee90c; end: 100fee93f;  */

void FUN_100fee90c(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 != '\0') {
    return;
  }
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100fee940; end: 100fee9cf;  */

void FUN_100fee940(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  long *plVar8;
  long unaff_x20;
  long unaff_x22;
  long lVar9;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x38);
  lVar6 = *(long *)(unaff_x20 + 0x40);
  lVar9 = *(long *)(unaff_x20 + 0x48);
  plVar8 = (long *)0x80;
  uVar7 = *(undefined1 *)(unaff_x20 + 0x30);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x100feea28;
  plVar8[10] = lVar6;
  plVar8[0xb] = lVar9;
  plVar8[8] = lVar5;
  plVar8[9] = lVar3;
  *(undefined1 *)((long)plVar8 + 0x79) = uVar7;
  plVar8[6] = lVar4;
  plVar8[7] = lVar2;
  plVar8[5] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100feb4d4,0,0);
  return;
}



/* Entry: 100fee9d0; end: 100feea03;  */

void FUN_100fee9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 != '\0') {
    return;
  }
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}


