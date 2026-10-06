/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1005772c0; end: 1005773a3; +[SCSCOREAppInfo descriptor] */

void FUN_1005772c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7600 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c7e1f0,
                        &PTR____CFConstantStringClassReference_110f43fd8,&PTR_DAT_1133b95b8,
                        &PTR_s_appVersion_1133b96b0,6,0x28,0x1c);
    puRam00000001137f7600 = puVar1;
  }
  return;
}



/* Entry: 1005773a4; end: 1005773d7;  */

void FUN_1005773a4(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 1005773d8; end: 100577447;  */

undefined8 * FUN_1005773d8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong extraout_x8;
  
  *param_1 = &PTR_DAT_110d11598;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  if (param_1 != param_2) {
    uVar1 = param_2[1];
    if ((uVar1 & 1) != 0) {
      func_0x000107c33ba0();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      FUN_100577448(param_1);
    }
    else {
      func_0x000107c305ec(param_1);
    }
  }
  *(undefined1 *)(param_1 + 6) = 1;
  return param_1;
}



/* Entry: 100577448; end: 10057746f;  */

undefined1  [16] FUN_100577448(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x10);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x10); puVar2 != (undefined1 *)(param_1 + 0x2c);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x2c);
  return auVar6;
}



/* Entry: 100577470; end: 10057749b;  */

long FUN_100577470(long param_1)

{
  FUN_1001a3db4(param_1 + 8);
  return param_1;
}



/* Entry: 10057749c; end: 1005777af;  */

void FUN_10057749c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long *in_x7;
  long *plVar8;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 uVar9;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  if ((((*(char *)(in_stack_00000010 + 0x30) == '\x01') &&
       ((*(byte *)(in_stack_00000010 + 0x10) & 1) != 0)) &&
      (uStack_88._4_4_ = *(uint *)(in_stack_00000010 + 0x20), 99 < uStack_88._4_4_)) &&
     ((*(int *)(in_stack_00000010 + 0x24) - 1U < 999 && *(int *)(in_stack_00000010 + 0x18) != 0) &&
      *(int *)(in_stack_00000010 + 0x1c) != 0)) {
    uStack_88._0_4_ = 10;
    puStack_80 = (undefined8 *)CONCAT44(puStack_80._4_4_,*(int *)(in_stack_00000010 + 0x24));
    lVar4 = 0xe8;
    func_0x000107c60e20();
    FUN_1005777c0();
    lVar5 = 0xf0;
    func_0x000107c60e20();
    uVar9 = in_stack_00000008;
    FUN_100577944();
    uStack_88 = (undefined8 *)CONCAT44(uStack_88._4_4_,*(undefined4 *)(in_stack_00000010 + 0x28));
    lVar6 = 0xc0;
    func_0x000107c60e20();
    FUN_100577b24();
    puStack_a0 = (undefined8 *)(*(ulong *)(in_stack_00000010 + 0x18) & 0xffffffff);
    puStack_98 = (undefined8 *)(*(ulong *)(in_stack_00000010 + 0x18) >> 0x20);
    puVar7 = (undefined8 *)0xf0;
    func_0x000107c60e20();
    plVar8 = puVar7 + 1;
    *plVar8 = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_DAT_110a798a8;
    puVar3 = puVar7 + 3;
    lStack_78 = lVar4;
    lStack_70 = lVar6;
    lStack_68 = lVar5;
    FUN_100577c88(puVar3,param_3,param_4,in_stack_00000008,&lStack_68,&lStack_70,&lStack_78,
                  &puStack_a0,uVar9);
    if (lStack_78 != 0) {
      func_0x000107c33c94();
    }
    if (lStack_70 != 0) {
      func_0x000107c33c94();
    }
    if (lStack_68 != 0) {
      func_0x000107c33c94();
    }
    lVar4 = *in_x7;
    puStack_a0 = puVar7 + 4;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    puStack_98 = puVar7;
    uStack_88 = puVar3;
    puStack_80 = puVar7;
    FUN_10054e4b4(lVar4 + 0x18,&puStack_a0);
    FUN_10054e7c0(&puStack_a0);
    *param_1 = (long)puVar3;
    param_1[1] = (long)puVar7;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    func_0x000100577f08(&uStack_88);
  }
  else {
    puVar3 = (undefined8 *)0x20;
    func_0x000107c60e20();
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_DAT_110a79810;
    param_1[1] = (long)puVar3;
    puVar3[3] = &PTR_DAT_110a79860;
    *param_1 = (long)(puVar3 + 3);
  }
  return;
}



/* Entry: 1005777b0; end: 1005777bf;  */

void FUN_1005777b0(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1005777c0; end: 100577933;  */

undefined8 *
FUN_1005777c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined1 auStack_68 [24];
  
  *param_1 = &PTR_DAT_110a61d18;
  uVar1 = *param_8;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_8 + 1);
  param_1[1] = uVar1;
  lVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar1;
  if (lVar2 != 0) {
    do {
      FUN_1005777b0();
    } while (extraout_w10 != 0);
  }
  lVar2 = param_3[1];
  uVar1 = *param_3;
  param_1[6] = param_3[1];
  param_1[5] = uVar1;
  if (lVar2 != 0) {
    do {
      FUN_1005777b0();
    } while (extraout_w10_00 != 0);
  }
  lVar2 = param_4[1];
  uVar1 = *param_4;
  param_1[8] = param_4[1];
  param_1[7] = uVar1;
  if (lVar2 != 0) {
    do {
      FUN_1005777b0();
    } while (extraout_w10_01 != 0);
  }
  lVar2 = param_5[1];
  uVar1 = *param_5;
  param_1[10] = param_5[1];
  param_1[9] = uVar1;
  if (lVar2 != 0) {
    do {
      FUN_1005777b0();
    } while (extraout_w10_02 != 0);
  }
  lVar2 = param_7[1];
  uVar1 = *param_7;
  param_1[0xc] = param_7[1];
  param_1[0xb] = uVar1;
  if (lVar2 != 0) {
    do {
      FUN_1005777b0();
    } while (extraout_w10_03 != 0);
  }
  FUN_10002b838(auStack_68,&UNK_10f4aff98);
  FUN_1005549b0(param_1 + 0xd,param_6,auStack_68);
  func_0x000107c60ca0(auStack_68);
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return param_1;
}



/* Entry: 100577934; end: 100577943;  */

void FUN_100577934(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100577944; end: 100577b13;  */

undefined8 *
FUN_100577944(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8,
             undefined8 *param_9)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 uVar5;
  undefined1 auStack_78 [24];
  
  *param_1 = &PTR_DAT_110a62878;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar5;
  if (lVar4 != 0) {
    do {
      FUN_100577934();
    } while (extraout_w10 != 0);
  }
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar5;
  if (lVar4 != 0) {
    do {
      FUN_100577934();
    } while (extraout_w10_00 != 0);
  }
  lVar4 = param_4[1];
  uVar5 = *param_4;
  param_1[6] = param_4[1];
  param_1[5] = uVar5;
  if (lVar4 != 0) {
    do {
      FUN_100577934();
    } while (extraout_w10_01 != 0);
  }
  lVar4 = param_6[1];
  uVar5 = *param_6;
  param_1[8] = param_6[1];
  param_1[7] = uVar5;
  if (lVar4 != 0) {
    do {
      FUN_100577934();
    } while (extraout_w10_02 != 0);
  }
  lVar4 = param_5[1];
  uVar5 = *param_5;
  param_1[10] = param_5[1];
  param_1[9] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = param_7[1];
  uVar5 = *param_7;
  param_1[0xc] = param_7[1];
  param_1[0xb] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = param_9[1];
  uVar5 = *param_9;
  param_1[0xe] = param_9[1];
  param_1[0xd] = uVar5;
  if (lVar4 != 0) {
    do {
      FUN_100577934();
    } while (extraout_w10_03 != 0);
  }
  FUN_10002b838(auStack_78,&UNK_10f4b0494);
  FUN_1005549b0(param_1 + 0xf,param_8,auStack_78);
  func_0x000107c60ca0(auStack_78);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  return param_1;
}



/* Entry: 100577b14; end: 100577b23;  */

void FUN_100577b14(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100577b24; end: 100577c87;  */

undefined8 *
FUN_100577b24(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined4 *param_8)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 uVar2;
  undefined1 auStack_68 [24];
  
  *param_1 = &PTR_DAT_110a61d70;
  *(undefined4 *)(param_1 + 1) = *param_8;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_100577b14();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_3[1];
  uVar2 = *param_3;
  param_1[5] = param_3[1];
  param_1[4] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_100577b14();
    } while (extraout_w10_00 != 0);
  }
  lVar1 = param_4[1];
  uVar2 = *param_4;
  param_1[7] = param_4[1];
  param_1[6] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_100577b14();
    } while (extraout_w10_01 != 0);
  }
  lVar1 = param_5[1];
  uVar2 = *param_5;
  param_1[9] = param_5[1];
  param_1[8] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_100577b14();
    } while (extraout_w10_02 != 0);
  }
  lVar1 = param_6[1];
  uVar2 = *param_6;
  param_1[0xb] = param_6[1];
  param_1[10] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_100577b14();
    } while (extraout_w10_03 != 0);
  }
  FUN_10002b838(auStack_68,&UNK_10f4affb1);
  FUN_1005549b0(param_1 + 0xc,param_7,auStack_68);
  func_0x000107c60ca0(auStack_68);
  return param_1;
}



/* Entry: 100577c88; end: 100577e1f;  */

undefined8 *
FUN_100577c88(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  long lVar1;
  undefined8 uVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [24];
  
  param_1[1] = &PTR_DAT_110a62640;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_DAT_110a62600;
  lVar1 = param_3[1];
  uVar2 = *param_3;
  param_1[5] = param_3[1];
  param_1[4] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001005723b4();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_4[1];
  uVar2 = *param_4;
  param_1[7] = param_4[1];
  param_1[6] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001005723b4();
    } while (extraout_w10_00 != 0);
  }
  uVar2 = *param_5;
  *param_5 = 0;
  param_1[8] = uVar2;
  uVar2 = *param_6;
  *param_6 = 0;
  param_1[9] = uVar2;
  uVar2 = *param_7;
  *param_7 = 0;
  param_1[10] = uVar2;
  uVar3 = param_8[1];
  uVar2 = *param_8;
  param_1[0xd] = 0;
  param_1[0xc] = uVar3;
  param_1[0xb] = uVar2;
  param_1[0xe] = 0;
  FUN_10002b838(auStack_78,&UNK_10f4b047d);
  FUN_1005549b0(param_1 + 0xf,param_2,auStack_78);
  func_0x000107c60ca0(auStack_78);
  FUN_100577e20(auStack_88,1);
  puStack_98 = param_1 + 0xd;
  puStack_90 = param_1 + 0xe;
  FUN_100577eb0(&puStack_98,auStack_88);
  func_0x000100577ee0(auStack_88);
  return param_1;
}



/* Entry: 100577e20; end: 100577e93;  */

void FUN_100577e20(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0xf0;
  func_0x000107c60e20();
  FUN_100577e94();
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  *param_1 = uVar1;
  param_1[1] = uVar1;
  func_0x000100555218(&uStack_38);
  func_0x000100555218(&uStack_40);
  FUN_100555248(&uStack_28);
  FUN_100555248(&uStack_30);
  return;
}



/* Entry: 100577e94; end: 100577eaf;  */

undefined8 *
FUN_100577e94(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_DAT_110d9aa10;
  param_1[1] = param_4;
  param_1[3] = 0;
  *(int *)(param_1 + 4) = (int)param_3;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0x14] = param_3;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  func_0x000107c610a0();
  param_1[0x18] = param_3;
  param_1[0x19] = &UNK_10868844c;
  param_1[0x1a] = 1;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  return param_1;
}



/* Entry: 100577eb0; end: 100577f33;  */

void FUN_100577eb0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 unaff_x19;
  
  FUN_100555284(*param_1);
  plVar1 = (long *)param_1[1];
  FUN_100555278(plVar1,param_2 + 8);
  if (*plVar1 != 0) {
    func_0x000107c28a34(unaff_x19);
  }
  FUN_1005552b0();
  return;
}



/* Entry: 100577f34; end: 100577f53;  */

void FUN_100577f34(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_100577470();
  }
  return;
}



/* Entry: 100577f54; end: 100577f9b;  */

void FUN_100577f54(long param_1)

{
  func_0x00010054ffe4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100577f9c; end: 100577feb;  */

void FUN_100577f9c(undefined8 param_1)

{
  int extraout_w10;
  long unaff_x21;
  
  func_0x000100555540();
  if (unaff_x21 != 0) {
    do {
      FUN_1005555a0();
    } while (extraout_w10 != 0);
  }
  func_0x0001005555b0(param_1,&UNK_10f4bd240);
  func_0x0001005555b8();
  func_0x0001005555dc();
  func_0x0001005555ec();
  return;
}



/* Entry: 100577fec; end: 100577ff7;  */

void FUN_100577fec(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  int extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 unaff_x24;
  undefined8 in_stack_00001080;
  long in_stack_00001088;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar1 = param_1;
  func_0x000100552a58();
  func_0x000100558b94();
  func_0x000100550030(&PTR_DAT_110a77e30);
  uStack_60 = param_2;
  lStack_58 = param_3;
  if (param_3 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10 != 0);
    puVar1[4] = 0;
    puVar1[5] = 0;
    do {
      func_0x0001004a0330();
    } while (extraout_w10_00 != 0);
  }
  puVar1[3] = &PTR_DAT_110a77e80;
  puVar1[6] = param_2;
  puVar1[7] = param_3;
  puVar1[9] = in_stack_00001088;
  puVar1[8] = in_stack_00001080;
  if (in_stack_00001088 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_01 != 0);
  }
  *(undefined1 *)(puVar1 + 10) = 0;
  FUN_100574ddc(&uStack_60);
  *param_1 = unaff_x24;
  param_1[1] = puVar1;
  do {
    func_0x00010055b170();
  } while (extraout_w9 != 0);
  do {
    func_0x0001004a0330();
  } while (extraout_w10_02 != 0);
  uStack_60 = 0;
  lStack_58 = 0;
  puVar1[4] = unaff_x24;
  puVar1[5] = puVar1;
  FUN_1005780dc(&uStack_60);
  FUN_100578100();
  return;
}



/* Entry: 100577ff8; end: 1005780db;  */

void FUN_100577ff8(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 unaff_x24;
  undefined8 uVar3;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar1 = param_1;
  func_0x000100552a58();
  func_0x000100558b94();
  func_0x000100550030(&PTR_DAT_110a77e30);
  uStack_60 = param_2;
  lStack_58 = param_3;
  if (param_3 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10 != 0);
    puVar1[4] = 0;
    puVar1[5] = 0;
    do {
      func_0x0001004a0330();
    } while (extraout_w10_00 != 0);
  }
  puVar1[3] = &PTR_DAT_110a77e80;
  puVar1[6] = param_2;
  puVar1[7] = param_3;
  lVar2 = param_4[1];
  uVar3 = *param_4;
  puVar1[9] = param_4[1];
  puVar1[8] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_01 != 0);
  }
  *(undefined1 *)(puVar1 + 10) = 0;
  FUN_100574ddc(&uStack_60);
  *param_1 = unaff_x24;
  param_1[1] = puVar1;
  do {
    func_0x00010055b170();
  } while (extraout_w9 != 0);
  do {
    func_0x0001004a0330();
  } while (extraout_w10_02 != 0);
  uStack_60 = 0;
  lStack_58 = 0;
  puVar1[4] = unaff_x24;
  puVar1[5] = puVar1;
  FUN_1005780dc(&uStack_60);
  FUN_100578100();
  return;
}



/* Entry: 1005780dc; end: 1005780ff;  */

void FUN_1005780dc(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 100578100; end: 100578107;  */

void FUN_100578100(void)

{
  FUN_1000dfb88();
  if ((undefined1 *)register0x00000008 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100578108; end: 10057812b;  */

void FUN_100578108(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10057812c; end: 10057813f;  */

void FUN_10057812c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_10049cac0();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  return;
}



/* Entry: 100578140; end: 100578173;  */

undefined1 * FUN_100578140(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x28] = 0;
  FUN_10057812c();
  return param_1;
}



/* Entry: 100578174; end: 10057818f;  */

void FUN_100578174(long param_1)

{
  FUN_10049cac0();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 100578190; end: 10057819b;  */

void FUN_100578190(void)

{
  return;
}



/* Entry: 10057819c; end: 100578213;  */

void FUN_10057819c(void)

{
  uint extraout_w8;
  
  FUN_100578190();
  if ((extraout_w8 & 1) == 0) {
    FUN_1005f1c5c();
  }
  return;
}



/* Entry: 100578214; end: 10057821f;  */

long FUN_100578214(long param_1)

{
  return param_1 + 0x18;
}



/* Entry: 100578220; end: 100578297;  */

long FUN_100578220(void)

{
  code *pcVar1;
  long unaff_x19;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  FUN_100578214();
  FUN_100578298();
  func_0x000107c60d88();
  func_0x0001005782a8();
  lVar2 = *(long *)(unaff_x19 + 0x10);
  uStack_48 = 0;
  func_0x0001005ee520();
  if (lVar2 == 0) {
    func_0x0001005ee528();
    return unaff_x19 + 0x8c;
  }
  func_0x000107c33c54();
  func_0x000107c60e08(auStack_50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100578280);
  (*pcVar1)();
}



/* Entry: 100578298; end: 1005782b3;  */

void FUN_100578298(void)

{
  return;
}



/* Entry: 1005782b4; end: 1005783ab;  */

undefined * FUN_1005782b4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f7620 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x000107c3dbd4(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f692d8,
                        &UNK_10e5d3218,&UNK_10e5d32e0,0xc,0x1005783b8,0);
    do {
      if (puRam00000001137f7620 != (undefined *)0x0) {
        ClearExclusiveLocal();
        func_0x000107c61170();
        return puRam00000001137f7620;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f7620,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f7620 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f7620;
}



/* Entry: 1005783ac; end: 1005783c3;  */

bool FUN_1005783ac(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1005783c4; end: 1005784a7; +[SCSCOREConnectionInfo descriptor] */

void FUN_1005783c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7608 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c7e240,
                        &PTR____CFConstantStringClassReference_110f43ff8,&PTR_DAT_1133b95b8,
                        &PTR_s_carrier_1133b9610,5,0x28,0x1c);
    puRam00000001137f7608 = puVar1;
  }
  return;
}



/* Entry: 1005784a8; end: 100578513; +[SCCarrierNetworkInfoStaticProvider carrierName] */

void FUN_1005784a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = uRam00000001137f46a0;
  func_0x000107c5c734(uRam00000001137f46a0);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c40eec();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c3f6d8();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100578514; end: 10057851b;  */

void FUN_100578514(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126a7568;
  func_0x000107c610f8();
  func_0x000107c48a14();
  func_0x000107c61170(unaff_x20);
  *param_1 = puVar1;
  return;
}



/* Entry: 10057851c; end: 10057856f;  */

void FUN_10057851c(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126a7568;
  func_0x000107c610f8();
  func_0x000107c48a14();
  func_0x000107c61170(param_2);
  *param_1 = puVar1;
  return;
}



/* Entry: 100578570; end: 1005787a3; -[SCCarrierNetworkInfoProviderImpl initWithStorageService:] */

undefined8 * FUN_100578570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  func_0x000107c61174(param_3);
  puStack_48 = PTR_PTR_112706360;
  puVar2 = &uStack_50;
  uStack_50 = param_1;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x000107c3c690(puVar2);
    uVar6 = param_3;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar5 = puVar2[1];
    puVar2[1] = uVar6;
    func_0x000107c61170(uVar5);
    uVar3 = puVar2[1];
    func_0x000107c4d9e8();
    func_0x000107c61180();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x000107c61158(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    uVar4 = uVar3;
    func_0x000107c6115c(uVar3,puVar7);
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    if ((uVar4 & 1) == 0) {
      func_0x000107c61160();
    }
    else {
      func_0x000107c610f4();
      func_0x000107c46570();
    }
    uVar6 = puVar2[2];
    puVar2[2] = puVar7;
    func_0x000107c61170(uVar6);
    puVar7 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar6 = puVar2[5];
    puVar2[5] = puVar7;
    func_0x000107c61170(uVar6);
    func_0x000107c61144(auStack_58,puVar2);
    uStack_60 = 0;
    iVar1 = 0xf3b2862;
    func_0x000107c61664(&UNK_10f3b2862,0,&uStack_60,0,0);
    if (iVar1 == -1) {
      puVar7 = (undefined *)0x0;
    }
    else {
      uVar6 = uStack_60;
      func_0x000107c610a0(uStack_60);
      func_0x000107c61664(&UNK_10f3b2862,uVar6,&uStack_60,0,0);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x000107c61180();
      func_0x000107c60fd0(uVar6);
    }
    func_0x000107c6111c(auStack_68,auStack_58);
    func_0x000107c58fac(puVar2[4]);
    func_0x000107c61120(auStack_68);
    func_0x000107c61170(puVar7);
    func_0x000107c61120(auStack_58);
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return puVar2;
}



/* Entry: 1005787a4; end: 1005789bf; -[SCCarrierNetworkInfoProviderImpl _setupNetworkInfo] */

/* WARNING: Possible PIC construction at 0x0001005787e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057882c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100578864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100578950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100578960: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100578970: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100578980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100578990: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100578984) */
/* WARNING: Removing unreachable block (ram,0x000100578974) */
/* WARNING: Removing unreachable block (ram,0x000100578964) */
/* WARNING: Removing unreachable block (ram,0x000100578954) */
/* WARNING: Removing unreachable block (ram,0x000100578868) */
/* WARNING: Removing unreachable block (ram,0x000100578830) */
/* WARNING: Removing unreachable block (ram,0x0001005787e4) */
/* WARNING: Removing unreachable block (ram,0x000100578994) */

void FUN_1005787a4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___CTTelephonyNetworkInfo_1126dfdd8;
  func_0x000107c610fc();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1005789c0; end: 100578a8b;  */

/* WARNING: Possible PIC construction at 0x0001005789ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005789f0) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */

void FUN_1005789c0(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}



/* Entry: 100578a8c; end: 100578b07; -[SIGLegacyContainerViewController willMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100578a8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273c8f8);
  func_0x000107c61174(param_3);
  func_0x000107c5e380(uVar1);
  puStack_38 = PTR_PTR_1126eef30;
  lStack_40 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_willMoveToParentViewController__1126873f8,param_3);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100578b08; end: 100578b13; -[SCViewControllerLifecycleChecker willMoveToParentViewController:parent:] */

void FUN_100578b08(long param_1)

{
  *(undefined2 *)(param_1 + 0x17) = 1;
  return;
}



/* Entry: 100578b14; end: 100578b8f; -[SCContainerViewController willMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100578b14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278c710);
  func_0x000107c61174(param_3);
  func_0x000107c5e380(uVar1);
  puStack_38 = PTR_PTR_112705608;
  lStack_40 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_willMoveToParentViewController__1126873f8,param_3);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100578b90; end: 100578bbb;  */

void FUN_100578b90(undefined8 *param_1)

{
  if ((code *)*param_1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100578ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_1)();
    return;
  }
  (**(code **)param_1[1])();
  return;
}



/* Entry: 100578bbc; end: 100578bf3;  */

undefined8 FUN_100578bbc(long *param_1)

{
  FUN_100578b90(param_1 + 2);
  (**(code **)(*param_1 + 8))(param_1);
  return 1;
}



/* Entry: 100578bf4; end: 100578ecf;  */

void FUN_100578bf4(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  undefined1 in_ZR;
  bool bVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  long *plVar6;
  byte extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  long *extraout_x8;
  long *extraout_x8_00;
  long *plVar7;
  long *extraout_x8_01;
  long *extraout_x8_02;
  ulong uVar8;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  byte extraout_w9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar9;
  uint extraout_w11_01;
  uint extraout_w11_02;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_68 [40];
  
  puVar4 = (undefined8 *)0x50;
  func_0x000107c60e20();
  *puVar4 = FUN_10061a838;
  puVar4[1] = &UNK_108668e94;
  puVar4[8] = param_2;
  FUN_10054f3f8(puVar4 + 2);
  FUN_10054f4ac(param_1,puVar4 + 2);
  FUN_10054ef74();
  FUN_100578fe4(puVar4 + 4);
  pbVar5 = (byte *)(puVar4 + 4);
  FUN_100579870(puVar4 + 6,pbVar5,param_2);
  puVar4[5] = puVar4[6];
  do {
    FUN_10054f2ec();
  } while (extraout_w10 != 0);
  func_0x000100579d40(puVar4[5]);
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar4 + 9) = 0;
    lVar11 = puVar4[5];
    func_0x000100579d4c();
    lVar12 = *(long *)pbVar5;
    if (lVar12 == 0) {
      FUN_10054ef74();
      lVar12 = *(long *)pbVar5;
    }
    plVar6 = (long *)(lVar11 + 0x10);
    do {
      if (*plVar6 == 0) {
        func_0x000100579d58();
        plVar6 = extraout_x8_00;
        uVar2 = extraout_w10_01;
        uVar9 = extraout_w11_00;
      }
      else {
        func_0x000107c31ed4();
        plVar6 = extraout_x8;
        uVar2 = extraout_w10_00;
        uVar9 = extraout_w11;
      }
      if ((uVar9 & 1) != 0) {
        pbVar10 = *(byte **)(lVar11 + 0x90);
        bVar1 = pbVar10[1];
        uVar8 = (ulong)bVar1;
        bVar3 = *pbVar10 <= bVar1;
        if (bVar1 == *pbVar10) {
          func_0x000107c31eb0();
          bVar1 = extraout_w8;
          if (bVar3) {
            bVar1 = extraout_w9;
          }
          func_0x000107c31e8c();
          uVar8 = 0;
          *pbVar5 = bVar1;
          pbVar5[1] = 0;
          pbVar5[8] = 0;
          pbVar5[9] = 0;
          pbVar5[10] = 0;
          pbVar5[0xb] = 0;
          pbVar5[0xc] = 0;
          pbVar5[0xd] = 0;
          pbVar5[0xe] = 0;
          pbVar5[0xf] = 0;
          *(byte **)(pbVar10 + 8) = pbVar5;
          *(byte **)(lVar11 + 0x90) = pbVar5;
          pbVar10 = pbVar5;
        }
        pbVar5 = pbVar10 + uVar8 * 0x18 + 0x10;
        pbVar5[0] = 0;
        pbVar5[1] = 0;
        pbVar5[2] = 0;
        pbVar5[3] = 0;
        pbVar5[4] = 0;
        pbVar5[5] = 0;
        pbVar5[6] = 0;
        pbVar5[7] = 0;
        *(undefined8 **)(pbVar10 + uVar8 * 0x18 + 0x18) = puVar4;
        *(long *)(pbVar10 + uVar8 * 0x18 + 0x20) = lVar12;
        goto LAB_100578e34;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  plVar6 = puVar4 + 5;
  FUN_10061a9e4();
  lVar11 = *plVar6;
  func_0x00010061aa28();
  func_0x00010061aa30();
  if (lVar11 == 0) {
    FUN_10054ef74();
    FUN_100578fe4(puVar4 + 5);
    func_0x000107c31ec4();
    puVar4[6] = puVar4[7];
    do {
      FUN_10054f2ec();
    } while (extraout_w10_02 != 0);
    func_0x000100579d40(puVar4[6]);
    if ((extraout_w8_01 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar4 + 9) = 1;
      lVar11 = puVar4[6];
      func_0x000100579d4c();
      lVar12 = *plVar6;
      if (lVar12 == 0) {
        FUN_10054ef74();
        lVar12 = *plVar6;
      }
      plVar7 = (long *)(lVar11 + 0x10);
      do {
        if (*plVar7 == 0) {
          func_0x000100579d58();
          plVar7 = extraout_x8_02;
          uVar2 = extraout_w10_04;
          uVar9 = extraout_w11_02;
        }
        else {
          func_0x000107c31ed4();
          plVar7 = extraout_x8_01;
          uVar2 = extraout_w10_03;
          uVar9 = extraout_w11_01;
        }
        if ((uVar9 & 1) != 0) {
          lVar13 = *(long *)(lVar11 + 0x90);
          func_0x000100579d80();
          uVar8 = extraout_x8_03;
          if ((bool)in_ZR) {
            func_0x000107c31eb0();
            func_0x000107c31e8c();
            func_0x000107c31e90();
            *(long **)(lVar11 + 0x90) = plVar6;
            uVar8 = extraout_x8_04;
          }
          lVar13 = lVar13 + (uVar8 & 0xffffffff) * 0x18;
          *(undefined8 *)(lVar13 + 0x10) = 0;
          *(undefined8 **)(lVar13 + 0x18) = puVar4;
          *(long *)(lVar13 + 0x20) = lVar12;
LAB_100578e34:
          *(char *)(*(long *)(lVar11 + 0x90) + 1) = *(char *)(*(long *)(lVar11 + 0x90) + 1) + '\x01'
          ;
          *(undefined8 *)(lVar11 + 0x10) = 0;
          return;
        }
      } while ((uVar2 >> 1 & 1) == 0);
    }
    plVar6 = puVar4 + 6;
    FUN_10061a9e4();
    lVar11 = *plVar6;
    func_0x00010061aa30();
    FUN_100628a6c();
    if (lVar11 == 0) {
      func_0x000107c31eb8();
      func_0x000107c289e0(auStack_68);
      FUN_1005fe1b4();
      func_0x000107c31ebc();
    }
    func_0x00010061aa28();
  }
  func_0x00010061aa38();
  func_0x00010061aa40();
  FUN_10061aab0();
  func_0x00010061aab8();
  return;
}



/* Entry: 100578ed0; end: 100578fe3;  */

void FUN_100578ed0(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *plVar3;
  long *extraout_x8;
  long *extraout_x8_00;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long lVar5;
  
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_100578bf4(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x40);
    do {
      FUN_10054f2ec();
    } while (extraout_w10 != 0);
    func_0x000100579d40(*(undefined8 *)(param_1 + 0x38));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x48) = 1;
      lVar5 = *(long *)(param_1 + 0x38);
      func_0x000100579d70();
      if (*plVar2 == 0) {
        FUN_10054ef74();
      }
      plVar3 = (long *)(lVar5 + 0x10);
      do {
        if (*plVar3 == 0) {
          func_0x000100579d58();
          plVar3 = extraout_x8_00;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x000107c31ed4();
          plVar3 = extraout_x8;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x000100579d80();
          if ((bool)in_ZR) {
            func_0x000107c31eb0();
            func_0x000107c31e8c();
            func_0x000107c31e90();
            *(long **)(lVar5 + 0x90) = plVar2;
          }
          func_0x000100579d90();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  FUN_1005f9618(param_1 + 0x38);
  FUN_100628a6c();
  func_0x000100628a74();
  func_0x00010061aa40();
  FUN_10061aab0();
  func_0x00010061aa38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 100578fe4; end: 1005791a3;  */

void FUN_100578fe4(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  undefined **ppuVar9;
  undefined ***pppuVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined ***pppuVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined1 auStack_128 [8];
  undefined8 *puStack_120;
  undefined **appuStack_118 [3];
  undefined ***pppuStack_100;
  long lStack_f8;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined **ppuStack_68;
  undefined8 *puStack_60;
  undefined ***pppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = param_2;
  func_0x000107c60d9c();
  puVar7 = (undefined8 *)0xa0;
  func_0x000107c60e20();
  *(undefined2 *)(puVar7 + 4) = 4;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[9] = 0;
  puVar7[10] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  puVar7[0xf] = 0;
  puVar7[0x10] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[5] = 0;
  puVar7[0x12] = puVar7 + 4;
  *puVar7 = &PTR_DAT_11087bc20;
  puVar7[1] = 0x200000006;
  *(undefined2 *)(puVar7 + 0x13) = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  puStack_88 = puVar7;
  func_0x00010054ec98(&uStack_78);
  FUN_10054ebfc(&uStack_70);
  uStack_80 = 0;
  ppuStack_68 = &PTR_DAT_110d9a958;
  uStack_90 = 0;
  puVar12 = (undefined8 *)(lVar14 + param_3);
  pppuVar13 = &ppuStack_68;
  puStack_60 = puVar7;
  pppuStack_50 = &ppuStack_68;
  (**(code **)**(undefined8 **)(param_2 + 0x10))();
  if (pppuStack_50 == &ppuStack_68) {
    lVar14 = 0x20;
LAB_1005790dc:
    (**(code **)((long)*pppuStack_50 + lVar14))();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar14 = 0x28;
    goto LAB_1005790dc;
  }
  func_0x00010054ec98(&uStack_90);
  *param_1 = puStack_88;
  puStack_88 = (undefined8 *)0x0;
  func_0x00010054ec98(&uStack_80);
  ppuVar8 = &puStack_88;
  FUN_10054ebfc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  if (pppuStack_50 == &ppuStack_68) {
    lVar14 = 0x20;
LAB_100579160:
    (**(code **)((long)*pppuStack_50 + lVar14))();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar14 = 0x28;
    goto LAB_100579160;
  }
  func_0x00010054ec98(&uStack_90);
  func_0x00010054ec98(&uStack_80);
  FUN_10054ebfc(&puStack_88);
  func_0x000107c60bd8();
  if ((int)puVar12 == 0) {
    func_0x000107c60bd8(ppuVar8);
  }
  func_0x000104bd46a0();
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = ppuVar8 + 8;
  do {
    puVar7 = *ppuVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
    if (bVar5) {
      *(byte *)ppuVar1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while ((cVar4 != '\0') || (((ulong)puVar7 & 1) != 0));
  if (((ulong)ppuVar8[0xd] & 1) == 0) {
    pppuVar10 = (undefined ***)pppuVar13[3];
    puStack_120 = puVar12;
    if (pppuVar10 == (undefined ***)0x0) {
      pppuStack_100 = (undefined ***)0x0;
    }
    else if (pppuVar10 == pppuVar13) {
      pppuStack_100 = appuStack_118;
      (*(code *)(*pppuVar10)[3])(pppuVar10,appuStack_118);
    }
    else {
      pppuVar13[3] = (undefined **)0x0;
      pppuStack_100 = pppuVar10;
    }
    puVar7 = ppuVar8[5];
    if (puVar7 < ppuVar8[6]) {
      *puVar7 = puStack_120;
      if (pppuStack_100 == (undefined ***)0x0) {
        puVar7[4] = 0;
        puVar7 = puVar7 + 5;
      }
      else {
        if (pppuStack_100 == appuStack_118) {
          puVar7[4] = puVar7 + 1;
          (*(code *)(*pppuStack_100)[3])();
        }
        else {
          puVar7[4] = pppuStack_100;
          pppuStack_100 = (undefined ***)0x0;
        }
        puVar7 = puVar7 + 5;
      }
    }
    else {
      puVar18 = ppuVar8[4];
      puVar21 = (undefined8 *)((long)puVar7 - (long)puVar18);
      uVar15 = ((long)puVar21 >> 3) * -0x3333333333333333 + 1;
      if (0x666666666666666 < uVar15) {
        func_0x000107c31528();
        goto LAB_100579564;
      }
      lVar14 = (long)ppuVar8[6] - (long)puVar18 >> 3;
      uVar17 = lVar14 * -0x6666666666666666;
      if (uVar17 < uVar15 || uVar17 - uVar15 == 0) {
        uVar17 = uVar15;
      }
      if (0x333333333333332 < (ulong)(lVar14 * -0x3333333333333333)) {
        uVar17 = 0x666666666666666;
      }
      if (uVar17 == 0) {
        lVar14 = 0;
        *puVar21 = puStack_120;
        puVar20 = puVar21;
        if (pppuStack_100 != (undefined ***)0x0) goto LAB_100579330;
LAB_100579378:
        puVar20[4] = 0;
        puVar21 = (undefined8 *)((long)puVar20 - (long)puVar21);
joined_r0x000100579384:
        if (puVar18 != puVar7) {
LAB_1005793cc:
          lVar19 = 0;
          do {
            puVar2 = (undefined8 *)((long)puVar21 + lVar19);
            puVar3 = (undefined8 *)((long)puVar18 + lVar19);
            *puVar2 = *puVar3;
            puVar16 = (undefined8 *)puVar3[4];
            if (puVar16 == (undefined8 *)0x0) {
              puVar2[4] = 0;
            }
            else if (puVar3 + 1 == puVar16) {
              puVar2[4] = puVar2 + 1;
              (**(code **)(*(long *)puVar3[4] + 0x18))();
            }
            else {
              puVar2[4] = puVar16;
              puVar3[4] = 0;
            }
            lVar19 = lVar19 + 0x28;
          } while ((undefined8 *)((long)puVar18 + lVar19) != puVar7);
          do {
            plVar11 = (long *)puVar18[4];
            if (puVar18 + 1 == plVar11) {
              lVar19 = 0x20;
LAB_100579444:
              (**(code **)(*plVar11 + lVar19))();
            }
            else if (plVar11 != (long *)0x0) {
              lVar19 = 0x28;
              goto LAB_100579444;
            }
            puVar18 = puVar18 + 5;
          } while (puVar18 != puVar7);
          puVar18 = ppuVar8[4];
        }
      }
      else {
        if (0x666666666666666 < uVar17) {
          func_0x000104bd35f4();
          goto LAB_100579564;
        }
        lVar14 = uVar17 * 0x28;
        func_0x000107c60e20();
        puVar20 = (undefined8 *)(lVar14 + (long)puVar21);
        *puVar20 = puStack_120;
        if (pppuStack_100 == (undefined ***)0x0) goto LAB_100579378;
LAB_100579330:
        if (pppuStack_100 != appuStack_118) {
          puVar20[4] = pppuStack_100;
          pppuStack_100 = (undefined ***)0x0;
          puVar21 = (undefined8 *)((long)puVar20 - (long)puVar21);
          goto joined_r0x000100579384;
        }
        puVar20[4] = puVar20 + 1;
        (*(code *)(*pppuStack_100)[3])();
        puVar18 = ppuVar8[4];
        puVar7 = ppuVar8[5];
        puVar21 = (undefined8 *)((long)puVar20 - ((long)puVar7 - (long)puVar18));
        if (puVar18 != puVar7) goto LAB_1005793cc;
      }
      puVar7 = puVar20 + 5;
      ppuVar8[4] = puVar21;
      ppuVar8[5] = puVar7;
      ppuVar8[6] = (undefined8 *)(lVar14 + uVar17 * 0x28);
      if (puVar18 != (undefined8 *)0x0) {
        func_0x000107c60e14(puVar18);
      }
    }
    ppuVar8[5] = puVar7;
    FUN_100579638(ppuVar8[4],puVar7,((long)puVar7 - (long)ppuVar8[4] >> 3) * -0x3333333333333333);
    if (pppuStack_100 == appuStack_118) {
      lVar14 = 0x20;
LAB_1005794e0:
      (**(code **)((long)*pppuStack_100 + lVar14))();
    }
    else if (pppuStack_100 != (undefined ***)0x0) {
      lVar14 = 0x28;
      goto LAB_1005794e0;
    }
    if ((long)ppuVar8[0xb] <= (long)puVar12) goto LAB_100579510;
    ppuVar8[0xb] = puVar12;
    *(undefined1 *)(ppuVar8 + 8) = 0;
    func_0x000107c612f0(*(undefined4 *)(ppuVar8 + 10));
LAB_100579514:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
      return;
    }
    func_0x000107c60e78();
  }
  else {
    func_0x000107c31520(auStack_128);
    ppuVar9 = pppuVar13[3];
    if (ppuVar9 != (undefined **)0x0) {
      (**(code **)(*ppuVar9 + 0x30))(ppuVar9,auStack_128);
      func_0x000107c60c18(auStack_128);
LAB_100579510:
      *(byte *)ppuVar1 = 0;
      goto LAB_100579514;
    }
  }
  func_0x000104bfeb48();
LAB_100579564:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x100579568);
  (*pcVar6)();
}



/* Entry: 1005791a4; end: 100579607;  */

void FUN_1005791a4(long param_1,long param_2,long *param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined1 auStack_98 [8];
  long lStack_90;
  long alStack_88 [3];
  long *plStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar1 = (byte *)(param_1 + 0x40);
  do {
    bVar4 = *pbVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar6) {
      *pbVar1 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while ((cVar5 != '\0') || ((bVar4 & 1) != 0));
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    plVar8 = (long *)param_3[3];
    lStack_90 = param_2;
    if (plVar8 == (long *)0x0) {
      plStack_70 = (long *)0x0;
    }
    else if (plVar8 == param_3) {
      plStack_70 = alStack_88;
      (**(code **)(*plVar8 + 0x18))(plVar8,alStack_88);
    }
    else {
      param_3[3] = 0;
      plStack_70 = plVar8;
    }
    plVar8 = *(long **)(param_1 + 0x28);
    if (plVar8 < *(long **)(param_1 + 0x30)) {
      *plVar8 = lStack_90;
      if (plStack_70 == (long *)0x0) {
        plVar8[4] = 0;
        plVar8 = plVar8 + 5;
      }
      else {
        if (plStack_70 == alStack_88) {
          plVar8[4] = (long)(plVar8 + 1);
          (**(code **)(*plStack_70 + 0x18))();
        }
        else {
          plVar8[4] = (long)plStack_70;
          plStack_70 = (long *)0x0;
        }
        plVar8 = plVar8 + 5;
      }
    }
    else {
      plVar13 = *(long **)(param_1 + 0x20);
      plVar16 = (long *)((long)plVar8 - (long)plVar13);
      uVar10 = ((long)plVar16 >> 3) * -0x3333333333333333 + 1;
      if (0x666666666666666 < uVar10) {
        func_0x000107c31528();
        goto LAB_100579564;
      }
      lVar9 = (long)*(long **)(param_1 + 0x30) - (long)plVar13 >> 3;
      uVar12 = lVar9 * -0x6666666666666666;
      if (uVar12 < uVar10 || uVar12 - uVar10 == 0) {
        uVar12 = uVar10;
      }
      if (0x333333333333332 < (ulong)(lVar9 * -0x3333333333333333)) {
        uVar12 = 0x666666666666666;
      }
      if (uVar12 == 0) {
        lVar9 = 0;
        *plVar16 = lStack_90;
        plVar15 = plVar16;
        if (plStack_70 != (long *)0x0) goto LAB_100579330;
LAB_100579378:
        plVar15[4] = 0;
        lVar17 = (long)plVar15 - (long)plVar16;
joined_r0x000100579384:
        if (plVar13 != plVar8) {
LAB_1005793cc:
          lVar14 = 0;
          do {
            puVar2 = (undefined8 *)(lVar17 + lVar14);
            puVar3 = (undefined8 *)((long)plVar13 + lVar14);
            *puVar2 = *puVar3;
            puVar11 = (undefined8 *)puVar3[4];
            if (puVar11 == (undefined8 *)0x0) {
              puVar2[4] = 0;
            }
            else if (puVar3 + 1 == puVar11) {
              puVar2[4] = puVar2 + 1;
              (**(code **)(*(long *)puVar3[4] + 0x18))();
            }
            else {
              puVar2[4] = puVar11;
              puVar3[4] = 0;
            }
            lVar14 = lVar14 + 0x28;
          } while ((long *)((long)plVar13 + lVar14) != plVar8);
          do {
            plVar16 = (long *)plVar13[4];
            if (plVar13 + 1 == plVar16) {
              lVar14 = 0x20;
LAB_100579444:
              (**(code **)(*plVar16 + lVar14))();
            }
            else if (plVar16 != (long *)0x0) {
              lVar14 = 0x28;
              goto LAB_100579444;
            }
            plVar13 = plVar13 + 5;
          } while (plVar13 != plVar8);
          plVar13 = *(long **)(param_1 + 0x20);
        }
      }
      else {
        if (0x666666666666666 < uVar12) {
          func_0x000104bd35f4();
          goto LAB_100579564;
        }
        lVar9 = uVar12 * 0x28;
        func_0x000107c60e20();
        plVar15 = (long *)(lVar9 + (long)plVar16);
        *plVar15 = lStack_90;
        if (plStack_70 == (long *)0x0) goto LAB_100579378;
LAB_100579330:
        if (plStack_70 != alStack_88) {
          plVar15[4] = (long)plStack_70;
          plStack_70 = (long *)0x0;
          lVar17 = (long)plVar15 - (long)plVar16;
          goto joined_r0x000100579384;
        }
        plVar15[4] = (long)(plVar15 + 1);
        (**(code **)(*plStack_70 + 0x18))();
        plVar13 = *(long **)(param_1 + 0x20);
        plVar8 = *(long **)(param_1 + 0x28);
        lVar17 = (long)plVar15 - ((long)plVar8 - (long)plVar13);
        if (plVar13 != plVar8) goto LAB_1005793cc;
      }
      plVar8 = plVar15 + 5;
      *(long *)(param_1 + 0x20) = lVar17;
      *(long **)(param_1 + 0x28) = plVar8;
      *(ulong *)(param_1 + 0x30) = lVar9 + uVar12 * 0x28;
      if (plVar13 != (long *)0x0) {
        func_0x000107c60e14(plVar13);
      }
    }
    *(long **)(param_1 + 0x28) = plVar8;
    FUN_100579638(*(long *)(param_1 + 0x20),plVar8,
                  ((long)plVar8 - *(long *)(param_1 + 0x20) >> 3) * -0x3333333333333333);
    if (plStack_70 == alStack_88) {
      lVar9 = 0x20;
LAB_1005794e0:
      (**(code **)(*plStack_70 + lVar9))();
    }
    else if (plStack_70 != (long *)0x0) {
      lVar9 = 0x28;
      goto LAB_1005794e0;
    }
    if (*(long *)(param_1 + 0x58) <= param_2) goto LAB_100579510;
    *(long *)(param_1 + 0x58) = param_2;
    *(undefined1 *)(param_1 + 0x40) = 0;
    func_0x000107c612f0(*(undefined4 *)(param_1 + 0x50));
LAB_100579514:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    func_0x000107c60e78();
  }
  else {
    func_0x000107c31520(auStack_98);
    plVar8 = (long *)param_3[3];
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x30))(plVar8,auStack_98);
      func_0x000107c60c18(auStack_98);
LAB_100579510:
      *pbVar1 = 0;
      goto LAB_100579514;
    }
  }
  func_0x000104bfeb48();
LAB_100579564:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x100579568);
  (*pcVar7)();
}



/* Entry: 100579608; end: 100579637;  */

void FUN_100579608(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 8);
  *param_2 = &PTR_DAT_110d9a958;
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 100579638; end: 10057985b;  */

long * FUN_100579638(long *param_1,long *param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long alStack_78 [3];
  long *plStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 < 2) goto LAB_10057980c;
  uVar11 = param_3 - 2U >> 1;
  plVar9 = param_1 + uVar11 * 5;
  plVar12 = param_2 + -5;
  lVar8 = *plVar12;
  lVar6 = *plVar9;
  if (lVar6 <= lVar8) goto LAB_10057980c;
  plStack_60 = (long *)param_2[-1];
  if (plStack_60 == (long *)0x0) {
    plStack_60 = (long *)0x0;
  }
  else if (plStack_60 == param_2 + -4) {
    lVar6 = *plStack_60;
    param_2 = alStack_78;
    plStack_60 = alStack_78;
    (**(code **)(lVar6 + 0x18))();
    lVar6 = *plVar9;
  }
  else {
    param_2[-1] = 0;
  }
  do {
    plVar10 = plVar9;
    *plVar12 = lVar6;
    plVar9 = plVar12 + 1;
    plVar4 = (long *)plVar12[4];
    plVar12[4] = 0;
    if (plVar4 == plVar9) {
      lVar6 = 0x20;
LAB_100579708:
      (**(code **)(*plVar4 + lVar6))();
    }
    else if (plVar4 != (long *)0x0) {
      lVar6 = 0x28;
      goto LAB_100579708;
    }
    plVar4 = plVar10 + 1;
    plVar7 = (long *)plVar10[4];
    if (plVar7 == (long *)0x0) {
      plVar12[4] = 0;
    }
    else if (plVar7 == plVar4) {
      plVar12[4] = (long)plVar9;
      (**(code **)(*(long *)plVar10[4] + 0x18))();
      param_2 = plVar9;
    }
    else {
      plVar12[4] = (long)plVar7;
      plVar10[4] = 0;
    }
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1 >> 1;
    lVar6 = param_1[uVar11 * 5];
    plVar9 = param_1 + uVar11 * 5;
    plVar12 = plVar10;
  } while (lVar8 < lVar6);
  *plVar10 = lVar8;
  param_1 = (long *)plVar10[4];
  plVar10[4] = 0;
  if (param_1 == plVar4) {
    lVar6 = 0x20;
LAB_1005797a0:
    (**(code **)(*param_1 + lVar6))();
  }
  else if (param_1 != (long *)0x0) {
    lVar6 = 0x28;
    goto LAB_1005797a0;
  }
  if (plStack_60 == (long *)0x0) {
    plVar10[4] = 0;
  }
  else {
    if (plStack_60 != alStack_78) {
      plVar10[4] = (long)plStack_60;
      goto LAB_10057980c;
    }
    plVar10[4] = (long)plVar4;
    (**(code **)(*plStack_60 + 0x18))();
    param_2 = plVar4;
  }
  param_1 = plStack_60;
  if (plStack_60 == alStack_78) {
    lVar6 = 0x20;
  }
  else {
    if (plStack_60 == (long *)0x0) goto LAB_10057980c;
    lVar6 = 0x28;
  }
  (**(code **)(*plStack_60 + lVar6))();
LAB_10057980c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  func_0x000107c60e78();
  iVar5 = (int)param_2;
  while (iVar5 != 0) {
    func_0x000104bd46a0();
    iVar5 = (int)param_2;
  }
  func_0x000107c60bd8();
  param_1 = param_1 + 1;
  plVar9 = (long *)*param_1;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
    do {
      uVar11 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar11 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar11 >> 0x21 == 1) {
      (**(code **)(*plVar9 + 0x10))(plVar9,1,param_1);
      do {
        uVar11 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar11 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar11 - 1 == 0) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  return param_1;
}



/* Entry: 10057985c; end: 10057986f;  */

undefined8 * FUN_10057985c(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  
  puVar2 = (undefined8 *)(param_1 + 8);
  plVar6 = (long *)*puVar2;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar5 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar5 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar5 >> 0x21 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6,1,puVar2);
      do {
        uVar5 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar5 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  return puVar2;
}



/* Entry: 100579870; end: 100579907;  */

void FUN_100579870(void)

{
  undefined8 uVar1;
  undefined8 *extraout_x8;
  undefined8 uStack_50;
  undefined8 auStack_48 [2];
  long lStack_38;
  
  func_0x000100579864();
  FUN_100579908();
  FUN_1005799f8(&uStack_50,2);
  uVar1 = uStack_50;
  uStack_50 = 0;
  func_0x000100579a50(lStack_38 + 0x18,uVar1);
  FUN_100579a7c(&uStack_50);
  FUN_100579aa0(2,lStack_38);
  FUN_100579af8(lStack_38,0);
  uVar1 = auStack_48[0];
  uStack_50 = 0;
  auStack_48[0] = 0;
  *extraout_x8 = uVar1;
  FUN_100579d08();
  FUN_100579d1c(auStack_48);
  return;
}



/* Entry: 100579908; end: 100579913;  */

void FUN_100579908(void)

{
  long lVar1;
  
  lVar1 = 200;
  func_0x000107c60e20(&stack0x00000008,200);
  FUN_100579950();
  func_0x000100579984();
  FUN_1005799b0(lVar1 + 0xa8);
  func_0x0001005799c4();
  return;
}



/* Entry: 100579914; end: 10057994f;  */

void FUN_100579914(void)

{
  long lVar1;
  
  lVar1 = 200;
  func_0x000107c60e20(200);
  FUN_100579950();
  func_0x000100579984();
  FUN_1005799b0(lVar1 + 0xa8);
  func_0x0001005799c4();
  return;
}



/* Entry: 100579950; end: 10057995b;  */

void FUN_100579950(void)

{
  return;
}



/* Entry: 10057995c; end: 1005799af;  */

void FUN_10057995c(long param_1)

{
  FUN_10054edec();
  FUN_1005505d0(&UNK_110a60b18);
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  return;
}



/* Entry: 1005799b0; end: 1005799f7;  */

/* WARNING: Removing unreachable block (ram,0x00010054ece8) */
/* WARNING: Removing unreachable block (ram,0x00010054ecf0) */
/* WARNING: Removing unreachable block (ram,0x00010054ecf8) */
/* WARNING: Removing unreachable block (ram,0x00010054ed00) */
/* WARNING: Removing unreachable block (ram,0x00010054ed0c) */
/* WARNING: Removing unreachable block (ram,0x00010054ed24) */
/* WARNING: Removing unreachable block (ram,0x00010054ed2c) */
/* WARNING: Removing unreachable block (ram,0x00010054ed34) */
/* WARNING: Removing unreachable block (ram,0x00010054ed38) */

void FUN_1005799b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x19;
  
  *unaff_x19 = param_2;
  unaff_x19[1] = param_2;
  unaff_x19[2] = param_1;
  return;
}



/* Entry: 1005799f8; end: 100579a37;  */

void FUN_1005799f8(void)

{
  undefined8 *puVar1;
  int extraout_w8;
  undefined8 *extraout_x9;
  undefined8 *unaff_x19;
  long unaff_x22;
  
  func_0x0001005799d8();
  puVar1 = extraout_x9;
  if (extraout_w8 != 0) {
    puVar1 = (undefined8 *)0xffffffffffffffff;
  }
  func_0x000107c60e1c();
  *puVar1 = 0x10;
  puVar1[1] = unaff_x22;
  if (unaff_x22 != 0) {
    FUN_100579a38();
  }
  *unaff_x19 = puVar1 + 2;
  return;
}



/* Entry: 100579a38; end: 100579a7b;  */

void FUN_100579a38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)();
  return;
}



/* Entry: 100579a7c; end: 100579a9f;  */

undefined8 FUN_100579a7c(undefined8 param_1)

{
  func_0x000100579a68(param_1,0);
  return param_1;
}



/* Entry: 100579aa0; end: 100579ac7;  */

void FUN_100579aa0(long param_1,long *param_2)

{
  long unaff_x22;
  
  param_2[1] = param_1;
  FUN_10054eed4(param_2,unaff_x22 + 8);
  if (*param_2 != 0) {
    FUN_100850dfc();
  }
  FUN_10054ef0c();
  return;
}



/* Entry: 100579ac8; end: 100579af7;  */

/* WARNING: Removing unreachable block (ram,0x000100579ccc) */
/* WARNING: Removing unreachable block (ram,0x000100579bec) */

void FUN_100579ac8(void)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  long *unaff_x19;
  byte *pbVar10;
  undefined8 unaff_x20;
  
  func_0x000100579aac();
  lVar5 = *unaff_x19;
  plVar1 = (long *)(lVar5 + 0x10);
  do {
    lVar9 = *plVar1;
    if (lVar9 == 0) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        pbVar10 = *(byte **)(lVar5 + 0x90);
        bVar2 = pbVar10[1];
        uVar8 = (ulong)bVar2;
        pbVar7 = pbVar10;
        if (bVar2 == *pbVar10) {
          uVar6 = (uint)bVar2 << 1;
          if (0x7f < uVar6) {
            uVar6 = 0x80;
          }
          pbVar7 = (byte *)(ulong)(uVar6 * 0x18 + 0x10);
          func_0x000107c610a0();
          uVar8 = 0;
          *pbVar7 = (byte)uVar6;
          pbVar7[1] = 0;
          pbVar7[8] = 0;
          pbVar7[9] = 0;
          pbVar7[10] = 0;
          pbVar7[0xb] = 0;
          pbVar7[0xc] = 0;
          pbVar7[0xd] = 0;
          pbVar7[0xe] = 0;
          pbVar7[0xf] = 0;
          *(byte **)(pbVar10 + 8) = pbVar7;
          *(byte **)(lVar5 + 0x90) = pbVar7;
        }
        *(code **)(pbVar7 + uVar8 * 0x18 + 0x10) = FUN_1005ed688;
        *(undefined8 *)(pbVar7 + uVar8 * 0x18 + 0x18) = unaff_x20;
        pbVar7 = pbVar7 + uVar8 * 0x18 + 0x20;
        pbVar7[0] = 0;
        pbVar7[1] = 0;
        pbVar7[2] = 0;
        pbVar7[3] = 0;
        pbVar7[4] = 0;
        pbVar7[5] = 0;
        pbVar7[6] = 0;
        pbVar7[7] = 0;
        *(char *)(*(long *)(lVar5 + 0x90) + 1) = *(char *)(*(long *)(lVar5 + 0x90) + 1) + '\x01';
        *(undefined8 *)(lVar5 + 0x10) = 0;
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar9 >> 1 & 1) != 0) {
      FUN_1005ed688();
      return;
    }
  } while( true );
}



/* Entry: 100579af8; end: 100579b37;  */

void FUN_100579af8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100579ac8();
  FUN_100579ac8(param_1,param_2 + 1,param_4);
  return;
}



/* Entry: 100579b38; end: 100579b43;  */

void FUN_100579b38(void)

{
  return;
}



/* Entry: 100579b44; end: 100579ba3;  */

void FUN_100579b44(undefined8 param_1,long param_2)

{
  int extraout_w10;
  long unaff_x19;
  long *unaff_x20;
  
  FUN_100579b38();
  if (param_2 != 0) {
    do {
      FUN_100579ba4();
    } while (extraout_w10 != 0);
  }
  if (*unaff_x20 != 0) {
    FUN_1005550d0();
  }
  *unaff_x20 = unaff_x19;
  return;
}



/* Entry: 100579ba4; end: 100579bbb;  */

void FUN_100579ba4(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 4;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100579bbc; end: 100579cef;  */

/* WARNING: Removing unreachable block (ram,0x000100579bec) */

void FUN_100579bbc(long param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE,undefined8 *param_4)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  
  plVar1 = (long *)(param_1 + 0x10);
  do {
    lVar8 = *plVar1;
    if (lVar8 == 0) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        pbVar9 = *(byte **)(param_1 + 0x90);
        bVar2 = pbVar9[1];
        uVar7 = (ulong)bVar2;
        pbVar6 = pbVar9;
        if (bVar2 == *pbVar9) {
          uVar5 = (uint)bVar2 << 1;
          if (0x7f < uVar5) {
            uVar5 = 0x80;
          }
          pbVar6 = (byte *)(ulong)(uVar5 * 0x18 + 0x10);
          func_0x000107c610a0();
          uVar7 = 0;
          *pbVar6 = (byte)uVar5;
          pbVar6[1] = 0;
          pbVar6[8] = 0;
          pbVar6[9] = 0;
          pbVar6[10] = 0;
          pbVar6[0xb] = 0;
          pbVar6[0xc] = 0;
          pbVar6[0xd] = 0;
          pbVar6[0xe] = 0;
          pbVar6[0xf] = 0;
          *(byte **)(pbVar9 + 8) = pbVar6;
          *(byte **)(param_1 + 0x90) = pbVar6;
        }
        *(code **)(pbVar6 + uVar7 * 0x18 + 0x10) = UNRECOVERED_JUMPTABLE;
        *(undefined8 **)(pbVar6 + uVar7 * 0x18 + 0x18) = param_4;
        pbVar6 = pbVar6 + uVar7 * 0x18 + 0x20;
        pbVar6[0] = 0;
        pbVar6[1] = 0;
        pbVar6[2] = 0;
        pbVar6[3] = 0;
        pbVar6[4] = 0;
        pbVar6[5] = 0;
        pbVar6[6] = 0;
        pbVar6[7] = 0;
        *(char *)(*(long *)(param_1 + 0x90) + 1) = *(char *)(*(long *)(param_1 + 0x90) + 1) + '\x01'
        ;
        *(undefined8 *)(param_1 + 0x10) = 0;
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar8 >> 1 & 1) != 0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        (*(code *)*param_4)(param_4);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000100579c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_4);
      return;
    }
  } while( true );
}



/* Entry: 100579cf0; end: 100579d07;  */

void FUN_100579cf0(void)

{
  FUN_100579ac8();
  return;
}



/* Entry: 100579d08; end: 100579d1b;  */

void FUN_100579d08(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *in_stack_00000000;
  
  if (in_stack_00000000 != (long *)0x0) {
    puVar1 = (ulong *)(in_stack_00000000 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*in_stack_00000000 + 0x10))(in_stack_00000000,0);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*in_stack_00000000 + 8))(in_stack_00000000);
      }
    }
  }
  return;
}



/* Entry: 100579d1c; end: 100579d37;  */

void FUN_100579d1c(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  
  func_0x000100579d10();
  plVar5 = (long *)*unaff_x19;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
}



/* Entry: 100579d38; end: 100579dc3;  */

undefined8 * FUN_100579d38(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0,param_1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return param_1;
}



/* Entry: 100579dc4; end: 100579e2b;  */

void FUN_100579dc4(void)

{
  undefined1 auStack_38 [24];
  
  if (lRam000000011309bf48 != -1) {
    func_0x000107c61568(0x11309bf48,0x100029950);
  }
  func_0x000107c61428(0x113815538,auStack_38,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uRam0000000113815538);
  return;
}



/* Entry: 100579e2c; end: 100579e33;  */

void FUN_100579e2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c537dc(uVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 100579e34; end: 100579e7f;  */

void FUN_100579e34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c537dc(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100579e80; end: 100579f0b; -[SCContainerViewController setContainerBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100579e80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  puVar1 = &UNK_10f726fb0;
  FUN_1000ba800(&UNK_10f726fb0);
  func_0x000107c4b7a0(param_1);
  func_0x000107c537dc(*(undefined8 *)(param_1 + _DAT_11278c72c),param_2,param_3);
  func_0x0001000e2a84(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100579f0c; end: 100579ff7; -[SCContainerViewController loadView] */

/* WARNING: Possible PIC construction at 0x000100579f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100579fb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100579fa0) */
/* WARNING: Removing unreachable block (ram,0x000100579fb8) */
/* WARNING: Removing unreachable block (ram,0x0001000e2a84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100579f0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  FUN_1000ba800(&UNK_10f726e26);
  puVar1 = PTR_PTR_1126df738;
  func_0x000107c610f4();
  func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c469b4(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_11278c71c));
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278c72c);
  *(undefined **)(param_1 + _DAT_11278c72c) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100579ff8; end: 10057a3d7; -[SCContainerViewControllerView initWithFrame:contentViewLayoutConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ***
FUN_100579ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 **param_5,undefined8 param_6,undefined8 ***param_7)

{
  undefined8 ***pppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 ***pppuVar10;
  undefined8 ***pppuVar11;
  undefined8 ***pppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined8 ***unaff_x23;
  long lVar15;
  undefined *unaff_x24;
  long lVar16;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined8 ***unaff_x27;
  undefined *unaff_x28;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 **ppuStack_330;
  undefined *puStack_328;
  undefined8 **ppuStack_320;
  undefined8 **ppuStack_318;
  undefined1 **ppuStack_310;
  code *pcStack_308;
  undefined8 **ppuStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined8 **ppuStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 **ppuStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 **ppuStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined8 **ppuStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined8 **ppuStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined8 **ppuStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined8 **ppuStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined8 **ppuStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 **ppuStack_210;
  undefined8 **ppuStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 **ppuStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 **ppuStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 **ppuStack_120;
  undefined8 **ppuStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 **ppuStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 **ppuStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar5 = param_7;
  func_0x000107c61174(param_7);
  puStack_b8 = PTR_PTR_112705628;
  pppuVar1 = (undefined8 ***)&puStack_c0;
  uVar4 = param_1;
  uVar17 = param_2;
  uVar18 = param_3;
  uVar19 = param_4;
  puStack_c0 = param_5;
  func_0x000107c61154(param_1,param_2,param_3,param_4,pppuVar1,PTR_s_initWithFrame__1125e2948);
  if (pppuVar1 != (undefined8 ***)0x0) {
    func_0x000107c61174(param_7);
    ppuStack_c8 = param_7;
    if (param_7 == (undefined8 ***)0x0) {
      puVar2 = PTR_PTR_1126c6e88;
      func_0x000107c610f4(PTR_PTR_1126c6e88);
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c61180();
      func_0x000107c46464(puVar2);
      func_0x000107c61170(puVar3);
      param_7 = (undefined8 ***)PTR_PTR_1126c6e90;
      func_0x000107c610f4();
      func_0x000107c46988();
      func_0x000107c61170(puVar2);
    }
    unaff_x22 = PTR_PTR_1126df770;
    ppuStack_d0 = param_7;
    func_0x000107c610f4();
    func_0x000107c3ec60(pppuVar1);
    func_0x000107c469b4();
    uVar4 = *(undefined8 *)((long)pppuVar1 + (long)_DAT_11278c7d8);
    *(undefined **)((long)pppuVar1 + (long)_DAT_11278c7d8) = unaff_x22;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(unaff_x22);
    func_0x000107c5a050(unaff_x22);
    puVar2 = unaff_x22;
    func_0x000107c4aba4(unaff_x22);
    func_0x000107c61180();
    uVar4 = 0x4022000000000000;
    func_0x000107c539d4(0x4022000000000000);
    func_0x000107c61170(puVar2);
    puVar2 = unaff_x22;
    func_0x000107c4aba4(unaff_x22);
    func_0x000107c61180();
    func_0x000107c562f8();
    func_0x000107c61170(puVar2);
    func_0x000107c534b0(unaff_x22);
    func_0x000107c3d89c(pppuVar1);
    puStack_100 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar2 = unaff_x22;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    pppuVar5 = pppuVar1;
    puStack_d8 = puVar2;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    ppuStack_e0 = pppuVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    unaff_x28 = unaff_x22;
    puStack_e8 = puVar2;
    puStack_b0 = puVar2;
    func_0x000107c4ace0();
    func_0x000107c61180();
    pppuVar5 = pppuVar1;
    puStack_f0 = unaff_x28;
    func_0x000107c4ace0();
    func_0x000107c61180();
    ppuStack_f8 = pppuVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    unaff_x21 = unaff_x22;
    puStack_a8 = unaff_x28;
    func_0x000107c50890();
    func_0x000107c61180();
    unaff_x23 = pppuVar1;
    func_0x000107c50890();
    func_0x000107c61180();
    unaff_x24 = unaff_x21;
    func_0x000107c40280();
    func_0x000107c61180();
    unaff_x25 = unaff_x22;
    puStack_a0 = unaff_x24;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    pppuVar6 = pppuVar1;
    func_0x000107c3ec1c(pppuVar1);
    func_0x000107c61180();
    unaff_x26 = unaff_x25;
    func_0x000107c40280();
    func_0x000107c61180();
    unaff_x27 = (undefined8 ***)PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = unaff_x26;
    func_0x000107c3e17c();
    func_0x000107c61180();
    pppuVar5 = unaff_x27;
    func_0x000107c3d048(puStack_100);
    func_0x000107c61170(unaff_x22);
    func_0x000107c61170(unaff_x27);
    func_0x000107c61170(unaff_x26);
    func_0x000107c61170(pppuVar6);
    func_0x000107c61170(unaff_x25);
    func_0x000107c61170(unaff_x24);
    func_0x000107c61170(unaff_x23);
    func_0x000107c61170(unaff_x21);
    func_0x000107c61170(unaff_x28);
    func_0x000107c61170(ppuStack_f8);
    func_0x000107c61170(puStack_f0);
    func_0x000107c61170(puStack_e8);
    func_0x000107c61170(ppuStack_e0);
    func_0x000107c61170(puStack_d8);
    func_0x000107c61170(ppuStack_d0);
    param_7 = (undefined8 ***)ppuStack_c8;
  }
  pppuVar6 = param_7;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return pppuVar1;
  }
  func_0x000107c60e78();
  pcStack_108 = FUN_10057a3d8;
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_180 = param_1;
  uStack_178 = param_2;
  uStack_170 = param_3;
  uStack_168 = param_4;
  puStack_160 = unaff_x28;
  ppuStack_158 = unaff_x27;
  puStack_150 = unaff_x26;
  puStack_148 = unaff_x25;
  puStack_140 = unaff_x24;
  ppuStack_138 = unaff_x23;
  puStack_130 = unaff_x22;
  puStack_128 = unaff_x21;
  ppuStack_120 = pppuVar1;
  ppuStack_118 = param_7;
  puStack_110 = &stack0xfffffffffffffff0;
  func_0x000107c61174(pppuVar5);
  puStack_200 = PTR_PTR_112705618;
  pppuVar1 = &ppuStack_208;
  ppuStack_208 = pppuVar6;
  func_0x000107c61154(uVar4,uVar17,uVar18,uVar19,pppuVar1,PTR_s_initWithFrame__1125e2948);
  if (pppuVar1 != (undefined8 ***)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c3fa94(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
    func_0x000107c52b50(pppuVar1);
    func_0x000107c61170(puVar2);
    puVar2 = PTR_PTR_1126df748;
    func_0x000107c610f4();
    uVar17 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar18 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar19 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x000107c469a4(uVar17,uVar18,uVar19,uVar20);
    uVar4 = *(undefined8 *)((long)pppuVar1 + (long)_DAT_11278c77c);
    *(undefined **)((long)pppuVar1 + (long)_DAT_11278c77c) = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(puVar2);
    func_0x000107c550d8(puVar2);
    func_0x000107c5a050(puVar2);
    func_0x000107c41eb8(pppuVar5);
    func_0x000107c54148(puVar2);
    puVar3 = PTR_PTR_1126df748;
    func_0x000107c610f4();
    func_0x000107c469a4(uVar17,uVar18,uVar19,uVar20);
    uVar4 = *(undefined8 *)((long)pppuVar1 + (long)_DAT_11278c780);
    *(undefined **)((long)pppuVar1 + (long)_DAT_11278c780) = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(puVar3);
    func_0x000107c550d8(puVar3);
    func_0x000107c5a050(puVar3);
    func_0x000107c41eb8(pppuVar5);
    func_0x000107c54148(puVar3);
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    puVar8 = puVar2;
    func_0x000107c44c68(puVar2);
    func_0x000107c61180();
    func_0x000107c55090();
    func_0x000107c61170(puVar8);
    puVar8 = puVar3;
    func_0x000107c44c68(puVar3);
    func_0x000107c61180();
    puStack_218 = puVar7;
    func_0x000107c55090();
    func_0x000107c61170(puVar8);
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
    func_0x000107c537dc(pppuVar1);
    func_0x000107c61170(puVar7);
    func_0x000107c3d89c(pppuVar1);
    func_0x000107c3d89c(pppuVar1);
    pppuVar6 = pppuVar5;
    func_0x000107c4e188();
    *(char *)((long)pppuVar1 + (long)_DAT_11278c784) = (char)pppuVar6;
    if ((int)pppuVar6 != 0) {
      puVar8 = PTR_PTR_1126df750;
      func_0x000107c610fc();
      uVar4 = *(undefined8 *)((long)pppuVar1 + (long)_DAT_11278c788);
      *(undefined **)((long)pppuVar1 + (long)_DAT_11278c788) = puVar8;
      func_0x000107c61170(uVar4);
      func_0x000107c61174(puVar8);
      func_0x000107c5a050(puVar8);
      func_0x000107c3d89c(pppuVar1);
      puVar7 = puVar8;
      func_0x000107c3f75c();
      func_0x000107c61180();
      pppuVar6 = pppuVar1;
      func_0x000107c3f75c(pppuVar1);
      func_0x000107c61180();
      puVar9 = puVar7;
      func_0x000107c40280();
      func_0x000107c61180();
      lVar16 = (long)_DAT_11278c78c;
      uVar4 = *(undefined8 *)((long)pppuVar1 + lVar16);
      *(undefined **)((long)pppuVar1 + lVar16) = puVar9;
      func_0x000107c61170(uVar4);
      func_0x000107c61170(pppuVar6);
      func_0x000107c61170(puVar7);
      puVar7 = puVar8;
      func_0x000107c3f764();
      func_0x000107c61180();
      pppuVar6 = pppuVar1;
      func_0x000107c3ec1c(pppuVar1);
      func_0x000107c61180();
      puVar9 = puVar7;
      func_0x000107c40284(0xc05e800000000000);
      func_0x000107c61180();
      lVar15 = (long)_DAT_11278c790;
      uVar4 = *(undefined8 *)((long)pppuVar1 + lVar15);
      *(undefined **)((long)pppuVar1 + lVar15) = puVar9;
      func_0x000107c61170(uVar4);
      func_0x000107c61170(pppuVar6);
      func_0x000107c61170(puVar7);
      puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uStack_1a0 = *(undefined8 *)((long)pppuVar1 + lVar16);
      uStack_198 = *(undefined8 *)((long)pppuVar1 + lVar15);
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
      func_0x000107c61180();
      func_0x000107c3d048(puVar7);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar9);
    }
    puVar7 = PTR_PTR_1126df758;
    func_0x000107c610f4();
    pppuVar6 = pppuVar5;
    func_0x000107c437a4(pppuVar5);
    func_0x000107c61180();
    pppuVar10 = pppuVar6;
    func_0x000107c4155c();
    func_0x000107c61180();
    pppuVar11 = pppuVar5;
    func_0x000107c437a4(pppuVar5);
    func_0x000107c61180();
    pppuVar12 = pppuVar11;
    func_0x000107c3e5b8();
    func_0x000107c61180();
    func_0x000107c46464();
    uVar4 = *(undefined8 *)((long)pppuVar1 + (long)_DAT_11278c794);
    *(undefined **)((long)pppuVar1 + (long)_DAT_11278c794) = puVar7;
    ppuStack_210 = pppuVar5;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(puVar7);
    func_0x000107c61170(pppuVar12);
    func_0x000107c61170(pppuVar11);
    func_0x000107c61170(pppuVar10);
    func_0x000107c61170(pppuVar6);
    func_0x000107c59ebc(puVar7);
    func_0x000107c54af0(puVar7);
    func_0x000107c5a050(puVar7);
    func_0x000107c3d89c(pppuVar1);
    puStack_290 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar8 = puVar7;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    pppuVar5 = pppuVar1;
    puStack_220 = puVar8;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    ppuStack_228 = pppuVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar9 = puVar7;
    puStack_230 = puVar8;
    puStack_1f8 = puVar8;
    func_0x000107c4ace0();
    func_0x000107c61180();
    pppuVar5 = pppuVar1;
    puStack_238 = puVar9;
    func_0x000107c4ace0();
    func_0x000107c61180();
    ppuStack_240 = pppuVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar8 = puVar7;
    puStack_248 = puVar9;
    puStack_1f0 = puVar9;
    func_0x000107c50890();
    func_0x000107c61180();
    pppuVar5 = pppuVar1;
    puStack_250 = puVar8;
    func_0x000107c50890();
    func_0x000107c61180();
    ppuStack_258 = pppuVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar9 = puVar2;
    puStack_260 = puVar8;
    puStack_1e8 = puVar8;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    pppuVar5 = pppuVar1;
    puStack_268 = puVar9;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    ppuStack_270 = pppuVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar8 = puVar2;
    puStack_278 = puVar9;
    puStack_1e0 = puVar9;
    func_0x000107c4ace0();
    func_0x000107c61180();
    pppuVar5 = pppuVar1;
    puStack_280 = puVar8;
    func_0x000107c4ace0();
    func_0x000107c61180();
    ppuStack_288 = pppuVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar9 = puVar2;
    puStack_298 = puVar8;
    puStack_1d8 = puVar8;
    func_0x000107c50890();
    func_0x000107c61180();
    pppuVar5 = pppuVar1;
    puStack_2a8 = puVar9;
    func_0x000107c50890();
    func_0x000107c61180();
    ppuStack_2b0 = pppuVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar8 = puVar2;
    puStack_2c0 = puVar9;
    puStack_1d0 = puVar9;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    pppuVar5 = pppuVar1;
    puStack_2c8 = puVar8;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    ppuStack_2d0 = pppuVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar9 = puVar3;
    puStack_2d8 = puVar8;
    puStack_1c8 = puVar8;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    pppuVar5 = pppuVar1;
    puStack_2e0 = puVar9;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    ppuStack_2e8 = pppuVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar8 = puVar3;
    puStack_2f0 = puVar9;
    puStack_1c0 = puVar9;
    func_0x000107c4ace0();
    func_0x000107c61180();
    pppuVar5 = pppuVar1;
    puStack_2f8 = puVar8;
    func_0x000107c4ace0();
    func_0x000107c61180();
    ppuStack_300 = pppuVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar9 = puVar3;
    puStack_2b8 = puVar3;
    puStack_1b8 = puVar8;
    func_0x000107c50890();
    func_0x000107c61180();
    pppuVar10 = pppuVar1;
    puStack_2a0 = puVar2;
    func_0x000107c50890(pppuVar1);
    func_0x000107c61180();
    puVar2 = puVar9;
    func_0x000107c40280();
    func_0x000107c61180();
    puStack_1b0 = puVar2;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    pppuVar6 = pppuVar1;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar13 = puVar3;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_1a8 = puVar13;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    func_0x000107c3d048(puStack_290);
    pppuVar5 = (undefined8 ***)ppuStack_210;
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar14);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(pppuVar6);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(pppuVar10);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(ppuStack_300);
    func_0x000107c61170(puStack_2f8);
    func_0x000107c61170(puStack_2f0);
    func_0x000107c61170(ppuStack_2e8);
    func_0x000107c61170(puStack_2e0);
    func_0x000107c61170(puStack_2d8);
    func_0x000107c61170(ppuStack_2d0);
    func_0x000107c61170(puStack_2c8);
    func_0x000107c61170(puStack_2c0);
    func_0x000107c61170(ppuStack_2b0);
    func_0x000107c61170(puStack_2a8);
    func_0x000107c61170(puStack_298);
    func_0x000107c61170(ppuStack_288);
    func_0x000107c61170(puStack_280);
    func_0x000107c61170(puStack_278);
    func_0x000107c61170(ppuStack_270);
    func_0x000107c61170(puStack_268);
    func_0x000107c61170(puStack_260);
    func_0x000107c61170(ppuStack_258);
    func_0x000107c61170(puStack_250);
    func_0x000107c61170(puStack_248);
    func_0x000107c61170(ppuStack_240);
    func_0x000107c61170(puStack_238);
    func_0x000107c61170(puStack_230);
    func_0x000107c61170(ppuStack_228);
    func_0x000107c61170(puStack_220);
    func_0x000107c61170(puStack_218);
    func_0x000107c61170(puStack_2b8);
    func_0x000107c61170(puStack_2a0);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_190) {
    return pppuVar1;
  }
  func_0x000107c60e78();
  pppuVar10 = &ppuStack_330;
  pcStack_308 = FUN_10057ad3c;
  puStack_328 = PTR_PTR_112705620;
  ppuStack_330 = pppuVar5;
  ppuStack_320 = pppuVar1;
  ppuStack_318 = pppuVar6;
  ppuStack_310 = &puStack_110;
  func_0x000107c61154(&ppuStack_330,PTR_s_initWithFrame__1125e2948);
  if (pppuVar10 != (undefined8 ***)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
    func_0x000107c52b50(pppuVar10);
    func_0x000107c61170(puVar2);
  }
  return pppuVar10;
}



/* Entry: 10057a3d8; end: 10057ad3b; -[SIGContainerPresentationView initWithFrame:contentViewLayoutConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ***
FUN_10057a3d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 ***param_5,undefined8 param_6,undefined8 **param_7)

{
  undefined8 ***pppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 **ppuVar7;
  undefined8 ***pppuVar8;
  undefined *puVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  undefined8 **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puStack_230;
  undefined *puStack_228;
  undefined8 **ppuStack_220;
  undefined8 **ppuStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined8 **ppuStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined8 **ppuStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 **ppuStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 **ppuStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 **ppuStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 **ppuStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 **ppuStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined8 **ppuStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_7);
  puStack_100 = PTR_PTR_112705618;
  pppuVar1 = &ppuStack_108;
  ppuStack_108 = param_5;
  func_0x000107c61154(param_1,param_2,param_3,param_4,pppuVar1,PTR_s_initWithFrame__1125e2948);
  if (pppuVar1 != (undefined8 ***)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c3fa94(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
    func_0x000107c52b50(pppuVar1);
    func_0x000107c61170(puVar2);
    puVar2 = PTR_PTR_1126df748;
    func_0x000107c610f4();
    uVar17 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar18 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar19 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x000107c469a4(uVar17,uVar18,uVar19,uVar20);
    uVar3 = *(undefined8 *)((long)pppuVar1 + (long)_DAT_11278c77c);
    *(undefined **)((long)pppuVar1 + (long)_DAT_11278c77c) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(puVar2);
    func_0x000107c550d8(puVar2);
    func_0x000107c5a050(puVar2);
    func_0x000107c41eb8(param_7);
    func_0x000107c54148(puVar2);
    puVar4 = PTR_PTR_1126df748;
    func_0x000107c610f4();
    func_0x000107c469a4(uVar17,uVar18,uVar19,uVar20);
    uVar3 = *(undefined8 *)((long)pppuVar1 + (long)_DAT_11278c780);
    *(undefined **)((long)pppuVar1 + (long)_DAT_11278c780) = puVar4;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(puVar4);
    func_0x000107c550d8(puVar4);
    func_0x000107c5a050(puVar4);
    func_0x000107c41eb8(param_7);
    func_0x000107c54148(puVar4);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    puVar6 = puVar2;
    func_0x000107c44c68(puVar2);
    func_0x000107c61180();
    func_0x000107c55090();
    func_0x000107c61170(puVar6);
    puVar6 = puVar4;
    func_0x000107c44c68(puVar4);
    func_0x000107c61180();
    puStack_118 = puVar5;
    func_0x000107c55090();
    func_0x000107c61170(puVar6);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
    func_0x000107c537dc(pppuVar1);
    func_0x000107c61170(puVar5);
    func_0x000107c3d89c(pppuVar1);
    func_0x000107c3d89c(pppuVar1);
    ppuVar7 = param_7;
    func_0x000107c4e188();
    *(char *)((long)pppuVar1 + (long)_DAT_11278c784) = (char)ppuVar7;
    if ((int)ppuVar7 != 0) {
      puVar6 = PTR_PTR_1126df750;
      func_0x000107c610fc();
      uVar3 = *(undefined8 *)((long)pppuVar1 + (long)_DAT_11278c788);
      *(undefined **)((long)pppuVar1 + (long)_DAT_11278c788) = puVar6;
      func_0x000107c61170(uVar3);
      func_0x000107c61174(puVar6);
      func_0x000107c5a050(puVar6);
      func_0x000107c3d89c(pppuVar1);
      puVar5 = puVar6;
      func_0x000107c3f75c();
      func_0x000107c61180();
      pppuVar8 = pppuVar1;
      func_0x000107c3f75c(pppuVar1);
      func_0x000107c61180();
      puVar9 = puVar5;
      func_0x000107c40280();
      func_0x000107c61180();
      lVar16 = (long)_DAT_11278c78c;
      uVar3 = *(undefined8 *)((long)pppuVar1 + lVar16);
      *(undefined **)((long)pppuVar1 + lVar16) = puVar9;
      func_0x000107c61170(uVar3);
      func_0x000107c61170(pppuVar8);
      func_0x000107c61170(puVar5);
      puVar5 = puVar6;
      func_0x000107c3f764();
      func_0x000107c61180();
      pppuVar8 = pppuVar1;
      func_0x000107c3ec1c(pppuVar1);
      func_0x000107c61180();
      puVar9 = puVar5;
      func_0x000107c40284(0xc05e800000000000);
      func_0x000107c61180();
      lVar15 = (long)_DAT_11278c790;
      uVar3 = *(undefined8 *)((long)pppuVar1 + lVar15);
      *(undefined **)((long)pppuVar1 + lVar15) = puVar9;
      func_0x000107c61170(uVar3);
      func_0x000107c61170(pppuVar8);
      func_0x000107c61170(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uStack_a0 = *(undefined8 *)((long)pppuVar1 + lVar16);
      uStack_98 = *(undefined8 *)((long)pppuVar1 + lVar15);
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
      func_0x000107c61180();
      func_0x000107c3d048(puVar5);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar9);
    }
    puVar5 = PTR_PTR_1126df758;
    func_0x000107c610f4();
    ppuVar7 = param_7;
    func_0x000107c437a4(param_7);
    func_0x000107c61180();
    ppuVar10 = ppuVar7;
    func_0x000107c4155c();
    func_0x000107c61180();
    ppuVar11 = param_7;
    func_0x000107c437a4(param_7);
    func_0x000107c61180();
    ppuVar12 = ppuVar11;
    func_0x000107c3e5b8();
    func_0x000107c61180();
    func_0x000107c46464();
    uVar3 = *(undefined8 *)((long)pppuVar1 + (long)_DAT_11278c794);
    *(undefined **)((long)pppuVar1 + (long)_DAT_11278c794) = puVar5;
    puStack_110 = param_7;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(puVar5);
    func_0x000107c61170(ppuVar12);
    func_0x000107c61170(ppuVar11);
    func_0x000107c61170(ppuVar10);
    func_0x000107c61170(ppuVar7);
    func_0x000107c59ebc(puVar5);
    func_0x000107c54af0(puVar5);
    func_0x000107c5a050(puVar5);
    func_0x000107c3d89c(pppuVar1);
    puStack_190 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar6 = puVar5;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    pppuVar8 = pppuVar1;
    puStack_120 = puVar6;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    ppuStack_128 = pppuVar8;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar9 = puVar5;
    puStack_130 = puVar6;
    puStack_f8 = puVar6;
    func_0x000107c4ace0();
    func_0x000107c61180();
    pppuVar8 = pppuVar1;
    puStack_138 = puVar9;
    func_0x000107c4ace0();
    func_0x000107c61180();
    ppuStack_140 = pppuVar8;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar6 = puVar5;
    puStack_148 = puVar9;
    puStack_f0 = puVar9;
    func_0x000107c50890();
    func_0x000107c61180();
    pppuVar8 = pppuVar1;
    puStack_150 = puVar6;
    func_0x000107c50890();
    func_0x000107c61180();
    ppuStack_158 = pppuVar8;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar9 = puVar2;
    puStack_160 = puVar6;
    puStack_e8 = puVar6;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    pppuVar8 = pppuVar1;
    puStack_168 = puVar9;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    ppuStack_170 = pppuVar8;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar6 = puVar2;
    puStack_178 = puVar9;
    puStack_e0 = puVar9;
    func_0x000107c4ace0();
    func_0x000107c61180();
    pppuVar8 = pppuVar1;
    puStack_180 = puVar6;
    func_0x000107c4ace0();
    func_0x000107c61180();
    ppuStack_188 = pppuVar8;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar9 = puVar2;
    puStack_198 = puVar6;
    puStack_d8 = puVar6;
    func_0x000107c50890();
    func_0x000107c61180();
    pppuVar8 = pppuVar1;
    puStack_1a8 = puVar9;
    func_0x000107c50890();
    func_0x000107c61180();
    ppuStack_1b0 = pppuVar8;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar6 = puVar2;
    puStack_1c0 = puVar9;
    puStack_d0 = puVar9;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    pppuVar8 = pppuVar1;
    puStack_1c8 = puVar6;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    ppuStack_1d0 = pppuVar8;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar9 = puVar4;
    puStack_1d8 = puVar6;
    puStack_c8 = puVar6;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    pppuVar8 = pppuVar1;
    puStack_1e0 = puVar9;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    ppuStack_1e8 = pppuVar8;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar6 = puVar4;
    puStack_1f0 = puVar9;
    puStack_c0 = puVar9;
    func_0x000107c4ace0();
    func_0x000107c61180();
    pppuVar8 = pppuVar1;
    puStack_1f8 = puVar6;
    func_0x000107c4ace0();
    func_0x000107c61180();
    ppuStack_200 = pppuVar8;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar9 = puVar4;
    puStack_1b8 = puVar4;
    puStack_b8 = puVar6;
    func_0x000107c50890();
    func_0x000107c61180();
    pppuVar8 = pppuVar1;
    puStack_1a0 = puVar2;
    func_0x000107c50890(pppuVar1);
    func_0x000107c61180();
    puVar2 = puVar9;
    func_0x000107c40280();
    func_0x000107c61180();
    puStack_b0 = puVar2;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    param_5 = pppuVar1;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar13 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a8 = puVar13;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    func_0x000107c3d048(puStack_190);
    param_7 = (undefined8 **)puStack_110;
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar14);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(param_5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(pppuVar8);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(ppuStack_200);
    func_0x000107c61170(puStack_1f8);
    func_0x000107c61170(puStack_1f0);
    func_0x000107c61170(ppuStack_1e8);
    func_0x000107c61170(puStack_1e0);
    func_0x000107c61170(puStack_1d8);
    func_0x000107c61170(ppuStack_1d0);
    func_0x000107c61170(puStack_1c8);
    func_0x000107c61170(puStack_1c0);
    func_0x000107c61170(ppuStack_1b0);
    func_0x000107c61170(puStack_1a8);
    func_0x000107c61170(puStack_198);
    func_0x000107c61170(ppuStack_188);
    func_0x000107c61170(puStack_180);
    func_0x000107c61170(puStack_178);
    func_0x000107c61170(ppuStack_170);
    func_0x000107c61170(puStack_168);
    func_0x000107c61170(puStack_160);
    func_0x000107c61170(ppuStack_158);
    func_0x000107c61170(puStack_150);
    func_0x000107c61170(puStack_148);
    func_0x000107c61170(ppuStack_140);
    func_0x000107c61170(puStack_138);
    func_0x000107c61170(puStack_130);
    func_0x000107c61170(ppuStack_128);
    func_0x000107c61170(puStack_120);
    func_0x000107c61170(puStack_118);
    func_0x000107c61170(puStack_1b8);
    func_0x000107c61170(puStack_1a0);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return pppuVar1;
  }
  func_0x000107c60e78();
  pppuVar8 = (undefined8 ***)&puStack_230;
  pcStack_208 = FUN_10057ad3c;
  puStack_228 = PTR_PTR_112705620;
  puStack_230 = param_7;
  ppuStack_220 = pppuVar1;
  ppuStack_218 = param_5;
  puStack_210 = &stack0xfffffffffffffff0;
  func_0x000107c61154(&puStack_230,PTR_s_initWithFrame__1125e2948);
  if (pppuVar8 != (undefined8 ***)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
    func_0x000107c52b50(pppuVar8);
    func_0x000107c61170(puVar2);
  }
  return pppuVar8;
}



/* Entry: 10057ad3c; end: 10057adb3; -[SIGContainerView initWithFrame:] */

undefined1 * FUN_10057ad3c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112705620;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
    func_0x000107c52b50(puVar1);
    func_0x000107c61170(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10057adb4; end: 10057b86f; -[SIGSubscreenView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10057adb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined *param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 *puVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 *puVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 *puVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 *puVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_150 = PTR_PTR_11270b678;
  puVar1 = &uStack_158;
  uStack_158 = param_5;
  func_0x000107c61154(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar9 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c534b0(puVar1);
    puVar2 = PTR_PTR_1126b12f0;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127951c0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127951c0) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(puVar2);
    func_0x000107c53fcc(puVar2);
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f4();
    uVar50 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar51 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar52 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar53 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x000107c469a4(uVar50,uVar51,uVar52,uVar53);
    func_0x000107c5a050();
    lVar45 = (long)_DAT_1127951c4;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar45);
    *(undefined **)((long)puVar1 + lVar45) = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c3d89c(puVar1);
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f4();
    func_0x000107c469a4(uVar50,uVar51,uVar52,uVar53);
    func_0x000107c5a050();
    lVar46 = (long)_DAT_1127951c8;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar46);
    *(undefined **)((long)puVar1 + lVar46) = puVar5;
    func_0x000107c61174(puVar5);
    func_0x000107c61170(uVar3);
    func_0x000107c3d89c(puVar1);
    puVar6 = PTR_PTR_1126e1868;
    func_0x000107c610f4();
    func_0x000107c469a4(uVar50,uVar51,uVar52,uVar53);
    func_0x000107c5a050();
    lVar47 = (long)_DAT_1127951cc;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar47);
    *(undefined **)((long)puVar1 + lVar47) = puVar6;
    func_0x000107c61174(puVar6);
    func_0x000107c61170(uVar3);
    func_0x000107c3d89c(puVar1);
    func_0x000107c550d8(puVar6);
    puVar7 = PTR_PTR_1126af078;
    func_0x000107c610f4();
    func_0x000107c469a4(param_1,param_2,param_3,param_4);
    func_0x000107c5a050();
    func_0x000107c59ebc(puVar7);
    func_0x000107c53fcc(puVar7);
    lVar48 = (long)_DAT_1127951d0;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar48);
    *(undefined **)((long)puVar1 + lVar48) = puVar7;
    func_0x000107c61174(puVar7);
    func_0x000107c61170(uVar3);
    func_0x000107c3d89c(puVar1);
    puVar8 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    func_0x000107c610fc();
    lVar49 = (long)_DAT_1127951d4;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar49);
    *(undefined **)((long)puVar1 + lVar49) = puVar8;
    func_0x000107c61170(uVar3);
    func_0x000107c3d72c(puVar1);
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar53 = *(undefined8 *)((long)puVar1 + lVar49);
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uVar3 = uVar53;
    func_0x000107c40280();
    func_0x000107c61180();
    uStack_d0 = uVar3;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar49);
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar11 = puVar1;
    func_0x000107c3ec1c(puVar1);
    func_0x000107c61180();
    uVar50 = uVar10;
    func_0x000107c402a4();
    func_0x000107c61180();
    uStack_c8 = uVar50;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar49);
    func_0x000107c4acb0();
    func_0x000107c61180();
    puVar13 = puVar1;
    func_0x000107c4acb0(puVar1);
    func_0x000107c61180();
    uVar51 = uVar12;
    func_0x000107c402a4();
    func_0x000107c61180();
    uStack_c0 = uVar51;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar49);
    func_0x000107c5ce8c();
    func_0x000107c61180();
    puVar15 = puVar1;
    func_0x000107c5ce8c(puVar1);
    func_0x000107c61180();
    uVar52 = uVar14;
    func_0x000107c402a4();
    func_0x000107c61180();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_b8 = uVar52;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    func_0x000107c3d048(puVar8);
    func_0x000107c61170(puVar16);
    func_0x000107c61170(uVar52);
    func_0x000107c61170(puVar15);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar51);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar50);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar53);
    uVar50 = *(undefined8 *)((long)puVar1 + lVar47);
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar11 = puVar1;
    func_0x000107c51a7c(puVar1);
    func_0x000107c61180();
    uVar3 = uVar50;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar11);
    func_0x000107c61170(uVar50);
    uVar50 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127951d8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127951d8) = uVar3;
    func_0x000107c61174(uVar3);
    func_0x000107c61170(uVar50);
    uVar51 = *(undefined8 *)((long)puVar1 + lVar46);
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uVar52 = *(undefined8 *)((long)puVar1 + lVar48);
    func_0x000107c3ec1c(uVar52);
    func_0x000107c61180();
    uVar50 = uVar51;
    func_0x000107c40280();
    func_0x000107c61180();
    lVar49 = (long)_DAT_1127951dc;
    uVar53 = *(undefined8 *)((long)puVar1 + lVar49);
    *(undefined8 *)((long)puVar1 + lVar49) = uVar50;
    func_0x000107c61170(uVar53);
    func_0x000107c61170(uVar52);
    func_0x000107c61170(uVar51);
    puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar17 = *(undefined8 *)((long)puVar1 + lVar48);
    func_0x000107c5e308();
    func_0x000107c61180();
    puVar18 = puVar1;
    func_0x000107c5e308();
    func_0x000107c61180();
    uVar19 = uVar17;
    func_0x000107c40280();
    func_0x000107c61180();
    uStack_148 = uVar19;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar48);
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar21 = puVar1;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uVar10 = uVar20;
    func_0x000107c40280();
    func_0x000107c61180();
    uStack_140 = uVar10;
    uVar22 = *(undefined8 *)((long)puVar1 + lVar48);
    func_0x000107c3f75c();
    func_0x000107c61180();
    puVar15 = puVar1;
    func_0x000107c3f75c();
    func_0x000107c61180();
    uVar12 = uVar22;
    func_0x000107c40280();
    func_0x000107c61180();
    uStack_138 = uVar12;
    uVar23 = *(undefined8 *)((long)puVar1 + lVar45);
    func_0x000107c5e308();
    func_0x000107c61180();
    puVar24 = puVar1;
    func_0x000107c5e308();
    func_0x000107c61180();
    uVar14 = uVar23;
    func_0x000107c40280();
    func_0x000107c61180();
    uStack_130 = uVar14;
    uVar25 = *(undefined8 *)((long)puVar1 + lVar45);
    func_0x000107c3f75c();
    func_0x000107c61180();
    puVar26 = puVar1;
    func_0x000107c3f75c();
    func_0x000107c61180();
    uVar27 = uVar25;
    func_0x000107c40280();
    func_0x000107c61180();
    uStack_128 = uVar27;
    uVar28 = *(undefined8 *)((long)puVar1 + lVar45);
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar29 = puVar1;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uVar30 = uVar28;
    func_0x000107c40280();
    func_0x000107c61180();
    uStack_120 = uVar30;
    uVar31 = *(undefined8 *)((long)puVar1 + lVar45);
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar32 = puVar1;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    uVar33 = uVar31;
    func_0x000107c40280();
    func_0x000107c61180();
    uStack_118 = uVar33;
    uVar34 = *(undefined8 *)((long)puVar1 + lVar46);
    func_0x000107c5e308();
    func_0x000107c61180();
    puVar35 = puVar1;
    func_0x000107c5e308();
    func_0x000107c61180();
    uVar36 = uVar34;
    func_0x000107c40280();
    func_0x000107c61180();
    uStack_110 = uVar36;
    uVar37 = *(undefined8 *)((long)puVar1 + lVar46);
    func_0x000107c3f75c();
    func_0x000107c61180();
    puVar38 = puVar1;
    func_0x000107c3f75c();
    func_0x000107c61180();
    uVar39 = uVar37;
    func_0x000107c40280();
    func_0x000107c61180();
    uStack_108 = uVar39;
    uStack_100 = *(undefined8 *)((long)puVar1 + lVar49);
    uVar40 = *(undefined8 *)((long)puVar1 + lVar46);
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar41 = puVar1;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    uVar50 = uVar40;
    func_0x000107c40280();
    func_0x000107c61180();
    uStack_f8 = uVar50;
    uStack_f0 = uVar3;
    uVar42 = *(undefined8 *)((long)puVar1 + lVar47);
    func_0x000107c3f75c();
    func_0x000107c61180();
    puVar11 = puVar1;
    func_0x000107c3f75c(puVar1);
    func_0x000107c61180();
    uVar51 = uVar42;
    func_0x000107c40280();
    func_0x000107c61180();
    uStack_e8 = uVar51;
    uVar43 = *(undefined8 *)((long)puVar1 + lVar47);
    func_0x000107c5e308();
    func_0x000107c61180();
    puVar13 = puVar1;
    func_0x000107c5e308();
    func_0x000107c61180();
    uVar52 = uVar43;
    func_0x000107c40280();
    func_0x000107c61180();
    uStack_e0 = uVar52;
    uVar44 = *(undefined8 *)((long)puVar1 + lVar47);
    func_0x000107c44d9c();
    func_0x000107c61180();
    uVar53 = uVar44;
    func_0x000107c40290(0x4062600000000000);
    func_0x000107c61180();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_d8 = uVar53;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    param_7 = puVar16;
    func_0x000107c3d048(puVar8);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar16);
    func_0x000107c61170(uVar53);
    func_0x000107c61170(uVar44);
    func_0x000107c61170(uVar52);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(uVar43);
    func_0x000107c61170(uVar51);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(uVar42);
    func_0x000107c61170(uVar50);
    func_0x000107c61170(puVar41);
    func_0x000107c61170(uVar40);
    func_0x000107c61170(uVar39);
    func_0x000107c61170(puVar38);
    func_0x000107c61170(uVar37);
    func_0x000107c61170(uVar36);
    func_0x000107c61170(puVar35);
    func_0x000107c61170(uVar34);
    func_0x000107c61170(uVar33);
    func_0x000107c61170(puVar32);
    func_0x000107c61170(uVar31);
    func_0x000107c61170(uVar30);
    func_0x000107c61170(puVar29);
    func_0x000107c61170(uVar28);
    func_0x000107c61170(uVar27);
    func_0x000107c61170(puVar26);
    func_0x000107c61170(uVar25);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(puVar24);
    func_0x000107c61170(uVar23);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(puVar15);
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(puVar21);
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(puVar18);
    func_0x000107c61170(uVar17);
    func_0x000107c3c954(puVar1);
    func_0x000107c61170(puVar9);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return puVar1;
  }
  func_0x000107c60e78();
  puVar9 = puVar9 + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(puVar9,param_7);
  return puVar9;
}



/* Entry: 10057b870; end: 10057b87b; -[SIGScrollViewKeyValueObserver setDelegate:] */

void FUN_10057b870(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 10057b87c; end: 10057b8cb; -[SIGContainerView addSubview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10057b87c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112705620;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_addSubview__11259c880);
  *(undefined1 *)(param_1 + _DAT_11278c798) = 1;
  return;
}



/* Entry: 10057b8cc; end: 10057ba67; -[SIGSubscreenViewControllerContentFade initWithFrame:] */

/* WARNING: Possible PIC construction at 0x00010057b934: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010057b938) */
/* WARNING: Removing unreachable block (ram,0x00010057b948) */

undefined * FUN_10057b8cc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_48;
  
  puVar1 = &uStack_70;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_68 = PTR_PTR_11270b680;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar1 == (undefined8 *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return (undefined *)0x0;
    }
    func_0x000107c60e78();
  }
  else {
    func_0x000107c4aba4(puVar1);
    func_0x000107c61180();
  }
  puVar2 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  return puVar2;
}



/* Entry: 10057ba68; end: 10057ba73; +[SIGSubscreenViewControllerContentFade layerClass] */

void FUN_10057ba68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  return;
}



/* Entry: 10057ba74; end: 10057bc2f;  */

void FUN_10057ba74(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x000107c61174(param_2);
  lVar3 = lRam00000001138466f0;
  lVar1 = lRam00000001138466f0;
  FUN_10057bc30();
  func_0x000107c61180();
  if (lVar3 == 2) {
    lVar3 = *(long *)(param_1 + 0x20);
LAB_10057bb38:
    func_0x000107c4d9e8();
    func_0x000107c61180();
joined_r0x00010057bb48:
    if (lVar3 != 0) goto LAB_10057bc04;
  }
  else {
    if (lVar3 == 1) {
LAB_10057bb1c:
      lVar3 = *(long *)(param_1 + 0x20);
      goto LAB_10057bb38;
    }
    if (lVar3 == 0) {
      lVar3 = param_2;
      func_0x000107c5d9c8();
      if (lVar3 == 2) {
        lVar2 = *(long *)(param_1 + 0x20);
        func_0x000107c4d9e8();
        func_0x000107c61180();
        if (lVar2 != 0) {
          lVar3 = *(long *)(param_1 + 0x20);
          func_0x000107c4d9e8();
          func_0x000107c61180();
          goto LAB_10057bbdc;
        }
      }
      goto LAB_10057bb1c;
    }
    if (lVar1 != 0) {
      lVar5 = *(long *)(param_1 + 0x20);
      lVar2 = lVar1;
      func_0x000107c5c8c0(lVar1);
      func_0x000107c61180();
      func_0x000107c4d9e8();
      func_0x000107c61180();
      lVar3 = *(long *)(param_1 + 0x20);
      lVar4 = lVar1;
      if (lVar5 == 0) {
        func_0x000107c3e6a8(lVar1);
        func_0x000107c61180();
      }
      else {
        func_0x000107c5c8c0(lVar1);
        func_0x000107c61180();
      }
      func_0x000107c4d9e8();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar5);
LAB_10057bbdc:
      func_0x000107c61170(lVar2);
      goto joined_r0x00010057bb48;
    }
  }
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x000107c4d9e8(lVar3);
  func_0x000107c61180();
LAB_10057bc04:
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10057bc30; end: 10057bcbb;  */

void FUN_10057bc30(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (lRam00000001137fbfb0 != -1) {
    FUN_10002a2fc(0x1137fbfb0,&PTR___NSConcreteGlobalBlock_110d66258);
  }
  uVar2 = uRam00000001137fbfa8;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c4d9e8(uVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10057bcbc; end: 10057be1b;  */

void FUN_10057bcbc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  lVar5 = (long)puRam00000001137fbfa8;
  puRam00000001137fbfa8 = puVar4;
  func_0x000107c61170();
  FUN_10057be1c();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(lVar5);
      }
      puVar3 = puRam00000001137fbfa8;
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c3dd68(*(undefined8 *)(lVar8 * 8));
      func_0x000107c4d960(puVar4);
      func_0x000107c61180();
      func_0x000107c56bd8(puVar3);
      func_0x000107c61170(puVar4);
      lVar8 = lVar8 + 1;
    } while (lVar6 != lVar8);
    lVar6 = lVar5;
    func_0x000107c4080c();
  }
  func_0x000107c61170(lVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  func_0x000107c60e78();
  if (lRam00000001137fbf90 != -1) {
    FUN_10002a2fc(0x1137fbf90,&PTR___NSConcreteGlobalBlock_110d66218);
  }
  uVar2 = uRam00000001137fbf88;
  func_0x000107c61174(uRam00000001137fbf88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10057be1c; end: 10057be6f;  */

void FUN_10057be1c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fbf90 != -1) {
    FUN_10002a2fc(0x1137fbf90,&PTR___NSConcreteGlobalBlock_110d66218);
  }
  uVar1 = uRam00000001137fbf88;
  func_0x000107c61174(uRam00000001137fbf88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10057be70; end: 10057c9a3;  */

/* WARNING: Possible PIC construction at 0x00010057bea8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057bef8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057bf44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057bf90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057bfdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057c028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057c074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057c0c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057c10c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057c158: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057c1a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057c1f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057c23c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057c288: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057c2d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057c320: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057c36c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057c3b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057c404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057c464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057c4c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057c518: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057c578: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057c5dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057c638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057c694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057c6f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057c748: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057c7a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057c808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057c868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057c8c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057c928: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010057c8cc) */
/* WARNING: Removing unreachable block (ram,0x00010057c86c) */
/* WARNING: Removing unreachable block (ram,0x00010057c80c) */
/* WARNING: Removing unreachable block (ram,0x00010057c7ac) */
/* WARNING: Removing unreachable block (ram,0x00010057c74c) */
/* WARNING: Removing unreachable block (ram,0x00010057c6f8) */
/* WARNING: Removing unreachable block (ram,0x00010057c698) */
/* WARNING: Removing unreachable block (ram,0x00010057c63c) */
/* WARNING: Removing unreachable block (ram,0x00010057c5e0) */
/* WARNING: Removing unreachable block (ram,0x00010057c57c) */
/* WARNING: Removing unreachable block (ram,0x00010057c51c) */
/* WARNING: Removing unreachable block (ram,0x00010057c4c8) */
/* WARNING: Removing unreachable block (ram,0x00010057c468) */
/* WARNING: Removing unreachable block (ram,0x00010057c408) */
/* WARNING: Removing unreachable block (ram,0x00010057c3bc) */
/* WARNING: Removing unreachable block (ram,0x00010057c370) */
/* WARNING: Removing unreachable block (ram,0x00010057c324) */
/* WARNING: Removing unreachable block (ram,0x00010057c2d8) */
/* WARNING: Removing unreachable block (ram,0x00010057c28c) */
/* WARNING: Removing unreachable block (ram,0x00010057c240) */
/* WARNING: Removing unreachable block (ram,0x00010057c1f4) */
/* WARNING: Removing unreachable block (ram,0x00010057c1a8) */
/* WARNING: Removing unreachable block (ram,0x00010057c15c) */
/* WARNING: Removing unreachable block (ram,0x00010057c110) */
/* WARNING: Removing unreachable block (ram,0x00010057c0c4) */
/* WARNING: Removing unreachable block (ram,0x00010057c078) */
/* WARNING: Removing unreachable block (ram,0x00010057c02c) */
/* WARNING: Removing unreachable block (ram,0x00010057bfe0) */
/* WARNING: Removing unreachable block (ram,0x00010057bf94) */
/* WARNING: Removing unreachable block (ram,0x00010057bf48) */
/* WARNING: Removing unreachable block (ram,0x00010057befc) */
/* WARNING: Removing unreachable block (ram,0x00010057beac) */
/* WARNING: Removing unreachable block (ram,0x00010057c92c) */

void FUN_10057be70(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610fc();
  uVar1 = puRam00000001137fbf88;
  puRam00000001137fbf88 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10057c9a4; end: 10057cb0b; -[AppTheme initWithAppAppearance:themeId:intefaceStyle:baseThemeId:backgroundImageURL:pullToRefreshThemeGhostImageName:pullToRefreshThemeGhostWinkImageName:pullToRefreshThemeBackgroundImageName:] */

undefined1 *
FUN_10057c9a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  puStack_68 = PTR_PTR_11270b800;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10057cb0c; end: 10057cb13; -[AppTheme appAppearancePreference] */

undefined8 FUN_10057cb0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10057cb14; end: 10057cce3; -[SIGHeader initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10057cb14(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_11270b4d8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x000107c44d9c();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c40290(0);
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794998);
    *(undefined1 **)((long)puVar1 + (long)_DAT_112794998) = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c521e8(puVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11279499c) = 0;
    puVar5 = PTR_PTR_1126e1758;
    func_0x000107c610f4(PTR_PTR_1126e1758);
    func_0x000107c469a4(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    func_0x000107c53814(0x403c000000000000);
    func_0x000107c57188(0x401c000000000000,puVar5);
    func_0x000107c5a050(puVar5);
    func_0x000107c3d89c(puVar1);
    puVar6 = PTR_PTR_1126b12f0;
    func_0x000107c610fc();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127949a0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127949a0) = puVar6;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(puVar6);
    func_0x000107c53fcc(puVar6);
    func_0x000107c534b0(puVar1);
    puVar2 = (undefined1 *)puVar1;
    func_0x000107c4aba4(puVar1);
    func_0x000107c61180();
    func_0x000107c562fc();
    func_0x000107c61170(puVar2);
    func_0x000107c3e260(puVar1);
    func_0x000107c58cf0(puVar1);
    puVar7 = PTR_PTR_1126e1760;
    func_0x000107c610fc(PTR_PTR_1126e1760);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar3);
    func_0x000107c3d950(puVar7);
    func_0x000107c3d6fc(puVar1);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar5);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10057cce4; end: 10057d173; -[SIGHeaderBackgroundView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10057cce4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_d0 = PTR_PTR_11270b4f0;
  puVar1 = &uStack_d8;
  uStack_d8 = param_1;
  func_0x000107c61154(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c534b0(puVar1);
    puVar2 = puVar1;
    func_0x000107c4aba4(puVar1);
    func_0x000107c61180();
    func_0x000107c562fc();
    func_0x000107c61170(puVar2);
    func_0x000107c5a050(puVar1);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f4();
    uVar26 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar27 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar28 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar29 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x000107c469a4(uVar26,uVar27,uVar28,uVar29);
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127949dc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127949dc) = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(puVar3);
    func_0x000107c5a050(puVar3);
    func_0x000107c3d89c(puVar1);
    puVar5 = PTR_PTR_1126e1780;
    func_0x000107c610f4();
    func_0x000107c469a4(uVar26,uVar27,uVar28,uVar29);
    func_0x000107c5a050();
    func_0x000107c3d89c(puVar1);
    puVar6 = puVar3;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c3ec1c(puVar1);
    func_0x000107c61180();
    func_0x000107c3b3dc(puVar1);
    puVar7 = puVar6;
    func_0x000107c40284();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127949e0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127949e0) = puVar7;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(puVar7);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar8 = puVar3;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar9 = puVar8;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar10 = puVar3;
    puStack_c8 = puVar9;
    func_0x000107c4acb0();
    func_0x000107c61180();
    puVar11 = puVar1;
    func_0x000107c4acb0();
    func_0x000107c61180();
    puVar12 = puVar10;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar13 = puVar3;
    puStack_c0 = puVar12;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    puVar14 = puVar1;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    puVar15 = puVar13;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar16 = puVar5;
    puStack_b8 = puVar15;
    puStack_b0 = puVar7;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar17 = puVar3;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar18 = puVar16;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar19 = puVar5;
    puStack_a8 = puVar18;
    func_0x000107c4ace0();
    func_0x000107c61180();
    puVar20 = puVar1;
    func_0x000107c4ace0(puVar1);
    func_0x000107c61180();
    puVar21 = puVar19;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar22 = puVar5;
    puStack_a0 = puVar21;
    func_0x000107c50890();
    func_0x000107c61180();
    puVar23 = puVar1;
    func_0x000107c50890(puVar1);
    func_0x000107c61180();
    puVar24 = puVar22;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar25 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar24;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    func_0x000107c3d048(puVar6);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar25);
    func_0x000107c61170(puVar24);
    func_0x000107c61170(puVar23);
    func_0x000107c61170(puVar22);
    func_0x000107c61170(puVar21);
    func_0x000107c61170(puVar20);
    func_0x000107c61170(puVar19);
    func_0x000107c61170(puVar18);
    func_0x000107c61170(puVar17);
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar15);
    func_0x000107c61170(puVar14);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar5);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  func_0x000107c60e78();
  puVar1 = (undefined8 *)PTR_PTR_1126e1788;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e1788);
  return puVar1;
}



/* Entry: 10057d174; end: 10057d17f; +[SIGHeaderBackgroundShadowView layerClass] */

void FUN_10057d174(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e1788);
  return;
}



/* Entry: 10057d180; end: 10057d2ef; -[SIGHeaderBackgroundShadowViewLayer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10057d180(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = PTR_PTR_11270b500;
  puVar1 = &uStack_68;
  uStack_68 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  puVar8 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c3fdd0(0x3fb999999999999a);
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c61178();
    func_0x000107c3ab24();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_58 = puVar4;
    func_0x000107c5af88();
    func_0x000107c61180();
    puVar4 = puVar5;
    func_0x000107c3fdd0(0);
    func_0x000107c61180();
    puVar6 = puVar4;
    func_0x000107c61178();
    func_0x000107c3ab24();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar6;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    func_0x000107c535a0(puVar1);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c597c4(0x3fe0000000000000,0,puVar1);
    func_0x000107c54598(0x3fe0000000000000,0x3ff0000000000000);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  func_0x000107c60e78();
  return puVar8;
}



/* Entry: 10057d2f0; end: 10057d32f; -[SIGHeaderBackgroundView _currentContentHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10057d2f0(long param_1)

{
  double dVar1;
  
  dVar1 = 0.0;
  if ((0.0 < *(double *)(param_1 + _DAT_1127949e8)) &&
     (*(char *)(param_1 + _DAT_1127949e4) == '\x01')) {
    dVar1 = *(double *)(param_1 + _DAT_1127949e8) + *(double *)(param_1 + _DAT_1127949ec);
  }
  return dVar1;
}



/* Entry: 10057d330; end: 10057d377; -[SIGHeaderBackgroundView setContentHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10057d330(double param_1,long param_2)

{
  if (*(double *)(param_2 + _DAT_1127949e8) != param_1) {
    *(double *)(param_2 + _DAT_1127949e8) = param_1;
    func_0x000107c3b3dc();
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_2 + _DAT_1127949e0),PTR_s_setConstant__11263de70);
    return;
  }
  return;
}



/* Entry: 10057d378; end: 10057d387; -[SIGHeaderBackgroundView setPaddingHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10057d378(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_1127949ec) = param_1;
  return;
}


