/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10376f2dc; end: 10376f373;  */

void FUN_10376f2dc(void)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x150));
  if (unaff_x20 == 0) {
    *(undefined **)(lVar4 + 0x158) = PTR___swiftEmptyArrayStorage_11034f1c8;
    pcVar3 = FUN_10376f374;
  }
  else {
    lVar1 = *(long *)(lVar4 + 0x138);
    uVar2 = *(undefined8 *)(lVar4 + 0x140);
    uVar5 = *(undefined8 *)(lVar4 + 0x130);
    func_0x000107c614ac();
    func_0x000107c6142c(PTR___swiftEmptyArrayStorage_11034f1c8);
    (**(code **)(lVar1 + 8))(uVar2,uVar5);
    pcVar3 = FUN_10376f524;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 10376f374; end: 10376f523;  */

void FUN_10376f374(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x22;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  
  lVar7 = *(long *)(unaff_x22 + 0xe8);
  if (lVar7 == 0) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x120);
    puVar12 = *(undefined8 **)(unaff_x22 + 0xf0);
    (**(code **)(*(long *)(unaff_x22 + 0x138) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x130));
    *puVar12 = uVar11;
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar4);
    func_0x000107c615c0(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010376f51c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar10 = *(long *)(unaff_x22 + 0x158);
  lVar3 = 0x112f90608;
  func_0x0001000285a8(0x112f90608,&UNK_10dc08af0);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(long *)(lVar3 + 0x20) = lVar7;
  uVar8 = *(ulong *)(lVar10 + 0x10);
  func_0x000107c61558();
  if (((int)lVar10 == 0) ||
     (uVar6 = *(ulong *)(*(long *)(unaff_x22 + 0x158) + 0x18) >> 1,
     lVar7 = *(long *)(unaff_x22 + 0x158), uVar6 <= uVar8)) {
    func_0x000103762648();
    uVar6 = *(ulong *)(lVar10 + 0x18) >> 1;
    lVar7 = lVar10;
  }
  *(long *)(unaff_x22 + 0x160) = lVar7;
  if (uVar6 != *(ulong *)(lVar7 + 0x10)) {
    func_0x000107c6140c(lVar7 + *(ulong *)(lVar7 + 0x10) * 8 + 0x20,(long *)(lVar3 + 0x20),1,
                        *(undefined8 *)(unaff_x22 + 0x148));
    func_0x000107c61574(lVar3);
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    uVar4 = 0x112f908d0;
    FUN_1037708a8(0x112f908d0,0x112f908c8,&UNK_10dc09288,PTR___sScG8IteratorVyx_GScIsMc_11034fc18);
    plVar5 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x168) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_10376f528;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
              (plVar5,(long *)(unaff_x22 + 0xe8),*(undefined8 *)(unaff_x22 + 0x130),uVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10376f524);
  (*pcVar2)();
}



/* Entry: 10376f524; end: 10376f527;  */

void FUN_10376f524(void)

{
  return;
}



/* Entry: 10376f528; end: 10376f5bf;  */

void FUN_10376f528(void)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  long *unaff_x22;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0x168));
  uVar4 = *(undefined8 *)(lVar5 + 0x160);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar5 + 0x158) = uVar4;
    pcVar3 = FUN_10376f374;
  }
  else {
    lVar1 = *(long *)(lVar5 + 0x138);
    uVar2 = *(undefined8 *)(lVar5 + 0x140);
    uVar6 = *(undefined8 *)(lVar5 + 0x130);
    func_0x000107c614ac();
    func_0x000107c6142c(uVar4);
    (**(code **)(lVar1 + 8))(uVar2,uVar6);
    pcVar3 = FUN_10376f524;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 10376f5c0; end: 10376f5df;  */

void FUN_10376f5c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1f0) = param_7;
  *(undefined8 *)(unaff_x22 + 0x1f8) = param_8;
  *(undefined8 *)(unaff_x22 + 0x1e0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x1e8) = param_5;
  *(undefined8 *)(unaff_x22 + 0x1d8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10376f5e0,0,0);
  return;
}



/* Entry: 10376f5e0; end: 10376f6ff;  */

void FUN_10376f5e0(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  int *piVar8;
  long lVar9;
  long unaff_x22;
  
  lVar9 = *(long *)(unaff_x22 + 0x1e0);
  uVar4 = *(ulong *)(lVar9 + 0x18);
  lVar5 = *(long *)(lVar9 + 0x20);
  func_0x0001000a8868(lVar9,uVar4);
  (**(code **)(lVar5 + 0x18))(uVar4,lVar5);
  if (((uint)uVar4 & 0xff) == 10) {
    *(undefined8 *)(unaff_x22 + 0x78) = 0;
    *(undefined8 *)(unaff_x22 + 0x70) = 0;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    *(undefined8 *)(unaff_x22 + 0x80) = 0;
    *(undefined8 *)(unaff_x22 + 0x58) = 0;
    *(undefined8 *)(unaff_x22 + 0x50) = 0;
    *(undefined8 *)(unaff_x22 + 0x68) = 0;
    *(undefined8 *)(unaff_x22 + 0x60) = 0;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    *(undefined8 *)(unaff_x22 + 0x30) = 0;
    *(undefined8 *)(unaff_x22 + 0x48) = 0;
    *(undefined8 *)(unaff_x22 + 0x40) = 0;
    *(undefined8 *)(unaff_x22 + 0x18) = 0;
    *(undefined8 *)(unaff_x22 + 0x10) = 0;
    *(undefined8 *)(unaff_x22 + 0x28) = 0;
    *(undefined8 *)(unaff_x22 + 0x20) = 0;
  }
  else {
    func_0x0001000d224c(unaff_x22 + 0x1b0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1c8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1d0);
    lVar5 = unaff_x22 + 0x1b0;
    func_0x0001000a8868(lVar5,uVar2);
    *(ulong *)(unaff_x22 + 0x150) = uVar4 & 0xff;
    *(undefined8 *)(unaff_x22 + 0x160) = 0;
    *(undefined8 *)(unaff_x22 + 0x158) = 0;
    *(undefined8 *)(unaff_x22 + 0x170) = 0;
    *(undefined8 *)(unaff_x22 + 0x168) = 0;
    *(undefined1 *)(unaff_x22 + 0x178) = 2;
    FUN_10377d64c(unaff_x22 + 0x10,unaff_x22 + 0x150,uVar2,uVar3,lVar5);
    func_0x0001000834e4(unaff_x22 + 0x1b0);
  }
  lVar5 = *(long *)(lVar9 + 0x18);
  lVar9 = *(long *)(lVar9 + 0x20);
  func_0x0001000a8868(*(undefined8 *)(unaff_x22 + 0x1e0),lVar5);
  plVar6 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x200) = plVar6;
  lVar9 = *(long *)(lVar9 + 8);
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10376f700;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1f8);
  plVar6[6] = lVar5;
  plVar6[7] = lVar9;
  piVar8 = *(int **)(lVar9 + 0x30);
  iVar1 = *piVar8;
  plVar7 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  plVar6[8] = (long)plVar7;
  *plVar7 = (long)plVar6;
  plVar7[1] = (long)FUN_10377bf48;
                    /* WARNING: Could not recover jumptable at 0x00010377bf44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))(uVar2,uVar3,lVar5,lVar9);
  return;
}



/* Entry: 10376f700; end: 10376f74f;  */

void FUN_10376f700(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x208) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x200));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10376f750,0,0);
  return;
}



/* Entry: 10376f750; end: 10376f86b;  */

void FUN_10376f750(void)

{
  long lVar1;
  undefined8 *puVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  **(undefined8 **)(unaff_x22 + 0x1d8) = *(undefined8 *)(unaff_x22 + 0x208);
  func_0x0001037708ec(unaff_x22 + 0x10,unaff_x22 + 0x90,0x112f908e8,&UNK_10dc092a8);
  if (*(long *)(unaff_x22 + 0xa8) == 0) {
    func_0x000103770934(unaff_x22 + 0x10,0x112f908e8,&UNK_10dc092a8);
    func_0x000103770934(unaff_x22 + 0x90,0x112f908e8,&UNK_10dc092a8);
  }
  else {
    puVar2 = (undefined8 *)(unaff_x22 + 0xe8);
    func_0x0001000a8868(puVar2,*(undefined8 *)(unaff_x22 + 0x100));
    uVar3 = puVar2[4];
    uVar5 = puVar2[7];
    uVar4 = puVar2[6];
    uVar9 = puVar2[1];
    uVar8 = *puVar2;
    uVar7 = puVar2[3];
    uVar6 = puVar2[2];
    *(undefined8 *)(unaff_x22 + 0x138) = puVar2[5];
    *(undefined8 *)(unaff_x22 + 0x130) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x148) = uVar5;
    *(undefined8 *)(unaff_x22 + 0x140) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x118) = uVar9;
    *(undefined8 *)(unaff_x22 + 0x110) = uVar8;
    *(undefined8 *)(unaff_x22 + 0x128) = uVar7;
    *(undefined8 *)(unaff_x22 + 0x120) = uVar6;
    FUN_10377cd3c(1);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
    lVar1 = *(long *)(unaff_x22 + 0xb0);
    func_0x0001000a8868(unaff_x22 + 0x90,uVar3);
    *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0xc0);
    *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0xb8);
    *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0xd0);
    *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 200);
    *(undefined8 *)(unaff_x22 + 0x1a1) = *(undefined8 *)(unaff_x22 + 0xd9);
    *(undefined8 *)(unaff_x22 + 0x199) = *(undefined8 *)(unaff_x22 + 0xd1);
    (**(code **)(lVar1 + 8))((undefined8 *)(unaff_x22 + 0x180),uVar3,lVar1);
    func_0x000103770934(unaff_x22 + 0x10,0x112f908e8,&UNK_10dc092a8);
    FUN_103765578(unaff_x22 + 0x90);
  }
                    /* WARNING: Could not recover jumptable at 0x00010376f868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10376f86c; end: 10376f90b;  */

void FUN_10376f86c(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  undefined1 auStack_38 [8];
  
  bVar2 = *(byte *)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x000107c61434();
  lVar3 = lVar3 + 0x40;
  func_0x000107c60268(lVar3,~(-1L << ((ulong)bVar2 & 0x3f)));
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  bVar2 = *(byte *)(param_1 + 0x20);
  func_0x000107c6142c(param_1);
  if (lVar3 != 1L << ((ulong)bVar2 & 0x3f)) {
    FUN_10376fb1c(auStack_38,lVar3,uVar1,0,param_1);
  }
  return;
}



/* Entry: 10376f90c; end: 10376f95f;  */

void FUN_10376f90c(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  long unaff_x20;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 8);
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x103770b44;
  plVar1 = (long *)0x90;
  func_0x000107c615b8();
  plVar2[2] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = (long)FUN_10376e42c;
                    /* WARNING: Could not recover jumptable at 0x00010376e428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_103770484(param_1,uVar3);
  return;
}



/* Entry: 10376f960; end: 10376f967;  */

undefined8 FUN_10376f960(void)

{
  return 10;
}



/* Entry: 10376f968; end: 10376f9cf;  */

void FUN_10376f968(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x20;
  long unaff_x22;
  
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10376f9d0;
  plVar3[10] = lVar1;
  plVar3[0xb] = lVar2;
  plVar3[8] = param_1;
  plVar3[9] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10376e484,0,0);
  return;
}



/* Entry: 10376f9d0; end: 10376fa13;  */

void FUN_10376f9d0(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010376fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 10376fa14; end: 10376fa37;  */

void FUN_10376fa14(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10376fa38();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10376fa38; end: 10376fa77;  */

void FUN_10376fa38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f908a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc09160;
  func_0x000107c61520(&DAT_10dc09160,&UNK_11068fe28);
  puRam0000000112f908a8 = puVar1;
  return;
}



/* Entry: 10376fa78; end: 10376fadb;  */

void FUN_10376fa78(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10376fadc;
                    /* WARNING: Could not recover jumptable at 0x00010376fad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Entry: 10376fadc; end: 10376fb1b;  */

void FUN_10376fadc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010376fb18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10376fb1c; end: 10376fbb7;  */

undefined8
FUN_10376fb1c(undefined8 *param_1,ulong param_2,int param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_2 >> ((ulong)*(byte *)(param_5 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10376fbb0);
    (*pcVar3)();
  }
  if ((*(ulong *)(param_5 + (param_2 >> 3 & 0xffffffffffffff8) + 0x40) >> (param_2 & 0x3f) & 1) != 0
     ) {
    if (*(int *)(param_5 + 0x24) == param_3) {
      puVar4 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_2 * 0x18);
      uVar1 = *puVar4;
      uVar2 = puVar4[1];
      uVar5 = *(undefined8 *)(*(long *)(param_5 + 0x38) + param_2 * 8);
      *param_1 = uVar5;
      FUN_103765724(uVar1,uVar2,*(undefined1 *)(puVar4 + 2));
      func_0x000107c61434(uVar5);
      return uVar1;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10376fbb8);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10376fbb4);
  (*pcVar3)();
}



/* Entry: 10376fbb8; end: 103770483;  */

ulong FUN_10376fbb8(long param_1,ulong param_2)

{
  ulong *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  ulong uVar13;
  ulong uVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 *puVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  long *plVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  long lVar35;
  long lVar36;
  ulong uVar37;
  undefined *puVar38;
  undefined8 uVar39;
  undefined *puVar40;
  code *pcVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  ulong uVar45;
  long lVar46;
  ulong uStack_140;
  undefined8 uStack_80;
  ulong uStack_78;
  char cStack_70;
  
  uVar39 = 0x112f908b0;
  func_0x0001000285a8(0x112f908b0,&UNK_10dc091c8);
  uVar16 = uVar39;
  FUN_103770688();
  func_0x000107c5f9f4(param_2,&UNK_1106c9650,uVar39,uVar16);
  puVar40 = &UNK_10dc091d8;
  func_0x000107c614e0(&UNK_10dc091d8);
  uVar21 = *(ulong *)(param_1 + 0x10);
  puVar38 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar21 != 0) {
    uVar45 = 0;
    do {
      uVar30 = uVar45;
      uVar23 = uVar45;
      if (uVar45 <= uVar21) {
        uVar23 = uVar21;
      }
      while( true ) {
        if (uVar23 == uVar30) {
                    /* WARNING: Does not return */
          pcVar41 = (code *)SoftwareBreakpoint(1,0x10377045c);
          (*pcVar41)();
        }
        uVar45 = uVar30 + 1;
        uVar39 = *(undefined8 *)(param_1 + 0x20 + uVar30 * 8);
        uStack_80 = uVar39;
        func_0x000107c61434(uVar39);
        func_0x000107c614bc(&uStack_78,&uStack_80,puVar40);
        func_0x000107c6142c(uVar39);
        uVar13 = uStack_78;
        if (cStack_70 != '\x01') break;
        uVar30 = uVar45;
        if (uVar21 == uVar45) goto LAB_10376fd2c;
      }
      puVar17 = puVar38;
      func_0x000107c61558();
      puVar18 = puVar38;
      if (((ulong)puVar17 & 1) == 0) {
        puVar18 = (undefined *)0x0;
        func_0x000101755b54(0,*(long *)(puVar38 + 0x10) + 1,1,puVar38);
      }
      uVar23 = *(ulong *)(puVar18 + 0x10);
      puVar38 = puVar18;
      if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar23) {
        puVar38 = (undefined *)(ulong)(1 < *(ulong *)(puVar18 + 0x18));
        func_0x000101755b54(puVar38,uVar23 + 1,1,puVar18);
      }
      *(ulong *)(puVar38 + 0x10) = uVar23 + 1;
      *(ulong *)(puVar38 + uVar23 * 8 + 0x20) = uVar13;
    } while (uVar21 - 1 != uVar30);
  }
LAB_10376fd2c:
  func_0x000107c61574(puVar40);
  lVar22 = *(long *)(puVar38 + 0x10);
  if (lVar22 == 0) {
    lVar46 = 0;
  }
  else {
    lVar46 = 0;
    plVar31 = (long *)(puVar38 + 0x20);
    do {
      bVar15 = SCARRY8(lVar46,*plVar31);
      lVar46 = lVar46 + *plVar31;
      if (bVar15) {
                    /* WARNING: Does not return */
        pcVar41 = (code *)SoftwareBreakpoint(1,0x103770460);
        (*pcVar41)();
      }
      lVar22 = lVar22 + -1;
      plVar31 = plVar31 + 1;
    } while (lVar22 != 0);
  }
  func_0x000107c6142c(puVar38);
  if (uVar21 == 0) {
    return param_2;
  }
  pcVar41 = (code *)0x0;
  puVar40 = (undefined *)0x0;
  uVar39 = 0;
  puVar38 = (undefined *)0x0;
  uVar45 = 0;
  do {
    lVar22 = *(long *)(param_1 + 0x20 + uVar45 * 8);
    uVar45 = uVar45 + 1;
    uVar30 = 1L << ((ulong)*(byte *)(lVar22 + 0x20) & 0x3f);
    uVar23 = 0xffffffffffffffff;
    if ((*(byte *)(lVar22 + 0x20) & 0x3f) < 6) {
      uVar23 = ~(-1L << (uVar30 & 0x3f));
    }
    uVar23 = uVar23 & *(ulong *)(lVar22 + 0x40);
    func_0x000107c61434();
    lVar24 = 0;
joined_r0x00010376fe80:
    while (uVar23 != 0) {
      uVar13 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar25 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar24 << 6;
      plVar31 = (long *)(*(long *)(lVar22 + 0x30) + uVar25 * 0x18);
      lVar5 = *plVar31;
      uVar13 = plVar31[1];
      uVar10 = (undefined1)plVar31[2];
      lVar42 = *(long *)(*(long *)(lVar22 + 0x38) + uVar25 * 8);
      puVar17 = &UNK_11068fe70;
      func_0x000107c613fc(&UNK_11068fe70,0x18,7);
      *(long *)(puVar17 + 0x10) = lVar46;
      FUN_103765724(lVar5,uVar13,uVar10);
      func_0x000107c61434(lVar42);
      func_0x000100d5ceb8(pcVar41,puVar40);
      puVar18 = &UNK_11068fe98;
      func_0x000107c613fc(&UNK_11068fe98,0x20,7);
      *(code **)(puVar18 + 0x10) = FUN_1037706c8;
      *(undefined **)(puVar18 + 0x18) = puVar17;
      func_0x000100d5ceb8(uVar39,puVar38);
      uVar25 = param_2;
      func_0x000107c61558();
      lVar19 = lVar5;
      uVar37 = uVar13;
      uStack_78 = param_2;
      FUN_10378de8c(lVar5,uVar13,uVar10);
      uVar32 = (ulong)~(uint)uVar37 & 1;
      lVar36 = *(long *)(param_2 + 0x10) + uVar32;
      if (SCARRY8(*(long *)(param_2 + 0x10),uVar32)) {
                    /* WARNING: Does not return */
        pcVar41 = (code *)SoftwareBreakpoint(1,0x103770458);
        (*pcVar41)();
      }
      if (*(long *)(param_2 + 0x18) < lVar36) {
        FUN_10378f564(lVar36,uVar25);
        lVar36 = lVar5;
        uVar25 = uVar13;
        FUN_10378de8c(lVar5,uVar13,uVar10);
        lVar19 = lVar36;
        if (((uint)uVar37 & 1) != ((uint)uVar25 & 1)) {
          func_0x000107c60624(&UNK_1106c9650);
                    /* WARNING: Does not return */
          pcVar41 = (code *)SoftwareBreakpoint(1,0x103770484);
          (*pcVar41)();
        }
      }
      else if ((uVar25 & 1) == 0) {
        FUN_10378e8bc();
      }
      param_2 = uStack_78;
      if ((uVar37 & 1) == 0) {
        FUN_10376e338();
        func_0x000107c6157c(param_2);
        lVar43 = lVar46;
        func_0x000107c5f9f4(lVar46,&UNK_11068fd50,&UNK_110692568,lVar36);
        FUN_10379649c(lVar19,lVar5,uVar13,uVar10,lVar43,param_2);
        FUN_103765724(lVar5,uVar13,uVar10);
      }
      else {
        func_0x000107c6157c(uStack_78);
      }
      uVar23 = uVar23 - 1 & uVar23;
      lVar36 = *(long *)(param_2 + 0x38);
      func_0x000107c61574(param_2);
      uVar32 = *(ulong *)(lVar36 + lVar19 * 8);
      func_0x000107c61558();
      uVar37 = *(ulong *)(lVar36 + lVar19 * 8);
      *(undefined8 *)(lVar36 + lVar19 * 8) = 0x8000000000000000;
      uVar33 = 1L << ((ulong)*(byte *)(lVar42 + 0x20) & 0x3f);
      uVar25 = 0xffffffffffffffff;
      if ((*(byte *)(lVar42 + 0x20) & 0x3f) < 6) {
        uVar25 = ~(-1L << (uVar33 & 0x3f));
      }
      uVar25 = uVar25 & *(ulong *)(lVar42 + 0x40);
      uStack_78 = uVar37;
      func_0x000107c61434();
      lVar43 = 0;
joined_r0x000103770130:
      while (uVar25 != 0) {
        uVar14 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar26 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | lVar43 << 6;
        puVar1 = (ulong *)(*(long *)(lVar42 + 0x30) + uVar26 * 0x10);
        uVar14 = *puVar1;
        uVar8 = puVar1[1];
        puVar27 = (undefined8 *)(*(long *)(lVar42 + 0x38) + uVar26 * 0x18);
        uVar39 = *puVar27;
        uVar16 = puVar27[1];
        uVar12 = *(undefined1 *)(puVar27 + 2);
        func_0x000107c61434(uVar8);
        func_0x00010376df2c(uVar39,uVar16,uVar12);
        uVar26 = uVar14;
        uVar20 = uVar8;
        FUN_10378de14();
        uVar34 = (ulong)~(uint)uVar20 & 1;
        lVar2 = *(long *)(uVar37 + 0x10) + uVar34;
        if (SCARRY8(*(long *)(uVar37 + 0x10),uVar34)) {
                    /* WARNING: Does not return */
          pcVar41 = (code *)SoftwareBreakpoint(1,0x103770450);
          (*pcVar41)();
        }
        if (*(long *)(uVar37 + 0x18) < lVar2) {
          FUN_10378f290(lVar2,(uint)uVar32 & 1);
          uVar34 = uStack_78;
          uVar26 = uVar14;
          uVar37 = uVar8;
          FUN_10378de14();
          if (((uint)uVar20 & 1) != ((uint)uVar37 & 1)) {
            func_0x000107c60624(&UNK_11068fd50);
                    /* WARNING: Does not return */
            pcVar41 = (code *)SoftwareBreakpoint(1,0x103770474);
            (*pcVar41)();
          }
        }
        else {
          uVar34 = uVar37;
          if ((uVar32 & 1) == 0) {
            func_0x0001000285a8(0x112f90840,&UNK_10dc0a8f0);
            func_0x000107c6048c();
            if (*(long *)(uVar37 + 0x10) != 0) {
              lVar2 = uVar37 + 0x40;
              uVar32 = (1L << ((ulong)*(byte *)(uVar34 + 0x20) & 0x3f)) + 0x3fU >> 6;
              if ((uVar34 != uVar37) || (lVar2 + uVar32 * 8 <= uVar34 + 0x40)) {
                func_0x000107c610b8(uVar34 + 0x40,lVar2,uVar32 << 3);
              }
              lVar44 = 0;
              *(undefined8 *)(uVar34 + 0x10) = *(undefined8 *)(uVar37 + 0x10);
              uVar32 = 1L << ((ulong)*(byte *)(uVar37 + 0x20) & 0x3f);
              uStack_140 = 0xffffffffffffffff;
              if ((*(byte *)(uVar37 + 0x20) & 0x3f) < 6) {
                uStack_140 = ~(-1L << (uVar32 & 0x3f));
              }
              uStack_140 = uStack_140 & *(ulong *)(uVar37 + 0x40);
              if (uStack_140 == 0) goto LAB_10377034c;
              do {
                uVar28 = (uStack_140 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                         (uStack_140 & 0x5555555555555555) << 1;
                uVar28 = (uVar28 & 0xcccccccccccccccc) >> 2 | (uVar28 & 0x3333333333333333) << 2;
                uVar28 = (uVar28 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar28 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar28 = (uVar28 & 0xff00ff00ff00ff00) >> 8 | (uVar28 & 0xff00ff00ff00ff) << 8;
                uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
                uVar28 = uVar28 >> 0x20 | uVar28 << 0x20;
                uStack_140 = uStack_140 - 1 & uStack_140;
                while( true ) {
                  uVar28 = LZCOUNT(uVar28) | lVar44 << 6;
                  lVar35 = uVar28 * 0x10;
                  puVar27 = (undefined8 *)(*(long *)(uVar37 + 0x30) + lVar35);
                  uVar7 = puVar27[1];
                  lVar29 = uVar28 * 0x18;
                  puVar3 = (undefined8 *)(*(long *)(uVar37 + 0x38) + lVar29);
                  uVar6 = *puVar3;
                  uVar9 = puVar3[1];
                  puVar4 = (undefined8 *)(*(long *)(uVar34 + 0x30) + lVar35);
                  uVar11 = *(undefined1 *)(puVar3 + 2);
                  *puVar4 = *puVar27;
                  puVar4[1] = uVar7;
                  puVar27 = (undefined8 *)(*(long *)(uVar34 + 0x38) + lVar29);
                  *puVar27 = uVar6;
                  puVar27[1] = uVar9;
                  *(undefined1 *)(puVar27 + 2) = uVar11;
                  func_0x000107c61434();
                  func_0x00010376df2c(uVar6,uVar9,uVar11);
                  if (uStack_140 != 0) break;
LAB_10377034c:
                  do {
                    lVar29 = lVar44 + 1;
                    if (SCARRY8(lVar44,1)) {
                    /* WARNING: Does not return */
                      pcVar41 = (code *)SoftwareBreakpoint(1,0x103770464);
                      (*pcVar41)();
                    }
                    if ((long)(uVar32 + 0x3f >> 6) <= lVar29) goto LAB_1037703ec;
                    uStack_140 = *(ulong *)(lVar2 + lVar29 * 8);
                    lVar44 = lVar44 + 1;
                  } while (uStack_140 == 0);
                  uVar28 = (uStack_140 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                           (uStack_140 & 0x5555555555555555) << 1;
                  uVar28 = (uVar28 & 0xcccccccccccccccc) >> 2 | (uVar28 & 0x3333333333333333) << 2;
                  uVar28 = (uVar28 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar28 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar28 = (uVar28 & 0xff00ff00ff00ff00) >> 8 | (uVar28 & 0xff00ff00ff00ff) << 8;
                  uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10
                  ;
                  uVar28 = uVar28 >> 0x20 | uVar28 << 0x20;
                  uStack_140 = uStack_140 - 1 & uStack_140;
                  lVar44 = lVar29;
                }
              } while( true );
            }
LAB_1037703ec:
            func_0x000107c61574(uVar37);
            uStack_78 = uVar34;
          }
        }
        uVar25 = uVar25 - 1 & uVar25;
        if ((uVar20 & 1) == 0) {
          lVar2 = uVar34 + (uVar26 >> 6) * 8;
          *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << (uVar26 & 0x3f);
          puVar1 = (ulong *)(*(long *)(uVar34 + 0x30) + uVar26 * 0x10);
          *puVar1 = uVar14;
          puVar1[1] = uVar8;
          puVar27 = (undefined8 *)(*(long *)(uVar34 + 0x38) + uVar26 * 0x18);
          *puVar27 = uVar39;
          puVar27[1] = uVar16;
          *(undefined1 *)(puVar27 + 2) = uVar12;
          if (SCARRY8(*(long *)(uVar34 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar41 = (code *)SoftwareBreakpoint(1,0x103770454);
            (*pcVar41)();
          }
          *(long *)(uVar34 + 0x10) = *(long *)(uVar34 + 0x10) + 1;
        }
        else {
          func_0x000107c6142c(uVar8);
          puVar27 = (undefined8 *)(*(long *)(uVar34 + 0x38) + uVar26 * 0x18);
          uVar6 = *puVar27;
          uVar7 = puVar27[1];
          *puVar27 = uVar39;
          puVar27[1] = uVar16;
          uVar11 = *(undefined1 *)(puVar27 + 2);
          *(undefined1 *)(puVar27 + 2) = uVar12;
          func_0x00010376df18(uVar6,uVar7,uVar11);
        }
        uVar32 = 1;
        uVar37 = uVar34;
      }
      bVar15 = SCARRY8(lVar43,1);
      lVar43 = lVar43 + 1;
      if (bVar15) {
                    /* WARNING: Does not return */
        pcVar41 = (code *)SoftwareBreakpoint(1,0x10377040c);
        (*pcVar41)();
      }
      if (lVar43 < (long)(uVar33 + 0x3f >> 6)) {
        uVar25 = ((ulong *)(lVar42 + 0x40))[lVar43];
        goto joined_r0x000103770130;
      }
      func_0x000107c61574(lVar42);
      func_0x000107c6142c(lVar42);
      uVar39 = *(undefined8 *)(lVar36 + lVar19 * 8);
      *(ulong *)(lVar36 + lVar19 * 8) = uVar37;
      func_0x000107c6142c(uVar39);
      func_0x00010376573c(lVar5,uVar13,uVar10);
      pcVar41 = FUN_1037706c8;
      uVar39 = 0x103770700;
      puVar40 = puVar17;
      puVar38 = puVar18;
    }
    bVar15 = SCARRY8(lVar24,1);
    lVar24 = lVar24 + 1;
    if (bVar15) {
                    /* WARNING: Does not return */
      pcVar41 = (code *)SoftwareBreakpoint(1,0x10377044c);
      (*pcVar41)();
    }
    if (lVar24 < (long)(uVar30 + 0x3f >> 6)) {
      uVar23 = ((ulong *)(lVar22 + 0x40))[lVar24];
      goto joined_r0x00010376fe80;
    }
    func_0x000107c61574(lVar22);
    if (uVar45 == uVar21) {
      func_0x000100d5ceb8(pcVar41,puVar40);
      func_0x000100d5ceb8(uVar39,puVar38);
      return param_2;
    }
  } while( true );
}



/* Entry: 103770484; end: 10377049b;  */

void FUN_103770484(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10377049c,0,0);
  return;
}



/* Entry: 10377049c; end: 10377055f;  */

void FUN_10377049c(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(*(long *)(unaff_x22 + 0x68) + 0x10);
  *(long *)(unaff_x22 + 0x70) = lVar5;
  if (lVar5 != 0) {
    *(undefined8 *)(unaff_x22 + 0x78) = 0;
    FUN_103768fec(*(long *)(unaff_x22 + 0x68) + 0x20,unaff_x22 + 0x10);
    FUN_10376c3f0(unaff_x22 + 0x10,unaff_x22 + 0x38);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar5 = *(long *)(unaff_x22 + 0x58);
    func_0x0001000a8868(unaff_x22 + 0x38,uVar2);
    piVar4 = *(int **)(lVar5 + 0x10);
    iVar1 = *piVar4;
    plVar3 = (long *)(ulong)(uint)piVar4[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x80) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_103770560;
                    /* WARNING: Could not recover jumptable at 0x000103770544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar4))(*(undefined8 *)(unaff_x22 + 0x60),uVar2,lVar5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010377055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103770560; end: 1037705a7;  */

void FUN_103770560(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037705a8,0,0);
  return;
}



/* Entry: 1037705a8; end: 103770687;  */

void FUN_1037705a8(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x70);
  lVar3 = *(long *)(unaff_x22 + 0x78);
  func_0x0001000834e4(unaff_x22 + 0x38);
  if (lVar3 + 1 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x0001037705ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar5 = *(long *)(unaff_x22 + 0x78);
  *(long *)(unaff_x22 + 0x78) = lVar5 + 1;
  FUN_103768fec(*(long *)(unaff_x22 + 0x68) + lVar5 * 0x28 + 0x48,unaff_x22 + 0x10);
  FUN_10376c3f0(unaff_x22 + 0x10,unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar5 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000a8868(unaff_x22 + 0x38,uVar2);
  piVar6 = *(int **)(lVar5 + 0x10);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_103770560;
                    /* WARNING: Could not recover jumptable at 0x000103770684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(*(undefined8 *)(unaff_x22 + 0x60),uVar2,lVar5);
  return;
}



/* Entry: 103770688; end: 1037706c7;  */

void FUN_103770688(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f908b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc4a9c8;
  func_0x000107c61520(&UNK_10dc4a9c8,&UNK_1106c9650);
  puRam0000000112f908b8 = puVar1;
  return;
}



/* Entry: 1037706c8; end: 103770727;  */

void FUN_1037706c8(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10376e338();
                    /* WARNING: Could not recover jumptable at 0x00010bdb746c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSD15minimumCapacitySDyxq_GSi_tcfC_11034d6b0)
            (uVar1,&UNK_11068fd50,&UNK_110692568,param_1);
  return;
}



/* Entry: 103770728; end: 1037707a7;  */

void FUN_103770728(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  plVar6 = (long *)0x170;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x103770b48;
  plVar6[0x22] = lVar1;
  plVar6[0x23] = lVar3;
  plVar6[0x20] = lVar7;
  plVar6[0x21] = lVar2;
  plVar6[0x1e] = param_1;
  plVar6[0x1f] = param_2;
  lVar7 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar5 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xf;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x24] = uVar4;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x25] = uVar5;
  lVar7 = 0x112f908c8;
  func_0x0001000285a8(0x112f908c8,&UNK_10dc09288);
  plVar6[0x26] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar6[0x27] = lVar7;
  uVar5 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x28] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10376ef64,0,0);
  return;
}



/* Entry: 1037707a8; end: 103770837;  */

void FUN_1037707a8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x58);
  lVar4 = *(long *)(unaff_x20 + 0x60);
  plVar5 = (long *)0x210;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x103770b4c;
  plVar5[0x3e] = lVar2;
  plVar5[0x3f] = lVar4;
  plVar5[0x3c] = unaff_x20 + 0x20;
  plVar5[0x3d] = lVar1;
  plVar5[0x3b] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10376f5e0,0,0,unaff_x20 + 0x20,lVar1,uVar3);
  return;
}



/* Entry: 103770838; end: 1037708a7;  */

void FUN_103770838(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x103770b40;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_10376fadc;
                    /* WARNING: Could not recover jumptable at 0x00010376fad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 1037708a8; end: 103770973;  */

void FUN_1037708a8(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 103770974; end: 1037709bf;  */

void FUN_103770974(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1037709c0; end: 103770a4f;  */

void FUN_1037709c0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x58);
  lVar4 = *(long *)(unaff_x20 + 0x60);
  plVar5 = (long *)0x210;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103770a50;
  plVar5[0x3e] = lVar2;
  plVar5[0x3f] = lVar4;
  plVar5[0x3c] = unaff_x20 + 0x20;
  plVar5[0x3d] = lVar1;
  plVar5[0x3b] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10376f5e0,0,0,unaff_x20 + 0x20,lVar1,uVar3);
  return;
}



/* Entry: 103770a50; end: 103770a8b;  */

void FUN_103770a50(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103770a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103770a8c; end: 103770afb;  */

void FUN_103770a8c(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103770afc;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_10376fadc;
                    /* WARNING: Could not recover jumptable at 0x00010376fad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 103770afc; end: 103770b37;  */

void FUN_103770afc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103770b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103770b38; end: 103770b87;  */

undefined8 * FUN_103770b38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6157c();
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 103770b88; end: 103770e2b;  */

void FUN_103770b88(void)

{
  ulong uVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  long unaff_x22;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  lVar5 = *(long *)(unaff_x22 + 0x10);
  lVar14 = *(long *)(unaff_x22 + 0x18);
  lVar4 = lVar5;
  func_0x000107c614f0();
  (**(code **)(lVar14 + 0x88))();
  func_0x000107c615e8(lVar5);
  if (lVar4 != 0) {
    lVar5 = *(long *)(unaff_x22 + 0x28);
    FUN_10376d860();
    func_0x000107c61170(lVar4);
    puVar9 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    if (lVar5 != 0) {
      lVar14 = *(long *)(*(long *)(unaff_x22 + 0x20) + 0x10);
      if (lVar14 == 0) {
        func_0x000107c6142c(lVar5);
        puVar9 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      }
      else {
        puVar15 = (undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x40);
        do {
          uVar6 = puVar15[-4];
          uVar1 = puVar15[-3];
          uVar16 = puVar15[-2];
          uVar2 = *(undefined1 *)(puVar15 + -1);
          uVar17 = *puVar15;
          func_0x000107c61174(uVar6);
          FUN_103765724(uVar1,uVar16,uVar2);
          func_0x000107c61174();
          func_0x000107c61434(lVar5);
          puVar7 = puVar9;
          func_0x000107c61558();
          uVar8 = uVar1;
          uVar10 = uVar16;
          FUN_10378de8c(uVar1,uVar16,uVar2);
          uVar13 = (ulong)~(uint)uVar10 & 1;
          lVar4 = *(long *)(puVar9 + 0x10) + uVar13;
          if (SCARRY8(*(long *)(puVar9 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103770e28);
            (*pcVar3)();
          }
          if (*(long *)(puVar9 + 0x18) < lVar4) {
            FUN_10378f564(lVar4,puVar7);
            uVar8 = uVar1;
            uVar13 = uVar16;
            FUN_10378de8c(uVar1,uVar16,uVar2);
            if (((uint)uVar10 & 1) != ((uint)uVar13 & 1)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)
                PTR___ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF_11034edd0
              )(&UNK_1106c9650);
              return;
            }
LAB_103770d20:
            if ((uVar10 & 1) != 0) goto LAB_103770c1c;
LAB_103770d24:
            *(ulong *)(puVar9 + (uVar8 >> 6) * 8 + 0x40) =
                 *(ulong *)(puVar9 + (uVar8 >> 6) * 8 + 0x40) | 1L << (uVar8 & 0x3f);
            puVar12 = (ulong *)(*(long *)(puVar9 + 0x30) + uVar8 * 0x18);
            *puVar12 = uVar1;
            puVar12[1] = uVar16;
            *(undefined1 *)(puVar12 + 2) = uVar2;
            *(long *)(*(long *)(puVar9 + 0x38) + uVar8 * 8) = lVar5;
            func_0x000107c61170(uVar6);
            func_0x000107c61170(uVar17);
            if (SCARRY8(*(long *)(puVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x103770e2c);
              (*pcVar3)();
            }
            *(long *)(puVar9 + 0x10) = *(long *)(puVar9 + 0x10) + 1;
          }
          else {
            if (((ulong)puVar7 & 1) != 0) goto LAB_103770d20;
            FUN_10378e8bc();
            if ((uVar10 & 1) == 0) goto LAB_103770d24;
LAB_103770c1c:
            uVar11 = *(undefined8 *)(*(long *)(puVar9 + 0x38) + uVar8 * 8);
            *(long *)(*(long *)(puVar9 + 0x38) + uVar8 * 8) = lVar5;
            func_0x000107c6142c(uVar11);
            func_0x000107c61170(uVar6);
            func_0x00010376573c(uVar1,uVar16,uVar2);
            func_0x000107c61170(uVar17);
          }
          puVar15 = puVar15 + 6;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        func_0x000107c6142c(lVar5);
      }
      goto LAB_103770dd4;
    }
  }
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x00010379653c(PTR___swiftEmptyArrayStorage_11034f1c8);
LAB_103770dd4:
                    /* WARNING: Could not recover jumptable at 0x000103770df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar9);
  return;
}



/* Entry: 103770e2c; end: 103770e33;  */

undefined8 FUN_103770e2c(void)

{
  return 1;
}



/* Entry: 103770e34; end: 103770e97;  */

void FUN_103770e34(long param_1,long param_2)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_103770e98;
  plVar1[5] = param_2;
  plVar1[6] = lVar2;
  plVar1[4] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103770b88,0,0);
  return;
}



/* Entry: 103770e98; end: 103770edb;  */

void FUN_103770e98(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103770ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 103770edc; end: 103770eff;  */

void FUN_103770edc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103770f00();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103770f00; end: 103770f3f;  */

void FUN_103770f00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f90928 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc092e0;
  func_0x000107c61520(&DAT_10dc092e0,&UNK_11068ff80);
  puRam0000000112f90928 = puVar1;
  return;
}



/* Entry: 103770f40; end: 103771067;  */

/* WARNING: Possible PIC construction at 0x0001037710ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103771148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037713a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010377114c) */
/* WARNING: Removing unreachable block (ram,0x0001037710b0) */
/* WARNING: Removing unreachable block (ram,0x0001037713ac) */
/* WARNING: Removing unreachable block (ram,0x0001037713b4) */
/* WARNING: Removing unreachable block (ram,0x0001037712c8) */
/* WARNING: Removing unreachable block (ram,0x000103771294) */

undefined1  [16] FUN_103770f40(byte param_1,undefined8 param_2,undefined **param_3)

{
  int iVar1;
  byte in_ZR;
  undefined1 in_CY;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  undefined **unaff_x19;
  undefined **unaff_x20;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  ppuVar6 = (undefined **)0xe600000000000000;
  ppuVar2 = (undefined **)0x65746f6d6572;
  pcVar9 = (char *)(ulong)param_1;
  uVar8 = 0xdc09320;
  uVar10 = (uint)(byte)pcVar9[0x10dc09320] * 4 + 0x3770f70;
  ppuVar4 = ppuVar2;
  ppuVar3 = ppuVar6;
  switch(param_1) {
  case 0:
    goto code_r0x000103770fa8;
  default:
    ppuVar6 = (undefined **)0xe300000000000000;
  case 0x56:
  case 0x96:
  case 0xb0:
  case 0xbe:
  case 0xd1:
  case 0xf7:
  case 0xfd:
  case 0xff:
    ppuVar2 = (undefined **)0x6f63;
code_r0x000103770f78:
    ppuVar2 = (undefined **)(ulong)((uint)ppuVar2 & 0xffff | 0x660000);
code_r0x000103770f7c:
    auVar11._8_8_ = ppuVar6;
    auVar11._0_8_ = ppuVar2;
    return auVar11;
  case 2:
    ppuVar6 = (undefined **)0xe500000000000000;
    ppuVar2 = (undefined **)0x6f6c;
  case 0x28:
    auVar14._0_8_ = (ulong)ppuVar2 & 0xffff00000000ffff | 0x6c61630000;
    auVar14._8_8_ = ppuVar6;
    return auVar14;
  case 3:
    auVar15._8_8_ = 0xea00000000006c61;
    auVar15._0_8_ = 0x75747865746e6f63;
    return auVar15;
  case 4:
  case 0x70:
    ppuVar6 = (undefined **)0xe500000000000000;
  case 0x3c:
  case 0x44:
  case 0x4c:
  case 0x5f:
  case 0x9f:
  case 199:
    auVar12._8_8_ = ppuVar6;
    auVar12._0_8_ = 0x70756f7267;
    return auVar12;
  case 5:
    ppuVar6 = (undefined **)0xeb00000000726574;
    ppuVar2 = (undefined **)0x6e73;
  case 0x79:
    ppuVar2 = (undefined **)((ulong)ppuVar2 & 0xffff00000000ffff | 0x686370610000);
code_r0x000103771010:
    auVar17._0_8_ = (ulong)ppuVar2 | 0x7461000000000000;
    auVar17._8_8_ = ppuVar6;
    return auVar17;
  case 6:
    auVar18._8_8_ = 0xe90000000000006e;
    auVar18._0_8_ = 0x7275745f7473616c;
    return auVar18;
  case 7:
    pcVar9 = "tcherDiPluginEntryPoint.BitmojiProduct";
  case 0xf6:
    ppuVar6 = (undefined **)((ulong)(pcVar9 + 0xb90) | 0x8000000000000000);
    ppuVar2 = (undefined **)0x10;
code_r0x000103770ff0:
    auVar16._0_8_ = (ulong)ppuVar2 | 0xd000000000000000;
    auVar16._8_8_ = ppuVar6;
    return auVar16;
  case 8:
    auVar19._8_8_ = 0xe900000000000074;
    auVar19._0_8_ = 0x6e65697069636572;
    return auVar19;
  case 9:
    ppuVar6 = (undefined **)0xe700000000000000;
    ppuVar2 = (undefined **)0x746e6f63;
  case 0xfc:
    ppuVar2 = (undefined **)((ulong)ppuVar2 & 0xffff0000ffffffff | 0x74636100000000);
code_r0x000103770fa8:
    auVar13._8_8_ = ppuVar6;
    auVar13._0_8_ = ppuVar2;
    return auVar13;
  case 0x11:
  case 0x16:
  case 0x19:
  case 0x23:
  case 0x78:
    goto code_r0x000103771104;
  case 0x12:
    goto code_r0x0001037710f4;
  case 0x13:
  case 0x1a:
    goto code_r0x000103771140;
  case 0x14:
  case 0x20:
    goto code_r0x000103771144;
  case 0x15:
  case 0x1b:
  case 0x21:
    goto code_r0x000103771138;
  case 0x17:
    goto code_r0x00010377113c;
  case 0x18:
    goto code_r0x0001037710a4;
  case 0x1d:
  case 0x22:
    goto code_r0x0001037710fc;
  case 0x1e:
    auVar21._8_8_ = 0xe600000000000000;
    auVar21._0_8_ = 0x65746f6d6572;
    return auVar21;
  case 0x1f:
  case 0xe8:
    goto code_r0x00010377112c;
  case 0x29:
  case 0x3d:
  case 0x45:
  case 0x4d:
    goto code_r0x000103771124;
  case 0x2a:
  case 0x3e:
  case 0x46:
  case 0x4e:
  case 0x62:
  case 0x76:
  case 0x7e:
  case 0x86:
  case 0x8e:
  case 0xa2:
  case 0xb6:
    goto LAB_103771210;
  case 0x2b:
  case 0x3f:
  case 0x47:
  case 0x4f:
  case 99:
  case 0x77:
  case 0x7f:
  case 0x87:
  case 0x8f:
  case 0xa3:
  case 0xb7:
    goto code_r0x000103770f78;
  case 0x2c:
code_r0x0001037712b0:
    bRam000065746f6d6573 = (char)uVar8;
    auVar27._8_8_ = 0xe600000000000000;
    auVar27._0_8_ = 0x65746f6d6572;
    return auVar27;
  case 0x2d:
  case 0x50:
  case 0x65:
  case 0x88:
  case 0xa5:
    goto code_r0x000103770ff0;
  case 0x2e:
  case 0x66:
  case 0xa6:
    goto code_r0x00010377124c;
  case 0x36:
  case 0x38:
  case 0x6e:
  case 0xae:
    goto code_r0x000103770f7c;
  case 0x40:
    func_0x000107c6068c();
  case 0x10:
  case 0xec:
    FUN_103770f40();
    ppuVar4 = (undefined **)&stack0x00000008;
    ppuVar3 = unaff_x19;
    param_3 = ppuVar6;
    unaff_x19 = ppuVar6;
code_r0x0001037710a4:
    ppuVar2 = unaff_x19;
    ppuVar6 = ppuVar3;
    func_0x000107c5fb58(ppuVar4,ppuVar6,param_3);
    break;
  case 0x41:
    goto code_r0x000103771364;
  case 0x42:
    goto code_r0x0001037712dc;
  case 0x48:
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    goto code_r0x000103771364;
  case 0x49:
  case 0x89:
  case 0x91:
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
  case 0x51:
    *(undefined8 *)((long)register0x00000008 + 0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x18) = unaff_x30;
    uVar5 = CONCAT35(uRam000065746f6d6577,
                     CONCAT23(uRam000065746f6d6575,
                              CONCAT12(uRam000065746f6d6574,
                                       CONCAT11(bRam000065746f6d6573,bRam000065746f6d6572))));
    uVar7 = uRam000065746f6d657a;
    FUN_103771360(uVar5,uRam000065746f6d657a);
    *pcVar9 = (char)uVar5;
    auVar23._8_8_ = uVar7;
    auVar23._0_8_ = uVar5;
    return auVar23;
  case 0x4a:
  case 0x52:
  case 0x82:
  case 0x8a:
  case 0x92:
  case 0xba:
    pcVar9 = (char *)(ulong)((uint)param_3 + 9);
code_r0x00010377124c:
    in_CY = 0xfffeff < (uint)pcVar9;
    uVar8 = 4;
    uVar10 = 2;
code_r0x00010377125c:
    if ((bool)in_CY) {
      uVar10 = uVar8;
    }
    if ((uint)((ulong)pcVar9 >> 8) < 0xff) {
      uVar10 = 1;
    }
    uVar8 = 0;
    if (0xf6 < (uint)param_3) {
      uVar8 = uVar10;
    }
    pcVar9 = (char *)(ulong)uVar8;
code_r0x00010377127c:
    uVar8 = (uint)pcVar9;
    if (uVar8 < 2) {
      if (uVar8 != 0) {
        bRam000065746f6d6573 = 0;
code_r0x000103771290:
        goto code_r0x0001037712ec;
      }
    }
    else {
      if (uVar8 != 2) {
        bRam000065746f6d6573 = 0;
        uRam000065746f6d6574 = 0;
        uRam000065746f6d6575 = 0;
        goto code_r0x0001037712ec;
      }
code_r0x0001037712c0:
      bRam000065746f6d6573 = 0;
      uRam000065746f6d6574 = 0;
    }
code_r0x0001037712c4:
code_r0x0001037712ec:
    auVar30._8_8_ = 0xe600000000000000;
    auVar30._0_8_ = 0x65746f6d6572;
    return auVar30;
  case 0x4b:
  case 0x53:
  case 0x83:
  case 0x8b:
  case 0x93:
  case 0xbb:
    goto code_r0x000103771344;
  case 0x5c:
    goto code_r0x000103771200;
  case 0x5d:
  case 0x9d:
  case 0xd0:
  case 0xe6:
    goto code_r0x0001037710d4;
  case 0x5e:
  case 0x9e:
  case 0xc6:
  case 0xee:
code_r0x0001037711d0:
code_r0x0001037711dc:
    pcVar9 = (char *)0x1;
code_r0x0001037711e8:
    if ((int)pcVar9 == 4) {
LAB_103771210:
      uVar8 = CONCAT22(uRam000065746f6d6575,CONCAT11(uRam000065746f6d6574,bRam000065746f6d6573));
joined_r0x000103771230:
      if (uVar8 == 0) {
LAB_103771234:
        iVar1 = bRam000065746f6d6572 - 10;
        if (bRam000065746f6d6572 < 10) {
          iVar1 = -1;
        }
        auVar26._4_4_ = 0;
        auVar26._0_4_ = iVar1 + 1;
        auVar26._8_8_ = 0xe600000000000000;
        return auVar26;
      }
    }
    else {
      if ((int)pcVar9 != 2) {
        uVar8 = (uint)bRam000065746f6d6573;
        goto joined_r0x000103771230;
      }
      uVar8 = (uint)CONCAT11(uRam000065746f6d6574,bRam000065746f6d6573);
      if (CONCAT11(uRam000065746f6d6574,bRam000065746f6d6573) == 0) {
code_r0x000103771200:
        goto LAB_103771234;
      }
    }
    ppuVar2 = (undefined **)(ulong)(((uint)bRam000065746f6d6572 | uVar8 << 8) - 9);
code_r0x000103771228:
    auVar25._8_8_ = 0xe600000000000000;
    auVar25._0_8_ = ppuVar2;
    return auVar25;
  case 0x60:
    goto code_r0x000103771354;
  case 0x61:
  case 0x75:
  case 0x7d:
  case 0x85:
  case 0x8d:
  case 0xa1:
  case 0xb5:
    goto code_r0x000103771120;
  case 100:
    goto code_r0x0001037711d0;
  case 0x74:
  case 0x7c:
  case 0x84:
  case 0x8c:
    auVar33._0_8_ = *(long *)(pcVar9 + 0x930);
    if (auVar33._0_8_ != 0) {
      auVar33._8_8_ = 0xe600000000000000;
      return auVar33;
    }
  case 0xe0:
    ppuVar2 = (undefined **)&UNK_10dc093c0;
    ppuVar6 = &PTR_DAT_110690000;
code_r0x000103771344:
    ppuVar6 = ppuVar6 + 9;
    func_0x000107c61520(ppuVar2,ppuVar6);
    pcVar9 = (char *)0x112f90930;
code_r0x000103771354:
    *(undefined ***)pcVar9 = ppuVar2;
    auVar34._8_8_ = ppuVar6;
    auVar34._0_8_ = ppuVar2;
    return auVar34;
  case 0x7a:
    goto code_r0x0001037712d4;
  case 0x80:
    goto code_r0x000103771290;
  case 0x81:
  case 0xb8:
  case 0xb9:
    goto code_r0x000103771160;
  case 0x90:
  case 0xa4:
    goto code_r0x0001037710d4;
  case 0x9c:
    auVar32._8_8_ = 0xe600000000000000;
    auVar32._0_8_ = 0x65746f6d6572;
    return auVar32;
  case 0xa0:
    goto code_r0x0001037712f4;
  case 0xb4:
    goto code_r0x0001037712c4;
  case 0xc4:
    goto code_r0x000103771060;
  case 0xc5:
    goto code_r0x0001037710d8;
  case 0xd4:
    *unaff_x19 = (undefined *)0x65746f6d6572;
    unaff_x19[1] = (undefined *)0xe600000000000000;
    auVar24._8_8_ = 0xe600000000000000;
    auVar24._0_8_ = 0x65746f6d6572;
    return auVar24;
  case 0xd6:
    goto code_r0x0001037711dc;
  case 0xd8:
  case 0x1c:
    unaff_x19 = (undefined **)(ulong)*(byte *)unaff_x20;
    pcVar9 = &stack0x00000008;
code_r0x000103771120:
    func_0x000107c6068c(pcVar9);
code_r0x000103771124:
    ppuVar4 = unaff_x19;
    FUN_103770f40(ppuVar4);
code_r0x00010377112c:
    ppuVar2 = (undefined **)&stack0x00000008;
    param_3 = ppuVar4;
    unaff_x19 = ppuVar6;
code_r0x000103771138:
    ppuVar6 = param_3;
code_r0x00010377113c:
    param_3 = unaff_x19;
    unaff_x19 = param_3;
code_r0x000103771140:
    func_0x000107c5fb58(ppuVar2,ppuVar6,param_3);
code_r0x000103771144:
    ppuVar2 = unaff_x19;
    break;
  case 0xda:
    goto code_r0x00010377127c;
  case 0xdc:
    bRam000065746f6d6572 = param_1;
    auVar28._8_8_ = 0xe600000000000000;
    auVar28._0_8_ = 0x65746f6d6572;
    return auVar28;
  case 0xde:
    goto code_r0x0001037711e8;
  case 0xe2:
    func_0x000107c606a8();
code_r0x000103771160:
    auVar22._8_8_ = ppuVar6;
    auVar22._0_8_ = ppuVar2;
    return auVar22;
  case 0xe4:
    return ZEXT816(0x65746f6d65ba);
  case 0xea:
    goto code_r0x0001037712c0;
  case 0xf0:
    in_ZR = param_1 == bRame600000000000000;
code_r0x000103771060:
    auVar20._1_7_ = 0;
    auVar20[0] = in_ZR;
    auVar20._8_8_ = 0xe600000000000000;
    return auVar20;
  case 0xf2:
    goto code_r0x000103771228;
  case 0xf4:
    goto code_r0x0001037712ec;
  case 0xf8:
    goto code_r0x00010377125c;
  case 0xfa:
    uVar8 = 0xdc09321;
    bRam000065746f6d6572 = (byte)uVar10;
    if (param_1 < 2) {
      if (param_1 == 0) goto code_r0x0001037712ec;
      goto code_r0x0001037712b0;
    }
code_r0x0001037712d4:
    if (param_1 != 2) {
      bRam000065746f6d6573 = (byte)uVar8;
      uRam000065746f6d6574 = (undefined1)(uVar8 >> 8);
      uRam000065746f6d6575 = (undefined2)(uVar8 >> 0x10);
code_r0x0001037712f4:
      auVar31._8_8_ = 0xe600000000000000;
      auVar31._0_8_ = 0x65746f6d6572;
      return auVar31;
    }
code_r0x0001037712dc:
    bRam000065746f6d6573 = (byte)uVar8;
    uRam000065746f6d6574 = (undefined1)(uVar8 >> 8);
    auVar29._8_8_ = 0xe600000000000000;
    auVar29._0_8_ = 0x65746f6d6572;
    return auVar29;
  case 0xfe:
    goto code_r0x000103771010;
  }
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(ppuVar2);
  auVar35._8_8_ = ppuVar6;
  auVar35._0_8_ = ppuVar2;
  return auVar35;
code_r0x0001037710d4:
  unaff_x19 = ppuVar2;
code_r0x0001037710d8:
  ppuVar4 = unaff_x19;
  ppuVar3 = (undefined **)(ulong)*(byte *)unaff_x20;
  FUN_103770f40(ppuVar3);
  param_3 = ppuVar6;
  unaff_x20 = ppuVar6;
code_r0x0001037710f4:
  ppuVar2 = unaff_x20;
  ppuVar6 = ppuVar3;
  func_0x000107c5fb58(ppuVar4,ppuVar6,param_3);
code_r0x0001037710fc:
code_r0x000103771104:
  goto code_r0x000107c6142c;
code_r0x000103771364:
  *(undefined8 *)((long)register0x00000008 + 0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + 0x18) = unaff_x30;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  ppuVar6 = ppuVar2;
  func_0x000107c604c4();
  ppuVar2 = (undefined **)0xe600000000000000;
  goto code_r0x000107c6142c;
}



/* Entry: 103771068; end: 1037711b7;  */

void FUN_103771068(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = (ulong)*unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  FUN_103770f40(uVar1);
  func_0x000107c5fb58(auStack_68,uVar1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1037711b8; end: 10377131f;  */

int FUN_1037711b8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf6 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 9) {
      iVar2 = 4;
    }
    if (param_2 + 9 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103771234;
        goto LAB_103771218;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103771218:
      return ((uint)*param_1 | uVar1 << 8) - 9;
    }
  }
LAB_103771234:
  iVar2 = *param_1 - 10;
  if (*param_1 < 10) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103771320; end: 10377135f;  */

void FUN_103771320(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f90930 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc093c0;
  func_0x000107c61520(&UNK_10dc093c0,&UNK_110690048);
  puRam0000000112f90930 = puVar1;
  return;
}



/* Entry: 103771360; end: 1037713c3;  */

ulong FUN_103771360(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (9 < uVar1) {
    uVar1 = 10;
  }
  return uVar1;
}



/* Entry: 1037713c4; end: 1037719db;  */

/* WARNING: Possible PIC construction at 0x00010378e700: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010378c9d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010378b914: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103785630: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010378c614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010378c630: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010378c748: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010378c764: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010378a66c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010378dd68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037aeaec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037aeb90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037aec88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037aed48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037aeeb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037aeed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037aef54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037aed54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010378e564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037844f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103784544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103784594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037845d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037847f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103784904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037849e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037845c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010377aa8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010377a9cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010377aa90) */
/* WARNING: Removing unreachable block (ram,0x00010377abd8) */
/* WARNING: Removing unreachable block (ram,0x00010377aae0) */
/* WARNING: Removing unreachable block (ram,0x00010377ab24) */
/* WARNING: Removing unreachable block (ram,0x00010377ab94) */
/* WARNING: Removing unreachable block (ram,0x00010377aaf0) */
/* WARNING: Removing unreachable block (ram,0x00010377abe0) */
/* WARNING: Removing unreachable block (ram,0x00010377ab1c) */
/* WARNING: Removing unreachable block (ram,0x00010377ab28) */
/* WARNING: Removing unreachable block (ram,0x00010377a9a0) */
/* WARNING: Removing unreachable block (ram,0x00010377ab3c) */
/* WARNING: Removing unreachable block (ram,0x00010377abdc) */
/* WARNING: Removing unreachable block (ram,0x00010377ab8c) */
/* WARNING: Removing unreachable block (ram,0x0001037845c4) */
/* WARNING: Removing unreachable block (ram,0x000103784908) */
/* WARNING: Removing unreachable block (ram,0x0001037847fc) */
/* WARNING: Removing unreachable block (ram,0x0001037848fc) */
/* WARNING: Removing unreachable block (ram,0x000103784818) */
/* WARNING: Removing unreachable block (ram,0x0001037845dc) */
/* WARNING: Removing unreachable block (ram,0x000103784688) */
/* WARNING: Removing unreachable block (ram,0x000103784698) */
/* WARNING: Removing unreachable block (ram,0x0001037846d4) */
/* WARNING: Removing unreachable block (ram,0x000103784620) */
/* WARNING: Removing unreachable block (ram,0x0001037849ec) */
/* WARNING: Removing unreachable block (ram,0x000103784598) */
/* WARNING: Removing unreachable block (ram,0x0001037845cc) */
/* WARNING: Removing unreachable block (ram,0x000103784548) */
/* WARNING: Removing unreachable block (ram,0x000103784574) */
/* WARNING: Removing unreachable block (ram,0x00010378459c) */
/* WARNING: Removing unreachable block (ram,0x0001037848b4) */
/* WARNING: Removing unreachable block (ram,0x0001037845b8) */
/* WARNING: Removing unreachable block (ram,0x00010378457c) */
/* WARNING: Removing unreachable block (ram,0x000103784740) */
/* WARNING: Removing unreachable block (ram,0x0001037848e8) */
/* WARNING: Removing unreachable block (ram,0x000103784978) */
/* WARNING: Removing unreachable block (ram,0x000103784980) */
/* WARNING: Removing unreachable block (ram,0x0001037849bc) */
/* WARNING: Removing unreachable block (ram,0x0001037848f8) */
/* WARNING: Removing unreachable block (ram,0x0001037849d8) */
/* WARNING: Removing unreachable block (ram,0x0001037847b4) */
/* WARNING: Removing unreachable block (ram,0x00010378458c) */
/* WARNING: Removing unreachable block (ram,0x0001037844fc) */
/* WARNING: Removing unreachable block (ram,0x00010378e568) */
/* WARNING: Removing unreachable block (ram,0x0001037aef58) */
/* WARNING: Removing unreachable block (ram,0x0001037aeedc) */
/* WARNING: Removing unreachable block (ram,0x0001037aef24) */
/* WARNING: Removing unreachable block (ram,0x0001037aef2c) */
/* WARNING: Removing unreachable block (ram,0x0001037aeeb4) */
/* WARNING: Removing unreachable block (ram,0x0001037aed4c) */
/* WARNING: Removing unreachable block (ram,0x0001037aec8c) */
/* WARNING: Removing unreachable block (ram,0x0001037aecac) */
/* WARNING: Removing unreachable block (ram,0x0001037aeb94) */
/* WARNING: Removing unreachable block (ram,0x0001037aeba0) */
/* WARNING: Removing unreachable block (ram,0x0001037aecb4) */
/* WARNING: Removing unreachable block (ram,0x0001037aebf8) */
/* WARNING: Removing unreachable block (ram,0x0001037aecf4) */
/* WARNING: Removing unreachable block (ram,0x0001037aef88) */
/* WARNING: Removing unreachable block (ram,0x0001037aec40) */
/* WARNING: Removing unreachable block (ram,0x0001037aec4c) */
/* WARNING: Removing unreachable block (ram,0x0001037aed00) */
/* WARNING: Removing unreachable block (ram,0x0001037aed08) */
/* WARNING: Removing unreachable block (ram,0x0001037aed10) */
/* WARNING: Removing unreachable block (ram,0x0001037aed58) */
/* WARNING: Removing unreachable block (ram,0x0001037aed60) */
/* WARNING: Removing unreachable block (ram,0x0001037aeda0) */
/* WARNING: Removing unreachable block (ram,0x0001037aed78) */
/* WARNING: Removing unreachable block (ram,0x0001037aedb8) */
/* WARNING: Removing unreachable block (ram,0x0001037aed98) */
/* WARNING: Removing unreachable block (ram,0x0001037aedc0) */
/* WARNING: Removing unreachable block (ram,0x0001037aedf4) */
/* WARNING: Removing unreachable block (ram,0x0001037aedd8) */
/* WARNING: Removing unreachable block (ram,0x0001037aedf8) */
/* WARNING: Removing unreachable block (ram,0x0001037aee6c) */
/* WARNING: Removing unreachable block (ram,0x0001037aee48) */
/* WARNING: Removing unreachable block (ram,0x0001037aee8c) */
/* WARNING: Removing unreachable block (ram,0x0001037aed18) */
/* WARNING: Removing unreachable block (ram,0x0001037aed50) */
/* WARNING: Removing unreachable block (ram,0x0001037aed34) */
/* WARNING: Removing unreachable block (ram,0x0001037aec74) */
/* WARNING: Removing unreachable block (ram,0x0001037aeaf0) */
/* WARNING: Removing unreachable block (ram,0x0001037aeaf4) */
/* WARNING: Removing unreachable block (ram,0x0001037aef8c) */
/* WARNING: Removing unreachable block (ram,0x0001037aefc4) */
/* WARNING: Removing unreachable block (ram,0x0001037aefa4) */
/* WARNING: Removing unreachable block (ram,0x0001037aeb40) */
/* WARNING: Removing unreachable block (ram,0x00010378dd6c) */
/* WARNING: Removing unreachable block (ram,0x00010378dc70) */
/* WARNING: Removing unreachable block (ram,0x00010378a670) */
/* WARNING: Removing unreachable block (ram,0x00010378a688) */
/* WARNING: Removing unreachable block (ram,0x00010378c768) */
/* WARNING: Removing unreachable block (ram,0x00010378c74c) */
/* WARNING: Removing unreachable block (ram,0x00010378c634) */
/* WARNING: Removing unreachable block (ram,0x00010378c80c) */
/* WARNING: Removing unreachable block (ram,0x00010378c66c) */
/* WARNING: Removing unreachable block (ram,0x00010378c618) */
/* WARNING: Removing unreachable block (ram,0x000103785634) */
/* WARNING: Removing unreachable block (ram,0x00010378b918) */
/* WARNING: Removing unreachable block (ram,0x00010378c9d4) */
/* WARNING: Removing unreachable block (ram,0x00010378ca18) */
/* WARNING: Removing unreachable block (ram,0x00010378c9fc) */
/* WARNING: Removing unreachable block (ram,0x00010378ca20) */
/* WARNING: Removing unreachable block (ram,0x00010378e704) */
/* WARNING: Removing unreachable block (ram,0x00010377a9d0) */
/* WARNING: Removing unreachable block (ram,0x00010377a9fc) */
/* WARNING: Removing unreachable block (ram,0x000103771e88) */
/* WARNING: Removing unreachable block (ram,0x00010378e654) */
/* WARNING: Removing unreachable block (ram,0x00010378e5a0) */
/* WARNING: Removing unreachable block (ram,0x00010378e5a4) */
/* WARNING: Removing unreachable block (ram,0x00010378e658) */
/* WARNING: Removing unreachable block (ram,0x00010378e5b4) */
/* WARNING: Removing unreachable block (ram,0x00010378dda0) */
/* WARNING: Removing unreachable block (ram,0x000103793b7c) */
/* WARNING: Removing unreachable block (ram,0x000103793d80) */
/* WARNING: Removing unreachable block (ram,0x000103793b8c) */
/* WARNING: Removing unreachable block (ram,0x000103793de8) */
/* WARNING: Removing unreachable block (ram,0x000103778f18) */
/* WARNING: Removing unreachable block (ram,0x000103787c8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16]
FUN_1037713c4(double *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5,
             undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined1 in_CY;
  bool bVar6;
  double *pdVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double *pdVar13;
  char *pcVar14;
  code *UNRECOVERED_JUMPTABLE;
  double *pdVar15;
  double *pdVar16;
  double *pdVar17;
  char *pcVar18;
  double dVar19;
  long extraout_x8;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long extraout_x12;
  ulong in_x14;
  undefined4 in_w15;
  undefined *in_x16;
  double *unaff_x19;
  undefined8 *puVar25;
  uint uVar26;
  double *unaff_x20;
  long lVar27;
  double dVar28;
  double *unaff_x21;
  undefined *puVar29;
  double *unaff_x22;
  double dVar30;
  undefined **ppuVar31;
  double *unaff_x23;
  double *unaff_x24;
  double *unaff_x25;
  double *unaff_x26;
  undefined8 uVar32;
  double *unaff_x27;
  undefined8 uVar33;
  undefined8 uVar34;
  double *unaff_x28;
  undefined *puVar35;
  long unaff_x29;
  undefined8 uVar36;
  code *in_register_00005008;
  undefined8 uVar37;
  undefined8 uVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double unaff_d8;
  double unaff_d9;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  double *in_stack_00000000;
  double *in_stack_00000008;
  double *in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined1 uStack000000000000001f;
  uint uStack0000000000000020;
  uint uStack0000000000000024;
  ulong in_stack_00000028;
  undefined *in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  double *in_stack_00000048;
  ulong in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000068;
  double *in_stack_00000070;
  undefined8 in_stack_00000078;
  double *in_stack_00000080;
  undefined1 in_stack_00000088;
  
  pdVar7 = (double *)&uRam6e65697069636572;
  pcVar14 = (char *)0xef656372756f5374;
  pcVar18 = (char *)(param_2 & 0xff);
  puVar35 = &UNK_10dc093f0;
  pdVar13 = pdVar7;
  pdVar15 = (double *)pcVar14;
  pdVar16 = unaff_x20;
  pdVar17 = unaff_x28;
  switch(pcVar18) {
  case (char *)0x0:
    goto code_r0x000103771968;
  default:
    pdVar7 = (double *)0x15;
  case (char *)0x40:
  case (char *)0x47:
  case (char *)0x67:
  case (char *)0x83:
  case (char *)0xb1:
  case (char *)0xbf:
    pdVar7 = (double *)((ulong)pdVar7 & 0xffffffffffff | 0xd000000000000000);
    goto code_r0x00010377140c;
  case (char *)0x2:
    auVar57._8_8_ = 0x800000010f163f90;
    auVar57._0_8_ = 0xd000000000000018;
    return auVar57;
  case (char *)0x3:
    pcVar18 = "lastInteractionAge";
    goto code_r0x000103771718;
  case (char *)0x4:
    auVar52._8_8_ = 0xed00006570795474;
    auVar52._0_8_ = &uRam6e65697069636572;
    return auVar52;
  case (char *)0x5:
    pcVar18 = "addFriendTimestamp";
code_r0x000103771718:
    auVar64._8_8_ = (ulong)(pcVar18 + -0x20) | 0x8000000000000000;
    auVar64._0_8_ = 0xd000000000000012;
    return auVar64;
  case (char *)0x6:
    pcVar14 = (char *)0x65674164;
  case (char *)0x59:
  case (char *)0xc9:
    pcVar14 = (char *)((ulong)pcVar14 & 0xffffffffffff | 0xec00000000000000);
    pdVar7 = (double *)0x6461;
code_r0x000103771770:
    auVar66._0_8_ = (ulong)pdVar7 & 0xffff | 0x6e65697246640000;
    auVar66._8_8_ = pcVar14;
    return auVar66;
  case (char *)0x7:
    pcVar18 = "addedByFriendTimestamp";
    goto code_r0x000103771684;
  case (char *)0x8:
    pcVar18 = "addedByFriendAge";
    goto code_r0x0001037718f0;
  case (char *)0x9:
    auVar54._8_8_ = 0xea00000000007961;
    auVar54._0_8_ = 0x6468747269427369;
    return auVar54;
  case (char *)0xa:
    auVar68._8_8_ = 0xec000000646e6569;
    auVar68._0_8_ = 0x7246747365427369;
    return auVar68;
  case (char *)0xb:
    auVar51._8_8_ = 0xee006b6e6152646e;
    auVar51._0_8_ = 0x6569724674736562;
    return auVar51;
  case (char *)0xc:
    pcVar14 = (char *)0x646e65697246;
  case (char *)0xf4:
    pcVar14 = (char *)((ulong)pcVar14 & 0xffffffffffff | 0xee00000000000000);
    pdVar7 = (double *)0x7369;
code_r0x0001037715d4:
    auVar53._0_8_ = (ulong)pdVar7 & 0xffff | 0x6c617574754d0000;
    auVar53._8_8_ = pcVar14;
    return auVar53;
  case (char *)0xd:
    pcVar18 = "isOutgoingFriend";
    goto code_r0x0001037718f0;
  case (char *)0xe:
    auVar49._8_8_ = 0xeb00000000676e69;
    auVar49._0_8_ = 0x776f6c6c6f467369;
    return auVar49;
  case (char *)0xf:
    auVar58._8_8_ = 0xe600000000000000;
    auVar58._0_8_ = 0x666c65537369;
    return auVar58;
  case (char *)0x10:
    auVar48._8_8_ = 0xee00746168637061;
    auVar48._0_8_ = 0x6e536d6165547369;
    return auVar48;
  case (char *)0x11:
    auVar61._8_8_ = 0xe800000000000000;
    auVar61._0_8_ = 0x6e696c72654d7369;
    return auVar61;
  case (char *)0x12:
    auVar67._8_8_ = 0xed0000746f427461;
    auVar67._0_8_ = 0x686370616e537369;
    return auVar67;
  case (char *)0x13:
    auVar74._8_8_ = 0xee00656c62616269;
    auVar74._0_8_ = 0x7263736275537369;
    return auVar74;
  case (char *)0x14:
    auVar63._8_8_ = 0xea00000000007261;
    auVar63._0_8_ = 0x745370616e537369;
    return auVar63;
  case (char *)0x15:
    auVar65._8_8_ = 0xe90000000000006f;
    auVar65._0_8_ = 0x725070616e537369;
    return auVar65;
  case (char *)0x16:
    pcVar14 = (char *)0xeb00000000726569;
    pdVar7 = (double *)0x7263;
  case (char *)0xc6:
    auVar72._0_8_ = (ulong)pdVar7 & 0xffff | 0x54726f7461650000;
    auVar72._8_8_ = pcVar14;
    return auVar72;
  case (char *)0x17:
    auVar75._8_8_ = 0xee00657079546b6e;
    auVar75._0_8_ = 0x694c646e65697266;
    return auVar75;
  case (char *)0x18:
    auVar56._8_8_ = 0xec00000064657373;
    auVar56._0_8_ = 0x6572707075537369;
    return auVar56;
  case (char *)0x19:
    uVar12 = 0x7a695370756f7267;
    goto code_r0x000103771610;
  case (char *)0x1a:
    auVar79._8_8_ = 0xec00000064657475;
    auVar79._0_8_ = 0x4d70756f72477369;
    return auVar79;
  case (char *)0x1b:
    uVar12 = 0x674164656e696f6a;
code_r0x000103771610:
    auVar55._8_8_ = 0xe900000000000065;
    auVar55._0_8_ = uVar12;
    return auVar55;
  case (char *)0x1c:
    auVar76._8_8_ = 0xeb00000000746e75;
    auVar76._0_8_ = 0x6f436b6165727473;
    return auVar76;
  case (char *)0x1d:
    pcVar18 = "isStreakExpiring";
code_r0x0001037718f0:
    auVar77._8_8_ = (ulong)(pcVar18 + -0x20) | 0x8000000000000000;
    auVar77._0_8_ = 0xd000000000000010;
    return auVar77;
  case (char *)0x1e:
    auVar69._8_8_ = 0x800000010f163ea0;
    auVar69._0_8_ = 0xd000000000000023;
    return auVar69;
  case (char *)0x1f:
    auVar60._8_8_ = 0x800000010f163e80;
    auVar60._0_8_ = 0xd00000000000001d;
    return auVar60;
  case (char *)0x20:
    auVar70._8_8_ = 0x800000010f163e60;
    auVar70._0_8_ = 0xd00000000000001f;
    return auVar70;
  case (char *)0x21:
    pcVar18 = "lastTurnSnapSendByUserAge";
    goto code_r0x000103771544;
  case (char *)0x22:
    auVar47._8_8_ = 0x800000010f163e20;
    auVar47._0_8_ = 0xd00000000000001c;
    return auVar47;
  case (char *)0x23:
    pcVar18 = "lastTurnInteractionAge";
code_r0x000103771684:
    auVar59._8_8_ = (ulong)(pcVar18 + -0x20) | 0x8000000000000000;
    auVar59._0_8_ = 0xd000000000000016;
    return auVar59;
  case (char *)0x24:
    auVar46._8_8_ = 0x800000010f163dd0;
    auVar46._0_8_ = 0xd000000000000024;
    return auVar46;
  case (char *)0x25:
    pcVar18 = "tcherDiPluginEntryPoint.BitmojiProduct";
  case (char *)0xca:
    pcVar18 = (char *)((long)pcVar18 + 0xdd0);
code_r0x000103771440:
    auVar44._8_8_ = (ulong)((long)pcVar18 + -0x20) | 0x8000000000000000;
    auVar44._0_8_ = 0xd00000000000001e;
    return auVar44;
  case (char *)0x26:
    auVar78._8_8_ = 0x800000010f163d80;
    auVar78._0_8_ = 0xd00000000000002f;
    return auVar78;
  case (char *)0x27:
    auVar73._8_8_ = 0x800000010f163d50;
    auVar73._0_8_ = 0xd000000000000029;
    return auVar73;
  case (char *)0x28:
    pcVar18 = "lastChatSendByOtherParticipantAge";
    goto code_r0x000103771990;
  case (char *)0x29:
    pdVar7 = (double *)0xd000000000000015;
    pcVar18 = "tcherDiPluginEntryPoint.BitmojiProduct";
  case (char *)0x3b:
  case (char *)0x4f:
  case (char *)0x6f:
  case (char *)0xab:
  case (char *)0xb9:
  case (char *)0xdf:
  case (char *)0xf9:
    pcVar18 = (char *)((long)pcVar18 + 0xd20);
    goto code_r0x0001037716e4;
  case (char *)0x2a:
    pcVar18 = "lastChatViewByOtherParticipantAge";
    goto code_r0x000103771990;
  case (char *)0x2b:
    pdVar7 = (double *)0xd000000000000015;
    pcVar18 = "lastChatViewByUserAge";
    goto code_r0x0001037716e4;
  case (char *)0x2c:
    pcVar18 = "lastContentShareByUserAge";
code_r0x000103771544:
    auVar50._8_8_ = (ulong)(pcVar18 + -0x20) | 0x8000000000000000;
    auVar50._0_8_ = 0xd000000000000019;
    return auVar50;
  case (char *)0x2d:
    auVar71._8_8_ = 0x800000010f163c90;
    auVar71._0_8_ = 0xd00000000000001b;
    return auVar71;
  case (char *)0x2e:
    pcVar18 = "lastSnapSendByOtherParticipantAge";
    goto code_r0x000103771990;
  case (char *)0x2f:
    pdVar7 = (double *)0xd000000000000015;
    pcVar18 = "tcherDiPluginEntryPoint.BitmojiProduct";
  case (char *)0xa6:
    pcVar18 = (char *)((long)pcVar18 + 0xc60);
    goto code_r0x0001037716e4;
  case (char *)0x30:
    pcVar18 = "lastSnapViewByOtherParticipantAge";
code_r0x000103771990:
    auVar82._8_8_ = (ulong)(pcVar18 + -0x20) | 0x8000000000000000;
    auVar82._0_8_ = 0xd000000000000021;
    return auVar82;
  case (char *)0x31:
    pdVar7 = (double *)0xd000000000000015;
    pcVar18 = "tcherDiPluginEntryPoint.BitmojiProduct";
  case (char *)0xa0:
    pcVar18 = (char *)((long)pcVar18 + 0xc10);
    goto code_r0x0001037716e4;
  case (char *)0x32:
    pcVar18 = "lastViewInteractionContentType";
  case (char *)0xb0:
    goto code_r0x000103771440;
  case (char *)0x33:
    auVar83._8_8_ = 0xeb0000000064656e;
    auVar83._0_8_ = 0x6f69746e654d7369;
    return auVar83;
  case (char *)0x34:
    auVar81._8_8_ = 0xea00000000006465;
    auVar81._0_8_ = 0x7355736e654c7369;
    return auVar81;
  case (char *)0x35:
    auVar45._8_8_ = 0xea00000000006563;
    auVar45._0_8_ = 0x72756f5370616e73;
    return auVar45;
  case (char *)0x36:
    pcVar14 = (char *)0xec00000065726f63;
    pdVar7 = (double *)0x53746361746e6f63;
    goto code_r0x000103771968;
  case (char *)0x38:
    func_0x000107c61574(*(undefined8 *)(unaff_x29 + -0xd0));
    unaff_x20 = pdVar7;
  case (char *)0xb6:
    func_0x000107c61574();
    if (((ulong)unaff_x20 & 1) != 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10378c81c);
      (*UNRECOVERED_JUMPTABLE)();
    }
    goto code_r0x00010378c7a8;
  case (char *)0x39:
  case (char *)0x43:
  case (char *)0x4d:
  case (char *)0x57:
  case (char *)0x5b:
  case (char *)0x5f:
  case (char *)0x63:
  case (char *)0x6d:
  case (char *)0x77:
  case (char *)0x7b:
  case (char *)0x7f:
  case (char *)0xa9:
  case (char *)0xb7:
  case (char *)0xbb:
  case (char *)0xdd:
  case (char *)0xf7:
    pdRam6e65697069636582 = (double *)((ulong)pdRam6e65697069636582 & 0xffffffffffffff00);
    uRam6e65697069636572 = 0x756f5373;
    auVar84._8_8_ = 0xef656372756f5374;
    auVar84._0_8_ = &uRam6e65697069636572;
    return auVar84;
  case (char *)0x3a:
    goto code_r0x000103779354;
  case (char *)0x3f:
  case (char *)0x53:
  case (char *)0x73:
  case (char *)0x74:
    goto code_r0x000103771410;
  case (char *)0x42:
    func_0x000107c61574(*(undefined8 *)(unaff_x29 + -0xc0));
    pdVar17 = (double *)pcVar14;
    break;
  case (char *)0x44:
    goto code_r0x000103792944;
  case (char *)0x45:
  case (char *)0x5d:
  case (char *)0x61:
  case (char *)0x65:
  case (char *)0x7d:
  case (char *)0x81:
  case (char *)0xa5:
  case (char *)0xc1:
  case (char *)0xc5:
    func_0x000107c605b8();
    pdVar17 = (double *)pcVar14;
    break;
  case (char *)0x4a:
    uVar24 = (ulong)*(uint *)((long)unaff_x19 + _DAT_112fe2248);
    pdVar17 = unaff_x22;
    func_0x000103aa5c60();
    if (((uVar24 & 1) == 0) ||
       ((*(code *)unaff_x21[5])(), pdVar17 = unaff_x21, ((ulong)unaff_x22 & 1) == 0)) {
      unaff_x21 = pdVar17;
      func_0x000107c4327c();
      func_0x000107c615e8();
    }
    else {
      func_0x000107c615e8();
      unaff_x20 = (double *)0x2;
    }
    auVar91._8_8_ = unaff_x21;
    auVar91._0_8_ = unaff_x20;
    return auVar91;
  case (char *)0x4b:
  case (char *)0x6b:
  case (char *)0x87:
  case (char *)0xb5:
  case (char *)0xc3:
    auVar86._8_8_ = 0xef656372756f5374;
    auVar86._0_8_ = unaff_x19;
    return auVar86;
  case (char *)0x4c:
code_r0x00010378c728:
    if (unaff_x21 == (double *)0x0) {
      (**(code **)(*(long *)(unaff_x29 + -200) + 8))();
      pdVar16 = *(double **)(unaff_x29 + -0x78);
      pdVar17 = unaff_x25;
      break;
    }
    goto LAB_10378c5fc;
  case (char *)0x4e:
    goto code_r0x0001037792b4;
  case (char *)0x54:
  case (char *)0xbe:
    goto code_r0x000103771414;
  case (char *)0x56:
  case (char *)0x5a:
  case (char *)0x5e:
  case (char *)0x62:
    goto code_r0x00010378c6f8;
  case (char *)0x58:
    while (unaff_x26 == (double *)0x0) {
      bVar6 = SCARRY8((long)unaff_x27,1);
      unaff_x27 = (double *)((long)unaff_x27 + 1);
      if (bVar6) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10377abd8);
        (*UNRECOVERED_JUMPTABLE)();
      }
      if ((long)unaff_x20 <= (long)unaff_x27) {
        func_0x000107c61574(_uStack0000000000000020);
        func_0x000107c61574(in_stack_00000028);
        auVar89._8_8_ = pcVar14;
        auVar89._0_8_ = in_stack_00000028;
        return auVar89;
      }
      unaff_x26 = (double *)unaff_x19[(long)unaff_x27];
    }
    uVar24 = ((ulong)unaff_x26 & 0xaaaaaaaaaaaaaaaa) >> 1 |
             ((ulong)unaff_x26 & 0x5555555555555555) << 1;
    uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
    uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
    uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
    uVar24 = LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) | (long)unaff_x27 << 6;
    puVar25 = (undefined8 *)(*(long *)(in_stack_00000028 + 0x30) + uVar24 * 0x10);
    in_stack_00000068 = *puVar25;
    pdVar16 = (double *)puVar25[1];
    puVar25 = (undefined8 *)(*(long *)(in_stack_00000028 + 0x38) + uVar24 * 0x18);
    uVar12 = *puVar25;
    pdVar17 = (double *)puVar25[1];
    uVar4 = *(undefined1 *)(puVar25 + 2);
    in_stack_00000008 = unaff_x20;
    in_stack_00000010 = unaff_x19;
    in_stack_00000070 = pdVar16;
    in_stack_00000078 = uVar12;
    in_stack_00000080 = pdVar17;
    in_stack_00000088 = uVar4;
    func_0x000107c61434(pdVar16);
    func_0x00010376df2c(uVar12,pdVar17,uVar4);
    (*(code *)_uStack0000000000000018)(&stack0x00000040,&stack0x00000068);
    break;
  case (char *)0x5c:
    pcRam6e6569706963658a = FUN_103793114;
    pdRam6e65697069636582 = unaff_x19;
    pdRam6e65697069636592 = unaff_x21;
    func_0x000107c61174();
    func_0x000107c6157c();
    in_stack_00000000 = (double *)(PTR___sytN_11034f1b0 + 8);
    unaff_x22 = (double *)0x2;
    pcVar14 = (char *)0x0;
    func_0x0001001ca524(2,0,100,4,0,0,&UNK_10dc0aa80,&uRam6e65697069636572);
    func_0x000107c61170(unaff_x19);
    unaff_x20 = pdVar7;
    goto code_r0x000103792944;
  case (char *)0x60:
    func_0x000107c5c734();
    func_0x000107c61180();
    unaff_x22[0x2a] = (double)pdVar7;
    if (pdVar7 == (double *)0x0) {
      func_0x0001037931c4();
      func_0x000107c613f8(&UNK_110691e60,pdVar7,0,0);
      pcVar14 = (char *)pdVar7;
      func_0x000107c61654();
      unaff_x21 = (double *)unaff_x22[0x25];
      pdVar7 = (double *)unaff_x22[0x26];
      func_0x000107c615c0(unaff_x22[0x29]);
      goto code_r0x000103792b14;
    }
    unaff_x22[7] = unaff_x22[0x26];
    unaff_x22[2] = (double)unaff_x22;
    unaff_x22[3] = (double)FUN_103792b38;
    pdVar17 = unaff_x22 + 2;
    func_0x000107c61448(pdVar17,1);
    dVar30 = 2.27926487013738e-314;
    pcVar14 = &UNK_10dc0ac40;
    func_0x0001000285a8(0x112f91e80,&UNK_10dc0ac40);
    unaff_x22[0x12] = (double)PTR___NSConcreteStackBlock_11034bd00;
    unaff_x22[0x19] = dVar30;
    unaff_x22[0x13] = 5.47077039858234e-315;
    unaff_x22[0x14] = (double)FUN_1037934f4;
    unaff_x22[0x15] = (double)&UNK_110691d90;
    unaff_x22[0x16] = (double)pdVar17;
    func_0x000107c50794(pdVar7);
    pdVar17 = unaff_x22 + 2;
    goto LAB_107c61444;
  case (char *)0x64:
code_r0x000103792b14:
    func_0x000107c615c0(pdVar7);
    func_0x000107c615c0(unaff_x21);
    UNRECOVERED_JUMPTABLE = (code *)unaff_x22[1];
                    /* WARNING: Could not recover jumptable at 0x000103792b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar110._8_8_ = pcVar14;
    auVar110._0_8_ = UNRECOVERED_JUMPTABLE;
    return auVar110;
  case (char *)0x6a:
    unaff_x28 = *(double **)((long)pcVar18 + 0x98);
    dVar30 = unaff_x20[2];
    unaff_x21 = (double *)unaff_x20[3];
    dVar19 = *(double *)((long)unaff_x21 + (long)unaff_x28);
    pdRam6e65697069636582 = param_1;
    pcRam6e6569706963658a = in_register_00005008;
    unaff_x23[7] = (double)&UNK_110690448;
    unaff_x23[8] = (double)&PTR_DAT_112f912a8;
    unaff_x23[4] = dVar19;
    lVar8 = _DAT_113083f78;
    uVar11 = *(undefined8 *)((long)dVar30 + _DAT_113083f78);
    func_0x000107c6157c();
    func_0x000107c5d984();
    func_0x000107c61180();
    uVar12 = uVar11;
    func_0x000107c5faec();
    func_0x000107c61170(uVar11);
    dVar19 = unaff_x22[7];
    func_0x000107c43a44();
    func_0x000107c61180();
    dVar28 = unaff_x22[0xc];
    func_0x000107c5b4e4();
    func_0x000107c61180();
    if (dVar28 == 0.0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x103788190);
      (*UNRECOVERED_JUMPTABLE)();
    }
    unaff_x23[0xc] = (double)&UNK_1106904d0;
    unaff_x23[0xd] = (double)&PTR_DAT_112f91360;
    puVar35 = &UNK_110691478;
    pdVar15 = (double *)0x30;
    func_0x000107c613fc(&UNK_110691478,0x30,7);
    unaff_x23[9] = (double)puVar35;
    *(undefined8 *)(puVar35 + 0x10) = uVar12;
    *(char **)(puVar35 + 0x18) = pcVar14;
    *(double *)(puVar35 + 0x20) = dVar19;
    *(double *)(puVar35 + 0x28) = dVar28;
    dVar28 = unaff_x22[6];
    dVar19 = dVar28;
    func_0x000107c4a9f0();
    func_0x000107c61180();
    unaff_x23[0x11] = (double)&UNK_110690418;
    unaff_x23[0x12] = (double)&PTR_DAT_112f911e0;
    unaff_x23[0xe] = dVar19;
    func_0x000107c4a9f0();
    func_0x000107c61180();
    unaff_x23[0x16] = (double)&UNK_1106903e8;
    unaff_x23[0x17] = (double)&PTR_DAT_112f91120;
    unaff_x23[0x13] = dVar28;
    pdVar7 = *(double **)((long)dVar30 + lVar8);
  case (char *)0x86:
    func_0x000107c5d984();
    func_0x000107c61180();
    pdVar17 = pdVar7;
    func_0x000107c5faec();
    func_0x000107c61170(pdVar7);
    dVar30 = unaff_x22[9];
    func_0x000107c4456c();
    func_0x000107c61180();
    if (dVar30 == 0.0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x103788194);
      (*UNRECOVERED_JUMPTABLE)();
    }
    unaff_x23[0x1b] = (double)&UNK_1106903b8;
    unaff_x23[0x1c] = (double)&PTR_DAT_112f91060;
    unaff_x23[0x18] = (double)pdVar17;
    unaff_x23[0x19] = (double)pdVar15;
    unaff_x23[0x1a] = dVar30;
    unaff_x23[0x20] = (double)&UNK_110690258;
    unaff_x23[0x21] = (double)&PTR_DAT_112f91010;
    unaff_x20 = in_stack_00000000;
    func_0x000107c61174();
    unaff_x19 = (double *)0x7;
    pdVar7 = (double *)0x1;
    func_0x0001037629c8(1,7,1);
    unaff_x23 = pdVar7;
code_r0x000103787f24:
    in_stack_00000030 = &UNK_1106902a8;
    _uStack0000000000000038 = &PTR_DAT_112f91038;
    pdVar7[2] = (double)unaff_x19;
    _uStack0000000000000018 = unaff_x20;
    func_0x000100d5d8b4(&stack0x00000018,unaff_x23 + 0x22);
    uVar12 = *(undefined8 *)((long)unaff_x21 + (long)unaff_x28);
    func_0x000107c6157c(uVar12);
    func_0x0001000d224c(&stack0x00000018);
    func_0x000107c61574(uVar12);
    pdVar17 = _uStack0000000000000018;
    pdVar7 = _uStack0000000000000018;
    func_0x000107c5adf8();
    func_0x000107c615e8(pdVar17);
    unaff_x20 = (double *)unaff_x22[10];
    unaff_x24 = (double *)0x112f918a8;
    func_0x0001000285a8(0x112f918a8,&UNK_10dc0a080);
    if ((int)pdVar7 == 0) {
      func_0x000107c613fc();
      unaff_x24[3] = 2.96439387504748e-323;
      unaff_x24[2] = 1.48219693752374e-323;
      unaff_x25 = *(double **)((long)unaff_x21 + (long)unaff_x28);
      unaff_x24[7] = (double)&UNK_11068ff80;
      pdVar7 = unaff_x24;
      func_0x000103788658();
      unaff_x24[8] = (double)pdVar7;
      unaff_x24[4] = (double)unaff_x25;
      pcVar18 = &DAT_112fe20e0;
code_r0x0001037880b4:
      uVar32 = *(undefined8 *)((long)unaff_x22[5] + (long)*(double *)pcVar18);
      uVar12 = *(undefined8 *)((long)unaff_x22[5] + _DAT_112fe20e8);
      unaff_x24[0xc] = (double)&UNK_110690838;
      func_0x000103788698();
      unaff_x24[0xd] = (double)pdVar7;
      puVar35 = &UNK_1106914a0;
      func_0x000107c613fc(&UNK_1106914a0,0x2c,7);
      unaff_x24[9] = (double)puVar35;
      *(undefined8 *)(puVar35 + 0x10) = uVar32;
      *(undefined8 *)(puVar35 + 0x18) = uVar12;
      *(double **)(puVar35 + 0x20) = unaff_x25;
      *(undefined4 *)(puVar35 + 0x28) = in_stack_00000008._4_4_;
      unaff_x24[0x11] = (double)&UNK_110690200;
      func_0x0001037886d8();
      pdVar17 = in_stack_00000010;
      unaff_x24[0x12] = (double)puVar35;
      unaff_x24[0xe] = (double)unaff_x20;
      unaff_x24[0xf] = (double)unaff_x23;
      in_stack_00000010[3] = (double)&UNK_11068fe28;
      func_0x000103788718();
      func_0x000107c61580(unaff_x20,2);
      uVar11 = 2;
      func_0x000107c61580(unaff_x25,2);
      func_0x000107c61174(uVar32);
      func_0x000107c61174(uVar12);
    }
    else {
      func_0x000107c613fc();
      unaff_x24[3] = 1.97626258336499e-323;
      unaff_x24[2] = 9.88131291682493e-324;
      uVar32 = *(undefined8 *)((long)unaff_x22[5] + _DAT_112fe20e0);
      uVar33 = *(undefined8 *)((long)unaff_x22[5] + _DAT_112fe20e8);
      uVar12 = *(undefined8 *)((long)unaff_x21 + (long)unaff_x28);
      unaff_x24[7] = (double)&UNK_110690838;
      pdVar17 = unaff_x24;
      func_0x000103788698();
      unaff_x24[8] = (double)pdVar17;
      puVar35 = &UNK_1106914a0;
      func_0x000107c613fc(&UNK_1106914a0,0x2c,7);
      unaff_x24[4] = (double)puVar35;
      *(undefined8 *)(puVar35 + 0x10) = uVar32;
      *(undefined8 *)(puVar35 + 0x18) = uVar33;
      *(undefined8 *)(puVar35 + 0x20) = uVar12;
      *(undefined4 *)(puVar35 + 0x28) = in_stack_00000008._4_4_;
      unaff_x24[0xc] = (double)&UNK_110690200;
      func_0x0001037886d8();
      pdVar17 = in_stack_00000010;
      unaff_x24[0xd] = (double)puVar35;
      unaff_x24[9] = (double)unaff_x20;
      unaff_x24[10] = (double)unaff_x23;
      in_stack_00000010[3] = (double)&UNK_11068fe28;
      func_0x000103788718();
      uVar11 = 2;
      func_0x000107c61580(unaff_x20,2);
      func_0x000107c61174(uVar32);
      func_0x000107c61174(uVar33);
      func_0x000107c6157c(uVar12);
    }
    pdVar17[4] = (double)puVar35;
    *pdVar17 = (double)unaff_x20;
    pdVar17[1] = (double)unaff_x24;
    auVar92._8_8_ = uVar11;
    auVar92._0_8_ = uVar12;
    return auVar92;
  case (char *)0x6c:
    goto code_r0x00010378c6c8;
  case (char *)0x6e:
    goto code_r0x0001037791b4;
  case (char *)0x76:
  case (char *)0x7a:
  case (char *)0x7e:
    func_0x000107c61574();
    if (((ulong)unaff_x19 & 1) != 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10378c814);
      (*UNRECOVERED_JUMPTABLE)();
    }
    pcVar14 = "";
    unaff_x19 = unaff_x24;
    func_0x000107c61544();
    goto code_r0x00010378c6c8;
  case (char *)0x78:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(unaff_x29 + -0x60)) {
      func_0x000107c60e78();
      (*(code *)&DAT_104643a44)(pcVar14,pdVar7);
      auVar115._8_8_ = pdVar7;
      auVar115._0_8_ = pcVar14;
      return auVar115;
    }
    auVar114._8_8_ = 0xef656372756f5374;
    auVar114._0_8_ = &uRam6e65697069636572;
    return auVar114;
  case (char *)0x79:
    goto code_r0x000103771770;
  case (char *)0x7c:
    (*(code *)unaff_x21[6])();
    if ((int)unaff_x19 == 1) {
      func_0x0001000d1dcc(unaff_x22[0x25]);
    }
    else {
      (**(code **)((long)unaff_x22[0x28] + 0x20))(unaff_x22[0x29],unaff_x22[0x25],unaff_x22[0x27]);
      func_0x000107c5ee84();
      unaff_d8 = -(double)param_1;
      func_0x0001000d224c(unaff_x22 + 0x22);
      pdVar7 = (double *)unaff_x22[0x22];
      dVar30 = unaff_x22[0x23];
      pdVar17 = pdVar7;
      func_0x000107c614f0();
      (**(code **)((long)dVar30 + 0x60))();
      func_0x000107c615e8();
      unaff_d9 = (double)(long)pdVar17;
      if (unaff_d8 < unaff_d9) {
        unaff_x19 = (double *)unaff_x22[0x29];
        unaff_x20 = (double *)unaff_x22[0x2a];
        goto code_r0x000103792c54;
      }
      (**(code **)((long)unaff_x22[0x28] + 8))(unaff_x22[0x29],unaff_x22[0x27]);
    }
    dVar30 = (double)((long)unaff_x22[0x24] + _DAT_112f91e38);
    func_0x0001000a8868(dVar30,*(undefined8 *)((long)dVar30 + 0x18));
    pdVar17 = (double *)0xe0;
    func_0x000107c615b8();
    unaff_x22[0x2c] = (double)pdVar17;
    *pdVar17 = (double)unaff_x22;
    pdVar17[1] = (double)FUN_103792d4c;
    in_stack_00000050 = in_stack_00000050 & 0xefffffffffffffff | 0x1000000000000000;
    pdVar17[0xe] = dVar30;
    dVar30 = 0.0;
    in_stack_00000048 = pdVar17;
    func_0x000107c5f804();
    pdVar17[0xf] = dVar30;
    dVar30 = *(double *)((long)dVar30 + -8);
    pdVar17[0x10] = dVar30;
    dVar30 = (double)(*(long *)((long)dVar30 + 0x40) + 0xfU & 0xfffffffffffffff0);
    func_0x000107c615b8();
    pdVar17[0x11] = dVar30;
    UNRECOVERED_JUMPTABLE = FUN_103760dbc;
LAB_107c615e0:
    uVar12 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
    auVar119._8_8_ = uVar12;
    auVar119._0_8_ = UNRECOVERED_JUMPTABLE;
    return auVar119;
  case (char *)0x80:
code_r0x000103792c54:
    dVar30 = unaff_x22[0x27];
    dVar19 = unaff_x22[0x28];
    FUN_10379324c();
    func_0x000107c613f8(&UNK_110691ef0,pdVar7,0,0);
    *pdVar7 = unaff_d8;
    pdVar7[1] = unaff_d9;
    func_0x000107c61654();
    func_0x000107c615e8(unaff_x20);
    (**(code **)((long)dVar19 + 8))(unaff_x19,dVar30);
    dVar19 = unaff_x22[0x25];
    dVar28 = unaff_x22[0x26];
    func_0x000107c615c0(unaff_x22[0x29]);
    func_0x000107c615c0(dVar28);
    func_0x000107c615c0(dVar19);
    UNRECOVERED_JUMPTABLE = (code *)unaff_x22[1];
                    /* WARNING: Could not recover jumptable at 0x000103792cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar111._8_8_ = dVar30;
    auVar111._0_8_ = UNRECOVERED_JUMPTABLE;
    return auVar111;
  case (char *)0x8a:
    while( true ) {
      if ((bool)in_CY) {
        func_0x00010379078c((double *)0x1 < pcVar18,unaff_x24,1);
        pdVar16 = in_stack_00000008;
      }
      unaff_x21 = (double *)((long)unaff_x21 + 1);
      pdVar16[2] = (double)unaff_x24;
      pdVar16[(long)((long)unaff_x26 + 4)] = (double)unaff_x23;
      if (unaff_x19 == unaff_x21) break;
      pdVar17 = unaff_x21;
      FUN_10378e588(unaff_x21,unaff_x22[0x45]);
      dVar30 = *unaff_x25;
      func_0x000107c61428((code *)((long)pdVar17 + (long)dVar30),unaff_x22 + 0x28,0,0);
      unaff_x23 = *(double **)((long)pdVar17 + (long)dVar30);
      func_0x000107c61174();
      func_0x000107c615e8(pdVar17);
      unaff_x26 = (double *)pdVar16[2];
      pcVar18 = (char *)pdVar16[3];
      unaff_x24 = (double *)((long)unaff_x26 + 1);
      in_CY = (double *)((ulong)pcVar18 >> 1) <= unaff_x26;
      in_stack_00000008 = pdVar16;
    }
    pdVar7 = (double *)unaff_x22[0x44];
    if (pdVar7 == (double *)0x0) {
      func_0x000107c610f8(PTR_PTR_1126c0a88);
      pdVar17 = (double *)0x0;
      FUN_103787104(0,0x112d726d8,&PTR_PTR_1126b5438);
      func_0x000107c5fc48(pdVar16,pdVar17);
    }
    else {
      dVar30 = unaff_x22[0x43];
      func_0x000107c61434(pdVar7);
      pdVar17 = pdVar7;
      func_0x000107c5fadc(dVar30,pdVar7);
      pdVar16 = pdVar7;
    }
    break;
  case (char *)0x8b:
    goto code_r0x00010378a1c0;
  case (char *)0x8c:
  case (char *)0xec:
    func_0x0001000285a8(&uRam6e65697069636572,&UNK_10d900cd0);
    pdVar17 = pdVar7;
    func_0x000102aa8260();
    unaff_x25 = *(double **)(unaff_x29 + -0xe8);
    lVar8 = *(long *)(unaff_x29 + -0xd8);
    func_0x000107c60554(unaff_x29 + -0xb0,unaff_x29 + -0xb1,unaff_x25,pdVar7,pdVar17);
    if (lVar8 == 0) {
      *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x68);
      *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x70);
      *(undefined1 *)(unaff_x29 + -0xb1) = 1;
      func_0x000107c60554(unaff_x29 + -0xb0,unaff_x29 + -0xb1,unaff_x25,pdVar7,pdVar17);
      *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x78);
      *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x80);
      *(undefined1 *)(unaff_x29 + -0xb1) = 2;
      func_0x000107c60554(unaff_x29 + -0xb0,unaff_x29 + -0xb1,unaff_x25,pdVar7,pdVar17);
      unaff_x21 = (double *)0x0;
      goto code_r0x00010378c728;
    }
LAB_10378c5fc:
    (**(code **)(*(long *)(unaff_x29 + -200) + 8))();
    pdVar16 = *(double **)(unaff_x29 + -0x78);
    pdVar17 = unaff_x25;
    break;
  case (char *)0x8d:
  case (char *)0xed:
    func_0x000107c60eb0();
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10378a92c);
    (*UNRECOVERED_JUMPTABLE)();
  case (char *)0x8e:
  case (char *)0xee:
    func_0x000107c60488(&uRam6e65697069636572,0xef656372756f5374);
    uVar12 = 0;
    func_0x000103aa7a90(0);
    pdVar17 = pdVar7;
    func_0x000107c61480(pdVar7,uVar12);
    if (pdVar17 != (double *)0x0) {
LAB_10378e640:
      auVar104._8_8_ = uVar12;
      auVar104._0_8_ = pdVar7;
      return auVar104;
    }
    func_0x000107c602fc(0x55);
    pcVar18 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar12 = 0xd000000000000046;
    goto LAB_10378e690;
  case (char *)0x8f:
  case (char *)0xef:
    auVar102._0_8_ = *(double *)((long)pcVar18 + 0xab8);
    if (auVar102._0_8_ == 0.0) {
      puVar35 = &UNK_10dc0a2f4;
      puVar29 = &UNK_1106919d8;
      func_0x000107c61520(&UNK_10dc0a2f4,&UNK_1106919d8);
      puRam0000000112f91ab8 = puVar35;
      auVar103._8_8_ = puVar29;
      auVar103._0_8_ = puVar35;
      return auVar103;
    }
    auVar102._8_8_ = 0xef656372756f5374;
    return auVar102;
  case (char *)0x90:
    (*(code *)pcVar18)();
    func_0x000107c614ac(unaff_x22[0x35]);
    dVar19 = unaff_x22[0x40];
    dVar30 = unaff_x22[0x3e];
    func_0x000107c615c0(unaff_x22[0x41]);
    func_0x000107c615c0(dVar19);
    func_0x000107c615c0(dVar30);
    UNRECOVERED_JUMPTABLE = (code *)unaff_x22[1];
                    /* WARNING: Could not recover jumptable at 0x0001037842d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar90._8_8_ = unaff_x23;
    auVar90._0_8_ = UNRECOVERED_JUMPTABLE;
    return auVar90;
  case (char *)0x91:
    do {
      pdVar16 = _uStack0000000000000018;
      pdVar7 = in_stack_00000008;
      pdVar17 = in_stack_00000000;
      *(ulong *)((long)unaff_x26 + (long)puVar35) =
           1L << ((ulong)pcVar18 & 0x3f) | *(ulong *)((long)unaff_x26 + (long)puVar35);
      puVar25 = (undefined8 *)((long)unaff_x20[6] + (long)pcVar18 * 0x10);
      *puVar25 = _uStack0000000000000040;
      puVar25[1] = unaff_x27;
      puVar25 = (undefined8 *)((long)unaff_x20[7] + (long)pcVar18 * 0x30);
      *puVar25 = unaff_x28;
      puVar25[1] = unaff_x23;
      puVar25[2] = in_x14;
      *(char *)(puVar25 + 3) = (char)in_w15;
      puVar25[4] = in_x16;
      *(char *)(puVar25 + 5) = (char)((ulong)_uStack0000000000000018 >> 0x20);
      unaff_x20[2] = (double)((long)unaff_x20[2] + 1);
      if (_uStack0000000000000020 == 0) {
        do {
          pdVar13 = (double *)((long)unaff_x19 + 1);
          if (SCARRY8((long)unaff_x19,1)) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10378fbe4);
            (*UNRECOVERED_JUMPTABLE)();
          }
          if ((long)unaff_x25 <= (long)pdVar13) {
            if (((ulong)_uStack0000000000000018 & 1) != 0) {
              uVar24 = 1L << ((ulong)(byte)*(code *)(in_stack_00000008 + 4) & 0x3f);
              if (((byte)*(code *)(in_stack_00000008 + 4) & 0x3f) < 6) {
                *unaff_x24 = (double)(-1L << (uVar24 & 0x3f));
              }
              else {
                pcVar14 = (char *)(uVar24 + 0x3f >> 3 & 0xffffffffffffff8);
                func_0x000107c60ee4();
              }
              pdVar7[2] = 0.0;
            }
            func_0x000107c61574(pdVar7);
            *pdVar17 = (double)unaff_x20;
            auVar108._8_8_ = pcVar14;
            auVar108._0_8_ = pdVar7;
            return auVar108;
          }
          dVar30 = unaff_x24[(long)pdVar13];
          unaff_x19 = (double *)((long)unaff_x19 + 1);
        } while (dVar30 == 0.0);
        uVar24 = ((ulong)dVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                 ((ulong)dVar30 & 0x5555555555555555) << 1;
        uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
        uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        uVar24 = uVar24 >> 0x20 | uVar24 << 0x20;
        _uStack0000000000000020 = (long)dVar30 - 1U & (ulong)dVar30;
      }
      else {
        uVar24 = (_uStack0000000000000020 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                 (_uStack0000000000000020 & 0x5555555555555555) << 1;
        uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
        uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        uVar24 = uVar24 >> 0x20 | uVar24 << 0x20;
        _uStack0000000000000020 = _uStack0000000000000020 - 1 & _uStack0000000000000020;
        pdVar13 = unaff_x19;
      }
      uVar24 = LZCOUNT(uVar24) | (long)pdVar13 << 6;
      puVar25 = (undefined8 *)((long)in_stack_00000008[6] + uVar24 * 0x10);
      _uStack0000000000000040 = (double *)*puVar25;
      unaff_x27 = (double *)puVar25[1];
      puVar25 = (undefined8 *)((long)in_stack_00000008[7] + uVar24 * 0x30);
      unaff_x28 = (double *)*puVar25;
      unaff_x23 = (double *)puVar25[1];
      uVar24 = puVar25[2];
      uVar4 = *(undefined1 *)(puVar25 + 3);
      puVar35 = (undefined *)puVar25[4];
      _uStack0000000000000018 =
           (double *)(ulong)CONCAT14(*(undefined1 *)(puVar25 + 5),uStack0000000000000018);
      if (((ulong)pdVar16 & 1) == 0) {
        func_0x000107c61434(unaff_x27);
        func_0x000107c61174(unaff_x28);
        FUN_103765724(unaff_x23,uVar24,uVar4);
        func_0x000107c61174(puVar35);
      }
      unaff_x20 = in_stack_00000010;
      _uStack0000000000000038 = (undefined **)(ulong)CONCAT14(uVar4,uStack0000000000000038);
      in_stack_00000028 = uVar24;
      in_stack_00000030 = puVar35;
      func_0x000107c6068c(&stack0x00000048,in_stack_00000010[5]);
      puVar25 = &stack0x00000048;
      pcVar14 = (char *)_uStack0000000000000040;
      func_0x000107c5fb58(puVar25,_uStack0000000000000040,unaff_x27);
      func_0x000107c606a8();
      uVar23 = -1L << ((ulong)(byte)*(code *)(unaff_x20 + 4) & 0x3f);
      uVar21 = (ulong)puVar25 & (uVar23 ^ 0xffffffffffffffff);
      uVar20 = uVar21 >> 6;
      uVar24 = -1L << (uVar21 & 0x3f) & ((ulong)unaff_x26[uVar20] ^ 0xffffffffffffffff);
      if (uVar24 == 0) {
        bVar6 = false;
        uVar24 = 0x3f - uVar23 >> 6;
        do {
          uVar21 = uVar20 + 1;
          if ((uVar21 == uVar24) && (bVar6)) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10378fbe8);
            (*UNRECOVERED_JUMPTABLE)();
          }
          uVar20 = 0;
          if (uVar21 != uVar24) {
            uVar20 = uVar21;
          }
          bVar6 = (bool)(uVar21 == uVar24 | bVar6);
        } while (unaff_x26[uVar20] == -NAN);
        uVar24 = ~(ulong)unaff_x26[uVar20];
        uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
        uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
        uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        pcVar18 = (char *)(LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) | uVar20 << 6);
      }
      else {
        uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
        uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
        uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        pcVar18 = (char *)(LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) | uVar21 & 0x7fffffffffffffc0);
      }
      puVar35 = (undefined *)((ulong)pcVar18 >> 3 & 0x1ffffffffffffff8);
      in_x14 = in_stack_00000028;
      in_x16 = in_stack_00000030;
      unaff_x19 = pdVar13;
      in_w15 = uStack000000000000003c;
    } while( true );
  case (char *)0x98:
    goto code_r0x00010378d134;
  case (char *)0x99:
    func_0x000107c610f8();
    unaff_x22 = pdVar7;
  case (char *)0x9b:
  case (char *)0xd4:
    func_0x0001000c6518(unaff_x29 + -0x78);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)((long)unaff_x23[-1] + 0x40));
    pdVar17 = (double *)((long)&stack0x00000000 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12 + 0x10))(pdVar17);
    *(double **)(unaff_x29 + -0x88) = unaff_x23;
    *(double **)(unaff_x29 + -0x80) = unaff_x27;
    func_0x000107c613fc();
    *(double **)(unaff_x29 + -0xa0) = unaff_x25;
    dVar30 = *pdVar17;
    dVar28 = pdVar17[3];
    dVar19 = pdVar17[2];
    unaff_x25[3] = pdVar17[1];
    unaff_x25[2] = dVar30;
    unaff_x25[5] = dVar28;
    unaff_x25[4] = dVar19;
    dVar30 = pdVar17[4];
    unaff_x25[7] = pdVar17[5];
    unaff_x25[6] = dVar30;
    unaff_x25[8] = pdVar17[6];
    *(double **)((long)pdVar13 + _DAT_112f91e30) = unaff_x21;
    FUN_103789b74(unaff_x29 + -0xa0,(code *)((long)pdVar13 + _DAT_112f91e38));
    *(double **)((long)pdVar13 + _DAT_112f91e40) = unaff_x20;
    *(double **)((long)pdVar13 + _DAT_112f91e48) = unaff_x19;
    *(double **)(unaff_x29 + -0xb0) = pdVar13;
    *(double **)(unaff_x29 + -0xa8) = unaff_x22;
    lVar8 = unaff_x29 + -0xb0;
    puVar35 = PTR_s_init_1125d9248;
    func_0x000107c61154(lVar8,PTR_s_init_1125d9248);
    func_0x0001000834e4(unaff_x29 + -0xa0);
    func_0x0001000834e4(unaff_x29 + -0x78);
    auVar93._8_8_ = puVar35;
    auVar93._0_8_ = lVar8;
    return auVar93;
  case (char *)0x9a:
    *(code **)(param_5 + 0x10) = (code *)((long)pcVar18 + 0x11c);
    *(undefined **)(param_5 + 0x18) = &UNK_110691280;
    *(double **)(param_5 + 0x20) = unaff_x19;
    func_0x000107c507e4();
  case (char *)0xd3:
    pdVar17 = unaff_x22 + 10;
LAB_107c61444:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(pdVar17);
    auVar118._8_8_ = pcVar14;
    auVar118._0_8_ = pdVar17;
    return auVar118;
  case (char *)0x9c:
  case (char *)0xd5:
  case (char *)0xeb:
    while( true ) {
      pcVar18 = (char *)((long)pcVar18 + 1);
      if (puVar35 != (undefined *)0x0) {
        uVar24 = ((ulong)puVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                 ((ulong)puVar35 & 0x5555555555555555) << 1;
        uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
        uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        uVar24 = uVar24 >> 0x20 | uVar24 << 0x20;
        uVar20 = (ulong)(puVar35 + -1) & (ulong)puVar35;
        while( true ) {
          uVar24 = LZCOUNT(uVar24) | (long)unaff_x19 << 6;
          lVar9 = uVar24 * 0x10;
          puVar25 = (undefined8 *)((long)in_stack_00000010[6] + lVar9);
          uVar11 = puVar25[1];
          lVar8 = uVar24 * 0x40;
          puVar1 = (undefined8 *)((long)in_stack_00000010[7] + lVar8);
          uVar12 = *puVar1;
          uVar32 = puVar1[1];
          pcVar14 = (char *)puVar1[2];
          uVar3 = *(undefined4 *)((long)puVar1 + 0x1c);
          _uStack0000000000000018 = CONCAT43(uVar3,(int3)*(undefined4 *)((long)puVar1 + 0x19));
          pdVar17 = _uStack0000000000000018;
          uVar33 = puVar1[6];
          uVar36 = puVar1[7];
          puVar2 = (undefined8 *)((long)in_stack_00000008[6] + lVar9);
          uVar38 = puVar1[5];
          uVar37 = puVar1[4];
          uVar34 = puVar1[4];
          uVar4 = *(undefined1 *)(puVar1 + 3);
          *puVar2 = *puVar25;
          puVar2[1] = uVar11;
          puVar25 = (undefined8 *)((long)in_stack_00000008[7] + lVar8);
          *puVar25 = uVar12;
          puVar25[1] = uVar32;
          puVar25[2] = pcVar14;
          *(undefined1 *)(puVar25 + 3) = uVar4;
          *(undefined4 *)((long)puVar25 + 0x1c) = uVar3;
          *(undefined4 *)((long)puVar25 + 0x19) = uStack0000000000000018;
          puVar25[5] = uVar38;
          puVar25[4] = uVar37;
          puVar25[6] = uVar33;
          puVar25[7] = uVar36;
          _uStack0000000000000018 = pdVar17;
          func_0x000107c61434();
          func_0x000107c61174(uVar12);
          FUN_103765724(uVar32,pcVar14,uVar4);
          func_0x000107c61174(uVar34);
          func_0x000107c61434(uVar33);
          pcVar18 = (char *)unaff_x19;
          if (uVar20 == 0) break;
          uVar24 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
          uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
          uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
          uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
          uVar24 = uVar24 >> 0x20 | uVar24 << 0x20;
          uVar20 = uVar20 - 1 & uVar20;
        }
      }
      unaff_x19 = (double *)((long)pcVar18 + 1);
      if (SCARRY8((long)pcVar18,1)) break;
      if ((long)unaff_x20 <= (long)unaff_x19) {
        func_0x000107c61574(in_stack_00000010);
        *in_stack_00000000 = (double)in_stack_00000008;
        auVar105._8_8_ = pcVar14;
        auVar105._0_8_ = in_stack_00000010;
        return auVar105;
      }
      puVar35 = (undefined *)unaff_x22[(long)unaff_x19];
    }
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10378eadc);
    (*UNRECOVERED_JUMPTABLE)();
  case (char *)0x9d:
  case (char *)0xd6:
    uVar26 = (uint)pcVar18;
    puVar29 = (undefined *)0x726f727265;
    if (uVar26 != 7) {
      puVar29 = (undefined *)0x7463616669747261;
    }
    lVar8 = -0x1b00000000000000;
    if (uVar26 != 7) {
      lVar8 = (ulong)*(ushort *)(&UNK_10dc093f0 + (long)pcVar18 * 2) * 4 + 0x103771413;
    }
    lVar9 = (ulong)*(ushort *)(&UNK_10dc093f0 + (long)pcVar18 * 2) * 4 + 0x103771404;
    if (uVar26 != 6) {
      lVar9 = lVar8;
      puVar35 = puVar29;
    }
    lVar8 = -0x12ffff9a9c8d8a91;
    if (uVar26 != 4) {
      lVar8 = -0x109bb69a9c8d8a91;
    }
    if (uVar26 < 6) {
      lVar9 = lVar8;
      puVar35 = (undefined *)0x53676e696b6e6172;
    }
    auVar95._8_8_ = lVar9;
    auVar95._0_8_ = puVar35;
    return auVar95;
  case (char *)0x9e:
    func_0x000107c60714();
    pdVar17 = (double *)pcVar14;
    func_0x000107c5fb78();
    pdVar16 = (double *)pcVar14;
    break;
  case (char *)0x9f:
    *(undefined8 **)((long)pcVar18 + 0xab0) = &uRam6e65697069636572;
    auVar101._8_8_ = 0xef656372756f5374;
    auVar101._0_8_ = &uRam6e65697069636572;
    return auVar101;
  case (char *)0xa4:
    UNRECOVERED_JUMPTABLE = (code *)unaff_x22[1];
                    /* WARNING: Could not recover jumptable at 0x0001037960ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar113._8_8_ = pcVar14;
    auVar113._0_8_ = UNRECOVERED_JUMPTABLE;
    return auVar113;
  case (char *)0xa8:
    goto code_r0x00010378c7e8;
  case (char *)0xaa:
    goto code_r0x000103779044;
  case (char *)0xac:
code_r0x00010378fe04:
    pdVar17 = in_stack_00000000;
    if (((ulong)in_stack_00000010 & 0x100000000) != 0) {
      uVar24 = 1L << ((ulong)(byte)*(code *)(unaff_x25 + 4) & 0x3f);
      if (((byte)*(code *)(unaff_x25 + 4) & 0x3f) < 6) {
        *unaff_x24 = (double)(-1L << (uVar24 & 0x3f));
      }
      else {
        pcVar14 = (char *)(uVar24 + 0x3f >> 3 & 0xffffffffffffff8);
        func_0x000107c60ee4();
      }
      unaff_x25[2] = 0.0;
    }
    func_0x000107c61574(unaff_x25);
    *pdVar17 = (double)unaff_x22;
    auVar109._8_8_ = pcVar14;
    auVar109._0_8_ = unaff_x25;
    return auVar109;
  case (char *)0xad:
  case (char *)0xe1:
  case (char *)0xfb:
    dVar30 = *unaff_x22;
    func_0x000107c615c0(*(double *)((long)pcVar18 + 0x10));
    UNRECOVERED_JUMPTABLE = *(code **)((long)dVar30 + 8);
                    /* WARNING: Could not recover jumptable at 0x000103772904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar85._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar85._0_8_ = unaff_x20;
    return auVar85;
  case (char *)0xaf:
  case (char *)0xbd:
    goto code_r0x00010377140c;
  case (char *)0xb4:
    goto code_r0x000103787f24;
  case (char *)0xb8:
    goto code_r0x000103778fd4;
  case (char *)0xba:
    goto LAB_10378c6d4;
  case (char *)0xc0:
    goto LAB_107c61110;
  case (char *)0xc2:
    goto code_r0x0001037880b4;
  case (char *)0xc4:
    dVar30 = unaff_x22[0x5d];
    func_0x000107c614ac(unaff_x22[0x57]);
    unaff_x22[0x58] = dVar30;
    func_0x000107c614b0(dVar30);
    pdVar17 = unaff_x22 + 0x55;
    func_0x000107c6147c(pdVar17,unaff_x22 + 0x58);
    dVar30 = unaff_x22[0x5d];
    UNRECOVERED_JUMPTABLE = (code *)unaff_x22[0x5a];
    if ((int)pdVar17 == 0) {
      func_0x000107c614ac(unaff_x22[0x58]);
      pdVar17 = unaff_x22 + 0xd;
      FUN_103794ea8(pdVar17,unaff_x22[0x10]);
      dVar19 = pdVar17[4];
      dVar39 = pdVar17[7];
      dVar28 = pdVar17[6];
      dVar43 = pdVar17[1];
      dVar42 = *pdVar17;
      dVar41 = pdVar17[3];
      dVar40 = pdVar17[2];
      unaff_x22[0x17] = pdVar17[5];
      unaff_x22[0x16] = dVar19;
      unaff_x22[0x19] = dVar39;
      unaff_x22[0x18] = dVar28;
      unaff_x22[0x13] = dVar43;
      unaff_x22[0x12] = dVar42;
      unaff_x22[0x15] = dVar41;
      unaff_x22[0x14] = dVar40;
      FUN_10377cd3c(0);
      dVar19 = unaff_x22[5];
      dVar28 = unaff_x22[6];
      FUN_103794ea8(unaff_x22 + 2,dVar19);
      unaff_x22[0x39] = unaff_x22[8];
      unaff_x22[0x38] = unaff_x22[7];
      unaff_x22[0x3b] = unaff_x22[10];
      unaff_x22[0x3a] = unaff_x22[9];
      *(undefined8 *)((long)unaff_x22 + 0x1e1) = *(undefined8 *)((long)unaff_x22 + 0x59);
      *(undefined8 *)((long)unaff_x22 + 0x1d9) = *(undefined8 *)((long)unaff_x22 + 0x51);
      (**(code **)((long)dVar28 + 0x10))(unaff_x22 + 0x38,dVar30,dVar19,dVar28);
      func_0x000107c614b0(dVar30);
      dVar19 = dVar30;
      (*UNRECOVERED_JUMPTABLE)(1,dVar30);
      func_0x000107c614ac(dVar30);
      func_0x000107c614ac(dVar30);
      FUN_103765578(unaff_x22 + 2);
    }
    else {
      func_0x000107c614ac(dVar30);
      dVar19 = 0.0;
      (*UNRECOVERED_JUMPTABLE)(1,0);
      FUN_103765578(unaff_x22 + 2);
      func_0x000107c614ac(unaff_x22[0x58]);
    }
    UNRECOVERED_JUMPTABLE = (code *)unaff_x22[1];
                    /* WARNING: Could not recover jumptable at 0x000103793e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar112._8_8_ = dVar19;
    auVar112._0_8_ = UNRECOVERED_JUMPTABLE;
    return auVar112;
  case (char *)0xc8:
    dVar30 = *unaff_x22;
    func_0x000107c615c0(*(undefined8 *)((long)*unaff_x22 + 0x10));
    UNRECOVERED_JUMPTABLE = *(code **)((long)dVar30 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010377a730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(&uRam6e65697069636572);
    auVar88._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar88._0_8_ = pdVar7;
    return auVar88;
  case (char *)0xd0:
  case (char *)0xe4:
  case (char *)0xe8:
  case (char *)0xfe:
    if (uRam0000000112f91a38 != 0) {
      auVar97._8_8_ = 0;
      auVar97._0_8_ = uRam0000000112f91a38;
      return auVar97;
    }
    pcVar14 = &UNK_10e77b000;
    pcVar18 = (char *)pdVar7;
    goto code_r0x00010378d134;
  case (char *)0xd1:
  case (char *)0xe5:
  case (char *)0xe9:
  case (char *)0xff:
    uVar12 = 0;
    func_0x000103aa7a90(0);
    pdVar17 = unaff_x19;
    func_0x000107c615f0();
    func_0x000107c61480();
    pdVar7 = unaff_x19;
    if (pdVar17 != (double *)0x0) goto LAB_10378e640;
    in_stack_00000000 = (double *)0x0;
    in_stack_00000008 = (double *)0xe000000000000000;
    func_0x000107c602fc(0x52);
    pcVar18 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar12 = 0xd000000000000043;
LAB_10378e690:
    func_0x000107c5fb78(uVar12,(ulong)(pcVar18 + -0x20) | 0x8000000000000000);
    func_0x000107c5fb78(0xd00000000000001f,0x800000010f164390);
    func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
    func_0x000107c614f0(pdVar7);
    pdVar16 = (double *)0x0;
    func_0x000107c60714();
    pdVar17 = pdVar16;
    func_0x000107c5fb78();
    break;
  case (char *)0xd2:
    func_0x00010378703c();
    unaff_x23 = _DAT_112f919b0;
    func_0x000107c61428((code *)((long)unaff_x19 + (long)_DAT_112f919b0),unaff_x29 + -0x58,0x21,0);
    unaff_x21 = *(double **)((long)unaff_x19 + (long)unaff_x23);
    pdVar7 = unaff_x21;
    func_0x000107c61558();
    goto code_r0x00010378a1c0;
  case (char *)0xd7:
    pdVar17 = *(double **)(unaff_x29 + -0x138);
    (**(code **)(*(long *)(unaff_x29 + -0x150) + 8))(*(undefined8 *)(unaff_x29 + -0x140),pdVar17);
    pdVar16 = unaff_x27;
    break;
  case (char *)0xd8:
    do {
      while( true ) {
        uVar24 = (ulong)pcVar18 | (long)unaff_x24 << 6;
        puVar25 = (undefined8 *)((long)unaff_x21[6] + uVar24 * 0x10);
        uVar12 = puVar25[1];
        uVar11 = *(undefined8 *)((long)unaff_x21[7] + uVar24 * 8);
        puVar1 = (undefined8 *)((long)unaff_x20[6] + uVar24 * 0x10);
        *puVar1 = *puVar25;
        puVar1[1] = uVar12;
        *(undefined8 *)((long)unaff_x20[7] + uVar24 * 8) = uVar11;
        func_0x000107c61434();
        func_0x000107c615f0(uVar11);
        if (unaff_x26 == (double *)0x0) break;
        uVar24 = ((ulong)unaff_x26 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                 ((ulong)unaff_x26 & 0x5555555555555555) << 1;
        uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
        uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        pcVar18 = (char *)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20);
        unaff_x26 = (double *)((ulong)((long)unaff_x26 + -1) & (ulong)unaff_x26);
      }
      do {
        pdVar17 = (double *)((long)unaff_x24 + 1);
        if (SCARRY8((long)unaff_x24,1)) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10378ee28);
          (*UNRECOVERED_JUMPTABLE)();
        }
        if ((long)unaff_x25 <= (long)pdVar17) {
          func_0x000107c61574();
          *unaff_x19 = (double)unaff_x20;
          auVar106._8_8_ = pcVar14;
          auVar106._0_8_ = unaff_x21;
          return auVar106;
        }
        dVar30 = unaff_x22[(long)pdVar17];
        unaff_x24 = (double *)((long)unaff_x24 + 1);
      } while (dVar30 == 0.0);
      uVar24 = ((ulong)dVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | ((ulong)dVar30 & 0x5555555555555555) << 1
      ;
      uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
      uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
      uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
      pcVar18 = (char *)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20);
      unaff_x26 = (double *)((long)dVar30 - 1U & (ulong)dVar30);
      unaff_x24 = pdVar17;
    } while( true );
  case (char *)0xd9:
    do {
      pdVar17 = unaff_x23;
      func_0x000104070e3c(pdVar7,pdVar17,unaff_x27,unaff_x28,param_6);
      func_0x000103787080();
      if (pdVar7 != (double *)0x0) {
        pdVar16 = unaff_x25;
        func_0x000107c61550();
        if ((((int)pdVar16 == 0) || ((long)unaff_x25 < 0)) ||
           (pdVar16 = unaff_x25, ((ulong)unaff_x25 >> 0x3e & 1) != 0)) {
          if ((ulong)unaff_x25 >> 0x3e == 0) {
            pdVar17 = *(double **)(((ulong)unaff_x25 & 0xffffffffffffff8) + 0x10);
          }
          else {
            pdVar17 = (double *)((ulong)unaff_x25 & 0xffffffffffffff8);
            if ((double *)0x7fffffffffffffff < unaff_x25) {
              pdVar17 = unaff_x25;
            }
            func_0x000107c60480(pdVar17);
          }
          pdVar17 = (double *)((long)pdVar17 + 1);
          pdVar16 = (double *)0x0;
          FUN_103762c88(0,pdVar17,1,unaff_x25);
        }
        uVar20 = (ulong)pdVar16 & 0xffffffffffffff8;
        uVar24 = *(ulong *)(uVar20 + 0x10);
        pdVar13 = (double *)(uVar24 + 1);
        unaff_x25 = pdVar16;
        if (*(ulong *)(uVar20 + 0x18) >> 1 <= uVar24) {
          unaff_x25 = (double *)(ulong)(1 < *(ulong *)(uVar20 + 0x18));
          pdVar17 = pdVar13;
          FUN_103762c88(unaff_x25,pdVar13,1,pdVar16);
          uVar20 = (ulong)unaff_x25 & 0xffffffffffffff8;
        }
        *(double **)(uVar20 + 0x10) = pdVar13;
        *(double **)(uVar20 + uVar24 * 8 + 0x20) = pdVar7;
      }
      pdVar7 = *(double **)(unaff_x29 + -0x88);
      while( true ) {
        unaff_x26 = (double *)((long)unaff_x26 + (long)unaff_x24);
        unaff_x19 = (double *)((long)unaff_x19 + -1);
        if (unaff_x19 == (double *)0x0) {
          pdVar16 = *(double **)(unaff_x29 + -0x90);
          goto code_r0x000107c6142c;
        }
        func_0x00010378703c(unaff_x26);
        FUN_1037917b8(0x112f91c10,FUN_10378d110,&UNK_10dc0a4d4);
        unaff_x27 = unaff_x22;
        pdVar17 = pdVar7;
        func_0x000107c5eb4c();
        if (unaff_x21 == (double *)0x0) break;
        func_0x000103787080();
        func_0x000107c614ac(unaff_x21);
        unaff_x21 = (double *)0x0;
      }
      pdVar7 = unaff_x27;
      unaff_x23 = pdVar17;
      FUN_10378a6ac();
      param_6 = 0;
      func_0x000104071150();
      func_0x000107c610f8();
      unaff_x28 = pdVar17;
    } while( true );
  case (char *)0xda:
    auVar100._8_8_ = 0xef656372756f5374;
    auVar100._0_8_ = &uRam6e65697069636572;
    return auVar100;
  case (char *)0xdc:
    goto code_r0x00010378c7a8;
  case (char *)0xde:
    goto LAB_103778f54;
  case (char *)0xe0:
    do {
      func_0x000107c606a8();
      uVar23 = -1L << ((ulong)(byte)*(code *)(unaff_x22 + 4) & 0x3f);
      uVar21 = (ulong)pdVar7 & (uVar23 ^ 0xffffffffffffffff);
      uVar20 = uVar21 >> 6;
      uVar24 = -1L << (uVar21 & 0x3f) & ((ulong)unaff_x23[uVar20] ^ 0xffffffffffffffff);
      if (uVar24 == 0) {
        bVar6 = false;
        uVar24 = 0x3f - uVar23 >> 6;
        do {
          uVar21 = uVar20 + 1;
          if ((uVar21 == uVar24) && (bVar6)) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10378fe84);
            (*UNRECOVERED_JUMPTABLE)();
          }
          uVar20 = 0;
          if (uVar21 != uVar24) {
            uVar20 = uVar21;
          }
          bVar6 = (bool)(uVar21 == uVar24 | bVar6);
        } while (unaff_x23[uVar20] == -NAN);
        uVar24 = ~(ulong)unaff_x23[uVar20];
        uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
        uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
        uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        uVar24 = LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) | uVar20 << 6;
      }
      else {
        uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
        uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
        uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        uVar24 = LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) | uVar21 & 0x7fffffffffffffc0;
      }
      uVar20 = uVar24 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)((long)unaff_x23 + uVar20) =
           1L << (uVar24 & 0x3f) | *(ulong *)((long)unaff_x23 + uVar20);
      puVar25 = (undefined8 *)((long)unaff_x22[6] + uVar24 * 0x10);
      *puVar25 = unaff_x26;
      puVar25[1] = unaff_x27;
      *(double **)((long)unaff_x22[7] + uVar24 * 8) = unaff_x25;
      unaff_x22[2] = (double)((long)unaff_x22[2] + 1);
      if (unaff_x21 == (double *)0x0) {
        do {
          unaff_x28 = (double *)((long)pdVar17 + 1);
          if (SCARRY8((long)pdVar17,1)) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10378fe80);
            (*UNRECOVERED_JUMPTABLE)();
          }
          unaff_x25 = in_stack_00000008;
          if ((long)unaff_x19 <= (long)unaff_x28) goto code_r0x00010378fe04;
          dVar30 = unaff_x24[(long)unaff_x28];
          pdVar17 = (double *)((long)pdVar17 + 1);
        } while (dVar30 == 0.0);
        uVar24 = ((ulong)dVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                 ((ulong)dVar30 & 0x5555555555555555) << 1;
        uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
        uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        uVar24 = uVar24 >> 0x20 | uVar24 << 0x20;
        unaff_x21 = (double *)((long)dVar30 - 1U & (ulong)dVar30);
      }
      else {
        uVar24 = ((ulong)unaff_x21 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                 ((ulong)unaff_x21 & 0x5555555555555555) << 1;
        uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
        uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        uVar24 = uVar24 >> 0x20 | uVar24 << 0x20;
        unaff_x21 = (double *)((ulong)((long)unaff_x21 + -1) & (ulong)unaff_x21);
        unaff_x28 = pdVar17;
      }
      uVar24 = LZCOUNT(uVar24) | (long)unaff_x28 << 6;
      puVar25 = (undefined8 *)((long)in_stack_00000008[6] + uVar24 * 0x10);
      unaff_x26 = (double *)*puVar25;
      unaff_x27 = (double *)puVar25[1];
      unaff_x25 = *(double **)((long)in_stack_00000008[7] + uVar24 * 8);
      if (((ulong)in_stack_00000010 & 0x100000000) == 0) {
code_r0x00010378fd54:
        func_0x000107c61434(unaff_x27);
        func_0x000107c615f0(unaff_x25);
      }
      func_0x000107c6068c(&stack0x00000018,unaff_x22[5]);
      pdVar7 = (double *)&stack0x00000018;
      pcVar14 = (char *)unaff_x26;
      func_0x000107c5fb58(pdVar7,unaff_x26,unaff_x27);
      pdVar17 = unaff_x28;
    } while( true );
  case (char *)0xe6:
  case (char *)0xea:
    pdVar16 = (double *)*unaff_x20;
    pdVar17 = (double *)pdVar16[3];
    if ((long)pdVar16[3] < 0x6e65697069636573) {
      pdVar17 = pdVar7;
    }
    func_0x0001000285a8(0x112f91e28,&UNK_10dc0aa48);
    uStack0000000000000020 = 0x756f5374;
    pdVar13 = pdVar16;
    func_0x000107c60490(pdVar16,pdVar17,0xef656372756f5374);
    pdVar7 = pdVar13;
    if (pdVar16[2] == 0.0) {
LAB_10378f884:
      func_0x000107c61574(pdVar16);
      *unaff_x20 = (double)pdVar7;
      auVar107._8_8_ = pdVar17;
      auVar107._0_8_ = pdVar16;
      return auVar107;
    }
    in_stack_00000008 = pdVar16 + 8;
    uVar20 = 1L << ((ulong)(byte)*(code *)(pdVar16 + 4) & 0x3f);
    uVar24 = 0xffffffffffffffff;
    if (((byte)*(code *)(pdVar16 + 4) & 0x3f) < 6) {
      uVar24 = ~(-1L << (uVar20 & 0x3f));
    }
    uVar24 = uVar24 & (ulong)*in_stack_00000008;
    lVar8 = 0;
    in_stack_00000000 = unaff_x20;
    in_stack_00000010 = pdVar16;
    _uStack0000000000000018 = pdVar13;
    do {
      pdVar16 = in_stack_00000010;
      unaff_x20 = in_stack_00000000;
      if (uVar24 == 0) {
        do {
          lVar9 = lVar8 + 1;
          if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10378f8b8);
            (*UNRECOVERED_JUMPTABLE)();
          }
          if ((long)(uVar20 + 0x3f >> 6) <= lVar9) {
            if ((uStack0000000000000020 & 1) != 0) {
              uVar24 = 1L << ((ulong)(byte)*(code *)(in_stack_00000010 + 4) & 0x3f);
              if (((byte)*(code *)(in_stack_00000010 + 4) & 0x3f) < 6) {
                *in_stack_00000008 = (double)(-1L << (uVar24 & 0x3f));
              }
              else {
                pdVar17 = (double *)(uVar24 + 0x3f >> 3 & 0xffffffffffffff8);
                func_0x000107c60ee4(in_stack_00000008,pdVar17);
              }
              pdVar16[2] = 0.0;
            }
            goto LAB_10378f884;
          }
          dVar30 = in_stack_00000008[lVar9];
          lVar8 = lVar8 + 1;
        } while (dVar30 == 0.0);
        uVar24 = ((ulong)dVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                 ((ulong)dVar30 & 0x5555555555555555) << 1;
        uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
        uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        uVar21 = uVar24 >> 0x20 | uVar24 << 0x20;
        in_stack_00000028 = (long)dVar30 - 1U & (ulong)dVar30;
      }
      else {
        uVar21 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
        uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
        uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
        uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
        uVar21 = uVar21 >> 0x20 | uVar21 << 0x20;
        in_stack_00000028 = uVar24 - 1 & uVar24;
        lVar9 = lVar8;
      }
      uVar24 = LZCOUNT(uVar21) | lVar9 << 6;
      puVar25 = (undefined8 *)((long)in_stack_00000010[6] + uVar24 * 0x10);
      in_stack_00000048 = (double *)*puVar25;
      uVar11 = puVar25[1];
      puVar25 = (undefined8 *)((long)in_stack_00000010[7] + uVar24 * 0x40);
      uVar12 = *puVar25;
      uVar32 = puVar25[1];
      uVar33 = puVar25[2];
      uVar4 = *(undefined1 *)(puVar25 + 3);
      puVar35 = (undefined *)puVar25[4];
      uStack0000000000000024 = (uint)*(byte *)(puVar25 + 5);
      ppuVar31 = (undefined **)puVar25[6];
      uVar34 = puVar25[7];
      if ((uStack0000000000000020 & 1) == 0) {
        func_0x000107c61434(uVar11);
        func_0x000107c61174(uVar12);
        FUN_103765724(uVar32,uVar33,uVar4);
        func_0x000107c61174(puVar35);
        func_0x000107c61434(ppuVar31);
      }
      pdVar7 = _uStack0000000000000018;
      _uStack0000000000000040 = (double *)(ulong)CONCAT14(uVar4,uStack0000000000000040);
      in_stack_00000030 = puVar35;
      _uStack0000000000000038 = ppuVar31;
      func_0x000107c6068c(&stack0x00000050,_uStack0000000000000018[5]);
      puVar25 = &stack0x00000050;
      pdVar17 = in_stack_00000048;
      func_0x000107c5fb58(puVar25,in_stack_00000048,uVar11);
      func_0x000107c606a8();
      uVar22 = -1L << ((ulong)(byte)*(code *)(pdVar7 + 4) & 0x3f);
      uVar23 = (ulong)puVar25 & (uVar22 ^ 0xffffffffffffffff);
      uVar21 = uVar23 >> 6;
      uVar24 = -1L << (uVar23 & 0x3f) & ((ulong)pdVar13[uVar21 + 8] ^ 0xffffffffffffffff);
      if (uVar24 == 0) {
        bVar6 = false;
        uVar24 = 0x3f - uVar22 >> 6;
        do {
          uVar23 = uVar21 + 1;
          if ((uVar23 == uVar24) && (bVar6)) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10378f8bc);
            (*UNRECOVERED_JUMPTABLE)();
          }
          uVar21 = 0;
          if (uVar23 != uVar24) {
            uVar21 = uVar23;
          }
          bVar6 = (bool)(uVar23 == uVar24 | bVar6);
        } while (pdVar13[uVar21 + 8] == -NAN);
        uVar24 = ~(ulong)pdVar13[uVar21 + 8];
        uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
        uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
        uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        uVar24 = LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) | uVar21 << 6;
      }
      else {
        uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
        uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
        uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        uVar24 = LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) | uVar23 & 0x7fffffffffffffc0;
      }
      uVar21 = uVar24 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)((long)pdVar13 + uVar21 + 0x40) =
           1L << (uVar24 & 0x3f) | *(ulong *)((long)pdVar13 + uVar21 + 0x40);
      puVar25 = (undefined8 *)((long)pdVar7[6] + uVar24 * 0x10);
      *puVar25 = in_stack_00000048;
      puVar25[1] = uVar11;
      puVar25 = (undefined8 *)((long)pdVar7[7] + uVar24 * 0x40);
      *puVar25 = uVar12;
      puVar25[1] = uVar32;
      puVar25[2] = uVar33;
      *(char *)(puVar25 + 3) = (char)((ulong)_uStack0000000000000040 >> 0x20);
      puVar25[4] = in_stack_00000030;
      *(char *)(puVar25 + 5) = (char)uStack0000000000000024;
      puVar25[6] = _uStack0000000000000038;
      puVar25[7] = uVar34;
      pdVar7[2] = (double)((long)pdVar7[2] + 1);
      uVar24 = in_stack_00000028;
      lVar8 = lVar9;
    } while( true );
  case (char *)0xe7:
    goto code_r0x0001037715d4;
  case (char *)0xf0:
    pdVar17 = (double *)0x112f91758;
    FUN_103787190();
    func_0x000103787080();
    dVar30 = unaff_x22[0x38];
    if ((dVar30 != 0.0) && (*(code *)(unaff_x22 + 0x4f) == (code)0x1)) {
      puVar25 = (undefined8 *)0x70;
      func_0x000107c615f0(dVar30);
      func_0x000107c615b8();
      unaff_x22[0x4e] = (double)puVar25;
      *puVar25 = unaff_x22;
      puVar25[1] = FUN_1037852d0;
      dVar19 = unaff_x22[0x45];
      dVar28 = unaff_x22[0x36];
      puVar25[9] = dVar30;
      puVar25[10] = dVar28;
      puVar25[8] = dVar19;
      UNRECOVERED_JUMPTABLE = FUN_103783e70;
      goto LAB_107c615e0;
    }
    pdVar16 = (double *)unaff_x22[0x45];
    func_0x000107c61170(unaff_x22[0x47]);
    break;
  case (char *)0xf1:
    auVar99._8_8_ = 0xef656372756f5374;
    auVar99._0_8_ = &uRam6e65697069636572;
    return auVar99;
  case (char *)0xf2:
    func_0x000107c6053c();
    (*(code *)unaff_x27[1])();
    pdVar16 = unaff_x25;
    pdVar17 = unaff_x19;
    break;
  case (char *)0xf3:
    pdVar16 = *(double **)((long)unaff_x19 + (long)*(double *)((long)pcVar18 + 0x9b0));
    pdVar17 = (double *)pcVar14;
    break;
  case (char *)0xf6:
    func_0x000107c61170();
    pdVar16 = (double *)unaff_x21[1];
    *unaff_x21 = (double)&uRam6e65697069636572;
    unaff_x21[1] = -4.053464266318348e+228;
    pdVar17 = (double *)pcVar14;
    break;
  case (char *)0xf8:
    pdVar17 = unaff_x19;
    func_0x000107c61558();
    *(double **)(unaff_x29 + -0xa8) = unaff_x19;
    FUN_10377c65c(unaff_x22,0,2,0x12,pdVar17);
    unaff_x19 = *(double **)(unaff_x29 + -0xa8);
    *(double **)(unaff_x29 + -0x70) = unaff_x19;
LAB_103778f54:
    uVar24 = 0x7263736275537369;
    func_0x0001000f66f0(0x7263736275537369,0xee00656c62616269);
    if ((uVar24 & 1) != 0) {
      pdVar17 = unaff_x26;
      func_0x00010901d398();
      pdVar7 = unaff_x19;
      func_0x000107c61558(unaff_x19);
      *(double **)(unaff_x29 + -0xa8) = unaff_x19;
      FUN_10377c65c((ulong)pdVar17 & 0xffffffff,0,2,0x13,pdVar7);
      unaff_x19 = *(double **)(unaff_x29 + -0xa8);
      *(double **)(unaff_x29 + -0x70) = unaff_x19;
    }
    pdVar7 = (double *)0x745370616e537369;
    pcVar14 = (char *)0xea00000000007261;
code_r0x000103778fd4:
    func_0x0001000f66f0(pdVar7,pcVar14);
    if (((ulong)pdVar7 & 1) != 0) {
      pdVar17 = unaff_x26;
      func_0x00010901df08();
      pdVar7 = unaff_x19;
      func_0x000107c61558(unaff_x19);
      *(double **)(unaff_x29 + -0xa8) = unaff_x19;
      FUN_10377c65c((ulong)pdVar17 & 0xffffffff,0,2,0x14,pdVar7);
      unaff_x19 = *(double **)(unaff_x29 + -0xa8);
      *(double **)(unaff_x29 + -0x70) = unaff_x19;
    }
    pdVar7 = (double *)0x725070616e537369;
    func_0x0001000f66f0(0x725070616e537369,0xe90000000000006f);
code_r0x000103779044:
    if (((ulong)pdVar7 & 1) != 0) {
      pdVar17 = unaff_x26;
      func_0x00010901c684();
      pdVar7 = unaff_x19;
      func_0x000107c61558(unaff_x19);
      *(double **)(unaff_x29 + -0xa8) = unaff_x19;
      FUN_10377c65c((ulong)pdVar17 & 0xffffffff,0,2,0x15,pdVar7);
      *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0xa8);
    }
    pdVar17 = unaff_x26;
    func_0x00010901e044();
    func_0x000107c61180();
    if (pdVar17 != (double *)0x0) {
      func_0x000107c5ee94();
      func_0x000107c61170(pdVar17);
      (*(code *)unaff_x27[4])();
      uVar24 = 0x6e65697246646461;
      func_0x0001000f66f0(0x6e65697246646461,0xec00000065674164);
      if ((uVar24 & 1) != 0) {
        func_0x000107c5ee8c();
        uVar12 = *(undefined8 *)(unaff_x29 + -0x70);
        pdVar17 = param_1;
        func_0x000107c61558(uVar12);
        *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x70);
        FUN_10377c65c(param_1,0,1,5,uVar12);
        *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0xa8);
        func_0x000107c5ee68();
        uVar12 = *(undefined8 *)(unaff_x29 + -0x70);
        param_1 = pdVar17;
        func_0x000107c61558(uVar12);
        *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x70);
        FUN_10377c65c(pdVar17,0,1,6,uVar12);
        *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0xa8);
      }
      (*(code *)unaff_x27[1])();
    }
    pdVar17 = unaff_x26;
    func_0x00010901e0a4();
    func_0x000107c61180();
    if (pdVar17 != (double *)0x0) {
      unaff_x20 = *(double **)(unaff_x29 + -0xe8);
      func_0x000107c5ee94(unaff_x20);
      func_0x000107c61170(pdVar17);
      pcVar18 = (char *)unaff_x27[4];
      pdVar7 = *(double **)(unaff_x29 + -0xe0);
      unaff_x21 = pdVar7;
code_r0x0001037791b4:
      (*(code *)pcVar18)(pdVar7,unaff_x20);
      uVar24 = 0;
      func_0x0001000f66f0(0xd000000000000010,0x800000010f163f10);
      if ((uVar24 & 1) != 0) {
        func_0x000107c5ee8c();
        uVar12 = *(undefined8 *)(unaff_x29 + -0x70);
        pdVar17 = param_1;
        func_0x000107c61558(uVar12);
        *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x70);
        FUN_10377c65c(param_1,0,1,7,uVar12);
        *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0xa8);
        func_0x000107c5ee68(unaff_x21);
        uVar12 = *(undefined8 *)(unaff_x29 + -0x70);
        param_1 = pdVar17;
        func_0x000107c61558(uVar12);
        *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x70);
        FUN_10377c65c(pdVar17,0,1,8,uVar12);
        *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0xa8);
      }
      (*(code *)unaff_x27[1])(unaff_x21);
    }
    pdVar17 = (double *)((long)unaff_x28 + (long)*(int *)(*(long *)(unaff_x29 + -0xb8) + 0x14));
    if (*(code *)(pdVar17 + 1) != (code)0x1) {
      unaff_d8 = *pdVar17;
      pdVar7 = unaff_x26;
      func_0x00010901db40();
      func_0x000107c61180();
      if (pdVar7 != (double *)0x0) {
        pcVar18 = *(char **)(unaff_x29 + -0x108);
        unaff_x20 = (double *)pcVar18;
code_r0x0001037792b4:
        func_0x000107c5ee94(pcVar18);
        func_0x000107c61170(pdVar7);
        pdVar7 = *(double **)(unaff_x29 + -0x100);
        (*(code *)unaff_x27[4])(pdVar7,unaff_x20);
        uVar24 = 0;
        func_0x0001000f66f0(0xd000000000000010,0x800000010f163ed0);
        if ((uVar24 & 1) != 0) {
          func_0x000107c5ee68();
          uVar12 = *(undefined8 *)(unaff_x29 + -0x70);
          func_0x000107c61558(uVar12);
          *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x70);
          FUN_10377c65c((double)param_1 < unaff_d8,0,2,0x1d,uVar12);
          *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0xa8);
        }
        pcVar18 = (char *)unaff_x27[1];
        goto code_r0x000103779354;
      }
    }
    goto LAB_103779358;
  case (char *)0xfa:
    goto code_r0x00010378fd54;
  }
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  auVar117._8_8_ = pdVar17;
  auVar117._0_8_ = pdVar16;
  return auVar117;
code_r0x00010378c6c8:
  func_0x000107c61574();
  pdVar7 = unaff_x24;
  if (((ulong)unaff_x19 & 1) != 0) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10378c818);
    (*UNRECOVERED_JUMPTABLE)();
  }
  goto LAB_10378c6d4;
code_r0x00010378c7a8:
  func_0x000107c61544();
  func_0x000107c61574();
  func_0x000107c61574();
  if (((ulong)unaff_x22 & 1) != 0) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10378c820);
    (*UNRECOVERED_JUMPTABLE)();
  }
  pcVar14 = "";
  pdVar13 = unaff_x24;
  goto code_r0x00010378c7e8;
code_r0x00010377140c:
  pcVar18 = "tcherDiPluginEntryPoint.BitmojiProduct";
code_r0x000103771410:
  pcVar18 = (char *)((long)pcVar18 + 0xfd0);
  goto code_r0x000103771414;
code_r0x00010378d134:
  pdVar17 = (double *)((long)pcVar14 + 0xa08);
  func_0x000107c614fc(pcVar18,pdVar17);
  auVar98._8_8_ = pdVar17;
  auVar98._0_8_ = pcVar18;
  return auVar98;
code_r0x000103771968:
  auVar80._8_8_ = pcVar14;
  auVar80._0_8_ = pdVar7;
  return auVar80;
code_r0x00010378a1c0:
  *(double **)((long)unaff_x19 + (long)unaff_x23) = unaff_x21;
  pdVar17 = unaff_x21;
  if (((ulong)pdVar7 & 1) == 0) {
    pdVar17 = (double *)0x0;
    FUN_103762b0c(0,(long)unaff_x21[2] + 1,1,unaff_x21);
    *(double **)((long)unaff_x19 + (long)unaff_x23) = pdVar17;
  }
  dVar30 = pdVar17[2];
  pdVar7 = pdVar17;
  if ((ulong)pdVar17[3] >> 1 <= (ulong)dVar30) {
    pdVar7 = (double *)(ulong)(1 < (ulong)pdVar17[3]);
    FUN_103762b0c(pdVar7,(long)dVar30 + 1U,1,pdVar17);
  }
  pdVar7[2] = (double)((long)dVar30 + 1U);
  UNRECOVERED_JUMPTABLE =
       (code *)((long)pdVar7 +
               (long)unaff_x24[9] * (long)dVar30 +
               ((ulong)(byte)*(code *)(unaff_x24 + 10) + 0x20 &
               ((ulong)(byte)*(code *)(unaff_x24 + 10) ^ 0xffffffffffffffff)));
  func_0x000103791978();
  *(double **)((long)unaff_x19 + (long)unaff_x23) = pdVar7;
  lVar8 = unaff_x29 + -0x58;
  func_0x000107c614a8(lVar8);
  if (4 < (ulong)dVar30) {
    UNRECOVERED_JUMPTABLE = (code *)((long)dVar30 - 4);
    func_0x000107c61428((code *)((long)unaff_x19 + (long)unaff_x23),unaff_x29 + -0x58,0x21,0);
    FUN_1037914d0(0,UNRECOVERED_JUMPTABLE);
    lVar8 = unaff_x29 + -0x58;
    func_0x000107c614a8(lVar8);
  }
  auVar94._8_8_ = UNRECOVERED_JUMPTABLE;
  auVar94._0_8_ = lVar8;
  return auVar94;
code_r0x000103792944:
  func_0x000107c61574();
  func_0x000107c61574(unaff_x20);
  func_0x000107c61574(unaff_x22);
  unaff_x25 = (double *)0x0;
LAB_107c61110:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  auVar116._8_8_ = pcVar14;
  auVar116._0_8_ = unaff_x25;
  return auVar116;
code_r0x00010378c7e8:
  func_0x000107c61544();
  func_0x000107c61574();
  pdVar7 = unaff_x24;
  if (((ulong)pdVar13 & 1) != 0) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10378c80c);
    (*UNRECOVERED_JUMPTABLE)();
  }
LAB_10378c6d4:
code_r0x00010378c6f8:
  auVar96._8_8_ = pcVar14;
  auVar96._0_8_ = pdVar7;
  return auVar96;
code_r0x000103771414:
code_r0x0001037716e4:
  auVar62._8_8_ = (ulong)((long)pcVar18 + -0x20) | 0x8000000000000000;
  auVar62._0_8_ = pdVar7;
  return auVar62;
code_r0x000103779354:
  (*(code *)pcVar18)(pdVar7);
LAB_103779358:
  pdVar17 = unaff_x26;
  func_0x00010901d924();
  if (0 < (int)pdVar17) {
    uVar24 = 0x6f436b6165727473;
    func_0x0001000f66f0(0x6f436b6165727473,0xeb00000000746e75);
    if ((uVar24 & 1) != 0) {
      uVar12 = *(undefined8 *)(unaff_x29 + -0x70);
      func_0x000107c61558(uVar12);
      *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x70);
      FUN_10377c65c((double)((ulong)pdVar17 & 0xffffffff),0,1,0x1c,uVar12);
      *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0xa8);
    }
  }
  pdVar17 = unaff_x26;
  func_0x000107c439a8();
  func_0x000107c61180();
  if (pdVar17 == (double *)0x0) {
    *(undefined8 *)(unaff_x29 + -0xd0) = 0;
    *(undefined8 *)(unaff_x29 + -200) = 0;
    UNRECOVERED_JUMPTABLE = (code *)0x0;
    puVar35 = (undefined *)0x0;
    uVar12 = 0;
    puVar29 = (undefined *)0x0;
    goto LAB_1037797c4;
  }
  *(undefined1 *)(unaff_x29 + -0x71) = 6;
  pdVar7 = unaff_x26;
  func_0x000107c49ac4();
  if (((ulong)pdVar7 & 1) == 0) {
    pdVar7 = pdVar17;
    func_0x000107c5c3a4();
    func_0x000107c61180();
    if (pdVar7 == (double *)0x0) {
      pdVar7 = unaff_x26;
      func_0x000107c452e8();
      func_0x000107c61180();
      if (pdVar7 == (double *)0x0) {
        pdVar7 = unaff_x26;
        func_0x000107c5c3fc();
        func_0x000107c61180();
        if (pdVar7 == (double *)0x0) goto LAB_10377973c;
        uVar26 = 5;
      }
      else {
        uVar26 = 4;
      }
      func_0x000107c61170();
      goto LAB_1037796a4;
    }
    func_0x000107c61170();
    pdVar7 = pdVar17;
    func_0x000107c5c3a4();
    func_0x000107c61180();
    if (pdVar7 != (double *)0x0) {
      puVar35 = &UNK_110690500;
      func_0x000107c613fc(&UNK_110690500,0x20,7);
      lVar27 = unaff_x29 + -0x71;
      *(long *)(puVar35 + 0x10) = lVar27;
      *(long *)(puVar35 + 0x18) = unaff_x29 + -0x70;
      puVar29 = &UNK_110690528;
      func_0x000107c613fc(&UNK_110690528,0x20,7);
      *(undefined8 *)(unaff_x29 + -0xd0) = 0x103779a54;
      *(undefined **)(unaff_x29 + -200) = puVar35;
      *(undefined8 *)(puVar29 + 0x10) = 0x103779a54;
      *(undefined **)(puVar29 + 0x18) = puVar35;
      *(undefined8 *)(unaff_x29 + -0x88) = 0x103779ed8;
      *(undefined **)(unaff_x29 + -0x80) = puVar29;
      puVar5 = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined **)(unaff_x29 + -0xa8) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x29 + -0xa0) = 0x42000000;
      *(undefined **)(unaff_x29 + -0x98) = &UNK_101a7ff58;
      *(undefined **)(unaff_x29 + -0x90) = &UNK_110690540;
      lVar8 = unaff_x29 + -0xa8;
      func_0x000107c60bc4(lVar8);
      func_0x000107c61574(*(undefined8 *)(unaff_x29 + -0x80));
      puVar35 = &UNK_110690578;
      func_0x000107c613fc(&UNK_110690578,0x18,7);
      *(long *)(puVar35 + 0x10) = lVar27;
      puVar29 = &UNK_1106905a0;
      func_0x000107c613fc(&UNK_1106905a0,0x20,7);
      *(code **)(puVar29 + 0x10) = FUN_103779ea8;
      *(undefined **)(puVar29 + 0x18) = puVar35;
      *(undefined8 *)(unaff_x29 + -0x88) = 0x103779edc;
      *(undefined **)(unaff_x29 + -0x80) = puVar29;
      *(undefined **)(unaff_x29 + -0xa8) = puVar5;
      *(undefined8 *)(unaff_x29 + -0xa0) = 0x42000000;
      *(undefined **)(unaff_x29 + -0x98) = &UNK_101a7ff5c;
      *(undefined **)(unaff_x29 + -0x90) = &UNK_1106905b8;
      lVar9 = unaff_x29 + -0xa8;
      func_0x000107c60bc4(lVar9);
      func_0x000107c61574(*(undefined8 *)(unaff_x29 + -0x80));
      puVar29 = &UNK_1106905f0;
      func_0x000107c613fc(&UNK_1106905f0,0x18,7);
      *(long *)(puVar29 + 0x10) = lVar27;
      puVar10 = &UNK_110690618;
      func_0x000107c613fc(&UNK_110690618,0x20,7);
      uVar12 = 0x103779eac;
      *(undefined8 *)(puVar10 + 0x10) = 0x103779eac;
      *(undefined **)(puVar10 + 0x18) = puVar29;
      *(code **)(unaff_x29 + -0x88) = FUN_103779a88;
      *(undefined **)(unaff_x29 + -0x80) = puVar10;
      *(undefined **)(unaff_x29 + -0xa8) = puVar5;
      unaff_x26 = *(double **)(unaff_x29 + -0xb0);
      *(undefined8 *)(unaff_x29 + -0xa0) = 0x42000000;
      *(undefined **)(unaff_x29 + -0x98) = &UNK_101a7ff60;
      *(undefined **)(unaff_x29 + -0x90) = &UNK_110690630;
      lVar27 = unaff_x29 + -0xa8;
      func_0x000107c60bc4(lVar27);
      func_0x000107c61574(*(undefined8 *)(unaff_x29 + -0x80));
      func_0x000107c4c628(pdVar7);
      func_0x000107c60bd0(lVar27);
      func_0x000107c60bd0(lVar9);
      UNRECOVERED_JUMPTABLE = FUN_103779ea8;
      func_0x000107c60bd0(lVar8);
      func_0x000107c61170(pdVar7);
      uVar26 = (uint)*(byte *)(unaff_x29 + -0x71);
      if (*(byte *)(unaff_x29 + -0x71) == 6) goto LAB_103779750;
      goto LAB_1037796bc;
    }
LAB_10377973c:
    puVar29 = (undefined *)0x0;
    uVar12 = 0;
    puVar35 = (undefined *)0x0;
    UNRECOVERED_JUMPTABLE = (code *)0x0;
    *(undefined8 *)(unaff_x29 + -0xd0) = 0;
    *(undefined8 *)(unaff_x29 + -200) = 0;
  }
  else {
    uVar26 = 0;
LAB_1037796a4:
    puVar29 = (undefined *)0x0;
    uVar12 = 0;
    puVar35 = (undefined *)0x0;
    UNRECOVERED_JUMPTABLE = (code *)0x0;
    *(undefined8 *)(unaff_x29 + -0xd0) = 0;
    *(undefined8 *)(unaff_x29 + -200) = 0;
    *(char *)(unaff_x29 + -0x71) = (char)uVar26;
LAB_1037796bc:
    uVar24 = 0;
    func_0x0001000f66f0(0x694c646e65697266,0xee00657079546b6e);
    if ((uVar24 & 1) != 0) {
      uVar33 = *(undefined8 *)(&UNK_10dc09838 + (ulong)uVar26 * 8);
      uVar32 = *(undefined8 *)(&UNK_10dc09868 + (ulong)uVar26 * 8);
      uVar11 = *(undefined8 *)(unaff_x29 + -0x70);
      func_0x000107c61558(uVar11);
      *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x70);
      unaff_x26 = *(double **)(unaff_x29 + -0xb0);
      FUN_10377c65c(uVar33,uVar32,0,0x17,uVar11);
      *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0xa8);
    }
  }
LAB_103779750:
  uVar24 = 0x6572707075537369;
  func_0x0001000f66f0(0x6572707075537369,0xec00000064657373);
  if ((uVar24 & 1) != 0) {
    pdVar7 = pdVar17;
    func_0x000107c4a584(pdVar17);
    uVar11 = *(undefined8 *)(unaff_x29 + -0x70);
    func_0x000107c61558(uVar11);
    *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x70);
    unaff_x26 = *(double **)(unaff_x29 + -0xb0);
    FUN_10377c65c((ulong)pdVar7 & 0xffffffff,0,2,0x18,uVar11);
    *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0xa8);
  }
  func_0x000107c61170(pdVar17);
LAB_1037797c4:
  pdVar17 = unaff_x26;
  func_0x000107c40cdc();
  func_0x000107c61180();
  if (pdVar17 == (double *)0x0) {
    *(undefined8 *)(unaff_x29 + -0xc0) = 0;
    *(undefined8 *)(unaff_x29 + -0xb8) = 0;
    uVar11 = 0;
  }
  else {
    uVar24 = 0x54726f7461657263;
    func_0x0001000f66f0(0x54726f7461657263,0xeb00000000726569);
    if ((uVar24 & 1) != 0) {
      pdVar7 = pdVar17;
      func_0x000107c5c970();
      uVar26 = (int)pdVar7 - 1;
      if (uVar26 < 3) {
        uVar33 = 0;
        uVar11 = *(undefined8 *)(&UNK_10dc09898 + (ulong)uVar26 * 8);
        uVar32 = *(undefined8 *)(&UNK_10dc098b0 + (ulong)uVar26 * 8);
      }
      else {
        uVar11 = 0;
        uVar32 = 0;
        uVar33 = 0xff;
      }
      FUN_103776d7c(uVar11,uVar32,uVar33,0x16);
    }
    *(undefined8 *)(unaff_x29 + -0xc0) = 0;
    *(undefined8 *)(unaff_x29 + -0xb8) = 0;
    *(undefined8 *)(unaff_x29 + -0xd8) = 0;
    func_0x000107c61170(pdVar17);
    uVar11 = *(undefined8 *)(unaff_x29 + -0xd8);
  }
  func_0x000107c61170(unaff_x26);
  uVar32 = *(undefined8 *)(unaff_x29 + -0x70);
  func_0x000100d5d2f0(0,0);
  func_0x000100d5d2f0(*(undefined8 *)(unaff_x29 + -0xb8),uVar11);
  func_0x000100d5d2f0(0,*(undefined8 *)(unaff_x29 + -0xc0));
  func_0x000100d5d2f0(*(undefined8 *)(unaff_x29 + -0xd0),*(undefined8 *)(unaff_x29 + -200));
  func_0x000100d5d2f0(UNRECOVERED_JUMPTABLE,puVar35);
  func_0x000100d5d2f0(uVar12,puVar29);
  auVar87._8_8_ = puVar29;
  auVar87._0_8_ = uVar32;
  return auVar87;
}



/* Entry: 1037719dc; end: 103771b97;  */

void FUN_1037719dc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = (ulong)*unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  FUN_1037713c4(uVar1);
  func_0x000107c5fb58(auStack_68,uVar1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103771b98; end: 103771b9b;  */

void FUN_103771b98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f90a50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc09460;
  func_0x000107c61520(&UNK_10dc09460,&UNK_110690130);
  puRam0000000112f90a50 = puVar1;
  return;
}



/* Entry: 103771b9c; end: 103771bdb;  */

void FUN_103771b9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f90a50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc09460;
  func_0x000107c61520(&UNK_10dc09460,&UNK_110690130);
  puRam0000000112f90a50 = puVar1;
  return;
}



/* Entry: 103771bdc; end: 103771d3f;  */

int FUN_103771bdc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xc9 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x36) {
      iVar2 = 4;
    }
    if (param_2 + 0x36 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103771c58;
        goto LAB_103771c3c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103771c3c:
      return ((uint)*param_1 | uVar1 << 8) - 0x36;
    }
  }
LAB_103771c58:
  iVar2 = *param_1 - 0x37;
  if (*param_1 < 0x37) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103771d40; end: 103771d9b;  */

void FUN_103771d40(undefined8 *param_1)

{
  func_0x000107c61574(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[1]);
  return;
}



/* Entry: 103771d9c; end: 103771df7;  */

undefined8 * FUN_103771d9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103771df8; end: 103771e33;  */

undefined8 * FUN_103771df8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103771e34; end: 103771ecb;  */

int FUN_103771e34(ulong *param_1,int param_2)

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



/* Entry: 103771ecc; end: 103771f0b;  */

void FUN_103771ecc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f90fb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc09488;
  func_0x000107c61520(&UNK_10dc09488,&UNK_110690130);
  puRam0000000112f90fb8 = puVar1;
  return;
}



/* Entry: 103771f0c; end: 103771f0f;  */

void FUN_103771f0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f90fc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc094c8;
  func_0x000107c61520(&UNK_10dc094c8,&UNK_110690130);
  puRam0000000112f90fc0 = puVar1;
  return;
}



/* Entry: 103771f10; end: 103771f4f;  */

void FUN_103771f10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f90fc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc094c8;
  func_0x000107c61520(&UNK_10dc094c8,&UNK_110690130);
  puRam0000000112f90fc0 = puVar1;
  return;
}



/* Entry: 103771f50; end: 103771f6f;  */

void FUN_103771f50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f90628 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc4aa70;
  func_0x000107c61520(&UNK_10dc4aa70,&UNK_1106c9520);
  puRam0000000112f90628 = puVar1;
  return;
}



/* Entry: 103771f70; end: 10377212b;  */

void FUN_103771f70(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  long lVar9;
  undefined8 uVar10;
  
  lVar8 = *(long *)(unaff_x22 + 0x108);
  uVar7 = *(undefined8 *)(*(long *)(unaff_x22 + 0xf0) + 0x10);
  uVar2 = 0x112f91008;
  func_0x0001000285a8(0x112f91008,&UNK_10dc09580);
  uVar3 = uVar2;
  FUN_103770688();
  func_0x000107c5f9f4(uVar7,&UNK_1106c9650,uVar2,uVar3);
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar7;
  lVar8 = *(long *)(lVar8 + 0x10);
  if (lVar8 != 0) {
    lVar6 = unaff_x22 + 0x98;
    lVar5 = unaff_x22 + 0xc0;
    lVar9 = *(long *)(unaff_x22 + 0x108) + 0x20;
    do {
      uVar10 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar7 = *(undefined8 *)(unaff_x22 + 0xf0);
      FUN_10377296c(lVar9,unaff_x22 + 0x70);
      FUN_1037729b0(unaff_x22 + 0x70,lVar6);
      func_0x0001000d224c(lVar5);
      uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
      func_0x0001000a8868(lVar5,uVar2);
      uVar4 = *(ulong *)(unaff_x22 + 0xb0);
      lVar1 = *(long *)(unaff_x22 + 0xb8);
      func_0x0001000a8868(lVar6,uVar4);
      (**(code **)(lVar1 + 0x10))(uVar4,lVar1);
      *(ulong *)(unaff_x22 + 0x40) = uVar4 & 0xff;
      *(undefined8 *)(unaff_x22 + 0x50) = 0;
      *(undefined8 *)(unaff_x22 + 0x48) = 0;
      *(undefined8 *)(unaff_x22 + 0x60) = 0;
      *(undefined8 *)(unaff_x22 + 0x58) = 0;
      *(undefined1 *)(unaff_x22 + 0x68) = 2;
      *(long *)(unaff_x22 + 0x20) = lVar6;
      *(undefined8 **)(unaff_x22 + 0x28) = (undefined8 *)(unaff_x22 + 0xe8);
      *(undefined8 *)(unaff_x22 + 0x38) = uVar10;
      *(undefined8 *)(unaff_x22 + 0x30) = uVar7;
      FUN_10377da40(unaff_x22 + 0x40,FUN_1037729c8,unaff_x22 + 0x10,uVar2,PTR___sytN_11034f1b0 + 8,
                    uVar3);
      func_0x0001000834e4(lVar5);
      func_0x0001000834e4(lVar6);
      lVar9 = lVar9 + 0x28;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x000103772128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10377212c; end: 103772853;  */

void FUN_10377212c(ulong *param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long extraout_x8;
  undefined8 *puVar12;
  ulong *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 uVar24;
  ulong uVar25;
  ulong uVar26;
  long lStack_170;
  long lStack_168;
  ulong *puStack_160;
  undefined8 uStack_158;
  long lStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  uint uStack_124;
  code *pcStack_120;
  long lStack_118;
  long lStack_110;
  ulong auStack_c0 [2];
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  byte bStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  lVar9 = 0;
  func_0x000107c614b8(0,param_5,param_4,&UNK_10e77b4f0,&UNK_10e77b4f8);
  lStack_170 = *(long *)(lVar9 + -8);
  lStack_168 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_170 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(param_5 + 0x18))(param_2,param_3,param_4,param_5);
  lStack_110 = *(long *)(param_2 + 0x10);
  if (lStack_110 != 0) {
    lStack_118 = param_2 + 0x20;
    lVar9 = 0;
    pcStack_120 = *(code **)(param_5 + 0x20);
    puStack_160 = param_1;
    uStack_158 = param_4;
    lStack_150 = param_5;
    do {
      puVar12 = (undefined8 *)(lStack_118 + lVar9 * 0x30);
      uVar25 = puVar12[1];
      uVar24 = *puVar12;
      uVar26 = puVar12[2];
      bStack_98 = (byte)puVar12[3];
      bVar6 = bStack_98;
      uStack_8f = *(undefined8 *)((long)puVar12 + 0x21);
      uStack_97 = (undefined7)*(undefined8 *)((long)puVar12 + 0x19);
      uStack_90 = (undefined1)((ulong)*(undefined8 *)((long)puVar12 + 0x19) >> 0x38);
      uVar22 = puVar12[3] & 0xff;
      uStack_78 = puVar12[4];
      uStack_70 = *(undefined1 *)(puVar12 + 5);
      uStack_b0 = uVar24;
      uStack_a8 = uVar25;
      uStack_a0 = uVar26;
      func_0x000107c61174();
      FUN_103765724(uVar25,uVar26,uVar22);
      FUN_103772a2c(&uStack_78,auStack_c0);
      puVar12 = &uStack_b0;
      (*pcStack_120)(puVar12,(long)&lStack_170 - extraout_x8,param_4,param_5);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x000107c61170(uVar24);
        func_0x00010376573c(uVar25,uVar26,uVar22);
        func_0x000103772a68(&uStack_78);
      }
      else {
        uVar19 = *param_1;
        if (*(long *)(uVar19 + 0x10) != 0) {
          func_0x000107c61434(uVar19);
          uVar14 = uVar26;
          FUN_10378de8c(uVar25,uVar26,uVar22);
          func_0x000107c6142c(uVar19);
          uVar19 = *param_1;
          if ((uVar14 & 1) != 0) {
            func_0x000107c61558();
            uVar20 = *param_1;
            uVar14 = uVar25;
            uVar21 = uVar26;
            auStack_c0[0] = uVar20;
            FUN_10378de8c(uVar25,uVar26,uVar22);
            uVar16 = (ulong)~(uint)uVar21 & 1;
            lVar11 = *(long *)(uVar20 + 0x10) + uVar16;
            if (SCARRY8(*(long *)(uVar20 + 0x10),uVar16)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x103772830);
              (*pcVar7)();
            }
            if (lVar11 <= *(long *)(uVar20 + 0x18)) {
              if ((uVar19 & 1) == 0) {
                FUN_10378ef9c();
              }
LAB_1037724e4:
              if ((uVar21 & 1) == 0) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x103772834);
                (*pcVar7)();
              }
              uStack_148 = auStack_c0[0];
              uVar16 = *(ulong *)(*(long *)(auStack_c0[0] + 0x38) + uVar14 * 8);
              uVar21 = uVar16;
              uStack_140 = uVar14;
              func_0x000107c61558();
              puVar13 = puVar12 + 8;
              uStack_138 = -1L << ((ulong)*(byte *)(puVar12 + 4) & 0x3f);
              uVar19 = 0xffffffffffffffff;
              if (-uStack_138 < 0x40) {
                uVar19 = ~(-1L << (-uStack_138 & 0x3f));
              }
              uVar19 = uVar19 & *puVar13;
              uVar14 = 0x3f - uStack_138;
              func_0x000107c61434();
              lVar11 = 0;
              uStack_130 = uVar26;
              uStack_124 = (uint)bVar6;
              do {
                uVar26 = uStack_130;
                lVar1 = lVar11;
                while (uVar19 == 0) {
                  bVar8 = SCARRY8(lVar1,1);
                  lVar1 = lVar1 + 1;
                  if (bVar8) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x10377281c);
                    (*pcVar7)();
                  }
                  if ((long)(uVar14 >> 6) <= lVar1) {
                    FUN_103772a9c(puVar12,puVar13,~uStack_138,lVar11,0);
                    func_0x000107c6142c(puVar12);
                    uVar14 = uStack_140;
                    uVar19 = uStack_148;
                    if (uVar16 == 0) {
                      FUN_103772aa4(*(long *)(uStack_148 + 0x30) + uStack_140 * 0x18);
                      func_0x00010376a934(uVar14,uVar19);
                    }
                    else {
                      *(ulong *)(*(long *)(uStack_148 + 0x38) + uStack_140 * 8) = uVar16;
                      func_0x000107c61434(uVar16);
                    }
                    param_5 = lStack_150;
                    param_4 = uStack_158;
                    param_1 = puStack_160;
                    func_0x000107c61170(uVar24);
                    func_0x00010376573c(uVar25,uVar26,uVar22);
                    func_0x000103772a68(&uStack_78);
                    func_0x000107c6142c(uVar16);
                    *param_1 = uVar19;
                    goto LAB_10377223c;
                  }
                  uVar19 = puVar13[lVar1];
                }
                uVar22 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
                uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
                uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
                uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
                uVar22 = LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) | lVar1 << 6;
                bVar6 = *(byte *)(puVar12[6] + uVar22);
                uVar23 = (ulong)bVar6;
                puVar15 = (undefined8 *)(puVar12[7] + uVar22 * 0x18);
                uVar18 = *puVar15;
                uVar22 = puVar15[1];
                uVar5 = *(undefined1 *)(puVar15 + 2);
                uVar20 = uVar22;
                func_0x00010376df2c(uVar18,uVar22,uVar5);
                uVar26 = uVar23;
                FUN_10378df40();
                uVar17 = (ulong)~(uint)uVar20 & 1;
                if (SCARRY8(*(long *)(uVar16 + 0x10),uVar17)) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x103772820);
                  (*pcVar7)();
                }
                if (*(long *)(uVar16 + 0x18) < (long)(*(long *)(uVar16 + 0x10) + uVar17)) {
                  uVar10 = (uint)uVar21 & 1;
                  func_0x00010378fe84();
                  FUN_10378df40();
                  if (((uint)uVar20 & 1) != (uVar10 & 1)) {
                    func_0x000107c60624(&UNK_110690130);
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x103772844);
                    (*pcVar7)();
                  }
                }
                else {
                  uVar23 = uVar26;
                  if ((uVar21 & 1) == 0) {
                    func_0x00010378ee28();
                  }
                }
                uVar19 = uVar19 - 1 & uVar19;
                if ((uVar20 & 1) == 0) {
                  lVar11 = uVar16 + (uVar23 >> 6) * 8;
                  *(ulong *)(lVar11 + 0x40) = *(ulong *)(lVar11 + 0x40) | 1L << (uVar23 & 0x3f);
                  *(byte *)(*(long *)(uVar16 + 0x30) + uVar23) = bVar6;
                  puVar15 = (undefined8 *)(*(long *)(uVar16 + 0x38) + uVar23 * 0x18);
                  *puVar15 = uVar18;
                  puVar15[1] = uVar22;
                  *(undefined1 *)(puVar15 + 2) = uVar5;
                  if (SCARRY8(*(long *)(uVar16 + 0x10),1)) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x103772828);
                    (*pcVar7)();
                  }
                  *(long *)(uVar16 + 0x10) = *(long *)(uVar16 + 0x10) + 1;
                }
                else {
                  puVar15 = (undefined8 *)(*(long *)(uVar16 + 0x38) + uVar23 * 0x18);
                  uVar2 = *puVar15;
                  uVar3 = puVar15[1];
                  *puVar15 = uVar18;
                  puVar15[1] = uVar22;
                  uVar4 = *(undefined1 *)(puVar15 + 2);
                  *(undefined1 *)(puVar15 + 2) = uVar5;
                  func_0x00010376df18(uVar2,uVar3,uVar4);
                }
                uVar21 = 1;
                uVar22 = (ulong)uStack_124;
                lVar11 = lVar1;
              } while( true );
            }
            FUN_103790154(lVar11,uVar19);
            uVar14 = uVar25;
            uVar19 = uVar26;
            FUN_10378de8c(uVar25,uVar26,uVar22);
            if (((uint)uVar21 & 1) == ((uint)uVar19 & 1)) goto LAB_1037724e4;
            goto LAB_103772844;
          }
        }
        func_0x000107c61558();
        uVar20 = *param_1;
        uVar14 = uVar25;
        uVar21 = uVar26;
        auStack_c0[0] = uVar20;
        FUN_10378de8c(uVar25,uVar26,uVar22);
        uVar16 = (ulong)~(uint)uVar21 & 1;
        lVar11 = *(long *)(uVar20 + 0x10) + uVar16;
        if (SCARRY8(*(long *)(uVar20 + 0x10),uVar16)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x103772824);
          (*pcVar7)();
        }
        if (*(long *)(uVar20 + 0x18) < lVar11) {
          FUN_103790154(lVar11,uVar19);
          uVar14 = uVar25;
          uVar19 = uVar26;
          FUN_10378de8c(uVar25,uVar26,uVar22);
          if (((uint)uVar21 & 1) != ((uint)uVar19 & 1)) {
LAB_103772844:
            func_0x000107c60624(&UNK_1106c9650);
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x103772854);
            (*pcVar7)();
          }
          if ((uVar21 & 1) != 0) goto LAB_103772498;
LAB_103772428:
          uVar19 = auStack_c0[0];
          lVar11 = auStack_c0[0] + (uVar14 >> 6) * 8;
          *(ulong *)(lVar11 + 0x40) = *(ulong *)(lVar11 + 0x40) | 1L << (uVar14 & 0x3f);
          puVar13 = (ulong *)(*(long *)(auStack_c0[0] + 0x30) + uVar14 * 0x18);
          *puVar13 = uVar25;
          puVar13[1] = uVar26;
          *(byte *)(puVar13 + 2) = bVar6;
          *(undefined8 **)(*(long *)(auStack_c0[0] + 0x38) + uVar14 * 8) = puVar12;
          func_0x000107c61170(uVar24);
          func_0x000103772a68(&uStack_78);
          if (SCARRY8(*(long *)(uVar19 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10377282c);
            (*pcVar7)();
          }
          *(long *)(uVar19 + 0x10) = *(long *)(uVar19 + 0x10) + 1;
        }
        else {
          if ((uVar19 & 1) == 0) {
            FUN_10378ef9c();
          }
          if ((uVar21 & 1) == 0) goto LAB_103772428;
LAB_103772498:
          uVar19 = auStack_c0[0];
          uVar18 = *(undefined8 *)(*(long *)(auStack_c0[0] + 0x38) + uVar14 * 8);
          *(undefined8 **)(*(long *)(auStack_c0[0] + 0x38) + uVar14 * 8) = puVar12;
          func_0x000107c61170(uVar24);
          func_0x000107c6142c(uVar18);
          func_0x00010376573c(uVar25,uVar26,uVar22);
          func_0x000103772a68(&uStack_78);
        }
        *param_1 = uVar19;
      }
LAB_10377223c:
      lVar9 = lVar9 + 1;
    } while (lVar9 != lStack_110);
  }
  (**(code **)(lStack_170 + 8))((long)&lStack_170 - extraout_x8,lStack_168);
  return;
}



/* Entry: 103772854; end: 10377285b;  */

undefined8 FUN_103772854(void)

{
  return 2;
}



/* Entry: 10377285c; end: 1037728c3;  */

void FUN_10377285c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x20;
  long unaff_x22;
  
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  plVar3 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1037728c4;
  plVar3[0x20] = lVar1;
  plVar3[0x21] = lVar2;
  plVar3[0x1e] = param_1;
  plVar3[0x1f] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103771f70,0,0);
  return;
}



/* Entry: 1037728c4; end: 103772907;  */

void FUN_1037728c4(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103772904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 103772908; end: 10377292b;  */

void FUN_103772908(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10377292c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10377292c; end: 10377296b;  */

void FUN_10377292c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91000 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc09540;
  func_0x000107c61520(&DAT_10dc09540,&UNK_110690200);
  puRam0000000112f91000 = puVar1;
  return;
}



/* Entry: 10377296c; end: 1037729af;  */

long FUN_10377296c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1037729b0; end: 1037729c7;  */

undefined8 * FUN_1037729b0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1037729c8; end: 103772a2b;  */

void FUN_1037729c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(lVar6 + 0x18);
  uVar5 = *(undefined8 *)(lVar6 + 0x20);
  func_0x0001000a8868(lVar6,uVar2);
  FUN_10377212c(uVar3,uVar1,uVar4,uVar2,uVar5,lVar6);
  return;
}



/* Entry: 103772a2c; end: 103772a9b;  */

undefined8 FUN_103772a2c(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_103aa7878)(param_2,param_1);
  return param_2;
}



/* Entry: 103772a9c; end: 103772aa3;  */

void FUN_103772a9c(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 103772aa4; end: 103772ad7;  */

undefined8 FUN_103772aa4(undefined8 param_1)

{
  (*(code *)&DAT_103aa7678)();
  return param_1;
}



/* Entry: 103772ad8; end: 103772b17;  */

undefined8 * FUN_103772ad8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6157c();
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 103772b18; end: 103772beb;  */

undefined * FUN_103772b18(undefined8 param_1,undefined8 param_2,char param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  
  if (param_3 != '\x02') {
    return (undefined *)0x0;
  }
  lVar4 = *(long *)(param_4 + 0x10);
  func_0x000107c61174();
  if (lVar4 != 0) {
    uVar2 = 0x53746361746e6f63;
    func_0x0001000f66f0(0x53746361746e6f63,0xec00000065726f63,param_4);
    if ((uVar2 & 1) == 0) {
      func_0x000107c61170(param_2);
      return PTR___swiftEmptyDictionarySingleton_11034f1d0;
    }
  }
  func_0x000107c519c8(param_2);
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  func_0x000107c61558(PTR___swiftEmptyDictionarySingleton_11034f1d0);
  FUN_10377c65c(param_1,0,1,0x36,puVar3);
  func_0x000107c61170(param_2);
  return puVar1;
}



/* Entry: 103772bec; end: 103772c13;  */

undefined1  [16] FUN_103772bec(void)

{
  return ZEXT816(0x110690278);
}



/* Entry: 103772c14; end: 103772ca7;  */

/* WARNING: Possible PIC construction at 0x000103772c48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103772c4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103772c14(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(*unaff_x20 + _DAT_112fe2268));
  return;
}



/* Entry: 103772ca8; end: 103772ce3;  */

void FUN_103772ca8(long param_1,undefined8 *param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  FUN_103772ce4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                *(undefined1 *)(param_1 + 0x18),&uStack_40);
  return;
}



/* Entry: 103772ce4; end: 103772f13;  */

undefined * FUN_103772ce4(ulong param_1,undefined8 param_2,byte param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar6 = param_4[4];
  if (*(long *)(lVar6 + 0x10) == 0) {
    uVar1 = *(undefined1 *)(param_4 + 1);
    puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    func_0x000107c61558(PTR___swiftEmptyDictionarySingleton_11034f1d0);
    FUN_10377c65c(uVar1,0,2,0x34,puVar3);
    if ((param_3 < 3) && (func_0x0001000f66f0(param_1,param_2,*param_4), (param_1 & 1) != 0)) {
      puVar3 = puVar5;
      func_0x000107c61558(puVar5);
      FUN_10377c65c(1,0,2,0x33,puVar3);
    }
    if (*(char *)(param_4 + 3) == '\x01') {
      return puVar5;
    }
    lVar4 = param_4[2];
  }
  else {
    uVar2 = 0x7355736e654c7369;
    func_0x0001000f66f0(0x7355736e654c7369,0xea00000000006465,lVar6);
    puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    if ((uVar2 & 1) != 0) {
      uVar1 = *(undefined1 *)(param_4 + 1);
      puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      func_0x000107c61558(PTR___swiftEmptyDictionarySingleton_11034f1d0);
      FUN_10377c65c(uVar1,0,2,0x34,puVar3);
    }
    if ((param_3 < 3) && (func_0x0001000f66f0(param_1,param_2,*param_4), (param_1 & 1) != 0)) {
      uVar2 = 0x6f69746e654d7369;
      func_0x0001000f66f0(0x6f69746e654d7369,0xeb0000000064656e,lVar6);
      if ((uVar2 & 1) != 0) {
        puVar3 = puVar5;
        func_0x000107c61558(puVar5);
        FUN_10377c65c(1,0,2,0x33,puVar3);
      }
    }
    if (*(char *)(param_4 + 3) == '\x01') {
      return puVar5;
    }
    lVar4 = param_4[2];
    uVar2 = 0x72756f5370616e73;
    func_0x0001000f66f0(0x72756f5370616e73,0xea00000000006563,lVar6);
    if ((uVar2 & 1) == 0) {
      return puVar5;
    }
  }
  puVar3 = puVar5;
  func_0x000107c61558(puVar5);
  FUN_10377c65c((double)lVar4,0,1,0x35,puVar3);
  return puVar5;
}



/* Entry: 103772f14; end: 103772fbb;  */

long FUN_103772f14(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103772fbc; end: 10377302f;  */

undefined8 * FUN_103772fbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar1;
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103773030; end: 10377308b;  */

undefined8 * FUN_103773030(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10377308c; end: 10377312b;  */

int FUN_10377308c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[5] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10377312c; end: 10377318f;  */

void FUN_10377312c(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 103773190; end: 1037731f3;  */

undefined8 * FUN_103773190(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 1037731f4; end: 103773237;  */

undefined8 * FUN_1037731f4(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 103773238; end: 1037732cf;  */

int FUN_103773238(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1037732d0; end: 1037735bb;  */

void FUN_1037732d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  func_0x000107c5eea0();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_6 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    uVar14 = param_6;
    func_0x000107c43ec8();
    func_0x000107c61180();
    func_0x000107c615e8(param_6);
    uVar10 = 0x112d6dfd0;
    func_0x0001000285a8(0x112d6dfd0,&UNK_10db63bd0);
    uVar3 = uVar14;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar14);
    if (uVar3 >> 0x3e == 0) {
      uVar14 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
      puVar12 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    }
    else {
      uVar14 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar14 = uVar3;
      }
      func_0x000107c60480();
      puVar12 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    }
    PTR___swiftEmptyDictionarySingleton_11034f1d0 = puVar12;
    if (uVar14 != 0) {
      uVar15 = 0;
      do {
        if ((uVar3 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103773538);
            (*pcVar2)();
          }
          uVar16 = *(ulong *)(uVar3 + uVar15 * 8 + 0x20);
          func_0x000107c615f0(uVar16);
          uVar9 = uVar10;
        }
        else {
          uVar16 = uVar15;
          uVar9 = uVar3;
          func_0x000101bcb3d0();
        }
        if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103773534);
          (*pcVar2)();
        }
        uVar13 = uVar15 + 1;
        uVar10 = uVar16;
        func_0x000107c444fc();
        func_0x000107c61180();
        if (uVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1037735ac);
          (*pcVar2)();
        }
        uVar4 = uVar10;
        func_0x000107c5faec();
        func_0x000107c61170(uVar10);
        func_0x000107c615f0(uVar16);
        puVar5 = puVar12;
        func_0x000107c61558();
        uVar6 = uVar4;
        uVar8 = uVar9;
        func_0x000100029284();
        uVar10 = (ulong)~(uint)uVar8 & 1;
        lVar7 = *(long *)(puVar12 + 0x10) + uVar10;
        if (SCARRY8(*(long *)(puVar12 + 0x10),uVar10)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10377353c);
          (*pcVar2)();
        }
        if (*(long *)(puVar12 + 0x18) < lVar7) {
          func_0x00010378fbe8(lVar7,puVar5);
          uVar6 = uVar4;
          uVar10 = uVar9;
          func_0x000100029284();
          if (((uint)uVar8 & 1) != ((uint)uVar10 & 1)) {
            func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1037735bc);
            (*pcVar2)();
          }
LAB_10377349c:
          if ((uVar8 & 1) != 0) goto LAB_103773390;
LAB_1037734a4:
          *(ulong *)(puVar12 + (uVar6 >> 6) * 8 + 0x40) =
               *(ulong *)(puVar12 + (uVar6 >> 6) * 8 + 0x40) | 1L << (uVar6 & 0x3f);
          puVar1 = (ulong *)(*(long *)(puVar12 + 0x30) + uVar6 * 0x10);
          *puVar1 = uVar4;
          puVar1[1] = uVar9;
          *(ulong *)(*(long *)(puVar12 + 0x38) + uVar6 * 8) = uVar16;
          func_0x000107c615e8(uVar16);
          if (SCARRY8(*(long *)(puVar12 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103773540);
            (*pcVar2)();
          }
          *(long *)(puVar12 + 0x10) = *(long *)(puVar12 + 0x10) + 1;
        }
        else {
          uVar10 = uVar8;
          if (((ulong)puVar5 & 1) != 0) goto LAB_10377349c;
          FUN_10378ecb8();
          if ((uVar8 & 1) == 0) goto LAB_1037734a4;
LAB_103773390:
          uVar11 = *(undefined8 *)(*(long *)(puVar12 + 0x38) + uVar6 * 8);
          *(ulong *)(*(long *)(puVar12 + 0x38) + uVar6 * 8) = uVar16;
          func_0x000107c6142c(uVar9);
          func_0x000107c615e8(uVar16);
          func_0x000107c615e8(uVar11);
        }
        uVar15 = uVar15 + 1;
      } while (uVar13 != uVar14);
    }
    func_0x000107c6142c(uVar3);
  }
  lVar7 = 0;
  FUN_103773bec();
  *(undefined **)(param_1 + *(int *)(lVar7 + 0x14)) = puVar12;
  *(undefined8 *)(param_1 + *(int *)(lVar7 + 0x18)) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 1037735bc; end: 1037735e3;  */

undefined8 FUN_1037735bc(void)

{
  return 4;
}



/* Entry: 1037735e4; end: 103773beb;  */

undefined *
FUN_1037735e4(double param_1,long param_2,char param_3,ulong param_4,undefined8 param_5,
             undefined8 param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar15 = 0x112d373d8;
  puVar7 = &UNK_10d9014c0;
  uStack_78 = param_5;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
  lVar5 = (long)&lStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar5 - extraout_x12;
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar14 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar14 - extraout_x12_00;
  if (param_3 != '\x01') {
    return (undefined *)0x0;
  }
  lVar2 = 0;
  uStack_88 = param_6;
  lStack_80 = lVar1;
  FUN_103773bec();
  lVar13 = *(long *)(param_4 + (long)*(int *)(lVar2 + 0x18));
  lVar1 = *(long *)(lVar13 + 0x10);
  func_0x000107c61174();
  lStack_70 = param_2;
  func_0x000107c4e04c();
  func_0x000107c61180();
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (lVar1 == 0) {
    if (param_2 != 0) {
      lVar1 = param_2;
      func_0x000107c40808();
      func_0x000107c61170(param_2);
      puVar4 = puVar6;
      param_1 = (double)lVar1;
      func_0x000107c61558(puVar6);
      puStack_68 = puVar6;
      puVar7 = (undefined *)0x0;
      FUN_10377c65c((double)lVar1,0,1,0x19,puVar4);
      puVar6 = puStack_68;
    }
    lVar1 = lStack_70;
    lVar2 = *(long *)(param_4 + (long)*(int *)(lVar2 + 0x14));
    if (lVar2 != 0) {
      lVar14 = lStack_70;
      func_0x000107c444fc();
      func_0x000107c61180();
      lVar5 = lVar14;
      func_0x000107c5faec();
      func_0x000107c61170(lVar14);
      if (*(long *)(lVar2 + 0x10) == 0) {
        func_0x000107c61170(lVar1);
        func_0x000107c6142c(puVar7);
        return puVar6;
      }
      func_0x000107c61434(lVar2);
      puVar4 = puVar7;
      func_0x000100029284();
      if (((ulong)puVar4 & 1) != 0) {
        uVar10 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + lVar5 * 8);
        func_0x000107c615f0(uVar10);
        func_0x000107c6142c(puVar7);
        func_0x000107c6142c(lVar2);
        uVar12 = uVar10;
        func_0x000107c614f0(uVar10);
        FUN_10376d478(param_4,uVar12);
        puVar7 = puVar6;
        func_0x000107c61558(puVar6);
        puStack_68 = puVar6;
        FUN_10377c65c(param_4 & 1,0,2,0x1a,puVar7);
        puVar7 = puStack_68;
        FUN_10376d614(lVar11,uStack_78,uStack_88,uVar12);
        lVar2 = lStack_80;
        lVar14 = lVar11;
        (**(code **)(lVar9 + 0x30))(lVar11,1,lStack_80);
        if ((int)lVar14 == 1) {
          func_0x000107c615e8(uVar10);
          func_0x000107c61170(lVar1);
          func_0x0001000d1dcc(lVar11);
          return puVar7;
        }
        (**(code **)(lVar9 + 0x20))(lVar15,lVar11,lVar2);
        func_0x000107c5ee68(lVar15);
        puVar6 = puVar7;
        func_0x000107c61558(puVar7);
        puStack_68 = puVar7;
        FUN_10377c65c(param_1,0,1,0x1b,puVar6);
        func_0x000107c615e8(uVar10);
        func_0x000107c61170(lVar1);
        pcVar8 = *(code **)(lVar9 + 8);
LAB_103773ba0:
        puVar7 = puStack_68;
        (*pcVar8)(lVar15,lVar2);
        return puVar7;
      }
      func_0x000107c61170(lVar1);
LAB_103773a90:
      func_0x000107c6142c(puVar7);
      func_0x000107c6142c(lVar2);
      return puVar6;
    }
  }
  else {
    if (param_2 != 0) {
      lVar15 = param_2;
      func_0x000107c40808();
      func_0x000107c61170(param_2);
      uVar3 = 0x7a695370756f7267;
      puVar7 = (undefined *)0xe900000000000065;
      func_0x0001000f66f0(0x7a695370756f7267,0xe900000000000065,lVar13);
      puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      if ((uVar3 & 1) != 0) {
        puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
        param_1 = (double)lVar15;
        func_0x000107c61558(PTR___swiftEmptyDictionarySingleton_11034f1d0);
        puStack_68 = puVar6;
        puVar7 = (undefined *)0x0;
        FUN_10377c65c((double)lVar15,0,1,0x19,puVar4);
        puVar6 = puStack_68;
      }
    }
    lVar15 = lStack_70;
    lVar2 = *(long *)(param_4 + (long)*(int *)(lVar2 + 0x14));
    if (lVar2 != 0) {
      lVar1 = lStack_70;
      lStack_90 = lVar9;
      func_0x000107c444fc();
      func_0x000107c61180();
      lVar9 = lVar1;
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
      if (*(long *)(lVar2 + 0x10) == 0) {
        func_0x000107c61170(lVar15);
        func_0x000107c6142c(puVar7);
        return puVar6;
      }
      func_0x000107c61434(lVar2);
      puVar4 = puVar7;
      func_0x000100029284();
      if (((ulong)puVar4 & 1) == 0) {
        func_0x000107c61170(lStack_70);
        goto LAB_103773a90;
      }
      uVar12 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + lVar9 * 8);
      func_0x000107c615f0(uVar12);
      func_0x000107c6142c(puVar7);
      func_0x000107c6142c(lVar2);
      uVar3 = 0x4d70756f72477369;
      func_0x0001000f66f0(0x4d70756f72477369,0xec00000064657475,lVar13);
      if ((uVar3 & 1) != 0) {
        uVar10 = uVar12;
        func_0x000107c614f0(uVar12);
        FUN_10376d478(param_4,uVar10);
        puVar7 = puVar6;
        func_0x000107c61558(puVar6);
        puStack_68 = puVar6;
        FUN_10377c65c(param_4 & 1,0,2,0x1a,puVar7);
        puVar6 = puStack_68;
      }
      lVar15 = lStack_90;
      uVar10 = uVar12;
      func_0x000107c614f0(uVar12);
      FUN_10376d614(lVar5,uStack_78,uStack_88,uVar10);
      lVar2 = lStack_80;
      lVar1 = lVar5;
      (**(code **)(lVar15 + 0x30))(lVar5,1,lStack_80);
      if ((int)lVar1 == 1) {
        func_0x000107c615e8(uVar12);
        func_0x000107c61170(lStack_70);
        func_0x0001000d1dcc(lVar5);
        return puVar6;
      }
      (**(code **)(lVar15 + 0x20))(lVar14,lVar5,lVar2);
      uVar3 = 0;
      func_0x0001000f66f0(0x674164656e696f6a,0xe900000000000065,lVar13);
      if ((uVar3 & 1) != 0) {
        func_0x000107c5ee68(lVar14);
        puVar7 = puVar6;
        func_0x000107c61558(puVar6);
        puStack_68 = puVar6;
        FUN_10377c65c(param_1,0,1,0x1b,puVar7);
        func_0x000107c615e8(uVar12);
        func_0x000107c61170(lStack_70);
        pcVar8 = *(code **)(lVar15 + 8);
        lVar15 = lVar14;
        goto LAB_103773ba0;
      }
      (**(code **)(lVar15 + 8))(lVar14,lVar2);
      func_0x000107c615e8(uVar12);
    }
  }
  func_0x000107c61170(lStack_70);
  return puVar6;
}



/* Entry: 103773bec; end: 103773c23;  */

void FUN_103773bec(undefined8 param_1)

{
  if (lRam0000000112f910e0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e77b534);
  return;
}



/* Entry: 103773c24; end: 103773cbf;  */

long * FUN_103773c24(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    lVar3 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
    iVar1 = *(int *)(param_3 + 0x18);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar5 = *(undefined8 *)((long)param_2 + (long)iVar1);
    *(undefined8 *)((long)param_1 + (long)iVar1) = uVar5;
    func_0x000107c61434();
    func_0x000107c61434(uVar5);
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar4 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar3 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 103773cc0; end: 103773d0f;  */

/* WARNING: Possible PIC construction at 0x000103773cf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103773cfc) */

void FUN_103773cc0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14)));
  return;
}



/* Entry: 103773d10; end: 103773ee3;  */

long FUN_103773d10(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
  iVar1 = *(int *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar3 = *(undefined8 *)(param_2 + iVar1);
  *(undefined8 *)(param_1 + iVar1) = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 103773ee4; end: 103773efb;  */

void FUN_103773ee4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103773efc; end: 103773f7b;  */

void FUN_103773efc(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10dc09650;
    puStack_28 = PTR___sBbWV_11034d660 + 0x40;
    func_0x000107c6153c(param_1,0x100,3,&lStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 103773f7c; end: 103773f93;  */

undefined8 * FUN_103773f7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  func_0x000107c61434();
  func_0x000107c61174(uVar1);
  return param_1;
}



/* Entry: 103773f94; end: 10377409b;  */

/* WARNING: Removing unreachable block (ram,0x000103774094) */

void FUN_103773f94(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_38 [8];
  
  lVar2 = unaff_x20;
  func_0x000107c4313c();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103774090);
    (*pcVar1)();
  }
  uVar3 = 0;
  func_0x0001037758c0(0);
  lVar4 = lVar2;
  func_0x000107c5f9e8(lVar2,PTR___sSSN_11034da80,uVar3,PTR___sSSSHsWP_11034da90);
  func_0x000107c61170(lVar2);
  func_0x000107c4313c();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103774094);
    (*pcVar1)();
  }
  lVar2 = unaff_x20;
  func_0x000107c5f9e8();
  func_0x000107c61170(unaff_x20);
  func_0x000107c61558(lVar4);
  FUN_10377417c(lVar2,FUN_103774148,0,lVar4,auStack_38);
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 10377409c; end: 1037740a3;  */

undefined8 FUN_10377409c(void)

{
  return 7;
}



/* Entry: 1037740a4; end: 103774133;  */

void FUN_1037740a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  
  lVar3 = *unaff_x20;
  func_0x000107c5eea0();
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar2 = 0;
  FUN_103775888();
  iVar1 = *(int *)(lVar2 + 0x14);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar3;
    func_0x000107c614f0();
    FUN_103773f94();
    func_0x000107c615e8(lVar3);
  }
  *(long *)(param_1 + iVar1) = lVar4;
  *(undefined8 *)(param_1 + *(int *)(lVar2 + 0x18)) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 103774134; end: 103774147;  */

undefined * FUN_103774134(undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  long extraout_x12_11;
  long extraout_x12_12;
  long extraout_x12_13;
  long extraout_x12_14;
  long extraout_x12_15;
  long extraout_x12_16;
  long extraout_x12_17;
  long extraout_x12_18;
  long extraout_x12_19;
  long extraout_x12_20;
  long extraout_x12_21;
  long extraout_x12_22;
  long extraout_x12_23;
  long extraout_x12_24;
  long extraout_x12_25;
  long extraout_x12_26;
  long extraout_x12_27;
  long extraout_x12_28;
  long extraout_x12_29;
  long extraout_x12_30;
  long extraout_x12_31;
  long extraout_x12_32;
  long extraout_x12_33;
  long extraout_x12_34;
  long extraout_x12_35;
  long extraout_x12_36;
  long extraout_x12_37;
  long extraout_x13;
  undefined8 extraout_x14;
  undefined8 extraout_x15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  lStack_88 = *(long *)(param_2 + 8);
  uStack_80 = *(ulong *)(param_2 + 0x10);
  bVar1 = *(byte *)(param_2 + 0x18);
  lVar2 = 0;
  func_0x000107c5eea4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar25 = (long)&lStack_1a0 + (-extraout_x12 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar25 - extraout_x12_00;
  lVar17 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (lVar7 - extraout_x12_01) - extraout_x12_02;
  lVar18 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_03;
  lVar7 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_04;
  lVar15 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_05;
  lVar13 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_06;
  lStack_b8 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_07;
  lStack_90 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_08;
  lStack_c0 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_09;
  lStack_98 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_10;
  lStack_c8 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_11;
  lStack_a0 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_12;
  lStack_d0 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_13;
  lStack_a8 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_14;
  lStack_d8 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_15;
  lStack_b0 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar10 - extraout_x12_17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar19 - extraout_x12_18;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = (lVar19 - extraout_x12_18) - extraout_x12_19;
  lVar12 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_20;
  lStack_e8 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_21;
  lStack_e0 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_22;
  lStack_f8 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_23;
  lStack_f0 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_24;
  lStack_108 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_25;
  lStack_100 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_26;
  lStack_118 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_27;
  lStack_110 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_28;
  lStack_128 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_29;
  lStack_120 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_30;
  lStack_138 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_31;
  lStack_130 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_32;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_140 = lVar11 - extraout_x12_33;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = (lVar11 - extraout_x12_33) - extraout_x12_34;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar21 - extraout_x12_35;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar22 = lVar20 - extraout_x12_36;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar23 = lVar22 - extraout_x12_37;
  if (2 < bVar1) {
    return (undefined *)0x0;
  }
  lVar3 = 0;
  lStack_1a0 = lVar14;
  lStack_198 = lVar12;
  lStack_190 = lVar15;
  lStack_188 = lVar13;
  lStack_180 = lVar18;
  lStack_178 = lVar7;
  lStack_170 = lVar17;
  uStack_168 = extraout_x15;
  uStack_160 = extraout_x14;
  lStack_158 = lVar2;
  lStack_150 = extraout_x13;
  FUN_103775888();
  lVar17 = *(long *)(param_3 + *(int *)(lVar3 + 0x14));
  if (lVar17 == 0) {
    return (undefined *)0x0;
  }
  if (*(long *)(lVar17 + 0x10) == 0) {
    return (undefined *)0x0;
  }
  lStack_148 = param_3;
  func_0x000107c61434(lVar17);
  lVar7 = lStack_88;
  uVar4 = uStack_80;
  func_0x000100029284();
  if ((uVar4 & 1) == 0) {
    func_0x000107c6142c(lVar17);
    return (undefined *)0x0;
  }
  uVar4 = *(ulong *)(*(long *)(lVar17 + 0x38) + lVar7 * 8);
  lStack_88 = lVar25;
  func_0x000107c61174();
  func_0x000107c6142c(lVar17);
  puStack_70 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar7 = *(long *)(lStack_148 + *(int *)(lVar3 + 0x18));
  lVar18 = *(long *)(lVar7 + 0x10);
  uStack_80 = uVar4;
  func_0x000107c4a99c();
  func_0x000107c61180();
  lVar17 = lStack_158;
  puVar16 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (lVar18 == 0) {
    lVar7 = lStack_150;
    if (uVar4 != 0) {
      func_0x000107c5ee94(lVar22);
      func_0x000107c61170(uVar4);
      (**(code **)(lStack_150 + 0x20))(lVar23,lVar22,lVar17);
      func_0x000107c5ee68(lVar23);
      puVar5 = puVar16;
      uVar6 = param_1;
      func_0x000107c61558(puVar16);
      puStack_78 = puVar16;
      FUN_10377c65c(param_1,0,1,0x28,puVar5);
      puVar16 = puStack_78;
      puStack_70 = puStack_78;
      (**(code **)(lStack_150 + 8))(lVar23,lVar17);
      lVar7 = lStack_150;
      param_1 = uVar6;
    }
    uVar24 = uStack_80;
    uVar4 = uStack_80;
    func_0x000107c4a9a0();
    func_0x000107c61180();
    uVar6 = param_1;
    if (uVar4 != 0) {
      func_0x000107c5ee94(lVar21);
      func_0x000107c61170(uVar4);
      (**(code **)(lVar7 + 0x20))(lVar20,lVar21,lVar17);
      func_0x000107c5ee68(lVar20);
      puVar5 = puVar16;
      uVar6 = param_1;
      func_0x000107c61558(puVar16);
      puStack_78 = puVar16;
      FUN_10377c65c(param_1,0,1,0x29,puVar5);
      puVar16 = puStack_78;
      puStack_70 = puStack_78;
      (**(code **)(lVar7 + 8))(lVar20,lVar17);
    }
    uVar4 = uVar24;
    func_0x000107c4a9a4();
    func_0x000107c61180();
    uVar8 = uVar6;
    if (uVar4 != 0) {
      func_0x000107c5ee94(lVar11);
      func_0x000107c61170(uVar4);
      lVar18 = lStack_140;
      (**(code **)(lVar7 + 0x20))(lStack_140,lVar11,lVar17);
      func_0x000107c5ee68(lVar18);
      puVar5 = puVar16;
      uVar8 = uVar6;
      func_0x000107c61558(puVar16);
      puStack_78 = puVar16;
      FUN_10377c65c(uVar6,0,1,0x2a,puVar5);
      puVar16 = puStack_78;
      puStack_70 = puStack_78;
      (**(code **)(lVar7 + 8))(lVar18,lVar17);
    }
    uVar4 = uVar24;
    func_0x000107c4a9a8();
    func_0x000107c61180();
    lVar18 = lStack_138;
    uVar6 = uVar8;
    if (uVar4 != 0) {
      func_0x000107c5ee94(lStack_138);
      func_0x000107c61170(uVar4);
      lVar12 = lStack_130;
      (**(code **)(lVar7 + 0x20))(lStack_130,lVar18,lVar17);
      func_0x000107c5ee68(lVar12);
      puVar5 = puVar16;
      uVar6 = uVar8;
      func_0x000107c61558(puVar16);
      puStack_78 = puVar16;
      FUN_10377c65c(uVar8,0,1,0x2b,puVar5);
      puVar16 = puStack_78;
      puStack_70 = puStack_78;
      (**(code **)(lVar7 + 8))(lVar12,lVar17);
    }
    uVar4 = uVar24;
    func_0x000107c4a9b0();
    func_0x000107c61180();
    lVar18 = lStack_128;
    uVar8 = uVar6;
    if (uVar4 != 0) {
      func_0x000107c5ee94(lStack_128);
      func_0x000107c61170(uVar4);
      lVar12 = lStack_120;
      (**(code **)(lVar7 + 0x20))(lStack_120,lVar18,lVar17);
      func_0x000107c5ee68(lVar12);
      puVar5 = puVar16;
      uVar8 = uVar6;
      func_0x000107c61558(puVar16);
      puStack_78 = puVar16;
      FUN_10377c65c(uVar6,0,1,0x2c,puVar5);
      puVar16 = puStack_78;
      puStack_70 = puStack_78;
      (**(code **)(lVar7 + 8))(lVar12,lVar17);
    }
    uVar4 = uVar24;
    func_0x000107c4aa74();
    func_0x000107c61180();
    lVar18 = lStack_118;
    uVar6 = uVar8;
    if (uVar4 != 0) {
      func_0x000107c5ee94(lStack_118);
      func_0x000107c61170(uVar4);
      lVar12 = lStack_110;
      (**(code **)(lVar7 + 0x20))(lStack_110,lVar18,lVar17);
      func_0x000107c5ee68(lVar12);
      puVar5 = puVar16;
      uVar6 = uVar8;
      func_0x000107c61558(puVar16);
      puStack_78 = puVar16;
      FUN_10377c65c(uVar8,0,1,0x2d,puVar5);
      puVar16 = puStack_78;
      puStack_70 = puStack_78;
      (**(code **)(lVar7 + 8))(lVar12,lVar17);
    }
    uVar4 = uVar24;
    func_0x000107c4aa60();
    func_0x000107c61180();
    lVar18 = lStack_108;
    uVar8 = uVar6;
    if (uVar4 != 0) {
      func_0x000107c5ee94(lStack_108);
      func_0x000107c61170(uVar4);
      lVar12 = lStack_100;
      (**(code **)(lVar7 + 0x20))(lStack_100,lVar18,lVar17);
      func_0x000107c5ee68(lVar12);
      puVar5 = puVar16;
      uVar8 = uVar6;
      func_0x000107c61558(puVar16);
      puStack_78 = puVar16;
      FUN_10377c65c(uVar6,0,1,0x2e,puVar5);
      puVar16 = puStack_78;
      puStack_70 = puStack_78;
      (**(code **)(lVar7 + 8))(lVar12,lVar17);
    }
    uVar4 = uVar24;
    func_0x000107c4aa64();
    func_0x000107c61180();
    lVar18 = lStack_f8;
    uVar6 = uVar8;
    if (uVar4 != 0) {
      func_0x000107c5ee94(lStack_f8);
      func_0x000107c61170(uVar4);
      lVar12 = lStack_f0;
      (**(code **)(lVar7 + 0x20))(lStack_f0,lVar18,lVar17);
      func_0x000107c5ee68(lVar12);
      puVar5 = puVar16;
      uVar6 = uVar8;
      func_0x000107c61558(puVar16);
      puStack_78 = puVar16;
      FUN_10377c65c(uVar8,0,1,0x2f,puVar5);
      puVar16 = puStack_78;
      puStack_70 = puStack_78;
      (**(code **)(lVar7 + 8))(lVar12,lVar17);
    }
    uVar4 = uVar24;
    func_0x000107c4aa68();
    func_0x000107c61180();
    lVar18 = lStack_e8;
    uVar8 = uVar6;
    if (uVar4 != 0) {
      func_0x000107c5ee94(lStack_e8);
      func_0x000107c61170(uVar4);
      lVar12 = lStack_e0;
      (**(code **)(lVar7 + 0x20))(lStack_e0,lVar18,lVar17);
      func_0x000107c5ee68(lVar12);
      puVar5 = puVar16;
      uVar8 = uVar6;
      func_0x000107c61558(puVar16);
      puStack_78 = puVar16;
      FUN_10377c65c(uVar6,0,1,0x30,puVar5);
      puVar16 = puStack_78;
      puStack_70 = puStack_78;
      (**(code **)(lVar7 + 8))(lVar12,lVar17);
    }
    uVar4 = uVar24;
    func_0x000107c4aa6c();
    func_0x000107c61180();
    lVar18 = lStack_1a0;
    if (uVar4 != 0) {
      func_0x000107c5ee94(lStack_1a0);
      func_0x000107c61170(uVar4);
      lVar12 = lStack_198;
      (**(code **)(lVar7 + 0x20))(lStack_198,lVar18,lVar17);
      func_0x000107c5ee68(lVar12);
      puVar5 = puVar16;
      func_0x000107c61558(puVar16);
      puStack_78 = puVar16;
      FUN_10377c65c(uVar8,0,1,0x31,puVar5);
      puStack_70 = puStack_78;
      (**(code **)(lVar7 + 8))(lVar12,lVar17);
    }
  }
  else {
    lVar18 = lStack_88;
    lVar12 = lStack_150;
    uVar24 = uStack_80;
    if (uVar4 != 0) {
      func_0x000107c5ee94(lVar10);
      func_0x000107c61170(uVar4);
      (**(code **)(lStack_150 + 0x20))(lVar19,lVar10,lVar17);
      uVar4 = 0xd000000000000021;
      func_0x0001000f66f0(0xd000000000000021,0x800000010f163d20,lVar7);
      uVar24 = uStack_80;
      lVar18 = lStack_88;
      puVar16 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      if ((uVar4 & 1) != 0) {
        func_0x000107c5ee68(lVar19);
        puVar5 = puVar16;
        uVar6 = param_1;
        func_0x000107c61558(puVar16);
        puStack_78 = puVar16;
        FUN_10377c65c(param_1,0,1,0x28,puVar5);
        puStack_70 = puStack_78;
        puVar16 = puStack_78;
        param_1 = uVar6;
      }
      (**(code **)(lStack_150 + 8))(lVar19,lVar17);
      lVar12 = lStack_150;
    }
    uVar4 = uVar24;
    func_0x000107c4a9a0();
    func_0x000107c61180();
    lVar13 = lStack_d8;
    if (uVar4 != 0) {
      func_0x000107c5ee94(lStack_d8);
      func_0x000107c61170(uVar4);
      lVar14 = lStack_b0;
      (**(code **)(lVar12 + 0x20))(lStack_b0,lVar13,lVar17);
      uVar4 = 0xd000000000000015;
      func_0x0001000f66f0(0xd000000000000015,0x800000010f163d00,lVar7);
      if ((uVar4 & 1) != 0) {
        func_0x000107c5ee68(lVar14);
        puVar5 = puVar16;
        uVar6 = param_1;
        func_0x000107c61558(puVar16);
        puStack_78 = puVar16;
        FUN_10377c65c(param_1,0,1,0x29,puVar5);
        puStack_70 = puStack_78;
        puVar16 = puStack_78;
        lVar14 = lStack_b0;
        param_1 = uVar6;
      }
      (**(code **)(lVar12 + 8))(lVar14,lVar17);
    }
    uVar4 = uVar24;
    func_0x000107c4a9a4();
    func_0x000107c61180();
    lVar13 = lStack_d0;
    if (uVar4 != 0) {
      func_0x000107c5ee94(lStack_d0);
      func_0x000107c61170(uVar4);
      lVar14 = lStack_a8;
      (**(code **)(lVar12 + 0x20))(lStack_a8,lVar13,lVar17);
      uVar4 = 0xd000000000000021;
      func_0x0001000f66f0(0xd000000000000021,0x800000010f163cd0,lVar7);
      if ((uVar4 & 1) != 0) {
        func_0x000107c5ee68(lVar14);
        puVar5 = puVar16;
        uVar6 = param_1;
        func_0x000107c61558(puVar16);
        puStack_78 = puVar16;
        FUN_10377c65c(param_1,0,1,0x2a,puVar5);
        puStack_70 = puStack_78;
        puVar16 = puStack_78;
        lVar14 = lStack_a8;
        param_1 = uVar6;
      }
      (**(code **)(lVar12 + 8))(lVar14,lVar17);
    }
    uVar4 = uVar24;
    func_0x000107c4a9a8();
    func_0x000107c61180();
    lVar13 = lStack_c8;
    if (uVar4 != 0) {
      func_0x000107c5ee94(lStack_c8);
      func_0x000107c61170(uVar4);
      lVar14 = lStack_a0;
      (**(code **)(lVar12 + 0x20))(lStack_a0,lVar13,lVar17);
      uVar4 = 0xd000000000000015;
      func_0x0001000f66f0(0xd000000000000015,0x800000010f163cb0,lVar7);
      if ((uVar4 & 1) != 0) {
        func_0x000107c5ee68(lVar14);
        puVar5 = puVar16;
        uVar6 = param_1;
        func_0x000107c61558(puVar16);
        puStack_78 = puVar16;
        FUN_10377c65c(param_1,0,1,0x2b,puVar5);
        puStack_70 = puStack_78;
        puVar16 = puStack_78;
        lVar14 = lStack_a0;
        param_1 = uVar6;
      }
      (**(code **)(lVar12 + 8))(lVar14,lVar17);
    }
    uVar4 = uVar24;
    func_0x000107c4a9b0();
    func_0x000107c61180();
    lVar13 = lStack_c0;
    if (uVar4 != 0) {
      func_0x000107c5ee94(lStack_c0);
      func_0x000107c61170(uVar4);
      lVar14 = lStack_98;
      (**(code **)(lVar12 + 0x20))(lStack_98,lVar13,lVar17);
      uVar4 = 0xd000000000000019;
      func_0x0001000f66f0(0xd000000000000019,0x800000010f09a460,lVar7);
      if ((uVar4 & 1) != 0) {
        func_0x000107c5ee68(lVar14);
        puVar5 = puVar16;
        uVar6 = param_1;
        func_0x000107c61558(puVar16);
        puStack_78 = puVar16;
        FUN_10377c65c(param_1,0,1,0x2c,puVar5);
        puStack_70 = puStack_78;
        puVar16 = puStack_78;
        lVar14 = lStack_98;
        param_1 = uVar6;
      }
      (**(code **)(lVar12 + 8))(lVar14,lVar17);
    }
    uVar4 = uVar24;
    func_0x000107c4aa74();
    func_0x000107c61180();
    lVar13 = lStack_b8;
    if (uVar4 != 0) {
      func_0x000107c5ee94(lStack_b8);
      func_0x000107c61170(uVar4);
      lVar14 = lStack_90;
      (**(code **)(lVar12 + 0x20))(lStack_90,lVar13,lVar17);
      uVar4 = 0xd00000000000001b;
      func_0x0001000f66f0(0xd00000000000001b,0x800000010f163c90,lVar7);
      if ((uVar4 & 1) != 0) {
        func_0x000107c5ee68(lVar14);
        puVar5 = puVar16;
        uVar6 = param_1;
        func_0x000107c61558(puVar16);
        puStack_78 = puVar16;
        FUN_10377c65c(param_1,0,1,0x2d,puVar5);
        puStack_70 = puStack_78;
        puVar16 = puStack_78;
        lVar14 = lStack_90;
        param_1 = uVar6;
      }
      (**(code **)(lVar12 + 8))(lVar14,lVar17);
    }
    uVar4 = uVar24;
    func_0x000107c4aa60();
    func_0x000107c61180();
    lVar13 = lStack_190;
    if (uVar4 != 0) {
      func_0x000107c5ee94(lStack_190);
      func_0x000107c61170(uVar4);
      lVar14 = lStack_188;
      (**(code **)(lVar12 + 0x20))(lStack_188,lVar13,lVar17);
      uVar4 = 0xd000000000000021;
      func_0x0001000f66f0(0xd000000000000021,0x800000010f163c60,lVar7);
      if ((uVar4 & 1) != 0) {
        func_0x000107c5ee68(lVar14);
        puVar5 = puVar16;
        uVar6 = param_1;
        func_0x000107c61558(puVar16);
        puStack_78 = puVar16;
        FUN_10377c65c(param_1,0,1,0x2e,puVar5);
        puStack_70 = puStack_78;
        puVar16 = puStack_78;
        param_1 = uVar6;
      }
      (**(code **)(lVar12 + 8))(lVar14,lVar17);
    }
    uVar4 = uVar24;
    func_0x000107c4aa64();
    func_0x000107c61180();
    lVar13 = lStack_180;
    if (uVar4 != 0) {
      func_0x000107c5ee94(lStack_180);
      func_0x000107c61170(uVar4);
      lVar14 = lStack_178;
      (**(code **)(lVar12 + 0x20))(lStack_178,lVar13,lVar17);
      uVar4 = 0xd000000000000015;
      func_0x0001000f66f0(0xd000000000000015,0x800000010f163c40,lVar7);
      if ((uVar4 & 1) != 0) {
        func_0x000107c5ee68(lVar14);
        puVar5 = puVar16;
        uVar6 = param_1;
        func_0x000107c61558(puVar16);
        puStack_78 = puVar16;
        FUN_10377c65c(param_1,0,1,0x2f,puVar5);
        puStack_70 = puStack_78;
        puVar16 = puStack_78;
        param_1 = uVar6;
      }
      (**(code **)(lVar12 + 8))(lVar14,lVar17);
    }
    uVar4 = uVar24;
    func_0x000107c4aa68();
    func_0x000107c61180();
    lVar13 = lStack_170;
    if (uVar4 != 0) {
      func_0x000107c5ee94(lStack_170);
      func_0x000107c61170(uVar4);
      (**(code **)(lVar12 + 0x20))(uStack_168,lVar13,lVar17);
      uVar4 = 0xd000000000000021;
      func_0x0001000f66f0(0xd000000000000021,0x800000010f163c10,lVar7);
      if ((uVar4 & 1) != 0) {
        func_0x000107c5ee68(uStack_168);
        puVar5 = puVar16;
        uVar6 = param_1;
        func_0x000107c61558(puVar16);
        puStack_78 = puVar16;
        FUN_10377c65c(param_1,0,1,0x30,puVar5);
        puStack_70 = puStack_78;
        puVar16 = puStack_78;
        param_1 = uVar6;
      }
      (**(code **)(lVar12 + 8))(uStack_168,lVar17);
    }
    uVar4 = uVar24;
    func_0x000107c4aa6c();
    func_0x000107c61180();
    if (uVar4 != 0) {
      func_0x000107c5ee94(uStack_160);
      func_0x000107c61170(uVar4);
      (**(code **)(lVar12 + 0x20))(lVar18,uStack_160,lVar17);
      uVar4 = 0xd000000000000015;
      func_0x0001000f66f0(0xd000000000000015,0x800000010f163bf0,lVar7);
      if ((uVar4 & 1) != 0) {
        func_0x000107c5ee68(lVar18);
        puVar5 = puVar16;
        func_0x000107c61558(puVar16);
        puStack_78 = puVar16;
        FUN_10377c65c(param_1,0,1,0x31,puVar5);
        puStack_70 = puStack_78;
      }
      (**(code **)(lVar12 + 8))(lVar18,lVar17);
    }
    uVar4 = 0;
    func_0x0001000f66f0(0xd00000000000001e,0x800000010f163bd0,lVar7);
    if ((uVar4 & 1) == 0) goto LAB_103775878;
  }
  uVar4 = uVar24;
  func_0x000107c4aad4();
  if (uVar4 < 6) {
    uVar9 = 0;
    uVar6 = *(undefined8 *)(&UNK_10dc096c8 + uVar4 * 8);
    uVar8 = *(undefined8 *)(&UNK_10dc096f8 + uVar4 * 8);
  }
  else {
    uVar6 = 0;
    uVar8 = 0;
    uVar9 = 0xff;
  }
  FUN_103776d7c(uVar6,uVar8,uVar9,0x32);
LAB_103775878:
  func_0x000107c61170(uVar24);
  return puStack_70;
}


