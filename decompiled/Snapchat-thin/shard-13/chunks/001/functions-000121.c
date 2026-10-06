/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a18b008; end: 10a18b04b;  */

undefined1  [16] FUN_10a18b008(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 < 0x555555555555556) {
    lVar1 = param_2 * 0x30;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x30) {
    uVar2 = param_2;
    FUN_10a18b0d0(param_4,param_2);
    param_4 = param_4 + 0x30;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a18b04c; end: 10a18b0cf;  */

long FUN_10a18b04c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x30) {
    FUN_10a18b0d0(param_4,param_2);
    param_4 = param_4 + 0x30;
  }
  return param_4;
}



/* Entry: 10a18b0d0; end: 10a18b15f;  */

undefined8 * FUN_10a18b0d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    func_0x000107c3192c(param_1 + 3,param_2[3],param_2[4]);
  }
  else {
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  return param_1;
}



/* Entry: 10a18b160; end: 10a18b21b;  */

undefined ** FUN_10a18b160(undefined **param_1)

{
  long lVar1;
  undefined4 uVar2;
  char cVar3;
  undefined2 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  code *pcVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined1 uVar17;
  long lVar18;
  long *plVar19;
  undefined *puVar20;
  undefined8 uStack_58;
  
  puVar20 = PTR___tlv_bootstrap_11340d750;
  ppuVar12 = &PTR___tlv_bootstrap_11340d750;
  ppuVar10 = ppuVar12;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar11 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar10 & 1) == 0) {
    ppuVar10 = ppuVar11;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar10,0x100000000);
    (*(code *)puVar20)();
    *(undefined1 *)ppuVar12 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  puVar15 = (undefined8 *)ppuVar11[2];
  if (puVar15 == (undefined8 *)0x0) {
    *(char *)param_1 = '\0';
    param_1[2] = (undefined *)0x0;
    *(char *)(param_1 + 3) = '\0';
    return ppuVar11;
  }
  cVar3 = *(char *)(puVar15[1] + 0x17);
  *(char *)param_1 = cVar3;
  ((char *)((long)param_1 + 2))[0] = '\a';
  ((char *)((long)param_1 + 2))[1] = '\0';
  ppuVar12 = &PTR___tlv_bootstrap_11340dd08;
  (*(code *)PTR___tlv_bootstrap_11340dd08)();
  iVar16 = *(int *)ppuVar12;
  if (*(int *)ppuVar12 == 0) {
    uStack_58 = 0;
    _pthread_threadid_np(0,&uStack_58);
    *(int *)ppuVar12 = (int)uStack_58;
    iVar16 = (int)uStack_58;
  }
  *(int *)((long)param_1 + 4) = iVar16;
  param_1[2] = (undefined *)0x0;
  *(char *)(param_1 + 3) = '\0';
  if ((cVar3 != '\0') && (puVar15 != (undefined8 *)0x0)) {
    lVar18 = puVar15[1];
    bVar8 = *(byte *)(lVar18 + 0x42) | *(byte *)(lVar18 + 0x43);
    if (((bVar8 & 1) != 0) || (*(char *)(lVar18 + 0x40) == '\x01')) {
      uVar7 = cntfrq_el0;
      InstructionSynchronizationBarrier();
      puVar20 = (undefined *)cntvct_el0;
      if (uVar7 != 1000000000) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = (ulong)puVar20 / uVar7;
        }
        uVar6 = 0;
        if (uVar7 != 0) {
          uVar6 = (((long)puVar20 - uVar5 * uVar7) * 1000000000) / uVar7;
        }
        puVar20 = (undefined *)(uVar6 + uVar5 * 1000000000);
      }
      param_1[1] = puVar20;
      lVar18 = lRam00000001137ea760;
      if ((bVar8 & 1) != 0) {
        uVar2 = *(undefined4 *)((long)param_1 + 4);
        uVar4 = *(undefined2 *)((long)param_1 + 2);
        puVar13 = puVar15;
        FUN_10a1333cc();
        if (puVar13 != (undefined8 *)0x0) {
          uVar17 = 3;
          if (lRam00000001137ea760 != lVar18) {
            uVar17 = 5;
          }
          lVar1 = 0;
          if (lRam00000001137ea760 != lVar18) {
            lVar1 = lVar18;
          }
          *puVar13 = &UNK_10f640aac;
          puVar13[1] = lVar1;
          puVar13[2] = puVar20;
          *(undefined4 *)(puVar13 + 3) = uVar2;
          *(undefined2 *)((long)puVar13 + 0x1c) = uVar4;
          *(undefined1 *)((long)puVar13 + 0x1e) = uVar17;
          if ((*(byte *)(puVar15 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x10a18b3bc);
            (*pcVar9)();
          }
          puVar15[0x18] = puVar15[0x18] + 1;
        }
      }
    }
    if (*(char *)(puVar15[1] + 0x41) == '\x01') {
      plVar19 = (long *)puVar15[0xb];
      if (plVar19 != (long *)0x0) {
        plVar14 = plVar19;
        (**(code **)(*plVar19 + 0x10))(plVar19,&UNK_10f640aac);
        param_1[2] = (undefined *)plVar14;
      }
      *(bool *)(param_1 + 3) = plVar19 != (long *)0x0;
    }
  }
  return param_1;
}



/* Entry: 10a18b21c; end: 10a18b3bb;  */

undefined1 * FUN_10a18b21c(undefined1 *param_1,int param_2,undefined8 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  long *plVar11;
  int iVar12;
  undefined1 uVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 uStack_58;
  
  *param_1 = (char)param_2;
  *(undefined2 *)(param_1 + 2) = 7;
  ppuVar9 = &PTR___tlv_bootstrap_11340dd08;
  (*(code *)PTR___tlv_bootstrap_11340dd08)();
  iVar12 = *(int *)ppuVar9;
  if (*(int *)ppuVar9 == 0) {
    uStack_58 = 0;
    _pthread_threadid_np(0,&uStack_58);
    *(int *)ppuVar9 = (int)uStack_58;
    iVar12 = (int)uStack_58;
  }
  *(int *)(param_1 + 4) = iVar12;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x18] = 0;
  if ((param_2 != 0) && (param_3 != (undefined8 *)0x0)) {
    lVar14 = param_3[1];
    bVar7 = *(byte *)(lVar14 + 0x42) | *(byte *)(lVar14 + 0x43);
    if (((bVar7 & 1) != 0) || (*(char *)(lVar14 + 0x40) == '\x01')) {
      uVar6 = cntfrq_el0;
      InstructionSynchronizationBarrier();
      uVar16 = cntvct_el0;
      if (uVar6 != 1000000000) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar16 / uVar6;
        }
        uVar5 = 0;
        if (uVar6 != 0) {
          uVar5 = ((uVar16 - uVar4 * uVar6) * 1000000000) / uVar6;
        }
        uVar16 = uVar5 + uVar4 * 1000000000;
      }
      *(ulong *)(param_1 + 8) = uVar16;
      lVar14 = lRam00000001137ea760;
      if ((bVar7 & 1) != 0) {
        uVar2 = *(undefined4 *)(param_1 + 4);
        uVar3 = *(undefined2 *)(param_1 + 2);
        puVar10 = param_3;
        FUN_10a1333cc();
        if (puVar10 != (undefined8 *)0x0) {
          uVar13 = 3;
          if (lRam00000001137ea760 != lVar14) {
            uVar13 = 5;
          }
          lVar1 = 0;
          if (lRam00000001137ea760 != lVar14) {
            lVar1 = lVar14;
          }
          *puVar10 = &UNK_10f640aac;
          puVar10[1] = lVar1;
          puVar10[2] = uVar16;
          *(undefined4 *)(puVar10 + 3) = uVar2;
          *(undefined2 *)((long)puVar10 + 0x1c) = uVar3;
          *(undefined1 *)((long)puVar10 + 0x1e) = uVar13;
          if ((*(byte *)(param_3 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10a18b3bc);
            (*pcVar8)();
          }
          param_3[0x18] = param_3[0x18] + 1;
        }
      }
    }
    if (*(char *)(param_3[1] + 0x41) == '\x01') {
      plVar15 = (long *)param_3[0xb];
      if (plVar15 != (long *)0x0) {
        plVar11 = plVar15;
        (**(code **)(*plVar15 + 0x10))(plVar15,&UNK_10f640aac);
        *(long **)(param_1 + 0x10) = plVar11;
      }
      param_1[0x18] = plVar15 != (long *)0x0;
    }
  }
  return param_1;
}



/* Entry: 10a18b3bc; end: 10a18b40f;  */

undefined8 * FUN_10a18b3bc(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10a105930(param_1);
  }
  return param_1;
}



/* Entry: 10a18b410; end: 10a18b49f;  */

undefined8 * FUN_10a18b410(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  puVar1 = (undefined8 *)0xc08;
  __Znwm();
  *puVar1 = 0;
  puStack_28 = puVar1;
  FUN_10a18b4a0(param_1 + 1,&puStack_28);
  puVar1 = puStack_28;
  puStack_28 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a18b4a0; end: 10a18b583;  */

/* WARNING: Possible PIC construction at 0x00010a18b564: Changing call to branch */

undefined1  [16] FUN_10a18b4a0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 **ppuVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 **ppuVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 *puStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  ppuVar4 = (undefined8 **)auStack_60;
  ppuVar11 = (undefined1 **)&stack0xfffffffffffffff0;
  puVar6 = (undefined8 *)param_1[1];
  if (puVar6 < (undefined8 *)param_1[2]) {
    uVar7 = *param_2;
    *param_2 = 0;
    *puVar6 = uVar7;
    param_1[1] = (long)(puVar6 + 1);
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = param_1;
    return auVar12;
  }
  lVar10 = (long)puVar6 - *param_1;
  uVar1 = (lVar10 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar8 = param_1[2] - *param_1;
    uVar9 = (long)uVar8 >> 2;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      uVar9 = 0x1fffffffffffffff;
    }
    plVar5 = param_1;
    plStack_38 = param_1;
    FUN_10a18b598();
    lVar2 = *param_1;
    lVar3 = param_1[1];
    puVar6 = (undefined8 *)((long)plVar5 + lVar10);
    uVar7 = *param_2;
    *param_2 = 0;
    param_2 = (undefined8 *)((long)puVar6 - (lVar3 - lVar2));
    *puVar6 = uVar7;
    _memcpy(param_2,lVar2);
    lStack_48 = *param_1;
    *param_1 = (long)param_2;
    param_1[1] = (long)(puVar6 + 1);
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar5 + uVar9);
    lStack_58 = lStack_48;
    lStack_50 = lStack_48;
    plVar5 = &lStack_58;
    uVar7 = 0x10a18b568;
  }
  else {
    puVar6 = param_2;
    FUN_10a18b584();
    pcStack_68 = FUN_10a18b584;
    plVar5 = (long *)&UNK_10f6403f7;
    ppuStack_70 = ppuVar11;
    FUN_109ffde64();
    ppuVar4 = &puStack_90;
    pcStack_78 = FUN_10a18b598;
    ppuVar11 = &puStack_80;
    puStack_90 = param_2;
    plStack_88 = param_1;
    if ((ulong)puVar6 >> 0x3d == 0) {
      lVar10 = (long)puVar6 << 3;
      puStack_80 = (undefined1 *)&ppuStack_70;
      __Znwm(lVar10);
      auVar13._8_8_ = puVar6;
      auVar13._0_8_ = lVar10;
      return auVar13;
    }
    uVar7 = 0x10a18b5cc;
    puStack_80 = (undefined1 *)&ppuStack_70;
    func_0x000109ffded8();
  }
  *(undefined8 **)((long)ppuVar4 + -0x20) = param_2;
  *(long **)((long)ppuVar4 + -0x18) = param_1;
  *(undefined1 ***)((long)ppuVar4 + -0x10) = ppuVar11;
  *(undefined8 *)((long)ppuVar4 + -8) = uVar7;
  lVar10 = plVar5[1];
  func_0x00010a18b600();
  if (*plVar5 != 0) {
    __ZdlPv();
  }
  auVar14._8_8_ = lVar10;
  auVar14._0_8_ = plVar5;
  return auVar14;
}



/* Entry: 10a18b584; end: 10a18b597;  */

undefined1  [16] FUN_10a18b584(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  plVar1 = (long *)&UNK_10f6403f7;
  FUN_109ffde64();
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  func_0x00010a18b600();
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = plVar1;
  return auVar4;
}



/* Entry: 10a18b598; end: 10a18b68b;  */

undefined1  [16] FUN_10a18b598(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  func_0x00010a18b600();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a18b68c; end: 10a18b6d3;  */

void FUN_10a18b68c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  while (plVar3 != plVar1) {
    plVar3 = plVar3 + -1;
    lVar2 = *plVar3;
    *plVar3 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = plVar1;
  return;
}



/* Entry: 10a18b6d4; end: 10a18b713;  */

void FUN_10a18b6d4(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10a18b714();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a18b714; end: 10a18b75b;  */

void FUN_10a18b714(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x10) {
    if (*(long *)(lVar2 + -8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a18b75c; end: 10a18b79b;  */

void FUN_10a18b75c(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10a18b79c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a18b79c; end: 10a18b7e3;  */

void FUN_10a18b79c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x10) {
    if (*(long *)(lVar2 + -8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a18b7e4; end: 10a18b7e7;  */

void FUN_10a18b7e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar2 = *(long **)**(undefined8 **)*param_1;
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  lStack_28 = -0x7fffffffffffffd0;
  uStack_30 = 0x2e;
  *(undefined8 *)((long)puVar1 + 0x26) = 0x31325f33305f3332;
  *(undefined8 *)((long)puVar1 + 0x1e) = 0x5f455059545f4e4f;
  puVar1[1] = 0x535f434e5953415f;
  *puVar1 = 0x45524f43534e454c;
  puVar1[3] = 0x4e4f4954414c4950;
  puVar1[2] = 0x4d4f435245444148;
  *(undefined1 *)((long)puVar1 + 0x2e) = 0;
  puStack_38 = puVar1;
  (**(code **)(*plVar2 + 0x40))(plVar2,&puStack_38,0);
  uRam0000000113300468 = SUB84(plVar2,0);
  if (lStack_28 < 0) {
    __ZdlPv(puStack_38);
  }
  return;
}



/* Entry: 10a18b7e8; end: 10a18b89b;  */

void FUN_10a18b7e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar2 = *(long **)**(undefined8 **)*param_1;
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  lStack_28 = -0x7fffffffffffffd0;
  uStack_30 = 0x2e;
  *(undefined8 *)((long)puVar1 + 0x26) = 0x31325f33305f3332;
  *(undefined8 *)((long)puVar1 + 0x1e) = 0x5f455059545f4e4f;
  puVar1[1] = 0x535f434e5953415f;
  *puVar1 = 0x45524f43534e454c;
  puVar1[3] = 0x4e4f4954414c4950;
  puVar1[2] = 0x4d4f435245444148;
  *(undefined1 *)((long)puVar1 + 0x2e) = 0;
  puStack_38 = puVar1;
  (**(code **)(*plVar2 + 0x40))(plVar2,&puStack_38,0);
  uRam0000000113300468 = SUB84(plVar2,0);
  if (lStack_28 < 0) {
    __ZdlPv(puStack_38);
  }
  return;
}



/* Entry: 10a18b89c; end: 10a18b89f;  */

void FUN_10a18b89c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar2 = *(long **)**(undefined8 **)*param_1;
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  lStack_28 = -0x7fffffffffffffd0;
  uStack_30 = 0x29;
  *(undefined8 *)((long)puVar1 + 0x21) = 0x30315f33305f3332;
  *(undefined8 *)((long)puVar1 + 0x19) = 0x5f4e4f4954414c49;
  puVar1[1] = 0x535f434e5953415f;
  *puVar1 = 0x45524f43534e454c;
  puVar1[3] = 0x4e4f4954414c4950;
  puVar1[2] = 0x4d4f435245444148;
  *(undefined1 *)((long)puVar1 + 0x29) = 0;
  puStack_38 = puVar1;
  (**(code **)(*plVar2 + 0x50))(plVar2,&puStack_38,0);
  uRam0000000113300478 = SUB81(plVar2,0);
  if (lStack_28 < 0) {
    __ZdlPv(puStack_38);
  }
  return;
}



/* Entry: 10a18b8a0; end: 10a18b953;  */

void FUN_10a18b8a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar2 = *(long **)**(undefined8 **)*param_1;
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  lStack_28 = -0x7fffffffffffffd0;
  uStack_30 = 0x29;
  *(undefined8 *)((long)puVar1 + 0x21) = 0x30315f33305f3332;
  *(undefined8 *)((long)puVar1 + 0x19) = 0x5f4e4f4954414c49;
  puVar1[1] = 0x535f434e5953415f;
  *puVar1 = 0x45524f43534e454c;
  puVar1[3] = 0x4e4f4954414c4950;
  puVar1[2] = 0x4d4f435245444148;
  *(undefined1 *)((long)puVar1 + 0x29) = 0;
  puStack_38 = puVar1;
  (**(code **)(*plVar2 + 0x50))(plVar2,&puStack_38,0);
  uRam0000000113300478 = SUB81(plVar2,0);
  if (lStack_28 < 0) {
    __ZdlPv(puStack_38);
  }
  return;
}



/* Entry: 10a18b954; end: 10a18ba47;  */

long FUN_10a18b954(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x128;
  FUN_10a18ba48(&lStack_28);
  lStack_28 = param_1 + 0x110;
  FUN_10a18ba48(&lStack_28);
  lStack_28 = param_1 + 0xf8;
  FUN_10a18ba48(&lStack_28);
  lStack_28 = param_1 + 0xe0;
  FUN_10a18d9ec(&lStack_28);
  lStack_28 = param_1 + 200;
  FUN_10a18d9ec(&lStack_28);
  lStack_28 = param_1 + 0xb0;
  FUN_10a18d9ec(&lStack_28);
  if (*(long *)(param_1 + 0xa0) != 0) {
    __ZdlPv(*(long *)(param_1 + 0x90) + -8);
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    __ZdlPv(*(long *)(param_1 + 0x70) + -8);
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    __ZdlPv(*(long *)(param_1 + 0x50) + -8);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    __ZdlPv(*(long *)(param_1 + 0x30) + -8);
  }
  lStack_28 = param_1 + 0x18;
  FUN_10a18b6d4(&lStack_28);
  lStack_28 = param_1;
  FUN_10a18b75c(&lStack_28);
  return param_1;
}



/* Entry: 10a18ba48; end: 10a18bb27;  */

void FUN_10a18ba48(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a0523dc();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a18bb28; end: 10a18bb83;  */

void FUN_10a18bb28(long param_1)

{
  FUN_10a1902ec(param_1 + 0x3d0,0);
  func_0x00010a19032c(param_1 + 0x3c8,0);
  FUN_10a19036c(param_1 + 0x110);
  func_0x00010a0eb82c(param_1 + 0x28);
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10a18bb84; end: 10a18bbf3;  */

void FUN_10a18bb84(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_38;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar4 = plVar2[1];
    lVar1 = lVar3;
    if (lVar4 != lVar3) {
      do {
        lVar4 = lVar4 + -0x18;
        lStack_38 = lVar4;
        FUN_10a18bbf4(&lStack_38);
      } while (lVar4 != lVar3);
      lVar1 = *(long *)*param_1;
    }
    plVar2[1] = lVar3;
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 10a18bbf4; end: 10a18bc33;  */

void FUN_10a18bbf4(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    func_0x00010a176358();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a18bc34; end: 10a18c2fb;  */

/* WARNING: Removing unreachable block (ram,0x00010a18c94c) */
/* WARNING: Removing unreachable block (ram,0x00010a18c950) */
/* WARNING: Removing unreachable block (ram,0x00010a18c960) */
/* WARNING: Removing unreachable block (ram,0x00010a18c97c) */

ulong * FUN_10a18bc34(ulong *param_1,ulong *param_2,undefined8 param_3,long param_4,uint param_5)

{
  bool bVar1;
  long lVar2;
  code *pcVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong *puVar21;
  long lVar22;
  long lVar23;
  
  puVar5 = param_1;
LAB_10a18bc68:
  param_4 = -param_4;
  puVar10 = puVar5;
LAB_10a18bc6c:
  puVar5 = puVar10;
  param_4 = param_4 + 1;
  uVar9 = (long)param_2 - (long)puVar5 >> 3;
  if (2 < (long)uVar9) {
    if (uVar9 == 3) {
      uVar9 = *puVar5;
      uVar8 = puVar5[1];
      uVar11 = param_2[-1];
      if (uVar8 < uVar9) {
        if (uVar11 < uVar8) {
          *puVar5 = uVar11;
        }
        else {
          *puVar5 = uVar8;
          puVar5[1] = uVar9;
          if (uVar9 <= param_2[-1]) {
            return param_1;
          }
          puVar5[1] = param_2[-1];
        }
        param_2[-1] = uVar9;
        return param_1;
      }
      if (uVar8 <= uVar11) {
        return param_1;
      }
      puVar5[1] = uVar11;
      param_2[-1] = uVar8;
      uVar9 = puVar5[1];
      goto LAB_10a18c2d0;
    }
    if (uVar9 != 4) {
      if (uVar9 != 5) goto LAB_10a18bcac;
      puVar14 = puVar5 + 1;
      puVar18 = (ulong *)*puVar14;
      puVar16 = puVar5 + 2;
      puVar7 = (ulong *)*puVar16;
      puVar13 = (ulong *)*puVar5;
      puVar10 = puVar7;
      puVar4 = puVar7;
      puVar19 = puVar5;
      if (puVar18 < puVar13) {
        param_1 = puVar18;
        puVar6 = puVar13;
        puVar21 = puVar16;
        if (puVar18 <= puVar7) {
          *puVar5 = (ulong)puVar18;
          puVar5[1] = (ulong)puVar13;
          param_1 = puVar7;
          puVar15 = puVar13;
          puVar17 = puVar18;
          puVar4 = puVar18;
          puVar19 = puVar14;
          if (puVar13 <= puVar7) goto LAB_10a18c268;
        }
LAB_10a18c244:
        *puVar19 = (ulong)puVar7;
        *puVar21 = (ulong)puVar13;
        puVar10 = puVar6;
        puVar15 = param_1;
        puVar17 = puVar4;
      }
      else {
        puVar15 = puVar18;
        puVar17 = puVar13;
        if (puVar7 < puVar18) {
          *puVar14 = (ulong)puVar7;
          *puVar16 = (ulong)puVar18;
          param_1 = puVar13;
          puVar6 = puVar18;
          puVar10 = puVar18;
          puVar15 = puVar7;
          puVar21 = puVar14;
          if (puVar7 < puVar13) goto LAB_10a18c244;
        }
      }
LAB_10a18c268:
      puVar19 = (ulong *)puVar5[3];
      puVar4 = puVar19;
      if (puVar19 < puVar10) {
        puVar5[2] = (ulong)puVar19;
        puVar5[3] = (ulong)puVar10;
        puVar4 = puVar10;
        if (puVar19 < puVar15) {
          *puVar14 = (ulong)puVar19;
          *puVar16 = (ulong)puVar15;
          if (puVar19 < puVar17) {
            *puVar5 = (ulong)puVar19;
            puVar5[1] = (ulong)puVar17;
          }
        }
      }
      if (puVar4 <= (ulong *)param_2[-1]) {
        return param_1;
      }
      puVar5[3] = param_2[-1];
      param_2[-1] = (ulong)puVar4;
      uVar8 = puVar5[2];
      uVar9 = puVar5[3];
      if (uVar8 <= uVar9) {
        return param_1;
      }
      puVar5[2] = uVar9;
      puVar5[3] = uVar8;
      uVar8 = puVar5[1];
      if (uVar8 <= uVar9) {
        return param_1;
      }
      puVar5[1] = uVar9;
      puVar5[2] = uVar8;
LAB_10a18c2d0:
      uVar8 = *puVar5;
      if (uVar9 < uVar8) {
        *puVar5 = uVar9;
        puVar5[1] = uVar8;
        return param_1;
      }
      return param_1;
    }
    puVar19 = puVar5 + 1;
    puVar10 = (ulong *)*puVar19;
    puVar7 = puVar5 + 2;
    puVar14 = (ulong *)*puVar7;
    puVar16 = (ulong *)*puVar5;
    puVar4 = puVar5;
    if (puVar10 < puVar16) {
      param_1 = puVar16;
      puVar18 = puVar7;
      if (puVar10 <= puVar14) {
        *puVar5 = (ulong)puVar10;
        puVar5[1] = (ulong)puVar16;
        puVar10 = puVar14;
        puVar4 = puVar19;
        goto joined_r0x00010a18c18c;
      }
    }
    else {
      puVar13 = puVar14;
      if (puVar10 <= puVar14) goto LAB_10a18c1cc;
      *puVar19 = (ulong)puVar14;
      *puVar7 = (ulong)puVar10;
      puVar18 = puVar19;
      param_1 = puVar10;
joined_r0x00010a18c18c:
      puVar13 = puVar10;
      if (puVar16 <= puVar14) goto LAB_10a18c1cc;
    }
    *puVar4 = (ulong)puVar14;
    *puVar18 = (ulong)puVar16;
    puVar13 = param_1;
LAB_10a18c1cc:
    if (puVar13 <= (ulong *)param_2[-1]) {
      return param_1;
    }
    *puVar7 = param_2[-1];
    param_2[-1] = (ulong)puVar13;
    uVar8 = *puVar7;
    uVar9 = *puVar19;
    if (uVar8 < uVar9) {
      puVar5[1] = uVar8;
      puVar5[2] = uVar9;
      uVar9 = *puVar5;
      if (uVar8 < uVar9) {
        *puVar5 = uVar8;
        puVar5[1] = uVar9;
        return param_1;
      }
      return param_1;
    }
    return param_1;
  }
  if (uVar9 < 2) {
    return param_1;
  }
  if (uVar9 == 2) {
    uVar9 = *puVar5;
    if (param_2[-1] < uVar9) {
      *puVar5 = param_2[-1];
      param_2[-1] = uVar9;
      return param_1;
    }
    return param_1;
  }
LAB_10a18bcac:
  if ((long)uVar9 < 0x18) {
    if ((param_5 & 1) == 0) {
      if ((puVar5 != param_2) && (puVar10 = puVar5 + 1, puVar10 != param_2)) {
        lVar22 = 0;
        lVar23 = 8;
        do {
          uVar8 = *(ulong *)((long)puVar5 + lVar22);
          uVar9 = *puVar10;
          if (uVar9 < uVar8) {
            lVar22 = 0;
            do {
              *(ulong *)((long)puVar10 + lVar22) = uVar8;
              if (lVar23 + lVar22 == 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10a18c36c);
                (*pcVar3)();
              }
              uVar8 = ((ulong *)((long)puVar10 + lVar22))[-2];
              lVar22 = lVar22 + -8;
            } while (uVar9 < uVar8);
            *(ulong *)((long)puVar10 + lVar22) = uVar9;
          }
          puVar10 = puVar10 + 1;
          lVar22 = lVar23;
          lVar23 = lVar23 + 8;
        } while (puVar10 != param_2);
      }
      return puVar5;
    }
    if (puVar5 == param_2) {
      return param_1;
    }
    if (puVar5 + 1 == param_2) {
      return param_1;
    }
    lVar22 = 8;
    puVar10 = puVar5;
    puVar4 = puVar5 + 1;
    goto LAB_10a18c08c;
  }
  if (param_4 != 1) {
    puVar10 = puVar5 + (uVar9 >> 1);
    uVar8 = param_2[-1];
    if (uVar9 < 0x81) {
      uVar11 = *puVar5;
      uVar9 = *puVar10;
      if (uVar11 < uVar9) {
        if (uVar8 < uVar11) {
          *puVar10 = uVar8;
        }
        else {
          *puVar10 = uVar11;
          *puVar5 = uVar9;
          if (uVar9 <= param_2[-1]) goto joined_r0x00010a18bdf8;
          *puVar5 = param_2[-1];
        }
        param_2[-1] = uVar9;
      }
      else if (uVar8 < uVar11) {
        *puVar5 = uVar8;
        param_2[-1] = uVar11;
        uVar9 = *puVar10;
        if (*puVar5 < uVar9) {
          *puVar10 = *puVar5;
          *puVar5 = uVar9;
        }
      }
    }
    else {
      uVar11 = *puVar10;
      uVar9 = *puVar5;
      if (uVar11 < uVar9) {
        if (uVar8 < uVar11) {
          *puVar5 = uVar8;
        }
        else {
          *puVar5 = uVar11;
          *puVar10 = uVar9;
          if (uVar9 <= param_2[-1]) goto LAB_10a18bd88;
          *puVar10 = param_2[-1];
        }
        param_2[-1] = uVar9;
      }
      else if (uVar8 < uVar11) {
        *puVar10 = uVar8;
        param_2[-1] = uVar11;
        uVar9 = *puVar5;
        if (*puVar10 < uVar9) {
          *puVar5 = *puVar10;
          *puVar10 = uVar9;
        }
      }
LAB_10a18bd88:
      puVar4 = puVar10 + -1;
      uVar8 = *puVar4;
      uVar9 = puVar5[1];
      uVar11 = param_2[-2];
      if (uVar8 < uVar9) {
        if (uVar11 < uVar8) {
          puVar5[1] = uVar11;
        }
        else {
          puVar5[1] = uVar8;
          *puVar4 = uVar9;
          if (uVar9 <= param_2[-2]) goto LAB_10a18be1c;
          *puVar4 = param_2[-2];
        }
        param_2[-2] = uVar9;
      }
      else if (uVar11 < uVar8) {
        *puVar4 = uVar11;
        param_2[-2] = uVar8;
        uVar9 = puVar5[1];
        if (*puVar4 < uVar9) {
          puVar5[1] = *puVar4;
          *puVar4 = uVar9;
        }
      }
LAB_10a18be1c:
      puVar19 = puVar10 + 1;
      uVar8 = *puVar19;
      uVar9 = puVar5[2];
      uVar11 = param_2[-3];
      if (uVar8 < uVar9) {
        if (uVar11 < uVar8) {
          puVar5[2] = uVar11;
        }
        else {
          puVar5[2] = uVar8;
          *puVar19 = uVar9;
          if (uVar9 <= param_2[-3]) goto LAB_10a18be8c;
          *puVar19 = param_2[-3];
        }
        param_2[-3] = uVar9;
      }
      else if (uVar11 < uVar8) {
        *puVar19 = uVar11;
        param_2[-3] = uVar8;
        uVar9 = puVar5[2];
        if (*puVar19 < uVar9) {
          puVar5[2] = *puVar19;
          *puVar19 = uVar9;
        }
      }
LAB_10a18be8c:
      uVar9 = puVar10[-1];
      uVar8 = *puVar10;
      uVar11 = puVar10[1];
      if (uVar8 < uVar9) {
        uVar12 = uVar8;
        if (uVar8 <= uVar11) {
          puVar10[-1] = uVar8;
          *puVar10 = uVar9;
          puVar4 = puVar10;
          uVar8 = uVar9;
          uVar12 = uVar11;
          if (uVar9 <= uVar11) goto LAB_10a18bee4;
        }
LAB_10a18bedc:
        *puVar4 = uVar11;
        *puVar19 = uVar9;
        uVar8 = uVar12;
      }
      else if (uVar11 < uVar8) {
        *puVar10 = uVar11;
        puVar10[1] = uVar8;
        puVar19 = puVar10;
        uVar8 = uVar11;
        uVar12 = uVar9;
        if (uVar11 < uVar9) goto LAB_10a18bedc;
      }
LAB_10a18bee4:
      uVar9 = *puVar5;
      *puVar5 = uVar8;
      *puVar10 = uVar9;
    }
joined_r0x00010a18bdf8:
    if (((param_5 & 1) == 0) && (*puVar5 <= puVar5[-1])) {
      func_0x00010a18c36c(puVar5,param_2,param_3);
      puVar10 = puVar5;
      goto LAB_10a18bf8c;
    }
    puVar4 = puVar5;
    puVar10 = param_2;
    func_0x00010a18c450(puVar5,param_2,param_3);
    if (((ulong)puVar10 & 1) == 0) goto LAB_10a18bf58;
    puVar19 = puVar5;
    func_0x00010a18c540(puVar5,puVar4,param_3);
    puVar10 = puVar4 + 1;
    param_1 = puVar10;
    func_0x00010a18c540(puVar10,param_2,param_3);
    if ((int)param_1 != 0) {
      param_4 = -param_4;
      param_2 = puVar4;
      if (((ulong)puVar19 & 1) != 0) {
        return param_1;
      }
      goto LAB_10a18bc68;
    }
    if (((ulong)puVar19 & 1) == 0) goto LAB_10a18bf58;
    goto LAB_10a18bc6c;
  }
  if (puVar5 == param_2) {
    return param_1;
  }
  if (puVar5 == param_2) {
    return param_2;
  }
  lVar22 = (long)param_2 - (long)puVar5 >> 3;
  if (1 < lVar22) {
    uVar9 = lVar22 - 2U >> 1;
    lVar23 = uVar9 + 1;
    puVar10 = puVar5 + uVar9;
    do {
      FUN_10a18ca98(puVar5,param_3,lVar22,puVar10);
      puVar10 = puVar10 + -1;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
  }
  puVar10 = param_2;
  if (1 < lVar22) {
    do {
      uVar9 = 0;
      uVar8 = *puVar5;
      puVar4 = puVar5;
      do {
        puVar19 = puVar4 + uVar9 + 1;
        uVar12 = uVar9 << 1 | 1;
        uVar11 = uVar9 * 2 + 2;
        if ((long)uVar11 < lVar22) {
          uVar20 = puVar4[uVar9 + 2];
          lVar23 = uVar9 + 1;
          puVar7 = puVar4 + uVar9 + 2;
          uVar9 = uVar11;
          if (uVar20 <= puVar4[lVar23]) {
            puVar7 = puVar19;
            uVar9 = uVar12;
            uVar20 = puVar4[lVar23];
          }
        }
        else {
          puVar7 = puVar19;
          uVar9 = uVar12;
          uVar20 = *puVar19;
        }
        *puVar4 = uVar20;
        puVar4 = puVar7;
      } while ((long)uVar9 <= (long)(lVar22 - 2U >> 1));
      puVar10 = puVar10 + -1;
      if (puVar7 == puVar10) {
        *puVar7 = uVar8;
      }
      else {
        *puVar7 = *puVar10;
        *puVar10 = uVar8;
        lVar23 = (long)puVar7 + (8 - (long)puVar5) >> 3;
        if (1 < lVar23) {
          uVar9 = lVar23 - 2U >> 1;
          uVar11 = puVar5[uVar9];
          uVar8 = *puVar7;
          puVar4 = puVar5 + uVar9;
          if (uVar11 < uVar8) {
            do {
              puVar19 = puVar4;
              *puVar7 = uVar11;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1 >> 1;
              uVar11 = puVar5[uVar9];
              puVar7 = puVar19;
              puVar4 = puVar5 + uVar9;
            } while (uVar11 < uVar8);
            *puVar19 = uVar8;
          }
        }
      }
      bVar1 = 2 < lVar22;
      lVar22 = lVar22 + -1;
    } while (bVar1);
  }
  return param_2;
LAB_10a18c08c:
  uVar9 = *puVar10;
  uVar8 = puVar10[1];
  lVar23 = lVar22;
  if (uVar8 < uVar9) {
    do {
      *(ulong *)((long)puVar5 + lVar23) = uVar9;
      lVar2 = lVar23 + -8;
      puVar10 = puVar5;
      if (lVar2 == 0) goto LAB_10a18c0cc;
      uVar9 = *(ulong *)((long)puVar5 + lVar23 + -0x10);
      lVar23 = lVar2;
    } while (uVar8 < uVar9);
    puVar10 = (ulong *)((long)puVar5 + lVar2);
LAB_10a18c0cc:
    *puVar10 = uVar8;
  }
  puVar19 = puVar4 + 1;
  lVar22 = lVar22 + 8;
  puVar10 = puVar4;
  puVar4 = puVar19;
  if (puVar19 == param_2) {
    return param_1;
  }
  goto LAB_10a18c08c;
LAB_10a18bf58:
  FUN_10a18bc34(puVar5,puVar4,param_3,-param_4,param_5 & 1);
  puVar10 = puVar4 + 1;
LAB_10a18bf8c:
  param_5 = 0;
  param_4 = -param_4;
  param_1 = puVar5;
  puVar5 = puVar10;
  goto LAB_10a18bc68;
}



/* Entry: 10a18c2fc; end: 10a18c8d3;  */

void FUN_10a18c2fc(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  if ((param_1 != param_2) && (puVar2 = param_1 + 1, puVar2 != param_2)) {
    lVar6 = 0;
    lVar3 = 8;
    do {
      uVar5 = *(ulong *)((long)param_1 + lVar6);
      uVar4 = *puVar2;
      if (uVar4 < uVar5) {
        lVar6 = 0;
        do {
          *(ulong *)((long)puVar2 + lVar6) = uVar5;
          if (lVar3 + lVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10a18c36c);
            (*pcVar1)();
          }
          uVar5 = ((ulong *)((long)puVar2 + lVar6))[-2];
          lVar6 = lVar6 + -8;
        } while (uVar4 < uVar5);
        *(ulong *)((long)puVar2 + lVar6) = uVar4;
      }
      puVar2 = puVar2 + 1;
      lVar6 = lVar3;
      lVar3 = lVar3 + 8;
    } while (puVar2 != param_2);
  }
  return;
}



/* Entry: 10a18c8d4; end: 10a18ca97;  */

ulong * FUN_10a18c8d4(ulong *param_1,ulong *param_2,ulong *param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  long lVar12;
  
  puVar11 = param_3;
  if (param_1 != param_2) {
    lVar10 = (long)param_2 - (long)param_1 >> 3;
    puVar11 = param_2;
    if (1 < lVar10) {
      uVar3 = lVar10 - 2U >> 1;
      lVar12 = uVar3 + 1;
      puVar6 = param_1 + uVar3;
      do {
        FUN_10a18ca98(param_1,param_4,lVar10,puVar6);
        puVar6 = puVar6 + -1;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    for (; puVar11 != param_3; puVar11 = puVar11 + 1) {
      uVar3 = *puVar11;
      if (uVar3 < *param_1) {
        *puVar11 = *param_1;
        *param_1 = uVar3;
        FUN_10a18ca98(param_1,param_4,lVar10,param_1);
      }
    }
    if (1 < lVar10) {
      do {
        uVar3 = 0;
        uVar5 = *param_1;
        puVar6 = param_1;
        do {
          puVar7 = puVar6 + uVar3 + 1;
          uVar2 = uVar3 << 1 | 1;
          uVar8 = uVar3 * 2 + 2;
          if ((long)uVar8 < lVar10) {
            uVar9 = puVar6[uVar3 + 2];
            lVar12 = uVar3 + 1;
            puVar4 = puVar6 + uVar3 + 2;
            uVar3 = uVar8;
            if (uVar9 <= puVar6[lVar12]) {
              puVar4 = puVar7;
              uVar3 = uVar2;
              uVar9 = puVar6[lVar12];
            }
          }
          else {
            puVar4 = puVar7;
            uVar3 = uVar2;
            uVar9 = *puVar7;
          }
          *puVar6 = uVar9;
          puVar6 = puVar4;
        } while ((long)uVar3 <= (long)(lVar10 - 2U >> 1));
        param_2 = param_2 + -1;
        if (puVar4 == param_2) {
          *puVar4 = uVar5;
        }
        else {
          *puVar4 = *param_2;
          *param_2 = uVar5;
          lVar12 = (long)puVar4 + (8 - (long)param_1) >> 3;
          if (1 < lVar12) {
            uVar3 = lVar12 - 2U >> 1;
            uVar8 = param_1[uVar3];
            uVar5 = *puVar4;
            puVar6 = param_1 + uVar3;
            if (uVar8 < uVar5) {
              do {
                puVar7 = puVar6;
                *puVar4 = uVar8;
                if (uVar3 == 0) break;
                uVar3 = uVar3 - 1 >> 1;
                uVar8 = param_1[uVar3];
                puVar4 = puVar7;
                puVar6 = param_1 + uVar3;
              } while (uVar8 < uVar5);
              *puVar7 = uVar5;
            }
          }
        }
        bVar1 = 2 < lVar10;
        lVar10 = lVar10 + -1;
      } while (bVar1);
    }
  }
  return puVar11;
}



/* Entry: 10a18ca98; end: 10a18cbd7;  */

void FUN_10a18ca98(long param_1,undefined8 param_2,long param_3,ulong *param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (1 < param_3) {
    uVar3 = param_3 - 2U >> 1;
    if ((long)param_4 - param_1 >> 3 <= (long)uVar3) {
      lVar7 = (long)param_4 - param_1 >> 2;
      uVar8 = lVar7 + 1;
      puVar4 = (ulong *)(param_1 + uVar8 * 8);
      uVar6 = lVar7 + 2;
      if ((long)uVar6 < param_3) {
        uVar9 = puVar4[1];
        puVar5 = puVar4 + 1;
        if (uVar9 <= *puVar4) {
          puVar5 = puVar4;
          uVar6 = uVar8;
          uVar9 = *puVar4;
        }
      }
      else {
        puVar5 = puVar4;
        uVar6 = uVar8;
        uVar9 = *puVar4;
      }
      uVar8 = *param_4;
      if (uVar8 <= uVar9) {
        do {
          puVar4 = puVar5;
          *param_4 = uVar9;
          if ((long)uVar3 < (long)uVar6) break;
          uVar2 = uVar6 << 1 | 1;
          puVar1 = (ulong *)(param_1 + uVar2 * 8);
          uVar6 = uVar6 * 2 + 2;
          if ((long)uVar6 < param_3) {
            uVar9 = puVar1[1];
            puVar5 = puVar1 + 1;
            if (uVar9 <= *puVar1) {
              puVar5 = puVar1;
              uVar6 = uVar2;
              uVar9 = *puVar1;
            }
          }
          else {
            puVar5 = puVar1;
            uVar6 = uVar2;
            uVar9 = *puVar1;
          }
          param_4 = puVar4;
        } while (uVar8 <= uVar9);
        *puVar4 = uVar8;
      }
    }
  }
  return;
}



/* Entry: 10a18cbd8; end: 10a18cc33;  */

void FUN_10a18cbd8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
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
  return;
}



/* Entry: 10a18cc34; end: 10a18cc47;  */

undefined1  [16] FUN_10a18cc34(undefined8 param_1,ulong **param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  ulong *puVar6;
  ulong **ppuVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  ulong *puStack_68;
  
  puVar10 = (ulong *)&UNK_10f6403f7;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar5 = (long)param_2 << 3;
    __Znwm(lVar5);
    auVar19._8_8_ = param_2;
    auVar19._0_8_ = lVar5;
    return auVar19;
  }
  func_0x000109ffded8();
  uVar8 = puVar10[1];
  uVar13 = *puVar10;
  uVar11 = (long)(puVar10[2] - uVar8) >> 3;
  if (uVar13 < uVar11) {
    puVar6 = puVar10;
    ppuVar7 = param_2;
    if (0x3f < **(ulong **)(uVar8 + uVar13 * 8)) {
      uVar13 = uVar13 + 1;
      if (uVar11 <= uVar13) {
        puVar6 = (ulong *)0xc08;
        __Znwm();
        *puVar6 = 0;
        ppuVar7 = &puStack_68;
        puStack_68 = puVar6;
        FUN_10a18b4a0(puVar10 + 1);
        puVar6 = puStack_68;
        puStack_68 = (ulong *)0x0;
        if (puVar6 != (ulong *)0x0) {
          __ZdlPv();
        }
        uVar8 = puVar10[1];
        uVar11 = (long)(puVar10[2] - uVar8) >> 3;
      }
      *puVar10 = uVar13;
    }
    if (uVar13 < uVar11) {
      puVar9 = *(ulong **)(uVar8 + uVar13 * 8);
      uVar13 = *puVar9;
      if (0x3f < uVar13) {
LAB_10a18cd98:
        FUN_10a0a2358();
        puVar10 = puStack_68;
        puStack_68 = (ulong *)0x0;
        if (puVar10 != (ulong *)0x0) {
          __ZdlPv();
        }
        __Unwind_Resume();
        puVar9 = ppuVar7[1];
        puVar10 = *ppuVar7;
        *ppuVar7 = (ulong *)0x0;
        ppuVar7[1] = (ulong *)0x0;
        plVar12 = (long *)puVar6[1];
        puVar6[1] = (ulong)puVar9;
        *puVar6 = (ulong)puVar10;
        if (plVar12 != (long *)0x0) {
          plVar1 = plVar12 + 1;
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
            (**(code **)(*plVar12 + 0x10))(plVar12);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
        auVar21._8_8_ = ppuVar7;
        auVar21._0_8_ = puVar6;
        return auVar21;
      }
      puVar15 = param_2[1];
      puVar14 = *param_2;
      puVar17 = param_2[3];
      puVar16 = param_2[2];
      puVar18 = param_2[4];
      puVar9[uVar13 * 6 + 6] = (ulong)param_2[5];
      puVar9[uVar13 * 6 + 5] = (ulong)puVar18;
      puVar9[uVar13 * 6 + 4] = (ulong)puVar17;
      puVar9[uVar13 * 6 + 3] = (ulong)puVar16;
      puVar9[uVar13 * 6 + 2] = (ulong)puVar15;
      puVar9[uVar13 * 6 + 1] = (ulong)puVar14;
      *puVar9 = uVar13 + 1;
      if (*puVar10 < (ulong)((long)(puVar10[2] - puVar10[1]) >> 3)) {
        puVar10 = *(ulong **)(puVar10[1] + *puVar10 * 8);
        uVar13 = *puVar10;
        if (uVar13 == 0) goto LAB_10a18cd98;
        if (uVar13 < 0x41) {
          auVar20._0_8_ = puVar10 + uVar13 * 6 + -5;
          auVar20._8_8_ = ppuVar7;
          return auVar20;
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a18cd98);
  (*pcVar4)();
}



/* Entry: 10a18cc48; end: 10a18cc7b;  */

undefined1  [16] FUN_10a18cc48(ulong *param_1,ulong **param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  ulong *puVar6;
  ulong **ppuVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  ulong *puStack_58;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar5 = (long)param_2 << 3;
    __Znwm(lVar5);
    auVar18._8_8_ = param_2;
    auVar18._0_8_ = lVar5;
    return auVar18;
  }
  func_0x000109ffded8();
  uVar8 = param_1[1];
  uVar12 = *param_1;
  uVar10 = (long)(param_1[2] - uVar8) >> 3;
  if (uVar12 < uVar10) {
    puVar6 = param_1;
    ppuVar7 = param_2;
    if (0x3f < **(ulong **)(uVar8 + uVar12 * 8)) {
      uVar12 = uVar12 + 1;
      if (uVar10 <= uVar12) {
        puVar6 = (ulong *)0xc08;
        __Znwm();
        *puVar6 = 0;
        ppuVar7 = &puStack_58;
        puStack_58 = puVar6;
        FUN_10a18b4a0(param_1 + 1);
        puVar6 = puStack_58;
        puStack_58 = (ulong *)0x0;
        if (puVar6 != (ulong *)0x0) {
          __ZdlPv();
        }
        uVar8 = param_1[1];
        uVar10 = (long)(param_1[2] - uVar8) >> 3;
      }
      *param_1 = uVar12;
    }
    if (uVar12 < uVar10) {
      puVar9 = *(ulong **)(uVar8 + uVar12 * 8);
      uVar12 = *puVar9;
      if (0x3f < uVar12) {
LAB_10a18cd98:
        FUN_10a0a2358();
        puVar9 = puStack_58;
        puStack_58 = (ulong *)0x0;
        if (puVar9 != (ulong *)0x0) {
          __ZdlPv();
        }
        __Unwind_Resume();
        puVar13 = ppuVar7[1];
        puVar9 = *ppuVar7;
        *ppuVar7 = (ulong *)0x0;
        ppuVar7[1] = (ulong *)0x0;
        plVar11 = (long *)puVar6[1];
        puVar6[1] = (ulong)puVar13;
        *puVar6 = (ulong)puVar9;
        if (plVar11 != (long *)0x0) {
          plVar1 = plVar11 + 1;
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
            (**(code **)(*plVar11 + 0x10))(plVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        auVar20._8_8_ = ppuVar7;
        auVar20._0_8_ = puVar6;
        return auVar20;
      }
      puVar14 = param_2[1];
      puVar13 = *param_2;
      puVar16 = param_2[3];
      puVar15 = param_2[2];
      puVar17 = param_2[4];
      puVar9[uVar12 * 6 + 6] = (ulong)param_2[5];
      puVar9[uVar12 * 6 + 5] = (ulong)puVar17;
      puVar9[uVar12 * 6 + 4] = (ulong)puVar16;
      puVar9[uVar12 * 6 + 3] = (ulong)puVar15;
      puVar9[uVar12 * 6 + 2] = (ulong)puVar14;
      puVar9[uVar12 * 6 + 1] = (ulong)puVar13;
      *puVar9 = uVar12 + 1;
      if (*param_1 < (ulong)((long)(param_1[2] - param_1[1]) >> 3)) {
        puVar9 = *(ulong **)(param_1[1] + *param_1 * 8);
        uVar12 = *puVar9;
        if (uVar12 == 0) goto LAB_10a18cd98;
        if (uVar12 < 0x41) {
          auVar19._0_8_ = puVar9 + uVar12 * 6 + -5;
          auVar19._8_8_ = ppuVar7;
          return auVar19;
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a18cd98);
  (*pcVar4)();
}



/* Entry: 10a18cc7c; end: 10a18cdb7;  */

ulong * FUN_10a18cc7c(ulong *param_1,ulong **param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong **ppuVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puStack_38;
  
  uVar7 = param_1[1];
  uVar12 = *param_1;
  uVar9 = (long)(param_1[2] - uVar7) >> 3;
  if (uVar12 < uVar9) {
    puVar5 = param_1;
    ppuVar6 = param_2;
    if (0x3f < **(ulong **)(uVar7 + uVar12 * 8)) {
      uVar12 = uVar12 + 1;
      if (uVar9 <= uVar12) {
        puVar5 = (ulong *)0xc08;
        __Znwm();
        *puVar5 = 0;
        ppuVar6 = &puStack_38;
        puStack_38 = puVar5;
        FUN_10a18b4a0(param_1 + 1);
        puVar5 = puStack_38;
        puStack_38 = (ulong *)0x0;
        if (puVar5 != (ulong *)0x0) {
          __ZdlPv();
        }
        uVar7 = param_1[1];
        uVar9 = (long)(param_1[2] - uVar7) >> 3;
      }
      *param_1 = uVar12;
    }
    if (uVar12 < uVar9) {
      puVar8 = *(ulong **)(uVar7 + uVar12 * 8);
      uVar12 = *puVar8;
      if (0x3f < uVar12) {
LAB_10a18cd98:
        FUN_10a0a2358();
        puVar8 = puStack_38;
        puStack_38 = (ulong *)0x0;
        if (puVar8 != (ulong *)0x0) {
          __ZdlPv();
        }
        __Unwind_Resume();
        puVar13 = ppuVar6[1];
        puVar8 = *ppuVar6;
        *ppuVar6 = (ulong *)0x0;
        ppuVar6[1] = (ulong *)0x0;
        plVar11 = (long *)puVar5[1];
        puVar5[1] = (ulong)puVar13;
        *puVar5 = (ulong)puVar8;
        if (plVar11 != (long *)0x0) {
          plVar1 = plVar11 + 1;
          do {
            lVar10 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        return puVar5;
      }
      puVar14 = param_2[1];
      puVar13 = *param_2;
      puVar16 = param_2[3];
      puVar15 = param_2[2];
      puVar17 = param_2[4];
      puVar8[uVar12 * 6 + 6] = (ulong)param_2[5];
      puVar8[uVar12 * 6 + 5] = (ulong)puVar17;
      puVar8[uVar12 * 6 + 4] = (ulong)puVar16;
      puVar8[uVar12 * 6 + 3] = (ulong)puVar15;
      puVar8[uVar12 * 6 + 2] = (ulong)puVar14;
      puVar8[uVar12 * 6 + 1] = (ulong)puVar13;
      *puVar8 = uVar12 + 1;
      if (*param_1 < (ulong)((long)(param_1[2] - param_1[1]) >> 3)) {
        puVar8 = *(ulong **)(param_1[1] + *param_1 * 8);
        uVar12 = *puVar8;
        if (uVar12 == 0) goto LAB_10a18cd98;
        if (uVar12 < 0x41) {
          return puVar8 + uVar12 * 6 + -5;
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a18cd98);
  (*pcVar4)();
}



/* Entry: 10a18cdb8; end: 10a18ce1b;  */

undefined8 * FUN_10a18cdb8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 10a18ce1c; end: 10a18ce2f;  */

undefined1  [16]
FUN_10a18ce1c(undefined8 param_1,long **param_2,long **param_3,long *param_4,long param_5)

{
  undefined8 *puVar1;
  long **pplVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long **pplVar7;
  long **pplVar8;
  undefined2 uVar9;
  ulong uVar10;
  long *extraout_x8;
  long **pplVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long **pplVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  long **pplStack_108;
  
  plVar17 = (long *)&UNK_10f6403f7;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar5 = (long)param_2 << 3;
    __Znwm(lVar5);
    auVar24._8_8_ = param_2;
    auVar24._0_8_ = lVar5;
    return auVar24;
  }
  func_0x000109ffded8();
  pplVar8 = param_2;
  pplVar7 = param_2;
  if (0 < param_5) {
    pplVar2 = (long **)plVar17[1];
    if ((plVar17[2] - (long)pplVar2 >> 3) * 0x4ec4ec4ec4ec4ec5 < param_5) {
      lVar5 = *plVar17;
      uVar10 = param_5 + ((long)pplVar2 - lVar5 >> 3) * 0x4ec4ec4ec4ec4ec5;
      if (0x276276276276276 < uVar10) {
        FUN_10a18d150();
        plVar17 = (long *)&UNK_10f6403f7;
        FUN_109ffde64();
        if (param_2 < (long **)0x276276276276277) {
          lVar5 = (long)param_2 * 0x68;
          __Znwm(lVar5);
          auVar26._8_8_ = param_2;
          auVar26._0_8_ = lVar5;
          return auVar26;
        }
        func_0x000109ffded8();
        *extraout_x8 = 0;
        extraout_x8[1] = 0;
        extraout_x8[2] = 0;
        lVar5 = *plVar17;
        lVar13 = plVar17[1];
        pplVar7 = param_2;
        do {
          if (lVar5 == lVar13) {
            auVar27._8_8_ = pplVar7;
            auVar27._0_8_ = plVar17;
            return auVar27;
          }
          plVar18 = *(long **)(lVar5 + 0x10);
          for (plVar6 = *(long **)(lVar5 + 8); plVar6 != plVar18; plVar6 = plVar6 + 8) {
            plVar17 = param_2[1];
            if (plVar17 < param_2[2]) {
              *plVar17 = 0;
              plVar17[1] = 0;
              plVar19 = plVar17 + 3;
              plVar17[2] = 0;
            }
            else {
              lVar16 = (long)plVar17 - (long)*param_2;
              uVar10 = (lVar16 >> 3) * -0x5555555555555555 + 1;
              if (0xaaaaaaaaaaaaaaa < uVar10) {
                FUN_10a18d664();
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10a18d3f0);
                (*pcVar4)();
              }
              lVar12 = (long)param_2[2] - (long)*param_2 >> 3;
              uVar14 = lVar12 * 0x5555555555555556;
              if (uVar14 < uVar10 || uVar14 - uVar10 == 0) {
                uVar14 = uVar10;
              }
              if (0x555555555555554 < (ulong)(lVar12 * -0x5555555555555555)) {
                uVar14 = 0xaaaaaaaaaaaaaaa;
              }
              pplVar7 = param_2;
              pplStack_108 = param_2;
              FUN_10a18d678();
              puVar1 = (undefined8 *)((long)pplVar7 + lVar16);
              *puVar1 = 0;
              puVar1[1] = 0;
              puVar1[2] = 0;
              plVar19 = puVar1 + 3;
              plVar17 = (long *)((long)puVar1 - ((long)param_2[1] - (long)*param_2));
              _memcpy(plVar17);
              plStack_128 = *param_2;
              *param_2 = plVar17;
              param_2[1] = plVar19;
              uStack_110 = param_2[2];
              param_2[2] = (long *)(pplVar7 + uVar14 * 3);
              plStack_120 = plStack_128;
              plStack_118 = plStack_128;
              func_0x00010a18d6bc(&plStack_128);
            }
            param_2[1] = plVar19;
            FUN_10a18d418(plVar19 + -3,(plVar6[6] - plVar6[5] >> 3) * -0x3333333333333333);
            plVar20 = (long *)plVar6[6];
            for (plVar17 = (long *)plVar6[5]; plVar17 != plVar20; plVar17 = plVar17 + 5) {
              plStack_120 = (long *)(long)*(char *)((long)plVar17 + 0x17);
              plStack_128 = plVar17;
              if ((long)plStack_120 < 0) {
                plStack_120 = (long *)plVar17[1];
                plStack_128 = (long *)*plVar17;
              }
              plStack_118 = (long *)plVar17[3];
              uStack_110._0_5_ = CONCAT14(*(int *)((long)plVar17 + 0x24) == 0,(int)plVar17[4]);
              uVar3 = *(int *)((long)plVar17 + 0x24) - 1;
              if (uVar3 < 0x13) {
                uVar9 = *(undefined2 *)(&UNK_10e49aff4 + (ulong)uVar3 * 2);
              }
              else {
                uVar9 = 0;
              }
              uStack_110 = (long *)CONCAT26(uVar9,(undefined6)uStack_110);
              func_0x00010a18d4a4(plVar19 + -3,&plStack_128);
            }
            plStack_120 = (long *)(long)*(char *)((long)plVar6 + 0x17);
            plStack_128 = plVar6;
            if ((long)plStack_120 < 0) {
              plStack_128 = (long *)*plVar6;
              plStack_120 = (long *)plVar6[1];
            }
            plStack_118 = (long *)CONCAT44(plStack_118._4_4_,*(undefined4 *)((long)plVar6 + 0x1c));
            uStack_110 = (long *)plVar19[-3];
            pplStack_108 = (long **)(plVar19[-2] - (long)uStack_110 >> 5);
            pplVar7 = &plStack_128;
            plVar17 = extraout_x8;
            func_0x00010a18d56c(extraout_x8,pplVar7);
          }
          lVar5 = lVar5 + 0x80;
        } while( true );
      }
      lVar13 = plVar17[2] - lVar5 >> 3;
      uVar14 = lVar13 * -0x6276276276276276;
      if (uVar14 < uVar10 || uVar14 - uVar10 == 0) {
        uVar14 = uVar10;
      }
      if (0x13b13b13b13b13a < (ulong)(lVar13 * 0x4ec4ec4ec4ec4ec5)) {
        uVar14 = 0x276276276276276;
      }
      if (uVar14 == 0) {
        plVar6 = (long *)0x0;
      }
      else {
        plVar6 = plVar17;
        FUN_10a18d164();
      }
      pplVar7 = (long **)((long)plVar6 + ((long)param_2 - lVar5));
      lVar5 = param_5 * 0x68;
      pplVar8 = pplVar7;
      do {
        plVar19 = param_3[1];
        plVar18 = *param_3;
        plVar20 = param_3[2];
        plVar22 = param_3[5];
        plVar21 = param_3[4];
        pplVar8[3] = param_3[3];
        pplVar8[2] = plVar20;
        pplVar8[5] = plVar22;
        pplVar8[4] = plVar21;
        pplVar8[1] = plVar19;
        *pplVar8 = plVar18;
        plVar19 = param_3[7];
        plVar18 = param_3[6];
        plVar21 = param_3[9];
        plVar20 = param_3[8];
        plVar23 = param_3[0xb];
        plVar22 = param_3[10];
        pplVar8[0xc] = param_3[0xc];
        pplVar8[9] = plVar21;
        pplVar8[8] = plVar20;
        pplVar8[0xb] = plVar23;
        pplVar8[10] = plVar22;
        pplVar8[7] = plVar19;
        pplVar8[6] = plVar18;
        pplVar8 = pplVar8 + 0xd;
        param_3 = param_3 + 0xd;
        lVar5 = lVar5 + -0x68;
      } while (lVar5 != 0);
      _memcpy(pplVar7 + param_5 * 0xd,param_2,plVar17[1] - (long)param_2);
      pplVar8 = (long **)*plVar17;
      lVar5 = plVar17[1];
      plVar17[1] = (long)param_2;
      lVar16 = (long)pplVar7 - ((long)param_2 - (long)pplVar8);
      _memcpy(lVar16);
      lVar13 = *plVar17;
      *plVar17 = lVar16;
      plVar17[1] = (long)((long)(pplVar7 + param_5 * 0xd) + (lVar5 - (long)param_2));
      plVar17[2] = (long)(plVar6 + uVar14 * 0xd);
      if (lVar13 != 0) {
        __ZdlPv();
      }
    }
    else {
      lVar5 = (long)pplVar2 - (long)param_2;
      if ((lVar5 >> 3) * 0x4ec4ec4ec4ec4ec5 < param_5) {
        pplVar11 = pplVar2;
        pplVar15 = pplVar2;
        for (plVar6 = (long *)(lVar5 + (long)param_3); plVar6 != param_4; plVar6 = plVar6 + 0xd) {
          plVar19 = (long *)plVar6[1];
          plVar18 = (long *)*plVar6;
          plVar20 = (long *)plVar6[2];
          plVar22 = (long *)plVar6[5];
          plVar21 = (long *)plVar6[4];
          pplVar15[3] = (long *)plVar6[3];
          pplVar15[2] = plVar20;
          pplVar15[5] = plVar22;
          pplVar15[4] = plVar21;
          pplVar15[1] = plVar19;
          *pplVar15 = plVar18;
          plVar19 = (long *)plVar6[7];
          plVar18 = (long *)plVar6[6];
          plVar21 = (long *)plVar6[9];
          plVar20 = (long *)plVar6[8];
          plVar23 = (long *)plVar6[0xb];
          plVar22 = (long *)plVar6[10];
          pplVar15[0xc] = (long *)plVar6[0xc];
          pplVar15[9] = plVar21;
          pplVar15[8] = plVar20;
          pplVar15[0xb] = plVar23;
          pplVar15[10] = plVar22;
          pplVar15[7] = plVar19;
          pplVar15[6] = plVar18;
          pplVar15 = pplVar15 + 0xd;
          pplVar11 = pplVar11 + 0xd;
        }
        plVar17[1] = (long)pplVar11;
        if (lVar5 < 1) goto LAB_10a18d134;
        for (pplVar8 = pplVar11 + param_5 * -0xd; pplVar8 < pplVar2; pplVar8 = pplVar8 + 0xd) {
          plVar18 = pplVar8[1];
          plVar6 = *pplVar8;
          plVar19 = pplVar8[2];
          plVar21 = pplVar8[5];
          plVar20 = pplVar8[4];
          pplVar11[3] = pplVar8[3];
          pplVar11[2] = plVar19;
          pplVar11[5] = plVar21;
          pplVar11[4] = plVar20;
          pplVar11[1] = plVar18;
          *pplVar11 = plVar6;
          plVar18 = pplVar8[7];
          plVar6 = pplVar8[6];
          plVar20 = pplVar8[9];
          plVar19 = pplVar8[8];
          plVar22 = pplVar8[0xb];
          plVar21 = pplVar8[10];
          pplVar11[0xc] = pplVar8[0xc];
          pplVar11[9] = plVar20;
          pplVar11[8] = plVar19;
          pplVar11[0xb] = plVar22;
          pplVar11[10] = plVar21;
          pplVar11[7] = plVar18;
          pplVar11[6] = plVar6;
          pplVar11 = pplVar11 + 0xd;
        }
        plVar17[1] = (long)pplVar11;
        if (pplVar15 != param_2 + param_5 * 0xd) {
          _memmove(param_2 + param_5 * 0xd,param_2);
        }
      }
      else {
        pplVar15 = pplVar2;
        for (pplVar8 = pplVar2 + param_5 * -0xd; pplVar8 < pplVar2; pplVar8 = pplVar8 + 0xd) {
          plVar18 = pplVar8[1];
          plVar6 = *pplVar8;
          plVar19 = pplVar8[2];
          plVar21 = pplVar8[5];
          plVar20 = pplVar8[4];
          pplVar15[3] = pplVar8[3];
          pplVar15[2] = plVar19;
          pplVar15[5] = plVar21;
          pplVar15[4] = plVar20;
          pplVar15[1] = plVar18;
          *pplVar15 = plVar6;
          plVar18 = pplVar8[7];
          plVar6 = pplVar8[6];
          plVar20 = pplVar8[9];
          plVar19 = pplVar8[8];
          plVar22 = pplVar8[0xb];
          plVar21 = pplVar8[10];
          pplVar15[0xc] = pplVar8[0xc];
          pplVar15[9] = plVar20;
          pplVar15[8] = plVar19;
          pplVar15[0xb] = plVar22;
          pplVar15[10] = plVar21;
          pplVar15[7] = plVar18;
          pplVar15[6] = plVar6;
          pplVar15 = pplVar15 + 0xd;
        }
        plVar17[1] = (long)pplVar15;
        if (pplVar2 != param_2 + param_5 * 0xd) {
          _memmove(param_2 + param_5 * 0xd,param_2);
        }
        lVar5 = param_5 * 0x68;
      }
      _memmove(param_2,param_3,lVar5);
      pplVar8 = param_3;
    }
  }
LAB_10a18d134:
  auVar25._8_8_ = pplVar8;
  auVar25._0_8_ = pplVar7;
  return auVar25;
}



/* Entry: 10a18ce30; end: 10a18ce63;  */

undefined1  [16]
FUN_10a18ce30(long *param_1,long **param_2,long **param_3,long *param_4,long param_5)

{
  undefined8 *puVar1;
  long **pplVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long **pplVar7;
  long **pplVar8;
  undefined2 uVar9;
  ulong uVar10;
  long *extraout_x8;
  long **pplVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long **pplVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  long **pplStack_f8;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar5 = (long)param_2 << 3;
    __Znwm(lVar5);
    auVar23._8_8_ = param_2;
    auVar23._0_8_ = lVar5;
    return auVar23;
  }
  func_0x000109ffded8();
  pplVar8 = param_2;
  pplVar7 = param_2;
  if (0 < param_5) {
    pplVar2 = (long **)param_1[1];
    if ((param_1[2] - (long)pplVar2 >> 3) * 0x4ec4ec4ec4ec4ec5 < param_5) {
      lVar5 = *param_1;
      uVar10 = param_5 + ((long)pplVar2 - lVar5 >> 3) * 0x4ec4ec4ec4ec4ec5;
      if (0x276276276276276 < uVar10) {
        FUN_10a18d150();
        plVar6 = (long *)&UNK_10f6403f7;
        FUN_109ffde64();
        if (param_2 < (long **)0x276276276276277) {
          lVar5 = (long)param_2 * 0x68;
          __Znwm(lVar5);
          auVar25._8_8_ = param_2;
          auVar25._0_8_ = lVar5;
          return auVar25;
        }
        func_0x000109ffded8();
        *extraout_x8 = 0;
        extraout_x8[1] = 0;
        extraout_x8[2] = 0;
        lVar5 = *plVar6;
        lVar13 = plVar6[1];
        pplVar7 = param_2;
        do {
          if (lVar5 == lVar13) {
            auVar26._8_8_ = pplVar7;
            auVar26._0_8_ = plVar6;
            return auVar26;
          }
          plVar18 = *(long **)(lVar5 + 0x10);
          for (plVar17 = *(long **)(lVar5 + 8); plVar17 != plVar18; plVar17 = plVar17 + 8) {
            plVar6 = param_2[1];
            if (plVar6 < param_2[2]) {
              *plVar6 = 0;
              plVar6[1] = 0;
              plVar19 = plVar6 + 3;
              plVar6[2] = 0;
            }
            else {
              lVar16 = (long)plVar6 - (long)*param_2;
              uVar10 = (lVar16 >> 3) * -0x5555555555555555 + 1;
              if (0xaaaaaaaaaaaaaaa < uVar10) {
                FUN_10a18d664();
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10a18d3f0);
                (*pcVar4)();
              }
              lVar12 = (long)param_2[2] - (long)*param_2 >> 3;
              uVar14 = lVar12 * 0x5555555555555556;
              if (uVar14 < uVar10 || uVar14 - uVar10 == 0) {
                uVar14 = uVar10;
              }
              if (0x555555555555554 < (ulong)(lVar12 * -0x5555555555555555)) {
                uVar14 = 0xaaaaaaaaaaaaaaa;
              }
              pplVar7 = param_2;
              pplStack_f8 = param_2;
              FUN_10a18d678();
              puVar1 = (undefined8 *)((long)pplVar7 + lVar16);
              *puVar1 = 0;
              puVar1[1] = 0;
              puVar1[2] = 0;
              plVar19 = puVar1 + 3;
              plVar6 = (long *)((long)puVar1 - ((long)param_2[1] - (long)*param_2));
              _memcpy(plVar6);
              plStack_118 = *param_2;
              *param_2 = plVar6;
              param_2[1] = plVar19;
              uStack_100 = param_2[2];
              param_2[2] = (long *)(pplVar7 + uVar14 * 3);
              plStack_110 = plStack_118;
              plStack_108 = plStack_118;
              func_0x00010a18d6bc(&plStack_118);
            }
            param_2[1] = plVar19;
            FUN_10a18d418(plVar19 + -3,(plVar17[6] - plVar17[5] >> 3) * -0x3333333333333333);
            plVar20 = (long *)plVar17[6];
            for (plVar6 = (long *)plVar17[5]; plVar6 != plVar20; plVar6 = plVar6 + 5) {
              plStack_110 = (long *)(long)*(char *)((long)plVar6 + 0x17);
              plStack_118 = plVar6;
              if ((long)plStack_110 < 0) {
                plStack_110 = (long *)plVar6[1];
                plStack_118 = (long *)*plVar6;
              }
              plStack_108 = (long *)plVar6[3];
              uStack_100._0_5_ = CONCAT14(*(int *)((long)plVar6 + 0x24) == 0,(int)plVar6[4]);
              uVar3 = *(int *)((long)plVar6 + 0x24) - 1;
              if (uVar3 < 0x13) {
                uVar9 = *(undefined2 *)(&UNK_10e49aff4 + (ulong)uVar3 * 2);
              }
              else {
                uVar9 = 0;
              }
              uStack_100 = (long *)CONCAT26(uVar9,(undefined6)uStack_100);
              func_0x00010a18d4a4(plVar19 + -3,&plStack_118);
            }
            plStack_110 = (long *)(long)*(char *)((long)plVar17 + 0x17);
            plStack_118 = plVar17;
            if ((long)plStack_110 < 0) {
              plStack_118 = (long *)*plVar17;
              plStack_110 = (long *)plVar17[1];
            }
            plStack_108 = (long *)CONCAT44(plStack_108._4_4_,*(undefined4 *)((long)plVar17 + 0x1c));
            uStack_100 = (long *)plVar19[-3];
            pplStack_f8 = (long **)(plVar19[-2] - (long)uStack_100 >> 5);
            pplVar7 = &plStack_118;
            plVar6 = extraout_x8;
            func_0x00010a18d56c(extraout_x8,pplVar7);
          }
          lVar5 = lVar5 + 0x80;
        } while( true );
      }
      lVar13 = param_1[2] - lVar5 >> 3;
      uVar14 = lVar13 * -0x6276276276276276;
      if (uVar14 < uVar10 || uVar14 - uVar10 == 0) {
        uVar14 = uVar10;
      }
      if (0x13b13b13b13b13a < (ulong)(lVar13 * 0x4ec4ec4ec4ec4ec5)) {
        uVar14 = 0x276276276276276;
      }
      if (uVar14 == 0) {
        plVar6 = (long *)0x0;
      }
      else {
        plVar6 = param_1;
        FUN_10a18d164();
      }
      pplVar7 = (long **)((long)plVar6 + ((long)param_2 - lVar5));
      lVar5 = param_5 * 0x68;
      pplVar8 = pplVar7;
      do {
        plVar18 = param_3[1];
        plVar17 = *param_3;
        plVar19 = param_3[2];
        plVar21 = param_3[5];
        plVar20 = param_3[4];
        pplVar8[3] = param_3[3];
        pplVar8[2] = plVar19;
        pplVar8[5] = plVar21;
        pplVar8[4] = plVar20;
        pplVar8[1] = plVar18;
        *pplVar8 = plVar17;
        plVar18 = param_3[7];
        plVar17 = param_3[6];
        plVar20 = param_3[9];
        plVar19 = param_3[8];
        plVar22 = param_3[0xb];
        plVar21 = param_3[10];
        pplVar8[0xc] = param_3[0xc];
        pplVar8[9] = plVar20;
        pplVar8[8] = plVar19;
        pplVar8[0xb] = plVar22;
        pplVar8[10] = plVar21;
        pplVar8[7] = plVar18;
        pplVar8[6] = plVar17;
        pplVar8 = pplVar8 + 0xd;
        param_3 = param_3 + 0xd;
        lVar5 = lVar5 + -0x68;
      } while (lVar5 != 0);
      _memcpy(pplVar7 + param_5 * 0xd,param_2,param_1[1] - (long)param_2);
      pplVar8 = (long **)*param_1;
      lVar5 = param_1[1];
      param_1[1] = (long)param_2;
      lVar16 = (long)pplVar7 - ((long)param_2 - (long)pplVar8);
      _memcpy(lVar16);
      lVar13 = *param_1;
      *param_1 = lVar16;
      param_1[1] = (long)(pplVar7 + param_5 * 0xd) + (lVar5 - (long)param_2);
      param_1[2] = (long)(plVar6 + uVar14 * 0xd);
      if (lVar13 != 0) {
        __ZdlPv();
      }
    }
    else {
      lVar5 = (long)pplVar2 - (long)param_2;
      if ((lVar5 >> 3) * 0x4ec4ec4ec4ec4ec5 < param_5) {
        pplVar11 = pplVar2;
        pplVar15 = pplVar2;
        for (plVar6 = (long *)(lVar5 + (long)param_3); plVar6 != param_4; plVar6 = plVar6 + 0xd) {
          plVar18 = (long *)plVar6[1];
          plVar17 = (long *)*plVar6;
          plVar19 = (long *)plVar6[2];
          plVar21 = (long *)plVar6[5];
          plVar20 = (long *)plVar6[4];
          pplVar15[3] = (long *)plVar6[3];
          pplVar15[2] = plVar19;
          pplVar15[5] = plVar21;
          pplVar15[4] = plVar20;
          pplVar15[1] = plVar18;
          *pplVar15 = plVar17;
          plVar18 = (long *)plVar6[7];
          plVar17 = (long *)plVar6[6];
          plVar20 = (long *)plVar6[9];
          plVar19 = (long *)plVar6[8];
          plVar22 = (long *)plVar6[0xb];
          plVar21 = (long *)plVar6[10];
          pplVar15[0xc] = (long *)plVar6[0xc];
          pplVar15[9] = plVar20;
          pplVar15[8] = plVar19;
          pplVar15[0xb] = plVar22;
          pplVar15[10] = plVar21;
          pplVar15[7] = plVar18;
          pplVar15[6] = plVar17;
          pplVar15 = pplVar15 + 0xd;
          pplVar11 = pplVar11 + 0xd;
        }
        param_1[1] = (long)pplVar11;
        if (lVar5 < 1) goto LAB_10a18d134;
        for (pplVar8 = pplVar11 + param_5 * -0xd; pplVar8 < pplVar2; pplVar8 = pplVar8 + 0xd) {
          plVar17 = pplVar8[1];
          plVar6 = *pplVar8;
          plVar18 = pplVar8[2];
          plVar20 = pplVar8[5];
          plVar19 = pplVar8[4];
          pplVar11[3] = pplVar8[3];
          pplVar11[2] = plVar18;
          pplVar11[5] = plVar20;
          pplVar11[4] = plVar19;
          pplVar11[1] = plVar17;
          *pplVar11 = plVar6;
          plVar17 = pplVar8[7];
          plVar6 = pplVar8[6];
          plVar19 = pplVar8[9];
          plVar18 = pplVar8[8];
          plVar21 = pplVar8[0xb];
          plVar20 = pplVar8[10];
          pplVar11[0xc] = pplVar8[0xc];
          pplVar11[9] = plVar19;
          pplVar11[8] = plVar18;
          pplVar11[0xb] = plVar21;
          pplVar11[10] = plVar20;
          pplVar11[7] = plVar17;
          pplVar11[6] = plVar6;
          pplVar11 = pplVar11 + 0xd;
        }
        param_1[1] = (long)pplVar11;
        if (pplVar15 != param_2 + param_5 * 0xd) {
          _memmove(param_2 + param_5 * 0xd,param_2);
        }
      }
      else {
        pplVar15 = pplVar2;
        for (pplVar8 = pplVar2 + param_5 * -0xd; pplVar8 < pplVar2; pplVar8 = pplVar8 + 0xd) {
          plVar17 = pplVar8[1];
          plVar6 = *pplVar8;
          plVar18 = pplVar8[2];
          plVar20 = pplVar8[5];
          plVar19 = pplVar8[4];
          pplVar15[3] = pplVar8[3];
          pplVar15[2] = plVar18;
          pplVar15[5] = plVar20;
          pplVar15[4] = plVar19;
          pplVar15[1] = plVar17;
          *pplVar15 = plVar6;
          plVar17 = pplVar8[7];
          plVar6 = pplVar8[6];
          plVar19 = pplVar8[9];
          plVar18 = pplVar8[8];
          plVar21 = pplVar8[0xb];
          plVar20 = pplVar8[10];
          pplVar15[0xc] = pplVar8[0xc];
          pplVar15[9] = plVar19;
          pplVar15[8] = plVar18;
          pplVar15[0xb] = plVar21;
          pplVar15[10] = plVar20;
          pplVar15[7] = plVar17;
          pplVar15[6] = plVar6;
          pplVar15 = pplVar15 + 0xd;
        }
        param_1[1] = (long)pplVar15;
        if (pplVar2 != param_2 + param_5 * 0xd) {
          _memmove(param_2 + param_5 * 0xd,param_2);
        }
        lVar5 = param_5 * 0x68;
      }
      _memmove(param_2,param_3,lVar5);
      pplVar8 = param_3;
    }
  }
LAB_10a18d134:
  auVar24._8_8_ = pplVar8;
  auVar24._0_8_ = pplVar7;
  return auVar24;
}



/* Entry: 10a18ce64; end: 10a18d14f;  */

undefined1  [16]
FUN_10a18ce64(long *param_1,long **param_2,long **param_3,long *param_4,long param_5)

{
  undefined8 *puVar1;
  long **pplVar2;
  uint uVar3;
  code *pcVar4;
  long *plVar5;
  long **pplVar6;
  long **pplVar7;
  undefined2 uVar8;
  ulong uVar9;
  long *extraout_x8;
  long **pplVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long **pplVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  long **pplStack_d8;
  
  pplVar7 = param_2;
  pplVar6 = param_2;
  if (0 < param_5) {
    pplVar2 = (long **)param_1[1];
    if ((param_1[2] - (long)pplVar2 >> 3) * 0x4ec4ec4ec4ec4ec5 < param_5) {
      lVar15 = *param_1;
      uVar9 = param_5 + ((long)pplVar2 - lVar15 >> 3) * 0x4ec4ec4ec4ec4ec5;
      if (0x276276276276276 < uVar9) {
        FUN_10a18d150();
        plVar5 = (long *)&UNK_10f6403f7;
        FUN_109ffde64();
        if (param_2 < (long **)0x276276276276277) {
          lVar15 = (long)param_2 * 0x68;
          __Znwm(lVar15);
          auVar24._8_8_ = param_2;
          auVar24._0_8_ = lVar15;
          return auVar24;
        }
        func_0x000109ffded8();
        *extraout_x8 = 0;
        extraout_x8[1] = 0;
        extraout_x8[2] = 0;
        lVar15 = *plVar5;
        lVar12 = plVar5[1];
        pplVar6 = param_2;
        do {
          if (lVar15 == lVar12) {
            auVar25._8_8_ = pplVar6;
            auVar25._0_8_ = plVar5;
            return auVar25;
          }
          plVar18 = *(long **)(lVar15 + 0x10);
          for (plVar17 = *(long **)(lVar15 + 8); plVar17 != plVar18; plVar17 = plVar17 + 8) {
            plVar5 = param_2[1];
            if (plVar5 < param_2[2]) {
              *plVar5 = 0;
              plVar5[1] = 0;
              plVar19 = plVar5 + 3;
              plVar5[2] = 0;
            }
            else {
              lVar16 = (long)plVar5 - (long)*param_2;
              uVar9 = (lVar16 >> 3) * -0x5555555555555555 + 1;
              if (0xaaaaaaaaaaaaaaa < uVar9) {
                FUN_10a18d664();
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10a18d3f0);
                (*pcVar4)();
              }
              lVar11 = (long)param_2[2] - (long)*param_2 >> 3;
              uVar13 = lVar11 * 0x5555555555555556;
              if (uVar13 < uVar9 || uVar13 - uVar9 == 0) {
                uVar13 = uVar9;
              }
              if (0x555555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
                uVar13 = 0xaaaaaaaaaaaaaaa;
              }
              pplVar6 = param_2;
              pplStack_d8 = param_2;
              FUN_10a18d678();
              puVar1 = (undefined8 *)((long)pplVar6 + lVar16);
              *puVar1 = 0;
              puVar1[1] = 0;
              puVar1[2] = 0;
              plVar19 = puVar1 + 3;
              plVar5 = (long *)((long)puVar1 - ((long)param_2[1] - (long)*param_2));
              _memcpy(plVar5);
              plStack_f8 = *param_2;
              *param_2 = plVar5;
              param_2[1] = plVar19;
              uStack_e0 = param_2[2];
              param_2[2] = (long *)(pplVar6 + uVar13 * 3);
              plStack_f0 = plStack_f8;
              plStack_e8 = plStack_f8;
              func_0x00010a18d6bc(&plStack_f8);
            }
            param_2[1] = plVar19;
            FUN_10a18d418(plVar19 + -3,(plVar17[6] - plVar17[5] >> 3) * -0x3333333333333333);
            plVar20 = (long *)plVar17[6];
            for (plVar5 = (long *)plVar17[5]; plVar5 != plVar20; plVar5 = plVar5 + 5) {
              plStack_f0 = (long *)(long)*(char *)((long)plVar5 + 0x17);
              plStack_f8 = plVar5;
              if ((long)plStack_f0 < 0) {
                plStack_f0 = (long *)plVar5[1];
                plStack_f8 = (long *)*plVar5;
              }
              plStack_e8 = (long *)plVar5[3];
              uStack_e0._0_5_ = CONCAT14(*(int *)((long)plVar5 + 0x24) == 0,(int)plVar5[4]);
              uVar3 = *(int *)((long)plVar5 + 0x24) - 1;
              if (uVar3 < 0x13) {
                uVar8 = *(undefined2 *)(&UNK_10e49aff4 + (ulong)uVar3 * 2);
              }
              else {
                uVar8 = 0;
              }
              uStack_e0 = (long *)CONCAT26(uVar8,(undefined6)uStack_e0);
              func_0x00010a18d4a4(plVar19 + -3,&plStack_f8);
            }
            plStack_f0 = (long *)(long)*(char *)((long)plVar17 + 0x17);
            plStack_f8 = plVar17;
            if ((long)plStack_f0 < 0) {
              plStack_f8 = (long *)*plVar17;
              plStack_f0 = (long *)plVar17[1];
            }
            plStack_e8 = (long *)CONCAT44(plStack_e8._4_4_,*(undefined4 *)((long)plVar17 + 0x1c));
            uStack_e0 = (long *)plVar19[-3];
            pplStack_d8 = (long **)(plVar19[-2] - (long)uStack_e0 >> 5);
            pplVar6 = &plStack_f8;
            plVar5 = extraout_x8;
            func_0x00010a18d56c(extraout_x8,pplVar6);
          }
          lVar15 = lVar15 + 0x80;
        } while( true );
      }
      lVar12 = param_1[2] - lVar15 >> 3;
      uVar13 = lVar12 * -0x6276276276276276;
      if (uVar13 < uVar9 || uVar13 - uVar9 == 0) {
        uVar13 = uVar9;
      }
      if (0x13b13b13b13b13a < (ulong)(lVar12 * 0x4ec4ec4ec4ec4ec5)) {
        uVar13 = 0x276276276276276;
      }
      if (uVar13 == 0) {
        plVar5 = (long *)0x0;
      }
      else {
        plVar5 = param_1;
        FUN_10a18d164();
      }
      pplVar6 = (long **)((long)plVar5 + ((long)param_2 - lVar15));
      lVar15 = param_5 * 0x68;
      pplVar7 = pplVar6;
      do {
        plVar18 = param_3[1];
        plVar17 = *param_3;
        plVar19 = param_3[2];
        plVar21 = param_3[5];
        plVar20 = param_3[4];
        pplVar7[3] = param_3[3];
        pplVar7[2] = plVar19;
        pplVar7[5] = plVar21;
        pplVar7[4] = plVar20;
        pplVar7[1] = plVar18;
        *pplVar7 = plVar17;
        plVar18 = param_3[7];
        plVar17 = param_3[6];
        plVar20 = param_3[9];
        plVar19 = param_3[8];
        plVar22 = param_3[0xb];
        plVar21 = param_3[10];
        pplVar7[0xc] = param_3[0xc];
        pplVar7[9] = plVar20;
        pplVar7[8] = plVar19;
        pplVar7[0xb] = plVar22;
        pplVar7[10] = plVar21;
        pplVar7[7] = plVar18;
        pplVar7[6] = plVar17;
        pplVar7 = pplVar7 + 0xd;
        param_3 = param_3 + 0xd;
        lVar15 = lVar15 + -0x68;
      } while (lVar15 != 0);
      _memcpy(pplVar6 + param_5 * 0xd,param_2,param_1[1] - (long)param_2);
      pplVar7 = (long **)*param_1;
      lVar15 = param_1[1];
      param_1[1] = (long)param_2;
      lVar16 = (long)pplVar6 - ((long)param_2 - (long)pplVar7);
      _memcpy(lVar16);
      lVar12 = *param_1;
      *param_1 = lVar16;
      param_1[1] = (long)(pplVar6 + param_5 * 0xd) + (lVar15 - (long)param_2);
      param_1[2] = (long)(plVar5 + uVar13 * 0xd);
      if (lVar12 != 0) {
        __ZdlPv();
      }
    }
    else {
      lVar15 = (long)pplVar2 - (long)param_2;
      if ((lVar15 >> 3) * 0x4ec4ec4ec4ec4ec5 < param_5) {
        pplVar10 = pplVar2;
        pplVar14 = pplVar2;
        for (plVar5 = (long *)(lVar15 + (long)param_3); plVar5 != param_4; plVar5 = plVar5 + 0xd) {
          plVar18 = (long *)plVar5[1];
          plVar17 = (long *)*plVar5;
          plVar19 = (long *)plVar5[2];
          plVar21 = (long *)plVar5[5];
          plVar20 = (long *)plVar5[4];
          pplVar14[3] = (long *)plVar5[3];
          pplVar14[2] = plVar19;
          pplVar14[5] = plVar21;
          pplVar14[4] = plVar20;
          pplVar14[1] = plVar18;
          *pplVar14 = plVar17;
          plVar18 = (long *)plVar5[7];
          plVar17 = (long *)plVar5[6];
          plVar20 = (long *)plVar5[9];
          plVar19 = (long *)plVar5[8];
          plVar22 = (long *)plVar5[0xb];
          plVar21 = (long *)plVar5[10];
          pplVar14[0xc] = (long *)plVar5[0xc];
          pplVar14[9] = plVar20;
          pplVar14[8] = plVar19;
          pplVar14[0xb] = plVar22;
          pplVar14[10] = plVar21;
          pplVar14[7] = plVar18;
          pplVar14[6] = plVar17;
          pplVar14 = pplVar14 + 0xd;
          pplVar10 = pplVar10 + 0xd;
        }
        param_1[1] = (long)pplVar10;
        if (lVar15 < 1) goto LAB_10a18d134;
        for (pplVar7 = pplVar10 + param_5 * -0xd; pplVar7 < pplVar2; pplVar7 = pplVar7 + 0xd) {
          plVar17 = pplVar7[1];
          plVar5 = *pplVar7;
          plVar18 = pplVar7[2];
          plVar20 = pplVar7[5];
          plVar19 = pplVar7[4];
          pplVar10[3] = pplVar7[3];
          pplVar10[2] = plVar18;
          pplVar10[5] = plVar20;
          pplVar10[4] = plVar19;
          pplVar10[1] = plVar17;
          *pplVar10 = plVar5;
          plVar17 = pplVar7[7];
          plVar5 = pplVar7[6];
          plVar19 = pplVar7[9];
          plVar18 = pplVar7[8];
          plVar21 = pplVar7[0xb];
          plVar20 = pplVar7[10];
          pplVar10[0xc] = pplVar7[0xc];
          pplVar10[9] = plVar19;
          pplVar10[8] = plVar18;
          pplVar10[0xb] = plVar21;
          pplVar10[10] = plVar20;
          pplVar10[7] = plVar17;
          pplVar10[6] = plVar5;
          pplVar10 = pplVar10 + 0xd;
        }
        param_1[1] = (long)pplVar10;
        if (pplVar14 != param_2 + param_5 * 0xd) {
          _memmove(param_2 + param_5 * 0xd,param_2);
        }
      }
      else {
        pplVar14 = pplVar2;
        for (pplVar7 = pplVar2 + param_5 * -0xd; pplVar7 < pplVar2; pplVar7 = pplVar7 + 0xd) {
          plVar17 = pplVar7[1];
          plVar5 = *pplVar7;
          plVar18 = pplVar7[2];
          plVar20 = pplVar7[5];
          plVar19 = pplVar7[4];
          pplVar14[3] = pplVar7[3];
          pplVar14[2] = plVar18;
          pplVar14[5] = plVar20;
          pplVar14[4] = plVar19;
          pplVar14[1] = plVar17;
          *pplVar14 = plVar5;
          plVar17 = pplVar7[7];
          plVar5 = pplVar7[6];
          plVar19 = pplVar7[9];
          plVar18 = pplVar7[8];
          plVar21 = pplVar7[0xb];
          plVar20 = pplVar7[10];
          pplVar14[0xc] = pplVar7[0xc];
          pplVar14[9] = plVar19;
          pplVar14[8] = plVar18;
          pplVar14[0xb] = plVar21;
          pplVar14[10] = plVar20;
          pplVar14[7] = plVar17;
          pplVar14[6] = plVar5;
          pplVar14 = pplVar14 + 0xd;
        }
        param_1[1] = (long)pplVar14;
        if (pplVar2 != param_2 + param_5 * 0xd) {
          _memmove(param_2 + param_5 * 0xd,param_2);
        }
        lVar15 = param_5 * 0x68;
      }
      _memmove(param_2,param_3,lVar15);
      pplVar7 = param_3;
    }
  }
LAB_10a18d134:
  auVar23._8_8_ = pplVar7;
  auVar23._0_8_ = pplVar6;
  return auVar23;
}



/* Entry: 10a18d150; end: 10a18d163;  */

void FUN_10a18d150(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  undefined2 uVar10;
  undefined8 *extraout_x8;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  
  plVar8 = (long *)&UNK_10f6403f7;
  FUN_109ffde64();
  if (param_2 < (long *)0x276276276276277) {
    __Znwm((long)param_2 * 0x68);
    return;
  }
  func_0x000109ffded8();
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  lVar1 = *plVar8;
  lVar3 = plVar8[1];
  do {
    if (lVar1 == lVar3) {
      return;
    }
    plVar4 = *(long **)(lVar1 + 0x10);
    for (plVar8 = *(long **)(lVar1 + 8); plVar8 != plVar4; plVar8 = plVar8 + 8) {
      puVar2 = (undefined8 *)param_2[1];
      if (puVar2 < (undefined8 *)param_2[2]) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar15 = puVar2 + 3;
        puVar2[2] = 0;
      }
      else {
        lVar14 = (long)puVar2 - *param_2;
        uVar11 = (lVar14 >> 3) * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar11) {
          FUN_10a18d664();
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10a18d3f0);
          (*pcVar7)();
        }
        lVar12 = param_2[2] - *param_2 >> 3;
        uVar13 = lVar12 * 0x5555555555555556;
        if (uVar13 < uVar11 || uVar13 - uVar11 == 0) {
          uVar13 = uVar11;
        }
        if (0x555555555555554 < (ulong)(lVar12 * -0x5555555555555555)) {
          uVar13 = 0xaaaaaaaaaaaaaaa;
        }
        plVar9 = param_2;
        plStack_98 = param_2;
        FUN_10a18d678();
        puVar2 = (undefined8 *)((long)plVar9 + lVar14);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar15 = puVar2 + 3;
        lVar14 = (long)puVar2 - (param_2[1] - *param_2);
        _memcpy(lVar14);
        plStack_b8 = (long *)*param_2;
        *param_2 = lVar14;
        param_2[1] = (long)puVar15;
        uStack_a0 = param_2[2];
        param_2[2] = (long)(plVar9 + uVar13 * 3);
        plStack_b0 = plStack_b8;
        plStack_a8 = plStack_b8;
        func_0x00010a18d6bc(&plStack_b8);
      }
      param_2[1] = (long)puVar15;
      FUN_10a18d418(puVar15 + -3,(plVar8[6] - plVar8[5] >> 3) * -0x3333333333333333);
      plVar5 = (long *)plVar8[6];
      for (plVar9 = (long *)plVar8[5]; plVar9 != plVar5; plVar9 = plVar9 + 5) {
        plStack_b0 = (long *)(long)*(char *)((long)plVar9 + 0x17);
        plStack_b8 = plVar9;
        if ((long)plStack_b0 < 0) {
          plStack_b0 = (long *)plVar9[1];
          plStack_b8 = (long *)*plVar9;
        }
        plStack_a8 = (long *)plVar9[3];
        uStack_a0._0_5_ = CONCAT14(*(int *)((long)plVar9 + 0x24) == 0,(int)plVar9[4]);
        uVar6 = *(int *)((long)plVar9 + 0x24) - 1;
        if (uVar6 < 0x13) {
          uVar10 = *(undefined2 *)(&UNK_10e49aff4 + (ulong)uVar6 * 2);
        }
        else {
          uVar10 = 0;
        }
        uStack_a0 = CONCAT26(uVar10,(undefined6)uStack_a0);
        func_0x00010a18d4a4(puVar15 + -3,&plStack_b8);
      }
      plStack_b0 = (long *)(long)*(char *)((long)plVar8 + 0x17);
      plStack_b8 = plVar8;
      if ((long)plStack_b0 < 0) {
        plStack_b8 = (long *)*plVar8;
        plStack_b0 = (long *)plVar8[1];
      }
      plStack_a8 = (long *)CONCAT44(plStack_a8._4_4_,*(undefined4 *)((long)plVar8 + 0x1c));
      uStack_a0 = puVar15[-3];
      plStack_98 = (long *)(puVar15[-2] - uStack_a0 >> 5);
      func_0x00010a18d56c(extraout_x8,&plStack_b8);
    }
    lVar1 = lVar1 + 0x80;
  } while( true );
}



/* Entry: 10a18d164; end: 10a18d1ab;  */

void FUN_10a18d164(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  code *pcVar7;
  long *plVar8;
  undefined2 uVar9;
  undefined8 *extraout_x8;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  
  if (param_2 < (long *)0x276276276276277) {
    __Znwm((long)param_2 * 0x68);
    return;
  }
  func_0x000109ffded8();
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  lVar1 = *param_1;
  lVar3 = param_1[1];
  do {
    if (lVar1 == lVar3) {
      return;
    }
    plVar4 = *(long **)(lVar1 + 0x10);
    for (plVar15 = *(long **)(lVar1 + 8); plVar15 != plVar4; plVar15 = plVar15 + 8) {
      puVar2 = (undefined8 *)param_2[1];
      if (puVar2 < (undefined8 *)param_2[2]) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar14 = puVar2 + 3;
        puVar2[2] = 0;
      }
      else {
        lVar13 = (long)puVar2 - *param_2;
        uVar10 = (lVar13 >> 3) * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar10) {
          FUN_10a18d664();
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10a18d3f0);
          (*pcVar7)();
        }
        lVar11 = param_2[2] - *param_2 >> 3;
        uVar12 = lVar11 * 0x5555555555555556;
        if (uVar12 < uVar10 || uVar12 - uVar10 == 0) {
          uVar12 = uVar10;
        }
        if (0x555555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
          uVar12 = 0xaaaaaaaaaaaaaaa;
        }
        plVar8 = param_2;
        plStack_88 = param_2;
        FUN_10a18d678();
        puVar2 = (undefined8 *)((long)plVar8 + lVar13);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar14 = puVar2 + 3;
        lVar13 = (long)puVar2 - (param_2[1] - *param_2);
        _memcpy(lVar13);
        plStack_a8 = (long *)*param_2;
        *param_2 = lVar13;
        param_2[1] = (long)puVar14;
        uStack_90 = param_2[2];
        param_2[2] = (long)(plVar8 + uVar12 * 3);
        plStack_a0 = plStack_a8;
        plStack_98 = plStack_a8;
        func_0x00010a18d6bc(&plStack_a8);
      }
      param_2[1] = (long)puVar14;
      FUN_10a18d418(puVar14 + -3,(plVar15[6] - plVar15[5] >> 3) * -0x3333333333333333);
      plVar5 = (long *)plVar15[6];
      for (plVar8 = (long *)plVar15[5]; plVar8 != plVar5; plVar8 = plVar8 + 5) {
        plStack_a0 = (long *)(long)*(char *)((long)plVar8 + 0x17);
        plStack_a8 = plVar8;
        if ((long)plStack_a0 < 0) {
          plStack_a0 = (long *)plVar8[1];
          plStack_a8 = (long *)*plVar8;
        }
        plStack_98 = (long *)plVar8[3];
        uStack_90._0_5_ = CONCAT14(*(int *)((long)plVar8 + 0x24) == 0,(int)plVar8[4]);
        uVar6 = *(int *)((long)plVar8 + 0x24) - 1;
        if (uVar6 < 0x13) {
          uVar9 = *(undefined2 *)(&UNK_10e49aff4 + (ulong)uVar6 * 2);
        }
        else {
          uVar9 = 0;
        }
        uStack_90 = CONCAT26(uVar9,(undefined6)uStack_90);
        func_0x00010a18d4a4(puVar14 + -3,&plStack_a8);
      }
      plStack_a0 = (long *)(long)*(char *)((long)plVar15 + 0x17);
      plStack_a8 = plVar15;
      if ((long)plStack_a0 < 0) {
        plStack_a8 = (long *)*plVar15;
        plStack_a0 = (long *)plVar15[1];
      }
      plStack_98 = (long *)CONCAT44(plStack_98._4_4_,*(undefined4 *)((long)plVar15 + 0x1c));
      uStack_90 = puVar14[-3];
      plStack_88 = (long *)(puVar14[-2] - uStack_90 >> 5);
      func_0x00010a18d56c(extraout_x8,&plStack_a8);
    }
    lVar1 = lVar1 + 0x80;
  } while( true );
}



/* Entry: 10a18d1ac; end: 10a18d417;  */

void FUN_10a18d1ac(undefined8 *param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  code *pcVar7;
  long *plVar8;
  undefined2 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = *param_2;
  lVar3 = param_2[1];
  do {
    if (lVar1 == lVar3) {
      return;
    }
    plVar4 = *(long **)(lVar1 + 0x10);
    for (plVar15 = *(long **)(lVar1 + 8); plVar15 != plVar4; plVar15 = plVar15 + 8) {
      puVar2 = (undefined8 *)param_3[1];
      if (puVar2 < (undefined8 *)param_3[2]) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar14 = puVar2 + 3;
        puVar2[2] = 0;
      }
      else {
        lVar13 = (long)puVar2 - *param_3;
        uVar10 = (lVar13 >> 3) * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar10) {
          FUN_10a18d664();
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10a18d3f0);
          (*pcVar7)();
        }
        lVar11 = param_3[2] - *param_3 >> 3;
        uVar12 = lVar11 * 0x5555555555555556;
        if (uVar12 < uVar10 || uVar12 - uVar10 == 0) {
          uVar12 = uVar10;
        }
        if (0x555555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
          uVar12 = 0xaaaaaaaaaaaaaaa;
        }
        plVar8 = param_3;
        plStack_68 = param_3;
        FUN_10a18d678();
        puVar2 = (undefined8 *)((long)plVar8 + lVar13);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar14 = puVar2 + 3;
        lVar13 = (long)puVar2 - (param_3[1] - *param_3);
        _memcpy(lVar13);
        plStack_88 = (long *)*param_3;
        *param_3 = lVar13;
        param_3[1] = (long)puVar14;
        uStack_70 = param_3[2];
        param_3[2] = (long)(plVar8 + uVar12 * 3);
        plStack_80 = plStack_88;
        plStack_78 = plStack_88;
        func_0x00010a18d6bc(&plStack_88);
      }
      param_3[1] = (long)puVar14;
      FUN_10a18d418(puVar14 + -3,(plVar15[6] - plVar15[5] >> 3) * -0x3333333333333333);
      plVar5 = (long *)plVar15[6];
      for (plVar8 = (long *)plVar15[5]; plVar8 != plVar5; plVar8 = plVar8 + 5) {
        plStack_80 = (long *)(long)*(char *)((long)plVar8 + 0x17);
        plStack_88 = plVar8;
        if ((long)plStack_80 < 0) {
          plStack_80 = (long *)plVar8[1];
          plStack_88 = (long *)*plVar8;
        }
        plStack_78 = (long *)plVar8[3];
        uStack_70._0_5_ = CONCAT14(*(int *)((long)plVar8 + 0x24) == 0,(int)plVar8[4]);
        uVar6 = *(int *)((long)plVar8 + 0x24) - 1;
        if (uVar6 < 0x13) {
          uVar9 = *(undefined2 *)(&UNK_10e49aff4 + (ulong)uVar6 * 2);
        }
        else {
          uVar9 = 0;
        }
        uStack_70 = CONCAT26(uVar9,(undefined6)uStack_70);
        func_0x00010a18d4a4(puVar14 + -3,&plStack_88);
      }
      plStack_80 = (long *)(long)*(char *)((long)plVar15 + 0x17);
      plStack_88 = plVar15;
      if ((long)plStack_80 < 0) {
        plStack_88 = (long *)*plVar15;
        plStack_80 = (long *)plVar15[1];
      }
      plStack_78 = (long *)CONCAT44(plStack_78._4_4_,*(undefined4 *)((long)plVar15 + 0x1c));
      uStack_70 = puVar14[-3];
      plStack_68 = (long *)(puVar14[-2] - uStack_70 >> 5);
      func_0x00010a18d56c(param_1,&plStack_88);
    }
    lVar1 = lVar1 + 0x80;
  } while( true );
}



/* Entry: 10a18d418; end: 10a18d663;  */

undefined1  [16] FUN_10a18d418(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  uVar5 = *param_1;
  if ((undefined8 *)((long)(param_1[2] - uVar5) >> 5) < param_2) {
    if ((ulong)param_2 >> 0x3b != 0) {
      FUN_10a18d748();
      puVar10 = (undefined8 *)param_1[1];
      if (puVar10 < (undefined8 *)param_1[2]) {
        uVar11 = *param_2;
        uVar13 = param_2[3];
        uVar12 = param_2[2];
        puVar10[1] = param_2[1];
        *puVar10 = uVar11;
        puVar10[3] = uVar13;
        puVar10[2] = uVar12;
        puVar10 = puVar10 + 4;
        puVar2 = param_1;
      }
      else {
        lVar9 = (long)puVar10 - *param_1;
        uVar5 = (lVar9 >> 5) + 1;
        if (uVar5 >> 0x3b != 0) {
          FUN_10a18d748();
          puVar10 = (undefined8 *)param_1[1];
          if (puVar10 < (undefined8 *)param_1[2]) {
            uVar12 = param_2[1];
            uVar11 = *param_2;
            uVar14 = param_2[3];
            uVar13 = param_2[2];
            puVar10[4] = param_2[4];
            puVar10[1] = uVar12;
            *puVar10 = uVar11;
            puVar10[3] = uVar14;
            puVar10[2] = uVar13;
            puVar10 = puVar10 + 5;
            puVar2 = param_1;
          }
          else {
            lVar9 = (long)puVar10 - *param_1;
            uVar5 = (lVar9 >> 3) * -0x3333333333333333 + 1;
            if (0x666666666666666 < uVar5) {
              FUN_10a18d790();
              plVar4 = (long *)&UNK_10f6403f7;
              FUN_109ffde64();
              if (param_2 < (undefined8 *)0xaaaaaaaaaaaaaab) {
                lVar9 = (long)param_2 * 0x18;
                __Znwm(lVar9);
                auVar18._8_8_ = param_2;
                auVar18._0_8_ = lVar9;
                return auVar18;
              }
              func_0x000109ffded8();
              lVar9 = plVar4[1];
              func_0x00010a18d6f0();
              if (*plVar4 != 0) {
                __ZdlPv();
              }
              auVar19._8_8_ = lVar9;
              auVar19._0_8_ = plVar4;
              return auVar19;
            }
            lVar7 = (long)((long)param_1[2] - *param_1) >> 3;
            uVar6 = lVar7 * -0x6666666666666666;
            if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
              uVar6 = uVar5;
            }
            if (0x333333333333332 < (ulong)(lVar7 * -0x3333333333333333)) {
              uVar6 = 0x666666666666666;
            }
            puVar3 = param_1;
            FUN_10a18d7a4();
            puVar1 = (undefined8 *)((long)puVar3 + lVar9);
            uVar12 = param_2[1];
            uVar11 = *param_2;
            uVar14 = param_2[3];
            uVar13 = param_2[2];
            puVar1[4] = param_2[4];
            puVar1[1] = uVar12;
            *puVar1 = uVar11;
            puVar1[3] = uVar14;
            puVar1[2] = uVar13;
            puVar10 = puVar1 + 5;
            param_2 = (undefined8 *)*param_1;
            uVar5 = (long)puVar1 - (param_1[1] - (long)param_2);
            _memcpy(uVar5);
            puVar2 = (ulong *)*param_1;
            *param_1 = uVar5;
            param_1[1] = (ulong)puVar10;
            param_1[2] = (ulong)(puVar3 + uVar6 * 5);
            if (puVar2 != (ulong *)0x0) {
              __ZdlPv();
            }
          }
          param_1[1] = (ulong)puVar10;
          auVar17._8_8_ = param_2;
          auVar17._0_8_ = puVar2;
          return auVar17;
        }
        uVar8 = (long)param_1[2] - *param_1;
        uVar6 = (long)uVar8 >> 4;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffdf < uVar8) {
          uVar6 = 0x7ffffffffffffff;
        }
        puVar3 = param_1;
        FUN_10a18d75c();
        puVar1 = (undefined8 *)((long)puVar3 + lVar9);
        uVar11 = *param_2;
        uVar13 = param_2[3];
        uVar12 = param_2[2];
        puVar1[1] = param_2[1];
        *puVar1 = uVar11;
        puVar1[3] = uVar13;
        puVar1[2] = uVar12;
        puVar10 = puVar1 + 4;
        param_2 = (undefined8 *)*param_1;
        uVar5 = (long)puVar1 - (param_1[1] - (long)param_2);
        _memcpy(uVar5);
        puVar2 = (ulong *)*param_1;
        *param_1 = uVar5;
        param_1[1] = (ulong)puVar10;
        param_1[2] = (ulong)(puVar3 + uVar6 * 4);
        if (puVar2 != (ulong *)0x0) {
          __ZdlPv();
        }
      }
      param_1[1] = (ulong)puVar10;
      auVar16._8_8_ = param_2;
      auVar16._0_8_ = puVar2;
      return auVar16;
    }
    uVar6 = param_1[1];
    puVar3 = param_1;
    FUN_10a18d75c();
    uVar5 = (long)puVar3 + (uVar6 - uVar5);
    lVar9 = (long)param_2 * 4;
    param_2 = (undefined8 *)*param_1;
    uVar8 = uVar5 - (param_1[1] - (long)param_2);
    _memcpy(uVar8);
    uVar6 = *param_1;
    *param_1 = uVar8;
    param_1[1] = uVar5;
    param_1[2] = (ulong)(puVar3 + lVar9);
    param_1 = (ulong *)0x0;
    if (uVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      auVar20._8_8_ = param_2;
      auVar20._0_8_ = uVar6;
      return auVar20;
    }
  }
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = param_1;
  return auVar15;
}



/* Entry: 10a18d664; end: 10a18d677;  */

undefined1  [16] FUN_10a18d664(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  plVar1 = (long *)&UNK_10f6403f7;
  FUN_109ffde64();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar2 = param_2 * 0x18;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  func_0x00010a18d6f0();
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = plVar1;
  return auVar4;
}



/* Entry: 10a18d678; end: 10a18d747;  */

undefined1  [16] FUN_10a18d678(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_2 * 0x18;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  func_0x00010a18d6f0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a18d748; end: 10a18d75b;  */

void FUN_10a18d748(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  FUN_109ffde64(&UNK_10f6403f7);
  if (param_2 >> 0x3b == 0) {
    __Znwm(param_2 << 5);
    return;
  }
  func_0x000109ffded8();
  puVar1 = (undefined8 *)&UNK_10f6403f7;
  FUN_109ffde64();
  if (param_2 < 0x666666666666667) {
    __Znwm(param_2 * 0x28);
    return;
  }
  func_0x000109ffded8();
  if (*(long *)*puVar1 != 0) {
    FUN_10a18d828();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*puVar1);
    return;
  }
  return;
}



/* Entry: 10a18d75c; end: 10a18d78f;  */

void FUN_10a18d75c(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 >> 0x3b == 0) {
    __Znwm(param_2 << 5);
    return;
  }
  func_0x000109ffded8();
  puVar1 = (undefined8 *)&UNK_10f6403f7;
  FUN_109ffde64();
  if (param_2 < 0x666666666666667) {
    __Znwm(param_2 * 0x28);
    return;
  }
  func_0x000109ffded8();
  if (*(long *)*puVar1 != 0) {
    FUN_10a18d828();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*puVar1);
    return;
  }
  return;
}



/* Entry: 10a18d790; end: 10a18d7a3;  */

void FUN_10a18d790(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&UNK_10f6403f7;
  FUN_109ffde64();
  if (param_2 < 0x666666666666667) {
    __Znwm(param_2 * 0x28);
    return;
  }
  func_0x000109ffded8();
  if (*(long *)*puVar1 != 0) {
    FUN_10a18d828();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*puVar1);
    return;
  }
  return;
}



/* Entry: 10a18d7a4; end: 10a18d827;  */

void FUN_10a18d7a4(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x666666666666667) {
    __Znwm(param_2 * 0x28);
    return;
  }
  func_0x000109ffded8();
  if (*(long *)*param_1 != 0) {
    FUN_10a18d828();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a18d828; end: 10a18d87b;  */

void FUN_10a18d828(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  while (plVar2 = plVar3, plVar2 != plVar1) {
    plVar3 = plVar2 + -3;
    if (*plVar3 != 0) {
      plVar2[-2] = *plVar3;
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 10a18d87c; end: 10a18d957;  */

ulong * FUN_10a18d87c(ulong *param_1,ulong *param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (param_1 != param_2) {
    puVar3 = param_1 + 1;
    uVar4 = *param_1;
    puVar2 = param_2 + 1;
    uVar5 = *param_2;
    uVar7 = uVar4;
    if (uVar5 <= uVar4) {
      uVar7 = uVar5;
    }
    lVar1 = 0;
    if (uVar4 <= uVar5) {
      lVar1 = uVar5 - uVar4;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      uVar6 = *puVar2;
      uVar9 = puVar2[3];
      uVar8 = puVar2[2];
      puVar3[1] = puVar2[1];
      *puVar3 = uVar6;
      puVar3[3] = uVar9;
      puVar3[2] = uVar8;
      uVar8 = puVar2[5];
      uVar6 = puVar2[4];
      uVar10 = puVar2[7];
      uVar9 = puVar2[6];
      uVar11 = puVar2[8];
      uVar13 = puVar2[0xb];
      uVar12 = puVar2[10];
      puVar3[9] = puVar2[9];
      puVar3[8] = uVar11;
      puVar3[0xb] = uVar13;
      puVar3[10] = uVar12;
      puVar3[5] = uVar8;
      puVar3[4] = uVar6;
      puVar3[7] = uVar10;
      puVar3[6] = uVar9;
      puVar3 = puVar3 + 0xc;
      puVar2 = puVar2 + 0xc;
    }
    if (uVar4 < uVar5) {
      do {
        uVar7 = *puVar2;
        uVar5 = puVar2[3];
        uVar4 = puVar2[2];
        puVar3[1] = puVar2[1];
        *puVar3 = uVar7;
        puVar3[3] = uVar5;
        puVar3[2] = uVar4;
        uVar4 = puVar2[5];
        uVar7 = puVar2[4];
        uVar6 = puVar2[7];
        uVar5 = puVar2[6];
        uVar8 = puVar2[8];
        uVar10 = puVar2[0xb];
        uVar9 = puVar2[10];
        puVar3[9] = puVar2[9];
        puVar3[8] = uVar8;
        puVar3[0xb] = uVar10;
        puVar3[10] = uVar9;
        puVar3[5] = uVar4;
        puVar3[4] = uVar7;
        puVar3[7] = uVar6;
        puVar3[6] = uVar5;
        puVar3 = puVar3 + 0xc;
        puVar2 = puVar2 + 0xc;
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
    }
    if (*param_2 < *param_1) {
      FUN_10a005d64(param_1);
    }
    else {
      *param_1 = *param_2;
    }
  }
  return param_1;
}



/* Entry: 10a18d958; end: 10a18d96b;  */

undefined1  [16] FUN_10a18d958(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&UNK_10f6403f7;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    func_0x00010a0616d0();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a18d96c; end: 10a18d9eb;  */

undefined1  [16] FUN_10a18d96c(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x00010a0616d0();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a18d9ec; end: 10a18da5b;  */

void FUN_10a18d9ec(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a0616d0();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a18da5c; end: 10a18da97;  */

undefined8 * FUN_10a18da5c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  FUN_10a18da98(param_1,param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 10a18da98; end: 10a18db37;  */

void FUN_10a18da98(long *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar5 = 0;
    do {
      puVar6 = (undefined8 *)(param_3 + lVar5 * 0x68);
      lVar7 = puVar6[1];
      uVar8 = *puVar6;
      param_2[1] = puVar6[1];
      *param_2 = uVar8;
      if (lVar7 != 0) {
        plVar1 = (long *)(lVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uVar9 = puVar6[3];
      uVar8 = puVar6[2];
      param_2[4] = puVar6[4];
      param_2[3] = uVar9;
      param_2[2] = uVar8;
      lVar7 = puVar6[6];
      uVar8 = puVar6[5];
      param_2[6] = puVar6[6];
      param_2[5] = uVar8;
      if (lVar7 != 0) {
        plVar1 = (long *)(lVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uVar9 = puVar6[8];
      uVar8 = puVar6[7];
      param_2[9] = puVar6[9];
      param_2[8] = uVar9;
      param_2[7] = uVar8;
      uVar9 = puVar6[0xb];
      uVar8 = puVar6[10];
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(puVar6 + 0xc);
      param_2[0xb] = uVar9;
      param_2[10] = uVar8;
      param_2 = param_2 + 0xd;
      lVar5 = lVar5 + 1;
    } while (lVar5 != lVar4);
  }
  return;
}



/* Entry: 10a18db38; end: 10a18e1ff;  */

/* WARNING: Removing unreachable block (ram,0x00010a18e850) */
/* WARNING: Removing unreachable block (ram,0x00010a18e854) */
/* WARNING: Removing unreachable block (ram,0x00010a18e864) */
/* WARNING: Removing unreachable block (ram,0x00010a18e880) */

ulong * FUN_10a18db38(ulong *param_1,ulong *param_2,undefined8 param_3,long param_4,uint param_5)

{
  bool bVar1;
  long lVar2;
  code *pcVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong *puVar21;
  long lVar22;
  long lVar23;
  
  puVar5 = param_1;
LAB_10a18db6c:
  param_4 = -param_4;
  puVar10 = puVar5;
LAB_10a18db70:
  puVar5 = puVar10;
  param_4 = param_4 + 1;
  uVar9 = (long)param_2 - (long)puVar5 >> 3;
  if (2 < (long)uVar9) {
    if (uVar9 == 3) {
      uVar9 = *puVar5;
      uVar8 = puVar5[1];
      uVar11 = param_2[-1];
      if (uVar8 < uVar9) {
        if (uVar11 < uVar8) {
          *puVar5 = uVar11;
        }
        else {
          *puVar5 = uVar8;
          puVar5[1] = uVar9;
          if (uVar9 <= param_2[-1]) {
            return param_1;
          }
          puVar5[1] = param_2[-1];
        }
        param_2[-1] = uVar9;
        return param_1;
      }
      if (uVar8 <= uVar11) {
        return param_1;
      }
      puVar5[1] = uVar11;
      param_2[-1] = uVar8;
      uVar9 = puVar5[1];
      goto LAB_10a18e1d4;
    }
    if (uVar9 != 4) {
      if (uVar9 != 5) goto LAB_10a18dbb0;
      puVar14 = puVar5 + 1;
      puVar18 = (ulong *)*puVar14;
      puVar16 = puVar5 + 2;
      puVar7 = (ulong *)*puVar16;
      puVar13 = (ulong *)*puVar5;
      puVar10 = puVar7;
      puVar4 = puVar7;
      puVar19 = puVar5;
      if (puVar18 < puVar13) {
        param_1 = puVar18;
        puVar6 = puVar13;
        puVar21 = puVar16;
        if (puVar18 <= puVar7) {
          *puVar5 = (ulong)puVar18;
          puVar5[1] = (ulong)puVar13;
          param_1 = puVar7;
          puVar15 = puVar13;
          puVar17 = puVar18;
          puVar4 = puVar18;
          puVar19 = puVar14;
          if (puVar13 <= puVar7) goto LAB_10a18e16c;
        }
LAB_10a18e148:
        *puVar19 = (ulong)puVar7;
        *puVar21 = (ulong)puVar13;
        puVar10 = puVar6;
        puVar15 = param_1;
        puVar17 = puVar4;
      }
      else {
        puVar15 = puVar18;
        puVar17 = puVar13;
        if (puVar7 < puVar18) {
          *puVar14 = (ulong)puVar7;
          *puVar16 = (ulong)puVar18;
          param_1 = puVar13;
          puVar6 = puVar18;
          puVar10 = puVar18;
          puVar15 = puVar7;
          puVar21 = puVar14;
          if (puVar7 < puVar13) goto LAB_10a18e148;
        }
      }
LAB_10a18e16c:
      puVar19 = (ulong *)puVar5[3];
      puVar4 = puVar19;
      if (puVar19 < puVar10) {
        puVar5[2] = (ulong)puVar19;
        puVar5[3] = (ulong)puVar10;
        puVar4 = puVar10;
        if (puVar19 < puVar15) {
          *puVar14 = (ulong)puVar19;
          *puVar16 = (ulong)puVar15;
          if (puVar19 < puVar17) {
            *puVar5 = (ulong)puVar19;
            puVar5[1] = (ulong)puVar17;
          }
        }
      }
      if (puVar4 <= (ulong *)param_2[-1]) {
        return param_1;
      }
      puVar5[3] = param_2[-1];
      param_2[-1] = (ulong)puVar4;
      uVar8 = puVar5[2];
      uVar9 = puVar5[3];
      if (uVar8 <= uVar9) {
        return param_1;
      }
      puVar5[2] = uVar9;
      puVar5[3] = uVar8;
      uVar8 = puVar5[1];
      if (uVar8 <= uVar9) {
        return param_1;
      }
      puVar5[1] = uVar9;
      puVar5[2] = uVar8;
LAB_10a18e1d4:
      uVar8 = *puVar5;
      if (uVar9 < uVar8) {
        *puVar5 = uVar9;
        puVar5[1] = uVar8;
        return param_1;
      }
      return param_1;
    }
    puVar19 = puVar5 + 1;
    puVar10 = (ulong *)*puVar19;
    puVar7 = puVar5 + 2;
    puVar14 = (ulong *)*puVar7;
    puVar16 = (ulong *)*puVar5;
    puVar4 = puVar5;
    if (puVar10 < puVar16) {
      param_1 = puVar16;
      puVar18 = puVar7;
      if (puVar10 <= puVar14) {
        *puVar5 = (ulong)puVar10;
        puVar5[1] = (ulong)puVar16;
        puVar10 = puVar14;
        puVar4 = puVar19;
        goto joined_r0x00010a18e090;
      }
    }
    else {
      puVar13 = puVar14;
      if (puVar10 <= puVar14) goto LAB_10a18e0d0;
      *puVar19 = (ulong)puVar14;
      *puVar7 = (ulong)puVar10;
      puVar18 = puVar19;
      param_1 = puVar10;
joined_r0x00010a18e090:
      puVar13 = puVar10;
      if (puVar16 <= puVar14) goto LAB_10a18e0d0;
    }
    *puVar4 = (ulong)puVar14;
    *puVar18 = (ulong)puVar16;
    puVar13 = param_1;
LAB_10a18e0d0:
    if (puVar13 <= (ulong *)param_2[-1]) {
      return param_1;
    }
    *puVar7 = param_2[-1];
    param_2[-1] = (ulong)puVar13;
    uVar8 = *puVar7;
    uVar9 = *puVar19;
    if (uVar8 < uVar9) {
      puVar5[1] = uVar8;
      puVar5[2] = uVar9;
      uVar9 = *puVar5;
      if (uVar8 < uVar9) {
        *puVar5 = uVar8;
        puVar5[1] = uVar9;
        return param_1;
      }
      return param_1;
    }
    return param_1;
  }
  if (uVar9 < 2) {
    return param_1;
  }
  if (uVar9 == 2) {
    uVar9 = *puVar5;
    if (param_2[-1] < uVar9) {
      *puVar5 = param_2[-1];
      param_2[-1] = uVar9;
      return param_1;
    }
    return param_1;
  }
LAB_10a18dbb0:
  if ((long)uVar9 < 0x18) {
    if ((param_5 & 1) == 0) {
      if ((puVar5 != param_2) && (puVar10 = puVar5 + 1, puVar10 != param_2)) {
        lVar22 = 0;
        lVar23 = 8;
        do {
          uVar8 = *(ulong *)((long)puVar5 + lVar22);
          uVar9 = *puVar10;
          if (uVar9 < uVar8) {
            lVar22 = 0;
            do {
              *(ulong *)((long)puVar10 + lVar22) = uVar8;
              if (lVar23 + lVar22 == 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10a18e270);
                (*pcVar3)();
              }
              uVar8 = ((ulong *)((long)puVar10 + lVar22))[-2];
              lVar22 = lVar22 + -8;
            } while (uVar9 < uVar8);
            *(ulong *)((long)puVar10 + lVar22) = uVar9;
          }
          puVar10 = puVar10 + 1;
          lVar22 = lVar23;
          lVar23 = lVar23 + 8;
        } while (puVar10 != param_2);
      }
      return puVar5;
    }
    if (puVar5 == param_2) {
      return param_1;
    }
    if (puVar5 + 1 == param_2) {
      return param_1;
    }
    lVar22 = 8;
    puVar10 = puVar5;
    puVar4 = puVar5 + 1;
    goto LAB_10a18df90;
  }
  if (param_4 != 1) {
    puVar10 = puVar5 + (uVar9 >> 1);
    uVar8 = param_2[-1];
    if (uVar9 < 0x81) {
      uVar11 = *puVar5;
      uVar9 = *puVar10;
      if (uVar11 < uVar9) {
        if (uVar8 < uVar11) {
          *puVar10 = uVar8;
        }
        else {
          *puVar10 = uVar11;
          *puVar5 = uVar9;
          if (uVar9 <= param_2[-1]) goto joined_r0x00010a18dcfc;
          *puVar5 = param_2[-1];
        }
        param_2[-1] = uVar9;
      }
      else if (uVar8 < uVar11) {
        *puVar5 = uVar8;
        param_2[-1] = uVar11;
        uVar9 = *puVar10;
        if (*puVar5 < uVar9) {
          *puVar10 = *puVar5;
          *puVar5 = uVar9;
        }
      }
    }
    else {
      uVar11 = *puVar10;
      uVar9 = *puVar5;
      if (uVar11 < uVar9) {
        if (uVar8 < uVar11) {
          *puVar5 = uVar8;
        }
        else {
          *puVar5 = uVar11;
          *puVar10 = uVar9;
          if (uVar9 <= param_2[-1]) goto LAB_10a18dc8c;
          *puVar10 = param_2[-1];
        }
        param_2[-1] = uVar9;
      }
      else if (uVar8 < uVar11) {
        *puVar10 = uVar8;
        param_2[-1] = uVar11;
        uVar9 = *puVar5;
        if (*puVar10 < uVar9) {
          *puVar5 = *puVar10;
          *puVar10 = uVar9;
        }
      }
LAB_10a18dc8c:
      puVar4 = puVar10 + -1;
      uVar8 = *puVar4;
      uVar9 = puVar5[1];
      uVar11 = param_2[-2];
      if (uVar8 < uVar9) {
        if (uVar11 < uVar8) {
          puVar5[1] = uVar11;
        }
        else {
          puVar5[1] = uVar8;
          *puVar4 = uVar9;
          if (uVar9 <= param_2[-2]) goto LAB_10a18dd20;
          *puVar4 = param_2[-2];
        }
        param_2[-2] = uVar9;
      }
      else if (uVar11 < uVar8) {
        *puVar4 = uVar11;
        param_2[-2] = uVar8;
        uVar9 = puVar5[1];
        if (*puVar4 < uVar9) {
          puVar5[1] = *puVar4;
          *puVar4 = uVar9;
        }
      }
LAB_10a18dd20:
      puVar19 = puVar10 + 1;
      uVar8 = *puVar19;
      uVar9 = puVar5[2];
      uVar11 = param_2[-3];
      if (uVar8 < uVar9) {
        if (uVar11 < uVar8) {
          puVar5[2] = uVar11;
        }
        else {
          puVar5[2] = uVar8;
          *puVar19 = uVar9;
          if (uVar9 <= param_2[-3]) goto LAB_10a18dd90;
          *puVar19 = param_2[-3];
        }
        param_2[-3] = uVar9;
      }
      else if (uVar11 < uVar8) {
        *puVar19 = uVar11;
        param_2[-3] = uVar8;
        uVar9 = puVar5[2];
        if (*puVar19 < uVar9) {
          puVar5[2] = *puVar19;
          *puVar19 = uVar9;
        }
      }
LAB_10a18dd90:
      uVar9 = puVar10[-1];
      uVar8 = *puVar10;
      uVar11 = puVar10[1];
      if (uVar8 < uVar9) {
        uVar12 = uVar8;
        if (uVar8 <= uVar11) {
          puVar10[-1] = uVar8;
          *puVar10 = uVar9;
          puVar4 = puVar10;
          uVar8 = uVar9;
          uVar12 = uVar11;
          if (uVar9 <= uVar11) goto LAB_10a18dde8;
        }
LAB_10a18dde0:
        *puVar4 = uVar11;
        *puVar19 = uVar9;
        uVar8 = uVar12;
      }
      else if (uVar11 < uVar8) {
        *puVar10 = uVar11;
        puVar10[1] = uVar8;
        puVar19 = puVar10;
        uVar8 = uVar11;
        uVar12 = uVar9;
        if (uVar11 < uVar9) goto LAB_10a18dde0;
      }
LAB_10a18dde8:
      uVar9 = *puVar5;
      *puVar5 = uVar8;
      *puVar10 = uVar9;
    }
joined_r0x00010a18dcfc:
    if (((param_5 & 1) == 0) && (*puVar5 <= puVar5[-1])) {
      func_0x00010a18e270(puVar5,param_2,param_3);
      puVar10 = puVar5;
      goto LAB_10a18de90;
    }
    puVar4 = puVar5;
    puVar10 = param_2;
    func_0x00010a18e354(puVar5,param_2,param_3);
    if (((ulong)puVar10 & 1) == 0) goto LAB_10a18de5c;
    puVar19 = puVar5;
    func_0x00010a18e444(puVar5,puVar4,param_3);
    puVar10 = puVar4 + 1;
    param_1 = puVar10;
    func_0x00010a18e444(puVar10,param_2,param_3);
    if ((int)param_1 != 0) {
      param_4 = -param_4;
      param_2 = puVar4;
      if (((ulong)puVar19 & 1) != 0) {
        return param_1;
      }
      goto LAB_10a18db6c;
    }
    if (((ulong)puVar19 & 1) == 0) goto LAB_10a18de5c;
    goto LAB_10a18db70;
  }
  if (puVar5 == param_2) {
    return param_1;
  }
  if (puVar5 == param_2) {
    return param_2;
  }
  lVar22 = (long)param_2 - (long)puVar5 >> 3;
  if (1 < lVar22) {
    uVar9 = lVar22 - 2U >> 1;
    lVar23 = uVar9 + 1;
    puVar10 = puVar5 + uVar9;
    do {
      FUN_10a18e99c(puVar5,param_3,lVar22,puVar10);
      puVar10 = puVar10 + -1;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
  }
  puVar10 = param_2;
  if (1 < lVar22) {
    do {
      uVar9 = 0;
      uVar8 = *puVar5;
      puVar4 = puVar5;
      do {
        puVar19 = puVar4 + uVar9 + 1;
        uVar12 = uVar9 << 1 | 1;
        uVar11 = uVar9 * 2 + 2;
        if ((long)uVar11 < lVar22) {
          uVar20 = puVar4[uVar9 + 2];
          lVar23 = uVar9 + 1;
          puVar7 = puVar4 + uVar9 + 2;
          uVar9 = uVar11;
          if (uVar20 <= puVar4[lVar23]) {
            puVar7 = puVar19;
            uVar9 = uVar12;
            uVar20 = puVar4[lVar23];
          }
        }
        else {
          puVar7 = puVar19;
          uVar9 = uVar12;
          uVar20 = *puVar19;
        }
        *puVar4 = uVar20;
        puVar4 = puVar7;
      } while ((long)uVar9 <= (long)(lVar22 - 2U >> 1));
      puVar10 = puVar10 + -1;
      if (puVar7 == puVar10) {
        *puVar7 = uVar8;
      }
      else {
        *puVar7 = *puVar10;
        *puVar10 = uVar8;
        lVar23 = (long)puVar7 + (8 - (long)puVar5) >> 3;
        if (1 < lVar23) {
          uVar9 = lVar23 - 2U >> 1;
          uVar11 = puVar5[uVar9];
          uVar8 = *puVar7;
          puVar4 = puVar5 + uVar9;
          if (uVar11 < uVar8) {
            do {
              puVar19 = puVar4;
              *puVar7 = uVar11;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1 >> 1;
              uVar11 = puVar5[uVar9];
              puVar7 = puVar19;
              puVar4 = puVar5 + uVar9;
            } while (uVar11 < uVar8);
            *puVar19 = uVar8;
          }
        }
      }
      bVar1 = 2 < lVar22;
      lVar22 = lVar22 + -1;
    } while (bVar1);
  }
  return param_2;
LAB_10a18df90:
  uVar9 = *puVar10;
  uVar8 = puVar10[1];
  lVar23 = lVar22;
  if (uVar8 < uVar9) {
    do {
      *(ulong *)((long)puVar5 + lVar23) = uVar9;
      lVar2 = lVar23 + -8;
      puVar10 = puVar5;
      if (lVar2 == 0) goto LAB_10a18dfd0;
      uVar9 = *(ulong *)((long)puVar5 + lVar23 + -0x10);
      lVar23 = lVar2;
    } while (uVar8 < uVar9);
    puVar10 = (ulong *)((long)puVar5 + lVar2);
LAB_10a18dfd0:
    *puVar10 = uVar8;
  }
  puVar19 = puVar4 + 1;
  lVar22 = lVar22 + 8;
  puVar10 = puVar4;
  puVar4 = puVar19;
  if (puVar19 == param_2) {
    return param_1;
  }
  goto LAB_10a18df90;
LAB_10a18de5c:
  FUN_10a18db38(puVar5,puVar4,param_3,-param_4,param_5 & 1);
  puVar10 = puVar4 + 1;
LAB_10a18de90:
  param_5 = 0;
  param_4 = -param_4;
  param_1 = puVar5;
  puVar5 = puVar10;
  goto LAB_10a18db6c;
}



/* Entry: 10a18e200; end: 10a18e7d7;  */

void FUN_10a18e200(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  if ((param_1 != param_2) && (puVar2 = param_1 + 1, puVar2 != param_2)) {
    lVar6 = 0;
    lVar3 = 8;
    do {
      uVar5 = *(ulong *)((long)param_1 + lVar6);
      uVar4 = *puVar2;
      if (uVar4 < uVar5) {
        lVar6 = 0;
        do {
          *(ulong *)((long)puVar2 + lVar6) = uVar5;
          if (lVar3 + lVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10a18e270);
            (*pcVar1)();
          }
          uVar5 = ((ulong *)((long)puVar2 + lVar6))[-2];
          lVar6 = lVar6 + -8;
        } while (uVar4 < uVar5);
        *(ulong *)((long)puVar2 + lVar6) = uVar4;
      }
      puVar2 = puVar2 + 1;
      lVar6 = lVar3;
      lVar3 = lVar3 + 8;
    } while (puVar2 != param_2);
  }
  return;
}



/* Entry: 10a18e7d8; end: 10a18e99b;  */

ulong * FUN_10a18e7d8(ulong *param_1,ulong *param_2,ulong *param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  long lVar12;
  
  puVar11 = param_3;
  if (param_1 != param_2) {
    lVar10 = (long)param_2 - (long)param_1 >> 3;
    puVar11 = param_2;
    if (1 < lVar10) {
      uVar3 = lVar10 - 2U >> 1;
      lVar12 = uVar3 + 1;
      puVar6 = param_1 + uVar3;
      do {
        FUN_10a18e99c(param_1,param_4,lVar10,puVar6);
        puVar6 = puVar6 + -1;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    for (; puVar11 != param_3; puVar11 = puVar11 + 1) {
      uVar3 = *puVar11;
      if (uVar3 < *param_1) {
        *puVar11 = *param_1;
        *param_1 = uVar3;
        FUN_10a18e99c(param_1,param_4,lVar10,param_1);
      }
    }
    if (1 < lVar10) {
      do {
        uVar3 = 0;
        uVar5 = *param_1;
        puVar6 = param_1;
        do {
          puVar7 = puVar6 + uVar3 + 1;
          uVar2 = uVar3 << 1 | 1;
          uVar8 = uVar3 * 2 + 2;
          if ((long)uVar8 < lVar10) {
            uVar9 = puVar6[uVar3 + 2];
            lVar12 = uVar3 + 1;
            puVar4 = puVar6 + uVar3 + 2;
            uVar3 = uVar8;
            if (uVar9 <= puVar6[lVar12]) {
              puVar4 = puVar7;
              uVar3 = uVar2;
              uVar9 = puVar6[lVar12];
            }
          }
          else {
            puVar4 = puVar7;
            uVar3 = uVar2;
            uVar9 = *puVar7;
          }
          *puVar6 = uVar9;
          puVar6 = puVar4;
        } while ((long)uVar3 <= (long)(lVar10 - 2U >> 1));
        param_2 = param_2 + -1;
        if (puVar4 == param_2) {
          *puVar4 = uVar5;
        }
        else {
          *puVar4 = *param_2;
          *param_2 = uVar5;
          lVar12 = (long)puVar4 + (8 - (long)param_1) >> 3;
          if (1 < lVar12) {
            uVar3 = lVar12 - 2U >> 1;
            uVar8 = param_1[uVar3];
            uVar5 = *puVar4;
            puVar6 = param_1 + uVar3;
            if (uVar8 < uVar5) {
              do {
                puVar7 = puVar6;
                *puVar4 = uVar8;
                if (uVar3 == 0) break;
                uVar3 = uVar3 - 1 >> 1;
                uVar8 = param_1[uVar3];
                puVar4 = puVar7;
                puVar6 = param_1 + uVar3;
              } while (uVar8 < uVar5);
              *puVar7 = uVar5;
            }
          }
        }
        bVar1 = 2 < lVar10;
        lVar10 = lVar10 + -1;
      } while (bVar1);
    }
  }
  return puVar11;
}



/* Entry: 10a18e99c; end: 10a18eadb;  */

void FUN_10a18e99c(long param_1,undefined8 param_2,long param_3,ulong *param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (1 < param_3) {
    uVar3 = param_3 - 2U >> 1;
    if ((long)param_4 - param_1 >> 3 <= (long)uVar3) {
      lVar7 = (long)param_4 - param_1 >> 2;
      uVar8 = lVar7 + 1;
      puVar4 = (ulong *)(param_1 + uVar8 * 8);
      uVar6 = lVar7 + 2;
      if ((long)uVar6 < param_3) {
        uVar9 = puVar4[1];
        puVar5 = puVar4 + 1;
        if (uVar9 <= *puVar4) {
          puVar5 = puVar4;
          uVar6 = uVar8;
          uVar9 = *puVar4;
        }
      }
      else {
        puVar5 = puVar4;
        uVar6 = uVar8;
        uVar9 = *puVar4;
      }
      uVar8 = *param_4;
      if (uVar8 <= uVar9) {
        do {
          puVar4 = puVar5;
          *param_4 = uVar9;
          if ((long)uVar3 < (long)uVar6) break;
          uVar2 = uVar6 << 1 | 1;
          puVar1 = (ulong *)(param_1 + uVar2 * 8);
          uVar6 = uVar6 * 2 + 2;
          if ((long)uVar6 < param_3) {
            uVar9 = puVar1[1];
            puVar5 = puVar1 + 1;
            if (uVar9 <= *puVar1) {
              puVar5 = puVar1;
              uVar6 = uVar2;
              uVar9 = *puVar1;
            }
          }
          else {
            puVar5 = puVar1;
            uVar6 = uVar2;
            uVar9 = *puVar1;
          }
          param_4 = puVar4;
        } while (uVar8 <= uVar9);
        *puVar4 = uVar8;
      }
    }
  }
  return;
}



/* Entry: 10a18eadc; end: 10a18eb97;  */

void FUN_10a18eadc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuStack_60;
  undefined1 *puStack_58;
  undefined8 *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  puVar1 = PTR___tlv_bootstrap_11340d750;
  ppuVar4 = &PTR___tlv_bootstrap_11340d750;
  ppuVar2 = ppuVar4;
  uStack_40 = param_2;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar3 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar2 & 1) == 0) {
    ppuVar2 = ppuVar3;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar2,0x100000000);
    (*(code *)puVar1)();
    *(undefined1 *)ppuVar4 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  puStack_48 = ppuVar3[2];
  ppuStack_60 = &puStack_48;
  puStack_58 = &uStack_31;
  puStack_50 = &uStack_40;
  FUN_10a18eb98(param_1,&ppuStack_60);
  return;
}



/* Entry: 10a18eb98; end: 10a18ebcb;  */

char * FUN_10a18eb98(char *param_1,char *param_2)

{
  long lVar1;
  undefined4 uVar2;
  char cVar3;
  undefined2 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  int iVar15;
  undefined1 uVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 uStack_58;
  
  puVar13 = (undefined8 *)**(long **)param_2;
  if (puVar13 == (undefined8 *)0x0) {
    *param_1 = '\0';
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
    param_1[0x28] = '\0';
    return param_2;
  }
  uVar14 = **(undefined8 **)(param_2 + 0x10);
  cVar3 = *(char *)(puVar13[1] + 0x23);
  *param_1 = cVar3;
  param_1[2] = '\x13';
  param_1[3] = '\0';
  *(undefined8 *)(param_1 + 8) = uVar14;
  ppuVar10 = &PTR___tlv_bootstrap_11340dd08;
  (*(code *)PTR___tlv_bootstrap_11340dd08)();
  iVar15 = *(int *)ppuVar10;
  if (*(int *)ppuVar10 == 0) {
    uStack_58 = 0;
    _pthread_threadid_np(0,&uStack_58);
    *(int *)ppuVar10 = (int)uStack_58;
    iVar15 = (int)uStack_58;
  }
  *(int *)(param_1 + 0x10) = iVar15;
  param_1[0x20] = '\0';
  param_1[0x21] = '\0';
  param_1[0x22] = '\0';
  param_1[0x23] = '\0';
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = '\0';
  param_1[0x27] = '\0';
  param_1[0x28] = '\0';
  if ((cVar3 != '\0') && (puVar13 != (undefined8 *)0x0)) {
    if (((*(byte *)(puVar13[1] + 0x42) | *(byte *)(puVar13[1] + 0x43)) & 1) != 0) {
      uVar7 = cntfrq_el0;
      InstructionSynchronizationBarrier();
      uVar18 = cntvct_el0;
      if (uVar7 != 1000000000) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar18 / uVar7;
        }
        uVar6 = 0;
        if (uVar7 != 0) {
          uVar6 = ((uVar18 - uVar5 * uVar7) * 1000000000) / uVar7;
        }
        uVar18 = uVar6 + uVar5 * 1000000000;
      }
      *(ulong *)(param_1 + 0x18) = uVar18;
      lVar8 = lRam00000001137ea760;
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar4 = *(undefined2 *)(param_1 + 2);
      uVar14 = *(undefined8 *)(param_1 + 8);
      puVar11 = puVar13;
      FUN_10a1333cc();
      if (puVar11 != (undefined8 *)0x0) {
        uVar16 = 3;
        if (lRam00000001137ea760 != lVar8) {
          uVar16 = 5;
        }
        lVar1 = 0;
        if (lRam00000001137ea760 != lVar8) {
          lVar1 = lVar8;
        }
        *puVar11 = uVar14;
        puVar11[1] = lVar1;
        puVar11[2] = uVar18;
        *(undefined4 *)(puVar11 + 3) = uVar2;
        *(undefined2 *)((long)puVar11 + 0x1c) = uVar4;
        *(undefined1 *)((long)puVar11 + 0x1e) = uVar16;
        if ((*(byte *)(puVar13 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10a18ed58);
          (*pcVar9)();
        }
        puVar13[0x18] = puVar13[0x18] + 1;
      }
    }
    if (*(char *)(puVar13[1] + 0x41) == '\x01') {
      plVar17 = (long *)puVar13[0xb];
      if (plVar17 != (long *)0x0) {
        plVar12 = plVar17;
        (**(code **)(*plVar17 + 0x10))(plVar17,*(undefined8 *)(param_1 + 8));
        *(long **)(param_1 + 0x20) = plVar12;
      }
      param_1[0x28] = plVar17 != (long *)0x0;
    }
  }
  return param_1;
}



/* Entry: 10a18ebcc; end: 10a18ed57;  */

undefined1 * FUN_10a18ebcc(undefined1 *param_1,int param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  long *plVar11;
  int iVar12;
  undefined1 uVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uStack_58;
  
  *param_1 = (char)param_2;
  *(undefined2 *)(param_1 + 2) = 0x13;
  *(undefined8 *)(param_1 + 8) = param_4;
  ppuVar9 = &PTR___tlv_bootstrap_11340dd08;
  (*(code *)PTR___tlv_bootstrap_11340dd08)();
  iVar12 = *(int *)ppuVar9;
  if (*(int *)ppuVar9 == 0) {
    uStack_58 = 0;
    _pthread_threadid_np(0,&uStack_58);
    *(int *)ppuVar9 = (int)uStack_58;
    iVar12 = (int)uStack_58;
  }
  *(int *)(param_1 + 0x10) = iVar12;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x28] = 0;
  if ((param_2 != 0) && (param_3 != (undefined8 *)0x0)) {
    if (((*(byte *)(param_3[1] + 0x42) | *(byte *)(param_3[1] + 0x43)) & 1) != 0) {
      uVar6 = cntfrq_el0;
      InstructionSynchronizationBarrier();
      uVar15 = cntvct_el0;
      if (uVar6 != 1000000000) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar15 / uVar6;
        }
        uVar5 = 0;
        if (uVar6 != 0) {
          uVar5 = ((uVar15 - uVar4 * uVar6) * 1000000000) / uVar6;
        }
        uVar15 = uVar5 + uVar4 * 1000000000;
      }
      *(ulong *)(param_1 + 0x18) = uVar15;
      lVar7 = lRam00000001137ea760;
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar3 = *(undefined2 *)(param_1 + 2);
      uVar16 = *(undefined8 *)(param_1 + 8);
      puVar10 = param_3;
      FUN_10a1333cc();
      if (puVar10 != (undefined8 *)0x0) {
        uVar13 = 3;
        if (lRam00000001137ea760 != lVar7) {
          uVar13 = 5;
        }
        lVar1 = 0;
        if (lRam00000001137ea760 != lVar7) {
          lVar1 = lVar7;
        }
        *puVar10 = uVar16;
        puVar10[1] = lVar1;
        puVar10[2] = uVar15;
        *(undefined4 *)(puVar10 + 3) = uVar2;
        *(undefined2 *)((long)puVar10 + 0x1c) = uVar3;
        *(undefined1 *)((long)puVar10 + 0x1e) = uVar13;
        if ((*(byte *)(param_3 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10a18ed58);
          (*pcVar8)();
        }
        param_3[0x18] = param_3[0x18] + 1;
      }
    }
    if (*(char *)(param_3[1] + 0x41) == '\x01') {
      plVar14 = (long *)param_3[0xb];
      if (plVar14 != (long *)0x0) {
        plVar11 = plVar14;
        (**(code **)(*plVar14 + 0x10))(plVar14,*(undefined8 *)(param_1 + 8));
        *(long **)(param_1 + 0x20) = plVar11;
      }
      param_1[0x28] = plVar14 != (long *)0x0;
    }
  }
  return param_1;
}



/* Entry: 10a18ed58; end: 10a18edef;  */

void FUN_10a18ed58(ulong *param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if (*param_1 != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      uVar2 = ((long)(param_1[2] - param_1[1]) >> 3) * -0x5555555555555555;
      if (uVar2 < uVar4 || uVar2 - uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a18edf0);
        (*pcVar1)();
      }
      func_0x00010a176358(param_1[1] + lVar3);
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while (uVar4 < *param_1);
  }
  *param_1 = 0;
  uVar4 = param_1[4];
  uVar2 = param_1[5];
  while (uVar2 != uVar4) {
    uVar2 = uVar2 - 0x400;
    FUN_10a18bb28(uVar2);
  }
  param_1[5] = uVar4;
  return;
}



/* Entry: 10a18edf0; end: 10a18ee67;  */

void FUN_10a18edf0(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a18ee68(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10a18ee68; end: 10a18eeaf;  */

/* WARNING: Removing unreachable block (ram,0x00010a18f088) */

undefined1  [16] FUN_10a18ee68(long *param_1,char *param_2)

{
  bool bVar1;
  long *plVar2;
  char *pcVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  byte bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  byte abStack_53 [3];
  
  if (param_2 < (char *)0xaaaaaaaaaaaaaab) {
    plVar2 = param_1;
    FUN_10a18eec4();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)(plVar2 + (long)param_2 * 3);
    auVar13._8_8_ = param_2;
    auVar13._0_8_ = plVar2;
    return auVar13;
  }
  FUN_10a18eeb0();
  pcVar3 = "vector";
  FUN_109ffde64();
  if (param_2 < (char *)0xaaaaaaaaaaaaaab) {
    lVar4 = (long)param_2 * 0x18;
    __Znwm(lVar4);
    auVar14._8_8_ = param_2;
    auVar14._0_8_ = lVar4;
    return auVar14;
  }
  func_0x000109ffded8();
  if ((((*pcVar3 == *param_2) && (*(int *)(pcVar3 + 4) == *(int *)(param_2 + 4))) &&
      (*(int *)(pcVar3 + 8) == *(int *)(param_2 + 8))) &&
     ((*(int *)(pcVar3 + 0xc) == *(int *)(param_2 + 0xc) &&
      (*(int *)(pcVar3 + 0x10) == *(int *)(param_2 + 0x10))))) {
    iVar5 = 0;
    fVar9 = *(float *)(pcVar3 + 0x14) - *(float *)(param_2 + 0x14);
    fVar10 = *(float *)(pcVar3 + 0x18) - *(float *)(param_2 + 0x18);
    fVar11 = *(float *)(pcVar3 + 0x1c) - *(float *)(param_2 + 0x1c);
    if (fVar9 < 0.0) {
      fVar9 = -fVar9;
    }
    if (fVar10 < 0.0) {
      fVar10 = -fVar10;
    }
    if (fVar11 < 0.0) {
      fVar11 = -fVar11;
    }
    abStack_53[2] = 1;
    abStack_53[1] = 1;
    abStack_53[0] = 1;
    bVar1 = ABS(*(float *)(pcVar3 + 0x20) - *(float *)(param_2 + 0x20)) < 1.1920929e-07;
    do {
      if (iVar5 == 1) {
        pbVar7 = abStack_53 + 1;
        fVar12 = fVar10;
      }
      else if (iVar5 == 2) {
        pbVar7 = abStack_53;
        fVar12 = fVar11;
      }
      else {
        if (iVar5 == 3) goto LAB_10a18f014;
        pbVar7 = abStack_53 + 2;
        fVar12 = fVar9;
      }
      *pbVar7 = fVar12 < 1.1920929e-07;
      iVar5 = iVar5 + 1;
    } while (iVar5 != 4);
    bVar1 = true;
LAB_10a18f014:
    iVar5 = 0;
    while (((bVar8 = abStack_53[1], iVar5 == 1 || (bVar8 = abStack_53[0], iVar5 == 2)) ||
           (bVar8 = abStack_53[2], iVar5 != 3))) {
      while (iVar5 = iVar5 + 1, (bVar8 & 1) == 0) {
        bVar8 = 0;
        uVar6 = 0;
        if (iVar5 == 3) goto LAB_10a18f0b4;
      }
    }
    if ((bVar1) && (*(short *)(pcVar3 + 0x24) == *(short *)(param_2 + 0x24))) {
      uVar6 = (ulong)(*(short *)(pcVar3 + 0x26) == *(short *)(param_2 + 0x26));
      goto LAB_10a18f0b4;
    }
  }
  uVar6 = 0;
LAB_10a18f0b4:
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = uVar6;
  return auVar15;
}



/* Entry: 10a18eeb0; end: 10a18eec3;  */

/* WARNING: Removing unreachable block (ram,0x00010a18f088) */

undefined1  [16] FUN_10a18eeb0(undefined8 param_1,char *param_2)

{
  bool bVar1;
  char *pcVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  byte *pbVar6;
  byte bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  byte abStack_33 [3];
  
  pcVar2 = "vector";
  FUN_109ffde64();
  if (param_2 < (char *)0xaaaaaaaaaaaaaab) {
    lVar3 = (long)param_2 * 0x18;
    __Znwm(lVar3);
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = lVar3;
    return auVar12;
  }
  func_0x000109ffded8();
  if ((((*pcVar2 == *param_2) && (*(int *)(pcVar2 + 4) == *(int *)(param_2 + 4))) &&
      (*(int *)(pcVar2 + 8) == *(int *)(param_2 + 8))) &&
     ((*(int *)(pcVar2 + 0xc) == *(int *)(param_2 + 0xc) &&
      (*(int *)(pcVar2 + 0x10) == *(int *)(param_2 + 0x10))))) {
    iVar4 = 0;
    fVar8 = *(float *)(pcVar2 + 0x14) - *(float *)(param_2 + 0x14);
    fVar9 = *(float *)(pcVar2 + 0x18) - *(float *)(param_2 + 0x18);
    fVar10 = *(float *)(pcVar2 + 0x1c) - *(float *)(param_2 + 0x1c);
    if (fVar8 < 0.0) {
      fVar8 = -fVar8;
    }
    if (fVar9 < 0.0) {
      fVar9 = -fVar9;
    }
    if (fVar10 < 0.0) {
      fVar10 = -fVar10;
    }
    abStack_33[2] = 1;
    abStack_33[1] = 1;
    abStack_33[0] = 1;
    bVar1 = ABS(*(float *)(pcVar2 + 0x20) - *(float *)(param_2 + 0x20)) < 1.1920929e-07;
    do {
      if (iVar4 == 1) {
        pbVar6 = abStack_33 + 1;
        fVar11 = fVar9;
      }
      else if (iVar4 == 2) {
        pbVar6 = abStack_33;
        fVar11 = fVar10;
      }
      else {
        if (iVar4 == 3) goto LAB_10a18f014;
        pbVar6 = abStack_33 + 2;
        fVar11 = fVar8;
      }
      *pbVar6 = fVar11 < 1.1920929e-07;
      iVar4 = iVar4 + 1;
    } while (iVar4 != 4);
    bVar1 = true;
LAB_10a18f014:
    iVar4 = 0;
    while (((bVar7 = abStack_33[1], iVar4 == 1 || (bVar7 = abStack_33[0], iVar4 == 2)) ||
           (bVar7 = abStack_33[2], iVar4 != 3))) {
      while (iVar4 = iVar4 + 1, (bVar7 & 1) == 0) {
        bVar7 = 0;
        uVar5 = 0;
        if (iVar4 == 3) goto LAB_10a18f0b4;
      }
    }
    if ((bVar1) && (*(short *)(pcVar2 + 0x24) == *(short *)(param_2 + 0x24))) {
      uVar5 = (ulong)(*(short *)(pcVar2 + 0x26) == *(short *)(param_2 + 0x26));
      goto LAB_10a18f0b4;
    }
  }
  uVar5 = 0;
LAB_10a18f0b4:
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = uVar5;
  return auVar13;
}



/* Entry: 10a18eec4; end: 10a18ef07;  */

/* WARNING: Removing unreachable block (ram,0x00010a18f088) */

undefined1  [16] FUN_10a18eec4(char *param_1,char *param_2)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  byte abStack_23 [3];
  
  if (param_2 < (char *)0xaaaaaaaaaaaaaab) {
    lVar2 = (long)param_2 * 0x18;
    __Znwm(lVar2);
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = lVar2;
    return auVar11;
  }
  func_0x000109ffded8();
  if ((((*param_1 == *param_2) && (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))) &&
      (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) &&
     ((*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc) &&
      (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10))))) {
    iVar3 = 0;
    fVar7 = *(float *)(param_1 + 0x14) - *(float *)(param_2 + 0x14);
    fVar8 = *(float *)(param_1 + 0x18) - *(float *)(param_2 + 0x18);
    fVar9 = *(float *)(param_1 + 0x1c) - *(float *)(param_2 + 0x1c);
    if (fVar7 < 0.0) {
      fVar7 = -fVar7;
    }
    if (fVar8 < 0.0) {
      fVar8 = -fVar8;
    }
    if (fVar9 < 0.0) {
      fVar9 = -fVar9;
    }
    abStack_23[2] = 1;
    abStack_23[1] = 1;
    abStack_23[0] = 1;
    bVar1 = ABS(*(float *)(param_1 + 0x20) - *(float *)(param_2 + 0x20)) < 1.1920929e-07;
    do {
      if (iVar3 == 1) {
        pbVar5 = abStack_23 + 1;
        fVar10 = fVar8;
      }
      else if (iVar3 == 2) {
        pbVar5 = abStack_23;
        fVar10 = fVar9;
      }
      else {
        if (iVar3 == 3) goto LAB_10a18f014;
        pbVar5 = abStack_23 + 2;
        fVar10 = fVar7;
      }
      *pbVar5 = fVar10 < 1.1920929e-07;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 4);
    bVar1 = true;
LAB_10a18f014:
    iVar3 = 0;
    while (((bVar6 = abStack_23[1], iVar3 == 1 || (bVar6 = abStack_23[0], iVar3 == 2)) ||
           (bVar6 = abStack_23[2], iVar3 != 3))) {
      while (iVar3 = iVar3 + 1, (bVar6 & 1) == 0) {
        bVar6 = 0;
        uVar4 = 0;
        if (iVar3 == 3) goto LAB_10a18f0b4;
      }
    }
    if ((bVar1) && (*(short *)(param_1 + 0x24) == *(short *)(param_2 + 0x24))) {
      uVar4 = (ulong)(*(short *)(param_1 + 0x26) == *(short *)(param_2 + 0x26));
      goto LAB_10a18f0b4;
    }
  }
  uVar4 = 0;
LAB_10a18f0b4:
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = uVar4;
  return auVar12;
}



/* Entry: 10a18ef08; end: 10a18f0bb;  */

/* WARNING: Removing unreachable block (ram,0x00010a18f088) */

bool FUN_10a18ef08(char *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  byte abStack_3 [3];
  
  if ((((*param_1 == *param_2) && (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))) &&
      (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) &&
     ((*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc) &&
      (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10))))) {
    iVar2 = 0;
    fVar5 = *(float *)(param_1 + 0x14) - *(float *)(param_2 + 0x14);
    fVar6 = *(float *)(param_1 + 0x18) - *(float *)(param_2 + 0x18);
    fVar7 = *(float *)(param_1 + 0x1c) - *(float *)(param_2 + 0x1c);
    if (fVar5 < 0.0) {
      fVar5 = -fVar5;
    }
    if (fVar6 < 0.0) {
      fVar6 = -fVar6;
    }
    if (fVar7 < 0.0) {
      fVar7 = -fVar7;
    }
    abStack_3[2] = 1;
    abStack_3[1] = 1;
    abStack_3[0] = 1;
    bVar1 = ABS(*(float *)(param_1 + 0x20) - *(float *)(param_2 + 0x20)) < 1.1920929e-07;
    do {
      if (iVar2 == 1) {
        pbVar3 = abStack_3 + 1;
        fVar8 = fVar6;
      }
      else if (iVar2 == 2) {
        pbVar3 = abStack_3;
        fVar8 = fVar7;
      }
      else {
        if (iVar2 == 3) goto LAB_10a18f014;
        pbVar3 = abStack_3 + 2;
        fVar8 = fVar5;
      }
      *pbVar3 = fVar8 < 1.1920929e-07;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 4);
    bVar1 = true;
LAB_10a18f014:
    iVar2 = 0;
    while (((bVar4 = abStack_3[1], iVar2 == 1 || (bVar4 = abStack_3[0], iVar2 == 2)) ||
           (bVar4 = abStack_3[2], iVar2 != 3))) {
      while (iVar2 = iVar2 + 1, (bVar4 & 1) == 0) {
        bVar4 = 0;
        if (iVar2 == 3) {
          return false;
        }
      }
    }
    if ((bVar1) && (*(short *)(param_1 + 0x24) == *(short *)(param_2 + 0x24))) {
      return *(short *)(param_1 + 0x26) == *(short *)(param_2 + 0x26);
    }
  }
  return false;
}



/* Entry: 10a18f0bc; end: 10a18f1cf;  */

ulong FUN_10a18f0bc(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  if (*(long *)(param_2 + 0x360) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    lVar4 = *(long *)(param_2 + 0x360) * 0x30;
    lVar3 = param_2;
    do {
      puVar1 = &uStack_41;
      FUN_10a18f1d0(puVar1,lVar3);
      uVar2 = uVar2 + 0x9e3779b97f4a7c15;
      uVar2 = (ulong)(puVar1 + uVar2 * 0x40 + -0x61c8864680b583eb + (uVar2 >> 2)) ^ uVar2;
      lVar3 = lVar3 + 0x30;
      lVar4 = lVar4 + -0x30;
    } while (lVar4 != 0);
  }
  if (*(long *)(param_2 + 0x6a8) != 0) {
    lVar4 = *(long *)(param_2 + 0x6a8) * 0xd0;
    lVar3 = param_2 + 0x368;
    do {
      puVar1 = &uStack_42;
      FUN_10a18f244(puVar1,lVar3);
      uVar2 = uVar2 + 0x9e3779b97f4a7c15;
      uVar2 = (ulong)(puVar1 + uVar2 * 0x40 + -0x61c8864680b583eb + (uVar2 >> 2)) ^ uVar2;
      lVar3 = lVar3 + 0xd0;
      lVar4 = lVar4 + -0xd0;
    } while (lVar4 != 0);
  }
  if (*(long *)(param_2 + 0x838) != 0) {
    lVar3 = *(long *)(param_2 + 0x838) * 0x1c;
    param_2 = param_2 + 0x6b0;
    do {
      puVar1 = &uStack_43;
      FUN_10a18f3ac(puVar1,param_2);
      uVar2 = uVar2 + 0x9e3779b97f4a7c15;
      uVar2 = (ulong)(puVar1 + uVar2 * 0x40 + -0x61c8864680b583eb + (uVar2 >> 2)) ^ uVar2;
      param_2 = param_2 + 0x1c;
      lVar3 = lVar3 + -0x1c;
    } while (lVar3 != 0);
  }
  return uVar2;
}



/* Entry: 10a18f1d0; end: 10a18f243;  */

void FUN_10a18f1d0(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_14 = *param_2;
  uStack_18 = param_2[1];
  uStack_1c = param_2[2];
  uStack_20 = param_2[3];
  uStack_24 = param_2[4];
  uStack_28 = param_2[5];
  uStack_2c = param_2[8];
  uStack_30 = param_2[9];
  uStack_34 = param_2[10];
  uStack_38 = param_2[0xb];
  FUN_10a18f404(&uStack_14,&uStack_18,&uStack_1c,&uStack_20,&uStack_24,&uStack_28,&uStack_2c,
                &uStack_30,&uStack_34,&uStack_38);
  return;
}



/* Entry: 10a18f244; end: 10a18f3ab;  */

ulong FUN_10a18f244(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  uint *puVar5;
  
  if (*(long *)(param_2 + 0x20) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    lVar4 = *(long *)(param_2 + 0x20) << 3;
    puVar5 = (uint *)(param_2 + 4);
    do {
      uVar1 = (ulong)puVar5[-1] + 0x9e3779b97f4a7c15;
      uVar3 = uVar3 + 0x9e3779b97f4a7c15;
      uVar3 = uVar3 * 0x40 + -0x61c8864680b583eb + (uVar3 >> 2) +
              ((ulong)*puVar5 + 0x9e3779b97f4a7c15 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1) ^ uVar3;
      puVar5 = puVar5 + 2;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  if (*(long *)(param_2 + 0x68) != 0) {
    lVar4 = *(long *)(param_2 + 0x68) << 3;
    puVar5 = (uint *)(param_2 + 0x2c);
    do {
      uVar1 = (ulong)puVar5[-1] + 0x9e3779b97f4a7c15;
      uVar3 = uVar3 + 0x9e3779b97f4a7c15;
      uVar3 = uVar3 * 0x40 + -0x61c8864680b583eb + (uVar3 >> 2) +
              ((ulong)*puVar5 + 0x9e3779b97f4a7c15 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1) ^ uVar3;
      puVar5 = puVar5 + 2;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  if (*(long *)(param_2 + 0xb0) != 0) {
    lVar4 = *(long *)(param_2 + 0xb0) << 3;
    puVar5 = (uint *)(param_2 + 0x74);
    do {
      uVar1 = (ulong)puVar5[-1] + 0x9e3779b97f4a7c15;
      uVar3 = uVar3 + 0x9e3779b97f4a7c15;
      uVar3 = uVar3 * 0x40 + -0x61c8864680b583eb + (uVar3 >> 2) +
              ((ulong)*puVar5 + 0x9e3779b97f4a7c15 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1) ^ uVar3;
      puVar5 = puVar5 + 2;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  uVar1 = (ulong)*(uint *)(param_2 + 0xb8) + 0x9e3779b97f4a7c15;
  uVar3 = uVar3 + 0x9e3779b97f4a7c15;
  uVar2 = (ulong)*(uint *)(param_2 + 0xc0) + 0x9e3779b97f4a7c15;
  uVar3 = (uVar3 * 0x40 + -0x61c8864680b583eb + (uVar3 >> 2) +
           ((ulong)*(uint *)(param_2 + 0xbc) + 0x9e3779b97f4a7c15 + uVar1 * 0x40 + (uVar1 >> 2) ^
           uVar1) ^ uVar3) + 0x9e3779b97f4a7c15;
  uVar3 = (((ulong)*(uint *)(param_2 + 0xc4) + 0x9e3779b97f4a7c15 + uVar2 * 0x40 + (uVar2 >> 2) ^
           uVar2) + 0x9e3779b97f4a7c15 + uVar3 * 0x40 + (uVar3 >> 2) ^ uVar3) + 0x9e3779b97f4a7c15;
  return (ulong)*(uint *)(param_2 + 200) + 0x9e3779b97f4a7c15 + uVar3 * 0x40 + (uVar3 >> 2) ^ uVar3;
}



/* Entry: 10a18f3ac; end: 10a18f403;  */

void FUN_10a18f3ac(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_14 = *param_2;
  uStack_18 = param_2[1];
  uStack_1c = param_2[2];
  uStack_20 = param_2[3];
  uStack_24 = param_2[4];
  uStack_28 = param_2[5];
  uStack_2c = param_2[6];
  func_0x00010a18f4d8(&uStack_14,&uStack_18,&uStack_1c,&uStack_20,&uStack_24,&uStack_28,&uStack_2c);
  return;
}



/* Entry: 10a18f404; end: 10a18f56b;  */

ulong FUN_10a18f404(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                   uint *param_6,uint *param_7,uint *param_8,uint *param_9,uint *param_10)

{
  ulong uVar1;
  
  uVar1 = (ulong)*param_1 + 0x9e3779b97f4a7c15;
  uVar1 = (ulong)*param_2 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_3 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_4 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_5 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_6 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_7 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_8 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_9 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  return (ulong)*param_10 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
}



/* Entry: 10a18f56c; end: 10a18f697;  */

undefined8 * FUN_10a18f56c(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = *param_2;
  param_1[4] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 2) = uVar1;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  if (*(long *)(param_2 + 10) != 0) {
    puVar3 = param_2 + 2;
    lVar4 = *(long *)(param_2 + 10) << 2;
    do {
      func_0x00010928bcfc(param_1 + 3,puVar3);
      puVar3 = puVar3 + 1;
      lVar4 = lVar4 + -4;
    } while (lVar4 != 0);
  }
  uVar2 = *(undefined8 *)(param_2 + 0xc);
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = uVar2;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  if (*(long *)(param_2 + 0x16) != 0) {
    puVar3 = param_2 + 0xe;
    lVar4 = *(long *)(param_2 + 0x16) << 2;
    do {
      func_0x000109261ecc(param_1 + 9,puVar3);
      puVar3 = puVar3 + 1;
      lVar4 = lVar4 + -4;
    } while (lVar4 != 0);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = uVar2;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  if (*(long *)(param_2 + 0x22) != 0) {
    puVar3 = param_2 + 0x1a;
    lVar4 = *(long *)(param_2 + 0x22) << 2;
    do {
      func_0x000109261ecc(param_1 + 0xf,puVar3);
      puVar3 = puVar3 + 1;
      lVar4 = lVar4 + -4;
    } while (lVar4 != 0);
  }
  param_1[0x14] = 0;
  func_0x00010a1e4a00(param_1);
  return param_1;
}



/* Entry: 10a18f698; end: 10a18f86f;  */

long * FUN_10a18f698(long *param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar2 = (long *)param_1[1];
  if (plVar2 < (long *)param_1[2]) {
    plVar11 = param_2;
    if (param_2 == plVar2) {
      *(int *)plVar2 = (int)*param_3;
      param_1[1] = (long)plVar2 + 4;
    }
    else {
      plVar9 = plVar2;
      if ((long *)((long)plVar2 - 4U) < plVar2) {
        *(int *)plVar2 = (int)*(long *)((long)plVar2 - 4U);
        plVar9 = (long *)((long)plVar2 + 4);
      }
      param_1[1] = (long)plVar9;
      if (plVar2 != (long *)((long)param_2 + 4U)) {
        _memmove((long *)((long)param_2 + 4U),param_2);
        plVar9 = (long *)param_1[1];
      }
      if (plVar9 < param_2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a18f834);
        (*pcVar1)();
      }
      lVar7 = 4;
      if (plVar9 <= param_3 || param_3 < param_2) {
        lVar7 = 0;
      }
      *(undefined4 *)param_2 = *(undefined4 *)((long)param_3 + lVar7);
    }
  }
  else {
    lVar7 = *param_1;
    uVar4 = ((long)plVar2 - lVar7 >> 2) + 1;
    if (uVar4 >> 0x3e != 0) {
      FUN_109ffe1ac();
      if (plStack_48 != plStack_50) {
        plStack_48 = (long *)((long)plStack_48 +
                             (((long)plStack_50 - (long)plStack_48) + 3U & 0xfffffffffffffffc));
      }
      if (plStack_58 != (long *)0x0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      plVar2 = (long *)param_1[1];
      if (plVar2 < (long *)param_1[2]) {
        plVar11 = param_2;
        if ((long)param_2 - (long)plVar2 == 0) {
          *plVar2 = *param_3;
          param_1[1] = (long)(plVar2 + 1);
        }
        else {
          plVar9 = plVar2;
          if (plVar2 + -1 < plVar2) {
            *plVar2 = plVar2[-1];
            plVar9 = plVar2 + 1;
          }
          param_1[1] = (long)plVar9;
          if (plVar2 != param_2 + 1) {
            plVar9 = plVar2 + -2;
            lVar7 = ((long)param_2 - (long)plVar2) + 8;
            puVar3 = (undefined4 *)((long)plVar2 + -4);
            do {
              puVar3[-1] = (int)*plVar9;
              *puVar3 = *(undefined4 *)((long)plVar9 + 4);
              plVar9 = plVar9 + -1;
              lVar7 = lVar7 + 8;
              puVar3 = puVar3 + -2;
            } while (lVar7 != 0);
          }
          *(int *)param_2 = (int)*param_3;
          *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)((long)param_3 + 4);
        }
      }
      else {
        lVar7 = *param_1;
        uVar4 = ((long)plVar2 - lVar7 >> 3) + 1;
        if (uVar4 >> 0x3d != 0) {
          FUN_10a187e74();
          if (plStack_a8 != plStack_b0) {
            plStack_a8 = (long *)((long)plStack_a8 +
                                 (((long)plStack_b0 - (long)plStack_a8) + 7U & 0xfffffffffffffff8));
          }
          if (plStack_b8 != (long *)0x0) {
            __ZdlPv();
          }
          __Unwind_Resume();
          plVar11 = (long *)param_1[2];
          plVar9 = param_1;
          plVar2 = plVar11;
          if (plVar11 == (long *)param_1[3]) {
            plVar2 = (long *)*param_1;
            plVar5 = (long *)param_1[1];
            if (plVar5 < plVar2 || (long)plVar5 - (long)plVar2 == 0) {
              uVar4 = (long)plVar11 - (long)plVar2 >> 2;
              if ((long)plVar11 - (long)plVar2 == 0) {
                uVar4 = 1;
              }
              plVar9 = (long *)param_1[4];
              uVar8 = uVar4;
              FUN_10a187e88();
              plVar11 = plVar9 + (uVar4 >> 2);
              lVar7 = param_1[2] - param_1[1];
              plVar2 = plVar11;
              if (lVar7 != 0) {
                plVar2 = (long *)((long)plVar11 + lVar7);
                plVar5 = (long *)param_1[1];
                plVar10 = plVar11;
                do {
                  *plVar10 = *plVar5;
                  lVar7 = lVar7 + -8;
                  plVar5 = plVar5 + 1;
                  plVar10 = plVar10 + 1;
                } while (lVar7 != 0);
              }
              plVar5 = (long *)*param_1;
              *param_1 = (long)plVar9;
              param_1[1] = (long)plVar11;
              param_1[2] = (long)plVar2;
              param_1[3] = (long)(plVar9 + uVar8);
              if (plVar5 != (long *)0x0) {
                __ZdlPv(plVar5);
                plVar2 = (long *)param_1[2];
                plVar9 = plVar5;
              }
            }
            else {
              lVar7 = ((long)plVar5 - (long)plVar2 >> 3) + 1;
              plVar10 = plVar5 + -((ulong)(lVar7 - (lVar7 >> 0x3f)) >> 1);
              plVar2 = plVar10;
              for (; plVar5 != plVar11; plVar5 = plVar5 + 1) {
                *(int *)plVar2 = (int)*plVar5;
                *(undefined4 *)((long)plVar2 + 4) = *(undefined4 *)((long)plVar5 + 4);
                plVar2 = plVar2 + 1;
              }
              param_1[1] = (long)plVar10;
              param_1[2] = (long)plVar2;
            }
          }
          *plVar2 = *param_2;
          param_1[2] = param_1[2] + 8;
          return plVar9;
        }
        uVar6 = param_1[2] - lVar7;
        uVar8 = (long)uVar6 >> 2;
        if (uVar8 <= uVar4) {
          uVar8 = uVar4;
        }
        if (0x7ffffffffffffff7 < uVar6) {
          uVar8 = 0x1fffffffffffffff;
        }
        plStack_98 = param_1;
        if (uVar8 == 0) {
          plVar2 = (long *)0x0;
        }
        else {
          plVar2 = param_1;
          FUN_10a187e88();
        }
        plStack_b0 = (long *)((long)plVar2 + ((long)param_2 - lVar7));
        plStack_a0 = plVar2 + uVar8;
        plStack_b8 = plVar2;
        plStack_a8 = plStack_b0;
        FUN_10a18fa48(&plStack_b8,param_3);
        plVar11 = plStack_b0;
        _memcpy(plStack_a8,param_2,param_1[1] - (long)param_2);
        plStack_a8 = (long *)((long)plStack_a8 + (param_1[1] - (long)param_2));
        param_1[1] = (long)param_2;
        lVar7 = (long)plStack_b0 - ((long)param_2 - *param_1);
        _memcpy(lVar7);
        plStack_b8 = (long *)*param_1;
        *param_1 = lVar7;
        lVar7 = param_1[2];
        param_1[2] = (long)plStack_a0;
        param_1[1] = (long)plStack_a8;
        if (plStack_b8 != (long *)0x0) {
          plStack_b0 = plStack_b8;
          plStack_a8 = plStack_b8;
          plStack_a0 = (long *)lVar7;
          __ZdlPv();
        }
      }
      return plVar11;
    }
    uVar6 = param_1[2] - lVar7;
    uVar8 = (long)uVar6 >> 1;
    if (uVar8 <= uVar4) {
      uVar8 = uVar4;
    }
    if (0x7ffffffffffffffb < uVar6) {
      uVar8 = 0x3fffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar8 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_109ffe1c0();
    }
    plStack_50 = (long *)((long)plVar2 + ((long)param_2 - lVar7));
    lStack_40 = (long)plVar2 + uVar8 * 4;
    plStack_58 = plVar2;
    plStack_48 = plStack_50;
    func_0x000108a20d14(&plStack_58,param_3);
    plVar11 = plStack_50;
    _memcpy(plStack_48,param_2,param_1[1] - (long)param_2);
    plStack_48 = (long *)((long)plStack_48 + (param_1[1] - (long)param_2));
    param_1[1] = (long)param_2;
    lVar7 = (long)plStack_50 - ((long)param_2 - *param_1);
    _memcpy(lVar7);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar7;
    lVar7 = param_1[2];
    param_1[2] = lStack_40;
    param_1[1] = (long)plStack_48;
    if (plStack_58 != (long *)0x0) {
      plStack_50 = plStack_58;
      plStack_48 = plStack_58;
      lStack_40 = lVar7;
      __ZdlPv();
    }
  }
  return plVar11;
}



/* Entry: 10a18f870; end: 10a18fa47;  */

long * FUN_10a18f870(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar1 = (long *)param_1[1];
  if (plVar1 < (long *)param_1[2]) {
    plVar10 = param_2;
    if ((long)param_2 - (long)plVar1 == 0) {
      *plVar1 = *param_3;
      param_1[1] = (long)(plVar1 + 1);
    }
    else {
      plVar2 = plVar1;
      if (plVar1 + -1 < plVar1) {
        *plVar1 = plVar1[-1];
        plVar2 = plVar1 + 1;
      }
      param_1[1] = (long)plVar2;
      if (plVar1 != param_2 + 1) {
        plVar2 = plVar1 + -2;
        lVar7 = ((long)param_2 - (long)plVar1) + 8;
        puVar3 = (undefined4 *)((long)plVar1 - 4);
        do {
          puVar3[-1] = (int)*plVar2;
          *puVar3 = *(undefined4 *)((long)plVar2 + 4);
          plVar2 = plVar2 + -1;
          lVar7 = lVar7 + 8;
          puVar3 = puVar3 + -2;
        } while (lVar7 != 0);
      }
      *(int *)param_2 = (int)*param_3;
      *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)((long)param_3 + 4);
    }
  }
  else {
    lVar7 = *param_1;
    uVar4 = ((long)plVar1 - lVar7 >> 3) + 1;
    if (uVar4 >> 0x3d != 0) {
      FUN_10a187e74();
      if (plStack_48 != plStack_50) {
        plStack_48 = (long *)((long)plStack_48 +
                             (((long)plStack_50 - (long)plStack_48) + 7U & 0xfffffffffffffff8));
      }
      if (plStack_58 != (long *)0x0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      plVar10 = (long *)param_1[2];
      plVar2 = param_1;
      plVar1 = plVar10;
      if (plVar10 == (long *)param_1[3]) {
        plVar1 = (long *)*param_1;
        plVar5 = (long *)param_1[1];
        if (plVar5 < plVar1 || (long)plVar5 - (long)plVar1 == 0) {
          uVar4 = (long)plVar10 - (long)plVar1 >> 2;
          if ((long)plVar10 - (long)plVar1 == 0) {
            uVar4 = 1;
          }
          plVar2 = (long *)param_1[4];
          uVar8 = uVar4;
          FUN_10a187e88();
          plVar10 = plVar2 + (uVar4 >> 2);
          lVar7 = param_1[2] - param_1[1];
          plVar1 = plVar10;
          if (lVar7 != 0) {
            plVar1 = (long *)((long)plVar10 + lVar7);
            plVar5 = (long *)param_1[1];
            plVar9 = plVar10;
            do {
              *plVar9 = *plVar5;
              lVar7 = lVar7 + -8;
              plVar5 = plVar5 + 1;
              plVar9 = plVar9 + 1;
            } while (lVar7 != 0);
          }
          plVar5 = (long *)*param_1;
          *param_1 = (long)plVar2;
          param_1[1] = (long)plVar10;
          param_1[2] = (long)plVar1;
          param_1[3] = (long)(plVar2 + uVar8);
          if (plVar5 != (long *)0x0) {
            __ZdlPv(plVar5);
            plVar1 = (long *)param_1[2];
            plVar2 = plVar5;
          }
        }
        else {
          lVar7 = ((long)plVar5 - (long)plVar1 >> 3) + 1;
          plVar9 = plVar5 + -((ulong)(lVar7 - (lVar7 >> 0x3f)) >> 1);
          plVar1 = plVar9;
          for (; plVar5 != plVar10; plVar5 = plVar5 + 1) {
            *(int *)plVar1 = (int)*plVar5;
            *(undefined4 *)((long)plVar1 + 4) = *(undefined4 *)((long)plVar5 + 4);
            plVar1 = plVar1 + 1;
          }
          param_1[1] = (long)plVar9;
          param_1[2] = (long)plVar1;
        }
      }
      *plVar1 = *param_2;
      param_1[2] = param_1[2] + 8;
      return plVar2;
    }
    uVar6 = param_1[2] - lVar7;
    uVar8 = (long)uVar6 >> 2;
    if (uVar8 <= uVar4) {
      uVar8 = uVar4;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar8 = 0x1fffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar8 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_10a187e88();
    }
    plStack_50 = (long *)((long)plVar1 + ((long)param_2 - lVar7));
    plStack_40 = plVar1 + uVar8;
    plStack_58 = plVar1;
    plStack_48 = plStack_50;
    FUN_10a18fa48(&plStack_58,param_3);
    plVar10 = plStack_50;
    _memcpy(plStack_48,param_2,param_1[1] - (long)param_2);
    plStack_48 = (long *)((long)plStack_48 + (param_1[1] - (long)param_2));
    param_1[1] = (long)param_2;
    lVar7 = (long)plStack_50 - ((long)param_2 - *param_1);
    _memcpy(lVar7);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar7;
    lVar7 = param_1[2];
    param_1[2] = (long)plStack_40;
    param_1[1] = (long)plStack_48;
    if (plStack_58 != (long *)0x0) {
      plStack_50 = plStack_58;
      plStack_48 = plStack_58;
      plStack_40 = (long *)lVar7;
      __ZdlPv();
    }
  }
  return plVar10;
}



/* Entry: 10a18fa48; end: 10a18fb53;  */

void FUN_10a18fa48(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar1 = (undefined8 *)param_1[2];
  puVar6 = puVar1;
  if (puVar1 == (undefined8 *)param_1[3]) {
    puVar6 = (undefined8 *)*param_1;
    puVar5 = (undefined8 *)param_1[1];
    if (puVar5 < puVar6 || (long)puVar5 - (long)puVar6 == 0) {
      uVar4 = (long)puVar1 - (long)puVar6 >> 2;
      if ((long)puVar1 - (long)puVar6 == 0) {
        uVar4 = 1;
      }
      uVar2 = param_1[4];
      uVar3 = uVar4;
      FUN_10a187e88();
      puVar1 = (undefined8 *)(uVar2 + (uVar4 >> 2) * 8);
      lVar7 = param_1[2] - (long)param_1[1];
      puVar6 = puVar1;
      if (lVar7 != 0) {
        puVar6 = (undefined8 *)((long)puVar1 + lVar7);
        puVar5 = (undefined8 *)param_1[1];
        puVar8 = puVar1;
        do {
          *puVar8 = *puVar5;
          lVar7 = lVar7 + -8;
          puVar5 = puVar5 + 1;
          puVar8 = puVar8 + 1;
        } while (lVar7 != 0);
      }
      uVar4 = *param_1;
      *param_1 = uVar2;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar6;
      param_1[3] = uVar2 + uVar3 * 8;
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar6 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar7 = ((long)puVar5 - (long)puVar6 >> 3) + 1;
      puVar8 = puVar5 + -((ulong)(lVar7 - (lVar7 >> 0x3f)) >> 1);
      puVar6 = puVar8;
      for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
        *(undefined4 *)puVar6 = *(undefined4 *)puVar5;
        *(undefined4 *)((long)puVar6 + 4) = *(undefined4 *)((long)puVar5 + 4);
        puVar6 = puVar6 + 1;
      }
      param_1[1] = (ulong)puVar8;
      param_1[2] = (ulong)puVar6;
    }
  }
  *puVar6 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10a18fb54; end: 10a18fbf7;  */

void FUN_10a18fb54(undefined8 param_1,undefined4 *param_2)

{
  uint uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_14 = param_2[2];
  uStack_20 = param_2[3];
  uStack_18 = *param_2;
  uStack_1c = param_2[1];
  uStack_24 = param_2[4];
  uStack_28 = param_2[5];
  uStack_30 = param_2[7];
  uStack_2c = (uint)*(byte *)(param_2 + 6);
  uStack_38 = param_2[9];
  uStack_34 = (uint)*(byte *)(param_2 + 8);
  uStack_40 = 0;
  uStack_44 = param_2[0xc];
  uStack_48 = (uint)*(byte *)(param_2 + 0xd);
  FUN_10a18fbf8(&uStack_14,&uStack_18,&uStack_1c,&uStack_20,&uStack_24,&uStack_28,&uStack_2c,
                &uStack_30,&uStack_34,&uStack_38,(long)&uStack_40 + 4,&uStack_40,&uStack_44,
                &uStack_48);
  return;
}



/* Entry: 10a18fbf8; end: 10a18fd23;  */

ulong FUN_10a18fbf8(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                   uint *param_6,uint *param_7,uint *param_8,uint *param_9,uint *param_10,
                   uint *param_11,uint *param_12,uint *param_13,uint *param_14)

{
  ulong uVar1;
  
  uVar1 = (ulong)*param_1 + 0x9e3779b97f4a7c15;
  uVar1 = (ulong)*param_2 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_3 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_4 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_5 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_6 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_7 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_8 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_9 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_10 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_11 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_12 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_13 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  return (ulong)*param_14 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
}



/* Entry: 10a18fd24; end: 10a18fd37;  */

undefined1  [16] FUN_10a18fd24(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  plVar1 = (long *)&UNK_10f6403f7;
  FUN_109ffde64();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar2 = param_2 * 0x18;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000109ffded8();
  func_0x00010a18fdac();
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = plVar1;
  return auVar4;
}



/* Entry: 10a18fd38; end: 10a18fdfb;  */

undefined1  [16] FUN_10a18fd38(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_2 * 0x18;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000109ffded8();
  func_0x00010a18fdac();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a18fdfc; end: 10a18fe0f;  */

void FUN_10a18fdfc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar1 = &UNK_10f6403f7;
  FUN_109ffde64();
  if ((undefined8 *)0x666666666666666 < param_2) {
    func_0x000109ffded8();
    ppuStack_78 = &puStack_60;
    ppuStack_70 = &puStack_58;
    puStack_58 = param_4;
    puVar2 = param_2;
    puStack_80 = puVar1;
    puStack_60 = param_4;
    if (param_2 == param_3) {
      uStack_68 = 1;
    }
    else {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        puStack_58[2] = puVar2[2];
        puStack_58[1] = uVar4;
        *puStack_58 = uVar3;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        puStack_58[3] = puVar2[3];
        *(undefined4 *)(puStack_58 + 4) = *(undefined4 *)(puVar2 + 4);
        puVar2 = puVar2 + 5;
        puStack_58 = puStack_58 + 5;
      } while (puVar2 != param_3);
      uStack_68 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    FUN_10a18ff14(&puStack_80);
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 10a18fe10; end: 10a18ff13;  */

void FUN_10a18fe10(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if ((undefined8 *)0x666666666666666 < param_2) {
    func_0x000109ffded8();
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    puStack_48 = param_4;
    puVar1 = param_2;
    uStack_70 = param_1;
    puStack_50 = param_4;
    if (param_2 == param_3) {
      uStack_58 = 1;
    }
    else {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        puStack_48[2] = puVar1[2];
        puStack_48[1] = uVar3;
        *puStack_48 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        puStack_48[3] = puVar1[3];
        *(undefined4 *)(puStack_48 + 4) = *(undefined4 *)(puVar1 + 4);
        puVar1 = puVar1 + 5;
        puStack_48 = puStack_48 + 5;
      } while (puVar1 != param_3);
      uStack_58 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    FUN_10a18ff14(&uStack_70);
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 10a18ff14; end: 10a18ff47;  */

long FUN_10a18ff14(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a18ff48(param_1);
  }
  return param_1;
}



/* Entry: 10a18ff48; end: 10a190013;  */

/* WARNING: Removing unreachable block (ram,0x00010a18ff74) */

void FUN_10a18ff48(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x28
      ) {
  }
  return;
}



/* Entry: 10a190014; end: 10a19016b;  */

long * FUN_10a190014(long *param_1,long *param_2,undefined1 *param_3,undefined1 *param_4,
                    undefined1 *param_5,undefined1 *param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  lVar9 = param_1[1] - *param_1;
  uVar7 = (lVar9 >> 3) * -0x3333333333333333 + 1;
  if (uVar7 < 0x666666666666667) {
    lVar6 = param_1[2] - *param_1 >> 3;
    uVar8 = lVar6 * -0x6666666666666666;
    if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
      uVar8 = uVar7;
    }
    if (0x333333333333332 < (ulong)(lVar6 * -0x3333333333333333)) {
      uVar8 = 0x666666666666666;
    }
    plStack_58 = param_1;
    if (uVar8 == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = param_1;
      FUN_10a18fe10();
    }
    lVar9 = (long)plVar5 + lVar9;
    plStack_60 = plVar5 + uVar8 * 5;
    plStack_78 = plVar5;
    plStack_70 = (long *)lVar9;
    plStack_68 = (long *)lVar9;
    FUN_10a19016c(lVar9,param_2,param_3,param_4,param_5,param_6);
    plStack_68 = (long *)(lVar9 + 0x28);
    lVar9 = lVar9 + (*param_1 - param_1[1]);
    func_0x00010a18fe54(param_1,*param_1,param_1[1],lVar9);
    plVar5 = plStack_68;
    plStack_78 = (long *)*param_1;
    *param_1 = lVar9;
    lVar9 = param_1[2];
    param_1[2] = (long)plStack_60;
    param_1[1] = (long)plStack_68;
    plStack_70 = plStack_78;
    plStack_68 = plStack_78;
    plStack_60 = (long *)lVar9;
    func_0x00010a18ff8c(&plStack_78);
    return plVar5;
  }
  FUN_10a18fdfc();
  func_0x00010a18ff8c(&plStack_78);
  __Unwind_Resume();
  uVar1 = *param_3;
  uVar2 = *param_4;
  uVar3 = *param_5;
  uVar4 = *param_6;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    lVar6 = param_2[1];
    lVar9 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = lVar6;
    *param_1 = lVar9;
  }
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = uVar2;
  *(undefined1 *)((long)param_1 + 0x21) = uVar3;
  *(undefined1 *)((long)param_1 + 0x22) = uVar4;
  *(undefined1 *)((long)param_1 + 0x23) = uVar1;
  return param_1;
}



/* Entry: 10a19016c; end: 10a1901ef;  */

undefined8 *
FUN_10a19016c(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3,undefined1 *param_4,
             undefined1 *param_5,undefined1 *param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_3;
  uVar2 = *param_4;
  uVar3 = *param_5;
  uVar4 = *param_6;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar6 = param_2[1];
    uVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    *param_1 = uVar5;
  }
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = uVar2;
  *(undefined1 *)((long)param_1 + 0x21) = uVar3;
  *(undefined1 *)((long)param_1 + 0x22) = uVar4;
  *(undefined1 *)((long)param_1 + 0x23) = uVar1;
  return param_1;
}



/* Entry: 10a1901f0; end: 10a190267;  */

void FUN_10a1901f0(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_38;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar4 = lVar3;
    lVar1 = plVar2[1];
    if (plVar2[1] != lVar3) {
      do {
        lVar4 = lVar1 + -0x108;
        lStack_38 = lVar1 + -0xf0;
        FUN_10a1901f0(&lStack_38);
        lVar1 = lVar4;
      } while (lVar4 != lVar3);
      lVar4 = *(long *)*param_1;
    }
    plVar2[1] = lVar3;
    __ZdlPv(lVar4);
  }
  return;
}



/* Entry: 10a190268; end: 10a1902eb;  */

undefined8 FUN_10a190268(undefined8 param_1,undefined4 *param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  __ZNSt3__19to_stringEi(&ppuStack_38,*param_2);
  pppuVar1 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar1 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar1,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  return param_1;
}



/* Entry: 10a1902ec; end: 10a19036b;  */

void FUN_10a1902ec(long *param_1,long param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    lStack_28 = lVar1;
    FUN_10a18bbf4(&lStack_28);
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 10a19036c; end: 10a1903c3;  */

long * FUN_10a19036c(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    plVar2 = param_1 + lVar1 * 5 + -4;
    do {
      if (*(char *)((long)plVar2 + 0x17) < '\0') {
        __ZdlPv(*plVar2);
      }
      plVar2 = plVar2 + -5;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return param_1;
}



/* Entry: 10a1903c4; end: 10a19059b;  */

/* WARNING: Removing unreachable block (ram,0x00010a19055c) */

void FUN_10a1903c4(long *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x23;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar5 = *param_1;
  plVar3 = param_1;
  if ((ulong)((param_1[2] - lVar5 >> 3) * 0x6db6db6db6db6db7) < param_4) {
    plVar2 = param_1;
    FUN_10a19059c();
    if (0x492492492492492 < param_4) {
      FUN_10a1907e8();
      param_1[1] = unaff_x23;
      __Unwind_Resume();
      param_1[1] = 0x492492492492492;
      __Unwind_Resume();
      if (*plVar2 != 0) {
        FUN_10a19079c();
        __ZdlPv(*plVar2);
        *plVar2 = 0;
        plVar2[1] = 0;
        plVar2[2] = 0;
      }
      return;
    }
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar4 = lVar5 * -0x2492492492492492;
    if (uVar4 < param_4 || uVar4 - param_4 == 0) {
      uVar4 = param_4;
    }
    if (0x249249249249248 < (ulong)(lVar5 * 0x6db6db6db6db6db7)) {
      uVar4 = 0x492492492492492;
    }
    func_0x00010a1905d4(param_1,uVar4);
    FUN_10a190620(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar6 = param_1[1];
    if (param_4 <= (ulong)((lVar6 - lVar5 >> 3) * 0x6db6db6db6db6db7)) {
      if (param_2 != param_3) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar5,param_2);
          *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(param_2 + 0x18);
          uVar8 = *(undefined8 *)(param_2 + 0x28);
          uVar7 = *(undefined8 *)(param_2 + 0x20);
          *(undefined4 *)(lVar5 + 0x30) = *(undefined4 *)(param_2 + 0x30);
          *(undefined8 *)(lVar5 + 0x28) = uVar8;
          *(undefined8 *)(lVar5 + 0x20) = uVar7;
          param_2 = param_2 + 0x38;
          lVar5 = lVar5 + 0x38;
        } while (param_2 != param_3);
        lVar6 = param_1[1];
      }
      for (; lVar6 != lVar5; lVar6 = lVar6 + -0x38) {
      }
      param_1[1] = lVar5;
      return;
    }
    lVar1 = param_2 + (lVar6 - lVar5);
    if (lVar6 != lVar5) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar5,param_2);
        *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(param_2 + 0x18);
        uVar8 = *(undefined8 *)(param_2 + 0x28);
        uVar7 = *(undefined8 *)(param_2 + 0x20);
        *(undefined4 *)(lVar5 + 0x30) = *(undefined4 *)(param_2 + 0x30);
        *(undefined8 *)(lVar5 + 0x28) = uVar8;
        *(undefined8 *)(lVar5 + 0x20) = uVar7;
        param_2 = param_2 + 0x38;
        lVar5 = lVar5 + 0x38;
      } while (param_2 != lVar1);
      lVar6 = param_1[1];
    }
    FUN_10a190620(param_1,lVar1,param_3,lVar6);
  }
  param_1[1] = (long)plVar3;
  return;
}



/* Entry: 10a19059c; end: 10a19061f;  */

void FUN_10a19059c(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10a19079c();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10a190620; end: 10a1906bf;  */

long FUN_10a190620(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  lStack_40 = param_4;
  uStack_60 = param_1;
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x38) {
    FUN_10a1906c0(param_4,param_2);
    param_4 = lStack_38 + 0x38;
  }
  uStack_48 = 1;
  FUN_10a190724(&uStack_60);
  return param_4;
}



/* Entry: 10a1906c0; end: 10a190723;  */

undefined8 * FUN_10a1906c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  param_1[3] = param_2[3];
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  return param_1;
}



/* Entry: 10a190724; end: 10a190757;  */

long FUN_10a190724(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a190758(param_1);
  }
  return param_1;
}



/* Entry: 10a190758; end: 10a19079b;  */

/* WARNING: Removing unreachable block (ram,0x00010a190784) */

void FUN_10a190758(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x38
      ) {
  }
  return;
}



/* Entry: 10a19079c; end: 10a1907e7;  */

/* WARNING: Removing unreachable block (ram,0x00010a1907c8) */

void FUN_10a19079c(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x38) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10a1907e8; end: 10a1907fb;  */

void FUN_10a1907e8(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&UNK_10f6403f7;
  FUN_109ffde64();
  if (param_2 < 0x492492492492493) {
    __Znwm(param_2 * 0x38);
    return;
  }
  func_0x000109ffded8();
  if (*(long *)*puVar1 != 0) {
    FUN_10a19079c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*puVar1);
    return;
  }
  return;
}



/* Entry: 10a1907fc; end: 10a190883;  */

void FUN_10a1907fc(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x492492492492493) {
    __Znwm(param_2 * 0x38);
    return;
  }
  func_0x000109ffded8();
  if (*(long *)*param_1 != 0) {
    FUN_10a19079c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a190884; end: 10a1908f3;  */

void FUN_10a190884(long param_1,undefined1 *param_2,undefined1 *param_3,long param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    FUN_10a1908f4(param_1,param_4);
    puVar1 = *(undefined1 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined1 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10a1908f4; end: 10a19092f;  */

void FUN_10a1908f4(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *extraout_x8;
  long *plVar5;
  long lVar6;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  if (param_2 < 0) {
    FUN_10a190930();
    plVar3 = (long *)&UNK_10f6403f7;
    FUN_109ffde64();
    plVar4 = (long *)0x90;
    __Znwm();
    plVar5 = plVar4 + 1;
    *plVar5 = 0;
    *plVar4 = (long)&PTR_FUN_110b9fe30;
    lStack_70 = *plVar3;
    plStack_60 = plVar4 + 3;
    plVar4[4] = plVar3[1];
    *plStack_60 = lStack_70;
    plVar4[2] = 0;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar4[5] = 0;
    plVar4[6] = 0;
    plVar4[7] = 0x32aaaba7;
    plVar4[9] = 0;
    plVar4[8] = 0;
    plVar4[0xb] = 0;
    plVar4[10] = 0;
    plVar4[0xd] = 0;
    plVar4[0xc] = 0;
    plVar4[0xf] = 0;
    plVar4[0xe] = 0;
    plVar4[0x11] = 0;
    plVar4[0x10] = 0;
    *extraout_x8 = lStack_70;
    extraout_x8[1] = (long)plVar4;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_68 = plVar4;
    plStack_58 = plVar4;
    func_0x00010a053e8c(plStack_60,&lStack_70);
    plVar3 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar4 = plStack_68 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    if (*plStack_60 != 0) {
      func_0x00010a053ee8(*plStack_60,&plStack_60);
    }
    plVar3 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    return;
  }
  lVar6 = param_2;
  __Znwm();
  *param_1 = lVar6;
  param_1[1] = lVar6;
  param_1[2] = lVar6 + param_2;
  return;
}


