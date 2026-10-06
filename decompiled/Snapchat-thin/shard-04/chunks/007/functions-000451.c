/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103792334; end: 103792373;  */

void FUN_103792334(undefined8 *param_1)

{
  *param_1 = 0xd000000000000013;
  param_1[1] = 0x800000010f164130;
  return;
}



/* Entry: 103792374; end: 1037923d7;  */

void FUN_103792374(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x290;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1037923d8;
  plVar1[0x4e] = param_2;
  plVar1[0x4d] = param_4;
  plVar1[0x4c] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103792434,0,0);
  return;
}



/* Entry: 1037923d8; end: 103792413;  */

void FUN_1037923d8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103792410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103792414; end: 103792433;  */

void FUN_103792414(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x270) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x268) = param_2;
  *(undefined8 *)(unaff_x22 + 0x260) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103792434,0,0);
  return;
}



/* Entry: 103792434; end: 103792553;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103792434(void)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x238);
  uVar5 = *(ulong *)(unaff_x22 + 0x238);
  lVar3 = *(long *)(unaff_x22 + 0x240);
  uVar2 = uVar5;
  func_0x000107c614f0();
  (**(code **)(lVar3 + 0x28))();
  func_0x000107c615e8(uVar5);
  if ((uVar2 & 1) != 0) {
    func_0x0001000d224c(unaff_x22 + 0x210);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x228);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x230);
    lVar3 = unaff_x22 + 0x210;
    func_0x0001000a8868(lVar3,uVar6);
    *(undefined8 *)(unaff_x22 + 0x150) = 1;
    *(undefined8 *)(unaff_x22 + 0x160) = 0;
    *(undefined8 *)(unaff_x22 + 0x158) = 0;
    *(undefined8 *)(unaff_x22 + 0x170) = 0;
    *(undefined8 *)(unaff_x22 + 0x168) = 0;
    *(undefined1 *)(unaff_x22 + 0x178) = 5;
    FUN_10377d64c(unaff_x22 + 0x10,unaff_x22 + 0x150,uVar6,uVar4,lVar3);
    FUN_10379322c(unaff_x22 + 0x210);
    plVar1 = (long *)0x180;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x278) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_103792554;
    plVar1[0x24] = *(long *)(unaff_x22 + 0x270);
    lVar3 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
    uVar5 = uVar2 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar1[0x25] = uVar5;
    uVar2 = uVar2 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar1[0x26] = uVar2;
    lVar3 = 0;
    func_0x000107c5eea4();
    plVar1[0x27] = lVar3;
    lVar3 = *(long *)(lVar3 + -8);
    plVar1[0x28] = lVar3;
    uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar1[0x29] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_103792a0c,0,0);
    return;
  }
  (**(code **)(unaff_x22 + 0x260))(0,0);
                    /* WARNING: Could not recover jumptable at 0x000103792550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103792554; end: 1037925af;  */

void FUN_103792554(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x280) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x278));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1037925b0;
  }
  else {
    pcVar1 = FUN_103792670;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1037925b0; end: 10379266f;  */

void FUN_1037925b0(void)

{
  long lVar1;
  undefined8 *puVar2;
  long unaff_x22;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  pcVar3 = *(code **)(unaff_x22 + 0x260);
  puVar2 = (undefined8 *)(unaff_x22 + 0x68);
  func_0x0001000a8868(puVar2,*(undefined8 *)(unaff_x22 + 0x80));
  uVar4 = puVar2[4];
  uVar6 = puVar2[7];
  uVar5 = puVar2[6];
  uVar10 = puVar2[1];
  uVar9 = *puVar2;
  uVar8 = puVar2[3];
  uVar7 = puVar2[2];
  *(undefined8 *)(unaff_x22 + 0x138) = puVar2[5];
  *(undefined8 *)(unaff_x22 + 0x130) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x148) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x140) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x118) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x110) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x120) = uVar7;
  FUN_10377cd3c(1);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar4);
  *(undefined8 *)(unaff_x22 + 0x1e8) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x1e0) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x1f8) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x1f0) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x201) = *(undefined8 *)(unaff_x22 + 0x59);
  *(undefined8 *)(unaff_x22 + 0x1f9) = *(undefined8 *)(unaff_x22 + 0x51);
  (**(code **)(lVar1 + 8))(unaff_x22 + 0x1e0,uVar4,lVar1);
  (*pcVar3)(0,0);
  FUN_103765578(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010379266c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103792670; end: 103792833;  */

void FUN_103792670(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  *(undefined8 *)(unaff_x22 + 600) = *(undefined8 *)(unaff_x22 + 0x280);
  func_0x000107c614b0();
  uVar4 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  uVar2 = unaff_x22 + 0x248;
  func_0x000107c6147c(uVar2,unaff_x22 + 600,uVar4,&UNK_110691ef0,0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x280);
  pcVar5 = *(code **)(unaff_x22 + 0x260);
  if ((uVar2 & 1) == 0) {
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 600));
    puVar3 = (undefined8 *)(unaff_x22 + 0x68);
    func_0x0001000a8868(puVar3,*(undefined8 *)(unaff_x22 + 0x80));
    uVar6 = puVar3[4];
    uVar8 = puVar3[7];
    uVar7 = puVar3[6];
    uVar12 = puVar3[1];
    uVar11 = *puVar3;
    uVar10 = puVar3[3];
    uVar9 = puVar3[2];
    *(undefined8 *)(unaff_x22 + 0xb8) = puVar3[5];
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar6;
    *(undefined8 *)(unaff_x22 + 200) = uVar8;
    *(undefined8 *)(unaff_x22 + 0xc0) = uVar7;
    *(undefined8 *)(unaff_x22 + 0x98) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x90) = uVar11;
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar10;
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar9;
    FUN_10377cd3c(0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar1 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar6);
    *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0x40);
    *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0x38);
    *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0x50);
    *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0x48);
    *(undefined8 *)(unaff_x22 + 0x1a1) = *(undefined8 *)(unaff_x22 + 0x59);
    *(undefined8 *)(unaff_x22 + 0x199) = *(undefined8 *)(unaff_x22 + 0x51);
    (**(code **)(lVar1 + 0x10))((undefined8 *)(unaff_x22 + 0x180),uVar4,uVar6,lVar1);
    func_0x000107c614b0(uVar4);
    (*pcVar5)(1,uVar4);
    func_0x000107c614ac(uVar4);
    func_0x000107c614ac(uVar4);
    FUN_103765578(unaff_x22 + 0x10);
  }
  else {
    func_0x000107c614ac(uVar4);
    puVar3 = (undefined8 *)(unaff_x22 + 0x68);
    func_0x0001000a8868(puVar3,*(undefined8 *)(unaff_x22 + 0x80));
    uVar4 = puVar3[4];
    uVar7 = puVar3[7];
    uVar6 = puVar3[6];
    uVar11 = puVar3[1];
    uVar10 = *puVar3;
    uVar9 = puVar3[3];
    uVar8 = puVar3[2];
    *(undefined8 *)(unaff_x22 + 0xf8) = puVar3[5];
    *(undefined8 *)(unaff_x22 + 0xf0) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x108) = uVar7;
    *(undefined8 *)(unaff_x22 + 0x100) = uVar6;
    *(undefined8 *)(unaff_x22 + 0xd8) = uVar11;
    *(undefined8 *)(unaff_x22 + 0xd0) = uVar10;
    *(undefined8 *)(unaff_x22 + 0xe8) = uVar9;
    *(undefined8 *)(unaff_x22 + 0xe0) = uVar8;
    FUN_10377cd3c(1);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar1 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar4);
    *(undefined8 *)(unaff_x22 + 0x1b8) = *(undefined8 *)(unaff_x22 + 0x40);
    *(undefined8 *)(unaff_x22 + 0x1b0) = *(undefined8 *)(unaff_x22 + 0x38);
    *(undefined8 *)(unaff_x22 + 0x1c8) = *(undefined8 *)(unaff_x22 + 0x50);
    *(undefined8 *)(unaff_x22 + 0x1c0) = *(undefined8 *)(unaff_x22 + 0x48);
    *(undefined8 *)(unaff_x22 + 0x1d1) = *(undefined8 *)(unaff_x22 + 0x59);
    *(undefined8 *)(unaff_x22 + 0x1c9) = *(undefined8 *)(unaff_x22 + 0x51);
    (**(code **)(lVar1 + 8))((undefined8 *)(unaff_x22 + 0x1b0),uVar4,lVar1);
    (*pcVar5)(1,0);
    FUN_103765578(unaff_x22 + 0x10);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 600));
  }
                    /* WARNING: Could not recover jumptable at 0x000103792830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103792834; end: 103792973; -[_TtC20SendToRankingRecents34ContextualFeaturesSyncJobProcessor processJobWithJobConfig:input:context:onComplete:] */

void FUN_103792834(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    lVar1 = param_4;
    func_0x000107c61174(param_4);
    func_0x000107c5ee30(param_4);
    func_0x000107c61170(lVar1);
    func_0x00010006c090(param_4,param_2);
  }
  puVar2 = &UNK_110691d50;
  func_0x000107c613fc(&UNK_110691d50,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  puVar3 = &UNK_110691d78;
  func_0x000107c613fc(&UNK_110691d78,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(code **)(puVar3 + 0x18) = FUN_103793114;
  *(undefined **)(puVar3 + 0x20) = puVar2;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar2);
  uVar4 = 2;
  func_0x0001001ca524(2,0,100,4,0,0,&UNK_10dc0aa80,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 103792974; end: 103792a0b;  */

void FUN_103792974(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x120) = unaff_x20;
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x128) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x130) = uVar2;
  lVar3 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x138) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x140) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x148) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103792a0c,0,0);
  return;
}



/* Entry: 103792a0c; end: 103792b37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103792a0c(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(*(long *)(unaff_x22 + 0x120) + _DAT_112f91e30);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x150) = lVar2;
  if (lVar2 != 0) {
    *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x130);
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_103792b38;
    lVar3 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar3,1);
    uVar4 = 0x112f91e80;
    func_0x0001000285a8(0x112f91e80,&UNK_10dc0ac40);
    *(undefined **)(unaff_x22 + 0x90) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 200) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x98) = 0x42000000;
    *(code **)(unaff_x22 + 0xa0) = FUN_1037934f4;
    *(undefined **)(unaff_x22 + 0xa8) = &UNK_110691d90;
    *(long *)(unaff_x22 + 0xb0) = lVar3;
    func_0x000107c50794(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x0001037931c4();
  func_0x000107c613f8(&UNK_110691e60,lVar2,0,0);
  func_0x000107c61654();
  uVar4 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x130);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x148));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000103792b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103792b38; end: 103792b8f;  */

void FUN_103792b38(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x158) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_103792b90;
  }
  else {
    pcVar1 = FUN_103792f6c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103792b90; end: 103792d4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103792b90(double param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  double *pdVar6;
  double *pdVar7;
  long *plVar8;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x138);
  lVar3 = *(long *)(unaff_x22 + 0x140);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x128);
  func_0x0001003a4c00(*(undefined8 *)(unaff_x22 + 0x130),uVar5);
  (**(code **)(lVar3 + 0x30))(uVar5,1,uVar1);
  if ((int)uVar5 == 1) {
    func_0x0001000d1dcc(*(undefined8 *)(unaff_x22 + 0x128));
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 0x140) + 0x20))
              (*(undefined8 *)(unaff_x22 + 0x148),*(undefined8 *)(unaff_x22 + 0x128),
               *(undefined8 *)(unaff_x22 + 0x138));
    func_0x000107c5ee84();
    func_0x0001000d224c(unaff_x22 + 0x110);
    pdVar7 = *(double **)(unaff_x22 + 0x110);
    lVar3 = *(long *)(unaff_x22 + 0x118);
    pdVar6 = pdVar7;
    func_0x000107c614f0();
    (**(code **)(lVar3 + 0x60))();
    func_0x000107c615e8();
    if (-param_1 < (double)(long)pdVar6) {
      uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x150);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x138);
      lVar3 = *(long *)(unaff_x22 + 0x140);
      FUN_10379324c();
      func_0x000107c613f8(&UNK_110691ef0,pdVar7,0,0);
      *pdVar7 = -param_1;
      pdVar7[1] = (double)(long)pdVar6;
      func_0x000107c61654();
      func_0x000107c615e8(uVar2);
      (**(code **)(lVar3 + 8))(uVar1,uVar5);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x128);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x130);
      func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x148));
      func_0x000107c615c0(uVar5);
      func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000103792cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    (**(code **)(*(long *)(unaff_x22 + 0x140) + 8))
              (*(undefined8 *)(unaff_x22 + 0x148),*(undefined8 *)(unaff_x22 + 0x138));
  }
  lVar3 = *(long *)(unaff_x22 + 0x120) + _DAT_112f91e38;
  func_0x0001000a8868(lVar3,*(undefined8 *)(lVar3 + 0x18));
  plVar8 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x160) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_103792d4c;
  plVar8[0xe] = lVar3;
  lVar3 = 0;
  func_0x000107c5f804();
  plVar8[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar8[0x10] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x11] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103760dbc,0,0);
  return;
}



/* Entry: 103792d4c; end: 103792dab;  */

void FUN_103792d4c(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x168) = param_1;
  *(long *)(lVar2 + 0x170) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x160));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_103792dac;
  }
  else {
    pcVar1 = FUN_103792eb0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103792dac; end: 103792e57;  */

void FUN_103792dac(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x150);
  *(long *)(unaff_x22 + 0x50) = unaff_x22;
  *(code **)(unaff_x22 + 0x58) = FUN_103792e58;
  lVar1 = unaff_x22 + 0x50;
  func_0x000107c61448(lVar1,1);
  uVar2 = 0x112d61d38;
  func_0x0001000285a8(0x112d61d38,&UNK_10d927cc0);
  *(undefined **)(unaff_x22 + 0xd0) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x108) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xd8) = 0x42000000;
  *(undefined **)(unaff_x22 + 0xe0) = &UNK_10117968c;
  *(undefined **)(unaff_x22 + 0xe8) = &UNK_110691db8;
  *(long *)(unaff_x22 + 0xf0) = lVar1;
  func_0x000107c4e64c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x50);
  return;
}



/* Entry: 103792e58; end: 103792eaf;  */

void FUN_103792e58(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x70);
  *(long *)(*unaff_x22 + 0x178) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_103792f08;
  }
  else {
    pcVar1 = FUN_103792fcc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103792eb0; end: 103792f07;  */

void FUN_103792eb0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x150));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x130);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x148));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000103792f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103792f08; end: 103792f6b;  */

void FUN_103792f08(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x130);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x168));
  func_0x000107c615e8(uVar3);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000103792f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103792f6c; end: 103792fcb;  */

void FUN_103792f6c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x150);
  func_0x000107c61654();
  func_0x000107c615e8(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x130);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x148));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000103792fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103792fcc; end: 10379303b;  */

void FUN_103792fcc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x150);
  func_0x000107c61654();
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x130);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x148));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000103793038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10379303c; end: 10379309b; -[_TtC20SendToRankingRecents34ContextualFeaturesSyncJobProcessor init] */

void FUN_10379303c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendToRankingRecents.ContextualFeaturesSyncJobProcessor",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103793068);
  (*pcVar1)();
}



/* Entry: 10379309c; end: 1037930f3; -[_TtC20SendToRankingRecents34ContextualFeaturesSyncJobProcessor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037930d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037930dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10379309c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f91e30));
  FUN_10379322c(param_1 + _DAT_112f91e38);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f91e40));
  return;
}



/* Entry: 1037930f4; end: 103793113;  */

void FUN_1037930f4(void)

{
  func_0x000107c61168(&PTR_PTR_1128e9fd8);
  return;
}



/* Entry: 103793114; end: 10379311b;  */

void FUN_103793114(undefined8 param_1,long param_2)

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
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10379311c; end: 103793187;  */

void FUN_10379311c(void)

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
  plVar4 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_103793188;
  plVar3 = (long *)0x290;
  func_0x000107c615b8();
  plVar4[2] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_1037923d8;
  plVar3[0x4e] = lVar1;
  plVar3[0x4d] = lVar5;
  plVar3[0x4c] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103792434,0,0);
  return;
}



/* Entry: 103793188; end: 103793203;  */

void FUN_103793188(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001037931c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103793204; end: 103793213;  */

long FUN_103793204(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 103793214; end: 10379322b;  */

void FUN_103793214(long param_1)

{
  FUN_10379322c(param_1 + 0x20);
  return;
}



/* Entry: 10379322c; end: 10379324b;  */

void FUN_10379322c(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000103793240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 10379324c; end: 10379328b;  */

void FUN_10379324c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91e88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0ab70;
  func_0x000107c61520(&UNK_10dc0ab70,&UNK_110691ef0);
  puRam0000000112f91e88 = puVar1;
  return;
}



/* Entry: 10379328c; end: 1037933df;  */

uint FUN_10379328c(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 1037933e0; end: 103793403;  */

void FUN_1037933e0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001037931c4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103793404; end: 103793407;  */

void FUN_103793404(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91e90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0ab48;
  func_0x000107c61520(&UNK_10dc0ab48,&UNK_110691e60);
  puRam0000000112f91e90 = puVar1;
  return;
}



/* Entry: 103793408; end: 103793447;  */

void FUN_103793408(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91e90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0ab48;
  func_0x000107c61520(&UNK_10dc0ab48,&UNK_110691e60);
  puRam0000000112f91e90 = puVar1;
  return;
}



/* Entry: 103793448; end: 10379344f;  */

void FUN_103793448(long param_1)

{
  FUN_10379322c(param_1 + 0x20);
  return;
}



/* Entry: 103793450; end: 1037934f3;  */

void FUN_103793450(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  FUN_103794ea8(plVar1,*(undefined8 *)(param_1 + 0x38));
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
  **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = param_2;
  func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar3);
  return;
}



/* Entry: 1037934f4; end: 10379365f;  */

void FUN_1037934f4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  
  lVar4 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar5 - extraout_x12;
  plVar1 = (long *)(param_1 + 0x20);
  FUN_103794ea8(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar4 = *plVar1;
  if (param_3 != 0) {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar1 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar1 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar4,uVar2);
    return;
  }
  if (param_2 == 0) {
    lVar3 = 0;
    func_0x000107c5eea4();
  }
  else {
    func_0x000107c5ee94(lVar6,param_2);
    lVar3 = 0;
    func_0x000107c5eea4();
  }
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar6,param_2 == 0,1);
  func_0x0001003a4c00(lVar6,puVar5);
  func_0x0001003a4c00(puVar5,*(undefined8 *)(*(long *)(lVar4 + 0x40) + 0x28));
  func_0x000107c61450(lVar4);
  return;
}



/* Entry: 103793660; end: 103793673;  */

bool FUN_103793660(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103793674; end: 103793893;  */

void FUN_103793674(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x800000010f164150;
  uVar4 = 0xd000000000000010;
  if (cVar3 != '\x01') {
    uVar1 = 0xec0000006c65646f;
    uVar4 = 0x4d64696c61766e69;
  }
  uVar2 = 0x800000010f164130;
  uVar5 = 0xd000000000000013;
  if (cVar3 != '\0') {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103793894; end: 103793947;  */

void FUN_103793894(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  uVar1 = 0x800000010f164150;
  uVar3 = 0xd000000000000010;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0xec0000006c65646f;
    uVar3 = 0x4d64696c61766e69;
  }
  uVar2 = 0x800000010f164130;
  uVar4 = 0xd000000000000013;
  if (*unaff_x20 != '\0') {
    uVar2 = uVar1;
    uVar4 = uVar3;
  }
  *param_1 = uVar4;
  param_1[1] = uVar2;
  return;
}



/* Entry: 103793948; end: 1037939f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103793948(void)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x280);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2a0);
  lVar4 = unaff_x22 + 0x280;
  FUN_103794ea8(lVar4,uVar6);
  *(undefined8 *)(unaff_x22 + 0x198) = 0;
  *(undefined8 *)(unaff_x22 + 400) = 0;
  *(undefined8 *)(unaff_x22 + 0x1a8) = 0;
  *(undefined8 *)(unaff_x22 + 0x1a0) = 0;
  *(undefined8 *)(unaff_x22 + 0x1b0) = 0;
  *(undefined1 *)(unaff_x22 + 0x1b8) = 5;
  FUN_10377d64c(unaff_x22 + 0x10,unaff_x22 + 400,uVar6,uVar5,lVar4);
  FUN_103794e48(unaff_x22 + 0x280);
  plVar1 = (long *)0x260;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x2e0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1037939f4;
  plVar1[0x3c] = *(long *)(unaff_x22 + 0x2c8);
  lVar4 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x3d] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x3e] = uVar3;
  lVar4 = 0;
  func_0x000107c5eea4();
  plVar1[0x3f] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar1[0x40] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x41] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103793eb4,0,0);
  return;
}



/* Entry: 1037939f4; end: 103793a4f;  */

void FUN_1037939f4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x2e8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x2e0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_103793a50;
  }
  else {
    pcVar1 = FUN_103793b10;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103793a50; end: 103793b0f;  */

void FUN_103793a50(void)

{
  long lVar1;
  undefined8 *puVar2;
  long unaff_x22;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  pcVar3 = *(code **)(unaff_x22 + 0x2d0);
  puVar2 = (undefined8 *)(unaff_x22 + 0x68);
  FUN_103794ea8(puVar2,*(undefined8 *)(unaff_x22 + 0x80));
  uVar4 = puVar2[4];
  uVar6 = puVar2[7];
  uVar5 = puVar2[6];
  uVar10 = puVar2[1];
  uVar9 = *puVar2;
  uVar8 = puVar2[3];
  uVar7 = puVar2[2];
  *(undefined8 *)(unaff_x22 + 0x178) = puVar2[5];
  *(undefined8 *)(unaff_x22 + 0x170) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x188) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x180) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x158) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x150) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x168) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x160) = uVar7;
  FUN_10377cd3c(1);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  FUN_103794ea8(unaff_x22 + 0x10,uVar4);
  *(undefined8 *)(unaff_x22 + 600) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x250) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x268) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x260) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x271) = *(undefined8 *)(unaff_x22 + 0x59);
  *(undefined8 *)(unaff_x22 + 0x269) = *(undefined8 *)(unaff_x22 + 0x51);
  (**(code **)(lVar1 + 8))(unaff_x22 + 0x250,uVar4,lVar1);
  (*pcVar3)(0,0);
  FUN_103765578(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000103793b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103793b10; end: 103793e1b;  */

void FUN_103793b10(void)

{
  char cVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  long unaff_x22;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  *(undefined8 *)(unaff_x22 + 0x2b8) = *(undefined8 *)(unaff_x22 + 0x2e8);
  func_0x000107c614b0();
  uVar6 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  uVar2 = unaff_x22 + 0x1b9;
  func_0x000107c6147c(uVar2,unaff_x22 + 0x2b8,uVar6,&UNK_11068f370,0);
  pcVar8 = *(char **)(unaff_x22 + 0x2e8);
  if ((uVar2 & 1) == 0) {
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x2b8));
    *(char **)(unaff_x22 + 0x2c0) = pcVar8;
    func_0x000107c614b0(pcVar8);
    lVar4 = unaff_x22 + 0x2a8;
    func_0x000107c6147c(lVar4,(undefined8 *)(unaff_x22 + 0x2c0),uVar6,&UNK_1106921a8,0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x2e8);
    pcVar9 = *(code **)(unaff_x22 + 0x2d0);
    if ((int)lVar4 == 0) {
      func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x2c0));
      puVar5 = (undefined8 *)(unaff_x22 + 0x68);
      FUN_103794ea8(puVar5,*(undefined8 *)(unaff_x22 + 0x80));
      uVar10 = puVar5[4];
      uVar12 = puVar5[7];
      uVar11 = puVar5[6];
      uVar16 = puVar5[1];
      uVar15 = *puVar5;
      uVar14 = puVar5[3];
      uVar13 = puVar5[2];
      *(undefined8 *)(unaff_x22 + 0xb8) = puVar5[5];
      *(undefined8 *)(unaff_x22 + 0xb0) = uVar10;
      *(undefined8 *)(unaff_x22 + 200) = uVar12;
      *(undefined8 *)(unaff_x22 + 0xc0) = uVar11;
      *(undefined8 *)(unaff_x22 + 0x98) = uVar16;
      *(undefined8 *)(unaff_x22 + 0x90) = uVar15;
      *(undefined8 *)(unaff_x22 + 0xa8) = uVar14;
      *(undefined8 *)(unaff_x22 + 0xa0) = uVar13;
      FUN_10377cd3c(0);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
      lVar4 = *(long *)(unaff_x22 + 0x30);
      FUN_103794ea8(unaff_x22 + 0x10,uVar10);
      *(undefined8 *)(unaff_x22 + 0x1c8) = *(undefined8 *)(unaff_x22 + 0x40);
      *(undefined8 *)(unaff_x22 + 0x1c0) = *(undefined8 *)(unaff_x22 + 0x38);
      *(undefined8 *)(unaff_x22 + 0x1d8) = *(undefined8 *)(unaff_x22 + 0x50);
      *(undefined8 *)(unaff_x22 + 0x1d0) = *(undefined8 *)(unaff_x22 + 0x48);
      *(undefined8 *)(unaff_x22 + 0x1e1) = *(undefined8 *)(unaff_x22 + 0x59);
      *(undefined8 *)(unaff_x22 + 0x1d9) = *(undefined8 *)(unaff_x22 + 0x51);
      (**(code **)(lVar4 + 0x10))((undefined8 *)(unaff_x22 + 0x1c0),uVar6,uVar10,lVar4);
      func_0x000107c614b0(uVar6);
      (*pcVar9)(1,uVar6);
      func_0x000107c614ac(uVar6);
      func_0x000107c614ac(uVar6);
      FUN_103765578(unaff_x22 + 0x10);
      goto LAB_103793df8;
    }
    func_0x000107c614ac(uVar6);
    (*pcVar9)(1,0);
    FUN_103765578(unaff_x22 + 0x10);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x2c0);
  }
  else {
    func_0x000107c614ac();
    cVar1 = *(char *)(unaff_x22 + 0x1b9);
    if (cVar1 == '\0') {
      puVar5 = (undefined8 *)(unaff_x22 + 0x68);
      FUN_103794ea8(puVar5,*(undefined8 *)(unaff_x22 + 0x80));
      uVar6 = puVar5[4];
      uVar11 = puVar5[7];
      uVar10 = puVar5[6];
      uVar15 = puVar5[1];
      uVar14 = *puVar5;
      uVar13 = puVar5[3];
      uVar12 = puVar5[2];
      *(undefined8 *)(unaff_x22 + 0x138) = puVar5[5];
      *(undefined8 *)(unaff_x22 + 0x130) = uVar6;
      *(undefined8 *)(unaff_x22 + 0x148) = uVar11;
      *(undefined8 *)(unaff_x22 + 0x140) = uVar10;
      *(undefined8 *)(unaff_x22 + 0x118) = uVar15;
      *(undefined8 *)(unaff_x22 + 0x110) = uVar14;
      *(undefined8 *)(unaff_x22 + 0x128) = uVar13;
      *(undefined8 *)(unaff_x22 + 0x120) = uVar12;
      FUN_10377cd3c(1);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
      lVar4 = *(long *)(unaff_x22 + 0x30);
      FUN_103794ea8(unaff_x22 + 0x10,uVar6);
      *(undefined8 *)(unaff_x22 + 0x228) = *(undefined8 *)(unaff_x22 + 0x40);
      *(undefined8 *)(unaff_x22 + 0x220) = *(undefined8 *)(unaff_x22 + 0x38);
      *(undefined8 *)(unaff_x22 + 0x238) = *(undefined8 *)(unaff_x22 + 0x50);
      *(undefined8 *)(unaff_x22 + 0x230) = *(undefined8 *)(unaff_x22 + 0x48);
      *(undefined8 *)(unaff_x22 + 0x241) = *(undefined8 *)(unaff_x22 + 0x59);
      *(undefined8 *)(unaff_x22 + 0x239) = *(undefined8 *)(unaff_x22 + 0x51);
      (**(code **)(lVar4 + 8))((undefined8 *)(unaff_x22 + 0x220),uVar6,lVar4);
    }
    else {
      pcVar9 = *(code **)(unaff_x22 + 0x2d0);
      FUN_103761768();
      puVar3 = &UNK_11068f370;
      pcVar7 = pcVar8;
      func_0x000107c613f8(&UNK_11068f370,pcVar8,0,0);
      *pcVar7 = cVar1;
      puVar5 = (undefined8 *)(unaff_x22 + 0x68);
      FUN_103794ea8(puVar5,*(undefined8 *)(unaff_x22 + 0x80));
      uVar6 = puVar5[4];
      uVar11 = puVar5[7];
      uVar10 = puVar5[6];
      uVar15 = puVar5[1];
      uVar14 = *puVar5;
      uVar13 = puVar5[3];
      uVar12 = puVar5[2];
      *(undefined8 *)(unaff_x22 + 0xf8) = puVar5[5];
      *(undefined8 *)(unaff_x22 + 0xf0) = uVar6;
      *(undefined8 *)(unaff_x22 + 0x108) = uVar11;
      *(undefined8 *)(unaff_x22 + 0x100) = uVar10;
      *(undefined8 *)(unaff_x22 + 0xd8) = uVar15;
      *(undefined8 *)(unaff_x22 + 0xd0) = uVar14;
      *(undefined8 *)(unaff_x22 + 0xe8) = uVar13;
      *(undefined8 *)(unaff_x22 + 0xe0) = uVar12;
      FUN_10377cd3c(0);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
      lVar4 = *(long *)(unaff_x22 + 0x30);
      FUN_103794ea8(unaff_x22 + 0x10,uVar6);
      *(undefined8 *)(unaff_x22 + 0x1f8) = *(undefined8 *)(unaff_x22 + 0x40);
      *(undefined8 *)(unaff_x22 + 0x1f0) = *(undefined8 *)(unaff_x22 + 0x38);
      *(undefined8 *)(unaff_x22 + 0x208) = *(undefined8 *)(unaff_x22 + 0x50);
      *(undefined8 *)(unaff_x22 + 0x200) = *(undefined8 *)(unaff_x22 + 0x48);
      *(undefined8 *)(unaff_x22 + 0x211) = *(undefined8 *)(unaff_x22 + 0x59);
      *(undefined8 *)(unaff_x22 + 0x209) = *(undefined8 *)(unaff_x22 + 0x51);
      (**(code **)(lVar4 + 0x10))((undefined8 *)(unaff_x22 + 0x1f0),puVar3,uVar6,lVar4);
      func_0x000107c614ac(puVar3);
      puVar3 = &UNK_11068f370;
      func_0x000107c613f8(&UNK_11068f370,pcVar8,0,0);
      *pcVar8 = cVar1;
      (*pcVar9)(1,puVar3);
      func_0x000107c614ac(puVar3);
    }
    FUN_103765578(unaff_x22 + 0x10);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x2b8);
  }
  func_0x000107c614ac(uVar6);
LAB_103793df8:
                    /* WARNING: Could not recover jumptable at 0x000103793e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103793e1c; end: 103793eb3;  */

void FUN_103793e1c(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1e0) = unaff_x20;
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x1e8) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x1f0) = uVar2;
  lVar3 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x1f8) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x200) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x208) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103793eb4,0,0);
  return;
}



/* Entry: 103793eb4; end: 1037940ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103793eb4(void)

{
  ulong uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  puVar2 = *(undefined1 **)(*(long *)(unaff_x22 + 0x1e0) + _DAT_112f91ed8);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(undefined1 **)(unaff_x22 + 0x210) = puVar2;
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined8 *)(unaff_x22 + 0x218) =
         *(undefined8 *)(*(long *)(unaff_x22 + 0x1e0) + _DAT_112f91ee8);
    func_0x0001000d224c(unaff_x22 + 0x1b8);
    uVar1 = *(ulong *)(unaff_x22 + 0x1b8);
    lVar4 = *(long *)(unaff_x22 + 0x1c0);
    uVar3 = uVar1;
    func_0x000107c614f0();
    (**(code **)(lVar4 + 0x20))();
    func_0x000107c615e8(uVar1);
    if ((uVar3 & 1) == 0) {
      *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x1f0);
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_1037940ac;
      lVar4 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar4,1);
      uVar5 = 0x112f91e80;
      func_0x0001000285a8(0x112f91e80,&UNK_10dc0ac40);
      *(undefined **)(unaff_x22 + 0xd0) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x108) = uVar5;
      *(undefined8 *)(unaff_x22 + 0xd8) = 0x42000000;
      *(code **)(unaff_x22 + 0xe0) = FUN_1037934f4;
      *(undefined **)(unaff_x22 + 0xe8) = &UNK_110692020;
      *(long *)(unaff_x22 + 0xf0) = lVar4;
      func_0x000107c507e0(puVar2);
      lVar4 = unaff_x22 + 0x10;
    }
    else {
      uVar6 = *(undefined8 *)(unaff_x22 + 0x210);
      *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0x1d8;
      *(long *)(unaff_x22 + 0x50) = unaff_x22;
      *(code **)(unaff_x22 + 0x58) = FUN_103794304;
      lVar4 = unaff_x22 + 0x50;
      func_0x000107c61448(lVar4,1);
      uVar5 = 0x112f91468;
      func_0x0001000285a8(0x112f91468,&UNK_10dc099b8);
      *(undefined8 *)(unaff_x22 + 0x148) = uVar5;
      *(long *)(unaff_x22 + 0x130) = lVar4;
      *(undefined **)(unaff_x22 + 0x110) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x118) = 0x42000000;
      *(code **)(unaff_x22 + 0x120) = FUN_103793450;
      *(undefined **)(unaff_x22 + 0x128) = &UNK_110692048;
      func_0x000107c507a0(uVar6);
      lVar4 = unaff_x22 + 0x50;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(lVar4);
    return;
  }
  func_0x000103794de0();
  func_0x000107c613f8(&UNK_110692118,puVar2,0,0);
  *puVar2 = 0;
  func_0x000107c61654();
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1f0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x208));
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000103794018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1037940ac; end: 103794103;  */

void FUN_1037940ac(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x220) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_103794104;
  }
  else {
    pcVar1 = FUN_103794684;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103794104; end: 103794303;  */

void FUN_103794104(double param_1)

{
  double *pdVar1;
  double *pdVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1f8);
  lVar3 = *(long *)(unaff_x22 + 0x200);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1e8);
  func_0x0001003a4c00(*(undefined8 *)(unaff_x22 + 0x1f0),uVar6);
  (**(code **)(lVar3 + 0x30))(uVar6,1,uVar4);
  if ((int)uVar6 == 1) {
    func_0x0001000d1dcc(*(undefined8 *)(unaff_x22 + 0x1e8));
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 0x200) + 0x20))
              (*(undefined8 *)(unaff_x22 + 0x208),*(undefined8 *)(unaff_x22 + 0x1e8),
               *(undefined8 *)(unaff_x22 + 0x1f8));
    func_0x000107c5ee84();
    func_0x0001000d224c(unaff_x22 + 0x1c8);
    pdVar2 = *(double **)(unaff_x22 + 0x1c8);
    lVar3 = *(long *)(unaff_x22 + 0x1d0);
    pdVar1 = pdVar2;
    func_0x000107c614f0();
    (**(code **)(lVar3 + 0x18))();
    func_0x000107c615e8();
    if (-param_1 < (double)(long)pdVar1) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x210);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x208);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x1f8);
      lVar3 = *(long *)(unaff_x22 + 0x200);
      FUN_103794e68();
      func_0x000107c613f8(&UNK_1106921a8,pdVar2,0,0);
      *pdVar2 = -param_1;
      pdVar2[1] = (double)(long)pdVar1;
      func_0x000107c61654();
      func_0x000107c615e8(uVar5);
      (**(code **)(lVar3 + 8))(uVar6,uVar4);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x1e8);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x1f0);
      func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x208));
      func_0x000107c615c0(uVar6);
      func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000103794250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    (**(code **)(*(long *)(unaff_x22 + 0x200) + 8))
              (*(undefined8 *)(unaff_x22 + 0x208),*(undefined8 *)(unaff_x22 + 0x1f8));
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x210);
  *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0x1d8;
  *(long *)(unaff_x22 + 0x50) = unaff_x22;
  *(code **)(unaff_x22 + 0x58) = FUN_103794304;
  lVar3 = unaff_x22 + 0x50;
  func_0x000107c61448(lVar3,1);
  uVar4 = 0x112f91468;
  func_0x0001000285a8(0x112f91468,&UNK_10dc099b8);
  *(undefined8 *)(unaff_x22 + 0x148) = uVar4;
  *(long *)(unaff_x22 + 0x130) = lVar3;
  *(undefined **)(unaff_x22 + 0x110) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x118) = 0x42000000;
  *(code **)(unaff_x22 + 0x120) = FUN_103793450;
  *(undefined **)(unaff_x22 + 0x128) = &UNK_110692048;
  func_0x000107c507a0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x50);
  return;
}



/* Entry: 103794304; end: 10379435b;  */

void FUN_103794304(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x70);
  *(long *)(*unaff_x22 + 0x228) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_10379435c;
  }
  else {
    pcVar1 = FUN_1037946e8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10379435c; end: 10379441f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10379435c(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x1d8);
  *(long *)(unaff_x22 + 0x230) = lVar6;
  FUN_1037807d0(*(long *)(unaff_x22 + 0x1e0) + _DAT_112f91ee0,unaff_x22 + 400);
  lVar5 = *(long *)(unaff_x22 + 0x1a8);
  lVar1 = unaff_x22 + 400;
  FUN_103794ea8();
  if (lVar6 != 0) {
    func_0x000107c42a7c();
    func_0x000107c61180();
    if (lVar6 != 0) {
      lVar3 = lVar6;
      func_0x000107c5faec();
      func_0x000107c61170(lVar6);
      lVar6 = lVar3;
      goto FUN_10376011c;
    }
    lVar6 = 0;
  }
  lVar5 = 0;
FUN_10376011c:
  *(long *)(unaff_x22 + 0x238) = lVar5;
  plVar4 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x240) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_103794420;
  plVar4[0x18] = lVar5;
  plVar4[0x19] = lVar1;
  *(undefined1 *)(plVar4 + 0x26) = 1;
  plVar4[0x17] = lVar6;
  lVar1 = 0;
  func_0x000107c5f804();
  plVar4[0x1a] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x1b] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x1c] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103760184,0,0);
  return;
}



/* Entry: 103794420; end: 10379448f;  */

void FUN_103794420(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar2 + 0x238);
  *(undefined8 *)(lVar2 + 0x248) = param_1;
  *(long *)(lVar2 + 0x250) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x240));
  func_0x000107c6142c(uVar3);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_103794490;
  }
  else {
    pcVar1 = FUN_10379459c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103794490; end: 103794543;  */

void FUN_103794490(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x210);
  FUN_103794e48(unaff_x22 + 400);
  *(long *)(unaff_x22 + 0x90) = unaff_x22;
  *(code **)(unaff_x22 + 0x98) = FUN_103794544;
  lVar1 = unaff_x22 + 0x90;
  func_0x000107c61448(lVar1,1);
  uVar2 = 0x112d61d38;
  func_0x0001000285a8(0x112d61d38,&UNK_10d927cc0);
  *(undefined8 *)(unaff_x22 + 0x188) = uVar2;
  *(long *)(unaff_x22 + 0x170) = lVar1;
  *(undefined **)(unaff_x22 + 0x150) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x158) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x160) = &UNK_10117968c;
  *(undefined **)(unaff_x22 + 0x168) = &UNK_110692070;
  func_0x000107c4e644(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x90);
  return;
}



/* Entry: 103794544; end: 10379459b;  */

void FUN_103794544(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0xb0);
  *(long *)(*unaff_x22 + 600) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_103794608;
  }
  else {
    pcVar1 = FUN_10379474c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10379459c; end: 103794607;  */

void FUN_10379459c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x230);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x210));
  func_0x000107c61170(uVar2);
  FUN_103794e48(unaff_x22 + 400);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1f0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x208));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000103794604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103794608; end: 103794683;  */

void FUN_103794608(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1f0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x248));
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000103794680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103794684; end: 1037946e7;  */

void FUN_103794684(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x210);
  func_0x000107c61654();
  func_0x000107c615e8(uVar2);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1f0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x208));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001037946e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1037946e8; end: 10379474b;  */

void FUN_1037946e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x210);
  func_0x000107c61654();
  func_0x000107c615e8(uVar2);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1f0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x208));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000103794748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10379474c; end: 1037947cf;  */

void FUN_10379474c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x210);
  func_0x000107c61654();
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1f0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x208));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001037947cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1037947d0; end: 1037947ef;  */

void FUN_1037947d0(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x2d8) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x2d0) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x2c8) = in_x3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037947f0,0,0);
  return;
}



/* Entry: 1037947f0; end: 10379489b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037947f0(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x280);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2a0);
  lVar3 = unaff_x22 + 0x280;
  FUN_103794ea8(lVar3,uVar6);
  *(undefined8 *)(unaff_x22 + 0x198) = 0;
  *(undefined8 *)(unaff_x22 + 400) = 0;
  *(undefined8 *)(unaff_x22 + 0x1a8) = 0;
  *(undefined8 *)(unaff_x22 + 0x1a0) = 0;
  *(undefined8 *)(unaff_x22 + 0x1b0) = 0;
  *(undefined1 *)(unaff_x22 + 0x1b8) = 5;
  FUN_10377d64c(unaff_x22 + 0x10,unaff_x22 + 400,uVar6,uVar5,lVar3);
  FUN_103794e48(unaff_x22 + 0x280);
  plVar4 = (long *)0x260;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x2e0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10379489c;
  plVar4[0x3c] = *(long *)(unaff_x22 + 0x2c8);
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x3d] = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x3e] = uVar2;
  lVar3 = 0;
  func_0x000107c5eea4();
  plVar4[0x3f] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar4[0x40] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x41] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103793eb4,0,0);
  return;
}



/* Entry: 10379489c; end: 1037948f7;  */

void FUN_10379489c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x2e8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x2e0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_103795100;
  }
  else {
    pcVar1 = FUN_103795100;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1037948f8; end: 1037949ff; -[_TtC20SendToRankingRecents24FeaturesSyncJobProcessor processJobWithJobConfig:input:context:onComplete:] */

void FUN_1037948f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    param_2 = 0xf000000000000000;
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    lVar1 = param_4;
    func_0x000107c61174(param_4);
    func_0x000107c5ee30(param_4);
    func_0x000107c61170(lVar1);
  }
  puVar2 = &UNK_110691fb8;
  func_0x000107c613fc(&UNK_110691fb8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  pcVar3 = FUN_103794ad8;
  FUN_103794b44(FUN_103794ad8,puVar2);
  func_0x000107c61574(puVar2);
  func_0x0001000b44c0(param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar3);
  return;
}



/* Entry: 103794a00; end: 103794a5f; -[_TtC20SendToRankingRecents24FeaturesSyncJobProcessor init] */

void FUN_103794a00(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendToRankingRecents.FeaturesSyncJobProcessor",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103794a2c);
  (*pcVar1)();
}



/* Entry: 103794a60; end: 103794ab7; -[_TtC20SendToRankingRecents24FeaturesSyncJobProcessor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103794a9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103794aa0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103794a60(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f91ed8));
  FUN_103794e48(param_1 + _DAT_112f91ee0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f91ee8));
  return;
}



/* Entry: 103794ab8; end: 103794ad7;  */

void FUN_103794ab8(void)

{
  func_0x000107c61168(&PTR_PTR_1128ea0b0);
  return;
}



/* Entry: 103794ad8; end: 103794adf;  */

void FUN_103794ad8(undefined8 param_1,long param_2)

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
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103794ae0; end: 103794b43;  */

ulong FUN_103794ae0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 103794b44; end: 103794cb7;  */

undefined8 FUN_103794b44(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined8 unaff_x20;
  long alStack_50 [2];
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  iVar1 = (int)lVar2;
  func_0x000107c30abc();
  if (iVar1 == 0) {
    lVar2 = 0;
    func_0x000107c5fd0c();
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar2);
    puVar3 = &UNK_110691fe0;
    func_0x000107c613fc(&UNK_110691fe0,0x38,7);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(undefined8 *)(puVar3 + 0x20) = unaff_x20;
    *(undefined8 *)(puVar3 + 0x28) = param_1;
    *(undefined8 *)(puVar3 + 0x30) = param_2;
    func_0x000107c61174();
    func_0x000107c6157c(param_2);
    func_0x0001000abba4(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_10dc0ac20,puVar3);
  }
  else {
    puVar3 = &UNK_110692008;
    func_0x000107c613fc(&UNK_110692008,0x28,7);
    *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    *(undefined8 *)(puVar3 + 0x20) = param_2;
    func_0x000107c61174();
    func_0x000107c6157c(param_2);
    *(undefined **)((long)alStack_50 + -extraout_x8) = PTR___sytN_11034f1b0 + 8;
    func_0x0001001ca524(1,0,100,4,0,0,&UNK_10dc0ac30,puVar3);
    func_0x000107c61574(puVar3);
  }
  func_0x000107c61574();
  return 0;
}



/* Entry: 103794cb8; end: 103794d37;  */

void FUN_103794cb8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar4 = *(long *)(unaff_x20 + 0x30);
  plVar3 = (long *)0x2f0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x103795118;
  plVar3[0x5b] = lVar4;
  plVar3[0x5a] = lVar2;
  plVar3[0x59] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037947f0,0,0);
  return;
}



/* Entry: 103794d38; end: 103794da3;  */

void FUN_103794d38(void)

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
  plVar3 = (long *)0x2f0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_103794da4;
  plVar3[0x5b] = lVar4;
  plVar3[0x5a] = lVar2;
  plVar3[0x59] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103793948,0,0);
  return;
}



/* Entry: 103794da4; end: 103794e1f;  */

void FUN_103794da4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103794ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103794e20; end: 103794e2f;  */

long FUN_103794e20(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 103794e30; end: 103794e47;  */

void FUN_103794e30(long param_1)

{
  FUN_103794e48(param_1 + 0x20);
  return;
}



/* Entry: 103794e48; end: 103794e67;  */

void FUN_103794e48(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000103794e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 103794e68; end: 103794ea7;  */

void FUN_103794e68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91f28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0ad20;
  func_0x000107c61520(&UNK_10dc0ad20,&UNK_1106921a8);
  puRam0000000112f91f28 = puVar1;
  return;
}



/* Entry: 103794ea8; end: 103795097;  */

long * FUN_103794ea8(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 103795098; end: 1037950bb;  */

void FUN_103795098(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000103794de0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1037950bc; end: 1037950bf;  */

void FUN_1037950bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91f30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0acf8;
  func_0x000107c61520(&UNK_10dc0acf8,&UNK_110692118);
  puRam0000000112f91f30 = puVar1;
  return;
}



/* Entry: 1037950c0; end: 1037950ff;  */

void FUN_1037950c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91f30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0acf8;
  func_0x000107c61520(&UNK_10dc0acf8,&UNK_110692118);
  puRam0000000112f91f30 = puVar1;
  return;
}



/* Entry: 103795100; end: 10379511b;  */

void FUN_103795100(void)

{
  char cVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  long unaff_x22;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  *(undefined8 *)(unaff_x22 + 0x2b8) = *(undefined8 *)(unaff_x22 + 0x2e8);
  func_0x000107c614b0();
  uVar6 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  uVar2 = unaff_x22 + 0x1b9;
  func_0x000107c6147c(uVar2,unaff_x22 + 0x2b8,uVar6,&UNK_11068f370,0);
  pcVar8 = *(char **)(unaff_x22 + 0x2e8);
  if ((uVar2 & 1) == 0) {
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x2b8));
    *(char **)(unaff_x22 + 0x2c0) = pcVar8;
    func_0x000107c614b0(pcVar8);
    lVar4 = unaff_x22 + 0x2a8;
    func_0x000107c6147c(lVar4,(undefined8 *)(unaff_x22 + 0x2c0),uVar6,&UNK_1106921a8,0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x2e8);
    pcVar9 = *(code **)(unaff_x22 + 0x2d0);
    if ((int)lVar4 == 0) {
      func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x2c0));
      puVar5 = (undefined8 *)(unaff_x22 + 0x68);
      FUN_103794ea8(puVar5,*(undefined8 *)(unaff_x22 + 0x80));
      uVar10 = puVar5[4];
      uVar12 = puVar5[7];
      uVar11 = puVar5[6];
      uVar16 = puVar5[1];
      uVar15 = *puVar5;
      uVar14 = puVar5[3];
      uVar13 = puVar5[2];
      *(undefined8 *)(unaff_x22 + 0xb8) = puVar5[5];
      *(undefined8 *)(unaff_x22 + 0xb0) = uVar10;
      *(undefined8 *)(unaff_x22 + 200) = uVar12;
      *(undefined8 *)(unaff_x22 + 0xc0) = uVar11;
      *(undefined8 *)(unaff_x22 + 0x98) = uVar16;
      *(undefined8 *)(unaff_x22 + 0x90) = uVar15;
      *(undefined8 *)(unaff_x22 + 0xa8) = uVar14;
      *(undefined8 *)(unaff_x22 + 0xa0) = uVar13;
      FUN_10377cd3c(0);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
      lVar4 = *(long *)(unaff_x22 + 0x30);
      FUN_103794ea8(unaff_x22 + 0x10,uVar10);
      *(undefined8 *)(unaff_x22 + 0x1c8) = *(undefined8 *)(unaff_x22 + 0x40);
      *(undefined8 *)(unaff_x22 + 0x1c0) = *(undefined8 *)(unaff_x22 + 0x38);
      *(undefined8 *)(unaff_x22 + 0x1d8) = *(undefined8 *)(unaff_x22 + 0x50);
      *(undefined8 *)(unaff_x22 + 0x1d0) = *(undefined8 *)(unaff_x22 + 0x48);
      *(undefined8 *)(unaff_x22 + 0x1e1) = *(undefined8 *)(unaff_x22 + 0x59);
      *(undefined8 *)(unaff_x22 + 0x1d9) = *(undefined8 *)(unaff_x22 + 0x51);
      (**(code **)(lVar4 + 0x10))((undefined8 *)(unaff_x22 + 0x1c0),uVar6,uVar10,lVar4);
      func_0x000107c614b0(uVar6);
      (*pcVar9)(1,uVar6);
      func_0x000107c614ac(uVar6);
      func_0x000107c614ac(uVar6);
      FUN_103765578(unaff_x22 + 0x10);
      goto LAB_103793df8;
    }
    func_0x000107c614ac(uVar6);
    (*pcVar9)(1,0);
    FUN_103765578(unaff_x22 + 0x10);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x2c0);
  }
  else {
    func_0x000107c614ac();
    cVar1 = *(char *)(unaff_x22 + 0x1b9);
    if (cVar1 == '\0') {
      puVar5 = (undefined8 *)(unaff_x22 + 0x68);
      FUN_103794ea8(puVar5,*(undefined8 *)(unaff_x22 + 0x80));
      uVar6 = puVar5[4];
      uVar11 = puVar5[7];
      uVar10 = puVar5[6];
      uVar15 = puVar5[1];
      uVar14 = *puVar5;
      uVar13 = puVar5[3];
      uVar12 = puVar5[2];
      *(undefined8 *)(unaff_x22 + 0x138) = puVar5[5];
      *(undefined8 *)(unaff_x22 + 0x130) = uVar6;
      *(undefined8 *)(unaff_x22 + 0x148) = uVar11;
      *(undefined8 *)(unaff_x22 + 0x140) = uVar10;
      *(undefined8 *)(unaff_x22 + 0x118) = uVar15;
      *(undefined8 *)(unaff_x22 + 0x110) = uVar14;
      *(undefined8 *)(unaff_x22 + 0x128) = uVar13;
      *(undefined8 *)(unaff_x22 + 0x120) = uVar12;
      FUN_10377cd3c(1);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
      lVar4 = *(long *)(unaff_x22 + 0x30);
      FUN_103794ea8(unaff_x22 + 0x10,uVar6);
      *(undefined8 *)(unaff_x22 + 0x228) = *(undefined8 *)(unaff_x22 + 0x40);
      *(undefined8 *)(unaff_x22 + 0x220) = *(undefined8 *)(unaff_x22 + 0x38);
      *(undefined8 *)(unaff_x22 + 0x238) = *(undefined8 *)(unaff_x22 + 0x50);
      *(undefined8 *)(unaff_x22 + 0x230) = *(undefined8 *)(unaff_x22 + 0x48);
      *(undefined8 *)(unaff_x22 + 0x241) = *(undefined8 *)(unaff_x22 + 0x59);
      *(undefined8 *)(unaff_x22 + 0x239) = *(undefined8 *)(unaff_x22 + 0x51);
      (**(code **)(lVar4 + 8))((undefined8 *)(unaff_x22 + 0x220),uVar6,lVar4);
    }
    else {
      pcVar9 = *(code **)(unaff_x22 + 0x2d0);
      FUN_103761768();
      puVar3 = &UNK_11068f370;
      pcVar7 = pcVar8;
      func_0x000107c613f8(&UNK_11068f370,pcVar8,0,0);
      *pcVar7 = cVar1;
      puVar5 = (undefined8 *)(unaff_x22 + 0x68);
      FUN_103794ea8(puVar5,*(undefined8 *)(unaff_x22 + 0x80));
      uVar6 = puVar5[4];
      uVar11 = puVar5[7];
      uVar10 = puVar5[6];
      uVar15 = puVar5[1];
      uVar14 = *puVar5;
      uVar13 = puVar5[3];
      uVar12 = puVar5[2];
      *(undefined8 *)(unaff_x22 + 0xf8) = puVar5[5];
      *(undefined8 *)(unaff_x22 + 0xf0) = uVar6;
      *(undefined8 *)(unaff_x22 + 0x108) = uVar11;
      *(undefined8 *)(unaff_x22 + 0x100) = uVar10;
      *(undefined8 *)(unaff_x22 + 0xd8) = uVar15;
      *(undefined8 *)(unaff_x22 + 0xd0) = uVar14;
      *(undefined8 *)(unaff_x22 + 0xe8) = uVar13;
      *(undefined8 *)(unaff_x22 + 0xe0) = uVar12;
      FUN_10377cd3c(0);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
      lVar4 = *(long *)(unaff_x22 + 0x30);
      FUN_103794ea8(unaff_x22 + 0x10,uVar6);
      *(undefined8 *)(unaff_x22 + 0x1f8) = *(undefined8 *)(unaff_x22 + 0x40);
      *(undefined8 *)(unaff_x22 + 0x1f0) = *(undefined8 *)(unaff_x22 + 0x38);
      *(undefined8 *)(unaff_x22 + 0x208) = *(undefined8 *)(unaff_x22 + 0x50);
      *(undefined8 *)(unaff_x22 + 0x200) = *(undefined8 *)(unaff_x22 + 0x48);
      *(undefined8 *)(unaff_x22 + 0x211) = *(undefined8 *)(unaff_x22 + 0x59);
      *(undefined8 *)(unaff_x22 + 0x209) = *(undefined8 *)(unaff_x22 + 0x51);
      (**(code **)(lVar4 + 0x10))((undefined8 *)(unaff_x22 + 0x1f0),puVar3,uVar6,lVar4);
      func_0x000107c614ac(puVar3);
      puVar3 = &UNK_11068f370;
      func_0x000107c613f8(&UNK_11068f370,pcVar8,0,0);
      *pcVar8 = cVar1;
      (*pcVar9)(1,puVar3);
      func_0x000107c614ac(puVar3);
    }
    FUN_103765578(unaff_x22 + 0x10);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x2b8);
  }
  func_0x000107c614ac(uVar6);
LAB_103793df8:
                    /* WARNING: Could not recover jumptable at 0x000103793e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10379511c; end: 1037951cf;  */

void FUN_10379511c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x38);
  plVar3 = (long *)(param_1 + 0x20);
  func_0x000103796bbc();
  lVar4 = *plVar3;
  if (param_3 != 0) {
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar3 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar3 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar4,uVar1);
    return;
  }
  if (param_2 == 0) {
    param_2 = 0;
    lVar2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar3 = *(long **)(*(long *)(lVar4 + 0x40) + 0x28);
  *plVar3 = param_2;
  plVar3[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar4);
  return;
}



/* Entry: 1037951d0; end: 1037951e3;  */

bool FUN_1037951d0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1037951e4; end: 103795403;  */

void FUN_1037951e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x800000010f164150;
  uVar4 = 0xd000000000000010;
  if (cVar3 != '\x01') {
    uVar1 = 0xec0000006c65646f;
    uVar4 = 0x4d64696c61766e69;
  }
  uVar2 = 0x800000010f164130;
  uVar5 = 0xd000000000000013;
  if (cVar3 != '\0') {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103795404; end: 1037954a3;  */

void FUN_103795404(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  uVar1 = 0x800000010f164150;
  uVar3 = 0xd000000000000010;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0xec0000006c65646f;
    uVar3 = 0x4d64696c61766e69;
  }
  uVar2 = 0x800000010f164130;
  uVar4 = 0xd000000000000013;
  if (*unaff_x20 != '\0') {
    uVar2 = uVar1;
    uVar4 = uVar3;
  }
  *param_1 = uVar4;
  param_1[1] = uVar2;
  return;
}



/* Entry: 1037954a4; end: 10379555b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037954a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1d0);
  func_0x0001000d224c(unaff_x22 + 0x1a0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1c0);
  lVar4 = unaff_x22 + 0x1a0;
  func_0x000103796bbc(lVar4,uVar1);
  *(undefined8 *)(unaff_x22 + 0x110) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x120) = 0;
  *(undefined8 *)(unaff_x22 + 0x118) = 0;
  *(undefined8 *)(unaff_x22 + 0x130) = 0;
  *(undefined8 *)(unaff_x22 + 0x128) = 0;
  *(undefined1 *)(unaff_x22 + 0x138) = 3;
  FUN_10377d64c(unaff_x22 + 0x10,unaff_x22 + 0x110,uVar1,uVar3,lVar4);
  func_0x000103796b9c(unaff_x22 + 0x1a0);
  plVar5 = (long *)0x240;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1e8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10379555c;
  lVar4 = *(long *)(unaff_x22 + 0x1c8);
  plVar5[0x3b] = *(long *)(unaff_x22 + 0x1d0);
  plVar5[0x3c] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103795770,0,0);
  return;
}



/* Entry: 10379555c; end: 1037955b7;  */

void FUN_10379555c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1f0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1e8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1037955b8;
  }
  else {
    pcVar1 = FUN_103795674;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1037955b8; end: 103795673;  */

void FUN_1037955b8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  pcVar1 = *(code **)(unaff_x22 + 0x1d8);
  puVar3 = (undefined8 *)(unaff_x22 + 0x68);
  func_0x000103796bbc(puVar3,*(undefined8 *)(unaff_x22 + 0x80));
  uVar4 = puVar3[4];
  uVar6 = puVar3[7];
  uVar5 = puVar3[6];
  uVar10 = puVar3[1];
  uVar9 = *puVar3;
  uVar8 = puVar3[3];
  uVar7 = puVar3[2];
  *(undefined8 *)(unaff_x22 + 0xf8) = puVar3[5];
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x108) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar5;
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar10;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar8;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar7;
  FUN_10377cd3c(1);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x000103796bbc(unaff_x22 + 0x10,uVar4);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x191) = *(undefined8 *)(unaff_x22 + 0x59);
  *(undefined8 *)(unaff_x22 + 0x189) = *(undefined8 *)(unaff_x22 + 0x51);
  (**(code **)(lVar2 + 8))(unaff_x22 + 0x170,uVar4,lVar2);
  (*pcVar1)(0,0);
  FUN_103765578(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000103795670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103795674; end: 103795757;  */

void FUN_103795674(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1f0);
  pcVar1 = *(code **)(unaff_x22 + 0x1d8);
  puVar3 = (undefined8 *)(unaff_x22 + 0x68);
  func_0x000103796bbc(puVar3,*(undefined8 *)(unaff_x22 + 0x80));
  uVar5 = puVar3[4];
  uVar7 = puVar3[7];
  uVar6 = puVar3[6];
  uVar11 = puVar3[1];
  uVar10 = *puVar3;
  uVar9 = puVar3[3];
  uVar8 = puVar3[2];
  *(undefined8 *)(unaff_x22 + 0xb8) = puVar3[5];
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar5;
  *(undefined8 *)(unaff_x22 + 200) = uVar7;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar10;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar8;
  FUN_10377cd3c(0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x000103796bbc(unaff_x22 + 0x10,uVar5);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x161) = *(undefined8 *)(unaff_x22 + 0x59);
  *(undefined8 *)(unaff_x22 + 0x159) = *(undefined8 *)(unaff_x22 + 0x51);
  (**(code **)(lVar2 + 0x10))(unaff_x22 + 0x140,uVar4,uVar5,lVar2);
  func_0x000107c614b0(uVar4);
  (*pcVar1)(1,uVar4);
  func_0x000107c614ac(uVar4);
  func_0x000107c614ac(uVar4);
  FUN_103765578(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000103795754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103795758; end: 10379576f;  */

void FUN_103795758(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1d8) = param_1;
  *(undefined8 *)(unaff_x22 + 0x1e0) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103795770,0,0);
  return;
}



/* Entry: 103795770; end: 1037959c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103795770(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x1e0);
  func_0x0001000d224c(unaff_x22 + 0x1b8);
  puVar2 = *(undefined1 **)(unaff_x22 + 0x1b8);
  lVar3 = *(long *)(unaff_x22 + 0x1c0);
  *(undefined1 **)(unaff_x22 + 0x1e8) = puVar2;
  lVar5 = *(long *)(lVar5 + _DAT_112f91fa8);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x1f0) = lVar5;
  if (lVar5 == 0) {
    func_0x000107c615e8();
    func_0x000103796b34();
    func_0x000107c613f8(&UNK_1106923a8,puVar2,0,0);
    *puVar2 = 0;
    func_0x000107c61654();
  }
  else {
    uVar6 = *(ulong *)(unaff_x22 + 0x1d8);
    puVar1 = puVar2;
    func_0x000107c614f0();
    (**(code **)(lVar3 + 8))(uVar6,puVar1,lVar3);
    *(ulong *)(unaff_x22 + 0x1f8) = uVar6;
    *(undefined1 **)(unaff_x22 + 0x200) = puVar1;
    if (puVar1 != (undefined1 *)0x0) {
      if ((uVar6 == 0x656e6f6e && puVar1 == (undefined1 *)0xe400000000000000) ||
         (func_0x000107c605b8(), (uVar6 & 1) != 0)) {
        func_0x000107c6142c(puVar1);
        *(long *)(unaff_x22 + 0x90) = unaff_x22;
        *(code **)(unaff_x22 + 0x98) = FUN_1037959c8;
        lVar3 = unaff_x22 + 0x90;
        func_0x000107c61448(lVar3,1);
        uVar4 = 0x112d61d38;
        func_0x0001000285a8(0x112d61d38,&UNK_10d927cc0);
        *(undefined8 *)(unaff_x22 + 0x188) = uVar4;
        *(long *)(unaff_x22 + 0x170) = lVar3;
        *(undefined **)(unaff_x22 + 0x150) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(unaff_x22 + 0x158) = 0x42000000;
        *(undefined **)(unaff_x22 + 0x160) = &UNK_10117968c;
        *(undefined **)(unaff_x22 + 0x168) = &UNK_110692300;
        func_0x000107c4ff70(lVar5);
        lVar3 = unaff_x22 + 0x90;
      }
      else {
        *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x1c8;
        *(long *)(unaff_x22 + 0x10) = unaff_x22;
        *(undefined8 *)(unaff_x22 + 0x18) = 0x103795a5c;
        lVar3 = unaff_x22 + 0x10;
        func_0x000107c61448(lVar3,1);
        uVar4 = 0x112f91760;
        func_0x0001000285a8(0x112f91760,&UNK_10dc09fc0);
        *(undefined **)(unaff_x22 + 0xd0) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(unaff_x22 + 0x108) = uVar4;
        *(undefined8 *)(unaff_x22 + 0xd8) = 0x42000000;
        *(code **)(unaff_x22 + 0xe0) = FUN_10379511c;
        *(undefined **)(unaff_x22 + 0xe8) = &UNK_1106922b0;
        *(long *)(unaff_x22 + 0xf0) = lVar3;
        func_0x000107c61434(puVar1);
        func_0x000107c507e4(lVar5);
        lVar3 = unaff_x22 + 0x10;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(lVar3);
      return;
    }
    func_0x000107c615e8(lVar5);
    func_0x000107c615e8(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010379591c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1037959c8; end: 103795abb;  */

void FUN_1037959c8(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0xb0);
  *(long *)(*unaff_x22 + 0x208) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = (code *)0x103795a20;
  }
  else {
    pcVar1 = FUN_103796060;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103795abc; end: 103795be3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103795abc(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x1d0);
  lVar5 = *(long *)(unaff_x22 + 0x200);
  if (lVar4 != 0) {
    uVar2 = *(ulong *)(unaff_x22 + 0x1f8);
    if (lVar5 == lVar4 && uVar2 == *(ulong *)(unaff_x22 + 0x1c8)) {
      uVar1 = *(undefined8 *)(unaff_x22 + 0x1e8);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x1f0);
      func_0x000107c61430(lVar4,3);
      func_0x000107c615e8(uVar6);
      func_0x000107c615e8(uVar1);
    }
    else {
      func_0x000107c605b8(uVar2,lVar5,*(ulong *)(unaff_x22 + 0x1c8),lVar4,0);
      func_0x000107c6142c(lVar4);
      func_0x000107c6142c(lVar5);
      if ((uVar2 & 1) == 0) goto LAB_10375f4e4;
      uVar6 = *(undefined8 *)(unaff_x22 + 0x200);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x1e8);
      func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x1f0));
      func_0x000107c615e8(uVar1);
      func_0x000107c6142c(uVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x000103795be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c6142c(lVar5);
LAB_10375f4e4:
  lVar7 = *(long *)(unaff_x22 + 0x200);
  plVar3 = (long *)(*(long *)(unaff_x22 + 0x1e0) + _DAT_112f91fb0);
  func_0x000103796bbc(plVar3,plVar3[3]);
  lVar5 = *plVar3;
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x218) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_103795be4;
  lVar4 = *(long *)(unaff_x22 + 0x1f8);
  plVar3[6] = lVar7;
  plVar3[7] = lVar5;
  plVar3[5] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10375f500,0,0);
  return;
}



/* Entry: 103795be4; end: 103795c4f;  */

void FUN_103795be4(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x220) = param_1;
  *(long *)(lVar2 + 0x228) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x218));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_103795c50;
  }
  else {
    func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x200));
    pcVar1 = FUN_103795f70;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103795c50; end: 103795f6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103795c50(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  uint uVar12;
  long lVar13;
  
  iVar2 = (int)*(undefined8 *)(unaff_x22 + 0x220);
  func_0x000107c404a8();
  lVar9 = *(long *)(unaff_x22 + 0x220);
  if (iVar2 == 2) {
    func_0x0001000d224c(unaff_x22 + 400);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x1a8);
    lVar13 = *(long *)(unaff_x22 + 0x1b0);
    func_0x000103796bbc(unaff_x22 + 400,uVar5);
    func_0x000107c3e268();
    func_0x000107c61180();
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103795f70);
      (*pcVar1)();
    }
    lVar10 = *(long *)(unaff_x22 + 0x228);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1d8);
    FUN_103796280(uVar3);
    lVar4 = lVar9;
    uVar7 = uVar3;
    (**(code **)(lVar13 + 8))(lVar9,uVar3,uVar5,lVar13);
    if (lVar10 != 0) {
      uVar11 = *(undefined8 *)(unaff_x22 + 0x200);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x1e8);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x1f0);
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x220));
      func_0x000107c615e8(uVar7);
      func_0x000107c615e8(uVar5);
      func_0x000107c6142c(uVar3);
      func_0x000107c61170(lVar9);
      func_0x000107c6142c(uVar11);
      func_0x000103796b9c(unaff_x22 + 400);
      goto LAB_103795d90;
    }
    lVar13 = *(long *)(unaff_x22 + 0x1d8);
    func_0x000107c6142c(uVar3);
    func_0x000107c61170(lVar9);
    func_0x000103796b9c(unaff_x22 + 400);
    uVar12 = (uint)uVar5;
    if (lVar13 == 0) {
      func_0x000101edeb30(lVar4,uVar7,uVar5);
      if ((uVar12 & 0xff) == 1) goto LAB_103795e20;
    }
    else if (lVar13 == 2) {
      func_0x000101edeb30(lVar4,uVar7);
      if ((uVar12 & 0xff) == 3) goto LAB_103795e20;
    }
    else {
      if (lVar13 != 1) {
        func_0x0001000285a8(0x112f92000,&UNK_10dc0add8);
                    /* WARNING: Could not recover jumptable at 0x00010bdb99d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ss27_diagnoseUnexpectedEnumCase4types5NeverOxm_tlF_11034ec80)();
        return;
      }
      func_0x000101edeb30(lVar4,uVar7);
      if ((uVar12 & 0xff) == 2) {
LAB_103795e20:
        uVar5 = *(undefined8 *)(unaff_x22 + 0x1f8);
        uVar7 = *(undefined8 *)(unaff_x22 + 0x200);
        uVar3 = *(undefined8 *)(unaff_x22 + 0x1f0);
        func_0x000107c5fadc(uVar5,uVar7);
        *(undefined8 *)(unaff_x22 + 0x230) = uVar5;
        func_0x000107c6142c(uVar7);
        *(long *)(unaff_x22 + 0x50) = unaff_x22;
        *(undefined8 *)(unaff_x22 + 0x58) = 0x103795fac;
        lVar9 = unaff_x22 + 0x50;
        func_0x000107c61448(lVar9,1);
        uVar5 = 0x112d61d38;
        func_0x0001000285a8(0x112d61d38,&UNK_10d927cc0);
        *(undefined8 *)(unaff_x22 + 0x148) = uVar5;
        *(long *)(unaff_x22 + 0x130) = lVar9;
        *(undefined **)(unaff_x22 + 0x110) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(unaff_x22 + 0x118) = 0x42000000;
        *(undefined **)(unaff_x22 + 0x120) = &UNK_10117968c;
        *(undefined **)(unaff_x22 + 0x128) = &UNK_1106922d8;
        func_0x000107c4e648(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x50);
        return;
      }
    }
    lVar9 = *(long *)(unaff_x22 + 0x220);
    puVar6 = *(undefined1 **)(unaff_x22 + 0x200);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1f0);
    func_0x000107c6142c();
    func_0x000103796b34();
    func_0x000107c613f8(&UNK_1106923a8,puVar6,0,0);
    uVar8 = 2;
  }
  else {
    puVar6 = *(undefined1 **)(unaff_x22 + 0x200);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1f0);
    func_0x000107c6142c();
    func_0x000103796b34();
    func_0x000107c613f8(&UNK_1106923a8,puVar6,0,0);
    uVar8 = 1;
  }
  *puVar6 = uVar8;
  func_0x000107c61654();
  func_0x000107c61170(lVar9);
  func_0x000107c615e8(uVar7);
  func_0x000107c615e8(uVar5);
LAB_103795d90:
                    /* WARNING: Could not recover jumptable at 0x000103795dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103795f70; end: 103796003;  */

void FUN_103795f70(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1e8);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x1f0));
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000103795fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103796004; end: 10379605f;  */

void FUN_103796004(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1f0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x220));
  func_0x000107c615e8(uVar2);
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010379605c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103796060; end: 1037960af;  */

void FUN_103796060(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1f0);
  func_0x000107c61654();
  func_0x000107c615e8(uVar2);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001037960ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1037960b0; end: 103796113;  */

void FUN_1037960b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1f0);
  func_0x000107c61654();
  func_0x000107c6142c(uVar3);
  func_0x000107c615e8(uVar2);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000103796110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103796114; end: 103796183;  */

void FUN_103796114(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1f0);
  func_0x000107c61654();
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uVar2);
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000103796180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103796184; end: 10379627f; -[_TtC20SendToRankingRecents21ModelSyncJobProcessor processJobWithJobConfig:input:context:onComplete:] */

void FUN_103796184(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4(param_6);
  if (param_4 == 0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    param_2 = 0xf000000000000000;
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    lVar1 = param_4;
    func_0x000107c61174(param_4);
    func_0x000107c5ee30(param_4);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c60bc4(param_6);
  uVar2 = param_3;
  FUN_1037967f8(param_3,param_1,param_6);
  func_0x000107c60bd0(param_6);
  func_0x000107c60bd0(param_6);
  func_0x0001000b44c0(param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


