/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101940cf8; end: 101940d07;  */

/* WARNING: Possible PIC construction at 0x000101940cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101940cd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101940cc4) */
/* WARNING: Removing unreachable block (ram,0x000101940cd4) */

void FUN_101940cf8(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  iVar4 = (int)*(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000108c2be94();
  lVar5 = 0;
  func_0x00010193f988();
  lVar6 = lVar5;
  func_0x000107c613fc();
  uStack_68 = 0;
  lVar7 = 0x112dd7588;
  func_0x0001000285a8(0x112dd7588,&UNK_10d99a750);
  func_0x000107c613fc();
  puVar8 = &uStack_68;
  func_0x00010042e6a0();
  *(undefined8 **)(lVar6 + 0x38) = puVar8;
  uStack_68 = 0;
  func_0x000107c613fc(lVar7,*(undefined4 *)(lVar7 + 0x30),*(undefined2 *)(lVar7 + 0x34));
  puVar8 = &uStack_68;
  func_0x00010042e6a0();
  *(undefined8 **)(lVar6 + 0x40) = puVar8;
  *(undefined1 *)(lVar6 + 0x48) = 0;
  *(undefined8 *)(lVar6 + 0x50) = 0;
  *(undefined8 *)(lVar6 + 0x58) = 0;
  *(undefined8 *)(lVar6 + 0x60) = 1;
  *(undefined8 *)(lVar6 + 0x10) = uVar1;
  *(undefined8 *)(lVar6 + 0x18) = uVar2;
  *(long *)(lVar6 + 0x20) = (long)iVar4;
  *(undefined8 *)(lVar6 + 0x28) = uVar3;
  *(undefined8 *)(lVar6 + 0x30) = uVar9;
  param_1[3] = lVar5;
  param_1[4] = (long)&PTR_DAT_110415c50;
  *param_1 = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
  return;
}



/* Entry: 101940d08; end: 101940dab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101940d08(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lStack_50;
  long lStack_48;
  
  plVar6 = &lStack_50;
  lVar3 = 0;
  FUN_101942c40();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112dd77f0;
  uVar5 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar4 + lVar2) = uVar5;
  *(undefined8 *)(lVar4 + _DAT_112dd77e8) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_50,puVar1);
  *param_1 = plVar6;
  return;
}



/* Entry: 101940dac; end: 101940db3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101940dac(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar6 = &lStack_50;
  lVar3 = 0;
  FUN_101942c40();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112dd77f0;
  uVar5 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar4 + lVar2) = uVar5;
  *(undefined8 *)(lVar4 + _DAT_112dd77e8) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_50,puVar1);
  *param_1 = plVar6;
  return;
}



/* Entry: 101940db4; end: 101940def;  */

/* WARNING: Possible PIC construction at 0x000101940dc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101940dd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101940de0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101940dd4) */
/* WARNING: Removing unreachable block (ram,0x000101940dc4) */
/* WARNING: Removing unreachable block (ram,0x000101940de4) */

void FUN_101940db4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101940df0; end: 101940e7f;  */

void FUN_101940df0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101940e80; end: 101940e8b;  */

/* WARNING: Possible PIC construction at 0x000101940bbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101940bc0) */

void FUN_101940e80(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x0001000285a8(0x112d6e3a8,&UNK_10d930310);
  func_0x000107c4ec80();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x0001000bda74();
  func_0x000107c61170(uVar2);
  lVar4 = 0;
  func_0x0001019435e8();
  lVar5 = lVar4;
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = 0xd000000000000034;
  *(undefined8 *)(lVar5 + 0x18) = 0x800000010efc1840;
  *(undefined8 *)(lVar5 + 0x20) = uVar3;
  *(undefined8 *)(lVar5 + 0x28) = uVar1;
  *(undefined8 *)(lVar5 + 0x30) = uVar6;
  *(undefined8 *)(lVar5 + 0x38) = 1;
  param_1[3] = lVar4;
  param_1[4] = (long)&PTR_DAT_110416110;
  *param_1 = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
  return;
}



/* Entry: 101940e8c; end: 101940f8f;  */

long FUN_101940e8c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x40);
  lVar1 = lVar2;
  if (lVar2 == 1) {
    lVar1 = unaff_x20;
    func_0x000101940ee8();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
    *(long *)(unaff_x20 + 0x40) = lVar1;
    func_0x000107c615f0();
    func_0x0001019408ac(uVar3);
  }
  func_0x0001019408bc(lVar2);
  return lVar1;
}



/* Entry: 101940f90; end: 1019411a3;  */

void FUN_101940f90(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  lVar2 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar1);
  pcVar3 = *(code **)(lVar2 + 0x18);
  func_0x000107c6157c(param_1);
  (*pcVar3)(FUN_101942298,param_1,uVar1,lVar2);
  func_0x000107c61574(param_1);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 1019411a4; end: 101941243;  */

undefined * FUN_1019411a4(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_48,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_4 != 0) {
    FUN_101941938(param_2,param_3);
    FUN_101942334(param_1,param_2);
    func_0x000107c61574(param_4);
    func_0x000107c6142c(param_2);
    puVar1 = param_1;
  }
  return puVar1;
}



/* Entry: 101941244; end: 10194158f;  */

void FUN_101941244(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  func_0x000107c43d50();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    return;
  }
  lVar1 = lVar2;
  func_0x000107c49e78();
  func_0x000107c615e8(lVar2);
  if ((int)lVar1 == 0) {
    return;
  }
  uVar6 = *(ulong *)(unaff_x20 + 0x30);
  uVar4 = uVar6;
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar3 = uVar4;
  func_0x000107c5faec();
  uVar8 = param_2;
  func_0x000107c61170(uVar4);
  uVar4 = uVar6;
  func_0x000107c5db24();
  func_0x000107c61180();
  uVar11 = uVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  if (uVar11 == 0) {
    uVar11 = 0;
    uVar4 = 0;
    uVar13 = uVar8;
  }
  else {
    uVar4 = uVar11;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(uVar11);
    if (uVar4 == 0) {
      uVar11 = 0;
      uVar4 = 0;
      uVar13 = uVar8;
    }
    else {
      uVar11 = uVar4;
      func_0x000107c5faec();
      uVar13 = uVar8;
      func_0x000107c61170(uVar4);
      uVar4 = uVar8;
    }
  }
  uVar8 = uVar6;
  func_0x000107c4213c();
  func_0x000107c61180();
  uVar9 = uVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  if (uVar9 == 0) {
    uVar9 = 0;
    uVar8 = 0;
    uVar12 = uVar13;
  }
  else {
    uVar8 = uVar9;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    if (uVar8 == 0) {
      uVar9 = 0;
      uVar8 = 0;
      uVar12 = uVar13;
    }
    else {
      uVar9 = uVar8;
      func_0x000107c5faec();
      uVar12 = uVar13;
      func_0x000107c61170(uVar8);
      uVar8 = uVar13;
    }
  }
  uVar13 = uVar3 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar13 = param_2 >> 0x38 & 0xf;
  }
  if (uVar13 == 0) {
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(uVar8);
    goto LAB_1019414ac;
  }
  if (uVar8 == 0) {
LAB_101941404:
    func_0x000107c61434(uVar4);
    uVar8 = uVar4;
    uVar9 = uVar11;
    if (uVar4 == 0) {
      func_0x000107c6142c(param_2);
      uVar4 = 0;
LAB_1019414ac:
      func_0x000107c6142c(uVar4);
      return;
    }
  }
  else {
    uVar13 = uVar9 & 0xffffffffffff;
    if ((uVar8 & 0x2000000000000000) != 0) {
      uVar13 = uVar8 >> 0x38 & 0xf;
    }
    if (uVar13 == 0) {
      func_0x000107c6142c(uVar8);
      goto LAB_101941404;
    }
  }
  uVar13 = uVar6;
  func_0x000107c3e980();
  func_0x000107c61180();
  uVar10 = uVar13;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  uVar13 = uVar12;
  if (uVar10 == 0) {
LAB_1019414d8:
    uVar12 = 0;
  }
  else {
    uVar7 = uVar10;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    if (uVar7 == 0) {
      uVar10 = 0;
      uVar13 = uVar12;
      goto LAB_1019414d8;
    }
    uVar10 = uVar7;
    func_0x000107c5faec(uVar7);
    uVar13 = uVar12;
    func_0x000107c61170(uVar7);
  }
  func_0x000107c3ea24();
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  if (uVar7 != 0) {
    uVar6 = uVar7;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    if (uVar6 != 0) {
      uVar7 = uVar6;
      func_0x000107c5faec();
      func_0x000107c61170(uVar6);
      goto LAB_101941550;
    }
    uVar7 = 0;
  }
  uVar13 = 0;
LAB_101941550:
  uVar5 = 0;
  func_0x000103e2a910(0);
  func_0x000107c610f8();
  func_0x000103e2a7c8(uVar5,uVar3,param_2,uVar11,uVar4,uVar9,uVar8,uVar10,uVar12,uVar7,uVar13);
  return;
}



/* Entry: 101941590; end: 1019415a3;  */

void FUN_101941590(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined *puStack_48;
  
  puVar5 = &UNK_110415fb0;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5b4b0();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101941814);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar3 == 0) {
    func_0x0001000285a8(0x112dd7578,&UNK_10d99a740);
    puStack_48 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100854cb0(&puStack_48);
    return;
  }
  FUN_101940e8c();
  if (lVar2 != 0) {
    lVar4 = lVar2;
    func_0x000107c4f7c0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar4 != 0) goto LAB_101941780;
  }
  lVar4 = 0;
  func_0x0001000295c4();
  func_0x000107c5ffdc();
LAB_101941780:
  func_0x000107c613fc(&UNK_110415fb0,0x20,7);
  *(long *)(puVar5 + 0x10) = lVar3;
  *(long *)(puVar5 + 0x18) = lVar4;
  func_0x0001000285a8(0x112dd7580,&UNK_10d99a870);
  func_0x000107c613fc();
  func_0x0001000b64ac(FUN_101942314,puVar5);
  return;
}



/* Entry: 1019415a4; end: 10194167b;  */

void FUN_1019415a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  uStack_50 = 0x10194231c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100f6151c;
  puStack_58 = &UNK_110415fc8;
  uStack_48 = param_1;
  func_0x000107c60bc4(&puStack_70);
  uVar1 = uStack_48;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c4f8a4(param_2);
  func_0x000107c60bd0(ppuVar2);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 10194167c; end: 1019416db;  */

void FUN_10194167c(undefined *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puStack_28;
  
  if (param_2 == 0) {
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (param_1 != (undefined *)0x0) {
      puVar1 = param_1;
    }
    puStack_28 = puVar1;
    func_0x000107c61434();
    func_0x000100087f6c(&puStack_28);
    func_0x000107c6142c(puVar1);
  }
  else {
    puStack_28 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100087f6c(&puStack_28);
  }
  return;
}



/* Entry: 1019416dc; end: 1019416ef;  */

void FUN_1019416dc(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined *puStack_48;
  
  puVar5 = &UNK_110415f60;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5b4b0();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101941814);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar3 == 0) {
    func_0x0001000285a8(0x112dd7578,&UNK_10d99a740);
    puStack_48 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100854cb0(&puStack_48);
    return;
  }
  FUN_101940e8c();
  if (lVar2 != 0) {
    lVar4 = lVar2;
    func_0x000107c4f7c0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar4 != 0) goto LAB_101941780;
  }
  lVar4 = 0;
  func_0x0001000295c4();
  func_0x000107c5ffdc();
LAB_101941780:
  func_0x000107c613fc(&UNK_110415f60,0x20,7);
  *(long *)(puVar5 + 0x10) = lVar3;
  *(long *)(puVar5 + 0x18) = lVar4;
  func_0x0001000285a8(0x112dd7580,&UNK_10d99a870);
  func_0x000107c613fc();
  func_0x0001000b64ac(FUN_1019422bc,puVar5);
  return;
}



/* Entry: 1019416f0; end: 1019418eb;  */

void FUN_1019416f0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined *puStack_48;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5b4b0();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101941814);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar3 == 0) {
    func_0x0001000285a8(0x112dd7578,&UNK_10d99a740);
    puStack_48 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100854cb0(&puStack_48);
    return;
  }
  FUN_101940e8c();
  if (lVar2 != 0) {
    lVar4 = lVar2;
    func_0x000107c4f7c0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar4 != 0) goto LAB_101941780;
  }
  lVar4 = 0;
  func_0x0001000295c4();
  func_0x000107c5ffdc();
LAB_101941780:
  func_0x000107c613fc(param_1,0x20,7);
  *(long *)(param_1 + 0x10) = lVar3;
  *(long *)(param_1 + 0x18) = lVar4;
  func_0x0001000285a8(0x112dd7580,&UNK_10d99a870);
  func_0x000107c613fc();
  func_0x0001000b64ac(param_2,param_1);
  return;
}



/* Entry: 1019418ec; end: 101941937;  */

void FUN_1019418ec(undefined *param_1)

{
  undefined *puVar1;
  undefined *puStack_28;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
  }
  puStack_28 = puVar1;
  func_0x000107c61434();
  func_0x000100087f6c(&puStack_28);
  func_0x000107c6142c(puVar1);
  return;
}



/* Entry: 101941938; end: 101942013;  */

undefined * FUN_101941938(ulong param_1,ulong param_2,undefined8 param_3,undefined *param_4)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long unaff_x20;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  undefined *puVar17;
  ulong uVar18;
  
  uVar18 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar15 = *(ulong *)(uVar18 + 0x10);
  }
  else {
    uVar15 = uVar18;
    if (0x7fffffffffffffff < param_1) {
      uVar15 = param_1;
    }
    func_0x000107c60480();
  }
  func_0x000107c61580();
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar15 != 0) {
    uVar12 = 0;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar18 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101941f6c);
            (*pcVar3)();
          }
          uVar4 = *(ulong *)(param_1 + uVar12 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar12;
          func_0x00010103193c(uVar12,param_1);
        }
        uVar1 = uVar12 + 1;
        if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101941f68);
          (*pcVar3)();
        }
        uVar5 = uVar4;
        func_0x000107c439a8();
        func_0x000107c61180();
        if (uVar5 != 0) break;
LAB_1019419a0:
        func_0x000107c61170(uVar4);
        uVar12 = uVar12 + 1;
        if (uVar1 == uVar15) goto LAB_101941ae4;
      }
      uVar6 = uVar5;
      func_0x000107c5c3a4();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      if (uVar6 == 0) goto LAB_1019419a0;
      uVar5 = uVar6;
      func_0x000107c3e1d0();
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      if (uVar5 == 0) goto LAB_1019419a0;
      uVar6 = uVar5;
      func_0x000107c3f464();
      func_0x000107c61170(uVar5);
      if ((uVar6 & 1) == 0) goto LAB_1019419a0;
      puVar17 = puVar14;
      func_0x000107c61558();
      if (((ulong)puVar17 & 1) == 0) {
        func_0x0001010673e4(0,*(long *)(puVar14 + 0x10) + 1,1);
      }
      uVar12 = *(ulong *)(puVar14 + 0x10);
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar12) {
        func_0x0001010673e4(1 < *(ulong *)(puVar14 + 0x18),uVar12 + 1,1);
      }
      *(ulong *)(puVar14 + 0x10) = uVar12 + 1;
      *(ulong *)(puVar14 + uVar12 * 8 + 0x20) = uVar4;
      uVar12 = uVar1;
    } while (uVar1 != uVar15);
  }
LAB_101941ae4:
  func_0x000107c61578(unaff_x20,2);
  uVar18 = param_2 & 0xffffffffffffff8;
  if (param_2 >> 0x3e == 0) {
    uVar15 = *(ulong *)(uVar18 + 0x10);
  }
  else {
    uVar15 = uVar18;
    if (0x7fffffffffffffff < param_2) {
      uVar15 = param_2;
    }
    func_0x000107c60480();
  }
  func_0x000107c61580(unaff_x20,2);
  puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar15 != 0) {
    uVar12 = 0;
    do {
      while( true ) {
        if ((param_2 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar18 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101941f74);
            (*pcVar3)();
          }
          uVar4 = *(ulong *)(param_2 + uVar12 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar12;
          func_0x00010103193c(uVar12,param_2);
        }
        uVar1 = uVar12 + 1;
        if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101941f70);
          (*pcVar3)();
        }
        uVar5 = uVar4;
        func_0x000107c439a8();
        func_0x000107c61180();
        if (uVar5 != 0) break;
LAB_101941b2c:
        func_0x000107c61170(uVar4);
        uVar12 = uVar12 + 1;
        if (uVar1 == uVar15) goto LAB_101941c6c;
      }
      uVar6 = uVar5;
      func_0x000107c5c3a4();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      if (uVar6 == 0) goto LAB_101941b2c;
      uVar5 = uVar6;
      func_0x000107c3e1d0();
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      if (uVar5 == 0) goto LAB_101941b2c;
      uVar6 = uVar5;
      func_0x000107c3f464();
      func_0x000107c61170(uVar5);
      if ((uVar6 & 1) == 0) goto LAB_101941b2c;
      puVar13 = puVar17;
      func_0x000107c61558();
      if (((ulong)puVar13 & 1) == 0) {
        func_0x0001010673e4(0,*(long *)(puVar17 + 0x10) + 1,1);
      }
      uVar12 = *(ulong *)(puVar17 + 0x10);
      if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar12) {
        func_0x0001010673e4(1 < *(ulong *)(puVar17 + 0x18),uVar12 + 1,1);
      }
      *(ulong *)(puVar17 + 0x10) = uVar12 + 1;
      *(ulong *)(puVar17 + uVar12 * 8 + 0x20) = uVar4;
      uVar12 = uVar1;
    } while (uVar1 != uVar15);
  }
LAB_101941c6c:
  func_0x000107c61578(unaff_x20,2);
  FUN_10193fb8c(puVar17);
  puVar17 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
  if ((ulong)puVar14 >> 0x3e == 0) {
    puVar13 = *(undefined **)(puVar17 + 0x10);
  }
  else {
    puVar13 = puVar17;
    if ((undefined *)0x7fffffffffffffff < puVar14) {
      puVar13 = puVar14;
    }
    func_0x000107c60480();
  }
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar9 = (undefined *)0x0;
  while (puVar13 != puVar9) {
    if (((ulong)puVar14 & 0xc000000000000001) == 0) {
      if (*(undefined **)(puVar17 + 0x10) <= puVar9) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101941f64);
        (*pcVar3)();
      }
      puVar7 = *(undefined **)(puVar14 + (long)puVar9 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      puVar7 = puVar9;
      func_0x00010103193c(puVar9,puVar14);
    }
    puVar2 = puVar9 + 1;
    if (SCARRY8((long)puVar9,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101941f60);
      (*pcVar3)();
    }
    uVar8 = 0;
    func_0x000103e2a910(0);
    func_0x000103e2a930(puVar7,uVar8);
    puVar9 = puVar9 + 1;
    if (puVar7 != (undefined *)0x0) {
      puVar9 = puVar11;
      func_0x000107c61550();
      if ((((int)puVar9 == 0) || ((long)puVar11 < 0)) || (((ulong)puVar11 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar11 >> 0x3e == 0) {
          puVar9 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar9 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar11) {
            puVar9 = puVar11;
          }
          func_0x000107c60480(puVar9);
        }
        puVar10 = (undefined *)0x0;
        FUN_10193fcc4(0,puVar9 + 1,1);
        param_4 = puVar11;
        puVar11 = puVar10;
      }
      uVar15 = (ulong)puVar11 & 0xffffffffffffff8;
      uVar18 = *(ulong *)(uVar15 + 0x10);
      if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar18) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar15 + 0x18));
        FUN_10193fcc4(puVar9,uVar18 + 1,1);
        uVar15 = (ulong)puVar9 & 0xffffffffffffff8;
        param_4 = puVar11;
        puVar11 = puVar9;
      }
      *(ulong *)(uVar15 + 0x10) = uVar18 + 1;
      *(undefined **)(uVar15 + uVar18 * 8 + 0x20) = puVar7;
      puVar9 = puVar2;
    }
  }
  func_0x000107c6142c(puVar14);
  puVar14 = *(undefined **)(unaff_x20 + 0x20);
  if ((long)puVar14 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101941fb4);
    (*pcVar3)();
  }
  if ((ulong)puVar11 >> 0x3e == 0) {
    puVar9 = *(undefined **)((undefined *)((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
    puVar17 = puVar9;
    if (puVar14 <= puVar9) {
      puVar17 = puVar14;
    }
    puVar13 = (undefined *)0x0;
    if (puVar14 != (undefined *)0x0) {
      puVar13 = puVar17;
    }
    if ((long)puVar9 < (long)puVar13) {
LAB_101941ffc:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101942000);
      (*pcVar3)();
    }
  }
  else {
    puVar17 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
    if (((ulong)puVar11 & 0x8000000000000000) != 0) {
      puVar17 = puVar11;
    }
    puVar13 = puVar17;
    func_0x000107c60480();
    puVar9 = puVar17;
    func_0x000107c60480();
    if ((long)puVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101942014);
      (*pcVar3)();
    }
    puVar9 = puVar13;
    if ((long)puVar14 <= (long)puVar13) {
      puVar9 = puVar14;
    }
    puVar7 = puVar14;
    if (-1 < (long)puVar13) {
      puVar7 = puVar9;
    }
    puVar13 = (undefined *)0x0;
    if (puVar14 != (undefined *)0x0) {
      puVar13 = puVar7;
    }
    func_0x000107c60480();
    if ((long)puVar17 < (long)puVar13) goto LAB_101941ffc;
  }
  if ((((ulong)puVar11 & 0xc000000000000001) == 0) || (puVar13 == (undefined *)0x0)) {
    func_0x000107c61434(puVar11);
  }
  else {
    uVar8 = 0;
    func_0x000103e2a910(0);
    func_0x000107c61434(puVar11);
    puVar14 = (undefined *)0x0;
    do {
      puVar17 = puVar14 + 1;
      func_0x000107c60318(puVar14,puVar11,uVar8);
      puVar14 = puVar17;
    } while (puVar13 != puVar17);
  }
  func_0x000107c6142c(puVar11);
  if ((ulong)puVar11 >> 0x3e == 0) {
    puVar14 = (undefined *)0x0;
    puVar17 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
    param_4 = (undefined *)((long)puVar13 << 1 | 1);
    puVar13 = puVar17 + 0x20;
LAB_101941eb8:
    uVar8 = 0;
    func_0x000107c605fc(0);
    puVar11 = puVar17;
    func_0x000107c615f4(puVar17,3);
    func_0x000107c61480();
    if (puVar11 == (undefined *)0x0) {
      func_0x000107c615e8(puVar17);
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    lVar16 = *(long *)(puVar11 + 0x10);
    func_0x000107c61574();
    if (SBORROW8((ulong)param_4 >> 1,(long)puVar14)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101942004);
      (*pcVar3)();
    }
    if (lVar16 == ((ulong)param_4 >> 1) - (long)puVar14) {
      puVar14 = puVar17;
      func_0x000107c61480(puVar17,uVar8);
      func_0x000107c615ec(puVar17,2);
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar14 != (undefined *)0x0) {
        return puVar14;
      }
      goto LAB_101941f30;
    }
    func_0x000107c615ec(puVar17,2);
  }
  else {
    puVar14 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
    if (((ulong)puVar11 & 0x8000000000000000) != 0) {
      puVar14 = puVar11;
    }
    puVar17 = (undefined *)0x0;
    func_0x000107c60484(0,puVar13);
    func_0x000107c6142c(puVar11);
    if (((ulong)param_4 & 1) != 0) goto LAB_101941eb8;
  }
  puVar11 = puVar17;
  func_0x000101940194(puVar17,puVar13,puVar14,param_4);
LAB_101941f30:
  func_0x000107c615e8(puVar17);
  return puVar11;
}



/* Entry: 101942014; end: 10194207f;  */

void FUN_101942014(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x0001019408ac(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101942080; end: 10194214f;  */

void FUN_101942080(void)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 8))(uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 101942150; end: 101942277;  */

undefined8 FUN_101942150(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [40];
  undefined1 auStack_48 [40];
  
  func_0x0001000d224c(auStack_48);
  func_0x000101942234(auStack_48,auStack_70);
  puVar1 = &UNK_110415f38;
  func_0x000107c613fc(&UNK_110415f38,0x38,7);
  FUN_101942278(auStack_70,puVar1 + 0x10);
  func_0x0001000285a8(0x112dd77e0,&UNK_10d99a860);
  func_0x000107c613fc();
  uVar2 = 0x101942290;
  func_0x0001000b64ac(0x101942290,puVar1);
  func_0x0001000834e4(auStack_48);
  return uVar2;
}



/* Entry: 101942278; end: 101942297;  */

undefined8 * FUN_101942278(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 101942298; end: 1019422bb;  */

void FUN_101942298(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000100087f6c(&uStack_18);
  return;
}



/* Entry: 1019422bc; end: 1019422e7;  */

void FUN_1019422bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar3 = &puStack_70;
  uStack_50 = 0x1019422c4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100f6151c;
  puStack_58 = &UNK_110415f78;
  uStack_48 = param_1;
  func_0x000107c60bc4(&puStack_70);
  uVar2 = uStack_48;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar2);
  func_0x000107c4fa04(uVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 1019422e8; end: 101942313;  */

void FUN_1019422e8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101942314; end: 101942333;  */

void FUN_101942314(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar3 = &puStack_70;
  uStack_50 = 0x10194231c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100f6151c;
  puStack_58 = &UNK_110415fc8;
  uStack_48 = param_1;
  func_0x000107c60bc4(&puStack_70);
  uVar2 = uStack_48;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar2);
  func_0x000107c4f8a4(uVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 101942334; end: 10194276f;  */

ulong * FUN_101942334(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong **ppuVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  code *pcVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puStack_80;
  undefined8 uStack_78;
  ulong *puStack_70;
  undefined *puStack_68;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar5 = param_2;
  func_0x000100403a6c();
  puVar16 = (ulong *)((ulong)param_2 & 0xffffffffffffff8);
  puStack_68 = puVar3;
  if ((ulong)param_2 >> 0x3e == 0) {
    puVar15 = (ulong *)puVar16[2];
  }
  else {
    puVar15 = puVar16;
    if ((ulong *)0x7fffffffffffffff < param_2) {
      puVar15 = param_2;
    }
    func_0x000107c60480();
  }
  puVar13 = (ulong *)PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar7 = (ulong *)PTR__swift_isaMask_11034f488;
  if (puVar15 != (ulong *)0x0) {
    puVar10 = (ulong *)0x0;
    do {
      while( true ) {
        if (((ulong)param_2 & 0xc000000000000001) == 0) {
          if ((ulong *)puVar16[2] <= puVar10) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x101942744);
            (*pcVar14)();
          }
          puVar4 = (ulong *)param_2[(long)((long)puVar10 + 4)];
          func_0x000107c61174();
          puVar11 = puVar5;
        }
        else {
          puVar4 = puVar10;
          puVar11 = param_2;
          func_0x00010101b920(puVar10,param_2);
        }
        puVar1 = (ulong *)((long)puVar10 + 1);
        if (SCARRY8((long)puVar10,1)) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x101942740);
          (*pcVar14)();
        }
        puVar5 = puVar4;
        (**(code **)((*puVar7 & *puVar4) + 0x78))();
        ppuVar6 = &puStack_80;
        func_0x000100403b00(ppuVar6,puVar5,puVar11);
        func_0x000107c6142c(uStack_78);
        if (((ulong)ppuVar6 & 1) != 0) break;
        func_0x000107c61170(puVar4);
        puVar10 = (ulong *)((long)puVar10 + 1);
        if (puVar1 == puVar15) goto LAB_1019424b4;
      }
      puVar7 = puVar13;
      func_0x000107c61558();
      puStack_70 = puVar13;
      if (((ulong)puVar7 & 1) == 0) {
        puVar5 = (ulong *)(puVar13[2] + 1);
        FUN_101940054(0,puVar5,1);
      }
      uVar2 = puStack_70[2];
      puVar7 = (ulong *)(uVar2 + 1);
      if (puStack_70[3] >> 1 <= uVar2) {
        puVar5 = puVar7;
        FUN_101940054(1 < puStack_70[3],puVar7,1);
      }
      puStack_70[2] = (ulong)puVar7;
      puStack_70[uVar2 + 4] = (ulong)puVar4;
      puVar13 = puStack_70;
      puVar7 = (ulong *)PTR__swift_isaMask_11034f488;
      puVar10 = puVar1;
    } while (puVar1 != puVar15);
  }
LAB_1019424b4:
  if (param_1 != (ulong *)0x0) {
    pcVar14 = *(code **)((*puVar7 & *param_1) + 0x78);
    func_0x000107c61174();
    puVar15 = param_1;
    (*pcVar14)();
    func_0x0001000f66f0();
    func_0x000107c6142c();
    FUN_10193fb30();
    puVar16 = (ulong *)(((ulong)(uint)puVar5[6] + 7 & 0x1fffffff8) + 8);
    func_0x000107c613fc();
    puVar5[3] = 3;
    puVar5[2] = 1;
    puVar5[4] = (ulong)param_1;
    if (((ulong)puVar15 & 1) == 0) {
      puStack_80 = puVar5;
      func_0x00010193fba8(puVar13);
      puVar13 = puStack_80;
    }
    else {
      if (((long)puVar13 < 0) || (((ulong)puVar13 >> 0x3e & 1) != 0)) {
        puVar15 = puVar13;
        func_0x000107c60480();
      }
      else {
        puVar15 = (ulong *)puVar13[2];
      }
      func_0x000107c61174(param_1);
      puVar7 = (ulong *)PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar15 != (ulong *)0x0) {
        puVar10 = (ulong *)0x0;
        do {
          while( true ) {
            if (((ulong)puVar13 & 0xc000000000000001) == 0) {
              if ((ulong *)puVar13[2] <= puVar10) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x10194274c);
                (*pcVar14)();
              }
              puVar4 = (ulong *)puVar13[(long)((long)puVar10 + 4)];
              func_0x000107c61174();
              puVar11 = puVar16;
            }
            else {
              puVar4 = puVar10;
              puVar11 = puVar13;
              func_0x00010101b920();
            }
            puVar1 = (ulong *)((long)puVar10 + 1);
            if (SCARRY8((long)puVar10,1)) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x101942748);
              (*pcVar14)();
            }
            puVar8 = puVar4;
            (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar4) + 0x78))();
            puVar9 = puVar8;
            puVar12 = puVar11;
            (*pcVar14)();
            if (puVar8 != puVar9 || puVar11 != puVar12) break;
            puVar16 = puVar12;
            func_0x000107c61170(puVar4);
            func_0x000107c6142c(puVar11);
            func_0x000107c6142c(puVar12);
LAB_101942584:
            puVar10 = (ulong *)((long)puVar10 + 1);
            if (puVar1 == puVar15) goto LAB_1019426ec;
          }
          puVar16 = puVar11;
          func_0x000107c605b8(puVar8,puVar11,puVar9,puVar12,0);
          func_0x000107c6142c(puVar11);
          func_0x000107c6142c(puVar12);
          if (((ulong)puVar8 & 1) != 0) {
            func_0x000107c61170(puVar4);
            goto LAB_101942584;
          }
          puVar10 = puVar7;
          func_0x000107c61558();
          puStack_80 = puVar7;
          if (((ulong)puVar10 & 1) == 0) {
            puVar16 = (ulong *)(puVar7[2] + 1);
            FUN_101940054(0,puVar16,1);
          }
          uVar2 = puStack_80[2];
          puVar7 = (ulong *)(uVar2 + 1);
          if (puStack_80[3] >> 1 <= uVar2) {
            puVar16 = puVar7;
            FUN_101940054(1 < puStack_80[3],puVar7,1);
          }
          puStack_80[2] = (ulong)puVar7;
          puStack_80[uVar2 + 4] = (ulong)puVar4;
          puVar7 = puStack_80;
          puVar10 = puVar1;
        } while (puVar1 != puVar15);
      }
LAB_1019426ec:
      func_0x000107c61574(puVar13);
      puStack_80 = puVar5;
      func_0x00010193fba8(puVar7);
      func_0x000107c61170(param_1);
      puVar13 = puStack_80;
    }
  }
  func_0x000107c6142c(puStack_68);
  return puVar13;
}



/* Entry: 101942770; end: 10194277b;  */

void FUN_101942770(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  code *pcVar3;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar1);
  pcVar3 = *(code **)(lVar2 + 0x18);
  func_0x000107c6157c(param_1);
  (*pcVar3)(FUN_101942298,param_1,uVar1,lVar2);
  func_0x000107c61574(param_1);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 10194277c; end: 101942883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10194277c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  code *pcVar6;
  undefined1 auStack_68 [24];
  long *plStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,plStack_50);
  plVar1 = plStack_50;
  (**(code **)(lStack_48 + 0x20))(plStack_50,lStack_48);
  puVar2 = &UNK_1104160a8;
  func_0x000107c613fc(&UNK_1104160a8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  pcVar6 = *(code **)(*plVar1 + 0x60);
  func_0x000101237340(param_1,param_2);
  uVar3 = 0x101942c68;
  puVar5 = puVar2;
  (*pcVar6)(0x101942c68);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  func_0x0001000834e4(auStack_68);
  uVar4 = uVar3;
  func_0x000107c614f0(uVar3);
  (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112dd77f0),uVar4,puVar5);
  func_0x000107c615e8(uVar3);
  return;
}



/* Entry: 101942884; end: 1019428df;  */

void FUN_101942884(ulong *param_1,code *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_2 != (code *)0x0) {
    uVar2 = *param_1;
    if (uVar2 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar2 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar2) {
        uVar1 = uVar2;
      }
      func_0x000107c60480(uVar1);
    }
    (*param_2)(0 < (long)uVar1);
  }
  return;
}



/* Entry: 1019428e0; end: 10194296b; -[_TtC27Dreams2PFriendSelectionImpl26Dreams2PFriendsServiceImpl hasDreams2PFriends:] */

void FUN_1019428e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uVar2 = 0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_1104160f8;
    func_0x000107c613fc(&UNK_1104160f8,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    uVar2 = 0x101942c80;
  }
  func_0x000107c61174(param_1);
  FUN_10194277c(uVar2,puVar1);
  func_0x000101237350(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10194296c; end: 101942a6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10194296c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  long unaff_x20;
  code *pcVar5;
  undefined1 auStack_68 [24];
  long *plStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,plStack_50);
  plVar1 = plStack_50;
  (**(code **)(lStack_48 + 0x20))(plStack_50,lStack_48);
  puVar2 = &UNK_110416080;
  func_0x000107c613fc(&UNK_110416080,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  pcVar5 = *(code **)(*plVar1 + 0x60);
  func_0x000107c6157c(param_2);
  pcVar3 = FUN_101942c60;
  puVar4 = puVar2;
  (*pcVar5)(FUN_101942c60);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  func_0x0001000834e4(auStack_68);
  pcVar5 = pcVar3;
  func_0x000107c614f0(pcVar3);
  (**(code **)(puVar4 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112dd77f0),pcVar5,puVar4);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 101942a70; end: 101942b37;  */

void FUN_101942a70(ulong *param_1,code *param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *param_1;
  if (uVar4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    if (uVar2 == 0) {
LAB_101942b00:
      uVar2 = 0;
      goto LAB_101942b04;
    }
  }
  else {
    uVar2 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar2 = uVar4;
    }
    uVar3 = uVar2;
    func_0x000107c60480();
    if (uVar3 == 0) goto LAB_101942b00;
    func_0x000107c60480();
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101942b38);
      (*pcVar1)();
    }
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101942b00);
      (*pcVar1)();
    }
  }
  FUN_1016e7c78();
  if ((uVar4 & 0xc000000000000001) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101942b30);
      (*pcVar1)();
    }
    if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101942b34);
      (*pcVar1)();
    }
    uVar2 = *(ulong *)(uVar4 + uVar2 * 8 + 0x20);
    func_0x000107c61174(uVar2);
  }
  else {
    func_0x00010101b920();
  }
LAB_101942b04:
  (*param_2)(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101942b38; end: 101942bab; -[_TtC27Dreams2PFriendSelectionImpl26Dreams2PFriendsServiceImpl randomSuggestedFriend:] */

void FUN_101942b38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1104160d0;
  func_0x000107c613fc(&UNK_1104160d0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c61174(param_1);
  FUN_10194296c(0x101942c70,puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101942bac; end: 101942c07; -[_TtC27Dreams2PFriendSelectionImpl26Dreams2PFriendsServiceImpl init] */

void FUN_101942bac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("Dreams2PFriendSelectionImpl.Dreams2PFriendsServiceImpl",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101942bd8);
  (*pcVar1)();
}



/* Entry: 101942c08; end: 101942c3f; -[_TtC27Dreams2PFriendSelectionImpl26Dreams2PFriendsServiceImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101942c24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101942c28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101942c08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dd77e8));
  return;
}



/* Entry: 101942c40; end: 101942c5f;  */

void FUN_101942c40(void)

{
  func_0x000107c61168(&PTR_PTR_1127ecd50);
  return;
}



/* Entry: 101942c60; end: 101942c93;  */

void FUN_101942c60(ulong *param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  if (uVar4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    if (uVar2 == 0) {
LAB_101942b00:
      uVar2 = 0;
      goto LAB_101942b04;
    }
  }
  else {
    uVar2 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar2 = uVar4;
    }
    uVar3 = uVar2;
    func_0x000107c60480(uVar2,pcVar1,*(undefined8 *)(unaff_x20 + 0x18));
    if (uVar3 == 0) goto LAB_101942b00;
    func_0x000107c60480();
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101942b38);
      (*pcVar1)();
    }
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101942b00);
      (*pcVar1)();
    }
  }
  FUN_1016e7c78();
  if ((uVar4 & 0xc000000000000001) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101942b30);
      (*pcVar1)();
    }
    if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101942b34);
      (*pcVar1)();
    }
    uVar2 = *(ulong *)(uVar4 + uVar2 * 8 + 0x20);
    func_0x000107c61174(uVar2);
  }
  else {
    func_0x00010101b920();
  }
LAB_101942b04:
  (*pcVar1)(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101942c94; end: 101942fef;  */

long FUN_101942c94(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x38);
  lVar1 = lVar2;
  if (lVar2 == 1) {
    lVar1 = unaff_x20;
    func_0x000101942cf0();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
    *(long *)(unaff_x20 + 0x38) = lVar1;
    func_0x000107c615f0();
    func_0x0001019408ac(uVar3);
  }
  func_0x0001019408bc(lVar2);
  return lVar1;
}



/* Entry: 101942ff0; end: 1019430e7;  */

void FUN_101942ff0(long param_1,ulong *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  puVar4 = auStack_58;
  func_0x000107c61428(param_1 + 0x10,puVar4,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x0001000d224c(&lStack_60);
    if (lStack_60 != 0) {
      (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_2) + 0x78))();
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar4);
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      func_0x000107c61434(uVar1);
      func_0x000107c5fadc(uVar3,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x000107c56bcc(lStack_60);
      func_0x000107c61170(lStack_60);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1019430e8; end: 1019432c3;  */

void FUN_1019430e8(code *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar8 = &puStack_90;
  func_0x0001000d224c(&puStack_90);
  puVar9 = puStack_90;
  if (puStack_90 != (undefined *)0x0) {
    lVar4 = *(long *)(unaff_x20 + 0x28);
    func_0x000107c5b4b0();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1019432c4);
      (*pcVar3)();
    }
    lVar5 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar5 == 0) {
      func_0x000107c61170(puStack_90);
    }
    else {
      FUN_101942c94();
      if (lVar4 != 0) {
        lVar6 = lVar4;
        func_0x000107c4f7c0();
        func_0x000107c61180();
        if (lVar6 == 0) {
          func_0x0001000295c4();
          func_0x000107c5ffdc();
        }
        uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
        uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
        puVar7 = &UNK_110416140;
        func_0x000107c613fc(&UNK_110416140,0x50,7);
        *(undefined **)(puVar7 + 0x10) = puStack_90;
        *(undefined8 *)(puVar7 + 0x18) = uVar1;
        *(undefined8 *)(puVar7 + 0x20) = uVar2;
        *(code **)(puVar7 + 0x28) = param_1;
        *(undefined8 *)(puVar7 + 0x30) = param_2;
        *(long *)(puVar7 + 0x38) = lVar5;
        *(long *)(puVar7 + 0x40) = lVar6;
        *(long *)(puVar7 + 0x48) = unaff_x20;
        pcStack_70 = FUN_101943668;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_1000f6b44;
        puStack_78 = &UNK_110416158;
        puStack_68 = puVar7;
        func_0x000107c60bc4(&puStack_90);
        puVar7 = puStack_68;
        func_0x000107c61434(uVar2);
        func_0x000107c61174(puVar9);
        func_0x000107c6157c(param_2);
        func_0x000107c615f0(lVar5);
        func_0x000107c61174(lVar6);
        func_0x000107c6157c();
        func_0x000107c61574(puVar7);
        func_0x000107c4e524(lVar4);
        func_0x000107c60bd0(ppuVar8);
        func_0x000107c61170(puVar9);
        func_0x000107c615e8(lVar5);
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(lVar6);
        return;
      }
      func_0x000107c61170(puStack_90);
      func_0x000107c615e8(lVar5);
    }
  }
  (*param_1)(0);
  return;
}



/* Entry: 1019432c4; end: 101943463;  */

void FUN_1019432c4(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (param_1 != 0) {
    uVar1 = 0x112d373e8;
    lStack_58 = param_1;
    func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
    ppuVar2 = &puStack_88;
    func_0x000107c6147c(ppuVar2,&lStack_58,uVar1,PTR___sSSN_11034da80,6);
    if (((ulong)ppuVar2 & 1) != 0) {
      puVar3 = puStack_88;
      func_0x000107c5fadc(puStack_88,uStack_80);
      func_0x000107c6142c(uStack_80);
      puVar4 = &UNK_110416190;
      func_0x000107c613fc(&UNK_110416190,0x18,7);
      func_0x000107c61644(puVar4 + 0x10,param_8);
      puVar5 = &UNK_1104161b8;
      func_0x000107c613fc(&UNK_1104161b8,0x28,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(code **)(puVar5 + 0x18) = param_4;
      *(undefined8 *)(puVar5 + 0x20) = param_5;
      uStack_68 = 0x101943698;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_101043a98;
      puStack_70 = &UNK_1104161d0;
      ppuVar2 = &puStack_88;
      puStack_60 = puVar5;
      func_0x000107c60bc4(ppuVar2);
      puVar4 = puStack_60;
      func_0x000107c6157c(param_5);
      func_0x000107c61574(puVar4);
      func_0x000107c5b49c(param_6);
      func_0x000107c60bd0(ppuVar2);
      func_0x000107c61170(puVar3);
      return;
    }
  }
  (*param_4)(0);
  return;
}



/* Entry: 101943464; end: 1019435a3;  */

void FUN_101943464(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    if (param_1 != 0) {
      func_0x000107c61174();
      lVar1 = param_1;
      func_0x000107c439a8();
      func_0x000107c61180();
      if (lVar1 != 0) {
        lVar2 = lVar1;
        func_0x000107c5c3a4();
        func_0x000107c61180();
        func_0x000107c61170(lVar1);
        if (lVar2 != 0) {
          lVar1 = lVar2;
          func_0x000107c3e1d0();
          func_0x000107c61180();
          func_0x000107c61170(lVar2);
          if (lVar1 != 0) {
            lVar2 = lVar1;
            func_0x000107c3f464();
            func_0x000107c61170(lVar1);
            if ((int)lVar2 != 0) {
              func_0x000103e2a910(0);
              func_0x000107c61174(param_1);
              lVar1 = param_1;
              func_0x000103e2a930();
              (*param_4)();
              func_0x000107c61574(param_3);
              func_0x000107c61170(param_1);
              func_0x000107c61170(lVar1);
              return;
            }
          }
        }
      }
      func_0x000107c61170(param_1);
    }
    func_0x000107c61574();
  }
  (*param_4)(0);
  return;
}



/* Entry: 1019435a4; end: 101943607;  */

void FUN_1019435a4(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x0001019408ac(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101943608; end: 101943667;  */

void FUN_101943608(void)

{
  func_0x000101942d98();
  return;
}



/* Entry: 101943668; end: 1019436cb;  */

void FUN_101943668(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  pcVar2 = *(code **)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x000107c5fadc(uVar5,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  if (lVar6 != 0) {
    uVar5 = 0x112d373e8;
    lStack_58 = lVar6;
    func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
    ppuVar7 = &puStack_88;
    func_0x000107c6147c(ppuVar7,&lStack_58,uVar5,PTR___sSSN_11034da80,6);
    if (((ulong)ppuVar7 & 1) != 0) {
      puVar8 = puStack_88;
      func_0x000107c5fadc(puStack_88,uStack_80);
      func_0x000107c6142c(uStack_80);
      puVar9 = &UNK_110416190;
      func_0x000107c613fc(&UNK_110416190,0x18,7);
      func_0x000107c61644(puVar9 + 0x10,uVar4);
      puVar10 = &UNK_1104161b8;
      func_0x000107c613fc(&UNK_1104161b8,0x28,7);
      *(undefined **)(puVar10 + 0x10) = puVar9;
      *(code **)(puVar10 + 0x18) = pcVar2;
      *(undefined8 *)(puVar10 + 0x20) = uVar1;
      uStack_68 = 0x101943698;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_101043a98;
      puStack_70 = &UNK_1104161d0;
      ppuVar7 = &puStack_88;
      puStack_60 = puVar10;
      func_0x000107c60bc4(ppuVar7);
      puVar9 = puStack_60;
      func_0x000107c6157c(uVar1);
      func_0x000107c61574(puVar9);
      func_0x000107c5b49c(uVar3);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(puVar8);
      return;
    }
  }
  (*pcVar2)(0);
  return;
}



/* Entry: 1019436cc; end: 1019436ff; -[SCGenAICameosIdentity toProto] */

void FUN_1019436cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101943700();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101943700; end: 1019438ab;  */

undefined * FUN_101943700(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126b97d8;
  func_0x000107c610f8(PTR_PTR_1126b97d8);
  func_0x000107c453e4();
  lVar2 = unaff_x20;
  func_0x000107c4f2e0();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5d7e8();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c5a120(puVar1);
  func_0x000107c61170(lVar3);
  lVar2 = unaff_x20;
  func_0x000107c4f2e0();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4271c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c559a4(puVar1);
  func_0x000107c61170(lVar3);
  lVar2 = unaff_x20;
  func_0x000107c4f2e0();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c42718();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c55938(puVar1);
  func_0x000107c61170(lVar3);
  puVar4 = PTR_PTR_1126a7e88;
  func_0x000107c610f8(PTR_PTR_1126a7e88);
  func_0x000107c453e4();
  func_0x000107c57880();
  lVar2 = unaff_x20;
  func_0x000107c51a8c();
  func_0x000107c61180();
  uVar5 = param_2;
  if (lVar2 == 0) {
    func_0x000107c5faec();
    uVar5 = param_2;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c58cfc(puVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c4388c();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar5);
  }
  func_0x000107c54b44(puVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(unaff_x20);
  return puVar4;
}



/* Entry: 1019438ac; end: 1019438e3; +[SCGenAICameosIdentity fromProto:] */

void FUN_1019438ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x0001019439f8();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1019438e4; end: 10194391b; +[SCGenAICameosIdentity fromBloopsUserData:] */

void FUN_1019438e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000101943c10();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10194391c; end: 101943e1b;  */

undefined8
FUN_10194391c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
             long param_6)

{
  undefined8 unaff_x20;
  
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  if (param_4 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c6142c(param_4);
  }
  if (param_6 == 0) {
    param_5 = 0;
  }
  else {
    func_0x000107c5fadc(param_5,param_6);
    func_0x000107c6142c(param_6);
  }
  func_0x000107c4677c();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  return unaff_x20;
}



/* Entry: 101943e1c; end: 101943e7b; -[_TtC14MinervaAPIImpl28MinervaAIStoryReplyGenerator init] */

void FUN_101943e1c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MinervaAPIImpl.MinervaAIStoryReplyGenerator",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101943e48);
  (*pcVar1)();
}



/* Entry: 101943e7c; end: 101943ed3; -[_TtC14MinervaAPIImpl28MinervaAIStoryReplyGenerator .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101943e98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101943eb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101943e9c) */
/* WARNING: Removing unreachable block (ram,0x000101943ebc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101943e7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dd7918));
  return;
}



/* Entry: 101943ed4; end: 101943ef3;  */

void FUN_101943ed4(void)

{
  func_0x000107c61168(&PTR_PTR_1127ece28);
  return;
}



/* Entry: 101943ef4; end: 10194562b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_101943ef4(double param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long unaff_x20;
  code *pcVar21;
  undefined1 *puVar22;
  ulong uVar23;
  byte *pbVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  double dVar28;
  undefined1 auStack_1d0 [8];
  byte *pbStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  ulong *puStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  long lStack_188;
  undefined *puStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined1 *puStack_168;
  code *pcStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  lVar5 = 0;
  uStack_1c0 = param_2;
  uStack_1b8 = param_3;
  func_0x000107c5eea4();
  pcVar21 = *(code **)(lVar5 + -8);
  lVar25 = *(long *)(pcVar21 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar22 = auStack_1d0 + -(lVar25 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = (long)puVar22 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_188 = lVar18 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar26 = (lVar18 - extraout_x12_00) - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar26 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar6 = PTR_PTR_1126b2798;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar7 = &UNK_1104163b0;
  puStack_150 = puVar6;
  func_0x000107c613fc(&UNK_1104163b0,0x11,7);
  pbVar24 = puVar7 + 0x10;
  *pbVar24 = 0;
  lStack_1a0 = lVar19 - extraout_x12_03;
  func_0x000107c5eea0(lVar19 - extraout_x12_03);
  puVar6 = &UNK_1104163d8;
  uVar17 = 0x18;
  func_0x000107c613fc(&UNK_1104163d8,0x18,7);
  puStack_1b0 = (ulong *)(puVar6 + 0x10);
  *puStack_1b0 = (ulong)PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_148 = param_4;
  func_0x000107c4459c();
  func_0x000107c61180();
  pbStack_1c8 = pbVar24;
  puStack_170 = puVar7;
  puStack_168 = puVar22;
  if (param_4 == (undefined *)0x0) {
    bVar4 = false;
  }
  else {
    puVar7 = param_4;
    func_0x000107c5faec();
    func_0x000107c61170(param_4);
    func_0x000107c6142c(uVar17);
    uVar27 = (ulong)puVar7 & 0xffffffffffff;
    if ((uVar17 & 0x2000000000000000) != 0) {
      uVar27 = uVar17 >> 0x38 & 0xf;
    }
    bVar4 = uVar27 != 0;
  }
  func_0x000107c5eea0(lVar19);
  puVar7 = &UNK_110416400;
  func_0x000107c613fc(&UNK_110416400,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  pcStack_158 = *(code **)(pcVar21 + 0x10);
  (*pcStack_158)(lVar26,lVar19,lVar5);
  uVar23 = (ulong)(byte)pcVar21[0x50];
  uVar17 = uVar23 + 0x18 & (uVar23 ^ 0xffffffffffffffff);
  lStack_1a8 = lVar25 + 7;
  uVar27 = lStack_1a8 + uVar17 & 0xfffffffffffffff8;
  puStack_180 = (undefined *)(uVar27 + 8);
  puVar8 = &UNK_110416428;
  uStack_198 = lVar26;
  uStack_190 = lVar25;
  func_0x000107c613fc(&UNK_110416428,uVar27 + 0x50,uVar23 | 7);
  *(undefined **)(puVar8 + 0x10) = puStack_150;
  pcStack_160 = *(code **)(pcVar21 + 0x20);
  pcStack_178 = pcVar21;
  (*pcStack_160)(puVar8 + uVar17,uStack_198,lVar5);
  puVar3 = puStack_170;
  *(undefined **)(puVar8 + uVar27) = puVar7;
  puVar1 = (undefined8 *)(puVar8 + (long)puStack_180);
  *puVar1 = 0x53534543435553;
  puVar1[1] = 0xe700000000000000;
  *(bool *)(puVar1 + 2) = bVar4;
  *(undefined **)(puVar8 + uVar27 + 0x20) = puStack_148;
  *(undefined **)(puVar8 + uVar27 + 0x28) = puVar6;
  *(undefined **)(puVar8 + uVar27 + 0x30) = puStack_170;
  *(undefined8 *)(puVar8 + uVar27 + 0x38) = param_5;
  *(undefined8 *)(puVar8 + uVar27 + 0x40) = param_6;
  *(undefined8 *)((long)(puVar8 + uVar27 + 0x40) + 8) = param_7;
  puVar9 = &UNK_110416400;
  puStack_180 = puVar8;
  func_0x000107c613fc(&UNK_110416400,0x18,7);
  func_0x000107c61614(puVar9 + 0x10,unaff_x20);
  pcVar21 = pcStack_158;
  lVar26 = lStack_188;
  (*pcStack_158)(lStack_188,lVar19,lVar5);
  (*pcVar21)(lVar18,lVar26,lVar5);
  uVar17 = uVar23 + 0x10 & (uVar23 ^ 0xffffffffffffffff);
  lVar25 = uVar17 + uStack_190;
  uStack_190 = lVar25 + 7U & 0xfffffffffffffff8;
  uVar27 = lVar25 + 0x17U & 0xfffffffffffffff8;
  puVar8 = &UNK_110416450;
  uStack_198 = uVar23;
  func_0x000107c613fc(&UNK_110416450,uVar27 + 0x28,uVar23 | 7);
  lStack_188 = lVar5;
  (*pcStack_160)(puVar8 + uVar17,lVar26,lVar5);
  *(undefined **)(puVar8 + uStack_190) = puVar9;
  *(bool *)((long)(puVar8 + uStack_190) + 8) = bVar4;
  *(undefined **)(puVar8 + uVar27) = puVar6;
  *(undefined **)(puVar8 + uVar27 + 8) = puVar3;
  *(undefined8 *)(puVar8 + uVar27 + 0x10) = param_5;
  *(undefined8 *)(puVar8 + uVar27 + 0x18) = param_6;
  *(undefined8 *)((long)(puVar8 + uVar27 + 0x18) + 8) = param_7;
  puVar22 = *(undefined1 **)(unaff_x20 + _DAT_112dd7928);
  func_0x000107c61580(puVar6,3);
  func_0x000107c61580(puVar3,3);
  func_0x000107c615f4(param_5,2);
  func_0x000107c61580(param_7,2);
  puVar10 = puStack_150;
  func_0x000107c61174();
  func_0x000107c6157c(puVar7);
  func_0x000107c61174(puStack_148);
  func_0x000107c6157c(puVar9);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar13 = puStack_180;
  puVar15 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_150 = puVar10;
  if (puVar22 == (undefined1 *)0x0) {
    puStack_148 = puVar8;
    FUN_101945d90();
    puVar8 = &UNK_1104176c8;
    func_0x000107c613f8(&UNK_1104176c8,puVar22,0,0);
    puVar11 = puStack_168;
    *puVar22 = 0;
    func_0x000107c5eea0(puStack_168);
    func_0x000107c5ee68(lVar18);
    lVar5 = lStack_188;
    pcStack_178 = *(code **)(pcStack_178 + 8);
    (*pcStack_178)(puVar11,lStack_188);
    dVar28 = (double)(long)(param_1 * 1000.0);
    if (0x7fefffffffffffff < (ulong)ABS(dVar28)) {
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x101944b84);
      (*pcVar21)();
    }
    if (dVar28 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x101944b88);
      (*pcVar21)();
    }
    if (9.223372036854776e+18 <= dVar28) {
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x101944b8c);
      (*pcVar21)();
    }
    func_0x000107c614b0(puVar8);
    puVar10 = puVar8;
    FUN_10194abec(puVar8);
    puVar22 = auStack_90;
    func_0x000107c61428(puVar9 + 0x10,puVar22,0,0);
    puVar15 = puVar9 + 0x10;
    func_0x000107c61618();
    if (puVar15 != (undefined *)0x0) {
      uVar20 = *(undefined8 *)(puVar15 + _DAT_112dd7930);
      func_0x000107c61174(uVar20);
      func_0x000107c61170(puVar15);
      FUN_10194aa38(puVar10);
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar22);
      func_0x000107c4b9ac(uVar20);
      func_0x000107c61170(uVar20);
      func_0x000107c61170(puVar10);
    }
    puVar15 = PTR_PTR_1126a7e90;
    func_0x000107c610f8();
    func_0x000107c470f0();
    puVar2 = puStack_1b0;
    func_0x000107c61428(puStack_1b0,&puStack_f0,0x21,0);
    FUN_10194a1b8();
    uVar27 = *puVar2;
    uVar23 = uVar27 & 0xffffffffffffff8;
    uVar17 = *(ulong *)(uVar23 + 0x10);
    if (*(ulong *)(uVar23 + 0x18) >> 1 <= uVar17) {
      uVar27 = (ulong)(1 < *(ulong *)(uVar23 + 0x18));
      FUN_10194a228(uVar27,uVar17 + 1,1);
      uVar23 = uVar27 & 0xffffffffffffff8;
    }
    pbVar24 = pbStack_1c8;
    *(ulong *)(uVar23 + 0x10) = uVar17 + 1;
    *(undefined **)(uVar23 + uVar17 * 8 + 0x20) = puVar15;
    *puStack_1b0 = uVar27;
    func_0x000107c614a8(&puStack_f0);
    func_0x000107c61428(pbVar24,auStack_a8,0,0);
    if ((*pbVar24 & 1) == 0) {
      puVar15 = puVar9 + 0x10;
      func_0x000107c61618();
      if (puVar15 != (undefined *)0x0) {
        func_0x000107c61170();
        uVar20 = *(undefined8 *)(puVar6 + 0x10);
        func_0x000107c61428(pbVar24,auStack_c0,0x21,0);
        puVar15 = &UNK_110416478;
        func_0x000107c613fc(&UNK_110416478,0x48,7);
        *(undefined8 *)(puVar15 + 0x10) = 2;
        *(undefined8 *)(puVar15 + 0x18) = uVar20;
        *(long *)(puVar15 + 0x20) = (long)dVar28;
        *(undefined8 *)(puVar15 + 0x28) = 0;
        *(undefined **)(puVar15 + 0x30) = puVar8;
        *(undefined8 *)(puVar15 + 0x38) = param_6;
        *(undefined8 *)(puVar15 + 0x40) = param_7;
        pcStack_d0 = FUN_101945dd0;
        puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_e8 = 0x42000000;
        puStack_e0 = &UNK_1000f6b44;
        puStack_d8 = &UNK_110416490;
        ppuVar16 = &puStack_f0;
        puStack_c8 = puVar15;
        func_0x000107c60bc4(ppuVar16);
        puVar15 = puStack_c8;
        func_0x000107c61434(uVar20);
        func_0x000107c6157c(param_7);
        func_0x000107c614b0(puVar8);
        func_0x000107c61434(uVar20);
        func_0x000107c61574(puVar15);
        func_0x000107c4e524(param_5);
        puVar3[0x10] = 1;
        func_0x000107c614a8(auStack_c0);
        func_0x000107c60bd0(ppuVar16);
        func_0x000107c6142c(uVar20);
        func_0x000107c61574(puVar13);
        func_0x000107c61574(puStack_148);
        pcVar21 = pcStack_178;
        (*pcStack_178)(lVar18,lVar5);
        func_0x000107c61574(puVar3);
        func_0x000107c61574(puVar6);
        func_0x000107c614ac(puVar8);
        goto LAB_1019449e0;
      }
    }
    func_0x000107c61574(puVar13);
    func_0x000107c61574(puStack_148);
    pcVar21 = pcStack_178;
    (*pcStack_178)(lVar18,lVar5);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar6);
    func_0x000107c614ac(puVar8);
  }
  else {
    uVar20 = uStack_1c0;
    func_0x000107c5fadc(uStack_1c0,uStack_1b8);
    puVar11 = puVar22;
    func_0x000107c43d88();
    func_0x000107c61180();
    func_0x000107c61170(uVar20);
    puVar12 = puVar11;
    func_0x000107c4da88(puVar11);
    func_0x000107c61180();
    puVar13 = &UNK_110416518;
    func_0x000107c613fc(&UNK_110416518,0x30,7);
    puVar10 = puStack_180;
    *(undefined8 *)(puVar13 + 0x10) = 0x101945cf4;
    *(undefined **)(puVar13 + 0x18) = puVar8;
    *(code **)(puVar13 + 0x20) = FUN_101945c34;
    *(undefined **)(puVar13 + 0x28) = puStack_180;
    pcStack_d0 = FUN_101945e44;
    puStack_f0 = puVar15;
    uStack_e8 = 0x42000000;
    puStack_e0 = (undefined *)0x101946090;
    puStack_d8 = &UNK_110416530;
    ppuVar16 = &puStack_f0;
    puStack_c8 = puVar13;
    func_0x000107c60bc4(ppuVar16);
    puVar15 = puStack_c8;
    func_0x000107c6157c(puVar8);
    func_0x000107c6157c(puVar10);
    func_0x000107c61574(puVar15);
    puVar14 = puVar12;
    func_0x000107c5c320(puVar12);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar16);
    func_0x000107c61170(puVar12);
    func_0x000107c3e924(puVar14);
    func_0x000107c61574(puVar10);
    func_0x000107c61574(puVar8);
    func_0x000107c615e8(puVar22);
    func_0x000107c61574(puVar6);
    func_0x000107c61574(puVar3);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar14);
    lVar5 = lStack_188;
    pcVar21 = *(code **)(pcStack_178 + 8);
    (*pcVar21)(lVar18,lStack_188);
  }
LAB_1019449e0:
  puVar22 = puStack_168;
  uVar17 = uStack_198;
  uVar27 = ~uStack_198;
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar9);
  puVar7 = &UNK_110416400;
  func_0x000107c613fc(&UNK_110416400,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,unaff_x20);
  lVar18 = lStack_1a0;
  (*pcStack_158)(puVar22,lStack_1a0,lVar5);
  uVar27 = uVar17 + 0x20 & uVar27;
  uVar23 = lStack_1a8 + uVar27 & 0xfffffffffffffff8;
  puVar8 = &UNK_1104164c8;
  func_0x000107c613fc(&UNK_1104164c8,uVar23 + 0x18,uVar17 | 7);
  *(undefined **)(puVar8 + 0x10) = puVar7;
  *(undefined **)(puVar8 + 0x18) = puVar3;
  (*pcStack_160)(puVar8 + uVar27,puVar22,lVar5);
  *(undefined8 *)(puVar8 + uVar23) = param_5;
  *(undefined8 *)(puVar8 + uVar23 + 8) = param_6;
  *(undefined8 *)((long)(puVar8 + uVar23 + 8) + 8) = param_7;
  pcStack_d0 = FUN_101945df0;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0x42000000;
  puStack_e0 = &UNK_1000b0c7c;
  puStack_d8 = &UNK_1104164e0;
  ppuVar16 = &puStack_f0;
  puStack_c8 = puVar8;
  func_0x000107c60bc4(ppuVar16);
  puVar7 = puStack_c8;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(param_7);
  func_0x000107c615f0(param_5);
  func_0x000107c61574(puVar7);
  puVar7 = puStack_150;
  func_0x000107c3d5fc(puStack_150);
  func_0x000107c60bd0(ppuVar16);
  (*pcVar21)(lVar19,lVar5);
  (*pcVar21)(lVar18,lVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar6);
  return puVar7;
}



/* Entry: 10194562c; end: 101945713; -[_TtC14MinervaAPIImpl28MinervaAIStoryReplyGenerator generateAIStoryReplyForSnapId:parameters:completionPerformer:completion:] */

void FUN_10194562c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  puVar1 = &UNK_110416388;
  func_0x000107c613fc(&UNK_110416388,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_101943ef4(param_3,param_2,param_4,param_5,FUN_101945c2c,puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101945714; end: 101945943;  */

void FUN_101945714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  puVar3 = &UNK_110416568;
  func_0x000107c613fc(&UNK_110416568,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  puVar4 = &UNK_110416590;
  func_0x000107c613fc(&UNK_110416590,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_101945e7c;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x101945e88;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_101946050;
  puStack_88 = &UNK_1104165a8;
  puStack_78 = puVar4;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_1104165e0;
  func_0x000107c613fc(&UNK_1104165e0,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = param_2;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  puVar7 = &UNK_110416608;
  func_0x000107c613fc(&UNK_110416608,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x101945e90;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  uStack_80 = 0x101945e98;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_100e27b38;
  puStack_88 = &UNK_110416620;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  puVar1 = puStack_78;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x71,0x8d,0x15,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101945940);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x71,0x93,0x21,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101945944);
  (*pcVar2)();
}



/* Entry: 101945944; end: 1019459df;  */

void FUN_101945944(undefined1 *param_1,code *param_2,undefined8 param_3,code *param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  
  if (param_1 != (undefined1 *)0x0) {
    puVar1 = param_1;
    func_0x000107c61174();
    (*param_4)(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  FUN_101945d90();
  puVar2 = &UNK_1104176c8;
  func_0x000107c613f8(&UNK_1104176c8,param_1,0,0);
  *param_1 = 7;
  (*param_2)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar2);
  return;
}



/* Entry: 1019459e0; end: 101945a53;  */

void FUN_1019459e0(undefined *param_1,code *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar1 = param_1;
    FUN_101945d90();
    puVar2 = &UNK_1104176c8;
    func_0x000107c613f8(&UNK_1104176c8,puVar1,0,0);
    *puVar1 = 7;
  }
  func_0x000107c614b0(param_1);
  (*param_2)(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar2);
  return;
}



/* Entry: 101945a54; end: 101945c2b;  */

/* WARNING: Possible PIC construction at 0x000101945af0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101945b20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101945be0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101945c04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101945be4) */
/* WARNING: Removing unreachable block (ram,0x000101945b24) */
/* WARNING: Removing unreachable block (ram,0x000101945af4) */
/* WARNING: Removing unreachable block (ram,0x000101945b44) */
/* WARNING: Removing unreachable block (ram,0x000101945b48) */
/* WARNING: Removing unreachable block (ram,0x000101945be8) */
/* WARNING: Removing unreachable block (ram,0x000101945bf0) */
/* WARNING: Removing unreachable block (ram,0x000101945b88) */
/* WARNING: Removing unreachable block (ram,0x000101945b00) */
/* WARNING: Removing unreachable block (ram,0x000101945c08) */

void FUN_101945a54(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c490d4();
  if (param_2 != 0) {
    uVar2 = 0;
    FUN_101945ea0(0);
    func_0x000107c5fc48(param_2,uVar2);
  }
  func_0x000107c610f8(PTR_PTR_1126a7e98);
  func_0x000107c46b10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101945c2c; end: 101945c33;  */

void FUN_101945c2c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101945c34; end: 101945d8f;  */

void FUN_101945c34(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  
  lVar3 = 0;
  func_0x000107c5eea4();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar5 = uVar4 + 0x18 & (uVar4 ^ 0xffffffffffffffff);
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar5 + 7 & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar4 + 8);
  puVar2 = (undefined8 *)(unaff_x20 + uVar4 + 0x40);
  func_0x000101944bac(param_1,*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + uVar5,
                      *(undefined8 *)(unaff_x20 + uVar4),*puVar1,puVar1[1],
                      *(undefined1 *)(puVar1 + 2),*(undefined8 *)(unaff_x20 + uVar4 + 0x20),
                      *(undefined8 *)(unaff_x20 + uVar4 + 0x28),
                      *(undefined8 *)(unaff_x20 + uVar4 + 0x30),
                      *(undefined8 *)(unaff_x20 + uVar4 + 0x38),*puVar2,puVar2[1]);
  return;
}



/* Entry: 101945d90; end: 101945dcf;  */

void FUN_101945d90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd7960 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d99ab84;
  func_0x000107c61520(&UNK_10d99ab84,&UNK_1104176c8);
  puRam0000000112dd7960 = puVar1;
  return;
}



/* Entry: 101945dd0; end: 101945def;  */

/* WARNING: Possible PIC construction at 0x000101945af0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101945b20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101945be0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101945c04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101945be4) */
/* WARNING: Removing unreachable block (ram,0x000101945b24) */
/* WARNING: Removing unreachable block (ram,0x000101945af4) */
/* WARNING: Removing unreachable block (ram,0x000101945b44) */
/* WARNING: Removing unreachable block (ram,0x000101945b48) */
/* WARNING: Removing unreachable block (ram,0x000101945be8) */
/* WARNING: Removing unreachable block (ram,0x000101945bf0) */
/* WARNING: Removing unreachable block (ram,0x000101945b88) */
/* WARNING: Removing unreachable block (ram,0x000101945b00) */
/* WARNING: Removing unreachable block (ram,0x000101945c08) */

void FUN_101945dd0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570,lVar1,*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c490d4();
  if (lVar1 != 0) {
    uVar3 = 0;
    FUN_101945ea0(0);
    func_0x000107c5fc48(lVar1,uVar3);
  }
  func_0x000107c610f8(PTR_PTR_1126a7e98);
  func_0x000107c46b10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 101945df0; end: 101945e43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101945df0(double param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined8 uVar12;
  long extraout_x8;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  long unaff_x20;
  long lVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  lVar11 = 0;
  func_0x000107c5eea4();
  uVar14 = (ulong)*(byte *)(*(long *)(lVar11 + -8) + 0x50);
  uVar15 = uVar14 + 0x20 & (uVar14 ^ 0xffffffffffffffff);
  uVar14 = *(long *)(*(long *)(lVar11 + -8) + 0x40) + uVar15 + 7 & 0xfffffffffffffff8;
  lVar17 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar12 = *(undefined8 *)(unaff_x20 + uVar14);
  puVar1 = (undefined8 *)(unaff_x20 + uVar14 + 8);
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  lVar6 = 0;
  func_0x000107c5eea4();
  lVar16 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar18 = (long)&lStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(lVar17 + 0x10,auStack_90,0,0);
  lVar11 = lVar17 + 0x10;
  func_0x000107c61618();
  if (lVar11 != 0) {
    uVar13 = *(undefined8 *)(lVar11 + _DAT_112dd7918);
    lStack_110 = lVar17;
    func_0x000107c61174(uVar13);
    lVar17 = lStack_110;
    func_0x000107c61170(lVar11);
    func_0x000107c42194(uVar13);
    func_0x000107c61170(uVar13);
  }
  func_0x000107c61428(lVar3 + 0x10,auStack_a8,0,0);
  if ((*(byte *)(lVar3 + 0x10) & 1) == 0) {
    func_0x000107c5eea0(lVar18);
    func_0x000107c5ee68(unaff_x20 + uVar15);
    (**(code **)(lVar16 + 8))(lVar18,lVar6);
    dVar19 = (double)(long)(param_1 * 1000.0);
    if (0x7fefffffffffffff < (ulong)ABS(dVar19)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101945624);
      (*pcVar5)();
    }
    if (dVar19 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101945628);
      (*pcVar5)();
    }
    if (9.223372036854776e+18 <= dVar19) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10194562c);
      (*pcVar5)();
    }
    func_0x000107c61428(lVar17 + 0x10,auStack_c0,0,0);
    puVar7 = (undefined1 *)(lVar17 + 0x10);
    func_0x000107c61618();
    if (puVar7 != (undefined1 *)0x0) {
      func_0x000107c61170();
      FUN_101945d90();
      puVar8 = &UNK_1104176c8;
      func_0x000107c613f8(&UNK_1104176c8,puVar7,0,0);
      *puVar7 = 5;
      func_0x000107c61428(lVar3 + 0x10,auStack_d8,0x21,0);
      puVar9 = &UNK_110416658;
      func_0x000107c613fc(&UNK_110416658,0x48,7);
      *(undefined8 *)(puVar9 + 0x18) = 0;
      *(undefined8 *)(puVar9 + 0x10) = 1;
      *(long *)(puVar9 + 0x20) = (long)dVar19;
      *(undefined8 *)(puVar9 + 0x28) = 0;
      *(undefined **)(puVar9 + 0x30) = puVar8;
      *(undefined8 *)(puVar9 + 0x38) = uVar2;
      *(undefined8 *)(puVar9 + 0x40) = uVar4;
      uStack_e8 = 0x101945fc4;
      puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_100 = 0x42000000;
      puStack_f8 = &UNK_1000f6b44;
      puStack_f0 = &UNK_110416670;
      ppuVar10 = &puStack_108;
      puStack_e0 = puVar9;
      func_0x000107c60bc4(ppuVar10);
      puVar9 = puStack_e0;
      func_0x000107c614b0(puVar8);
      func_0x000107c6157c(uVar4);
      func_0x000107c61574(puVar9);
      func_0x000107c4e524(uVar12);
      *(undefined1 *)(lVar3 + 0x10) = 1;
      func_0x000107c614a8(auStack_d8);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c614ac(puVar8);
    }
  }
  return;
}



/* Entry: 101945e44; end: 101945e4f;  */

void FUN_101945e44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  ppuVar9 = &puStack_a0;
  ppuVar12 = &puStack_a0;
  puVar7 = &UNK_110416568;
  func_0x000107c613fc(&UNK_110416568,0x30,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar1;
  *(undefined8 *)(puVar7 + 0x18) = uVar3;
  *(undefined8 *)(puVar7 + 0x20) = uVar2;
  *(undefined8 *)(puVar7 + 0x28) = uVar4;
  puVar8 = &UNK_110416590;
  func_0x000107c613fc(&UNK_110416590,0x20,7);
  *(code **)(puVar8 + 0x10) = FUN_101945e7c;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x101945e88;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_101946050;
  puStack_88 = &UNK_1104165a8;
  puStack_78 = puVar8;
  func_0x000107c60bc4(&puStack_a0);
  puVar10 = puStack_78;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar10);
  puVar10 = &UNK_1104165e0;
  func_0x000107c613fc(&UNK_1104165e0,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar1;
  *(undefined8 *)(puVar10 + 0x18) = uVar3;
  puVar11 = &UNK_110416608;
  func_0x000107c613fc(&UNK_110416608,0x20,7);
  *(undefined8 *)(puVar11 + 0x10) = 0x101945e90;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  uStack_80 = 0x101945e98;
  puStack_a0 = puVar5;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_100e27b38;
  puStack_88 = &UNK_110416620;
  puStack_78 = puVar11;
  func_0x000107c60bc4(&puStack_a0);
  puVar5 = puStack_78;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(puVar11);
  func_0x000107c61574(puVar5);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61574(puVar7);
  puVar7 = puVar8;
  func_0x000107c61544(puVar8,"",0x71,0x8d,0x15,1);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar8);
  if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x101945940);
    (*pcVar6)();
  }
  puVar7 = puVar11;
  func_0x000107c61544(puVar11,"",0x71,0x93,0x21,1);
  func_0x000107c61574(puVar11);
  if (((ulong)puVar7 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x101945944);
  (*pcVar6)();
}



/* Entry: 101945e50; end: 101945e7b;  */

void FUN_101945e50(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101945e7c; end: 101945e9f;  */

void FUN_101945e7c(undefined1 *param_1)

{
  code *pcVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x20);
  if (param_1 != (undefined1 *)0x0) {
    puVar3 = param_1;
    func_0x000107c61174();
    (*pcVar2)(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  FUN_101945d90(0,pcVar1,*(undefined8 *)(unaff_x20 + 0x18),pcVar2,*(undefined8 *)(unaff_x20 + 0x28))
  ;
  puVar4 = &UNK_1104176c8;
  func_0x000107c613f8(&UNK_1104176c8,param_1,0,0);
  *param_1 = 7;
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar4);
  return;
}



/* Entry: 101945ea0; end: 101945f1f;  */

void FUN_101945ea0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd7968 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a7e90;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112dd7968 = puVar1;
  return;
}



/* Entry: 101945f20; end: 101945f47;  */

/* WARNING: Possible PIC construction at 0x000101945af0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101945b20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101945be0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101945c04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101945be4) */
/* WARNING: Removing unreachable block (ram,0x000101945b24) */
/* WARNING: Removing unreachable block (ram,0x000101945af4) */
/* WARNING: Removing unreachable block (ram,0x000101945b44) */
/* WARNING: Removing unreachable block (ram,0x000101945b48) */
/* WARNING: Removing unreachable block (ram,0x000101945be8) */
/* WARNING: Removing unreachable block (ram,0x000101945bf0) */
/* WARNING: Removing unreachable block (ram,0x000101945b88) */
/* WARNING: Removing unreachable block (ram,0x000101945b00) */
/* WARNING: Removing unreachable block (ram,0x000101945c08) */

void FUN_101945f20(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570,lVar1,*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c490d4();
  if (lVar1 != 0) {
    uVar3 = 0;
    FUN_101945ea0(0);
    func_0x000107c5fc48(lVar1,uVar3);
  }
  func_0x000107c610f8(PTR_PTR_1126a7e98);
  func_0x000107c46b10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 101945f48; end: 101945f8b;  */

void FUN_101945f48(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 101945f8c; end: 101945fcf;  */

void FUN_101945f8c(long param_1,long param_2)

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



/* Entry: 101945fd0; end: 10194602f;  */

void FUN_101945fd0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(param_4 + 0x10))(param_4,param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101946030; end: 10194604f;  */

void FUN_101946030(undefined8 param_1,code *param_2)

{
  (*param_2)();
  return;
}



/* Entry: 101946050; end: 1019460db;  */

void FUN_101946050(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1019460dc; end: 10194613b; -[_TtC14MinervaAPIImpl29MinervaMagicCaptionsGenerator init] */

void FUN_1019460dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MinervaAPIImpl.MinervaMagicCaptionsGenerator",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101946108);
  (*pcVar1)();
}



/* Entry: 10194613c; end: 1019461a3; -[_TtC14MinervaAPIImpl29MinervaMagicCaptionsGenerator .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101946158: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101946188: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010194615c) */
/* WARNING: Removing unreachable block (ram,0x00010194618c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10194613c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dd7978));
  return;
}



/* Entry: 1019461a4; end: 1019461c3;  */

void FUN_1019461a4(void)

{
  func_0x000107c61168(&PTR_PTR_1127ecf00);
  return;
}



/* Entry: 1019461c4; end: 101949503;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1019461c4(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  undefined1 *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long extraout_x8;
  long lVar19;
  undefined8 uVar20;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long lVar21;
  undefined *puVar22;
  long unaff_x20;
  ulong uVar23;
  code *pcVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  double dVar28;
  undefined1 auStack_200 [8];
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  byte *pbStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  ulong uStack_1b8;
  long lStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  ulong uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined *puStack_138;
  code *pcStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  lVar2 = 0;
  uStack_1a0 = param_2;
  puStack_190 = param_1;
  uStack_150 = param_5;
  uStack_148 = param_3;
  func_0x000107c5f83c();
  lStack_1e0 = *(long *)(lVar2 + -8);
  lStack_1d8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1e0 + 0x40));
  lVar3 = 0;
  puStack_1e8 = auStack_200 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eea4();
  lVar27 = *(long *)(lVar3 + -8);
  lVar2 = *(long *)(lVar27 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = (long)(auStack_200 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (lVar2 + 0xfU & 0xfffffffffffffff0);
  lStack_158 = lVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar19 - extraout_x12;
  lStack_140 = lVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar19 - extraout_x12_00;
  puStack_188 = (undefined *)lVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar19 - extraout_x12_01;
  pcStack_178 = (code *)lVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = lVar19 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar4 = PTR_PTR_1126b2798;
  lStack_128 = lVar21 - extraout_x12_03;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puStack_170 = puVar4;
  func_0x000107c60f34();
  puVar5 = &UNK_110416790;
  puStack_160 = puVar4;
  func_0x000107c613fc(&UNK_110416790,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0;
  puVar6 = &UNK_1104167b8;
  func_0x000107c613fc(&UNK_1104167b8,0x11,7);
  pbStack_1d0 = puVar6 + 0x10;
  *pbStack_1d0 = 0;
  puStack_138 = puVar6;
  func_0x000107c5eea0(lVar21 - extraout_x12_03);
  func_0x000107c5eea0(lVar21);
  puVar6 = &UNK_1104167e0;
  func_0x000107c613fc(&UNK_1104167e0,0x18,7);
  *(undefined **)(puVar6 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c60f38(puVar4);
  puVar4 = &UNK_110416808;
  func_0x000107c613fc(&UNK_110416808,0x18,7);
  puStack_120 = puVar4;
  func_0x000107c61614(puVar4 + 0x10);
  pcVar24 = *(code **)(lVar27 + 0x10);
  lStack_198 = lVar21;
  (*pcVar24)(lVar19,lVar21,lVar3);
  uVar25 = (ulong)*(byte *)(lVar27 + 0x50);
  uVar26 = uVar25 + 0x20 & (uVar25 ^ 0xffffffffffffffff);
  lVar2 = lVar2 + 7;
  uVar23 = lVar2 + uVar26 & 0xfffffffffffffff8;
  puVar4 = &UNK_110416830;
  func_0x000107c613fc(&UNK_110416830,uVar23 + 0x10,uVar25 | 7);
  *(undefined **)(puVar4 + 0x10) = puStack_160;
  *(undefined **)(puVar4 + 0x18) = puVar5;
  pcStack_130 = *(code **)(lVar27 + 0x20);
  lStack_168 = lVar27;
  (*pcStack_130)(puVar4 + uVar26,pcStack_178,lVar3);
  *(undefined **)(puVar4 + uVar23) = puStack_120;
  *(undefined **)(puVar4 + uVar23 + 8) = puVar6;
  puVar7 = &UNK_110416808;
  puStack_1c8 = puVar4;
  func_0x000107c613fc(&UNK_110416808,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  puVar17 = puStack_188;
  (*pcVar24)(puStack_188,lStack_128,lVar3);
  pcStack_178 = pcVar24;
  (*pcVar24)(lStack_140,puVar17,lVar3);
  uVar23 = uVar25 + 0x28 & (uVar25 ^ 0xffffffffffffffff);
  uVar26 = lVar2 + uVar23 & 0xfffffffffffffff8;
  lVar19 = uVar26 + 8;
  puVar4 = &UNK_110416858;
  lStack_1c0 = lVar2;
  uStack_180 = uVar25;
  func_0x000107c613fc(&UNK_110416858,uVar26 + 0x18,uVar25 | 7);
  puVar22 = puStack_138;
  puVar8 = puStack_160;
  *(undefined **)(puVar4 + 0x10) = puStack_160;
  *(undefined **)(puVar4 + 0x18) = puVar7;
  *(undefined **)(puVar4 + 0x20) = puStack_138;
  uStack_1b8 = uVar23;
  (*pcStack_130)(puVar4 + uVar23,puVar17,lVar3);
  uVar14 = uStack_148;
  uVar20 = uStack_150;
  *(undefined8 *)(puVar4 + uVar26) = uStack_148;
  *(undefined8 *)(puVar4 + lVar19) = param_4;
  *(undefined8 *)((long)(puVar4 + lVar19) + 8) = uStack_150;
  func_0x000107c61174();
  uVar18 = 2;
  func_0x000107c61580(puVar22);
  func_0x000107c61174();
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(puStack_120);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(uVar20);
  func_0x000107c615f0(uVar14);
  func_0x000107c6157c(puVar7);
  dVar28 = 1.0;
  puVar9 = puStack_190;
  func_0x000107c60bb4();
  func_0x000107c61180();
  puVar17 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_1b0 = lVar19;
  uStack_1a8 = uVar26;
  puStack_188 = puVar8;
  puStack_160 = puVar7;
  if (puVar9 == (undefined *)0x0) {
    FUN_101945d90();
    puVar13 = &UNK_1104176c8;
    func_0x000107c613f8(&UNK_1104176c8,puVar9,0,0);
    *puVar9 = 1;
    puStack_190 = puVar13;
    func_0x000107c61428(puVar7 + 0x10,auStack_90,0,0);
    puVar9 = puVar7 + 0x10;
    func_0x000107c61618();
    if (puVar9 != (undefined *)0x0) {
      uVar20 = *(undefined8 *)(puVar9 + _DAT_112dd7998);
      func_0x000107c61174(uVar20);
      func_0x000107c61170(puVar9);
      uVar14 = 0x4552554c494146;
      func_0x000107c5fadc(0x4552554c494146,0xe700000000000000);
      uVar18 = 0x41435f434947414d;
      func_0x000107c5fadc(0x41435f434947414d,0xed00004e4f495450);
      func_0x000107c4bbfc(uVar20);
      func_0x000107c61170(uVar20);
      puVar7 = puStack_160;
      func_0x000107c61170(uVar14);
      func_0x000107c61170(uVar18);
    }
    pbVar1 = pbStack_1d0;
    func_0x000107c61428(pbStack_1d0,auStack_a8,0,0);
    puVar10 = puStack_1e8;
    if ((*pbVar1 & 1) == 0) {
      puVar9 = puVar7 + 0x10;
      func_0x000107c61618();
      lVar2 = lStack_168;
      if (puVar9 != (undefined *)0x0) {
        func_0x000107c61170();
        lVar19 = lStack_158;
        func_0x000107c5eea0(lStack_158);
        func_0x000107c5ee68(lStack_140);
        (**(code **)(lVar2 + 8))(lVar19,lVar3);
        pbVar1 = pbStack_1d0;
        dVar28 = (double)(long)(dVar28 * 1000.0);
        if (0x7fefffffffffffff < (ulong)ABS(dVar28)) {
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x1019473dc);
          (*pcVar24)();
        }
        if (dVar28 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x1019473e0);
          (*pcVar24)();
        }
        if (9.223372036854776e+18 <= dVar28) {
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x1019473e4);
          (*pcVar24)();
        }
        func_0x000107c61428(pbStack_1d0,auStack_c0,0x21,0);
        puVar7 = &UNK_110416880;
        func_0x000107c613fc(&UNK_110416880,0x48,7);
        uVar20 = uStack_150;
        puVar8 = puStack_190;
        *(undefined8 *)(puVar7 + 0x18) = 0;
        *(undefined8 *)(puVar7 + 0x10) = 2;
        *(long *)(puVar7 + 0x20) = (long)dVar28;
        *(undefined8 *)(puVar7 + 0x28) = 0;
        *(undefined **)(puVar7 + 0x30) = puStack_190;
        *(undefined8 *)(puVar7 + 0x38) = param_4;
        *(undefined8 *)(puVar7 + 0x40) = uStack_150;
        pcStack_d0 = FUN_101949e98;
        puStack_f0 = puVar17;
        uStack_e8 = 0x42000000;
        puStack_e0 = &UNK_1000f6b44;
        puStack_d8 = &UNK_110416898;
        ppuVar15 = &puStack_f0;
        puStack_c8 = puVar7;
        func_0x000107c60bc4(ppuVar15);
        puVar7 = puStack_c8;
        func_0x000107c6157c(uVar20);
        func_0x000107c614b0(puVar8);
        func_0x000107c61574(puVar7);
        func_0x000107c4e524(uStack_148);
        *pbVar1 = 1;
        func_0x000107c614a8(auStack_c0);
        func_0x000107c60bd0(ppuVar15);
        puVar22 = puStack_138;
        puVar7 = puStack_160;
        puVar8 = puStack_188;
      }
      puVar7 = puVar7 + 0x10;
      func_0x000107c61618();
      if (puVar7 != (undefined *)0x0) {
        uVar20 = *(undefined8 *)(puVar7 + _DAT_112dd7998);
        func_0x000107c61174(uVar20);
        func_0x000107c61170(puVar7);
        func_0x000107c4bbb0(uVar20);
        func_0x000107c61170(uVar20);
      }
      puVar10 = puStack_1e8;
      func_0x000107c5f830(puStack_1e8);
      puVar16 = puVar10;
      func_0x000107c5ffb0();
      (**(code **)(lStack_1e0 + 8))(puVar10,lStack_1d8);
      func_0x000107c5f7f4(puVar16,0);
    }
    else {
      func_0x000107c5f830(puStack_1e8);
      puVar16 = puVar10;
      func_0x000107c5ffb0();
      (**(code **)(lStack_1e0 + 8))(puVar10,lStack_1d8);
      func_0x000107c5f7f4(puVar16,0);
      lVar2 = lStack_168;
    }
    puVar7 = puStack_120;
    lVar19 = lStack_1c0;
    if (((ulong)puVar16 & 1) == 0) {
      func_0x000107c60f3c(puVar8);
    }
    func_0x000107c61574(puStack_1c8);
  }
  else {
    puVar7 = puVar9;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar9);
    puVar10 = *(undefined1 **)(unaff_x20 + _DAT_112dd7978);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (puVar10 != (undefined1 *)0x0) {
      puVar17 = puVar7;
      func_0x000107c5ee20(puVar7,uVar18);
      puVar16 = puVar10;
      func_0x000107c5d724(puVar10);
      func_0x000107c61180();
      func_0x000107c61170(puVar17);
      puVar11 = puVar16;
      func_0x000107c4da88(puVar16);
      func_0x000107c61180();
      puVar17 = &UNK_110416998;
      func_0x000107c613fc(&UNK_110416998,0x30,7);
      puVar8 = puStack_1c8;
      *(undefined8 *)(puVar17 + 0x10) = 0x101949648;
      *(undefined **)(puVar17 + 0x18) = puVar4;
      *(code **)(puVar17 + 0x20) = FUN_1019495e8;
      *(undefined **)(puVar17 + 0x28) = puStack_1c8;
      pcStack_d0 = FUN_101949fa4;
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0x42000000;
      puStack_e0 = (undefined *)0x10194accc;
      puStack_d8 = &UNK_1104169b0;
      ppuVar15 = &puStack_f0;
      puStack_c8 = puVar17;
      func_0x000107c60bc4(ppuVar15);
      puVar17 = puStack_c8;
      func_0x000107c6157c(puVar4);
      func_0x000107c6157c(puVar8);
      func_0x000107c61574(puVar17);
      puVar12 = puVar11;
      func_0x000107c5c320(puVar11);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar15);
      func_0x000107c61170(puVar11);
      func_0x000107c3e924(puVar12);
      func_0x000107c61170(puVar16);
      func_0x000107c61170(puVar12);
      func_0x00010006c090(puVar7,uVar18);
      func_0x000107c61574(puVar8);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puStack_138);
      func_0x000107c615e8(puVar10);
      (**(code **)(lStack_168 + 8))(lStack_140,lVar3);
      lVar19 = lStack_1c0;
      puVar7 = puStack_120;
      goto LAB_10194700c;
    }
    puStack_1f8 = puVar7;
    uStack_1f0 = uVar18;
    FUN_101945d90();
    puVar7 = &UNK_1104176c8;
    func_0x000107c613f8(&UNK_1104176c8,puVar10,0,0);
    puVar17 = puStack_160;
    *puVar10 = 0;
    puStack_190 = puVar7;
    func_0x000107c61428(puStack_160 + 0x10,auStack_90,0,0);
    puVar7 = puVar17 + 0x10;
    func_0x000107c61618();
    if (puVar7 != (undefined *)0x0) {
      uVar20 = *(undefined8 *)(puVar7 + _DAT_112dd7998);
      func_0x000107c61174(uVar20);
      func_0x000107c61170(puVar7);
      uVar14 = 0x4552554c494146;
      func_0x000107c5fadc(0x4552554c494146,0xe700000000000000);
      uVar18 = 0x41435f434947414d;
      func_0x000107c5fadc(0x41435f434947414d,0xed00004e4f495450);
      func_0x000107c4bbfc(uVar20);
      func_0x000107c61170(uVar20);
      puVar17 = puStack_160;
      func_0x000107c61170(uVar14);
      func_0x000107c61170(uVar18);
    }
    pbVar1 = pbStack_1d0;
    func_0x000107c61428(pbStack_1d0,auStack_a8,0,0);
    puVar22 = puStack_138;
    puVar10 = puStack_1e8;
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    if ((*pbVar1 & 1) == 0) {
      puVar9 = puVar17 + 0x10;
      func_0x000107c61618();
      lVar2 = lStack_168;
      if (puVar9 != (undefined *)0x0) {
        func_0x000107c61170();
        lVar19 = lStack_158;
        func_0x000107c5eea0(lStack_158);
        func_0x000107c5ee68(lStack_140);
        (**(code **)(lVar2 + 8))(lVar19,lVar3);
        pbVar1 = pbStack_1d0;
        dVar28 = (double)(long)(dVar28 * 1000.0);
        if (0x7fefffffffffffff < (ulong)ABS(dVar28)) {
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x1019473e8);
          (*pcVar24)();
        }
        if (dVar28 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x1019473ec);
          (*pcVar24)();
        }
        if (9.223372036854776e+18 <= dVar28) {
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x1019473f0);
          (*pcVar24)();
        }
        func_0x000107c61428(pbStack_1d0,auStack_c0,0x21,0);
        puVar17 = &UNK_110416948;
        func_0x000107c613fc(&UNK_110416948,0x48,7);
        uVar20 = uStack_150;
        puVar8 = puStack_190;
        *(undefined8 *)(puVar17 + 0x18) = 0;
        *(undefined8 *)(puVar17 + 0x10) = 2;
        *(long *)(puVar17 + 0x20) = (long)dVar28;
        *(undefined8 *)(puVar17 + 0x28) = 0;
        *(undefined **)(puVar17 + 0x30) = puStack_190;
        *(undefined8 *)(puVar17 + 0x38) = param_4;
        *(undefined8 *)(puVar17 + 0x40) = uStack_150;
        pcStack_d0 = (code *)0x10194a684;
        puStack_f0 = puVar7;
        uStack_e8 = 0x42000000;
        puStack_e0 = &UNK_1000f6b44;
        puStack_d8 = &UNK_110416960;
        ppuVar15 = &puStack_f0;
        puStack_c8 = puVar17;
        func_0x000107c60bc4(ppuVar15);
        puVar7 = puStack_c8;
        func_0x000107c6157c(uVar20);
        func_0x000107c614b0(puVar8);
        func_0x000107c61574(puVar7);
        func_0x000107c4e524(uStack_148);
        *pbVar1 = 1;
        func_0x000107c614a8(auStack_c0);
        func_0x000107c60bd0(ppuVar15);
        puVar22 = puStack_138;
        puVar17 = puStack_160;
        puVar8 = puStack_188;
      }
      puVar17 = puVar17 + 0x10;
      func_0x000107c61618();
      if (puVar17 != (undefined *)0x0) {
        uVar20 = *(undefined8 *)(puVar17 + _DAT_112dd7998);
        func_0x000107c61174(uVar20);
        func_0x000107c61170(puVar17);
        func_0x000107c4bbb0(uVar20);
        func_0x000107c61170(uVar20);
      }
      puVar10 = puStack_1e8;
      func_0x000107c5f830(puStack_1e8);
      puVar16 = puVar10;
      func_0x000107c5ffb0();
      (**(code **)(lStack_1e0 + 8))(puVar10,lStack_1d8);
      func_0x000107c5f7f4(puVar16,0);
    }
    else {
      func_0x000107c5f830(puStack_1e8);
      puVar16 = puVar10;
      func_0x000107c5ffb0();
      (**(code **)(lStack_1e0 + 8))(puVar10,lStack_1d8);
      func_0x000107c5f7f4(puVar16,0);
      lVar2 = lStack_168;
    }
    puVar7 = puStack_120;
    lVar19 = lStack_1c0;
    if (((ulong)puVar16 & 1) == 0) {
      func_0x000107c60f3c(puVar8);
    }
    func_0x00010006c090(puStack_1f8,uStack_1f0);
    func_0x000107c61574(puVar4);
    puVar4 = puStack_1c8;
  }
  func_0x000107c61574(puVar4);
  (**(code **)(lVar2 + 8))(lStack_140,lVar3);
  func_0x000107c61574(puVar22);
  func_0x000107c614ac(puStack_190);
LAB_10194700c:
  uVar23 = uStack_180;
  uVar26 = ~uStack_180;
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puStack_160);
  lStack_140 = *(undefined8 *)(unaff_x20 + _DAT_112dd7988);
  puVar4 = &UNK_110416808;
  func_0x000107c613fc(&UNK_110416808,0x18,7);
  puStack_160 = puVar4;
  func_0x000107c61614(puVar4 + 0x10,unaff_x20);
  lVar2 = lStack_158;
  (*pcStack_178)(lStack_158,lStack_128,lVar3);
  uVar26 = uVar23 + 0x30 & uVar26;
  uVar25 = lVar19 + uVar26 & 0xfffffffffffffff8;
  puStack_120 = (undefined *)(uVar25 + 0x10);
  puVar7 = &UNK_1104168d0;
  func_0x000107c613fc(&UNK_1104168d0,uVar25 + 0x38,uVar23 | 7);
  uVar20 = uStack_1a0;
  *(undefined **)(puVar7 + 0x10) = puStack_170;
  *(undefined **)(puVar7 + 0x18) = puVar5;
  *(undefined **)(puVar7 + 0x20) = puVar4;
  *(undefined8 *)(puVar7 + 0x28) = uStack_1a0;
  (*pcStack_130)(puVar7 + uVar26,lVar2,lVar3);
  puVar8 = puStack_138;
  uVar18 = uStack_148;
  uVar14 = uStack_150;
  *(undefined8 *)(puVar7 + uVar25) = 0x53534543435553;
  *(undefined8 *)((long)(puVar7 + uVar25) + 8) = 0xe700000000000000;
  *(undefined **)(puVar7 + (long)puStack_120) = puVar6;
  *(undefined **)(puVar7 + uVar25 + 0x18) = puStack_138;
  *(undefined8 *)(puVar7 + uVar25 + 0x20) = uStack_148;
  *(undefined8 *)(puVar7 + uVar25 + 0x28) = param_4;
  *(undefined8 *)((long)(puVar7 + uVar25 + 0x28) + 8) = uStack_150;
  func_0x000107c61174(uVar20);
  func_0x000107c6157c(puVar8);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(uVar14);
  func_0x000107c615f0(uVar18);
  lVar2 = lStack_140;
  func_0x000107c615f0(lStack_140);
  puVar17 = puStack_170;
  func_0x000107c61174();
  puVar4 = puStack_160;
  puStack_120 = puVar17;
  func_0x000107c6157c(puStack_160);
  puVar17 = puStack_188;
  func_0x00010488b768(lVar2,FUN_101949eb8,puVar7);
  func_0x000107c61574(puVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61574(puVar7);
  puVar4 = &UNK_110416808;
  func_0x000107c613fc(&UNK_110416808,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,unaff_x20);
  lVar21 = lStack_128;
  lVar19 = lStack_158;
  (*pcStack_178)(lStack_158,lStack_128,lVar3);
  lVar2 = lStack_1b0;
  puVar7 = &UNK_1104168f8;
  func_0x000107c613fc(&UNK_1104168f8,lStack_1b0 + 0x10,uStack_180 | 7);
  *(undefined **)(puVar7 + 0x10) = puVar4;
  *(undefined **)(puVar7 + 0x18) = puVar17;
  *(undefined **)(puVar7 + 0x20) = puVar8;
  (*pcStack_130)(puVar7 + uStack_1b8,lVar19,lVar3);
  *(undefined8 *)(puVar7 + uStack_1a8) = uVar18;
  *(undefined8 *)(puVar7 + lVar2) = param_4;
  *(undefined8 *)((long)(puVar7 + lVar2) + 8) = uVar14;
  pcStack_d0 = (code *)0x101949f4c;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0x42000000;
  puStack_e0 = &UNK_1000b0c7c;
  puStack_d8 = &UNK_110416910;
  ppuVar15 = &puStack_f0;
  puStack_c8 = puVar7;
  func_0x000107c60bc4(ppuVar15);
  puVar4 = puStack_c8;
  func_0x000107c61174(puVar17);
  func_0x000107c6157c(puVar8);
  func_0x000107c6157c(uVar14);
  func_0x000107c615f0(uVar18);
  func_0x000107c61574(puVar4);
  puVar4 = puStack_120;
  func_0x000107c3d5fc(puStack_120);
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c61170(puVar17);
  pcVar24 = *(code **)(lStack_168 + 8);
  (*pcVar24)(lStack_198,lVar3);
  (*pcVar24)(lVar21,lVar3);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar6);
  return puVar4;
}



/* Entry: 101949504; end: 1019495df; -[_TtC14MinervaAPIImpl29MinervaMagicCaptionsGenerator generateMagicCaptionsForImage:parameters:completionPerformer:completion:] */

void FUN_101949504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_110416768;
  func_0x000107c613fc(&UNK_110416768,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  func_0x000107c61174(param_3);
  uVar2 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  uVar3 = param_3;
  FUN_1019461c4(param_3,param_4,param_5,FUN_1019495e0,puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1019495e0; end: 1019495e7;  */

void FUN_1019495e0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1019495e8; end: 1019496af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019495e8(double param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long unaff_x20;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  double dVar18;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar9 = 0;
  func_0x000107c5eea4();
  uVar12 = (ulong)*(byte *)(*(long *)(lVar9 + -8) + 0x50);
  uVar13 = uVar12 + 0x20 & (uVar12 ^ 0xffffffffffffffff);
  uVar12 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + uVar13 + 7 & 0xfffffffffffffff8;
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar9 = *(long *)(unaff_x20 + uVar12);
  lVar10 = *(long *)(unaff_x20 + (uVar12 + 0xf & 0xffffffffffffff8));
  lVar3 = 0;
  func_0x000107c5f83c();
  lVar14 = *(long *)(lVar3 + -8);
  lStack_c8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar16 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar17 = (long)puVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(lVar1 + 0x10,auStack_88,1,0);
  uVar4 = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_2);
  func_0x000107c5eea0(lVar17);
  func_0x000107c5ee68(unaff_x20 + uVar13);
  (**(code **)(lVar15 + 8))(lVar17,lVar3);
  dVar18 = (double)(long)(param_1 * 1000.0);
  if (0x7fefffffffffffff < (ulong)ABS(dVar18)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1019476c0);
    (*pcVar2)();
  }
  if (-9.223372036854778e+18 < dVar18) {
    if (dVar18 < 9.223372036854776e+18) {
      func_0x000107c61428(lVar9 + 0x10,auStack_a0,0,0);
      lVar9 = lVar9 + 0x10;
      func_0x000107c61618();
      if (lVar9 != 0) {
        uVar4 = *(undefined8 *)(lVar9 + _DAT_112dd7998);
        func_0x000107c61174(uVar4);
        func_0x000107c61170(lVar9);
        uVar5 = 0x53534543435553;
        func_0x000107c5fadc(0x53534543435553,0xe700000000000000);
        uVar6 = 0x41435f434947414d;
        func_0x000107c5fadc(0x41435f434947414d,0xed00004e4f495450);
        func_0x000107c4bbfc(uVar4);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar6);
      }
      puVar7 = PTR_PTR_1126a7e90;
      func_0x000107c610f8();
      func_0x000107c470f0();
      func_0x000107c61428(lVar10 + 0x10,auStack_b8,0x21,0);
      FUN_10194a1b8();
      uVar4 = uStack_c0;
      uVar13 = *(ulong *)(lVar10 + 0x10);
      uVar11 = uVar13 & 0xffffffffffffff8;
      uVar12 = *(ulong *)(uVar11 + 0x10);
      if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar12) {
        uVar13 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
        FUN_10194a228(uVar13,uVar12 + 1,1);
        uVar11 = uVar13 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar11 + 0x10) = uVar12 + 1;
      *(undefined **)(uVar11 + uVar12 * 8 + 0x20) = puVar7;
      *(ulong *)(lVar10 + 0x10) = uVar13;
      func_0x000107c614a8(auStack_b8);
      func_0x000107c5f830(puVar16);
      puVar8 = puVar16;
      func_0x000107c5ffb0();
      (**(code **)(lVar14 + 8))(puVar16,lStack_c8);
      func_0x000107c5f7f4(puVar8,0);
      if (((ulong)puVar8 & 1) == 0) {
        func_0x000107c60f3c(uVar4);
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1019476c8);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1019476c4);
  (*pcVar2)();
}



/* Entry: 1019496b0; end: 1019498df;  */

void FUN_1019496b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  puVar3 = &UNK_1104169e8;
  func_0x000107c613fc(&UNK_1104169e8,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  puVar4 = &UNK_110416a10;
  func_0x000107c613fc(&UNK_110416a10,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x101949fb0;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = (code *)0x101949fbc;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = (undefined *)0x10194f784;
  puStack_88 = &UNK_110416a28;
  puStack_78 = puVar4;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_110416a60;
  func_0x000107c613fc(&UNK_110416a60,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = param_2;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  puVar7 = &UNK_110416a88;
  func_0x000107c613fc(&UNK_110416a88,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_101949fc4;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_80 = FUN_101949fe0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_110416aa0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  puVar1 = puStack_78;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x73,0xbb,0x15,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1019498dc);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x73,0xc1,0x21,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1019498e0);
  (*pcVar2)();
}



/* Entry: 1019498e0; end: 101949967;  */

void FUN_1019498e0(undefined1 *param_1,code *param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  
  if (param_1 != (undefined1 *)0x0) {
    func_0x000107c61174();
    (*param_4)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  FUN_101945d90();
  puVar1 = &UNK_1104176c8;
  func_0x000107c613f8(&UNK_1104176c8,param_1,0,0);
  *param_1 = 2;
  (*param_2)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar1);
  return;
}



/* Entry: 101949968; end: 101949b97;  */

void FUN_101949968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  puVar3 = &UNK_110416c18;
  func_0x000107c613fc(&UNK_110416c18,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  puVar4 = &UNK_110416c40;
  func_0x000107c613fc(&UNK_110416c40,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_10194a540;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_10194a54c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_101946050;
  puStack_88 = &UNK_110416c58;
  puStack_78 = puVar4;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_110416c90;
  func_0x000107c613fc(&UNK_110416c90,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = param_2;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  puVar7 = &UNK_110416cb8;
  func_0x000107c613fc(&UNK_110416cb8,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_10194a56c;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_80 = (code *)0x10194a680;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_100e27b38;
  puStack_88 = &UNK_110416cd0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  puVar1 = puStack_78;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x73,0xd9,0x15,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101949b94);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x73,0xdf,0x21,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101949b98);
  (*pcVar2)();
}



/* Entry: 101949b98; end: 101949caf;  */

void FUN_101949b98(undefined1 *param_1,code *param_2,undefined8 param_3,code *param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  
  if (param_1 != (undefined1 *)0x0) {
    puVar1 = param_1;
    func_0x000107c61174();
    (*param_4)(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  FUN_101945d90();
  puVar2 = &UNK_1104176c8;
  func_0x000107c613f8(&UNK_1104176c8,param_1,0,0);
  *param_1 = 7;
  (*param_2)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar2);
  return;
}



/* Entry: 101949cb0; end: 101949e97;  */

/* WARNING: Possible PIC construction at 0x000101949d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101949d8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101949e4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101949e70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101949e50) */
/* WARNING: Removing unreachable block (ram,0x000101949d90) */
/* WARNING: Removing unreachable block (ram,0x000101949d60) */
/* WARNING: Removing unreachable block (ram,0x000101949db0) */
/* WARNING: Removing unreachable block (ram,0x000101949db4) */
/* WARNING: Removing unreachable block (ram,0x000101949e54) */
/* WARNING: Removing unreachable block (ram,0x000101949e5c) */
/* WARNING: Removing unreachable block (ram,0x000101949df4) */
/* WARNING: Removing unreachable block (ram,0x000101949d6c) */
/* WARNING: Removing unreachable block (ram,0x000101949e74) */

void FUN_101949cb0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c490d4();
  if (param_2 != 0) {
    uVar2 = 0;
    FUN_10194a588(0,0x112dd7968,&PTR_PTR_1126a7e90);
    func_0x000107c5fc48(param_2,uVar2);
  }
  func_0x000107c610f8(PTR_PTR_1126a7e98);
  func_0x000107c46b10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101949e98; end: 101949eb7;  */

/* WARNING: Possible PIC construction at 0x000101949d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101949d8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101949e4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101949e70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101949e50) */
/* WARNING: Removing unreachable block (ram,0x000101949d90) */
/* WARNING: Removing unreachable block (ram,0x000101949d60) */
/* WARNING: Removing unreachable block (ram,0x000101949db0) */
/* WARNING: Removing unreachable block (ram,0x000101949db4) */
/* WARNING: Removing unreachable block (ram,0x000101949e54) */
/* WARNING: Removing unreachable block (ram,0x000101949e5c) */
/* WARNING: Removing unreachable block (ram,0x000101949df4) */
/* WARNING: Removing unreachable block (ram,0x000101949d6c) */
/* WARNING: Removing unreachable block (ram,0x000101949e74) */

void FUN_101949e98(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570,lVar1,*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c490d4();
  if (lVar1 != 0) {
    uVar3 = 0;
    FUN_10194a588(0,0x112dd7968,&PTR_PTR_1126a7e90);
    func_0x000107c5fc48(lVar1,uVar3);
  }
  func_0x000107c610f8(PTR_PTR_1126a7e98);
  func_0x000107c46b10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 101949eb8; end: 101949fa3;  */

void FUN_101949eb8(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar4 = uVar3 + 0x30 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar3 + 0x28);
  func_0x000101947b1c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      unaff_x20 + uVar4,*(undefined8 *)(unaff_x20 + uVar3),
                      ((undefined8 *)(unaff_x20 + uVar3))[1],
                      *(undefined8 *)(unaff_x20 + uVar3 + 0x10),
                      *(undefined8 *)(unaff_x20 + uVar3 + 0x18),
                      *(undefined8 *)(unaff_x20 + uVar3 + 0x20),*puVar1,puVar1[1]);
  return;
}



/* Entry: 101949fa4; end: 101949fc3;  */

void FUN_101949fa4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  ppuVar9 = &puStack_a0;
  ppuVar12 = &puStack_a0;
  puVar7 = &UNK_1104169e8;
  func_0x000107c613fc(&UNK_1104169e8,0x30,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar1;
  *(undefined8 *)(puVar7 + 0x18) = uVar3;
  *(undefined8 *)(puVar7 + 0x20) = uVar2;
  *(undefined8 *)(puVar7 + 0x28) = uVar4;
  puVar8 = &UNK_110416a10;
  func_0x000107c613fc(&UNK_110416a10,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = 0x101949fb0;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = (code *)0x101949fbc;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = (undefined *)0x10194f784;
  puStack_88 = &UNK_110416a28;
  puStack_78 = puVar8;
  func_0x000107c60bc4(&puStack_a0);
  puVar10 = puStack_78;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar10);
  puVar10 = &UNK_110416a60;
  func_0x000107c613fc(&UNK_110416a60,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar1;
  *(undefined8 *)(puVar10 + 0x18) = uVar3;
  puVar11 = &UNK_110416a88;
  func_0x000107c613fc(&UNK_110416a88,0x20,7);
  *(code **)(puVar11 + 0x10) = FUN_101949fc4;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  pcStack_80 = FUN_101949fe0;
  puStack_a0 = puVar5;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_110416aa0;
  puStack_78 = puVar11;
  func_0x000107c60bc4(&puStack_a0);
  puVar5 = puStack_78;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(puVar11);
  func_0x000107c61574(puVar5);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61574(puVar7);
  puVar7 = puVar8;
  func_0x000107c61544(puVar8,"",0x73,0xbb,0x15,1);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar8);
  if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1019498dc);
    (*pcVar6)();
  }
  puVar7 = puVar11;
  func_0x000107c61544(puVar11,"",0x73,0xc1,0x21,1);
  func_0x000107c61574(puVar11);
  if (((ulong)puVar7 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1019498e0);
  (*pcVar6)();
}



/* Entry: 101949fc4; end: 101949fdf;  */

void FUN_101949fc4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000101949c34(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),2)
  ;
  return;
}



/* Entry: 101949fe0; end: 101949fe7;  */

void FUN_101949fe0(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (param_1,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101949fe8; end: 10194a13f;  */

void FUN_101949fe8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  
  lVar3 = 0;
  func_0x000107c5eea4();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar6 = uVar4 + 0x18 & (uVar4 ^ 0xffffffffffffffff);
  lVar3 = *(long *)(*(long *)(lVar3 + -8) + 0x40);
  uVar5 = lVar3 + uVar4 + uVar6 & (uVar4 ^ 0xffffffffffffffff);
  uVar4 = lVar3 + uVar5 + 7 & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar4 + 8);
  puVar2 = (undefined8 *)(unaff_x20 + uVar4 + 0x30);
  func_0x000101948878(param_1,*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + uVar6,unaff_x20 + uVar5,
                      *(undefined8 *)(unaff_x20 + uVar4),*puVar1,puVar1[1],
                      *(undefined8 *)(unaff_x20 + uVar4 + 0x18),
                      *(undefined8 *)(unaff_x20 + uVar4 + 0x20),
                      *(undefined8 *)(unaff_x20 + uVar4 + 0x28),*puVar2,puVar2[1]);
  return;
}



/* Entry: 10194a140; end: 10194a1b7;  */

void FUN_10194a140(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10194a588(0,param_1,param_2);
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



/* Entry: 10194a1b8; end: 10194a227;  */

void FUN_10194a1b8(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    FUN_10194a228(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 10194a228; end: 10194a34f;  */

ulong FUN_10194a228(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10194a350);
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
  FUN_10194a350(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10194a34c);
      (*pcVar1)();
    }
    FUN_10194a3f0(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 10194a350; end: 10194a3ef;  */

undefined * FUN_10194a350(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112dd7968;
    FUN_10194a140(0x112dd7968,&PTR_PTR_1126a7e90,0x112dd79d8,&UNK_10d99a990);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 10194a3f0; end: 10194a507;  */

long FUN_10194a3f0(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10194a504);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10194a508);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_10194a588(0,0x112dd7968,&PTR_PTR_1126a7e90);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_10194a588(0,0x112dd7968,&PTR_PTR_1126a7e90);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10194a500);
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



/* Entry: 10194a508; end: 10194a513;  */

void FUN_10194a508(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  ppuVar9 = &puStack_a0;
  ppuVar12 = &puStack_a0;
  puVar7 = &UNK_110416c18;
  func_0x000107c613fc(&UNK_110416c18,0x30,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar1;
  *(undefined8 *)(puVar7 + 0x18) = uVar3;
  *(undefined8 *)(puVar7 + 0x20) = uVar2;
  *(undefined8 *)(puVar7 + 0x28) = uVar4;
  puVar8 = &UNK_110416c40;
  func_0x000107c613fc(&UNK_110416c40,0x20,7);
  *(code **)(puVar8 + 0x10) = FUN_10194a540;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_10194a54c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_101946050;
  puStack_88 = &UNK_110416c58;
  puStack_78 = puVar8;
  func_0x000107c60bc4(&puStack_a0);
  puVar10 = puStack_78;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar10);
  puVar10 = &UNK_110416c90;
  func_0x000107c613fc(&UNK_110416c90,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar1;
  *(undefined8 *)(puVar10 + 0x18) = uVar3;
  puVar11 = &UNK_110416cb8;
  func_0x000107c613fc(&UNK_110416cb8,0x20,7);
  *(code **)(puVar11 + 0x10) = FUN_10194a56c;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  pcStack_80 = (code *)0x10194a680;
  puStack_a0 = puVar5;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_100e27b38;
  puStack_88 = &UNK_110416cd0;
  puStack_78 = puVar11;
  func_0x000107c60bc4(&puStack_a0);
  puVar5 = puStack_78;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(puVar11);
  func_0x000107c61574(puVar5);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61574(puVar7);
  puVar7 = puVar8;
  func_0x000107c61544(puVar8,"",0x73,0xd9,0x15,1);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar8);
  if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x101949b94);
    (*pcVar6)();
  }
  puVar7 = puVar11;
  func_0x000107c61544(puVar11,"",0x73,0xdf,0x21,1);
  func_0x000107c61574(puVar11);
  if (((ulong)puVar7 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x101949b98);
  (*pcVar6)();
}



/* Entry: 10194a514; end: 10194a53f;  */

void FUN_10194a514(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10194a540; end: 10194a54b;  */

void FUN_10194a540(undefined1 *param_1)

{
  code *pcVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x20);
  if (param_1 != (undefined1 *)0x0) {
    puVar3 = param_1;
    func_0x000107c61174();
    (*pcVar2)(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  FUN_101945d90(0,pcVar1,*(undefined8 *)(unaff_x20 + 0x18),pcVar2,*(undefined8 *)(unaff_x20 + 0x28))
  ;
  puVar4 = &UNK_1104176c8;
  func_0x000107c613f8(&UNK_1104176c8,param_1,0,0);
  *param_1 = 7;
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar4);
  return;
}


