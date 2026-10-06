/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10279b494; end: 10279b4d3;  */

void FUN_10279b494(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebe5f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dada040;
  func_0x000107c61520(&UNK_10dada040,&UNK_11054a260);
  puRam0000000112ebe5f0 = puVar1;
  return;
}



/* Entry: 10279b4d4; end: 10279b503;  */

void FUN_10279b4d4(code *param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (*param_1)(param_2,0,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10279b504; end: 10279b52b;  */

void FUN_10279b504(long param_1,long param_2)

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



/* Entry: 10279b52c; end: 10279b56f;  */

void FUN_10279b52c(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010279b56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10279b570; end: 10279b5d3;  */

void FUN_10279b570(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long *unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *unaff_x20;
  plVar2 = (long *)0x180;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10279b5d4;
  plVar2[0x18] = param_2;
  plVar2[0x19] = lVar3;
  plVar2[0x17] = param_1;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x1a] = uVar1;
  lVar3 = 0;
  func_0x000107c5ede0();
  plVar2[0x1b] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x1c] = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x1d] = uVar1;
  lVar3 = 0;
  func_0x00010392d0f4();
  plVar2[0x1e] = lVar3;
  uVar1 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x1f] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279a9f0,0,0);
  return;
}



/* Entry: 10279b5d4; end: 10279b60f;  */

void FUN_10279b5d4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010279b60c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10279b610; end: 10279b6e3;  */

undefined1  [16] FUN_10279b610(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  
  uVar1 = 0xd00000000000003b;
  if (param_2 == 0) {
    pcVar3 = "The SnapDoc rendered to an unsupported shareable media type";
  }
  else {
    if (param_2 == 1) {
      uVar2 = 0x800000010f0bbad0;
      uVar1 = 0xd000000000000036;
      goto LAB_10279b6d0;
    }
    if (param_2 != 2) {
      func_0x000107c602fc(0x29);
      func_0x000107c6142c(0xe000000000000000);
      func_0x000107c5fb78(param_1,param_2);
      uVar1 = 0xd000000000000027;
      uVar2 = 0x800000010f0bba60;
      goto LAB_10279b6d0;
    }
    pcVar3 = "The media link request completed without a link or an error";
  }
  uVar2 = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
LAB_10279b6d0:
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = uVar1;
  return auVar4;
}



/* Entry: 10279b6e4; end: 10279b707;  */

undefined1  [16] FUN_10279b6e4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 *unaff_x20;
  undefined1 auVar6 [16];
  
  uVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  uVar3 = 0xd00000000000003b;
  if (lVar2 == 0) {
    pcVar5 = "The SnapDoc rendered to an unsupported shareable media type";
  }
  else {
    if (lVar2 == 1) {
      uVar4 = 0x800000010f0bbad0;
      uVar3 = 0xd000000000000036;
      goto LAB_10279b6d0;
    }
    if (lVar2 != 2) {
      func_0x000107c602fc(0x29);
      func_0x000107c6142c(0xe000000000000000);
      func_0x000107c5fb78(uVar1,lVar2);
      uVar3 = 0xd000000000000027;
      uVar4 = 0x800000010f0bba60;
      goto LAB_10279b6d0;
    }
    pcVar5 = "The media link request completed without a link or an error";
  }
  uVar4 = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
LAB_10279b6d0:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



/* Entry: 10279b708; end: 10279b76f;  */

/* WARNING: Possible PIC construction at 0x00010279b738: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010279b73c) */
/* WARNING: Removing unreachable block (ram,0x00010279b740) */

void FUN_10279b708(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112ebe6b0;
    plVar5 = (long *)&UNK_10dada080;
  }
  else {
    puVar3 = (ulong *)0x112ebe5f8;
    plVar5 = (long *)&UNK_10db74d60;
    unaff_x30 = 0x10279b73c;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 10279b770; end: 10279b87b;  */

void FUN_10279b770(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &UNK_11054a280;
  func_0x000107c613fc(&UNK_11054a280,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000107c40a88(uVar2);
  func_0x000107c61180();
  puVar3 = &UNK_11054a2a8;
  func_0x000107c613fc(&UNK_11054a2a8,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_10279bb28;
  *(undefined **)(puVar3 + 0x18) = puVar1;
  pcStack_50 = FUN_10279bb5c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_10279b41c;
  puStack_58 = &UNK_11054a2c0;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c5dc64(uVar2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10279b87c; end: 10279b88b;  */

undefined1  [16] FUN_10279b87c(void)

{
  return ZEXT816(0x11054a1d0);
}



/* Entry: 10279b88c; end: 10279b8ab;  */

void FUN_10279b88c(void)

{
  func_0x000107c61168(&PTR_PTR_112ebe640);
  return;
}



/* Entry: 10279b8ac; end: 10279b8c7;  */

undefined8 * FUN_10279b8ac(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  if (0xfffffffe < uVar1) {
    *param_1 = *param_2;
    param_1[1] = uVar1;
    func_0x000107c61434(uVar1);
    return param_1;
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  return param_1;
}



/* Entry: 10279b8c8; end: 10279ba2b;  */

undefined8 * FUN_10279b8c8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  if (0xfffffffe < uVar1) {
    *param_1 = *param_2;
    param_1[1] = uVar1;
    func_0x000107c61434(uVar1);
    return param_1;
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  return param_1;
}



/* Entry: 10279ba2c; end: 10279bb27;  */

int FUN_10279ba2c(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffc < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffffffd;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (3 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -2;
  }
  return iVar1;
}



/* Entry: 10279bb28; end: 10279bb5b;  */

void FUN_10279bb28(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long unaff_x20;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_38 = param_1;
  uStack_30 = param_2;
  uStack_28 = param_3;
  (**(code **)(unaff_x20 + 0x10))(&uStack_38);
  return;
}



/* Entry: 10279bb5c; end: 10279bc57;  */

void FUN_10279bb5c(undefined8 *param_1,undefined *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  if (param_1 == (undefined8 *)0x0) {
    puVar4 = param_2;
    if (param_2 == (undefined *)0x0) {
      FUN_10279b494();
      puVar4 = &UNK_11054a260;
      func_0x000107c613f8(&UNK_11054a260,param_1,0,0);
      param_2 = (undefined *)0x0;
      param_1[1] = 2;
      *param_1 = 0;
    }
    func_0x000107c614b0(param_2);
    (*pcVar1)(puVar4,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(puVar4);
    return;
  }
  func_0x000107c61174();
  puVar2 = param_1;
  func_0x000107c5aae0();
  func_0x000107c61180();
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = param_1;
    func_0x000107c4c0c4(param_1);
    func_0x000107c61180();
  }
  puVar3 = puVar2;
  func_0x000107c5faec();
  func_0x000107c61170(puVar2);
  (*pcVar1)(puVar3,param_2,0);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10279bc58; end: 10279bca7;  */

void FUN_10279bc58(long param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10279bca8; end: 10279bebb;  */

void FUN_10279bca8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  code *pcVar8;
  long lVar9;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  puVar3 = (undefined8 *)PTR__OBJC_CLASS___PHAsset_1126bd898;
  func_0x000107c61168();
  lVar9 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar9 + 0x18) = 2;
  *(undefined8 *)(lVar9 + 0x10) = 1;
  *(undefined8 *)(lVar9 + 0x20) = uVar1;
  *(undefined8 *)(lVar9 + 0x28) = uVar2;
  func_0x000107c61434(uVar2);
  lVar4 = lVar9;
  func_0x000107c5fc48(lVar9,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar9);
  func_0x000107c42fcc();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  puVar5 = puVar3;
  func_0x000107c43638();
  func_0x000107c61180();
  *(undefined8 **)(unaff_x22 + 0x68) = puVar5;
  func_0x000107c61170();
  if (puVar5 == (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
    func_0x00010279c084();
    func_0x000107c613f8(&UNK_11054a5a8,puVar3,0,0);
    *puVar3 = uVar1;
    puVar3[1] = uVar2;
    *(undefined1 *)(puVar3 + 2) = 0;
    func_0x000107c61654();
    func_0x000107c61434(uVar2);
LAB_10279be98:
                    /* WARNING: Could not recover jumptable at 0x00010279beb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(code **)(unaff_x22 + 8),0);
    return;
  }
  puVar3 = puVar5;
  func_0x000107c4ca5c();
  if (puVar3 == (undefined8 *)0x2) {
    plVar6 = (long *)0x180;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x80) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_10279bf68;
    lVar9 = *(long *)(unaff_x22 + 0x60);
    plVar6[0x1b] = (long)puVar5;
    plVar6[0x1c] = lVar9;
    pcVar8 = FUN_10279c6d4;
  }
  else {
    if (puVar3 != (undefined8 *)0x1) {
      puVar3 = puVar5;
      func_0x000107c4ca5c();
      puVar7 = puVar3;
      func_0x00010279c084();
      func_0x000107c613f8(&UNK_11054a5a8,puVar7,0,0);
      *puVar7 = puVar3;
      puVar7[1] = 0;
      *(undefined1 *)(puVar7 + 2) = 3;
      func_0x000107c61654();
      func_0x000107c61170(puVar5);
      goto LAB_10279be98;
    }
    plVar6 = (long *)0xd0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x70) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_10279bebc;
    lVar9 = *(long *)(unaff_x22 + 0x60);
    plVar6[10] = (long)puVar5;
    plVar6[0xb] = lVar9;
    pcVar8 = FUN_10279c0dc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar8,0,0);
  return;
}



/* Entry: 10279bebc; end: 10279bf23;  */

void FUN_10279bebc(undefined8 param_1,undefined1 param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x28) = unaff_x20;
  *(undefined1 *)(lVar2 + 0x20) = param_2;
  *(long **)(lVar2 + 0x10) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x18) = param_1;
  *(long *)(lVar2 + 0x78) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10279bf24;
  }
  else {
    pcVar1 = FUN_10279c014;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10279bf24; end: 10279bf67;  */

void FUN_10279bf24(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010279bf64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2,uVar1);
  return;
}



/* Entry: 10279bf68; end: 10279bfcf;  */

void FUN_10279bf68(undefined8 param_1,undefined1 param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x48) = unaff_x20;
  *(undefined1 *)(lVar2 + 0x40) = param_2;
  *(long **)(lVar2 + 0x30) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x38) = param_1;
  *(long *)(lVar2 + 0x88) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x80));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10279bfd0;
  }
  else {
    pcVar1 = (code *)0x10279c04c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10279bfd0; end: 10279c013;  */

void FUN_10279bfd0(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010279c010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2,uVar1);
  return;
}



/* Entry: 10279c014; end: 10279c0c3;  */

void FUN_10279c014(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010279c048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(code **)(unaff_x22 + 8),0);
  return;
}



/* Entry: 10279c0c4; end: 10279c0db;  */

void FUN_10279c0c4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279c0dc,0,0);
  return;
}



/* Entry: 10279c0dc; end: 10279c31f;  */

void FUN_10279c0dc(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x28);
  puVar6 = *(undefined8 **)(unaff_x22 + 0x28);
  puVar2 = puVar6;
  func_0x000107c450b4();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  puVar6 = puVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(undefined8 **)(unaff_x22 + 0x60) = puVar6;
  func_0x000107c61170();
  if (puVar6 == (undefined8 *)0x0) {
    func_0x00010279c084();
    func_0x000107c613f8(&UNK_11054a5a8,puVar2,0,0);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 2) = 4;
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x00010279c278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(code **)(unaff_x22 + 8),0);
    return;
  }
  uVar3 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010dada1a0);
  func_0x000107c3ab88();
  func_0x000107c61180();
  *(undefined8 **)(unaff_x22 + 0x68) = puVar6;
  func_0x000107c61170(uVar3);
  *(undefined8 **)(unaff_x22 + 0x20) = puVar6;
  *(undefined8 **)(unaff_x22 + 0x40) = puVar6;
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    plVar4 = (long *)(ulong)*(uint *)(
                                     PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x70) = plVar4;
    uVar3 = 0x112dc3130;
    func_0x0001000285a8(0x112dc3130,&UNK_10d980410);
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_10279c320;
                    /* WARNING: Could not recover jumptable at 0x00010bdb99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_11034ffd8
    )(unaff_x22 + 0x48,&UNK_10dada278,unaff_x22 + 0x10,FUN_10279d8fc,unaff_x22 + 0x30,0,0,uVar3);
    return;
  }
  pcVar5 = FUN_10279d8fc;
  func_0x000107c615b4(FUN_10279d8fc,unaff_x22 + 0x30);
  *(code **)(unaff_x22 + 0x78) = pcVar5;
  func_0x0001000285a8(0x112d555b0,&UNK_10d91c610);
  func_0x000107c43bf4();
  func_0x000107c61180();
  puVar2 = puVar6;
  func_0x000100759c94();
  *(undefined8 **)(unaff_x22 + 0x80) = puVar2;
  func_0x000107c61170(puVar6);
  plVar4 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x88) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10279c384;
                    /* WARNING: Could not recover jumptable at 0x00010279c31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_101a155f0)();
  return;
}



/* Entry: 10279c320; end: 10279c383;  */

void FUN_10279c320(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x98) = *(undefined8 *)(lVar2 + 0x48);
    pcVar1 = FUN_10279c44c;
  }
  else {
    *(long *)(lVar2 + 0xa0) = unaff_x20;
    pcVar1 = FUN_10279c67c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10279c384; end: 10279c44b;  */

void FUN_10279c384(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x90) = param_1;
  *(undefined1 *)(lVar1 + 0xc0) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10279c3d8,0,0);
  return;
}



/* Entry: 10279c44c; end: 10279c67b;  */

void FUN_10279c44c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  
  lVar9 = *(long *)(unaff_x22 + 0x98);
  if (lVar9 == 0) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x68);
    puVar7 = *(undefined8 **)(unaff_x22 + 0x50);
    func_0x000107c4b800();
    func_0x000107c61180();
    puVar6 = puVar7;
    func_0x000107c5faec();
    func_0x000107c61170();
    func_0x00010279c084();
    func_0x000107c613f8(&UNK_11054a5a8,puVar7,0,0);
    *puVar7 = puVar6;
    puVar7[1] = param_2;
    *(undefined1 *)(puVar7 + 2) = 2;
    func_0x000107c61654();
  }
  else {
    lVar2 = lVar9;
    func_0x000107c61174(lVar9);
    func_0x000107c5ee30(lVar9);
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    lVar4 = lVar9;
    func_0x000107c5ee20(lVar9,param_2);
    func_0x000107c4635c();
    func_0x000107c61170(lVar4);
    func_0x00010006c090(lVar9);
    if (puVar3 != (undefined *)0x0) {
      uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x68);
      puVar5 = PTR_PTR_1126affc0;
      func_0x000107c61168(PTR_PTR_1126affc0);
      puVar1 = PTR__kCMTimeZero_110348670;
      uVar8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)PTR__kCMTimeZero_110348670;
      *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(puVar1 + 8);
      *(undefined8 *)(unaff_x22 + 0xb8) = uVar8;
      func_0x000107c5d19c();
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(uVar10);
      func_0x000107c615e8(uVar11);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010279c56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(puVar5,0);
      return;
    }
    uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x68);
    puVar7 = *(undefined8 **)(unaff_x22 + 0x50);
    func_0x000107c4b800();
    func_0x000107c61180();
    puVar6 = puVar7;
    func_0x000107c5faec();
    func_0x000107c61170();
    func_0x00010279c084();
    func_0x000107c613f8(&UNK_11054a5a8,puVar7,0,0);
    *puVar7 = puVar6;
    puVar7[1] = param_2;
    *(undefined1 *)(puVar7 + 2) = 1;
    func_0x000107c61654();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61170(uVar10);
  func_0x000107c615e8(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010279c678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(code **)(unaff_x22 + 8),0);
  return;
}



/* Entry: 10279c67c; end: 10279c6bb;  */

void FUN_10279c67c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010279c6b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(code **)(unaff_x22 + 8),0);
  return;
}



/* Entry: 10279c6bc; end: 10279c6d3;  */

void FUN_10279c6bc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279c6d4,0,0);
  return;
}



/* Entry: 10279c6d4; end: 10279c933;  */

void FUN_10279c6d4(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0xa8);
  puVar5 = *(undefined8 **)(unaff_x22 + 0xa8);
  puVar2 = puVar5;
  func_0x000107c5ddc0();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puVar5 = puVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(undefined8 **)(unaff_x22 + 0xe8) = puVar5;
  func_0x000107c61170();
  if (puVar5 == (undefined8 *)0x0) {
    func_0x00010279c084();
    func_0x000107c613f8(&UNK_11054a5a8,puVar2,0,0);
    puVar2[1] = 0;
    *puVar2 = 1;
    *(undefined1 *)(puVar2 + 2) = 4;
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x00010279c88c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(code **)(unaff_x22 + 8),0);
    return;
  }
  uVar3 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010dada1a0);
  *(undefined8 *)(unaff_x22 + 0x148) = 0;
  *(undefined8 *)(unaff_x22 + 0x140) = 0;
  *(undefined8 *)(unaff_x22 + 0x158) = 0;
  *(undefined8 *)(unaff_x22 + 0x150) = 0;
  *(undefined8 *)(unaff_x22 + 0x168) = 0;
  *(undefined8 *)(unaff_x22 + 0x160) = 0;
  func_0x000107c42c00();
  func_0x000107c61180();
  *(undefined8 **)(unaff_x22 + 0xf0) = puVar5;
  func_0x000107c61170(uVar3);
  *(undefined8 **)(unaff_x22 + 0x60) = puVar5;
  *(undefined8 **)(unaff_x22 + 0xc0) = puVar5;
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    plVar4 = (long *)(ulong)*(uint *)(
                                     PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xf8) = plVar4;
    uVar3 = 0x112dec5b0;
    func_0x0001000285a8(0x112dec5b0,&UNK_10d9b83b0);
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_10279c934;
                    /* WARNING: Could not recover jumptable at 0x00010bdb99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_11034ffd8
    )(unaff_x22 + 200,&UNK_10dada290,unaff_x22 + 0x50,0x10279da0c,unaff_x22 + 0xb0,0,0,uVar3);
    return;
  }
  uVar3 = 0x10279da0c;
  func_0x000107c615b4(0x10279da0c,unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x100) = uVar3;
  func_0x0001000285a8(0x112d53960,&UNK_10d91a4d0);
  func_0x000107c43bf4();
  func_0x000107c61180();
  puVar2 = puVar5;
  func_0x000100759c94();
  *(undefined8 **)(unaff_x22 + 0x108) = puVar2;
  func_0x000107c61170(puVar5);
  plVar4 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x110) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10279c998;
                    /* WARNING: Could not recover jumptable at 0x00010279c930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_10121ae24)();
  return;
}



/* Entry: 10279c934; end: 10279c997;  */

void FUN_10279c934(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xf8));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x120) = *(undefined8 *)(lVar2 + 200);
    pcVar1 = FUN_10279ca60;
  }
  else {
    *(long *)(lVar2 + 0x138) = unaff_x20;
    pcVar1 = (code *)0x10279ccac;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10279c998; end: 10279ca5f;  */

void FUN_10279c998(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x118) = param_1;
  *(undefined1 *)(lVar1 + 0x170) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x110));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10279c9ec,0,0);
  return;
}



/* Entry: 10279ca60; end: 10279cc53;  */

void FUN_10279ca60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long unaff_x22;
  long lVar9;
  
  lVar8 = *(long *)(unaff_x22 + 0x120);
  if (lVar8 != 0) {
    lVar2 = 0;
    func_0x000107c5ede0();
    lVar9 = *(long *)(lVar2 + -8);
    uVar3 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar3);
    func_0x000107c5edb4(uVar3,lVar8);
    puVar4 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x000107c610f8();
    func_0x000107c61174(lVar8);
    func_0x000107c5ed90();
    func_0x000107c48fd4();
    *(undefined **)(unaff_x22 + 0x128) = puVar4;
    func_0x000107c61170(lVar8);
    (**(code **)(lVar9 + 8))(uVar3,lVar2);
    func_0x000107c615c0(uVar3);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xd0;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10279cc54;
    lVar8 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar8,1);
    uVar5 = 0x112ebe6c8;
    func_0x0001000285a8(0x112ebe6c8,&UNK_10dada2a0);
    *(undefined **)(unaff_x22 + 0x68) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar5;
    *(undefined8 *)(unaff_x22 + 0x70) = 0x42000000;
    *(code **)(unaff_x22 + 0x78) = FUN_10279d144;
    *(undefined **)(unaff_x22 + 0x80) = &UNK_11054a5b8;
    *(long *)(unaff_x22 + 0x88) = lVar8;
    func_0x000107c4b784(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  puVar6 = *(undefined8 **)(unaff_x22 + 0xd8);
  func_0x000107c4b800();
  func_0x000107c61180();
  puVar7 = puVar6;
  func_0x000107c5faec();
  func_0x000107c61170();
  func_0x00010279c084();
  func_0x000107c613f8(&UNK_11054a5a8,puVar6,0,0);
  *puVar6 = puVar7;
  puVar6[1] = param_2;
  *(undefined1 *)(puVar6 + 2) = 2;
  func_0x000107c61654();
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010279cc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(code **)(unaff_x22 + 8),0);
  return;
}



/* Entry: 10279cc54; end: 10279cceb;  */

void FUN_10279cc54(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x130) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_10279ccec;
  }
  else {
    pcVar1 = FUN_10279cdc8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10279ccec; end: 10279cdc7;  */

void FUN_10279ccec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long unaff_x22;
  
  uVar5 = *(ulong *)(unaff_x22 + 0xd0);
  if (uVar5 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar7 = uVar5;
    }
    func_0x000107c60480(uVar7);
  }
  func_0x000107c6142c(uVar5);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf0);
  puVar6 = PTR_PTR_1126affc0;
  func_0x000107c61168(PTR_PTR_1126affc0);
  func_0x000107c5dda4();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010279cda0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar6,uVar7 != 0);
  return;
}



/* Entry: 10279cdc8; end: 10279ce6f;  */

void FUN_10279cdc8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x130);
  func_0x000107c61654();
  func_0x000107c614ac(uVar5);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
  puVar4 = PTR_PTR_1126affc0;
  func_0x000107c61168(PTR_PTR_1126affc0);
  func_0x000107c5dda4();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010279ce6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar4,0);
  return;
}



/* Entry: 10279ce70; end: 10279ce87;  */

void FUN_10279ce70(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279ce88,0,0);
  return;
}



/* Entry: 10279ce88; end: 10279cf33;  */

void FUN_10279ce88(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x0001000285a8(0x112d555b0,&UNK_10d91c610);
  func_0x000107c43bf4();
  func_0x000107c61180();
  uVar1 = uVar3;
  func_0x000100759c94();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  func_0x000107c61170(uVar3);
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10279cf34;
                    /* WARNING: Could not recover jumptable at 0x00010279cf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_101a155f0)();
  return;
}



/* Entry: 10279cf34; end: 10279cf87;  */

void FUN_10279cf34(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x38) = param_1;
  *(undefined1 *)(lVar1 + 0x40) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279cf88,0,0);
  return;
}



/* Entry: 10279cf88; end: 10279d02b;  */

void FUN_10279cf88(void)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  if (*(char *)(unaff_x22 + 0x40) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x10,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar4);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    puVar3 = *(undefined8 **)(unaff_x22 + 0x18);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
    *puVar3 = uVar4;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010279d028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10279d02c; end: 10279d043;  */

void FUN_10279d02c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279d044,0,0);
  return;
}



/* Entry: 10279d044; end: 10279d0ef;  */

void FUN_10279d044(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x0001000285a8(0x112d53960,&UNK_10d91a4d0);
  func_0x000107c43bf4();
  func_0x000107c61180();
  uVar1 = uVar3;
  func_0x000100759c94();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  func_0x000107c61170(uVar3);
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10279d0f0;
                    /* WARNING: Could not recover jumptable at 0x00010279d0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_10121ae24)();
  return;
}



/* Entry: 10279d0f0; end: 10279d143;  */

void FUN_10279d0f0(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x38) = param_1;
  *(undefined1 *)(lVar1 + 0x40) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279d9f4,0,0);
  return;
}



/* Entry: 10279d144; end: 10279d1f3;  */

void FUN_10279d144(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar3 = *plVar1;
  if (param_3 != 0) {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar1 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar1 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar3,uVar2);
    return;
  }
  uVar2 = 0;
  func_0x000102159a9c(0);
  func_0x000107c5fc54(param_2,uVar2);
  **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar3);
  return;
}



/* Entry: 10279d1f4; end: 10279d257;  */

void FUN_10279d1f4(long param_1,long param_2)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10279d258;
  plVar1[0xb] = param_2;
  plVar1[0xc] = lVar2;
  plVar1[10] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279bca8,0,0);
  return;
}



/* Entry: 10279d258; end: 10279d2b7;  */

void FUN_10279d258(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010279d2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10279d2b8; end: 10279d2bf;  */

void FUN_10279d2b8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 10279d2c0; end: 10279d30b;  */

undefined8 * FUN_10279d2c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 10279d30c; end: 10279d347;  */

undefined8 * FUN_10279d30c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 10279d348; end: 10279d43f;  */

int FUN_10279d348(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10279d440; end: 10279d4db;  */

undefined8 * FUN_10279d440(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x00010279d400(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 10279d4dc; end: 10279d51f;  */

undefined8 * FUN_10279d4dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x00010279d428(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 10279d520; end: 10279d5f3;  */

int FUN_10279d520(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfb < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfc;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 5) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10279d5f4; end: 10279d83f;  */

undefined1  [16] FUN_10279d5f4(long param_1,long param_2,byte param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_40;
  ulong uStack_38;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      func_0x000107c602fc(0x3a);
      func_0x000107c5fb78(0xd000000000000022,0x800000010f0bbc80);
      func_0x000107c5fb78(param_1,param_2);
      pcVar4 = " could not be fetched.";
    }
    else {
      func_0x000107c602fc(0x49);
      func_0x000107c5fb78(0xd000000000000031,0x800000010f0bbc20);
      func_0x000107c5fb78(param_1,param_2);
      pcVar4 = " could not be decoded.";
    }
    uStack_38 = 0xe000000000000000;
    uStack_40 = 0;
    uVar3 = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    uVar1 = 0xd000000000000016;
  }
  else if (param_3 == 2) {
    func_0x000107c602fc(0x41);
    uStack_40 = 0;
    uStack_38 = 0xe000000000000000;
    func_0x000107c5fb78(0xd00000000000002c,0x800000010f0bbb70);
    func_0x000107c5fb78(param_1,param_2);
    uVar1 = 0xd000000000000013;
    uVar3 = 0x800000010f0bbba0;
  }
  else {
    if (param_3 != 3) {
      uStack_40 = 0xd000000000000028;
      pcVar4 = "importer is unavailable.";
      if (param_2 != 0 || param_1 != 0) {
        pcVar4 = " returned no media.";
      }
      uStack_38 = (ulong)pcVar4 | 0x8000000000000000;
      goto LAB_10279d82c;
    }
    func_0x000107c602fc(0x22);
    func_0x000107c6142c(0xe000000000000000);
    uStack_40 = 0xd00000000000001f;
    uStack_38 = 0x800000010f0bbb50;
    puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar2);
    uVar1 = 0x2e;
    uVar3 = 0xe100000000000000;
  }
  func_0x000107c5fb78(uVar1,uVar3);
LAB_10279d82c:
  auVar5._8_8_ = uStack_38;
  auVar5._0_8_ = uStack_40;
  return auVar5;
}



/* Entry: 10279d840; end: 10279d867;  */

undefined1  [16] FUN_10279d840(void)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  char *pcVar7;
  long *unaff_x20;
  undefined1 auVar8 [16];
  undefined8 uStack_40;
  ulong uStack_38;
  
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  bVar3 = *(byte *)(unaff_x20 + 2);
  if (bVar3 < 2) {
    if (bVar3 == 0) {
      func_0x000107c602fc(0x3a);
      func_0x000107c5fb78(0xd000000000000022,0x800000010f0bbc80);
      func_0x000107c5fb78(lVar1,lVar2);
      pcVar7 = " could not be fetched.";
    }
    else {
      func_0x000107c602fc(0x49);
      func_0x000107c5fb78(0xd000000000000031,0x800000010f0bbc20);
      func_0x000107c5fb78(lVar1,lVar2);
      pcVar7 = " could not be decoded.";
    }
    uStack_38 = 0xe000000000000000;
    uStack_40 = 0;
    uVar6 = (ulong)(pcVar7 + -0x20) | 0x8000000000000000;
    uVar4 = 0xd000000000000016;
  }
  else if (bVar3 == 2) {
    func_0x000107c602fc(0x41);
    uStack_40 = 0;
    uStack_38 = 0xe000000000000000;
    func_0x000107c5fb78(0xd00000000000002c,0x800000010f0bbb70);
    func_0x000107c5fb78(lVar1,lVar2);
    uVar4 = 0xd000000000000013;
    uVar6 = 0x800000010f0bbba0;
  }
  else {
    if (bVar3 != 3) {
      uStack_40 = 0xd000000000000028;
      pcVar7 = "importer is unavailable.";
      if (lVar2 != 0 || lVar1 != 0) {
        pcVar7 = " returned no media.";
      }
      uStack_38 = (ulong)pcVar7 | 0x8000000000000000;
      goto LAB_10279d82c;
    }
    func_0x000107c602fc(0x22);
    func_0x000107c6142c(0xe000000000000000);
    uStack_40 = 0xd00000000000001f;
    uStack_38 = 0x800000010f0bbb50;
    puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar5);
    uVar4 = 0x2e;
    uVar6 = 0xe100000000000000;
  }
  func_0x000107c5fb78(uVar4,uVar6);
LAB_10279d82c:
  auVar8._8_8_ = uStack_38;
  auVar8._0_8_ = uStack_40;
  return auVar8;
}



/* Entry: 10279d868; end: 10279d8bf;  */

void FUN_10279d868(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10279d8c0;
  plVar1[3] = param_1;
  plVar1[4] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279ce88,0,0);
  return;
}



/* Entry: 10279d8c0; end: 10279d8fb;  */

void FUN_10279d8c0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010279d8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10279d8fc; end: 10279d8ff;  */

void FUN_10279d8fc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c3f50c(uVar1);
  func_0x000107c61180();
  func_0x000107c3f474();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10279d900; end: 10279d957;  */

void FUN_10279d900(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10279da08;
  plVar1[3] = param_1;
  plVar1[4] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279d044,0,0);
  return;
}



/* Entry: 10279d958; end: 10279d98b;  */

void FUN_10279d958(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c3f50c(uVar1);
  func_0x000107c61180();
  func_0x000107c3f474();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10279d98c; end: 10279d9a3;  */

long FUN_10279d98c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 10279d9a4; end: 10279d9f3;  */

void FUN_10279d9a4(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112ebe6d0 != 0) {
    return;
  }
  puVar1 = &UNK_11054a5f0;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112ebe6d0 = param_1;
  return;
}



/* Entry: 10279d9f4; end: 10279da0f;  */

void FUN_10279d9f4(void)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  if (*(char *)(unaff_x22 + 0x40) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x10,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar4);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    puVar3 = *(undefined8 **)(unaff_x22 + 0x18);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
    *puVar3 = uVar4;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010279d028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10279da10; end: 10279da4b;  */

/* WARNING: Possible PIC construction at 0x00010279da38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010279da3c) */

void FUN_10279da10(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  param_1[3] = &UNK_11054a728;
  param_1[4] = &PTR_DAT_11054a680;
  *param_1 = uVar2;
  param_1[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 10279da4c; end: 10279da67;  */

void FUN_10279da4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279da68,0,0);
  return;
}



/* Entry: 10279da68; end: 10279db53;  */

void FUN_10279da68(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  FUN_10279e1fc(*(undefined8 *)(unaff_x22 + 0x18));
  *(long *)(unaff_x22 + 0x30) = param_3;
  if (param_3 != 0) {
    plVar2 = (long *)0xe0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x38) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_10279db54;
    lVar1 = *(long *)(unaff_x22 + 0x28);
    lVar4 = *(long *)(unaff_x22 + 0x18);
    plVar2[0x14] = *(long *)(unaff_x22 + 0x20);
    plVar2[0x15] = lVar1;
    plVar2[0x12] = param_2;
    plVar2[0x13] = param_3;
    plVar2[0x11] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10279dbcc,0,0);
    return;
  }
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar3 = uVar5;
  func_0x000107c42d48(uVar5);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  uVar5 = uVar3;
  func_0x000107c42428(uVar3);
  func_0x000107c61180();
  func_0x000107c615e8(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010279db50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar5);
  return;
}



/* Entry: 10279db54; end: 10279dbab;  */

void FUN_10279db54(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x30);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x38));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010279dba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 10279dbac; end: 10279dbcb;  */

void FUN_10279dbac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_6;
  *(undefined8 *)(unaff_x22 + 0x90) = param_3;
  *(undefined8 *)(unaff_x22 + 0x98) = param_4;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279dbcc,0,0);
  return;
}



/* Entry: 10279dbcc; end: 10279dc57;  */

void FUN_10279dbcc(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x00010279ea14(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10279dc58;
                    /* WARNING: Could not recover jumptable at 0x00010279dc54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x98),uVar2,lVar3);
  return;
}



/* Entry: 10279dc58; end: 10279dcc3;  */

void FUN_10279dc58(undefined8 param_1,undefined1 param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x70) = unaff_x20;
  *(undefined1 *)(lVar2 + 0x68) = param_2;
  *(long **)(lVar2 + 0x58) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x60) = param_1;
  *(undefined8 *)(lVar2 + 0xb8) = param_1;
  *(long *)(lVar2 + 0xc0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xb0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10279dcc4;
  }
  else {
    pcVar1 = (code *)0x10279df74;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10279dcc4; end: 10279dd6f;  */

void FUN_10279dcc4(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x00010279ea38(unaff_x22 + 0x10);
  func_0x000100083b20(unaff_x22 + 0x78);
  lVar3 = *(long *)(unaff_x22 + 0x78);
  lVar1 = lVar3;
  func_0x000107c42d48();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar1;
  func_0x000107c42424();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 200) = lVar3;
  func_0x000107c615e8(lVar1);
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10279dd70;
  plVar2[9] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279e7a4,0,0);
  return;
}



/* Entry: 10279dd70; end: 10279ddcb;  */

void FUN_10279dd70(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xd8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xd0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10279ddcc;
  }
  else {
    pcVar1 = FUN_10279df34;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10279ddcc; end: 10279df33;  */

void FUN_10279ddcc(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined *puVar6;
  
  lVar2 = *(long *)(unaff_x22 + 0x88);
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10279df30);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  func_0x000107c44a30();
  func_0x000107c61170(lVar2);
  if ((int)lVar3 == 0) {
    lVar2 = *(long *)(unaff_x22 + 200);
    func_0x000107c4e8ec();
    func_0x000107c61180();
  }
  else {
    lVar3 = *(long *)(unaff_x22 + 0x88);
    func_0x000107c4e8d8();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10279df34);
      (*pcVar1)();
    }
    lVar2 = lVar3;
    func_0x000107c4e8ec();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
  }
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c40794(lVar2);
    func_0x000107c60234(unaff_x22 + 0x38);
    func_0x000107c615e8(lVar3);
    uVar4 = 0;
    FUN_10279ea58(0,0x112ebe6e0,&PTR_PTR_1126b3068);
    lVar3 = unaff_x22 + 0x80;
    func_0x000107c6147c(lVar3,unaff_x22 + 0x38,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if ((int)lVar3 != 0) {
      puVar6 = *(undefined **)(unaff_x22 + 0x80);
      goto LAB_10279ded4;
    }
  }
  puVar6 = PTR_PTR_1126b3068;
  func_0x000107c610f8(PTR_PTR_1126b3068);
  func_0x000107c453e4();
LAB_10279ded4:
  uVar4 = *(undefined8 *)(unaff_x22 + 200);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c55048(puVar6);
  func_0x000107c574c8(uVar4);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010279df28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 200));
  return;
}



/* Entry: 10279df34; end: 10279dfa7;  */

void FUN_10279df34(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 200));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010279df70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10279dfa8; end: 10279dfdb;  */

bool FUN_10279dfa8(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10279e1fc();
  if (param_3 != 0) {
    func_0x000107c6142c(param_3);
  }
  return param_3 != 0;
}



/* Entry: 10279dfdc; end: 10279dfdf;  */

bool FUN_10279dfdc(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined1 auStack_70 [8];
  ulong uStack_68;
  
  lVar13 = 0x112d36580;
  puVar11 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = auStack_70 + -extraout_x8;
  uVar2 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(uVar2 - 8);
  uVar3 = uVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = (long)puVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_1027af714();
  if ((((uint)puVar11 ^ 0xffffffff) & 0xff) == 0) {
    return false;
  }
  uVar4 = uVar3;
  puVar12 = puVar11;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (uVar4 != 0) {
    uVar5 = uVar4;
    func_0x000107c4c99c();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    if (uVar5 != 0) {
      uVar4 = uVar5;
      FUN_1027af184();
      if (uVar4 == 0) {
        FUN_10276f644(uVar3,puVar11);
        func_0x000107c61170(uVar5);
        return false;
      }
      uVar6 = uVar4;
      func_0x000107c4b7ec();
      func_0x000107c61180();
      if (uVar6 == 0) {
        FUN_10276f644(uVar3,puVar11);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar4);
        return false;
      }
      uVar7 = uVar6;
      uStack_68 = uVar5;
      func_0x000107c5faec();
      func_0x000107c61170(uVar6);
      uVar5 = uVar7 & 0xffffffffffff;
      if (((ulong)puVar12 & 0x2000000000000000) != 0) {
        uVar5 = (ulong)puVar12 >> 0x38 & 0xf;
      }
      if (uVar5 == 0) {
        FUN_10276f644(uVar3,puVar11);
        func_0x000107c61170(uStack_68);
        func_0x000107c61170(uVar4);
LAB_10279e3e0:
        func_0x000107c6142c(puVar12);
        return false;
      }
      func_0x000107c5edd0(puVar15,uVar7,puVar12);
      func_0x000107c6142c(puVar12);
      puVar8 = puVar15;
      (**(code **)(lVar14 + 0x30))(puVar15,1,uVar2);
      uVar5 = uStack_68;
      if ((int)puVar8 == 1) {
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar5);
        FUN_10276f644(uVar3,puVar11);
        func_0x0001000293e4(puVar15);
        return false;
      }
      lVar9 = lVar13;
      (**(code **)(lVar14 + 0x20))(lVar13,puVar15,uVar2);
      func_0x000107c5ed90();
      lVar10 = lVar9;
      func_0x000108543f0c();
      func_0x000107c61180();
      func_0x000107c61170(lVar9);
      lVar9 = lVar10;
      func_0x000107c5f9e8(lVar10,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90)
      ;
      func_0x000107c61170(lVar10);
      if (*(long *)(lVar9 + 0x10) == 0) {
        func_0x000107c6142c(lVar9);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar5);
      }
      else {
        func_0x000107c61434(lVar9);
        lVar10 = 0x64497465737361;
        uVar6 = 0;
        func_0x000100029284();
        if ((uVar6 & 1) != 0) {
          puVar1 = (ulong *)(*(long *)(lVar9 + 0x38) + lVar10 * 0x10);
          uVar6 = *puVar1;
          puVar12 = (undefined *)puVar1[1];
          func_0x000107c61434(puVar12);
          func_0x000107c61170(uVar4);
          func_0x000107c61170(uVar5);
          func_0x000107c61430(lVar9,2);
          (**(code **)(lVar14 + 8))(lVar13,uVar2);
          uVar2 = uVar6 & 0xffffffffffff;
          if (((ulong)puVar12 & 0x2000000000000000) != 0) {
            uVar2 = (ulong)puVar12 >> 0x38 & 0xf;
          }
          FUN_10276f644(uVar3,puVar11);
          if (uVar2 != 0) {
            return ((uint)puVar11 & 0xff) == 1;
          }
          goto LAB_10279e3e0;
        }
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar5);
        func_0x000107c61430(lVar9,2);
      }
      (**(code **)(lVar14 + 8))(lVar13,uVar2);
    }
  }
  FUN_10276f644(uVar3,puVar11);
  return false;
}



/* Entry: 10279dfe0; end: 10279e03f;  */

void FUN_10279dfe0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x20;
  long unaff_x22;
  
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10279e040;
  plVar3[4] = lVar1;
  plVar3[5] = lVar2;
  plVar3[3] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279da68,0,0);
  return;
}



/* Entry: 10279e040; end: 10279e087;  */

void FUN_10279e040(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010279e084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10279e088; end: 10279e12b;  */

void FUN_10279e088(undefined8 *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = param_2;
  func_0x000107c614f0();
  puVar1 = param_2;
  func_0x000107c5b198();
  func_0x000107c61180();
  puVar2 = puVar1;
  FUN_10279e710();
  func_0x000107c61170(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    param_2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar3 = (undefined *)0x0;
    FUN_10279ea58(0,0x112d4b600,&PTR__OBJC_CLASS___NSNull_1126aef28);
  }
  else {
    func_0x000107c615f0(param_2);
  }
  param_1[3] = puVar3;
  *param_1 = param_2;
  return;
}



/* Entry: 10279e12c; end: 10279e1ab;  */

void FUN_10279e12c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279ea98,0,0);
  return;
}



/* Entry: 10279e1ac; end: 10279e1bb;  */

void FUN_10279e1ac(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010279e1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 10279e1bc; end: 10279e1fb;  */

void FUN_10279e1bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10279ea9c,0,0);
  return;
}



/* Entry: 10279e1fc; end: 10279e577;  */

bool FUN_10279e1fc(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined1 auStack_70 [8];
  ulong uStack_68;
  
  lVar13 = 0x112d36580;
  puVar11 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = auStack_70 + -extraout_x8;
  uVar2 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(uVar2 - 8);
  uVar3 = uVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = (long)puVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_1027af714();
  if ((((uint)puVar11 ^ 0xffffffff) & 0xff) == 0) {
    return false;
  }
  uVar4 = uVar3;
  puVar12 = puVar11;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (uVar4 != 0) {
    uVar5 = uVar4;
    func_0x000107c4c99c();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    if (uVar5 != 0) {
      uVar4 = uVar5;
      FUN_1027af184();
      if (uVar4 == 0) {
        FUN_10276f644(uVar3,puVar11);
        func_0x000107c61170(uVar5);
        return false;
      }
      uVar6 = uVar4;
      func_0x000107c4b7ec();
      func_0x000107c61180();
      if (uVar6 == 0) {
        FUN_10276f644(uVar3,puVar11);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar4);
        return false;
      }
      uVar7 = uVar6;
      uStack_68 = uVar5;
      func_0x000107c5faec();
      func_0x000107c61170(uVar6);
      uVar5 = uVar7 & 0xffffffffffff;
      if (((ulong)puVar12 & 0x2000000000000000) != 0) {
        uVar5 = (ulong)puVar12 >> 0x38 & 0xf;
      }
      if (uVar5 == 0) {
        FUN_10276f644(uVar3,puVar11);
        func_0x000107c61170(uStack_68);
        func_0x000107c61170(uVar4);
LAB_10279e3e0:
        func_0x000107c6142c(puVar12);
        return false;
      }
      func_0x000107c5edd0(puVar15,uVar7,puVar12);
      func_0x000107c6142c(puVar12);
      puVar8 = puVar15;
      (**(code **)(lVar14 + 0x30))(puVar15,1,uVar2);
      uVar5 = uStack_68;
      if ((int)puVar8 == 1) {
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar5);
        FUN_10276f644(uVar3,puVar11);
        func_0x0001000293e4(puVar15);
        return false;
      }
      lVar9 = lVar13;
      (**(code **)(lVar14 + 0x20))(lVar13,puVar15,uVar2);
      func_0x000107c5ed90();
      lVar10 = lVar9;
      func_0x000108543f0c();
      func_0x000107c61180();
      func_0x000107c61170(lVar9);
      lVar9 = lVar10;
      func_0x000107c5f9e8(lVar10,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90)
      ;
      func_0x000107c61170(lVar10);
      if (*(long *)(lVar9 + 0x10) == 0) {
        func_0x000107c6142c(lVar9);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar5);
      }
      else {
        func_0x000107c61434(lVar9);
        lVar10 = 0x64497465737361;
        uVar6 = 0;
        func_0x000100029284();
        if ((uVar6 & 1) != 0) {
          puVar1 = (ulong *)(*(long *)(lVar9 + 0x38) + lVar10 * 0x10);
          uVar6 = *puVar1;
          puVar12 = (undefined *)puVar1[1];
          func_0x000107c61434(puVar12);
          func_0x000107c61170(uVar4);
          func_0x000107c61170(uVar5);
          func_0x000107c61430(lVar9,2);
          (**(code **)(lVar14 + 8))(lVar13,uVar2);
          uVar2 = uVar6 & 0xffffffffffff;
          if (((ulong)puVar12 & 0x2000000000000000) != 0) {
            uVar2 = (ulong)puVar12 >> 0x38 & 0xf;
          }
          FUN_10276f644(uVar3,puVar11);
          if (uVar2 != 0) {
            return ((uint)puVar11 & 0xff) == 1;
          }
          goto LAB_10279e3e0;
        }
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar5);
        func_0x000107c61430(lVar9,2);
      }
      (**(code **)(lVar14 + 8))(lVar13,uVar2);
    }
  }
  FUN_10276f644(uVar3,puVar11);
  return false;
}



/* Entry: 10279e578; end: 10279e587;  */

undefined1  [16] FUN_10279e578(void)

{
  return ZEXT816(0x11054a6b0);
}



/* Entry: 10279e588; end: 10279e5e3;  */

/* WARNING: Possible PIC construction at 0x00010279e59c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010279e5a0) */

void FUN_10279e588(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 10279e5e4; end: 10279e63f;  */

undefined8 * FUN_10279e5e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 10279e640; end: 10279e67b;  */

undefined8 * FUN_10279e640(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 10279e67c; end: 10279e70f;  */

int FUN_10279e67c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10279e710; end: 10279e78b;  */

long FUN_10279e710(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  FUN_1027af714();
  if ((((uint)param_2 ^ 0xffffffff) & 0xff) != 0) {
    lVar1 = param_1;
    func_0x000107c4c930();
    func_0x000107c61180();
    FUN_10276f644(param_1,param_2);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c44984(lVar1);
      func_0x000107c61170(lVar1);
      return lVar2;
    }
  }
  return 0;
}



/* Entry: 10279e78c; end: 10279e7a3;  */

void FUN_10279e78c(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279e7a4,0,0);
  return;
}



/* Entry: 10279e7a4; end: 10279e8d3;  */

void FUN_10279e7a4(void)

{
  ulong uVar1;
  ulong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x48);
  func_0x000107c5b198();
  func_0x000107c61180();
  uVar2 = uVar1;
  FUN_10279e710();
  func_0x000107c61170(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
    *(code **)(unaff_x22 + 0x30) = FUN_10279e088;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    puVar3 = (undefined8 *)(unaff_x22 + 0x10);
    *puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x20) = &UNK_101349054;
    *(undefined **)(unaff_x22 + 0x28) = &UNK_11054a740;
    func_0x000107c60bc4();
    func_0x000107c5e068();
    func_0x000107c61180();
    *(undefined8 *)(unaff_x22 + 0x50) = uVar6;
    func_0x000107c60bd0(puVar3);
    uVar4 = 0x112d67d58;
    func_0x0001000285a8(0x112d67d58,&UNK_10d92be70);
    func_0x000100759c94(uVar6,0,uVar4);
    *(undefined8 *)(unaff_x22 + 0x58) = uVar6;
    plVar5 = (long *)0x80;
    UNRECOVERED_JUMPTABLE = (code *)&UNK_10171335c;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x60) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_10279e8d4;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010279e8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10279e8d4; end: 10279e927;  */

void FUN_10279e8d4(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x68) = param_1;
  *(undefined1 *)(lVar1 + 0x70) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279e928,0,0);
  return;
}



/* Entry: 10279e928; end: 10279e9e3;  */

void FUN_10279e928(void)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  long unaff_x22;
  
  cVar2 = *(char *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  if (cVar2 == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x40) = uVar4;
    iVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar3 != 0) {
      uVar4 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x40,uVar4,PTR___ss5ErrorWS_11034ee10);
    }
    uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
    func_0x000107c61170(uVar4);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
    func_0x00010279ea00(uVar4,cVar2);
    func_0x000107c61170(uVar1);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010279e9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10279e9e4; end: 10279ea57;  */

void FUN_10279e9e4(long param_1,long param_2)

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



/* Entry: 10279ea58; end: 10279ea97;  */

void FUN_10279ea58(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10279ea98; end: 10279eaa7;  */

void FUN_10279ea98(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010279e1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 10279eaa8; end: 10279eb2f;  */

void FUN_10279eaa8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_1027a0940();
  uVar3 = param_2;
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  FUN_10279ec54(uVar1,uVar2,uVar4);
  param_1[3] = param_2;
  param_1[4] = &PTR_DAT_11054a868;
  *param_1 = uVar3;
  return;
}



/* Entry: 10279eb30; end: 10279eb83;  */

undefined8 FUN_10279eb30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_10279ec54(param_1,param_2,param_3);
  return unaff_x20;
}


