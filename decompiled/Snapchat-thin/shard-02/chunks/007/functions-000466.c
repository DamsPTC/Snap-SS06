/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102060ab0; end: 102060aeb;  */

void FUN_102060ab0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c615f0(param_2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 102060aec; end: 102060b2f;  */

void FUN_102060aec(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  func_0x000107c61648(param_2 + 0x10);
  func_0x000107c61574();
  return;
}



/* Entry: 102060b30; end: 102060b4b;  */

void FUN_102060b30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102060b4c,0,0);
  return;
}



/* Entry: 102060b4c; end: 102060c43;  */

void FUN_102060b4c(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x58);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    func_0x0001003ffe10(lVar2 + 0x10,unaff_x22 + 0x10);
    func_0x000107c61574(lVar2);
    lVar2 = *(long *)(unaff_x22 + 0x30);
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x28);
    *(long *)(unaff_x22 + 0x70) = lVar2;
    puVar1 = (undefined8 *)(unaff_x22 + 0x10);
    func_0x0001000a8868();
    *(undefined8 **)(unaff_x22 + 0x78) = puVar1;
    *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(lVar2 + 0x18);
    func_0x0001041e66ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(0x102060bfc,*puVar1,0);
    return;
  }
  **(undefined1 **)(unaff_x22 + 0x50) = 1;
                    /* WARNING: Could not recover jumptable at 0x000102060bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102060c44; end: 102060eb7;  */

/* WARNING: Possible PIC construction at 0x000102060c88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102060cb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102060ce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102060d4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102060d78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102060e38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102060e64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102060e3c) */
/* WARNING: Removing unreachable block (ram,0x000102060eb4) */
/* WARNING: Removing unreachable block (ram,0x000102060e44) */
/* WARNING: Removing unreachable block (ram,0x000102060d7c) */
/* WARNING: Removing unreachable block (ram,0x000102060d84) */
/* WARNING: Removing unreachable block (ram,0x000102060de4) */
/* WARNING: Removing unreachable block (ram,0x000102060e14) */
/* WARNING: Removing unreachable block (ram,0x000102060d50) */
/* WARNING: Removing unreachable block (ram,0x000102060eb0) */
/* WARNING: Removing unreachable block (ram,0x000102060d58) */
/* WARNING: Removing unreachable block (ram,0x000102060cec) */
/* WARNING: Removing unreachable block (ram,0x000102060cf0) */
/* WARNING: Removing unreachable block (ram,0x000102060cf4) */
/* WARNING: Removing unreachable block (ram,0x000102060cf8) */
/* WARNING: Removing unreachable block (ram,0x000102060d28) */
/* WARNING: Removing unreachable block (ram,0x000102060cb8) */
/* WARNING: Removing unreachable block (ram,0x000102060eac) */
/* WARNING: Removing unreachable block (ram,0x000102060cc8) */
/* WARNING: Removing unreachable block (ram,0x000102060c8c) */
/* WARNING: Removing unreachable block (ram,0x000102060dc8) */
/* WARNING: Removing unreachable block (ram,0x000102060c90) */
/* WARNING: Removing unreachable block (ram,0x000102060e68) */
/* WARNING: Removing unreachable block (ram,0x000102060e70) */
/* WARNING: Removing unreachable block (ram,0x000102060d8c) */
/* WARNING: Removing unreachable block (ram,0x000102060e78) */
/* WARNING: Removing unreachable block (ram,0x000102060d9c) */
/* WARNING: Removing unreachable block (ram,0x000102060ea8) */
/* WARNING: Removing unreachable block (ram,0x000102060da8) */

void FUN_102060c44(undefined8 param_1)

{
  func_0x000107c5ce4c();
  func_0x000107c61180();
  func_0x000107c3d458();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102060eb8; end: 102060f83;  */

void FUN_102060eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = &UNK_1104c2188;
  func_0x000107c613fc(&UNK_1104c2188,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_2;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c5c320(param_1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c3e924(param_1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102060f84; end: 102060fef;  */

void FUN_102060f84(undefined8 param_1,long param_2,code *param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    (*param_3)(param_1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102060ff0; end: 1020614bb;  */

/* WARNING: Possible PIC construction at 0x000102061134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102061174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102061228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102061248: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102061304: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020613f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102061420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102061430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020614b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102061270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020611bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102061274) */
/* WARNING: Removing unreachable block (ram,0x00010206131c) */
/* WARNING: Removing unreachable block (ram,0x0001020614b4) */
/* WARNING: Removing unreachable block (ram,0x000102061434) */
/* WARNING: Removing unreachable block (ram,0x000102061424) */
/* WARNING: Removing unreachable block (ram,0x0001020613fc) */
/* WARNING: Removing unreachable block (ram,0x000102061308) */
/* WARNING: Removing unreachable block (ram,0x00010206124c) */
/* WARNING: Removing unreachable block (ram,0x000102061280) */
/* WARNING: Removing unreachable block (ram,0x000102061298) */
/* WARNING: Removing unreachable block (ram,0x00010206145c) */
/* WARNING: Removing unreachable block (ram,0x000102061460) */
/* WARNING: Removing unreachable block (ram,0x0001020612a4) */
/* WARNING: Removing unreachable block (ram,0x000102061470) */
/* WARNING: Removing unreachable block (ram,0x000102061474) */
/* WARNING: Removing unreachable block (ram,0x0001020612b0) */
/* WARNING: Removing unreachable block (ram,0x000102061494) */
/* WARNING: Removing unreachable block (ram,0x0001020612b8) */
/* WARNING: Removing unreachable block (ram,0x0001020614b8) */
/* WARNING: Removing unreachable block (ram,0x0001020612c0) */
/* WARNING: Removing unreachable block (ram,0x0001020612cc) */
/* WARNING: Removing unreachable block (ram,0x000102061324) */
/* WARNING: Removing unreachable block (ram,0x000102061300) */
/* WARNING: Removing unreachable block (ram,0x00010206122c) */
/* WARNING: Removing unreachable block (ram,0x000102061234) */
/* WARNING: Removing unreachable block (ram,0x000102061250) */
/* WARNING: Removing unreachable block (ram,0x00010206123c) */
/* WARNING: Removing unreachable block (ram,0x000102061178) */
/* WARNING: Removing unreachable block (ram,0x000102061184) */
/* WARNING: Removing unreachable block (ram,0x000102061138) */
/* WARNING: Removing unreachable block (ram,0x000102061148) */
/* WARNING: Removing unreachable block (ram,0x000102061150) */
/* WARNING: Removing unreachable block (ram,0x000102061154) */
/* WARNING: Removing unreachable block (ram,0x0001020611b8) */
/* WARNING: Removing unreachable block (ram,0x000102061158) */
/* WARNING: Removing unreachable block (ram,0x0001020611c0) */
/* WARNING: Removing unreachable block (ram,0x0001020611c8) */
/* WARNING: Removing unreachable block (ram,0x0001020611cc) */
/* WARNING: Removing unreachable block (ram,0x0001020611d0) */
/* WARNING: Removing unreachable block (ram,0x0001020611d4) */
/* WARNING: Removing unreachable block (ram,0x0001020611dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102060ff0(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_80 [16];
  long lStack_70;
  undefined1 *puStack_68;
  
  lVar1 = 0x112e541b8;
  func_0x0001000285a8(0x112e541b8,&UNK_10da55628);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000100b92084();
  lVar1 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x58);
  func_0x000107c614f0(uVar4);
  uVar3 = 0x800000010f05e390;
  uVar2 = 0xd00000000000003f;
  func_0x00010403c628(0xd00000000000003f,0x800000010f05e390,uVar4,uVar5);
  if ((uVar2 & 1) == 0) {
    return;
  }
  func_0x000107c30b1c(*(undefined8 *)(param_1 + _DAT_11308c0c8));
  lVar6 = *(long *)(param_1 + _DAT_11308c0c0);
  func_0x000107c30b14();
  func_0x000107c61180();
  if (lVar6 != 0) {
    lStack_70 = (long)(auStack_80 + (-(lVar1 + 0xfU & 0xfffffffffffffff0) - extraout_x8)) -
                extraout_x12;
    puStack_68 = auStack_80 + (-(lVar1 + 0xfU & 0xfffffffffffffff0) - extraout_x8);
    func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar6);
    return;
  }
  func_0x000104840e10(0x16);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 1020614bc; end: 1020614d7;  */

void FUN_1020614bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020614d8,0,0);
  return;
}



/* Entry: 1020614d8; end: 102061663;  */

void FUN_1020614d8(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x58);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    func_0x0001003ffe10(lVar2 + 0x10,unaff_x22 + 0x10);
    func_0x000107c61574(lVar2);
    lVar2 = *(long *)(unaff_x22 + 0x30);
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x28);
    *(long *)(unaff_x22 + 0x70) = lVar2;
    puVar1 = (undefined8 *)(unaff_x22 + 0x10);
    func_0x0001000a8868();
    *(undefined8 **)(unaff_x22 + 0x78) = puVar1;
    *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(lVar2 + 0x18);
    func_0x0001041e66ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(0x102061588,*puVar1,0);
    return;
  }
  **(undefined1 **)(unaff_x22 + 0x50) = 1;
                    /* WARNING: Could not recover jumptable at 0x000102061584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102061664; end: 1020616f3;  */

void FUN_102061664(void)

{
  FUN_10205f5cc();
  return;
}



/* Entry: 1020616f4; end: 102061713;  */

void FUN_1020616f4(void)

{
  FUN_102060f84();
  return;
}



/* Entry: 102061714; end: 10206172f;  */

void FUN_102061714(long param_1,long param_2)

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



/* Entry: 102061730; end: 1020617bb;  */

undefined8 FUN_102061730(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112e541b8;
  func_0x0001000285a8(0x112e541b8,&UNK_10da55628);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1020617bc; end: 102061837;  */

void FUN_1020617bc(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = 0;
  func_0x000100b92084();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102062108;
  plVar2[0xb] = lVar1;
  plVar2[0xc] = unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff));
  plVar2[10] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020614d8,0,0);
  return;
}



/* Entry: 102061838; end: 102061857;  */

void FUN_102061838(void)

{
  FUN_102060f84();
  return;
}



/* Entry: 102061858; end: 102061867;  */

void FUN_102061858(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long alStack_48 [3];
  
  alStack_48[0] = 0;
  uVar2 = 0;
  FUN_1020618e4(0);
  func_0x000107c5fc50(param_1,alStack_48,uVar2);
  lVar1 = alStack_48[0];
  if (alStack_48[0] != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,alStack_48,0,0);
    lVar3 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar3 == 0) {
      func_0x000107c6142c(lVar1);
    }
    else {
      FUN_10205f7e4(lVar1);
      func_0x000107c6142c(lVar1);
      func_0x000107c61574(lVar3);
    }
  }
  return;
}



/* Entry: 102061868; end: 1020618e3;  */

void FUN_102061868(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = 0;
  func_0x000100b92084();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x10206210c;
  plVar2[0xb] = lVar1;
  plVar2[0xc] = unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff));
  plVar2[10] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102060b4c,0,0);
  return;
}



/* Entry: 1020618e4; end: 102061927;  */

void FUN_1020618e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e541c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126c2a88;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e541c0 = puVar1;
  return;
}



/* Entry: 102061928; end: 102061adb;  */

ulong FUN_102061928(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102061a0c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102061a10);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126c2a88;
    func_0x000107c61168(PTR_PTR_1126c2a88);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126c2a88;
    func_0x000107c61168(PTR_PTR_1126c2a88);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1020618e4(0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102061adc);
  (*pcVar2)();
}



/* Entry: 102061adc; end: 102061b57;  */

void FUN_102061adc(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = 0;
  func_0x000100b92084();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102062114;
  plVar2[0xb] = lVar1;
  plVar2[0xc] = unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff));
  plVar2[10] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102060668,0,0);
  return;
}



/* Entry: 102061b58; end: 102061d83;  */

void FUN_102061b58(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long unaff_x20;
  long lVar9;
  ulong uVar10;
  
  lVar3 = 0;
  func_0x000100b92084();
  uVar10 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  lVar1 = unaff_x20 + (uVar10 + 0x18 & (uVar10 ^ 0xffffffffffffffff));
  func_0x000107c6142c(*(undefined8 *)(lVar1 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(lVar1 + 0x20));
  lVar1 = lVar1 + *(int *)(lVar3 + 0x1c);
  lVar4 = 0;
  func_0x000100b92194();
  lVar3 = lVar1;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar1,1,lVar4);
  if ((int)lVar3 == 0) {
    func_0x000107c6142c(*(undefined8 *)(lVar1 + 8));
    func_0x000107c6142c(*(undefined8 *)(lVar1 + 0x18));
    func_0x000107c6142c(*(undefined8 *)(lVar1 + 0x28));
    lVar3 = lVar1 + *(int *)(lVar4 + 0x14);
    lVar5 = 0;
    func_0x000100b922c8();
    lVar9 = lVar3;
    (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar3,1,lVar5);
    if ((int)lVar9 == 0) {
      func_0x000107c6142c(*(undefined8 *)(lVar3 + 8));
      func_0x000107c6142c(*(undefined8 *)(lVar3 + 0x38));
      iVar2 = *(int *)(lVar5 + 0x28);
      lVar6 = 0;
      func_0x000107c5eec8();
      lVar7 = *(long *)(lVar6 + -8);
      pcVar8 = *(code **)(lVar7 + 0x30);
      lVar9 = lVar3 + iVar2;
      (*pcVar8)(lVar9,1,lVar6);
      if ((int)lVar9 == 0) {
        (**(code **)(lVar7 + 8))(lVar3 + iVar2,lVar6);
      }
      func_0x000107c6142c(*(undefined8 *)(lVar3 + *(int *)(lVar5 + 0x2c) + 8));
      func_0x000107c6142c(*(undefined8 *)(lVar3 + *(int *)(lVar5 + 0x30) + 8));
      iVar2 = *(int *)(lVar5 + 0x34);
      lVar9 = lVar3 + iVar2;
      (*pcVar8)(lVar9,1,lVar6);
      if ((int)lVar9 == 0) {
        (**(code **)(lVar7 + 8))(lVar3 + iVar2,lVar6);
      }
      func_0x000107c6142c(*(undefined8 *)(lVar3 + *(int *)(lVar5 + 0x38) + 8));
    }
    lVar1 = lVar1 + *(int *)(lVar4 + 0x18);
    lVar4 = 0;
    func_0x000100b92390();
    lVar3 = lVar1;
    (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar1,1,lVar4);
    if ((int)lVar3 == 0) {
      func_0x000107c6142c(*(undefined8 *)(lVar1 + 8));
      iVar2 = *(int *)(lVar4 + 0x14);
      lVar4 = 0;
      func_0x000107c5ede0();
      lVar9 = *(long *)(lVar4 + -8);
      lVar3 = lVar1 + iVar2;
      (**(code **)(lVar9 + 0x30))(lVar3,1,lVar4);
      if ((int)lVar3 == 0) {
        (**(code **)(lVar9 + 8))(lVar1 + iVar2,lVar4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102061d84; end: 102061dff;  */

void FUN_102061d84(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = 0;
  func_0x000100b92084();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102062110;
  plVar2[0xb] = lVar1;
  plVar2[0xc] = unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff));
  plVar2[10] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102060174,0,0);
  return;
}



/* Entry: 102061e00; end: 102061e6b;  */

void FUN_102061e00(long param_1)

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
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102061e6c;
  plVar3[7] = lVar2;
  plVar3[8] = lVar4;
  plVar3[5] = param_1;
  plVar3[6] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102060288,0,0);
  return;
}



/* Entry: 102061e6c; end: 102061ea7;  */

void FUN_102061e6c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102061ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102061ea8; end: 102061eaf;  */

void FUN_102061ea8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar7 = &puStack_b0;
  ppuVar8 = &puStack_b0;
  func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    if (param_1 == 0) {
      func_0x000107c61574();
    }
    else {
      func_0x000107c61174();
      lVar4 = param_1;
      func_0x000104191a9c();
      if ((int)lVar4 == 9) {
        func_0x000107c61574(lVar3);
        lVar4 = param_1;
      }
      else {
        func_0x0001000d224c(&lStack_80);
        lVar4 = lStack_80;
        func_0x000107c4ed74(lStack_80);
        func_0x000107c61180();
        func_0x000107c615e8(lStack_80);
        puVar5 = &UNK_1104c2188;
        func_0x000107c613fc(&UNK_1104c2188,0x18,7);
        func_0x000107c61644(puVar5 + 0x10,lVar3);
        puVar6 = &UNK_1104c23e0;
        func_0x000107c613fc(&UNK_1104c23e0,0x20,7);
        *(undefined **)(puVar6 + 0x10) = puVar5;
        *(undefined8 *)(puVar6 + 0x18) = uVar1;
        puVar5 = &UNK_1104c2408;
        func_0x000107c613fc(&UNK_1104c2408,0x20,7);
        *(code **)(puVar5 + 0x10) = FUN_102061f04;
        *(undefined **)(puVar5 + 0x18) = puVar6;
        puVar2 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0x1020620f4;
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0x42000000;
        pcStack_a0 = FUN_102060ab0;
        puStack_98 = &UNK_1104c2420;
        puStack_88 = puVar5;
        func_0x000107c60bc4(&puStack_b0);
        puVar5 = puStack_88;
        func_0x000107c61174(uVar1);
        func_0x000107c61574(puVar5);
        puVar5 = &UNK_1104c2458;
        func_0x000107c613fc(&UNK_1104c2458,0x20,7);
        *(undefined8 *)(puVar5 + 0x10) = 0x102061f0c;
        *(long *)(puVar5 + 0x18) = lVar3;
        uStack_90 = 0x1020620f8;
        puStack_b0 = puVar2;
        uStack_a8 = 0x42000000;
        pcStack_a0 = (code *)&UNK_100e27b38;
        puStack_98 = &UNK_1104c2470;
        puStack_88 = puVar5;
        func_0x000107c60bc4(&puStack_b0);
        puVar5 = puStack_88;
        func_0x000107c6157c(lVar3);
        func_0x000107c61574(puVar5);
        func_0x000107c4c754(lVar4);
        func_0x000107c61574(lVar3);
        func_0x000107c61170(param_1);
        func_0x000107c60bd0(ppuVar8);
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c61574(lVar3);
        func_0x000107c61574(puVar6);
      }
      func_0x000107c61170(lVar4);
    }
  }
  return;
}



/* Entry: 102061eb0; end: 102061ecf;  */

void FUN_102061eb0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102061ed0; end: 102061ed7;  */

void FUN_102061ed0(void)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  func_0x000107c61648(unaff_x20 + 0x10);
  func_0x000107c61574();
  return;
}



/* Entry: 102061ed8; end: 102061f03;  */

void FUN_102061ed8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102061f04; end: 102061f0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102061f04(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    if (param_1 == 0) {
      func_0x000107c61574();
    }
    else {
      uVar6 = *(undefined8 *)(lVar4 + 0x70);
      puVar1 = (undefined8 *)(lVar3 + _DAT_11308f130);
      uVar5 = *puVar1;
      uVar2 = puVar1[1];
      func_0x000107c615f0(param_1);
      func_0x000107c61174(uVar6);
      func_0x000107c5fadc(uVar5,uVar2);
      func_0x000107c56bcc(uVar6);
      func_0x000107c61574(lVar4);
      func_0x000107c615e8(param_1);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar5);
    }
  }
  return;
}



/* Entry: 102061f10; end: 1020620ab;  */

ulong FUN_102061f10(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102061fe0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102061fe4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x00010469e51c(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
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
    uVar4 = 0;
    func_0x00010469e51c(0);
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
  func_0x000107c5fb78(0xd000000000000017,0x800000010f05e440);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1020620ac);
  (*pcVar2)();
}



/* Entry: 1020620ac; end: 10206211b;  */

void FUN_1020620ac(long param_1,long param_2)

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



/* Entry: 10206211c; end: 1020623d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10206211c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x0001000d224c(&puStack_98);
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    if (puStack_98 != (undefined *)0x0) {
      puVar1 = puStack_98;
      func_0x000107c5b840(puStack_98);
      func_0x000107c61180();
      func_0x000107c615e8(puStack_98);
      puVar2 = puVar1;
      func_0x000107c4da88(puVar1);
      func_0x000107c61180();
      func_0x000107c61170(puVar1);
      puVar1 = &UNK_1104c24a8;
      func_0x000107c613fc(&UNK_1104c24a8,0x18,7);
      func_0x000107c61614(puVar1 + 0x10,param_1);
      pcStack_78 = (code *)0x1020642c0;
      puStack_98 = puVar5;
      uStack_90 = 0x42000000;
      uStack_88 = 0x1020650f0;
      puStack_80 = &UNK_1104c24e8;
      ppuVar3 = &puStack_98;
      puStack_70 = puVar1;
      func_0x000107c60bc4(ppuVar3);
      func_0x000107c61574(puStack_70);
      puVar1 = puVar2;
      func_0x000107c5c320(puVar2);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(puVar2);
      func_0x000107c3e924(puVar1);
      func_0x000107c61170(puVar1);
    }
    func_0x0001000d224c(&puStack_98);
    puVar1 = puStack_98;
    if (puStack_98 != (undefined *)0x0) {
      puVar2 = puStack_98;
      func_0x000107c43fb8();
      func_0x000107c61180();
      func_0x000107c615e8(puVar1);
      if (puVar2 != (undefined *)0x0) {
        puVar1 = puVar2;
        func_0x000107c5b850(puVar2);
        func_0x000107c61180();
        puVar4 = puVar1;
        func_0x000107c4da88();
        func_0x000107c61180();
        func_0x000107c61170(puVar1);
        puVar1 = &UNK_1104c24a8;
        func_0x000107c613fc(&UNK_1104c24a8,0x18,7);
        func_0x000107c61614(puVar1 + 0x10,param_1);
        pcStack_78 = FUN_10206429c;
        puStack_98 = puVar5;
        uStack_90 = 0x42000000;
        uStack_88 = 0x1020650ec;
        puStack_80 = &UNK_1104c24c0;
        ppuVar3 = &puStack_98;
        puStack_70 = puVar1;
        func_0x000107c60bc4(ppuVar3);
        func_0x000107c61574(puStack_70);
        puVar5 = puVar4;
        func_0x000107c5c320(puVar4);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar3);
        func_0x000107c61170(puVar4);
        uVar6 = *(undefined8 *)(param_1 + _DAT_112e54200);
        func_0x000107c61174(uVar6);
        func_0x000107c3e924(puVar5);
        func_0x000107c61170(param_1);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(uVar6);
        func_0x000107c615e8(puVar2);
        return;
      }
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1020623d4; end: 10206249b;  */

void FUN_1020623d4(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102062b50(param_1);
    FUN_102062c78(param_1);
    FUN_102063084(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10206249c; end: 102062b03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10206249c(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined8 unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_79 [9];
  
  puVar3 = PTR_PTR_1126a7790;
  func_0x000107c610f8();
  func_0x000107c453e4();
  auStack_79[0] = 0;
  puVar4 = &UNK_1104c2520;
  func_0x000107c613fc(&UNK_1104c2520,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20;
  puVar5 = &UNK_1104c2548;
  func_0x000107c613fc(&UNK_1104c2548,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x102064fb0;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_90 = FUN_102064fb8;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  pcStack_a0 = (code *)0x102063314;
  puStack_98 = &UNK_1104c2560;
  ppuVar6 = &puStack_b0;
  puStack_88 = puVar5;
  func_0x000107c60bc4();
  puVar7 = puStack_88;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_1104c2598;
  func_0x000107c613fc(&UNK_1104c2598,0x18,7);
  *(undefined **)(puVar7 + 0x10) = puVar3;
  puVar8 = &UNK_1104c25c0;
  func_0x000107c613fc(&UNK_1104c25c0,0x20,7);
  *(code **)(puVar8 + 0x10) = FUN_102064fd8;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  pcStack_90 = FUN_102064fe0;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  pcStack_a0 = (code *)&UNK_100de58f0;
  puStack_98 = &UNK_1104c25d8;
  ppuVar9 = &puStack_b0;
  puStack_88 = puVar8;
  func_0x000107c60bc4();
  puVar10 = puStack_88;
  func_0x000107c61174();
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar10);
  puVar10 = &UNK_1104c2610;
  func_0x000107c613fc(&UNK_1104c2610,0x28,7);
  *(undefined **)(puVar10 + 0x10) = puVar3;
  *(undefined8 *)(puVar10 + 0x18) = unaff_x20;
  *(undefined1 **)(puVar10 + 0x20) = auStack_79;
  puVar11 = &UNK_1104c2638;
  func_0x000107c613fc(&UNK_1104c2638,0x20,7);
  *(code **)(puVar11 + 0x10) = FUN_102065000;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  pcStack_90 = FUN_10206500c;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  pcStack_a0 = FUN_102063928;
  puStack_98 = &UNK_1104c2650;
  ppuVar12 = &puStack_b0;
  puStack_88 = puVar11;
  func_0x000107c60bc4();
  puVar13 = puStack_88;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(puVar11);
  func_0x000107c61574(puVar13);
  puVar13 = &UNK_1104c2688;
  func_0x000107c613fc(&UNK_1104c2688,0x28,7);
  *(undefined **)(puVar13 + 0x10) = puVar3;
  *(undefined8 *)(puVar13 + 0x18) = unaff_x20;
  *(undefined1 **)(puVar13 + 0x20) = auStack_79;
  puVar14 = &UNK_1104c26b0;
  func_0x000107c613fc(&UNK_1104c26b0,0x20,7);
  *(code **)(puVar14 + 0x10) = FUN_10206502c;
  *(undefined **)(puVar14 + 0x18) = puVar13;
  pcStack_90 = FUN_102065038;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  pcStack_a0 = FUN_102063e20;
  puStack_98 = &UNK_1104c26c8;
  ppuVar15 = &puStack_b0;
  puStack_88 = puVar14;
  func_0x000107c60bc4(ppuVar15);
  puVar16 = puStack_88;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(puVar14);
  func_0x000107c61574(puVar16);
  puVar16 = &UNK_1104c2700;
  func_0x000107c613fc(&UNK_1104c2700,0x28,7);
  *(undefined **)(puVar16 + 0x10) = puVar3;
  *(undefined8 *)(puVar16 + 0x18) = unaff_x20;
  *(undefined1 **)(puVar16 + 0x20) = auStack_79;
  puVar17 = &UNK_1104c2728;
  func_0x000107c613fc(&UNK_1104c2728,0x20,7);
  *(code **)(puVar17 + 0x10) = FUN_102065058;
  *(undefined **)(puVar17 + 0x18) = puVar16;
  pcStack_90 = FUN_1020650ac;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  pcStack_a0 = FUN_102063e20;
  puStack_98 = &UNK_1104c2740;
  ppuVar18 = &puStack_b0;
  puStack_88 = puVar17;
  func_0x000107c60bc4();
  puVar19 = puStack_88;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(puVar17);
  func_0x000107c61574(puVar19);
  puVar19 = &UNK_1104c2778;
  func_0x000107c613fc(&UNK_1104c2778,0x18,7);
  *(undefined **)(puVar19 + 0x10) = puVar3;
  puVar20 = &UNK_1104c27a0;
  func_0x000107c613fc(&UNK_1104c27a0,0x20,7);
  *(undefined8 *)(puVar20 + 0x10) = 0x102065064;
  *(undefined **)(puVar20 + 0x18) = puVar19;
  pcStack_90 = FUN_1020650ac;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  pcStack_a0 = (code *)0x1020640dc;
  puStack_98 = &UNK_1104c27b8;
  ppuVar21 = &puStack_b0;
  puStack_88 = puVar20;
  func_0x000107c60bc4();
  puVar1 = puStack_88;
  func_0x000107c61174(puVar3);
  func_0x000107c6157c(puVar20);
  func_0x000107c61574(puVar1);
  func_0x000107c4c6c4(param_1);
  func_0x000107c60bd0(ppuVar21);
  func_0x000107c60bd0(ppuVar18);
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c5556c(puVar3);
  func_0x0001000d224c(&puStack_b0);
  puVar1 = puStack_b0;
  if (puStack_b0 == (undefined *)0x0) {
    func_0x000107c61574(puVar4);
  }
  else {
    func_0x000107c4bfb0(puStack_b0);
    func_0x000107c61574(puVar4);
    func_0x000107c615e8(puVar1);
  }
  func_0x000107c61170(puVar3);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x99,0x71,0x22,1);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102062af0);
    (*pcVar2)();
  }
  puVar4 = puVar8;
  func_0x000107c61544(puVar8,"",0x99,0x75,0x24,1);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar8);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102062af4);
    (*pcVar2)();
  }
  puVar4 = puVar11;
  func_0x000107c61544(puVar11,"",0x99,0x78,0x20,1);
  func_0x000107c61574(puVar13);
  func_0x000107c61574(puVar11);
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = puVar14;
    func_0x000107c61544(puVar14,"",0x99,0x86,0x24,1);
    func_0x000107c61574(puVar16);
    func_0x000107c61574(puVar14);
    if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102062afc);
      (*pcVar2)();
    }
    puVar4 = puVar17;
    func_0x000107c61544(puVar17,"",0x99,0x90,0x22,1);
    func_0x000107c61574(puVar19);
    func_0x000107c61574(puVar17);
    if (((ulong)puVar4 & 1) == 0) {
      puVar4 = puVar20;
      func_0x000107c61544(puVar20,"",0x99,0x97,0x1a,1);
      func_0x000107c61574(puVar20);
      if (((ulong)puVar4 & 1) == 0) {
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102062b04);
      (*pcVar2)();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102062b00);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102062af8);
  (*pcVar2)();
}



/* Entry: 102062b04; end: 102062b4f;  */

void FUN_102062b04(long param_1,undefined8 param_2)

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



/* Entry: 102062b50; end: 102062c77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102062b50(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_68 [24];
  
  lVar5 = *(long *)(param_2 + _DAT_11308cb28);
  lVar1 = lVar5;
  func_0x000107c30ccc();
  if ((int)lVar1 == 1) {
    uVar2 = *(undefined8 *)(param_2 + _DAT_11308cb20);
    func_0x000107c30adc(uVar2);
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
    func_0x000107c30cd8();
    func_0x000107c61180();
    if (lVar5 == 0) {
      param_1 = 0;
    }
    else {
      func_0x000107c4223c();
      func_0x000107c61170(lVar5);
    }
    lVar1 = _DAT_112e54208;
    func_0x000107c61428(unaff_x20 + _DAT_112e54208,auStack_68,0x21,0);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c61558(uVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0x8000000000000000;
    FUN_10206e030(param_1,uVar3,param_3,uVar2);
    func_0x000107c6142c(param_3);
    *(undefined8 *)(unaff_x20 + lVar1) = uVar4;
    func_0x000107c614a8(auStack_68);
  }
  return;
}



/* Entry: 102062c78; end: 102063083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102062c78(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_c0 [16];
  undefined8 *puStack_b0;
  undefined8 uStack_a0;
  char cStack_98;
  long alStack_90 [2];
  undefined8 *puStack_80;
  
  uVar8 = *(undefined8 *)(param_1 + _DAT_11308cb28);
  uVar10 = uVar8;
  func_0x000107c30ccc();
  if ((int)uVar10 != 4) {
    return;
  }
  puVar1 = PTR_PTR_1126a7798;
  func_0x000107c610f8(PTR_PTR_1126a7798);
  func_0x000107c453e4();
  lVar9 = *(long *)(param_1 + _DAT_11308cb20);
  lVar2 = lVar9;
  func_0x000107c30adc();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5faec();
  func_0x000107c61170(lVar2);
  lVar2 = _DAT_112e54208;
  func_0x000107c61428(unaff_x20 + _DAT_112e54208,alStack_90,0x20,0);
  lVar7 = *(long *)(unaff_x20 + lVar2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    func_0x000107c61434(lVar7);
    lVar4 = lVar3;
    uVar6 = param_2;
    func_0x000100029284();
    if ((uVar6 & 1) != 0) {
      uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0x38) + lVar4 * 8);
      func_0x000107c614a8(alStack_90);
      func_0x000107c6142c(lVar7);
      goto LAB_102062d88;
    }
    func_0x000107c6142c(lVar7);
  }
  func_0x000107c614a8(alStack_90);
  uVar10 = 0;
LAB_102062d88:
  func_0x000107c522e8(puVar1);
  func_0x000107c53370(uVar10,puVar1);
  lVar7 = *(long *)(param_1 + _DAT_11308cb30);
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(lVar7 + _DAT_11308cba0);
    uStack_a0 = 0;
    cStack_98 = '\x01';
    puStack_b0 = &uStack_a0;
    puStack_80 = puStack_b0;
    func_0x000107c61174(uVar10);
    func_0x00010469f40c(FUN_102064f8c,alStack_90,0x102064fa0,auStack_c0);
    func_0x000107c61170(uVar10);
    if (cStack_98 != '\x01') {
      func_0x000107c54a20(puVar1);
    }
    lVar7 = *(long *)(lVar7 + _DAT_11308cb98);
    func_0x000107c61434(lVar7);
  }
  lVar4 = lVar7;
  func_0x000102064d7c();
  func_0x000107c6142c(lVar7);
  if (lVar4 != 0) {
    FUN_10206506c(0,0x112dbe4f8,&PTR_PTR_1126a77a0);
    puVar5 = puVar1;
    func_0x000107c61174(puVar1);
    lVar7 = lVar4;
    func_0x000107c61434(lVar4);
    func_0x000107c5fc48();
    func_0x000107c52458(puVar5);
    func_0x000107c61430(lVar4,2);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar7);
  }
  lVar7 = lVar9;
  func_0x000107c30ae0(lVar9);
  func_0x000107c61180();
  func_0x000107c523d0(puVar1);
  func_0x000107c61170(lVar7);
  func_0x000107c30ae4(lVar9);
  func_0x000107c61180();
  func_0x000107c522e0(puVar1);
  func_0x000107c61170(lVar9);
  func_0x000107c30cd0(uVar8);
  func_0x000107c54784(puVar1);
  func_0x000107c30cd4(uVar8);
  func_0x000107c52250(puVar1);
  func_0x000107c30cdc(uVar8);
  func_0x000107c5336c(puVar1);
  func_0x000107c30ce8(uVar8);
  func_0x000107c53374(puVar1);
  func_0x000107c30cf0(uVar8);
  func_0x000107c55014(puVar1);
  func_0x000107c30cf4(uVar8);
  func_0x000107c61180();
  func_0x000107c57d18(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c5556c(puVar1);
  func_0x000107c55690(puVar1);
  func_0x0001000d224c(alStack_90);
  if (alStack_90[0] != 0) {
    func_0x000107c4bfb0(alStack_90[0]);
    func_0x000107c615e8(alStack_90[0]);
  }
  func_0x000107c61428(unaff_x20 + lVar2,alStack_90,0x21,0);
  FUN_10206439c(lVar3,param_2);
  func_0x000107c614a8(alStack_90);
  func_0x000107c61170(puVar1);
  func_0x000107c6142c(param_2);
  return;
}



/* Entry: 102063084; end: 102063293;  */

/* WARNING: Possible PIC construction at 0x0001020630f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010206312c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102063278: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102063184: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010206327c) */
/* WARNING: Removing unreachable block (ram,0x000102063130) */
/* WARNING: Removing unreachable block (ram,0x000102063150) */
/* WARNING: Removing unreachable block (ram,0x000102063170) */
/* WARNING: Removing unreachable block (ram,0x000102063138) */
/* WARNING: Removing unreachable block (ram,0x000102063214) */
/* WARNING: Removing unreachable block (ram,0x000102063140) */
/* WARNING: Removing unreachable block (ram,0x0001020630f8) */
/* WARNING: Removing unreachable block (ram,0x000102063188) */
/* WARNING: Removing unreachable block (ram,0x000102063194) */
/* WARNING: Removing unreachable block (ram,0x000102063230) */
/* WARNING: Removing unreachable block (ram,0x00010206319c) */
/* WARNING: Removing unreachable block (ram,0x0001020631ec) */
/* WARNING: Removing unreachable block (ram,0x000102063238) */
/* WARNING: Removing unreachable block (ram,0x000102063260) */
/* WARNING: Removing unreachable block (ram,0x000102063274) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102063084(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308cb28);
  func_0x000107c30ccc(uVar2);
  puVar1 = PTR_PTR_1126a7790;
  func_0x000107c610f8(PTR_PTR_1126a7790);
  func_0x000107c453e4();
  func_0x000107c30cec(uVar2);
  func_0x000107c61180();
  func_0x000107c52410(puVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102063294; end: 1020633cb;  */

void FUN_102063294(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c59694(param_4,param_2,0);
  func_0x000107c5a08c(param_4);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
  }
  func_0x000107c52410(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1020633cc; end: 1020635f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020633cc(undefined8 param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  long param_6,byte *param_7)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lStack_58;
  
  func_0x000107c59694(param_5,param_2,6);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
  }
  func_0x000107c52410(param_5);
  func_0x000107c61170(param_1);
  uVar2 = (uint)(param_4 >> 0x20);
  uVar6 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar6 == 0) {
      if ((param_4 >> 0x30 & 0xff) == 0) goto LAB_10206347c;
    }
    else {
      iVar7 = (int)((ulong)param_3 >> 0x20);
      if (SBORROW4(iVar7,(int)param_3)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1020635f8);
        (*pcVar3)();
      }
      if (iVar7 - (int)param_3 < 1) goto LAB_10206347c;
    }
LAB_1020634dc:
    func_0x0001000d224c(&lStack_58);
    func_0x000107c5ee20(param_3,param_4);
    lVar5 = lStack_58;
    func_0x000107c4e36c();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_58);
    func_0x000107c61170(param_3);
    if (lVar5 == 0) {
      func_0x000107c523d0(param_5);
    }
    else {
      lVar8 = ((undefined8 *)(lVar5 + _DAT_11308f140))[1];
      if (lVar8 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)(lVar5 + _DAT_11308f140);
        func_0x000107c61434(lVar8);
        func_0x000107c5fadc(uVar9,lVar8);
        func_0x000107c6142c(lVar8);
      }
      func_0x000107c523d0(param_5);
      func_0x000107c61170(uVar9);
      lVar8 = param_6;
      func_0x000107c61174(param_6);
      func_0x000107c61174();
      FUN_1020635f8();
      func_0x000107c61170(lVar8);
      lVar8 = lVar5;
      func_0x000107c61170();
      func_0x000103bfcc68();
      func_0x000107c61170(lVar5);
      lVar5 = lVar8;
    }
    *param_7 = (byte)lVar5 & 1;
    bVar1 = *param_7;
  }
  else {
    if (uVar6 == 2) {
      if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1020635f4);
        (*pcVar3)();
      }
      if (0 < *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10)) goto LAB_1020634dc;
    }
LAB_10206347c:
    bVar1 = *param_7;
  }
  if ((bVar1 & 1) == 0) {
    plVar4 = (long *)(param_6 + _DAT_112e541f0);
    func_0x0001000a8868(plVar4,plVar4[3]);
    func_0x000105b48568(*(undefined8 *)(*plVar4 + 0x10),1);
  }
  return;
}



/* Entry: 1020635f8; end: 102063927;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020635f8(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lStack_48;
  
  puVar2 = PTR_PTR_1126b91f0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  if (((undefined8 *)(param_1 + _DAT_11308f140))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11308f140);
    func_0x000107c5fadc(uVar3);
  }
  func_0x000107c58f88(puVar2);
  func_0x000107c61170(uVar3);
  if (((undefined8 *)(param_1 + _DAT_11308f138))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11308f138);
    func_0x000107c5fadc(uVar3);
  }
  func_0x000107c522e0(puVar2);
  func_0x000107c61170(uVar3);
  lVar8 = ((undefined8 *)(param_1 + _DAT_11308f148))[1];
  if (lVar8 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11308f148);
    func_0x000107c5fadc(uVar3);
  }
  func_0x000107c55f90(puVar2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_113815200);
  func_0x000103bfd6b4(uVar3);
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar8);
  func_0x000107c52444(puVar2);
  func_0x000107c61170(uVar3);
  func_0x0001084b951c(*(undefined8 *)(param_1 + _DAT_1138152d0));
  func_0x000107c57058(puVar2);
  uVar9 = *(ulong *)(param_1 + _DAT_113815208);
  uVar3 = 0;
  if (uVar9 != 0) {
    uVar10 = uVar9 & 0xffffffffffffff8;
    if (uVar9 >> 0x3e == 0) {
      uVar4 = *(ulong *)(uVar10 + 0x10);
    }
    else {
      uVar4 = uVar9;
      if (-1 < (long)uVar9) {
        uVar4 = uVar10;
      }
      func_0x000107c60480();
    }
    if (uVar4 == 0) {
      uVar3 = 0;
    }
    else if ((uVar9 & 0xc000000000000001) == 0) {
      if (*(long *)(uVar10 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102063928);
        (*pcVar1)();
      }
      uVar3 = *(undefined8 *)(uVar9 + 0x20);
      func_0x000107c61174(uVar3);
    }
    else {
      uVar3 = 0;
      func_0x000100e471e4(0,uVar9);
    }
  }
  func_0x0001084c6f7c(param_1,uVar3);
  func_0x000107c61170(uVar3);
  func_0x0001084b94a8(param_1);
  func_0x000107c57684(puVar2);
  puVar5 = PTR_PTR_1126b91e8;
  func_0x000107c610f8(PTR_PTR_1126b91e8);
  func_0x000107c453e4();
  func_0x000107c5a590();
  func_0x000107c52384(puVar5);
  func_0x000107c523cc(puVar5);
  lVar8 = 0x112e54240;
  FUN_1020642c8(0x112e54240,&PTR_PTR_1126b91f0,0x112e54248,&UNK_10da556b8);
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x18) = 3;
  *(undefined8 *)(lVar8 + 0x10) = 1;
  *(undefined **)(lVar8 + 0x20) = puVar2;
  uVar3 = 0;
  FUN_10206506c(0,0x112e54240,&PTR_PTR_1126b91f0);
  func_0x000107c61174(puVar2);
  lVar6 = lVar8;
  func_0x000107c5fc48(lVar8,uVar3);
  func_0x000107c61574(lVar8);
  func_0x000107c52324(puVar5);
  func_0x000107c61170(lVar6);
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    puVar7 = puVar5;
    func_0x000107c61174(puVar5);
    func_0x000107c4bfb0(lStack_48);
    func_0x000107c615e8(lStack_48);
    func_0x000107c61170(puVar7);
  }
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 102063928; end: 102063bc7;  */

void FUN_102063928(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  if (param_2 == 0) {
    lVar5 = 0;
    lVar4 = 0;
    lVar3 = param_2;
  }
  else {
    lVar4 = param_2;
    func_0x000107c5faec(param_2);
    lVar3 = lVar4;
    lVar5 = param_2;
  }
  uVar2 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c5ee30(param_3);
  func_0x000107c61170(uVar2);
  (*pcVar1)(lVar5,lVar4,param_3,lVar3);
  func_0x00010006c090(param_3,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar4);
  return;
}



/* Entry: 102063bc8; end: 102063e1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102063bc8(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lStack_48;
  
  puVar2 = PTR_PTR_1126ca910;
  func_0x000107c610f8(PTR_PTR_1126ca910);
  func_0x000107c453e4();
  if (((undefined8 *)(param_1 + _DAT_11308f140))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11308f140);
    func_0x000107c5fadc(uVar3);
  }
  func_0x000107c58f88(puVar2);
  func_0x000107c61170(uVar3);
  lVar5 = ((undefined8 *)(param_1 + _DAT_11308f138))[1];
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11308f138);
    func_0x000107c5fadc(uVar3);
  }
  func_0x000107c522e0(puVar2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_113815200);
  func_0x000103bfd6b4(uVar3);
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar5);
  func_0x000107c52444(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c52384(puVar2);
  func_0x000107c5564c(puVar2);
  if (((undefined8 *)(param_1 + _DAT_11308f148))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11308f148);
    func_0x000107c5fadc(uVar3);
  }
  func_0x000107c55f90(puVar2);
  func_0x000107c61170(uVar3);
  func_0x0001084b951c(*(undefined8 *)(param_1 + _DAT_1138152d0));
  func_0x000107c57058(puVar2);
  uVar6 = *(ulong *)(param_1 + _DAT_113815208);
  uVar3 = 0;
  if (uVar6 != 0) {
    uVar7 = uVar6 & 0xffffffffffffff8;
    if (uVar6 >> 0x3e == 0) {
      uVar4 = *(ulong *)(uVar7 + 0x10);
    }
    else {
      uVar4 = uVar6;
      if (-1 < (long)uVar6) {
        uVar4 = uVar7;
      }
      func_0x000107c60480();
    }
    if (uVar4 == 0) {
      uVar3 = 0;
    }
    else if ((uVar6 & 0xc000000000000001) == 0) {
      if (*(long *)(uVar7 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102063e20);
        (*pcVar1)();
      }
      uVar3 = *(undefined8 *)(uVar6 + 0x20);
      func_0x000107c61174(uVar3);
    }
    else {
      uVar3 = 0;
      func_0x000100e471e4(0,uVar6);
    }
  }
  func_0x0001084c6f7c(param_1,uVar3);
  func_0x000107c61170(uVar3);
  func_0x0001084b94a8(param_1);
  func_0x000107c57684(puVar2);
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    func_0x000107c4bfb0(lStack_48);
    func_0x000107c615e8(lStack_48);
  }
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 102063e20; end: 102064047;  */

void FUN_102063e20(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  if (param_2 == 0) {
    lVar5 = 0;
    lVar4 = 0;
    lVar3 = param_2;
  }
  else {
    lVar4 = param_2;
    func_0x000107c5faec(param_2);
    lVar3 = lVar4;
    lVar5 = param_2;
  }
  uVar2 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c5ee30(param_4);
  func_0x000107c61170(uVar2);
  (*pcVar1)(lVar5,lVar4,param_3,param_4,lVar3);
  func_0x00010006c090(param_4,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar4);
  return;
}



/* Entry: 102064048; end: 102064163;  */

/* WARNING: Possible PIC construction at 0x0001020640a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020640a4) */
/* WARNING: Removing unreachable block (ram,0x0001020640a8) */
/* WARNING: Removing unreachable block (ram,0x0001020640b8) */

void FUN_102064048(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c59694(param_5,param_2,7);
  uVar1 = 0;
  if (param_4 != 0) {
    func_0x000107c5fadc(param_3,param_4);
    uVar1 = param_3;
  }
  func_0x000107c5494c(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102064164; end: 1020641c3; -[_TtC46SponsoredSnapFeedImpressionTrackerServicesImpl32SponsoredSnapEventBlizzardLogger init] */

void FUN_102064164(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredSnapFeedImpressionTrackerServicesImpl.SponsoredSnapEventBlizzardLogger"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102064190);
  (*pcVar1)();
}



/* Entry: 1020641c4; end: 10206427b; -[_TtC46SponsoredSnapFeedImpressionTrackerServicesImpl32SponsoredSnapEventBlizzardLogger .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102064260: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102064264) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020641c4(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e541c8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e541d0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e541d8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e541e0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e541e8));
  func_0x0001000834e4(param_1 + _DAT_112e541f0);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e541f8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e54200));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e54208));
  return;
}



/* Entry: 10206427c; end: 10206429b;  */

void FUN_10206427c(void)

{
  func_0x000107c61168(&PTR_PTR_11281aa00);
  return;
}



/* Entry: 10206429c; end: 1020642c7;  */

void FUN_10206429c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10206249c(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1020642c8; end: 10206433f;  */

void FUN_1020642c8(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10206506c(0,param_1,param_2);
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



/* Entry: 102064340; end: 10206439b;  */

void FUN_102064340(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x00010469e51c();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112e54250;
  plVar5 = (long *)&UNK_10da556c8;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 10206439c; end: 10206445f;  */

undefined1  [16] FUN_10206439c(long param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  lVar3 = *unaff_x20;
  func_0x000107c61434(lVar3);
  func_0x000100029284();
  func_0x000107c6142c(lVar3);
  if ((param_2 & 1) == 0) {
    uVar4 = 0;
    uVar2 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x000101432c98();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_1 * 0x10 + 8));
    uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 8);
    FUN_102064a18(param_1,lVar3);
    uVar2 = 0;
    *unaff_x20 = lVar3;
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Entry: 102064460; end: 102064487;  */

undefined8 FUN_102064460(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *unaff_x20;
  func_0x000107c61434(lVar3);
  func_0x000100029284();
  func_0x000107c6142c(lVar3);
  if ((param_2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_102064584(0x112e53f98,&UNK_10da55478);
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_1 * 0x10 + 8));
    uVar2 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 8);
    FUN_102064bcc(param_1,lVar3);
    *unaff_x20 = lVar3;
  }
  return uVar2;
}



/* Entry: 102064488; end: 10206455b;  */

undefined8 FUN_102064488(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long *unaff_x20;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *unaff_x20;
  func_0x000107c61434(lVar3);
  func_0x000100029284();
  func_0x000107c6142c(lVar3);
  if ((param_2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_102064584(param_3,param_4);
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_1 * 0x10 + 8));
    uVar2 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 8);
    FUN_102064bcc(param_1,lVar3);
    *unaff_x20 = lVar3;
  }
  return uVar2;
}



/* Entry: 10206455c; end: 102064583;  */

void FUN_10206455c(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112e53f98,&UNK_10da55478);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_102064650;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61174(uVar12);
        if (uVar8 != 0) break;
LAB_102064650:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1020646e4);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_1020646bc;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_1020646bc:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 102064584; end: 102064a17;  */

void FUN_102064584(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8();
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_102064650;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61174(uVar12);
        if (uVar8 != 0) break;
LAB_102064650:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1020646e4);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_1020646bc;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_1020646bc:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 102064a18; end: 102064bc7;  */

void FUN_102064a18(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar9 = param_1 + 1 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    uVar10 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar7);
    uVar10 = uVar10 + 1 & uVar7;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
      uVar11 = *puVar2;
      uVar4 = puVar2[1];
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c61434(uVar4);
      puVar6 = auStack_a8;
      func_0x000107c5fb58(puVar6,uVar11,uVar4);
      func_0x000107c606a8();
      func_0x000107c6142c(uVar4);
      uVar8 = (ulong)puVar6 & uVar7;
      if ((long)param_1 < (long)uVar10) {
        if (uVar8 < uVar10) {
LAB_102064b0c:
          if ((long)param_1 < (long)uVar8) goto LAB_102064a94;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
        if (((long)param_1 < (long)uVar9) || (puVar3 + 2 <= puVar2 || param_1 != uVar9)) {
          uVar11 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar11;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar9 * 8);
        if ((((long)param_1 < (long)uVar9) || (puVar3 + 1 <= puVar2)) || (param_1 != uVar9)) {
          *puVar2 = *puVar3;
          param_1 = uVar9;
        }
      }
      else if (uVar10 <= uVar8) goto LAB_102064b0c;
LAB_102064a94:
      uVar9 = uVar9 + 1 & uVar7;
    } while ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
  }
  uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x102064bc8);
  (*pcVar5)();
}



/* Entry: 102064bc8; end: 102064bcb;  */

void FUN_102064bc8(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar9 = param_1 + 1 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    uVar10 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar7);
    uVar10 = uVar10 + 1 & uVar7;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
      uVar11 = *puVar2;
      uVar4 = puVar2[1];
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c61434(uVar4);
      puVar6 = auStack_a8;
      func_0x000107c5fb58(puVar6,uVar11,uVar4);
      func_0x000107c606a8();
      func_0x000107c6142c(uVar4);
      uVar8 = (ulong)puVar6 & uVar7;
      if ((long)param_1 < (long)uVar10) {
        if (uVar8 < uVar10) {
LAB_102064cc0:
          if ((long)param_1 < (long)uVar8) goto LAB_102064c48;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
        if (((long)param_1 < (long)uVar9) || (puVar3 + 2 <= puVar2 || param_1 != uVar9)) {
          uVar11 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar11;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar9 * 8);
        if ((((long)param_1 < (long)uVar9) || (puVar3 + 1 <= puVar2)) || (param_1 != uVar9)) {
          *puVar2 = *puVar3;
          param_1 = uVar9;
        }
      }
      else if (uVar10 <= uVar8) goto LAB_102064cc0;
LAB_102064c48:
      uVar9 = uVar9 + 1 & uVar7;
    } while ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
  }
  uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x102064d7c);
  (*pcVar5)();
}



/* Entry: 102064bcc; end: 102064f8b;  */

void FUN_102064bcc(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar9 = param_1 + 1 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    uVar10 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar7);
    uVar10 = uVar10 + 1 & uVar7;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
      uVar11 = *puVar2;
      uVar4 = puVar2[1];
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c61434(uVar4);
      puVar6 = auStack_a8;
      func_0x000107c5fb58(puVar6,uVar11,uVar4);
      func_0x000107c606a8();
      func_0x000107c6142c(uVar4);
      uVar8 = (ulong)puVar6 & uVar7;
      if ((long)param_1 < (long)uVar10) {
        if (uVar8 < uVar10) {
LAB_102064cc0:
          if ((long)param_1 < (long)uVar8) goto LAB_102064c48;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
        if (((long)param_1 < (long)uVar9) || (puVar3 + 2 <= puVar2 || param_1 != uVar9)) {
          uVar11 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar11;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar9 * 8);
        if ((((long)param_1 < (long)uVar9) || (puVar3 + 1 <= puVar2)) || (param_1 != uVar9)) {
          *puVar2 = *puVar3;
          param_1 = uVar9;
        }
      }
      else if (uVar10 <= uVar8) goto LAB_102064cc0;
LAB_102064c48:
      uVar9 = uVar9 + 1 & uVar7;
    } while ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
  }
  uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x102064d7c);
  (*pcVar5)();
}



/* Entry: 102064f8c; end: 102064fb7;  */

void FUN_102064f8c(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  *puVar1 = 1;
  *(undefined1 *)(puVar1 + 1) = 0;
  return;
}



/* Entry: 102064fb8; end: 102064fd7;  */

void FUN_102064fb8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102064fd8; end: 102064fdf;  */

void FUN_102064fd8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c59694(uVar1,param_2,1);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
  }
  func_0x000107c52410(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102064fe0; end: 102064fff;  */

void FUN_102064fe0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102065000; end: 10206500b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102065000(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  pbVar8 = *(byte **)(unaff_x20 + 0x20);
  func_0x000107c59694(uVar1,param_2,6);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
  }
  func_0x000107c52410(uVar1);
  func_0x000107c61170(param_1);
  uVar4 = (uint)(param_4 >> 0x20);
  uVar9 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar9 == 0) {
      if ((param_4 >> 0x30 & 0xff) == 0) goto LAB_10206347c;
    }
    else {
      iVar10 = (int)((ulong)param_3 >> 0x20);
      if (SBORROW4(iVar10,(int)param_3)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1020635f8);
        (*pcVar5)();
      }
      if (iVar10 - (int)param_3 < 1) goto LAB_10206347c;
    }
LAB_1020634dc:
    func_0x0001000d224c(&lStack_58);
    func_0x000107c5ee20(param_3,param_4);
    lVar7 = lStack_58;
    func_0x000107c4e36c();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_58);
    func_0x000107c61170(param_3);
    if (lVar7 == 0) {
      func_0x000107c523d0(uVar1);
    }
    else {
      lVar11 = ((undefined8 *)(lVar7 + _DAT_11308f140))[1];
      if (lVar11 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined8 *)(lVar7 + _DAT_11308f140);
        func_0x000107c61434(lVar11);
        func_0x000107c5fadc(uVar12,lVar11);
        func_0x000107c6142c(lVar11);
      }
      func_0x000107c523d0(uVar1);
      func_0x000107c61170(uVar12);
      lVar11 = lVar2;
      func_0x000107c61174(lVar2);
      func_0x000107c61174();
      FUN_1020635f8();
      func_0x000107c61170(lVar11);
      lVar11 = lVar7;
      func_0x000107c61170();
      func_0x000103bfcc68();
      func_0x000107c61170(lVar7);
      lVar7 = lVar11;
    }
    *pbVar8 = (byte)lVar7 & 1;
    bVar3 = *pbVar8;
  }
  else {
    if (uVar9 == 2) {
      if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1020635f4);
        (*pcVar5)();
      }
      if (0 < *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10)) goto LAB_1020634dc;
    }
LAB_10206347c:
    bVar3 = *pbVar8;
  }
  if ((bVar3 & 1) == 0) {
    plVar6 = (long *)(lVar2 + _DAT_112e541f0);
    func_0x0001000a8868(plVar6,plVar6[3]);
    func_0x000105b48568(*(undefined8 *)(*plVar6 + 0x10),1);
  }
  return;
}



/* Entry: 10206500c; end: 10206502b;  */

void FUN_10206500c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10206502c; end: 102065037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10206502c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,ulong param_5)

{
  undefined8 uVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  pbVar5 = *(byte **)(unaff_x20 + 0x20);
  func_0x000107c59694(uVar1,param_2,2);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
  }
  func_0x000107c52410(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c55754(uVar1);
  uVar2 = (uint)(param_5 >> 0x20);
  uVar6 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar6 == 0) {
      if ((param_5 >> 0x30 & 0xff) == 0) {
        return;
      }
    }
    else {
      iVar7 = (int)((ulong)param_4 >> 0x20);
      if (SBORROW4(iVar7,(int)param_4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102063bc8);
        (*pcVar3)();
      }
      if (iVar7 - (int)param_4 < 1) {
        return;
      }
    }
  }
  else {
    if (uVar6 != 2) {
      return;
    }
    if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102063bc4);
      (*pcVar3)();
    }
    if (*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10) < 1) {
      return;
    }
  }
  func_0x0001000d224c(&lStack_58);
  func_0x000107c5ee20(param_4,param_5);
  lVar4 = lStack_58;
  func_0x000107c4e36c();
  func_0x000107c61180();
  func_0x000107c615e8(lStack_58);
  func_0x000107c61170(param_4);
  if (lVar4 == 0) {
    func_0x000107c523d0(uVar1);
  }
  else {
    lVar8 = ((undefined8 *)(lVar4 + _DAT_11308f140))[1];
    if (lVar8 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar4 + _DAT_11308f140);
      func_0x000107c61434(lVar8);
      func_0x000107c5fadc(uVar9,lVar8);
      func_0x000107c6142c(lVar8);
    }
    func_0x000107c523d0(uVar1);
    func_0x000107c61170(uVar9);
    func_0x000107c61174();
    FUN_102063bc8();
    lVar8 = lVar4;
    func_0x000107c61170();
    func_0x000103bfcc68();
    func_0x000107c61170(lVar4);
    lVar4 = lVar8;
  }
  *pbVar5 = (byte)lVar4 & 1;
  return;
}



/* Entry: 102065038; end: 102065057;  */

void FUN_102065038(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102065058; end: 10206506b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102065058(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  byte *pbVar3;
  long unaff_x20;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  pbVar3 = *(byte **)(unaff_x20 + 0x20);
  func_0x000107c59694(uVar1,param_2,8);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
  }
  func_0x000107c52410(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c55754(uVar1);
  func_0x0001000d224c(&lStack_58);
  func_0x000107c5ee20(param_4,param_5);
  lVar2 = lStack_58;
  func_0x000107c4e36c();
  func_0x000107c61180();
  func_0x000107c615e8(lStack_58);
  func_0x000107c61170(param_4);
  if (lVar2 == 0) {
    func_0x000107c523d0(uVar1);
    bVar4 = 0;
  }
  else {
    lVar5 = ((undefined8 *)(lVar2 + _DAT_11308f140))[1];
    if (lVar5 == 0) {
      bVar4 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar2 + _DAT_11308f140);
      func_0x000107c61434(lVar5);
      func_0x000107c5fadc(uVar6,lVar5);
      bVar4 = (byte)uVar6;
      func_0x000107c6142c(lVar5);
    }
    func_0x000107c523d0(uVar1);
    func_0x000107c61170();
    func_0x000103bfcc68();
    func_0x000107c61170(lVar2);
  }
  *pbVar3 = bVar4 & 1;
  return;
}



/* Entry: 10206506c; end: 1020650ab;  */

void FUN_10206506c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1020650ac; end: 1020650f3;  */

void FUN_1020650ac(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1020650f4; end: 10206531b;  */

void FUN_1020650f4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10206531c; end: 10206535b; -[_TtC46SponsoredSnapFeedImpressionTrackerServicesImpl34SponsoredSnapFeedImpressionTracker sponsoredSnapEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10206531c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10206535c; end: 10206543b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10206535c(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e54320);
  puVar1 = &UNK_1104c2828;
  func_0x000107c613fc(&UNK_1104c2828,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  pcStack_40 = FUN_10206820c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x10206bee8;
  puStack_48 = &UNK_1104c2940;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c3e924(uVar3);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 10206543c; end: 10206587b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10206543c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uStack_88;
  undefined8 uStack_80;
  
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112e54330);
  puVar6 = PTR_PTR_1126afec0;
  func_0x000107c61168(PTR_PTR_1126afec0);
  func_0x000107c3ceac(uVar15);
  func_0x000107c51b38(puVar6);
  uVar15 = *(undefined8 *)(param_3 + _DAT_11308f130);
  uVar1 = ((undefined8 *)(param_3 + _DAT_11308f130))[1];
  uStack_88 = 0;
  uStack_80 = 0xe000000000000000;
  func_0x000107c61434(uVar1);
  func_0x000107c602fc(0x1d);
  func_0x000107c5fb78(0xd000000000000015,0x800000010f05e5f0);
  func_0x000107c5fb78(uVar15,uVar1);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  puVar6 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
  func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar6);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  func_0x000107c5fddc(param_1,&uStack_88,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar4 = uStack_80;
  uVar11 = uStack_88;
  func_0x0001000d224c(&uStack_88);
  uVar16 = uStack_88;
  if (uStack_88 == 0) {
    uVar19 = 0;
  }
  else {
    uVar8 = uVar15;
    func_0x000107c5fadc(uVar15,uVar1);
    uVar19 = uVar16;
    func_0x000107c5ce1c();
    func_0x000107c615e8(uVar16);
    func_0x000107c61170(uVar8);
  }
  func_0x0001000d224c(&uStack_88);
  uVar16 = uStack_88;
  if (uStack_88 == 0) {
    uVar21 = 1;
  }
  else {
    uVar8 = uVar15;
    func_0x000107c5fadc(uVar15,uVar1);
    uVar21 = uVar16;
    func_0x000107c5df18();
    func_0x000107c615e8(uVar16);
    func_0x000107c61170(uVar8);
  }
  func_0x0001000d224c(&uStack_88);
  uVar16 = uStack_88;
  if (uStack_88 == 0) {
    uVar18 = 1;
  }
  else {
    uVar8 = uVar15;
    func_0x000107c5fadc(uVar15,uVar1);
    uVar18 = uVar16;
    func_0x000107c42f50();
    func_0x000107c615e8(uVar16);
    func_0x000107c61170(uVar8);
  }
  uVar16 = *(ulong *)(param_3 + _DAT_113815208);
  uVar8 = 0;
  if (uVar16 != 0) {
    uVar17 = uVar16 & 0xffffffffffffff8;
    if (uVar16 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar17 + 0x10);
    }
    else {
      uVar7 = uVar16;
      if (-1 < (long)uVar16) {
        uVar7 = uVar17;
      }
      func_0x000107c60480();
    }
    if (uVar7 == 0) {
      uVar8 = 0;
    }
    else if ((uVar16 & 0xc000000000000001) == 0) {
      if (*(long *)(uVar17 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10206587c);
        (*pcVar5)();
      }
      uVar8 = *(undefined8 *)(uVar16 + 0x20);
      func_0x000107c61174(uVar8);
    }
    else {
      uVar8 = 0;
      func_0x000100e471e4(0,uVar16);
    }
  }
  lVar9 = param_3;
  uVar12 = uVar8;
  func_0x0001084c6f7c(param_3,uVar8);
  func_0x000107c61170(uVar8);
  if ((long)(uVar21 | uVar19 | uVar18) < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x102065868);
    (*pcVar5)();
  }
  uVar8 = *(undefined8 *)(param_3 + _DAT_11308f140);
  lVar2 = ((undefined8 *)(param_3 + _DAT_11308f140))[1];
  uVar14 = *(undefined8 *)(param_3 + _DAT_113815200);
  uVar20 = *(undefined8 *)(param_3 + _DAT_11308f138);
  lVar3 = ((undefined8 *)(param_3 + _DAT_11308f138))[1];
  uVar13 = *(undefined8 *)(param_3 + _DAT_11308f128);
  uVar10 = 0x16;
  func_0x000104840e10();
  func_0x000107c5fadc(uVar11,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c5fadc(uVar15,uVar1);
  func_0x000107c6142c(uVar1);
  if (lVar2 == 0) {
    uVar8 = 0;
  }
  else {
    func_0x000107c5fadc(uVar8,lVar2);
  }
  if (lVar3 == 0) {
    uVar20 = 0;
  }
  else {
    func_0x000107c5fadc(uVar20,lVar3);
  }
  puVar6 = PTR_PTR_1126b9150;
  func_0x000107c610f8(PTR_PTR_1126b9150);
  func_0x000107c5fadc(uVar10,uVar12);
  func_0x000107c6142c(uVar12);
  func_0x000107c30ad4(param_1,puVar6,uVar11,uVar15,uVar8,uVar20,0,uVar19,uVar21,uVar18,0,0,uVar14,
                      lVar9,lVar9,uVar13,uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar10);
  return puVar6;
}



/* Entry: 10206587c; end: 1020658db; -[_TtC46SponsoredSnapFeedImpressionTrackerServicesImpl34SponsoredSnapFeedImpressionTracker init] */

void FUN_10206587c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredSnapFeedImpressionTrackerServicesImpl.SponsoredSnapFeedImpressionTracker"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020658a8);
  (*pcVar1)();
}



/* Entry: 1020658dc; end: 102065abf; -[_TtC46SponsoredSnapFeedImpressionTrackerServicesImpl34SponsoredSnapFeedImpressionTracker .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102065908: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010206590c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020658dc(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e54320));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e54328));
  return;
}



/* Entry: 102065ac0; end: 102065c03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102065ac0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  puVar3 = &UNK_1104c2828;
  func_0x000107c613fc(&UNK_1104c2828,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  pcStack_50 = FUN_102065ca0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101218f4c;
  puStack_58 = &UNK_1104c2840;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  uVar5 = param_1;
  func_0x000107c5c320(param_1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c3e924(uVar5);
  func_0x000107c61170(uVar5);
  lVar1 = unaff_x20 + _DAT_112e54310;
  uVar5 = *(undefined8 *)(lVar1 + 0x18);
  lVar2 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar5);
  (**(code **)(lVar2 + 8))(param_1,uVar5,lVar2);
  lVar1 = unaff_x20 + _DAT_112e54318;
  uVar5 = *(undefined8 *)(lVar1 + 0x18);
  lVar2 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar5);
  (**(code **)(lVar2 + 8))(param_1,uVar5,lVar2);
  return;
}



/* Entry: 102065c04; end: 102065c9f;  */

void FUN_102065c04(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long alStack_48 [3];
  
  alStack_48[0] = 0;
  uVar2 = 0;
  FUN_1020618e4(0);
  func_0x000107c5fc50(param_1,alStack_48,uVar2);
  lVar1 = alStack_48[0];
  if (alStack_48[0] != 0) {
    func_0x000107c61428(param_2 + 0x10,alStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      func_0x000107c6142c(lVar1);
    }
    else {
      FUN_102065cc4(lVar1);
      func_0x000107c6142c(lVar1);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 102065ca0; end: 102065cc3;  */

void FUN_102065ca0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long alStack_48 [3];
  
  alStack_48[0] = 0;
  uVar2 = 0;
  FUN_1020618e4(0);
  func_0x000107c5fc50(param_1,alStack_48,uVar2);
  lVar1 = alStack_48[0];
  if (alStack_48[0] != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,alStack_48,0,0);
    lVar3 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar3 == 0) {
      func_0x000107c6142c(lVar1);
    }
    else {
      FUN_102065cc4(lVar1);
      func_0x000107c6142c(lVar1);
      func_0x000107c61170(lVar3);
    }
  }
  return;
}



/* Entry: 102065cc4; end: 1020666cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102065cc4(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  code *pcVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong uVar18;
  long unaff_x20;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  double dVar24;
  long alStack_2d0 [14];
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  double dStack_238;
  double dStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  undefined1 auStack_1e8 [24];
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  double dStack_1a8;
  double dStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  double dStack_130;
  double dStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  double dStack_c0;
  double dStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  if (param_1 >> 0x3e == 0) {
    uVar23 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    lVar2 = _DAT_112e542f8;
    lVar3 = _DAT_112e54348;
    lVar4 = _DAT_112e54378;
    lVar5 = _DAT_112e54380;
    lVar6 = _DAT_112e54388;
    lVar7 = _DAT_112e543a8;
    lVar8 = _DAT_112e543b0;
    lVar9 = _DAT_112e543b8;
  }
  else {
    uVar23 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar23 = param_1;
    }
    func_0x000107c60480();
    lVar2 = _DAT_112e542f8;
    lVar3 = _DAT_112e54348;
    lVar4 = _DAT_112e54378;
    lVar5 = _DAT_112e54380;
    lVar6 = _DAT_112e54388;
    lVar7 = _DAT_112e543a8;
    lVar8 = _DAT_112e543b0;
    lVar9 = _DAT_112e543b8;
  }
  _DAT_112e542f8 = lVar2;
  _DAT_112e54348 = lVar3;
  _DAT_112e54378 = lVar4;
  _DAT_112e54380 = lVar5;
  _DAT_112e54388 = lVar6;
  _DAT_112e543a8 = lVar7;
  _DAT_112e543b0 = lVar8;
  _DAT_112e543b8 = lVar9;
  if (uVar23 != 0) {
    lVar22 = 4;
    do {
      uVar19 = lVar22 - 4;
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x102066678);
          (*pcVar11)();
        }
        uVar12 = *(ulong *)(param_1 + lVar22 * 8);
        func_0x000107c61174();
      }
      else {
        uVar12 = uVar19;
        FUN_102061928(uVar19,param_1);
      }
      uVar1 = lVar22 - 3;
      if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x102066670);
        (*pcVar11)();
      }
      FUN_10206ba94(&uStack_158,uVar12);
      uVar10 = uStack_150;
      uVar19 = uStack_158;
      uStack_198 = uStack_120;
      dStack_1a0 = dStack_128;
      uStack_188 = uStack_110;
      uStack_190 = uStack_118;
      uStack_178 = uStack_100;
      uStack_180 = uStack_108;
      uStack_168 = uStack_f0;
      uStack_170 = uStack_f8;
      uStack_1c8 = uStack_150;
      uStack_1d0 = uStack_158;
      uStack_1b8 = uStack_140;
      uStack_1c0 = uStack_148;
      dStack_1a8 = dStack_130;
      uStack_1b0 = uStack_138;
      if (uStack_150 == 0) {
        func_0x000107c61170(uVar12);
      }
      else {
        uStack_e8 = uStack_158;
        uStack_e0 = uStack_150;
        uStack_b0 = uStack_120;
        dStack_b8 = dStack_128;
        uStack_a0 = uStack_110;
        uStack_a8 = uStack_118;
        uStack_90 = uStack_100;
        uStack_98 = uStack_108;
        uStack_80 = uStack_f0;
        uStack_88 = uStack_f8;
        uStack_d0 = uStack_140;
        uStack_d8 = uStack_148;
        dStack_c0 = dStack_130;
        uStack_c8 = uStack_138;
        func_0x000107c61428(unaff_x20 + lVar2,auStack_1e8,0x20,0);
        lVar20 = *(long *)(unaff_x20 + lVar2);
        if (*(long *)(lVar20 + 0x10) == 0) {
LAB_102065ee8:
          func_0x000107c614a8(auStack_1e8);
          func_0x000107c61428(unaff_x20 + lVar2,auStack_1e8,0x21,0);
          uStack_218 = uStack_188;
          uStack_220 = uStack_190;
          uStack_208 = uStack_178;
          uStack_210 = uStack_180;
          uStack_1f8 = uStack_168;
          uStack_200 = uStack_170;
          uStack_258 = uStack_1c8;
          uStack_260 = uStack_1d0;
          uStack_248 = uStack_1b8;
          uStack_250 = uStack_1c0;
          dStack_238 = dStack_1a8;
          uStack_240 = uStack_1b0;
          uStack_228 = uStack_198;
          dStack_230 = dStack_1a0;
          func_0x00010205f3b0(&uStack_260,alStack_2d0);
          uVar14 = *(ulong *)(unaff_x20 + lVar2);
          func_0x000107c61558();
          lVar21 = *(long *)(unaff_x20 + lVar2);
          *(undefined8 *)(unaff_x20 + lVar2) = 0x8000000000000000;
          uVar13 = uVar19;
          uVar16 = uVar10;
          alStack_2d0[0] = lVar21;
          func_0x000100029284();
          uVar18 = (ulong)~(uint)uVar16 & 1;
          lVar20 = *(long *)(lVar21 + 0x10) + uVar18;
          if (SCARRY8(*(long *)(lVar21 + 0x10),uVar18)) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x102066674);
            (*pcVar11)();
          }
          if (*(long *)(lVar21 + 0x18) < lVar20) {
            FUN_10206e868(lVar20,uVar14);
            uVar13 = uVar19;
            uVar14 = uVar10;
            func_0x000100029284();
            if (((uint)uVar16 & 1) != ((uint)uVar14 & 1)) goto LAB_1020666c0;
LAB_102065fb4:
            if ((uVar16 & 1) == 0) goto LAB_102065fec;
LAB_102065fbc:
            lVar20 = alStack_2d0[0];
            func_0x00010206bdf4(&uStack_e8,*(long *)(alStack_2d0[0] + 0x38) + uVar13 * 0x70);
          }
          else {
            if ((uVar14 & 1) != 0) goto LAB_102065fb4;
            func_0x000102064854();
            if ((uVar16 & 1) != 0) goto LAB_102065fbc;
LAB_102065fec:
            lVar20 = alStack_2d0[0];
            lVar21 = alStack_2d0[0] + (uVar13 >> 6) * 8;
            *(ulong *)(lVar21 + 0x40) = *(ulong *)(lVar21 + 0x40) | 1L << (uVar13 & 0x3f);
            puVar17 = (ulong *)(*(long *)(alStack_2d0[0] + 0x30) + uVar13 * 0x10);
            *puVar17 = uVar19;
            puVar17[1] = uVar10;
            puVar17 = (ulong *)(*(long *)(alStack_2d0[0] + 0x38) + uVar13 * 0x70);
            puVar17[3] = uStack_d0;
            puVar17[2] = uStack_d8;
            puVar17[5] = (ulong)dStack_c0;
            puVar17[4] = uStack_c8;
            puVar17[1] = uStack_e0;
            *puVar17 = uStack_e8;
            puVar17[0xb] = uStack_90;
            puVar17[10] = uStack_98;
            puVar17[0xd] = uStack_80;
            puVar17[0xc] = uStack_88;
            puVar17[7] = uStack_b0;
            puVar17[6] = (ulong)dStack_b8;
            puVar17[9] = uStack_a0;
            puVar17[8] = uStack_a8;
            if (SCARRY8(*(long *)(alStack_2d0[0] + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x10206667c);
              (*pcVar11)();
            }
            *(long *)(alStack_2d0[0] + 0x10) = *(long *)(alStack_2d0[0] + 0x10) + 1;
            func_0x000107c61434(uVar10);
          }
          *(long *)(unaff_x20 + lVar2) = lVar20;
          func_0x000107c614a8(auStack_1e8);
          FUN_102068fd4(uVar19,uVar10);
        }
        else {
          func_0x000107c61434(lVar20);
          uVar13 = uVar19;
          uVar16 = uVar10;
          func_0x000100029284();
          if ((uVar16 & 1) == 0) {
            func_0x000107c6142c(lVar20);
            goto LAB_102065ee8;
          }
          puVar17 = (ulong *)(*(long *)(lVar20 + 0x38) + uVar13 * 0x70);
          uStack_248 = puVar17[3];
          uStack_250 = puVar17[2];
          dStack_238 = (double)puVar17[5];
          uStack_240 = puVar17[4];
          uStack_258 = puVar17[1];
          uStack_260 = *puVar17;
          uStack_228 = puVar17[7];
          dStack_230 = (double)puVar17[6];
          uStack_218 = puVar17[9];
          uStack_220 = puVar17[8];
          uStack_208 = puVar17[0xb];
          uStack_210 = puVar17[10];
          uStack_1f8 = puVar17[0xd];
          uStack_200 = puVar17[0xc];
          func_0x00010205f3b0(&uStack_260,alStack_2d0);
          func_0x000107c614a8(auStack_1e8);
          func_0x000107c6142c(lVar20);
          func_0x00010205f3ec(&uStack_260);
        }
        func_0x000107c61428(unaff_x20 + lVar8,auStack_1e8,0x20,0);
        lVar20 = *(long *)(unaff_x20 + lVar8);
        if (*(long *)(lVar20 + 0x10) == 0) {
LAB_102066118:
          func_0x000107c614a8(auStack_1e8);
          dVar24 = dStack_c0;
          if (0.0 < dStack_c0) {
            func_0x000107c61428(unaff_x20 + lVar8,auStack_1e8,0x21,0);
            uStack_218 = uStack_188;
            uStack_220 = uStack_190;
            uStack_208 = uStack_178;
            uStack_210 = uStack_180;
            uStack_1f8 = uStack_168;
            uStack_200 = uStack_170;
            uStack_258 = uStack_1c8;
            uStack_260 = uStack_1d0;
            uStack_248 = uStack_1b8;
            uStack_250 = uStack_1c0;
            dStack_238 = dStack_1a8;
            uStack_240 = uStack_1b0;
            uStack_228 = uStack_198;
            dStack_230 = dStack_1a0;
            dVar24 = dStack_1a0;
            func_0x00010205f3b0(&uStack_260,alStack_2d0);
            uVar14 = *(ulong *)(unaff_x20 + lVar8);
            func_0x000107c61558();
            lVar21 = *(long *)(unaff_x20 + lVar8);
            *(undefined8 *)(unaff_x20 + lVar8) = 0x8000000000000000;
            uVar13 = uVar19;
            uVar16 = uVar10;
            alStack_2d0[0] = lVar21;
            func_0x000100029284();
            uVar18 = (ulong)~(uint)uVar16 & 1;
            lVar20 = *(long *)(lVar21 + 0x10) + uVar18;
            if (SCARRY8(*(long *)(lVar21 + 0x10),uVar18)) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x102066680);
              (*pcVar11)();
            }
            if (*(long *)(lVar21 + 0x18) < lVar20) {
              FUN_10206e868(lVar20,uVar14);
              uVar13 = uVar19;
              uVar14 = uVar10;
              func_0x000100029284();
              if (((uint)uVar16 & 1) != ((uint)uVar14 & 1)) {
LAB_1020666c0:
                func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x1020666d0);
                (*pcVar11)();
              }
LAB_1020661f4:
              if ((uVar16 & 1) == 0) goto LAB_10206622c;
LAB_1020661fc:
              lVar20 = alStack_2d0[0];
              func_0x00010206bdf4(&uStack_e8,*(long *)(alStack_2d0[0] + 0x38) + uVar13 * 0x70);
            }
            else {
              if ((uVar14 & 1) != 0) goto LAB_1020661f4;
              func_0x000102064854();
              if ((uVar16 & 1) != 0) goto LAB_1020661fc;
LAB_10206622c:
              lVar20 = alStack_2d0[0];
              lVar21 = alStack_2d0[0] + (uVar13 >> 6) * 8;
              *(ulong *)(lVar21 + 0x40) = *(ulong *)(lVar21 + 0x40) | 1L << (uVar13 & 0x3f);
              puVar17 = (ulong *)(*(long *)(alStack_2d0[0] + 0x30) + uVar13 * 0x10);
              *puVar17 = uVar19;
              puVar17[1] = uVar10;
              puVar17 = (ulong *)(*(long *)(alStack_2d0[0] + 0x38) + uVar13 * 0x70);
              puVar17[3] = uStack_d0;
              puVar17[2] = uStack_d8;
              puVar17[5] = (ulong)dStack_c0;
              puVar17[4] = uStack_c8;
              puVar17[1] = uStack_e0;
              *puVar17 = uStack_e8;
              puVar17[0xb] = uStack_90;
              puVar17[10] = uStack_98;
              puVar17[0xd] = uStack_80;
              puVar17[0xc] = uStack_88;
              puVar17[7] = uStack_b0;
              puVar17[6] = (ulong)dStack_b8;
              puVar17[9] = uStack_a0;
              puVar17[8] = uStack_a8;
              if (SCARRY8(*(long *)(alStack_2d0[0] + 0x10),1)) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x102066684);
                (*pcVar11)();
              }
              *(long *)(alStack_2d0[0] + 0x10) = *(long *)(alStack_2d0[0] + 0x10) + 1;
              dVar24 = dStack_b8;
              func_0x000107c61434(uVar10);
            }
            *(long *)(unaff_x20 + lVar8) = lVar20;
            func_0x000107c614a8(auStack_1e8);
          }
        }
        else {
          func_0x000107c61434(lVar20);
          uVar13 = uVar19;
          uVar16 = uVar10;
          func_0x000100029284();
          if ((uVar16 & 1) == 0) {
            func_0x000107c6142c(lVar20);
            goto LAB_102066118;
          }
          puVar17 = (ulong *)(*(long *)(lVar20 + 0x38) + uVar13 * 0x70);
          uStack_248 = puVar17[3];
          uStack_250 = puVar17[2];
          dStack_238 = (double)puVar17[5];
          uStack_240 = puVar17[4];
          uStack_258 = puVar17[1];
          uStack_260 = *puVar17;
          uStack_228 = puVar17[7];
          dVar24 = (double)puVar17[6];
          uStack_218 = puVar17[9];
          uStack_220 = puVar17[8];
          uStack_208 = puVar17[0xb];
          uStack_210 = puVar17[10];
          uStack_1f8 = puVar17[0xd];
          uStack_200 = puVar17[0xc];
          dStack_230 = dVar24;
          func_0x00010205f3b0(&uStack_260,alStack_2d0);
          func_0x000107c614a8(auStack_1e8);
          func_0x000107c6142c(lVar20);
          func_0x00010205f3ec(&uStack_260);
        }
        uVar13 = uVar12;
        func_0x000107c3f740();
        func_0x000107c61180();
        if (uVar13 == 0) {
LAB_1020662ec:
          func_0x000107c61428(unaff_x20 + lVar4,&uStack_260,0x20,0);
          lVar20 = *(long *)(unaff_x20 + lVar4);
          if (*(long *)(lVar20 + 0x10) == 0) {
LAB_1020663f0:
            func_0x000107c614a8(&uStack_260);
          }
          else {
            func_0x000107c61434(lVar20);
            uVar13 = uVar19;
            uVar16 = uVar10;
            func_0x000100029284();
            if ((uVar16 & 1) == 0) {
              func_0x000107c6142c(lVar20);
              goto LAB_1020663f0;
            }
            uVar15 = *(undefined8 *)(*(long *)(lVar20 + 0x38) + uVar13 * 8);
            func_0x000107c61174(uVar15);
            func_0x000107c614a8(&uStack_260);
            func_0x000107c6142c(lVar20);
            func_0x000107c498f8(uVar15);
            func_0x000107c61428(unaff_x20 + lVar4,&uStack_260,0x21,0);
            uVar13 = uVar19;
            FUN_102064460(uVar19,uVar10);
            func_0x000107c614a8(&uStack_260);
            func_0x000107c61170(uVar13);
            func_0x000107c61428(unaff_x20 + lVar7,&uStack_260,0x21,0);
            FUN_10206439c(uVar19,uVar10);
            func_0x000107c614a8(&uStack_260);
            func_0x000107c61170(uVar15);
          }
          func_0x000107c61428(unaff_x20 + lVar9,&uStack_260,0x20,0);
          lVar20 = *(long *)(unaff_x20 + lVar9);
          if (*(long *)(lVar20 + 0x10) == 0) {
LAB_102066470:
            func_0x000107c614a8(&uStack_260);
          }
          else {
            func_0x000107c61434(lVar20);
            uVar13 = uVar19;
            uVar16 = uVar10;
            func_0x000100029284();
            if ((uVar16 & 1) == 0) {
              func_0x000107c6142c(lVar20);
              goto LAB_102066470;
            }
            uVar15 = *(undefined8 *)(*(long *)(lVar20 + 0x38) + uVar13 * 8);
            func_0x000107c61174(uVar15);
            func_0x000107c614a8(&uStack_260);
            func_0x000107c6142c(lVar20);
            func_0x000107c4e454(uVar15);
            func_0x000107c61170(uVar15);
          }
          FUN_10206b040(uVar19,uVar10);
          func_0x000107c61428(unaff_x20 + lVar6,&uStack_260,0x21,0);
          uVar15 = *(undefined8 *)(unaff_x20 + lVar6);
          func_0x000107c61434(uVar15);
          uVar13 = uVar19;
          uVar16 = uVar10;
          func_0x000100029284();
          func_0x000107c6142c(uVar15);
          if ((uVar16 & 1) != 0) {
            uVar16 = *(ulong *)(unaff_x20 + lVar6);
            func_0x000107c61558();
            alStack_2d0[0] = *(long *)(unaff_x20 + lVar6);
            if ((uVar16 & 1) == 0) {
              func_0x000101432c98();
            }
            lVar20 = alStack_2d0[0];
            func_0x000107c6142c(*(undefined8 *)
                                 (*(long *)(alStack_2d0[0] + 0x30) + uVar13 * 0x10 + 8));
            FUN_102064a18(uVar13,lVar20);
            *(long *)(unaff_x20 + lVar6) = lVar20;
          }
          func_0x000107c614a8(&uStack_260);
          func_0x000107c61428(unaff_x20 + lVar5,&uStack_260,0x20,0);
          lVar20 = *(long *)(unaff_x20 + lVar5);
          if (*(long *)(lVar20 + 0x10) != 0) {
            func_0x000107c61434(lVar20);
            uVar13 = uVar19;
            uVar16 = uVar10;
            func_0x000100029284();
            if ((uVar16 & 1) != 0) {
              uVar15 = *(undefined8 *)(*(long *)(lVar20 + 0x38) + uVar13 * 8);
              func_0x000107c61174(uVar15);
              func_0x000107c614a8(&uStack_260);
              func_0x000107c61170(uVar15);
              func_0x000107c6142c(lVar20);
              func_0x000107c61428(unaff_x20 + lVar5,&uStack_260,0x20,0);
              lVar20 = *(long *)(unaff_x20 + lVar5);
              if (*(long *)(lVar20 + 0x10) == 0) {
LAB_102066600:
                func_0x000107c614a8(&uStack_260);
              }
              else {
                func_0x000107c61434(lVar20);
                uVar13 = uVar19;
                uVar16 = uVar10;
                func_0x000100029284();
                if ((uVar16 & 1) == 0) {
                  func_0x000107c6142c(lVar20);
                  goto LAB_102066600;
                }
                uVar15 = *(undefined8 *)(*(long *)(lVar20 + 0x38) + uVar13 * 8);
                func_0x000107c61174(uVar15);
                func_0x000107c614a8(&uStack_260);
                func_0x000107c6142c(lVar20);
                func_0x000107c498f8(uVar15);
                func_0x000107c61170(uVar15);
              }
              func_0x000107c61428(unaff_x20 + lVar5,&uStack_260,0x21,0);
              FUN_102064460(uVar19,uVar10);
              func_0x000107c614a8(&uStack_260);
              func_0x000107c61170(uVar12);
              uVar12 = uVar19;
              goto LAB_102066648;
            }
            func_0x000107c6142c(lVar20);
          }
          func_0x000107c614a8(&uStack_260);
        }
        else {
          func_0x000107c4223c();
          func_0x000107c61170(uVar13);
          if (dVar24 < *(double *)(unaff_x20 + lVar3)) goto LAB_1020662ec;
          FUN_102069098(&uStack_e8);
          FUN_102069384(&uStack_e8);
          func_0x000102069970(&uStack_e8);
        }
LAB_102066648:
        func_0x000107c61170(uVar12);
        FUN_10206bdac(&uStack_158);
      }
      lVar22 = lVar22 + 1;
    } while (uVar1 != uVar23);
  }
  return;
}



/* Entry: 1020666d0; end: 102066827; -[_TtC46SponsoredSnapFeedImpressionTrackerServicesImpl34SponsoredSnapFeedImpressionTracker beginObservationWithFriendsFeedImpressionUpdatesObservable:] */

/* WARNING: Possible PIC construction at 0x000102066708: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010206670c) */

void FUN_1020666d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102065ac0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102066828; end: 102066847;  */

void FUN_102066828(void)

{
  FUN_1020681a0();
  return;
}



/* Entry: 102066848; end: 102067d63;  */

/* WARNING: Removing unreachable block (ram,0x000102067d5c) */
/* WARNING: Removing unreachable block (ram,0x000102067d54) */
/* WARNING: Removing unreachable block (ram,0x000102067d50) */
/* WARNING: Removing unreachable block (ram,0x000102067d58) */
/* WARNING: Removing unreachable block (ram,0x000102067d60) */
/* WARNING: Removing unreachable block (ram,0x000102067d4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102066848(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined *puVar10;
  long unaff_x20;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  undefined **ppuVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uStack_198;
  long lStack_190;
  ulong uStack_188;
  long lStack_178;
  long alStack_170 [14];
  ulong uStack_100;
  long *plStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  
  ppuVar1 = param_1;
  func_0x000107c5ce4c();
  func_0x000107c61180();
  ppuVar2 = ppuVar1;
  func_0x000107c3d458();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar1);
  if (ppuVar2 == (undefined **)0x0) {
    return;
  }
  lVar12 = *(long *)((long)ppuVar2 + _DAT_11308f130);
  uVar18 = ((long *)((long)ppuVar2 + _DAT_11308f130))[1];
  func_0x000107c61434(uVar18);
  func_0x000107c61170(ppuVar2);
  lVar14 = _DAT_112e542f8;
  func_0x000107c61428(unaff_x20 + _DAT_112e542f8,auStack_90,0x20,0);
  uVar11 = *(ulong *)(unaff_x20 + lVar14);
  lVar14 = *(long *)(uVar11 + 0x10);
  func_0x000107c61434(uVar11);
  if ((lVar14 == 0) || (uVar16 = uVar18, func_0x000100029284(), (uVar16 & 1) == 0)) {
    func_0x000107c6142c(uVar18);
    func_0x000107c614a8(auStack_90);
    goto LAB_102066a80;
  }
  puVar8 = (ulong *)(*(long *)(uVar11 + 0x38) + lVar12 * 0x70);
  uStack_e8 = puVar8[3];
  uStack_f0 = puVar8[2];
  uStack_d8 = puVar8[5];
  uStack_e0 = puVar8[4];
  plStack_f8 = (long *)puVar8[1];
  uStack_100 = *puVar8;
  uStack_c8 = puVar8[7];
  uStack_d0 = puVar8[6];
  uStack_b8 = puVar8[9];
  uStack_c0 = puVar8[8];
  uStack_a8 = puVar8[0xb];
  uStack_b0 = puVar8[10];
  uStack_98 = puVar8[0xd];
  uStack_a0 = puVar8[0xc];
  func_0x00010205f3b0(&uStack_100,alStack_170);
  func_0x000107c614a8(auStack_90);
  func_0x000107c6142c(uVar11);
  func_0x000107c6142c(uVar18);
  uVar16 = uStack_f0;
  plVar7 = plStack_f8;
  uVar18 = uStack_100;
  if (*(long *)(uStack_f0 + _DAT_11308f138 + 8) == 0) {
LAB_102067b78:
    func_0x00010205f3ec(&uStack_100);
    return;
  }
  uVar11 = ((ulong *)(uStack_f0 + _DAT_11308f140))[1];
  if (uVar11 == 0) goto LAB_102067b78;
  uVar9 = *(ulong *)(uStack_f0 + _DAT_11308f140);
  func_0x000107c61428(unaff_x20 + _DAT_112e543a0,alStack_170,0x21,0);
  func_0x000107c61434(plVar7);
  func_0x000107c61434(uVar11);
  uVar17 = uVar18;
  func_0x000100403b00(auStack_90,uVar18,plVar7);
  func_0x000107c614a8(alStack_170);
  func_0x000107c6142c(uStack_88);
  ppuVar1 = param_1;
  func_0x000107c3cfd0();
  func_0x000107c61180();
  ppuVar2 = ppuVar1;
  func_0x000107c5faec();
  uVar19 = uVar17;
  func_0x000107c61170(ppuVar1);
  ppuVar15 = &PTR____CFConstantStringClassReference_110eb83f8;
  ppuVar1 = ppuVar15;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110eb83f8);
  func_0x000107c5faec();
  func_0x000107c61170(ppuVar1);
  if ((ppuVar2 == ppuVar15) && (uVar17 == uVar19)) {
    func_0x000107c6142c(uVar11);
    func_0x000107c6142c(uVar17);
    uVar11 = uVar19;
LAB_102066abc:
    func_0x000107c6142c(uVar11);
    lStack_190 = 2;
    FUN_10206543c(2,uVar16);
    lVar12 = _DAT_112e54388;
    plVar6 = alStack_170;
    func_0x000107c61428(unaff_x20 + _DAT_112e54388,plVar6,0x20,0);
    lVar12 = *(long *)(unaff_x20 + lVar12);
    if (*(long *)(lVar12 + 0x10) == 0) {
LAB_102066bc8:
      func_0x000107c614a8(alStack_170);
      puVar10 = (undefined *)0x0;
    }
    else {
      func_0x000107c61434(lVar12);
      uVar11 = uVar18;
      plVar6 = plVar7;
      func_0x000100029284();
      if (((ulong)plVar6 & 1) == 0) {
        func_0x000107c6142c(lVar12);
        goto LAB_102066bc8;
      }
      uVar20 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar11 * 8);
      func_0x000107c614a8(alStack_170);
      func_0x000107c6142c(lVar12);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c466c0(uVar20);
    }
    lVar12 = lStack_190;
    func_0x000107c30ad8();
    func_0x000107c61180();
    if (lVar12 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(plVar6);
    }
    uVar17 = uStack_b0;
    uVar11 = uStack_b8;
    if (uStack_b0 == 0) {
      func_0x000107c61174(puVar10);
      uVar11 = 0;
      uVar19 = 0;
      if (uStack_98 == 0) goto LAB_102066c68;
LAB_102066c34:
      uVar17 = uStack_a0;
      func_0x000107c5fadc();
      uVar11 = uVar19;
      if (uStack_c0 != 0) goto LAB_102066c48;
LAB_102066c74:
      uVar19 = 0;
    }
    else {
      func_0x000107c61174(puVar10);
      func_0x000107c5fadc(uVar11,uVar17);
      uVar19 = uVar11;
      if (uStack_98 != 0) goto LAB_102066c34;
LAB_102066c68:
      uVar17 = 0;
      if (uStack_c0 == 0) goto LAB_102066c74;
LAB_102066c48:
      uVar19 = uStack_c8;
      func_0x000107c5fadc();
    }
    puVar4 = PTR_PTR_1126b9088;
    func_0x000107c610f8(PTR_PTR_1126b9088);
LAB_102066cc4:
    func_0x000107c30cc8();
    func_0x000107c61170(puVar10);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar19);
    func_0x00010469f074(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174(puVar4);
    lVar12 = lStack_190;
    func_0x00010469ea20(lStack_190,puVar4,0);
    alStack_170[0] = lVar12;
    func_0x0001002a64a8(alStack_170);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lStack_190);
  }
  else {
    uVar5 = uVar17;
    func_0x000107c605b8(ppuVar2,uVar17,ppuVar15,uVar19,0);
    func_0x000107c6142c(uVar17);
    func_0x000107c6142c(uVar19);
    if (((ulong)ppuVar2 & 1) != 0) goto LAB_102066abc;
    ppuVar1 = param_1;
    func_0x000107c3cfd0();
    func_0x000107c61180();
    ppuVar2 = ppuVar1;
    func_0x000107c5faec();
    uVar17 = uVar5;
    func_0x000107c61170(ppuVar1);
    ppuVar15 = &PTR____CFConstantStringClassReference_110eb85f8;
    ppuVar1 = ppuVar15;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110eb85f8);
    func_0x000107c5faec();
    func_0x000107c61170(ppuVar1);
    if ((ppuVar2 != ppuVar15) || (uVar5 != uVar17)) {
      uVar19 = uVar5;
      func_0x000107c605b8(ppuVar2,uVar5,ppuVar15,uVar17,0);
      func_0x000107c6142c(uVar5);
      func_0x000107c6142c(uVar17);
      if (((ulong)ppuVar2 & 1) != 0) goto LAB_102066fcc;
      ppuVar1 = param_1;
      func_0x000107c3cfd0();
      func_0x000107c61180();
      ppuVar2 = ppuVar1;
      func_0x000107c5faec();
      uVar17 = uVar19;
      func_0x000107c61170(ppuVar1);
      ppuVar15 = &PTR____CFConstantStringClassReference_110eb8438;
      ppuVar1 = ppuVar15;
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110eb8438);
      func_0x000107c5faec();
      func_0x000107c61170(ppuVar1);
      if ((ppuVar2 == ppuVar15) && (uVar19 == uVar17)) {
        func_0x000107c6142c(uVar11);
        func_0x000107c6142c(uVar19);
        uVar11 = uVar17;
LAB_1020672d8:
        func_0x000107c6142c(uVar11);
        lStack_190 = 2;
        FUN_10206543c(2,uVar16);
        lVar12 = _DAT_112e54388;
        plVar6 = alStack_170;
        func_0x000107c61428(unaff_x20 + _DAT_112e54388,plVar6,0x20,0);
        lVar12 = *(long *)(unaff_x20 + lVar12);
        if (*(long *)(lVar12 + 0x10) == 0) {
LAB_1020673e4:
          func_0x000107c614a8(alStack_170);
          puVar10 = (undefined *)0x0;
        }
        else {
          func_0x000107c61434(lVar12);
          uVar11 = uVar18;
          plVar6 = plVar7;
          func_0x000100029284();
          if (((ulong)plVar6 & 1) == 0) {
            func_0x000107c6142c(lVar12);
            goto LAB_1020673e4;
          }
          uVar20 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar11 * 8);
          func_0x000107c614a8(alStack_170);
          func_0x000107c6142c(lVar12);
          puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c466c0(uVar20);
        }
        lVar12 = lStack_190;
        func_0x000107c30ad8();
        func_0x000107c61180();
        if (lVar12 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(plVar6);
        }
        uVar17 = uStack_b0;
        uVar11 = uStack_b8;
        if (uStack_b0 == 0) {
          func_0x000107c61174(puVar10);
          uVar11 = 0;
        }
        else {
          func_0x000107c61174(puVar10);
          func_0x000107c5fadc(uVar11,uVar17);
        }
        if (uStack_98 == 0) {
          uVar17 = 0;
        }
        else {
          uVar17 = uStack_a0;
          func_0x000107c5fadc();
        }
        if (uStack_c0 == 0) {
          uVar19 = 0;
        }
        else {
          uVar19 = uStack_c8;
          func_0x000107c5fadc();
        }
        puVar4 = PTR_PTR_1126b9088;
        func_0x000107c610f8(PTR_PTR_1126b9088);
      }
      else {
        uVar5 = uVar19;
        func_0x000107c605b8(ppuVar2,uVar19,ppuVar15,uVar17,0);
        func_0x000107c6142c(uVar19);
        func_0x000107c6142c(uVar17);
        if (((ulong)ppuVar2 & 1) != 0) goto LAB_1020672d8;
        ppuVar1 = param_1;
        func_0x000107c3cfd0();
        func_0x000107c61180();
        ppuVar2 = ppuVar1;
        func_0x000107c5faec();
        uVar17 = uVar5;
        func_0x000107c61170(ppuVar1);
        ppuVar15 = &PTR____CFConstantStringClassReference_110eb8538;
        ppuVar1 = ppuVar15;
        func_0x000107c61174(&PTR____CFConstantStringClassReference_110eb8538);
        func_0x000107c5faec();
        func_0x000107c61170(ppuVar1);
        if ((ppuVar2 == ppuVar15) && (uVar5 == uVar17)) {
          func_0x000107c6142c(uVar11);
          func_0x000107c6142c(uVar5);
          uVar11 = uVar17;
        }
        else {
          uVar19 = uVar5;
          func_0x000107c605b8(ppuVar2,uVar5,ppuVar15,uVar17,0);
          func_0x000107c6142c(uVar5);
          func_0x000107c6142c(uVar17);
          if (((ulong)ppuVar2 & 1) == 0) {
            ppuVar1 = param_1;
            func_0x000107c3cfd0();
            func_0x000107c61180();
            ppuVar2 = ppuVar1;
            func_0x000107c5faec();
            uVar17 = uVar19;
            func_0x000107c61170(ppuVar1);
            ppuVar15 = &PTR____CFConstantStringClassReference_110eb83b8;
            ppuVar1 = ppuVar15;
            func_0x000107c61174(&PTR____CFConstantStringClassReference_110eb83b8);
            func_0x000107c5faec();
            func_0x000107c61170(ppuVar1);
            if ((ppuVar2 == ppuVar15) && (uVar19 == uVar17)) {
              func_0x000107c6142c(uVar19);
              func_0x000107c6142c();
            }
            else {
              uVar5 = uVar19;
              func_0x000107c605b8(ppuVar2,uVar19,ppuVar15,uVar17,0);
              func_0x000107c6142c(uVar19);
              func_0x000107c6142c();
              if (((ulong)ppuVar2 & 1) == 0) {
                func_0x000107c6142c(uVar11);
                func_0x000107c3cfd0();
                func_0x000107c61180();
                ppuVar1 = param_1;
                func_0x000107c5faec();
                uVar11 = uVar5;
                func_0x000107c61170(param_1);
                ppuVar15 = &PTR____CFConstantStringClassReference_110eb8618;
                ppuVar2 = ppuVar15;
                func_0x000107c61174(&PTR____CFConstantStringClassReference_110eb8618);
                func_0x000107c5faec();
                func_0x000107c61170(ppuVar2);
                if ((ppuVar1 == ppuVar15) && (uVar5 == uVar11)) {
                  func_0x000107c6142c(uVar5);
                  func_0x000107c6142c(uVar11);
                }
                else {
                  func_0x000107c605b8(ppuVar1,uVar5,ppuVar15,uVar11,0);
                  func_0x000107c6142c(uVar5);
                  func_0x000107c6142c(uVar11);
                  if (((ulong)ppuVar1 & 1) == 0) goto LAB_102067b78;
                }
                lVar14 = 3;
                FUN_10206543c(3,uVar16);
                lVar12 = _DAT_112e54388;
                plVar6 = alStack_170;
                func_0x000107c61428(unaff_x20 + _DAT_112e54388,plVar6,0x20,0);
                lVar12 = *(long *)(unaff_x20 + lVar12);
                if (*(long *)(lVar12 + 0x10) != 0) {
                  func_0x000107c61434(lVar12);
                  func_0x000100029284();
                  if (((ulong)plVar7 & 1) != 0) {
                    uVar20 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar18 * 8);
                    func_0x000107c614a8(alStack_170);
                    func_0x000107c6142c(lVar12);
                    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    func_0x000107c466c0(uVar20);
                    goto LAB_102067bb8;
                  }
                  func_0x000107c6142c(lVar12);
                  plVar6 = plVar7;
                }
                plVar7 = plVar6;
                func_0x000107c614a8(alStack_170);
                puVar10 = (undefined *)0x0;
LAB_102067bb8:
                lVar12 = lVar14;
                func_0x000107c30ad8();
                func_0x000107c61180();
                if (lVar12 == 0) {
                  func_0x000107c5faec();
                  func_0x000107c5fadc();
                  func_0x000107c6142c(plVar7);
                }
                uVar11 = uStack_b0;
                uVar18 = uStack_b8;
                if (uStack_b0 == 0) {
                  func_0x000107c61174(puVar10);
                  uVar18 = 0;
                }
                else {
                  func_0x000107c61174(puVar10);
                  func_0x000107c5fadc(uVar18,uVar11);
                }
                if (uStack_98 == 0) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = uStack_a0;
                  func_0x000107c5fadc();
                }
                if (uStack_c0 == 0) {
                  uVar16 = 0;
                }
                else {
                  uVar16 = uStack_c8;
                  func_0x000107c5fadc();
                }
                puVar4 = PTR_PTR_1126b9088;
                func_0x000107c610f8(PTR_PTR_1126b9088);
                func_0x000107c30cc8();
                func_0x000107c61170(puVar10);
                func_0x000107c61170(lVar12);
                func_0x000107c61170(uVar18);
                func_0x000107c61170(uVar11);
                func_0x000107c61170(uVar16);
                func_0x00010469f074(0);
                func_0x000107c610f8();
                func_0x000107c61174();
                func_0x000107c61174(puVar4);
                lVar12 = lVar14;
                func_0x00010469ea20(lVar14,puVar4,0);
                alStack_170[0] = lVar12;
                func_0x0001002a64a8(alStack_170);
                func_0x00010205f3ec(&uStack_100);
                func_0x000107c61170(lVar12);
                func_0x000107c61170(puVar4);
                func_0x000107c61170(lVar14);
                func_0x000107c61170(puVar10);
                return;
              }
            }
            uVar19 = uVar9 & 0xffffffffffff;
            if ((uVar11 & 0x2000000000000000) != 0) {
              uVar19 = uVar11 >> 0x38 & 0xf;
            }
            if (uVar19 == 0) {
              uVar13 = 0;
            }
            else {
              func_0x00010206dab0();
              if (*(long *)(uVar17 + 0x10) == 0) {
                func_0x000107c6142c(uVar17);
                uVar13 = 1;
              }
              else {
                uVar5 = uVar11;
                func_0x000100029284(uVar9);
                func_0x000107c6142c(uVar17);
                uVar13 = (uint)uVar5 ^ 1;
              }
            }
            lVar14 = 2;
            FUN_10206543c(2,uVar16);
            lVar12 = _DAT_112e54388;
            plVar6 = alStack_170;
            func_0x000107c61428(unaff_x20 + _DAT_112e54388,plVar6,0x20,0);
            lVar12 = *(long *)(unaff_x20 + lVar12);
            if (*(long *)(lVar12 + 0x10) == 0) {
LAB_1020678c4:
              plVar7 = plVar6;
              func_0x000107c614a8(alStack_170);
              puVar10 = (undefined *)0x0;
            }
            else {
              func_0x000107c61434(lVar12);
              func_0x000100029284();
              if (((ulong)plVar7 & 1) == 0) {
                func_0x000107c6142c(lVar12);
                plVar6 = plVar7;
                goto LAB_1020678c4;
              }
              uVar20 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar18 * 8);
              func_0x000107c614a8(alStack_170);
              func_0x000107c6142c(lVar12);
              puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x000107c610f8();
              func_0x000107c466c0(uVar20);
            }
            lStack_178 = lVar14;
            func_0x000107c30ad8();
            func_0x000107c61180();
            if (lStack_178 == 0) {
              func_0x000107c5faec();
              func_0x000107c5fadc();
              func_0x000107c6142c(plVar7);
            }
            uVar18 = uStack_b0;
            uStack_188 = uStack_b8;
            puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c610f8();
            func_0x000107c45a48();
            if (uVar18 == 0) {
              func_0x000107c61174(puVar10);
              uStack_188 = 0;
            }
            else {
              func_0x000107c61174(puVar10);
              func_0x000107c5fadc(uStack_188,uVar18);
            }
            if (uStack_98 == 0) {
              uVar18 = 0;
            }
            else {
              uVar18 = uStack_a0;
              func_0x000107c5fadc();
            }
            if (uStack_c0 == 0) {
              uVar16 = 0;
            }
            else {
              uVar16 = uStack_c8;
              func_0x000107c5fadc();
            }
            puVar3 = PTR_PTR_1126b9088;
            func_0x000107c610f8(PTR_PTR_1126b9088);
            func_0x000107c30cc8();
            func_0x000107c61170(puVar10);
            func_0x000107c61170(puVar4);
            func_0x000107c61170(lStack_178);
            func_0x000107c61170(uStack_188);
            func_0x000107c61170(uVar18);
            func_0x000107c61170(uVar16);
            func_0x00010469f074(0);
            func_0x000107c610f8();
            func_0x000107c61174();
            func_0x000107c61174(puVar3);
            lVar12 = lVar14;
            func_0x00010469ea20(lVar14,puVar3,0);
            alStack_170[0] = lVar12;
            func_0x0001002a64a8(alStack_170);
            func_0x000107c61170(lVar12);
            func_0x000107c61170(puVar3);
            func_0x000107c61170(lVar14);
            func_0x000107c61170(puVar10);
            if ((uVar19 != 0) && ((uVar13 & 1) != 0)) {
              func_0x00010206d90c(uVar9,uVar11);
            }
            func_0x00010205f3ec(&uStack_100);
LAB_102066a80:
            func_0x000107c6142c(uVar11);
            return;
          }
        }
        func_0x000107c6142c(uVar11);
        lStack_190 = 2;
        FUN_10206543c(2,uVar16);
        lVar12 = _DAT_112e54388;
        plVar6 = alStack_170;
        func_0x000107c61428(unaff_x20 + _DAT_112e54388,plVar6,0x20,0);
        lVar12 = *(long *)(unaff_x20 + lVar12);
        if (*(long *)(lVar12 + 0x10) == 0) {
LAB_10206761c:
          func_0x000107c614a8(alStack_170);
          puVar10 = (undefined *)0x0;
        }
        else {
          func_0x000107c61434(lVar12);
          uVar11 = uVar18;
          plVar6 = plVar7;
          func_0x000100029284();
          if (((ulong)plVar6 & 1) == 0) {
            func_0x000107c6142c(lVar12);
            goto LAB_10206761c;
          }
          uVar20 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar11 * 8);
          func_0x000107c614a8(alStack_170);
          func_0x000107c6142c(lVar12);
          puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c466c0(uVar20);
        }
        lVar12 = lStack_190;
        func_0x000107c30ad8();
        func_0x000107c61180();
        if (lVar12 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(plVar6);
        }
        uVar17 = uStack_b0;
        uVar11 = uStack_b8;
        if (uStack_b0 == 0) {
          func_0x000107c61174(puVar10);
          uVar11 = 0;
        }
        else {
          func_0x000107c61174(puVar10);
          func_0x000107c5fadc(uVar11,uVar17);
        }
        if (uStack_98 == 0) {
          uVar17 = 0;
        }
        else {
          uVar17 = uStack_a0;
          func_0x000107c5fadc();
        }
        if (uStack_c0 == 0) {
          uVar19 = 0;
        }
        else {
          uVar19 = uStack_c8;
          func_0x000107c5fadc();
        }
        puVar4 = PTR_PTR_1126b9088;
        func_0x000107c610f8(PTR_PTR_1126b9088);
      }
      goto LAB_102066cc4;
    }
    func_0x000107c6142c(uVar11);
    func_0x000107c6142c(uVar5);
    uVar11 = uVar17;
LAB_102066fcc:
    func_0x000107c6142c(uVar11);
    func_0x000107c4de88();
    lVar14 = 2;
    FUN_10206543c(2,uVar16);
    lVar12 = _DAT_112e54388;
    plVar6 = alStack_170;
    func_0x000107c61428(unaff_x20 + _DAT_112e54388,plVar6,0x20,0);
    lVar12 = *(long *)(unaff_x20 + lVar12);
    if (*(long *)(lVar12 + 0x10) == 0) {
LAB_102067100:
      func_0x000107c614a8(alStack_170);
      puVar10 = (undefined *)0x0;
    }
    else {
      func_0x000107c61434(lVar12);
      uVar11 = uVar18;
      plVar6 = plVar7;
      func_0x000100029284();
      if (((ulong)plVar6 & 1) == 0) {
        func_0x000107c6142c(lVar12);
        goto LAB_102067100;
      }
      uVar20 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar11 * 8);
      func_0x000107c614a8(alStack_170);
      func_0x000107c6142c(lVar12);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c466c0(uVar20);
    }
    lVar12 = lVar14;
    func_0x000107c30ad8();
    func_0x000107c61180();
    if (lVar12 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(plVar6);
    }
    uVar11 = uStack_b0;
    uStack_198 = uStack_b8;
    if (uStack_b0 == 0) {
      func_0x000107c61174(puVar10);
      uStack_198 = 0;
    }
    else {
      func_0x000107c61174(puVar10);
      func_0x000107c5fadc(uStack_198,uVar11);
    }
    if (uStack_98 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = uStack_a0;
      func_0x000107c5fadc();
    }
    if (uStack_c0 == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = uStack_c8;
      func_0x000107c5fadc();
    }
    puVar4 = PTR_PTR_1126b9088;
    func_0x000107c610f8(PTR_PTR_1126b9088);
    func_0x000107c30cc8();
    func_0x000107c61170(puVar10);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(uStack_198);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar17);
    func_0x00010469f074(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174(puVar4);
    lVar12 = lVar14;
    func_0x00010469ea20(lVar14,puVar4,0);
    alStack_170[0] = lVar12;
    func_0x0001002a64a8(alStack_170);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar14);
  }
  func_0x000107c61170(puVar10);
  lVar14 = 5;
  FUN_10206543c(5,uVar16);
  lVar12 = _DAT_112e54388;
  plVar6 = alStack_170;
  func_0x000107c61428(unaff_x20 + _DAT_112e54388,plVar6,0x20,0);
  lVar12 = *(long *)(unaff_x20 + lVar12);
  if (*(long *)(lVar12 + 0x10) != 0) {
    func_0x000107c61434(lVar12);
    func_0x000100029284();
    if (((ulong)plVar7 & 1) != 0) {
      uVar20 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar18 * 8);
      func_0x000107c614a8(alStack_170);
      func_0x000107c6142c(lVar12);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c466c0(uVar20);
      goto LAB_102066e04;
    }
    func_0x000107c6142c(lVar12);
    plVar6 = plVar7;
  }
  plVar7 = plVar6;
  func_0x000107c614a8(alStack_170);
  puVar10 = (undefined *)0x0;
LAB_102066e04:
  lVar12 = lVar14;
  func_0x000107c30ad8();
  func_0x000107c61180();
  if (lVar12 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(plVar7);
  }
  uVar11 = uStack_b0;
  uVar18 = uStack_b8;
  if (uStack_b0 == 0) {
    func_0x000107c61174(puVar10);
    uVar18 = 0;
    uVar11 = uStack_a0;
  }
  else {
    func_0x000107c61174(puVar10);
    func_0x000107c5fadc(uVar18,uVar11);
    uVar11 = uStack_a0;
  }
  uStack_a0 = uVar11;
  if (uStack_98 == 0) {
    uVar11 = 0;
    uVar16 = uStack_c8;
  }
  else {
    func_0x000107c5fadc();
    uVar16 = uStack_c8;
  }
  uStack_c8 = uVar16;
  if (uStack_c0 == 0) {
    uVar16 = 0;
  }
  else {
    func_0x000107c5fadc();
  }
  puVar4 = PTR_PTR_1126b9088;
  func_0x000107c610f8(PTR_PTR_1126b9088);
  func_0x000107c30cc8();
  func_0x000107c61170(puVar10);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar16);
  func_0x00010469f074(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(puVar4);
  lVar12 = lVar14;
  func_0x00010469ea20(lVar14,puVar4,0);
  alStack_170[0] = lVar12;
  func_0x0001002a64a8(alStack_170);
  func_0x00010205f3ec(&uStack_100);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(puVar10);
  return;
}



/* Entry: 102067d64; end: 102067db3; -[_TtC46SponsoredSnapFeedImpressionTrackerServicesImpl34SponsoredSnapFeedImpressionTracker beginObservationWithFriendsFeedCellInteractionEventsObservable:] */

/* WARNING: Possible PIC construction at 0x000102067d9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102067da0) */

void FUN_102067d64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000102066720(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102067db4; end: 102067e1f;  */

long FUN_102067db4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102067e20; end: 102067ebb;  */

undefined8 * FUN_102067e20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar3 = param_2[2];
  param_1[2] = uVar3;
  uVar4 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar4;
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar4 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar4;
  uVar1 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar1;
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  uVar2 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar2;
  func_0x000107c61434();
  func_0x000107c61174(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 102067ebc; end: 102067fa7;  */

undefined8 * FUN_102067ebc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[7] = param_2[7];
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[9] = param_2[9];
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  param_1[0xc] = param_2[0xc];
  uVar1 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102067fa8; end: 10206803b;  */

undefined8 * FUN_102067fa8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar1 = param_2[8];
  uVar2 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[10];
  uVar2 = param_1[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  uVar1 = param_2[0xd];
  uVar2 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 10206803c; end: 1020680ef;  */

int FUN_10206803c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1020680f0; end: 10206810f;  */

void FUN_1020680f0(void)

{
  func_0x000107c61168(&PTR_PTR_11281ab08);
  return;
}



/* Entry: 102068110; end: 10206819f; -[_TtC46SponsoredSnapFeedImpressionTrackerServicesImpl34SponsoredSnapFeedImpressionTracker beginObservationWithAdLifecycleEventObservable:] */

/* WARNING: Possible PIC construction at 0x000102068180: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102068184) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102068110(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  lVar1 = param_1 + _DAT_112e54310;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  pcVar4 = *(code **)(lVar3 + 0x18);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  (*pcVar4)(param_3,uVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1020681a0; end: 10206820b;  */

void FUN_1020681a0(undefined8 param_1,long param_2,code *param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    (*param_3)(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10206820c; end: 10206822b;  */

void FUN_10206820c(void)

{
  FUN_1020681a0();
  return;
}



/* Entry: 10206822c; end: 102068357;  */

void FUN_10206822c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_60 [16];
  
  puVar3 = &UNK_1104c2828;
  puVar1 = puVar3;
  func_0x000107c613fc(&UNK_1104c2828,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = puVar3;
  func_0x000107c613fc(&UNK_1104c2828,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  func_0x000107c613fc(&UNK_1104c2828,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  func_0x00010445c960(FUN_102068358,0,0x10206835c,0,0x102068360,0,FUN_1020683f0,auStack_60,
                      FUN_102068474,puVar1,FUN_102068b8c,puVar2,FUN_102068be8,puVar3,FUN_102068fcc,0
                      ,0x102068fd0,0);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 102068358; end: 102068363;  */

void FUN_102068358(void)

{
  return;
}



/* Entry: 102068364; end: 1020683ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102068364(ulong param_1,ulong param_2,long param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_2 != 0) {
    puVar1 = (ulong *)(param_3 + _DAT_112e54370);
    uVar3 = puVar1[1];
    if ((uVar3 == 0) ||
       ((uVar2 = *puVar1, uVar2 != param_1 || uVar3 != param_2 &&
        (func_0x000107c605b8(uVar2,uVar3,param_1,param_2,0), (uVar2 & 1) == 0)))) {
      FUN_102069c44();
      uVar3 = puVar1[1];
      *puVar1 = param_1;
      puVar1[1] = param_2;
      func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
      return;
    }
  }
  return;
}



/* Entry: 1020683f0; end: 1020683f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020683f0(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  
  if (param_2 != 0) {
    puVar1 = (ulong *)(*(long *)(unaff_x20 + 0x10) + _DAT_112e54370);
    uVar3 = puVar1[1];
    if ((uVar3 == 0) ||
       ((uVar2 = *puVar1, uVar2 != param_1 || uVar3 != param_2 &&
        (func_0x000107c605b8(uVar2,uVar3,param_1,param_2,0), (uVar2 & 1) == 0)))) {
      FUN_102069c44();
      uVar3 = puVar1[1];
      *puVar1 = param_1;
      puVar1[1] = param_2;
      func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
      return;
    }
  }
  return;
}



/* Entry: 1020683f8; end: 102068473;  */

void FUN_1020683f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar1 = 0;
    func_0x00010469f49c(0);
    func_0x00010469f360();
    FUN_10206847c();
    func_0x000107c61170(param_3);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 102068474; end: 10206847b;  */

void FUN_102068474(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = 0;
    func_0x00010469f49c(0);
    func_0x00010469f360();
    FUN_10206847c();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar2);
  }
  return;
}


