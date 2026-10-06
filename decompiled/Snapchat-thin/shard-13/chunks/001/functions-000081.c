/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a060e48; end: 10a060f43;  */

void FUN_10a060e48(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  func_0x000109884c0c(&puStack_40,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_38,&puStack_40,*param_1);
  if (puStack_40 != (undefined8 *)0x0) {
    (**(code **)*puStack_40)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_40);
  FUN_10a060f44(*param_1,&puStack_40,&puStack_38,param_2,param_3);
  if (puStack_40 != (undefined8 *)0x0) {
    (**(code **)*puStack_40)();
  }
  if (puStack_38 != (undefined8 *)0x0) {
    (**(code **)*puStack_38)();
  }
  return;
}



/* Entry: 10a060f44; end: 10a061063;  */

void FUN_10a060f44(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4,int *param_5)

{
  long lVar1;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined4 auStack_80 [2];
  double dStack_78;
  int aiStack_70 [2];
  double adStack_68 [2];
  long *plStack_58;
  undefined8 uStack_50;
  undefined4 **ppuStack_48;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  auStack_80[0] = 3;
  dStack_78 = (double)*param_4;
  aiStack_70[0] = 3;
  adStack_68[0] = (double)*param_5;
  puStack_40 = auStack_80;
  uStack_38 = 2;
  (**(code **)(*param_1 + 0x58))();
  ppuStack_48 = &puStack_40;
  adStack_68[1] = (double)param_3;
  plStack_58 = param_1;
  uStack_50 = param_2;
  func_0x0001098960c0(aiStack_90);
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  lVar1 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_70 + lVar1)) &&
       (*(undefined8 **)((long)adStack_68 + lVar1) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)adStack_68 + lVar1))();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x20);
  return;
}



/* Entry: 10a061064; end: 10a0610a3;  */

void FUN_10a061064(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&puStack_40,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_38,&puStack_40,*puVar1);
  if (puStack_40 != (undefined8 *)0x0) {
    (**(code **)*puStack_40)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_40);
  FUN_10a060f44(*puVar1,&puStack_40,&puStack_38,param_1 + 0x20,param_1 + 0x24);
  if (puStack_40 != (undefined8 *)0x0) {
    (**(code **)*puStack_40)();
  }
  if (puStack_38 != (undefined8 *)0x0) {
    (**(code **)*puStack_38)();
  }
  return;
}



/* Entry: 10a0610a4; end: 10a0610fb;  */

long FUN_10a0610a4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a0610fc; end: 10a0611f7;  */

void FUN_10a0610fc(ulong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_10a0611f8();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10a0611f8; end: 10a06122b;  */

undefined1  [16] FUN_10a0611f8(ulong param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_1 >> 0x3d == 0) {
    lVar1 = param_1 << 3;
    __Znwm(lVar1);
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000109ffded8();
  puVar2 = (undefined8 *)0x138;
  __Znwm();
  FUN_10aa7093c();
  *puVar2 = &PTR_DAT_110b9ad18;
  puVar2[2] = &PTR_DAT_110b9adb8;
  puVar2[7] = &PTR_DAT_110b9ae10;
  *(undefined1 *)(puVar2 + 0x1c) = 0;
  puVar3 = (undefined8 *)0xe8;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_110b9def8;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(undefined2 *)(puVar3 + 7) = 0;
  puVar3[3] = &PTR_FUN_110b9a8f8;
  puVar3[6] = &PTR_DAT_110b9a960;
  *(undefined8 *)((long)puVar3 + 0x3c) = 0x3e4ccccd3f800000;
  *(undefined8 *)((long)puVar3 + 0x4c) = 0;
  *(undefined8 *)((long)puVar3 + 0x44) = 0;
  *(undefined8 *)((long)puVar3 + 0x5c) = 0;
  *(undefined8 *)((long)puVar3 + 0x54) = 0;
  *(undefined8 *)((long)puVar3 + 0x6c) = 0;
  *(undefined8 *)((long)puVar3 + 100) = 0;
  *(undefined8 *)((long)puVar3 + 0x7c) = 0;
  *(undefined8 *)((long)puVar3 + 0x74) = 0;
  *(undefined8 *)((long)puVar3 + 0x8c) = 0;
  *(undefined8 *)((long)puVar3 + 0x84) = 0;
  *(undefined8 *)((long)puVar3 + 0x9c) = 0;
  *(undefined8 *)((long)puVar3 + 0x94) = 0;
  *(undefined8 *)((long)puVar3 + 0xac) = 0;
  *(undefined8 *)((long)puVar3 + 0xa4) = 0;
  *(undefined8 *)((long)puVar3 + 0xbc) = 0;
  *(undefined8 *)((long)puVar3 + 0xb4) = 0;
  *(undefined8 *)((long)puVar3 + 0xcc) = 0;
  *(undefined8 *)((long)puVar3 + 0xc4) = 0;
  *(undefined8 *)((long)puVar3 + 0xdc) = 0;
  *(undefined8 *)((long)puVar3 + 0xd4) = 0;
  *(undefined4 *)((long)puVar3 + 0xe4) = 0;
  puVar2[0x1d] = puVar3 + 3;
  puVar2[0x1e] = puVar3;
  puVar3 = (undefined8 *)0xe8;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_110b9def8;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(undefined2 *)(puVar3 + 7) = 0;
  puVar3[3] = &PTR_FUN_110b9a8f8;
  puVar3[6] = &PTR_DAT_110b9a960;
  *(undefined8 *)((long)puVar3 + 0x3c) = 0x3e4ccccd3f800000;
  *(undefined8 *)((long)puVar3 + 0x4c) = 0;
  *(undefined8 *)((long)puVar3 + 0x44) = 0;
  *(undefined8 *)((long)puVar3 + 0x5c) = 0;
  *(undefined8 *)((long)puVar3 + 0x54) = 0;
  *(undefined8 *)((long)puVar3 + 0x6c) = 0;
  *(undefined8 *)((long)puVar3 + 100) = 0;
  *(undefined8 *)((long)puVar3 + 0x7c) = 0;
  *(undefined8 *)((long)puVar3 + 0x74) = 0;
  *(undefined8 *)((long)puVar3 + 0x8c) = 0;
  *(undefined8 *)((long)puVar3 + 0x84) = 0;
  *(undefined8 *)((long)puVar3 + 0x9c) = 0;
  *(undefined8 *)((long)puVar3 + 0x94) = 0;
  *(undefined8 *)((long)puVar3 + 0xac) = 0;
  *(undefined8 *)((long)puVar3 + 0xa4) = 0;
  *(undefined8 *)((long)puVar3 + 0xbc) = 0;
  *(undefined8 *)((long)puVar3 + 0xb4) = 0;
  *(undefined8 *)((long)puVar3 + 0xcc) = 0;
  *(undefined8 *)((long)puVar3 + 0xc4) = 0;
  *(undefined8 *)((long)puVar3 + 0xdc) = 0;
  *(undefined8 *)((long)puVar3 + 0xd4) = 0;
  *(undefined4 *)((long)puVar3 + 0xe4) = 0;
  puVar2[0x1f] = puVar3 + 3;
  puVar2[0x20] = puVar3;
  puVar3 = (undefined8 *)0xe8;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_110b9def8;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[3] = &PTR_FUN_110b9a8f8;
  *(undefined2 *)(puVar3 + 7) = 0;
  puVar3[6] = &PTR_DAT_110b9a960;
  *(undefined8 *)((long)puVar3 + 0x3c) = 0x3e4ccccd3f800000;
  *(undefined8 *)((long)puVar3 + 0x4c) = 0;
  *(undefined8 *)((long)puVar3 + 0x44) = 0;
  *(undefined8 *)((long)puVar3 + 0x5c) = 0;
  *(undefined8 *)((long)puVar3 + 0x54) = 0;
  *(undefined8 *)((long)puVar3 + 0x6c) = 0;
  *(undefined8 *)((long)puVar3 + 100) = 0;
  *(undefined8 *)((long)puVar3 + 0x7c) = 0;
  *(undefined8 *)((long)puVar3 + 0x74) = 0;
  *(undefined8 *)((long)puVar3 + 0x8c) = 0;
  *(undefined8 *)((long)puVar3 + 0x84) = 0;
  *(undefined8 *)((long)puVar3 + 0x9c) = 0;
  *(undefined8 *)((long)puVar3 + 0x94) = 0;
  *(undefined8 *)((long)puVar3 + 0xac) = 0;
  *(undefined8 *)((long)puVar3 + 0xa4) = 0;
  *(undefined8 *)((long)puVar3 + 0xbc) = 0;
  *(undefined8 *)((long)puVar3 + 0xb4) = 0;
  *(undefined8 *)((long)puVar3 + 0xcc) = 0;
  *(undefined8 *)((long)puVar3 + 0xc4) = 0;
  *(undefined8 *)((long)puVar3 + 0xdc) = 0;
  *(undefined8 *)((long)puVar3 + 0xd4) = 0;
  *(undefined4 *)((long)puVar3 + 0xe4) = 0;
  puVar2[0x21] = puVar3 + 3;
  puVar2[0x22] = puVar3;
  puVar3 = (undefined8 *)0x48;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_110b9df48;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(undefined1 *)(puVar3 + 7) = 0;
  puVar3[3] = &PTR_DAT_110b9a9a8;
  puVar3[6] = &PTR_FUN_110b9aa10;
  *(undefined8 *)((long)puVar3 + 0x39) = 0;
  *(undefined4 *)(puVar3 + 8) = 0;
  puVar2[0x23] = puVar3 + 3;
  puVar2[0x24] = puVar3;
  puVar2[0x25] = 0x400000003e4ccccd;
  *(undefined4 *)(puVar2 + 0x26) = 0x3f800000;
  *(undefined1 *)((long)puVar2 + 0x134) = 0;
  auVar5._8_8_ = param_1;
  auVar5._0_8_ = puVar2;
  return auVar5;
}



/* Entry: 10a06122c; end: 10a061483;  */

undefined8 * FUN_10a06122c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x138;
  __Znwm();
  FUN_10aa7093c();
  *puVar1 = &PTR_DAT_110b9ad18;
  puVar1[2] = &PTR_DAT_110b9adb8;
  puVar1[7] = &PTR_DAT_110b9ae10;
  *(undefined1 *)(puVar1 + 0x1c) = 0;
  puVar2 = (undefined8 *)0xe8;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_DAT_110b9def8;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *(undefined2 *)(puVar2 + 7) = 0;
  puVar2[3] = &PTR_FUN_110b9a8f8;
  puVar2[6] = &PTR_DAT_110b9a960;
  *(undefined8 *)((long)puVar2 + 0x3c) = 0x3e4ccccd3f800000;
  *(undefined8 *)((long)puVar2 + 0x4c) = 0;
  *(undefined8 *)((long)puVar2 + 0x44) = 0;
  *(undefined8 *)((long)puVar2 + 0x5c) = 0;
  *(undefined8 *)((long)puVar2 + 0x54) = 0;
  *(undefined8 *)((long)puVar2 + 0x6c) = 0;
  *(undefined8 *)((long)puVar2 + 100) = 0;
  *(undefined8 *)((long)puVar2 + 0x7c) = 0;
  *(undefined8 *)((long)puVar2 + 0x74) = 0;
  *(undefined8 *)((long)puVar2 + 0x8c) = 0;
  *(undefined8 *)((long)puVar2 + 0x84) = 0;
  *(undefined8 *)((long)puVar2 + 0x9c) = 0;
  *(undefined8 *)((long)puVar2 + 0x94) = 0;
  *(undefined8 *)((long)puVar2 + 0xac) = 0;
  *(undefined8 *)((long)puVar2 + 0xa4) = 0;
  *(undefined8 *)((long)puVar2 + 0xbc) = 0;
  *(undefined8 *)((long)puVar2 + 0xb4) = 0;
  *(undefined8 *)((long)puVar2 + 0xcc) = 0;
  *(undefined8 *)((long)puVar2 + 0xc4) = 0;
  *(undefined8 *)((long)puVar2 + 0xdc) = 0;
  *(undefined8 *)((long)puVar2 + 0xd4) = 0;
  *(undefined4 *)((long)puVar2 + 0xe4) = 0;
  puVar1[0x1d] = puVar2 + 3;
  puVar1[0x1e] = puVar2;
  puVar2 = (undefined8 *)0xe8;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_DAT_110b9def8;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *(undefined2 *)(puVar2 + 7) = 0;
  puVar2[3] = &PTR_FUN_110b9a8f8;
  puVar2[6] = &PTR_DAT_110b9a960;
  *(undefined8 *)((long)puVar2 + 0x3c) = 0x3e4ccccd3f800000;
  *(undefined8 *)((long)puVar2 + 0x4c) = 0;
  *(undefined8 *)((long)puVar2 + 0x44) = 0;
  *(undefined8 *)((long)puVar2 + 0x5c) = 0;
  *(undefined8 *)((long)puVar2 + 0x54) = 0;
  *(undefined8 *)((long)puVar2 + 0x6c) = 0;
  *(undefined8 *)((long)puVar2 + 100) = 0;
  *(undefined8 *)((long)puVar2 + 0x7c) = 0;
  *(undefined8 *)((long)puVar2 + 0x74) = 0;
  *(undefined8 *)((long)puVar2 + 0x8c) = 0;
  *(undefined8 *)((long)puVar2 + 0x84) = 0;
  *(undefined8 *)((long)puVar2 + 0x9c) = 0;
  *(undefined8 *)((long)puVar2 + 0x94) = 0;
  *(undefined8 *)((long)puVar2 + 0xac) = 0;
  *(undefined8 *)((long)puVar2 + 0xa4) = 0;
  *(undefined8 *)((long)puVar2 + 0xbc) = 0;
  *(undefined8 *)((long)puVar2 + 0xb4) = 0;
  *(undefined8 *)((long)puVar2 + 0xcc) = 0;
  *(undefined8 *)((long)puVar2 + 0xc4) = 0;
  *(undefined8 *)((long)puVar2 + 0xdc) = 0;
  *(undefined8 *)((long)puVar2 + 0xd4) = 0;
  *(undefined4 *)((long)puVar2 + 0xe4) = 0;
  puVar1[0x1f] = puVar2 + 3;
  puVar1[0x20] = puVar2;
  puVar2 = (undefined8 *)0xe8;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_DAT_110b9def8;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[3] = &PTR_FUN_110b9a8f8;
  *(undefined2 *)(puVar2 + 7) = 0;
  puVar2[6] = &PTR_DAT_110b9a960;
  *(undefined8 *)((long)puVar2 + 0x3c) = 0x3e4ccccd3f800000;
  *(undefined8 *)((long)puVar2 + 0x4c) = 0;
  *(undefined8 *)((long)puVar2 + 0x44) = 0;
  *(undefined8 *)((long)puVar2 + 0x5c) = 0;
  *(undefined8 *)((long)puVar2 + 0x54) = 0;
  *(undefined8 *)((long)puVar2 + 0x6c) = 0;
  *(undefined8 *)((long)puVar2 + 100) = 0;
  *(undefined8 *)((long)puVar2 + 0x7c) = 0;
  *(undefined8 *)((long)puVar2 + 0x74) = 0;
  *(undefined8 *)((long)puVar2 + 0x8c) = 0;
  *(undefined8 *)((long)puVar2 + 0x84) = 0;
  *(undefined8 *)((long)puVar2 + 0x9c) = 0;
  *(undefined8 *)((long)puVar2 + 0x94) = 0;
  *(undefined8 *)((long)puVar2 + 0xac) = 0;
  *(undefined8 *)((long)puVar2 + 0xa4) = 0;
  *(undefined8 *)((long)puVar2 + 0xbc) = 0;
  *(undefined8 *)((long)puVar2 + 0xb4) = 0;
  *(undefined8 *)((long)puVar2 + 0xcc) = 0;
  *(undefined8 *)((long)puVar2 + 0xc4) = 0;
  *(undefined8 *)((long)puVar2 + 0xdc) = 0;
  *(undefined8 *)((long)puVar2 + 0xd4) = 0;
  *(undefined4 *)((long)puVar2 + 0xe4) = 0;
  puVar1[0x21] = puVar2 + 3;
  puVar1[0x22] = puVar2;
  puVar2 = (undefined8 *)0x48;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_DAT_110b9df48;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *(undefined1 *)(puVar2 + 7) = 0;
  puVar2[3] = &PTR_DAT_110b9a9a8;
  puVar2[6] = &PTR_FUN_110b9aa10;
  *(undefined8 *)((long)puVar2 + 0x39) = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  puVar1[0x23] = puVar2 + 3;
  puVar1[0x24] = puVar2;
  puVar1[0x25] = 0x400000003e4ccccd;
  *(undefined4 *)(puVar1 + 0x26) = 0x3f800000;
  *(undefined1 *)((long)puVar1 + 0x134) = 0;
  return puVar1;
}



/* Entry: 10a061484; end: 10a0614bf;  */

void FUN_10a061484(void)

{
  long in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x00010a061488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x3 + 0x10))();
  return;
}



/* Entry: 10a0614c0; end: 10a061727;  */

long FUN_10a0614c0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a061728; end: 10a0617bb;  */

void FUN_10a061728(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *param_1;
  lVar5 = param_2[1];
  lVar6 = *param_2;
  param_1[lVar4 * 0xd + 2] = param_2[1];
  param_1[lVar4 * 0xd + 1] = lVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar6 = param_2[3];
  lVar5 = param_2[2];
  param_1[lVar4 * 0xd + 5] = param_2[4];
  param_1[lVar4 * 0xd + 4] = lVar6;
  param_1[lVar4 * 0xd + 3] = lVar5;
  lVar5 = param_2[6];
  lVar6 = param_2[5];
  param_1[lVar4 * 0xd + 7] = param_2[6];
  param_1[lVar4 * 0xd + 6] = lVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar6 = param_2[8];
  lVar5 = param_2[7];
  param_1[lVar4 * 0xd + 10] = param_2[9];
  param_1[lVar4 * 0xd + 9] = lVar6;
  param_1[lVar4 * 0xd + 8] = lVar5;
  lVar6 = param_2[0xb];
  lVar5 = param_2[10];
  *(int *)(param_1 + lVar4 * 0xd + 0xd) = (int)param_2[0xc];
  param_1[lVar4 * 0xd + 0xc] = lVar6;
  param_1[lVar4 * 0xd + 0xb] = lVar5;
  *param_1 = *param_1 + 1;
  return;
}



/* Entry: 10a0617bc; end: 10a06186b;  */

long FUN_10a0617bc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a06186c; end: 10a06189f;  */

long * FUN_10a06186c(void)

{
  ulong uVar1;
  long *plVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  plVar2 = (long *)0x8;
  ___cxa_allocate_exception();
  *plVar2 = (long)&PTR_DAT_1107e9838;
  ppuVar3 = &PTR_DAT_1107e9810;
  puVar4 = &DAT_104bfeb7c;
  ___cxa_throw();
  puVar5 = (undefined *)plVar2[1];
  if (puVar5 != (undefined *)0x0) {
    puVar6 = puVar5 + -1;
    if (((ulong)puVar5 & (ulong)puVar6) == 0) {
      puVar7 = (undefined *)((ulong)puVar6 & (ulong)puVar4);
    }
    else {
      puVar7 = puVar4;
      if (puVar5 <= puVar4) {
        uVar1 = 0;
        if (puVar5 != (undefined *)0x0) {
          uVar1 = (ulong)puVar4 / (ulong)puVar5;
        }
        puVar7 = puVar4 + -(uVar1 * (long)puVar5);
      }
    }
    plVar2 = *(long **)(*plVar2 + (long)puVar7 * 8);
    if (plVar2 != (long *)0x0) {
      plVar2 = (long *)*plVar2;
      do {
        if (plVar2 == (long *)0x0) {
          return (long *)0x0;
        }
        puVar8 = (undefined *)plVar2[1];
        if (puVar4 == puVar8) {
          if ((undefined **)plVar2[2] == ppuVar3 && (undefined *)plVar2[3] == puVar4) {
            return plVar2;
          }
        }
        else {
          if (((ulong)puVar5 & (ulong)puVar6) == 0) {
            puVar8 = (undefined *)((ulong)puVar8 & (ulong)puVar6);
          }
          else if (puVar5 <= puVar8) {
            uVar1 = 0;
            if (puVar5 != (undefined *)0x0) {
              uVar1 = (ulong)puVar8 / (ulong)puVar5;
            }
            puVar8 = puVar8 + -(uVar1 * (long)puVar5);
          }
          if (puVar8 != puVar7) {
            return (long *)0x0;
          }
        }
        plVar2 = (long *)*plVar2;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a0618a0; end: 10a06193f;  */

long * FUN_10a0618a0(long *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
    if ((uVar2 & uVar3) == 0) {
      uVar4 = uVar3 & param_3;
    }
    else {
      uVar4 = param_3;
      if (uVar2 <= param_3) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = param_3 / uVar2;
        }
        uVar4 = param_3 - uVar4 * uVar2;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar4 * 8);
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)*plVar5;
      do {
        if (plVar5 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar6 = plVar5[1];
        if (param_3 == uVar6) {
          if (plVar5[2] == param_2 && plVar5[3] == param_3) {
            return plVar5;
          }
        }
        else {
          if ((uVar2 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar2 <= uVar6) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar6 / uVar2;
            }
            uVar6 = uVar6 - uVar1 * uVar2;
          }
          if (uVar6 != uVar4) {
            return (long *)0x0;
          }
        }
        plVar5 = (long *)*plVar5;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a061940; end: 10a061aab;  */

ulong FUN_10a061940(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  long *plStack_70;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined1 auStack_38 [24];
  
  if ((int)param_2 != 0) {
    (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
              ((long)param_1 + *(long *)(*param_1 + -0x18));
    (**(code **)(*param_1 + 0x68))(param_1,2);
  }
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x80))();
  if ((int)plVar2 == 2) {
    plVar2 = (long *)param_1[0x13];
    if (plVar2 == (long *)0x0) {
      plVar2 = param_1;
      (**(code **)(*param_1 + 0x88))();
      if (*plVar2 == 0) {
        plStack_70 = param_1;
        FUN_10a061aac(auStack_68,&plStack_70);
        FUN_109feb280(auStack_50,&UNK_10f633748,auStack_68);
        FUN_10a012db0(auStack_38,auStack_50,&UNK_10f633762);
        if (cStack_39 < '\0') {
          __ZdlPv(auStack_50[0]);
        }
        if (cStack_51 < '\0') {
          __ZdlPv(auStack_68[0]);
        }
        FUN_10a0edf4c(auStack_38);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a061a64);
        (*pcVar1)();
      }
      uVar3 = 0;
      plVar2 = (long *)0x2;
    }
    else {
      FUN_10a061940(plVar2,param_2);
      uVar3 = (ulong)plVar2 & 0xffffffff00000000;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 | (ulong)plVar2 & 0xffffffff;
}



/* Entry: 10a061aac; end: 10a061b03;  */

/* WARNING: Possible PIC construction at 0x00010ad044a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ad044a4) */

ulong * FUN_10a061aac(ulong *param_1,long *param_2,long param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  long *plVar6;
  ulong *puVar7;
  ulong *unaff_x19;
  ulong *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_40 [12];
  int iStack_34;
  
  if ((long *)*param_2 == (long *)0x0) {
    plVar6 = (long *)&UNK_10f6337b7;
    FUN_10a00946c();
    puVar5 = (ulong *)*plVar6;
    *plVar6 = param_3;
    if (puVar5 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
    FUN_10a061b04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return puVar5;
  }
  puVar5 = (ulong *)(*(ulong *)(*(long *)(*(long *)*param_2 + -8) + 8) & 0x7fffffffffffffff);
  puVar1 = &stack0xfffffffffffffff0;
  if (puVar5 == (ulong *)0x0) {
    puVar5 = (ulong *)&UNK_10f6a2cf4;
  }
  else {
    iStack_34 = -1;
    puVar7 = puVar5;
    ___cxa_demangle(puVar5,0,0,&iStack_34);
    if (iStack_34 == 0) {
      func_0x000107c2b054(param_1,puVar7);
      _free(puVar7);
      return puVar7;
    }
    unaff_x30 = 0x10ad044a4;
    register0x00000008 = (BADSPACEBASE *)auStack_40;
    unaff_x19 = param_1;
    unaff_x20 = puVar5;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar7 = puVar5;
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < puVar7) {
    func_0x000107c2b040();
    *(ulong **)((long)register0x00000008 + -0x60) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x58) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) = &UNK_100053800;
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar7 = (ulong *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar7 != 0) {
        puVar4 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar4;
        puVar4[1] = 0x434948504152475f;
        *puVar4 = 0x45524f43534e454c;
        puVar4[3] = 0x525f595a414c5f54;
        puVar4[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar4 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar4 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar4 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        puVar5 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar5;
      }
    }
    return puVar7;
  }
  if (puVar7 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar7;
    puVar3 = param_1;
    if (puVar7 == (ulong *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar2 = (ulong *)0x19;
    if (((ulong)puVar7 | 7) != 0x17) {
      puVar2 = (ulong *)(((ulong)puVar7 | 7) + 1);
    }
    puVar3 = puVar2;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar7;
    param_1[2] = (ulong)puVar2 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  func_0x000107c610b8(puVar3,puVar5,puVar7);
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar3 + (long)puVar7) = 0;
  return param_1;
}



/* Entry: 10a061b04; end: 10a061d8f;  */

long * FUN_10a061b04(long *param_1)

{
  if (param_1[0x18] != 0) {
    param_1[0x19] = param_1[0x18];
    __ZdlPv();
  }
  if (param_1[0x15] != 0) {
    param_1[0x16] = param_1[0x15];
    __ZdlPv();
  }
  if (param_1[0x12] != 0) {
    param_1[0x13] = param_1[0x12];
    __ZdlPv();
  }
  if (param_1[0xf] != 0) {
    __ZdlPv();
  }
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a061d90; end: 10a061d9f;  */

void FUN_10a061d90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9dd70;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a061da0; end: 10a061dbf;  */

void FUN_10a061da0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9dd70;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a061dc0; end: 10a061dc7;  */

void FUN_10a061dc0(void)

{
  return;
}



/* Entry: 10a061dc8; end: 10a062063;  */

undefined8 * FUN_10a061dc8(undefined8 *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *extraout_x8;
  ulong uVar7;
  long *plVar8;
  long *plStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **appuStack_a0 [7];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = *param_2;
  (**(code **)(param_2[1] + 0x10))(param_1 + 1);
  param_1[8] = param_2[8];
  param_1[9] = &UNK_1053a6a3c;
  puVar6 = param_1 + 10;
  *puVar6 = &PTR_DAT_110ae9180;
  param_1[9] = param_2[9];
  plVar8 = param_2 + 10;
  (**(code **)(*plVar8 + 0x10))(puVar6,plVar8);
  param_2[9] = &UNK_1053a6a3c;
  (**(code **)*plVar8)(plVar8);
  *plVar8 = (long)&PTR_DAT_110ae9180;
  plVar8 = param_1 + 0x11;
  *plVar8 = 0;
  FUN_10a062064(&plStack_d0);
  if (*plVar8 != 0) {
    func_0x0001092b4274(plVar8);
  }
  plStack_b8 = plStack_d0;
  param_1[0x11] = lStack_c8;
  plStack_d0 = (long *)0x0;
  lStack_c8 = 0;
  uVar2 = param_1[8];
  uStack_a8 = param_1[9];
  appuStack_a0[0] = &PTR_DAT_110ae9180;
  uStack_b0 = uVar2;
  (**(code **)(param_1[10] + 0x10))(appuStack_a0,puVar6);
  param_1[9] = &UNK_1053a6a3c;
  (**(code **)param_1[10])(puVar6);
  param_1[10] = &PTR_DAT_110ae9180;
  FUN_10a0622ec(&plStack_d8,uVar2,&plStack_b8);
  if (plStack_d8 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_d8 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plStack_d8 + 8))();
      }
    }
  }
  func_0x0001092ba41c(&uStack_b0);
  if (plStack_b8 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_b8 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plStack_b8 + 8))();
      }
    }
  }
  if (lStack_c8 != 0) {
    func_0x0001092b4274((ulong)&plStack_d0 | 8);
  }
  plVar5 = plStack_d0;
  if (plStack_d0 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_d0 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plStack_d0 + 8))();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10a0620d4(&plStack_b8);
  func_0x00010a062144(&plStack_d0);
  if (*plVar8 != 0) {
    func_0x0001092b4274(plVar8);
  }
  func_0x0001092ba41c(param_1 + 8);
  (**(code **)param_1[1])(param_1 + 1);
  __Unwind_Resume(plVar5);
  puVar6 = (undefined8 *)0xb0;
  __Znwm();
  *(undefined2 *)(puVar6 + 3) = 4;
  puVar6[2] = 0;
  puVar6[1] = 0x200000006;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = puVar6 + 3;
  puVar6[0x12] = 0;
  *puVar6 = &PTR_DAT_110b9f9d0;
  *(undefined1 *)(puVar6 + 0x13) = 0;
  *(undefined1 *)(puVar6 + 0x15) = 0;
  *extraout_x8 = puVar6;
  extraout_x8[1] = puVar6;
  return puVar6;
}



/* Entry: 10a062064; end: 10a0620d3;  */

void FUN_10a062064(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  *(undefined2 *)(puVar1 + 3) = 4;
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 3;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_DAT_110b9f9d0;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x15) = 0;
  *param_1 = puVar1;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a0620d4; end: 10a0622eb;  */

long * FUN_10a0620d4(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  func_0x0001092ba41c(param_1 + 1);
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  return param_1;
}



/* Entry: 10a0622ec; end: 10a062677;  */

/* WARNING: Removing unreachable block (ram,0x00010a062428) */

void FUN_10a0622ec(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)0xb8;
  __Znwm();
  *puVar5 = FUN_10a089bac;
  puVar5[1] = FUN_10a089e50;
  func_0x0001092ba17c(puVar5 + 2);
  lVar8 = puVar5[7];
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar8;
  uVar11 = *param_3;
  *param_3 = 0;
  puVar5[10] = param_3[1];
  puVar5[9] = uVar11;
  puVar5[0xc] = &PTR_DAT_110ae9180;
  puVar5[0xb] = param_3[2];
  plVar7 = param_3 + 3;
  (**(code **)(*plVar7 + 0x10))(puVar5 + 0xc,plVar7);
  param_3[2] = &UNK_1053a6a3c;
  (**(code **)*plVar7)(plVar7);
  *plVar7 = (long)&PTR_DAT_110ae9180;
  puVar5[0x13] = param_2;
  *(undefined1 *)(puVar5 + 0x14) = 0;
  *(undefined1 *)(puVar5 + 0x16) = 0;
  puVar6 = puVar5 + 0x13;
  func_0x0001092ba064(puVar6,puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    FUN_10a062678(puVar5 + 0x15,puVar5 + 9);
    puVar5[0x13] = puVar5[0x15];
    plVar7 = (long *)(puVar5[0x15] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar5[0x13] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0x16) = 1;
      lVar8 = puVar5[0x13];
      plVar7 = (long *)(lVar8 + 0x10);
      uStack_48 = puVar5[3];
      do {
        lVar10 = *plVar7;
        if (lVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_58 = 0;
            puStack_50 = puVar5;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_58);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar10 >> 1 & 1) == 0);
    }
    plVar7 = (long *)puVar5[0x13];
    if (((uint)*(undefined8 *)(puVar5[0x13] + 0x10) >> 5 & 1) == 0) {
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = (long *)puVar5[0x15];
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      func_0x0001092ba100(puVar5 + 2);
      func_0x0001092ba41c(puVar5 + 10);
      plVar7 = (long *)puVar5[9];
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar5);
      return;
    }
    func_0x0001092af97c(plVar7 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a06259c);
    (*pcVar4)();
  }
  return;
}



/* Entry: 10a062678; end: 10a062bb3;  */

void FUN_10a062678(long *param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0x80;
  __Znwm();
  *puVar5 = FUN_10a08960c;
  puVar5[1] = FUN_10a089a68;
  puVar5[0xd] = param_2;
  func_0x0001092ba17c(puVar5 + 2);
  lVar7 = puVar5[7];
  if (lVar7 != 0) {
    plVar6 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar7;
  lVar7 = *param_2;
  puVar5[0xb] = lVar7;
  plVar6 = (long *)(lVar7 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar5[0xb] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0xf) = 0;
    lVar7 = puVar5[0xb];
    plVar6 = (long *)(lVar7 + 0x10);
    uStack_38 = puVar5[3];
    do {
      lVar10 = *plVar6;
      if (lVar10 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_10a062a24;
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  plVar6 = (long *)puVar5[0xb];
  if (((uint)*(undefined8 *)(puVar5[0xb] + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar6 + 0x12);
    goto LAB_10a062a60;
  }
  if ((*(byte *)(plVar6 + 0x15) & 1) == 0) goto LAB_10a062a60;
  puVar5[9] = plVar6[0x13];
  lVar7 = plVar6[0x14];
  puVar5[10] = lVar7;
  if (lVar7 == 0) {
LAB_10a062798:
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar9 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar9 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  else {
    plVar6 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar6 = (long *)puVar5[0xb];
    if (plVar6 != (long *)0x0) goto LAB_10a062798;
  }
  plVar8 = (long *)puVar5[0xd];
  plVar6 = (long *)*plVar8;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar9 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar9 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    plVar8 = (long *)puVar5[0xd];
  }
  *plVar8 = 0;
  lVar7 = puVar5[10];
  puVar5[0xe] = puVar5[9];
  puVar5[10] = 0;
  puVar5[0xb] = lVar7;
  puVar5[0xc] = lVar7;
  plVar6 = (long *)(lVar7 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar5[0xc] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0xf) = 1;
    lVar7 = puVar5[0xc];
    plVar6 = (long *)(lVar7 + 0x10);
    uStack_38 = puVar5[3];
    do {
      lVar10 = *plVar6;
      if (lVar10 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
LAB_10a062a24:
          uStack_48 = 0;
          puStack_40 = puVar5;
          func_0x000109d1b588(lVar7 + 0x18,&uStack_48);
          *(undefined8 *)(lVar7 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  plVar6 = (long *)puVar5[0xc];
  if (((uint)*(undefined8 *)(puVar5[0xc] + 0x10) >> 5 & 1) == 0) {
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    plVar6 = (long *)puVar5[0xb];
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    puVar5[0xb] = 0;
    if (puVar5[0xe] != 0) {
      (**(code **)(*(long *)(puVar5[0xe] + 0x18) + 0x10))();
    }
    func_0x0001092ba100(puVar5 + 2);
    plVar6 = (long *)puVar5[0xb];
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    plVar6 = (long *)puVar5[10];
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar5);
    return;
  }
  func_0x0001092af97c(plVar6 + 0x12);
LAB_10a062a60:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a062a64);
  (*pcVar4)();
}



/* Entry: 10a062bb4; end: 10a062c67;  */

undefined8 * FUN_10a062bb4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  
  *param_1 = param_2;
  param_1[1] = *param_3;
  (**(code **)(param_3[1] + 0x10))(param_1 + 2);
  param_1[9] = param_3[8];
  param_1[10] = &UNK_1053a6a3c;
  param_1[0xb] = &PTR_DAT_110ae9180;
  param_1[10] = param_3[9];
  plVar1 = param_3 + 10;
  (**(code **)(*plVar1 + 0x10))(param_1 + 0xb,plVar1);
  param_3[9] = &UNK_1053a6a3c;
  (**(code **)*plVar1)(plVar1);
  *plVar1 = (long)&PTR_DAT_110ae9180;
  param_1[0x12] = param_3[0x11];
  param_3[0x11] = 0;
  return param_1;
}



/* Entry: 10a062c68; end: 10a062c87;  */

void FUN_10a062c68(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a062c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}



/* Entry: 10a062c88; end: 10a062cd7;  */

long FUN_10a062c88(long param_1)

{
  FUN_10a062cd8(param_1,0);
  if (*(long *)(param_1 + 0x90) != 0) {
    func_0x0001092b4274();
  }
  func_0x0001092ba41c(param_1 + 0x48);
  (*(code *)**(undefined8 **)(param_1 + 0x10))();
  return param_1;
}



/* Entry: 10a062cd8; end: 10a062cff;  */

void FUN_10a062cd8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10a062d00(param_1 + 1);
  }
  return;
}



/* Entry: 10a062d00; end: 10a062dfb;  */

void FUN_10a062d00(undefined8 *param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  long *plStack_30;
  long lStack_28;
  
  (*(code *)*param_1)(&plStack_30,param_2,param_1);
  plStack_38 = plStack_30;
  lVar5 = param_1[0x11];
  plStack_30 = (long *)0x0;
  param_1[0x11] = 0;
  uStack_40 = param_2;
  lStack_28 = lVar5;
  FUN_10a062dfc(lVar5,&uStack_40);
  if (lVar5 != 0) {
    func_0x0001092b4274(&lStack_28,lVar5);
  }
  if (plStack_38 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_38 + 1);
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
        (**(code **)(*plStack_38 + 8))();
      }
    }
  }
  if (plStack_30 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_30 + 1);
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
        (**(code **)(*plStack_30 + 8))();
      }
    }
  }
  return;
}



/* Entry: 10a062dfc; end: 10a062e73;  */

undefined1 FUN_10a062dfc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 0x10);
  do {
    lVar4 = *plVar1;
    if (lVar4 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_10a062e74(param_1 + 0x98);
        *(undefined8 *)(param_1 + 0x10) = 2;
        FUN_109d1b4dc(param_1 + 0x18);
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 10a062e74; end: 10a062f07;  */

undefined8 * FUN_10a062e74(undefined8 *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((*(char *)(param_1 + 2) == '\x01') && (plVar4 = (long *)param_1[1], plVar4 != (long *)0x0)) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return param_1;
}



/* Entry: 10a062f08; end: 10a06304f;  */

undefined8 ** FUN_10a062f08(undefined8 **param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lStack_e8;
  undefined8 *apuStack_e0 [7];
  long lStack_a8;
  long lStack_a0;
  undefined **appuStack_98 [7];
  long *plStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined8 *)*param_2;
  *param_1 = puVar4;
  if (puVar4 == (undefined8 *)0x0) {
    param_1[1] = (undefined8 *)0x0;
    ppuVar2 = param_1;
    plVar3 = param_2;
  }
  else {
    puVar1 = (undefined8 *)0xb0;
    __Znwm();
    lStack_e8 = param_2[1];
    (**(code **)(param_2[2] + 0x10))(apuStack_e0);
    plVar3 = param_2 + 0xb;
    lStack_a8 = param_2[9];
    lStack_a0 = param_2[10];
    appuStack_98[0] = &PTR_DAT_110ae9180;
    (**(code **)(*plVar3 + 0x10))(appuStack_98,plVar3);
    param_2[10] = (long)&UNK_1053a6a3c;
    (**(code **)*plVar3)(plVar3);
    *plVar3 = (long)&PTR_DAT_110ae9180;
    plStack_60 = (long *)param_2[0x12];
    param_2[0x12] = 0;
    param_3 = &lStack_e8;
    FUN_10a063050(puVar1,puVar4);
    param_1[1] = puVar1;
    plVar3 = plStack_60;
    if (plStack_60 != (long *)0x0) {
      func_0x0001092b4274(&plStack_60);
    }
    func_0x0001092ba41c(&lStack_a8);
    ppuVar2 = apuStack_e0;
    (*(code *)*apuStack_e0[0])();
  }
  *param_2 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  *ppuVar2 = &PTR_FUN_110b9fa20;
  ppuVar2[1] = (undefined8 *)0x0;
  ppuVar2[2] = (undefined8 *)0x0;
  ppuVar2[3] = plVar3;
  ppuVar2[4] = (undefined8 *)*param_3;
  (**(code **)(param_3[1] + 0x10))(ppuVar2 + 5);
  ppuVar2[0xc] = (undefined8 *)param_3[8];
  ppuVar2[0xd] = (undefined8 *)&UNK_1053a6a3c;
  ppuVar2[0xe] = &PTR_DAT_110ae9180;
  ppuVar2[0xd] = (undefined8 *)param_3[9];
  plVar3 = param_3 + 10;
  (**(code **)(*plVar3 + 0x10))(ppuVar2 + 0xe,plVar3);
  param_3[9] = (long)&UNK_1053a6a3c;
  (**(code **)*plVar3)(plVar3);
  *plVar3 = (long)&PTR_DAT_110ae9180;
  ppuVar2[0x15] = (undefined8 *)param_3[0x11];
  param_3[0x11] = 0;
  return ppuVar2;
}



/* Entry: 10a063050; end: 10a06310f;  */

undefined8 * FUN_10a063050(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110b9fa20;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = *param_3;
  (**(code **)(param_3[1] + 0x10))(param_1 + 5);
  param_1[0xc] = param_3[8];
  param_1[0xd] = &UNK_1053a6a3c;
  param_1[0xe] = &PTR_DAT_110ae9180;
  param_1[0xd] = param_3[9];
  plVar1 = param_3 + 10;
  (**(code **)(*plVar1 + 0x10))(param_1 + 0xe,plVar1);
  param_3[9] = &UNK_1053a6a3c;
  (**(code **)*plVar1)(plVar1);
  *plVar1 = (long)&PTR_DAT_110ae9180;
  param_1[0x15] = param_3[0x11];
  param_3[0x11] = 0;
  return param_1;
}



/* Entry: 10a063110; end: 10a0631b3;  */

void FUN_10a063110(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9fa20;
  if (param_1[0x15] != 0) {
    func_0x0001092b4274();
  }
  func_0x0001092ba41c(param_1 + 0xc);
  (**(code **)param_1[5])();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 10a0631b4; end: 10a063203;  */

void FUN_10a0631b4(long param_1)

{
  FUN_10a062d00(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0xa8) != 0) {
    func_0x0001092b4274();
  }
  func_0x0001092ba41c(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010a0631fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x28))((undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10a063204; end: 10a06323f;  */

long FUN_10a063204(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110b9fa60);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a063240; end: 10a0632e3;  */

void FUN_10a063240(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0632e4; end: 10a06350f;  */

long * FUN_10a0632e4(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar3 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return plVar3;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 + -1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar9 <= param_2) {
      return plVar3;
    }
    if (param_2 == (long *)0x0) {
      plVar3 = (long *)*param_1;
      *param_1 = 0;
      if (plVar3 != (long *)0x0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return plVar3;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    plVar3 = (long *)*param_1;
    *param_1 = lVar2;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
    plVar9 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar9 * 8) = 0;
      plVar9 = (long *)((long)plVar9 + 1);
    } while (param_2 != plVar9);
    plVar9 = (long *)param_1[2];
    if (plVar9 != (long *)0x0) {
      plVar5 = (long *)plVar9[1];
      uVar4 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar4) == 0) {
        plVar5 = (long *)((ulong)plVar5 & uVar4);
      }
      else if (param_2 <= plVar5) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar5 / (ulong)param_2;
        }
        plVar5 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar5 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar9;
      while (plVar6 != (long *)0x0) {
        plVar8 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar4);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar6;
        if (plVar8 != plVar5) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar9;
            plVar5 = plVar8;
          }
          else {
            *plVar9 = *plVar6;
            *plVar6 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar6;
            plVar7 = plVar9;
          }
        }
        plVar9 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
    return plVar3;
  }
  func_0x000109ffded8();
  plVar9 = (long *)plVar3[2];
  while (plVar9 != (long *)0x0) {
    lVar2 = *plVar9;
    func_0x00010a061c50(plVar9 + 4);
    __ZdlPv(plVar9);
    plVar9 = (long *)lVar2;
  }
  lVar2 = *plVar3;
  *plVar3 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return plVar3;
}



/* Entry: 10a063510; end: 10a063557;  */

void FUN_10a063510(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a061c50(lVar1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a063558; end: 10a063727;  */

long * FUN_10a063558(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong unaff_x24;
  
  plVar3 = param_1;
  plVar4 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar11 = (long *)param_1[1];
  if (plVar11 > param_2 || param_2 == plVar11) {
    if (plVar11 <= param_2) {
      return plVar3;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar11 < (long *)0x3) || (((ulong)plVar11 & (long)plVar11 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 + -1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar11 <= param_2) {
      return plVar3;
    }
    if (param_2 == (long *)0x0) {
      plVar3 = (long *)*param_1;
      *param_1 = 0;
      if (plVar3 != (long *)0x0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return plVar3;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    plVar3 = (long *)*param_1;
    *param_1 = lVar2;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar11 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar11 = (long *)((ulong)plVar11 & uVar5);
      }
      else if (param_2 <= plVar11) {
        uVar6 = 0;
        if (param_2 != (long *)0x0) {
          uVar6 = (ulong)plVar11 / (ulong)param_2;
        }
        plVar11 = (long *)((long)plVar11 - uVar6 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar11 * 8) = param_1 + 2;
      plVar8 = (long *)*plVar4;
      while (plVar8 != (long *)0x0) {
        plVar10 = (long *)plVar8[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar5);
        }
        else if (param_2 <= plVar10) {
          uVar6 = 0;
          if (param_2 != (long *)0x0) {
            uVar6 = (ulong)plVar10 / (ulong)param_2;
          }
          plVar10 = (long *)((long)plVar10 - uVar6 * (long)param_2);
        }
        plVar9 = plVar8;
        if (plVar10 != plVar11) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar10 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar10 * 8) = plVar4;
            plVar11 = plVar10;
          }
          else {
            *plVar4 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar2 + (long)plVar10 * 8);
            **(long **)(lVar2 + (long)plVar10 * 8) = (long)plVar8;
            plVar9 = plVar4;
          }
        }
        plVar4 = plVar9;
        plVar8 = (long *)*plVar9;
      }
    }
    return plVar3;
  }
  func_0x000109ffded8();
  uVar5 = plVar3[1];
  if (uVar5 != 0) {
    uVar6 = uVar5 - 1;
    if ((uVar5 & uVar6) == 0) {
      unaff_x24 = uVar6 & param_3;
    }
    else {
      unaff_x24 = param_3;
      if (uVar5 <= param_3) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = param_3 / uVar5;
        }
        unaff_x24 = param_3 - uVar7 * uVar5;
      }
    }
    plVar11 = *(long **)(*plVar3 + unaff_x24 * 8);
    if (plVar11 != (long *)0x0) {
      for (plVar11 = (long *)*plVar11; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
        uVar7 = plVar11[1];
        if (uVar7 == param_3) {
          if ((long *)plVar11[2] == plVar4 && plVar11[3] == param_3) {
            return plVar11;
          }
        }
        else {
          if ((uVar5 & uVar6) == 0) {
            uVar7 = uVar7 & uVar6;
          }
          else if (uVar5 <= uVar7) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar7 / uVar5;
            }
            uVar7 = uVar7 - uVar1 * uVar5;
          }
          if (uVar7 != unaff_x24) break;
        }
      }
    }
  }
  plVar4 = (long *)0x28;
  __Znwm();
  *plVar4 = 0;
  plVar4[1] = param_3;
  lVar2 = *param_4;
  plVar4[3] = param_4[1];
  plVar4[2] = lVar2;
  *(undefined4 *)(plVar4 + 4) = 0;
  if ((uVar5 == 0) || (*(float *)(plVar3 + 4) * (float)uVar5 < (float)(plVar3[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar5) {
      uVar6 = (ulong)((uVar5 & uVar5 - 1) != 0);
    }
    uVar6 = uVar6 | uVar5 << 1;
    uVar5 = (ulong)((float)(plVar3[3] + 1) / *(float *)(plVar3 + 4));
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    FUN_10a063558(plVar3,uVar6);
    uVar5 = plVar3[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      unaff_x24 = uVar5 - 1 & param_3;
    }
    else {
      unaff_x24 = param_3;
      if (uVar5 <= param_3) {
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = param_3 / uVar5;
        }
        unaff_x24 = param_3 - uVar6 * uVar5;
      }
    }
  }
  lVar2 = *plVar3;
  plVar11 = *(long **)(lVar2 + unaff_x24 * 8);
  if (plVar11 == (long *)0x0) {
    plVar11 = plVar3 + 2;
    *plVar4 = *plVar11;
    *plVar11 = (long)plVar4;
    *(long **)(lVar2 + unaff_x24 * 8) = plVar11;
    if (*plVar4 == 0) goto LAB_10a0638f0;
    uVar6 = *(ulong *)(*plVar4 + 8);
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar6 = uVar6 & uVar5 - 1;
    }
    else if (uVar5 <= uVar6) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar6 / uVar5;
      }
      uVar6 = uVar6 - uVar7 * uVar5;
    }
    plVar11 = (long *)(*plVar3 + uVar6 * 8);
  }
  else {
    *plVar4 = *plVar11;
  }
  *plVar11 = (long)plVar4;
LAB_10a0638f0:
  plVar3[3] = plVar3[3] + 1;
  return plVar4;
}



/* Entry: 10a063728; end: 10a063927;  */

long * FUN_10a063728(long *param_1,long param_2,ulong param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong unaff_x24;
  
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar2 = uVar7 - 1;
    if ((uVar7 & uVar2) == 0) {
      unaff_x24 = uVar2 & param_3;
    }
    else {
      unaff_x24 = param_3;
      if (uVar7 <= param_3) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = param_3 / uVar7;
        }
        unaff_x24 = param_3 - uVar5 * uVar7;
      }
    }
    plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar4 != (long *)0x0) {
      for (plVar4 = (long *)*plVar4; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        uVar5 = plVar4[1];
        if (uVar5 == param_3) {
          if (plVar4[2] == param_2 && plVar4[3] == param_3) {
            return plVar4;
          }
        }
        else {
          if ((uVar7 & uVar2) == 0) {
            uVar5 = uVar5 & uVar2;
          }
          else if (uVar7 <= uVar5) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar5 / uVar7;
            }
            uVar5 = uVar5 - uVar1 * uVar7;
          }
          if (uVar5 != unaff_x24) break;
        }
      }
    }
  }
  plVar4 = (long *)0x28;
  __Znwm();
  *plVar4 = 0;
  plVar4[1] = param_3;
  lVar6 = *param_4;
  plVar4[3] = param_4[1];
  plVar4[2] = lVar6;
  *(undefined4 *)(plVar4 + 4) = 0;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar2 = 1;
    if (2 < uVar7) {
      uVar2 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar2 = uVar2 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    FUN_10a063558(param_1,uVar2);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & param_3;
    }
    else {
      unaff_x24 = param_3;
      if (uVar7 <= param_3) {
        uVar2 = 0;
        if (uVar7 != 0) {
          uVar2 = param_3 / uVar7;
        }
        unaff_x24 = param_3 - uVar2 * uVar7;
      }
    }
  }
  lVar6 = *param_1;
  plVar3 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 2;
    *plVar4 = *plVar3;
    *plVar3 = (long)plVar4;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar3;
    if (*plVar4 == 0) goto LAB_10a0638f0;
    uVar2 = *(ulong *)(*plVar4 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar2 = uVar2 & uVar7 - 1;
    }
    else if (uVar7 <= uVar2) {
      uVar5 = 0;
      if (uVar7 != 0) {
        uVar5 = uVar2 / uVar7;
      }
      uVar2 = uVar2 - uVar5 * uVar7;
    }
    plVar3 = (long *)(*param_1 + uVar2 * 8);
  }
  else {
    *plVar4 = *plVar3;
  }
  *plVar3 = (long)plVar4;
LAB_10a0638f0:
  param_1[3] = param_1[3] + 1;
  return plVar4;
}



/* Entry: 10a063928; end: 10a0639c3;  */

long * FUN_10a063928(long param_1,ulong param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  
  if (param_2 != 0) {
    uVar2 = param_2 - 1;
    if ((param_2 & uVar2) == 0) {
      uVar3 = param_4 & uVar2;
    }
    else {
      uVar3 = param_4;
      if (param_2 <= param_4) {
        uVar3 = 0;
        if (param_2 != 0) {
          uVar3 = param_4 / param_2;
        }
        uVar3 = param_4 - uVar3 * param_2;
      }
    }
    plVar4 = *(long **)(param_1 + uVar3 * 8);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)*plVar4;
      do {
        if (plVar4 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar5 = plVar4[1];
        if (uVar5 == param_4) {
          if (plVar4[2] == param_3 && plVar4[3] == param_4) {
            return plVar4;
          }
        }
        else {
          if ((param_2 & uVar2) == 0) {
            uVar5 = uVar5 & uVar2;
          }
          else if (param_2 <= uVar5) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar5 / param_2;
            }
            uVar5 = uVar5 - uVar1 * param_2;
          }
          if (uVar5 != uVar3) {
            return (long *)0x0;
          }
        }
        plVar4 = (long *)*plVar4;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a0639c4; end: 10a0639d7;  */

void FUN_10a0639c4(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0639d8; end: 10a0639ef;  */

void FUN_10a0639d8(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a0639e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a0639f0; end: 10a063a27;  */

undefined8 FUN_10a0639f0(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110b9de10);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a063a28; end: 10a063ac7;  */

void FUN_10a063a28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a063ac8; end: 10a063b57;  */

void FUN_10a063ac8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a061518(lVar1 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a063b58; end: 10a063bb7;  */

void FUN_10a063b58(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = 0x2d0;
  __Znwm();
  FUN_10a063bb8();
  *param_1 = lVar4 + 0x18;
  param_1[1] = lVar4;
  if (((long *)(lVar4 + 0x58) != (long *)0x0) &&
     ((lVar5 = *(long *)(lVar4 + 0x60), lVar5 == 0 || (*(long *)(lVar5 + 8) == -1)))) {
    plVar6 = (long *)param_1[1];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar5 = *(long *)(lVar4 + 0x60);
    }
    *(long *)(lVar4 + 0x58) = lVar4 + 0x18;
    *(long **)(lVar4 + 0x60) = plVar6;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a063bb8; end: 10a063c63;  */

undefined8 * FUN_10a063bb8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b9fcf0;
  param_1[0x56] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x59) = 0x100;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  FUN_10a1da04c(param_1 + 3,&PTR_PTR_110bb3688,0);
  param_1[3] = &PTR_FUN_110bb3440;
  param_1[5] = &PTR_FUN_110bb3570;
  param_1[8] = &PTR_FUN_110bb35a0;
  param_1[0x56] = &PTR_FUN_110bb3648;
  param_1[0x18] = &PTR_FUN_110bb35f8;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  return param_1;
}



/* Entry: 10a063c64; end: 10a063c73;  */

void FUN_10a063c64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9fcf0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a063c74; end: 10a063c93;  */

void FUN_10a063c74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9fcf0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a063c94; end: 10a063ca3;  */

void FUN_10a063c94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a063c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a063ca4; end: 10a063d53;  */

void FUN_10a063ca4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a063d54; end: 10a063dcb;  */

void FUN_10a063d54(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x2c0;
  __Znwm();
  FUN_10a063dcc();
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  if (((long *)(lVar5 + 0x40) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x48), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar6 = (long *)param_1[1];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = *(long *)(lVar5 + 0x48);
    }
    *(long *)(lVar5 + 0x40) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x48) = plVar6;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a063dcc; end: 10a063e13;  */

undefined8 * FUN_10a063dcc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110b9fda0;
  FUN_10a063e14(param_1 + 3);
  return param_1;
}



/* Entry: 10a063e14; end: 10a063ec3;  */

undefined8
FUN_10a063e14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar6 = (long *)param_4[1];
  uStack_28 = param_4[1];
  uStack_30 = *param_4;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar4 = param_1;
  func_0x00010a0fda30();
  FUN_10ab6a888(param_1,0,&uStack_30,uVar4,param_2);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return param_1;
}



/* Entry: 10a063ec4; end: 10a063efb;  */

void FUN_10a063ec4(long param_1)

{
  ushort uVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    uVar1 = *(ushort *)(lVar2 + 0x209);
    if ((uVar1 & 0x7f) != 0) {
      *(ushort *)(lVar2 + 0x209) = uVar1 & 0xff00 | uVar1 - 1 & 0x7f;
      uStack_28 = 0;
      uStack_30 = 0;
      uStack_18 = 0;
      uStack_20 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      *(undefined8 *)(lVar2 + 0x218) = 0;
      FUN_10a1cc408(lVar2 + 0x220,(ulong)&uStack_60 | 8);
    }
    return;
  }
  return;
}



/* Entry: 10a063efc; end: 10a063ff3;  */

long * FUN_10a063efc(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 < (undefined8 *)param_1[2]) {
    uVar10 = param_2[1];
    uVar9 = *param_2;
    puVar8[2] = param_2[2];
    puVar8[1] = uVar10;
    *puVar8 = uVar9;
    puVar8 = puVar8 + 3;
    plVar3 = param_1;
  }
  else {
    lVar7 = (long)puVar8 - *param_1;
    uVar5 = (lVar7 >> 3) * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar5) {
      FUN_10a044e30();
      func_0x00010a06402c();
      lVar7 = *param_1;
      *param_1 = 0;
      if (lVar7 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar6 = lVar4 * 0x5555555555555556;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      uVar6 = uVar5;
    }
    if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar6 = 0xaaaaaaaaaaaaaaa;
    }
    plVar2 = param_1;
    FUN_10a044e44();
    puVar1 = (undefined8 *)((long)plVar2 + lVar7);
    uVar10 = param_2[1];
    uVar9 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar10;
    *puVar1 = uVar9;
    puVar8 = puVar1 + 3;
    lVar7 = (long)puVar1 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    plVar3 = (long *)*param_1;
    *param_1 = lVar7;
    param_1[1] = (long)puVar8;
    param_1[2] = (long)(plVar2 + uVar6 * 3);
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar8;
  return plVar3;
}



/* Entry: 10a063ff4; end: 10a0640b7;  */

long * FUN_10a063ff4(long *param_1)

{
  long lVar1;
  
  func_0x00010a06402c(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a0640b8; end: 10a0641c3;  */

long * FUN_10a0640b8(void)

{
  undefined **ppuVar1;
  long *plVar2;
  long **pplVar3;
  long *plStack_68;
  long *plStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  char cStack_29;
  
  pplVar3 = &plStack_40;
  ppuVar1 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  plStack_40 = (long *)&UNK_10f63b699;
  uStack_38 = 0x28;
  if (*ppuVar1 == (undefined *)0x0) {
    FUN_10a0edfc4();
    if (cStack_29 < '\0') {
      __ZdlPv(plStack_40);
    }
    __Unwind_Resume();
    func_0x00010a061adc(pplVar3 + 0x20,0);
    func_0x00010a061d1c(pplVar3 + 0x19);
    func_0x00010a061ca8(pplVar3 + 0x14);
    if (pplVar3[0x11] != (long *)0x0) {
      pplVar3[0x12] = pplVar3[0x11];
      __ZdlPv();
    }
    plStack_68 = (long *)(pplVar3 + 0xe);
    FUN_10a043380(&plStack_68);
    func_0x00010a061c08(pplVar3 + 9);
    func_0x00010a061570(pplVar3 + 7);
    func_0x00010a061620(pplVar3 + 5);
    func_0x00010a0614c0(pplVar3 + 3);
    func_0x00010a061bb0(pplVar3 + 1);
    return (long *)pplVar3;
  }
  plVar2 = *(long **)(*ppuVar1 + 0x10);
  if (plVar2 == (long *)0x0) {
    if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      plVar2 = (long *)0x1;
      FUN_10ae06f30(1,8,&UNK_10f631b6d,&UNK_10f6347e7,0xa9,&UNK_10f634852,&stack0x00000000);
      return plVar2;
    }
  }
  else {
    cStack_29 = '\x14';
    uStack_30 = 0x474e4943;
    uStack_38 = 0x4152545f5941525f;
    plStack_40 = (long *)0x45524f43534e454c;
    uStack_2c = 0;
    (**(code **)(*plVar2 + 0x40))(plVar2,&plStack_40,0);
    uRam0000000113834798 = SUB84(plVar2,0);
    if (cStack_29 < '\0') {
      __ZdlPv(plStack_40);
      plVar2 = plStack_40;
    }
  }
  return plVar2;
}



/* Entry: 10a0641c4; end: 10a06436b;  */

long FUN_10a0641c4(long param_1)

{
  long lStack_28;
  
  func_0x00010a061adc(param_1 + 0x100,0);
  func_0x00010a061d1c(param_1 + 200);
  func_0x00010a061ca8(param_1 + 0xa0);
  if (*(long *)(param_1 + 0x88) != 0) {
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x88);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x70;
  FUN_10a043380(&lStack_28);
  func_0x00010a061c08(param_1 + 0x48);
  func_0x00010a061570(param_1 + 0x38);
  func_0x00010a061620(param_1 + 0x28);
  func_0x00010a0614c0(param_1 + 0x18);
  func_0x00010a061bb0(param_1 + 8);
  return param_1;
}



/* Entry: 10a06436c; end: 10a064467;  */

long * FUN_10a06436c(long *param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar1 = param_1 + 1;
  plVar2 = (long *)*plVar1;
joined_r0x00010a064390:
  plVar4 = plVar1;
  if (plVar2 == (long *)0x0) {
LAB_10a0643fc:
    plVar2 = (long *)0x38;
    __Znwm();
    lVar3 = *param_4;
    plVar2[5] = param_4[1];
    plVar2[4] = lVar3;
    *(undefined2 *)(plVar2 + 6) = 0;
    *plVar2 = 0;
    plVar2[1] = 0;
    plVar2[2] = (long)plVar1;
    *plVar4 = (long)plVar2;
    plVar1 = plVar2;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      plVar1 = (long *)*plVar4;
    }
    func_0x000107c2b058(param_1[1],plVar1);
    param_1[2] = param_1[2] + 1;
    return plVar2;
  }
  do {
    plVar1 = plVar2;
    lVar3 = plVar1[4];
    if (param_2 == lVar3) {
      lVar3 = plVar1[5];
      if (param_3 < lVar3) break;
      if (lVar3 == param_3 || param_3 <= lVar3) {
        return plVar1;
      }
    }
    else {
      if (param_2 < lVar3) break;
      if (param_2 <= lVar3) {
        return plVar1;
      }
    }
    plVar2 = (long *)plVar1[1];
    if ((long *)plVar1[1] == (long *)0x0) {
      plVar4 = plVar1 + 1;
      goto LAB_10a0643fc;
    }
  } while( true );
  plVar2 = (long *)*plVar1;
  goto joined_r0x00010a064390;
}



/* Entry: 10a064468; end: 10a06449f;  */

void FUN_10a064468(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10a064468(*param_1);
    FUN_10a064468(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a0644a0; end: 10a064573;  */

long * FUN_10a0644a0(long *param_1,ushort param_2,undefined2 *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = param_1 + 1;
  plVar2 = (long *)*plVar1;
  do {
    plVar3 = plVar1;
    if (plVar2 == (long *)0x0) {
LAB_10a064508:
      plVar2 = (long *)0x20;
      __Znwm();
      *(undefined2 *)((long)plVar2 + 0x1a) = *param_3;
      *(undefined2 *)((long)plVar2 + 0x1c) = 0;
      *plVar2 = 0;
      plVar2[1] = 0;
      plVar2[2] = (long)plVar1;
      *plVar3 = (long)plVar2;
      plVar1 = plVar2;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        plVar1 = (long *)*plVar3;
      }
      func_0x000107c2b058(param_1[1],plVar1);
      param_1[2] = param_1[2] + 1;
      return plVar2;
    }
    while (plVar1 = plVar2, *(ushort *)((long)plVar1 + 0x1a) <= param_2) {
      if (param_2 <= *(ushort *)((long)plVar1 + 0x1a)) {
        return plVar1;
      }
      plVar2 = (long *)plVar1[1];
      if ((long *)plVar1[1] == (long *)0x0) {
        plVar3 = plVar1 + 1;
        goto LAB_10a064508;
      }
    }
    plVar2 = (long *)*plVar1;
  } while( true );
}



/* Entry: 10a064574; end: 10a06492b;  */

long * FUN_10a064574(long *param_1,ulong param_2,undefined1 *param_3)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ulong unaff_x24;
  
  param_2 = param_2 & 0xff;
  uVar16 = param_1[1];
  if (uVar16 != 0) {
    uVar6 = uVar16 - 1;
    uVar15 = (uint)uVar16;
    uVar14 = (uint)param_2;
    if ((uVar16 & uVar6) == 0) {
      unaff_x24 = uVar15 - 1 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar16 <= param_2) {
        uVar1 = 0;
        if (uVar15 != 0) {
          uVar1 = uVar14 / uVar15;
        }
        unaff_x24 = (ulong)(uVar14 - uVar1 * uVar15);
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar9 = plVar8[1];
        if (uVar9 == param_2) {
          if (*(byte *)(plVar8 + 2) == uVar14) {
            return plVar8;
          }
        }
        else {
          if ((uVar16 & uVar6) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar16 <= uVar9) {
            uVar7 = 0;
            if (uVar16 != 0) {
              uVar7 = uVar9 / uVar16;
            }
            uVar9 = uVar9 - uVar7 * uVar16;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  plVar8 = (long *)0x20;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = param_2;
  *(undefined1 *)(plVar8 + 2) = *param_3;
  *(undefined4 *)((long)plVar8 + 0x14) = 0;
  *(undefined4 *)(plVar8 + 3) = 0;
  if ((uVar16 == 0) || (*(float *)(param_1 + 4) * (float)uVar16 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar16) {
      uVar6 = (ulong)((uVar16 & uVar16 - 1) != 0);
    }
    uVar6 = uVar6 | uVar16 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar9) {
      uVar6 = uVar9;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar16 = param_1[1];
    }
    if (uVar16 < uVar6) {
LAB_10a0646cc:
      if (uVar6 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a064918);
        (*pcVar3)();
      }
      lVar4 = uVar6 << 3;
      __Znwm();
      lVar5 = *param_1;
      *param_1 = lVar4;
      if (lVar5 != 0) {
        __ZdlPv();
      }
      uVar16 = 0;
      param_1[1] = uVar6;
      do {
        *(undefined8 *)(*param_1 + uVar16 * 8) = 0;
        uVar16 = uVar16 + 1;
      } while (uVar6 != uVar16);
      plVar10 = (long *)param_1[2];
      uVar16 = uVar6;
      if (plVar10 != (long *)0x0) {
        uVar9 = plVar10[1];
        uVar7 = uVar6 - 1;
        if ((uVar6 & uVar7) == 0) {
          uVar9 = uVar9 & uVar7;
        }
        else if (uVar6 <= uVar9) {
          uVar13 = 0;
          if (uVar6 != 0) {
            uVar13 = uVar9 / uVar6;
          }
          uVar9 = uVar9 - uVar13 * uVar6;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar10;
        while (plVar11 != (long *)0x0) {
          uVar13 = plVar11[1];
          if ((uVar6 & uVar7) == 0) {
            uVar13 = uVar13 & uVar7;
          }
          else if (uVar6 <= uVar13) {
            uVar2 = 0;
            if (uVar6 != 0) {
              uVar2 = uVar13 / uVar6;
            }
            uVar13 = uVar13 - uVar2 * uVar6;
          }
          plVar12 = plVar11;
          if (uVar13 != uVar9) {
            lVar4 = *param_1;
            if (*(long *)(lVar4 + uVar13 * 8) == 0) {
              *(long **)(lVar4 + uVar13 * 8) = plVar10;
              uVar9 = uVar13;
            }
            else {
              *plVar10 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar4 + uVar13 * 8);
              **(long **)(lVar4 + uVar13 * 8) = (long)plVar11;
              plVar12 = plVar10;
            }
          }
          plVar10 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    else if (uVar6 < uVar16) {
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar9) {
        uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar9) {
        uVar6 = uVar9;
      }
      if (uVar6 < uVar16) {
        if (uVar6 != 0) goto LAB_10a0646cc;
        lVar4 = *param_1;
        *param_1 = 0;
        if (lVar4 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar16 = 0;
      }
      else {
        uVar16 = param_1[1];
      }
    }
    if ((uVar16 & uVar16 - 1) == 0) {
      unaff_x24 = (int)uVar16 - 1 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar16 <= param_2) {
        uVar6 = 0;
        if (uVar16 != 0) {
          uVar6 = param_2 / uVar16;
        }
        unaff_x24 = param_2 - uVar6 * uVar16;
      }
    }
  }
  lVar4 = *param_1;
  plVar10 = *(long **)(lVar4 + unaff_x24 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 2;
    *plVar8 = *plVar10;
    *plVar10 = (long)plVar8;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar10;
    if (*plVar8 == 0) goto LAB_10a0648b0;
    uVar6 = *(ulong *)(*plVar8 + 8);
    if ((uVar16 & uVar16 - 1) == 0) {
      uVar6 = uVar6 & uVar16 - 1;
    }
    else if (uVar16 <= uVar6) {
      uVar9 = 0;
      if (uVar16 != 0) {
        uVar9 = uVar6 / uVar16;
      }
      uVar6 = uVar6 - uVar9 * uVar16;
    }
    plVar10 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar8 = *plVar10;
  }
  *plVar10 = (long)plVar8;
LAB_10a0648b0:
  param_1[3] = param_1[3] + 1;
  return plVar8;
}



/* Entry: 10a06492c; end: 10a064cef;  */

long * FUN_10a06492c(long *param_1,long param_2,ulong param_3,long *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x24;
  
  uVar13 = param_1[1];
  if (uVar13 != 0) {
    uVar5 = uVar13 - 1;
    if ((uVar13 & uVar5) == 0) {
      unaff_x24 = uVar5 & param_3;
    }
    else {
      unaff_x24 = param_3;
      if (uVar13 <= param_3) {
        uVar8 = 0;
        if (uVar13 != 0) {
          uVar8 = param_3 / uVar13;
        }
        unaff_x24 = param_3 - uVar8 * uVar13;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar7 != (long *)0x0) {
      for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar8 = plVar7[1];
        if (uVar8 == param_3) {
          if (plVar7[2] == param_2 && plVar7[3] == param_3) {
            return plVar7;
          }
        }
        else {
          if ((uVar13 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar13 <= uVar8) {
            uVar6 = 0;
            if (uVar13 != 0) {
              uVar6 = uVar8 / uVar13;
            }
            uVar8 = uVar8 - uVar6 * uVar13;
          }
          if (uVar8 != unaff_x24) break;
        }
      }
    }
  }
  plVar7 = (long *)0x48;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = param_3;
  lVar3 = *param_4;
  plVar7[3] = param_4[1];
  plVar7[2] = lVar3;
  *(undefined1 *)((long)plVar7 + 0x37) = 0;
  *(undefined1 *)(plVar7 + 4) = 0;
  *(undefined4 *)(plVar7 + 7) = 0;
  plVar7[8] = 0;
  if ((uVar13 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar13))
  goto LAB_10a064c08;
  uVar5 = 1;
  if (2 < uVar13) {
    uVar5 = (ulong)((uVar13 & uVar13 - 1) != 0);
  }
  uVar5 = uVar5 | uVar13 << 1;
  uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar5 <= uVar8) {
    uVar5 = uVar8;
  }
  if (uVar5 - 1 == 0) {
    uVar5 = 2;
  }
  else if ((uVar5 & uVar5 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar13 = param_1[1];
  }
  if (uVar13 < uVar5) {
LAB_10a064a90:
    if (uVar5 >> 0x3d != 0) {
      func_0x000109ffded8();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a064cd8);
      (*pcVar2)();
    }
    lVar3 = uVar5 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    uVar13 = 0;
    param_1[1] = uVar5;
    do {
      *(undefined8 *)(*param_1 + uVar13 * 8) = 0;
      uVar13 = uVar13 + 1;
    } while (uVar5 != uVar13);
    plVar9 = (long *)param_1[2];
    uVar13 = uVar5;
    if (plVar9 != (long *)0x0) {
      uVar8 = plVar9[1];
      uVar6 = uVar5 - 1;
      if ((uVar5 & uVar6) == 0) {
        uVar8 = uVar8 & uVar6;
      }
      else if (uVar5 <= uVar8) {
        uVar12 = 0;
        if (uVar5 != 0) {
          uVar12 = uVar8 / uVar5;
        }
        uVar8 = uVar8 - uVar12 * uVar5;
      }
      *(long **)(*param_1 + uVar8 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar9;
      while (plVar10 != (long *)0x0) {
        uVar12 = plVar10[1];
        if ((uVar5 & uVar6) == 0) {
          uVar12 = uVar12 & uVar6;
        }
        else if (uVar5 <= uVar12) {
          uVar1 = 0;
          if (uVar5 != 0) {
            uVar1 = uVar12 / uVar5;
          }
          uVar12 = uVar12 - uVar1 * uVar5;
        }
        plVar11 = plVar10;
        if (uVar12 != uVar8) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + uVar12 * 8) == 0) {
            *(long **)(lVar3 + uVar12 * 8) = plVar9;
            uVar8 = uVar12;
          }
          else {
            *plVar9 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + uVar12 * 8);
            **(long **)(lVar3 + uVar12 * 8) = (long)plVar10;
            plVar11 = plVar9;
          }
        }
        plVar9 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (uVar5 < uVar13) {
    uVar8 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar13 < 3) || ((uVar13 & uVar13 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar8) {
      uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
    }
    if (uVar5 <= uVar8) {
      uVar5 = uVar8;
    }
    if (uVar5 < uVar13) {
      if (uVar5 != 0) goto LAB_10a064a90;
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      uVar13 = 0;
    }
    else {
      uVar13 = param_1[1];
    }
  }
  if ((uVar13 & uVar13 - 1) == 0) {
    unaff_x24 = uVar13 - 1 & param_3;
  }
  else {
    unaff_x24 = param_3;
    if (uVar13 <= param_3) {
      uVar5 = 0;
      if (uVar13 != 0) {
        uVar5 = param_3 / uVar13;
      }
      unaff_x24 = param_3 - uVar5 * uVar13;
    }
  }
LAB_10a064c08:
  lVar3 = *param_1;
  plVar9 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar7 = *plVar9;
    *plVar9 = (long)plVar7;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar9;
    if (*plVar7 != 0) {
      uVar5 = *(ulong *)(*plVar7 + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar5 = uVar5 & uVar13 - 1;
      }
      else if (uVar13 <= uVar5) {
        uVar8 = 0;
        if (uVar13 != 0) {
          uVar8 = uVar5 / uVar13;
        }
        uVar5 = uVar5 - uVar8 * uVar13;
      }
      *(long **)(*param_1 + uVar5 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar9;
    *plVar9 = (long)plVar7;
  }
  param_1[3] = param_1[3] + 1;
  return plVar7;
}



/* Entry: 10a064cf0; end: 10a064d23;  */

void FUN_10a064cf0(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x37) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a064d24; end: 10a064d8b;  */

void FUN_10a064d24(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x2d0;
  __Znwm();
  FUN_10a064d8c();
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  if (((long *)(lVar5 + 0x58) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x60), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar6 = (long *)param_1[1];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = *(long *)(lVar5 + 0x60);
    }
    *(long *)(lVar5 + 0x58) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x60) = plVar6;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a064d8c; end: 10a064dd7;  */

undefined8 * FUN_10a064d8c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b9fcf0;
  FUN_10a1db5e8(param_1 + 3,0);
  return param_1;
}



/* Entry: 10a064dd8; end: 10a064e8f;  */

void FUN_10a064dd8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a064f50(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = *(undefined1 *)((long)param_2 + 0x21);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = uVar2;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a064e90; end: 10a064f4f;  */

void FUN_10a064e90(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x00010a064fb8(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(char *)((long)plVar4 + 0x21) = (char)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a064f50; end: 10a06501f;  */

void FUN_10a064f50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long *plStack_b8;
  
  lVar8 = param_1;
  func_0x000109898688();
  if (lVar8 != 0) {
    FUN_10a052c2c(param_1,lVar8);
    if (param_1 != 0) {
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar3 = &UNK_10f68f52e;
  func_0x00010988bd28();
  puVar4 = puVar3;
  func_0x000109898688();
  if (puVar4 != (undefined *)0x0) {
    FUN_10a053854(puVar3,puVar4);
    if (puVar3 != (undefined *)0x0) {
      param_4 = 0;
      ___dynamic_cast();
      if (puVar3 != (undefined *)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar3 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar3 == 1) {
    return;
  }
  plVar5 = (long *)0x1;
  uVar7 = 0;
  FUN_10a052ee0(1,0,puVar3);
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10a064f50(plVar5,uVar7);
  FUN_10a052e3c(param_4);
  fVar17 = *(float *)((long)plVar5 + 0x24);
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)fVar17;
  plVar5 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar9 = lVar8 - 1;
  plVar6[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar5[lVar8 + 2];
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar5;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_b8 = plVar5;
        if (uVar10 >> 0x3c == 0) {
          lVar2 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar2 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar5 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar2 + uVar10 * 0x10;
          lStack_d8 = lVar8;
          lStack_d0 = lVar8;
          lStack_c8 = lVar8;
          lStack_c0 = lVar14;
          func_0x00010988c1b8(&lStack_d8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar9;
  return;
}



/* Entry: 10a065020; end: 10a065043;  */

void FUN_10a065020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar3 = (long *)0x1;
  uVar5 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a064f50(plVar3,uVar5);
  FUN_10a052e3c(param_4);
  fVar15 = *(float *)((long)plVar3 + 0x24);
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)fVar15;
  plVar3 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar3[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar3;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar3 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_98 = lVar6;
          lStack_90 = lVar6;
          lStack_88 = lVar6;
          lStack_80 = lVar12;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a065044; end: 10a0650ff;  */

void FUN_10a065044(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a064f50(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)((long)param_2 + 0x24);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a065100; end: 10a0651ef;  */

void FUN_10a065100(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  func_0x00010a064fb8(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a0651dc);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)((long)param_2 + 0x24) = fVar2;
  *param_1 = 0;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a0651f0; end: 10a0652c3;  */

void FUN_10a0651f0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10a064f50(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_48 = *(undefined4 *)((long)plVar2 + 0x34);
  uStack_50 = *(undefined8 *)((long)plVar2 + 0x2c);
  FUN_10a065390(param_1,param_2,&uStack_50);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a0652c4; end: 10a06538f;  */

void FUN_10a0652c4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x00010a064fb8(param_2,param_3);
  FUN_10a0655b4(param_5);
  func_0x00010a0655d8(param_2,param_4);
  lVar5 = param_2[1];
  *(long *)((long)plVar4 + 0x2c) = *param_2;
  *(int *)((long)plVar4 + 0x34) = (int)lVar5;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a065390; end: 10a06544f;  */

void FUN_10a065390(undefined8 param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
    plStack_40 = (long *)plVar2[4];
    if (plStack_40 == (long *)0x0) {
      func_0x000109899fd8(plVar2);
      plStack_40 = (long *)plVar2[4];
    }
    plVar2[4] = *plStack_40;
    plStack_40[1] = 0;
    plStack_40[2] = 0;
    *plStack_40 = (long)&PTR_FUN_110b9fbb0;
    lVar3 = *param_3;
    *(int *)(plStack_40 + 2) = (int)param_3[1];
    plStack_40[1] = lVar3;
    plStack_38 = plVar2;
    FUN_10a065450(param_1,param_2,&plStack_40);
    plVar2 = plStack_40;
    plStack_40 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plStack_38);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a06544c);
  (*pcVar1)();
}



/* Entry: 10a065450; end: 10a065533;  */

void FUN_10a065450(undefined4 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  int aiStack_50 [2];
  long *plStack_48;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  uVar5 = *param_3;
  *param_3 = 0;
  plVar3 = plVar2;
  FUN_10a065534();
  if (plVar3 == (long *)0x0) {
    if ((*(byte *)(plVar2 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a065534);
      (*pcVar1)();
    }
    plVar3 = plVar2 + 0x1b;
  }
  aiStack_50[0] = 7;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,*plVar3);
  plStack_48 = plVar4;
  (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,uVar5,plVar2,&UNK_10989ba24,aiStack_50);
  *param_1 = 7;
  if ((3 < aiStack_50[0]) && (plStack_48 != (long *)0x0)) {
    (**(code **)*plStack_48)();
  }
  return;
}



/* Entry: 10a065534; end: 10a065587;  */

long FUN_10a065534(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_2;
  uStack_28 = param_3;
  if ((*(byte *)(param_1 + 0x1e0) & 1) != 0) {
    lVar3 = param_1 + 0xa8;
    func_0x000109895e04(lVar3,&uStack_30);
    if ((*(byte *)(param_1 + 0x1e0) & 1) != 0) {
      lVar1 = 0;
      if (lVar3 != 0) {
        lVar1 = lVar3 + 0x20;
      }
      return lVar1;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a065588);
  (*pcVar2)();
}



/* Entry: 10a065588; end: 10a0655b3;  */

undefined8 FUN_10a065588(void)

{
  return 0;
}



/* Entry: 10a0655b4; end: 10a06561b;  */

long * FUN_10a0655b4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 extraout_x8;
  long lStack_70;
  undefined4 uStack_68;
  
  if ((int)param_1 == 1) {
    return param_1;
  }
  puVar1 = (undefined8 *)0x1;
  uVar5 = 0;
  FUN_10a052ee0(1,0,param_1);
  func_0x000109898688();
  if (puVar1 == (undefined8 *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else if ((undefined **)*puVar1 == &PTR_FUN_110b9fbb0) {
    return puVar1 + 1;
  }
  plVar2 = (long *)&UNK_10f685496;
  func_0x00010988bd28();
  plVar3 = plVar2;
  (**(code **)(*plVar2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = plVar2;
  FUN_10a064f50(plVar2,uVar5);
  FUN_10a052e3c(param_4);
  uStack_68 = (undefined4)plVar4[8];
  lStack_70 = plVar4[7];
  FUN_10a065390(extraout_x8,plVar2,&lStack_70);
  plVar3 = plVar3 + 0x4b;
  func_0x00010988c170(plVar3);
  return plVar3;
}



/* Entry: 10a06561c; end: 10a0656ef;  */

void FUN_10a06561c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long lStack_50;
  undefined4 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10a064f50(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_48 = (undefined4)plVar2[8];
  lStack_50 = plVar2[7];
  FUN_10a065390(param_1,param_2,&lStack_50);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a0656f0; end: 10a0657bb;  */

void FUN_10a0656f0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x00010a064fb8(param_2,param_3);
  FUN_10a0655b4(param_5);
  func_0x00010a0655d8(param_2,param_4);
  lVar5 = param_2[1];
  plVar4[7] = *param_2;
  *(int *)(plVar4 + 8) = (int)lVar5;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a0657bc; end: 10a065877;  */

void FUN_10a0657bc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a064f50(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)((long)param_2 + 0x44);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a065878; end: 10a065967;  */

void FUN_10a065878(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  func_0x00010a064fb8(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a065954);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)((long)param_2 + 0x44) = fVar2;
  *param_1 = 0;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a065968; end: 10a065a17;  */

void FUN_10a065968(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a065ad0(param_1,param_2,FUN_10a00fe00,0,param_3,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a065a18; end: 10a065acf;  */

void FUN_10a065a18(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a065b8c(param_1,param_2,FUN_10a02d1d8,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a065ad0; end: 10a065b8b;  */

void FUN_10a065ad0(undefined8 param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  lVar4 = param_2;
  FUN_10a064f50(param_2,param_5);
  FUN_10a052e3c(param_6);
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*(long *)(lVar4 + ((long)param_4 >> 1)) + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(auStack_50);
  FUN_10a05b924(param_1,param_2,auStack_50);
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  return;
}



/* Entry: 10a065b8c; end: 10a065cb7;  */

void FUN_10a065b8c(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  lVar5 = param_2;
  func_0x00010a064fb8(param_2,param_5);
  FUN_10a065cb8(param_7);
  FUN_10a065cdc(&uStack_70,param_2,param_6);
  plVar2 = (long *)(lVar5 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar2 + ((ulong)param_3 & 0xffffffff));
  }
  plStack_58 = plStack_68;
  uStack_60 = uStack_70;
  uStack_70 = 0;
  plStack_68 = (long *)0x0;
  (*param_3)(plVar2,&uStack_60);
  plVar2 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a065cb8; end: 10a065cdb;  */

void FUN_10a065cb8(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *extraout_x8;
  long *plVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  if ((int)param_1 == 1) {
    return;
  }
  uVar5 = 1;
  uVar6 = 0;
  FUN_10a052ee0(1,0,param_1);
  func_0x000109898610(&lStack_50);
  if (lStack_50 == 0) {
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
  }
  else {
    ___dynamic_cast(lStack_50,&PTR_DAT_110b178e0,&PTR_DAT_110c4eff0,0x10);
    if (lStack_50 == 0) {
      plVar7 = &lStack_60;
    }
    else {
      plStack_58 = plStack_48;
      plVar7 = &lStack_50;
      lStack_60 = lStack_50;
    }
    *plVar7 = 0;
    plVar7[1] = 0;
    if (lStack_60 == 0) {
      func_0x00010988bd28(&UNK_10f685500);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a065df8);
      (*pcVar4)();
    }
    uStack_70 = uVar5;
    uStack_68 = uVar6;
    FUN_10a065e18(extraout_x8,&lStack_60,&uStack_70);
    plVar7 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar7 = plStack_48 + 1;
    do {
      lVar8 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  return;
}



/* Entry: 10a065cdc; end: 10a065e17;  */

void FUN_10a065cdc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  func_0x000109898610(&lStack_40);
  if (lStack_40 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    ___dynamic_cast(lStack_40,&PTR_DAT_110b178e0,&PTR_DAT_110c4eff0,0x10);
    if (lStack_40 == 0) {
      plVar5 = &lStack_50;
    }
    else {
      plStack_48 = plStack_38;
      plVar5 = &lStack_40;
      lStack_50 = lStack_40;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    if (lStack_50 == 0) {
      func_0x00010988bd28(&UNK_10f685500);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a065df8);
      (*pcVar4)();
    }
    uStack_60 = param_2;
    uStack_58 = param_3;
    FUN_10a065e18(param_1,&lStack_50,&uStack_60);
    plVar5 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar5 = plStack_38 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return;
}



/* Entry: 10a065e18; end: 10a06619b;  */

void FUN_10a065e18(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined *extraout_x8;
  long lVar8;
  undefined *puVar9;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  FUN_10a0533bc(&plStack_50,*param_2);
  if (plStack_50 == (long *)0x0) {
    lVar8 = *param_3;
    func_0x0001098849a4(&lStack_40,lVar8,param_3[1]);
    plVar5 = (long *)0x30;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_DAT_110b174d8;
    plStack_60 = plVar5 + 3;
    if ((int)lStack_40 == 3) {
      plVar5[3] = lVar8;
      *(undefined4 *)(plVar5 + 4) = 3;
      plVar5[5] = (long)plStack_38;
    }
    else if ((int)lStack_40 == 2) {
      plVar5[3] = lVar8;
      *(undefined4 *)(plVar5 + 4) = 2;
      *(undefined1 *)(plVar5 + 5) = plStack_38._0_1_;
    }
    else if ((int)lStack_40 < 4) {
      plVar5[3] = lVar8;
      *(int *)(plVar5 + 4) = (int)lStack_40;
    }
    else {
      plVar5[3] = lVar8;
      *(int *)(plVar5 + 4) = (int)lStack_40;
      plVar5[5] = (long)plStack_38;
    }
    lVar8 = *param_2;
    lVar2 = param_2[1];
    if (lVar2 != 0) {
      plVar6 = (long *)(lVar2 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar6 = (long *)0x90;
    plStack_58 = plVar5;
    lStack_40 = lVar8;
    plStack_38 = (long *)lVar2;
    __Znwm();
    plVar5 = plStack_48;
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110b9fe30;
    plStack_50 = plVar6 + 3;
    *plStack_50 = lVar8;
    lStack_40 = 0;
    plStack_38 = (long *)0x0;
    plVar6[4] = lVar2;
    plVar6[5] = 0;
    plVar6[6] = 0;
    plVar6[7] = 0x32aaaba7;
    plVar6[9] = 0;
    plVar6[8] = 0;
    plVar6[0xb] = 0;
    plVar6[10] = 0;
    plVar6[0xd] = 0;
    plVar6[0xc] = 0;
    plVar6[0xf] = 0;
    plVar6[0xe] = 0;
    plVar6[0x11] = 0;
    plVar6[0x10] = 0;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        lVar8 = *plStack_48;
        plStack_48 = plVar6;
        (**(code **)(lVar8 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        plVar6 = plStack_48;
      }
    }
    plStack_48 = plVar6;
    plVar5 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar6 = plStack_38 + 1;
      do {
        lVar8 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    func_0x00010a04a7fc(plStack_50 + 2,&plStack_60);
    lStack_40 = *param_2;
    *param_1 = lStack_40;
    param_1[1] = (long)plStack_48;
    if (plStack_48 == (long *)0x0) {
      plStack_38 = (long *)0x0;
    }
    else {
      plVar5 = plStack_48 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = *plVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plStack_38 = plStack_48;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = *plVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    func_0x00010a053e8c(plStack_50,&lStack_40);
    plVar5 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar6 = plStack_38 + 1;
      do {
        lVar8 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    func_0x00010a053ee8(*param_2,&plStack_50);
    ppuVar7 = &PTR___tlv_bootstrap_11340df48;
    (*(code *)PTR___tlv_bootstrap_11340df48)(*(undefined8 *)(*param_2 + 0x50));
    puVar9 = *ppuVar7;
    if (extraout_x8 != (undefined *)0x0) {
      puVar9 = extraout_x8;
    }
    FUN_10aa89b3c(*(undefined8 *)(puVar9 + 0x870),&plStack_50);
    plVar5 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar6 = plStack_58 + 1;
      do {
        lVar8 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  else {
    FUN_10a053e40(&lStack_40);
    param_1[1] = (long)plStack_38;
    *param_1 = lStack_40;
  }
  plVar5 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar6 = plStack_48 + 1;
    do {
      lVar8 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10a06619c; end: 10a06624b;  */

void FUN_10a06619c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a065ad0(param_1,param_2,0x10a00fe28,0,param_3,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a06624c; end: 10a066303;  */

void FUN_10a06624c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a065b8c(param_1,param_2,0x10a02d1e0,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a066304; end: 10a0663b3;  */

void FUN_10a066304(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a065ad0(param_1,param_2,0x10a00fe50,0,param_3,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a0663b4; end: 10a06646b;  */

void FUN_10a0663b4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a065b8c(param_1,param_2,0x10a02d1e8,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a06646c; end: 10a06651b;  */

void FUN_10a06646c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a065ad0(param_1,param_2,0x10a00fe78,0,param_3,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a06651c; end: 10a0665d3;  */

void FUN_10a06651c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a065b8c(param_1,param_2,0x10a02d1f0,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a0665d4; end: 10a066683;  */

void FUN_10a0665d4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a065ad0(param_1,param_2,0x10a00fea0,0,param_3,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}


