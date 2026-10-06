/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102dcff08; end: 102dcff0f;  */

void FUN_102dcff08(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (param_2 >> 0x3c < 0xf) {
    uVar1 = (uint)(param_2 >> 0x20);
    uVar3 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar3 == 0) {
        if ((param_2 & 0xff000000000000) != 0) goto LAB_102dce8b4;
LAB_102dce894:
        func_0x0001000b44c0();
      }
      else if ((long)(int)param_1 != param_1 >> 0x20) {
LAB_102dce8d4:
        func_0x000100de78a0();
        goto LAB_102dce8b4;
      }
    }
    else {
      if (uVar3 != 2) goto LAB_102dce894;
      if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 0x18)) goto LAB_102dce8d4;
    }
  }
  param_1 = 0;
  param_2 = 0xf000000000000000;
LAB_102dce8b4:
  plVar4 = *(long **)(*(long *)(lVar2 + 0x40) + 0x28);
  *plVar4 = param_1;
  plVar4[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar2);
  return;
}



/* Entry: 102dcff10; end: 102dcff83;  */

long FUN_102dcff10(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102dcff84; end: 102dd0183;  */

undefined8 * FUN_102dcff84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  uVar2 = param_2[7];
  uVar4 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar4;
  param_1[7] = uVar2;
  uVar5 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  func_0x000107c61174();
  func_0x000107c61174(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x000107c61434(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(uVar5);
  return param_1;
}



/* Entry: 102dd0184; end: 102dd0257;  */

int FUN_102dd0184(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102dd0258; end: 102dd05bb;  */

long FUN_102dd0258(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  puVar1 = &UNK_1105d23b0;
  func_0x000107c613fc(&UNK_1105d23b0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  puVar2 = &UNK_1105d23d8;
  func_0x000107c613fc(&UNK_1105d23d8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  puVar3 = &UNK_1105d2400;
  func_0x000107c613fc(&UNK_1105d2400,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_6;
  puVar4 = &UNK_1105d2428;
  func_0x000107c613fc(&UNK_1105d2428,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_6;
  puVar5 = &UNK_1105d2450;
  func_0x000107c613fc(&UNK_1105d2450,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = param_6;
  puVar6 = &UNK_1105d2478;
  func_0x000107c613fc(&UNK_1105d2478,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = param_6;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = param_7;
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x0001008f9e34(0);
  func_0x000107c613fc();
  func_0x0001008f9e54();
  puVar8 = &UNK_1105d24a0;
  func_0x000107c613fc(&UNK_1105d24a0,0xa8,7);
  *(code **)(puVar8 + 0x10) = FUN_102dd0640;
  *(undefined **)(puVar8 + 0x18) = puVar1;
  *(undefined8 *)(puVar8 + 0x20) = param_2;
  *(undefined8 *)(puVar8 + 0x28) = param_3;
  *(undefined8 *)(puVar8 + 0x30) = param_4;
  *(undefined8 *)(puVar8 + 0x38) = uVar7;
  *(long *)(puVar8 + 0x40) = unaff_x20;
  *(undefined8 *)(puVar8 + 0x48) = param_5;
  *(code **)(puVar8 + 0x50) = FUN_102dd07f0;
  *(undefined **)(puVar8 + 0x58) = puVar4;
  *(code **)(puVar8 + 0x60) = FUN_102dd06d0;
  *(undefined **)(puVar8 + 0x68) = puVar2;
  *(code **)(puVar8 + 0x70) = FUN_102dd075c;
  *(undefined **)(puVar8 + 0x78) = puVar3;
  *(code **)(puVar8 + 0x80) = FUN_102dd07f8;
  *(undefined **)(puVar8 + 0x88) = puVar5;
  *(code **)(puVar8 + 0x90) = FUN_102dd08ac;
  *(undefined **)(puVar8 + 0x98) = puVar6;
  *(undefined8 *)(puVar8 + 0xa0) = param_8;
  func_0x000107c6157c(puVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(unaff_x20);
  func_0x000107c61174(param_5);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(puVar6);
  func_0x000107c61174(param_8);
  uVar9 = 0x10;
  func_0x0001001ca524(0x10,2,0x34,4,0,0,&UNK_10db4f618,puVar8,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(uVar9);
  return unaff_x20;
}



/* Entry: 102dd05bc; end: 102dd063f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dd05bc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113021f38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x00010098a0cc(0);
    uVar2 = 0x11;
    func_0x00010098a590(0x11);
    func_0x000107c497f8(lVar1,param_2,uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 102dd0640; end: 102dd0647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dd0640(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113021f38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x00010098a0cc(0);
    uVar2 = 0x11;
    func_0x00010098a590(0x11);
    func_0x000107c497f8(lVar1,param_2,uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 102dd0648; end: 102dd06cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102dd0648(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_113021f38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x00010098a0cc(0);
    uVar2 = 0x13;
    func_0x00010098a590(0x13);
    lVar3 = lVar1;
    func_0x000107c3ebc0(lVar1,param_2,uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(lVar1);
  }
  return lVar3;
}



/* Entry: 102dd06d0; end: 102dd06d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102dd06d0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113021f38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x00010098a0cc(0);
    uVar2 = 0x13;
    func_0x00010098a590(0x13);
    lVar3 = lVar1;
    func_0x000107c3ebc0(lVar1,param_2,uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(lVar1);
  }
  return lVar3;
}



/* Entry: 102dd06d8; end: 102dd075b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dd06d8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113021f38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x00010098a0cc(0);
    uVar2 = 0x12;
    func_0x00010098a590(0x12);
    func_0x000107c497f8(lVar1,param_2,uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 102dd075c; end: 102dd0763;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dd075c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113021f38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x00010098a0cc(0);
    uVar2 = 0x12;
    func_0x00010098a590(0x12);
    func_0x000107c497f8(lVar1,param_2,uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 102dd0764; end: 102dd07ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102dd0764(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + _DAT_113021f38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    bVar1 = true;
  }
  else {
    func_0x00010098a0cc(0);
    uVar3 = 0x14;
    func_0x00010098a590(0x14);
    lVar4 = lVar2;
    func_0x000107c497f8(lVar2,param_2,uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c615e8(lVar2);
    bVar1 = lVar4 != 1;
  }
  return bVar1;
}



/* Entry: 102dd07f0; end: 102dd07f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102dd07f0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113021f38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    bVar1 = true;
  }
  else {
    func_0x00010098a0cc(0);
    uVar3 = 0x14;
    func_0x00010098a590(0x14);
    lVar4 = lVar2;
    func_0x000107c497f8(lVar2,param_2,uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c615e8(lVar2);
    bVar1 = lVar4 != 1;
  }
  return bVar1;
}



/* Entry: 102dd07f8; end: 102dd0813;  */

void FUN_102dd07f8(void)

{
  long unaff_x20;
  
  FUN_102dd0814(*(undefined8 *)(unaff_x20 + 0x10),0x15);
  return;
}



/* Entry: 102dd0814; end: 102dd08ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_102dd0814(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  
  lVar1 = *(long *)(param_1 + _DAT_113021f38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    dVar4 = 86400.0;
  }
  else {
    uVar2 = 0;
    func_0x00010098a0cc(0);
    func_0x00010098a590(param_2,uVar2);
    lVar3 = lVar1;
    func_0x000107c497f8(lVar1);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(lVar1);
    dVar4 = (double)lVar3;
  }
  return dVar4;
}



/* Entry: 102dd08ac; end: 102dd08c7;  */

void FUN_102dd08ac(void)

{
  long unaff_x20;
  
  FUN_102dd0814(*(undefined8 *)(unaff_x20 + 0x10),0x16);
  return;
}



/* Entry: 102dd08c8; end: 102dd090f;  */

void FUN_102dd08c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1b0) = param_19;
  *(undefined8 *)(unaff_x22 + 0x1b8) = param_20;
  *(undefined8 *)(unaff_x22 + 0x198) = param_16;
  *(undefined8 *)(unaff_x22 + 400) = param_15;
  *(undefined8 *)(unaff_x22 + 0x1a8) = param_18;
  *(undefined8 *)(unaff_x22 + 0x1a0) = param_17;
  *(undefined8 *)(unaff_x22 + 0x178) = param_12;
  *(undefined8 *)(unaff_x22 + 0x170) = param_11;
  *(undefined8 *)(unaff_x22 + 0x188) = param_14;
  *(undefined8 *)(unaff_x22 + 0x180) = param_13;
  *(undefined8 *)(unaff_x22 + 0x168) = param_10;
  *(undefined8 *)(unaff_x22 + 0x160) = param_9;
  *(undefined8 *)(unaff_x22 + 0x150) = param_7;
  *(undefined8 *)(unaff_x22 + 0x158) = param_8;
  *(undefined8 *)(unaff_x22 + 0x140) = param_5;
  *(undefined8 *)(unaff_x22 + 0x148) = param_6;
  *(undefined8 *)(unaff_x22 + 0x130) = param_3;
  *(undefined8 *)(unaff_x22 + 0x138) = param_4;
  *(undefined8 *)(unaff_x22 + 0x128) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102dd0910,0,0);
  return;
}



/* Entry: 102dd0910; end: 102dd0f53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dd0910(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  code *pcVar26;
  long lVar27;
  long unaff_x22;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  
  uVar7 = 2;
  uVar24 = 0x11;
  func_0x000100029b9c(2,0x11,2,0);
  if ((int)uVar7 == 0) {
    plVar22 = (long *)0x20;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x1c8) = plVar22;
    pcVar26 = (code *)0x102dd0f90;
  }
  else {
    (**(code **)(unaff_x22 + 0x128))();
    if ((uVar7 & 0xff) != 0) {
      uVar1 = *(undefined8 *)(unaff_x22 + 0x1b0);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x1b8);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x170);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x178);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x160);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x168);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x150);
      lVar27 = *(long *)(unaff_x22 + 0x158);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
      uVar8 = *(undefined8 *)(*(long *)(unaff_x22 + 0x138) + _DAT_113083f78);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x140);
      uVar31 = *(undefined8 *)(unaff_x22 + 0x148);
      uVar32 = *(undefined8 *)(unaff_x22 + 0x130);
      uVar29 = *(undefined8 *)(unaff_x22 + 0x128);
      uVar35 = *(undefined8 *)(unaff_x22 + 0x188);
      uVar34 = *(undefined8 *)(unaff_x22 + 0x180);
      uVar39 = *(undefined8 *)(unaff_x22 + 0x198);
      uVar37 = *(undefined8 *)(unaff_x22 + 400);
      uVar33 = *(undefined8 *)(unaff_x22 + 0x1a8);
      uVar30 = *(undefined8 *)(unaff_x22 + 0x1a0);
      func_0x000107c5d984();
      func_0x000107c61180();
      uVar9 = uVar8;
      func_0x000107c5faec();
      func_0x000107c61170(uVar8);
      uVar8 = uVar10;
      func_0x000107c3e550();
      func_0x000107c61180();
      func_0x000107c45070();
      func_0x000107c61180();
      func_0x000107c51d00();
      func_0x000107c61180();
      puVar11 = &UNK_1105d25f8;
      func_0x000107c613fc(&UNK_1105d25f8,0x18,7);
      *(undefined8 *)(puVar11 + 0x10) = uVar8;
      puVar12 = &UNK_1105d2620;
      func_0x000107c613fc(&UNK_1105d2620,0x20,7);
      *(undefined8 *)(puVar12 + 0x10) = 0x102dd129c;
      *(undefined **)(puVar12 + 0x18) = puVar11;
      *(undefined8 *)(unaff_x22 + 0x10) = uVar10;
      *(undefined8 *)(unaff_x22 + 0x18) = uVar31;
      *(undefined8 *)(unaff_x22 + 0x20) = 0x102dd12a4;
      *(undefined **)(unaff_x22 + 0x28) = puVar12;
      *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
      *(undefined8 *)(unaff_x22 + 0x38) = uVar24;
      *(undefined8 *)(unaff_x22 + 0x40) = 0x102dccbfc;
      *(undefined8 *)(unaff_x22 + 0x48) = 0;
      *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
      *(undefined ***)(unaff_x22 + 0x58) = &PTR_DAT_1105d2b90;
      func_0x000107c6157c(uVar2);
      func_0x000107c61434(uVar24);
      uVar10 = uVar13;
      func_0x000107c5b478();
      func_0x000107c61180();
      func_0x000107c452f4();
      func_0x000107c61180();
      *(undefined **)(unaff_x22 + 200) = &UNK_1105d2360;
      *(undefined ***)(unaff_x22 + 0xd0) = &PTR_DAT_1105d2388;
      puVar11 = &UNK_1105d2648;
      puVar12 = puVar11;
      func_0x000107c613fc(&UNK_1105d2648,0x60,7);
      *(undefined **)(unaff_x22 + 0xb0) = puVar12;
      uVar31 = *(undefined8 *)(unaff_x22 + 0x30);
      uVar36 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
      *(undefined8 *)(puVar12 + 0x38) = *(undefined8 *)(unaff_x22 + 0x38);
      *(undefined8 *)(puVar12 + 0x30) = uVar31;
      *(undefined8 *)(puVar12 + 0x48) = uVar36;
      *(undefined8 *)(puVar12 + 0x40) = uVar8;
      uVar31 = *(undefined8 *)(unaff_x22 + 0x50);
      *(undefined8 *)(puVar12 + 0x58) = *(undefined8 *)(unaff_x22 + 0x58);
      *(undefined8 *)(puVar12 + 0x50) = uVar31;
      uVar36 = *(undefined8 *)(unaff_x22 + 0x10);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar31 = *(undefined8 *)(unaff_x22 + 0x20);
      *(undefined8 *)(puVar12 + 0x18) = *(undefined8 *)(unaff_x22 + 0x18);
      *(undefined8 *)(puVar12 + 0x10) = uVar36;
      *(undefined8 *)(puVar12 + 0x28) = uVar8;
      *(undefined8 *)(puVar12 + 0x20) = uVar31;
      lVar14 = 0;
      FUN_102dd3038();
      lVar15 = lVar14;
      func_0x000107c613fc();
      func_0x0001000c6518(unaff_x22 + 0xb0,&UNK_1105d2360);
      puVar16 = (undefined8 *)0x50;
      func_0x000107c615b8();
      FUN_102dcff84();
      *(undefined **)(lVar15 + 0x28) = &UNK_1105d2360;
      *(undefined ***)(lVar15 + 0x30) = &PTR_DAT_1105d2388;
      func_0x000107c613fc(&UNK_1105d2648,0x60,7);
      *(undefined **)(lVar15 + 0x10) = puVar11;
      uVar31 = *puVar16;
      *(undefined8 *)(puVar11 + 0x18) = puVar16[1];
      *(undefined8 *)(puVar11 + 0x10) = uVar31;
      uVar31 = puVar16[6];
      uVar36 = puVar16[9];
      uVar8 = puVar16[8];
      uVar42 = puVar16[3];
      uVar41 = puVar16[2];
      uVar40 = puVar16[5];
      uVar38 = puVar16[4];
      *(undefined8 *)(puVar11 + 0x48) = puVar16[7];
      *(undefined8 *)(puVar11 + 0x40) = uVar31;
      *(undefined8 *)(puVar11 + 0x58) = uVar36;
      *(undefined8 *)(puVar11 + 0x50) = uVar8;
      *(undefined8 *)(puVar11 + 0x28) = uVar42;
      *(undefined8 *)(puVar11 + 0x20) = uVar41;
      *(undefined8 *)(puVar11 + 0x38) = uVar40;
      *(undefined8 *)(puVar11 + 0x30) = uVar38;
      puVar11 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
      func_0x000107c610f8();
      func_0x000107c6157c(uVar25);
      func_0x000102dd12d4(unaff_x22 + 0x10,unaff_x22 + 0x60);
      func_0x000107c453e4();
      *(undefined8 *)(lVar15 + 0x50) = 0;
      *(undefined8 *)(lVar15 + 0x58) = 0;
      *(undefined8 *)(lVar15 + 0x40) = uVar25;
      *(undefined **)(lVar15 + 0x48) = puVar11;
      *(undefined8 *)(lVar15 + 0x38) = uVar5;
      func_0x0001000834e4(unaff_x22 + 0xb0);
      func_0x000107c615c0(puVar16);
      func_0x000107c4ec80();
      func_0x000107c61180();
      uVar25 = uVar17;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(uVar17);
      func_0x000102dd1b18(0);
      func_0x000107c613fc();
      func_0x000107c61434(uVar24);
      uVar17 = uVar25;
      func_0x000102dd1c4c(uVar25,uVar9,uVar24);
      func_0x000107c6142c(uVar24);
      func_0x000107c61170(uVar25);
      *(long *)(unaff_x22 + 0xf0) = lVar14;
      *(undefined ***)(unaff_x22 + 0xf8) = &PTR_DAT_1105d2718;
      *(long *)(unaff_x22 + 0xd8) = lVar15;
      lVar18 = 0;
      func_0x000102dd6740();
      func_0x000107c613fc();
      func_0x0001000c6518(unaff_x22 + 0xd8,lVar14);
      lVar28 = *(long *)(lVar14 + -8);
      puVar19 = (undefined8 *)(*(long *)(lVar28 + 0x40) + 0xfU & 0xfffffffffffffff0);
      func_0x000107c615b8();
      (**(code **)(lVar28 + 0x10))();
      uVar25 = *puVar19;
      *(long *)(unaff_x22 + 0x118) = lVar14;
      *(undefined ***)(unaff_x22 + 0x120) = &PTR_DAT_1105d2718;
      *(undefined8 *)(unaff_x22 + 0x100) = uVar25;
      func_0x0001000c6560(0);
      func_0x000107c613fc();
      func_0x000107c6157c(uVar2);
      lVar14 = lVar15;
      func_0x000107c6157c();
      func_0x0001000c6580();
      *(long *)(lVar18 + 0xd8) = lVar14;
      lVar14 = 0;
      func_0x000102dd7d68();
      uVar7 = *(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xf;
      uVar20 = uVar7 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      lVar28 = 0;
      FUN_102dd6ab0();
      (**(code **)(*(long *)(lVar28 + -8) + 0x38))(uVar20,1,1,lVar28);
      puVar16 = (undefined8 *)(uVar20 + (long)*(int *)(lVar14 + 0x14));
      *puVar16 = 0;
      puVar16[1] = 0;
      iVar6 = *(int *)(lVar14 + 0x18);
      lVar28 = 0;
      func_0x000102dd6ad8();
      (**(code **)(*(long *)(lVar28 + -8) + 0x38))(uVar20 + (long)iVar6,1,1,lVar28);
      *(undefined8 *)(uVar20 + (long)*(int *)(lVar14 + 0x1c)) = 0;
      uVar7 = uVar7 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      func_0x000102dd1310(uVar20,uVar7);
      func_0x0001000285a8(0x112f18ae0,&UNK_10db4f660);
      func_0x000107c613fc();
      uVar21 = uVar7;
      func_0x00010006c248();
      func_0x000107c61574(lVar15);
      func_0x000102dd1354(uVar20);
      func_0x000107c615c0(uVar7);
      *(ulong *)(lVar18 + 0xe0) = uVar21;
      func_0x000107c615c0(uVar20);
      *(undefined1 *)(lVar18 + 0xe8) = 0;
      *(undefined8 *)(lVar18 + 0x10) = uVar10;
      *(undefined8 *)(lVar18 + 0x18) = uVar13;
      *(undefined8 *)(lVar18 + 0x20) = uVar9;
      *(undefined8 *)(lVar18 + 0x28) = uVar24;
      FUN_102dd1390(unaff_x22 + 0x100,lVar18 + 0x30);
      *(undefined8 *)(lVar18 + 0x60) = uVar32;
      *(undefined8 *)(lVar18 + 0x58) = uVar29;
      *(undefined8 *)(lVar18 + 0x68) = uVar4;
      *(undefined8 *)(lVar18 + 0x78) = uVar35;
      *(undefined8 *)(lVar18 + 0x70) = uVar34;
      *(undefined8 *)(lVar18 + 0x88) = uVar39;
      *(undefined8 *)(lVar18 + 0x80) = uVar37;
      *(undefined8 *)(lVar18 + 0x98) = uVar33;
      *(undefined8 *)(lVar18 + 0x90) = uVar30;
      *(undefined8 *)(lVar18 + 0xa0) = uVar1;
      *(undefined8 *)(lVar18 + 0xa8) = uVar17;
      *(undefined ***)(lVar18 + 0xb0) = &PTR_DAT_1105d2668;
      *(undefined8 *)(lVar18 + 0xb8) = uVar2;
      *(undefined ***)(lVar18 + 0xc0) = &PTR_DAT_1105d2b90;
      *(undefined8 *)(lVar18 + 200) = 0x102dd3a74;
      *(undefined8 *)(lVar18 + 0xd0) = 0;
      func_0x000107c6157c(uVar3);
      func_0x000107c6157c(uVar34);
      func_0x000107c6157c(uVar37);
      func_0x000107c6157c(uVar30);
      func_0x000107c6157c(uVar1);
      func_0x0001000834e4(unaff_x22 + 0xd8);
      func_0x000107c615c0(puVar19);
      uVar24 = *(undefined8 *)(lVar27 + 0x10);
      *(long *)(lVar27 + 0x10) = lVar18;
      func_0x000107c61574(uVar24);
      lVar27 = *(long *)(lVar27 + 0x10);
      if (lVar27 == 0) {
        FUN_102dd13a8(unaff_x22 + 0x10);
      }
      else {
        func_0x000107c6157c(lVar27);
        FUN_102dd1d20();
        FUN_102dd13a8(unaff_x22 + 0x10);
        func_0x000107c61574(lVar27);
      }
                    /* WARNING: Could not recover jumptable at 0x000102dd0f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    plVar22 = (long *)0x20;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x1c0) = plVar22;
    pcVar26 = FUN_102dd0f54;
  }
  *plVar22 = unaff_x22;
  plVar22[1] = (long)pcVar26;
  iVar6 = 2;
  func_0x000100029b9c(2,0x10,2,0);
  if (iVar6 != 0) {
    plVar23 = (long *)0x60;
    func_0x000107c615b8();
    plVar22[2] = (long)plVar23;
    *plVar23 = (long)plVar22;
    plVar23[1] = (long)&UNK_102fe9474;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_102feded8,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000102fe9470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)plVar22[1])();
  return;
}



/* Entry: 102dd0f54; end: 102dd0fcb;  */

void FUN_102dd0f54(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x1c0));
                    /* WARNING: Could not recover jumptable at 0x000102dd0f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102dd0fcc; end: 102dd10bb;  */

void FUN_102dd0fcc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  long unaff_x22;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  lVar10 = *(long *)(unaff_x20 + 0x40);
  lVar19 = *(long *)(unaff_x20 + 0x50);
  lVar17 = *(long *)(unaff_x20 + 0x48);
  lVar14 = *(long *)(unaff_x20 + 0x60);
  lVar11 = *(long *)(unaff_x20 + 0x58);
  lVar20 = *(long *)(unaff_x20 + 0x70);
  lVar18 = *(long *)(unaff_x20 + 0x68);
  lVar15 = *(long *)(unaff_x20 + 0x80);
  lVar12 = *(long *)(unaff_x20 + 0x78);
  lVar16 = *(long *)(unaff_x20 + 0x90);
  lVar13 = *(long *)(unaff_x20 + 0x88);
  lVar4 = *(long *)(unaff_x20 + 0x98);
  lVar8 = *(long *)(unaff_x20 + 0xa0);
  plVar9 = (long *)0x1d0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x102dd13f4;
  plVar9[0x36] = lVar4;
  plVar9[0x37] = lVar8;
  plVar9[0x33] = lVar15;
  plVar9[0x32] = lVar12;
  plVar9[0x35] = lVar16;
  plVar9[0x34] = lVar13;
  plVar9[0x2f] = lVar14;
  plVar9[0x2e] = lVar11;
  plVar9[0x31] = lVar20;
  plVar9[0x30] = lVar18;
  plVar9[0x2d] = lVar19;
  plVar9[0x2c] = lVar17;
  plVar9[0x2a] = lVar7;
  plVar9[0x2b] = lVar10;
  plVar9[0x28] = lVar6;
  plVar9[0x29] = lVar3;
  plVar9[0x26] = lVar5;
  plVar9[0x27] = lVar2;
  plVar9[0x25] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102dd0910,0,0);
  return;
}



/* Entry: 102dd10bc; end: 102dd113f;  */

void FUN_102dd10bc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102dd1140; end: 102dd122f;  */

void FUN_102dd1140(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  long unaff_x22;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  lVar10 = *(long *)(unaff_x20 + 0x40);
  lVar19 = *(long *)(unaff_x20 + 0x50);
  lVar17 = *(long *)(unaff_x20 + 0x48);
  lVar14 = *(long *)(unaff_x20 + 0x60);
  lVar11 = *(long *)(unaff_x20 + 0x58);
  lVar20 = *(long *)(unaff_x20 + 0x70);
  lVar18 = *(long *)(unaff_x20 + 0x68);
  lVar15 = *(long *)(unaff_x20 + 0x80);
  lVar12 = *(long *)(unaff_x20 + 0x78);
  lVar16 = *(long *)(unaff_x20 + 0x90);
  lVar13 = *(long *)(unaff_x20 + 0x88);
  lVar4 = *(long *)(unaff_x20 + 0x98);
  lVar8 = *(long *)(unaff_x20 + 0xa0);
  plVar9 = (long *)0x1d0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_102dd1230;
  plVar9[0x36] = lVar4;
  plVar9[0x37] = lVar8;
  plVar9[0x33] = lVar15;
  plVar9[0x32] = lVar12;
  plVar9[0x35] = lVar16;
  plVar9[0x34] = lVar13;
  plVar9[0x2f] = lVar14;
  plVar9[0x2e] = lVar11;
  plVar9[0x31] = lVar20;
  plVar9[0x30] = lVar18;
  plVar9[0x2d] = lVar19;
  plVar9[0x2c] = lVar17;
  plVar9[0x2a] = lVar7;
  plVar9[0x2b] = lVar10;
  plVar9[0x28] = lVar6;
  plVar9[0x29] = lVar3;
  plVar9[0x26] = lVar5;
  plVar9[0x27] = lVar2;
  plVar9[0x25] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102dd0910,0,0);
  return;
}



/* Entry: 102dd1230; end: 102dd128f;  */

void FUN_102dd1230(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102dd1268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102dd1290; end: 102dd12a3;  */

void FUN_102dd1290(void)

{
  return;
}



/* Entry: 102dd12a4; end: 102dd138f;  */

undefined1  [16] FUN_102dd12a4(void)

{
  long unaff_x20;
  undefined1 auStack_30 [16];
  
  (**(code **)(unaff_x20 + 0x10))(auStack_30);
  return auStack_30;
}



/* Entry: 102dd1390; end: 102dd13a7;  */

undefined8 * FUN_102dd1390(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102dd13a8; end: 102dd13db;  */

undefined8 FUN_102dd13a8(undefined8 param_1)

{
  (*(code *)(undefined *)0x102dcff3c)();
  return param_1;
}



/* Entry: 102dd13dc; end: 102dd13f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dd13dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113021f38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x00010098a0cc(0);
    uVar2 = 0x11;
    func_0x00010098a590(0x11);
    func_0x000107c497f8(lVar1,param_2,uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 102dd13f8; end: 102dd1623;  */

undefined * FUN_102dd13f8(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [32];
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar4 = 0;
  func_0x000107c5ed50();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar11 = (long)&lStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar12 = *(long *)(unaff_x20 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar12 != 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c5fadc(uVar5,*(undefined8 *)(unaff_x20 + 0x20));
    func_0x000107c4d9e8();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar12 != 0) {
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c61168(PTR__OBJC_CLASS___NSArray_1126ae530);
      lVar6 = lVar12;
      func_0x000107c6148c(lVar12,puVar9);
      if (lVar6 == 0) {
        func_0x000107c615e8(lVar12);
        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        lStack_e0 = lVar12;
        lStack_d8 = lVar13;
        func_0x000107c600f4(lVar11);
        func_0x000100e15a08();
        func_0x000107c601c0(auStack_80,lVar4,lVar6);
        puVar3 = PTR___sypN_11034f1a8;
        puVar2 = PTR___sSSN_11034da80;
        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
        while (lStack_68 != 0) {
          func_0x000100102924(auStack_80,auStack_a0);
          func_0x000100102924(auStack_a0,auStack_d0);
          puVar7 = &uStack_b0;
          func_0x000107c6147c(puVar7,auStack_d0,puVar3 + 8,puVar2,6);
          lVar12 = lStack_a8;
          uVar5 = uStack_b0;
          if ((((ulong)puVar7 & 1) != 0) && (lStack_a8 != 0)) {
            puVar8 = puVar9;
            func_0x000107c61558();
            puVar10 = puVar9;
            if (((ulong)puVar8 & 1) == 0) {
              puVar10 = (undefined *)0x0;
              FUN_102dd1b38(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9,
                            PTR__swift_bridgeObjectRelease_11034f258);
            }
            uVar1 = *(ulong *)(puVar10 + 0x10);
            puVar9 = puVar10;
            if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
              puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
              FUN_102dd1b38(puVar9,uVar1 + 1,1,puVar10,PTR__swift_bridgeObjectRelease_11034f258);
            }
            *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
            *(undefined8 *)(puVar9 + uVar1 * 0x10 + 0x20) = uVar5;
            *(long *)(puVar9 + uVar1 * 0x10 + 0x28) = lVar12;
          }
          func_0x000107c601c0(auStack_80,lVar4,lVar6);
        }
        (**(code **)(lStack_d8 + 8))(lVar11,lVar4);
        func_0x000107c615e8(lStack_e0);
      }
    }
  }
  return puVar9;
}



/* Entry: 102dd1624; end: 102dd179b;  */

bool FUN_102dd1624(double param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  double dVar8;
  
  lVar1 = 0;
  dVar8 = param_1;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (0.0 < param_1) {
    func_0x00010006c804();
    lVar5 = *(long *)(unaff_x20 + 0x10);
    if (lVar5 != 0) {
      uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
      func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x20 + 0x30));
      func_0x000107c4d9e8();
      func_0x000107c61180();
      func_0x000107c61170(uVar2);
      if (lVar5 != 0) {
        puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x000107c61168(PTR__OBJC_CLASS___NSDate_1126ae770);
        lVar4 = lVar5;
        func_0x000107c6148c(lVar5,puVar3);
        if (lVar4 == 0) {
          func_0x000107c615e8(lVar5);
        }
        else {
          func_0x000107c5ee94(puVar6);
          func_0x000107c5ee68(puVar6);
          func_0x000107c615e8(lVar5);
          (**(code **)(lVar7 + 8))(puVar6,lVar1);
          if (((ulong)dVar8 < 0x8000000000000000 &&
               (long)ABS(dVar8) + 0xfff0000000000000U >> 0x35 < 0x3ff ||
              (long)dVar8 - 1U < 0xfffffffffffff) || ABS(dVar8) == 0.0) {
            func_0x000100070bfc();
            return dVar8 < param_1;
          }
        }
      }
    }
    func_0x000100070bfc();
  }
  return false;
}



/* Entry: 102dd179c; end: 102dd1adb;  */

void FUN_102dd179c(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  long unaff_x20;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  
  func_0x00010006c804();
  FUN_102dd1f58();
  uVar5 = param_1;
  FUN_102dd13f8();
  uVar6 = param_1;
  func_0x000100077018(param_1,param_2,uVar5);
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar13 = *(ulong *)(uVar5 + 0x10);
  if (uVar13 != 0) {
    uVar12 = 0;
    do {
      plVar14 = (long *)(uVar5 + 0x28 + uVar12 * 0x10);
      uVar16 = uVar12;
      while( true ) {
        if (*(ulong *)(uVar5 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102dd1a5c);
          (*pcVar4)();
        }
        uVar1 = plVar14[-1];
        lVar15 = *plVar14;
        if ((uVar1 != param_1 || lVar15 != param_2) &&
           (uVar12 = uVar1, func_0x000107c605b8(uVar1,lVar15,param_1,param_2,0), (uVar12 & 1) == 0))
        break;
        uVar16 = uVar16 + 1;
        plVar14 = plVar14 + 2;
        if (uVar13 == uVar16) goto LAB_102dd191c;
      }
      func_0x000107c61434(lVar15);
      puVar11 = puVar10;
      func_0x000107c61558();
      if (((ulong)puVar11 & 1) == 0) {
        func_0x000100403514(0,*(long *)(puVar10 + 0x10) + 1,1);
      }
      uVar2 = *(ulong *)(puVar10 + 0x10);
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar2) {
        func_0x000100403514(1 < *(ulong *)(puVar10 + 0x18),uVar2 + 1,1);
      }
      uVar12 = uVar16 + 1;
      *(ulong *)(puVar10 + 0x10) = uVar2 + 1;
      *(ulong *)(puVar10 + uVar2 * 0x10 + 0x20) = uVar1;
      *(long *)(puVar10 + uVar2 * 0x10 + 0x28) = lVar15;
    } while (uVar13 - 1 != uVar16);
  }
LAB_102dd191c:
  func_0x000107c6142c(uVar5);
  puVar11 = puVar10;
  func_0x000107c61558();
  puVar9 = puVar10;
  if (((ulong)puVar11 & 1) == 0) {
    puVar9 = (undefined *)0x0;
    FUN_102dd1b38(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10,PTR__swift_bridgeObjectRelease_11034f258
                 );
  }
  uVar5 = *(ulong *)(puVar9 + 0x10);
  lVar15 = uVar5 + 1;
  puVar10 = puVar9;
  if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar5) {
    puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
    FUN_102dd1b38(puVar10,lVar15,1,puVar9,PTR__swift_bridgeObjectRelease_11034f258);
  }
  *(long *)(puVar10 + 0x10) = lVar15;
  *(ulong *)(puVar10 + uVar5 * 0x10 + 0x20) = param_1;
  *(long *)(puVar10 + uVar5 * 0x10 + 0x28) = param_2;
  puVar11 = puVar10;
  if (0x30 < uVar5 && uVar5 - 0x31 != 0) {
    if (*(ulong *)(puVar10 + 0x18) < 100) {
      puVar11 = (undefined *)0x1;
      FUN_102dd1b38(1,lVar15,1,puVar10,PTR__swift_bridgeObjectRelease_11034f258);
    }
    func_0x000101755ed8(0,uVar5 - 0x31,0);
  }
  lVar15 = *(long *)(unaff_x20 + 0x10);
  if (lVar15 != 0) {
    uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
    puVar10 = puVar11;
    func_0x000107c5fc48(puVar11,PTR___sSSN_11034da80);
    func_0x000107c5fadc(uVar7,uVar8);
    func_0x000107c56bd8(lVar15);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(uVar7);
    if ((uVar6 & 1) == 0) {
      uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
      uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
      func_0x000107c5ee70();
      func_0x000107c5fadc(uVar8,uVar3);
      func_0x000107c56bd8(lVar15);
      func_0x000107c6142c(puVar11);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar8);
      goto LAB_102dd1a30;
    }
  }
  func_0x000107c6142c((int)uVar6,puVar11);
LAB_102dd1a30:
  func_0x000100070bfc();
  return;
}



/* Entry: 102dd1adc; end: 102dd1b37;  */

void FUN_102dd1adc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102dd1b38; end: 102dd1d1f;  */

undefined *
FUN_102dd1b38(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102dd1c4c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,PTR___sSSN_11034da80);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 102dd1d20; end: 102dd1f57;  */

/* WARNING: Possible PIC construction at 0x000102dd1ef4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dd1ef8) */

void FUN_102dd1d20(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar8 = *(long *)(unaff_x20 + 0x18);
      if (lVar8 != 0) {
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar8 != 0) {
          func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
          func_0x000107c4e4ec(lVar2);
          func_0x000107c61180();
          lVar3 = lVar2;
          func_0x0001000b637c();
          func_0x000107c61170(lVar2);
          uVar4 = 0x112e17d68;
          func_0x0001000285a8(0x112e17d68,&UNK_10daf6410);
          func_0x0001000bfde0(0x102dd9f90,0,uVar4);
          func_0x000107c61574(lVar3);
          func_0x000107c5d3a8();
          func_0x000107c61180();
          if (lVar8 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102dd1f58);
            (*pcVar1)();
          }
          lVar2 = lVar8;
          func_0x0001000b637c();
          func_0x000107c61170(lVar8);
          plVar5 = (long *)0x102dd9f94;
          func_0x0001000bfde0(0x102dd9f94,0,uVar4);
          func_0x000107c61574(lVar2);
          func_0x0001006c733c();
          puVar6 = &UNK_1105d2740;
          func_0x000107c613fc(&UNK_1105d2740,0x18,7);
          func_0x000107c61644(puVar6 + 0x10);
          puVar7 = &UNK_1105d2768;
          func_0x000107c613fc(&UNK_1105d2768,0x20,7);
          *(code **)(puVar7 + 0x10) = FUN_102dd95e4;
          *(undefined **)(puVar7 + 0x18) = puVar6;
          pcVar1 = FUN_102dd95ec;
          puVar6 = puVar7;
          (**(code **)(*plVar5 + 0x60))(FUN_102dd95ec);
          func_0x000107c61574(plVar5);
          func_0x000107c61574(puVar7);
          func_0x000107c614f0(pcVar1);
          (**(code **)(puVar6 + 0x10))(*(undefined8 *)(unaff_x20 + 0xd8),pcVar1,puVar6);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
      return;
    }
  }
  return;
}



/* Entry: 102dd1f58; end: 102dd20af;  */

undefined1  [16] FUN_102dd1f58(double param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  char *unaff_x20;
  
  lVar3 = 0;
  func_0x000102dd6ac4();
  func_0x000107c5ee8c((long)*(int *)(lVar3 + 0x18));
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102dd20a8);
    (*pcVar2)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      uVar1 = 0x6552646e65697266;
      if (*unaff_x20 != '\x01') {
        uVar1 = 0x654d6465646461;
      }
      uVar5 = 0xed00007473657571;
      if (*unaff_x20 != '\x01') {
        uVar5 = 0xe700000000000000;
      }
      func_0x000107c5fb78(uVar1,uVar5);
      func_0x000107c6142c(uVar5);
      func_0x000107c5fb78(0x3a,0xe100000000000000);
      func_0x000107c5fb78(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
      func_0x000107c5fb78(0x3a,0xe100000000000000);
      puVar4 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
      func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                          PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar4);
      return ZEXT816(0xe000000000000000) << 0x40;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102dd20b0);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102dd20ac);
  (*pcVar2)();
}



/* Entry: 102dd20b0; end: 102dd22d7;  */

void FUN_102dd20b0(void)

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



/* Entry: 102dd22d8; end: 102dd234f;  */

void FUN_102dd22d8(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 102dd2350; end: 102dd239f;  */

void FUN_102dd2350(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x6552646e65697266;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x654d6465646461;
  }
  uVar2 = 0xed00007473657571;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe700000000000000;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 102dd23a0; end: 102dd2977;  */

void FUN_102dd23a0(undefined1 *param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  ulong uVar10;
  long extraout_x8_00;
  code *pcVar11;
  long extraout_x12;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined1 *puStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar2 = 0;
  uVar5 = param_3;
  puStack_d0 = param_1;
  func_0x000107c5eea4();
  lStack_b8 = *(long *)(uVar2 - 8);
  uStack_b0 = uVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  uVar10 = (long)&uStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_c8 = uVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar10 = uVar10 - extraout_x12;
  uVar2 = 0;
  uStack_c0 = uVar10;
  func_0x000107c5eb9c();
  uStack_90 = *(ulong *)(uVar2 - 8);
  uStack_80 = uVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(uStack_90 + 0x40));
  uStack_88 = uVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (param_2 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar2 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar2 != 0) {
    puStack_78 = (undefined *)(param_2 & 0xffffffffffffff8);
    lVar13 = 4;
    uVar10 = uStack_a0 >> 0x20;
    uStack_a0 = CONCAT44((int)uVar10,(int)param_3);
    do {
      uVar10 = lVar13 - 4;
      if ((param_2 & 0xc000000000000001) == 0) {
        if (*(ulong *)(puStack_78 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x102dd291c);
          (*pcVar11)();
        }
        uVar3 = *(ulong *)(param_2 + lVar13 * 8);
        func_0x000107c61174();
        uVar14 = uVar5;
      }
      else {
        uVar3 = uVar10;
        uVar14 = param_2;
        func_0x00010103193c();
      }
      uVar15 = lVar13 - 3;
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x102dd2784);
        (*pcVar11)();
      }
      uVar10 = uVar3;
      func_0x00010901c7a8();
      uVar5 = uVar14;
      if ((int)uVar10 == 0) {
LAB_102dd2494:
        func_0x000107c61170(uVar3);
      }
      else {
        if ((param_3 & 1) == 0) {
          uVar10 = uVar3;
          func_0x000107c452e8();
          func_0x000107c61180();
          uVar5 = uVar14;
          if (uVar10 != 0) {
            uVar4 = uVar10;
            func_0x000107c49eb8();
            func_0x000107c61170(uVar10);
            uVar5 = uVar14;
            if ((uVar4 & 1) != 0) goto LAB_102dd2520;
          }
          goto LAB_102dd2494;
        }
LAB_102dd2520:
        uVar10 = uVar3;
        func_0x000107c5d984();
        func_0x000107c61180();
        uVar5 = uVar14;
        if (uVar10 == 0) goto LAB_102dd2494;
        uVar5 = uVar10;
        func_0x000107c5faec();
        func_0x000107c61170();
        uVar4 = uStack_88;
        uStack_70 = uVar5;
        uStack_68 = uVar14;
        func_0x000107c5eb88(uStack_88);
        func_0x000100e8b654();
        uVar6 = uVar4;
        puVar8 = PTR___sSSN_11034da80;
        uStack_98 = uVar10;
        func_0x000107c601f0();
        pcStack_a8 = *(code **)(uStack_90 + 8);
        uVar5 = uStack_80;
        (*pcStack_a8)(uVar4);
        func_0x000107c6142c(uVar14);
        uVar10 = uVar6 & 0xffffffffffff;
        if (((ulong)puVar8 & 0x2000000000000000) != 0) {
          uVar10 = (ulong)puVar8 >> 0x38 & 0xf;
        }
        if (uVar10 == 0) {
LAB_102dd26d4:
          func_0x000107c6142c(puVar8);
          func_0x000107c61170(uVar3);
        }
        else {
          uVar14 = uVar3;
          func_0x00010901e13c();
          func_0x000107c61180();
          uVar10 = uStack_c8;
          if (uVar14 == 0) goto LAB_102dd26d4;
          uStack_d8 = uVar6;
          func_0x000107c5ee94(uStack_c8);
          func_0x000107c61170(uVar14);
          (**(code **)(lStack_b8 + 0x20))(uStack_c0,uVar10,uStack_b0);
          uVar5 = uVar3;
          func_0x000107c3e9e8();
          func_0x000107c61180();
          if (uVar5 != 0) {
            uVar14 = uVar5;
            func_0x000107c3e978();
            func_0x000107c61180();
            func_0x000107c61170(uVar5);
            if (uVar14 != 0) {
              uVar4 = uVar14;
              func_0x000107c5faec();
              uStack_e0 = uVar10;
              func_0x000107c61170(uVar14);
              uVar5 = uStack_88;
              uStack_70 = uVar4;
              uStack_68 = uVar10;
              func_0x000107c5eb88(uStack_88);
              uVar10 = uVar5;
              puVar12 = PTR___sSSN_11034da80;
              func_0x000107c601f0(uVar5,PTR___sSSN_11034da80,uStack_98);
              pcVar11 = pcStack_a8;
              (*pcStack_a8)(uVar5,uStack_80);
              func_0x000107c6142c(uStack_e0);
              uVar5 = uVar10 & 0xffffffffffff;
              if (((ulong)puVar12 & 0x2000000000000000) != 0) {
                uVar5 = (ulong)puVar12 >> 0x38 & 0xf;
              }
              if (uVar5 != 0) {
                lVar13 = 0;
                puStack_78 = puVar12;
                func_0x000102dd6ac4();
                puVar7 = puStack_d0;
                uVar14 = uStack_c0;
                (**(code **)(lStack_b8 + 0x10))
                          (puStack_d0 + *(int *)(lVar13 + 0x18),uStack_c0,uStack_b0);
                uVar5 = uVar3;
                FUN_102dd9a78();
                uVar2 = uVar3;
                uStack_a0 = uVar14;
                uStack_90 = uVar5;
                func_0x000107c452e8();
                func_0x000107c61180();
                if (uVar2 == 0) {
                  uStack_c8 = 0;
                  uVar2 = uVar14;
                  uVar5 = uStack_98;
                  uVar15 = 0;
                }
                else {
                  uVar15 = uVar2;
                  func_0x000107c3d888();
                  func_0x000107c61180();
                  func_0x000107c61170(uVar2);
                  uVar5 = uStack_98;
                  if (uVar15 == 0) {
                    uStack_c8 = 0;
                    uVar15 = 0;
                    uVar2 = uVar14;
                    puVar7 = puStack_d0;
                  }
                  else {
                    uVar4 = uVar15;
                    func_0x000107c5faec();
                    uVar2 = uVar14;
                    uStack_c8 = uVar4;
                    func_0x000107c61170(uVar15);
                    puVar7 = puStack_d0;
                    uVar15 = uVar14;
                  }
                }
                uVar14 = uVar3;
                func_0x000107c3e9e8();
                func_0x000107c61180();
                if (uVar14 == 0) {
                  func_0x000107c61170(uVar3);
                  uVar14 = 0;
                  puVar12 = (undefined *)0x0;
                  uVar2 = 0;
                }
                else {
                  uVar4 = uVar14;
                  func_0x000107c3ea1c();
                  func_0x000107c61180();
                  func_0x000107c61170(uVar14);
                  if (uVar4 == 0) {
                    func_0x000107c61170(uVar3);
                    uVar14 = 0;
                    uVar2 = 0;
                    puVar12 = (undefined *)0x0;
                    puVar7 = puStack_d0;
                  }
                  else {
                    uVar14 = uVar4;
                    func_0x000107c5faec();
                    func_0x000107c61170(uVar4);
                    uStack_70 = uVar14;
                    uStack_68 = uVar2;
                    func_0x000107c61434(uVar2);
                    uVar4 = uStack_88;
                    func_0x000107c5eb88(uStack_88);
                    uVar14 = uVar4;
                    puVar12 = PTR___sSSN_11034da80;
                    func_0x000107c601f0(uVar4,PTR___sSSN_11034da80,uVar5);
                    (*pcVar11)(uVar4,uStack_80);
                    func_0x000107c6142c(uVar2);
                    uVar5 = uVar14 & 0xffffffffffff;
                    if (((ulong)puVar12 & 0x2000000000000000) != 0) {
                      uVar5 = (ulong)puVar12 >> 0x38 & 0xf;
                    }
                    func_0x000107c61170(uVar3);
                    puVar7 = puStack_d0;
                    if (uVar5 == 0) {
                      func_0x000107c6142c(puVar12);
                      uVar14 = 0;
                      puVar12 = (undefined *)0x0;
                      puVar7 = puStack_d0;
                    }
                  }
                }
                uVar3 = uStack_90;
                uVar5 = uStack_a0;
                func_0x000107c6142c(uVar2);
                (**(code **)(lStack_b8 + 8))(uStack_c0,uStack_b0);
                *puVar7 = 1;
                *(ulong *)(puVar7 + 8) = uStack_d8;
                *(undefined **)(puVar7 + 0x10) = puVar8;
                iVar1 = *(int *)(lVar13 + 0x1c);
                *(ulong *)(puVar7 + iVar1) = uVar3;
                *(ulong *)((long)(puVar7 + iVar1) + 8) = uVar5;
                iVar1 = *(int *)(lVar13 + 0x20);
                *(ulong *)(puVar7 + iVar1) = uStack_c8;
                *(ulong *)((long)(puVar7 + iVar1) + 8) = uVar15;
                iVar1 = *(int *)(lVar13 + 0x24);
                *(ulong *)(puVar7 + iVar1) = uVar10;
                *(undefined **)((long)(puVar7 + iVar1) + 8) = puStack_78;
                iVar1 = *(int *)(lVar13 + 0x28);
                *(ulong *)(puVar7 + iVar1) = uVar14;
                *(undefined **)((long)(puVar7 + iVar1) + 8) = puVar12;
                pcVar11 = *(code **)(*(long *)(lVar13 + -8) + 0x38);
                uVar9 = 0;
                goto LAB_102dd2954;
              }
              func_0x000107c6142c(puVar12);
            }
          }
          func_0x000107c6142c(puVar8);
          func_0x000107c61170(uVar3);
          uVar5 = uStack_b0;
          (**(code **)(lStack_b8 + 8))(uStack_c0);
        }
        param_3 = uStack_a0 & 0xffffffff;
      }
      lVar13 = lVar13 + 1;
    } while (uVar15 != uVar2);
  }
  lVar13 = 0;
  func_0x000102dd6ac4();
  pcVar11 = *(code **)(*(long *)(lVar13 + -8) + 0x38);
  uVar9 = 1;
  puVar7 = puStack_d0;
LAB_102dd2954:
  (*pcVar11)(puVar7,uVar9,1,lVar13);
  return;
}



/* Entry: 102dd2978; end: 102dd2fb3;  */

void FUN_102dd2978(undefined1 *param_1,double param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar10;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  ulong uVar11;
  code *pcVar12;
  undefined *puVar13;
  code *pcVar14;
  long lVar15;
  ulong uVar16;
  double dVar17;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  ulong uStack_110;
  code *pcStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  code *pcStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  ulong uStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  lVar3 = 0;
  uStack_c8 = param_4;
  func_0x000107c5eb9c();
  lStack_d0 = *(long *)(lVar3 + -8);
  lStack_b8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d0 + 0x40));
  uVar4 = 0;
  pcStack_c0 = (code *)(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5eea4();
  lVar3 = *(long *)(uVar4 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  uVar10 = (long)(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_110 = uVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar10 = uVar10 - extraout_x12;
  uStack_e8 = uVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar10 = uVar10 - extraout_x12_00;
  uStack_98 = uVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_a0 = uVar10 - extraout_x12_01;
  puStack_100 = param_1;
  if (param_3 >> 0x3e == 0) {
    uVar10 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = param_3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_3) {
      uVar10 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar10 != 0) {
    puStack_90 = (undefined *)(param_3 & 0xffffffffffffff8);
    lVar15 = 4;
    lStack_e0 = lVar3;
    uStack_b0 = uVar4;
    do {
      uVar11 = lVar15 - 4;
      if ((param_3 & 0xc000000000000001) == 0) {
        if (*(ulong *)(puStack_90 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x102dd2eac);
          (*pcVar12)();
        }
        uVar5 = *(ulong *)(param_3 + lVar15 * 8);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar11;
        func_0x00010103193c(uVar11,param_3);
      }
      uVar7 = lVar15 - 3;
      if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x102dd2ea8);
        (*pcVar12)();
      }
      uVar11 = uVar5;
      func_0x000107c439a8();
      func_0x000107c61180();
      if (uVar11 != 0) {
        func_0x000107c61170();
        dVar17 = 0.0;
        uVar11 = uVar5;
        func_0x00010901c828();
        if ((int)uVar11 != 0) {
          uVar16 = uVar5;
          func_0x00010901e13c();
          func_0x000107c61180();
          uVar11 = uStack_98;
          if (uVar16 != 0) {
            func_0x000107c5ee94(uStack_98);
            func_0x000107c61170(uVar16);
            lVar2 = lStack_a0;
            pcStack_a8 = *(code **)(lVar3 + 0x20);
            (*pcStack_a8)(lStack_a0,uVar11,uVar4);
            uVar11 = uVar4;
            if (param_2 <= 0.0) {
              pcVar12 = *(code **)(lVar3 + 8);
              (*pcVar12)(lVar2);
            }
            else {
              func_0x000107c5ee68(lVar2);
              pcVar12 = *(code **)(lVar3 + 8);
              (*pcVar12)(lVar2);
              if (param_2 < dVar17) goto LAB_102dd2aec;
            }
            uVar16 = uVar5;
            func_0x000107c5d984();
            func_0x000107c61180();
            if (uVar16 != 0) {
              uVar4 = uVar16;
              pcStack_d8 = pcVar12;
              func_0x000107c5faec();
              func_0x000107c61170();
              pcVar12 = pcStack_c0;
              uStack_88 = uVar4;
              uStack_80 = uVar11;
              func_0x000107c5eb88(pcStack_c0);
              func_0x000100e8b654();
              pcVar14 = pcVar12;
              puVar13 = PTR___sSSN_11034da80;
              uStack_f0 = uVar16;
              func_0x000107c601f0();
              pcStack_f8 = *(code **)(lStack_d0 + 8);
              (*pcStack_f8)(pcVar12,lStack_b8);
              uVar4 = uStack_b0;
              func_0x000107c6142c(uVar11);
              uVar11 = (ulong)pcVar14 & 0xffffffffffff;
              if (((ulong)puVar13 & 0x2000000000000000) != 0) {
                uVar11 = (ulong)puVar13 >> 0x38 & 0xf;
              }
              pcStack_108 = pcVar14;
              if (uVar11 != 0) {
                uVar16 = uVar5;
                func_0x00010901e13c();
                func_0x000107c61180();
                uVar11 = uStack_110;
                if (uVar16 != 0) {
                  puStack_118 = puVar13;
                  func_0x000107c5ee94(uStack_110);
                  func_0x000107c61170(uVar16);
                  (*pcStack_a8)(uStack_e8,uVar11,uVar4);
                  uVar4 = uVar5;
                  func_0x000107c3e9e8();
                  func_0x000107c61180();
                  if (uVar4 != 0) {
                    uVar16 = uVar4;
                    func_0x000107c3e978();
                    func_0x000107c61180();
                    func_0x000107c61170(uVar4);
                    if (uVar16 != 0) {
                      uVar4 = uVar16;
                      func_0x000107c5faec();
                      pcStack_a8 = (code *)uVar11;
                      func_0x000107c61170(uVar16);
                      pcVar14 = pcStack_c0;
                      uStack_88 = uVar4;
                      uStack_80 = uVar11;
                      func_0x000107c5eb88(pcStack_c0);
                      uVar11 = uStack_f0;
                      pcVar6 = pcVar14;
                      puVar13 = PTR___sSSN_11034da80;
                      func_0x000107c601f0(pcVar14,PTR___sSSN_11034da80,uStack_f0);
                      pcVar12 = pcStack_f8;
                      (*pcStack_f8)(pcVar14,lStack_b8);
                      func_0x000107c6142c(pcStack_a8);
                      uVar4 = (ulong)pcVar6 & 0xffffffffffff;
                      if (((ulong)puVar13 & 0x2000000000000000) != 0) {
                        uVar4 = (ulong)puVar13 >> 0x38 & 0xf;
                      }
                      pcStack_a8 = pcVar6;
                      if (uVar4 != 0) {
                        lVar3 = 0;
                        puStack_90 = puVar13;
                        func_0x000102dd6ac4();
                        puVar8 = puStack_100;
                        uVar7 = uStack_e8;
                        (**(code **)(lStack_e0 + 0x10))
                                  (puStack_100 + *(int *)(lVar3 + 0x18),uStack_e8,uStack_b0);
                        uVar4 = uVar5;
                        FUN_102dd9a78();
                        uVar10 = uVar5;
                        uVar16 = uVar7;
                        func_0x000107c3e9e8();
                        func_0x000107c61180();
                        uStack_98 = uVar7;
                        if (uVar10 == 0) {
                          func_0x000107c61170(uVar5);
LAB_102dd2ecc:
                          puVar13 = (undefined *)0x0;
                          pcVar14 = (code *)0x0;
                          uVar16 = 0;
                        }
                        else {
                          uVar7 = uVar10;
                          func_0x000107c3ea1c();
                          func_0x000107c61180();
                          func_0x000107c61170(uVar10);
                          if (uVar7 == 0) {
                            func_0x000107c61170(uVar5);
                            goto LAB_102dd2ecc;
                          }
                          uVar10 = uVar7;
                          func_0x000107c5faec();
                          func_0x000107c61170(uVar7);
                          uStack_88 = uVar10;
                          uStack_80 = uVar16;
                          func_0x000107c61434(uVar16);
                          pcVar6 = pcStack_c0;
                          func_0x000107c5eb88(pcStack_c0);
                          pcVar14 = pcVar6;
                          puVar13 = PTR___sSSN_11034da80;
                          func_0x000107c601f0(pcVar6,PTR___sSSN_11034da80,uVar11);
                          (*pcVar12)(pcVar6,lStack_b8);
                          func_0x000107c6142c(uVar16);
                          uVar10 = (ulong)pcVar14 & 0xffffffffffff;
                          if (((ulong)puVar13 & 0x2000000000000000) != 0) {
                            uVar10 = (ulong)puVar13 >> 0x38 & 0xf;
                          }
                          func_0x000107c61170(uVar5);
                          if (uVar10 == 0) {
                            func_0x000107c6142c(puVar13);
                            pcVar14 = (code *)0x0;
                            puVar13 = (undefined *)0x0;
                          }
                        }
                        pcVar12 = pcStack_108;
                        func_0x000107c6142c(uVar16);
                        (*pcStack_d8)(uStack_e8,uStack_b0);
                        *puVar8 = 0;
                        *(code **)(puVar8 + 8) = pcVar12;
                        *(undefined **)(puVar8 + 0x10) = puStack_118;
                        iVar1 = *(int *)(lVar3 + 0x1c);
                        *(ulong *)(puVar8 + iVar1) = uVar4;
                        *(ulong *)((long)(puVar8 + iVar1) + 8) = uStack_98;
                        iVar1 = *(int *)(lVar3 + 0x20);
                        *(undefined8 *)(puVar8 + iVar1) = 0;
                        *(undefined8 *)((long)(puVar8 + iVar1) + 8) = 0;
                        iVar1 = *(int *)(lVar3 + 0x24);
                        *(code **)(puVar8 + iVar1) = pcStack_a8;
                        *(undefined **)((long)(puVar8 + iVar1) + 8) = puStack_90;
                        iVar1 = *(int *)(lVar3 + 0x28);
                        *(code **)(puVar8 + iVar1) = pcVar14;
                        *(undefined **)((long)(puVar8 + iVar1) + 8) = puVar13;
                        pcVar12 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
                        uVar9 = 0;
                        goto LAB_102dd2f8c;
                      }
                      func_0x000107c6142c(puVar13);
                    }
                  }
                  uVar4 = uStack_b0;
                  (*pcStack_d8)(uStack_e8,uStack_b0);
                  puVar13 = puStack_118;
                }
              }
              func_0x000107c6142c(puVar13);
              lVar3 = lStack_e0;
            }
          }
        }
      }
LAB_102dd2aec:
      func_0x000107c61170(uVar5);
      lVar15 = lVar15 + 1;
    } while (uVar7 != uVar10);
  }
  lVar3 = 0;
  func_0x000102dd6ac4();
  pcVar12 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  uVar9 = 1;
  puVar8 = puStack_100;
LAB_102dd2f8c:
  (*pcVar12)(puVar8,uVar9,1,lVar3);
  return;
}



/* Entry: 102dd2fb4; end: 102dd3037;  */

void FUN_102dd2fb4(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x50);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar1);
  }
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102dd3038; end: 102dd3057;  */

void FUN_102dd3038(void)

{
  func_0x000107c61168(&PTR_PTR_112f18be0);
  return;
}



/* Entry: 102dd3058; end: 102dd308b;  */

void FUN_102dd3058(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined2 param_10)

{
  long unaff_x22;
  
  *(undefined2 *)(unaff_x22 + 0xf8) = param_10;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_8;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_9;
  *(undefined8 *)(unaff_x22 + 0x98) = param_6;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_7;
  *(undefined8 *)(unaff_x22 + 0x88) = param_4;
  *(undefined8 *)(unaff_x22 + 0x90) = param_5;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102dd308c,0,0);
  return;
}



/* Entry: 102dd308c; end: 102dd321b;  */

void FUN_102dd308c(ulong param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long unaff_x22;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  if (*(long *)(unaff_x22 + 0x88) == 0) {
    if (*(long *)(unaff_x22 + 0x90) == 0) {
      func_0x000107c5fd5c();
      if ((param_1 & 1) != 0) {
        (**(code **)(unaff_x22 + 0x78))(0);
                    /* WARNING: Could not recover jumptable at 0x000102dd315c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
      puVar8 = *(undefined8 **)(unaff_x22 + 0x98);
      puVar2 = *(undefined1 **)(unaff_x22 + 0xa0);
      func_0x0001000a8868(puVar8,puVar8[3]);
      uVar4 = *puVar2;
      *(undefined1 *)(unaff_x22 + 0xfa) = uVar4;
      lVar11 = *(long *)(puVar2 + 8);
      *(long *)(unaff_x22 + 200) = lVar11;
      lVar12 = *(long *)(puVar2 + 0x10);
      *(long *)(unaff_x22 + 0xd0) = lVar12;
      lVar9 = 0;
      func_0x000102dd6ac4();
      *(long *)(unaff_x22 + 0xd8) = lVar9;
      lVar5 = *(long *)(puVar2 + *(int *)(lVar9 + 0x24));
      lVar3 = *(long *)((long)(puVar2 + *(int *)(lVar9 + 0x24)) + 8);
      lVar1 = *(long *)(puVar2 + *(int *)(lVar9 + 0x28));
      lVar9 = *(long *)((long)(puVar2 + *(int *)(lVar9 + 0x28)) + 8);
      uVar14 = puVar8[3];
      uVar13 = puVar8[2];
      uVar16 = puVar8[5];
      uVar15 = puVar8[4];
      uVar17 = puVar8[6];
      uVar19 = puVar8[9];
      uVar18 = puVar8[8];
      *(undefined8 *)(unaff_x22 + 0x48) = puVar8[7];
      *(undefined8 *)(unaff_x22 + 0x40) = uVar17;
      *(undefined8 *)(unaff_x22 + 0x58) = uVar19;
      *(undefined8 *)(unaff_x22 + 0x50) = uVar18;
      *(undefined8 *)(unaff_x22 + 0x28) = uVar14;
      *(undefined8 *)(unaff_x22 + 0x20) = uVar13;
      *(undefined8 *)(unaff_x22 + 0x38) = uVar16;
      *(undefined8 *)(unaff_x22 + 0x30) = uVar15;
      uVar13 = *puVar8;
      *(undefined8 *)(unaff_x22 + 0x18) = puVar8[1];
      *(undefined8 *)(unaff_x22 + 0x10) = uVar13;
      plVar7 = (long *)0xbe0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xe0) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_102dd3524;
      plVar7[0x13b] = unaff_x22 + 0x10;
      plVar7[0x135] = lVar9;
      plVar7[0x12f] = lVar1;
      plVar7[0x129] = lVar3;
      plVar7[0x123] = lVar5;
      plVar7[0x11d] = lVar12;
      plVar7[0x111] = lVar11;
      *(undefined1 *)(plVar7 + 0x17b) = uVar4;
      lVar5 = 0;
      func_0x000107c5eec8();
      plVar7[0x141] = lVar5;
      lVar5 = *(long *)(lVar5 + -8);
      plVar7[0x147] = lVar5;
      uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar7[0x14d] = uVar6;
      lVar5 = 0;
      func_0x000107c5eb9c();
      plVar7[0x153] = lVar5;
      lVar5 = *(long *)(lVar5 + -8);
      plVar7[0x159] = lVar5;
      uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar7[0x15f] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_102dcd110,0,0);
      return;
    }
    plVar7 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xc0) = plVar7;
    pcVar10 = FUN_102dd33cc;
  }
  else {
    plVar7 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xb8) = plVar7;
    pcVar10 = FUN_102dd321c;
  }
  *plVar7 = unaff_x22;
  plVar7[1] = (long)pcVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
  return;
}



/* Entry: 102dd321c; end: 102dd3263;  */

void FUN_102dd321c(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102dd3264,0,0);
  return;
}



/* Entry: 102dd3264; end: 102dd33cb;  */

void FUN_102dd3264(ulong param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long unaff_x22;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  if (*(long *)(unaff_x22 + 0x90) != 0) {
    plVar7 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xc0) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_102dd33cc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
    return;
  }
  func_0x000107c5fd5c();
  if ((param_1 & 1) != 0) {
    (**(code **)(unaff_x22 + 0x78))(0);
                    /* WARNING: Could not recover jumptable at 0x000102dd330c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  puVar8 = *(undefined8 **)(unaff_x22 + 0x98);
  puVar2 = *(undefined1 **)(unaff_x22 + 0xa0);
  func_0x0001000a8868(puVar8,puVar8[3]);
  uVar4 = *puVar2;
  *(undefined1 *)(unaff_x22 + 0xfa) = uVar4;
  lVar10 = *(long *)(puVar2 + 8);
  *(long *)(unaff_x22 + 200) = lVar10;
  lVar11 = *(long *)(puVar2 + 0x10);
  *(long *)(unaff_x22 + 0xd0) = lVar11;
  lVar9 = 0;
  func_0x000102dd6ac4();
  *(long *)(unaff_x22 + 0xd8) = lVar9;
  lVar5 = *(long *)(puVar2 + *(int *)(lVar9 + 0x24));
  lVar3 = *(long *)((long)(puVar2 + *(int *)(lVar9 + 0x24)) + 8);
  lVar1 = *(long *)(puVar2 + *(int *)(lVar9 + 0x28));
  lVar9 = *(long *)((long)(puVar2 + *(int *)(lVar9 + 0x28)) + 8);
  uVar13 = puVar8[3];
  uVar12 = puVar8[2];
  uVar15 = puVar8[5];
  uVar14 = puVar8[4];
  uVar16 = puVar8[6];
  uVar18 = puVar8[9];
  uVar17 = puVar8[8];
  *(undefined8 *)(unaff_x22 + 0x48) = puVar8[7];
  *(undefined8 *)(unaff_x22 + 0x40) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar14;
  uVar12 = *puVar8;
  *(undefined8 *)(unaff_x22 + 0x18) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar12;
  plVar7 = (long *)0xbe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xe0) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102dd3524;
  plVar7[0x13b] = unaff_x22 + 0x10;
  plVar7[0x135] = lVar9;
  plVar7[0x12f] = lVar1;
  plVar7[0x129] = lVar3;
  plVar7[0x123] = lVar5;
  plVar7[0x11d] = lVar11;
  plVar7[0x111] = lVar10;
  *(undefined1 *)(plVar7 + 0x17b) = uVar4;
  lVar5 = 0;
  func_0x000107c5eec8();
  plVar7[0x141] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar7[0x147] = lVar5;
  uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x14d] = uVar6;
  lVar5 = 0;
  func_0x000107c5eb9c();
  plVar7[0x153] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar7[0x159] = lVar5;
  uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x15f] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102dcd110,0,0);
  return;
}



/* Entry: 102dd33cc; end: 102dd3413;  */

void FUN_102dd33cc(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102dd3414,0,0);
  return;
}



/* Entry: 102dd3414; end: 102dd3523;  */

void FUN_102dd3414(ulong param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long unaff_x22;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  func_0x000107c5fd5c();
  if ((param_1 & 1) != 0) {
    (**(code **)(unaff_x22 + 0x78))(0);
                    /* WARNING: Could not recover jumptable at 0x000102dd3464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  puVar7 = *(undefined8 **)(unaff_x22 + 0x98);
  puVar2 = *(undefined1 **)(unaff_x22 + 0xa0);
  func_0x0001000a8868(puVar7,puVar7[3]);
  uVar4 = *puVar2;
  *(undefined1 *)(unaff_x22 + 0xfa) = uVar4;
  lVar10 = *(long *)(puVar2 + 8);
  *(long *)(unaff_x22 + 200) = lVar10;
  lVar11 = *(long *)(puVar2 + 0x10);
  *(long *)(unaff_x22 + 0xd0) = lVar11;
  lVar8 = 0;
  func_0x000102dd6ac4();
  *(long *)(unaff_x22 + 0xd8) = lVar8;
  lVar5 = *(long *)(puVar2 + *(int *)(lVar8 + 0x24));
  lVar3 = *(long *)((long)(puVar2 + *(int *)(lVar8 + 0x24)) + 8);
  lVar1 = *(long *)(puVar2 + *(int *)(lVar8 + 0x28));
  lVar8 = *(long *)((long)(puVar2 + *(int *)(lVar8 + 0x28)) + 8);
  uVar13 = puVar7[3];
  uVar12 = puVar7[2];
  uVar15 = puVar7[5];
  uVar14 = puVar7[4];
  uVar16 = puVar7[6];
  uVar18 = puVar7[9];
  uVar17 = puVar7[8];
  *(undefined8 *)(unaff_x22 + 0x48) = puVar7[7];
  *(undefined8 *)(unaff_x22 + 0x40) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar14;
  uVar12 = *puVar7;
  *(undefined8 *)(unaff_x22 + 0x18) = puVar7[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar12;
  plVar9 = (long *)0xbe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xe0) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_102dd3524;
  plVar9[0x13b] = unaff_x22 + 0x10;
  plVar9[0x135] = lVar8;
  plVar9[0x12f] = lVar1;
  plVar9[0x129] = lVar3;
  plVar9[0x123] = lVar5;
  plVar9[0x11d] = lVar11;
  plVar9[0x111] = lVar10;
  *(undefined1 *)(plVar9 + 0x17b) = uVar4;
  lVar5 = 0;
  func_0x000107c5eec8();
  plVar9[0x141] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar9[0x147] = lVar5;
  uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0x14d] = uVar6;
  lVar5 = 0;
  func_0x000107c5eb9c();
  plVar9[0x153] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar9[0x159] = lVar5;
  uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0x15f] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102dcd110,0,0);
  return;
}



/* Entry: 102dd3524; end: 102dd3577;  */

void FUN_102dd3524(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(long **)(lVar1 + 0x60) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x68) = param_1;
  *(undefined8 *)(lVar1 + 0x70) = param_2;
  *(undefined8 *)(lVar1 + 0xe8) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xe0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102dd3578,0,0);
  return;
}



/* Entry: 102dd3578; end: 102dd3663;  */

void FUN_102dd3578(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char cVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long unaff_x22;
  long lVar14;
  
  func_0x000107c5fd5c();
  if ((param_1 & 1) != 0) {
    pcVar1 = *(code **)(unaff_x22 + 0x78);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xe8));
    (*pcVar1)(0);
                    /* WARNING: Could not recover jumptable at 0x000102dd35c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar14 = *(long *)(unaff_x22 + 0x68);
  cVar9 = *(char *)(unaff_x22 + 0xfa);
  plVar10 = (long *)(*(long *)(unaff_x22 + 0xa0) +
                    (long)*(int *)(*(long *)(unaff_x22 + 0xd8) + 0x1c));
  lVar11 = *plVar10;
  lVar5 = plVar10[1];
  plVar10 = (long *)(*(long *)(unaff_x22 + 0xa0) +
                    (long)*(int *)(*(long *)(unaff_x22 + 0xd8) + 0x20));
  lVar2 = *plVar10;
  lVar6 = plVar10[1];
  plVar10 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf0) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_102dd3664;
  lVar13 = *(long *)(unaff_x22 + 0xe8);
  lVar3 = *(long *)(unaff_x22 + 200);
  lVar7 = *(long *)(unaff_x22 + 0xd0);
  lVar4 = *(long *)(unaff_x22 + 0xa8);
  lVar8 = *(long *)(unaff_x22 + 0xb0);
  *(undefined2 *)((long)plVar10 + 99) = *(undefined2 *)(unaff_x22 + 0xf8);
  plVar10[0x1c] = lVar13;
  plVar10[0x1b] = lVar14;
  plVar10[0x1a] = lVar8;
  plVar10[0x18] = lVar6;
  plVar10[0x19] = lVar4;
  plVar10[0x16] = lVar5;
  plVar10[0x17] = lVar2;
  plVar10[0x14] = lVar7;
  plVar10[0x15] = lVar11;
  plVar10[0x13] = lVar3;
  *(bool *)((long)plVar10 + 0x62) = cVar9 != '\0';
  lVar11 = 0;
  func_0x000107c5eb9c();
  plVar10[0x1d] = lVar11;
  lVar11 = *(long *)(lVar11 + -8);
  plVar10[0x1e] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar10[0x1f] = uVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_102fe90b8,0,0);
  return;
}



/* Entry: 102dd3664; end: 102dd36ef;  */

void FUN_102dd3664(undefined1 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xe8);
  *(undefined1 *)(lVar2 + 0xfb) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xf0));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102dd36bc,0,0);
  return;
}



/* Entry: 102dd36f0; end: 102dd3807;  */

/* WARNING: Possible PIC construction at 0x000102dd3764: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dd37cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dd37e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dd37d0) */
/* WARNING: Removing unreachable block (ram,0x000102dd3768) */
/* WARNING: Removing unreachable block (ram,0x000102dd37ec) */

void FUN_102dd36f0(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c4b940(*(undefined8 *)(unaff_x20 + 0x48));
  if (*(long *)(unaff_x20 + 0x50) == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c6157c(*(long *)(unaff_x20 + 0x50));
    func_0x000107c5fd50();
    uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  }
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  func_0x000107c6157c(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 102dd3808; end: 102dd3a6f;  */

void FUN_102dd3808(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = param_3;
  if (param_2 == 0) {
    if (param_3 == 0) {
      plVar2 = (long *)0x20;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x28) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = 0x102dd3a34;
      iVar1 = 2;
      func_0x000100029b9c(2,0x10,2,0);
      if (iVar1 != 0) {
        plVar3 = (long *)0x60;
        func_0x000107c615b8();
        plVar2[2] = (long)plVar3;
        *plVar3 = (long)plVar2;
        plVar3[1] = (long)&UNK_102fe9474;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(&UNK_102feded8,0,0);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000102fe9470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar2[1])();
      return;
    }
    plVar2 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x20) = plVar2;
    lVar4 = 0x102dd39a4;
  }
  else {
    plVar2 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x18) = plVar2;
    lVar4 = 0x102dd38c8;
  }
  *plVar2 = unaff_x22;
  plVar2[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
  return;
}



/* Entry: 102dd3a70; end: 102dd3a77;  */

undefined8 FUN_102dd3a70(ulong param_1,long param_2)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = param_1;
  FUN_102dd93e0();
  if ((uVar3 & 1) != 0) {
    lVar4 = 0;
    FUN_102dd6ab0();
    cVar1 = *(char *)(param_1 + (long)*(int *)(lVar4 + 0x14));
    cVar2 = *(char *)(param_2 + *(int *)(lVar4 + 0x14));
    if (cVar1 == '\x02') {
      if (cVar2 == '\x02') {
        return 1;
      }
    }
    else if (cVar1 == cVar2) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 102dd3a78; end: 102dd3c53;  */

void FUN_102dd3a78(ulong *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined *puVar10;
  long extraout_x8;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [32];
  long lStack_a8;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar4 = 0;
  func_0x000107c5ed50();
  lVar12 = *(long *)(lVar4 + -8);
  lVar5 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  *param_1 = (ulong)PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c600f4(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000100e15a08();
  func_0x000107c601c0(auStack_80,lVar4,lVar5);
  puVar2 = PTR___sypN_11034f1a8;
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while (lStack_68 != 0) {
    func_0x000100102924(auStack_80,auStack_a0);
    func_0x000100102924(auStack_a0,auStack_c8);
    uVar8 = 0;
    func_0x000101994830(0);
    plVar9 = &lStack_a8;
    func_0x000107c6147c(plVar9,auStack_c8,puVar2 + 8,uVar8,6);
    lVar3 = lStack_a8;
    if ((((ulong)plVar9 & 1) != 0) && (lStack_a8 != 0)) {
      puVar7 = puVar10;
      func_0x000107c61550();
      if (((int)puVar7 == 0) ||
         (((long)puVar10 < 0 || (puVar7 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)))) {
        if ((ulong)puVar10 >> 0x3e == 0) {
          puVar6 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar6 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar10) {
            puVar6 = puVar10;
          }
          func_0x000107c60480(puVar6);
        }
        puVar7 = (undefined *)0x0;
        func_0x000100f63128(0,puVar6 + 1,1,puVar10);
      }
      uVar11 = (ulong)puVar7 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar11 + 0x10);
      puVar10 = puVar7;
      if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar1) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
        func_0x000100f63128(puVar10,uVar1 + 1,1,puVar7);
        uVar11 = (ulong)puVar10 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar11 + 0x10) = uVar1 + 1;
      *(long *)(uVar11 + uVar1 * 8 + 0x20) = lVar3;
      *param_1 = (ulong)puVar10;
    }
    func_0x000107c601c0(auStack_80,lVar4,lVar5);
  }
  (**(code **)(lVar12 + 8))(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
  return;
}



/* Entry: 102dd3c54; end: 102dd3cc3;  */

void FUN_102dd3c54(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    FUN_102dd3cc4(param_1,param_2);
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 102dd3cc4; end: 102dd3f47;  */

void FUN_102dd3cc4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  char acStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0x112f18d78;
  func_0x0001000285a8(0x112f18d78,&UNK_10db4f828);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)&lStack_c0 - extraout_x8;
  lVar1 = 0;
  func_0x000102dd6ad8();
  lVar5 = *(long *)(lVar1 + -8);
  lStack_c0 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar4 = lVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5eea4();
  lStack_b8 = *(long *)(lVar1 + -8);
  lStack_b0 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar2 = lVar4 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0xe0);
  uStack_90 = param_1;
  uStack_88 = param_2;
  func_0x000107c6157c(uVar6);
  func_0x000100075034(&uStack_78,FUN_102dd9614,acStack_a0,&UNK_1105d2860);
  func_0x000107c61574(uVar6);
  (**(code **)(unaff_x20 + 200))(lVar2);
  FUN_102dd43a4(lVar3,uStack_78,uStack_70,uStack_68,lVar2);
  func_0x000107c6142c(uStack_70);
  func_0x000107c6142c(uStack_78);
  lVar1 = lVar3;
  (**(code **)(lVar5 + 0x30))(lVar3,1,lStack_c0);
  if ((int)lVar1 == 1) {
    FUN_102dd99f0(lVar3,0x112f18d78,&UNK_10db4f828);
    uVar6 = *(undefined8 *)(unaff_x20 + 0xe0);
    func_0x000107c6157c(uVar6);
    func_0x000100075034(acStack_a0,FUN_102dd3fb8,0,PTR___sSbN_11034dd40);
    func_0x000107c61574(uVar6);
    if ((*(char *)(unaff_x20 + 0xe8) != '\x01') || (acStack_a0[0] != '\0')) {
      uVar6 = *(undefined8 *)(unaff_x20 + 0xe0);
      func_0x000107c6157c(uVar6);
      func_0x000100075034(FUN_102dd42f0,0,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar6);
      *(undefined1 *)(unaff_x20 + 0xe8) = 1;
      func_0x0001000a8868(unaff_x20 + 0x30,*(undefined8 *)(unaff_x20 + 0x48));
      FUN_102dd36f0();
    }
  }
  else {
    func_0x000102dd968c(lVar3,lVar4,0x102dd6ad8);
    *(undefined1 *)(unaff_x20 + 0xe8) = 0;
    FUN_102dd4728(lVar4,lVar2);
    FUN_102dd7618(lVar4,0x102dd6ad8);
  }
  (**(code **)(lStack_b8 + 8))(lVar2,lStack_b0);
  return;
}



/* Entry: 102dd3f48; end: 102dd3fb7;  */

void FUN_102dd3f48(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  func_0x000102dd7d68();
  lVar1 = *(long *)(param_2 + *(int *)(lVar2 + 0x1c)) + 1;
  *(long *)(param_2 + *(int *)(lVar2 + 0x1c)) = lVar1;
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = lVar1;
  func_0x000107c61434(param_3);
  func_0x000107c61434(param_4);
  return;
}



/* Entry: 102dd3fb8; end: 102dd42ef;  */

void FUN_102dd3fb8(undefined1 *param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined1 uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_70;
  undefined1 *puStack_68;
  
  lVar3 = 0;
  puStack_68 = param_1;
  FUN_102dd6ab0();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar12 = 0x112f19008;
  lStack_70 = lVar8;
  func_0x0001000285a8(0x112f19008,&UNK_10db4fa18);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar8 - extraout_x8_00;
  lVar4 = 0x112f18d70;
  func_0x0001000285a8(0x112f18d70,&UNK_10db4f820);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  uVar9 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = uVar9 - extraout_x12;
  (**(code **)(lVar10 + 0x38))(lVar11,1,1,lVar3);
  lVar12 = (long)*(int *)(lVar12 + 0x30);
  FUN_102dd9924(param_2,lVar8,0x112f18d70,&UNK_10db4f820);
  FUN_102dd9924(lVar11,lVar8 + lVar12,0x112f18d70,&UNK_10db4f820);
  pcVar7 = *(code **)(lVar10 + 0x30);
  lVar4 = lVar8;
  (*pcVar7)(lVar8,1,lVar3);
  if ((int)lVar4 == 1) {
    FUN_102dd99f0(lVar11,0x112f18d70,&UNK_10db4f820);
    lVar12 = lVar8 + lVar12;
    (*pcVar7)(lVar12,1,lVar3);
    if ((int)lVar12 == 1) {
      FUN_102dd99f0(lVar8,0x112f18d70,&UNK_10db4f820);
      uVar6 = 0;
      goto LAB_102dd42c4;
    }
  }
  else {
    FUN_102dd9924(lVar8,uVar9,0x112f18d70,&UNK_10db4f820);
    lVar4 = lVar8 + lVar12;
    (*pcVar7)(lVar4,1,lVar3);
    lVar10 = lStack_70;
    if ((int)lVar4 != 1) {
      func_0x000102dd968c(lVar8 + lVar12,lStack_70,FUN_102dd6ab0);
      uVar5 = uVar9;
      FUN_102dd93e0(uVar9,lVar10);
      if ((uVar5 & 1) == 0) {
        FUN_102dd7618(lVar10,FUN_102dd6ab0);
        FUN_102dd99f0(lVar11,0x112f18d70,&UNK_10db4f820);
LAB_102dd4288:
        uVar6 = 1;
      }
      else {
        cVar1 = *(char *)(uVar9 + (long)*(int *)(lVar3 + 0x14));
        cVar2 = *(char *)(lVar10 + *(int *)(lVar3 + 0x14));
        FUN_102dd7618(lVar10,FUN_102dd6ab0);
        FUN_102dd99f0(lVar11,0x112f18d70,&UNK_10db4f820);
        if (cVar1 == '\x02') {
          if (cVar2 != '\x02') goto LAB_102dd4288;
        }
        else if (cVar1 != cVar2) goto LAB_102dd4288;
        uVar6 = 0;
      }
      FUN_102dd7618(uVar9,FUN_102dd6ab0);
      FUN_102dd99f0(lVar8,0x112f18d70,&UNK_10db4f820);
      goto LAB_102dd42c4;
    }
    FUN_102dd99f0(lVar11,0x112f18d70,&UNK_10db4f820);
    FUN_102dd7618(uVar9,FUN_102dd6ab0);
  }
  FUN_102dd99f0(lVar8,0x112f19008,&UNK_10db4fa18);
  uVar6 = 1;
LAB_102dd42c4:
  *puStack_68 = uVar6;
  return;
}



/* Entry: 102dd42f0; end: 102dd43a3;  */

void FUN_102dd42f0(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar4 = 0;
  func_0x000102dd7d68();
  iVar2 = *(int *)(lVar4 + 0x1c);
  uVar6 = *(undefined8 *)(param_1 + iVar2);
  FUN_102dd7618(param_1,0x102dd7d68);
  lVar5 = 0;
  FUN_102dd6ab0();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_1,1,1,lVar5);
  iVar3 = *(int *)(lVar4 + 0x18);
  lVar5 = 0;
  func_0x000102dd6ad8();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_1 + iVar3,1,1,lVar5);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x14));
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + iVar2) = uVar6;
  return;
}



/* Entry: 102dd43a4; end: 102dd4727;  */

void FUN_102dd43a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 uVar10;
  long unaff_x20;
  code *pcVar11;
  long lVar12;
  long lVar13;
  char *pcVar14;
  long lVar15;
  char acStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  uint uStack_7c;
  long lStack_78;
  
  lVar6 = 0x112f19010;
  uStack_98 = param_6;
  uStack_90 = param_5;
  uStack_88 = param_4;
  lStack_78 = param_1;
  func_0x0001000285a8(0x112f19010,&UNK_10db4fa30);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  pcVar9 = acStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (long)pcVar9 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar12 - extraout_x12_00;
  lVar7 = 0;
  func_0x000102dd6ac4();
  lVar15 = *(long *)(lVar7 + -8);
  lVar6 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  uVar5 = (uint)lVar6;
  pcVar14 = (char *)(lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(unaff_x20 + 0x68))();
  uStack_7c = uVar5;
  (**(code **)(unaff_x20 + 0x58))();
  (**(code **)(unaff_x20 + 0x88))();
  uVar5 = uVar5 & 0xff;
  if (uVar5 < 2) {
    if (uVar5 == 0) {
      (**(code **)(lVar15 + 0x38))(lVar13,1,1,lVar7);
      lVar6 = lStack_78;
      goto LAB_102dd4604;
    }
    FUN_102dd23a0(lVar13,param_3,uStack_7c & 1);
    lVar6 = lStack_78;
  }
  else if (uVar5 == 2) {
    FUN_102dd23a0(lVar12,param_3,uStack_7c & 1);
    func_0x000102dd9a30(lVar12,pcVar9,0x112f19010,&UNK_10db4fa30);
    pcVar11 = *(code **)(lVar15 + 0x30);
    pcVar8 = pcVar9;
    (*pcVar11)(pcVar9,1,lVar7);
    if ((int)pcVar8 == 1) {
      FUN_102dd2978(lVar13,param_2,uStack_88,uStack_98);
      pcVar8 = pcVar9;
      (*pcVar11)(pcVar9,1,lVar7);
      lVar6 = lStack_78;
      if ((int)pcVar8 != 1) {
        FUN_102dd99f0(pcVar9,0x112f19010,&UNK_10db4fa30);
      }
    }
    else {
      func_0x000102dd968c(pcVar9,lVar13,0x102dd6ac4);
      (**(code **)(lVar15 + 0x38))(lVar13,0,1,lVar7);
      lVar6 = lStack_78;
    }
  }
  else {
    FUN_102dd2978(lVar13,uStack_88,uStack_98);
    lVar6 = lStack_78;
  }
  lVar12 = lVar13;
  (**(code **)(lVar15 + 0x30))(lVar13,1,lVar7);
  if ((int)lVar12 != 1) {
    func_0x000102dd968c(lVar13,pcVar14,0x102dd6ac4);
    pcVar9 = pcVar14;
    func_0x000102dd9648(pcVar14,lVar6,0x102dd6ac4);
    uVar10 = SUB81(pcVar9,0);
    cVar2 = *pcVar14;
    if (cVar2 == '\x01') {
      (**(code **)(unaff_x20 + 0x78))();
    }
    else {
      uVar10 = 2;
    }
    FUN_102dd7618(pcVar14,0x102dd6ac4);
    bVar3 = (byte)uStack_7c;
    lVar7 = 0;
    func_0x000102dd6ad8();
    uVar4 = uStack_88;
    *(undefined1 *)(lVar6 + *(int *)(lVar7 + 0x14)) = uVar10;
    *(byte *)(lVar6 + *(int *)(lVar7 + 0x18)) = bVar3 & cVar2 == '\x01';
    puVar1 = (undefined8 *)(lVar6 + *(int *)(lVar7 + 0x1c));
    *puVar1 = param_3;
    puVar1[1] = uStack_88;
    puVar1[2] = uStack_90;
    (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar6,0,1,lVar7);
    func_0x000107c61434(param_3);
    func_0x000107c61434(uVar4);
    return;
  }
LAB_102dd4604:
  FUN_102dd99f0(lVar13,0x112f19010,&UNK_10db4fa30);
  lVar7 = 0;
  func_0x000102dd6ad8();
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar6,1,1,lVar7);
  return;
}



/* Entry: 102dd4728; end: 102dd51b3;  */

void FUN_102dd4728(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long extraout_x12;
  long lVar15;
  long unaff_x20;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  char *pcVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  ulong uVar26;
  ulong uVar27;
  long alStack_1b0 [2];
  undefined8 uStack_1a0;
  uint uStack_194;
  undefined8 uStack_190;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  char *pcStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  char acStack_d0 [48];
  long alStack_a0 [2];
  long lStack_90;
  long lStack_88;
  
  lVar8 = 0;
  func_0x000102dd6ac4();
  uStack_e8 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar20 = (char *)((long)&uStack_1a0 - (extraout_x12 + 0xfU & 0xfffffffffffffff0));
  lStack_e0 = extraout_x12;
  FUN_102dd9648(param_1,pcVar20,0x102dd6ac4);
  lVar8 = 0;
  func_0x000102dd6ab0();
  lStack_f0 = *(long *)(lVar8 + -8);
  lVar24 = *(long *)(lStack_f0 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = (long)pcVar20 - (lVar24 + 0xfU & 0xfffffffffffffff0);
  FUN_102dd9648(pcVar20,lVar21,0x102dd6ac4);
  lVar9 = 0;
  func_0x000102dd6ad8();
  bVar5 = *(byte *)(param_1 + *(int *)(lVar9 + 0x14));
  *(byte *)(lVar21 + *(int *)(lVar8 + 0x14)) = bVar5;
  uVar25 = *(undefined8 *)(unaff_x20 + 0xe0);
  lStack_90 = param_1;
  lStack_88 = lVar21;
  func_0x000107c6157c(uVar25);
  func_0x000100075034(acStack_d0,0x102dd962c,alStack_a0,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar25);
  if (acStack_d0[0] == '\x01') {
    uStack_148 = *(undefined8 *)(unaff_x20 + 0xd0);
    uStack_158 = *(undefined8 *)(unaff_x20 + 0xd0);
    uStack_160 = *(undefined8 *)(unaff_x20 + 200);
    lVar8 = *(long *)(unaff_x20 + 0xb8);
    lVar23 = *(long *)(unaff_x20 + 0xc0);
    lStack_100 = lVar8;
    if (lVar8 != 0) {
      cVar3 = *pcVar20;
      func_0x000107c614f0(lVar8);
      (**(code **)(lVar23 + 8))(cVar3 != '\x01',lVar8,lVar23);
    }
    FUN_102dd97a4(unaff_x20 + 0x30,alStack_a0);
    plVar10 = alStack_a0;
    func_0x0001000a8868(plVar10,lStack_88);
    uStack_194 = 0;
    if (bVar5 != 2) {
      uStack_194 = (uint)bVar5;
    }
    uStack_1a0 = *(undefined8 *)(unaff_x20 + 0x20);
    uStack_190 = *(undefined8 *)(unaff_x20 + 0x28);
    puVar11 = &UNK_1105d2740;
    plStack_168 = plVar10;
    func_0x000107c613fc(&UNK_1105d2740,0x18,7);
    puStack_d8 = puVar11;
    func_0x000107c61644(puVar11 + 0x10);
    lVar8 = lStack_e0;
    uStack_178 = *(undefined8 *)(unaff_x20 + 0xa8);
    uStack_170 = *(undefined8 *)(unaff_x20 + 0xb0);
    lStack_110 = lVar21;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar14 = lVar21 - (lVar8 + 0xfU & 0xfffffffffffffff0);
    lStack_180 = lVar14;
    pcStack_f8 = pcVar20;
    FUN_102dd9648(pcVar20,lVar14,0x102dd6ac4);
    lVar15 = *(long *)(lVar9 + -8);
    lVar17 = *(long *)(lVar15 + 0x40);
    lStack_118 = lVar14;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    uVar26 = lVar17 + 0xfU & 0xfffffffffffffff0;
    lVar14 = lVar14 - uVar26;
    lStack_188 = lVar23;
    FUN_102dd9648(param_1,lVar14,0x102dd6ad8);
    lStack_120 = lVar14;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    uVar16 = lVar24 + 0xfU & 0xfffffffffffffff0;
    lVar23 = lVar14 - uVar16;
    lStack_108 = lVar21;
    FUN_102dd9648(lVar21,lVar23,0x102dd6ab0);
    lStack_128 = lVar23;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar9 = lVar23 - uVar26;
    lStack_138 = lVar9;
    FUN_102dd9648(lVar14,lVar9,0x102dd6ad8);
    lStack_130 = lVar9;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar9 = lVar9 - uVar16;
    lStack_140 = lVar9;
    FUN_102dd9648(lVar23,lVar9,0x102dd6ab0);
    uVar27 = (ulong)*(byte *)(uStack_e8 + 0x50);
    uVar26 = uVar27 + 0x28 & (uVar27 ^ 0xffffffffffffffff);
    uStack_e8 = uVar27 | 7;
    bVar5 = *(byte *)(lVar15 + 0x50);
    uVar16 = lVar8 + (ulong)bVar5 + uVar26 & ((ulong)bVar5 ^ 0xffffffffffffffff);
    uVar18 = lVar17 + uVar16 + 7 & 0xfffffffffffffff8;
    lVar21 = uVar18 + 0x10;
    bVar4 = *(byte *)(lStack_f0 + 0x50);
    uVar22 = (ulong)bVar4 + lVar21 + 0x10 & ((ulong)bVar4 ^ 0xffffffffffffffff);
    puVar11 = &UNK_1105d2790;
    func_0x000107c613fc(&UNK_1105d2790,uVar22 + lVar24,uStack_e8 | (bVar5 | bVar4));
    lVar8 = lStack_100;
    *(undefined **)(puVar11 + 0x10) = puStack_d8;
    *(long *)(puVar11 + 0x18) = lStack_100;
    *(long *)(puVar11 + 0x20) = lStack_188;
    func_0x000102dd968c(lStack_180,puVar11 + uVar26,0x102dd6ac4);
    uVar25 = uStack_178;
    func_0x000102dd968c(lVar14,puVar11 + uVar16,0x102dd6ad8);
    *(undefined8 *)(puVar11 + uVar18) = uVar25;
    *(undefined8 *)((long)(puVar11 + uVar18) + 8) = uStack_170;
    *(undefined8 *)((long)(puVar11 + lVar21) + 8) = uStack_158;
    *(undefined8 *)(puVar11 + lVar21) = uStack_160;
    func_0x000102dd968c(lVar23,puVar11 + uVar22,0x102dd6ab0);
    lVar21 = *plStack_168;
    iVar6 = 2;
    func_0x000100029b9c(2,0x11,2,0);
    puVar12 = puStack_d8;
    if (iVar6 == 0) {
      func_0x000107c61428(puStack_d8 + 0x10,acStack_d0,0,0);
      puVar13 = puVar12 + 0x10;
      func_0x000107c61648();
      func_0x000107c615f0(lVar8);
      func_0x000107c6157c(uStack_148);
      func_0x000107c6157c(puVar12);
      func_0x000107c615f0(uVar25);
      lVar9 = lStack_138;
      lVar8 = lStack_140;
      if (puVar13 != (undefined *)0x0) {
        FUN_102dd58e8(lStack_138,lStack_140);
        func_0x000107c61574(puVar11);
        puVar11 = puVar13;
      }
      pcVar20 = pcStack_f8;
      lVar21 = lStack_108;
      func_0x000107c61574(puVar11);
      FUN_102dd7618(lVar8,0x102dd6ab0);
      FUN_102dd7618(lVar9,0x102dd6ad8);
      FUN_102dd7618(pcVar20,0x102dd6ac4);
      FUN_102dd7618(lVar21,0x102dd6ab0);
    }
    else {
      uVar19 = *(undefined8 *)(lVar21 + 0x48);
      func_0x000107c615f0(lVar8);
      func_0x000107c6157c(uStack_148);
      func_0x000107c6157c(puStack_d8);
      func_0x000107c615f0(uVar25);
      func_0x000107c4b940(uVar19);
      lVar8 = *(long *)(lVar21 + 0x50);
      if (lVar8 != 0) {
        func_0x000107c6157c(lVar8);
        func_0x000107c5fd50();
      }
      lVar24 = *(long *)(lVar21 + 0x58);
      pcVar2 = *(code **)(lVar21 + 0x38);
      lStack_100 = lVar24;
      func_0x000107c6157c();
      uVar7 = (undefined4)lVar24;
      (*pcVar2)();
      lStack_f0 = CONCAT44(lStack_f0._4_4_,uVar7);
      FUN_102dd97a4(lVar21 + 0x10,acStack_d0);
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      lVar23 = lVar9 - (lStack_e0 + 0xfU & 0xfffffffffffffff0);
      FUN_102dd9648(pcStack_f8,lVar23,0x102dd6ac4);
      uVar16 = uVar27 + 0x58 & ~uVar27;
      uVar26 = lStack_e0 + uVar16 + 7 & 0xfffffffffffffff8;
      puVar12 = &UNK_1105d27b8;
      func_0x000107c613fc(&UNK_1105d27b8,uVar26 + 0x12,uStack_e8);
      lVar24 = lStack_100;
      *(code **)(puVar12 + 0x10) = FUN_102dd96d0;
      *(undefined **)(puVar12 + 0x18) = puVar11;
      *(long *)(puVar12 + 0x20) = lVar8;
      *(long *)(puVar12 + 0x28) = lStack_100;
      FUN_102dd97e8(acStack_d0,puVar12 + 0x30);
      func_0x000102dd968c(lVar23,puVar12 + uVar16,0x102dd6ac4);
      uVar25 = uStack_190;
      puVar1 = (undefined8 *)(puVar12 + uVar26);
      *puVar1 = uStack_1a0;
      puVar1[1] = uStack_190;
      *(char *)(puVar1 + 2) = (char)uStack_194;
      *(char *)((long)puVar1 + 0x11) = (char)lStack_f0;
      func_0x000107c6157c(lVar8);
      func_0x000107c6157c(lVar24);
      func_0x000107c6157c(puVar11);
      func_0x000107c61434(uVar25);
      *(undefined **)(lVar9 + -0x10) = PTR___sytN_11034f1b0 + 8;
      uVar25 = 0x10;
      func_0x0001001ca524(0x10,2,0x34,4,0,0,&UNK_10db4fa08,puVar12);
      func_0x000107c61574(puVar12);
      uVar19 = *(undefined8 *)(lVar21 + 0x50);
      *(undefined8 *)(lVar21 + 0x50) = uVar25;
      func_0x000107c61574(uVar19);
      func_0x000107c5d278(*(undefined8 *)(lVar21 + 0x48));
      func_0x000107c61574(lVar8);
      func_0x000107c61574(lVar24);
      func_0x000107c61574(puVar11);
      FUN_102dd7618(lStack_140,0x102dd6ab0);
      FUN_102dd7618(lStack_138,0x102dd6ad8);
      FUN_102dd7618(pcStack_f8,0x102dd6ac4);
      FUN_102dd7618(lStack_108,0x102dd6ab0);
      puVar12 = puStack_d8;
    }
    func_0x000107c61574(puVar12);
    func_0x0001000834e4(alStack_a0);
  }
  else {
    FUN_102dd7618(pcVar20,0x102dd6ac4);
    FUN_102dd7618(lVar21,0x102dd6ab0);
  }
  return;
}



/* Entry: 102dd51b4; end: 102dd5833;  */

void FUN_102dd51b4(undefined1 *param_1,ulong param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined *puVar14;
  long extraout_x8;
  long lVar15;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar16;
  long extraout_x12;
  long extraout_x12_00;
  long lVar17;
  long lVar18;
  undefined1 uVar19;
  code *pcVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  code *pcVar24;
  long lStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  
  lVar6 = 0;
  FUN_102dd6ab0();
  lVar18 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  uVar11 = (long)&lStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = uVar11 - extraout_x12;
  lVar22 = 0x112f19008;
  func_0x0001000285a8(0x112f19008,&UNK_10db4fa18);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar22 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar15 - extraout_x8_00;
  lVar7 = 0x112f18d70;
  func_0x0001000285a8(0x112f18d70,&UNK_10db4f820);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  uVar16 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar23 = uVar16 - extraout_x12_00;
  lVar7 = 0;
  func_0x000102dd6ad8();
  lVar21 = *(long *)(param_3 + (long)*(int *)(lVar7 + 0x1c) + 0x10);
  lVar8 = 0;
  func_0x000102dd7d68();
  if (lVar21 == *(long *)(param_2 + (long)*(int *)(lVar8 + 0x1c))) {
    uStack_b8 = param_4;
    FUN_102dd9648(param_4,lVar23,FUN_102dd6ab0);
    pcVar20 = *(code **)(lVar18 + 0x38);
    (*pcVar20)(lVar23,0,1,lVar6);
    lVar22 = (long)*(int *)(lVar22 + 0x30);
    FUN_102dd9924(lVar23,lVar17,0x112f18d70,&UNK_10db4f820);
    uStack_b0 = param_2;
    FUN_102dd9924(param_2,lVar17 + lVar22,0x112f18d70,&UNK_10db4f820);
    pcVar24 = *(code **)(lVar18 + 0x30);
    lVar18 = lVar17;
    (*pcVar24)(lVar17,1,lVar6);
    if ((int)lVar18 == 1) {
      FUN_102dd99f0(lVar23,0x112f18d70,&UNK_10db4f820);
      lVar22 = lVar17 + lVar22;
      (*pcVar24)(lVar22,1,lVar6);
      uVar9 = uStack_b0;
      if ((int)lVar22 != 1) {
LAB_102dd54a0:
        uVar12 = 0x112f19008;
        puVar14 = &UNK_10db4fa18;
        uVar9 = uStack_b0;
        goto LAB_102dd55a0;
      }
LAB_102dd53dc:
      FUN_102dd99f0(lVar17,0x112f18d70,&UNK_10db4f820);
      if (*(long *)(uVar9 + (long)*(int *)(lVar8 + 0x14) + 8) == 0) goto LAB_102dd5638;
      iVar4 = *(int *)(lVar8 + 0x18);
      FUN_102dd99f0(uVar9 + (long)iVar4,0x112f18d78,&UNK_10db4f828);
      pcVar20 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
      lVar22 = uVar9 + (long)iVar4;
      uVar12 = 1;
    }
    else {
      FUN_102dd9924(lVar17,uVar16,0x112f18d70,&UNK_10db4f820);
      lVar18 = lVar17 + lVar22;
      (*pcVar24)(lVar18,1,lVar6);
      if ((int)lVar18 == 1) {
        FUN_102dd99f0(lVar23,0x112f18d70,&UNK_10db4f820);
        FUN_102dd7618(uVar16,FUN_102dd6ab0);
        goto LAB_102dd54a0;
      }
      func_0x000102dd968c(lVar17 + lVar22,lVar15,FUN_102dd6ab0);
      uVar9 = uVar16;
      FUN_102dd93e0(uVar16,lVar15);
      if ((uVar9 & 1) == 0) {
        FUN_102dd7618(lVar15,FUN_102dd6ab0);
        FUN_102dd99f0(lVar23,0x112f18d70,&UNK_10db4f820);
      }
      else {
        cVar2 = *(char *)(uVar16 + (long)*(int *)(lVar6 + 0x14));
        cVar3 = *(char *)(lVar15 + *(int *)(lVar6 + 0x14));
        lStack_c0 = lVar6;
        FUN_102dd7618(lVar15,FUN_102dd6ab0);
        FUN_102dd99f0(lVar23,0x112f18d70,&UNK_10db4f820);
        uVar9 = uStack_b0;
        if (cVar2 == '\x02') {
          bVar5 = cVar3 == '\x02';
        }
        else {
          bVar5 = cVar2 == cVar3;
        }
        lVar6 = lStack_c0;
        if (bVar5) {
          FUN_102dd7618(uVar16,FUN_102dd6ab0);
          goto LAB_102dd53dc;
        }
      }
      uVar9 = uStack_b0;
      FUN_102dd7618(uVar16,FUN_102dd6ab0);
      uVar12 = 0x112f18d70;
      puVar14 = &UNK_10db4f820;
LAB_102dd55a0:
      FUN_102dd99f0(lVar17,uVar12,puVar14);
      uVar16 = 1;
      uVar10 = uVar9;
      (*pcVar24)(uVar9,1,lVar6);
      if ((int)uVar10 == 0) {
        uVar10 = uVar9;
        uVar13 = uVar11;
        FUN_102dd9648(uVar9,uVar11,FUN_102dd6ab0);
        FUN_102dd1f58();
        uVar16 = 0x102dd6ac4;
        FUN_102dd7618();
        FUN_102dd1f58();
        uVar12 = uStack_b8;
        if (uVar13 == 0) goto LAB_102dd55d4;
        if ((uVar10 == uVar11) && (uVar13 == uVar16)) {
          func_0x000107c6142c(uVar13);
          func_0x000107c6142c(uVar16);
LAB_102dd57ac:
          iVar4 = *(int *)(lVar8 + 0x18);
          FUN_102dd99f0(uVar9 + (long)iVar4,0x112f18d78,&UNK_10db4f828);
          uVar19 = 1;
          (**(code **)(*(long *)(lVar7 + -8) + 0x38))(uVar9 + (long)iVar4,1,1);
          FUN_102dd99f0(uVar9,0x112f18d70,&UNK_10db4f820);
          FUN_102dd9648(uVar12,uVar9,FUN_102dd6ab0);
          (*pcVar20)(uVar9,0,1,lVar6);
          goto LAB_102dd563c;
        }
        func_0x000107c605b8(uVar10,uVar13,uVar11,uVar16,0);
        func_0x000107c6142c(uVar13);
        func_0x000107c6142c(uVar16);
        if ((uVar10 & 1) != 0) goto LAB_102dd57ac;
      }
      else {
        FUN_102dd1f58();
LAB_102dd55d4:
        uVar12 = uStack_b8;
        func_0x000107c6142c(uVar16);
      }
      lVar22 = (long)*(int *)(lVar8 + 0x18);
      lVar15 = *(long *)(uVar9 + (long)*(int *)(lVar8 + 0x14) + 8);
      FUN_102dd99f0(uVar9 + lVar22,0x112f18d78,&UNK_10db4f828);
      if (lVar15 == 0) {
        (**(code **)(*(long *)(lVar7 + -8) + 0x38))(uVar9 + lVar22,1,1);
        FUN_102dd5834(param_3,param_6);
        if ((param_3 & 1) == 0) {
          FUN_102dd99f0(uVar9,0x112f18d70,&UNK_10db4f820);
          FUN_102dd9648(uVar12,uVar9,FUN_102dd6ab0);
          uVar19 = 1;
          uVar16 = 0;
          uVar11 = uVar9;
          (*pcVar20)(uVar9,0,1,lVar6);
          FUN_102dd1f58();
          puVar1 = (ulong *)(uVar9 + (long)*(int *)(lVar8 + 0x14));
          func_0x000107c6142c(puVar1[1]);
          *puVar1 = uVar11;
          puVar1[1] = uVar16;
          goto LAB_102dd563c;
        }
        goto LAB_102dd5638;
      }
      FUN_102dd9648(param_3,uVar9 + lVar22,0x102dd6ad8);
      pcVar20 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
      lVar22 = uVar9 + lVar22;
      uVar12 = 0;
    }
    (*pcVar20)(lVar22,uVar12,1);
  }
LAB_102dd5638:
  uVar19 = 0;
LAB_102dd563c:
  *param_1 = uVar19;
  return;
}



/* Entry: 102dd5834; end: 102dd58e7;  */

uint FUN_102dd5834(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar4;
  long unaff_x20;
  ulong uVar3;
  
  lVar2 = 0;
  uVar4 = param_2;
  func_0x000102dd6ad8();
  if (((*(byte *)(param_1 + *(int *)(lVar2 + 0x18)) & 1) == 0) && (*(long *)(unaff_x20 + 0xa8) != 0)
     ) {
    (**(code **)(unaff_x20 + 0x98))();
    FUN_102dd1624();
    if ((param_2 & 1) == 0) {
      func_0x00010006c804();
      FUN_102dd13f8();
      uVar3 = param_2;
      FUN_102dd1f58();
      uVar1 = (uint)uVar3;
      func_0x000100077018();
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(uVar4);
      func_0x000100070bfc();
      uVar1 = uVar1 & 1;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 102dd58e8; end: 102dd5a6f;  */

void FUN_102dd58e8(char *param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  char acStack_90 [16];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  char *pcStack_68;
  
  lVar2 = 0x112f19000;
  func_0x0001000285a8(0x112f19000,&UNK_10db4fa10);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  pcVar6 = acStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)pcVar6 - extraout_x12;
  uVar7 = *(undefined8 *)(unaff_x20 + 0xe0);
  uStack_70 = param_2;
  pcStack_68 = param_1;
  func_0x000107c6157c(uVar7);
  func_0x000100075034(lVar5,0x102dd990c,auStack_80,lVar2);
  func_0x000107c61574(uVar7);
  FUN_102dd9924(lVar5,pcVar6,0x112f19000,&UNK_10db4fa10);
  cVar1 = *pcVar6;
  FUN_102dd99f0(pcVar6 + *(int *)(lVar2 + 0x30),0x112f18d78,&UNK_10db4f828);
  if ((cVar1 == '\x01') && (lVar3 = *(long *)(unaff_x20 + 0xb8), lVar3 != 0)) {
    lVar4 = *(long *)(unaff_x20 + 0xc0);
    cVar1 = *param_1;
    func_0x000107c614f0(lVar3);
    (**(code **)(lVar4 + 0x10))(cVar1 != '\x01',1,lVar3,lVar4);
  }
  FUN_102dd5f6c(lVar5 + *(int *)(lVar2 + 0x30));
  FUN_102dd99f0(lVar5,0x112f19000,&UNK_10db4fa10);
  return;
}



/* Entry: 102dd5a70; end: 102dd5f6b;  */

void FUN_102dd5a70(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar14;
  code *pcVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  char acStack_90 [8];
  char *pcStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  
  lVar7 = 0;
  uStack_78 = param_4;
  FUN_102dd6ab0();
  lVar18 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar14 = 0x112f19008;
  pcStack_88 = acStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112f19008,&UNK_10db4fa18);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)(acStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar8 = 0x112f18d70;
  func_0x0001000285a8(0x112f18d70,&UNK_10db4f820);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  uVar17 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = uVar17 - extraout_x12;
  FUN_102dd9648(param_3,lVar19,FUN_102dd6ab0);
  pcStack_80 = *(code **)(lVar18 + 0x38);
  (*pcStack_80)(lVar19,0,1,lVar7);
  lVar14 = (long)*(int *)(lVar14 + 0x30);
  FUN_102dd9924(param_2,lVar16,0x112f18d70,&UNK_10db4f820);
  FUN_102dd9924(lVar19,lVar16 + lVar14,0x112f18d70,&UNK_10db4f820);
  pcVar15 = *(code **)(lVar18 + 0x30);
  lVar8 = lVar16;
  (*pcVar15)(lVar16,1,lVar7);
  if ((int)lVar8 == 1) {
    FUN_102dd99f0(lVar19,0x112f18d70,&UNK_10db4f820);
    lVar14 = lVar16 + lVar14;
    (*pcVar15)(lVar14,1,lVar7);
    if ((int)lVar14 == 1) {
LAB_102dd5c2c:
      FUN_102dd99f0(lVar16,0x112f18d70,&UNK_10db4f820);
      FUN_102dd99f0(param_2,0x112f18d70,&UNK_10db4f820);
      (*pcStack_80)(param_2,1,1,lVar7);
      lVar14 = 0x112f19000;
      func_0x0001000285a8(0x112f19000,&UNK_10db4fa10);
      iVar4 = *(int *)(lVar14 + 0x30);
      lVar14 = 0;
      func_0x000102dd6ad8();
      pcVar15 = *(code **)(*(long *)(lVar14 + -8) + 0x38);
      uVar11 = 1;
      (*pcVar15)(param_1 + iVar4,1,1,lVar14);
      lVar8 = 0;
      func_0x000102dd7d68();
      puVar1 = (ulong *)(param_2 + *(int *)(lVar8 + 0x14));
      uVar17 = *puVar1;
      uVar10 = puVar1[1];
      uVar9 = uVar10;
      func_0x000107c61434();
      FUN_102dd1f58();
      if (uVar10 == 0) {
        func_0x000107c6142c(uVar11);
      }
      else {
        if ((uVar17 == uVar9) && (uVar10 == uVar11)) {
          func_0x000107c6142c(uVar10);
          func_0x000107c6142c(uVar11);
        }
        else {
          func_0x000107c605b8(uVar17,uVar10,uVar9,uVar11,0);
          func_0x000107c6142c(uVar10);
          func_0x000107c6142c(uVar11);
          if ((uVar17 & 1) == 0) goto LAB_102dd5f20;
        }
        FUN_102dd99f0(param_1 + iVar4,0x112f18d78,&UNK_10db4f828);
        func_0x000107c6142c(uVar10);
        *puVar1 = 0;
        puVar1[1] = 0;
        iVar5 = *(int *)(lVar8 + 0x18);
        func_0x000102dd9a30(param_2 + iVar5,param_1 + iVar4,0x112f18d78,&UNK_10db4f828);
        (*pcVar15)(param_2 + iVar5,1,1,lVar14);
      }
LAB_102dd5f20:
      *param_1 = 1;
      return;
    }
  }
  else {
    FUN_102dd9924(lVar16,uVar17,0x112f18d70,&UNK_10db4f820);
    lVar8 = lVar16 + lVar14;
    (*pcVar15)(lVar8,1,lVar7);
    pcVar6 = pcStack_88;
    if ((int)lVar8 != 1) {
      func_0x000102dd968c(lVar16 + lVar14,pcStack_88,FUN_102dd6ab0);
      uVar10 = uVar17;
      FUN_102dd93e0(uVar17,pcVar6);
      if ((uVar10 & 1) == 0) {
        FUN_102dd7618(pcVar6,FUN_102dd6ab0);
        FUN_102dd99f0(lVar19,0x112f18d70,&UNK_10db4f820);
      }
      else {
        cVar2 = *(char *)(uVar17 + (long)*(int *)(lVar7 + 0x14));
        cVar3 = pcVar6[*(int *)(lVar7 + 0x14)];
        FUN_102dd7618(pcVar6,FUN_102dd6ab0);
        FUN_102dd99f0(lVar19,0x112f18d70,&UNK_10db4f820);
        if (cVar2 == '\x02') {
          if (cVar3 == '\x02') {
LAB_102dd5f58:
            FUN_102dd7618(uVar17,FUN_102dd6ab0);
            goto LAB_102dd5c2c;
          }
        }
        else if (cVar2 == cVar3) goto LAB_102dd5f58;
      }
      FUN_102dd7618(uVar17,FUN_102dd6ab0);
      uVar12 = 0x112f18d70;
      puVar13 = &UNK_10db4f820;
      goto LAB_102dd5e38;
    }
    FUN_102dd99f0(lVar19,0x112f18d70,&UNK_10db4f820);
    FUN_102dd7618(uVar17,FUN_102dd6ab0);
  }
  uVar12 = 0x112f19008;
  puVar13 = &UNK_10db4fa18;
LAB_102dd5e38:
  FUN_102dd99f0(lVar16,uVar12,puVar13);
  lVar14 = 0x112f19000;
  func_0x0001000285a8(0x112f19000,&UNK_10db4fa10);
  iVar4 = *(int *)(lVar14 + 0x30);
  *param_1 = 0;
  lVar14 = 0;
  func_0x000102dd6ad8();
  (**(code **)(*(long *)(lVar14 + -8) + 0x38))(param_1 + iVar4,1,1,lVar14);
  return;
}



/* Entry: 102dd5f6c; end: 102dd61d3;  */

void FUN_102dd5f6c(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_80;
  long lStack_70;
  long lStack_68;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lStack_70 = *(long *)(lVar2 + -8);
  lStack_68 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_70 + 0x40));
  lVar5 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112f18d78;
  func_0x0001000285a8(0x112f18d78,&UNK_10db4f828);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar6 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar6 - extraout_x12;
  lVar3 = 0;
  func_0x000102dd6ad8();
  lVar2 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  lVar8 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar8 - extraout_x12_00;
  FUN_102dd9924(param_1,lVar9,0x112f18d78,&UNK_10db4f828);
  pcVar4 = *(code **)(lVar2 + 0x30);
  lVar2 = lVar9;
  (*pcVar4)(lVar9,1,lVar3);
  if ((int)lVar2 != 1) {
    func_0x000102dd968c(lVar9,lVar7,0x102dd6ad8);
    (**(code **)(unaff_x20 + 200))(lVar5);
    puVar1 = (undefined8 *)(lVar7 + *(int *)(lVar3 + 0x1c));
    FUN_102dd43a4(lVar6,*puVar1,puVar1[1],puVar1[2],lVar5);
    lVar2 = lVar6;
    (*pcVar4)(lVar6,1,lVar3);
    if ((int)lVar2 != 1) {
      func_0x000102dd968c(lVar6,lVar8,0x102dd6ad8);
      FUN_102dd4728(lVar8,lVar5);
      FUN_102dd7618(lVar8,0x102dd6ad8);
      (**(code **)(lStack_70 + 8))(lVar5,lStack_68);
      FUN_102dd7618(lVar7,0x102dd6ad8);
      return;
    }
    (**(code **)(lStack_70 + 8))(lVar5,lStack_68);
    FUN_102dd7618(lVar7,0x102dd6ad8);
    lVar9 = lVar6;
  }
  FUN_102dd99f0(lVar9,0x112f18d78,&UNK_10db4f828);
  return;
}



/* Entry: 102dd61d4; end: 102dd669b;  */

void FUN_102dd61d4(long param_1,long param_2,long param_3,long param_4,code *param_5,
                  undefined8 param_6,undefined8 param_7)

{
  ulong *puVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar11;
  long extraout_x12;
  code *pcVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  ulong uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar4 = 0;
  uStack_a8 = param_6;
  pcStack_a0 = param_5;
  uStack_88 = param_7;
  lStack_70 = param_2;
  lStack_68 = param_1;
  FUN_102dd6ab0();
  lVar18 = *(long *)(lVar4 + -8);
  lStack_80 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar16 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112f19008;
  lStack_b0 = lVar16;
  func_0x0001000285a8(0x112f19008,&UNK_10db4fa18);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar16 - extraout_x8_00;
  lVar5 = 0x112f18d70;
  func_0x0001000285a8(0x112f18d70,&UNK_10db4f820);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  uVar11 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uStack_98 = uVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = uVar11 - extraout_x12;
  lVar5 = 0;
  func_0x000107c5eea4();
  lVar17 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar15 = lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  func_0x000102dd6ad8();
  lStack_90 = param_3;
  lStack_78 = lVar6;
  if (((*(byte *)(param_3 + *(int *)(lVar6 + 0x18)) & 1) == 0) && (*(long *)(param_4 + 0xa8) != 0))
  {
    (*pcStack_a0)(lVar15);
    FUN_102dd179c(lStack_90,lVar15);
    (**(code **)(lVar17 + 8))(lVar15,lVar5);
  }
  FUN_102dd9648(uStack_88,lVar14,FUN_102dd6ab0);
  lVar5 = lStack_80;
  (**(code **)(lVar18 + 0x38))(lVar14,0,1,lStack_80);
  lVar6 = lStack_70;
  lVar4 = (long)*(int *)(lVar4 + 0x30);
  FUN_102dd9924(lStack_70,lVar16,0x112f18d70,&UNK_10db4f820);
  FUN_102dd9924(lVar14,lVar16 + lVar4,0x112f18d70,&UNK_10db4f820);
  pcVar12 = *(code **)(lVar18 + 0x30);
  lVar15 = lVar16;
  (*pcVar12)(lVar16,1,lVar5);
  uVar11 = uStack_98;
  if ((int)lVar15 == 1) {
    FUN_102dd99f0(lVar14,0x112f18d70,&UNK_10db4f820);
    lVar4 = lVar16 + lVar4;
    (*pcVar12)(lVar4,1,lVar5);
    if ((int)lVar4 == 1) {
LAB_102dd642c:
      uVar11 = 0x112f18d70;
      FUN_102dd99f0(lVar16,0x112f18d70,&UNK_10db4f820);
      lVar5 = 0;
      func_0x000102dd7d68();
      puVar1 = (ulong *)(lVar6 + *(int *)(lVar5 + 0x14));
      uVar8 = *puVar1;
      uVar13 = puVar1[1];
      uVar7 = uVar13;
      func_0x000107c61434();
      FUN_102dd1f58();
      if (uVar13 == 0) {
        func_0x000107c6142c(uVar11);
        lVar4 = lStack_68;
      }
      else {
        if ((uVar8 == uVar7) && (uVar13 == uVar11)) {
          func_0x000107c61430(uVar13,2);
          uVar13 = uVar11;
        }
        else {
          func_0x000107c605b8(uVar8,uVar13,uVar7,uVar11,0);
          func_0x000107c6142c(uVar13);
          func_0x000107c6142c(uVar11);
          lVar4 = lStack_68;
          if ((uVar8 & 1) == 0) goto LAB_102dd65d0;
        }
        func_0x000107c6142c(uVar13);
        *puVar1 = 0;
        puVar1[1] = 0;
        lVar4 = lVar6 + *(int *)(lVar5 + 0x18);
        func_0x000102dd9a30(lVar4,lStack_68,0x112f18d78,&UNK_10db4f828);
      }
      goto LAB_102dd65d0;
    }
LAB_102dd64f8:
    uVar9 = 0x112f19008;
    puVar10 = &UNK_10db4fa18;
  }
  else {
    FUN_102dd9924(lVar16,uStack_98,0x112f18d70,&UNK_10db4f820);
    lVar15 = lVar16 + lVar4;
    (*pcVar12)(lVar15,1,lVar5);
    lVar17 = lStack_b0;
    if ((int)lVar15 == 1) {
      FUN_102dd99f0(lVar14,0x112f18d70,&UNK_10db4f820);
      FUN_102dd7618(uVar11,FUN_102dd6ab0);
      goto LAB_102dd64f8;
    }
    func_0x000102dd968c(lVar16 + lVar4,lStack_b0,FUN_102dd6ab0);
    uVar8 = uVar11;
    FUN_102dd93e0(uVar11,lVar17);
    if ((uVar8 & 1) == 0) {
      FUN_102dd7618(lVar17,FUN_102dd6ab0);
      FUN_102dd99f0(lVar14,0x112f18d70,&UNK_10db4f820);
    }
    else {
      cVar2 = *(char *)(uVar11 + (long)*(int *)(lVar5 + 0x14));
      cVar3 = *(char *)(lVar17 + *(int *)(lVar5 + 0x14));
      FUN_102dd7618(lVar17,FUN_102dd6ab0);
      FUN_102dd99f0(lVar14,0x112f18d70,&UNK_10db4f820);
      if (cVar2 == '\x02') {
        if (cVar3 == '\x02') {
LAB_102dd6688:
          FUN_102dd7618(uVar11,FUN_102dd6ab0);
          goto LAB_102dd642c;
        }
      }
      else if (cVar2 == cVar3) goto LAB_102dd6688;
    }
    FUN_102dd7618(uVar11,FUN_102dd6ab0);
    uVar9 = 0x112f18d70;
    puVar10 = &UNK_10db4f820;
  }
  FUN_102dd99f0(lVar16,uVar9,puVar10);
  lVar4 = lStack_68;
LAB_102dd65d0:
  (**(code **)(*(long *)(lStack_78 + -8) + 0x38))(lVar4,1,1);
  return;
}



/* Entry: 102dd669c; end: 102dd675f;  */

void FUN_102dd669c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000834e4(unaff_x20 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  return;
}



/* Entry: 102dd6760; end: 102dd6aaf;  */

long * FUN_102dd6760(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  code *pcVar20;
  
  uVar11 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar11 >> 0x11 & 1) == 0) {
    lVar12 = 0;
    FUN_102dd6ab0();
    lVar19 = *(long *)(lVar12 + -8);
    plVar13 = param_2;
    (**(code **)(lVar19 + 0x30))(param_2,1,lVar12);
    if ((int)plVar13 == 0) {
      *(char *)param_1 = (char)*param_2;
      lVar16 = param_2[2];
      param_1[1] = param_2[1];
      param_1[2] = lVar16;
      lVar17 = 0;
      func_0x000102dd6ac4();
      iVar10 = *(int *)(lVar17 + 0x18);
      lVar14 = 0;
      func_0x000107c5eea4();
      pcVar20 = *(code **)(*(long *)(lVar14 + -8) + 0x10);
      func_0x000107c61434(lVar16);
      (*pcVar20)((undefined1 *)((long)param_1 + (long)iVar10),
                 (undefined1 *)((long)param_2 + (long)iVar10),lVar14);
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar17 + 0x1c));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar17 + 0x1c));
      uVar5 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar5;
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar17 + 0x20));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar17 + 0x20));
      uVar5 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar5;
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar17 + 0x24));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar17 + 0x24));
      uVar6 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar6;
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar17 + 0x28));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar17 + 0x28));
      uVar7 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar7;
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar12 + 0x14)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar12 + 0x14));
      pcVar20 = *(code **)(lVar19 + 0x38);
      func_0x000107c61434();
      func_0x000107c61434(uVar5);
      func_0x000107c61434(uVar6);
      func_0x000107c61434(uVar7);
      (*pcVar20)(param_1,0,1,lVar12);
    }
    else {
      lVar12 = 0x112f18d70;
      func_0x0001000285a8(0x112f18d70,&UNK_10db4f820);
      func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
    }
    iVar10 = *(int *)(param_3 + 0x18);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    puVar3 = (undefined1 *)((long)param_1 + (long)iVar10);
    puVar4 = (undefined1 *)((long)param_2 + (long)iVar10);
    lVar12 = 0;
    func_0x000102dd6ad8();
    lVar19 = *(long *)(lVar12 + -8);
    pcVar20 = *(code **)(lVar19 + 0x30);
    func_0x000107c61434(uVar5);
    puVar15 = puVar4;
    (*pcVar20)(puVar4,1,lVar12);
    if ((int)puVar15 == 0) {
      *puVar3 = *puVar4;
      uVar5 = *(undefined8 *)(puVar4 + 0x10);
      *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
      *(undefined8 *)(puVar3 + 0x10) = uVar5;
      lVar16 = 0;
      func_0x000102dd6ac4();
      iVar10 = *(int *)(lVar16 + 0x18);
      lVar17 = 0;
      func_0x000107c5eea4();
      pcVar20 = *(code **)(*(long *)(lVar17 + -8) + 0x10);
      func_0x000107c61434(uVar5);
      (*pcVar20)(puVar3 + iVar10,puVar4 + iVar10,lVar17);
      iVar10 = *(int *)(lVar16 + 0x1c);
      uVar5 = *(undefined8 *)((long)(puVar4 + iVar10) + 8);
      *(undefined8 *)(puVar3 + iVar10) = *(undefined8 *)(puVar4 + iVar10);
      *(undefined8 *)((long)(puVar3 + iVar10) + 8) = uVar5;
      iVar10 = *(int *)(lVar16 + 0x20);
      uVar6 = *(undefined8 *)((long)(puVar4 + iVar10) + 8);
      *(undefined8 *)(puVar3 + iVar10) = *(undefined8 *)(puVar4 + iVar10);
      *(undefined8 *)((long)(puVar3 + iVar10) + 8) = uVar6;
      iVar10 = *(int *)(lVar16 + 0x24);
      uVar7 = *(undefined8 *)((long)(puVar4 + iVar10) + 8);
      *(undefined8 *)(puVar3 + iVar10) = *(undefined8 *)(puVar4 + iVar10);
      *(undefined8 *)((long)(puVar3 + iVar10) + 8) = uVar7;
      iVar10 = *(int *)(lVar16 + 0x28);
      uVar8 = *(undefined8 *)((long)(puVar4 + iVar10) + 8);
      *(undefined8 *)(puVar3 + iVar10) = *(undefined8 *)(puVar4 + iVar10);
      *(undefined8 *)((long)(puVar3 + iVar10) + 8) = uVar8;
      puVar3[*(int *)(lVar12 + 0x14)] = puVar4[*(int *)(lVar12 + 0x14)];
      puVar3[*(int *)(lVar12 + 0x18)] = puVar4[*(int *)(lVar12 + 0x18)];
      puVar1 = (undefined8 *)(puVar3 + *(int *)(lVar12 + 0x1c));
      puVar2 = (undefined8 *)(puVar4 + *(int *)(lVar12 + 0x1c));
      uVar5 = *puVar2;
      uVar9 = puVar2[1];
      *puVar1 = uVar5;
      puVar1[1] = uVar9;
      puVar1[2] = puVar2[2];
      pcVar20 = *(code **)(lVar19 + 0x38);
      func_0x000107c61434();
      func_0x000107c61434(uVar6);
      func_0x000107c61434(uVar7);
      func_0x000107c61434(uVar8);
      func_0x000107c61434(uVar5);
      func_0x000107c61434(uVar9);
      (*pcVar20)(puVar3,0,1,lVar12);
    }
    else {
      lVar12 = 0x112f18d78;
      func_0x0001000285a8(0x112f18d78,&UNK_10db4f828);
      func_0x000107c610b4(puVar3,puVar4,*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  }
  else {
    lVar12 = *param_2;
    *param_1 = lVar12;
    uVar18 = (ulong)uVar11 & 0xff;
    param_1 = (long *)(lVar12 + (uVar18 + 0x10 & (uVar18 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 102dd6ab0; end: 102dd6aeb;  */

void FUN_102dd6ab0(undefined8 param_1)

{
  if (lRam0000000112f18fc0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e730c20);
  return;
}



/* Entry: 102dd6aec; end: 102dd6c83;  */

/* WARNING: Possible PIC construction at 0x000102dd6b2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dd6b68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dd6b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dd6ba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dd6bf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dd6c2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dd6c4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dd6c6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dd6c50) */
/* WARNING: Removing unreachable block (ram,0x000102dd6c30) */
/* WARNING: Removing unreachable block (ram,0x000102dd6bf4) */
/* WARNING: Removing unreachable block (ram,0x000102dd6bac) */
/* WARNING: Removing unreachable block (ram,0x000102dd6bec) */
/* WARNING: Removing unreachable block (ram,0x000102dd6bdc) */
/* WARNING: Removing unreachable block (ram,0x000102dd6b8c) */
/* WARNING: Removing unreachable block (ram,0x000102dd6b6c) */
/* WARNING: Removing unreachable block (ram,0x000102dd6b30) */
/* WARNING: Removing unreachable block (ram,0x000102dd6c70) */

void FUN_102dd6aec(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0;
  FUN_102dd6ab0();
  lVar2 = param_1;
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,1,lVar1);
  if ((int)lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + *(int *)(param_2 + 0x14) + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 102dd6c84; end: 102dd7617;  */

undefined1 * FUN_102dd6c84(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  
  lVar11 = 0;
  FUN_102dd6ab0();
  lVar16 = *(long *)(lVar11 + -8);
  puVar12 = param_2;
  (**(code **)(lVar16 + 0x30))(param_2,1,lVar11);
  if ((int)puVar12 == 0) {
    *param_1 = *param_2;
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    lVar14 = 0;
    func_0x000102dd6ac4();
    iVar9 = *(int *)(lVar14 + 0x18);
    lVar15 = 0;
    func_0x000107c5eea4();
    pcVar17 = *(code **)(*(long *)(lVar15 + -8) + 0x10);
    func_0x000107c61434(uVar4);
    (*pcVar17)(param_1 + iVar9,param_2 + iVar9,lVar15);
    iVar9 = *(int *)(lVar14 + 0x1c);
    uVar4 = *(undefined8 *)((long)(param_2 + iVar9) + 8);
    *(undefined8 *)(param_1 + iVar9) = *(undefined8 *)(param_2 + iVar9);
    *(undefined8 *)((long)(param_1 + iVar9) + 8) = uVar4;
    iVar9 = *(int *)(lVar14 + 0x20);
    uVar4 = *(undefined8 *)((long)(param_2 + iVar9) + 8);
    *(undefined8 *)(param_1 + iVar9) = *(undefined8 *)(param_2 + iVar9);
    *(undefined8 *)((long)(param_1 + iVar9) + 8) = uVar4;
    iVar9 = *(int *)(lVar14 + 0x24);
    uVar5 = *(undefined8 *)((long)(param_2 + iVar9) + 8);
    *(undefined8 *)(param_1 + iVar9) = *(undefined8 *)(param_2 + iVar9);
    *(undefined8 *)((long)(param_1 + iVar9) + 8) = uVar5;
    iVar9 = *(int *)(lVar14 + 0x28);
    uVar6 = *(undefined8 *)((long)(param_2 + iVar9) + 8);
    *(undefined8 *)(param_1 + iVar9) = *(undefined8 *)(param_2 + iVar9);
    *(undefined8 *)((long)(param_1 + iVar9) + 8) = uVar6;
    param_1[*(int *)(lVar11 + 0x14)] = param_2[*(int *)(lVar11 + 0x14)];
    pcVar17 = *(code **)(lVar16 + 0x38);
    func_0x000107c61434();
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar5);
    func_0x000107c61434(uVar6);
    (*pcVar17)(param_1,0,1,lVar11);
  }
  else {
    lVar11 = 0x112f18d70;
    func_0x0001000285a8(0x112f18d70,&UNK_10db4f820);
    func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  }
  iVar9 = *(int *)(param_3 + 0x14);
  iVar10 = *(int *)(param_3 + 0x18);
  uVar4 = *(undefined8 *)((long)(param_2 + iVar9) + 8);
  *(undefined8 *)(param_1 + iVar9) = *(undefined8 *)(param_2 + iVar9);
  *(undefined8 *)((long)(param_1 + iVar9) + 8) = uVar4;
  puVar12 = param_1 + iVar10;
  puVar1 = param_2 + iVar10;
  lVar11 = 0;
  func_0x000102dd6ad8();
  lVar16 = *(long *)(lVar11 + -8);
  pcVar17 = *(code **)(lVar16 + 0x30);
  func_0x000107c61434(uVar4);
  puVar13 = puVar1;
  (*pcVar17)(puVar1,1,lVar11);
  if ((int)puVar13 == 0) {
    *puVar12 = *puVar1;
    uVar4 = *(undefined8 *)(puVar1 + 0x10);
    *(undefined8 *)(puVar12 + 8) = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar12 + 0x10) = uVar4;
    lVar14 = 0;
    func_0x000102dd6ac4();
    iVar9 = *(int *)(lVar14 + 0x18);
    lVar15 = 0;
    func_0x000107c5eea4();
    pcVar17 = *(code **)(*(long *)(lVar15 + -8) + 0x10);
    func_0x000107c61434(uVar4);
    (*pcVar17)(puVar12 + iVar9,puVar1 + iVar9,lVar15);
    iVar9 = *(int *)(lVar14 + 0x1c);
    uVar4 = *(undefined8 *)((long)(puVar1 + iVar9) + 8);
    *(undefined8 *)(puVar12 + iVar9) = *(undefined8 *)(puVar1 + iVar9);
    *(undefined8 *)((long)(puVar12 + iVar9) + 8) = uVar4;
    iVar9 = *(int *)(lVar14 + 0x20);
    uVar5 = *(undefined8 *)((long)(puVar1 + iVar9) + 8);
    *(undefined8 *)(puVar12 + iVar9) = *(undefined8 *)(puVar1 + iVar9);
    *(undefined8 *)((long)(puVar12 + iVar9) + 8) = uVar5;
    iVar9 = *(int *)(lVar14 + 0x24);
    uVar6 = *(undefined8 *)((long)(puVar1 + iVar9) + 8);
    *(undefined8 *)(puVar12 + iVar9) = *(undefined8 *)(puVar1 + iVar9);
    *(undefined8 *)((long)(puVar12 + iVar9) + 8) = uVar6;
    iVar9 = *(int *)(lVar14 + 0x28);
    uVar7 = *(undefined8 *)((long)(puVar1 + iVar9) + 8);
    *(undefined8 *)(puVar12 + iVar9) = *(undefined8 *)(puVar1 + iVar9);
    *(undefined8 *)((long)(puVar12 + iVar9) + 8) = uVar7;
    puVar12[*(int *)(lVar11 + 0x14)] = puVar1[*(int *)(lVar11 + 0x14)];
    puVar12[*(int *)(lVar11 + 0x18)] = puVar1[*(int *)(lVar11 + 0x18)];
    puVar2 = (undefined8 *)(puVar12 + *(int *)(lVar11 + 0x1c));
    puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar11 + 0x1c));
    uVar4 = *puVar3;
    uVar8 = puVar3[1];
    *puVar2 = uVar4;
    puVar2[1] = uVar8;
    puVar2[2] = puVar3[2];
    pcVar17 = *(code **)(lVar16 + 0x38);
    func_0x000107c61434();
    func_0x000107c61434(uVar5);
    func_0x000107c61434(uVar6);
    func_0x000107c61434(uVar7);
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar8);
    (*pcVar17)(puVar12,0,1,lVar11);
  }
  else {
    lVar11 = 0x112f18d78;
    func_0x0001000285a8(0x112f18d78,&UNK_10db4f828);
    func_0x000107c610b4(puVar12,puVar1,*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  }
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  return param_1;
}



/* Entry: 102dd7618; end: 102dd7653;  */

undefined8 FUN_102dd7618(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102dd7654; end: 102dd7d4f;  */

undefined1 * FUN_102dd7654(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar6 = 0;
  FUN_102dd6ab0();
  lVar11 = *(long *)(lVar6 + -8);
  puVar7 = param_2;
  (**(code **)(lVar11 + 0x30))(param_2,1,lVar6);
  if ((int)puVar7 == 0) {
    *param_1 = *param_2;
    uVar12 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar12;
    lVar9 = 0;
    func_0x000102dd6ac4();
    iVar4 = *(int *)(lVar9 + 0x18);
    lVar10 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar10 + -8) + 0x20))(param_1 + iVar4,param_2 + iVar4,lVar10);
    iVar4 = *(int *)(lVar9 + 0x1c);
    uVar12 = *(undefined8 *)(param_2 + iVar4);
    *(undefined8 *)((long)(param_1 + iVar4) + 8) = *(undefined8 *)((long)(param_2 + iVar4) + 8);
    *(undefined8 *)(param_1 + iVar4) = uVar12;
    iVar4 = *(int *)(lVar9 + 0x20);
    uVar12 = *(undefined8 *)(param_2 + iVar4);
    *(undefined8 *)((long)(param_1 + iVar4) + 8) = *(undefined8 *)((long)(param_2 + iVar4) + 8);
    *(undefined8 *)(param_1 + iVar4) = uVar12;
    iVar4 = *(int *)(lVar9 + 0x24);
    uVar12 = *(undefined8 *)(param_2 + iVar4);
    *(undefined8 *)((long)(param_1 + iVar4) + 8) = *(undefined8 *)((long)(param_2 + iVar4) + 8);
    *(undefined8 *)(param_1 + iVar4) = uVar12;
    iVar4 = *(int *)(lVar9 + 0x28);
    uVar12 = *(undefined8 *)(param_2 + iVar4);
    *(undefined8 *)((long)(param_1 + iVar4) + 8) = *(undefined8 *)((long)(param_2 + iVar4) + 8);
    *(undefined8 *)(param_1 + iVar4) = uVar12;
    param_1[*(int *)(lVar6 + 0x14)] = param_2[*(int *)(lVar6 + 0x14)];
    (**(code **)(lVar11 + 0x38))(param_1,0,1,lVar6);
  }
  else {
    lVar6 = 0x112f18d70;
    func_0x0001000285a8(0x112f18d70,&UNK_10db4f820);
    func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  iVar4 = *(int *)(param_3 + 0x14);
  iVar5 = *(int *)(param_3 + 0x18);
  uVar12 = *(undefined8 *)(param_2 + iVar4);
  *(undefined8 *)((long)(param_1 + iVar4) + 8) = *(undefined8 *)((long)(param_2 + iVar4) + 8);
  *(undefined8 *)(param_1 + iVar4) = uVar12;
  puVar7 = param_1 + iVar5;
  puVar1 = param_2 + iVar5;
  lVar6 = 0;
  func_0x000102dd6ad8();
  lVar11 = *(long *)(lVar6 + -8);
  puVar8 = puVar1;
  (**(code **)(lVar11 + 0x30))(puVar1,1,lVar6);
  if ((int)puVar8 == 0) {
    *puVar7 = *puVar1;
    uVar12 = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar7 + 0x10) = *(undefined8 *)(puVar1 + 0x10);
    *(undefined8 *)(puVar7 + 8) = uVar12;
    lVar9 = 0;
    func_0x000102dd6ac4();
    iVar4 = *(int *)(lVar9 + 0x18);
    lVar10 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar10 + -8) + 0x20))(puVar7 + iVar4,puVar1 + iVar4,lVar10);
    iVar4 = *(int *)(lVar9 + 0x1c);
    uVar12 = *(undefined8 *)(puVar1 + iVar4);
    *(undefined8 *)((long)(puVar7 + iVar4) + 8) = *(undefined8 *)((long)(puVar1 + iVar4) + 8);
    *(undefined8 *)(puVar7 + iVar4) = uVar12;
    iVar4 = *(int *)(lVar9 + 0x20);
    uVar12 = *(undefined8 *)(puVar1 + iVar4);
    *(undefined8 *)((long)(puVar7 + iVar4) + 8) = *(undefined8 *)((long)(puVar1 + iVar4) + 8);
    *(undefined8 *)(puVar7 + iVar4) = uVar12;
    iVar4 = *(int *)(lVar9 + 0x24);
    uVar12 = *(undefined8 *)(puVar1 + iVar4);
    *(undefined8 *)((long)(puVar7 + iVar4) + 8) = *(undefined8 *)((long)(puVar1 + iVar4) + 8);
    *(undefined8 *)(puVar7 + iVar4) = uVar12;
    iVar4 = *(int *)(lVar9 + 0x28);
    uVar12 = *(undefined8 *)(puVar1 + iVar4);
    *(undefined8 *)((long)(puVar7 + iVar4) + 8) = *(undefined8 *)((long)(puVar1 + iVar4) + 8);
    *(undefined8 *)(puVar7 + iVar4) = uVar12;
    puVar7[*(int *)(lVar6 + 0x14)] = puVar1[*(int *)(lVar6 + 0x14)];
    puVar7[*(int *)(lVar6 + 0x18)] = puVar1[*(int *)(lVar6 + 0x18)];
    puVar2 = (undefined8 *)(puVar7 + *(int *)(lVar6 + 0x1c));
    puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar6 + 0x1c));
    puVar2[2] = puVar3[2];
    uVar12 = *puVar3;
    puVar2[1] = puVar3[1];
    *puVar2 = uVar12;
    (**(code **)(lVar11 + 0x38))(puVar7,0,1,lVar6);
  }
  else {
    lVar6 = 0x112f18d78;
    func_0x0001000285a8(0x112f18d78,&UNK_10db4f828);
    func_0x000107c610b4(puVar7,puVar1,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  return param_1;
}



/* Entry: 102dd7d50; end: 102dd7d7b;  */

void FUN_102dd7d50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 102dd7d7c; end: 102dd7dab;  */

void FUN_102dd7d7c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 102dd7dac; end: 102dd7eaf;  */

void FUN_102dd7dac(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  uVar2 = 0x112f18de8;
  lVar1 = 0x13f;
  func_0x000102dd7e64(0x13f,0x112f18de8,FUN_102dd6ab0);
  if (uVar2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &UNK_10db4f848;
    uVar2 = 0x112f18df0;
    lVar1 = 0x13f;
    func_0x000102dd7e64(0x13f,0x112f18df0,0x102dd6ad8);
    if (uVar2 < 0x40) {
      lStack_30 = *(long *)(lVar1 + -8) + 0x40;
      puStack_28 = PTR___sBi64_WV_11034d670 + 0x40;
      func_0x000107c6153c(param_1,0x100,4,&lStack_40,param_1 + 0x10);
    }
  }
  return;
}



/* Entry: 102dd7eb0; end: 102dd8013;  */

long * FUN_102dd7eb0(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  code *pcVar14;
  
  uVar8 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar8 >> 0x11 & 1) == 0) {
    *(char *)param_1 = (char)*param_2;
    lVar12 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = lVar12;
    lVar10 = 0;
    func_0x000102dd6ac4();
    iVar9 = *(int *)(lVar10 + 0x18);
    lVar11 = 0;
    func_0x000107c5eea4();
    pcVar14 = *(code **)(*(long *)(lVar11 + -8) + 0x10);
    func_0x000107c61434(lVar12);
    (*pcVar14)((undefined1 *)((long)param_1 + (long)iVar9),
               (undefined1 *)((long)param_2 + (long)iVar9),lVar11);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x1c));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x20));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x20));
    uVar4 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar4;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x24));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x24));
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x28));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x28));
    uVar6 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar6;
    iVar9 = *(int *)(param_3 + 0x18);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    *(undefined1 *)((long)param_1 + (long)iVar9) = *(undefined1 *)((long)param_2 + (long)iVar9);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    uVar3 = *puVar2;
    uVar7 = puVar2[1];
    *puVar1 = uVar3;
    puVar1[1] = uVar7;
    puVar1[2] = puVar2[2];
    func_0x000107c61434();
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar5);
    func_0x000107c61434(uVar6);
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar7);
  }
  else {
    lVar12 = *param_2;
    *param_1 = lVar12;
    uVar13 = (ulong)uVar8 & 0xff;
    param_1 = (long *)(lVar12 + (uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 102dd8014; end: 102dd80c3;  */

/* WARNING: Possible PIC construction at 0x000102dd8030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dd806c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dd808c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dd80ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dd8090) */
/* WARNING: Removing unreachable block (ram,0x000102dd8070) */
/* WARNING: Removing unreachable block (ram,0x000102dd8034) */
/* WARNING: Removing unreachable block (ram,0x000102dd80b0) */

void FUN_102dd8014(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 102dd80c4; end: 102dd81fb;  */

undefined1 * FUN_102dd80c4(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  
  *param_1 = *param_2;
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  lVar9 = 0;
  func_0x000102dd6ac4();
  iVar8 = *(int *)(lVar9 + 0x18);
  lVar10 = 0;
  func_0x000107c5eea4();
  pcVar11 = *(code **)(*(long *)(lVar10 + -8) + 0x10);
  func_0x000107c61434(uVar3);
  (*pcVar11)(param_1 + iVar8,param_2 + iVar8,lVar10);
  iVar8 = *(int *)(lVar9 + 0x1c);
  uVar3 = *(undefined8 *)((long)(param_2 + iVar8) + 8);
  *(undefined8 *)(param_1 + iVar8) = *(undefined8 *)(param_2 + iVar8);
  *(undefined8 *)((long)(param_1 + iVar8) + 8) = uVar3;
  iVar8 = *(int *)(lVar9 + 0x20);
  uVar4 = *(undefined8 *)((long)(param_2 + iVar8) + 8);
  *(undefined8 *)(param_1 + iVar8) = *(undefined8 *)(param_2 + iVar8);
  *(undefined8 *)((long)(param_1 + iVar8) + 8) = uVar4;
  iVar8 = *(int *)(lVar9 + 0x24);
  uVar5 = *(undefined8 *)((long)(param_2 + iVar8) + 8);
  *(undefined8 *)(param_1 + iVar8) = *(undefined8 *)(param_2 + iVar8);
  *(undefined8 *)((long)(param_1 + iVar8) + 8) = uVar5;
  iVar8 = *(int *)(lVar9 + 0x28);
  uVar6 = *(undefined8 *)((long)(param_2 + iVar8) + 8);
  *(undefined8 *)(param_1 + iVar8) = *(undefined8 *)(param_2 + iVar8);
  *(undefined8 *)((long)(param_1 + iVar8) + 8) = uVar6;
  iVar8 = *(int *)(param_3 + 0x18);
  param_1[*(int *)(param_3 + 0x14)] = param_2[*(int *)(param_3 + 0x14)];
  param_1[iVar8] = param_2[iVar8];
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar3 = *puVar2;
  uVar7 = puVar2[1];
  *puVar1 = uVar3;
  puVar1[1] = uVar7;
  puVar1[2] = puVar2[2];
  func_0x000107c61434();
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar7);
  return param_1;
}



/* Entry: 102dd81fc; end: 102dd85a7;  */

undefined1 * FUN_102dd81fc(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  lVar4 = 0;
  func_0x000102dd6ac4();
  iVar3 = *(int *)(lVar4 + 0x18);
  lVar5 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar5 + -8) + 0x18))(param_1 + iVar3,param_2 + iVar3,lVar5);
  iVar3 = *(int *)(lVar4 + 0x1c);
  puVar1 = (undefined8 *)(param_1 + iVar3);
  *puVar1 = *(undefined8 *)(param_2 + iVar3);
  uVar6 = puVar1[1];
  puVar1[1] = *(undefined8 *)((long)(param_2 + iVar3) + 8);
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  iVar3 = *(int *)(lVar4 + 0x20);
  puVar1 = (undefined8 *)(param_1 + iVar3);
  *puVar1 = *(undefined8 *)(param_2 + iVar3);
  uVar6 = puVar1[1];
  puVar1[1] = *(undefined8 *)((long)(param_2 + iVar3) + 8);
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  iVar3 = *(int *)(lVar4 + 0x24);
  puVar1 = (undefined8 *)(param_1 + iVar3);
  *puVar1 = *(undefined8 *)(param_2 + iVar3);
  uVar6 = puVar1[1];
  puVar1[1] = *(undefined8 *)((long)(param_2 + iVar3) + 8);
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  iVar3 = *(int *)(lVar4 + 0x28);
  puVar1 = (undefined8 *)(param_1 + iVar3);
  *puVar1 = *(undefined8 *)(param_2 + iVar3);
  uVar6 = puVar1[1];
  puVar1[1] = *(undefined8 *)((long)(param_2 + iVar3) + 8);
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  param_1[*(int *)(param_3 + 0x14)] = param_2[*(int *)(param_3 + 0x14)];
  param_1[*(int *)(param_3 + 0x18)] = param_2[*(int *)(param_3 + 0x18)];
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar6 = *puVar1;
  *puVar1 = *puVar2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  uVar6 = puVar1[1];
  puVar1[1] = puVar2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  puVar1[2] = puVar2[2];
  return param_1;
}



/* Entry: 102dd85a8; end: 102dd85bf;  */

void FUN_102dd85a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 102dd85c0; end: 102dd8643;  */

void FUN_102dd85c0(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000102dd6ac4();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &UNK_10db4f878;
    puStack_30 = &UNK_10db4f890;
    puStack_28 = &UNK_10db4f8a8;
    func_0x000107c6153c(param_1,0x100,4,&lStack_40,param_1 + 0x10);
  }
  return;
}



/* Entry: 102dd8644; end: 102dd8753;  */

long * FUN_102dd8644(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  code *pcVar11;
  
  uVar6 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar6 >> 0x11 & 1) == 0) {
    *(char *)param_1 = (char)*param_2;
    lVar9 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = lVar9;
    iVar7 = *(int *)(param_3 + 0x18);
    lVar8 = 0;
    func_0x000107c5eea4();
    pcVar11 = *(code **)(*(long *)(lVar8 + -8) + 0x10);
    func_0x000107c61434(lVar9);
    (*pcVar11)((undefined1 *)((long)param_1 + (long)iVar7),
               (undefined1 *)((long)param_2 + (long)iVar7),lVar8);
    iVar7 = *(int *)(param_3 + 0x20);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar7);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar7);
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    iVar7 = *(int *)(param_3 + 0x28);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    uVar4 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar4;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar7);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar7);
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    func_0x000107c61434();
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar5);
  }
  else {
    lVar9 = *param_2;
    *param_1 = lVar9;
    uVar10 = (ulong)uVar6 & 0xff;
    param_1 = (long *)(lVar9 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 102dd8754; end: 102dd87df;  */

/* WARNING: Possible PIC construction at 0x000102dd8770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dd87a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dd87c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dd87a4) */
/* WARNING: Removing unreachable block (ram,0x000102dd8774) */
/* WARNING: Removing unreachable block (ram,0x000102dd87c4) */

void FUN_102dd8754(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 102dd87e0; end: 102dd88c3;  */

undefined1 * FUN_102dd87e0(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  code *pcVar7;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  iVar5 = *(int *)(param_3 + 0x18);
  lVar6 = 0;
  func_0x000107c5eea4();
  pcVar7 = *(code **)(*(long *)(lVar6 + -8) + 0x10);
  func_0x000107c61434(uVar1);
  (*pcVar7)(param_1 + iVar5,param_2 + iVar5,lVar6);
  iVar5 = *(int *)(param_3 + 0x1c);
  iVar4 = *(int *)(param_3 + 0x20);
  uVar1 = *(undefined8 *)((long)(param_2 + iVar5) + 8);
  *(undefined8 *)(param_1 + iVar5) = *(undefined8 *)(param_2 + iVar5);
  *(undefined8 *)((long)(param_1 + iVar5) + 8) = uVar1;
  uVar1 = *(undefined8 *)((long)(param_2 + iVar4) + 8);
  *(undefined8 *)(param_1 + iVar4) = *(undefined8 *)(param_2 + iVar4);
  *(undefined8 *)((long)(param_1 + iVar4) + 8) = uVar1;
  iVar5 = *(int *)(param_3 + 0x24);
  iVar4 = *(int *)(param_3 + 0x28);
  uVar2 = *(undefined8 *)((long)(param_2 + iVar5) + 8);
  *(undefined8 *)(param_1 + iVar5) = *(undefined8 *)(param_2 + iVar5);
  *(undefined8 *)((long)(param_1 + iVar5) + 8) = uVar2;
  uVar3 = *(undefined8 *)((long)(param_2 + iVar4) + 8);
  *(undefined8 *)(param_1 + iVar4) = *(undefined8 *)(param_2 + iVar4);
  *(undefined8 *)((long)(param_1 + iVar4) + 8) = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 102dd88c4; end: 102dd8b57;  */

undefined1 * FUN_102dd88c4(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  iVar2 = *(int *)(param_3 + 0x18);
  lVar3 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar3 + -8) + 0x18))(param_1 + iVar2,param_2 + iVar2,lVar3);
  iVar2 = *(int *)(param_3 + 0x1c);
  puVar1 = (undefined8 *)(param_1 + iVar2);
  *puVar1 = *(undefined8 *)(param_2 + iVar2);
  uVar4 = puVar1[1];
  puVar1[1] = *(undefined8 *)((long)(param_2 + iVar2) + 8);
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  iVar2 = *(int *)(param_3 + 0x20);
  puVar1 = (undefined8 *)(param_1 + iVar2);
  *puVar1 = *(undefined8 *)(param_2 + iVar2);
  uVar4 = puVar1[1];
  puVar1[1] = *(undefined8 *)((long)(param_2 + iVar2) + 8);
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  iVar2 = *(int *)(param_3 + 0x24);
  puVar1 = (undefined8 *)(param_1 + iVar2);
  *puVar1 = *(undefined8 *)(param_2 + iVar2);
  uVar4 = puVar1[1];
  puVar1[1] = *(undefined8 *)((long)(param_2 + iVar2) + 8);
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  iVar2 = *(int *)(param_3 + 0x28);
  puVar1 = (undefined8 *)(param_1 + iVar2);
  *puVar1 = *(undefined8 *)(param_2 + iVar2);
  uVar4 = puVar1[1];
  puVar1[1] = *(undefined8 *)((long)(param_2 + iVar2) + 8);
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  return param_1;
}



/* Entry: 102dd8b58; end: 102dd8b6f;  */

void FUN_102dd8b58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 102dd8b70; end: 102dd8bfb;  */

void FUN_102dd8b70(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_58 = &UNK_10db4f890;
  puStack_50 = &UNK_10db4f8e8;
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = &UNK_10db4f848;
    puStack_38 = &UNK_10db4f848;
    puStack_30 = &UNK_10db4f848;
    puStack_28 = &UNK_10db4f848;
    func_0x000107c6153c(param_1,0x100,7,&puStack_58,param_1 + 0x10);
  }
  return;
}



/* Entry: 102dd8bfc; end: 102dd8d2b;  */

long * FUN_102dd8bfc(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  
  uVar6 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar6 >> 0x11 & 1) == 0) {
    *(char *)param_1 = (char)*param_2;
    lVar10 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = lVar10;
    lVar8 = 0;
    func_0x000102dd6ac4();
    iVar7 = *(int *)(lVar8 + 0x18);
    lVar9 = 0;
    func_0x000107c5eea4();
    pcVar12 = *(code **)(*(long *)(lVar9 + -8) + 0x10);
    func_0x000107c61434(lVar10);
    (*pcVar12)((undefined1 *)((long)param_1 + (long)iVar7),
               (undefined1 *)((long)param_2 + (long)iVar7),lVar9);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x1c));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x20));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x20));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x24));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x24));
    uVar4 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar4;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x28));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x28));
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    func_0x000107c61434();
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar5);
  }
  else {
    lVar10 = *param_2;
    *param_1 = lVar10;
    uVar11 = (ulong)uVar6 & 0xff;
    param_1 = (long *)(lVar10 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 102dd8d2c; end: 102dd8dbf;  */

/* WARNING: Possible PIC construction at 0x000102dd8d44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dd8d80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dd8da0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dd8d84) */
/* WARNING: Removing unreachable block (ram,0x000102dd8d48) */
/* WARNING: Removing unreachable block (ram,0x000102dd8da4) */

void FUN_102dd8d2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 102dd8dc0; end: 102dd8ec3;  */

undefined1 * FUN_102dd8dc0(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  lVar5 = 0;
  func_0x000102dd6ac4();
  iVar4 = *(int *)(lVar5 + 0x18);
  lVar6 = 0;
  func_0x000107c5eea4();
  pcVar7 = *(code **)(*(long *)(lVar6 + -8) + 0x10);
  func_0x000107c61434(uVar1);
  (*pcVar7)(param_1 + iVar4,param_2 + iVar4,lVar6);
  iVar4 = *(int *)(lVar5 + 0x1c);
  uVar1 = *(undefined8 *)((long)(param_2 + iVar4) + 8);
  *(undefined8 *)(param_1 + iVar4) = *(undefined8 *)(param_2 + iVar4);
  *(undefined8 *)((long)(param_1 + iVar4) + 8) = uVar1;
  iVar4 = *(int *)(lVar5 + 0x20);
  uVar1 = *(undefined8 *)((long)(param_2 + iVar4) + 8);
  *(undefined8 *)(param_1 + iVar4) = *(undefined8 *)(param_2 + iVar4);
  *(undefined8 *)((long)(param_1 + iVar4) + 8) = uVar1;
  iVar4 = *(int *)(lVar5 + 0x24);
  uVar2 = *(undefined8 *)((long)(param_2 + iVar4) + 8);
  *(undefined8 *)(param_1 + iVar4) = *(undefined8 *)(param_2 + iVar4);
  *(undefined8 *)((long)(param_1 + iVar4) + 8) = uVar2;
  iVar4 = *(int *)(lVar5 + 0x28);
  uVar3 = *(undefined8 *)((long)(param_2 + iVar4) + 8);
  *(undefined8 *)(param_1 + iVar4) = *(undefined8 *)(param_2 + iVar4);
  *(undefined8 *)((long)(param_1 + iVar4) + 8) = uVar3;
  param_1[*(int *)(param_3 + 0x14)] = param_2[*(int *)(param_3 + 0x14)];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 102dd8ec4; end: 102dd91bf;  */

undefined1 * FUN_102dd8ec4(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  lVar3 = 0;
  func_0x000102dd6ac4();
  iVar2 = *(int *)(lVar3 + 0x18);
  lVar4 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar4 + -8) + 0x18))(param_1 + iVar2,param_2 + iVar2,lVar4);
  iVar2 = *(int *)(lVar3 + 0x1c);
  puVar1 = (undefined8 *)(param_1 + iVar2);
  *puVar1 = *(undefined8 *)(param_2 + iVar2);
  uVar5 = puVar1[1];
  puVar1[1] = *(undefined8 *)((long)(param_2 + iVar2) + 8);
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  iVar2 = *(int *)(lVar3 + 0x20);
  puVar1 = (undefined8 *)(param_1 + iVar2);
  *puVar1 = *(undefined8 *)(param_2 + iVar2);
  uVar5 = puVar1[1];
  puVar1[1] = *(undefined8 *)((long)(param_2 + iVar2) + 8);
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  iVar2 = *(int *)(lVar3 + 0x24);
  puVar1 = (undefined8 *)(param_1 + iVar2);
  *puVar1 = *(undefined8 *)(param_2 + iVar2);
  uVar5 = puVar1[1];
  puVar1[1] = *(undefined8 *)((long)(param_2 + iVar2) + 8);
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  iVar2 = *(int *)(lVar3 + 0x28);
  puVar1 = (undefined8 *)(param_1 + iVar2);
  *puVar1 = *(undefined8 *)(param_2 + iVar2);
  uVar5 = puVar1[1];
  puVar1[1] = *(undefined8 *)((long)(param_2 + iVar2) + 8);
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  param_1[*(int *)(param_3 + 0x14)] = param_2[*(int *)(param_3 + 0x14)];
  return param_1;
}



/* Entry: 102dd91c0; end: 102dd91d7;  */

void FUN_102dd91c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 102dd91d8; end: 102dd9247;  */

void FUN_102dd91d8(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000102dd6ac4();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10db4f878;
    func_0x000107c6153c(param_1,0x100,2,&lStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 102dd9248; end: 102dd939f;  */

int FUN_102dd9248(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102dd92c4;
        goto LAB_102dd92a8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102dd92a8:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_102dd92c4:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102dd93a0; end: 102dd93df;  */

void FUN_102dd93a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f18ff8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4f938;
  func_0x000107c61520(&UNK_10db4f938,&UNK_1105d2708);
  puRam0000000112f18ff8 = puVar1;
  return;
}



/* Entry: 102dd93e0; end: 102dd9583;  */

undefined8 FUN_102dd93e0(char *param_1,char *param_2)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if ((uVar1 == *(ulong *)(param_2 + 8) && *(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10))
     || (func_0x000107c605b8(), (uVar1 & 1) != 0)) {
    lVar2 = 0;
    func_0x000102dd6ac4();
    pcVar3 = param_1 + *(int *)(lVar2 + 0x18);
    func_0x000107c5ee90(pcVar3,param_2 + *(int *)(lVar2 + 0x18));
    if (((ulong)pcVar3 & 1) != 0) {
      uVar1 = *(ulong *)((long)(param_1 + *(int *)(lVar2 + 0x1c)) + 8);
      uVar5 = *(ulong *)((long)(param_2 + *(int *)(lVar2 + 0x1c)) + 8);
      if (uVar1 == 0) {
        if (uVar5 != 0) {
          return 0;
        }
      }
      else {
        if (uVar5 == 0) {
          return 0;
        }
        uVar4 = *(ulong *)(param_1 + *(int *)(lVar2 + 0x1c));
        if ((uVar4 != *(ulong *)(param_2 + *(int *)(lVar2 + 0x1c)) || uVar1 != uVar5) &&
           (func_0x000107c605b8(), (uVar4 & 1) == 0)) {
          return 0;
        }
      }
      uVar1 = *(ulong *)((long)(param_1 + *(int *)(lVar2 + 0x20)) + 8);
      uVar5 = *(ulong *)((long)(param_2 + *(int *)(lVar2 + 0x20)) + 8);
      if (uVar1 == 0) {
        if (uVar5 != 0) {
          return 0;
        }
      }
      else {
        if (uVar5 == 0) {
          return 0;
        }
        uVar4 = *(ulong *)(param_1 + *(int *)(lVar2 + 0x20));
        if ((uVar4 != *(ulong *)(param_2 + *(int *)(lVar2 + 0x20)) || uVar1 != uVar5) &&
           (func_0x000107c605b8(), (uVar4 & 1) == 0)) {
          return 0;
        }
      }
      uVar1 = *(ulong *)((long)(param_1 + *(int *)(lVar2 + 0x24)) + 8);
      uVar5 = *(ulong *)((long)(param_2 + *(int *)(lVar2 + 0x24)) + 8);
      if (uVar1 == 0) {
        if (uVar5 != 0) {
          return 0;
        }
      }
      else {
        if (uVar5 == 0) {
          return 0;
        }
        uVar4 = *(ulong *)(param_1 + *(int *)(lVar2 + 0x24));
        if (((uVar4 != *(ulong *)(param_2 + *(int *)(lVar2 + 0x24))) || (uVar1 != uVar5)) &&
           (func_0x000107c605b8(), (uVar4 & 1) == 0)) {
          return 0;
        }
      }
      uVar1 = *(ulong *)((long)(param_1 + *(int *)(lVar2 + 0x28)) + 8);
      uVar5 = *(ulong *)((long)(param_2 + *(int *)(lVar2 + 0x28)) + 8);
      if (uVar1 == 0) {
        if (uVar5 == 0) {
          return 1;
        }
      }
      else if ((uVar5 != 0) &&
              (((uVar4 = *(ulong *)(param_1 + *(int *)(lVar2 + 0x28)),
                uVar4 == *(ulong *)(param_2 + *(int *)(lVar2 + 0x28)) && (uVar1 == uVar5)) ||
               (func_0x000107c605b8(), (uVar4 & 1) != 0)))) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 102dd9584; end: 102dd95e3;  */

undefined8 FUN_102dd9584(ulong param_1,long param_2)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = param_1;
  FUN_102dd93e0();
  if ((uVar3 & 1) != 0) {
    lVar4 = 0;
    FUN_102dd6ab0();
    cVar1 = *(char *)(param_1 + (long)*(int *)(lVar4 + 0x14));
    cVar2 = *(char *)(param_2 + *(int *)(lVar4 + 0x14));
    if (cVar1 == '\x02') {
      if (cVar2 == '\x02') {
        return 1;
      }
    }
    else if (cVar1 == cVar2) {
      return 1;
    }
  }
  return 0;
}


