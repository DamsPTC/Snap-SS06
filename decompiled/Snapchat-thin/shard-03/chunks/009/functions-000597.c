/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102e7f974; end: 102e7fa1f;  */

void FUN_102e7f974(void)

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



/* Entry: 102e7fa20; end: 102e7fb97;  */

void FUN_102e7fa20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102e7fb98; end: 102e7fc23;  */

void FUN_102e7fb98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f23d50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5e720;
  func_0x000107c61520(&UNK_10db5e720,&UNK_1105dfaf0);
  puRam0000000112f23d50 = puVar1;
  return;
}



/* Entry: 102e7fc24; end: 102e7fc43;  */

void FUN_102e7fc24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_5;
  *(undefined8 *)(unaff_x22 + 0x88) = param_6;
  *(undefined8 *)(unaff_x22 + 0x70) = param_3;
  *(undefined8 *)(unaff_x22 + 0x78) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e7fc44,0,0);
  return;
}



/* Entry: 102e7fc44; end: 102e7fcd7;  */

void FUN_102e7fc44(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar2 = *(long *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar3;
  func_0x000107c614f0(uVar3);
  piVar5 = *(int **)(lVar2 + 0x30);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x98) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102e7fcd8;
                    /* WARNING: Could not recover jumptable at 0x000102e7fcd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(FUN_102e80038,0,uVar3,lVar2);
  return;
}



/* Entry: 102e7fcd8; end: 102e7fd43;  */

void FUN_102e7fcd8(undefined1 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x90);
  *(undefined1 *)(lVar3 + 0xd8) = param_1;
  *(long *)(lVar3 + 0xa0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x98));
  func_0x000107c615e8(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_102e7fd44;
  }
  else {
    pcVar2 = FUN_102e80020;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102e7fd44; end: 102e7fdd7;  */

void FUN_102e7fd44(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar2 = *(long *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar3;
  func_0x000107c614f0(uVar3);
  piVar5 = *(int **)(lVar2 + 0x30);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102e7fdd8;
                    /* WARNING: Could not recover jumptable at 0x000102e7fdd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(FUN_102e80084,0,uVar3,lVar2);
  return;
}



/* Entry: 102e7fdd8; end: 102e7fe4f;  */

void FUN_102e7fdd8(byte param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xa8);
  *(long *)(lVar3 + 0xb8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xb0));
  func_0x000107c615e8(uVar1);
  if (unaff_x20 == 0) {
    *(byte *)(lVar3 + 0xd9) = param_1 & 1;
    pcVar2 = FUN_102e7fe50;
  }
  else {
    pcVar2 = (code *)0x102e8002c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102e7fe50; end: 102e7ff1b;  */

void FUN_102e7fe50(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x22;
  
  uVar5 = *(undefined1 *)(unaff_x22 + 0xd9);
  uVar6 = *(undefined1 *)(unaff_x22 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  lVar7 = unaff_x22 + 0x10;
  func_0x0001000a8868(lVar7,uVar2);
  func_0x000103a71010(lVar7,uVar8,uVar1,uVar3,1,uVar6,uVar5,uVar2,uVar4);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar8;
  plVar9 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 200) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_102e7ff1c;
                    /* WARNING: Could not recover jumptable at 0x000102e7ff18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_101189cb4)();
  return;
}



/* Entry: 102e7ff1c; end: 102e7ff6f;  */

void FUN_102e7ff1c(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xd0) = param_1;
  *(undefined1 *)(lVar1 + 0xda) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 200));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e7ff70,0,0);
  return;
}



/* Entry: 102e7ff70; end: 102e8001f;  */

void FUN_102e7ff70(void)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  if (*(char *)(unaff_x22 + 0xda) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x58) = uVar3;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x58,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
    func_0x0001000834e4(unaff_x22 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    puVar2 = *(undefined8 **)(unaff_x22 + 0x60);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
    *puVar2 = uVar3;
    func_0x0001000834e4(unaff_x22 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000102e8001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102e80020; end: 102e80037;  */

void FUN_102e80020(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000102e80028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102e80038; end: 102e80083;  */

uint FUN_102e80038(uint param_1,long param_2)

{
  func_0x000107c614f0();
  (**(code **)(*(long *)(param_2 + 0x18) + 0xc0))();
  return param_1 & 1;
}



/* Entry: 102e80084; end: 102e800cf;  */

uint FUN_102e80084(uint param_1,long param_2)

{
  func_0x000107c614f0();
  (**(code **)(*(long *)(param_2 + 0x18) + 200))();
  return param_1 & 1;
}



/* Entry: 102e800d0; end: 102e801bb;  */

undefined8 FUN_102e800d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long lVar4;
  
  lVar4 = *unaff_x20;
  func_0x0001000285a8(0x112d627d8,&UNK_10d9285c0);
  uVar3 = *(undefined8 *)(lVar4 + 0x10);
  uVar1 = *(undefined8 *)(lVar4 + 0x18);
  puVar2 = &UNK_1105dfb80;
  func_0x000107c613fc(&UNK_1105dfb80,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c615f0(param_1);
  func_0x00010006c00c(param_2,param_3);
  uVar3 = 0x20;
  func_0x000104887c7c(0x20,0,0x48,4,0xd000000000000038,0x800000010f1125a0,&UNK_10db5e798,puVar2);
  func_0x000107c61574(puVar2);
  return uVar3;
}



/* Entry: 102e801bc; end: 102e8023b;  */

void FUN_102e801bc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  plVar5 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102e8023c;
  plVar5[0x10] = lVar4;
  plVar5[0x11] = lVar6;
  plVar5[0xe] = lVar3;
  plVar5[0xf] = lVar2;
  plVar5[0xc] = param_1;
  plVar5[0xd] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e7fc44,0,0);
  return;
}



/* Entry: 102e8023c; end: 102e802b7;  */

void FUN_102e8023c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102e80274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102e802b8; end: 102e802db;  */

void FUN_102e802b8(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000102e802c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 102e802dc; end: 102e80387;  */

void FUN_102e802dc(void)

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



/* Entry: 102e80388; end: 102e8038b;  */

void FUN_102e80388(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f23e00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5e7d0;
  func_0x000107c61520(&UNK_10db5e7d0,&UNK_1105dfc20);
  puRam0000000112f23e00 = puVar1;
  return;
}



/* Entry: 102e8038c; end: 102e803cb;  */

void FUN_102e8038c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f23e00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5e7d0;
  func_0x000107c61520(&UNK_10db5e7d0,&UNK_1105dfc20);
  puRam0000000112f23e00 = puVar1;
  return;
}



/* Entry: 102e803cc; end: 102e80553;  */

void FUN_102e803cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102e80554; end: 102e805ff;  */

void FUN_102e80554(void)

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



/* Entry: 102e80600; end: 102e80613;  */

void FUN_102e80600(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102e80614; end: 102e80653;  */

void FUN_102e80614(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f23e08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5e8a0;
  func_0x000107c61520(&UNK_10db5e8a0,&UNK_1105dfd10);
  puRam0000000112f23e08 = puVar1;
  return;
}



/* Entry: 102e80654; end: 102e807b7;  */

int FUN_102e80654(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102e806d0;
        goto LAB_102e806b4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102e806b4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_102e806d0:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102e807b8; end: 102e80843;  */

long FUN_102e807b8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102e80844; end: 102e808f3;  */

undefined8 * FUN_102e80844(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar6 = param_2[2];
  func_0x000107c615f0();
  func_0x00010006c00c(uVar1,uVar6);
  param_1[1] = uVar1;
  param_1[2] = uVar6;
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar2;
  uVar1 = param_2[5];
  uVar3 = param_2[6];
  param_1[5] = uVar1;
  param_1[6] = uVar3;
  uVar6 = param_2[7];
  uVar4 = param_2[8];
  param_1[7] = uVar6;
  param_1[8] = uVar4;
  uVar5 = param_2[9];
  param_1[9] = uVar5;
  func_0x000107c615f0();
  func_0x000107c615f0(uVar2);
  func_0x000107c615f0(uVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar4);
  func_0x000107c61174(uVar5);
  return param_1;
}



/* Entry: 102e808f4; end: 102e809fb;  */

undefined8 * FUN_102e808f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  *param_1 = *param_2;
  func_0x000107c615f0();
  func_0x000107c615e8(uVar4);
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar4);
  uVar4 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar4);
  uVar4 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar4);
  uVar4 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  return param_1;
}



/* Entry: 102e809fc; end: 102e80a97;  */

undefined8 * FUN_102e809fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c615e8(uVar1);
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  func_0x000107c615e8(param_1[3]);
  uVar1 = param_1[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  func_0x000107c615e8(uVar1);
  func_0x000107c615e8(param_1[5]);
  uVar1 = param_1[6];
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  func_0x000107c61170(uVar1);
  func_0x000107c6142c(param_1[7]);
  uVar1 = param_1[8];
  uVar3 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar3;
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 102e80a98; end: 102e80b43;  */

int FUN_102e80a98(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102e80b44; end: 102e80bdf;  */

void FUN_102e80b44(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000b44c0(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 102e80be0; end: 102e80bf3;  */

bool FUN_102e80be0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102e80bf4; end: 102e80c9f;  */

void FUN_102e80bf4(void)

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



/* Entry: 102e80ca0; end: 102e80ca3;  */

void FUN_102e80ca0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f23ef0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5ea20;
  func_0x000107c61520(&UNK_10db5ea20,&UNK_1105dfea0);
  puRam0000000112f23ef0 = puVar1;
  return;
}



/* Entry: 102e80ca4; end: 102e80ce3;  */

void FUN_102e80ca4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f23ef0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5ea20;
  func_0x000107c61520(&UNK_10db5ea20,&UNK_1105dfea0);
  puRam0000000112f23ef0 = puVar1;
  return;
}



/* Entry: 102e80ce4; end: 102e80e57;  */

void FUN_102e80ce4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102e80e58; end: 102e80eaf;  */

uint FUN_102e80e58(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_70 = param_1[4];
  uStack_68 = (undefined1)param_1[5];
  uStack_5f = *(undefined8 *)((long)param_1 + 0x31);
  uStack_67 = (undefined7)*(undefined8 *)((long)param_1 + 0x29);
  uStack_60 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x29) >> 0x38);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_30 = param_2[4];
  uStack_28 = (undefined1)param_2[5];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x31);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_2 + 0x29);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x29) >> 0x38);
  FUN_102e80eb0(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 102e80eb0; end: 102e80feb;  */

undefined8 FUN_102e80eb0(long *param_1,long *param_2)

{
  ulong uVar1;
  
  if ((*param_1 != *param_2) || (param_1[1] != param_2[1] || param_1[2] != param_2[2])) {
    return 0;
  }
  uVar1 = param_1[3];
  if ((uVar1 == param_2[3] && param_1[4] == param_2[4]) ||
     (func_0x000107c605b8(uVar1,param_1[4],param_2[3],param_2[4],0), (uVar1 & 1) != 0)) {
    uVar1 = param_1[5];
    if ((char)param_1[7] == '\x01') {
      if ((char)param_2[7] != '\x01') {
        return 0;
      }
    }
    else if ((char)param_2[7] == '\x01') {
      return 0;
    }
    if (((uVar1 == param_2[5]) && (param_1[6] == param_2[6])) ||
       (func_0x000107c605b8(uVar1,param_1[6],param_2[5],param_2[6],0), (uVar1 & 1) != 0)) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 102e80fec; end: 102e810df;  */

undefined8 * FUN_102e80fec(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  uVar2 = param_2[6];
  uVar1 = *(undefined1 *)(param_2 + 7);
  func_0x000107c61434();
  func_0x000101dcbee8(uVar3,uVar2,uVar1);
  param_1[5] = uVar3;
  param_1[6] = uVar2;
  *(undefined1 *)(param_1 + 7) = uVar1;
  return param_1;
}



/* Entry: 102e810e0; end: 102e81137;  */

undefined8 * FUN_102e810e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *param_2;
  uVar4 = param_2[3];
  uVar5 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar4;
  param_1[2] = uVar5;
  uVar3 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6142c(uVar3);
  uVar1 = *(undefined1 *)(param_2 + 7);
  uVar3 = param_1[5];
  uVar5 = param_1[6];
  uVar4 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 7);
  *(undefined1 *)(param_1 + 7) = uVar1;
  func_0x000101ddafcc(uVar3,uVar5,uVar2);
  return param_1;
}



/* Entry: 102e81138; end: 102e811df;  */

int FUN_102e81138(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x39) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102e811e0; end: 102e81207;  */

void FUN_102e811e0(undefined8 param_1,code *param_2)

{
  (*param_2)();
  return;
}



/* Entry: 102e81208; end: 102e81293;  */

void FUN_102e81208(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 102e81294; end: 102e8157b;  */

undefined8 FUN_102e81294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_68;
  
  uVar5 = param_1;
  FUN_102e8157c();
  func_0x0001000d224c(&uStack_68);
  uVar4 = uStack_68;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
  puVar2 = &UNK_1105dffc8;
  func_0x000107c613fc(&UNK_1105dffc8,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_102e81b20;
  *(undefined8 *)(puVar2 + 0x18) = uVar6;
  func_0x000107c6157c(uVar6);
  uVar6 = uVar4;
  func_0x0001048898b8(uVar4,1,FUN_102e81b28,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  uVar4 = uStack_68;
  puVar2 = &UNK_1105dfff0;
  func_0x000107c613fc(&UNK_1105dfff0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_1105e0018;
  func_0x000107c613fc(&UNK_1105e0018,0x29,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  uVar1 = (undefined1)param_3;
  puVar3[0x28] = uVar1;
  puVar2 = &UNK_1105e0040;
  func_0x000107c613fc(&UNK_1105e0040,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_102e81b40;
  *(undefined **)(puVar2 + 0x18) = puVar3;
  func_0x000101dcbee8(param_1,param_2,param_3);
  uVar5 = uVar4;
  func_0x0001048898b8(uVar4,1,FUN_102e81b50,puVar2,&UNK_1105dff78);
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  uVar4 = uStack_68;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar2 = &UNK_1105e0068;
  func_0x000107c613fc(&UNK_1105e0068,0x29,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  puVar2[0x28] = uVar1;
  func_0x000101dcbee8(param_1,param_2,param_3);
  func_0x000107c6157c(uVar7);
  uVar6 = uVar4;
  func_0x00010488a340(uVar4,1,FUN_102e81b78,puVar2);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  puVar2 = &UNK_1105e0090;
  func_0x000107c613fc(&UNK_1105e0090,0x29,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  puVar2[0x28] = uVar1;
  func_0x000101dcbee8(param_1,param_2,param_3);
  func_0x000107c6157c(uVar7);
  uVar4 = uStack_68;
  func_0x00010488a3ec(uStack_68,1,FUN_102e81b98,puVar2);
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uStack_68);
  func_0x000107c61574(puVar2);
  uVar5 = 0;
  func_0x000100775264(0,1,FUN_102e81aec,0,&UNK_11068ccb8);
  func_0x000107c61574(uVar4);
  return uVar5;
}



/* Entry: 102e8157c; end: 102e81667;  */

undefined8 FUN_102e8157c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_48;
  
  func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
  func_0x0001000d224c(&uStack_48);
  uVar2 = uStack_48;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c(uVar3);
  uVar1 = uVar2;
  func_0x000104889654(uVar2,1,0x102e821d4,uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar3);
  func_0x0001000d224c(&uStack_48);
  uVar2 = uStack_48;
  func_0x000100775264(uStack_48,1,FUN_102e81c1c,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  return uVar2;
}



/* Entry: 102e81668; end: 102e8175b;  */

undefined8 FUN_102e81668(void)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  uVar1 = uStack_40;
  (**(code **)(lStack_38 + 8))(0x403e000000000000,uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return uVar1;
}



/* Entry: 102e8175c; end: 102e819ab;  */

undefined8 FUN_102e8175c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_90;
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x0001000d224c(auStack_88);
  func_0x0001000a8868(auStack_88,uStack_70);
  uVar2 = param_1;
  (**(code **)(lStack_68 + 8))(param_1,param_2,param_3,uStack_70,lStack_68);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x0001000d224c(&uStack_90);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar3 = &UNK_1105e00b8;
  func_0x000107c613fc(&UNK_1105e00b8,0x29,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  uVar1 = (undefined1)param_3;
  puVar3[0x28] = uVar1;
  func_0x000107c6157c(uVar5);
  func_0x000101dcbee8(param_1,param_2,param_3);
  uVar5 = uStack_90;
  func_0x0001048898b8(uStack_90,1,FUN_102e81e2c,puVar3,&UNK_1105dff78);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uStack_90);
  func_0x000107c61574(puVar3);
  func_0x0001000834e4(auStack_88);
  func_0x0001000d224c(auStack_88);
  uVar2 = auStack_88[0];
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar3 = &UNK_1105e00e0;
  func_0x000107c613fc(&UNK_1105e00e0,0x29,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  puVar3[0x28] = uVar1;
  func_0x000101dcbee8(param_1,param_2,param_3);
  func_0x000107c6157c(uVar7);
  uVar4 = uVar2;
  func_0x00010488a3ec(uVar2,1,FUN_102e81f08,puVar3);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(puVar3);
  func_0x0001000d224c(auStack_88);
  puVar3 = &UNK_1105e0108;
  func_0x000107c613fc(&UNK_1105e0108,0x38,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  puVar3[0x28] = uVar1;
  *(undefined8 *)(puVar3 + 0x30) = uVar6;
  func_0x000101dcbee8(param_1,param_2,param_3);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar6);
  uVar2 = auStack_88[0];
  func_0x0001048898b8(auStack_88[0],1,FUN_102e820d0,puVar3,&UNK_1105dff78);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(auStack_88[0]);
  func_0x000107c61574(puVar3);
  return uVar2;
}



/* Entry: 102e819ac; end: 102e81a5b;  */

void FUN_102e819ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  uVar6 = param_1[4];
  func_0x0001000d224c(auStack_88);
  puVar5 = auStack_88;
  func_0x0001000a8868(puVar5,uStack_70);
  (**(code **)(lStack_68 + 0x10))
            (puVar5,param_3,param_4,param_5,uVar1,uVar3,uVar2,uVar4,uVar6,uStack_70,lStack_68);
  func_0x0001000834e4(auStack_88);
  return;
}



/* Entry: 102e81a5c; end: 102e81aeb;  */

void FUN_102e81a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  (**(code **)(lStack_58 + 8))(param_1,param_3,param_4,param_5,uStack_60,lStack_58);
  func_0x0001000834e4(auStack_78);
  return;
}



/* Entry: 102e81aec; end: 102e81aff;  */

void FUN_102e81aec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[2];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 102e81b00; end: 102e81b1f;  */

void FUN_102e81b00(void)

{
  FUN_102e81294();
  return;
}



/* Entry: 102e81b20; end: 102e81b27;  */

undefined8 FUN_102e81b20(void)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  uVar1 = uStack_40;
  (**(code **)(lStack_38 + 8))(0x403e000000000000,uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return uVar1;
}



/* Entry: 102e81b28; end: 102e81b3f;  */

void FUN_102e81b28(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000101d84660(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102e81b40; end: 102e81b4f;  */

undefined8 FUN_102e81b40(void)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    FUN_102e8175c(uVar4,uVar3,uVar1);
    func_0x000107c61574(lVar2);
  }
  return uVar4;
}



/* Entry: 102e81b50; end: 102e81b77;  */

void FUN_102e81b50(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102e81b78; end: 102e81b97;  */

void FUN_102e81b78(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102e819ac(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 102e81b98; end: 102e81ba7;  */

void FUN_102e81b98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined1 *)(unaff_x20 + 0x28);
  func_0x0001000d224c(auStack_78,param_1,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000a8868(auStack_78,uStack_60);
  (**(code **)(lStack_58 + 8))(param_1,uVar1,uVar3,uVar2,uStack_60,lStack_58);
  func_0x0001000834e4(auStack_78);
  return;
}



/* Entry: 102e81ba8; end: 102e81c1b;  */

void FUN_102e81ba8(byte *param_1)

{
  byte bVar1;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uVar2;
  
  func_0x0001000d224c(&uStack_40);
  uVar2 = uStack_40;
  func_0x000107c614f0();
  bVar1 = (byte)uVar2;
  (**(code **)(*(long *)(lStack_38 + 0x18) + 0x18))();
  func_0x000107c615e8(uStack_40);
  *param_1 = bVar1 & 1;
  return;
}



/* Entry: 102e81c1c; end: 102e81c73;  */

void FUN_102e81c1c(char *param_1)

{
  if (*param_1 != '\x01') {
    FUN_102e82194();
    func_0x000107c613f8(&UNK_1105dfea0,param_1,0,0);
    *param_1 = '\x02';
    func_0x000107c61654();
  }
  return;
}



/* Entry: 102e81c74; end: 102e81e2b;  */

undefined *
FUN_102e81c74(ulong *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  
  puVar5 = (undefined *)*param_1;
  if ((ulong)puVar5 >> 0x3e == 0) {
    puVar2 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar2 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar5) {
      puVar2 = puVar5;
    }
    func_0x000107c60480();
  }
  if (puVar2 != (undefined *)0x0) {
    if (((ulong)puVar5 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e81e2c);
        (*pcVar1)();
      }
      lVar6 = *(long *)(puVar5 + 0x20);
      func_0x000107c615f0(lVar6);
    }
    else {
      lVar6 = 0;
      param_2 = puVar5;
      func_0x000100fb0ba0();
    }
    lVar3 = lVar6;
    func_0x000107c5b1b0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar6);
    if (lVar3 != 0) {
      lVar6 = lVar3;
      func_0x000107c5ee30(lVar3);
      func_0x000107c61170(lVar3);
      if ((ulong)param_2 >> 0x3c < 0xf) {
        func_0x0001000b44c0(lVar6,param_2);
        func_0x0001000b44c0(0,0xf000000000000000);
        puVar4 = (undefined1 *)0x112f23fc8;
        func_0x0001000285a8(0x112f23fc8,&UNK_10db5eba0);
        FUN_102e82194();
        puVar5 = &UNK_1105dfea0;
        func_0x000107c613f8(&UNK_1105dfea0,puVar4,0,0);
        *puVar4 = 1;
        puVar2 = puVar5;
        func_0x00010488904c();
        func_0x000107c614ac(puVar5);
        return puVar2;
      }
    }
  }
  func_0x0001000b44c0();
  func_0x0001000d224c(auStack_88);
  func_0x0001000a8868(auStack_88,uStack_70);
  FUN_102e7d77c(puVar5,param_3,param_4,param_5);
  func_0x0001000834e4(auStack_88);
  return puVar5;
}



/* Entry: 102e81e2c; end: 102e81e4b;  */

void FUN_102e81e2c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102e81c74(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 102e81e4c; end: 102e81ed7;  */

void FUN_102e81e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x0001000d224c(auStack_68);
  puVar1 = auStack_68;
  func_0x0001000a8868(puVar1,uStack_50);
  FUN_102e821ec(param_3,param_4,param_5,param_1,uStack_50,uStack_48,puVar1);
  func_0x000107c61574();
  func_0x0001000834e4(auStack_68);
  return;
}



/* Entry: 102e81ed8; end: 102e81f07;  */

void FUN_102e81ed8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000101ddafcc(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined1 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102e81f08; end: 102e81f17;  */

void FUN_102e81f08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined1 *)(unaff_x20 + 0x28);
  func_0x0001000d224c(auStack_68,param_1,*(undefined8 *)(unaff_x20 + 0x10));
  puVar3 = auStack_68;
  func_0x0001000a8868(puVar3,uStack_50);
  FUN_102e821ec(uVar1,uVar4,uVar2,param_1,uStack_50,uStack_48,puVar3);
  func_0x000107c61574();
  func_0x0001000834e4(auStack_68);
  return;
}



/* Entry: 102e81f18; end: 102e820cf;  */

undefined8
FUN_102e81f18(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined8 uStack_58;
  
  puVar1 = auStack_e0;
  puVar3 = auStack_e0;
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  uStack_80 = param_1[4];
  uStack_78 = (undefined1)param_1[5];
  uStack_6f = (undefined7)*(undefined8 *)((long)param_1 + 0x31);
  uStack_68 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x31) >> 0x38);
  uStack_77 = (undefined7)*(undefined8 *)((long)param_1 + 0x29);
  uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x29) >> 0x38);
  func_0x0001000d224c(auStack_e0);
  uVar6 = uStack_c0;
  uVar5 = uStack_c8;
  func_0x0001000a8868(auStack_e0,uStack_c8);
  uVar2 = CONCAT71(uStack_77,uStack_78);
  func_0x000102e821f4(uVar2,CONCAT71(uStack_6f,uStack_70),uStack_68,uVar5,uVar6,puVar1);
  func_0x0001000834e4(auStack_e0);
  func_0x0001000d224c(auStack_e0);
  func_0x0001000a8868(auStack_e0,uStack_c8);
  func_0x000102e821ec(param_3,param_4,param_5,0,uStack_c8,uStack_c0,puVar3);
  func_0x0001000834e4(auStack_e0);
  func_0x0001000285a8(0x112f23fc8,&UNK_10db5eba0);
  func_0x0001000d224c(&uStack_58);
  puVar4 = &UNK_1105e0130;
  func_0x000107c613fc(&UNK_1105e0130,0x49,7);
  uVar5 = *param_1;
  uVar7 = param_1[3];
  uVar6 = param_1[2];
  *(undefined8 *)(puVar4 + 0x18) = param_1[1];
  *(undefined8 *)(puVar4 + 0x10) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar7;
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  uVar5 = param_1[4];
  *(undefined8 *)(puVar4 + 0x38) = param_1[5];
  *(undefined8 *)(puVar4 + 0x30) = uVar5;
  uVar5 = *(undefined8 *)((long)param_1 + 0x29);
  *(undefined8 *)(puVar4 + 0x41) = *(undefined8 *)((long)param_1 + 0x31);
  *(undefined8 *)(puVar4 + 0x39) = uVar5;
  func_0x000102e82158(&uStack_a0,auStack_e0);
  uVar5 = uStack_58;
  func_0x000104889a8c(uStack_58,1,uVar2,param_3,0x102e820f4,puVar4);
  func_0x000107c61170(uStack_58);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(param_3);
  return uVar5;
}



/* Entry: 102e820d0; end: 102e820f3;  */

void FUN_102e820d0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102e81f18(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 102e820f4; end: 102e82193;  */

void FUN_102e820f4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uVar1 = 0x112f23fc8;
  func_0x0001000285a8(0x112f23fc8,&UNK_10db5eba0);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_38 = (undefined1)*(undefined8 *)(unaff_x20 + 0x38);
  uStack_2f = *(undefined8 *)(unaff_x20 + 0x41);
  uStack_37 = (undefined7)*(undefined8 *)(unaff_x20 + 0x39);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x39) >> 0x38);
  func_0x000104888f7c(&uStack_60,uVar1);
  return;
}



/* Entry: 102e82194; end: 102e821eb;  */

void FUN_102e82194(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f23fd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5ea88;
  func_0x000107c61520(&UNK_10db5ea88,&UNK_1105dfea0);
  puRam0000000112f23fd0 = puVar1;
  return;
}



/* Entry: 102e821ec; end: 102e8220f;  */

void FUN_102e821ec(void)

{
  long in_x5;
  
                    /* WARNING: Could not recover jumptable at 0x000102e821f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x5 + 8))();
  return;
}



/* Entry: 102e82210; end: 102e822af;  */

void FUN_102e82210(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102e822b0; end: 102e822b3;  */

void FUN_102e822b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f23fd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5ebd0;
  func_0x000107c61520(&UNK_10db5ebd0,&UNK_1105e01d0);
  puRam0000000112f23fd8 = puVar1;
  return;
}



/* Entry: 102e822b4; end: 102e822f3;  */

void FUN_102e822b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f23fd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5ebd0;
  func_0x000107c61520(&UNK_10db5ebd0,&UNK_1105e01d0);
  puRam0000000112f23fd8 = puVar1;
  return;
}



/* Entry: 102e822f4; end: 102e823ef;  */

void FUN_102e822f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102e823f0; end: 102e8244b;  */

void FUN_102e823f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e8244c; end: 102e8274f;  */

undefined8 FUN_102e8244c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_68;
  
  func_0x0001000285a8(0x112e2aa08,&UNK_10da13438);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c6157c(uVar5);
  uVar1 = 0x20;
  func_0x000104887c7c(0x20,0,0x48,4,0xd00000000000002d,0x800000010f1125e0,&UNK_10db5ed08,uVar5);
  func_0x000107c61574(uVar5);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000d224c(&uStack_68);
  uVar5 = uStack_68;
  uVar2 = uStack_68;
  func_0x000100775264(uStack_68,1,FUN_102e82968,0,PTR___sSiN_11034deb0);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uVar5);
  func_0x0001000d224c(&uStack_68);
  uVar1 = uStack_68;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar3 = &UNK_1105e0260;
  func_0x000107c613fc(&UNK_1105e0260,0x38,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  puVar3[0x28] = (char)param_3;
  *(undefined8 *)(puVar3 + 0x30) = uVar6;
  func_0x000107c61580(uVar7,2);
  func_0x000107c6157c(uVar6);
  func_0x000101dcbee8(param_1,param_2,param_3);
  uVar5 = 0x112f240a8;
  func_0x0001000285a8(0x112f240a8,&UNK_10db5ed10);
  uVar6 = uVar1;
  func_0x0001048898b8(uVar1,1,0x102e82e6c,puVar3,uVar5);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(puVar3);
  func_0x0001000d224c(&uStack_68);
  uVar1 = uStack_68;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = &UNK_1105e0288;
  func_0x000107c613fc(&UNK_1105e0288,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_102e82e90;
  *(undefined8 *)(puVar3 + 0x18) = uVar5;
  func_0x000107c6157c(uVar5);
  uVar5 = 0x112f240b0;
  func_0x0001000285a8(0x112f240b0,&UNK_10db5ed18);
  uVar2 = uVar1;
  func_0x000100775264(uVar1,1,FUN_102e82e98,puVar3,uVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(puVar3);
  func_0x0001000d224c(&uStack_68);
  puVar3 = &UNK_1105e02b0;
  func_0x000107c613fc(&UNK_1105e02b0,0x29,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  puVar3[0x28] = (char)param_3;
  puVar4 = &UNK_1105e02d8;
  func_0x000107c613fc(&UNK_1105e02d8,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_102e82ee8;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  func_0x000101dcbee8(param_1,param_2,param_3);
  uVar5 = uStack_68;
  func_0x0001048898b8(uStack_68,1,FUN_102e82ef8,puVar4,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61574(puVar4);
  return uVar5;
}



/* Entry: 102e82750; end: 102e827eb;  */

void FUN_102e82750(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  
  if (param_4 == 0) {
    FUN_102e8244c();
  }
  else {
    func_0x000107c614b0(param_4);
    uVar1 = param_4;
    FUN_102e82ca8();
    if ((uVar1 & 1) == 0) {
      func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
      func_0x000104888f7c();
    }
    else {
      FUN_102e8244c(param_1,param_2,param_3);
    }
    func_0x000107c614ac(param_4);
  }
  return;
}



/* Entry: 102e827ec; end: 102e82803;  */

void FUN_102e827ec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e82804,0,0);
  return;
}



/* Entry: 102e82804; end: 102e82887;  */

void FUN_102e82804(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102e82888;
                    /* WARNING: Could not recover jumptable at 0x000102e82884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(uVar2,lVar3);
  return;
}



/* Entry: 102e82888; end: 102e828f3;  */

void FUN_102e82888(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x50) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x58) = param_1;
    pcVar1 = FUN_102e828f4;
  }
  else {
    pcVar1 = (code *)0x102e82934;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102e828f4; end: 102e82967;  */

void FUN_102e828f4(void)

{
  long unaff_x22;
  
  **(undefined8 **)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000102e82930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102e82968; end: 102e829c3;  */

void FUN_102e82968(long *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    FUN_102e82f4c();
    func_0x000107c613f8(&UNK_1105e01d0,param_2,0,0);
    func_0x000107c61654();
    return;
  }
  if (-1 < lVar2) {
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e829c4);
  (*pcVar1)();
}



/* Entry: 102e829c4; end: 102e82b2f;  */

undefined8
FUN_102e829c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined8 auStack_78 [3];
  undefined8 uStack_60;
  long lStack_58;
  
  uVar4 = *param_1;
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  (**(code **)(lStack_58 + 8))(param_3,param_4,uStack_60,lStack_58);
  func_0x0001000d224c(&uStack_80);
  uVar1 = 0x112d4f4d0;
  func_0x0001000285a8(0x112d4f4d0,&UNK_10d9153c0);
  uVar2 = uStack_80;
  func_0x000100775264(uStack_80,1,FUN_102e82b30,0,uVar1);
  func_0x000107c61574(param_3);
  func_0x000107c61170(uStack_80);
  func_0x0001000834e4(auStack_78);
  func_0x0001000d224c(auStack_78);
  puVar3 = &UNK_1105e0300;
  func_0x000107c613fc(&UNK_1105e0300,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  uVar1 = 0x112f240a8;
  func_0x0001000285a8(0x112f240a8,&UNK_10db5ed10);
  uVar4 = auStack_78[0];
  func_0x000100775264(auStack_78[0],1,FUN_102e82f30,puVar3,uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(auStack_78[0]);
  func_0x000107c61574(puVar3);
  return uVar4;
}



/* Entry: 102e82b30; end: 102e82b57;  */

void FUN_102e82b30(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = *(char *)((long)param_2 + 0x11) != '\x01';
  if (bVar1) {
    uVar2 = *param_2;
  }
  else {
    uVar2 = 0;
  }
  *param_1 = uVar2;
  *(bool *)(param_1 + 1) = !bVar1;
  return;
}



/* Entry: 102e82b58; end: 102e82bdb;  */

undefined8 FUN_102e82b58(undefined8 param_1)

{
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(&uStack_50);
  func_0x000107c614f0(uStack_50);
  (**(code **)(*(long *)(lStack_48 + 0x18) + 0x20))();
  func_0x000107c615e8(uStack_50);
  return param_1;
}



/* Entry: 102e82bdc; end: 102e82ca7;  */

void FUN_102e82bdc(long param_1,char param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  if (param_2 == '\x01' || param_3 < param_1) {
    func_0x0001000d224c(auStack_78);
    func_0x0001000a8868(auStack_78,uStack_60);
    (**(code **)(lStack_58 + 0x18))(param_6,param_7,param_3,param_4,0,uStack_60,lStack_58);
    func_0x0001000834e4(auStack_78);
  }
  else {
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    func_0x000104888f7c();
  }
  return;
}



/* Entry: 102e82ca8; end: 102e82d7b;  */

uint FUN_102e82ca8(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  iVar1 = (int)&uStack_90;
  uStack_60 = param_1;
  func_0x000107c614b0();
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  uVar3 = 0x112f24098;
  func_0x0001000285a8(0x112f24098,&UNK_10db5ece8);
  func_0x000107c6147c(&uStack_90,&uStack_60,uVar2,uVar3,0xe);
  if (iVar1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    FUN_102e82d7c(&uStack_90);
    uVar4 = 0;
  }
  else {
    FUN_102e82dc4(&uStack_90,auStack_58);
    func_0x0001000a8868(auStack_58,uStack_40);
    (**(code **)(lStack_38 + 0x10))(uStack_40,lStack_38);
    uVar4 = (uint)uStack_40;
    func_0x0001000834e4(auStack_58);
  }
  return uVar4 & 1;
}



/* Entry: 102e82d7c; end: 102e82dc3;  */

undefined8 FUN_102e82d7c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f240a0;
  func_0x0001000285a8(0x112f240a0,&UNK_10db5ecf0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102e82dc4; end: 102e82ddb;  */

undefined8 * FUN_102e82dc4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102e82ddc; end: 102e82e2f;  */

void FUN_102e82ddc(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102e82e30;
  plVar1[7] = param_1;
  plVar1[8] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e82804,0,0);
  return;
}



/* Entry: 102e82e30; end: 102e82e8f;  */

void FUN_102e82e30(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102e82e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102e82e90; end: 102e82e97;  */

undefined8 FUN_102e82e90(undefined8 param_1)

{
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(&uStack_50);
  func_0x000107c614f0(uStack_50);
  (**(code **)(*(long *)(lStack_48 + 0x18) + 0x20))();
  func_0x000107c615e8(uStack_50);
  return param_1;
}



/* Entry: 102e82e98; end: 102e82ee7;  */

void FUN_102e82e98(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *param_2;
  uVar2 = param_2[2];
  uVar1 = *(undefined1 *)(param_2 + 1);
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = uVar3;
  *(undefined1 *)(param_1 + 1) = uVar1;
  param_1[2] = uVar2;
  param_1[3] = param_5;
  return;
}



/* Entry: 102e82ee8; end: 102e82ef7;  */

void FUN_102e82ee8(long param_1,char param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  if (param_2 == '\x01' || param_3 < param_1) {
    func_0x0001000d224c(auStack_78);
    func_0x0001000a8868(auStack_78,uStack_60);
    (**(code **)(lStack_58 + 0x18))(uVar1,uVar2,param_3,param_4,0,uStack_60,lStack_58);
    func_0x0001000834e4(auStack_78);
  }
  else {
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850,param_3,param_4,*(undefined8 *)(unaff_x20 + 0x10)
                        ,uVar1,uVar2,*(undefined1 *)(unaff_x20 + 0x28));
    func_0x000104888f7c();
  }
  return;
}



/* Entry: 102e82ef8; end: 102e82f2f;  */

void FUN_102e82ef8(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,*(undefined1 *)(param_1 + 1),param_1[2],param_1[3]);
  return;
}



/* Entry: 102e82f30; end: 102e82f4b;  */

void FUN_102e82f30(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  param_1[2] = uVar2;
  return;
}



/* Entry: 102e82f4c; end: 102e82f8b;  */

void FUN_102e82f4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f240b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5ec38;
  func_0x000107c61520(&UNK_10db5ec38,&UNK_1105e01d0);
  puRam0000000112f240b8 = puVar1;
  return;
}



/* Entry: 102e82f8c; end: 102e82faf;  */

bool FUN_102e82f8c(void)

{
  byte *unaff_x20;
  
  return (*unaff_x20 & 0xfd) == 4;
}



/* Entry: 102e82fb0; end: 102e82ff7;  */

void FUN_102e82fb0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102e79d6c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102e82ff8; end: 102e841a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e82ff8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7,long param_8,long param_9,long param_10,
                  long param_11,undefined8 param_12,undefined8 param_13)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  long lVar13;
  undefined8 uVar14;
  code *pcVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long unaff_x20;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107c613fc();
  func_0x0001000d224c(auStack_90);
  puVar1 = auStack_90;
  func_0x0001000a8868(puVar1,uStack_78);
  uVar2 = 3;
  func_0x00010043c5c0(3,0xf,0,uStack_78,uStack_70,puVar1);
  func_0x0001000834e4(auStack_90);
  uVar21 = *(undefined8 *)(param_3 + _DAT_1130806b8);
  FUN_102e849d4(param_9 + _DAT_113080760,auStack_90);
  uVar22 = *(undefined8 *)(param_7 + _DAT_112ff4ca0);
  FUN_102e849d4(auStack_90,auStack_b8);
  puVar3 = &UNK_1105e0368;
  func_0x000107c613fc(&UNK_1105e0368,0x58,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar22;
  *(undefined8 *)(puVar3 + 0x20) = uVar21;
  func_0x000102162a70(auStack_b8,puVar3 + 0x28);
  *(long *)(puVar3 + 0x50) = param_9;
  func_0x0001000285a8(0x112f240c0,&UNK_10db5ed80);
  func_0x000107c613fc();
  func_0x000107c61580(uVar21,2);
  func_0x000107c61580(uVar22,2);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174();
  pcVar4 = FUN_102e841a8;
  func_0x0001000bdd8c(FUN_102e841a8,puVar3);
  uVar17 = *(undefined8 *)(param_11 + _DAT_112fd9c48);
  func_0x0001000285a8(0x112f240c8,&UNK_10db5ed88);
  func_0x000107c6157c(uVar17);
  uVar5 = param_4;
  func_0x000107c3ea70();
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x0001000bda74();
  func_0x000107c61170(uVar5);
  uVar20 = *(undefined8 *)(param_5 + _DAT_112fd9d28);
  uVar19 = *(undefined8 *)(param_10 + _DAT_112fd9cb8);
  puVar3 = &UNK_1105e0390;
  func_0x000107c613fc(&UNK_1105e0390,0x40,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar21;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  *(undefined8 *)(puVar3 + 0x28) = uVar20;
  *(undefined8 *)(puVar3 + 0x30) = uVar19;
  *(undefined8 *)(puVar3 + 0x38) = uVar17;
  func_0x0001000285a8(0x112f240d0,&UNK_10db5ed90);
  func_0x000107c613fc();
  func_0x000107c61580(uVar20,2);
  func_0x000107c61580(uVar19,2);
  func_0x000107c6157c(uVar21);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar17);
  func_0x000107c6157c(uVar6);
  pcVar7 = FUN_102e84258;
  func_0x0001000bdd8c(FUN_102e84258,puVar3);
  func_0x0001000285a8(0x112f240d8,&UNK_10db5ed98);
  uVar5 = param_4;
  func_0x000107c5cf04();
  func_0x000107c61180();
  uVar8 = uVar5;
  func_0x0001000bda74();
  func_0x000107c61170(uVar5);
  func_0x0001000285a8(0x112e28fc0,&UNK_10da11cf0);
  uVar5 = param_4;
  func_0x000107c5cf08();
  func_0x000107c61180();
  uVar9 = uVar5;
  func_0x0001000bda74();
  func_0x000107c61170(uVar5);
  puVar3 = &UNK_1105e03b8;
  func_0x000107c613fc(&UNK_1105e03b8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_12;
  *(undefined8 *)(puVar3 + 0x18) = uVar21;
  func_0x0001000285a8(0x112f240e0,&UNK_10db5eda8);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar21);
  func_0x000107c61174();
  pcVar10 = FUN_102e842cc;
  func_0x0001000bdd8c(FUN_102e842cc,puVar3);
  uVar23 = *(undefined8 *)(param_6 + _DAT_112f8f4d8);
  func_0x0001000285a8(0x112d39420,&UNK_10d979900);
  uVar18 = *(undefined8 *)(param_8 + _DAT_113083868);
  func_0x000107c6157c(uVar23);
  func_0x000107c61174();
  uVar5 = uVar18;
  func_0x0001000bda74();
  func_0x000107c61170(uVar18);
  puVar3 = &UNK_1105e03e0;
  func_0x000107c613fc(&UNK_1105e03e0,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar23;
  *(undefined8 *)(puVar3 + 0x18) = uVar21;
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  func_0x0001000285a8(0x112f240e8,&UNK_10db5edb8);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar21);
  func_0x000107c6157c(uVar23);
  func_0x000107c6157c(uVar5);
  pcVar11 = FUN_102e84364;
  func_0x0001000bdd8c(FUN_102e84364,puVar3);
  puVar3 = &UNK_1105e0408;
  func_0x000107c613fc(&UNK_1105e0408,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar21;
  *(undefined8 *)(puVar3 + 0x20) = uVar20;
  *(undefined8 *)(puVar3 + 0x28) = param_13;
  func_0x0001000285a8(0x112f240f0,&UNK_10db5edc0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar21);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar20);
  func_0x000107c61174();
  pcVar12 = FUN_102e84404;
  func_0x0001000bdd8c(FUN_102e84404,puVar3);
  lVar13 = 0;
  func_0x000102e7d544();
  func_0x000107c613fc();
  uVar18 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar13 + 0x10) = uVar18;
  *(undefined8 *)(lVar13 + 0x18) = 0;
  func_0x0001000285a8(0x112f240f8,&UNK_10db5edc8);
  uVar14 = param_4;
  func_0x000107c5cf0c();
  func_0x000107c61180();
  uVar18 = uVar14;
  func_0x0001000bda74();
  func_0x000107c61170(uVar14);
  FUN_102e849d4(auStack_90,auStack_b8);
  puVar3 = &UNK_1105e0430;
  func_0x000107c613fc(&UNK_1105e0430,0x90,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(undefined8 *)(puVar3 + 0x18) = uVar9;
  *(undefined8 *)(puVar3 + 0x20) = uVar21;
  *(undefined8 *)(puVar3 + 0x28) = uVar2;
  *(code **)(puVar3 + 0x30) = pcVar7;
  *(undefined8 *)(puVar3 + 0x38) = uVar19;
  *(code **)(puVar3 + 0x40) = pcVar10;
  *(code **)(puVar3 + 0x48) = pcVar11;
  *(code **)(puVar3 + 0x50) = pcVar4;
  *(long *)(puVar3 + 0x58) = lVar13;
  func_0x000102162a70(auStack_b8,puVar3 + 0x60);
  *(undefined8 *)(puVar3 + 0x88) = uVar18;
  func_0x0001000285a8(0x112f24100,&UNK_10db5edd0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar21);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar19);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(pcVar10);
  func_0x000107c6157c(pcVar11);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(lVar13);
  func_0x000107c6157c(uVar18);
  pcVar15 = FUN_102e84568;
  func_0x0001000bdd8c(FUN_102e84568,puVar3);
  puVar3 = &UNK_1105e0458;
  func_0x000107c613fc(&UNK_1105e0458,0x48,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar21;
  *(undefined8 *)(puVar3 + 0x18) = uVar17;
  *(undefined8 *)(puVar3 + 0x20) = uVar2;
  *(code **)(puVar3 + 0x28) = pcVar15;
  *(code **)(puVar3 + 0x30) = pcVar11;
  *(code **)(puVar3 + 0x38) = pcVar12;
  *(undefined8 *)(puVar3 + 0x40) = uVar22;
  func_0x0001000285a8(0x112f24108,&UNK_10db5edd8);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar22);
  func_0x000107c6157c(uVar21);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar17);
  func_0x000107c6157c(pcVar11);
  func_0x000107c6157c(pcVar15);
  func_0x000107c6157c(pcVar12);
  pcVar16 = FUN_102e84630;
  func_0x0001000bdd8c(FUN_102e84630,puVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar22);
  func_0x000107c61574(uVar21);
  func_0x000107c61170(param_9);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar20);
  func_0x000107c61574(uVar19);
  func_0x000107c61574(uVar17);
  func_0x000107c61170(param_12);
  func_0x000107c61574(uVar23);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(param_13);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(lVar13);
  func_0x000107c61574(uVar18);
  func_0x000107c61574(pcVar15);
  func_0x000107c61574(pcVar12);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x0001000834e4(auStack_90);
  *(code **)(unaff_x20 + 0x10) = pcVar16;
  return;
}


