/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102de72ac; end: 102de732b;  */

void FUN_102de72ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar2 = &uStack_60;
  func_0x0001000285a8(0x112f19898,&UNK_10db50270);
  uVar1 = 0;
  func_0x000107c5ea54(0);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  func_0x000107c5ea50();
  func_0x000107c5ea30(&uStack_60,uVar1,0x102de7368,0);
  *param_1 = puVar2;
  return;
}



/* Entry: 102de732c; end: 102de7357;  */

void FUN_102de732c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102de6e8c();
  func_0x000107c5ea7c(param_1,uVar1);
  return;
}



/* Entry: 102de7358; end: 102de7393;  */

undefined1  [16] FUN_102de7358(void)

{
  return ZEXT816(0x1105d3b40);
}



/* Entry: 102de7394; end: 102de73d3;  */

void FUN_102de7394(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19b40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db511a0;
  func_0x000107c61520(&UNK_10db511a0,&UNK_1105d3c08);
  puRam0000000112f19b40 = puVar1;
  return;
}



/* Entry: 102de73d4; end: 102de73d7;  */

void FUN_102de73d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19b48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db511c8;
  func_0x000107c61520(&UNK_10db511c8,&UNK_1105d3c08);
  puRam0000000112f19b48 = puVar1;
  return;
}



/* Entry: 102de73d8; end: 102de7417;  */

void FUN_102de73d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19b48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db511c8;
  func_0x000107c61520(&UNK_10db511c8,&UNK_1105d3c08);
  puRam0000000112f19b48 = puVar1;
  return;
}



/* Entry: 102de7418; end: 102de7427;  */

void FUN_102de7418(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e731264,1);
  return;
}



/* Entry: 102de7428; end: 102de7467;  */

void FUN_102de7428(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_102de7468();
  uStack_30 = param_2;
  uStack_28 = param_1;
  func_0x000107c614f4(&uStack_30,
                      PTR___s10AppIntents0A6IntentPAAE16parameterSummaryQrvpZQOMQ_110345f50,1);
  return;
}



/* Entry: 102de7468; end: 102de74a7;  */

void FUN_102de7468(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19b50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db51108;
  func_0x000107c61520(&UNK_10db51108,&UNK_1105d3c08);
  puRam0000000112f19b50 = puVar1;
  return;
}



/* Entry: 102de74a8; end: 102de760f;  */

void FUN_102de74a8(void)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ef14();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5fad8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar4 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0;
  func_0x000107c5ed3c(0);
  func_0x000100028750();
  func_0x000100028790(uVar2,0x113805028);
  func_0x000107c5fad4(lVar4,0x70614d206e65704f,0xe800000000000000);
  func_0x000107c5ef04(puVar3);
  lVar1 = 0;
  func_0x000107c5ed38();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = lVar4 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x68))
            (lVar1,*(undefined4 *)
                    PTR___s10Foundation23LocalizedStringResourceV17BundleDescriptionO4mainyA2EmFWC_110345330
            );
  func_0x000107c5ed40(uVar2,lVar4,0x74726f6853707041,0xec00000073747563,puVar3,lVar1,0,0,0x100);
  return;
}



/* Entry: 102de7610; end: 102de767f;  */

void FUN_102de7610(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  if (lRam0000000112f19b58 != -1) {
    func_0x000107c61568(0x112f19b58,FUN_102de74a8);
  }
  lVar1 = 0;
  func_0x000107c5ed3c();
  lVar2 = lVar1;
  func_0x000100028790();
                    /* WARNING: Could not recover jumptable at 0x000102de7664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,lVar2,lVar1);
  return;
}



/* Entry: 102de7680; end: 102de7687;  */

undefined8 FUN_102de7680(void)

{
  return 1;
}



/* Entry: 102de7688; end: 102de76ef;  */

void FUN_102de7688(void)

{
  func_0x000107c5ea6c();
  return;
}



/* Entry: 102de76f0; end: 102de770b;  */

void FUN_102de76f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de770c,0,0);
  return;
}



/* Entry: 102de770c; end: 102de77db;  */

void FUN_102de770c(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x22;
  
  func_0x000107c5ea2c(unaff_x22 + 0x10);
  piVar2 = *(int **)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x38);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102de7780;
                    /* WARNING: Could not recover jumptable at 0x000102de777c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(1);
  return;
}



/* Entry: 102de77dc; end: 102de7837;  */

void FUN_102de77dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c5eaa0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102de7834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102de7838; end: 102de787f;  */

void FUN_102de7838(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102de787c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102de7880; end: 102de78ff;  */

void FUN_102de7880(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar2 = &uStack_60;
  func_0x0001000285a8(0x112f19898,&UNK_10db50270);
  uVar1 = 0;
  func_0x000107c5ea54(0);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  func_0x000107c5ea50();
  func_0x000107c5ea30(&uStack_60,uVar1,0x102de793c,0);
  *param_1 = puVar2;
  return;
}



/* Entry: 102de7900; end: 102de792b;  */

void FUN_102de7900(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102de7468();
  func_0x000107c5ea7c(param_1,uVar1);
  return;
}



/* Entry: 102de792c; end: 102de7967;  */

undefined1  [16] FUN_102de792c(void)

{
  return ZEXT816(0x1105d3c08);
}



/* Entry: 102de7968; end: 102de79a7;  */

void FUN_102de7968(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19b60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db512b0;
  func_0x000107c61520(&UNK_10db512b0,&UNK_1105d3cd0);
  puRam0000000112f19b60 = puVar1;
  return;
}



/* Entry: 102de79a8; end: 102de79ab;  */

void FUN_102de79a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19b68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db512d8;
  func_0x000107c61520(&UNK_10db512d8,&UNK_1105d3cd0);
  puRam0000000112f19b68 = puVar1;
  return;
}



/* Entry: 102de79ac; end: 102de79eb;  */

void FUN_102de79ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19b68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db512d8;
  func_0x000107c61520(&UNK_10db512d8,&UNK_1105d3cd0);
  puRam0000000112f19b68 = puVar1;
  return;
}



/* Entry: 102de79ec; end: 102de79fb;  */

void FUN_102de79ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e7312a8,1);
  return;
}



/* Entry: 102de79fc; end: 102de7a3b;  */

void FUN_102de79fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_102de7a3c();
  uStack_30 = param_2;
  uStack_28 = param_1;
  func_0x000107c614f4(&uStack_30,
                      PTR___s10AppIntents0A6IntentPAAE16parameterSummaryQrvpZQOMQ_110345f50,1);
  return;
}



/* Entry: 102de7a3c; end: 102de7a7b;  */

void FUN_102de7a3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19b70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db51218;
  func_0x000107c61520(&UNK_10db51218,&UNK_1105d3cd0);
  puRam0000000112f19b70 = puVar1;
  return;
}



/* Entry: 102de7a7c; end: 102de7bef;  */

void FUN_102de7a7c(void)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ef14();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5fad8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar4 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0;
  func_0x000107c5ed3c(0);
  func_0x000100028750();
  func_0x000100028790(uVar2,0x113805040);
  func_0x000107c5fad4(lVar4,0x6d654d206e65704f,0xed0000736569726f);
  func_0x000107c5ef04(puVar3);
  lVar1 = 0;
  func_0x000107c5ed38();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = lVar4 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x68))
            (lVar1,*(undefined4 *)
                    PTR___s10Foundation23LocalizedStringResourceV17BundleDescriptionO4mainyA2EmFWC_110345330
            );
  func_0x000107c5ed40(uVar2,lVar4,0x74726f6853707041,0xec00000073747563,puVar3,lVar1,0,0,0x100);
  return;
}



/* Entry: 102de7bf0; end: 102de7c5f;  */

void FUN_102de7bf0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  if (lRam0000000112f19b78 != -1) {
    func_0x000107c61568(0x112f19b78,FUN_102de7a7c);
  }
  lVar1 = 0;
  func_0x000107c5ed3c();
  lVar2 = lVar1;
  func_0x000100028790();
                    /* WARNING: Could not recover jumptable at 0x000102de7c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,lVar2,lVar1);
  return;
}



/* Entry: 102de7c60; end: 102de7c67;  */

undefined8 FUN_102de7c60(void)

{
  return 1;
}



/* Entry: 102de7c68; end: 102de7ccf;  */

void FUN_102de7c68(void)

{
  func_0x000107c5ea6c();
  return;
}



/* Entry: 102de7cd0; end: 102de7ceb;  */

void FUN_102de7cd0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de7cec,0,0);
  return;
}



/* Entry: 102de7cec; end: 102de7dbb;  */

void FUN_102de7cec(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x22;
  
  func_0x000107c5ea2c(unaff_x22 + 0x10);
  piVar2 = *(int **)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x38);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102de7d60;
                    /* WARNING: Could not recover jumptable at 0x000102de7d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(2);
  return;
}



/* Entry: 102de7dbc; end: 102de7e17;  */

void FUN_102de7dbc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c5eaa0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102de7e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102de7e18; end: 102de7e5f;  */

void FUN_102de7e18(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102de7e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102de7e60; end: 102de7edf;  */

void FUN_102de7e60(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar2 = &uStack_60;
  func_0x0001000285a8(0x112f19898,&UNK_10db50270);
  uVar1 = 0;
  func_0x000107c5ea54(0);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  func_0x000107c5ea50();
  func_0x000107c5ea30(&uStack_60,uVar1,0x102de7f1c,0);
  *param_1 = puVar2;
  return;
}



/* Entry: 102de7ee0; end: 102de7f0b;  */

void FUN_102de7ee0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102de7a3c();
  func_0x000107c5ea7c(param_1,uVar1);
  return;
}



/* Entry: 102de7f0c; end: 102de7f47;  */

undefined1  [16] FUN_102de7f0c(void)

{
  return ZEXT816(0x1105d3cd0);
}



/* Entry: 102de7f48; end: 102de7f87;  */

void FUN_102de7f48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19b80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db513c0;
  func_0x000107c61520(&UNK_10db513c0,&UNK_1105d3d98);
  puRam0000000112f19b80 = puVar1;
  return;
}



/* Entry: 102de7f88; end: 102de7f8b;  */

void FUN_102de7f88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19b88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db513e8;
  func_0x000107c61520(&UNK_10db513e8,&UNK_1105d3d98);
  puRam0000000112f19b88 = puVar1;
  return;
}



/* Entry: 102de7f8c; end: 102de7fcb;  */

void FUN_102de7f8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19b88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db513e8;
  func_0x000107c61520(&UNK_10db513e8,&UNK_1105d3d98);
  puRam0000000112f19b88 = puVar1;
  return;
}



/* Entry: 102de7fcc; end: 102de7fdb;  */

void FUN_102de7fcc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e7312ec,1);
  return;
}



/* Entry: 102de7fdc; end: 102de801b;  */

void FUN_102de7fdc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_102de801c();
  uStack_30 = param_2;
  uStack_28 = param_1;
  func_0x000107c614f4(&uStack_30,
                      PTR___s10AppIntents0A6IntentPAAE16parameterSummaryQrvpZQOMQ_110345f50,1);
  return;
}



/* Entry: 102de801c; end: 102de805b;  */

void FUN_102de801c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19b90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db51328;
  func_0x000107c61520(&UNK_10db51328,&UNK_1105d3d98);
  puRam0000000112f19b90 = puVar1;
  return;
}



/* Entry: 102de805c; end: 102de81cf;  */

void FUN_102de805c(void)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ef14();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5fad8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar4 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0;
  func_0x000107c5ed3c(0);
  func_0x000100028750();
  func_0x000100028790(uVar2,0x113805058);
  func_0x000107c5fad4(lVar4,0x6f7053206e65704f,0xee00746867696c74);
  func_0x000107c5ef04(puVar3);
  lVar1 = 0;
  func_0x000107c5ed38();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = lVar4 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x68))
            (lVar1,*(undefined4 *)
                    PTR___s10Foundation23LocalizedStringResourceV17BundleDescriptionO4mainyA2EmFWC_110345330
            );
  func_0x000107c5ed40(uVar2,lVar4,0x74726f6853707041,0xec00000073747563,puVar3,lVar1,0,0,0x100);
  return;
}



/* Entry: 102de81d0; end: 102de823f;  */

void FUN_102de81d0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  if (lRam0000000112f19b98 != -1) {
    func_0x000107c61568(0x112f19b98,FUN_102de805c);
  }
  lVar1 = 0;
  func_0x000107c5ed3c();
  lVar2 = lVar1;
  func_0x000100028790();
                    /* WARNING: Could not recover jumptable at 0x000102de8224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,lVar2,lVar1);
  return;
}



/* Entry: 102de8240; end: 102de8247;  */

undefined8 FUN_102de8240(void)

{
  return 1;
}



/* Entry: 102de8248; end: 102de82af;  */

void FUN_102de8248(void)

{
  func_0x000107c5ea6c();
  return;
}



/* Entry: 102de82b0; end: 102de82cb;  */

void FUN_102de82b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de82cc,0,0);
  return;
}



/* Entry: 102de82cc; end: 102de839b;  */

void FUN_102de82cc(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x22;
  
  func_0x000107c5ea2c(unaff_x22 + 0x10);
  piVar2 = *(int **)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x38);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102de8340;
                    /* WARNING: Could not recover jumptable at 0x000102de833c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(4);
  return;
}



/* Entry: 102de839c; end: 102de83f7;  */

void FUN_102de839c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c5eaa0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102de83f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102de83f8; end: 102de843f;  */

void FUN_102de83f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102de843c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102de8440; end: 102de84bf;  */

void FUN_102de8440(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar2 = &uStack_60;
  func_0x0001000285a8(0x112f19898,&UNK_10db50270);
  uVar1 = 0;
  func_0x000107c5ea54(0);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  func_0x000107c5ea50();
  func_0x000107c5ea30(&uStack_60,uVar1,0x102de84fc,0);
  *param_1 = puVar2;
  return;
}



/* Entry: 102de84c0; end: 102de84eb;  */

void FUN_102de84c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102de801c();
  func_0x000107c5ea7c(param_1,uVar1);
  return;
}



/* Entry: 102de84ec; end: 102de8527;  */

undefined1  [16] FUN_102de84ec(void)

{
  return ZEXT816(0x1105d3d98);
}



/* Entry: 102de8528; end: 102de8567;  */

void FUN_102de8528(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19ba0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db514d0;
  func_0x000107c61520(&UNK_10db514d0,&UNK_1105d3e60);
  puRam0000000112f19ba0 = puVar1;
  return;
}



/* Entry: 102de8568; end: 102de856b;  */

void FUN_102de8568(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19ba8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db514f8;
  func_0x000107c61520(&UNK_10db514f8,&UNK_1105d3e60);
  puRam0000000112f19ba8 = puVar1;
  return;
}



/* Entry: 102de856c; end: 102de85ab;  */

void FUN_102de856c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19ba8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db514f8;
  func_0x000107c61520(&UNK_10db514f8,&UNK_1105d3e60);
  puRam0000000112f19ba8 = puVar1;
  return;
}



/* Entry: 102de85ac; end: 102de85bb;  */

void FUN_102de85ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e731330,1);
  return;
}



/* Entry: 102de85bc; end: 102de85fb;  */

void FUN_102de85bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_102de85fc();
  uStack_30 = param_2;
  uStack_28 = param_1;
  func_0x000107c614f4(&uStack_30,
                      PTR___s10AppIntents0A6IntentPAAE16parameterSummaryQrvpZQOMQ_110345f50,1);
  return;
}



/* Entry: 102de85fc; end: 102de863b;  */

void FUN_102de85fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19bb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db51438;
  func_0x000107c61520(&UNK_10db51438,&UNK_1105d3e60);
  puRam0000000112f19bb0 = puVar1;
  return;
}



/* Entry: 102de863c; end: 102de87ab;  */

void FUN_102de863c(void)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ef14();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5fad8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar4 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0;
  func_0x000107c5ed3c(0);
  func_0x000100028750();
  func_0x000100028790(uVar2,0x113805070);
  func_0x000107c5fad4(lVar4,0x6f7453206e65704f,0xec00000073656972);
  func_0x000107c5ef04(puVar3);
  lVar1 = 0;
  func_0x000107c5ed38();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = lVar4 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x68))
            (lVar1,*(undefined4 *)
                    PTR___s10Foundation23LocalizedStringResourceV17BundleDescriptionO4mainyA2EmFWC_110345330
            );
  func_0x000107c5ed40(uVar2,lVar4,0x74726f6853707041,0xec00000073747563,puVar3,lVar1,0,0,0x100);
  return;
}



/* Entry: 102de87ac; end: 102de881b;  */

void FUN_102de87ac(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  if (lRam0000000112f19bb8 != -1) {
    func_0x000107c61568(0x112f19bb8,FUN_102de863c);
  }
  lVar1 = 0;
  func_0x000107c5ed3c();
  lVar2 = lVar1;
  func_0x000100028790();
                    /* WARNING: Could not recover jumptable at 0x000102de8800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,lVar2,lVar1);
  return;
}



/* Entry: 102de881c; end: 102de8823;  */

undefined8 FUN_102de881c(void)

{
  return 1;
}



/* Entry: 102de8824; end: 102de888b;  */

void FUN_102de8824(void)

{
  func_0x000107c5ea6c();
  return;
}



/* Entry: 102de888c; end: 102de88a7;  */

void FUN_102de888c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de88a8,0,0);
  return;
}



/* Entry: 102de88a8; end: 102de8977;  */

void FUN_102de88a8(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x22;
  
  func_0x000107c5ea2c(unaff_x22 + 0x10);
  piVar2 = *(int **)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x38);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102de891c;
                    /* WARNING: Could not recover jumptable at 0x000102de8918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(5);
  return;
}



/* Entry: 102de8978; end: 102de89d3;  */

void FUN_102de8978(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c5eaa0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102de89d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102de89d4; end: 102de8a1b;  */

void FUN_102de89d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102de8a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102de8a1c; end: 102de8a9b;  */

void FUN_102de8a1c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar2 = &uStack_60;
  func_0x0001000285a8(0x112f19898,&UNK_10db50270);
  uVar1 = 0;
  func_0x000107c5ea54(0);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  func_0x000107c5ea50();
  func_0x000107c5ea30(&uStack_60,uVar1,0x102de8ad8,0);
  *param_1 = puVar2;
  return;
}



/* Entry: 102de8a9c; end: 102de8ac7;  */

void FUN_102de8a9c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102de85fc();
  func_0x000107c5ea7c(param_1,uVar1);
  return;
}



/* Entry: 102de8ac8; end: 102de8aff;  */

undefined1  [16] FUN_102de8ac8(void)

{
  return ZEXT816(0x1105d3e60);
}



/* Entry: 102de8b00; end: 102de8b8f;  */

void FUN_102de8b00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102deaf24;
                    /* WARNING: Could not recover jumptable at 0x000102de8b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 102de8b90; end: 102de8c13;  */

void FUN_102de8b90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x20);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102deaf20;
                    /* WARNING: Could not recover jumptable at 0x000102de8c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 102de8c14; end: 102de8c73;  */

void FUN_102de8c14(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x100) = param_1;
  *(undefined8 *)(unaff_x22 + 0x108) = unaff_x20;
  lVar1 = 0;
  func_0x000107c5eec8();
  *(long *)(unaff_x22 + 0x110) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x118) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x120) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de8c74,0,0);
  return;
}



/* Entry: 102de8c74; end: 102de8e4f;  */

/* WARNING: Removing unreachable block (ram,0x000102de8d74) */
/* WARNING: Removing unreachable block (ram,0x000102de8ca4) */

void FUN_102de8c74(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x22;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  func_0x000107c5fd64();
  uVar6 = *(undefined8 *)(unaff_x22 + 0x120);
  lVar8 = *(long *)(unaff_x22 + 0x108);
  func_0x000107c5eec4(uVar6);
  puVar4 = &UNK_1105d3f80;
  func_0x00010488bd80();
  *(undefined **)(unaff_x22 + 0x128) = puVar4;
  *(undefined8 *)(unaff_x22 + 0x130) = param_2;
  uVar9 = *(undefined8 *)(lVar8 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
  *(undefined **)(unaff_x22 + 0x28) = puVar4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  func_0x000107c6157c(uVar9);
  uVar6 = 0x112f19950;
  func_0x0001000285a8(0x112f19950,&UNK_10db509b0);
  func_0x000100075034(unaff_x22 + 0x38,0x102deae5c,unaff_x22 + 0x10,uVar6);
  func_0x000107c61574(uVar9);
  lVar8 = *(long *)(unaff_x22 + 0x38);
  if (lVar8 != 0) {
    lVar5 = *(long *)(unaff_x22 + 0x58);
    lVar2 = *(long *)(unaff_x22 + 0x60);
    lVar1 = *(long *)(unaff_x22 + 0x48);
    lVar3 = *(long *)(unaff_x22 + 0x50);
    lVar10 = *(long *)(unaff_x22 + 0x40);
    func_0x000107c5fd64();
    func_0x000107c61574(puVar4);
    func_0x000107c61574(param_2);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x120);
    plVar7 = *(long **)(unaff_x22 + 0x100);
    (**(code **)(*(long *)(unaff_x22 + 0x118) + 8))(uVar6,*(undefined8 *)(unaff_x22 + 0x110));
    func_0x000107c615c0(uVar6);
    *plVar7 = lVar8;
    plVar7[1] = lVar10;
    plVar7[2] = lVar1;
    plVar7[3] = lVar3;
    plVar7[4] = lVar5;
    plVar7[5] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x000102de8cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(undefined8 *)(unaff_x22 + 0x98) = puVar4;
  plVar7 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x138) = plVar7;
  lVar8 = 0x112f19d28;
  func_0x0001000285a8(0x112f19d28,&UNK_10db515d8);
  lVar5 = lVar8;
  func_0x000102deae78();
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102de8e50;
  plVar7[0xe] = lVar5;
  plVar7[0xf] = unaff_x22 + 0x98;
  plVar7[0xd] = lVar8;
  plVar7[7] = unaff_x22 + 0x68;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_10488e060,0,0);
  return;
}



/* Entry: 102de8e50; end: 102de8eab;  */

void FUN_102de8e50(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x140) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x138));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102de8eac;
  }
  else {
    pcVar1 = FUN_102de9060;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102de8eac; end: 102de905f;  */

void FUN_102de8eac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar5 = *(long *)(unaff_x22 + 0x140);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c5fd64();
  uVar1 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x120);
  lVar9 = *(long *)(unaff_x22 + 0x108);
  if (lVar5 == 0) {
    uVar7 = *(undefined8 *)(lVar9 + 0x10);
    *(undefined8 *)(unaff_x22 + 0xf0) = uVar6;
    func_0x000107c6157c(uVar7);
    uVar4 = 0x112f19d38;
    func_0x0001000285a8(0x112f19d38,&UNK_10db515e0);
    func_0x000100075034(unaff_x22 + 0xf8,0x102deaf3c,unaff_x22 + 0xe0,uVar4);
    func_0x000107c61574(uVar1);
    func_0x000107c61574(uVar2);
    func_0x000107c61574(uVar7);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf8));
    uVar1 = *(undefined8 *)(unaff_x22 + 0x120);
    puVar3 = *(undefined8 **)(unaff_x22 + 0x100);
    (**(code **)(*(long *)(unaff_x22 + 0x118) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x110));
    func_0x000107c615c0(uVar1);
    puVar3[1] = uVar15;
    *puVar3 = uVar14;
    puVar3[3] = uVar12;
    puVar3[2] = uVar10;
    puVar3[5] = uVar13;
    puVar3[4] = uVar11;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    func_0x000107c61574(uVar8);
    func_0x000107c61574(uVar7);
    func_0x000107c61574(uVar4);
    uVar7 = *(undefined8 *)(lVar9 + 0x10);
    *(undefined8 *)(unaff_x22 + 0xd0) = uVar6;
    func_0x000107c6157c(uVar7);
    uVar4 = 0x112f19d38;
    func_0x0001000285a8(0x112f19d38,&UNK_10db515e0);
    func_0x000100075034(unaff_x22 + 0xd8,FUN_102deaf28,unaff_x22 + 0xc0,uVar4);
    func_0x000107c61574(uVar1);
    func_0x000107c61574(uVar2);
    func_0x000107c61574(uVar7);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd8));
    (**(code **)(*(long *)(unaff_x22 + 0x118) + 8))
              (*(undefined8 *)(unaff_x22 + 0x120),*(undefined8 *)(unaff_x22 + 0x110));
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x120));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000102de905c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102de9060; end: 102de911f;  */

void FUN_102de9060(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0x108) + 0x10);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x120);
  func_0x000107c6157c(uVar4);
  uVar3 = 0x112f19d38;
  func_0x0001000285a8(0x112f19d38,&UNK_10db515e0);
  func_0x000100075034(unaff_x22 + 0xb8,0x102deaec8,unaff_x22 + 0xa0,uVar3);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
  (**(code **)(*(long *)(unaff_x22 + 0x118) + 8))
            (*(undefined8 *)(unaff_x22 + 0x120),*(undefined8 *)(unaff_x22 + 0x110));
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x120));
                    /* WARNING: Could not recover jumptable at 0x000102de911c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102de9120; end: 102de917f;  */

void FUN_102de9120(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  piVar2 = (int *)*unaff_x20;
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102de9180;
                    /* WARNING: Could not recover jumptable at 0x000102de917c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(param_1);
  return;
}



/* Entry: 102de9180; end: 102de91bb;  */

void FUN_102de9180(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102de91b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102de91bc; end: 102de959b;  */

void FUN_102de91bc(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_90 [8];
  undefined1 *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  uStack_68 = param_2;
  func_0x000107c5eec8();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = 0x112d68090;
  puStack_88 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112d68090,&UNK_10da24400);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar3 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  uVar6 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = uVar6 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar13 - extraout_x12_00;
  lVar3 = 0x112f19c70;
  func_0x0001000285a8(0x112f19c70,&UNK_10db51598);
  lStack_80 = *(long *)(lVar3 + -8);
  uVar4 = param_1;
  lStack_78 = lVar3;
  (**(code **)(lStack_80 + 0x30))(param_1,1);
  uStack_70 = param_1;
  if ((int)uVar4 == 0) {
    pcVar8 = *(code **)(lVar10 + 0x10);
    (*pcVar8)(lVar12,param_1,lVar2);
    pcVar11 = *(code **)(lVar10 + 0x38);
    (*pcVar11)(lVar12,0,1,lVar2);
  }
  else {
    pcVar11 = *(code **)(lVar10 + 0x38);
    (*pcVar11)(lVar12,1,1,lVar2);
    pcVar8 = *(code **)(lVar10 + 0x10);
  }
  (*pcVar8)(lVar13,uStack_68,lVar2);
  (*pcVar11)(lVar13,0,1,lVar2);
  lVar9 = (long)*(int *)(lVar9 + 0x30);
  func_0x0001000c78e8(lVar12,lVar7);
  func_0x0001000c78e8(lVar13,lVar7 + lVar9);
  pcVar8 = *(code **)(lVar10 + 0x30);
  lVar3 = lVar7;
  (*pcVar8)(lVar7,1,lVar2);
  if ((int)lVar3 == 1) {
    func_0x0001009355ac(lVar13,0x112d3bc20,&UNK_10d904ef0);
    func_0x0001009355ac(lVar12,0x112d3bc20,&UNK_10d904ef0);
    lVar9 = lVar7 + lVar9;
    (*pcVar8)(lVar9,1,lVar2);
    if ((int)lVar9 != 1) {
LAB_102de9484:
      func_0x0001009355ac(lVar7,0x112d68090,&UNK_10da24400);
      return;
    }
    func_0x0001009355ac(lVar7,0x112d3bc20,&UNK_10d904ef0);
  }
  else {
    func_0x0001000c78e8(lVar7,uVar6);
    lVar3 = lVar7 + lVar9;
    (*pcVar8)(lVar3,1,lVar2);
    puVar1 = puStack_88;
    if ((int)lVar3 == 1) {
      func_0x0001009355ac(lVar13,0x112d3bc20,&UNK_10d904ef0);
      func_0x0001009355ac(lVar12,0x112d3bc20,&UNK_10d904ef0);
      (**(code **)(lVar10 + 8))(uVar6,lVar2);
      goto LAB_102de9484;
    }
    (**(code **)(lVar10 + 0x20))(puStack_88,lVar7 + lVar9,lVar2);
    uVar4 = 0x112d68098;
    FUN_102deaee0(0x112d68098,PTR___s10Foundation4UUIDVSQAAMc_110350c50);
    uVar5 = uVar6;
    func_0x000107c5fab8(uVar6,puVar1,lVar2,uVar4);
    pcVar8 = *(code **)(lVar10 + 8);
    (*pcVar8)(puVar1,lVar2);
    func_0x0001009355ac(lVar13,0x112d3bc20,&UNK_10d904ef0);
    func_0x0001009355ac(lVar12,0x112d3bc20,&UNK_10d904ef0);
    (*pcVar8)(uVar6,lVar2);
    func_0x0001009355ac(lVar7,0x112d3bc20,&UNK_10d904ef0);
    if ((uVar5 & 1) == 0) {
      return;
    }
  }
  uVar4 = uStack_70;
  func_0x0001009355ac(uStack_70,0x112f19c78,&UNK_10db515a0);
  (**(code **)(lStack_80 + 0x38))(uVar4,1,1,lStack_78);
  return;
}



/* Entry: 102de959c; end: 102de9663;  */

void FUN_102de959c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = 0x112f19c70;
  func_0x0001000285a8(0x112f19c70,&UNK_10db51598);
  lVar3 = param_2;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_2,1,lVar2);
  if ((int)lVar3 == 0) {
    puVar1 = (undefined8 *)(param_2 + *(int *)(lVar2 + 0x30));
    uVar7 = *puVar1;
    uVar4 = puVar1[1];
    uVar8 = puVar1[2];
    uVar5 = puVar1[3];
    uVar9 = puVar1[4];
    uVar6 = puVar1[5];
    func_0x000107c6157c(uVar4);
    func_0x000107c6157c(uVar5);
    func_0x000107c6157c(uVar6);
  }
  else {
    uVar7 = 0;
    uVar4 = 0;
    uVar8 = 0;
    uVar5 = 0;
    uVar9 = 0;
    uVar6 = 0;
  }
  *param_1 = uVar7;
  param_1[1] = uVar4;
  param_1[2] = uVar8;
  param_1[3] = uVar5;
  param_1[4] = uVar9;
  param_1[5] = uVar6;
  return;
}



/* Entry: 102de9664; end: 102de977b;  */

void FUN_102de9664(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar3 = 0x112f19c70;
  func_0x0001000285a8(0x112f19c70,&UNK_10db51598);
  lVar2 = param_2;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(param_2,1,lVar3);
  if ((int)lVar2 == 0) {
    puVar1 = (undefined8 *)(param_2 + *(int *)(lVar3 + 0x30));
    uVar4 = *puVar1;
    uVar7 = puVar1[1];
    uVar9 = puVar1[2];
    uVar6 = puVar1[3];
    uVar10 = puVar1[4];
    uVar8 = puVar1[5];
    func_0x000107c6157c(uVar7);
    func_0x000107c6157c(uVar6);
    func_0x000107c6157c(uVar8);
  }
  else {
    lVar3 = 0;
    func_0x000100935028();
    lVar3 = (long)*(int *)(lVar3 + 0x14);
    func_0x000107c6157c(param_5);
    uVar4 = *(undefined8 *)(param_2 + lVar3);
    func_0x000107c61558(uVar4);
    uVar5 = *(undefined8 *)(param_2 + lVar3);
    FUN_102dea360(param_5,param_3,uVar4);
    uVar4 = 0;
    uVar7 = 0;
    uVar9 = 0;
    uVar6 = 0;
    uVar10 = 0;
    uVar8 = 0;
    *(undefined8 *)(param_2 + lVar3) = uVar5;
  }
  *param_1 = uVar4;
  param_1[1] = uVar7;
  param_1[2] = uVar9;
  param_1[3] = uVar6;
  param_1[4] = uVar10;
  param_1[5] = uVar8;
  return;
}



/* Entry: 102de977c; end: 102de979f;  */

void FUN_102de977c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102de97a0; end: 102de983b;  */

void FUN_102de97a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  if (lRam0000000112f19bc0 != -1) {
    func_0x000107c61568(0x112f19bc0,&UNK_100935060);
  }
  uVar1 = *(undefined8 *)(lRam0000000113805088 + 0x10);
  uStack_40 = param_1;
  func_0x000107c6157c(uVar1);
  func_0x000100075034(FUN_102de9bd4,auStack_50,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 102de983c; end: 102de991f;  */

void FUN_102de983c(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar2 = 0;
  uVar4 = param_3;
  func_0x000100935028();
  lVar2 = (long)*(int *)(lVar2 + 0x14);
  uVar6 = *(undefined8 *)(param_2 + lVar2);
  func_0x000107c61434(uVar6);
  func_0x0001000c8928();
  func_0x000107c6142c(uVar6);
  uVar6 = 0;
  if ((uVar4 & 1) != 0) {
    iVar1 = (int)*(undefined8 *)(param_2 + lVar2);
    func_0x000107c61558();
    lVar5 = *(long *)(param_2 + lVar2);
    if (iVar1 == 0) {
      func_0x000102dea4d0();
    }
    lVar7 = *(long *)(lVar5 + 0x30);
    lVar3 = 0;
    func_0x000107c5eec8();
    (**(code **)(*(long *)(lVar3 + -8) + 8))
              (lVar7 + *(long *)(*(long *)(lVar3 + -8) + 0x48) * param_3,lVar3);
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + param_3 * 8);
    func_0x000102deaa38(param_3,lVar5);
    *(long *)(param_2 + lVar2) = lVar5;
  }
  *param_1 = uVar6;
  return;
}



/* Entry: 102de9920; end: 102de9987;  */

/* WARNING: Possible PIC construction at 0x000102de9950: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102de9954) */
/* WARNING: Removing unreachable block (ram,0x000102de9958) */

void FUN_102de9920(void)

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
    puVar3 = (ulong *)0x112f19d20;
    plVar5 = (long *)&UNK_10db515b8;
  }
  else {
    puVar3 = (ulong *)0x112f19d18;
    plVar5 = (long *)&UNK_10db515b0;
    unaff_x30 = 0x102de9954;
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



/* Entry: 102de9988; end: 102de9a1f;  */

void FUN_102de9988(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << (param_1 & 0x3f);
  lVar3 = *(long *)(param_4 + 0x30);
  lVar2 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))
            (lVar3 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * param_1,param_2,lVar2);
  *(undefined8 *)(*(long *)(param_4 + 0x38) + param_1 * 8) = param_3;
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102de9a20);
  (*pcVar1)();
}



/* Entry: 102de9a20; end: 102de9bd3;  */

ulong FUN_102de9a20(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102de9b08);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102de9b0c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar4 = 0x112f19d18;
    func_0x0001000285a8(0x112f19d18,&UNK_10db515b0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
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
    uVar4 = 0x112f19d18;
    func_0x0001000285a8(0x112f19d18,&UNK_10db515b0);
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
  func_0x000107c5fb78(0xd00000000000002b,0x800000010f10e3a0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102de9bd4);
  (*pcVar2)();
}



/* Entry: 102de9bd4; end: 102de9beb;  */

void FUN_102de9bd4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102de91bc(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102de9bec; end: 102de9c47;  */

long FUN_102de9bec(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102de9c48; end: 102de9d1f;  */

undefined8 * FUN_102de9c48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  uVar2 = param_2[3];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  uVar3 = param_2[5];
  uVar4 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar4;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  return param_1;
}



/* Entry: 102de9d20; end: 102de9d73;  */

undefined8 * FUN_102de9d20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[5];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 102de9d74; end: 102dea0b3;  */

long * FUN_102de9d74(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    lVar5 = 0x112f19c70;
    func_0x0001000285a8(0x112f19c70,&UNK_10db51598);
    lVar11 = *(long *)(lVar5 + -8);
    plVar4 = param_2;
    (**(code **)(lVar11 + 0x30))(param_2,1,lVar5);
    if ((int)plVar4 == 0) {
      lVar6 = 0;
      func_0x000107c5eec8();
      (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_2,lVar6);
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x30));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x30));
      uVar7 = puVar2[1];
      uVar10 = *puVar2;
      uVar14 = puVar2[3];
      uVar13 = puVar2[2];
      uVar9 = puVar2[3];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar10;
      puVar1[3] = uVar14;
      puVar1[2] = uVar13;
      uVar10 = puVar2[5];
      uVar13 = puVar2[4];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar13;
      pcVar12 = *(code **)(lVar11 + 0x38);
      func_0x000107c6157c(uVar7);
      func_0x000107c6157c(uVar9);
      func_0x000107c6157c(uVar10);
      (*pcVar12)(param_1,0,1,lVar5);
    }
    else {
      lVar5 = 0x112f19c78;
      func_0x0001000285a8(0x112f19c78,&UNK_10db515a0);
      func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    func_0x000107c61434();
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar8 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar5 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 102dea0b4; end: 102dea1ab;  */

long FUN_102dea0b4(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = 0x112f19c70;
  func_0x0001000285a8(0x112f19c70,&UNK_10db51598);
  lVar5 = *(long *)(lVar3 + -8);
  lVar4 = param_2;
  (**(code **)(lVar5 + 0x30))(param_2,1,lVar3);
  if ((int)lVar4 == 0) {
    lVar4 = 0;
    func_0x000107c5eec8();
    (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
    puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x30));
    puVar2 = (undefined8 *)(param_2 + *(int *)(lVar3 + 0x30));
    uVar6 = *puVar2;
    uVar8 = puVar2[3];
    uVar7 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar6;
    puVar1[3] = uVar8;
    puVar1[2] = uVar7;
    uVar6 = puVar2[4];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar6;
    (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar3);
  }
  else {
    lVar3 = 0x112f19c78;
    func_0x0001000285a8(0x112f19c78,&UNK_10db515a0);
    func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  return param_1;
}



/* Entry: 102dea1ac; end: 102dea347;  */

long FUN_102dea1ac(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar6 = 0x112f19c70;
  func_0x0001000285a8(0x112f19c70,&UNK_10db51598);
  lVar7 = *(long *)(lVar6 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar4 = param_1;
  (*pcVar8)(param_1,1,lVar6);
  lVar3 = param_2;
  (*pcVar8)(param_2,1,lVar6);
  if ((int)lVar4 == 0) {
    if ((int)lVar3 == 0) {
      lVar4 = 0;
      func_0x000107c5eec8();
      (**(code **)(*(long *)(lVar4 + -8) + 0x28))(param_1,param_2,lVar4);
      puVar1 = (undefined8 *)(param_1 + *(int *)(lVar6 + 0x30));
      puVar2 = (undefined8 *)(param_2 + *(int *)(lVar6 + 0x30));
      uVar5 = puVar1[1];
      uVar9 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar9;
      func_0x000107c61574(uVar5);
      uVar5 = puVar1[3];
      uVar9 = puVar2[2];
      puVar1[3] = puVar2[3];
      puVar1[2] = uVar9;
      func_0x000107c61574(uVar5);
      uVar5 = puVar1[5];
      uVar9 = puVar2[4];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar9;
      func_0x000107c61574(uVar5);
      goto LAB_102dea2b8;
    }
    func_0x0001009355ac(param_1,0x112f19c70,&UNK_10db51598);
  }
  else if ((int)lVar3 == 0) {
    lVar4 = 0;
    func_0x000107c5eec8();
    (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
    puVar1 = (undefined8 *)(param_1 + *(int *)(lVar6 + 0x30));
    puVar2 = (undefined8 *)(param_2 + *(int *)(lVar6 + 0x30));
    uVar5 = *puVar2;
    uVar10 = puVar2[3];
    uVar9 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar5;
    puVar1[3] = uVar10;
    puVar1[2] = uVar9;
    uVar5 = puVar2[4];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar5;
    (**(code **)(lVar7 + 0x38))(param_1,0,1,lVar6);
    goto LAB_102dea2b8;
  }
  lVar6 = 0x112f19c78;
  func_0x0001000285a8(0x112f19c78,&UNK_10db515a0);
  func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
LAB_102dea2b8:
  lVar6 = (long)*(int *)(param_3 + 0x14);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = *(undefined8 *)(param_2 + lVar6);
  func_0x000107c6142c(uVar5);
  return param_1;
}



/* Entry: 102dea348; end: 102dea35f;  */

void FUN_102dea348(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 102dea360; end: 102deadd3;  */

void FUN_102dea360(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar2 = 0;
  uVar4 = param_2;
  func_0x000107c5eec8();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = *unaff_x20;
  uVar3 = param_2;
  func_0x0001000c8928();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar9 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102dea46c);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar9) {
    param_3 = param_3 & 1;
    func_0x000102dea6e8(lVar9);
    uVar3 = param_2;
    func_0x0001000c8928();
    if (((uint)uVar4 & 1) != (param_3 & 1)) {
      func_0x000107c60624(lVar2);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102dea42c);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x000102dea4d0();
    lVar9 = *unaff_x20;
    goto joined_r0x000102dea480;
  }
  lVar9 = *unaff_x20;
joined_r0x000102dea480:
  if ((uVar4 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar6);
    return;
  }
  (**(code **)(lVar10 + 0x10))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,lVar2);
  FUN_102de9988(uVar3,&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,
                lVar9);
  return;
}



/* Entry: 102deadd4; end: 102deae53;  */

undefined * FUN_102deadd4(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_102de9920();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 102deae54; end: 102deae5b;  */

void FUN_102deae54(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}


