/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101d97adc; end: 101d97b1b;  */

void FUN_101d97adc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2b250 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da14008;
  func_0x000107c61520(&UNK_10da14008,&UNK_110482248);
  puRam0000000112e2b250 = puVar1;
  return;
}



/* Entry: 101d97b1c; end: 101d97b7b; -[_TtC42SCMemPlatBackupUploadMediaStepServicesImpl15OverlayUploader init] */

void FUN_101d97b1c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemPlatBackupUploadMediaStepServicesImpl.OverlayUploader",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d97b48);
  (*pcVar1)();
}



/* Entry: 101d97b7c; end: 101d97c13; -[_TtC42SCMemPlatBackupUploadMediaStepServicesImpl15OverlayUploader .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101d97b98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d97bb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d97bd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d97bbc) */
/* WARNING: Removing unreachable block (ram,0x000101d97b9c) */
/* WARNING: Removing unreachable block (ram,0x000101d97bdc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d97b7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e2b258));
  return;
}



/* Entry: 101d97c14; end: 101d97c33;  */

void FUN_101d97c14(void)

{
  func_0x000107c61168(&PTR_PTR_112803bb0);
  return;
}



/* Entry: 101d97c34; end: 101d97c4b;  */

void FUN_101d97c34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d97c4c,0,0);
  return;
}



/* Entry: 101d97c4c; end: 101d97d0f;  */

void FUN_101d97c4c(void)

{
  undefined1 *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  puVar1 = (undefined1 *)(lVar4 + 0x10);
  func_0x000107c61618();
  *(undefined1 **)(unaff_x22 + 0x38) = puVar1;
  if (puVar1 != (undefined1 *)0x0) {
    plVar2 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x40) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_101d97d10;
    plVar2[4] = *(long *)(unaff_x22 + 0x30);
    plVar2[5] = (long)puVar1;
    lVar4 = 0;
    func_0x000107c5ede0();
    plVar2[6] = lVar4;
    lVar4 = *(long *)(lVar4 + -8);
    plVar2[7] = lVar4;
    uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar2[8] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101d97e34,0,0);
    return;
  }
  func_0x000101d99598();
  func_0x000107c613f8(&UNK_1104823f8,puVar1,0,0);
  *puVar1 = 0;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101d97d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d97d10; end: 101d97e33;  */

void FUN_101d97d10(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x48) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    uVar1 = 0x101d97d6c;
  }
  else {
    uVar1 = 0x101d97da0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 101d97e34; end: 101d97f33;  */

void FUN_101d97e34(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long *plVar6;
  long lVar7;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long unaff_x22;
  
  iVar3 = (int)*(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c44a00();
  if (iVar3 == 0) {
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x40));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    puVar4 = *(undefined1 **)(unaff_x22 + 0x20);
    func_0x000107c5b2d0();
    func_0x000107c61180();
    if (puVar4 != (undefined1 *)0x0) {
      puVar5 = puVar4;
      func_0x000107c5faec();
      func_0x000107c61170(puVar4);
      *(undefined1 **)(unaff_x22 + 0x48) = puVar5;
      *(long *)(unaff_x22 + 0x50) = param_2;
      plVar6 = (long *)0xb0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x58) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_101d97f34;
      lVar7 = *(long *)(unaff_x22 + 0x40);
      lVar1 = *(long *)(unaff_x22 + 0x20);
      lVar2 = *(long *)(unaff_x22 + 0x28);
      plVar6[7] = (long)puVar5;
      plVar6[8] = param_2;
      plVar6[5] = lVar2;
      plVar6[6] = lVar1;
      plVar6[4] = lVar7;
      lVar7 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      uVar8 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar6[9] = uVar8;
      lVar7 = 0;
      func_0x000107c5ede0();
      plVar6[10] = lVar7;
      lVar7 = *(long *)(lVar7 + -8);
      plVar6[0xb] = lVar7;
      uVar10 = *(long *)(lVar7 + 0x40) + 0xf;
      uVar9 = uVar10 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar6[0xc] = uVar9;
      uVar10 = uVar10 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar6[0xd] = uVar10;
      plVar11 = (long *)0x70;
      func_0x000107c615b8();
      plVar6[0xe] = (long)plVar11;
      *plVar11 = (long)plVar6;
      plVar11[1] = (long)FUN_101d98188;
      plVar11[5] = lVar1;
      plVar11[6] = lVar2;
      plVar11[4] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_101d985b8,0,0);
      return;
    }
    func_0x000101d99598();
    func_0x000107c613f8(&UNK_1104823f8,puVar4,0,0);
    *puVar4 = 1;
    func_0x000107c61654();
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x40));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101d97f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101d97f34; end: 101d97f97;  */

void FUN_101d97f34(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x60) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101d97f98;
  }
  else {
    func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x50));
    pcVar1 = FUN_101d98084;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101d97f98; end: 101d98083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d97f98(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar1 = *(long *)(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar6 = *(long *)(unaff_x22 + 0x18);
  func_0x000107c614f0(uVar2);
  func_0x000107c5ed70();
  (**(code **)(lVar6 + 8))();
  func_0x000107c6142c(param_2);
  func_0x000107c615e8(uVar2);
  func_0x000107c6142c(uVar3);
  (**(code **)(lVar1 + 8))(uVar4,uVar5);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000101d98080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d98084; end: 101d980b7;  */

void FUN_101d98084(void)

{
  long unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000101d980b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d980b8; end: 101d98187;  */

void FUN_101d980b8(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(long *)(unaff_x22 + 0x28) = param_2;
  *(long *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x48) = uVar1;
  lVar2 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x50) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar4;
  plVar5 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101d98188;
  plVar5[5] = param_3;
  plVar5[6] = param_2;
  plVar5[4] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d985b8,0,0);
  return;
}



/* Entry: 101d98188; end: 101d981e3;  */

void FUN_101d98188(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x78) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101d981e4;
  }
  else {
    pcVar1 = FUN_101d984f4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101d981e4; end: 101d982d3;  */

void FUN_101d981e4(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  code *pcVar9;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar7 = uVar6;
  (**(code **)(lVar3 + 0x30))(uVar6,1,uVar1);
  if ((int)uVar7 == 1) {
    func_0x0001000293e4(uVar6);
    plVar2 = (long *)0xd0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x80) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_101d982d4;
    lVar3 = *(long *)(unaff_x22 + 0x28);
    plVar2[7] = *(long *)(unaff_x22 + 0x30);
    plVar2[8] = lVar3;
    lVar3 = 0;
    func_0x000107c5ede0();
    plVar2[9] = lVar3;
    lVar3 = *(long *)(lVar3 + -8);
    plVar2[10] = lVar3;
    uVar5 = *(long *)(lVar3 + 0x40) + 0xf;
    uVar4 = uVar5 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar2[0xb] = uVar4;
    uVar5 = uVar5 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar2[0xc] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101d9886c,0,0);
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x20);
  pcVar9 = *(code **)(lVar3 + 0x20);
  (*pcVar9)(uVar7,uVar6,uVar1);
  (*pcVar9)(uVar8,uVar7,uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000101d982d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d982d4; end: 101d98363;  */

void FUN_101d982d4(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar2 = *unaff_x22;
  lVar4 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x88) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x80));
  if (unaff_x20 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + 0x60);
    uVar3 = *(undefined8 *)(lVar2 + 0x48);
    func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x68));
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101d9833c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d98364,0,0);
  return;
}



/* Entry: 101d98364; end: 101d98417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d98364(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  FUN_101d96748(uVar2,uVar1,uVar4);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar2;
  func_0x000107c615e8(uVar5);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x98) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101d98418;
                    /* WARNING: Could not recover jumptable at 0x000101d98414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101d8fd78(plVar3,*(undefined8 *)(unaff_x22 + 0x60));
  return;
}



/* Entry: 101d98418; end: 101d9847b;  */

void FUN_101d98418(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x90);
  *(long *)(lVar3 + 0xa0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x98));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_101d9847c;
  }
  else {
    pcVar2 = FUN_101d98544;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101d9847c; end: 101d984f3;  */

void FUN_101d9847c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x88));
  (**(code **)(lVar1 + 0x20))(uVar4,uVar2,uVar3);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101d984f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d984f4; end: 101d98543;  */

void FUN_101d984f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101d98540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d98544; end: 101d9859b;  */

void FUN_101d98544(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x88));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101d98598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d9859c; end: 101d985b7;  */

void FUN_101d9859c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d985b8,0,0);
  return;
}



/* Entry: 101d985b8; end: 101d986e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d985b8(undefined8 param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar2 = *(ulong *)(unaff_x22 + 0x28);
  func_0x000107c4e174();
  func_0x000107c61180();
  if (uVar2 != 0) {
    uVar3 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
    *(ulong *)(unaff_x22 + 0x38) = uVar3;
    *(ulong *)(unaff_x22 + 0x40) = param_2;
    uVar2 = uVar3 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar2 = param_2 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      func_0x0001000d224c(unaff_x22 + 0x10);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
      lVar5 = *(long *)(unaff_x22 + 0x18);
      *(undefined8 *)(unaff_x22 + 0x48) = uVar7;
      func_0x000107c614f0(uVar7);
      piVar6 = *(int **)(lVar5 + 0x30);
      iVar1 = *piVar6;
      plVar4 = (long *)(ulong)(uint)piVar6[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x50) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_101d986e8;
                    /* WARNING: Could not recover jumptable at 0x000101d98698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar6))(FUN_101d98f4c,0,uVar7,lVar5);
      return;
    }
    func_0x000107c6142c(param_2);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar5 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(uVar7,1,1,lVar5);
                    /* WARNING: Could not recover jumptable at 0x000101d986e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d986e8; end: 101d9876f;  */

void FUN_101d986e8(byte param_1)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x58) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x50));
  if (unaff_x20 == 0) {
    func_0x000107c615e8(*(undefined8 *)(lVar3 + 0x48));
    *(byte *)(lVar3 + 0x60) = param_1 & 1;
    pcVar1 = FUN_101d98770;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x40);
    func_0x000107c615e8(*(undefined8 *)(lVar3 + 0x48));
    func_0x000107c6142c(uVar2);
    pcVar1 = FUN_101d987f4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101d98770; end: 101d987f3;  */

void FUN_101d98770(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  if ((*(byte *)(unaff_x22 + 0x60) & 1) == 0) {
    func_0x000107c5edd0(*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x38),uVar3);
    func_0x000107c6142c(uVar3);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
    func_0x000107c6142c(uVar3);
    lVar1 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(uVar2,1,1,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000101d987f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d987f4; end: 101d987ff;  */

void FUN_101d987f4(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101d987fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d98800; end: 101d9886b;  */

void FUN_101d98800(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x48) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x50) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x58) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d9886c,0,0);
  return;
}



/* Entry: 101d9886c; end: 101d98963;  */

void FUN_101d9886c(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 *puVar6;
  long unaff_x22;
  
  uVar3 = *(ulong *)(unaff_x22 + 0x38);
  func_0x000107c5b2d0();
  func_0x000107c61180();
  puVar6 = (undefined1 *)0x0;
  if (uVar3 != 0) {
    uVar4 = uVar3;
    puVar6 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    *(ulong *)(unaff_x22 + 0x68) = uVar4;
    *(undefined1 **)(unaff_x22 + 0x70) = puVar6;
    uVar3 = uVar4 & 0xffffffffffff;
    if (((ulong)puVar6 & 0x2000000000000000) != 0) {
      uVar3 = (ulong)puVar6 >> 0x38 & 0xf;
    }
    if (uVar3 != 0) {
      plVar5 = (long *)0x30;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x78) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_101d98964;
      lVar2 = *(long *)(unaff_x22 + 0x40);
      plVar5[3] = *(long *)(unaff_x22 + 0x38);
      plVar5[4] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_101d98f88,0,0);
      return;
    }
    func_0x000107c6142c();
  }
  func_0x000101d99598();
  func_0x000107c613f8(&UNK_1104823f8,puVar6,0,0);
  *puVar6 = 1;
  func_0x000107c61654();
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101d98960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d98964; end: 101d989e3;  */

void FUN_101d98964(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x80) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x78));
  if (unaff_x20 != 0) {
    func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x70));
    uVar1 = *(undefined8 *)(lVar2 + 0x58);
    func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
    func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101d989c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d989e4,0,0);
  return;
}



/* Entry: 101d989e4; end: 101d98b63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d989e4(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long *plVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  puVar4 = *(undefined1 **)(unaff_x22 + 0x80);
  func_0x000107c43468();
  func_0x000107c61180();
  if (puVar4 != (undefined1 *)0x0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
    lVar3 = *(long *)(unaff_x22 + 0x50);
    func_0x000107c5edb4(uVar7);
    func_0x000107c61170(puVar4);
    (**(code **)(lVar3 + 0x20))(uVar2,uVar7,uVar9);
    func_0x000107c427b8();
    *(undefined8 *)(unaff_x22 + 0x88) = uVar8;
    func_0x0001000d224c(unaff_x22 + 0x10);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar3 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar7);
    piVar6 = *(int **)(lVar3 + 8);
    iVar1 = *piVar6;
    plVar5 = (long *)(ulong)(uint)piVar6[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x90) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_101d98b64;
                    /* WARNING: Could not recover jumptable at 0x000101d98ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar6))(*(undefined8 *)(unaff_x22 + 0x38),uVar8,uVar7,lVar3);
    return;
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000101d99598();
  func_0x000107c613f8(&UNK_1104823f8,puVar4,0,0);
  *puVar4 = 4;
  func_0x000107c61654();
  func_0x000107c6142c(uVar7);
  func_0x000107c615e8(uVar9);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000101d98b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d98b64; end: 101d98bcb;  */

void FUN_101d98b64(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x98) = param_1;
  *(long *)(lVar2 + 0xa0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x90));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101d98bcc;
  }
  else {
    func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x70));
    pcVar1 = FUN_101d98e6c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101d98bcc; end: 101d98c2b;  */

void FUN_101d98bcc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa8) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101d98c2c;
  lVar1 = *(long *)(unaff_x22 + 0x68);
  lVar2 = *(long *)(unaff_x22 + 0x70);
  lVar4 = *(long *)(unaff_x22 + 0x60);
  lVar5 = *(long *)(unaff_x22 + 0x40);
  plVar3[8] = *(long *)(unaff_x22 + 0x98);
  plVar3[9] = lVar5;
  plVar3[6] = lVar2;
  plVar3[7] = lVar4;
  plVar3[5] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d99158,0,0);
  return;
}



/* Entry: 101d98c2c; end: 101d98c97;  */

void FUN_101d98c2c(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar2 + 0x70);
  *(undefined8 *)(lVar2 + 0xb0) = param_1;
  *(long *)(lVar2 + 0xb8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xa8));
  func_0x000107c6142c(uVar3);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101d98c98;
  }
  else {
    pcVar1 = FUN_101d98ed8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101d98c98; end: 101d98d6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d98c98(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  plVar1 = (long *)(*(long *)(unaff_x22 + 0x40) + _DAT_112e2b288);
  func_0x0001000a8868(plVar1,plVar1[3]);
  lVar4 = *plVar1;
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xc0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101d98d10;
  lVar2 = *(long *)(unaff_x22 + 0xb0);
  lVar3 = *(long *)(unaff_x22 + 0x88);
  plVar1[7] = 0;
  plVar1[8] = lVar4;
  plVar1[5] = lVar2;
  plVar1[6] = (long)FUN_101d94f98;
  plVar1[4] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d95790,0,0);
  return;
}



/* Entry: 101d98d6c; end: 101d98de7;  */

void FUN_101d98d6c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar4 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c61170(uVar5);
  (**(code **)(lVar4 + 8))(uVar3,uVar2);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101d98de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xb0));
  return;
}



/* Entry: 101d98de8; end: 101d98e6b;  */

void FUN_101d98de8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar2 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(uVar4);
  (**(code **)(lVar2 + 8))(uVar5,uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101d98e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d98e6c; end: 101d98ed7;  */

void FUN_101d98e6c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar2 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x80));
  (**(code **)(lVar2 + 8))(uVar3,uVar1);
  func_0x0001000834e4(unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101d98ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d98ed8; end: 101d98f47;  */

void FUN_101d98ed8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar2 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c61170(uVar4);
  (**(code **)(lVar2 + 8))(uVar3,uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101d98f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d98f48; end: 101d98f4b;  */

undefined8 FUN_101d98f48(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  puVar1 = &UNK_1104822e0;
  func_0x000107c613fc(&UNK_1104822e0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_110482308;
  func_0x000107c613fc(&UNK_110482308,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  func_0x000107c61174();
  uVar3 = 0x60;
  func_0x000104887c7c(0x60,0,0x48,4,0xd000000000000024,0x800000010f00f2c0,&UNK_10da140e0,puVar2);
  func_0x000107c61574(puVar2);
  puVar1 = &UNK_110482330;
  func_0x000107c613fc(&UNK_110482330,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  puVar2 = &UNK_110482358;
  func_0x000107c613fc(&UNK_110482358,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_101d99578;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  uVar4 = 0;
  FUN_101d7b40c(0);
  func_0x000107c61174(param_1);
  uVar5 = 0;
  func_0x000100775264(0,1,FUN_101d99580,puVar2,uVar4);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar2);
  return uVar5;
}



/* Entry: 101d98f4c; end: 101d98f6f;  */

void FUN_101d98f4c(void)

{
  func_0x000107c5ab9c();
  return;
}



/* Entry: 101d98f70; end: 101d98f87;  */

void FUN_101d98f70(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d98f88,0,0);
  return;
}



/* Entry: 101d98f88; end: 101d99137;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d98f88(undefined1 *param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined1 uVar3;
  undefined **ppuVar4;
  long unaff_x22;
  undefined **ppuVar5;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  ppuVar4 = *(undefined ***)(unaff_x22 + 0x10);
  if (ppuVar4 == (undefined **)0x0) {
    func_0x000101d99598();
    func_0x000107c613f8(&UNK_1104823f8,param_1,0,0);
    *param_1 = 0;
    func_0x000107c61654();
  }
  else {
    ppuVar1 = ppuVar4;
    func_0x000107c50600();
    func_0x000107c61180();
    if (ppuVar1 == (undefined **)0x0) {
      func_0x000101d99598();
      func_0x000107c613f8(&UNK_1104823f8,ppuVar1,0,0);
      *(undefined1 *)ppuVar1 = 2;
      func_0x000107c61654();
    }
    else {
      ppuVar5 = ppuVar1;
      func_0x000107c49a80();
      if ((int)ppuVar5 == 0) {
        func_0x000101d99598();
        func_0x000107c613f8(&UNK_1104823f8,ppuVar5,0,0);
        uVar3 = 3;
      }
      else {
        ppuVar5 = &PTR____CFConstantStringClassReference_110f72718;
        ppuVar2 = ppuVar1;
        func_0x000107c43404();
        func_0x000107c61180();
        func_0x000107c61170();
        if (ppuVar2 != (undefined **)0x0) {
          func_0x000107c615e8(ppuVar1);
          func_0x000107c615e8(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x000101d99048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x22 + 8))(ppuVar2);
          return;
        }
        func_0x000101d99598();
        func_0x000107c613f8(&UNK_1104823f8,ppuVar5,0,0);
        uVar3 = 4;
      }
      *(undefined1 *)ppuVar5 = uVar3;
      func_0x000107c61654();
      func_0x000107c615e8(ppuVar1);
    }
    func_0x000107c615e8(ppuVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x000101d99134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d99138; end: 101d99157;  */

void FUN_101d99138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d99158,0,0);
  return;
}



/* Entry: 101d99158; end: 101d9926b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d99158(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
  puVar3 = PTR_PTR_1126b5988;
  func_0x000107c61168();
  puVar4 = puVar3;
  func_0x000107c5ed90();
  func_0x000107c4b7f4();
  func_0x000107c61180();
  *(undefined **)(unaff_x22 + 0x50) = puVar3;
  func_0x000107c61170(puVar4);
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar5 = 0;
  FUN_101d962f4(0);
  FUN_101d97604(0,uVar8,uVar2,6,puVar3,uVar1,2,uVar5,&PTR_DAT_110481f28);
  *(undefined8 *)(unaff_x22 + 0x58) = uVar8;
  func_0x000107c615e8(uVar7);
  plVar6 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101d9926c;
                    /* WARNING: Could not recover jumptable at 0x000101d99268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101d91cac();
  return;
}



/* Entry: 101d9926c; end: 101d992bf;  */

void FUN_101d9926c(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x68) = param_1;
  *(undefined1 *)(lVar1 + 0x70) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d992c0,0,0);
  return;
}



/* Entry: 101d992c0; end: 101d99377;  */

void FUN_101d992c0(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  if (*(char *)(unaff_x22 + 0x70) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x20,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
    func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101d99348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101d99374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 101d99378; end: 101d994d7;  */

undefined8 FUN_101d99378(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  puVar1 = &UNK_1104822e0;
  func_0x000107c613fc(&UNK_1104822e0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_110482308;
  func_0x000107c613fc(&UNK_110482308,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  func_0x000107c61174();
  uVar3 = 0x60;
  func_0x000104887c7c(0x60,0,0x48,4,0xd000000000000024,0x800000010f00f2c0,&UNK_10da140e0,puVar2);
  func_0x000107c61574(puVar2);
  puVar1 = &UNK_110482330;
  func_0x000107c613fc(&UNK_110482330,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  puVar2 = &UNK_110482358;
  func_0x000107c613fc(&UNK_110482358,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_101d99578;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  uVar4 = 0;
  FUN_101d7b40c(0);
  func_0x000107c61174(param_1);
  uVar5 = 0;
  func_0x000100775264(0,1,FUN_101d99580,puVar2,uVar4);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar2);
  return uVar5;
}



/* Entry: 101d994d8; end: 101d9953b;  */

void FUN_101d994d8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101d9953c;
  plVar3[5] = lVar1;
  plVar3[6] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d97c4c,0,0);
  return;
}



/* Entry: 101d9953c; end: 101d99577;  */

void FUN_101d9953c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101d99574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101d99578; end: 101d9957f;  */

void FUN_101d99578(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101d99580; end: 101d995d7;  */

void FUN_101d99580(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d8fac0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101d995d8; end: 101d9974f;  */

int FUN_101d995d8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf9 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 6) {
      iVar2 = 4;
    }
    if (param_2 + 6 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101d99654;
        goto LAB_101d99638;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101d99638:
      return ((uint)*param_1 | uVar1 << 8) - 6;
    }
  }
LAB_101d99654:
  iVar2 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101d99750; end: 101d997fb;  */

void FUN_101d99750(void)

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



/* Entry: 101d997fc; end: 101d99843;  */

void FUN_101d997fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101d99844; end: 101d998cf;  */

void FUN_101d99844(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2b2f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da14188;
  func_0x000107c61520(&UNK_10da14188,&UNK_1104823f8);
  puRam0000000112e2b2f0 = puVar1;
  return;
}



/* Entry: 101d998d0; end: 101d99a67;  */

/* WARNING: Possible PIC construction at 0x000101d9995c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d99960) */

void FUN_101d998d0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x00010587bbd4(*(undefined8 *)(unaff_x20 + 0x18),1);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 != 0) {
    if (lRam0000000112e2b3a0 != -1) {
      func_0x000107c61568(0x112e2b3a0,FUN_101d99e04);
    }
    uVar1 = 0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010f00f440);
    func_0x0001044db3fc(0);
    func_0x0001044dac34();
    func_0x000107c5027c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 101d99a68; end: 101d99d0b;  */

undefined1  [16] FUN_101d99a68(long *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 extraout_x8;
  long extraout_x12;
  undefined *puVar7;
  long lVar8;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar8 = param_1[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar5 = (long *)((long)&lStack_60 - (extraout_x12 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar8 + 0x10))(plVar5,extraout_x8,param_1);
  plVar2 = plVar5;
  func_0x000107c605a0(plVar5,param_1,param_2);
  if (plVar2 == (long *)0x0) {
    plVar2 = param_1;
    func_0x000107c613f8(param_1,param_2,0,0);
    (**(code **)(lVar8 + 0x20))(param_2,plVar5,param_1);
  }
  else {
    (**(code **)(lVar8 + 8))(plVar5);
    plVar5 = param_1;
  }
  plVar3 = plVar2;
  func_0x000107c5ed2c();
  func_0x000107c614ac(plVar2);
  plVar2 = plVar3;
  func_0x000107c42210();
  func_0x000107c61180();
  plVar4 = plVar2;
  func_0x000107c5faec();
  plVar6 = plVar5;
  func_0x000107c61170();
  func_0x000103bcd41c();
  if (plVar4 == (long *)*plVar2 && plVar5 == (long *)plVar2[1]) {
    func_0x000107c6142c(plVar5);
LAB_101d99ba0:
    plVar2 = plVar3;
    func_0x000107c3fcb0();
    if (plVar2 < (long *)0x4) {
      plStack_50 = (long *)0x0;
      plStack_48 = (long *)0xe000000000000000;
      func_0x000107c602fc(0x18);
      func_0x000107c6142c(plStack_48);
      plStack_50 = (long *)0xd000000000000016;
      plStack_48 = (long *)0x800000010f00f3f0;
      if ((long)plVar2 < 2) {
        if (plVar2 == (long *)0x0) {
          puVar7 = (undefined *)0xe700000000000000;
          goto LAB_101d99cdc;
        }
      }
      else if (plVar2 == (long *)0x2) {
        puVar7 = (undefined *)0xeb00000000414944;
        goto LAB_101d99cdc;
      }
      puVar7 = (undefined *)0xed0000414944454d;
      goto LAB_101d99cdc;
    }
  }
  else {
    plVar6 = plVar5;
    func_0x000107c605b8();
    func_0x000107c6142c(plVar5);
    if (((ulong)plVar4 & 1) != 0) goto LAB_101d99ba0;
  }
  plVar2 = plVar3;
  func_0x000107c42210();
  func_0x000107c61180();
  plVar5 = plVar2;
  func_0x000107c5faec();
  func_0x000107c61170(plVar2);
  plStack_50 = plVar5;
  plStack_48 = plVar6;
  func_0x000107c5fb78(0x5f5f,0xe200000000000000);
  plVar2 = plVar3;
  func_0x000107c3fcb0();
  puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  plStack_58 = plVar2;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
LAB_101d99cdc:
  func_0x000107c5fb78();
  func_0x000107c61170(plVar3);
  func_0x000107c6142c(puVar7);
  auVar1._8_8_ = plStack_48;
  auVar1._0_8_ = plStack_50;
  return auVar1;
}



/* Entry: 101d99d0c; end: 101d99d4b;  */

void FUN_101d99d0c(void)

{
  FUN_101d998d0();
  return;
}



/* Entry: 101d99d4c; end: 101d99d6b;  */

void FUN_101d99d4c(void)

{
  long *plVar1;
  long *unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(*unaff_x20 + 0x18) != 0) {
    plVar1 = *(long **)(*(long *)(*unaff_x20 + 0x18) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1108b9aa8,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 101d99d6c; end: 101d99e03;  */

void FUN_101d99d6c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  lVar2 = *unaff_x20;
  if (param_3 == 0) {
    uStack_40 = 0xe700000000000000;
    uStack_48 = 0x4e574f4e4b4e55;
  }
  else {
    func_0x000107c614cc(param_3,auStack_38,auStack_50);
    FUN_101d99a68(uStack_48,uStack_40);
  }
  uVar1 = *(undefined8 *)(lVar2 + 0x18);
  func_0x000107c5fadc();
  func_0x000107c6142c(uStack_40);
  func_0x00010587bdb4(uVar1,uStack_48,1);
  func_0x000107c61170(uStack_48);
  return;
}



/* Entry: 101d99e04; end: 101d99e3f;  */

void FUN_101d99e04(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b3e90;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c564fc();
  puRam0000000112e2b3a8 = puVar1;
  return;
}



/* Entry: 101d99e40; end: 101d99e9f; -[_TtC42SCMemPlatBackupUploadMediaStepServicesImpl15SnapDocUploader init] */

void FUN_101d99e40(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemPlatBackupUploadMediaStepServicesImpl.SnapDocUploader",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d99e6c);
  (*pcVar1)();
}



/* Entry: 101d99ea0; end: 101d99f27; -[_TtC42SCMemPlatBackupUploadMediaStepServicesImpl15SnapDocUploader .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101d99ebc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d99edc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d99efc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d99ee0) */
/* WARNING: Removing unreachable block (ram,0x000101d99ec0) */
/* WARNING: Removing unreachable block (ram,0x000101d99f00) */
/* WARNING: Removing unreachable block (ram,0x0001000834e4) */
/* WARNING: Removing unreachable block (ram,0x0001000834fc) */
/* WARNING: Removing unreachable block (ram,0x0001000834f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d99ea0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e2b3b0));
  return;
}



/* Entry: 101d99f28; end: 101d99f47;  */

void FUN_101d99f28(void)

{
  func_0x000107c61168(&PTR_PTR_112803ca8);
  return;
}



/* Entry: 101d99f48; end: 101d9a0b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d99f48(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 auStack_a0 [3];
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  
  lVar5 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  puVar2 = (undefined1 *)(param_2 + 0x10);
  func_0x000107c61618();
  if (puVar2 == (undefined1 *)0x0) {
    FUN_101d9a988();
    func_0x000107c613f8(&UNK_110482600,puVar2,0,0);
    *puVar2 = 0;
    func_0x000107c61654();
  }
  else {
    func_0x0001000d224c(auStack_a0);
    lVar4 = *(long *)(lVar5 + _DAT_112ff4e28);
    func_0x000107c419e4(auStack_a0[0]);
    func_0x000107c615e8(auStack_a0[0]);
    func_0x0001000d224c(auStack_a0);
    func_0x0001000a8868(auStack_a0,uStack_88);
    if (lVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101d9a0b8);
      (*pcVar1)();
    }
    uVar3 = 0;
    func_0x000101d925f0(0);
    FUN_101d927b4(param_5,param_6,lVar4,uVar3,&PTR_DAT_110481a98);
    func_0x0001000834e4(auStack_a0);
    FUN_101d9a0b8(*(undefined8 *)(lVar5 + _DAT_112ff4e20),param_7);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 101d9a0b8; end: 101d9a21f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d9a0b8(long param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  code *pcVar7;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar4 = param_2;
  func_0x000107c5b2d0();
  func_0x000107c61180();
  if (param_2 == (undefined1 *)0x0) {
    uVar6 = 1;
    puVar4 = (undefined1 *)0x0;
  }
  else {
    puVar1 = param_2;
    func_0x000107c5faec();
    puVar5 = puVar4;
    func_0x000107c61170(param_2);
    func_0x000107c41214();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar2 = param_1;
      func_0x000107c5ee30();
      func_0x000107c61170(param_1);
      func_0x0001000d224c(&uStack_70);
      uVar3 = uStack_70;
      func_0x000107c614f0(uStack_70);
      pcVar7 = *(code **)(lStack_68 + 0x18);
      func_0x00010006c00c(lVar2,puVar5);
      (*pcVar7)(lVar2,puVar5,puVar1,puVar4,uVar3,lStack_68);
      func_0x00010006c090(lVar2,puVar5);
      func_0x00010006c090(lVar2,puVar5);
      func_0x000107c6142c(puVar4);
      func_0x000107c615e8(uStack_70);
      return;
    }
    func_0x000107c6142c();
    uVar6 = 4;
  }
  FUN_101d9a988();
  func_0x000107c613f8(&UNK_110482600,puVar4,0,0);
  *puVar4 = uVar6;
  func_0x000107c61654();
  return;
}



/* Entry: 101d9a220; end: 101d9a347;  */

void FUN_101d9a220(long param_1,undefined8 param_2,long param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  long lStack_58;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x18);
    lVar2 = *(long *)(param_3 + 0x20);
    func_0x0001000a8868(param_3,uVar1);
    pcVar4 = *(code **)(lVar2 + 0x20);
    func_0x000107c61174();
    (*pcVar4)(param_4,param_5,uVar1,lVar2);
    lStack_58 = param_1;
    func_0x000100b60084(&lStack_58);
    func_0x000107c61170(param_1);
    return;
  }
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  lVar2 = *(long *)(param_3 + 0x20);
  func_0x0001000a8868(param_3,uVar1);
  (**(code **)(lVar2 + 0x28))(param_4,param_5,param_2,uVar1,lVar2);
  FUN_101d9a988();
  puVar3 = &UNK_110482600;
  func_0x000107c613f8(&UNK_110482600,param_4,0,0);
  *param_4 = 3;
  func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar3);
  return;
}



/* Entry: 101d9a348; end: 101d9a3bf;  */

/* WARNING: Possible PIC construction at 0x000101d9a3a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d9a3a8) */

void FUN_101d9a348(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101d9a3c0; end: 101d9a3c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101d9a3c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [40];
  
  lVar2 = param_1;
  func_0x000107c5b2d0();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5faec();
    uVar14 = param_2;
    func_0x000107c61170(lVar2);
    lVar2 = param_1;
    func_0x000107c5b1b0();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar4 = lVar2;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar2);
      func_0x0001000d224c(&puStack_b8);
      uVar5 = uStack_b0;
      puVar7 = puStack_b8;
      puVar8 = puStack_b8;
      func_0x000107c614f0(puStack_b8);
      lVar2 = lVar4;
      uVar15 = uVar14;
      func_0x000103fbfb2c(lVar4,uVar14,puVar8,uVar5);
      func_0x000107c615e8(puVar7);
      if (((uint)uVar15 & 0xff) == 1) {
        auStack_88[0] = (undefined1)lVar2;
        uVar5 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar5 != 0) {
          FUN_101d58f10();
          func_0x000107c61658(auStack_88,&UNK_11072c980,uVar5);
        }
        func_0x000107c6142c(param_2);
        puVar6 = (undefined1 *)0x112e28b20;
        func_0x0001000285a8(0x112e28b20,&UNK_10da10d70);
        FUN_101d9a988();
        puVar7 = &UNK_110482600;
        func_0x000107c613f8(&UNK_110482600,puVar6,0,0);
        *puVar6 = 2;
        puVar18 = puVar7;
        func_0x00010488904c();
        func_0x000107c614ac(puVar7);
      }
      else {
        func_0x000103bcda24(0);
        func_0x000107c610f8();
        uVar5 = 1;
        func_0x000103bcd828();
        puVar8 = PTR_PTR_1126b25b8;
        func_0x000107c610f8();
        lVar9 = lVar3;
        func_0x000107c5fadc(lVar3,param_2);
        func_0x000107c46814();
        func_0x000107c61170(lVar9);
        func_0x0001000d224c(&puStack_b8);
        puVar7 = puStack_b8;
        if (puStack_b8 == (undefined *)0x0) {
          puVar6 = (undefined1 *)0x112e2b418;
          func_0x0001000285a8(0x112e2b418,&UNK_10da142a8);
          FUN_101d9a988();
          puVar7 = &UNK_110482600;
          func_0x000107c613f8(&UNK_110482600,puVar6,0,0);
          *puVar6 = 0;
          puVar18 = puVar7;
          func_0x00010488904c();
          func_0x000107c614ac(puVar7);
        }
        else {
          lVar9 = unaff_x20 + _DAT_112e2b3e0;
          uVar16 = *(undefined8 *)(lVar9 + 0x18);
          lVar10 = *(long *)(lVar9 + 0x20);
          func_0x0001000a8868(lVar9,uVar16);
          (**(code **)(lVar10 + 0x18))(lVar3,param_2,uVar16,lVar10);
          func_0x0001000285a8(0x112e2b420,&UNK_10da142b0);
          func_0x000107c613fc();
          lVar10 = 0;
          func_0x00010095c380();
          func_0x000107c5d748(puStack_b8);
          puVar11 = puStack_b8;
          func_0x000107c61180();
          FUN_101d9aa14(lVar9,auStack_88);
          puVar18 = &UNK_110482538;
          func_0x000107c613fc(&UNK_110482538,0x50,7);
          FUN_101d9aa58(auStack_88,puVar18 + 0x10);
          *(long *)(puVar18 + 0x38) = lVar3;
          *(undefined8 *)(puVar18 + 0x40) = param_2;
          *(long *)(puVar18 + 0x48) = lVar10;
          uStack_98 = 0x101d9aa70;
          puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_b0 = 0x42000000;
          pcStack_a8 = FUN_101d9a348;
          puStack_a0 = &UNK_110482550;
          ppuVar12 = &puStack_b8;
          puStack_90 = puVar18;
          func_0x000107c60bc4(ppuVar12);
          puVar18 = puStack_90;
          func_0x000107c61434(param_2);
          func_0x000107c6157c(lVar10);
          func_0x000107c61574(puVar18);
          func_0x0001000d224c(&puStack_b8);
          puVar18 = puStack_b8;
          func_0x000107c5dc64(puVar11);
          func_0x000107c615e8(puVar18);
          func_0x000107c615e8(puVar7);
          func_0x000107c60bd0(ppuVar12);
          func_0x000107c61170(puVar11);
          puVar18 = *(undefined **)(lVar10 + 0x10);
          func_0x000107c6157c(puVar18);
          func_0x000107c61574(lVar10);
        }
        func_0x0001000d224c(&puStack_b8);
        puVar1 = puStack_b8;
        puVar7 = &UNK_1104824c0;
        func_0x000107c613fc(&UNK_1104824c0,0x18,7);
        func_0x000107c61614(puVar7 + 0x10);
        uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112e2b3d8);
        uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112e2b3b0);
        puVar11 = &UNK_1104824e8;
        func_0x000107c613fc(&UNK_1104824e8,0x40,7);
        *(undefined **)(puVar11 + 0x10) = puVar7;
        *(undefined8 *)(puVar11 + 0x18) = uVar17;
        *(undefined8 *)(puVar11 + 0x20) = uVar16;
        *(long *)(puVar11 + 0x28) = lVar3;
        *(undefined8 *)(puVar11 + 0x30) = param_2;
        *(long *)(puVar11 + 0x38) = param_1;
        func_0x000107c6157c(uVar16);
        func_0x000107c6157c(uVar17);
        func_0x000107c61174();
        puVar13 = puVar1;
        func_0x00010488a340(puVar1,1,0x101d9a9c8,puVar11);
        func_0x000107c61574(puVar18);
        func_0x000107c615e8(puVar1);
        func_0x000107c61574(puVar11);
        puVar7 = &UNK_110482510;
        func_0x000107c613fc(&UNK_110482510,0x18,7);
        *(long *)(puVar7 + 0x10) = param_1;
        uVar16 = 0;
        FUN_101d7b40c(0);
        func_0x000107c61174(param_1);
        puVar18 = (undefined *)0x0;
        func_0x000100775264(0,1,FUN_101d9a9e8,puVar7,uVar16);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(puVar8);
        func_0x000107c61574(puVar13);
        func_0x000107c61574(puVar7);
        func_0x000101d58f7c(lVar2,uVar15);
      }
      func_0x00010006c090(lVar4,uVar14);
      return puVar18;
    }
    func_0x000107c6142c(param_2);
  }
  puVar6 = (undefined1 *)0x112e28b20;
  func_0x0001000285a8(0x112e28b20,&UNK_10da10d70);
  FUN_101d9a988();
  puVar7 = &UNK_110482600;
  func_0x000107c613f8(&UNK_110482600,puVar6,0,0);
  *puVar6 = 0;
  puVar8 = puVar7;
  func_0x00010488904c();
  func_0x000107c614ac(puVar7);
  return puVar8;
}



/* Entry: 101d9a3c4; end: 101d9a403; -[_TtC42SCMemPlatBackupUploadMediaStepServicesImpl15SnapDocUploader isValidMediaData:mediaReference:] */

undefined8 FUN_101d9a3c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c5ee30(param_3);
  func_0x00010006c090();
  func_0x000107c61170(uVar1);
  return 1;
}



/* Entry: 101d9a404; end: 101d9a987;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101d9a404(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [40];
  
  lVar2 = param_1;
  func_0x000107c5b2d0();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5faec();
    uVar14 = param_2;
    func_0x000107c61170(lVar2);
    lVar2 = param_1;
    func_0x000107c5b1b0();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar4 = lVar2;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar2);
      func_0x0001000d224c(&puStack_b8);
      uVar5 = uStack_b0;
      puVar7 = puStack_b8;
      puVar8 = puStack_b8;
      func_0x000107c614f0(puStack_b8);
      lVar2 = lVar4;
      uVar15 = uVar14;
      func_0x000103fbfb2c(lVar4,uVar14,puVar8,uVar5);
      func_0x000107c615e8(puVar7);
      if (((uint)uVar15 & 0xff) == 1) {
        auStack_88[0] = (undefined1)lVar2;
        uVar5 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar5 != 0) {
          FUN_101d58f10();
          func_0x000107c61658(auStack_88,&UNK_11072c980,uVar5);
        }
        func_0x000107c6142c(param_2);
        puVar6 = (undefined1 *)0x112e28b20;
        func_0x0001000285a8(0x112e28b20,&UNK_10da10d70);
        FUN_101d9a988();
        puVar7 = &UNK_110482600;
        func_0x000107c613f8(&UNK_110482600,puVar6,0,0);
        *puVar6 = 2;
        puVar18 = puVar7;
        func_0x00010488904c();
        func_0x000107c614ac(puVar7);
      }
      else {
        func_0x000103bcda24(0);
        func_0x000107c610f8();
        uVar5 = 1;
        func_0x000103bcd828();
        puVar8 = PTR_PTR_1126b25b8;
        func_0x000107c610f8();
        lVar9 = lVar3;
        func_0x000107c5fadc(lVar3,param_2);
        func_0x000107c46814();
        func_0x000107c61170(lVar9);
        func_0x0001000d224c(&puStack_b8);
        puVar7 = puStack_b8;
        if (puStack_b8 == (undefined *)0x0) {
          puVar6 = (undefined1 *)0x112e2b418;
          func_0x0001000285a8(0x112e2b418,&UNK_10da142a8);
          FUN_101d9a988();
          puVar7 = &UNK_110482600;
          func_0x000107c613f8(&UNK_110482600,puVar6,0,0);
          *puVar6 = 0;
          puVar18 = puVar7;
          func_0x00010488904c();
          func_0x000107c614ac(puVar7);
        }
        else {
          lVar9 = unaff_x20 + _DAT_112e2b3e0;
          uVar16 = *(undefined8 *)(lVar9 + 0x18);
          lVar10 = *(long *)(lVar9 + 0x20);
          func_0x0001000a8868(lVar9,uVar16);
          (**(code **)(lVar10 + 0x18))(lVar3,param_2,uVar16,lVar10);
          func_0x0001000285a8(0x112e2b420,&UNK_10da142b0);
          func_0x000107c613fc();
          lVar10 = 0;
          func_0x00010095c380();
          func_0x000107c5d748(puStack_b8);
          puVar11 = puStack_b8;
          func_0x000107c61180();
          FUN_101d9aa14(lVar9,auStack_88);
          puVar18 = &UNK_110482538;
          func_0x000107c613fc(&UNK_110482538,0x50,7);
          FUN_101d9aa58(auStack_88,puVar18 + 0x10);
          *(long *)(puVar18 + 0x38) = lVar3;
          *(undefined8 *)(puVar18 + 0x40) = param_2;
          *(long *)(puVar18 + 0x48) = lVar10;
          uStack_98 = 0x101d9aa70;
          puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_b0 = 0x42000000;
          pcStack_a8 = FUN_101d9a348;
          puStack_a0 = &UNK_110482550;
          ppuVar12 = &puStack_b8;
          puStack_90 = puVar18;
          func_0x000107c60bc4(ppuVar12);
          puVar18 = puStack_90;
          func_0x000107c61434(param_2);
          func_0x000107c6157c(lVar10);
          func_0x000107c61574(puVar18);
          func_0x0001000d224c(&puStack_b8);
          puVar18 = puStack_b8;
          func_0x000107c5dc64(puVar11);
          func_0x000107c615e8(puVar18);
          func_0x000107c615e8(puVar7);
          func_0x000107c60bd0(ppuVar12);
          func_0x000107c61170(puVar11);
          puVar18 = *(undefined **)(lVar10 + 0x10);
          func_0x000107c6157c(puVar18);
          func_0x000107c61574(lVar10);
        }
        func_0x0001000d224c(&puStack_b8);
        puVar1 = puStack_b8;
        puVar7 = &UNK_1104824c0;
        func_0x000107c613fc(&UNK_1104824c0,0x18,7);
        func_0x000107c61614(puVar7 + 0x10);
        uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112e2b3d8);
        uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112e2b3b0);
        puVar11 = &UNK_1104824e8;
        func_0x000107c613fc(&UNK_1104824e8,0x40,7);
        *(undefined **)(puVar11 + 0x10) = puVar7;
        *(undefined8 *)(puVar11 + 0x18) = uVar17;
        *(undefined8 *)(puVar11 + 0x20) = uVar16;
        *(long *)(puVar11 + 0x28) = lVar3;
        *(undefined8 *)(puVar11 + 0x30) = param_2;
        *(long *)(puVar11 + 0x38) = param_1;
        func_0x000107c6157c(uVar16);
        func_0x000107c6157c(uVar17);
        func_0x000107c61174();
        puVar13 = puVar1;
        func_0x00010488a340(puVar1,1,0x101d9a9c8,puVar11);
        func_0x000107c61574(puVar18);
        func_0x000107c615e8(puVar1);
        func_0x000107c61574(puVar11);
        puVar7 = &UNK_110482510;
        func_0x000107c613fc(&UNK_110482510,0x18,7);
        *(long *)(puVar7 + 0x10) = param_1;
        uVar16 = 0;
        FUN_101d7b40c(0);
        func_0x000107c61174(param_1);
        puVar18 = (undefined *)0x0;
        func_0x000100775264(0,1,FUN_101d9a9e8,puVar7,uVar16);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(puVar8);
        func_0x000107c61574(puVar13);
        func_0x000107c61574(puVar7);
        func_0x000101d58f7c(lVar2,uVar15);
      }
      func_0x00010006c090(lVar4,uVar14);
      return puVar18;
    }
    func_0x000107c6142c(param_2);
  }
  puVar6 = (undefined1 *)0x112e28b20;
  func_0x0001000285a8(0x112e28b20,&UNK_10da10d70);
  FUN_101d9a988();
  puVar7 = &UNK_110482600;
  func_0x000107c613f8(&UNK_110482600,puVar6,0,0);
  *puVar6 = 0;
  puVar8 = puVar7;
  func_0x00010488904c();
  func_0x000107c614ac(puVar7);
  return puVar8;
}



/* Entry: 101d9a988; end: 101d9a9e7;  */

void FUN_101d9a988(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2b410 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da14350;
  func_0x000107c61520(&UNK_10da14350,&UNK_110482600);
  puRam0000000112e2b410 = puVar1;
  return;
}



/* Entry: 101d9a9e8; end: 101d9aa13;  */

void FUN_101d9a9e8(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  return;
}



/* Entry: 101d9aa14; end: 101d9aa57;  */

long FUN_101d9aa14(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101d9aa58; end: 101d9ac13;  */

undefined8 * FUN_101d9aa58(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 101d9ac14; end: 101d9acbf;  */

void FUN_101d9ac14(void)

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



/* Entry: 101d9acc0; end: 101d9acfb;  */

void FUN_101d9acc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101d9acfc; end: 101d9ad3b;  */

void FUN_101d9acfc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2b450 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da14328;
  func_0x000107c61520(&UNK_10da14328,&UNK_110482600);
  puRam0000000112e2b450 = puVar1;
  return;
}



/* Entry: 101d9ad3c; end: 101d9ad9b; -[_TtC42SCMemPlatBackupUploadMediaStepServicesImpl17ThumbnailUploader init] */

void FUN_101d9ad3c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemPlatBackupUploadMediaStepServicesImpl.ThumbnailUploader",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d9ad68);
  (*pcVar1)();
}



/* Entry: 101d9ad9c; end: 101d9ae43; -[_TtC42SCMemPlatBackupUploadMediaStepServicesImpl17ThumbnailUploader .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101d9adb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d9add8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d9adf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d9ae18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d9adfc) */
/* WARNING: Removing unreachable block (ram,0x000101d9addc) */
/* WARNING: Removing unreachable block (ram,0x000101d9adbc) */
/* WARNING: Removing unreachable block (ram,0x000101d9ae1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d9ad9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e2b458));
  return;
}



/* Entry: 101d9ae44; end: 101d9ae63;  */

void FUN_101d9ae44(void)

{
  func_0x000107c61168(&PTR_PTR_112803d98);
  return;
}



/* Entry: 101d9ae64; end: 101d9ae7b;  */

void FUN_101d9ae64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d9ae7c,0,0);
  return;
}



/* Entry: 101d9ae7c; end: 101d9af3f;  */

void FUN_101d9ae7c(void)

{
  undefined1 *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  puVar1 = (undefined1 *)(lVar4 + 0x10);
  func_0x000107c61618();
  *(undefined1 **)(unaff_x22 + 0x38) = puVar1;
  if (puVar1 != (undefined1 *)0x0) {
    plVar2 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x40) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_101d9af40;
    plVar2[5] = *(long *)(unaff_x22 + 0x30);
    plVar2[6] = (long)puVar1;
    lVar4 = 0;
    func_0x000107c5ede0();
    plVar2[7] = lVar4;
    lVar4 = *(long *)(lVar4 + -8);
    plVar2[8] = lVar4;
    uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar2[9] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101d9b064,0,0);
    return;
  }
  func_0x000101d9c764();
  func_0x000107c613f8(&UNK_1104827b0,puVar1,0,0);
  *puVar1 = 0;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101d9af3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d9af40; end: 101d9b063;  */

void FUN_101d9af40(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x48) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    uVar1 = 0x101d9af9c;
  }
  else {
    uVar1 = 0x101d9afd0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 101d9b064; end: 101d9b147;  */

void FUN_101d9b064(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x22;
  
  puVar3 = *(undefined1 **)(unaff_x22 + 0x28);
  func_0x000107c5b2d0();
  func_0x000107c61180();
  if (puVar3 != (undefined1 *)0x0) {
    puVar4 = puVar3;
    func_0x000107c5faec();
    func_0x000107c61170(puVar3);
    *(undefined1 **)(unaff_x22 + 0x50) = puVar4;
    *(long *)(unaff_x22 + 0x58) = param_2;
    plVar5 = (long *)0xc0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x60) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_101d9b148;
    lVar6 = *(long *)(unaff_x22 + 0x48);
    lVar1 = *(long *)(unaff_x22 + 0x28);
    lVar2 = *(long *)(unaff_x22 + 0x30);
    plVar5[7] = (long)puVar4;
    plVar5[8] = param_2;
    plVar5[5] = lVar2;
    plVar5[6] = lVar1;
    plVar5[4] = lVar6;
    lVar6 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar7 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar5[9] = uVar7;
    lVar6 = 0;
    func_0x000107c5ede0();
    plVar5[10] = lVar6;
    lVar6 = *(long *)(lVar6 + -8);
    plVar5[0xb] = lVar6;
    uVar9 = *(long *)(lVar6 + 0x40) + 0xf;
    uVar8 = uVar9 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar5[0xc] = uVar8;
    uVar9 = uVar9 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar5[0xd] = uVar9;
    plVar10 = (long *)0x70;
    func_0x000107c615b8();
    plVar5[0xe] = (long)plVar10;
    *plVar10 = (long)plVar5;
    plVar10[1] = (long)FUN_101d9b498;
    plVar10[5] = lVar1;
    plVar10[6] = lVar2;
    plVar10[4] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101d9b9f0,0,0);
    return;
  }
  func_0x000101d9c764();
  func_0x000107c613f8(&UNK_1104827b0,puVar3,0,0);
  *puVar3 = 1;
  uVar11 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c61654();
  func_0x000107c615c0(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000101d9b144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d9b148; end: 101d9b1ab;  */

void FUN_101d9b148(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101d9b1ac;
  }
  else {
    func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x58));
    pcVar1 = FUN_101d9b310;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101d9b1ac; end: 101d9b30f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d9b1ac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  lVar6 = *(long *)(unaff_x22 + 0x68);
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar1 = *(long *)(unaff_x22 + 0x18);
  func_0x000107c614f0(uVar5);
  func_0x000107c5ed70();
  (**(code **)(lVar1 + 8))();
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar1 = *(long *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c6142c(param_2);
  func_0x000107c615e8(uVar5);
  func_0x000107c6142c(uVar4);
  (**(code **)(lVar1 + 8))(uVar2,uVar7);
  if (lVar6 != 0) {
    *(long *)(unaff_x22 + 0x20) = lVar6;
    func_0x000107c614b0(lVar6);
    uVar5 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    uVar3 = unaff_x22 + 0x70;
    func_0x000107c6147c(uVar3,unaff_x22 + 0x20,uVar5,&UNK_1104827b0,6);
    if (((uVar3 & 1) == 0) || (2 < *(byte *)(unaff_x22 + 0x70) - 2)) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
      func_0x000107c61654();
      func_0x000107c615c0(uVar5);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_101d9b2f0;
    }
    func_0x000107c614ac(lVar6);
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x48));
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_101d9b2f0:
                    /* WARNING: Could not recover jumptable at 0x000101d9b30c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101d9b310; end: 101d9b3c7;  */

void FUN_101d9b310(void)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  func_0x000107c614b0(uVar3);
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar1 = unaff_x22 + 0x70;
  func_0x000107c6147c(lVar1,(undefined8 *)(unaff_x22 + 0x20),uVar2,&UNK_1104827b0,6);
  if (((int)lVar1 == 0) || (2 < *(byte *)(unaff_x22 + 0x70) - 2)) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
    func_0x000107c61654();
    func_0x000107c615c0(uVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    func_0x000107c614ac(uVar3);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x48));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101d9b3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101d9b3c8; end: 101d9b497;  */

void FUN_101d9b3c8(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(long *)(unaff_x22 + 0x28) = param_2;
  *(long *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x48) = uVar1;
  lVar2 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x50) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar4;
  plVar5 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101d9b498;
  plVar5[5] = param_3;
  plVar5[6] = param_2;
  plVar5[4] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d9b9f0,0,0);
  return;
}



/* Entry: 101d9b498; end: 101d9b4f3;  */

void FUN_101d9b498(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x78) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101d9b4f4;
  }
  else {
    pcVar1 = FUN_101d9b92c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101d9b4f4; end: 101d9b5e3;  */

void FUN_101d9b4f4(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  code *pcVar9;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar7 = uVar6;
  (**(code **)(lVar3 + 0x30))(uVar6,1,uVar1);
  if ((int)uVar7 == 1) {
    func_0x0001000293e4(uVar6);
    plVar2 = (long *)0xb0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x80) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_101d9b5e4;
    lVar3 = *(long *)(unaff_x22 + 0x28);
    plVar2[7] = *(long *)(unaff_x22 + 0x30);
    plVar2[8] = lVar3;
    lVar3 = 0;
    func_0x000107c5ede0();
    plVar2[9] = lVar3;
    lVar3 = *(long *)(lVar3 + -8);
    plVar2[10] = lVar3;
    uVar5 = *(long *)(lVar3 + 0x40) + 0xf;
    uVar4 = uVar5 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar2[0xb] = uVar4;
    uVar5 = uVar5 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar2[0xc] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101d9bca4,0,0);
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x20);
  pcVar9 = *(code **)(lVar3 + 0x20);
  (*pcVar9)(uVar7,uVar6,uVar1);
  (*pcVar9)(uVar8,uVar7,uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000101d9b5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d9b5e4; end: 101d9b673;  */

void FUN_101d9b5e4(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar2 = *unaff_x22;
  lVar4 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x88) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x80));
  if (unaff_x20 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + 0x60);
    uVar3 = *(undefined8 *)(lVar2 + 0x48);
    func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x68));
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101d9b64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d9b674,0,0);
  return;
}



/* Entry: 101d9b674; end: 101d9b743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d9b674(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  plVar1 = (long *)(*(long *)(unaff_x22 + 0x28) + _DAT_112e2b490);
  func_0x0001000a8868(plVar1,plVar1[3]);
  lVar3 = *plVar1;
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101d9b6e8;
  lVar2 = *(long *)(unaff_x22 + 0x88);
  plVar1[6] = 0;
  plVar1[7] = lVar3;
  plVar1[4] = lVar2;
  plVar1[5] = 0x101d94fb0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d952b8,0,0);
  return;
}



/* Entry: 101d9b744; end: 101d9b7f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d9b744(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  FUN_101d96748(uVar2,uVar1,uVar4);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar2;
  func_0x000107c615e8(uVar5);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa8) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101d9b7f8;
                    /* WARNING: Could not recover jumptable at 0x000101d9b7f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101d8fd78(plVar3,*(undefined8 *)(unaff_x22 + 0x60));
  return;
}



/* Entry: 101d9b7f8; end: 101d9b85b;  */

void FUN_101d9b7f8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xa0);
  *(long *)(lVar3 + 0xb0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xa8));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_101d9b8b4;
  }
  else {
    pcVar2 = FUN_101d9b97c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101d9b85c; end: 101d9b8b3;  */

void FUN_101d9b85c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x88));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101d9b8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d9b8b4; end: 101d9b92b;  */

void FUN_101d9b8b4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x88));
  (**(code **)(lVar1 + 0x20))(uVar4,uVar2,uVar3);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101d9b928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d9b92c; end: 101d9b97b;  */

void FUN_101d9b92c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101d9b978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d9b97c; end: 101d9b9d3;  */

void FUN_101d9b97c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x88));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101d9b9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d9b9d4; end: 101d9b9ef;  */

void FUN_101d9b9d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d9b9f0,0,0);
  return;
}



/* Entry: 101d9b9f0; end: 101d9bb1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d9b9f0(undefined8 param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar2 = *(ulong *)(unaff_x22 + 0x28);
  func_0x000107c5c928();
  func_0x000107c61180();
  if (uVar2 != 0) {
    uVar3 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
    *(ulong *)(unaff_x22 + 0x38) = uVar3;
    *(ulong *)(unaff_x22 + 0x40) = param_2;
    uVar2 = uVar3 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar2 = param_2 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      func_0x0001000d224c(unaff_x22 + 0x10);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
      lVar5 = *(long *)(unaff_x22 + 0x18);
      *(undefined8 *)(unaff_x22 + 0x48) = uVar7;
      func_0x000107c614f0(uVar7);
      piVar6 = *(int **)(lVar5 + 0x30);
      iVar1 = *piVar6;
      plVar4 = (long *)(ulong)(uint)piVar6[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x50) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_101d9bb20;
                    /* WARNING: Could not recover jumptable at 0x000101d9bad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar6))(FUN_101d9c154,0,uVar7,lVar5);
      return;
    }
    func_0x000107c6142c(param_2);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar5 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(uVar7,1,1,lVar5);
                    /* WARNING: Could not recover jumptable at 0x000101d9bb1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


