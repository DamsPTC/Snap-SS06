/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10068eee8; end: 10068ef17;  */

void FUN_10068eee8(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0001006014d4();
  if (unaff_x20 != 0) {
    func_0x0001008a4640();
    if ((bool)in_ZR) {
      func_0x0001008a464c();
    }
    func_0x0001008a4654();
  }
  return;
}



/* Entry: 10068ef18; end: 10068ef1f;  */

void FUN_10068ef18(void)

{
  long unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x50);
  return;
}



/* Entry: 10068ef20; end: 10068f18f;  */

void FUN_10068ef20(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010068ef28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}



/* Entry: 10068f190; end: 10068f19b;  */

void FUN_10068f190(void)

{
  return;
}



/* Entry: 10068f19c; end: 10068f263;  */

undefined8 * FUN_10068f19c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_DAT_110a90cd0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x000107c34968();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  uVar2 = *(undefined4 *)(param_3 + 0x28);
  *(undefined4 *)(param_1 + 5) = uVar2;
  if ((uVar1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10068f270(param_2,*(undefined8 *)(param_3 + 0x18));
    uVar2 = *(undefined4 *)(param_1 + 5);
  }
  param_1[3] = param_2;
  switch(uVar2) {
  case 1:
    func_0x00010068f534();
    FUN_10068f540();
    break;
  case 2:
    func_0x00010068f534();
    func_0x000107c2a4a4();
    break;
  case 3:
    func_0x00010068f534();
    func_0x000107c2a4a8();
    break;
  case 4:
    func_0x00010068f534();
    func_0x000107c2a4ac();
    break;
  default:
    goto LAB_10068f258;
  }
  param_1[4] = param_2;
LAB_10068f258:
  return param_1;
}



/* Entry: 10068f264; end: 10068f26f;  */

void FUN_10068f264(void)

{
  return;
}



/* Entry: 10068f270; end: 10068f2af;  */

undefined8 * FUN_10068f270(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  FUN_10068f264();
  if (param_1 == 0) {
    lVar2 = 0x20;
    func_0x000107c60e20();
  }
  else {
    lVar2 = unaff_x20;
    func_0x000107c303f0();
  }
  puVar4 = unaff_x19;
  FUN_10068f2b0();
  plVar3 = (long *)(lVar2 + 8);
  *plVar3 = unaff_x20;
  *unaff_x19 = &PTR_DAT_110a910f0;
  if ((puVar4[1] & 1) != 0) {
    func_0x000107c34990();
  }
  *(undefined4 *)(unaff_x19 + 3) = 0;
  uVar1 = *(undefined4 *)((long)unaff_x19 + 0x1c);
  *(undefined4 *)((long)unaff_x19 + 0x1c) = uVar1;
  switch(uVar1) {
  case 1:
  case 3:
  case 4:
  case 6:
    func_0x00010068f42c();
    FUN_10068f444();
    break;
  case 2:
    func_0x00010068f42c();
    func_0x000107c2a4c4();
    break;
  case 5:
    func_0x00010068f42c();
    func_0x000107c2a39c();
    break;
  case 7:
    func_0x00010068f42c();
    func_0x000107c2a4c8();
    break;
  default:
    goto LAB_10068f32c;
  }
  unaff_x19[2] = plVar3;
LAB_10068f32c:
  return unaff_x19;
}



/* Entry: 10068f2b0; end: 10068f2bb;  */

void FUN_10068f2b0(void)

{
  return;
}



/* Entry: 10068f2bc; end: 10068f35b;  */

void FUN_10068f2bc(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *unaff_x19;
  
  lVar3 = param_3;
  FUN_10068f2b0();
  puVar2 = (undefined8 *)(param_1 + 8);
  *puVar2 = param_2;
  *unaff_x19 = &PTR_DAT_110a910f0;
  if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
    func_0x000107c34990();
  }
  *(undefined4 *)(unaff_x19 + 3) = 0;
  uVar1 = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)((long)unaff_x19 + 0x1c) = uVar1;
  switch(uVar1) {
  case 1:
  case 3:
  case 4:
  case 6:
    func_0x00010068f42c();
    FUN_10068f444();
    break;
  case 2:
    func_0x00010068f42c();
    func_0x000107c2a4c4();
    break;
  case 5:
    func_0x00010068f42c();
    func_0x000107c2a39c();
    break;
  case 7:
    func_0x00010068f42c();
    func_0x000107c2a4c8();
    break;
  default:
    goto FUN_10068f528;
  }
  unaff_x19[2] = puVar2;
FUN_10068f528:
  return;
}



/* Entry: 10068f35c; end: 10068f363;  */

void FUN_10068f35c(void)

{
  return;
}



/* Entry: 10068f364; end: 10068f377;  */

undefined1 * FUN_10068f364(void)

{
  undefined1 *puStack_28;
  
  puStack_28 = &stack0x00000008;
  FUN_10067f500(&puStack_28);
  return &stack0x00000008;
}



/* Entry: 10068f378; end: 10068f39b;  */

void FUN_10068f378(long param_1)

{
  FUN_1006103c4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10068f39c; end: 10068f3cb;  */

void FUN_10068f39c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010068f3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10068f3cc; end: 10068f3e7;  */

void FUN_10068f3cc(void)

{
  func_0x00010068f3ac();
  return;
}



/* Entry: 10068f3e8; end: 10068f3ef;  */

void FUN_10068f3e8(void)

{
  return;
}



/* Entry: 10068f3f0; end: 10068f413;  */

void FUN_10068f3f0(long param_1)

{
  FUN_10066835c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10068f414; end: 10068f41f; -[SCNNetworkTypesRetryConfig .cxx_destruct] */

void FUN_10068f414(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10068f420; end: 10068f443; -[SCNMdpCommonRankingSignals .cxx_destruct] */

void FUN_10068f420(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10068f444; end: 10068f473;  */

undefined8 * FUN_10068f444(undefined8 *param_1,undefined8 param_2,long param_3)

{
  func_0x00010068f438();
  if (param_1 == (undefined8 *)0x0) {
    FUN_10068f474();
  }
  else {
    func_0x0001079472c8();
  }
  func_0x00010068f4c0();
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_DAT_110d9ac98;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x000107c316b8(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  return param_1;
}



/* Entry: 10068f474; end: 10068f47b;  */

void FUN_10068f474(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x18);
  return;
}



/* Entry: 10068f47c; end: 10068f4b7; -[SCNNetworkTypesHttpRequest .cxx_destruct] */

void FUN_10068f47c(long param_1)

{
  FUN_10068f4b8(param_1 + 0x30);
  FUN_10068f4b8(param_1 + 0x28);
  FUN_10068f4b8(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10068f4b8; end: 10068f4cb;  */

void FUN_10068f4b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 10068f4cc; end: 10068f527;  */

undefined8 * FUN_10068f4cc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_DAT_110d9ac98;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x000107c316b8(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  return param_1;
}



/* Entry: 10068f528; end: 10068f53f;  */

void FUN_10068f528(void)

{
  return;
}



/* Entry: 10068f540; end: 10068f5ef;  */

undefined8 * FUN_10068f540(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x40;
    func_0x000107c60e20();
  }
  else {
    puVar2 = param_1;
    func_0x000107c303f0(param_1,0x40);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_DAT_110a90c30;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x000107c34968();
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_10068e734(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  puVar2[3] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_10068e734(param_1,*(undefined8 *)(param_2 + 0x20));
  }
  puVar2[4] = param_1;
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  *(undefined1 *)(puVar2 + 7) = *(undefined1 *)(param_2 + 0x38);
  puVar2[6] = uVar5;
  puVar2[5] = uVar4;
  return puVar2;
}



/* Entry: 10068f5f0; end: 10068f607;  */

void FUN_10068f5f0(void)

{
  return;
}



/* Entry: 10068f608; end: 10068f643;  */

long FUN_10068f608(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x00010068f5fc();
  if (param_1 == 0) {
    func_0x000107c60e20(200);
  }
  else {
    func_0x000107c303f0();
  }
  FUN_10068f644();
  func_0x00010068f650();
  FUN_10068f86c(&PTR_DAT_110a92270);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107c349ac();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x21 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x1c) = 0;
  *(undefined8 *)(unaff_x19 + 0x14) = 0;
  *(undefined4 *)(unaff_x19 + 0x24) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = unaff_x20;
  func_0x00010068f878(unaff_x19 + 0x18,unaff_x21 + 0x18);
  FUN_10068f898(unaff_x19 + 0x30,unaff_x20,unaff_x21 + 0x30);
  FUN_10068fab0(unaff_x19 + 0x48,unaff_x20,unaff_x21 + 0x48);
  lVar3 = unaff_x21 + 0x60;
  func_0x00010068fb90();
  *(long *)(unaff_x19 + 0x60) = lVar3;
  *(undefined4 *)(unaff_x19 + 0xc0) = *(undefined4 *)(unaff_x21 + 0xc0);
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    FUN_10068fba4(unaff_x20,*(undefined8 *)(unaff_x21 + 0x68));
  }
  *(undefined8 *)(unaff_x19 + 0x68) = uVar4;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    FUN_10068fccc(unaff_x20,*(undefined8 *)(unaff_x21 + 0x70));
  }
  *(undefined8 *)(unaff_x19 + 0x70) = uVar4;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    func_0x000107c2a470(unaff_x20,*(undefined8 *)(unaff_x21 + 0x78));
  }
  *(undefined8 *)(unaff_x19 + 0x78) = uVar4;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    FUN_10068fd5c(unaff_x20,*(undefined8 *)(unaff_x21 + 0x80));
  }
  *(undefined8 *)(unaff_x19 + 0x80) = uVar4;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    func_0x000107c2a564(unaff_x20,*(undefined8 *)(unaff_x21 + 0x88));
  }
  *(undefined8 *)(unaff_x19 + 0x88) = uVar4;
  if ((uVar1 >> 5 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    func_0x000107c2a568(unaff_x20,*(undefined8 *)(unaff_x21 + 0x90));
  }
  *(undefined8 *)(unaff_x19 + 0x90) = uVar4;
  if ((uVar1 >> 6 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    func_0x000107c2a56c(unaff_x20,*(undefined8 *)(unaff_x21 + 0x98));
  }
  *(undefined8 *)(unaff_x19 + 0x98) = uVar4;
  if ((uVar1 >> 7 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x000107c2a570(unaff_x20,*(undefined8 *)(unaff_x21 + 0xa0));
  }
  *(undefined8 *)(unaff_x19 + 0xa0) = unaff_x20;
  uVar4 = *(undefined8 *)(unaff_x21 + 0xa8);
  *(undefined4 *)(unaff_x19 + 0xb0) = *(undefined4 *)(unaff_x21 + 0xb0);
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar4;
  iVar2 = *(int *)(unaff_x19 + 0xc0);
  if (iVar2 == 0x15) {
    func_0x000107c34a0c();
    func_0x000107c2a580();
  }
  else if (iVar2 == 0xd) {
    func_0x000107c34a0c();
    func_0x000107c2a578();
  }
  else if (iVar2 == 0xe) {
    func_0x000107c34a0c();
    func_0x000107c2a57c();
  }
  else {
    if (iVar2 != 0xb) {
      return unaff_x19;
    }
    func_0x000107c34a0c();
    func_0x000107c2a574();
  }
  *(undefined8 *)(unaff_x19 + 0xb8) = unaff_x20;
  return unaff_x19;
}



/* Entry: 10068f644; end: 10068f663;  */

void FUN_10068f644(void)

{
  return;
}



/* Entry: 10068f664; end: 10068f86b;  */

void FUN_10068f664(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x00010068f650();
  FUN_10068f86c(&PTR_DAT_110a92270);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107c349ac();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x21 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x1c) = 0;
  *(undefined8 *)(unaff_x19 + 0x14) = 0;
  *(undefined4 *)(unaff_x19 + 0x24) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = unaff_x20;
  func_0x00010068f878(unaff_x19 + 0x18,unaff_x21 + 0x18);
  FUN_10068f898(unaff_x19 + 0x30);
  FUN_10068fab0(unaff_x19 + 0x48);
  lVar3 = unaff_x21 + 0x60;
  func_0x00010068fb90();
  *(long *)(unaff_x19 + 0x60) = lVar3;
  *(undefined4 *)(unaff_x19 + 0xc0) = *(undefined4 *)(unaff_x21 + 0xc0);
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    FUN_10068fba4();
  }
  *(undefined8 *)(unaff_x19 + 0x68) = uVar4;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    FUN_10068fccc();
  }
  *(undefined8 *)(unaff_x19 + 0x70) = uVar4;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    func_0x000107c2a470();
  }
  *(undefined8 *)(unaff_x19 + 0x78) = uVar4;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    FUN_10068fd5c();
  }
  *(undefined8 *)(unaff_x19 + 0x80) = uVar4;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    func_0x000107c2a564();
  }
  *(undefined8 *)(unaff_x19 + 0x88) = uVar4;
  if ((uVar1 >> 5 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    func_0x000107c2a568();
  }
  *(undefined8 *)(unaff_x19 + 0x90) = uVar4;
  if ((uVar1 >> 6 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    func_0x000107c2a56c();
  }
  *(undefined8 *)(unaff_x19 + 0x98) = uVar4;
  if ((uVar1 >> 7 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x000107c2a570();
  }
  *(undefined8 *)(unaff_x19 + 0xa0) = unaff_x20;
  uVar4 = *(undefined8 *)(unaff_x21 + 0xa8);
  *(undefined4 *)(unaff_x19 + 0xb0) = *(undefined4 *)(unaff_x21 + 0xb0);
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar4;
  iVar2 = *(int *)(unaff_x19 + 0xc0);
  if (iVar2 == 0x15) {
    func_0x000107c34a0c();
    func_0x000107c2a580();
  }
  else if (iVar2 == 0xd) {
    func_0x000107c34a0c();
    func_0x000107c2a578();
  }
  else if (iVar2 == 0xe) {
    func_0x000107c34a0c();
    func_0x000107c2a57c();
  }
  else {
    if (iVar2 != 0xb) {
      return;
    }
    func_0x000107c34a0c();
    func_0x000107c2a574();
  }
  *(undefined8 *)(unaff_x19 + 0xb8) = unaff_x20;
  return;
}



/* Entry: 10068f86c; end: 10068f897;  */

void FUN_10068f86c(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  *unaff_x19 = param_1;
  return;
}



/* Entry: 10068f898; end: 10068f8c3;  */

undefined8 * FUN_10068f898(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  func_0x00010068f888(param_1,param_3);
  return param_1;
}



/* Entry: 10068f8c4; end: 10068f8db;  */

void FUN_10068f8c4(ulong *param_1)

{
  long unaff_x20;
  
  FUN_10068f8c4();
  FUN_10068f90c();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000107c349b4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10068f8dc; end: 10068f90b;  */

void FUN_10068f8dc(ulong *param_1)

{
  long unaff_x20;
  
  FUN_10068f8c4();
  FUN_10068f90c();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000107c349b4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10068f90c; end: 10068f91b;  */

void FUN_10068f90c(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  FUN_100361ce4();
  plVar2 = param_1;
  FUN_10064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  FUN_100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10068f91c; end: 10068f937; -[SCNNetworkTypesHttpParams .cxx_destruct] */

void FUN_10068f91c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10068f938; end: 10068fa9f;  */

void FUN_10068f938(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  lVar3 = param_2;
  func_0x00010068f92c(*(undefined8 *)(param_2 + 0x18));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      func_0x000107c39dc8();
    }
    FUN_1001a53d4(param_1 + 0x18);
  }
  func_0x00010068f92c(*(undefined8 *)(param_2 + 0x20));
  lVar5 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x000107c39dc8();
    }
    FUN_1001a53d4(param_1 + 0x20);
  }
  func_0x00010068f92c(*(undefined8 *)(param_2 + 0x28));
  lVar5 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x000107c39dc8();
    }
    FUN_1001a53d4(param_1 + 0x28);
  }
  func_0x00010068f92c(*(undefined8 *)(param_2 + 0x30));
  lVar5 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x000107c39dc8();
    }
    FUN_1001a53d4(param_1 + 0x30);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
      func_0x000107c30590(uVar2,*(undefined8 *)(param_2 + 0x38));
      *(ulong *)(param_1 + 0x38) = uVar2;
    }
    else {
      func_0x000107c3057c();
    }
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x4c) != 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_2 + 0x4c);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10068faa0; end: 10068faaf;  */

void FUN_10068faa0(void)

{
  return;
}



/* Entry: 10068fab0; end: 10068facf;  */

void FUN_10068fab0(void)

{
  func_0x00010068fb64();
  func_0x00010068fb78();
  return;
}



/* Entry: 10068fad0; end: 10068fb5b; -[SCNNetworkTypesHeader .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010068fae8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010068faec) */

void FUN_10068fad0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10068fb5c; end: 10068fba3;  */

void FUN_10068fb5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10068fba4; end: 10068fbd3;  */

long FUN_10068fba4(long param_1)

{
  undefined4 extraout_w8;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x00010068fb98();
  if (param_1 == 0) {
    func_0x00010068fbd4();
  }
  else {
    func_0x000107c349bc();
  }
  func_0x00010068fbdc();
  func_0x00010068f650();
  FUN_10068f86c(&PTR_DAT_110a92180);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107c349ac();
  }
  FUN_10068fc98();
  switch(extraout_w8) {
  case 1:
    func_0x00010068fca8();
    FUN_10068f444();
    break;
  case 2:
    func_0x00010068fca8();
    func_0x000107c2a584();
    break;
  case 3:
    func_0x00010068fca8();
    func_0x000107c2a588();
    break;
  case 4:
    func_0x00010068fca8();
    func_0x000107c2a58c();
    break;
  case 5:
    func_0x00010068fca8();
    func_0x000107c2a590();
    break;
  case 6:
    func_0x00010068fca8();
    func_0x000107c2a594();
    break;
  case 7:
    func_0x00010068fca8();
    func_0x000107c2a598();
    break;
  default:
    goto LAB_10068fc8c;
  }
  *(long *)(unaff_x19 + 0x10) = param_1;
LAB_10068fc8c:
  return unaff_x19;
}



/* Entry: 10068fbd4; end: 10068fbe7;  */

void FUN_10068fbd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x20);
  return;
}



/* Entry: 10068fbe8; end: 10068fc97;  */

void FUN_10068fbe8(undefined8 param_1)

{
  undefined4 extraout_w8;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x00010068f650();
  FUN_10068f86c(&PTR_DAT_110a92180);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107c349ac();
  }
  FUN_10068fc98();
  switch(extraout_w8) {
  case 1:
    func_0x00010068fca8();
    FUN_10068f444();
    break;
  case 2:
    func_0x00010068fca8();
    func_0x000107c2a584();
    break;
  case 3:
    func_0x00010068fca8();
    func_0x000107c2a588();
    break;
  case 4:
    func_0x00010068fca8();
    func_0x000107c2a58c();
    break;
  case 5:
    func_0x00010068fca8();
    func_0x000107c2a590();
    break;
  case 6:
    func_0x00010068fca8();
    func_0x000107c2a594();
    break;
  case 7:
    func_0x00010068fca8();
    func_0x000107c2a598();
    break;
  default:
    goto LAB_10068fcb4;
  }
  *(undefined8 *)(unaff_x19 + 0x10) = param_1;
LAB_10068fcb4:
  return;
}



/* Entry: 10068fc98; end: 10068fccb;  */

void FUN_10068fc98(void)

{
  long unaff_x19;
  long unaff_x21;
  
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
  *(undefined4 *)(unaff_x19 + 0x1c) = *(undefined4 *)(unaff_x21 + 0x1c);
  return;
}



/* Entry: 10068fccc; end: 10068fd27;  */

undefined8 * FUN_10068fccc(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x00010068fcc0();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010068fd28();
  }
  else {
    func_0x000107c349b0();
  }
  *param_1 = &PTR_DAT_110a91b90;
  param_1[1] = unaff_x21;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  func_0x00010068fd30();
  return param_1;
}



/* Entry: 10068fd28; end: 10068fd5b;  */

void FUN_10068fd28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x18);
  return;
}



/* Entry: 10068fd5c; end: 10068fdfb;  */

void FUN_10068fd5c(long param_1)

{
  undefined4 extraout_w8;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x00010068fd50();
  if (param_1 == 0) {
    FUN_10068fbd4();
  }
  else {
    func_0x000107c349bc();
  }
  FUN_10068fdfc();
  func_0x00010068fe08(&PTR_DAT_110a921d0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107c349ac();
  }
  FUN_10068fc98();
  switch(extraout_w8) {
  case 1:
    func_0x00010068fca8();
    FUN_10068fe14();
    break;
  case 2:
    func_0x00010068fca8();
    func_0x000107c2a54c();
    break;
  case 3:
    func_0x00010068fca8();
    func_0x000107c2a550();
    break;
  case 4:
    func_0x00010068fca8();
    func_0x000107c2a554();
    break;
  default:
    goto LAB_10068fcb4;
  }
  *(long *)(unaff_x19 + 0x10) = param_1;
LAB_10068fcb4:
  return;
}



/* Entry: 10068fdfc; end: 10068fe13;  */

void FUN_10068fdfc(long param_1)

{
  undefined8 unaff_x20;
  
  *(undefined8 *)(param_1 + 8) = unaff_x20;
  return;
}



/* Entry: 10068fe14; end: 10068fe6f;  */

undefined8 * FUN_10068fe14(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x00010068fcc0();
  if (param_1 == (undefined8 *)0x0) {
    FUN_10068fd28();
  }
  else {
    func_0x000107c349b0();
  }
  *param_1 = &PTR_DAT_110a917d0;
  param_1[1] = unaff_x21;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  FUN_10068fe70();
  return param_1;
}



/* Entry: 10068fe70; end: 10068fe9f;  */

void FUN_10068fe70(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  if (*(char *)(param_2 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10068fea0; end: 10068fedb;  */

long FUN_10068fea0(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010068f5fc();
  if (param_1 == 0) {
    func_0x000107c60e20(0x158);
  }
  else {
    func_0x000107c303f0();
  }
  FUN_10068f644();
  func_0x00010068e5b8();
  FUN_10068e710(&PTR_DAT_110a96040);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107c34a24();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  FUN_1006900d8(unaff_x19 + 0x18);
  FUN_1006900d8(unaff_x19 + 0x30);
  FUN_1006900d8(unaff_x19 + 0x48);
  FUN_1006900d8(unaff_x19 + 0x60);
  FUN_1006900d8(unaff_x19 + 0x78);
  FUN_1006900d8(unaff_x19 + 0x90);
  FUN_1006900d8(unaff_x19 + 0xa8);
  *(undefined8 *)(unaff_x19 + 0xc0) = 0;
  *(undefined8 *)(unaff_x19 + 200) = 0;
  *(undefined8 *)(unaff_x19 + 0xd0) = unaff_x21;
  FUN_100690120((undefined8 *)(unaff_x19 + 0xc0),unaff_x20 + 0xc0);
  FUN_100690144(unaff_x19 + 0xd8);
  *(undefined8 *)(unaff_x19 + 0xf0) = 0;
  *(undefined8 *)(unaff_x19 + 0xf8) = 0;
  *(undefined8 *)(unaff_x19 + 0x100) = unaff_x21;
  func_0x00010069017c((undefined8 *)(unaff_x19 + 0xf0),unaff_x20 + 0xf0);
  *(undefined4 *)(unaff_x19 + 0x150) = *(undefined4 *)(unaff_x20 + 0x150);
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x000107c2a5f8();
  }
  *(undefined8 *)(unaff_x19 + 0x108) = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x000107c2a5fc();
  }
  *(undefined8 *)(unaff_x19 + 0x110) = uVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x000107c2a59c();
  }
  *(undefined8 *)(unaff_x19 + 0x118) = uVar2;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x128);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x120);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x138);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x130);
  *(undefined8 *)(unaff_x19 + 0x140) = *(undefined8 *)(unaff_x20 + 0x140);
  *(undefined8 *)(unaff_x19 + 0x128) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x120) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x138) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x130) = uVar4;
  if (*(int *)(unaff_x19 + 0x150) == 0xd) {
    *(undefined4 *)(unaff_x19 + 0x148) = *(undefined4 *)(unaff_x20 + 0x148);
  }
  else if (*(int *)(unaff_x19 + 0x150) == 0xc) {
    func_0x000107c2a600();
    *(undefined8 *)(unaff_x19 + 0x148) = unaff_x21;
  }
  return unaff_x19;
}



/* Entry: 10068fedc; end: 1006900d7;  */

void FUN_10068fedc(void)

{
  uint uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010068e5b8();
  FUN_10068e710(&PTR_DAT_110a96040);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107c34a24();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  FUN_1006900d8(unaff_x19 + 0x18);
  FUN_1006900d8(unaff_x19 + 0x30);
  FUN_1006900d8(unaff_x19 + 0x48);
  FUN_1006900d8(unaff_x19 + 0x60);
  FUN_1006900d8(unaff_x19 + 0x78);
  FUN_1006900d8(unaff_x19 + 0x90);
  FUN_1006900d8(unaff_x19 + 0xa8);
  *(undefined8 *)(unaff_x19 + 0xc0) = 0;
  *(undefined8 *)(unaff_x19 + 200) = 0;
  *(undefined8 *)(unaff_x19 + 0xd0) = unaff_x21;
  FUN_100690120((undefined8 *)(unaff_x19 + 0xc0),unaff_x20 + 0xc0);
  FUN_100690144(unaff_x19 + 0xd8);
  *(undefined8 *)(unaff_x19 + 0xf0) = 0;
  *(undefined8 *)(unaff_x19 + 0xf8) = 0;
  *(undefined8 *)(unaff_x19 + 0x100) = unaff_x21;
  func_0x00010069017c((undefined8 *)(unaff_x19 + 0xf0),unaff_x20 + 0xf0);
  *(undefined4 *)(unaff_x19 + 0x150) = *(undefined4 *)(unaff_x20 + 0x150);
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x000107c2a5f8();
  }
  *(undefined8 *)(unaff_x19 + 0x108) = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x000107c2a5fc();
  }
  *(undefined8 *)(unaff_x19 + 0x110) = uVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x000107c2a59c();
  }
  *(undefined8 *)(unaff_x19 + 0x118) = uVar2;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x128);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x120);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x138);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x130);
  *(undefined8 *)(unaff_x19 + 0x140) = *(undefined8 *)(unaff_x20 + 0x140);
  *(undefined8 *)(unaff_x19 + 0x128) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x120) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x138) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x130) = uVar4;
  if (*(int *)(unaff_x19 + 0x150) == 0xd) {
    *(undefined4 *)(unaff_x19 + 0x148) = *(undefined4 *)(unaff_x20 + 0x148);
  }
  else if (*(int *)(unaff_x19 + 0x150) == 0xc) {
    func_0x000107c2a600();
    *(undefined8 *)(unaff_x19 + 0x148) = unaff_x21;
  }
  return;
}



/* Entry: 1006900d8; end: 1006900ef;  */

undefined8 * FUN_1006900d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x21;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = unaff_x21;
  func_0x0001006900e0(param_1,param_3);
  return param_1;
}



/* Entry: 1006900f0; end: 10069011f;  */

undefined8 * FUN_1006900f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  func_0x0001006900e0(param_1,param_3);
  return param_1;
}



/* Entry: 100690120; end: 100690143;  */

void FUN_100690120(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  FUN_100361ce4();
  plVar2 = param_1;
  FUN_10064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  FUN_100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 100690144; end: 100690163;  */

void FUN_100690144(void)

{
  func_0x000100690130();
  FUN_100690164();
  return;
}



/* Entry: 100690164; end: 1006901a3;  */

void FUN_100690164(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  FUN_100361ce4();
  plVar2 = param_1;
  FUN_10064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  FUN_100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 1006901a4; end: 1006901d7;  */

undefined8 * FUN_1006901a4(undefined8 *param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 *unaff_x20;
  
  func_0x000100690198();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001006901d8();
  }
  else {
    func_0x000107c347d0();
    param_1 = unaff_x20;
  }
  func_0x0001006901e0();
  param_1[1] = param_2;
  *param_1 = &PTR_DAT_110a815c0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x000107c30374(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  iVar1 = *(int *)(param_3 + 0x24);
  *(int *)((long)param_1 + 0x24) = iVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_3 + 0x10);
  if (iVar1 == 3) {
    param_3 = param_3 + 0x18;
    func_0x0001002a0e60(param_3,param_2);
  }
  else {
    if (iVar1 == 2) {
      param_1[3] = *(undefined8 *)(param_3 + 0x18);
      return param_1;
    }
    if (iVar1 != 1) {
      return param_1;
    }
    FUN_10068e734(param_2,*(undefined8 *)(param_3 + 0x18));
    param_3 = param_2;
  }
  param_1[3] = param_3;
  return param_1;
}



/* Entry: 1006901d8; end: 1006901eb;  */

void FUN_1006901d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x28);
  return;
}



/* Entry: 1006901ec; end: 10069028f;  */

undefined8 * FUN_1006901ec(undefined8 *param_1,long param_2,long param_3)

{
  int iVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_DAT_110a815c0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x000107c30374(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  iVar1 = *(int *)(param_3 + 0x24);
  *(int *)((long)param_1 + 0x24) = iVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_3 + 0x10);
  if (iVar1 == 3) {
    param_3 = param_3 + 0x18;
    func_0x0001002a0e60(param_3,param_2);
  }
  else {
    if (iVar1 == 2) {
      param_1[3] = *(undefined8 *)(param_3 + 0x18);
      return param_1;
    }
    if (iVar1 != 1) {
      return param_1;
    }
    FUN_10068e734(param_2,*(undefined8 *)(param_3 + 0x18));
    param_3 = param_2;
  }
  param_1[3] = param_3;
  return param_1;
}



/* Entry: 100690290; end: 1006902af;  */

void FUN_100690290(void)

{
  return;
}



/* Entry: 1006902b0; end: 1006902e7;  */

undefined1 * FUN_1006902b0(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  func_0x00010069029c();
  return param_1;
}



/* Entry: 1006902e8; end: 10069030b;  */

void FUN_1006902e8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 in_NG;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *plVar8;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong uVar9;
  ulong extraout_x9_01;
  long *plVar10;
  long *extraout_x10;
  long *plVar11;
  long *plVar12;
  long *extraout_x11;
  long *plVar13;
  long *unaff_x19;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *unaff_x25;
  
  puVar6 = (undefined8 *)&stack0x00000598;
  func_0x0001006902f4();
  plVar15 = (long *)*puVar6;
  plVar16 = (long *)unaff_x19[1];
  if (plVar16 != (long *)0x0) {
    uVar7 = (long)plVar16 - 1;
    if (((ulong)plVar16 & uVar7) == 0) {
      unaff_x25 = (long *)(uVar7 & (ulong)plVar15);
      in_NG = false;
    }
    else {
      in_NG = (long)plVar15 - (long)plVar16 < 0;
      unaff_x25 = plVar15;
      if (plVar16 <= plVar15) {
        uVar9 = 0;
        if (plVar16 != (long *)0x0) {
          uVar9 = (ulong)plVar15 / (ulong)plVar16;
        }
        unaff_x25 = (long *)((long)plVar15 - uVar9 * (long)plVar16);
      }
    }
    plVar8 = *(long **)(*unaff_x19 + (long)unaff_x25 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_1006903b8;
          plVar10 = (long *)plVar8[1];
          if (plVar10 != plVar15) break;
          in_NG = plVar8[2] - (long)plVar15 < 0;
          if ((long *)plVar8[2] == plVar15) {
            return;
          }
        }
        if (((ulong)plVar16 & uVar7) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar7);
        }
        else if (plVar16 <= plVar10) {
          uVar9 = 0;
          if (plVar16 != (long *)0x0) {
            uVar9 = (ulong)plVar10 / (ulong)plVar16;
          }
          plVar10 = (long *)((long)plVar10 - uVar9 * (long)plVar16);
        }
        in_NG = (long)plVar10 - (long)unaff_x25 < 0;
      } while (plVar10 == unaff_x25);
    }
  }
LAB_1006903b8:
  plVar8 = unaff_x19 + 2;
  plVar4 = (long *)0x1c0;
  func_0x000107c60e20();
  *plVar4 = 0;
  plVar4[1] = (long)plVar15;
  plVar4[2] = (long)plVar15;
  plVar10 = plVar4 + 3;
  func_0x00010068df2c(plVar10,puVar6 + 1);
  func_0x00010062016c();
  if ((plVar16 != (long *)0x0) && (FUN_1006912bc(param_1,param_2,(float)plVar16), !(bool)in_NG))
  goto LAB_1006905a0;
  bVar2 = (long *)0x2 < plVar16;
  bVar3 = plVar16 == (long *)0x3;
  func_0x000100620198((long)plVar16 << 1);
  plVar14 = extraout_x8;
  if (!bVar2 || bVar3) {
    plVar14 = extraout_x9;
  }
  if ((long)plVar14 - 1U == 0) {
    plVar14 = (long *)0x2;
  }
  else if (((ulong)plVar14 & (long)plVar14 - 1U) != 0) {
    func_0x000107c60c44();
    plVar10 = plVar14;
  }
  plVar16 = (long *)unaff_x19[1];
  if (plVar16 < plVar14) {
LAB_100690450:
    if ((ulong)plVar14 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100690610);
      (*pcVar1)();
    }
    lVar5 = (long)plVar14 << 3;
    func_0x000107c60e20(lVar5);
    FUN_10069061c(unaff_x19,lVar5);
    plVar16 = (long *)0x0;
    unaff_x19[1] = (long)plVar14;
    lVar5 = *unaff_x19;
    while (plVar14 != plVar16) {
      func_0x0001006201c4();
      lVar5 = extraout_x8_00;
      plVar16 = extraout_x9_00;
    }
    plVar10 = (long *)*plVar8;
    plVar16 = plVar14;
    if (plVar10 != (long *)0x0) {
      plVar11 = (long *)plVar10[1];
      uVar9 = (long)plVar14 - 1;
      uVar7 = 0;
      if (plVar14 != (long *)0x0) {
        uVar7 = (ulong)plVar11 / (ulong)plVar14;
      }
      plVar12 = plVar11;
      if (plVar14 <= plVar11) {
        plVar12 = (long *)((long)plVar11 - uVar7 * (long)plVar14);
      }
      if (((ulong)plVar14 & uVar9) == 0) {
        plVar12 = (long *)((ulong)plVar11 & uVar9);
      }
      *(long **)(lVar5 + (long)plVar12 * 8) = plVar8;
      while (plVar11 = plVar10, plVar10 = (long *)*plVar11, plVar10 != (long *)0x0) {
        plVar13 = (long *)plVar10[1];
        if (((ulong)plVar14 & uVar9) == 0) {
          plVar13 = (long *)((ulong)plVar13 & uVar9);
        }
        else if (plVar14 <= plVar13) {
          uVar7 = 0;
          if (plVar14 != (long *)0x0) {
            uVar7 = (ulong)plVar13 / (ulong)plVar14;
          }
          plVar13 = (long *)((long)plVar13 - uVar7 * (long)plVar14);
        }
        if (plVar13 != plVar12) {
          if (*(long *)(lVar5 + (long)plVar13 * 8) == 0) {
            *(long **)(lVar5 + (long)plVar13 * 8) = plVar11;
            plVar12 = plVar13;
          }
          else {
            *plVar11 = *plVar10;
            func_0x000107c3432c();
            lVar5 = extraout_x8_01;
            uVar9 = extraout_x9_01;
            plVar10 = extraout_x10;
            plVar12 = extraout_x11;
          }
        }
      }
    }
  }
  else if (plVar14 < plVar16) {
    func_0x000107c34524();
    if ((plVar16 < (long *)0x3) || (((ulong)plVar16 & (long)plVar16 - 1U) != 0)) {
      func_0x000107c60c44();
    }
    else {
      func_0x000107c342e0();
    }
    if (plVar14 <= plVar10) {
      plVar14 = plVar10;
    }
    if (plVar14 < plVar16) {
      if (plVar14 != (long *)0x0) goto LAB_100690450;
      FUN_10069061c(unaff_x19,0);
      unaff_x19[1] = 0;
      plVar16 = (long *)0x0;
    }
    else {
      plVar16 = (long *)unaff_x19[1];
    }
  }
  if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar16 - 1U & (ulong)plVar15);
  }
  else {
    unaff_x25 = plVar15;
    if (plVar16 <= plVar15) {
      uVar7 = 0;
      if (plVar16 != (long *)0x0) {
        uVar7 = (ulong)plVar15 / (ulong)plVar16;
      }
      unaff_x25 = (long *)((long)plVar15 - uVar7 * (long)plVar16);
    }
  }
LAB_1006905a0:
  lVar5 = *unaff_x19;
  if (*(long *)(lVar5 + (long)unaff_x25 * 8) == 0) {
    *plVar4 = *plVar8;
    *plVar8 = (long)plVar4;
    *(long **)(lVar5 + (long)unaff_x25 * 8) = plVar8;
    if (*plVar4 != 0) {
      plVar15 = *(long **)(*plVar4 + 8);
      if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
        plVar15 = (long *)((ulong)plVar15 & (long)plVar16 - 1U);
      }
      else if (plVar16 <= plVar15) {
        uVar7 = 0;
        if (plVar16 != (long *)0x0) {
          uVar7 = (ulong)plVar15 / (ulong)plVar16;
        }
        plVar15 = (long *)((long)plVar15 - uVar7 * (long)plVar16);
      }
      *(long **)(lVar5 + (long)plVar15 * 8) = plVar4;
    }
  }
  else {
    func_0x000107c34510();
  }
  func_0x0001006201f4();
  FUN_100690634();
  return;
}



/* Entry: 10069030c; end: 10069061b;  */

void FUN_10069030c(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined1 in_NG;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *plVar7;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong uVar8;
  ulong extraout_x9_01;
  long *plVar9;
  long *extraout_x10;
  long *plVar10;
  long *plVar11;
  long *extraout_x11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *unaff_x25;
  
  func_0x0001006902f4();
  plVar14 = (long *)*param_4;
  plVar15 = (long *)param_3[1];
  if (plVar15 != (long *)0x0) {
    uVar6 = (long)plVar15 - 1;
    if (((ulong)plVar15 & uVar6) == 0) {
      unaff_x25 = (long *)(uVar6 & (ulong)plVar14);
      in_NG = false;
    }
    else {
      in_NG = (long)plVar14 - (long)plVar15 < 0;
      unaff_x25 = plVar14;
      if (plVar15 <= plVar14) {
        uVar8 = 0;
        if (plVar15 != (long *)0x0) {
          uVar8 = (ulong)plVar14 / (ulong)plVar15;
        }
        unaff_x25 = (long *)((long)plVar14 - uVar8 * (long)plVar15);
      }
    }
    plVar7 = *(long **)(*param_3 + (long)unaff_x25 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_1006903b8;
          plVar9 = (long *)plVar7[1];
          if (plVar9 != plVar14) break;
          in_NG = plVar7[2] - (long)plVar14 < 0;
          if ((long *)plVar7[2] == plVar14) {
            return;
          }
        }
        if (((ulong)plVar15 & uVar6) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar6);
        }
        else if (plVar15 <= plVar9) {
          uVar8 = 0;
          if (plVar15 != (long *)0x0) {
            uVar8 = (ulong)plVar9 / (ulong)plVar15;
          }
          plVar9 = (long *)((long)plVar9 - uVar8 * (long)plVar15);
        }
        in_NG = (long)plVar9 - (long)unaff_x25 < 0;
      } while (plVar9 == unaff_x25);
    }
  }
LAB_1006903b8:
  plVar7 = param_3 + 2;
  plVar4 = (long *)0x1c0;
  func_0x000107c60e20();
  *plVar4 = 0;
  plVar4[1] = (long)plVar14;
  plVar4[2] = (long)plVar14;
  plVar9 = plVar4 + 3;
  func_0x00010068df2c(plVar9,param_4 + 1);
  func_0x00010062016c();
  if ((plVar15 != (long *)0x0) && (FUN_1006912bc(param_1,param_2,(float)plVar15), !(bool)in_NG))
  goto LAB_1006905a0;
  bVar2 = (long *)0x2 < plVar15;
  bVar3 = plVar15 == (long *)0x3;
  func_0x000100620198((long)plVar15 << 1);
  plVar13 = extraout_x8;
  if (!bVar2 || bVar3) {
    plVar13 = extraout_x9;
  }
  if ((long)plVar13 - 1U == 0) {
    plVar13 = (long *)0x2;
  }
  else if (((ulong)plVar13 & (long)plVar13 - 1U) != 0) {
    func_0x000107c60c44();
    plVar9 = plVar13;
  }
  plVar15 = (long *)param_3[1];
  if (plVar15 < plVar13) {
LAB_100690450:
    if ((ulong)plVar13 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100690610);
      (*pcVar1)();
    }
    lVar5 = (long)plVar13 << 3;
    func_0x000107c60e20(lVar5);
    FUN_10069061c(param_3,lVar5);
    plVar15 = (long *)0x0;
    param_3[1] = (long)plVar13;
    lVar5 = *param_3;
    while (plVar13 != plVar15) {
      func_0x0001006201c4();
      lVar5 = extraout_x8_00;
      plVar15 = extraout_x9_00;
    }
    plVar9 = (long *)*plVar7;
    plVar15 = plVar13;
    if (plVar9 != (long *)0x0) {
      plVar10 = (long *)plVar9[1];
      uVar8 = (long)plVar13 - 1;
      uVar6 = 0;
      if (plVar13 != (long *)0x0) {
        uVar6 = (ulong)plVar10 / (ulong)plVar13;
      }
      plVar11 = plVar10;
      if (plVar13 <= plVar10) {
        plVar11 = (long *)((long)plVar10 - uVar6 * (long)plVar13);
      }
      if (((ulong)plVar13 & uVar8) == 0) {
        plVar11 = (long *)((ulong)plVar10 & uVar8);
      }
      *(long **)(lVar5 + (long)plVar11 * 8) = plVar7;
      while (plVar10 = plVar9, plVar9 = (long *)*plVar10, plVar9 != (long *)0x0) {
        plVar12 = (long *)plVar9[1];
        if (((ulong)plVar13 & uVar8) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar8);
        }
        else if (plVar13 <= plVar12) {
          uVar6 = 0;
          if (plVar13 != (long *)0x0) {
            uVar6 = (ulong)plVar12 / (ulong)plVar13;
          }
          plVar12 = (long *)((long)plVar12 - uVar6 * (long)plVar13);
        }
        if (plVar12 != plVar11) {
          if (*(long *)(lVar5 + (long)plVar12 * 8) == 0) {
            *(long **)(lVar5 + (long)plVar12 * 8) = plVar10;
            plVar11 = plVar12;
          }
          else {
            *plVar10 = *plVar9;
            func_0x000107c3432c();
            lVar5 = extraout_x8_01;
            uVar8 = extraout_x9_01;
            plVar9 = extraout_x10;
            plVar11 = extraout_x11;
          }
        }
      }
    }
  }
  else if (plVar13 < plVar15) {
    func_0x000107c34524();
    if ((plVar15 < (long *)0x3) || (((ulong)plVar15 & (long)plVar15 - 1U) != 0)) {
      func_0x000107c60c44();
    }
    else {
      func_0x000107c342e0();
    }
    if (plVar13 <= plVar9) {
      plVar13 = plVar9;
    }
    if (plVar13 < plVar15) {
      if (plVar13 != (long *)0x0) goto LAB_100690450;
      FUN_10069061c(param_3,0);
      param_3[1] = 0;
      plVar15 = (long *)0x0;
    }
    else {
      plVar15 = (long *)param_3[1];
    }
  }
  if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar15 - 1U & (ulong)plVar14);
  }
  else {
    unaff_x25 = plVar14;
    if (plVar15 <= plVar14) {
      uVar6 = 0;
      if (plVar15 != (long *)0x0) {
        uVar6 = (ulong)plVar14 / (ulong)plVar15;
      }
      unaff_x25 = (long *)((long)plVar14 - uVar6 * (long)plVar15);
    }
  }
LAB_1006905a0:
  lVar5 = *param_3;
  if (*(long *)(lVar5 + (long)unaff_x25 * 8) == 0) {
    *plVar4 = *plVar7;
    *plVar7 = (long)plVar4;
    *(long **)(lVar5 + (long)unaff_x25 * 8) = plVar7;
    if (*plVar4 != 0) {
      plVar14 = *(long **)(*plVar4 + 8);
      if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
        plVar14 = (long *)((ulong)plVar14 & (long)plVar15 - 1U);
      }
      else if (plVar15 <= plVar14) {
        uVar6 = 0;
        if (plVar15 != (long *)0x0) {
          uVar6 = (ulong)plVar14 / (ulong)plVar15;
        }
        plVar14 = (long *)((long)plVar14 - uVar6 * (long)plVar15);
      }
      *(long **)(lVar5 + (long)plVar14 * 8) = plVar4;
    }
  }
  else {
    func_0x000107c34510();
  }
  func_0x0001006201f4();
  FUN_100690634();
  return;
}



/* Entry: 10069061c; end: 100690633;  */

void FUN_10069061c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100690634; end: 100690673;  */

long * FUN_100690634(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10068e154(lVar1 + 0x18);
    }
    func_0x000107c343d0();
  }
  return param_1;
}



/* Entry: 100690674; end: 10069069f;  */

void FUN_100690674(void)

{
  return;
}



/* Entry: 1006906a0; end: 100690753;  */

void FUN_1006906a0(void)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x0001006577c8();
  func_0x00010065acbc();
  uVar3 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x19 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined1 *)(unaff_x20 + 0x48) = *(undefined1 *)(unaff_x19 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  FUN_10068e060(unaff_x20 + 0x50,unaff_x19 + 0x50);
  FUN_100066230(unaff_x20 + 200,unaff_x19 + 200);
  uVar2 = *(undefined8 *)(unaff_x19 + 0xe0);
  *(undefined8 *)(unaff_x20 + 0xe8) = *(undefined8 *)(unaff_x19 + 0xe8);
  *(undefined8 *)(unaff_x20 + 0xe0) = uVar2;
  FUN_10069077c(unaff_x20 + 0xf0,unaff_x19 + 0xf0);
  uVar6 = *(undefined8 *)(unaff_x19 + 0x128);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x120);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x138);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x130);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x139);
  uVar8 = *(undefined8 *)(unaff_x19 + 0x118);
  uVar7 = *(undefined8 *)(unaff_x19 + 0x110);
  *(undefined8 *)(unaff_x20 + 0x141) = *(undefined8 *)(unaff_x19 + 0x141);
  *(undefined8 *)(unaff_x20 + 0x139) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x128) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x120) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x138) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x130) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x118) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x110) = uVar7;
  FUN_1005fcf54(unaff_x20 + 0x150,unaff_x19 + 0x150);
  uVar1 = *(undefined1 *)(unaff_x19 + 0x180);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x170);
  *(undefined8 *)(unaff_x20 + 0x178) = *(undefined8 *)(unaff_x19 + 0x178);
  *(undefined8 *)(unaff_x20 + 0x170) = uVar2;
  *(undefined1 *)(unaff_x20 + 0x180) = uVar1;
  FUN_1005fcf54(unaff_x20 + 0x188,unaff_x19 + 0x188);
  return;
}



/* Entry: 100690754; end: 10069077b;  */

void FUN_100690754(long param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x18);
  if (cVar1 != *(char *)(param_2 + 0x18)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x18) == '\x01') {
        func_0x000104bee630();
        *(undefined1 *)(param_1 + 0x18) = 0;
      }
      return;
    }
    func_0x000107c31e14();
    *(undefined1 *)(param_1 + 0x18) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c31e1c();
    func_0x00010865f9e0();
    func_0x000107c31e00();
    return;
  }
  return;
}



/* Entry: 10069077c; end: 10069079f;  */

undefined8 FUN_10069077c(undefined8 param_1)

{
  FUN_100690754();
  return param_1;
}



/* Entry: 1006907a0; end: 1006907a7;  */

void FUN_1006907a0(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  uVar2 = *puVar1 & 0xfffffffffffffffe;
  if (uVar2 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(uVar2 + 8);
  }
  __ZdlPv(uVar2);
  *puVar1 = 0;
  return;
}



/* Entry: 1006907a8; end: 1006907d3;  */

undefined8 FUN_1006907a8(undefined8 param_1)

{
  FUN_1006907a0();
  FUN_1006907e0(param_1);
  return param_1;
}



/* Entry: 1006907d4; end: 1006907df;  */

undefined8 FUN_1006907d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1006907e0; end: 10069081b;  */

void FUN_1006907e0(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  long unaff_x19;
  
  FUN_1006907d4();
  if (param_1 != 0) {
    FUN_100690824();
  }
  func_0x000107c60e14();
  if (*(int *)(unaff_x19 + 0x28) == 0) {
    return;
  }
  switch(*(undefined4 *)(unaff_x19 + 0x28)) {
  case 1:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107c3497c();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_100690a38;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_100690a74();
    }
    break;
  case 2:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107c3497c();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_100690a38;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      func_0x000107c2a490();
    }
    break;
  case 3:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107c3497c();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_100690a38;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      func_0x000107c2a494();
    }
    break;
  case 4:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107c3497c();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_100690a38;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      func_0x000107c2a498();
    }
    break;
  default:
    goto LAB_100690a38;
  }
  func_0x000107c60e14();
LAB_100690a38:
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  return;
}



/* Entry: 10069081c; end: 100690823;  */

void FUN_10069081c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  uVar2 = *puVar1 & 0xfffffffffffffffe;
  if (uVar2 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(uVar2 + 8);
  }
  __ZdlPv(uVar2);
  *puVar1 = 0;
  return;
}



/* Entry: 100690824; end: 10069084f;  */

undefined8 FUN_100690824(undefined8 param_1)

{
  FUN_10069081c();
  FUN_100690850(param_1);
  return param_1;
}



/* Entry: 100690850; end: 100690873;  */

void FUN_100690850(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x000100690860();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010069089c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10df6f9f0)[extraout_x8] * 4 + 0x1006908a0))();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 100690874; end: 10069094b;  */

void FUN_100690874(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long unaff_x19;
  
  func_0x000100690860();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010069089c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10df6f9f0)[extraout_x8] * 4 + 0x1006908a0))();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10069094c; end: 10069097f;  */

undefined8 * FUN_10069094c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d9ce18;
  func_0x000100067dd0(param_1 + 1);
  return param_1;
}



/* Entry: 100690980; end: 10069098f;  */

void FUN_100690980(void)

{
  return;
}



/* Entry: 100690990; end: 100690a73;  */

void FUN_100690990(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  
  switch(*(undefined4 *)(param_1 + 0x28)) {
  case 1:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107c3497c();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_100690a38;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_100690a74();
    }
    break;
  case 2:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107c3497c();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_100690a38;
    if (*(long *)(param_1 + 0x20) != 0) {
      func_0x000107c2a490();
    }
    break;
  case 3:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107c3497c();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_100690a38;
    if (*(long *)(param_1 + 0x20) != 0) {
      func_0x000107c2a494();
    }
    break;
  case 4:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107c3497c();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_100690a38;
    if (*(long *)(param_1 + 0x20) != 0) {
      func_0x000107c2a498();
    }
    break;
  default:
    goto LAB_100690a38;
  }
  func_0x000107c60e14();
LAB_100690a38:
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 100690a74; end: 100690a9f;  */

undefined8 FUN_100690a74(undefined8 param_1)

{
  FUN_1006907a0();
  FUN_100690aa0(param_1);
  return param_1;
}



/* Entry: 100690aa0; end: 100690ad3;  */

/* WARNING: Possible PIC construction at 0x000100690ab8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100690abc) */
/* WARNING: Removing unreachable block (ram,0x000100690ac4) */
/* WARNING: Removing unreachable block (ram,0x000100690ac8) */

void FUN_100690aa0(long param_1)

{
  FUN_1006907d4();
  if (param_1 != 0) {
    FUN_1005f73a4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100690ad4; end: 100690aeb;  */

void FUN_100690ad4(void)

{
  return;
}



/* Entry: 100690aec; end: 100690b17;  */

undefined8 FUN_100690aec(undefined8 param_1)

{
  func_0x000100690ae4();
  FUN_100690b18(param_1);
  return param_1;
}



/* Entry: 100690b18; end: 100690bdf;  */

undefined8 FUN_100690b18(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  FUN_100067de0(param_1 + 0x60);
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_100690be0();
  }
  func_0x000107c60e14();
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_100690d80();
  }
  func_0x000107c60e14();
  if (*(long *)(param_1 + 0x78) != 0) {
    func_0x000107c2a4dc();
  }
  func_0x000107c60e14();
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_100690da4();
  }
  func_0x000107c60e14();
  if (*(long *)(param_1 + 0x88) != 0) {
    func_0x000107c2a4ec();
  }
  func_0x000107c60e14();
  if (*(long *)(param_1 + 0x90) != 0) {
    func_0x000107c2a50c();
  }
  func_0x000107c60e14();
  if (*(long *)(param_1 + 0x98) != 0) {
    func_0x000107c2a4f0();
  }
  func_0x000107c60e14();
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_10069b344();
  }
  func_0x000107c60e14();
  if (*(int *)(param_1 + 0xc0) != 0) {
    func_0x000107c2a4f4(param_1);
  }
  FUN_100690eec(param_1 + 0x48);
  FUN_100690f14(param_1 + 0x30);
  func_0x000100691048(param_1 + 0x18);
  if (extraout_x8 != 0) {
    func_0x000107c34a00();
  }
  return unaff_x19;
}



/* Entry: 100690be0; end: 100690c0b;  */

undefined8 FUN_100690be0(undefined8 param_1)

{
  func_0x000100690ae4();
  FUN_100690c0c(param_1);
  return param_1;
}



/* Entry: 100690c0c; end: 100690c2b;  */

void FUN_100690c0c(long param_1)

{
  long extraout_x8;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x000100690c1c();
  if ((uint)extraout_x8 < 7) {
                    /* WARNING: Could not recover jumptable at 0x000100690c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10df6fbbf)[extraout_x8] * 4 + 0x100690c5c))();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 100690c2c; end: 100690d7f;  */

void FUN_100690c2c(void)

{
  uint extraout_w8;
  undefined4 extraout_var;
  long unaff_x19;
  
  func_0x000100690c1c();
  if (extraout_w8 < 7) {
                    /* WARNING: Could not recover jumptable at 0x000100690c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10df6fbbf)[CONCAT44(extraout_var,extraout_w8)] * 4 + 0x100690c5c))
              ();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 100690d80; end: 100690da3;  */

undefined8 FUN_100690d80(undefined8 param_1)

{
  func_0x000100690ae4();
  return param_1;
}



/* Entry: 100690da4; end: 100690dcf;  */

undefined8 FUN_100690da4(undefined8 param_1)

{
  func_0x000100690ae4();
  FUN_100690dd0(param_1);
  return param_1;
}



/* Entry: 100690dd0; end: 100690ddf;  */

void FUN_100690dd0(long param_1)

{
  long extraout_x8;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x000100690c1c();
  if ((uint)extraout_x8 < 4) {
                    /* WARNING: Could not recover jumptable at 0x000100690e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10df6fba0)[extraout_x8] * 4 + 0x100690e10))();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 100690de0; end: 100690ebb;  */

void FUN_100690de0(void)

{
  uint extraout_w8;
  undefined4 extraout_var;
  long unaff_x19;
  
  func_0x000100690c1c();
  if (extraout_w8 < 4) {
                    /* WARNING: Could not recover jumptable at 0x000100690e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10df6fba0)[CONCAT44(extraout_var,extraout_w8)] * 4 + 0x100690e10))
              ();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 100690ebc; end: 100690edf;  */

undefined8 FUN_100690ebc(undefined8 param_1)

{
  func_0x000100690ae4();
  return param_1;
}



/* Entry: 100690ee0; end: 100690eeb;  */

void FUN_100690ee0(void)

{
  return;
}



/* Entry: 100690eec; end: 100690f13;  */

void FUN_100690eec(void)

{
  long extraout_x8;
  
  FUN_100690ee0();
  if (extraout_x8 != 0) {
    FUN_100690fac();
  }
  return;
}



/* Entry: 100690f14; end: 100690f43;  */

long * FUN_100690f14(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1000681a0(param_1);
  }
  return param_1;
}



/* Entry: 100690f44; end: 100690f6f;  */

long FUN_100690f44(long param_1)

{
  func_0x000100690ae4();
  FUN_100690f84(param_1 + 0x10);
  return param_1;
}



/* Entry: 100690f70; end: 100690f83;  */

void FUN_100690f70(void)

{
  FUN_100690f44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100690f84; end: 100690fab;  */

void FUN_100690f84(void)

{
  long extraout_x8;
  
  FUN_100690ee0();
  if (extraout_x8 != 0) {
    FUN_100690fac();
  }
  return;
}


