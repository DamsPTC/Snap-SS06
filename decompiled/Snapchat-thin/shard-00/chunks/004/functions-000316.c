/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1006a2a14; end: 1006a2a3b;  */

void FUN_1006a2a14(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001006a00d8();
  FUN_1006a010c();
  FUN_1006a2a98();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1006a2a3c; end: 1006a2a97;  */

long FUN_1006a2a3c(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uStack_38;
  
  func_0x0001006a0118();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x378) {
    FUN_1006a01b0();
    FUN_10066f550();
    unaff_x20 = uStack_38 + 0x378;
    uStack_38 = unaff_x20;
  }
  func_0x0001006a0758();
  FUN_100671c4c();
  return unaff_x20;
}



/* Entry: 1006a2a98; end: 1006a2aab;  */

void FUN_1006a2a98(void)

{
  FUN_1006a2a3c();
  return;
}



/* Entry: 1006a2aac; end: 1006a2adf;  */

void FUN_1006a2aac(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined ***pppuVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  undefined1 auStack_300 [40];
  undefined1 auStack_2d8 [40];
  undefined1 auStack_2b0 [24];
  undefined1 auStack_298 [24];
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [24];
  undefined1 auStack_250 [32];
  undefined1 auStack_230 [32];
  undefined1 auStack_210 [32];
  undefined1 auStack_1f0 [32];
  undefined1 auStack_1d0 [32];
  undefined1 auStack_1b0 [32];
  undefined1 auStack_190 [40];
  undefined1 auStack_168 [40];
  undefined1 auStack_140 [40];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [24];
  byte bStack_58;
  
  func_0x0001005fe13c();
  func_0x0001005529b4(param_1 + 0xe0);
  func_0x0001005529b4(unaff_x20 + 0x18);
  if (*(char *)((long)unaff_x20 + 0x144) == '\x01') {
    uVar9 = (ulong)(*(int *)(unaff_x20 + 0x28) != 0);
    if ((*(byte *)((long)unaff_x20 + 0x14c) & 1) == 0) goto LAB_1006a2b24;
LAB_1006a2b4c:
    puVar2 = unaff_x20 + 0x29;
    func_0x000107c29e08();
    puStack_c0 = puVar2;
    func_0x000105c3d708(auStack_70,&puStack_c0);
  }
  else {
    uVar10 = unaff_x20[0x29];
    uVar9 = uVar10;
    FUN_1006a3124(uVar10,unaff_x20[0x25],unaff_x20[0x26]);
    if ((uVar10 >> 0x20 & 1) != 0) goto LAB_1006a2b4c;
LAB_1006a2b24:
    FUN_1006a3170(auStack_70,unaff_x20[0x28]);
  }
  plVar11 = (long *)*unaff_x20;
  uStack_b8 = unaff_x20[0x1c];
  puStack_c0 = (undefined8 *)unaff_x20[0x1b];
  uStack_a8 = unaff_x20[0x1e];
  uStack_b0 = unaff_x20[0x1d];
  FUN_1006a31b0(auStack_90);
  (**(code **)(*plVar11 + 0x40))(plVar11,&puStack_c0,uVar9,auStack_90,unaff_x20 + 0x20);
  FUN_1001148fc(auStack_90);
  if ((int)uVar9 - 1U < 2) {
    FUN_10084fce8();
    pppuVar3 = &ppuStack_e8;
    FUN_1006a58e4(pppuVar3);
    FUN_10002b838(auStack_100,"error_code");
    func_0x000107c60c94(auStack_118,auStack_70);
    FUN_1005e3484(pppuVar3,auStack_100,auStack_118);
    func_0x0001006a58ec();
    func_0x000107c60ca0(auStack_118);
    func_0x000107c60ca0(auStack_100);
    func_0x00010084fd00();
    FUN_1006a5918(&puStack_c0);
    FUN_1006a5a0c(auStack_140);
    func_0x0001006a5a14();
    func_0x0001006a5a20();
    puVar4 = auStack_140;
  }
  else if (*(char *)(unaff_x19 + 0x28) == '\x01') {
    FUN_1006a58e4();
    func_0x0001006a58ec();
    FUN_1006a5918();
    FUN_1006a5a0c(auStack_168);
    func_0x0001006a5a14();
    func_0x0001006a5a20();
    puVar4 = auStack_168;
  }
  else {
    FUN_10084fce8();
    FUN_1006a58e4(&ppuStack_e8);
    func_0x0001006a58ec();
    func_0x00010084fd00();
    FUN_1006a5918(&puStack_c0);
    FUN_1006a5a0c(auStack_190);
    func_0x0001006a5a14();
    func_0x0001006a5a20();
    puVar4 = auStack_190;
  }
  FUN_1005505e4(puVar4);
  FUN_1005505e4(&puStack_c0);
  uStack_b8 = unaff_x20[0x18];
  puStack_c0 = (undefined8 *)unaff_x20[0x17];
  uStack_a8 = unaff_x20[0x1a];
  uStack_b0 = unaff_x20[0x19];
  FUN_1006a31b0(auStack_1b0);
  FUN_1006a5aa8();
  func_0x0001006a5ab4();
  FUN_1001148fc(auStack_1b0);
  if (*(int *)((long)unaff_x20 + 0xfc) == 2) goto LAB_1006a2fc0;
  uStack_b8 = unaff_x20[4];
  puStack_c0 = (undefined8 *)unaff_x20[3];
  uStack_a8 = unaff_x20[6];
  uStack_b0 = unaff_x20[5];
  FUN_1006a31b0(auStack_1d0);
  FUN_1006a5aa8();
  func_0x0001006a5ab4();
  FUN_1001148fc(auStack_1d0);
  uStack_b8 = unaff_x20[0xc];
  puStack_c0 = (undefined8 *)unaff_x20[0xb];
  uStack_a8 = unaff_x20[0xe];
  uStack_b0 = unaff_x20[0xd];
  FUN_1006a31b0(auStack_1f0);
  FUN_1006a5aa8();
  func_0x0001006a5ab4();
  FUN_1001148fc(auStack_1f0);
  uStack_b8 = unaff_x20[8];
  puStack_c0 = (undefined8 *)unaff_x20[7];
  uStack_a8 = unaff_x20[10];
  uStack_b0 = unaff_x20[9];
  FUN_1006a31b0(auStack_210);
  FUN_1006a5aa8();
  func_0x0001006a5ab4();
  FUN_1001148fc(auStack_210);
  uStack_b8 = unaff_x20[0x14];
  puStack_c0 = (undefined8 *)unaff_x20[0x13];
  uStack_a8 = unaff_x20[0x16];
  uStack_b0 = unaff_x20[0x15];
  FUN_1006a31b0(auStack_230);
  FUN_1006a5aa8();
  func_0x0001006a5ab4();
  FUN_1001148fc(auStack_230);
  if ((int)uVar9 == 0) {
LAB_1006a2df0:
    uStack_b8 = unaff_x20[0x10];
    puStack_c0 = (undefined8 *)unaff_x20[0xf];
    uStack_a8 = unaff_x20[0x12];
    uStack_b0 = unaff_x20[0x11];
    FUN_1006a31b0(auStack_250);
    FUN_1006a5aa8();
    func_0x0001006a5ab4();
    FUN_1001148fc(auStack_250);
  }
  else if ((*(char *)((long)unaff_x20 + 0x144) != '\x01') ||
          (*(int *)(unaff_x20 + 0x28) != 7 && *(int *)(unaff_x20 + 0x28) != 0x10)) {
    uVar5 = unaff_x20[0x29];
    FUN_1006a3124(uVar5,unaff_x20[0x25],unaff_x20[0x26]);
    if ((int)uVar5 != 2) goto LAB_1006a2df0;
  }
  puVar2 = unaff_x20 + 0x10;
  FUN_1005e3518();
  puVar6 = unaff_x20 + 0xc;
  FUN_1005e3518();
  puVar7 = unaff_x20 + 4;
  FUN_1005e3518();
  puVar8 = unaff_x20 + 0x14;
  FUN_1005e3518();
  ppuStack_e8 = (undefined **)((long)puVar6 + (long)puVar2 + (long)puVar7 + (long)puVar8);
  plVar11 = (long *)*unaff_x20;
  uVar1 = *(undefined4 *)(unaff_x20 + 0x1f);
  FUN_1006a31b0(&puStack_c0);
  (**(code **)(*plVar11 + 0x30))(plVar11,uVar1,&ppuStack_e8,uVar9,&puStack_c0,unaff_x20 + 0x20);
  FUN_1001148fc(&puStack_c0);
  uStack_d8 = 0;
  uStack_d0 = 0;
  ppuStack_e8 = &PTR_DAT_110a609a8;
  uStack_e0 = 0;
  uStack_c8 = 0x285;
  FUN_10002b838(auStack_268,&UNK_10f4b03e6);
  uVar9 = (ulong)*(uint *)((long)unaff_x20 + 0xfc);
  FUN_10084fd68(uVar9);
  FUN_1005504ac(&ppuStack_e8,auStack_268,uVar9);
  func_0x0001006a58ec();
  func_0x000107c60ca0(auStack_268);
  func_0x00010084fd00();
  if (bStack_58 == 1) {
    FUN_10002b838(auStack_280,"error_code");
    func_0x000107c60c94(auStack_298,auStack_70);
    FUN_1005e3484(&puStack_c0,auStack_280,auStack_298);
    func_0x000107c60ca0(auStack_298);
    func_0x000107c60ca0(auStack_280);
    FUN_10002b838(auStack_2b0,"error_source");
    puVar2 = unaff_x20 + 0x33;
    func_0x00010868159c(puVar2);
    FUN_1005504ac(&puStack_c0,auStack_2b0,puVar2);
    func_0x000108682088();
  }
  FUN_1006a5a0c(auStack_2d8);
  func_0x0001005fe198();
  func_0x0001005fe1a4();
  FUN_1005505e4(auStack_2d8);
  if ((*(char *)(unaff_x20 + 0x32) == '\x01') && ((bStack_58 & 1) != 0)) {
    func_0x000108681744(auStack_300,unaff_x20 + 0x2a,*(undefined4 *)((long)unaff_x20 + 0xfc),0);
    func_0x0001005fe198();
    func_0x0001005fe1a4();
    FUN_100634988();
  }
  FUN_1005505e4(&puStack_c0);
LAB_1006a2fc0:
  FUN_1001148fc(auStack_70);
  return;
}



/* Entry: 1006a2ae0; end: 1006a3123;  */

void FUN_1006a2ae0(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined ***pppuVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  undefined1 auStack_300 [40];
  undefined1 auStack_2d8 [40];
  undefined1 auStack_2b0 [24];
  undefined1 auStack_298 [24];
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [24];
  undefined1 auStack_250 [32];
  undefined1 auStack_230 [32];
  undefined1 auStack_210 [32];
  undefined1 auStack_1f0 [32];
  undefined1 auStack_1d0 [32];
  undefined1 auStack_1b0 [32];
  undefined1 auStack_190 [40];
  undefined1 auStack_168 [40];
  undefined1 auStack_140 [40];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [24];
  byte bStack_58;
  
  if (*(char *)((long)param_1 + 0x144) == '\x01') {
    uVar9 = (ulong)(*(int *)(param_1 + 0x28) != 0);
    if ((*(byte *)((long)param_1 + 0x14c) & 1) == 0) goto LAB_1006a2b24;
LAB_1006a2b4c:
    puVar2 = param_1 + 0x29;
    func_0x000107c29e08();
    puStack_c0 = puVar2;
    func_0x000105c3d708(auStack_70,&puStack_c0);
  }
  else {
    uVar10 = param_1[0x29];
    uVar9 = uVar10;
    FUN_1006a3124(uVar10,param_1[0x25],param_1[0x26]);
    if ((uVar10 >> 0x20 & 1) != 0) goto LAB_1006a2b4c;
LAB_1006a2b24:
    FUN_1006a3170(auStack_70,param_1[0x28]);
  }
  plVar11 = (long *)*param_1;
  uStack_b8 = param_1[0x1c];
  puStack_c0 = (undefined8 *)param_1[0x1b];
  uStack_a8 = param_1[0x1e];
  uStack_b0 = param_1[0x1d];
  FUN_1006a31b0(auStack_90);
  (**(code **)(*plVar11 + 0x40))(plVar11,&puStack_c0,uVar9,auStack_90,param_1 + 0x20);
  FUN_1001148fc(auStack_90);
  if ((int)uVar9 - 1U < 2) {
    FUN_10084fce8();
    pppuVar3 = &ppuStack_e8;
    FUN_1006a58e4(pppuVar3);
    FUN_10002b838(auStack_100,"error_code");
    func_0x000107c60c94(auStack_118,auStack_70);
    FUN_1005e3484(pppuVar3,auStack_100,auStack_118);
    func_0x0001006a58ec();
    func_0x000107c60ca0(auStack_118);
    func_0x000107c60ca0(auStack_100);
    func_0x00010084fd00();
    FUN_1006a5918(&puStack_c0);
    FUN_1006a5a0c(auStack_140);
    func_0x0001006a5a14();
    func_0x0001006a5a20();
    puVar4 = auStack_140;
  }
  else if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1006a58e4(param_2);
    func_0x0001006a58ec();
    FUN_1006a5918();
    FUN_1006a5a0c(auStack_168);
    func_0x0001006a5a14();
    func_0x0001006a5a20();
    puVar4 = auStack_168;
  }
  else {
    FUN_10084fce8();
    FUN_1006a58e4(&ppuStack_e8);
    func_0x0001006a58ec();
    func_0x00010084fd00();
    FUN_1006a5918(&puStack_c0);
    FUN_1006a5a0c(auStack_190);
    func_0x0001006a5a14();
    func_0x0001006a5a20();
    puVar4 = auStack_190;
  }
  FUN_1005505e4(puVar4);
  FUN_1005505e4(&puStack_c0);
  uStack_b8 = param_1[0x18];
  puStack_c0 = (undefined8 *)param_1[0x17];
  uStack_a8 = param_1[0x1a];
  uStack_b0 = param_1[0x19];
  FUN_1006a31b0(auStack_1b0);
  FUN_1006a5aa8();
  func_0x0001006a5ab4();
  FUN_1001148fc(auStack_1b0);
  if (*(int *)((long)param_1 + 0xfc) == 2) goto LAB_1006a2fc0;
  uStack_b8 = param_1[4];
  puStack_c0 = (undefined8 *)param_1[3];
  uStack_a8 = param_1[6];
  uStack_b0 = param_1[5];
  FUN_1006a31b0(auStack_1d0);
  FUN_1006a5aa8();
  func_0x0001006a5ab4();
  FUN_1001148fc(auStack_1d0);
  uStack_b8 = param_1[0xc];
  puStack_c0 = (undefined8 *)param_1[0xb];
  uStack_a8 = param_1[0xe];
  uStack_b0 = param_1[0xd];
  FUN_1006a31b0(auStack_1f0);
  FUN_1006a5aa8();
  func_0x0001006a5ab4();
  FUN_1001148fc(auStack_1f0);
  uStack_b8 = param_1[8];
  puStack_c0 = (undefined8 *)param_1[7];
  uStack_a8 = param_1[10];
  uStack_b0 = param_1[9];
  FUN_1006a31b0(auStack_210);
  FUN_1006a5aa8();
  func_0x0001006a5ab4();
  FUN_1001148fc(auStack_210);
  uStack_b8 = param_1[0x14];
  puStack_c0 = (undefined8 *)param_1[0x13];
  uStack_a8 = param_1[0x16];
  uStack_b0 = param_1[0x15];
  FUN_1006a31b0(auStack_230);
  FUN_1006a5aa8();
  func_0x0001006a5ab4();
  FUN_1001148fc(auStack_230);
  if ((int)uVar9 == 0) {
LAB_1006a2df0:
    uStack_b8 = param_1[0x10];
    puStack_c0 = (undefined8 *)param_1[0xf];
    uStack_a8 = param_1[0x12];
    uStack_b0 = param_1[0x11];
    FUN_1006a31b0(auStack_250);
    FUN_1006a5aa8();
    func_0x0001006a5ab4();
    FUN_1001148fc(auStack_250);
  }
  else if ((*(char *)((long)param_1 + 0x144) != '\x01') ||
          (*(int *)(param_1 + 0x28) != 7 && *(int *)(param_1 + 0x28) != 0x10)) {
    uVar5 = param_1[0x29];
    FUN_1006a3124(uVar5,param_1[0x25],param_1[0x26]);
    if ((int)uVar5 != 2) goto LAB_1006a2df0;
  }
  puVar2 = param_1 + 0x10;
  FUN_1005e3518();
  puVar6 = param_1 + 0xc;
  FUN_1005e3518();
  puVar7 = param_1 + 4;
  FUN_1005e3518();
  puVar8 = param_1 + 0x14;
  FUN_1005e3518();
  ppuStack_e8 = (undefined **)((long)puVar6 + (long)puVar2 + (long)puVar7 + (long)puVar8);
  plVar11 = (long *)*param_1;
  uVar1 = *(undefined4 *)(param_1 + 0x1f);
  FUN_1006a31b0(&puStack_c0);
  (**(code **)(*plVar11 + 0x30))(plVar11,uVar1,&ppuStack_e8,uVar9,&puStack_c0,param_1 + 0x20);
  FUN_1001148fc(&puStack_c0);
  uStack_d8 = 0;
  uStack_d0 = 0;
  ppuStack_e8 = &PTR_DAT_110a609a8;
  uStack_e0 = 0;
  uStack_c8 = 0x285;
  FUN_10002b838(auStack_268,&UNK_10f4b03e6);
  uVar9 = (ulong)*(uint *)((long)param_1 + 0xfc);
  FUN_10084fd68(uVar9);
  FUN_1005504ac(&ppuStack_e8,auStack_268,uVar9);
  func_0x0001006a58ec();
  func_0x000107c60ca0(auStack_268);
  func_0x00010084fd00();
  if (bStack_58 == 1) {
    FUN_10002b838(auStack_280,"error_code");
    func_0x000107c60c94(auStack_298,auStack_70);
    FUN_1005e3484(&puStack_c0,auStack_280,auStack_298);
    func_0x000107c60ca0(auStack_298);
    func_0x000107c60ca0(auStack_280);
    FUN_10002b838(auStack_2b0,"error_source");
    puVar2 = param_1 + 0x33;
    func_0x00010868159c(puVar2);
    FUN_1005504ac(&puStack_c0,auStack_2b0,puVar2);
    func_0x000108682088();
  }
  FUN_1006a5a0c(auStack_2d8);
  func_0x0001005fe198();
  func_0x0001005fe1a4();
  FUN_1005505e4(auStack_2d8);
  if ((*(char *)(param_1 + 0x32) == '\x01') && ((bStack_58 & 1) != 0)) {
    func_0x000108681744(auStack_300,param_1 + 0x2a,*(undefined4 *)((long)param_1 + 0xfc),0);
    func_0x0001005fe198();
    func_0x0001005fe1a4();
    FUN_100634988();
  }
  FUN_1005505e4(&puStack_c0);
LAB_1006a2fc0:
  FUN_1001148fc(auStack_70);
  return;
}



/* Entry: 1006a3124; end: 1006a316f;  */

undefined4 FUN_1006a3124(ulong param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((param_1 >> 0x20 & 1) == 0) {
    return 0;
  }
  if ((int)param_1 != 1) {
    for (; (piVar1 = param_3, param_2 != param_3 && (piVar1 = param_2, *param_2 != (int)param_1));
        param_2 = param_2 + 1) {
    }
    uVar2 = 1;
    if (param_3 != piVar1) {
      uVar2 = 2;
    }
    return uVar2;
  }
  return 2;
}



/* Entry: 1006a3170; end: 1006a31af;  */

void FUN_1006a3170(undefined1 *param_1,ulong param_2)

{
  ulong uStack_28;
  
  if ((param_2 >> 0x20 & 1) == 0) {
    *param_1 = 0;
    param_1[0x18] = 0;
  }
  else {
    func_0x000107c2bfa0();
    uStack_28 = param_2;
    func_0x000105c3d708(param_1,&uStack_28);
  }
  return;
}



/* Entry: 1006a31b0; end: 1006a31b7;  */

void FUN_1006a31b0(undefined8 param_1)

{
  long unaff_x29;
  
  FUN_10028af74(param_1,unaff_x29 + -0x60);
  FUN_10028afb0();
  return;
}



/* Entry: 1006a31b8; end: 1006a3227;  */

void FUN_1006a31b8(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 *puStack_38;
  
  FUN_100606f6c();
  puVar2 = param_2 + 2;
  uVar1 = *param_2;
  FUN_1005e3518();
  puStack_38 = puVar2;
  FUN_1006a3228();
  FUN_10028af84();
  FUN_1006a3234(uVar1,&puStack_38);
  FUN_1001148fc(auStack_58);
  return;
}



/* Entry: 1006a3228; end: 1006a3233;  */

undefined1 * FUN_1006a3228(void)

{
  return &stack0x00000008;
}



/* Entry: 1006a3234; end: 1006a33df;  */

void FUN_1006a3234(undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  long extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [40];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [24];
  
  FUN_1005e3578();
  uStack_70 = 0;
  uStack_68 = 0;
  ppuStack_80 = &PTR_DAT_110a609a8;
  uStack_78 = 0;
  uStack_60 = param_1;
  FUN_1005f4a10();
  (**(code **)(extraout_x8 + 0x20))(auStack_58);
  FUN_1006a565c();
  if (((int)param_3 == 1) && (*(char *)(param_4 + 0x18) == '\x01')) {
    func_0x0001006a5664();
    puVar1 = auStack_a8;
    FUN_1006a5684(puVar1,1);
    FUN_10002b838(auStack_c0,"error_code");
    func_0x000107c60c94(auStack_d8,param_4);
    FUN_1005e3484(puVar1,auStack_c0,auStack_d8);
    func_0x0001005505a0(&ppuStack_80,puVar1);
    func_0x000107c60ca0(auStack_d8);
    func_0x000107c60ca0(auStack_c0);
    FUN_1005505e4(auStack_a8);
    FUN_1006a5838();
    FUN_1005e3578();
    func_0x0001005e6ff8();
    (*(code *)*extraout_x8_00)();
  }
  else {
    func_0x0001006a5664();
    puVar1 = auStack_a8;
    FUN_1006a5684(puVar1,param_3);
    func_0x0001005505a0(&ppuStack_80,puVar1);
    FUN_1005505e4(auStack_a8);
    FUN_1006a5838();
    FUN_1005e3578();
    func_0x0001005e6ff8();
    (*(code *)*extraout_x8_01)();
  }
  FUN_1006a565c();
  func_0x000107c60ca0(auStack_58);
  return;
}



/* Entry: 1006a33e0; end: 1006a565b;  */

void FUN_1006a33e0(void)

{
  return;
}



/* Entry: 1006a565c; end: 1006a5683;  */

undefined1 * FUN_1006a565c(void)

{
  undefined **ppuStack0000000000000060;
  
  ppuStack0000000000000060 = &PTR_DAT_110a60a10;
  FUN_1000e30f4(&stack0x00000068);
  return (undefined1 *)&stack0x00000060;
}



/* Entry: 1006a5684; end: 1006a56fb;  */

void FUN_1006a5684(undefined8 param_1,ulong param_2)

{
  func_0x0001006a5678();
  if (((uint)(param_2 >> 0x11) & 0x7fff) < 0x47) {
    func_0x0001006a56fc();
  }
  func_0x0001006a5710();
  func_0x0001006a5718();
  func_0x0001006a5724();
  return;
}



/* Entry: 1006a56fc; end: 1006a5737;  */

void FUN_1006a56fc(void)

{
  return;
}



/* Entry: 1006a5738; end: 1006a5837;  */

undefined8 FUN_1006a5738(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    if (*(char *)(param_1 + 0x18) == '\x01') {
      uStack_30 = 0xaaaaaaaaaaaaaaaa;
      uStack_34 = 0;
      uStack_58 = 0;
      uStack_40 = 0;
      uStack_28 = param_2;
      func_0x0001006a57e8(&uStack_30,&uStack_34,&uStack_28,&uStack_58,&uStack_40);
      func_0x0001006a19e0();
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      func_0x00010069ed6c(param_1,&uStack_58);
      func_0x0001006a5910();
      FUN_1006a5920(param_1 + 0x28,&uStack_30);
      func_0x0001006a1a08(&uStack_30);
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 0xfffffffe;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1006a5838; end: 1006a5843;  */

void FUN_1006a5838(void)

{
  undefined1 *puVar1;
  long unaff_x20;
  long *plVar2;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  plVar2 = (long *)(unaff_x20 + 0x10);
  while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
    func_0x000107c60c94(auStack_38,plVar2 + 2);
    func_0x000107c60c94(auStack_50,plVar2 + 5);
    puVar1 = &stack0x00000060;
    FUN_1005e3484(&stack0x00000060,auStack_38,auStack_50);
    FUN_100607298(&stack0x00000060,puVar1);
    func_0x000107c60ca0(auStack_50);
    func_0x000107c60ca0(auStack_38);
  }
  return;
}



/* Entry: 1006a5844; end: 1006a58d3;  */

void FUN_1006a5844(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  plVar2 = (long *)(param_2 + 0x10);
  while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
    func_0x000107c60c94(auStack_38,plVar2 + 2);
    func_0x000107c60c94(auStack_50,plVar2 + 5);
    uVar1 = param_1;
    FUN_1005e3484(param_1,auStack_38,auStack_50);
    FUN_100607298(param_1,uVar1);
    func_0x000107c60ca0(auStack_50);
    func_0x000107c60ca0(auStack_38);
  }
  return;
}



/* Entry: 1006a58d4; end: 1006a58e3;  */

void FUN_1006a58d4(void)

{
  return;
}



/* Entry: 1006a58e4; end: 1006a58f3;  */

void FUN_1006a58e4(void)

{
  ulong unaff_x20;
  
  func_0x0001006a5678();
  if (((uint)(unaff_x20 >> 0x11) & 0x7fff) < 0x47) {
    func_0x0001006a56fc();
  }
  func_0x0001006a5710();
  func_0x0001006a5718();
  func_0x0001006a5724();
  return;
}



/* Entry: 1006a58f4; end: 1006a5917;  */

void FUN_1006a58f4(void)

{
  return;
}



/* Entry: 1006a5918; end: 1006a591f;  */

void FUN_1006a5918(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long *plVar2;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  plVar2 = (long *)(unaff_x19 + 0x110);
  while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
    func_0x000107c60c94(auStack_38,plVar2 + 2);
    func_0x000107c60c94(auStack_50,plVar2 + 5);
    uVar1 = param_1;
    FUN_1005e3484(param_1,auStack_38,auStack_50);
    FUN_100607298(param_1,uVar1);
    func_0x000107c60ca0(auStack_50);
    func_0x000107c60ca0(auStack_38);
  }
  return;
}



/* Entry: 1006a5920; end: 1006a5a0b;  */

void FUN_1006a5920(void)

{
  func_0x0001006a19fc();
  func_0x0001006a5948();
  func_0x0001006a5a70();
  return;
}



/* Entry: 1006a5a0c; end: 1006a5a27;  */

void FUN_1006a5a0c(long param_1)

{
  long unaff_x29;
  
  FUN_10055056c();
  FUN_1005505d0(&UNK_110a60998);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(unaff_x29 + -0x90);
  return;
}



/* Entry: 1006a5a28; end: 1006a5aa7;  */

void FUN_1006a5a28(void)

{
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 *in_stack_00000010;
  
  *in_stack_00000010 = unaff_x21;
  in_stack_00000010[1] = unaff_x20;
  return;
}



/* Entry: 1006a5aa8; end: 1006a5ac3;  */

void FUN_1006a5aa8(void)

{
  return;
}



/* Entry: 1006a5ac4; end: 1006a5b37;  */

void FUN_1006a5ac4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001006a5acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_11336f918)();
  return;
}



/* Entry: 1006a5b38; end: 1006a5b57;  */

void FUN_1006a5b38(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_1005505e4();
  }
  return;
}



/* Entry: 1006a5b58; end: 1006a5b8f;  */

void FUN_1006a5b58(void)

{
  return;
}



/* Entry: 1006a5b90; end: 1006a5bab;  */

void FUN_1006a5b90(void)

{
  return;
}



/* Entry: 1006a5bac; end: 1006a5c27;  */

void FUN_1006a5bac(void)

{
  return;
}



/* Entry: 1006a5c28; end: 1006a5c4b;  */

void FUN_1006a5c28(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x0001006a5c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1006a5c4c; end: 1006a5c7f;  */

void FUN_1006a5c4c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_10066df1c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x378;
    FUN_10066f6f4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1006a5c80; end: 1006a5c87;  */

void FUN_1006a5c80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1006a5c88; end: 1006a5ca7;  */

void FUN_1006a5c88(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x000107c2a288();
  }
  return;
}



/* Entry: 1006a5ca8; end: 1006a5cdf;  */

undefined8 FUN_1006a5ca8(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_1006a5c88(param_1 + 0x150);
  FUN_1006a5cf8(param_1 + 0x128);
  func_0x00010028ad98(param_1 + 0x100);
  func_0x0001004b55a0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1006a5ce0; end: 1006a5cf7;  */

void FUN_1006a5ce0(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1006a5cf8; end: 1006a5d23;  */

undefined8 FUN_1006a5cf8(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_1006a5ce0(&uStack_28);
  return param_1;
}



/* Entry: 1006a5d24; end: 1006a5da3;  */

void FUN_1006a5d24(void)

{
  return;
}



/* Entry: 1006a5da4; end: 1006a5dd7;  */

void FUN_1006a5da4(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_100164f28();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x30;
    FUN_1003b0614();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1006a5dd8; end: 1006a5def;  */

void FUN_1006a5dd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1006a5df0; end: 1006a5f77;  */

void FUN_1006a5df0(long param_1)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  undefined1 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [46];
  ushort uStack_52;
  
  lVar6 = *(long *)(param_1 + 0x10);
  uVar3 = *(ushort *)(param_1 + 0x18);
  uVar2 = *(uint *)(param_1 + 0x1c);
  plVar5 = *(long **)(lVar6 + 0x1d0);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_52 = uVar3;
  func_0x0001006a5de0();
  uStack_a0 = 0;
  uStack_88 = 0x1f;
  FUN_10002b838(auStack_80,PTR_DAT_113268fa0);
  lVar7 = 0x27a;
  if ((uVar3 & 1) == 0) {
    lVar7 = 0x27b;
  }
  lVar1 = 0x27c;
  if ((uVar3 & 0x100) != 0) {
    lVar1 = lVar7;
  }
  puVar4 = auStack_a8;
  FUN_1005504ac(puVar4,auStack_80,(&PTR_s_success_113269028)[lVar1]);
  FUN_1006a5f78();
  if (uVar2 < 3) {
    lVar7 = *(long *)(&UNK_10df60280 + (ulong)uVar2 * 8);
  }
  else {
    lVar7 = 0x27f;
  }
  FUN_10002b838(auStack_80,PTR_DAT_113268fa8);
  FUN_1005504ac(puVar4,auStack_80,(&PTR_s_success_113269028)[lVar7]);
  FUN_1006a5f78();
  func_0x0001005505a0(auStack_80,puVar4);
  (**(code **)(*plVar5 + 0x50))(plVar5,auStack_80);
  FUN_1005505e4(auStack_80);
  func_0x0001006a5f80();
  if ((uVar3 >> 8 & 1) != 0) {
    lVar7 = 0x2c0;
    if ((uVar3 & 1) == 0) {
      lVar7 = 0x2c8;
    }
    FUN_1006a5f88(*(undefined8 *)(lVar6 + 0x1e0),uVar3 & 1);
    (**(code **)(**(long **)(lVar6 + 0xe0) + lVar7))();
  }
  (**(code **)(**(long **)(lVar6 + 0x1f0) + 0x70))
            (*(long **)(lVar6 + 0x1f0),&uStack_52,(ulong)uVar2);
  return;
}



/* Entry: 1006a5f78; end: 1006a5f87;  */

void FUN_1006a5f78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000030);
  return;
}



/* Entry: 1006a5f88; end: 1006a600b;  */

void FUN_1006a5f88(long param_1,uint param_2)

{
  *(uint *)(param_1 + 8) = param_2;
  if ((param_2 & 1) == 0) {
    func_0x0001005ed540(param_1 + 0x28);
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10) >> 1 & 1) == 0) {
      return;
    }
    FUN_1005621a4();
  }
  else {
    func_0x0001005ed540(param_1 + 0x18);
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) >> 1 & 1) == 0) {
      return;
    }
    FUN_1005621a4();
  }
  func_0x0001005621ac();
  func_0x0001005621b8();
  return;
}



/* Entry: 1006a600c; end: 1006a6027;  */

void FUN_1006a600c(void)

{
  return;
}



/* Entry: 1006a6028; end: 1006a612b;  */

undefined1 * FUN_1006a6028(void)

{
  bool bVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  code *extraout_x8;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined *in_stack_000000a8;
  code *in_stack_000000b0;
  undefined **in_stack_000000b8;
  undefined8 in_stack_00000110;
  
  FUN_1006a600c();
  FUN_100566694();
  func_0x0001006245f8();
  FUN_1006a612c();
  func_0x0001006a6134();
  in_stack_000000a8 = &UNK_10f4bcb53;
  func_0x0001006a6140();
  FUN_1004b4e98();
  FUN_1006246d0();
  (*extraout_x8)();
  puVar4 = &stack0x00000018;
  func_0x00010060e750();
  func_0x0001006a614c();
  FUN_100607368();
  func_0x0001006a6158();
  func_0x0001006a6160();
  func_0x0001006a6174();
  func_0x0001006a6180();
  in_stack_000000b0 = FUN_1006baca4;
  in_stack_000000b8 = &PTR_FUN_110a74af0;
  func_0x0001004a0340();
  func_0x0001006a61c4();
  func_0x0001006a620c();
  FUN_1006a623c();
  puVar3 = &stack0x00000030;
  FUN_1006a625c();
  func_0x0001006a6284();
  func_0x0001006a628c();
  func_0x0001006a6294();
  func_0x0001004a0084(in_stack_00000110);
  if ((bool)in_ZR) {
    return puVar3;
  }
  func_0x000107c60e78();
  FUN_1006a623c();
  FUN_1006a625c(&stack0x00000030);
  func_0x0001006a6284();
  func_0x0001006a628c();
  func_0x0001006a6294();
  func_0x000107c33930();
  puVar2 = &stack0x00000008;
  func_0x000100606f90();
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined8 *)(puVar3 + 8) = 0;
  }
  else {
    FUN_100606fd0();
    *(undefined1 **)(puVar3 + 8) = puVar2;
    bVar1 = puVar2 != (undefined1 *)0x0;
    puVar2 = (undefined1 *)0x0;
    if (bVar1) {
      return puVar3;
    }
  }
  func_0x00010527822c();
  return puVar2;
}



/* Entry: 1006a612c; end: 1006a621b;  */

void FUN_1006a612c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  long unaff_x19;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  puVar1 = &stack0x00000008;
  func_0x000100606f90();
  if (param_3 == 0) {
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  else {
    FUN_100606fd0();
    *(undefined1 **)(unaff_x19 + 8) = puVar1;
    if (puVar1 != (undefined1 *)0x0) {
      return;
    }
  }
  func_0x00010527822c();
  return;
}



/* Entry: 1006a621c; end: 1006a623b;  */

void FUN_1006a621c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1006a625c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1006a623c; end: 1006a625b;  */

void FUN_1006a623c(void)

{
  undefined8 *in_stack_000000b8;
  
                    /* WARNING: Could not recover jumptable at 0x0001006a624c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*in_stack_000000b8)(&stack0x000000b8);
  return;
}



/* Entry: 1006a625c; end: 1006a627b;  */

long FUN_1006a625c(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001006a6250();
  FUN_1006a627c();
  lVar1 = unaff_x19;
  FUN_1000dfb88();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1006a627c; end: 1006a62c3;  */

long FUN_1006a627c(void)

{
  long unaff_x19;
  long lStack_28;
  
  lStack_28 = unaff_x19 + 0x28;
  FUN_10015b854(&lStack_28);
  return unaff_x19 + 0x28;
}



/* Entry: 1006a62c4; end: 1006a62ff;  */

void FUN_1006a62c4(long param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  
  lVar1 = *(long *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  while (lVar1 != lVar2) {
    func_0x0001006a62b8();
    FUN_1006a6300(*(undefined8 *)(extraout_x8 + 0x70));
  }
  return;
}



/* Entry: 1006a6300; end: 1006a6323;  */

void FUN_1006a6300(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x0001006a6308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1006a6324; end: 1006a633b;  */

void FUN_1006a6324(long param_1,undefined1 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  if (param_2[1] == '\x01') {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    FUN_1006a6324();
    FUN_1006a638c(uVar3,*param_2);
    if ((int)uVar3 != 0) {
      if (*(char *)(param_1 + 0x60) == '\x01') {
        iVar1 = *(int *)(param_1 + 0x50);
        lVar4 = *(long *)(param_1 + 0x58);
        lVar2 = param_1;
        __ZNSt3__16chrono12steady_clock3nowEv();
        if ((iVar1 == 0) && (lVar4 + *(long *)(param_1 + 0x68) * 1000000 < lVar2)) {
          (**(code **)(**(long **)(param_1 + 0x40) + 0xd8))(*(long **)(param_1 + 0x40),6);
          lVar2 = *(long *)(param_1 + 0x28);
          if ((*(char *)(lVar2 + 0x20) == '\x01') && ((*(byte *)(lVar2 + 0x21) & 1) != 0)) {
            lVar4 = 0;
          }
          else {
            lVar4 = lVar2;
            FUN_1006b3c90();
          }
          *(long *)(lVar2 + 0x10) = lVar4;
          return;
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 1006a633c; end: 1006a638b;  */

void FUN_1006a633c(long param_1,undefined1 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_2[1] == '\x01') {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    FUN_1006a6324();
    FUN_1006a638c(uVar3,*param_2);
    if ((int)uVar3 != 0) {
      if (*(char *)(param_1 + 0x60) == '\x01') {
        iVar1 = *(int *)(param_1 + 0x50);
        lVar4 = *(long *)(param_1 + 0x58);
        lVar2 = param_1;
        __ZNSt3__16chrono12steady_clock3nowEv();
        if ((iVar1 == 0) && (lVar4 + *(long *)(param_1 + 0x68) * 1000000 < lVar2)) {
          (**(code **)(**(long **)(param_1 + 0x40) + 0xd8))(*(long **)(param_1 + 0x40),6);
          lVar2 = *(long *)(param_1 + 0x28);
          if ((*(char *)(lVar2 + 0x20) == '\x01') && ((*(byte *)(lVar2 + 0x21) & 1) != 0)) {
            lVar4 = 0;
          }
          else {
            lVar4 = lVar2;
            FUN_1006b3c90();
          }
          *(long *)(lVar2 + 0x10) = lVar4;
          return;
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 1006a638c; end: 1006a6393;  */

bool FUN_1006a638c(long param_1,uint param_2)

{
  long lVar1;
  
  *(char *)(param_1 + 0x21) = (char)param_2;
  if (*(long *)(param_1 + 0x10) == 0) {
    if ((param_2 & 1) == 0) {
      lVar1 = param_1;
      FUN_1006b3c90();
      *(long *)(param_1 + 0x10) = lVar1;
      return false;
    }
  }
  else if (param_2 != 0) {
    lVar1 = param_1;
    FUN_1006b3c90();
    return *(ulong *)(param_1 + 0x18) <= (ulong)(lVar1 - *(long *)(param_1 + 0x10));
  }
  return false;
}



/* Entry: 1006a6394; end: 1006a63ef;  */

bool FUN_1006a6394(long param_1,uint param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    if ((param_2 & 1) == 0) {
      lVar1 = param_1;
      FUN_1006b3c90();
      *(long *)(param_1 + 0x10) = lVar1;
      return false;
    }
  }
  else if (param_2 != 0) {
    lVar1 = param_1;
    FUN_1006b3c90();
    return *(ulong *)(param_1 + 0x18) <= (ulong)(lVar1 - *(long *)(param_1 + 0x10));
  }
  return false;
}



/* Entry: 1006a63f0; end: 1006a63ff;  */

void FUN_1006a63f0(void)

{
  return;
}



/* Entry: 1006a6400; end: 1006a646b;  */

void FUN_1006a6400(long param_1,char *param_2)

{
  if ((param_2[1] == '\x01') && (*(char *)(param_1 + 0x90) == '\x01')) {
    FUN_1006a6324();
    if (*param_2 == '\x01') {
      FUN_10086e2f0(param_1 + 0x88);
    }
  }
  return;
}



/* Entry: 1006a646c; end: 1006a6477;  */

void FUN_1006a646c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001006a6474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x80))();
  return;
}



/* Entry: 1006a6478; end: 1006a64d3;  */

void FUN_1006a6478(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  FUN_1006a646c(*(undefined8 *)(lVar1 + 0x1f0));
                    /* WARNING: Could not recover jumptable at 0x0001006a64a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 0xe0) + 0x2d0))();
  return;
}



/* Entry: 1006a64d4; end: 1006a656f;  */

undefined8 *
FUN_1006a64d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4,
             undefined1 param_5)

{
  *param_1 = param_2;
  FUN_1005fa7a4(param_1 + 1,param_3);
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = param_5;
  FUN_1004b4eb0();
  if (param_4 != 0) {
    FUN_1005fe18c();
    func_0x0001006a5a14();
    func_0x0001006a5a20();
    FUN_1005fe1e0();
  }
  return param_1;
}



/* Entry: 1006a6570; end: 1006a6bcf;  */

void FUN_1006a6570(long *param_1)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *unaff_x20;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined1 auStack_2b0 [40];
  ulong uStack_288;
  ulong uStack_280;
  long *aplStack_270 [2];
  undefined **ppuStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined1 auStack_238 [80];
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [24];
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  byte *pbStack_100;
  undefined1 auStack_f8 [24];
  undefined *puStack_e0;
  long lStack_d8;
  long lStack_d0;
  byte bStack_c1;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long *aplStack_a0 [2];
  undefined1 auStack_90 [24];
  undefined8 *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_250 = 0;
  uStack_248 = 0;
  ppuStack_260 = &PTR_DAT_110a609a8;
  uStack_258 = 0;
  uStack_240 = 0x1f9;
  FUN_1006a64d4(auStack_238,param_1 + 0xf,&ppuStack_260,0,0);
  FUN_1005505e4(&ppuStack_260);
  FUN_1006a6bd0(aplStack_270,param_1 + 1);
  if (aplStack_270[0] != (long *)0x0) {
    (**(code **)(*(long *)param_1[9] + 0x18))(&lStack_180);
    (**(code **)(*(long *)param_1[9] + 0x30))();
    lVar4 = lStack_178;
    uVar9 = (ulong)(lStack_178 - lStack_180) >> 5;
    for (lVar7 = lStack_180; lVar7 != lVar4; lVar7 = lVar7 + 0x20) {
      (**(code **)(*aplStack_270[0] + 0x2a0))(aplStack_270[0],lVar7,*(undefined8 *)(lVar7 + 0x18));
    }
    func_0x0001006a8290(&lStack_180);
    func_0x0001006a82d0();
    (**(code **)(extraout_x8 + 0x20))(&uStack_288);
    uVar12 = 0;
    for (uVar10 = uStack_288; uVar10 != uStack_280; uVar10 = uVar10 + 0x18) {
      FUN_1006a6bd0(aplStack_a0,param_1 + 1);
      if (aplStack_a0[0] != (long *)0x0) {
        lStack_c0 = 0;
        lStack_b8 = 0;
        uStack_b0 = 0;
        func_0x0001006a82d0();
        (**(code **)(extraout_x8_00 + 0x28))(&lStack_180);
        if (lStack_c0 != 0) {
          func_0x000107c2935c(&lStack_c0);
          func_0x000107c60e14(lStack_c0);
        }
        lStack_b8 = lStack_178;
        lStack_c0 = lStack_180;
        uStack_b0 = uStack_170;
        lStack_178 = 0;
        uStack_170 = 0;
        lStack_180 = 0;
        func_0x000107c29360(&lStack_180);
        func_0x0001006a82d0();
        (**(code **)(extraout_x8_01 + 0x30))();
        if (lStack_c0 != lStack_b8) {
          bStack_c1 = 1;
          lVar7 = lStack_c0;
          do {
            if (lVar7 == lStack_b8) break;
            pbStack_100 = &bStack_c1;
            FUN_10054f8dc(auStack_f8,uVar10);
            ppuVar1 = &PTR_PTR_11327f548;
            if (*(undefined ***)(lVar7 + 0x18) != (undefined **)0x0) {
              ppuVar1 = *(undefined ***)(lVar7 + 0x18);
            }
            puStack_e0 = ppuVar1[7];
            lStack_d8 = param_1[3];
            lVar4 = param_1[4];
            if (lVar4 == 0) {
              lStack_d0 = 0;
LAB_1006a6a5c:
              func_0x00010527822c();
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1006a6a64);
              (*pcVar3)();
            }
            func_0x000107c60d6c();
            plVar6 = aplStack_a0[0];
            lStack_d0 = lVar4;
            if (lVar4 == 0) goto LAB_1006a6a5c;
            ppuVar1 = &PTR_PTR_11327f548;
            if (*(undefined ***)(lVar7 + 0x18) != (undefined **)0x0) {
              ppuVar1 = *(undefined ***)(lVar7 + 0x18);
            }
            func_0x000107c290f8(&lStack_180,ppuVar1);
            uStack_198 = 0;
            uStack_1a0 = 0;
            uStack_188 = 0;
            uStack_190 = 0;
            uStack_1a8 = 0;
            uStack_1b0 = 0;
            puVar5 = &uStack_1b0;
            func_0x000107c290dc();
            FUN_10054f908();
            puVar2 = *(undefined8 **)(lVar7 + 0x28);
            lVar4 = 0;
            if (*(undefined8 **)(lVar7 + 0x20) <= puVar2) {
              lVar4 = (long)puVar2 - (long)*(undefined8 **)(lVar7 + 0x20);
            }
            func_0x000107c29364(&uStack_1b0,0,lVar4 * 1000000);
            lVar4 = 0;
            if (puVar2 <= puVar5) {
              lVar4 = (long)puVar5 - (long)puVar2;
            }
            func_0x000107c29364(&uStack_1b0,2,lVar4 * 1000000);
            func_0x000107c29350(&uStack_1e8,&pbStack_100);
            puStack_78 = (undefined8 *)0x0;
            puVar5 = (undefined8 *)0x40;
            func_0x000107c60e20();
            *puVar5 = &PTR_DAT_110a663e0;
            puVar5[1] = uStack_1e8;
            FUN_10054f8dc(puVar5 + 2,auStack_1e0);
            puVar5[5] = uStack_1c8;
            puVar5[7] = uStack_1b8;
            puVar5[6] = uStack_1c0;
            uStack_1c0 = 0;
            uStack_1b8 = 0;
            puStack_78 = puVar5;
            (**(code **)(*plVar6 + 0x298))
                      (plVar6,uVar10,&lStack_180,&uStack_1b0,0x120096,auStack_90);
            func_0x000107c291b4(auStack_90);
            func_0x000107c29354(&uStack_1e8);
            func_0x000107c290e0(&uStack_1b0);
            FUN_10062b3c0(&lStack_180);
            func_0x000107c29354(&pbStack_100);
            lVar7 = lVar7 + 0x30;
          } while ((bStack_c1 & 1) != 0);
          plVar6 = aplStack_a0[0];
          uVar8 = uVar10;
          (**(code **)(*aplStack_a0[0] + 0x290))();
          if ((uVar8 & 1) == 0) {
            plVar6 = (long *)0x0;
          }
          (**(code **)(*param_1 + 0x10))(param_1,uVar10,plVar6);
        }
        func_0x000107c29360(&lStack_c0);
      }
      FUN_10057244c(aplStack_a0);
      uVar12 = (ulong)((int)uVar12 + 1);
    }
    func_0x0001005fb56c(&uStack_288);
    FUN_10002b838(&lStack_180,&DAT_10f4b1795);
    func_0x000100607370(uVar12);
    FUN_10002b838(&pbStack_100,uVar12);
    unaff_x20 = (undefined8 *)&UNK_110a60998;
    func_0x0001006ab058();
    func_0x0001006ab1ac();
    func_0x0001006ab1b4();
    FUN_10002b838(&lStack_180,&UNK_10f4b17a0);
    func_0x000100607370(uVar9);
    FUN_10002b838(&pbStack_100,uVar9);
    func_0x0001006ab058();
    func_0x0001006ab1ac();
    func_0x0001006ab1b4();
    plVar11 = (long *)param_1[0xf];
    func_0x0001006ab1bc();
    FUN_10002b838(auStack_2c8,&DAT_10f4b1795);
    plVar6 = &lStack_180;
    FUN_1005504ac(plVar6,auStack_2c8,uVar12);
    FUN_10002b838(auStack_2e0,&UNK_10f4b17a0);
    FUN_1005504ac(plVar6,auStack_2e0,uVar9);
    func_0x0001005505a0(auStack_2b0,plVar6);
    (**(code **)(*plVar11 + 0x50))(plVar11,auStack_2b0);
    FUN_1005505e4(auStack_2b0);
    func_0x000107c60ca0(auStack_2e0);
    func_0x000107c60ca0(auStack_2c8);
    FUN_1006ab5bc();
    plVar6 = (long *)param_1[0xf];
    func_0x0001006ab1bc();
    (**(code **)(*plVar6 + 0x78))();
    FUN_1006ab5bc();
  }
  FUN_10057244c(aplStack_270);
  FUN_1006ab5c4(auStack_238);
  while( true ) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    func_0x000107c60e78();
    func_0x000107c3290c();
    func_0x000107c29360(&lStack_c0);
    FUN_10057244c(aplStack_a0);
    func_0x0001005fb56c(&uStack_288);
    FUN_10057244c(aplStack_270);
    FUN_1006ab5c4(auStack_238);
    if ((int)param_1 != 1) break;
    func_0x000107c60e38();
    func_0x000107c60e3c();
  }
  func_0x000107c60bd8();
  *extraout_x8_02 = 0;
  extraout_x8_02[1] = 0;
  lVar7 = unaff_x20[1];
  if (lVar7 != 0) {
    func_0x000107c60d6c();
    extraout_x8_02[1] = lVar7;
    if (lVar7 != 0) {
      *extraout_x8_02 = *unaff_x20;
    }
  }
  return;
}



/* Entry: 1006a6bd0; end: 1006a6c0b;  */

void FUN_1006a6bd0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    func_0x000107c60d6c();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 1006a6c0c; end: 1006a6c13;  */

void FUN_1006a6c0c(void)

{
  return;
}



/* Entry: 1006a6c14; end: 1006a6c2f;  */

void FUN_1006a6c14(void)

{
  FUN_1004b59e4();
  return;
}



/* Entry: 1006a6c30; end: 1006a6ffb;  */

void FUN_1006a6c30(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined1 auStack_208 [8];
  undefined8 uStack_200;
  undefined1 auStack_1f8 [32];
  char cStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [48];
  undefined8 uStack_170;
  undefined1 auStack_168 [32];
  undefined1 uStack_148;
  undefined1 auStack_140 [48];
  long alStack_110 [5];
  byte bStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  byte bStack_b8;
  long *plStack_b0;
  undefined1 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [40];
  
  FUN_1006a6c14(*(undefined8 *)(param_2 + 8));
  FUN_1006a70f8(auStack_208);
  (**(code **)(**(long **)(param_2 + 0x18) + 0x10))(*(long **)(param_2 + 0x18),10);
  uStack_170 = 0;
  auStack_168[0] = 0;
  uStack_148 = 0;
  if (cStack_1d8 == '\0') {
    uVar10 = 0;
  }
  else {
    func_0x000108652000(auStack_168,auStack_1f8);
    FUN_1006a72e0(auStack_1f8);
    uVar10 = uStack_170;
  }
  uStack_170 = uStack_200;
  uStack_200 = uVar10;
  FUN_1006a784c(auStack_140,&uStack_170);
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  FUN_1006a784c(auStack_1a0,&uStack_1d0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1006a78b8(&lStack_e0,auStack_140);
  FUN_1006a78b8(alStack_110,auStack_1a0);
  uStack_a8 = 0;
  plStack_b0 = param_1;
  do {
    if ((((bStack_b8 & 1) == 0) && ((bStack_e8 & 1) == 0)) || (lStack_e0 == alStack_110[0])) {
      uStack_a8 = 1;
      FUN_1006a792c(&plStack_b0);
      FUN_1006a7958(alStack_110);
      FUN_1006a7898(&uStack_d8);
      FUN_1006a7958(auStack_1a0);
      func_0x0001006a7960();
      FUN_1006a7958(auStack_140);
      FUN_1006a7958(&uStack_170);
      FUN_1006a796c(auStack_208);
      return;
    }
    if ((bStack_b8 & 1) == 0) {
      uVar10 = *(undefined8 *)(lStack_e0 + 8);
      func_0x000107c60c94(auStack_a0,lStack_e0 + 0x58);
      FUN_1004c3cd0(auStack_88,&UNK_10f2e0451,auStack_a0);
      func_0x000107c313a4(uVar10,0x65,auStack_88);
      func_0x000107c60ca0(auStack_88);
      func_0x000107c60ca0(auStack_a0);
    }
    puVar9 = (undefined8 *)param_1[1];
    if (puVar9 < (undefined8 *)param_1[2]) {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[1] = uStack_d0;
      *puVar9 = uStack_d8;
      puVar9[2] = uStack_c8;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_d8 = 0;
      puVar9[3] = uStack_c0;
      puVar9 = puVar9 + 4;
    }
    else {
      puVar11 = (undefined8 *)*param_1;
      lVar12 = (long)puVar9 - (long)puVar11 >> 5;
      uVar1 = lVar12 + 1;
      if (uVar1 >> 0x3b != 0) {
        func_0x000107c29390();
LAB_1006a6fd8:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1006a6fdc);
        (*pcVar3)();
      }
      uVar7 = param_1[2] - (long)puVar11;
      uVar8 = (long)uVar7 >> 4;
      if (uVar8 <= uVar1) {
        uVar8 = uVar1;
      }
      if (0x7fffffffffffffdf < uVar7) {
        uVar8 = 0x7ffffffffffffff;
      }
      if (uVar8 == 0) {
        lVar4 = 0;
      }
      else {
        if (uVar8 >> 0x3b != 0) {
          func_0x000104bd35f4();
          goto LAB_1006a6fd8;
        }
        lVar4 = uVar8 << 5;
        func_0x000107c60e20();
      }
      uVar10 = uStack_c8;
      puVar2 = (undefined8 *)(lVar4 + ((long)puVar9 - (long)puVar11));
      puVar2[1] = uStack_d0;
      *puVar2 = uStack_d8;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_d8 = 0;
      puVar2[2] = uVar10;
      puVar2[3] = uStack_c0;
      puVar5 = puVar2 + lVar12 * -4;
      for (puVar13 = puVar11; puVar13 != puVar9; puVar13 = puVar13 + 4) {
        func_0x00010865201c(puVar5,puVar13);
        puVar5 = puVar5 + 4;
      }
      for (; puVar11 != puVar9; puVar11 = puVar11 + 4) {
        FUN_100100fec(puVar11);
      }
      puVar9 = puVar2 + 4;
      lVar6 = *param_1;
      *param_1 = (long)(puVar2 + lVar12 * -4);
      param_1[1] = (long)puVar9;
      param_1[2] = lVar4 + uVar8 * 0x20;
      if (lVar6 != 0) {
        func_0x000107c60e14();
      }
    }
    param_1[1] = (long)puVar9;
    FUN_1006a726c(&lStack_e0);
  } while( true );
}



/* Entry: 1006a6ffc; end: 1006a701f;  */

void FUN_1006a6ffc(undefined8 param_1)

{
  long unaff_x29;
  undefined8 uStack0000000000000008;
  undefined1 uStack0000000000000010;
  
  *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack0000000000000010 = 1;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex4lockEv_110346780)();
  return;
}



/* Entry: 1006a7020; end: 1006a70f7;  */

long FUN_1006a7020(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long *plVar5;
  long unaff_x19;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined1 auStack_d8 [16];
  undefined **appuStack_c8 [17];
  undefined8 uStack_40;
  
  FUN_1006a6ffc();
  plVar5 = (long *)(unaff_x19 + 0x68);
  do {
    lVar4 = *plVar5;
    uVar1 = lVar4 == unaff_x19 + 0x60;
    if ((bool)uVar1) {
      FUN_10054bf64(auStack_d8);
      lVar4 = (long)*(char *)(unaff_x19 + 0x5f);
      if (lVar4 < 0) {
        lVar3 = *(long *)(unaff_x19 + 0x48);
        lVar4 = *(long *)(unaff_x19 + 0x50);
      }
      else {
        lVar3 = unaff_x19 + 0x48;
      }
      FUN_10054bfa4(appuStack_c8,*(undefined8 *)(unaff_x19 + 0x40),lVar3,lVar4);
      appuStack_c8[0] = &PTR_DAT_110a60310;
      uStack_40 = 0;
      FUN_10054c0f8(auStack_d8);
      param_1 = 0xa0;
      func_0x000107c60e20();
      func_0x0001006a711c();
      func_0x0001006a712c();
      goto LAB_1006a70bc;
    }
    plVar5 = (long *)(lVar4 + 8);
  } while (*(long *)(lVar4 + 0x98) != 0);
  uVar1 = unaff_x19 + 0x60 == *plVar5;
  if (!(bool)uVar1) {
    func_0x000108652294();
  }
LAB_1006a70bc:
  lVar4 = *(long *)(unaff_x19 + 0x60);
  *(long *)(lVar4 + 0x98) = unaff_x19;
  func_0x0001006a715c();
  func_0x0001006a7164();
  if ((bool)uVar1) {
    return lVar4 + 0x10;
  }
  func_0x000107c60e78();
  uVar2 = param_1;
  func_0x0001006a715c();
  func_0x00010865228c();
  pcStack_e8 = FUN_1006a70f8;
  lStack_100 = lVar4;
  uStack_f8 = param_1;
  puStack_f0 = &stack0xfffffffffffffff0;
  FUN_1006a7020();
  lVar4 = extraout_x8;
  uStack_108 = uVar2;
  FUN_1006a719c(extraout_x8,&uStack_108);
  return lVar4;
}



/* Entry: 1006a70f8; end: 1006a711b;  */

void FUN_1006a70f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  FUN_1006a7020();
  uStack_28 = param_2;
  FUN_1006a719c(param_1,&uStack_28);
  return;
}



/* Entry: 1006a711c; end: 1006a719b;  */

void FUN_1006a711c(long param_1)

{
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_110d99f30;
  *(undefined8 *)(param_1 + 0x18) = in_stack_00000020;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x78) = in_stack_00000080;
  *(undefined8 *)(param_1 + 0x70) = in_stack_00000078;
  *(undefined8 *)(param_1 + 0x68) = in_stack_00000070;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = in_stack_00000090;
  *(undefined8 *)(param_1 + 0x90) = in_stack_00000098;
  return;
}



/* Entry: 1006a719c; end: 1006a71cb;  */

void FUN_1006a719c(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined1 auStack_28 [8];
  
  func_0x0001006a718c();
  *param_1 = extraout_x8;
  FUN_1006a722c(param_1 + 1,auStack_28);
  return;
}



/* Entry: 1006a71cc; end: 1006a722b;  */

void FUN_1006a71cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  FUN_1006a719c(param_1,&uStack_28);
  return;
}



/* Entry: 1006a722c; end: 1006a726b;  */

void FUN_1006a722c(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x0001006a718c();
  *param_1 = extraout_x8;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_1006a726c();
  return;
}



/* Entry: 1006a726c; end: 1006a72df;  */

void FUN_1006a726c(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_40 [32];
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (FUN_10054c3a4(), (int)lVar1 != 0)) {
    func_0x000108651f84(auStack_40,*param_1);
    func_0x000108651f50(param_1 + 1,auStack_40);
    FUN_100100fec(auStack_40);
    return;
  }
  plVar2 = param_1 + 1;
  if ((char)param_1[5] == '\x01') {
    FUN_100100fec();
    *(undefined1 *)(plVar2 + 4) = 0;
  }
  return;
}



/* Entry: 1006a72e0; end: 1006a7303;  */

void FUN_1006a72e0(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_100100fec();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 1006a7304; end: 1006a731b;  */

void FUN_1006a7304(void)

{
  return;
}



/* Entry: 1006a731c; end: 1006a73a3;  */

void FUN_1006a731c(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  long unaff_x19;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  func_0x0001006a7310();
  func_0x000107c60d88();
  uStack_24 = 1;
  puVar1 = (undefined4 *)(unaff_x19 + 0x18);
  FUN_1006a751c(puVar1,&uStack_24);
  *puVar1 = 0;
  if (param_2 - 4U < 0xe) {
    uStack_28 = *(undefined4 *)(&UNK_10df60244 + (ulong)(param_2 - 4U) * 4);
  }
  else {
    uStack_28 = 3;
  }
  puVar1 = (undefined4 *)(unaff_x19 + 0x18);
  FUN_1006a751c(puVar1,&uStack_28);
  *puVar1 = 0;
  func_0x000107c60d8c(unaff_x19 + 0x40);
  return;
}



/* Entry: 1006a73a4; end: 1006a751b;  */

undefined1  [16] FUN_1006a73a4(undefined8 param_1,undefined8 param_2,long *param_3,int *param_4)

{
  int iVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar5;
  undefined8 extraout_x8_01;
  ulong extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar6;
  ulong uVar7;
  ulong extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  ulong extraout_x9_02;
  ulong uVar8;
  long *unaff_x21;
  long *plVar9;
  ulong uVar10;
  ulong unaff_x23;
  undefined1 auVar11 [16];
  
  func_0x000100567124();
  iVar1 = *param_4;
  uVar8 = (ulong)iVar1;
  uVar10 = param_3[1];
  if (uVar10 != 0) {
    func_0x0001006a7774();
    if ((bool)in_ZR) {
      unaff_x23 = extraout_x8 & uVar8;
    }
    else {
      in_NG = (long)(uVar10 - uVar8) < 0;
      unaff_x23 = uVar8;
      if (uVar10 <= uVar8) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = uVar8 / uVar10;
        }
        unaff_x23 = uVar8 - uVar5 * uVar10;
      }
    }
    plVar9 = *(long **)(*param_3 + unaff_x23 * 8);
    unaff_x21 = (long *)0x0;
    uVar5 = extraout_x8;
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar9;
          if (unaff_x21 == (long *)0x0) goto LAB_1006a7444;
          uVar7 = unaff_x21[1];
          plVar9 = unaff_x21;
          if (uVar7 != uVar8) break;
          in_NG = *(int *)(unaff_x21 + 2) - iVar1 < 0;
          if (*(int *)(unaff_x21 + 2) == iVar1) {
            uVar4 = 0;
            goto LAB_1006a7504;
          }
        }
        if ((uVar10 & uVar5) == 0) {
          uVar7 = uVar7 & uVar5;
        }
        else if (uVar10 <= uVar7) {
          func_0x000107c33c78();
          uVar5 = extraout_x8_00;
          uVar7 = extraout_x9;
        }
        in_NG = (long)(uVar7 - unaff_x23) < 0;
      } while (uVar7 == unaff_x23);
    }
  }
LAB_1006a7444:
  FUN_1004a6410(&stack0x00000008);
  FUN_1006a7550();
  func_0x000100566b0c();
  if ((uVar10 == 0) || (FUN_100566bbc(param_1,param_2,(float)uVar10), (bool)in_NG)) {
    FUN_1006a7598();
    bVar2 = 2 < uVar10;
    uVar3 = uVar10 == 3;
    func_0x00010054f5d8();
    uVar4 = extraout_x8_01;
    if (!bVar2 || (bool)uVar3) {
      uVar4 = extraout_x9_00;
    }
    FUN_1006a75b0(param_3,uVar4);
    uVar10 = param_3[1];
    func_0x0001006a7774();
    if ((bool)uVar3) {
      unaff_x23 = extraout_x8_02 & uVar8;
    }
    else {
      unaff_x23 = uVar8;
      if (uVar10 <= uVar8) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = uVar8 / uVar10;
        }
        unaff_x23 = uVar8 - uVar5 * uVar10;
      }
    }
  }
  if (*(long *)(*param_3 + unaff_x23 * 8) == 0) {
    func_0x0001006a7780();
    if (extraout_x9_01 != 0) {
      uVar8 = *(ulong *)(extraout_x9_01 + 8);
      lVar6 = extraout_x8_03;
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar8 = uVar8 & uVar10 - 1;
      }
      else if (uVar10 <= uVar8) {
        func_0x000107c33c78();
        lVar6 = extraout_x8_04;
        uVar8 = extraout_x9_02;
      }
      *(long **)(lVar6 + uVar8 * 8) = unaff_x21;
    }
  }
  else {
    func_0x000107c33c6c();
  }
  func_0x000100566b70();
  FUN_1006a77b8();
  uVar4 = 1;
LAB_1006a7504:
  auVar11._8_8_ = uVar4;
  auVar11._0_8_ = unaff_x21;
  return auVar11;
}



/* Entry: 1006a751c; end: 1006a754f;  */

long FUN_1006a751c(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_1006a73a4(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x14;
}



/* Entry: 1006a7550; end: 1006a7597;  */

void FUN_1006a7550(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  
  puVar1 = param_2 + 2;
  func_0x000100566b04();
  *param_1 = param_2;
  param_1[1] = puVar1;
  param_1[2] = 1;
  *param_2 = 0;
  param_2[1] = param_3;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)*param_5;
  *(undefined4 *)((long)param_2 + 0x14) = 0;
  return;
}



/* Entry: 1006a7598; end: 1006a75af;  */

void FUN_1006a7598(void)

{
  return;
}



/* Entry: 1006a75b0; end: 1006a7657;  */

void FUN_1006a75b0(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong uVar5;
  ulong extraout_x10;
  long *plVar6;
  long *plVar7;
  long *extraout_x11;
  long *plVar8;
  
  plVar2 = param_1;
  plVar3 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    func_0x000107c60c44();
    plVar2 = param_2;
  }
  plVar8 = (long *)param_1[1];
  if (param_2 <= plVar8) {
    if (param_2 < plVar8) {
      func_0x000107c33a94();
      if ((plVar8 < (long *)0x3) || (((ulong)plVar8 & (long)plVar8 - 1U) != 0)) {
        func_0x000107c60c44();
      }
      else {
        func_0x000107c33b28();
        func_0x000107c33c70(1L << (extraout_x8 & 0x3f));
      }
      if (param_2 <= plVar2) {
        param_2 = plVar2;
      }
      if (param_2 < plVar8) goto LAB_1006a75f8;
    }
    return;
  }
LAB_1006a75f8:
  FUN_1004a6410();
  if (plVar3 == (long *)0x0) {
    FUN_1006a775c(plVar2);
    plVar2[1] = 0;
  }
  else {
    plVar8 = plVar2 + 1;
    FUN_1006a7658(plVar8);
    FUN_1006a775c(plVar2,plVar8);
    plVar8 = (long *)0x0;
    plVar2[1] = (long)plVar3;
    lVar4 = *plVar2;
    while (plVar3 != plVar8) {
      func_0x00010054f608();
      lVar4 = extraout_x8_00;
      plVar8 = extraout_x9;
    }
    plVar8 = (long *)plVar2[2];
    if (plVar8 != (long *)0x0) {
      plVar6 = (long *)plVar8[1];
      uVar5 = (long)plVar3 - 1;
      uVar1 = 0;
      if (plVar3 != (long *)0x0) {
        uVar1 = (ulong)plVar6 / (ulong)plVar3;
      }
      plVar7 = plVar6;
      if (plVar3 <= plVar6) {
        plVar7 = (long *)((long)plVar6 - uVar1 * (long)plVar3);
      }
      if (((ulong)plVar3 & uVar5) == 0) {
        plVar7 = (long *)((ulong)plVar6 & uVar5);
      }
      *(long **)(lVar4 + (long)plVar7 * 8) = plVar2 + 2;
      while (plVar2 = plVar8, plVar8 = (long *)*plVar2, plVar8 != (long *)0x0) {
        plVar6 = (long *)plVar8[1];
        if (((ulong)plVar3 & uVar5) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar5);
        }
        else if (plVar3 <= plVar6) {
          uVar1 = 0;
          if (plVar3 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)plVar3;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar3);
        }
        if (plVar6 != plVar7) {
          if (*(long *)(lVar4 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar4 + (long)plVar6 * 8) = plVar2;
            plVar7 = plVar6;
          }
          else {
            *plVar2 = *plVar8;
            func_0x000107c33914();
            lVar4 = extraout_x8_01;
            plVar8 = extraout_x9_00;
            uVar5 = extraout_x10;
            plVar7 = extraout_x11;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1006a7658; end: 1006a7673;  */

void FUN_1006a7658(long *param_1,ulong param_2)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long *plVar3;
  long *plVar4;
  long *extraout_x9_00;
  ulong uVar5;
  ulong extraout_x10;
  ulong uVar6;
  ulong uVar7;
  ulong extraout_x11;
  
  if (param_2 >> 0x3d != 0) {
    func_0x000104bd35f4();
    if (param_2 == 0) {
      FUN_1006a775c(param_1);
      param_1[1] = 0;
    }
    else {
      plVar3 = param_1 + 1;
      FUN_1006a7658(plVar3);
      FUN_1006a775c(param_1,plVar3);
      uVar2 = 0;
      param_1[1] = param_2;
      lVar1 = *param_1;
      while (param_2 != uVar2) {
        func_0x00010054f608();
        lVar1 = extraout_x8;
        uVar2 = extraout_x9;
      }
      plVar3 = (long *)param_1[2];
      if (plVar3 != (long *)0x0) {
        uVar6 = plVar3[1];
        uVar5 = param_2 - 1;
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = uVar6 / param_2;
        }
        uVar7 = uVar6;
        if (param_2 <= uVar6) {
          uVar7 = uVar6 - uVar2 * param_2;
        }
        if ((param_2 & uVar5) == 0) {
          uVar7 = uVar6 & uVar5;
        }
        *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
        while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
          uVar2 = plVar3[1];
          if ((param_2 & uVar5) == 0) {
            uVar2 = uVar2 & uVar5;
          }
          else if (param_2 <= uVar2) {
            uVar6 = 0;
            if (param_2 != 0) {
              uVar6 = uVar2 / param_2;
            }
            uVar2 = uVar2 - uVar6 * param_2;
          }
          if (uVar2 != uVar7) {
            if (*(long *)(lVar1 + uVar2 * 8) == 0) {
              *(long **)(lVar1 + uVar2 * 8) = plVar4;
              uVar7 = uVar2;
            }
            else {
              *plVar4 = *plVar3;
              func_0x000107c33914();
              lVar1 = extraout_x8_00;
              plVar3 = extraout_x9_00;
              uVar5 = extraout_x10;
              uVar7 = extraout_x11;
            }
          }
        }
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 << 3);
  return;
}



/* Entry: 1006a7674; end: 1006a775b;  */

void FUN_1006a7674(long *param_1,ulong param_2)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long *plVar3;
  long *plVar4;
  long *extraout_x9_00;
  ulong uVar5;
  ulong extraout_x10;
  ulong uVar6;
  ulong uVar7;
  ulong extraout_x11;
  
  if (param_2 == 0) {
    FUN_1006a775c(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_1006a7658(plVar3);
    FUN_1006a775c(param_1,plVar3);
    uVar2 = 0;
    param_1[1] = param_2;
    lVar1 = *param_1;
    while (param_2 != uVar2) {
      func_0x00010054f608();
      lVar1 = extraout_x8;
      uVar2 = extraout_x9;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            func_0x000107c33914();
            lVar1 = extraout_x8_00;
            plVar3 = extraout_x9_00;
            uVar5 = extraout_x10;
            uVar7 = extraout_x11;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1006a775c; end: 1006a77b7;  */

void FUN_1006a775c(long *param_1,long param_2)

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



/* Entry: 1006a77b8; end: 1006a77db;  */

undefined8 FUN_1006a77b8(undefined8 param_1)

{
  func_0x0001006a77a0(param_1,0);
  return param_1;
}



/* Entry: 1006a77dc; end: 1006a780f;  */

void FUN_1006a77dc(void)

{
  return;
}



/* Entry: 1006a7810; end: 1006a784b;  */

void FUN_1006a7810(long param_1,long param_2)

{
  long unaff_x19;
  
  func_0x0001006a77fc();
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(unaff_x19 + 0x28) = 0;
  if (*(char *)(param_2 + 0x28) == '\x01') {
    func_0x000108652000((undefined1 *)(param_1 + 8),param_2 + 8);
  }
  return;
}



/* Entry: 1006a784c; end: 1006a788f;  */

void FUN_1006a784c(undefined8 param_1)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [40];
  
  FUN_1006a7810(auStack_50);
  FUN_1006a7810(param_1,auStack_50);
  FUN_1006a7898(auStack_48);
  return;
}



/* Entry: 1006a7890; end: 1006a7897;  */

void FUN_1006a7890(void)

{
  return;
}



/* Entry: 1006a7898; end: 1006a78b7;  */

void FUN_1006a7898(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_100100fec();
  }
  return;
}



/* Entry: 1006a78b8; end: 1006a792b;  */

void FUN_1006a78b8(long param_1,long param_2)

{
  long unaff_x19;
  
  func_0x0001006a77fc();
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_10054f8dc((undefined1 *)(param_1 + 8),param_2 + 8);
    *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined1 *)(unaff_x19 + 0x28) = 1;
  }
  return;
}



/* Entry: 1006a792c; end: 1006a7957;  */

long FUN_1006a792c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_1006a8254(param_1);
  }
  return param_1;
}



/* Entry: 1006a7958; end: 1006a796b;  */

void FUN_1006a7958(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_100100fec();
  }
  return;
}



/* Entry: 1006a796c; end: 1006a79d7;  */

undefined8 * FUN_1006a796c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  param_1[1] = 0;
  if (*(char *)(param_1 + 6) != '\0') {
    FUN_1006a72e0(param_1 + 2);
  }
  FUN_1006a7898((ulong)&uStack_50 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  FUN_10054cac4(uVar1);
  FUN_1006a7898(param_1 + 2);
  return param_1;
}



/* Entry: 1006a79d8; end: 1006a79e7;  */

void FUN_1006a79d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex4lockEv_110346780)(*(undefined8 *)(param_1 + 0x88));
  return;
}



/* Entry: 1006a79e8; end: 1006a7a0b;  */

void FUN_1006a79e8(void)

{
  long unaff_x19;
  
  FUN_1006a79d8();
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1006a7a0c; end: 1006a7a17;  */

undefined8 FUN_1006a7a0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1006a7a18; end: 1006a7a87;  */

void FUN_1006a7a18(long param_1)

{
  code *extraout_x8;
  
  FUN_1006a7a0c();
  FUN_1006a6c14();
  FUN_1006204e0(param_1 + 0x200);
  FUN_1006a8238();
  (*extraout_x8)();
  return;
}


