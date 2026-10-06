/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109f4fea0; end: 109f4fee7;  */

undefined8 FUN_109f4fea0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  __Znwm(0x18);
  func_0x000107c31940();
  return uVar1;
}



/* Entry: 109f4fee8; end: 109f4ff2f;  */

undefined8 FUN_109f4fee8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  __Znwm(0x18);
  func_0x000107c31940();
  return uVar1;
}



/* Entry: 109f4ff30; end: 109f4fff7;  */

byte * FUN_109f4ff30(byte *param_1,byte *param_2)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *param_2;
  *param_1 = bVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (bVar1 < 5) {
    if (bVar1 < 3) {
      if (bVar1 == 1) {
        uVar2 = *(ulong *)(param_2 + 8);
        FUN_109f4fff8();
      }
      else {
        if (bVar1 != 2) {
          return param_1;
        }
        uVar2 = *(ulong *)(param_2 + 8);
        FUN_109f50278();
      }
    }
    else if (bVar1 == 3) {
      uVar2 = *(ulong *)(param_2 + 8);
      FUN_109f4ec64();
    }
    else {
      if (bVar1 != 4) {
        return param_1;
      }
      uVar2 = (ulong)param_2[8];
    }
  }
  else {
    if (bVar1 < 7) {
      if ((bVar1 != 5) && (bVar1 != 6)) {
        return param_1;
      }
    }
    else if (bVar1 != 7) {
      if (bVar1 != 8) {
        return param_1;
      }
      uVar2 = *(ulong *)(param_2 + 8);
      FUN_109f503dc();
      goto LAB_109f4ffe4;
    }
    uVar2 = *(ulong *)(param_2 + 8);
  }
LAB_109f4ffe4:
  *(ulong *)(param_1 + 8) = uVar2;
  return param_1;
}



/* Entry: 109f4fff8; end: 109f5005b;  */

undefined8 * FUN_109f4fff8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  FUN_109f5005c();
  return puVar1;
}



/* Entry: 109f5005c; end: 109f500df;  */

void FUN_109f5005c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_109f500e0(param_1,param_4);
    lVar1 = param_1;
    FUN_109f50180(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 109f500e0; end: 109f50127;  */

undefined1  [16] FUN_109f500e0(long *param_1,ulong param_2,ulong param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 < 0x666666666666667) {
    plVar1 = param_1;
    FUN_109f5013c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 5);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_109f50128();
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 < 0x666666666666667) {
    lVar2 = param_2 * 0x28;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000104c4f740();
  uVar3 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x28) {
    uVar3 = param_2;
    FUN_109f50204(param_4,param_2);
    param_4 = param_4 + 0x28;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 109f50128; end: 109f5013b;  */

undefined1  [16] FUN_109f50128(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 < 0x666666666666667) {
    lVar1 = param_2 * 0x28;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x28) {
    uVar2 = param_2;
    FUN_109f50204(param_4,param_2);
    param_4 = param_4 + 0x28;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 109f5013c; end: 109f5017f;  */

undefined1  [16] FUN_109f5013c(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 < 0x666666666666667) {
    lVar1 = param_2 * 0x28;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x28) {
    uVar2 = param_2;
    FUN_109f50204(param_4,param_2);
    param_4 = param_4 + 0x28;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 109f50180; end: 109f50203;  */

long FUN_109f50180(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x28) {
    FUN_109f50204(param_4,param_2);
    param_4 = param_4 + 0x28;
  }
  return param_4;
}



/* Entry: 109f50204; end: 109f50277;  */

undefined8 * FUN_109f50204(undefined8 *param_1,undefined8 *param_2)

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
  FUN_109f4ff30(param_1 + 3,param_2 + 3);
  return param_1;
}



/* Entry: 109f50278; end: 109f502cf;  */

undefined8 * FUN_109f50278(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  FUN_109f502d0();
  return puVar1;
}



/* Entry: 109f502d0; end: 109f50353;  */

void FUN_109f502d0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_109f4c30c(param_1,param_4);
    lVar1 = param_1;
    FUN_109f50354(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 109f50354; end: 109f503db;  */

long FUN_109f50354(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x10) {
    FUN_109f4ff30(param_4,param_2);
    param_4 = param_4 + 0x10;
  }
  return param_4;
}



/* Entry: 109f503dc; end: 109f50437;  */

undefined8 * FUN_109f503dc(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  func_0x0001092bfde0();
  *(undefined2 *)(puVar1 + 3) = *(undefined2 *)(param_1 + 0x18);
  return puVar1;
}



/* Entry: 109f50438; end: 109f5047f;  */

undefined8 FUN_109f50438(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  __Znwm(0x18);
  func_0x000107c31940();
  return uVar1;
}



/* Entry: 109f50480; end: 109f50877;  */

void FUN_109f50480(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  if ((bRam00000001137e7cd0 & 1) == 0) {
    iVar2 = 0x137e7cd0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      uRam00000001137e7fd0 = 0;
      puRam00000001137e7fe0 = (undefined *)0x0;
      uRam00000001137e7fd8 = 3;
      puVar3 = &DAT_10f61d667;
      FUN_109f4f5c0();
      uRam00000001137e7fe8 = 1;
      puRam00000001137e7ff8 = (undefined *)0x0;
      uRam00000001137e7ff0 = 3;
      puVar4 = &UNK_10f61d751;
      puRam00000001137e7fe0 = puVar3;
      FUN_109f4f5c0();
      uRam00000001137e8000 = 2;
      puRam00000001137e8010 = (undefined *)0x0;
      uRam00000001137e8008 = 3;
      puVar3 = &UNK_10f55f5d4;
      puRam00000001137e7ff8 = puVar4;
      FUN_109f4f5c0();
      uRam00000001137e8018 = 3;
      puRam00000001137e8028 = (undefined *)0x0;
      uRam00000001137e8020 = 3;
      puVar4 = &UNK_10f61d75b;
      puRam00000001137e8010 = puVar3;
      FUN_109f4eccc();
      uRam00000001137e8030 = 4;
      puRam00000001137e8040 = (undefined *)0x0;
      uRam00000001137e8038 = 3;
      puVar3 = &UNK_10f55f5ed;
      puRam00000001137e8028 = puVar4;
      FUN_109f4f5c0();
      uRam00000001137e8048 = 5;
      puRam00000001137e8058 = (undefined *)0x0;
      uRam00000001137e8050 = 3;
      puVar4 = &UNK_10f61d767;
      puRam00000001137e8040 = puVar3;
      FUN_109f4ebd4();
      uRam00000001137e8060 = 6;
      puRam00000001137e8070 = (undefined *)0x0;
      uRam00000001137e8068 = 3;
      puVar3 = &UNK_10f55f5de;
      puRam00000001137e8058 = puVar4;
      FUN_109f4ebd4();
      uRam00000001137e8078 = 7;
      puRam00000001137e8088 = (undefined *)0x0;
      uRam00000001137e8080 = 3;
      puVar4 = &UNK_10f61d776;
      puRam00000001137e8070 = puVar3;
      FUN_109f50878();
      uRam00000001137e8090 = 8;
      puRam00000001137e80a0 = (undefined *)0x0;
      uRam00000001137e8098 = 3;
      puVar3 = &UNK_10f61d787;
      puRam00000001137e8088 = puVar4;
      FUN_109f4eccc();
      uRam00000001137e80a8 = 9;
      puRam00000001137e80b8 = (undefined *)0x0;
      uRam00000001137e80b0 = 3;
      puVar4 = &UNK_10f61d793;
      puRam00000001137e80a0 = puVar3;
      FUN_109f50878();
      uRam00000001137e80c0 = 10;
      puRam00000001137e80d0 = (undefined *)0x0;
      uRam00000001137e80c8 = 3;
      puVar3 = &UNK_10f61d7a4;
      puRam00000001137e80b8 = puVar4;
      FUN_109f50438();
      uRam00000001137e80d8 = 0xb;
      puRam00000001137e80e8 = (undefined *)0x0;
      uRam00000001137e80e0 = 3;
      puVar4 = &UNK_10f55f6a1;
      puRam00000001137e80d0 = puVar3;
      FUN_109f508c0();
      uRam00000001137e80f0 = 0xc;
      puRam00000001137e8100 = (undefined *)0x0;
      uRam00000001137e80f8 = 3;
      puVar3 = &DAT_10f517cd7;
      puRam00000001137e80e8 = puVar4;
      FUN_109f4fe58();
      puRam00000001137e8100 = puVar3;
      ___cxa_atexit(0x109f60e9c,0,0x100000000);
      ___cxa_guard_release(0x1137e7cd0);
    }
  }
  piVar5 = (int *)0x1137e7fd0;
  lVar7 = 0x138;
  do {
    if (*piVar5 == *param_2) {
      if (lVar7 != 0) goto LAB_109f504e4;
      break;
    }
    piVar5 = piVar5 + 6;
    lVar7 = lVar7 + -0x18;
  } while (lVar7 != 0);
  piVar5 = (int *)0x1137e7fd0;
LAB_109f504e4:
  FUN_109f4ff30(auStack_50,piVar5 + 2);
  uVar1 = *param_1;
  *param_1 = auStack_50[0];
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uStack_48;
  auStack_50[0] = uVar1;
  uStack_48 = uVar6;
  FUN_109f49928(&uStack_48);
  return;
}



/* Entry: 109f50878; end: 109f508bf;  */

undefined8 FUN_109f50878(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  __Znwm(0x18);
  func_0x000107c31940();
  return uVar1;
}



/* Entry: 109f508c0; end: 109f50907;  */

undefined8 FUN_109f508c0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  __Znwm(0x18);
  func_0x000107c31940();
  return uVar1;
}



/* Entry: 109f50908; end: 109f5094f;  */

undefined8 FUN_109f50908(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  __Znwm(0x18);
  func_0x000107c31940();
  return uVar1;
}



/* Entry: 109f50950; end: 109f50997;  */

undefined8 FUN_109f50950(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  __Znwm(0x18);
  func_0x000107c31940();
  return uVar1;
}



/* Entry: 109f50998; end: 109f50c2b;  */

/* WARNING: Removing unreachable block (ram,0x000109f50c10) */

undefined1 * FUN_109f50998(undefined1 *param_1,uint *param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  uint uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 *puVar16;
  long lStack_180;
  ulong auStack_178 [3];
  undefined1 auStack_118 [8];
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined1 *puStack_f8;
  undefined1 uStack_f0;
  undefined1 auStack_e8 [8];
  ulong uStack_e0;
  undefined1 *puStack_d8;
  undefined1 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 uStack_b0;
  byte abStack_a8 [8];
  ulong uStack_a0;
  byte *pbStack_98;
  undefined1 uStack_90;
  undefined1 auStack_88 [16];
  undefined1 *puStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 *puStack_58;
  undefined1 uStack_50;
  long lStack_48;
  ulong uVar6;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_c8[0] = 3;
  puVar4 = &UNK_10f61d91f;
  FUN_109f50438();
  puStack_b8 = auStack_c8;
  uStack_b0 = 1;
  pbStack_98 = abStack_a8;
  uStack_a0 = (ulong)*param_2;
  abStack_a8[0] = 6;
  uStack_90 = 1;
  puStack_c0 = puVar4;
  FUN_109f50c2c(auStack_88,auStack_c8,2,1,2);
  uStack_70 = 1;
  auStack_108[0] = 3;
  puVar4 = &DAT_10f491dce;
  puStack_78 = auStack_88;
  FUN_109f4eb8c();
  puStack_f8 = auStack_108;
  uStack_f0 = 1;
  puStack_d8 = auStack_e8;
  uStack_e0 = (ulong)param_2[1];
  auStack_e8[0] = 6;
  uStack_d0 = 1;
  puStack_100 = puVar4;
  FUN_109f50c2c(auStack_68,auStack_108,2,1,2);
  uStack_50 = 1;
  lVar10 = 2;
  uVar11 = 1;
  uVar13 = 2;
  puStack_58 = auStack_68;
  FUN_109f50c2c(auStack_118,auStack_88);
  uVar1 = *param_1;
  *param_1 = auStack_118[0];
  uVar14 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uStack_110;
  auStack_118[0] = uVar1;
  uStack_110 = uVar14;
  FUN_109f49928(&uStack_110);
  lVar15 = 0;
  do {
    FUN_109f49928(auStack_60 + lVar15,auStack_68[lVar15]);
    lVar15 = lVar15 + -0x20;
  } while (lVar15 != -0x40);
  lVar15 = 0;
  do {
    FUN_109f49928((long)&uStack_e0 + lVar15,auStack_e8[lVar15]);
    lVar15 = lVar15 + -0x20;
  } while (lVar15 != -0x40);
  lVar15 = 0;
  do {
    puVar5 = (undefined1 *)((long)&uStack_a0 + lVar15);
    FUN_109f49928(puVar5,abStack_a8[lVar15]);
    lVar15 = lVar15 + -0x20;
  } while (lVar15 != -0x40);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar16 = auStack_60;
    lVar15 = -0x40;
    do {
      FUN_109f49928(puVar16,puVar16[-8]);
      puVar16 = puVar16 + -0x20;
      lVar15 = lVar15 + 0x20;
    } while (lVar15 != 0);
    puVar8 = &uStack_e0;
    lVar15 = -0x40;
    do {
      FUN_109f49928(puVar8,(char)puVar8[-1]);
      puVar8 = puVar8 + -4;
      lVar15 = lVar15 + 0x20;
    } while (lVar15 != 0);
    lVar15 = 0;
    do {
      uVar9 = (ulong)abStack_a8[lVar15];
      FUN_109f49928((long)&uStack_a0 + lVar15);
      iVar12 = (int)uVar13;
      lVar15 = lVar15 + -0x20;
    } while (lVar15 != -0x40);
    __Unwind_Resume();
    *puVar5 = 0;
    *(undefined8 *)(puVar5 + 8) = 0;
    lVar10 = uVar9 + lVar10 * 0x20;
    uVar6 = uVar9;
    FUN_109f50eb0(uVar9,lVar10,auStack_178,&lStack_180);
    uVar3 = (uint)uVar6;
    if ((uVar11 & 1) == 0) {
      if (iVar12 == 1 && (uVar6 & 1) == 0) {
        uVar13 = 0x20;
        ___cxa_allocate_exception(0x20);
        func_0x000107c31940(auStack_178,&UNK_10f56781b);
        func_0x00010937bbbc(uVar13,0x12d,auStack_178);
        ___cxa_throw(uVar13,&PTR_DAT_110af4510,&DAT_10937bd14);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109f50d50);
        (*pcVar2)();
      }
      uVar3 = iVar12 != 2 & uVar3;
    }
    if (uVar3 == 0) {
      *puVar5 = 2;
      puVar8 = auStack_178;
      lStack_180 = lVar10;
      auStack_178[0] = uVar9;
      FUN_109f50e48(puVar8,&lStack_180);
      *(ulong **)(puVar5 + 8) = puVar8;
    }
    else {
      *puVar5 = 1;
      puVar7 = (undefined8 *)0x18;
      __Znwm();
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      *(undefined8 **)(puVar5 + 8) = puVar7;
      FUN_109f50d88(uVar9,lVar10,puVar5);
    }
    return puVar5;
  }
  return puVar5;
}



/* Entry: 109f50c2c; end: 109f50d87;  */

undefined1 * FUN_109f50c2c(undefined1 *param_1,ulong param_2,long param_3,ulong param_4,int param_5)

{
  long lVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  long lStack_60;
  ulong auStack_58 [3];
  ulong uVar4;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  lVar1 = param_2 + param_3 * 0x20;
  uVar4 = param_2;
  FUN_109f50eb0(param_2,lVar1,auStack_58,&lStack_60);
  uVar3 = (uint)uVar4;
  if ((param_4 & 1) == 0) {
    if (param_5 == 1 && (uVar4 & 1) == 0) {
      uVar7 = 0x20;
      ___cxa_allocate_exception(0x20);
      func_0x000107c31940(auStack_58,&UNK_10f56781b);
      func_0x00010937bbbc(uVar7,0x12d,auStack_58);
      ___cxa_throw(uVar7,&PTR_DAT_110af4510,&DAT_10937bd14);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109f50d50);
      (*pcVar2)();
    }
    uVar3 = param_5 != 2 & uVar3;
  }
  if (uVar3 == 0) {
    *param_1 = 2;
    puVar6 = auStack_58;
    lStack_60 = lVar1;
    auStack_58[0] = param_2;
    FUN_109f50e48(puVar6,&lStack_60);
    *(ulong **)(param_1 + 8) = puVar6;
  }
  else {
    *param_1 = 1;
    puVar5 = (undefined8 *)0x18;
    __Znwm();
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    *(undefined8 **)(param_1 + 8) = puVar5;
    FUN_109f50d88(param_2,lVar1,param_1);
  }
  return param_1;
}



/* Entry: 109f50d88; end: 109f50e47;  */

long FUN_109f50d88(long param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    puVar1 = *(undefined1 **)(param_1 + 0x10);
    if (*(char *)(param_1 + 0x18) == '\x01') {
      auStack_40[0] = *puVar1;
      plStack_38 = *(long **)(puVar1 + 8);
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + 8) = 0;
    }
    else {
      FUN_109f4ff30(auStack_40);
    }
    FUN_109f5119c(*(undefined8 *)(param_3 + 8),*(undefined8 *)(*plStack_38 + 8),*plStack_38 + 0x10);
    FUN_109f49928(&plStack_38,auStack_40[0]);
  }
  return param_3;
}



/* Entry: 109f50e48; end: 109f50eaf;  */

undefined8 * FUN_109f50e48(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  FUN_109f5152c();
  return puVar1;
}



/* Entry: 109f50eb0; end: 109f50f2b;  */

undefined8 FUN_109f50eb0(long param_1,long param_2)

{
  char *pcVar1;
  
  if (param_1 == param_2) {
    return 1;
  }
  do {
    pcVar1 = *(char **)(param_1 + 0x10);
    if ((*pcVar1 != '\x02') || (FUN_109f50f2c(), pcVar1 != (char *)0x2)) {
      return 0;
    }
    pcVar1 = *(char **)(param_1 + 0x10);
    FUN_109f50f84(pcVar1,0);
    if (*pcVar1 != '\x03') {
      return 0;
    }
    param_1 = param_1 + 0x20;
  } while (param_1 != param_2);
  return 1;
}



/* Entry: 109f50f2c; end: 109f50f83;  */

ulong FUN_109f50f2c(byte *param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *param_1;
  uVar2 = (ulong)bVar1;
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      return ((*(long **)(param_1 + 8))[1] - **(long **)(param_1 + 8) >> 3) * -0x3333333333333333;
    }
    if (bVar1 == 2) {
      return (*(long **)(param_1 + 8))[1] - **(long **)(param_1 + 8) >> 4;
    }
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 109f50f84; end: 109f51087;  */

long FUN_109f50f84(char *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (*param_1 == '\x02') {
    return **(long **)(param_1 + 8) + param_2 * 0x10;
  }
  uVar2 = 0x20;
  ___cxa_allocate_exception(0x20);
  FUN_109f51088(param_1);
  func_0x000107c31940(auStack_60,param_1);
  func_0x00010928a5e0(auStack_48,&UNK_10f567846,auStack_60);
  func_0x00010937bbbc(uVar2,0x131,auStack_48);
  ___cxa_throw(uVar2,&PTR_DAT_110af4510,&DAT_10937bd14);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109f51030);
  (*pcVar1)();
}



/* Entry: 109f51088; end: 109f510af;  */

char * FUN_109f51088(byte *param_1)

{
  if ((ulong)*param_1 < 10) {
    return (&PTR_s_null_110b87a10)[*param_1];
  }
  return "number";
}



/* Entry: 109f510b0; end: 109f5119b;  */

undefined8 * FUN_109f510b0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_2 < 4) {
    if (param_2 < 2) {
      if ((param_2 == 0) || (param_2 != 1)) goto LAB_109f51154;
    }
    else if (param_2 != 2) {
      if (param_2 == 3) {
        uVar2 = 0x18;
        __Znwm();
        func_0x000107c31940();
        *param_1 = uVar2;
        return param_1;
      }
      goto LAB_109f51154;
    }
    puVar1 = (undefined8 *)0x18;
    __Znwm();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
LAB_109f5116c:
    *param_1 = puVar1;
    return param_1;
  }
  if (param_2 < 6) {
    if (param_2 == 4) {
      *(undefined1 *)param_1 = 0;
      return param_1;
    }
  }
  else if (((param_2 != 6) && (param_2 != 7)) && (param_2 == 8)) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    *(undefined2 *)(puVar1 + 3) = 0;
    goto LAB_109f5116c;
  }
LAB_109f51154:
  *param_1 = 0;
  return param_1;
}



/* Entry: 109f5119c; end: 109f51297;  */

undefined1  [16] FUN_109f5119c(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
  plVar8 = (long *)*param_1;
  plVar6 = (long *)param_1[1];
  if (plVar8 != plVar6) {
    uVar4 = param_2[1];
    puVar1 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar4 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar1 = param_2;
    }
    do {
      bVar3 = *(byte *)((long)plVar8 + 0x17);
      uVar2 = plVar8[1];
      if (-1 < (char)bVar3) {
        uVar2 = (ulong)bVar3;
      }
      if (uVar2 == uVar4) {
        plVar5 = (long *)*plVar8;
        if (-1 < (char)bVar3) {
          plVar5 = plVar8;
        }
        _memcmp(plVar5,puVar1,uVar4);
        if ((int)plVar5 == 0) {
          uVar7 = 0;
          goto LAB_109f51274;
        }
      }
      plVar8 = plVar8 + 5;
    } while (plVar8 != plVar6);
  }
  if (plVar6 < (long *)param_1[2]) {
    FUN_109f513c8(plVar6,param_2,param_3);
    plVar6 = plVar6 + 5;
    param_1[1] = (long)plVar6;
  }
  else {
    plVar6 = param_1;
    FUN_109f51298(param_1,param_2,param_3);
  }
  param_1[1] = (long)plVar6;
  plVar8 = plVar6 + -5;
  uVar7 = 1;
LAB_109f51274:
  auVar9._8_8_ = uVar7;
  auVar9._0_8_ = plVar8;
  return auVar9;
}



/* Entry: 109f51298; end: 109f513c7;  */

long * FUN_109f51298(long *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar5 = param_1[1] - *param_1;
  uVar3 = (lVar5 >> 3) * -0x3333333333333333 + 1;
  if (uVar3 < 0x666666666666667) {
    lVar2 = param_1[2] - *param_1 >> 3;
    uVar4 = lVar2 * -0x6666666666666666;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar4 = uVar3;
    }
    if (0x333333333333332 < (ulong)(lVar2 * -0x3333333333333333)) {
      uVar4 = 0x666666666666666;
    }
    plStack_38 = param_1;
    if (uVar4 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_109f5013c();
    }
    lVar5 = (long)plVar1 + lVar5;
    plStack_40 = plVar1 + uVar4 * 5;
    plStack_58 = plVar1;
    plStack_50 = (long *)lVar5;
    plStack_48 = (long *)lVar5;
    FUN_109f513c8(lVar5,param_2,param_3);
    plStack_48 = (long *)(lVar5 + 0x28);
    lVar5 = lVar5 + (*param_1 - param_1[1]);
    FUN_109f51440(param_1,*param_1,param_1[1],lVar5);
    plVar1 = plStack_48;
    plStack_58 = (long *)*param_1;
    *param_1 = lVar5;
    lVar5 = param_1[2];
    param_1[2] = (long)plStack_40;
    param_1[1] = (long)plStack_48;
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    plStack_40 = (long *)lVar5;
    FUN_109f514e0(&plStack_58);
    return plVar1;
  }
  FUN_109f50128();
  FUN_109f514e0(&plStack_58);
  __Unwind_Resume();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    lVar2 = param_2[1];
    lVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = lVar2;
    *param_1 = lVar5;
  }
  FUN_109f4ff30(param_1 + 3,param_3);
  return param_1;
}



/* Entry: 109f513c8; end: 109f5143f;  */

undefined8 * FUN_109f513c8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

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
  FUN_109f4ff30(param_1 + 3,param_3);
  return param_1;
}



/* Entry: 109f51440; end: 109f514df;  */

void FUN_109f51440(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  lVar1 = param_2;
  if (param_2 != param_3) {
    do {
      FUN_109f50204(param_4,lVar1);
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + 0x28;
    } while (lVar1 != param_3);
    do {
      FUN_109f4a190(param_2);
      param_2 = param_2 + 0x28;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 109f514e0; end: 109f5152b;  */

long * FUN_109f514e0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x28;
    FUN_109f4a190();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109f5152c; end: 109f515af;  */

void FUN_109f5152c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_109f4c30c(param_1,param_4);
    lVar1 = param_1;
    FUN_109f515b0(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 109f515b0; end: 109f51637;  */

long FUN_109f515b0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    FUN_109f51638(param_4,param_2);
    param_4 = param_4 + 0x10;
  }
  return param_4;
}



/* Entry: 109f51638; end: 109f516b3;  */

undefined1 * FUN_109f51638(undefined1 *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  puVar1 = *(undefined1 **)(param_2 + 0x10);
  if (*(char *)(param_2 + 0x18) == '\x01') {
    auStack_30[0] = *puVar1;
    uStack_28 = *(undefined8 *)(puVar1 + 8);
    *puVar1 = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
  }
  else {
    FUN_109f4ff30(auStack_30);
  }
  *param_1 = auStack_30[0];
  *(undefined8 *)(param_1 + 8) = uStack_28;
  auStack_30[0] = 0;
  uStack_28 = 0;
  FUN_109f49928(&uStack_28,0);
  return param_1;
}



/* Entry: 109f516b4; end: 109f5207f;  */

void FUN_109f516b4(undefined8 *param_1,undefined1 *param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  undefined2 *puVar15;
  ulong uVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  ulong uVar20;
  undefined1 *puVar21;
  
  iVar19 = (int)param_5;
  iVar17 = (int)param_6;
  switch(*param_2) {
  case 0:
    plVar3 = (long *)*param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 8);
    pcVar6 = "null";
    break;
  case 1:
    plVar3 = (long *)*param_1;
    puVar10 = (undefined8 *)*plVar3;
    if (**(long **)(param_2 + 8) == (*(long **)(param_2 + 8))[1]) {
      UNRECOVERED_JUMPTABLE = (code *)puVar10[1];
      pcVar6 = "{}";
      goto code_r0x000109f519d0;
    }
    if (param_3 != 0) {
      (*(code *)puVar10[1])(plVar3,&DAT_10f38bea1,2);
      uVar13 = iVar17 + iVar19;
      uVar20 = (ulong)uVar13;
      plVar3 = param_1 + 0x4c;
      cVar1 = *(char *)((long)param_1 + 0x277);
      if (cVar1 < 0) {
        uVar12 = param_1[0x4d];
        if (uVar12 < uVar20) goto code_r0x000109f52044;
      }
      else if ((uint)(int)cVar1 <= uVar13 && uVar13 != (int)cVar1) {
        uVar12 = (ulong)(int)cVar1;
code_r0x000109f52044:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                  (plVar3,uVar12 << 1,0x20);
      }
      lVar9 = **(long **)(param_2 + 8);
      if ((*(long **)(param_2 + 8))[1] - lVar9 != 0x28) {
        uVar12 = 0;
        do {
          plVar7 = plVar3;
          if (*(char *)((long)param_1 + 0x277) < '\0') {
            plVar7 = (long *)*plVar3;
          }
          (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,plVar7,uVar20);
          (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
          FUN_109f52218(param_1,lVar9,param_4);
          (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,&UNK_10f56e057,3);
          FUN_109f516b4(param_1,lVar9 + 0x18,1,param_4,param_5,uVar20);
          (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,&DAT_10f56e05b,2);
          uVar12 = uVar12 + 1;
          lVar9 = lVar9 + 0x28;
        } while (uVar12 < ((*(long **)(param_2 + 8))[1] - **(long **)(param_2 + 8) >> 3) *
                          -0x3333333333333333 - 1U);
      }
      plVar7 = plVar3;
      if (*(char *)((long)param_1 + 0x277) < '\0') {
        plVar7 = (long *)*plVar3;
      }
      (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,plVar7,uVar20);
      (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
      FUN_109f52218(param_1,lVar9,param_4);
      (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,&UNK_10f56e057,3);
      FUN_109f516b4(param_1,lVar9 + 0x18,1,param_4,param_5,uVar20);
      (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,10);
      plVar7 = (long *)*param_1;
      if (*(char *)((long)param_1 + 0x277) < '\0') {
        plVar3 = (long *)*plVar3;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar7 + 8);
      goto code_r0x000109f52000;
    }
    (*(code *)*puVar10)(plVar3,0x7b);
    lVar9 = **(long **)(param_2 + 8);
    if ((*(long **)(param_2 + 8))[1] - lVar9 != 0x28) {
      uVar20 = 0;
      do {
        (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
        FUN_109f52218(param_1,lVar9,param_4);
        (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,"\":",2);
        FUN_109f516b4(param_1,lVar9 + 0x18,0,param_4,param_5,param_6);
        (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x2c);
        uVar20 = uVar20 + 1;
        lVar9 = lVar9 + 0x28;
      } while (uVar20 < ((*(long **)(param_2 + 8))[1] - **(long **)(param_2 + 8) >> 3) *
                        -0x3333333333333333 - 1U);
    }
    (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
    FUN_109f52218(param_1,lVar9,param_4);
    (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,"\":",2);
    FUN_109f516b4(param_1,lVar9 + 0x18,0,param_4,param_5,param_6);
    goto code_r0x000109f52004;
  case 2:
    plVar3 = (long *)*param_1;
    puVar10 = (undefined8 *)*plVar3;
    if (**(long **)(param_2 + 8) != (*(long **)(param_2 + 8))[1]) {
      if (param_3 == 0) {
        (*(code *)*puVar10)(plVar3,0x5b);
        plVar3 = *(long **)(param_2 + 8);
        for (lVar9 = *plVar3; lVar9 != plVar3[1] + -0x10; lVar9 = lVar9 + 0x10) {
          FUN_109f516b4(param_1,lVar9,0,param_4,param_5,param_6);
          (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x2c);
          plVar3 = *(long **)(param_2 + 8);
        }
        FUN_109f516b4(param_1,plVar3[1] + -0x10,0,param_4,param_5,param_6);
      }
      else {
        (*(code *)puVar10[1])(plVar3,&UNK_10f56e061,2);
        uVar13 = iVar17 + iVar19;
        uVar20 = (ulong)uVar13;
        plVar3 = param_1 + 0x4c;
        cVar1 = *(char *)((long)param_1 + 0x277);
        if (cVar1 < 0) {
          uVar12 = param_1[0x4d];
          if (uVar12 < uVar20) goto code_r0x000109f52030;
        }
        else if ((uint)(int)cVar1 <= uVar13 && uVar13 != (int)cVar1) {
          uVar12 = (ulong)(int)cVar1;
code_r0x000109f52030:
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                    (plVar3,uVar12 << 1,0x20);
        }
        lVar9 = **(long **)(param_2 + 8);
        if (lVar9 != (*(long **)(param_2 + 8))[1] + -0x10) {
          do {
            plVar7 = plVar3;
            if (*(char *)((long)param_1 + 0x277) < '\0') {
              plVar7 = (long *)*plVar3;
            }
            (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,plVar7,uVar20);
            FUN_109f516b4(param_1,lVar9,1,param_4,param_5,uVar20);
            (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,&DAT_10f56e05b,2);
            lVar9 = lVar9 + 0x10;
          } while (lVar9 != *(long *)(*(long *)(param_2 + 8) + 8) + -0x10);
        }
        plVar7 = plVar3;
        if (*(char *)((long)param_1 + 0x277) < '\0') {
          plVar7 = (long *)*plVar3;
        }
        (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,plVar7,uVar20);
        FUN_109f516b4(param_1,*(long *)(*(long *)(param_2 + 8) + 8) + -0x10,1,param_4,param_5,uVar20
                     );
        (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,10);
        if (*(char *)((long)param_1 + 0x277) < '\0') {
          plVar3 = (long *)*plVar3;
        }
        (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,plVar3,param_6 & 0xffffffff);
      }
      param_1 = (undefined8 *)*param_1;
      UNRECOVERED_JUMPTABLE = *(code **)*param_1;
      uVar8 = 0x5d;
      goto code_r0x000109f52014;
    }
    UNRECOVERED_JUMPTABLE = (code *)puVar10[1];
    pcVar6 = "[]";
code_r0x000109f519d0:
    uVar8 = 2;
    goto code_r0x000109f51b98;
  case 3:
    (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
    FUN_109f52218(param_1,*(undefined8 *)(param_2 + 8),param_4);
    param_1 = (undefined8 *)*param_1;
    UNRECOVERED_JUMPTABLE = *(code **)*param_1;
    uVar8 = 0x22;
    goto code_r0x000109f52014;
  case 4:
    plVar3 = (long *)*param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 8);
    if (param_2[8] != '\x01') {
      pcVar6 = "false";
code_r0x000109f51b94:
      uVar8 = 5;
      goto code_r0x000109f51b98;
    }
    pcVar6 = "true";
    break;
  case 5:
    uVar20 = *(ulong *)(param_2 + 8);
    if (uVar20 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000109f528bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x30);
      return;
    }
    puVar10 = param_1 + 2;
    if ((long)uVar20 < 0) {
      *(undefined1 *)puVar10 = 0x2d;
      uVar20 = -uVar20;
      if (uVar20 < 10) {
        iVar19 = 1;
      }
      else {
        uVar12 = uVar20;
        iVar17 = 4;
        do {
          iVar19 = iVar17;
          if (uVar12 < 100) {
            iVar19 = iVar19 + -2;
            goto code_r0x000109f529a8;
          }
          if (uVar12 < 1000) {
            iVar19 = iVar19 + -1;
            goto code_r0x000109f529a8;
          }
          if (uVar12 >> 4 < 0x271) goto code_r0x000109f529a8;
          bVar2 = 99999 < uVar12;
          uVar12 = uVar12 / 10000;
          iVar17 = iVar19 + 4;
        } while (bVar2);
        iVar19 = iVar19 + 1;
      }
code_r0x000109f529a8:
      uVar13 = iVar19 + 1;
code_r0x000109f529ac:
      puVar15 = (undefined2 *)((long)puVar10 + (ulong)uVar13);
      if (99 < uVar20) {
        do {
          uVar12 = uVar20 / 100;
          puVar15 = puVar15 + -1;
          *puVar15 = *(undefined2 *)(&UNK_10e47d2ec + (uVar20 % 100) * 2);
          uVar16 = uVar20 >> 4;
          uVar20 = uVar12;
        } while (0x270 < uVar16);
      }
      if (9 < uVar20) {
        puVar15[-1] = *(undefined2 *)(&UNK_10e47d2ec + uVar20 * 2);
        goto code_r0x000109f52a28;
      }
    }
    else {
      if (9 < uVar20) {
        uVar12 = uVar20;
        uVar14 = 4;
        do {
          uVar13 = uVar14;
          if (uVar12 < 100) {
            uVar13 = uVar13 - 2;
            goto code_r0x000109f529ac;
          }
          if (uVar12 < 1000) {
            uVar13 = uVar13 - 1;
            goto code_r0x000109f529ac;
          }
          if (uVar12 >> 4 < 0x271) goto code_r0x000109f529ac;
          bVar2 = 99999 < uVar12;
          uVar12 = uVar12 / 10000;
          uVar14 = uVar13 + 4;
        } while (bVar2);
        uVar13 = uVar13 + 1;
        goto code_r0x000109f529ac;
      }
      puVar15 = (undefined2 *)((long)param_1 + 0x11);
      uVar13 = 1;
    }
    *(byte *)((long)puVar15 + -1) = (byte)uVar20 | 0x30;
code_r0x000109f52a28:
                    /* WARNING: Could not recover jumptable at 0x000109f52a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,puVar10,uVar13);
    return;
  case 6:
    uVar20 = *(ulong *)(param_2 + 8);
    if (uVar20 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000109f52a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x30);
      return;
    }
    if (uVar20 < 10) {
      puVar15 = (undefined2 *)((long)param_1 + 0x11);
      uVar14 = 1;
    }
    else {
      uVar12 = uVar20;
      uVar13 = 4;
      do {
        uVar14 = uVar13;
        if (uVar12 < 100) {
          uVar14 = uVar14 - 2;
          goto code_r0x000109f52acc;
        }
        if (uVar12 < 1000) {
          uVar14 = uVar14 - 1;
          goto code_r0x000109f52acc;
        }
        if (uVar12 >> 4 < 0x271) goto code_r0x000109f52acc;
        uVar16 = uVar12 >> 5;
        uVar12 = uVar12 / 10000;
        uVar13 = uVar14 + 4;
      } while (0xc34 < uVar16);
      uVar14 = uVar14 + 1;
code_r0x000109f52acc:
      puVar15 = (undefined2 *)((long)(param_1 + 2) + (ulong)uVar14);
      if (99 < uVar20) {
        do {
          uVar12 = uVar20 / 100;
          puVar15 = puVar15 + -1;
          *puVar15 = *(undefined2 *)(&UNK_10e47d3b4 + (uVar20 % 100) * 2);
          uVar16 = uVar20 >> 4;
          uVar20 = uVar12;
        } while (0x270 < uVar16);
      }
      if (9 < uVar20) {
        puVar15[-1] = *(undefined2 *)(&UNK_10e47d3b4 + uVar20 * 2);
        goto code_r0x000109f52b48;
      }
    }
    *(byte *)((long)puVar15 + -1) = (byte)uVar20 | 0x30;
code_r0x000109f52b48:
                    /* WARNING: Could not recover jumptable at 0x000109f52b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,param_1 + 2,uVar14);
    return;
  case 7:
    if ((*(ulong *)(param_2 + 8) & 0x7fffffffffffffff) < 0x7ff0000000000000) {
      pcVar6 = (char *)(param_1 + 2);
      pcVar5 = pcVar6;
      func_0x0001094623c8(pcVar6,param_1 + 10);
      plVar3 = (long *)*param_1;
      lVar9 = (long)pcVar5 - (long)pcVar6;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 8);
    }
    else {
      plVar3 = (long *)*param_1;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 8);
      pcVar6 = "null";
      lVar9 = 4;
    }
                    /* WARNING: Could not recover jumptable at 0x000109f52bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar3,pcVar6,lVar9);
    return;
  case 8:
    plVar3 = (long *)*param_1;
    if (param_3 == 0) {
      (**(code **)(*plVar3 + 8))(plVar3,&UNK_10f56e07f,10);
      puVar18 = (undefined1 *)**(long **)(param_2 + 8);
      puVar11 = (undefined1 *)(*(long **)(param_2 + 8))[1];
      if (puVar18 != puVar11) {
        for (; puVar18 != puVar11 + -1; puVar18 = puVar18 + 1) {
          FUN_109f527e4(param_1,*puVar18);
          (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x2c);
          puVar11 = *(undefined1 **)(*(long *)(param_2 + 8) + 8);
        }
        FUN_109f527e4(param_1,puVar11[-1]);
      }
      (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,&UNK_10f56e08a,0xc);
      if (*(char *)(*(long *)(param_2 + 8) + 0x19) == '\x01') {
        FUN_109f527e4(param_1,*(undefined1 *)(*(long *)(param_2 + 8) + 0x18));
        goto code_r0x000109f52004;
      }
      plVar3 = (long *)*param_1;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 8);
      pcVar6 = "null}";
      goto code_r0x000109f51b94;
    }
    (**(code **)(*plVar3 + 8))(plVar3,&DAT_10f38bea1,2);
    uVar13 = iVar17 + iVar19;
    uVar20 = (ulong)uVar13;
    plVar3 = param_1 + 0x4c;
    cVar1 = *(char *)((long)param_1 + 0x277);
    plVar7 = plVar3;
    if (cVar1 < 0) {
      uVar12 = param_1[0x4d];
      if (uVar12 < uVar20) goto code_r0x000109f5205c;
      plVar4 = (long *)*param_1;
code_r0x000109f51bc4:
      plVar7 = (long *)*plVar3;
    }
    else if (uVar13 < (uint)(int)cVar1 || uVar13 == (int)cVar1) {
      plVar4 = (long *)*param_1;
    }
    else {
      uVar12 = (ulong)(int)cVar1;
code_r0x000109f5205c:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                (plVar3,uVar12 << 1,0x20);
      plVar4 = (long *)*param_1;
      if (*(char *)((long)param_1 + 0x277) < '\0') goto code_r0x000109f51bc4;
    }
    (**(code **)(*plVar4 + 8))(plVar4,plVar7,uVar20);
    (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,&UNK_10f56e064,10);
    puVar18 = (undefined1 *)**(long **)(param_2 + 8);
    puVar11 = (undefined1 *)(*(long **)(param_2 + 8))[1];
    if (puVar18 != puVar11) {
      if (puVar18 != puVar11 + -1) {
        do {
          puVar21 = puVar18 + 1;
          FUN_109f527e4(param_1,*puVar18);
          (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,&DAT_10f68f19e,2);
          puVar11 = *(undefined1 **)(*(long *)(param_2 + 8) + 8);
          puVar18 = puVar21;
        } while (puVar21 != puVar11 + -1);
      }
      FUN_109f527e4(param_1,puVar11[-1]);
    }
    (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,&UNK_10f56e06f,3);
    plVar7 = plVar3;
    if (*(char *)((long)param_1 + 0x277) < '\0') {
      plVar7 = (long *)*plVar3;
    }
    (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,plVar7,uVar20);
    (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,&UNK_10f56e073,0xb);
    if (*(char *)(*(long *)(param_2 + 8) + 0x19) == '\x01') {
      FUN_109f527e4(param_1,*(undefined1 *)(*(long *)(param_2 + 8) + 0x18));
    }
    else {
      (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,"null",4);
    }
    (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,10);
    plVar7 = (long *)*param_1;
    if (*(char *)((long)param_1 + 0x277) < '\0') {
      plVar3 = (long *)*plVar3;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar7 + 8);
code_r0x000109f52000:
    (*UNRECOVERED_JUMPTABLE)(plVar7,plVar3,param_6 & 0xffffffff);
code_r0x000109f52004:
    param_1 = (undefined8 *)*param_1;
    UNRECOVERED_JUMPTABLE = *(code **)*param_1;
    uVar8 = 0x7d;
code_r0x000109f52014:
                    /* WARNING: Could not recover jumptable at 0x000109f5202c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,uVar8);
    return;
  case 9:
    plVar3 = (long *)*param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 8);
    pcVar6 = "<discarded>";
    uVar8 = 0xb;
    goto code_r0x000109f51b98;
  default:
    return;
  }
  uVar8 = 4;
code_r0x000109f51b98:
                    /* WARNING: Could not recover jumptable at 0x000109f51bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar3,pcVar6,uVar8);
  return;
}



/* Entry: 109f52080; end: 109f5208f;  */

void FUN_109f52080(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b87988;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109f52090; end: 109f520af;  */

void FUN_109f52090(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b87988;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109f520b0; end: 109f520d7;  */

void FUN_109f520b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109f520b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 109f520d8; end: 109f52217;  */

undefined8 *
FUN_109f520d8(undefined8 *param_1,undefined8 *param_2,undefined1 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  puVar2 = param_1;
  _localeconv();
  param_1[10] = puVar2;
  uVar3 = 0;
  if ((undefined1 *)puVar2[1] != (undefined1 *)0x0) {
    uVar3 = *(undefined1 *)puVar2[1];
  }
  *(undefined1 *)(param_1 + 0xb) = uVar3;
  uVar3 = 0;
  if ((undefined1 *)*puVar2 != (undefined1 *)0x0) {
    uVar3 = *(undefined1 *)*puVar2;
  }
  *(undefined8 *)((long)param_1 + 0x62) = 0;
  *(undefined8 *)((long)param_1 + 0x5a) = 0;
  *(undefined1 *)((long)param_1 + 0x59) = uVar3;
  *(undefined8 *)((long)param_1 + 0x72) = 0;
  *(undefined8 *)((long)param_1 + 0x6a) = 0;
  *(undefined8 *)((long)param_1 + 0x82) = 0;
  *(undefined8 *)((long)param_1 + 0x7a) = 0;
  *(undefined8 *)((long)param_1 + 0x92) = 0;
  *(undefined8 *)((long)param_1 + 0x8a) = 0;
  *(undefined8 *)((long)param_1 + 0xa2) = 0;
  *(undefined8 *)((long)param_1 + 0x9a) = 0;
  *(undefined8 *)((long)param_1 + 0xb2) = 0;
  *(undefined8 *)((long)param_1 + 0xaa) = 0;
  *(undefined8 *)((long)param_1 + 0xc2) = 0;
  *(undefined8 *)((long)param_1 + 0xba) = 0;
  *(undefined8 *)((long)param_1 + 0xd2) = 0;
  *(undefined8 *)((long)param_1 + 0xca) = 0;
  *(undefined8 *)((long)param_1 + 0xe2) = 0;
  *(undefined8 *)((long)param_1 + 0xda) = 0;
  *(undefined8 *)((long)param_1 + 0xf2) = 0;
  *(undefined8 *)((long)param_1 + 0xea) = 0;
  *(undefined8 *)((long)param_1 + 0x102) = 0;
  *(undefined8 *)((long)param_1 + 0xfa) = 0;
  *(undefined8 *)((long)param_1 + 0x112) = 0;
  *(undefined8 *)((long)param_1 + 0x10a) = 0;
  *(undefined8 *)((long)param_1 + 0x122) = 0;
  *(undefined8 *)((long)param_1 + 0x11a) = 0;
  *(undefined8 *)((long)param_1 + 0x132) = 0;
  *(undefined8 *)((long)param_1 + 0x12a) = 0;
  *(undefined8 *)((long)param_1 + 0x142) = 0;
  *(undefined8 *)((long)param_1 + 0x13a) = 0;
  *(undefined8 *)((long)param_1 + 0x152) = 0;
  *(undefined8 *)((long)param_1 + 0x14a) = 0;
  *(undefined8 *)((long)param_1 + 0x162) = 0;
  *(undefined8 *)((long)param_1 + 0x15a) = 0;
  *(undefined8 *)((long)param_1 + 0x172) = 0;
  *(undefined8 *)((long)param_1 + 0x16a) = 0;
  *(undefined8 *)((long)param_1 + 0x182) = 0;
  *(undefined8 *)((long)param_1 + 0x17a) = 0;
  *(undefined8 *)((long)param_1 + 0x192) = 0;
  *(undefined8 *)((long)param_1 + 0x18a) = 0;
  *(undefined8 *)((long)param_1 + 0x1a2) = 0;
  *(undefined8 *)((long)param_1 + 0x19a) = 0;
  *(undefined8 *)((long)param_1 + 0x1b2) = 0;
  *(undefined8 *)((long)param_1 + 0x1aa) = 0;
  *(undefined8 *)((long)param_1 + 0x1c2) = 0;
  *(undefined8 *)((long)param_1 + 0x1ba) = 0;
  *(undefined8 *)((long)param_1 + 0x1d2) = 0;
  *(undefined8 *)((long)param_1 + 0x1ca) = 0;
  *(undefined8 *)((long)param_1 + 0x1e2) = 0;
  *(undefined8 *)((long)param_1 + 0x1da) = 0;
  *(undefined8 *)((long)param_1 + 0x1f2) = 0;
  *(undefined8 *)((long)param_1 + 0x1ea) = 0;
  *(undefined8 *)((long)param_1 + 0x202) = 0;
  *(undefined8 *)((long)param_1 + 0x1fa) = 0;
  *(undefined8 *)((long)param_1 + 0x212) = 0;
  *(undefined8 *)((long)param_1 + 0x20a) = 0;
  *(undefined8 *)((long)param_1 + 0x222) = 0;
  *(undefined8 *)((long)param_1 + 0x21a) = 0;
  *(undefined8 *)((long)param_1 + 0x232) = 0;
  *(undefined8 *)((long)param_1 + 0x22a) = 0;
  *(undefined8 *)((long)param_1 + 0x242) = 0;
  *(undefined8 *)((long)param_1 + 0x23a) = 0;
  *(undefined8 *)((long)param_1 + 0x252) = 0;
  *(undefined8 *)((long)param_1 + 0x24a) = 0;
  *(undefined1 *)((long)param_1 + 0x25a) = param_3;
  puVar2 = (undefined8 *)0x208;
  __Znwm();
  param_1[0x4c] = puVar2;
  param_1[0x4e] = 0x8000000000000208;
  uVar4 = CONCAT17(param_3,CONCAT16(param_3,CONCAT15(param_3,CONCAT14(param_3,CONCAT13(param_3,
                                                  CONCAT12(param_3,CONCAT11(param_3,param_3)))))));
  uVar1 = CONCAT17(param_3,CONCAT16(param_3,CONCAT15(param_3,CONCAT14(param_3,CONCAT13(param_3,
                                                  CONCAT12(param_3,CONCAT11(param_3,param_3)))))));
  param_1[0x4d] = 0x200;
  puVar2[1] = uVar1;
  *puVar2 = uVar4;
  puVar2[3] = uVar1;
  puVar2[2] = uVar4;
  puVar2[5] = uVar1;
  puVar2[4] = uVar4;
  puVar2[7] = uVar1;
  puVar2[6] = uVar4;
  puVar2[9] = uVar1;
  puVar2[8] = uVar4;
  puVar2[0xb] = uVar1;
  puVar2[10] = uVar4;
  puVar2[0xd] = uVar1;
  puVar2[0xc] = uVar4;
  puVar2[0xf] = uVar1;
  puVar2[0xe] = uVar4;
  puVar2[0x11] = uVar1;
  puVar2[0x10] = uVar4;
  puVar2[0x13] = uVar1;
  puVar2[0x12] = uVar4;
  puVar2[0x15] = uVar1;
  puVar2[0x14] = uVar4;
  puVar2[0x17] = uVar1;
  puVar2[0x16] = uVar4;
  puVar2[0x19] = uVar1;
  puVar2[0x18] = uVar4;
  puVar2[0x1b] = uVar1;
  puVar2[0x1a] = uVar4;
  puVar2[0x1d] = uVar1;
  puVar2[0x1c] = uVar4;
  puVar2[0x1f] = uVar1;
  puVar2[0x1e] = uVar4;
  puVar2[0x21] = uVar1;
  puVar2[0x20] = uVar4;
  puVar2[0x23] = uVar1;
  puVar2[0x22] = uVar4;
  puVar2[0x25] = uVar1;
  puVar2[0x24] = uVar4;
  puVar2[0x27] = uVar1;
  puVar2[0x26] = uVar4;
  puVar2[0x29] = uVar1;
  puVar2[0x28] = uVar4;
  puVar2[0x2b] = uVar1;
  puVar2[0x2a] = uVar4;
  puVar2[0x2d] = uVar1;
  puVar2[0x2c] = uVar4;
  puVar2[0x2f] = uVar1;
  puVar2[0x2e] = uVar4;
  puVar2[0x31] = uVar1;
  puVar2[0x30] = uVar4;
  puVar2[0x33] = uVar1;
  puVar2[0x32] = uVar4;
  puVar2[0x35] = uVar1;
  puVar2[0x34] = uVar4;
  puVar2[0x37] = uVar1;
  puVar2[0x36] = uVar4;
  puVar2[0x39] = uVar1;
  puVar2[0x38] = uVar4;
  puVar2[0x3b] = uVar1;
  puVar2[0x3a] = uVar4;
  puVar2[0x3d] = uVar1;
  puVar2[0x3c] = uVar4;
  puVar2[0x3f] = uVar1;
  puVar2[0x3e] = uVar4;
  *(undefined1 *)(puVar2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4f) = param_4;
  return param_1;
}



/* Entry: 109f52218; end: 109f527e3;  */

void FUN_109f52218(undefined8 *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  byte bVar4;
  undefined4 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined1 uVar12;
  undefined2 uVar13;
  long lVar14;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar15;
  ulong uVar16;
  undefined1 uVar17;
  ulong uVar18;
  ulong uVar19;
  uint unaff_w25;
  long lVar20;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined8 auStack_a8 [3];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulong uStack_70;
  byte bStack_61;
  
  uVar18 = (ulong)*(char *)((long)param_2 + 0x17);
  uVar19 = param_2[1];
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    uVar19 = uVar18;
  }
  if (uVar19 == 0) {
    return;
  }
  lVar20 = 0;
  uVar19 = 0;
  lVar14 = 0;
  lVar10 = 0;
  uVar16 = 0;
  puVar9 = (undefined *)((long)param_1 + 0x5a);
  do {
    plVar6 = (long *)*param_2;
    if (-1 < (long)uVar18) {
      plVar6 = param_2;
    }
    bVar4 = *(byte *)((long)plVar6 + uVar19);
    uVar1 = unaff_w25 << 6;
    unaff_w25 = 0xffU >> (ulong)((byte)(&UNK_10e47d094)[bVar4] & 0x1f) & (uint)bVar4;
    if ((int)uVar16 != 0) {
      unaff_w25 = bVar4 & 0x3f | uVar1;
    }
    bVar4 = (&UNK_10e47d194)[uVar16 * 0x10 + (ulong)(uint)(byte)(&UNK_10e47d094)[bVar4]];
    uVar16 = (ulong)bVar4;
    if (bVar4 == 1) {
      iVar3 = *(int *)(param_1 + 0x4f);
      if (1 < iVar3 - 1U) {
        if (iVar3 != 0) {
          uVar16 = 1;
          goto LAB_109f52490;
        }
        bStack_61 = 3;
        uStack_78 = 0;
        _snprintf(&uStack_78,3,&UNK_10f56e0bd);
        uVar8 = 0x20;
        ___cxa_allocate_exception(0x20);
        __ZNSt3__19to_stringEm(auStack_d8,uVar19);
        func_0x00010928a5e0(auStack_c0,&UNK_10f56e0c2,auStack_d8);
        func_0x000109259240(auStack_a8,auStack_c0,&UNK_10f56e0df);
        puVar5 = (undefined4 *)CONCAT44(uStack_74,uStack_78);
        if (-1 < (char)bStack_61) {
          uStack_70 = (ulong)bStack_61;
          puVar5 = &uStack_78;
        }
        puVar7 = auStack_a8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar7,puVar5,uStack_70);
        uStack_88 = puVar7[1];
        uStack_90 = *puVar7;
        uStack_80 = puVar7[2];
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        func_0x00010937bbbc(uVar8,0x13c,&uStack_90);
        ___cxa_throw(uVar8,&PTR_DAT_110af4510,&DAT_10937bd14);
        goto LAB_109f52720;
      }
      uVar19 = uVar19 - (lVar14 != 0);
      if (iVar3 != 1) goto LAB_109f52484;
      lVar11 = lVar10 + 3;
      if (param_3 == 0) {
        uVar12 = 0xbd;
        uVar15 = 0xbf;
        uVar17 = 0xef;
      }
      else {
        uVar12 = 0x66;
        puVar9[lVar11] = 0x66;
        *(undefined2 *)(puVar9 + lVar10 + 4) = 0x6466;
        lVar11 = lVar10 + 6;
        uVar15 = 0x75;
        uVar17 = 0x5c;
      }
      puVar9[lVar10] = uVar17;
      puVar9[lVar10 + 1] = uVar15;
      puVar9[lVar10 + 2] = uVar12;
      if (0xc < lVar11 - 500U) {
        uVar16 = 0;
        lVar14 = 0;
        lVar10 = lVar11;
        lVar20 = lVar11;
        goto LAB_109f52490;
      }
      plVar6 = (long *)*param_1;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 8);
LAB_109f5246c:
      (*UNRECOVERED_JUMPTABLE)(plVar6,puVar9,lVar11);
      uVar16 = 0;
      lVar14 = 0;
      lVar10 = 0;
      lVar20 = 0;
    }
    else if (bVar4 == 0) {
      if ((int)unaff_w25 < 0xc) {
        if (unaff_w25 == 8) {
          uVar13 = 0x625c;
        }
        else if (unaff_w25 == 9) {
          uVar13 = 0x745c;
        }
        else {
          if (unaff_w25 != 10) goto LAB_109f523f8;
          uVar13 = 0x6e5c;
        }
LAB_109f52448:
        *(undefined2 *)(puVar9 + lVar20) = uVar13;
        lVar11 = lVar20 + 2;
      }
      else {
        if (0x21 < (int)unaff_w25) {
          if (unaff_w25 == 0x22) {
            uVar13 = 0x225c;
          }
          else {
            if (unaff_w25 != 0x5c) goto LAB_109f523f8;
            uVar13 = 0x5c5c;
          }
          goto LAB_109f52448;
        }
        if (unaff_w25 == 0xc) {
          uVar13 = 0x665c;
          goto LAB_109f52448;
        }
        if (unaff_w25 == 0xd) {
          uVar13 = 0x725c;
          goto LAB_109f52448;
        }
LAB_109f523f8:
        uVar1 = 0;
        if (0x7e < unaff_w25) {
          uVar1 = param_3;
        }
        if (unaff_w25 < 0x20 || uVar1 != 0) {
          if (unaff_w25 >> 0x10 == 0) {
            _snprintf(puVar9 + lVar20,7,&UNK_10f56e0a9);
            lVar11 = lVar20 + 6;
          }
          else {
            _snprintf(puVar9 + lVar20,0xd,&UNK_10f56e0b0);
            lVar11 = lVar20 + 0xc;
          }
        }
        else {
          lVar11 = lVar20 + 1;
          puVar9[lVar20] = *(undefined1 *)((long)plVar6 + uVar19);
        }
      }
      lVar10 = lVar11;
      if (lVar11 - 500U < 0xd) {
        plVar6 = (long *)*param_1;
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 8);
        goto LAB_109f5246c;
      }
LAB_109f52484:
      uVar16 = 0;
      lVar14 = 0;
      lVar20 = lVar10;
    }
    else {
      if ((param_3 & 1) == 0) {
        puVar9[lVar20] = *(undefined1 *)((long)plVar6 + uVar19);
        lVar20 = lVar20 + 1;
      }
      lVar14 = lVar14 + 1;
    }
LAB_109f52490:
    uVar19 = uVar19 + 1;
    uVar18 = (ulong)*(char *)((long)param_2 + 0x17);
    uVar2 = param_2[1];
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      uVar2 = uVar18;
    }
  } while (uVar19 < uVar2);
  if ((int)uVar16 == 0) {
    if (lVar20 == 0) {
      return;
    }
    plVar6 = (long *)*param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 8);
    lVar10 = lVar20;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x4f);
    if (iVar3 == 1) {
      (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,puVar9);
      plVar6 = (long *)*param_1;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 8);
      if (param_3 == 0) {
        puVar9 = &UNK_10f56e112;
        lVar10 = 3;
      }
      else {
        puVar9 = &UNK_10f56e10b;
        lVar10 = 6;
      }
    }
    else {
      if (iVar3 != 2) {
        if (iVar3 != 0) {
          return;
        }
        bStack_61 = 3;
        uStack_78 = 0;
        _snprintf(&uStack_78,3,&UNK_10f56e0bd);
        uVar8 = 0x20;
        ___cxa_allocate_exception(0x20);
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (&uStack_90,&UNK_10f56e0e4,&uStack_78);
        func_0x00010937bbbc(uVar8,0x13c,&uStack_90);
        ___cxa_throw(uVar8,&PTR_DAT_110af4510,&DAT_10937bd14);
LAB_109f52720:
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x109f52724);
        (*UNRECOVERED_JUMPTABLE)();
      }
      plVar6 = (long *)*param_1;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000109f52530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar6,puVar9,lVar10);
  return;
}



/* Entry: 109f527e4; end: 109f52b57;  */

void FUN_109f527e4(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  byte bVar3;
  
  if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000109f52808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x30);
    return;
  }
  if (param_2 < 10) {
    uVar2 = 1;
    uVar1 = param_2;
  }
  else {
    if (param_2 < 100) {
      *(undefined *)((long)param_1 + 0x11) = (&UNK_10e47d225)[(ulong)param_2 * 2];
      bVar3 = (&UNK_10e47d224)[(ulong)param_2 * 2];
      uVar2 = 2;
      goto LAB_109f5286c;
    }
    uVar1 = param_2 * 0x29 >> 0xc;
    *(undefined2 *)((long)param_1 + 0x11) =
         *(undefined2 *)(&UNK_10e47d224 + ((ulong)(param_2 + uVar1 * -100) & 0xff) * 2);
    uVar2 = 3;
  }
  bVar3 = (byte)uVar1 | 0x30;
LAB_109f5286c:
  *(byte *)(param_1 + 2) = bVar3;
                    /* WARNING: Could not recover jumptable at 0x000109f52884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,param_1 + 2,uVar2);
  return;
}



/* Entry: 109f52b58; end: 109f52bfb;  */

void FUN_109f52b58(ulong param_1,undefined8 *param_2)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
    pcVar3 = (char *)(param_2 + 2);
    pcVar2 = pcVar3;
    func_0x0001094623c8(pcVar3,param_2 + 10);
    plVar1 = (long *)*param_2;
    lVar4 = (long)pcVar2 - (long)pcVar3;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 8);
  }
  else {
    plVar1 = (long *)*param_2;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 8);
    pcVar3 = "null";
    lVar4 = 4;
  }
                    /* WARNING: Could not recover jumptable at 0x000109f52bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,pcVar3,lVar4);
  return;
}



/* Entry: 109f52bfc; end: 109f54c3b;  */

void FUN_109f52bfc(long param_1,char *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  char **ppcVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  char cVar11;
  undefined1 uVar12;
  ulong uVar13;
  long lVar14;
  undefined **ppuVar15;
  char *pcVar16;
  char cVar17;
  undefined1 uVar18;
  ulong uVar19;
  undefined *puVar20;
  long lVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined8 uStack_218;
  undefined1 uStack_210;
  undefined8 uStack_208;
  char cStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  char cStack_1d9;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  char cStack_1c1;
  long lStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  long lStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  long alStack_140 [3];
  long *plStack_128;
  char *pcStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  char cStack_c8;
  long alStack_c0 [3];
  long *plStack_a8;
  undefined1 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar5 = (int)param_1;
  pcStack_120 = param_2;
  if (*(long *)(param_1 + 0x18) == 0) {
    lStack_110 = 0;
    lStack_118 = 0;
    puStack_100 = (undefined1 *)0x0;
    uStack_108 = 0;
    lStack_f8 = (ulong)CONCAT61((int6)((ulong)lStack_f8 >> 0x10),*(undefined1 *)(param_1 + 0xb8)) <<
                8;
    lStack_180 = 0;
    lStack_178 = 0;
    lStack_170 = 0;
code_r0x000109f52cd8:
    do {
      lVar14 = lStack_110;
      puVar20 = (undefined *)0x0;
      switch(*(undefined4 *)(param_1 + 0x20)) {
      case 1:
        puVar20 = (undefined *)0x1;
      case 2:
        if (lStack_118 == lStack_110) {
          cVar11 = *pcStack_120;
          cVar17 = '\x04';
code_r0x000109f52fe0:
          *pcStack_120 = cVar17;
          lStack_1a0 = CONCAT71(lStack_1a0._1_7_,cVar11);
          uStack_198 = *(undefined8 *)(pcStack_120 + 8);
          *(undefined **)(pcStack_120 + 8) = puVar20;
code_r0x000109f52ff0:
          puVar10 = &uStack_198;
code_r0x000109f530e0:
          FUN_109f49928(puVar10);
        }
        else {
          if (**(char **)(lStack_110 + -8) != '\x02') {
            uVar12 = *puStack_100;
            uVar18 = 4;
code_r0x000109f530c8:
            *puStack_100 = uVar18;
            lStack_1c0 = CONCAT71(lStack_1c0._1_7_,uVar12);
            uStack_1b8 = *(undefined8 *)(puStack_100 + 8);
            *(undefined **)(puStack_100 + 8) = puVar20;
code_r0x000109f530d8:
            puVar10 = &uStack_1b8;
            goto code_r0x000109f530e0;
          }
          ppuVar15 = *(undefined ***)(*(char **)(lStack_110 + -8) + 8);
          puVar9 = ppuVar15[1];
          if (puVar9 < ppuVar15[2]) {
            uVar12 = 4;
code_r0x000109f52f00:
            *puVar9 = uVar12;
            *(undefined **)(puVar9 + 8) = puVar20;
code_r0x000109f52f08:
            ppuVar23 = (undefined **)(puVar9 + 0x10);
          }
          else {
            lVar21 = (long)puVar9 - (long)*ppuVar15;
            uVar1 = (lVar21 >> 4) + 1;
            if (uVar1 >> 0x3c != 0) {
              FUN_109f49fc0();
              goto LAB_109f54744;
            }
            uVar13 = (long)ppuVar15[2] - (long)*ppuVar15;
            uVar19 = (long)uVar13 >> 3;
            if (uVar19 <= uVar1) {
              uVar19 = uVar1;
            }
            if (0x7fffffffffffffef < uVar13) {
              uVar19 = 0xfffffffffffffff;
            }
            ppuStack_148 = ppuVar15;
            if (uVar19 == 0) {
              ppuVar8 = (undefined **)0x0;
            }
            else {
              ppuVar8 = ppuVar15;
              FUN_109f49fd4();
            }
            ppuStack_160 = (undefined **)((long)ppuVar8 + lVar21);
            ppuVar22 = ppuVar8 + uVar19 * 2;
            *(undefined1 *)ppuStack_160 = 4;
            ppuStack_160[1] = puVar20;
            ppuVar23 = ppuStack_160 + 2;
            puVar9 = (undefined1 *)((long)ppuStack_160 + ((long)*ppuVar15 - (long)ppuVar15[1]));
            ppuStack_168 = ppuVar8;
            ppuStack_158 = ppuVar23;
            ppuStack_150 = ppuVar22;
            func_0x000109f4a008(ppuVar15,*ppuVar15,ppuVar15[1],puVar9);
code_r0x000109f53454:
            ppuStack_168 = (undefined **)*ppuVar15;
            *ppuVar15 = puVar9;
            ppuVar15[1] = (undefined *)ppuVar23;
            ppuStack_150 = (undefined **)ppuVar15[2];
            ppuVar15[2] = (undefined *)ppuVar22;
            ppuStack_160 = ppuStack_168;
            ppuStack_158 = ppuStack_168;
            FUN_109f4a0dc(&ppuStack_168);
          }
code_r0x000109f53480:
          ppuVar15[1] = (undefined *)ppuVar23;
        }
code_r0x000109f53484:
        lVar21 = lStack_110;
        if (lStack_178 != 0) {
          do {
            if ((*(ulong *)(lStack_180 + (lStack_178 - 1U >> 6) * 8) >> (lStack_178 - 1U & 0x3f) & 1
                ) == 0) {
              iVar4 = iVar5 + 0x28;
              FUN_109f54c8c();
              *(int *)(param_1 + 0x20) = iVar4;
              if (iVar4 == 0xd) {
                iVar4 = iVar5 + 0x28;
                lStack_110 = lVar14;
                FUN_109f54c8c();
                *(int *)(param_1 + 0x20) = iVar4;
                if (iVar4 != 4) {
                  FUN_109f55b40(&lStack_1a0,*(undefined8 *)(param_1 + 0x60),
                                *(undefined8 *)(param_1 + 0x68));
                  uStack_1b8 = *(undefined8 *)(param_1 + 0x50);
                  lStack_1c0 = *(long *)(param_1 + 0x48);
                  lStack_1b0 = *(long *)(param_1 + 0x58);
                  func_0x000107c31940(&uStack_1f0,&UNK_10f568444);
                  FUN_109f55c30(&uStack_1d8,param_1,4,&uStack_1f0);
                  func_0x000109384a64(&ppuStack_168,0x65,&lStack_1c0,&uStack_1d8);
                  FUN_109f56048(&pcStack_120,&ppuStack_168);
                  goto code_r0x000109f5409c;
                }
                puVar9 = *(undefined1 **)(*(long *)(lVar14 + -8) + 8);
                FUN_109f56a14(puVar9,param_1 + 0x78);
                iVar4 = iVar5 + 0x28;
                puStack_100 = puVar9;
                FUN_109f54c8c();
                *(int *)(param_1 + 0x20) = iVar4;
                if (iVar4 == 0xc) {
                  iVar4 = iVar5 + 0x28;
                  FUN_109f54c8c();
                  goto code_r0x000109f53550;
                }
                FUN_109f55b40(&lStack_1a0,*(undefined8 *)(param_1 + 0x60),
                              *(undefined8 *)(param_1 + 0x68));
                uStack_1b8 = *(undefined8 *)(param_1 + 0x50);
                lStack_1c0 = *(long *)(param_1 + 0x48);
                lStack_1b0 = *(long *)(param_1 + 0x58);
                func_0x000107c31940(&uStack_1f0,&UNK_10f56844f);
                FUN_109f55c30(&uStack_1d8,param_1,0xc,&uStack_1f0);
                func_0x000109384a64(&ppuStack_168,0x65,&lStack_1c0,&uStack_1d8);
                FUN_109f56048(&pcStack_120,&ppuStack_168);
                goto code_r0x000109f5409c;
              }
              if (iVar4 != 0xb) {
                lStack_110 = lVar14;
                FUN_109f55b40(&lStack_1a0,*(undefined8 *)(param_1 + 0x60),
                              *(undefined8 *)(param_1 + 0x68));
                uStack_1b8 = *(undefined8 *)(param_1 + 0x50);
                lStack_1c0 = *(long *)(param_1 + 0x48);
                lStack_1b0 = *(long *)(param_1 + 0x58);
                func_0x000107c31940(&uStack_1f0,&DAT_10f365d6f);
                FUN_109f55c30(&uStack_1d8,param_1,0xb,&uStack_1f0);
                func_0x000109384a64(&ppuStack_168,0x65,&lStack_1c0,&uStack_1d8);
                FUN_109f56048(&pcStack_120,&ppuStack_168);
                goto code_r0x000109f5409c;
              }
            }
            else {
              iVar4 = iVar5 + 0x28;
              FUN_109f54c8c();
              *(int *)(param_1 + 0x20) = iVar4;
              if (iVar4 == 0xd) goto code_r0x000109f534f8;
              if (iVar4 != 10) {
                lStack_110 = lVar14;
                FUN_109f55b40(&lStack_1a0,*(undefined8 *)(param_1 + 0x60),
                              *(undefined8 *)(param_1 + 0x68));
                uStack_1b8 = *(undefined8 *)(param_1 + 0x50);
                lStack_1c0 = *(long *)(param_1 + 0x48);
                lStack_1b0 = *(long *)(param_1 + 0x58);
                func_0x000107c31940(&uStack_1f0,"array");
                FUN_109f55c30(&uStack_1d8,param_1,10,&uStack_1f0);
                func_0x000109384a64(&ppuStack_168,0x65,&lStack_1c0,&uStack_1d8);
                FUN_109f56048(&pcStack_120,&ppuStack_168);
                goto code_r0x000109f5409c;
              }
            }
            lVar14 = lVar14 + -8;
            lStack_178 = lStack_178 + -1;
            lVar21 = lVar14;
            if (lStack_178 == 0) break;
          } while( true );
        }
        goto LAB_109f5355c;
      case 3:
        if (lStack_118 == lStack_110) {
          cVar11 = *pcStack_120;
          *pcStack_120 = '\0';
          lStack_1a0 = CONCAT71(lStack_1a0._1_7_,cVar11);
          uStack_198 = *(undefined8 *)(pcStack_120 + 8);
          pcStack_120[8] = '\0';
          pcStack_120[9] = '\0';
          pcStack_120[10] = '\0';
          pcStack_120[0xb] = '\0';
          pcStack_120[0xc] = '\0';
          pcStack_120[0xd] = '\0';
          pcStack_120[0xe] = '\0';
          pcStack_120[0xf] = '\0';
          goto code_r0x000109f52ff0;
        }
        if (**(char **)(lStack_110 + -8) != '\x02') {
          uVar12 = *puStack_100;
          *puStack_100 = 0;
          lStack_1c0 = CONCAT71(lStack_1c0._1_7_,uVar12);
          uStack_1b8 = *(undefined8 *)(puStack_100 + 8);
          *(undefined8 *)(puStack_100 + 8) = 0;
          goto code_r0x000109f530d8;
        }
        ppuVar15 = *(undefined ***)(*(char **)(lStack_110 + -8) + 8);
        puVar9 = ppuVar15[1];
        if (puVar9 < ppuVar15[2]) {
          *puVar9 = 0;
          *(undefined8 *)(puVar9 + 8) = 0;
          ppuVar23 = (undefined **)(puVar9 + 0x10);
          goto code_r0x000109f53480;
        }
        lVar21 = (long)puVar9 - (long)*ppuVar15;
        uVar1 = (lVar21 >> 4) + 1;
        if (uVar1 >> 0x3c == 0) {
          uVar13 = (long)ppuVar15[2] - (long)*ppuVar15;
          uVar19 = (long)uVar13 >> 3;
          if (uVar19 <= uVar1) {
            uVar19 = uVar1;
          }
          if (0x7fffffffffffffef < uVar13) {
            uVar19 = 0xfffffffffffffff;
          }
          ppuStack_148 = ppuVar15;
          if (uVar19 == 0) {
            ppuVar8 = (undefined **)0x0;
          }
          else {
            ppuVar8 = ppuVar15;
            FUN_109f49fd4();
          }
          ppuStack_160 = (undefined **)((long)ppuVar8 + lVar21);
          ppuVar22 = ppuVar8 + uVar19 * 2;
          *(undefined1 *)ppuStack_160 = 0;
          ppuStack_160[1] = (undefined *)0x0;
          ppuVar23 = ppuStack_160 + 2;
          puVar9 = (undefined1 *)((long)ppuStack_160 + ((long)*ppuVar15 - (long)ppuVar15[1]));
          ppuStack_168 = ppuVar8;
          ppuStack_158 = ppuVar23;
          ppuStack_150 = ppuVar22;
          func_0x000109f4a008(ppuVar15,*ppuVar15,ppuVar15[1],puVar9);
          goto code_r0x000109f53454;
        }
code_r0x000109f54730:
        FUN_109f49fc0();
        goto LAB_109f54744;
      case 4:
        if (lStack_118 == lStack_110) {
          lVar21 = param_1 + 0x78;
          FUN_109f4ec64();
          cVar11 = *pcStack_120;
          *pcStack_120 = '\x03';
          lStack_1a0 = CONCAT71(lStack_1a0._1_7_,cVar11);
          uStack_198 = *(undefined8 *)(pcStack_120 + 8);
          *(long *)(pcStack_120 + 8) = lVar21;
          goto code_r0x000109f52ff0;
        }
        if (**(char **)(lStack_110 + -8) != '\x02') {
          lVar21 = param_1 + 0x78;
          FUN_109f4ec64();
          uVar12 = *puStack_100;
          *puStack_100 = 3;
          lStack_1c0 = CONCAT71(lStack_1c0._1_7_,uVar12);
          uStack_1b8 = *(undefined8 *)(puStack_100 + 8);
          *(long *)(puStack_100 + 8) = lVar21;
          goto code_r0x000109f530d8;
        }
        ppuVar15 = *(undefined ***)(*(char **)(lStack_110 + -8) + 8);
        puVar9 = ppuVar15[1];
        if (puVar9 < ppuVar15[2]) {
          *(undefined8 *)(puVar9 + 8) = 0;
          *puVar9 = 3;
          lVar21 = param_1 + 0x78;
          FUN_109f4ec64();
          *(long *)(puVar9 + 8) = lVar21;
          ppuVar8 = (undefined **)(puVar9 + 0x10);
          ppuVar15[1] = (undefined *)ppuVar8;
        }
        else {
          lVar21 = (long)puVar9 - (long)*ppuVar15;
          uVar1 = (lVar21 >> 4) + 1;
          if (uVar1 >> 0x3c != 0) goto code_r0x000109f54730;
          uVar13 = (long)ppuVar15[2] - (long)*ppuVar15;
          uVar19 = (long)uVar13 >> 3;
          if (uVar19 <= uVar1) {
            uVar19 = uVar1;
          }
          if (0x7fffffffffffffef < uVar13) {
            uVar19 = 0xfffffffffffffff;
          }
          ppuStack_148 = ppuVar15;
          if (uVar19 == 0) {
            ppuVar8 = (undefined **)0x0;
          }
          else {
            ppuVar8 = ppuVar15;
            FUN_109f49fd4();
          }
          ppuVar23 = (undefined **)((long)ppuVar8 + lVar21);
          ppuStack_150 = ppuVar8 + uVar19 * 2;
          ppuVar23[1] = (undefined *)0x0;
          *(undefined1 *)ppuVar23 = 3;
          puVar20 = (undefined *)(param_1 + 0x78);
          ppuStack_168 = ppuVar8;
          ppuStack_160 = ppuVar23;
          ppuStack_158 = ppuVar23;
          FUN_109f4ec64();
          ppuVar23[1] = puVar20;
          ppuStack_158 = ppuVar23 + 2;
          puVar9 = (undefined1 *)((long)ppuVar23 + ((long)*ppuVar15 - (long)ppuVar15[1]));
          func_0x000109f4a008(ppuVar15,*ppuVar15,ppuVar15[1],puVar9);
          ppuVar8 = ppuStack_158;
          ppuStack_168 = (undefined **)*ppuVar15;
          *ppuVar15 = puVar9;
          ppuVar15[1] = (undefined *)ppuStack_158;
          puVar20 = ppuVar15[2];
          ppuVar15[2] = (undefined *)ppuStack_150;
          ppuStack_160 = ppuStack_168;
          ppuStack_158 = ppuStack_168;
          ppuStack_150 = (undefined **)puVar20;
          FUN_109f4a0dc(&ppuStack_168);
        }
        ppuVar15[1] = (undefined *)ppuVar8;
        goto code_r0x000109f53484;
      case 5:
        puVar20 = *(undefined **)(param_1 + 0xa0);
        if (lStack_118 == lStack_110) {
          cVar11 = *pcStack_120;
          cVar17 = '\x06';
          goto code_r0x000109f52fe0;
        }
        if (**(char **)(lStack_110 + -8) == '\x02') {
          ppuVar15 = *(undefined ***)(*(char **)(lStack_110 + -8) + 8);
          puVar9 = ppuVar15[1];
          if (ppuVar15[2] <= puVar9) {
            lVar21 = (long)puVar9 - (long)*ppuVar15;
            uVar1 = (lVar21 >> 4) + 1;
            if (uVar1 >> 0x3c != 0) goto code_r0x000109f54730;
            uVar13 = (long)ppuVar15[2] - (long)*ppuVar15;
            uVar19 = (long)uVar13 >> 3;
            if (uVar19 <= uVar1) {
              uVar19 = uVar1;
            }
            if (0x7fffffffffffffef < uVar13) {
              uVar19 = 0xfffffffffffffff;
            }
            ppuStack_148 = ppuVar15;
            if (uVar19 == 0) {
              ppuVar8 = (undefined **)0x0;
            }
            else {
              ppuVar8 = ppuVar15;
              FUN_109f49fd4();
            }
            ppuStack_160 = (undefined **)((long)ppuVar8 + lVar21);
            ppuVar22 = ppuVar8 + uVar19 * 2;
            *(undefined1 *)ppuStack_160 = 6;
            ppuStack_160[1] = puVar20;
            ppuVar23 = ppuStack_160 + 2;
            puVar9 = (undefined1 *)((long)ppuStack_160 + ((long)*ppuVar15 - (long)ppuVar15[1]));
            ppuStack_168 = ppuVar8;
            ppuStack_158 = ppuVar23;
            ppuStack_150 = ppuVar22;
            func_0x000109f4a008(ppuVar15,*ppuVar15,ppuVar15[1],puVar9);
            goto code_r0x000109f53454;
          }
          uVar12 = 6;
          goto code_r0x000109f52f00;
        }
        uVar12 = *puStack_100;
        uVar18 = 6;
        goto code_r0x000109f530c8;
      case 6:
        puVar20 = *(undefined **)(param_1 + 0x98);
        if (lStack_118 == lStack_110) {
          cVar11 = *pcStack_120;
          cVar17 = '\x05';
          goto code_r0x000109f52fe0;
        }
        if (**(char **)(lStack_110 + -8) != '\x02') {
          uVar12 = *puStack_100;
          uVar18 = 5;
          goto code_r0x000109f530c8;
        }
        ppuVar15 = *(undefined ***)(*(char **)(lStack_110 + -8) + 8);
        puVar9 = ppuVar15[1];
        if (ppuVar15[2] <= puVar9) {
          lVar21 = (long)puVar9 - (long)*ppuVar15;
          uVar1 = (lVar21 >> 4) + 1;
          if (uVar1 >> 0x3c != 0) goto code_r0x000109f54730;
          uVar13 = (long)ppuVar15[2] - (long)*ppuVar15;
          uVar19 = (long)uVar13 >> 3;
          if (uVar19 <= uVar1) {
            uVar19 = uVar1;
          }
          if (0x7fffffffffffffef < uVar13) {
            uVar19 = 0xfffffffffffffff;
          }
          ppuStack_148 = ppuVar15;
          if (uVar19 == 0) {
            ppuVar8 = (undefined **)0x0;
          }
          else {
            ppuVar8 = ppuVar15;
            FUN_109f49fd4();
          }
          ppuStack_160 = (undefined **)((long)ppuVar8 + lVar21);
          ppuVar22 = ppuVar8 + uVar19 * 2;
          *(undefined1 *)ppuStack_160 = 5;
          ppuStack_160[1] = puVar20;
          ppuVar23 = ppuStack_160 + 2;
          puVar9 = (undefined1 *)((long)ppuStack_160 + ((long)*ppuVar15 - (long)ppuVar15[1]));
          ppuStack_168 = ppuVar8;
          ppuStack_158 = ppuVar23;
          ppuStack_150 = ppuVar22;
          func_0x000109f4a008(ppuVar15,*ppuVar15,ppuVar15[1],puVar9);
          goto code_r0x000109f53454;
        }
        uVar12 = 5;
        goto code_r0x000109f52f00;
      case 7:
        puVar20 = *(undefined **)(param_1 + 0xa8);
        if (0x7fefffffffffffff < ((ulong)puVar20 & 0x7fffffffffffffff)) {
          FUN_109f55b40(&lStack_1a0,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68))
          ;
          FUN_109f55b40(&uStack_1f0,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68))
          ;
          func_0x00010928a5e0(&uStack_1d8,&UNK_10f568460,&uStack_1f0);
          func_0x000109259240(&lStack_1c0,&uStack_1d8,&DAT_10f638984);
          func_0x000109386318(&ppuStack_168,0x196,&lStack_1c0);
          func_0x000109f56b18(&pcStack_120,&ppuStack_168);
          ppuStack_168 = &PTR_DAT_110af44f8;
          __ZNSt13runtime_errorD1Ev(&ppuStack_158);
          __ZNSt9exceptionD2Ev(&ppuStack_168);
          if (lStack_1b0 < 0) {
            __ZdlPv(lStack_1c0);
          }
          goto code_r0x000109f540b8;
        }
        if (lStack_118 == lStack_110) {
          cVar11 = *pcStack_120;
          *pcStack_120 = '\a';
          lStack_1a0 = CONCAT71(lStack_1a0._1_7_,cVar11);
          uStack_198 = *(undefined8 *)(pcStack_120 + 8);
          *(undefined **)(pcStack_120 + 8) = puVar20;
          goto code_r0x000109f52ff0;
        }
        if (**(char **)(lStack_110 + -8) != '\x02') {
          uVar12 = *puStack_100;
          *puStack_100 = 7;
          lStack_1c0 = CONCAT71(lStack_1c0._1_7_,uVar12);
          uStack_1b8 = *(undefined8 *)(puStack_100 + 8);
          *(undefined **)(puStack_100 + 8) = puVar20;
          goto code_r0x000109f530d8;
        }
        ppuVar15 = *(undefined ***)(*(char **)(lStack_110 + -8) + 8);
        puVar9 = ppuVar15[1];
        if (puVar9 < ppuVar15[2]) {
          *puVar9 = 7;
          *(undefined **)(puVar9 + 8) = puVar20;
          goto code_r0x000109f52f08;
        }
        lVar21 = (long)puVar9 - (long)*ppuVar15;
        uVar1 = (lVar21 >> 4) + 1;
        if (uVar1 >> 0x3c == 0) {
          uVar13 = (long)ppuVar15[2] - (long)*ppuVar15;
          uVar19 = (long)uVar13 >> 3;
          if (uVar19 <= uVar1) {
            uVar19 = uVar1;
          }
          if (0x7fffffffffffffef < uVar13) {
            uVar19 = 0xfffffffffffffff;
          }
          ppuStack_148 = ppuVar15;
          if (uVar19 == 0) {
            ppuVar8 = (undefined **)0x0;
          }
          else {
            ppuVar8 = ppuVar15;
            FUN_109f49fd4();
          }
          ppuStack_160 = (undefined **)((long)ppuVar8 + lVar21);
          ppuVar22 = ppuVar8 + uVar19 * 2;
          *(undefined1 *)ppuStack_160 = 7;
          ppuStack_160[1] = puVar20;
          ppuVar23 = ppuStack_160 + 2;
          puVar9 = (undefined1 *)((long)ppuStack_160 + ((long)*ppuVar15 - (long)ppuVar15[1]));
          ppuStack_168 = ppuVar8;
          ppuStack_158 = ppuVar23;
          ppuStack_150 = ppuVar22;
          func_0x000109f4a008(ppuVar15,*ppuVar15,ppuVar15[1],puVar9);
          goto code_r0x000109f53454;
        }
        FUN_109f49fc0();
        goto LAB_109f54744;
      case 8:
        ppcVar7 = &pcStack_120;
        FUN_109f56c1c(ppcVar7,2);
        FUN_109f56b64(&lStack_118,ppcVar7);
        iVar4 = iVar5 + 0x28;
        FUN_109f54c8c();
        *(int *)(param_1 + 0x20) = iVar4;
        if (iVar4 == 10) {
code_r0x000109f52e18:
          lVar14 = lStack_110 + -8;
          lStack_110 = lVar14;
          goto code_r0x000109f53484;
        }
        ppuStack_168 = (undefined **)CONCAT71(ppuStack_168._1_7_,1);
        func_0x0001078db3d4(&lStack_180,&ppuStack_168);
        break;
      case 9:
        ppcVar7 = &pcStack_120;
        FUN_109f56c1c(ppcVar7,1);
        FUN_109f56b64(&lStack_118,ppcVar7);
        iVar4 = iVar5 + 0x28;
        FUN_109f54c8c();
        *(int *)(param_1 + 0x20) = iVar4;
        if (iVar4 == 0xb) goto code_r0x000109f52e18;
        if (iVar4 == 4) {
          puVar9 = *(undefined1 **)(*(long *)(lStack_110 + -8) + 8);
          FUN_109f56a14(puVar9,param_1 + 0x78);
          iVar4 = iVar5 + 0x28;
          puStack_100 = puVar9;
          FUN_109f54c8c();
          *(int *)(param_1 + 0x20) = iVar4;
          if (iVar4 == 0xc) {
            ppuStack_168 = (undefined **)((ulong)ppuStack_168 & 0xffffffffffffff00);
            func_0x0001078db3d4(&lStack_180,&ppuStack_168);
            iVar4 = iVar5 + 0x28;
            FUN_109f54c8c();
            goto code_r0x000109f53550;
          }
          FUN_109f55b40(&lStack_1a0,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68))
          ;
          uStack_1b8 = *(undefined8 *)(param_1 + 0x50);
          lStack_1c0 = *(long *)(param_1 + 0x48);
          lStack_1b0 = *(long *)(param_1 + 0x58);
          func_0x000107c31940(&uStack_1f0,&UNK_10f56844f);
          FUN_109f55c30(&uStack_1d8,param_1,0xc,&uStack_1f0);
          func_0x000109384a64(&ppuStack_168,0x65,&lStack_1c0,&uStack_1d8);
          FUN_109f56048(&pcStack_120,&ppuStack_168);
        }
        else {
          FUN_109f55b40(&lStack_1a0,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68))
          ;
          uStack_1b8 = *(undefined8 *)(param_1 + 0x50);
          lStack_1c0 = *(long *)(param_1 + 0x48);
          lStack_1b0 = *(long *)(param_1 + 0x58);
          func_0x000107c31940(&uStack_1f0,&UNK_10f568444);
          FUN_109f55c30(&uStack_1d8,param_1,4,&uStack_1f0);
          func_0x000109384a64(&ppuStack_168,0x65,&lStack_1c0,&uStack_1d8);
          FUN_109f56048(&pcStack_120,&ppuStack_168);
        }
        goto code_r0x000109f5409c;
      default:
        goto LAB_109f54038;
      case 0xe:
        FUN_109f55b40(&lStack_1a0,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68));
        uStack_1b8 = *(undefined8 *)(param_1 + 0x50);
        lStack_1c0 = *(long *)(param_1 + 0x48);
        lStack_1b0 = *(long *)(param_1 + 0x58);
        func_0x000107c31940(&uStack_1f0,"value");
        FUN_109f55c30(&uStack_1d8,param_1,0,&uStack_1f0);
        func_0x000109384a64(&ppuStack_168,0x65,&lStack_1c0,&uStack_1d8);
        FUN_109f56048(&pcStack_120,&ppuStack_168);
        goto code_r0x000109f5409c;
      }
    } while( true );
  }
  func_0x000109f55a90(alStack_140,param_1);
  uVar12 = *(undefined1 *)(param_1 + 0xb8);
  plStack_a8 = alStack_c0;
  lStack_110 = 0;
  lStack_118 = 0;
  puStack_100 = (undefined1 *)0x0;
  uStack_108 = 0;
  uStack_f0 = 0;
  lStack_f8 = 0;
  uStack_e0 = 0;
  lStack_e8 = 0;
  puStack_d0 = (undefined1 *)0x0;
  uStack_d8 = 0;
  cStack_c8 = '\0';
  plVar6 = plStack_128;
  if (plStack_128 != (long *)0x0) {
    if (plStack_128 == alStack_140) {
      (**(code **)(*plStack_128 + 0x18))(plStack_128,plStack_a8);
      plVar6 = plStack_a8;
    }
    else {
      plVar6 = plStack_128;
      (**(code **)(*plStack_128 + 0x10))();
    }
  }
  plStack_a8 = plVar6;
  auStack_98[0] = 9;
  uStack_90 = 0;
  ppuStack_168 = (undefined **)CONCAT71(ppuStack_168._1_7_,1);
  uStack_a0 = uVar12;
  func_0x0001078db3d4(&puStack_100,&ppuStack_168);
  if (plStack_128 == alStack_140) {
    lVar14 = 0x20;
  }
  else {
    if (plStack_128 == (long *)0x0) goto LAB_109f536d8;
    lVar14 = 0x28;
  }
  (**(code **)(*plStack_128 + lVar14))();
LAB_109f536d8:
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
code_r0x000109f536fc:
  ppuVar15 = (undefined **)0x0;
  uVar2 = ppuStack_168._4_4_;
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 1:
    ppuVar15 = (undefined **)0x1;
  case 2:
    if ((*(ulong *)(puStack_100 + (lStack_f8 - 1U >> 6) * 8) >> (lStack_f8 - 1U & 0x3f) & 1) != 0) {
      ppuStack_168 = (undefined **)CONCAT71(ppuStack_168._1_7_,4);
      uStack_1d8 = (undefined4)((ulong)(lStack_110 - lStack_118) >> 3);
      uStack_1f0 = 5;
      ppuStack_160 = ppuVar15;
      if (plStack_a8 == (long *)0x0) {
        func_0x000104c501e4();
        goto LAB_109f54744;
      }
      plVar6 = plStack_a8;
      (**(code **)(*plStack_a8 + 0x30))(plStack_a8,&uStack_1d8,&uStack_1f0,&ppuStack_168);
      if (((ulong)plVar6 & 1) != 0) {
        if (lStack_118 == lStack_110) {
code_r0x000109f53b7c:
          cVar11 = *pcStack_120;
          *pcStack_120 = (char)ppuStack_168;
          lStack_1a0 = CONCAT71(lStack_1a0._1_7_,cVar11);
          uStack_198 = *(undefined8 *)(pcStack_120 + 8);
          *(undefined ***)(pcStack_120 + 8) = ppuStack_160;
          plVar6 = &lStack_1a0;
code_r0x000109f53c58:
          ppuStack_160 = (undefined **)0x0;
          ppuStack_168 = (undefined **)((ulong)ppuStack_168 & 0xffffffffffffff00);
          FUN_109f49928(plVar6 + 1);
        }
        else {
          pcVar16 = *(char **)(lStack_110 + -8);
          if (pcVar16 != (char *)0x0) {
            if (*pcVar16 == '\x02') {
              FUN_109f49e90(*(undefined8 *)(pcVar16 + 8),&ppuStack_168);
            }
            else {
code_r0x000109f53c0c:
              uStack_e0 = uStack_e0 - 1;
              if ((*(ulong *)(lStack_e8 + (uStack_e0 >> 6) * 8) >> (uStack_e0 & 0x3f) & 1) != 0) {
                uVar12 = *puStack_d0;
                *puStack_d0 = (char)ppuStack_168;
                lStack_1c0 = CONCAT71(lStack_1c0._1_7_,uVar12);
                uStack_1b8 = *(undefined8 *)(puStack_d0 + 8);
                *(undefined ***)(puStack_d0 + 8) = ppuStack_160;
                plVar6 = &lStack_1c0;
                goto code_r0x000109f53c58;
              }
            }
          }
        }
      }
code_r0x000109f53c60:
      FUN_109f49928(&ppuStack_160,(ulong)ppuStack_168 & 0xff);
    }
    break;
  case 3:
    if ((*(ulong *)(puStack_100 + (lStack_f8 - 1U >> 6) * 8) >> (lStack_f8 - 1U & 0x3f) & 1) == 0)
    break;
    ppuStack_168 = (undefined **)((ulong)ppuStack_168._1_7_ << 8);
    ppuStack_160 = (undefined **)0x0;
    uStack_1d8 = (undefined4)((ulong)(lStack_110 - lStack_118) >> 3);
    uStack_1f0 = 5;
    if (plStack_a8 != (long *)0x0) {
      plVar6 = plStack_a8;
      (**(code **)(*plStack_a8 + 0x30))(plStack_a8,&uStack_1d8,&uStack_1f0,&ppuStack_168);
      if (((ulong)plVar6 & 1) == 0) goto code_r0x000109f53c60;
      if (lStack_118 == lStack_110) goto code_r0x000109f53b7c;
      pcVar16 = *(char **)(lStack_110 + -8);
      if (pcVar16 != (char *)0x0) {
        if (*pcVar16 == '\x02') {
          FUN_109f49e90(*(undefined8 *)(pcVar16 + 8),&ppuStack_168);
          goto code_r0x000109f53c60;
        }
        goto code_r0x000109f53c0c;
      }
      goto code_r0x000109f53c60;
    }
    func_0x000104c501e4();
    goto LAB_109f54744;
  case 4:
    if ((*(ulong *)(puStack_100 + (lStack_f8 - 1U >> 6) * 8) >> (lStack_f8 - 1U & 0x3f) & 1) != 0) {
      ppuStack_168 = (undefined **)CONCAT71(ppuStack_168._1_7_,3);
      ppuVar15 = (undefined **)(param_1 + 0x78);
      FUN_109f4ec64();
      uStack_1d8 = (undefined4)((ulong)(lStack_110 - lStack_118) >> 3);
      uStack_1f0 = 5;
      ppuStack_160 = ppuVar15;
      if (plStack_a8 != (long *)0x0) {
        plVar6 = plStack_a8;
        (**(code **)(*plStack_a8 + 0x30))(plStack_a8,&uStack_1d8,&uStack_1f0,&ppuStack_168);
        if (((ulong)plVar6 & 1) != 0) {
          if (lStack_118 == lStack_110) goto code_r0x000109f53b7c;
          pcVar16 = *(char **)(lStack_110 + -8);
          if (pcVar16 != (char *)0x0) {
            if (*pcVar16 != '\x02') goto code_r0x000109f53c0c;
            FUN_109f49e90(*(undefined8 *)(pcVar16 + 8),&ppuStack_168);
          }
        }
        goto code_r0x000109f53c60;
      }
      func_0x000104c501e4();
      goto LAB_109f54744;
    }
    break;
  case 5:
    if ((*(ulong *)(puStack_100 + (lStack_f8 - 1U >> 6) * 8) >> (lStack_f8 - 1U & 0x3f) & 1) != 0) {
      ppuStack_160 = *(undefined ***)(param_1 + 0xa0);
      ppuStack_168 = (undefined **)CONCAT71(ppuStack_168._1_7_,6);
      uStack_1d8 = (undefined4)((ulong)(lStack_110 - lStack_118) >> 3);
      uStack_1f0 = 5;
      if (plStack_a8 != (long *)0x0) {
        plVar6 = plStack_a8;
        (**(code **)(*plStack_a8 + 0x30))(plStack_a8,&uStack_1d8,&uStack_1f0,&ppuStack_168);
        if (((ulong)plVar6 & 1) != 0) {
          if (lStack_118 == lStack_110) goto code_r0x000109f53b7c;
          pcVar16 = *(char **)(lStack_110 + -8);
          if (pcVar16 != (char *)0x0) {
            if (*pcVar16 != '\x02') goto code_r0x000109f53c0c;
            FUN_109f49e90(*(undefined8 *)(pcVar16 + 8),&ppuStack_168);
          }
        }
        goto code_r0x000109f53c60;
      }
      func_0x000104c501e4();
      goto LAB_109f54744;
    }
    break;
  case 6:
    if ((*(ulong *)(puStack_100 + (lStack_f8 - 1U >> 6) * 8) >> (lStack_f8 - 1U & 0x3f) & 1) != 0) {
      ppuStack_160 = *(undefined ***)(param_1 + 0x98);
      ppuStack_168 = (undefined **)CONCAT71(ppuStack_168._1_7_,5);
      uStack_1d8 = (undefined4)((ulong)(lStack_110 - lStack_118) >> 3);
      uStack_1f0 = 5;
      if (plStack_a8 != (long *)0x0) {
        plVar6 = plStack_a8;
        (**(code **)(*plStack_a8 + 0x30))(plStack_a8,&uStack_1d8,&uStack_1f0,&ppuStack_168);
        if (((ulong)plVar6 & 1) != 0) {
          if (lStack_118 == lStack_110) goto code_r0x000109f53b7c;
          pcVar16 = *(char **)(lStack_110 + -8);
          if (pcVar16 != (char *)0x0) {
            if (*pcVar16 != '\x02') goto code_r0x000109f53c0c;
            FUN_109f49e90(*(undefined8 *)(pcVar16 + 8),&ppuStack_168);
          }
        }
        goto code_r0x000109f53c60;
      }
      goto code_r0x000109f54708;
    }
    break;
  case 7:
    ppuVar15 = *(undefined ***)(param_1 + 0xa8);
    if (0x7fefffffffffffff < ((ulong)ppuVar15 & 0x7fffffffffffffff)) {
      FUN_109f55b40(&lStack_1a0,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68));
      FUN_109f55b40(&uStack_1f0,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68));
      func_0x00010928a5e0(&uStack_1d8,&UNK_10f568460,&uStack_1f0);
      func_0x000109259240(&lStack_1c0,&uStack_1d8,&DAT_10f638984);
      func_0x000109386318(&ppuStack_168,0x196,&lStack_1c0);
      func_0x000109f56764(&pcStack_120,&ppuStack_168);
      ppuStack_168 = &PTR_DAT_110af44f8;
      __ZNSt13runtime_errorD1Ev(&ppuStack_158);
      __ZNSt9exceptionD2Ev(&ppuStack_168);
      if (lStack_1b0 < 0) {
        __ZdlPv(lStack_1c0);
      }
      goto code_r0x000109f53e24;
    }
    if ((*(ulong *)(puStack_100 + (lStack_f8 - 1U >> 6) * 8) >> (lStack_f8 - 1U & 0x3f) & 1) != 0) {
      ppuStack_168 = (undefined **)CONCAT71(ppuStack_168._1_7_,7);
      uStack_1d8 = (undefined4)((ulong)(lStack_110 - lStack_118) >> 3);
      uStack_1f0 = 5;
      ppuStack_160 = ppuVar15;
      if (plStack_a8 != (long *)0x0) {
        plVar6 = plStack_a8;
        (**(code **)(*plStack_a8 + 0x30))(plStack_a8,&uStack_1d8,&uStack_1f0,&ppuStack_168);
        if (((ulong)plVar6 & 1) != 0) {
          if (lStack_118 == lStack_110) goto code_r0x000109f53b7c;
          pcVar16 = *(char **)(lStack_110 + -8);
          if (pcVar16 != (char *)0x0) {
            if (*pcVar16 != '\x02') goto code_r0x000109f53c0c;
            FUN_109f49e90(*(undefined8 *)(pcVar16 + 8),&ppuStack_168);
          }
        }
        goto code_r0x000109f53c60;
      }
      func_0x000104c501e4();
      goto LAB_109f54744;
    }
    break;
  case 8:
    ppuStack_168 = (undefined **)CONCAT44(uVar2,(int)((ulong)(lStack_110 - lStack_118) >> 3));
    lStack_1a0 = CONCAT71(lStack_1a0._1_7_,2);
    if (plStack_a8 == (long *)0x0) {
code_r0x000109f546f4:
      func_0x000104c501e4();
      goto LAB_109f54744;
    }
    plVar6 = plStack_a8;
    (**(code **)(*plStack_a8 + 0x30))(plStack_a8,&ppuStack_168,&lStack_1a0,auStack_98);
    ppuStack_168 = (undefined **)CONCAT71(ppuStack_168._1_7_,(char)plVar6);
    func_0x0001078db3d4(&puStack_100,&ppuStack_168);
    ppcVar7 = &pcStack_120;
    FUN_109f567b0(ppcVar7,2);
    FUN_109f56914(&lStack_118,ppcVar7);
    iVar4 = iVar5 + 0x28;
    FUN_109f54c8c();
    *(int *)(param_1 + 0x20) = iVar4;
    if (iVar4 == 10) {
      FUN_109f56644(&pcStack_120);
      break;
    }
    ppuStack_168 = (undefined **)CONCAT71(ppuStack_168._1_7_,1);
    func_0x0001078db3d4(&lStack_180,&ppuStack_168);
    goto code_r0x000109f536fc;
  case 9:
    ppuStack_168 = (undefined **)CONCAT44(uVar2,(int)((ulong)(lStack_110 - lStack_118) >> 3));
    lStack_1a0 = (ulong)lStack_1a0._1_7_ << 8;
    if (plStack_a8 == (long *)0x0) goto code_r0x000109f546f4;
    plVar6 = plStack_a8;
    (**(code **)(*plStack_a8 + 0x30))(plStack_a8,&ppuStack_168,&lStack_1a0,auStack_98);
    ppuStack_168 = (undefined **)CONCAT71(ppuStack_168._1_7_,(char)plVar6);
    func_0x0001078db3d4(&puStack_100,&ppuStack_168);
    ppcVar7 = &pcStack_120;
    FUN_109f567b0(ppcVar7,1);
    FUN_109f56914(&lStack_118,ppcVar7);
    iVar4 = iVar5 + 0x28;
    FUN_109f54c8c();
    *(int *)(param_1 + 0x20) = iVar4;
    if (iVar4 == 0xb) {
      FUN_109f56094(&pcStack_120);
      break;
    }
    if (iVar4 == 4) {
      FUN_109f56508(&pcStack_120,param_1 + 0x78);
      iVar4 = iVar5 + 0x28;
      FUN_109f54c8c();
      *(int *)(param_1 + 0x20) = iVar4;
      if (iVar4 == 0xc) {
        ppuStack_168 = (undefined **)((ulong)ppuStack_168 & 0xffffffffffffff00);
        func_0x0001078db3d4(&lStack_180,&ppuStack_168);
        iVar4 = iVar5 + 0x28;
        FUN_109f54c8c();
        goto code_r0x000109f53d34;
      }
      FUN_109f55b40(&lStack_1a0,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68));
      uStack_1b8 = *(undefined8 *)(param_1 + 0x50);
      lStack_1c0 = *(long *)(param_1 + 0x48);
      lStack_1b0 = *(long *)(param_1 + 0x58);
      func_0x000107c31940(&uStack_1f0,&UNK_10f56844f);
      FUN_109f55c30(&uStack_1d8,param_1,0xc,&uStack_1f0);
      func_0x000109384a64(&ppuStack_168,0x65,&lStack_1c0,&uStack_1d8);
      func_0x000109f55af4(&pcStack_120,&ppuStack_168);
    }
    else {
      FUN_109f55b40(&lStack_1a0,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68));
      uStack_1b8 = *(undefined8 *)(param_1 + 0x50);
      lStack_1c0 = *(long *)(param_1 + 0x48);
      lStack_1b0 = *(long *)(param_1 + 0x58);
      func_0x000107c31940(&uStack_1f0,&UNK_10f568444);
      FUN_109f55c30(&uStack_1d8,param_1,4,&uStack_1f0);
      func_0x000109384a64(&ppuStack_168,0x65,&lStack_1c0,&uStack_1d8);
      func_0x000109f55af4(&pcStack_120,&ppuStack_168);
    }
    goto code_r0x000109f53e08;
  default:
    goto LAB_109f53da4;
  case 0xe:
    FUN_109f55b40(&lStack_1a0,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68));
    uStack_1b8 = *(undefined8 *)(param_1 + 0x50);
    lStack_1c0 = *(long *)(param_1 + 0x48);
    lStack_1b0 = *(long *)(param_1 + 0x58);
    func_0x000107c31940(&uStack_1f0,"value");
    FUN_109f55c30(&uStack_1d8,param_1,0,&uStack_1f0);
    func_0x000109384a64(&ppuStack_168,0x65,&lStack_1c0,&uStack_1d8);
    func_0x000109f55af4(&pcStack_120,&ppuStack_168);
    goto code_r0x000109f53e08;
  }
  if (lStack_178 != 0) {
    do {
      if ((*(ulong *)(lStack_180 + (lStack_178 - 1U >> 6) * 8) >> (lStack_178 - 1U & 0x3f) & 1) == 0
         ) {
        iVar4 = iVar5 + 0x28;
        FUN_109f54c8c();
        *(int *)(param_1 + 0x20) = iVar4;
        if (iVar4 == 0xd) {
          iVar4 = iVar5 + 0x28;
          FUN_109f54c8c();
          *(int *)(param_1 + 0x20) = iVar4;
          if (iVar4 != 4) {
            FUN_109f55b40(&lStack_1a0,*(undefined8 *)(param_1 + 0x60),
                          *(undefined8 *)(param_1 + 0x68));
            uStack_1b8 = *(undefined8 *)(param_1 + 0x50);
            lStack_1c0 = *(long *)(param_1 + 0x48);
            lStack_1b0 = *(long *)(param_1 + 0x58);
            func_0x000107c31940(&uStack_1f0,&UNK_10f568444);
            FUN_109f55c30(&uStack_1d8,param_1,4,&uStack_1f0);
            func_0x000109384a64(&ppuStack_168,0x65,&lStack_1c0,&uStack_1d8);
            func_0x000109f55af4(&pcStack_120,&ppuStack_168);
            goto code_r0x000109f53e08;
          }
          FUN_109f56508(&pcStack_120,param_1 + 0x78);
          iVar4 = iVar5 + 0x28;
          FUN_109f54c8c();
          *(int *)(param_1 + 0x20) = iVar4;
          if (iVar4 == 0xc) {
            iVar4 = iVar5 + 0x28;
            FUN_109f54c8c();
            goto code_r0x000109f53d34;
          }
          FUN_109f55b40(&lStack_1a0,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68))
          ;
          uStack_1b8 = *(undefined8 *)(param_1 + 0x50);
          lStack_1c0 = *(long *)(param_1 + 0x48);
          lStack_1b0 = *(long *)(param_1 + 0x58);
          func_0x000107c31940(&uStack_1f0,&UNK_10f56844f);
          FUN_109f55c30(&uStack_1d8,param_1,0xc,&uStack_1f0);
          func_0x000109384a64(&ppuStack_168,0x65,&lStack_1c0,&uStack_1d8);
          func_0x000109f55af4(&pcStack_120,&ppuStack_168);
          goto code_r0x000109f53e08;
        }
        if (iVar4 != 0xb) {
          FUN_109f55b40(&lStack_1a0,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68))
          ;
          uStack_1b8 = *(undefined8 *)(param_1 + 0x50);
          lStack_1c0 = *(long *)(param_1 + 0x48);
          lStack_1b0 = *(long *)(param_1 + 0x58);
          func_0x000107c31940(&uStack_1f0,&DAT_10f365d6f);
          FUN_109f55c30(&uStack_1d8,param_1,0xb,&uStack_1f0);
          func_0x000109384a64(&ppuStack_168,0x65,&lStack_1c0,&uStack_1d8);
          func_0x000109f55af4(&pcStack_120,&ppuStack_168);
          goto code_r0x000109f53e08;
        }
        FUN_109f56094(&pcStack_120);
      }
      else {
        iVar4 = iVar5 + 0x28;
        FUN_109f54c8c();
        *(int *)(param_1 + 0x20) = iVar4;
        if (iVar4 == 0xd) goto code_r0x000109f53cec;
        if (iVar4 != 10) {
          FUN_109f55b40(&lStack_1a0,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68))
          ;
          uStack_1b8 = *(undefined8 *)(param_1 + 0x50);
          lStack_1c0 = *(long *)(param_1 + 0x48);
          lStack_1b0 = *(long *)(param_1 + 0x58);
          func_0x000107c31940(&uStack_1f0,"array");
          FUN_109f55c30(&uStack_1d8,param_1,10,&uStack_1f0);
          func_0x000109384a64(&ppuStack_168,0x65,&lStack_1c0,&uStack_1d8);
          func_0x000109f55af4(&pcStack_120,&ppuStack_168);
          goto code_r0x000109f53e08;
        }
        FUN_109f56644(&pcStack_120);
      }
      lStack_178 = lStack_178 + -1;
      if (lStack_178 == 0) break;
    } while( true );
  }
  goto LAB_109f53e54;
code_r0x000109f53cec:
  iVar4 = iVar5 + 0x28;
  FUN_109f54c8c();
code_r0x000109f53d34:
  *(int *)(param_1 + 0x20) = iVar4;
  goto code_r0x000109f536fc;
LAB_109f54038:
  FUN_109f55b40(&lStack_1a0,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68));
  uStack_1b8 = *(undefined8 *)(param_1 + 0x50);
  lStack_1c0 = *(long *)(param_1 + 0x48);
  lStack_1b0 = *(long *)(param_1 + 0x58);
  func_0x000107c31940(&uStack_1f0,"value");
  FUN_109f55c30(&uStack_1d8,param_1,0x10,&uStack_1f0);
  func_0x000109384a64(&ppuStack_168,0x65,&lStack_1c0,&uStack_1d8);
  FUN_109f56048(&pcStack_120,&ppuStack_168);
code_r0x000109f5409c:
  ppuStack_168 = &PTR_DAT_110af44f8;
  __ZNSt13runtime_errorD1Ev(&ppuStack_158);
  __ZNSt9exceptionD2Ev(&ppuStack_168);
code_r0x000109f540b8:
  if (cStack_1c1 < '\0') {
    __ZdlPv(CONCAT44(uStack_1d4,uStack_1d8));
  }
  if (cStack_1d9 < '\0') {
    __ZdlPv(CONCAT71(uStack_1ef,uStack_1f0));
  }
  lVar21 = lStack_110;
  if (lStack_190 < 0) {
    __ZdlPv(lStack_1a0);
    lVar21 = lStack_110;
  }
LAB_109f5355c:
  lStack_110 = lVar21;
  if (lStack_180 != 0) {
    __ZdlPv();
  }
  iVar5 = iVar5 + 0x28;
  FUN_109f54c8c();
  *(int *)(param_1 + 0x20) = iVar5;
  if (iVar5 != 0xf) {
    FUN_109f55b40(&lStack_180,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68));
    uStack_198 = *(undefined8 *)(param_1 + 0x50);
    lStack_1a0 = *(long *)(param_1 + 0x48);
    lStack_190 = *(long *)(param_1 + 0x58);
    func_0x000107c31940(&uStack_1d8,"value");
    FUN_109f55c30(&lStack_1c0,param_1,0xf,&uStack_1d8);
    func_0x000109384a64(&ppuStack_168,0x65,&lStack_1a0,&lStack_1c0);
    FUN_109f56048(&pcStack_120,&ppuStack_168);
    ppuStack_168 = &PTR_DAT_110af44f8;
    __ZNSt13runtime_errorD1Ev(&ppuStack_158);
    __ZNSt9exceptionD2Ev(&ppuStack_168);
    if (lStack_1b0 < 0) {
      __ZdlPv(lStack_1c0);
    }
    if (cStack_1c1 < '\0') {
      __ZdlPv(CONCAT44(uStack_1d4,uStack_1d8));
    }
    if (lStack_170 < 0) {
      __ZdlPv(lStack_180);
    }
  }
  if ((char)lStack_f8 == '\x01') {
    *param_2 = '\t';
    uStack_218 = *(undefined8 *)(param_2 + 8);
    param_2[8] = '\0';
    param_2[9] = '\0';
    param_2[10] = '\0';
    param_2[0xb] = '\0';
    param_2[0xc] = '\0';
    param_2[0xd] = '\0';
    param_2[0xe] = '\0';
    param_2[0xf] = '\0';
    FUN_109f49928(&uStack_218);
  }
  if (lStack_118 != 0) {
    __ZdlPv();
  }
  goto LAB_109f53f94;
code_r0x000109f534f8:
  iVar4 = iVar5 + 0x28;
  lStack_110 = lVar14;
  FUN_109f54c8c();
code_r0x000109f53550:
  *(int *)(param_1 + 0x20) = iVar4;
  goto code_r0x000109f52cd8;
LAB_109f53da4:
  FUN_109f55b40(&lStack_1a0,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68));
  uStack_1b8 = *(undefined8 *)(param_1 + 0x50);
  lStack_1c0 = *(long *)(param_1 + 0x48);
  lStack_1b0 = *(long *)(param_1 + 0x58);
  func_0x000107c31940(&uStack_1f0,"value");
  FUN_109f55c30(&uStack_1d8,param_1,0x10,&uStack_1f0);
  func_0x000109384a64(&ppuStack_168,0x65,&lStack_1c0,&uStack_1d8);
  func_0x000109f55af4(&pcStack_120,&ppuStack_168);
code_r0x000109f53e08:
  ppuStack_168 = &PTR_DAT_110af44f8;
  __ZNSt13runtime_errorD1Ev(&ppuStack_158);
  __ZNSt9exceptionD2Ev(&ppuStack_168);
code_r0x000109f53e24:
  if (cStack_1c1 < '\0') {
    __ZdlPv(CONCAT44(uStack_1d4,uStack_1d8));
  }
  if (cStack_1d9 < '\0') {
    __ZdlPv(CONCAT71(uStack_1ef,uStack_1f0));
  }
  if (lStack_190 < 0) {
    __ZdlPv(lStack_1a0);
  }
LAB_109f53e54:
  if (lStack_180 != 0) {
    __ZdlPv();
  }
  iVar5 = iVar5 + 0x28;
  FUN_109f54c8c();
  *(int *)(param_1 + 0x20) = iVar5;
  if (iVar5 != 0xf) {
    FUN_109f55b40(&lStack_180,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68));
    uStack_198 = *(undefined8 *)(param_1 + 0x50);
    lStack_1a0 = *(long *)(param_1 + 0x48);
    lStack_190 = *(long *)(param_1 + 0x58);
    func_0x000107c31940(&uStack_1d8,"value");
    FUN_109f55c30(&lStack_1c0,param_1,0xf,&uStack_1d8);
    func_0x000109384a64(&ppuStack_168,0x65,&lStack_1a0,&lStack_1c0);
    func_0x000109f55af4(&pcStack_120,&ppuStack_168);
    ppuStack_168 = &PTR_DAT_110af44f8;
    __ZNSt13runtime_errorD1Ev(&ppuStack_158);
    __ZNSt9exceptionD2Ev(&ppuStack_168);
    if (lStack_1b0 < 0) {
      __ZdlPv(lStack_1c0);
    }
    if (cStack_1c1 < '\0') {
      __ZdlPv(CONCAT44(uStack_1d4,uStack_1d8));
    }
    if (lStack_170 < 0) {
      __ZdlPv(lStack_180);
    }
  }
  if (cStack_c8 == '\x01') {
    cStack_200 = *param_2;
    *param_2 = '\t';
    uStack_1f8 = *(undefined8 *)(param_2 + 8);
    param_2[8] = '\0';
    param_2[9] = '\0';
    param_2[10] = '\0';
    param_2[0xb] = '\0';
    param_2[0xc] = '\0';
    param_2[0xd] = '\0';
    param_2[0xe] = '\0';
    param_2[0xf] = '\0';
    puVar10 = &uStack_1f8;
    cVar11 = cStack_200;
LAB_109f53f88:
    FUN_109f49928(puVar10,cVar11);
  }
  else if (*param_2 == '\t') {
    *param_2 = '\0';
    uStack_210 = 9;
    uStack_208 = *(undefined8 *)(param_2 + 8);
    param_2[8] = '\0';
    param_2[9] = '\0';
    param_2[10] = '\0';
    param_2[0xb] = '\0';
    param_2[0xc] = '\0';
    param_2[0xd] = '\0';
    param_2[0xe] = '\0';
    param_2[0xf] = '\0';
    puVar10 = &uStack_208;
    cVar11 = '\t';
    goto LAB_109f53f88;
  }
  FUN_109f56a98(&pcStack_120);
LAB_109f53f94:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
code_r0x000109f54708:
  func_0x000104c501e4();
LAB_109f54744:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109f54748);
  (*pcVar3)();
}



/* Entry: 109f54c3c; end: 109f54c8b;  */

long * FUN_109f54c3c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  FUN_109f55a50(param_1 + 5);
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 109f54c8c; end: 109f55797;  */

void FUN_109f54c8c(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_2 + 8) == 0) {
    puVar13 = param_2;
    FUN_109f55798();
    if ((int)puVar13 == 0xef) {
      puVar13 = param_2;
      FUN_109f55798();
      if (((int)puVar13 != 0xbb) || (puVar13 = param_2, FUN_109f55798(), (int)puVar13 != 0xbf)) {
        puVar11 = &UNK_10f56787a;
        goto LAB_109f54e64;
      }
    }
    else {
      FUN_109f55840(param_2);
    }
  }
  do {
    FUN_109f55798(param_2);
    uVar9 = param_2[5];
    uVar10 = (ulong)uVar9;
  } while (uVar9 < 0x21 && (1L << (uVar10 & 0x3f) & 0x100002600U) != 0);
  cVar1 = *(char *)(param_2 + 4);
  uVar4 = uStack_60;
  while ((uStack_60 = uVar4, cVar1 == '\x01' && (uVar9 = (uint)uVar10, uVar9 == 0x2f))) {
    puVar13 = param_2;
    FUN_109f55798();
    if ((int)puVar13 == 0x2f) {
      do {
        puVar13 = param_2;
        FUN_109f55798();
        uVar9 = (int)puVar13 + 1;
      } while (0xe < uVar9 || (1 << (ulong)(uVar9 & 0x1f) & 0x4803U) == 0);
    }
    else {
      if ((int)puVar13 != 0x2a) {
        puVar11 = &UNK_10f5678dd;
        goto LAB_109f54e64;
      }
      while( true ) {
        while( true ) {
          puVar13 = param_2;
          FUN_109f55798();
          if ((int)puVar13 == 0x2a) break;
          if ((int)puVar13 + 1U < 2) {
            puVar11 = &UNK_10f5678b7;
            goto LAB_109f54e64;
          }
        }
        puVar13 = param_2;
        FUN_109f55798();
        if ((int)puVar13 == 0x2f) break;
        FUN_109f55840(param_2);
      }
    }
    do {
      FUN_109f55798(param_2);
      uVar9 = param_2[5];
      uVar10 = (ulong)uVar9;
    } while (uVar9 < 0x21 && (1L << (uVar10 & 0x3f) & 0x100002600U) != 0);
    cVar1 = *(char *)(param_2 + 4);
    uVar4 = uStack_60;
  }
  if ((int)uVar9 < 0x3a) {
    if ((int)uVar9 < 0x2d) {
      if (uVar9 + 1 < 2) {
        uVar4 = 0xf;
        goto LAB_109f54e6c;
      }
      if (uVar9 == 0x22) {
        FUN_109f55890(param_2);
code_r0x000109f550ec:
        do {
          puVar13 = param_2;
          FUN_109f55798();
          uVar4 = 4;
          puVar11 = &UNK_10f567c2c;
          puVar6 = param_2;
          switch((int)puVar13) {
          case 0:
            puVar11 = &UNK_10f567a2d;
            goto LAB_109f54e64;
          case 1:
            puVar11 = &UNK_10f567a76;
            goto LAB_109f54e64;
          case 2:
            puVar11 = &UNK_10f567abf;
            goto LAB_109f54e64;
          case 3:
            puVar11 = &UNK_10f567b08;
            goto LAB_109f54e64;
          case 4:
            puVar11 = &UNK_10f567b51;
            goto LAB_109f54e64;
          case 5:
            puVar11 = &UNK_10f567b9a;
            goto LAB_109f54e64;
          case 6:
            puVar11 = &UNK_10f567be3;
          case 7:
            goto LAB_109f54e64;
          case 8:
            puVar11 = &UNK_10f567c75;
            goto LAB_109f54e64;
          case 9:
            puVar11 = &UNK_10f567cc3;
            goto LAB_109f54e64;
          case 10:
            puVar11 = &UNK_10f567d11;
            goto LAB_109f54e64;
          case 0xb:
            puVar11 = &UNK_10f567d5f;
            goto LAB_109f54e64;
          case 0xc:
            puVar11 = &UNK_10f567da7;
            goto LAB_109f54e64;
          case 0xd:
            puVar11 = &UNK_10f567df5;
            goto LAB_109f54e64;
          case 0xe:
            puVar11 = &UNK_10f567e43;
            goto LAB_109f54e64;
          case 0xf:
            puVar11 = &UNK_10f567e8b;
            goto LAB_109f54e64;
          case 0x10:
            puVar11 = &UNK_10f567ed3;
            goto LAB_109f54e64;
          case 0x11:
            puVar11 = &UNK_10f567f1c;
            goto LAB_109f54e64;
          case 0x12:
            puVar11 = &UNK_10f567f65;
            goto LAB_109f54e64;
          case 0x13:
            puVar11 = &UNK_10f567fae;
            goto LAB_109f54e64;
          case 0x14:
            puVar11 = &UNK_10f567ff7;
            goto LAB_109f54e64;
          case 0x15:
            puVar11 = &UNK_10f568040;
            goto LAB_109f54e64;
          case 0x16:
            puVar11 = &UNK_10f568089;
            goto LAB_109f54e64;
          case 0x17:
            puVar11 = &UNK_10f5680d2;
            goto LAB_109f54e64;
          case 0x18:
            puVar11 = &UNK_10f56811b;
            goto LAB_109f54e64;
          case 0x19:
            puVar11 = &UNK_10f568164;
            goto LAB_109f54e64;
          case 0x1a:
            puVar11 = &UNK_10f5681ac;
            goto LAB_109f54e64;
          case 0x1b:
            puVar11 = &UNK_10f5681f5;
            goto LAB_109f54e64;
          case 0x1c:
            puVar11 = &UNK_10f56823e;
            goto LAB_109f54e64;
          case 0x1d:
            puVar11 = &UNK_10f568286;
            goto LAB_109f54e64;
          case 0x1e:
            puVar11 = &UNK_10f5682ce;
            goto LAB_109f54e64;
          case 0x1f:
            puVar11 = &UNK_10f568316;
            goto LAB_109f54e64;
          case 0x20:
          case 0x21:
          case 0x23:
          case 0x24:
          case 0x25:
          case 0x26:
          case 0x27:
          case 0x28:
          case 0x29:
          case 0x2a:
          case 0x2b:
          case 0x2c:
          case 0x2d:
          case 0x2e:
          case 0x2f:
          case 0x30:
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
          case 0x3a:
          case 0x3b:
          case 0x3c:
          case 0x3d:
          case 0x3e:
          case 0x3f:
          case 0x40:
          case 0x41:
          case 0x42:
          case 0x43:
          case 0x44:
          case 0x45:
          case 0x46:
          case 0x47:
          case 0x48:
          case 0x49:
          case 0x4a:
          case 0x4b:
          case 0x4c:
          case 0x4d:
          case 0x4e:
          case 0x4f:
          case 0x50:
          case 0x51:
          case 0x52:
          case 0x53:
          case 0x54:
          case 0x55:
          case 0x56:
          case 0x57:
          case 0x58:
          case 0x59:
          case 0x5a:
          case 0x5b:
          case 0x5d:
          case 0x5e:
          case 0x5f:
          case 0x60:
          case 0x61:
          case 0x62:
          case 99:
          case 100:
          case 0x65:
          case 0x66:
          case 0x67:
          case 0x68:
          case 0x69:
          case 0x6a:
          case 0x6b:
          case 0x6c:
          case 0x6d:
          case 0x6e:
          case 0x6f:
          case 0x70:
          case 0x71:
          case 0x72:
          case 0x73:
          case 0x74:
          case 0x75:
          case 0x76:
          case 0x77:
          case 0x78:
          case 0x79:
          case 0x7a:
          case 0x7b:
          case 0x7c:
          case 0x7d:
          case 0x7e:
          case 0x7f:
            uVar9 = param_2[5];
            goto code_r0x000109f5511c;
          case 0x22:
            goto LAB_109f54e6c;
          case 0x5c:
            puVar13 = param_2;
            FUN_109f55798();
            puVar11 = &UNK_10f5679f9;
            iVar2 = (int)puVar13;
            if (iVar2 < 0x66) {
              if (iVar2 < 0x5c) {
                if (iVar2 == 0x22) {
                  uVar9 = 0x22;
                }
                else {
                  if (iVar2 != 0x2f) goto LAB_109f54e64;
                  uVar9 = 0x2f;
                }
              }
              else if (iVar2 == 0x5c) {
                uVar9 = 0x5c;
              }
              else {
                if (iVar2 != 0x62) goto LAB_109f54e64;
                uVar9 = 8;
              }
            }
            else if (iVar2 < 0x72) {
              if (iVar2 == 0x66) {
                uVar9 = 0xc;
              }
              else {
                if (iVar2 != 0x6e) goto LAB_109f54e64;
                uVar9 = 10;
              }
            }
            else if (iVar2 == 0x72) {
              uVar9 = 0xd;
            }
            else if (iVar2 == 0x74) {
              uVar9 = 9;
            }
            else {
              if (iVar2 != 0x75) goto LAB_109f54e64;
              puVar13 = param_2;
              FUN_109f558e4();
              uVar9 = (uint)puVar13;
              if (uVar9 == 0xffffffff) {
code_r0x000109f55764:
                puVar11 = &UNK_10f567933;
                goto LAB_109f54e64;
              }
              if ((uVar9 & 0xfffffc00) == 0xd800) {
                puVar13 = param_2;
                FUN_109f55798();
                if (((int)puVar13 == 0x5c) &&
                   (puVar13 = param_2, FUN_109f55798(), (int)puVar13 == 0x75)) {
                  puVar13 = param_2;
                  FUN_109f558e4();
                  uVar3 = (uint)puVar13;
                  if (uVar3 == 0xffffffff) goto code_r0x000109f55764;
                  if (uVar3 >> 10 == 0x37) {
                    puVar13 = (undefined4 *)(ulong)(uVar3 + uVar9 * 0x400 + 0xfca02400);
                    goto code_r0x000109f55268;
                  }
                }
                puVar11 = &UNK_10f567969;
                goto LAB_109f54e64;
              }
              if ((uVar9 & 0xfffffc00) == 0xdc00) goto code_r0x000109f55780;
              if (0x7f < (int)uVar9) {
                if (uVar9 < 0x800) {
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                            (param_2 + 0x14,uVar9 >> 6 | 0xffffffc0);
                }
                else {
                  if (uVar9 >> 0x10 == 0) {
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                              (param_2 + 0x14,uVar9 >> 0xc | 0xffffffe0);
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                              (param_2 + 0x14,uVar9 >> 6 & 0x3f | 0xffffff80);
                    uVar9 = uVar9 & 0x3f | 0xffffff80;
                    goto code_r0x000109f5511c;
                  }
code_r0x000109f55268:
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                            (param_2 + 0x14,(uint)((ulong)puVar13 >> 0x12) & 0x3fff | 0xfffffff0);
                  uVar9 = (uint)puVar13;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                            (param_2 + 0x14,uVar9 >> 0xc & 0x3f | 0xffffff80);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                            (param_2 + 0x14,uVar9 >> 6 & 0x3f | 0xffffff80);
                }
                uVar9 = uVar9 & 0x3f | 0xffffff80;
              }
            }
code_r0x000109f5511c:
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (param_2 + 0x14,(int)(char)uVar9);
            goto code_r0x000109f550ec;
          default:
            puVar11 = &UNK_10f56835e;
            goto LAB_109f54e64;
          case 0xc2:
          case 0xc3:
          case 0xc4:
          case 0xc5:
          case 0xc6:
          case 199:
          case 200:
          case 0xc9:
          case 0xca:
          case 0xcb:
          case 0xcc:
          case 0xcd:
          case 0xce:
          case 0xcf:
          case 0xd0:
          case 0xd1:
          case 0xd2:
          case 0xd3:
          case 0xd4:
          case 0xd5:
          case 0xd6:
          case 0xd7:
          case 0xd8:
          case 0xd9:
          case 0xda:
          case 0xdb:
          case 0xdc:
          case 0xdd:
          case 0xde:
          case 0xdf:
            uStack_60 = 0xbf00000080;
            FUN_109f559bc(param_2,&uStack_60,2);
            break;
          case 0xe0:
            uStack_58 = 0xbf00000080;
            uStack_60 = 0xbf000000a0;
            FUN_109f559bc(param_2,&uStack_60,4);
            break;
          case 0xe1:
          case 0xe2:
          case 0xe3:
          case 0xe4:
          case 0xe5:
          case 0xe6:
          case 0xe7:
          case 0xe8:
          case 0xe9:
          case 0xea:
          case 0xeb:
          case 0xec:
          case 0xee:
          case 0xef:
            uStack_58 = 0xbf00000080;
            uStack_60 = 0xbf00000080;
            FUN_109f559bc(param_2,&uStack_60,4);
            break;
          case 0xed:
            uStack_58 = 0xbf00000080;
            uStack_60 = 0x9f00000080;
            FUN_109f559bc(param_2,&uStack_60,4);
            break;
          case 0xf0:
            uStack_50 = 0xbf00000080;
            uStack_58 = 0xbf00000080;
            uStack_60 = 0xbf00000090;
            FUN_109f559bc(param_2,&uStack_60,6);
            break;
          case 0xf1:
          case 0xf2:
          case 0xf3:
            uStack_50 = 0xbf00000080;
            uStack_58 = 0xbf00000080;
            uStack_60 = 0xbf00000080;
            FUN_109f559bc(param_2,&uStack_60,6);
            break;
          case 0xf4:
            uStack_50 = 0xbf00000080;
            uStack_58 = 0xbf00000080;
            uStack_60 = 0x8f00000080;
            FUN_109f559bc(param_2,&uStack_60,6);
            break;
          case -1:
            goto code_r0x000109f55668;
          }
          if (((ulong)puVar6 & 1) == 0) goto code_r0x000109f54e68;
        } while( true );
      }
      if (uVar9 == 0x2c) {
        uVar4 = 0xd;
        goto LAB_109f54e6c;
      }
    }
    else if ((uVar9 - 0x30 < 10) || (uVar9 == 0x2d)) {
      FUN_109f55890(param_2);
      iVar2 = param_2[5];
      if (iVar2 - 0x31U < 9) {
        iVar14 = 5;
LAB_109f54e30:
        while( true ) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (param_2 + 0x14,(int)(char)iVar2);
          puVar13 = param_2;
          FUN_109f55798();
          iVar2 = (int)puVar13;
          if (9 < iVar2 - 0x30U) break;
          iVar2 = param_2[5];
        }
        if (iVar2 != 0x2e) {
          if ((iVar2 != 0x45) && (iVar2 != 0x65)) {
LAB_109f5550c:
            puVar13 = param_2;
            FUN_109f55840();
            uStack_60 = 0;
            ___error();
            *puVar13 = 0;
            piVar7 = param_2 + 0x14;
            if (iVar14 == 5) {
              if (*(char *)((long)param_2 + 0x67) < '\0') {
                piVar7 = *(int **)piVar7;
              }
              _strtoull(piVar7,&uStack_60,10);
              piVar8 = piVar7;
              ___error();
              if (*piVar8 == 0) {
                *(int **)(param_2 + 0x1e) = piVar7;
                uVar4 = 5;
                goto LAB_109f54e6c;
              }
            }
            else {
              if (*(char *)((long)param_2 + 0x67) < '\0') {
                piVar7 = *(int **)piVar7;
              }
              _strtoll(piVar7,&uStack_60,10);
              piVar8 = piVar7;
              ___error();
              if (*piVar8 == 0) {
                *(int **)(param_2 + 0x1c) = piVar7;
                uVar4 = 6;
                goto LAB_109f54e6c;
              }
            }
            goto LAB_109f54f2c;
          }
          goto LAB_109f54eb4;
        }
LAB_109f554b4:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (param_2 + 0x14,(long)*(char *)(param_2 + 0x22));
        puVar13 = param_2;
        FUN_109f55798();
        if (9 < (int)puVar13 - 0x30U) {
          puVar11 = &UNK_10f5683ad;
          goto LAB_109f54e64;
        }
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (param_2 + 0x14,(long)*(char *)(param_2 + 5));
          puVar13 = param_2;
          FUN_109f55798();
          iVar2 = (int)puVar13;
        } while (iVar2 - 0x30U < 10);
        if ((iVar2 == 0x65) || (iVar2 == 0x45)) goto LAB_109f54eb4;
      }
      else {
        if (iVar2 == 0x30) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (param_2 + 0x14,0x30);
          iVar14 = 5;
        }
        else {
          if (iVar2 == 0x2d) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (param_2 + 0x14,0x2d);
          }
          puVar13 = param_2;
          FUN_109f55798();
          if ((int)puVar13 - 0x31U < 9) {
            iVar2 = param_2[5];
            iVar14 = 6;
            goto LAB_109f54e30;
          }
          if ((int)puVar13 != 0x30) {
            puVar11 = &UNK_10f568384;
            goto LAB_109f54e64;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (param_2 + 0x14,(long)*(char *)(param_2 + 5));
          iVar14 = 6;
        }
        puVar13 = param_2;
        FUN_109f55798();
        iVar2 = (int)puVar13;
        if ((iVar2 != 0x65) && (iVar2 != 0x45)) {
          if (iVar2 != 0x2e) goto LAB_109f5550c;
          goto LAB_109f554b4;
        }
LAB_109f54eb4:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (param_2 + 0x14,(long)*(char *)(param_2 + 5));
        puVar13 = param_2;
        FUN_109f55798();
        iVar2 = (int)puVar13;
        if (9 < iVar2 - 0x30U) {
          if ((iVar2 != 0x2d) && (iVar2 != 0x2b)) {
            puVar11 = &UNK_10f5683d6;
            goto LAB_109f54e64;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (param_2 + 0x14,(long)*(char *)(param_2 + 5));
          puVar13 = param_2;
          FUN_109f55798();
          if (9 < (int)puVar13 - 0x30U) {
            puVar11 = &UNK_10f568411;
            goto LAB_109f54e64;
          }
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (param_2 + 0x14,(long)*(char *)(param_2 + 5));
        puVar13 = param_2;
        FUN_109f55798();
        iVar2 = (int)puVar13;
        while (iVar2 - 0x30U < 10) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (param_2 + 0x14,(long)*(char *)(param_2 + 5));
          puVar13 = param_2;
          FUN_109f55798();
          iVar2 = (int)puVar13;
        }
      }
      puVar13 = param_2;
      FUN_109f55840();
      uStack_60 = 0;
      ___error();
      *puVar13 = 0;
LAB_109f54f2c:
      puVar5 = (undefined8 *)(param_2 + 0x14);
      if (*(char *)((long)param_2 + 0x67) < '\0') {
        puVar5 = (undefined8 *)*puVar5;
      }
      _strtod(puVar5,&uStack_60);
      *(undefined8 *)(param_2 + 0x20) = param_1;
      uVar4 = 7;
      goto LAB_109f54e6c;
    }
  }
  else if ((int)uVar9 < 0x6e) {
    if ((int)uVar9 < 0x5d) {
      if (uVar9 == 0x3a) {
        uVar4 = 0xc;
        goto LAB_109f54e6c;
      }
      if (uVar9 == 0x5b) {
        uVar4 = 8;
        goto LAB_109f54e6c;
      }
    }
    else {
      if (uVar9 == 0x5d) {
        uVar4 = 10;
        goto LAB_109f54e6c;
      }
      if (uVar9 == 0x66) {
        lVar12 = 0;
        while (puVar13 = param_2, FUN_109f55798(), uVar4 = uStack_60,
              (uint)(byte)(&UNK_10e47d47d)[lVar12] == ((uint)puVar13 & 0xff)) {
          lVar12 = lVar12 + 1;
          if (lVar12 == 4) {
            uVar4 = 2;
            goto LAB_109f54e6c;
          }
        }
      }
    }
  }
  else if ((int)uVar9 < 0x7b) {
    uStack_60._4_4_ = (undefined4)((ulong)uVar4 >> 0x20);
    if (uVar9 == 0x6e) {
      uStack_60 = CONCAT44(uStack_60._4_4_,0x6c6c756e);
      lVar12 = 1;
      while (puVar13 = param_2, FUN_109f55798(), uVar4 = uStack_60,
            (uint)*(byte *)((long)&uStack_60 + lVar12) == ((uint)puVar13 & 0xff)) {
        lVar12 = lVar12 + 1;
        if (lVar12 == 4) {
          uVar4 = 3;
          goto LAB_109f54e6c;
        }
      }
    }
    else if (uVar9 == 0x74) {
      uStack_60 = CONCAT44(uStack_60._4_4_,0x65757274);
      lVar12 = 1;
      while (puVar13 = param_2, FUN_109f55798(), uVar4 = uStack_60,
            (uint)*(byte *)((long)&uStack_60 + lVar12) == ((uint)puVar13 & 0xff)) {
        lVar12 = lVar12 + 1;
        if (lVar12 == 4) {
          uVar4 = 1;
          goto LAB_109f54e6c;
        }
      }
    }
  }
  else {
    if (uVar9 == 0x7b) {
      uVar4 = 9;
      goto LAB_109f54e6c;
    }
    if (uVar9 == 0x7d) {
      uVar4 = 0xb;
      goto LAB_109f54e6c;
    }
  }
  uStack_60 = uVar4;
  puVar11 = &UNK_10f5678a7;
LAB_109f54e64:
  while( true ) {
    *(undefined **)(param_2 + 0x1a) = puVar11;
code_r0x000109f54e68:
    uVar4 = 0xe;
LAB_109f54e6c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) break;
    ___stack_chk_fail(uVar4);
code_r0x000109f55780:
    puVar11 = &UNK_10f5679b5;
  }
  return;
code_r0x000109f55668:
  puVar11 = &UNK_10f56790d;
  goto LAB_109f54e64;
}



/* Entry: 109f55798; end: 109f5583f;  */

int FUN_109f55798(long *param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  undefined1 uStack_21;
  
  param_1[5] = param_1[5] + 1;
  param_1[4] = param_1[4] + 1;
  if ((char)param_1[3] == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
    uVar3 = *(uint *)((long)param_1 + 0x14);
  }
  else {
    pbVar1 = (byte *)*param_1;
    if (pbVar1 == (byte *)param_1[1]) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*pbVar1;
      *param_1 = (long)(pbVar1 + 1);
    }
    *(uint *)((long)param_1 + 0x14) = uVar3;
  }
  if (uVar3 == 0xffffffff) {
    iVar2 = -1;
  }
  else {
    uStack_21 = (undefined1)uVar3;
    func_0x0001092d2eec(param_1 + 7,&uStack_21);
    iVar2 = *(int *)((long)param_1 + 0x14);
    if (iVar2 == 10) {
      param_1[5] = 0;
      param_1[6] = param_1[6] + 1;
    }
  }
  return iVar2;
}



/* Entry: 109f55840; end: 109f5588f;  */

void FUN_109f55840(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x28);
  lVar2 = *plVar1;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x30);
    lVar2 = *plVar1;
    if (lVar2 == 0) goto LAB_109f55874;
  }
  *plVar1 = lVar2 + -1;
LAB_109f55874:
  if (*(int *)(param_1 + 0x14) != -1) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
  }
  return;
}



/* Entry: 109f55890; end: 109f558e3;  */

void FUN_109f55890(long param_1)

{
  undefined1 uStack_11;
  
  if (*(char *)(param_1 + 0x67) < '\0') {
    **(undefined1 **)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x67) = 0;
  }
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x38);
  uStack_11 = (undefined1)*(undefined4 *)(param_1 + 0x14);
  func_0x0001092d2eec((undefined8 *)(param_1 + 0x38),&uStack_11);
  return;
}



/* Entry: 109f558e4; end: 109f559bb;  */

int FUN_109f558e4(long param_1,int *param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint auStack_60 [6];
  long lStack_48;
  
  iVar6 = 0;
  lVar7 = 0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_60[2] = 4;
  auStack_60[3] = 0;
  auStack_60[0] = 0xc;
  auStack_60[1] = 8;
  do {
    uVar3 = *(uint *)((long)auStack_60 + lVar7);
    lVar4 = param_1;
    FUN_109f55798();
    iVar2 = *(int *)(param_1 + 0x14);
    uVar5 = iVar2 - 0x30;
    if (9 < uVar5) {
      if (iVar2 - 0x41U < 6) {
        uVar5 = iVar2 - 0x37;
      }
      else {
        if (5 < iVar2 - 0x61U) {
          iVar6 = -1;
          break;
        }
        uVar5 = iVar2 - 0x57;
      }
    }
    iVar6 = (uVar5 << (ulong)(uVar3 & 0x1f)) + iVar6;
    lVar7 = lVar7 + 4;
  } while (lVar7 != 0x10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return iVar6;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
            (lVar4 + 0x50,(long)*(char *)(lVar4 + 0x14));
  if (param_3 != 0) {
    piVar1 = param_2 + param_3;
    do {
      FUN_109f55798(lVar4);
      iVar6 = *(int *)(lVar4 + 0x14);
      if ((iVar6 < *param_2) || (param_2[1] < iVar6)) {
        *(undefined **)(lVar4 + 0x68) = &UNK_10f56835e;
        return 0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (lVar4 + 0x50,(int)(char)iVar6);
      param_2 = param_2 + 2;
    } while (param_2 != piVar1);
  }
  return 1;
}



/* Entry: 109f559bc; end: 109f55a4f;  */

undefined8 FUN_109f559bc(long param_1,int *param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
            (param_1 + 0x50,(long)*(char *)(param_1 + 0x14));
  if (param_3 != 0) {
    piVar1 = param_2 + param_3;
    do {
      FUN_109f55798(param_1);
      iVar2 = *(int *)(param_1 + 0x14);
      if ((iVar2 < *param_2) || (param_2[1] < iVar2)) {
        *(undefined **)(param_1 + 0x68) = &UNK_10f56835e;
        return 0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_1 + 0x50,(int)(char)iVar2);
      param_2 = param_2 + 2;
    } while (param_2 != piVar1);
  }
  return 1;
}



/* Entry: 109f55a50; end: 109f55b3f;  */

long FUN_109f55a50(long param_1)

{
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109f55b40; end: 109f55c2f;  */

/* WARNING: Removing unreachable block (ram,0x000109f55ea8) */
/* WARNING: Removing unreachable block (ram,0x000109f55ce4) */
/* WARNING: Removing unreachable block (ram,0x000109f55df4) */
/* WARNING: Removing unreachable block (ram,0x000109f55f3c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_109f55b40(undefined8 *param_1,byte *param_2,byte *param_3,long param_4)

{
  byte bVar1;
  undefined8 *******pppppppuVar2;
  undefined1 **ppuVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *unaff_x19;
  byte *unaff_x21;
  undefined *unaff_x22;
  undefined1 *puStack_110;
  ulong uStack_108;
  byte bStack_f9;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 *******pppppppuStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined *puStack_80;
  byte *pbStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar5 = param_1;
  pbVar4 = param_3;
  if (param_2 != param_3) {
    unaff_x22 = &UNK_10f568509;
    unaff_x21 = param_2;
    do {
      bVar1 = *unaff_x21;
      if (bVar1 < 0x20) {
        uStack_40 = 0;
        uStack_48 = 0;
        uStack_50 = (ulong)bVar1;
        _snprintf(&uStack_48,9,&UNK_10f568509);
        pbVar4 = (byte *)&uStack_48;
        _strlen();
        param_2 = (byte *)&uStack_48;
        puVar5 = param_1;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
      }
      else {
        param_2 = (byte *)(ulong)(uint)(int)(char)bVar1;
        puVar5 = param_1;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc();
      }
      unaff_x21 = unaff_x21 + 1;
      unaff_x19 = param_1;
    } while (unaff_x21 != param_3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (*(char *)((long)unaff_x19 + 0x17) < '\0') {
    __ZdlPv(*unaff_x19);
  }
  puVar6 = puVar5;
  __Unwind_Resume(puVar5);
  pcStack_58 = FUN_109f55c30;
  puStack_80 = unaff_x22;
  pbStack_78 = unaff_x21;
  puStack_70 = puVar5;
  puStack_68 = unaff_x19;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x000107c31940();
  uVar7 = *(ulong *)(param_4 + 8);
  if (-1 < (char)*(byte *)(param_4 + 0x17)) {
    uVar7 = (ulong)*(byte *)(param_4 + 0x17);
  }
  if (uVar7 != 0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&uStack_c0,&UNK_10f568536,param_4);
    puVar5 = &uStack_c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar5," ",1);
    uStack_98 = puVar5[1];
    pppppppuStack_a0 = (undefined8 *******)*puVar5;
    uStack_90 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    uVar7 = uStack_98;
    pppppppuVar2 = pppppppuStack_a0;
    if (-1 < (long)uStack_90) {
      uVar7 = uStack_90 >> 0x38;
      pppppppuVar2 = &pppppppuStack_a0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar6,pppppppuVar2,uVar7);
    if (lStack_b0 < 0) {
      __ZdlPv(uStack_c0);
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar6,&DAT_10f568545,2);
  uVar7 = (ulong)*(uint *)(param_2 + 0x20);
  if (*(uint *)(param_2 + 0x20) == 0xe) {
    func_0x000107c31940(auStack_f8,*(undefined8 *)(param_2 + 0x90));
    puVar5 = auStack_f8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar5,&UNK_10f568548,0xe);
    uStack_d8 = puVar5[1];
    uStack_e0 = *puVar5;
    lStack_d0 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_109f55b40(&puStack_110,*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x68));
    ppuVar3 = (undefined1 **)puStack_110;
    if (-1 < (char)bStack_f9) {
      uStack_108 = (ulong)bStack_f9;
      ppuVar3 = &puStack_110;
    }
    puVar5 = &uStack_e0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar5,ppuVar3,uStack_108);
    uStack_b8 = puVar5[1];
    uStack_c0 = *puVar5;
    lStack_b0 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    puVar5 = &uStack_c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar5,&DAT_10f638984,1);
    uStack_98 = puVar5[1];
    pppppppuStack_a0 = (undefined8 *******)*puVar5;
    uStack_90 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    uVar7 = uStack_98;
    pppppppuVar2 = pppppppuStack_a0;
    if (-1 < (long)uStack_90) {
      uVar7 = uStack_90 >> 0x38;
      pppppppuVar2 = &pppppppuStack_a0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar6,pppppppuVar2,uVar7);
    if (lStack_b0 < 0) {
      __ZdlPv(uStack_c0);
    }
    if ((char)bStack_f9 < '\0') {
      __ZdlPv(puStack_110);
    }
    if (lStack_d0 < 0) {
      __ZdlPv(uStack_e0);
    }
    if (-1 < cStack_e1) goto joined_r0x000109f55eb8;
  }
  else {
    FUN_109f56a74();
    func_0x000107c31940(&uStack_c0,uVar7);
    puVar5 = &uStack_c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar5,0,&UNK_10f568557,0xb);
    uStack_98 = puVar5[1];
    pppppppuStack_a0 = (undefined8 *******)*puVar5;
    uStack_90 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    uVar7 = uStack_98;
    pppppppuVar2 = pppppppuStack_a0;
    if (-1 < (long)uStack_90) {
      uVar7 = uStack_90 >> 0x38;
      pppppppuVar2 = &pppppppuStack_a0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar6,pppppppuVar2,uVar7);
    auStack_f8[0] = uStack_c0;
    if (-1 < lStack_b0) goto joined_r0x000109f55eb8;
  }
  __ZdlPv(auStack_f8[0]);
joined_r0x000109f55eb8:
  if ((int)pbVar4 != 0) {
    FUN_109f56a74(pbVar4);
    func_0x000107c31940(&uStack_c0,pbVar4);
    puVar5 = &uStack_c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar5,0,&UNK_10f568563,0xb);
    uStack_98 = puVar5[1];
    pppppppuStack_a0 = (undefined8 *******)*puVar5;
    uStack_90 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    uVar7 = uStack_98;
    pppppppuVar2 = pppppppuStack_a0;
    if (-1 < (long)uStack_90) {
      uVar7 = uStack_90 >> 0x38;
      pppppppuVar2 = &pppppppuStack_a0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar6,pppppppuVar2,uVar7);
    if (lStack_b0 < 0) {
      __ZdlPv(uStack_c0);
    }
  }
  return;
}



/* Entry: 109f55c30; end: 109f56047;  */

/* WARNING: Removing unreachable block (ram,0x000109f55ea8) */
/* WARNING: Removing unreachable block (ram,0x000109f55ce4) */
/* WARNING: Removing unreachable block (ram,0x000109f55df4) */
/* WARNING: Removing unreachable block (ram,0x000109f55f3c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_109f55c30(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *******pppppppuVar1;
  undefined1 **ppuVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined8 auStack_a8 [2];
  char cStack_91;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 *******pppppppuStack_50;
  ulong uStack_48;
  ulong uStack_40;
  
  func_0x000107c31940(param_1,&UNK_10f568528);
  uVar4 = *(ulong *)(param_4 + 8);
  if (-1 < (char)*(byte *)(param_4 + 0x17)) {
    uVar4 = (ulong)*(byte *)(param_4 + 0x17);
  }
  if (uVar4 != 0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&uStack_70,&UNK_10f568536,param_4);
    puVar3 = &uStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar3," ",1);
    uStack_48 = puVar3[1];
    pppppppuStack_50 = (undefined8 *******)*puVar3;
    uStack_40 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    uVar4 = uStack_48;
    pppppppuVar1 = pppppppuStack_50;
    if (-1 < (long)uStack_40) {
      uVar4 = uStack_40 >> 0x38;
      pppppppuVar1 = &pppppppuStack_50;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppppuVar1,uVar4);
    if (lStack_60 < 0) {
      __ZdlPv(uStack_70);
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f568545,2);
  uVar4 = (ulong)*(uint *)(param_2 + 0x20);
  if (*(uint *)(param_2 + 0x20) == 0xe) {
    func_0x000107c31940(auStack_a8,*(undefined8 *)(param_2 + 0x90));
    puVar3 = auStack_a8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,&UNK_10f568548,0xe);
    uStack_88 = puVar3[1];
    uStack_90 = *puVar3;
    lStack_80 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    FUN_109f55b40(&puStack_c0,*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x68));
    ppuVar2 = (undefined1 **)puStack_c0;
    if (-1 < (char)bStack_a9) {
      uStack_b8 = (ulong)bStack_a9;
      ppuVar2 = &puStack_c0;
    }
    puVar3 = &uStack_90;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,ppuVar2,uStack_b8);
    uStack_68 = puVar3[1];
    uStack_70 = *puVar3;
    lStack_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    puVar3 = &uStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,&DAT_10f638984,1);
    uStack_48 = puVar3[1];
    pppppppuStack_50 = (undefined8 *******)*puVar3;
    uStack_40 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    uVar4 = uStack_48;
    pppppppuVar1 = pppppppuStack_50;
    if (-1 < (long)uStack_40) {
      uVar4 = uStack_40 >> 0x38;
      pppppppuVar1 = &pppppppuStack_50;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppppuVar1,uVar4);
    if (lStack_60 < 0) {
      __ZdlPv(uStack_70);
    }
    if ((char)bStack_a9 < '\0') {
      __ZdlPv(puStack_c0);
    }
    if (lStack_80 < 0) {
      __ZdlPv(uStack_90);
    }
    if (-1 < cStack_91) goto joined_r0x000109f55eb8;
  }
  else {
    FUN_109f56a74();
    func_0x000107c31940(&uStack_70,uVar4);
    puVar3 = &uStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar3,0,&UNK_10f568557,0xb);
    uStack_48 = puVar3[1];
    pppppppuStack_50 = (undefined8 *******)*puVar3;
    uStack_40 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    uVar4 = uStack_48;
    pppppppuVar1 = pppppppuStack_50;
    if (-1 < (long)uStack_40) {
      uVar4 = uStack_40 >> 0x38;
      pppppppuVar1 = &pppppppuStack_50;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppppuVar1,uVar4);
    auStack_a8[0] = uStack_70;
    if (-1 < lStack_60) goto joined_r0x000109f55eb8;
  }
  __ZdlPv(auStack_a8[0]);
joined_r0x000109f55eb8:
  if ((int)param_3 != 0) {
    FUN_109f56a74(param_3);
    func_0x000107c31940(&uStack_70,param_3);
    puVar3 = &uStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar3,0,&UNK_10f568563,0xb);
    uStack_48 = puVar3[1];
    pppppppuStack_50 = (undefined8 *******)*puVar3;
    uStack_40 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    uVar4 = uStack_48;
    pppppppuVar1 = pppppppuStack_50;
    if (-1 < (long)uStack_40) {
      uVar4 = uStack_40 >> 0x38;
      pppppppuVar1 = &pppppppuStack_50;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppppuVar1,uVar4);
    if (lStack_60 < 0) {
      __ZdlPv(uStack_70);
    }
  }
  return;
}



/* Entry: 109f56048; end: 109f56093;  */

/* WARNING: Removing unreachable block (ram,0x000109f56238) */

void FUN_109f56048(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  byte *pbVar8;
  uint uVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  undefined8 uVar12;
  long lVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  byte *unaff_x20;
  byte *pbVar16;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  int aiStack_68 [2];
  undefined8 auStack_60 [2];
  
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (*(char *)(param_1 + 0x29) != '\x01') {
    return;
  }
  lVar6 = 0x28;
  ___cxa_allocate_exception();
  func_0x000109387804();
  ___cxa_throw();
  if (*(long *)(*(long *)(lVar6 + 0x10) + -8) == 0) {
LAB_109f56134:
    lVar1 = *(long *)(lVar6 + 0x10);
    lVar13 = lVar1 + -8;
    *(long *)(lVar6 + 0x10) = lVar13;
    *(long *)(lVar6 + 0x28) = *(long *)(lVar6 + 0x28) + -1;
    if (*(long *)(lVar6 + 8) == lVar13) {
      return;
    }
    unaff_x20 = *(byte **)(lVar1 + -0x10);
    if (unaff_x20 == (byte *)0x0) {
      return;
    }
    bVar3 = *unaff_x20;
    if (1 < bVar3 - 1) {
      return;
    }
    puVar15 = *(undefined8 **)(unaff_x20 + 8);
    pbVar8 = (byte *)*puVar15;
    pbVar16 = pbVar8;
    pbVar11 = (byte *)0x0;
    if (bVar3 != 1) {
      pbVar16 = (byte *)0x0;
      pbVar11 = pbVar8;
    }
    lVar6 = -0x8000000000000000;
    while( true ) {
      if (bVar3 == 2) {
        pbVar14 = pbVar11;
        if (pbVar11 == (byte *)puVar15[1]) {
          return;
        }
      }
      else if (bVar3 == 1) {
        if (pbVar16 == (byte *)puVar15[1]) {
          return;
        }
        pbVar14 = pbVar16 + 0x18;
      }
      else {
        if (lVar6 == 1) {
          return;
        }
        pbVar14 = unaff_x20;
        if (lVar6 != 0) {
          uVar12 = 0x20;
          ___cxa_allocate_exception(0x20);
          func_0x000107c31940(aiStack_68,&UNK_10f567425);
          func_0x00010937951c(uVar12,0xd6,aiStack_68);
          ___cxa_throw(uVar12,&PTR_DAT_110af4550,&DAT_10937964c);
          goto LAB_109f5648c;
        }
      }
      uVar9 = (uint)bVar3;
      if (*pbVar14 == 9) break;
      if (uVar9 == 1) {
        pbVar16 = pbVar16 + 0x28;
      }
      else if (uVar9 == 2) {
        pbVar11 = pbVar11 + 0x10;
      }
      else {
        lVar6 = lVar6 + 1;
      }
    }
    if (bVar3 == 2) {
      pbVar8 = (byte *)puVar15[1];
      pbVar16 = pbVar11 + 0x10;
      if (pbVar11 + 0x10 != pbVar8) {
        do {
          pbVar11 = pbVar16;
          bVar3 = *pbVar11;
          uVar12 = *(undefined8 *)(pbVar11 + 8);
          *pbVar11 = 0;
          pbVar11[8] = 0;
          pbVar11[9] = 0;
          pbVar11[10] = 0;
          pbVar11[0xb] = 0;
          pbVar11[0xc] = 0;
          pbVar11[0xd] = 0;
          pbVar11[0xe] = 0;
          pbVar11[0xf] = 0;
          bVar4 = pbVar11[-0x10];
          pbVar11[-0x10] = bVar3;
          aiStack_68[0] = CONCAT31(aiStack_68[0]._1_3_,bVar4);
          auStack_60[0] = *(undefined8 *)(pbVar11 + -8);
          *(undefined8 *)(pbVar11 + -8) = uVar12;
          FUN_109f49928(auStack_60);
          pbVar16 = pbVar11 + 0x10;
        } while (pbVar11 + 0x10 != pbVar8);
        pbVar8 = (byte *)puVar15[1];
      }
      if (pbVar8 != pbVar11) {
        pbVar8 = pbVar8 + -8;
        do {
          pbVar16 = pbVar8 + -8;
          FUN_109f49928(pbVar8,*pbVar16);
          pbVar8 = pbVar8 + -0x10;
        } while (pbVar16 != pbVar11);
      }
      puVar15[1] = pbVar11;
      return;
    }
    if (bVar3 == 1) {
      pbVar11 = (byte *)puVar15[1];
      while (pbVar8 = pbVar16 + 0x28, pbVar8 != pbVar11) {
        FUN_109f49928(pbVar16 + 0x20,pbVar16[0x18]);
        if ((char)pbVar16[0x3f] < '\0') {
          func_0x000107c3192c(pbVar16,*(undefined8 *)pbVar8,*(undefined8 *)(pbVar16 + 0x30));
        }
        else {
          *(undefined8 *)(pbVar16 + 8) = *(undefined8 *)(pbVar16 + 0x30);
          *(undefined8 *)pbVar16 = *(undefined8 *)pbVar8;
          *(undefined8 *)(pbVar16 + 0x10) = *(undefined8 *)(pbVar16 + 0x38);
        }
        pbVar16[0x18] = pbVar16[0x40];
        *(undefined8 *)(pbVar16 + 0x20) = *(undefined8 *)(pbVar16 + 0x48);
        pbVar16[0x40] = 0;
        pbVar16[0x48] = 0;
        pbVar16[0x49] = 0;
        pbVar16[0x4a] = 0;
        pbVar16[0x4b] = 0;
        pbVar16[0x4c] = 0;
        pbVar16[0x4d] = 0;
        pbVar16[0x4e] = 0;
        pbVar16[0x4f] = 0;
        pbVar16 = pbVar8;
        pbVar11 = (byte *)puVar15[1];
      }
      FUN_109f4a12c(puVar15,pbVar11 + -0x28);
      return;
    }
    if (uVar9 - 3 < 6) {
      if (lVar6 != 0) {
        uVar12 = 0x20;
        ___cxa_allocate_exception(0x20);
        func_0x000107c31940(aiStack_68,&UNK_10f5684b6);
        func_0x00010937951c(uVar12,0xcd,aiStack_68);
        ___cxa_throw(uVar12,&PTR_DAT_110af4550,&DAT_10937964c);
        goto LAB_109f5648c;
      }
      if (uVar9 == 8) {
        if (pbVar8 != (byte *)0x0) {
          puVar15[1] = pbVar8;
LAB_109f56358:
          __ZdlPv();
          puVar15 = *(undefined8 **)(unaff_x20 + 8);
        }
      }
      else {
        if (uVar9 != 3) goto LAB_109f5636c;
        if (*(char *)((long)puVar15 + 0x17) < '\0') goto LAB_109f56358;
      }
      __ZdlPv(puVar15);
      unaff_x20[8] = 0;
      unaff_x20[9] = 0;
      unaff_x20[10] = 0;
      unaff_x20[0xb] = 0;
      unaff_x20[0xc] = 0;
      unaff_x20[0xd] = 0;
      unaff_x20[0xe] = 0;
      unaff_x20[0xf] = 0;
LAB_109f5636c:
      *unaff_x20 = 0;
      return;
    }
  }
  else {
    aiStack_68[0] = (int)((ulong)(*(long *)(lVar6 + 0x10) - *(long *)(lVar6 + 8)) >> 3) + -1;
    plVar7 = *(long **)(lVar6 + 0x78);
    auStack_80[0] = 1;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7,aiStack_68,auStack_80);
      if (((ulong)plVar7 & 1) == 0) {
        FUN_109f4ff30(auStack_90,lVar6 + 0x88);
        puVar10 = *(undefined1 **)(*(long *)(lVar6 + 0x10) + -8);
        uVar2 = *puVar10;
        *puVar10 = auStack_90[0];
        uVar12 = *(undefined8 *)(puVar10 + 8);
        *(undefined8 *)(puVar10 + 8) = uStack_88;
        auStack_90[0] = uVar2;
        uStack_88 = uVar12;
        FUN_109f49928(&uStack_88);
      }
      goto LAB_109f56134;
    }
    func_0x000104c501e4();
  }
  uVar12 = 0x20;
  ___cxa_allocate_exception(0x20);
  FUN_109f51088(unaff_x20);
  func_0x000107c31940(auStack_80,unaff_x20);
  func_0x00010928a5e0(aiStack_68,&UNK_10f5684cc,auStack_80);
  func_0x00010937bbbc(uVar12,0x133,aiStack_68);
  ___cxa_throw(uVar12,&PTR_DAT_110af4510,&DAT_10937bd14);
LAB_109f5648c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109f56490);
  (*pcVar5)();
}



/* Entry: 109f56094; end: 109f56507;  */

/* WARNING: Removing unreachable block (ram,0x000109f56238) */

void FUN_109f56094(long param_1)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  long *plVar5;
  byte *pbVar6;
  uint uVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  byte *unaff_x20;
  byte *pbVar15;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 auStack_60 [24];
  int aiStack_48 [2];
  undefined8 auStack_40 [2];
  
  if (*(long *)(*(long *)(param_1 + 0x10) + -8) == 0) {
LAB_109f56134:
    lVar11 = *(long *)(param_1 + 0x10);
    lVar12 = lVar11 + -8;
    *(long *)(param_1 + 0x10) = lVar12;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
    if (*(long *)(param_1 + 8) == lVar12) {
      return;
    }
    unaff_x20 = *(byte **)(lVar11 + -0x10);
    if (unaff_x20 == (byte *)0x0) {
      return;
    }
    bVar2 = *unaff_x20;
    if (1 < bVar2 - 1) {
      return;
    }
    puVar14 = *(undefined8 **)(unaff_x20 + 8);
    pbVar6 = (byte *)*puVar14;
    pbVar15 = pbVar6;
    pbVar9 = (byte *)0x0;
    if (bVar2 != 1) {
      pbVar15 = (byte *)0x0;
      pbVar9 = pbVar6;
    }
    lVar11 = -0x8000000000000000;
    while( true ) {
      if (bVar2 == 2) {
        pbVar13 = pbVar9;
        if (pbVar9 == (byte *)puVar14[1]) {
          return;
        }
      }
      else if (bVar2 == 1) {
        if (pbVar15 == (byte *)puVar14[1]) {
          return;
        }
        pbVar13 = pbVar15 + 0x18;
      }
      else {
        if (lVar11 == 1) {
          return;
        }
        pbVar13 = unaff_x20;
        if (lVar11 != 0) {
          uVar10 = 0x20;
          ___cxa_allocate_exception(0x20);
          func_0x000107c31940(aiStack_48,&UNK_10f567425);
          func_0x00010937951c(uVar10,0xd6,aiStack_48);
          ___cxa_throw(uVar10,&PTR_DAT_110af4550,&DAT_10937964c);
          goto LAB_109f5648c;
        }
      }
      uVar7 = (uint)bVar2;
      if (*pbVar13 == 9) break;
      if (uVar7 == 1) {
        pbVar15 = pbVar15 + 0x28;
      }
      else if (uVar7 == 2) {
        pbVar9 = pbVar9 + 0x10;
      }
      else {
        lVar11 = lVar11 + 1;
      }
    }
    if (bVar2 == 2) {
      pbVar6 = (byte *)puVar14[1];
      pbVar15 = pbVar9 + 0x10;
      if (pbVar9 + 0x10 != pbVar6) {
        do {
          pbVar9 = pbVar15;
          bVar2 = *pbVar9;
          uVar10 = *(undefined8 *)(pbVar9 + 8);
          *pbVar9 = 0;
          pbVar9[8] = 0;
          pbVar9[9] = 0;
          pbVar9[10] = 0;
          pbVar9[0xb] = 0;
          pbVar9[0xc] = 0;
          pbVar9[0xd] = 0;
          pbVar9[0xe] = 0;
          pbVar9[0xf] = 0;
          bVar3 = pbVar9[-0x10];
          pbVar9[-0x10] = bVar2;
          aiStack_48[0] = CONCAT31(aiStack_48[0]._1_3_,bVar3);
          auStack_40[0] = *(undefined8 *)(pbVar9 + -8);
          *(undefined8 *)(pbVar9 + -8) = uVar10;
          FUN_109f49928(auStack_40);
          pbVar15 = pbVar9 + 0x10;
        } while (pbVar9 + 0x10 != pbVar6);
        pbVar6 = (byte *)puVar14[1];
      }
      if (pbVar6 != pbVar9) {
        pbVar6 = pbVar6 + -8;
        do {
          pbVar15 = pbVar6 + -8;
          FUN_109f49928(pbVar6,*pbVar15);
          pbVar6 = pbVar6 + -0x10;
        } while (pbVar15 != pbVar9);
      }
      puVar14[1] = pbVar9;
      return;
    }
    if (bVar2 == 1) {
      pbVar9 = (byte *)puVar14[1];
      while (pbVar6 = pbVar15 + 0x28, pbVar6 != pbVar9) {
        FUN_109f49928(pbVar15 + 0x20,pbVar15[0x18]);
        if ((char)pbVar15[0x3f] < '\0') {
          func_0x000107c3192c(pbVar15,*(undefined8 *)pbVar6,*(undefined8 *)(pbVar15 + 0x30));
        }
        else {
          *(undefined8 *)(pbVar15 + 8) = *(undefined8 *)(pbVar15 + 0x30);
          *(undefined8 *)pbVar15 = *(undefined8 *)pbVar6;
          *(undefined8 *)(pbVar15 + 0x10) = *(undefined8 *)(pbVar15 + 0x38);
        }
        pbVar15[0x18] = pbVar15[0x40];
        *(undefined8 *)(pbVar15 + 0x20) = *(undefined8 *)(pbVar15 + 0x48);
        pbVar15[0x40] = 0;
        pbVar15[0x48] = 0;
        pbVar15[0x49] = 0;
        pbVar15[0x4a] = 0;
        pbVar15[0x4b] = 0;
        pbVar15[0x4c] = 0;
        pbVar15[0x4d] = 0;
        pbVar15[0x4e] = 0;
        pbVar15[0x4f] = 0;
        pbVar15 = pbVar6;
        pbVar9 = (byte *)puVar14[1];
      }
      FUN_109f4a12c(puVar14,pbVar9 + -0x28);
      return;
    }
    if (uVar7 - 3 < 6) {
      if (lVar11 != 0) {
        uVar10 = 0x20;
        ___cxa_allocate_exception(0x20);
        func_0x000107c31940(aiStack_48,&UNK_10f5684b6);
        func_0x00010937951c(uVar10,0xcd,aiStack_48);
        ___cxa_throw(uVar10,&PTR_DAT_110af4550,&DAT_10937964c);
        goto LAB_109f5648c;
      }
      if (uVar7 == 8) {
        if (pbVar6 != (byte *)0x0) {
          puVar14[1] = pbVar6;
LAB_109f56358:
          __ZdlPv();
          puVar14 = *(undefined8 **)(unaff_x20 + 8);
        }
      }
      else {
        if (uVar7 != 3) goto LAB_109f5636c;
        if (*(char *)((long)puVar14 + 0x17) < '\0') goto LAB_109f56358;
      }
      __ZdlPv(puVar14);
      unaff_x20[8] = 0;
      unaff_x20[9] = 0;
      unaff_x20[10] = 0;
      unaff_x20[0xb] = 0;
      unaff_x20[0xc] = 0;
      unaff_x20[0xd] = 0;
      unaff_x20[0xe] = 0;
      unaff_x20[0xf] = 0;
LAB_109f5636c:
      *unaff_x20 = 0;
      return;
    }
  }
  else {
    aiStack_48[0] = (int)((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) >> 3) + -1;
    plVar5 = *(long **)(param_1 + 0x78);
    auStack_60[0] = 1;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x30))(plVar5,aiStack_48,auStack_60);
      if (((ulong)plVar5 & 1) == 0) {
        FUN_109f4ff30(auStack_70,param_1 + 0x88);
        puVar8 = *(undefined1 **)(*(long *)(param_1 + 0x10) + -8);
        uVar1 = *puVar8;
        *puVar8 = auStack_70[0];
        uVar10 = *(undefined8 *)(puVar8 + 8);
        *(undefined8 *)(puVar8 + 8) = uStack_68;
        auStack_70[0] = uVar1;
        uStack_68 = uVar10;
        FUN_109f49928(&uStack_68);
      }
      goto LAB_109f56134;
    }
    func_0x000104c501e4();
  }
  uVar10 = 0x20;
  ___cxa_allocate_exception(0x20);
  FUN_109f51088(unaff_x20);
  func_0x000107c31940(auStack_60,unaff_x20);
  func_0x00010928a5e0(aiStack_48,&UNK_10f5684cc,auStack_60);
  func_0x00010937bbbc(uVar10,0x133,aiStack_48);
  ___cxa_throw(uVar10,&PTR_DAT_110af4510,&DAT_10937bd14);
LAB_109f5648c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109f56490);
  (*pcVar4)();
}



/* Entry: 109f56508; end: 109f56643;  */

void FUN_109f56508(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  char cStack_49;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 uStack_35;
  undefined4 uStack_34;
  
  auStack_48[0] = 3;
  uVar5 = param_2;
  FUN_109f4ec64();
  plVar3 = *(long **)(param_1 + 0x78);
  uStack_34 = (undefined4)((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) >> 3);
  uStack_35 = 4;
  uStack_40 = uVar5;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,&uStack_34,&uStack_35,auStack_48);
    cStack_49 = (char)plVar3;
    func_0x0001078db3d4(param_1 + 0x38,&cStack_49);
    if ((cStack_49 == '\x01') && (*(long *)(*(long *)(param_1 + 0x10) + -8) != 0)) {
      FUN_109f4ff30(auStack_60,param_1 + 0x88);
      puVar4 = *(undefined1 **)(*(long *)(*(long *)(param_1 + 0x10) + -8) + 8);
      FUN_109f56a14(puVar4,param_2);
      uVar1 = *puVar4;
      *puVar4 = auStack_60[0];
      uVar5 = *(undefined8 *)(puVar4 + 8);
      *(undefined8 *)(puVar4 + 8) = uStack_58;
      *(undefined1 **)(param_1 + 0x50) = puVar4;
      auStack_60[0] = uVar1;
      uStack_58 = uVar5;
      FUN_109f49928(&uStack_58);
    }
    FUN_109f49928(&uStack_40,auStack_48[0]);
    return;
  }
  func_0x000104c501e4();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109f56614);
  (*pcVar2)();
}



/* Entry: 109f56644; end: 109f567af;  */

long * FUN_109f56644(long *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_38 [8];
  long lStack_30;
  undefined1 uStack_25;
  int iStack_24;
  
  plVar7 = (long *)(param_1[2] + -8);
  if (*plVar7 == 0) {
    param_1[2] = (long)plVar7;
    plVar7 = param_1;
LAB_109f566b8:
    param_1[5] = param_1[5] + -1;
    return plVar7;
  }
  iStack_24 = (int)((ulong)(param_1[2] - param_1[1]) >> 3) + -1;
  plVar7 = (long *)param_1[0xf];
  uStack_25 = 3;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,&iStack_24,&uStack_25);
    if (((ulong)plVar7 & 1) == 0) {
      FUN_109f4ff30(auStack_38,param_1 + 0x11);
      puVar4 = *(undefined1 **)(param_1[2] + -8);
      uVar1 = *puVar4;
      *puVar4 = auStack_38[0];
      lVar8 = *(long *)(puVar4 + 8);
      *(long *)(puVar4 + 8) = lStack_30;
      plVar7 = &lStack_30;
      auStack_38[0] = uVar1;
      lStack_30 = lVar8;
      FUN_109f49928(plVar7);
      lVar8 = param_1[2];
      lVar10 = lVar8 + -8;
      param_1[2] = lVar10;
      param_1[5] = param_1[5] + -1;
      if (param_1[1] == lVar10) {
        return plVar7;
      }
      pcVar5 = *(char **)(lVar8 + -0x10);
      if (*pcVar5 != '\x02') {
        return plVar7;
      }
      lVar8 = *(long *)(pcVar5 + 8);
      lVar10 = *(long *)(lVar8 + 8);
      puVar4 = (undefined1 *)(lVar10 + -0x10);
      plVar7 = (long *)(lVar10 + -8);
      FUN_109f49928(plVar7,*puVar4);
      *(undefined1 **)(lVar8 + 8) = puVar4;
      return plVar7;
    }
    param_1[2] = param_1[2] + -8;
    goto LAB_109f566b8;
  }
  func_0x000104c501e4();
  *(undefined1 *)(plVar7 + 0xb) = 1;
  if ((char)plVar7[0x10] != '\x01') {
    return plVar7;
  }
  plVar7 = (long *)0x20;
  ___cxa_allocate_exception();
  func_0x000109386dc4();
  uVar3 = 0x10af4840;
  ___cxa_throw();
  if ((*(ulong *)(plVar7[4] + (plVar7[5] - 1U >> 6) * 8) >> (plVar7[5] - 1U & 0x3f) & 1) == 0) {
    return (long *)0x0;
  }
  auStack_90[0] = (undefined1)uVar3;
  FUN_109f510b0(&uStack_88,uVar3 & 0xff);
  uVar2 = uStack_88;
  uVar1 = auStack_90[0];
  if (plVar7[1] == plVar7[2]) {
    auStack_90[0] = 0;
    uStack_88 = 0;
    puVar4 = (undefined1 *)*plVar7;
    uStack_a0 = *puVar4;
    *puVar4 = uVar1;
    uStack_98 = *(undefined8 *)(puVar4 + 8);
    *(undefined8 *)(puVar4 + 8) = uVar2;
    FUN_109f49928(&uStack_98);
    plVar7 = (long *)*plVar7;
    goto LAB_109f568dc;
  }
  pcVar5 = *(char **)(plVar7[2] + -8);
  if (pcVar5 != (char *)0x0) {
    if (*pcVar5 == '\x02') {
      FUN_109f49e90(*(undefined8 *)(pcVar5 + 8),auStack_90);
      plVar7 = (long *)(*(long *)(*(long *)(*(long *)(plVar7[2] + -8) + 8) + 8) + -0x10);
      goto LAB_109f568dc;
    }
    uVar6 = plVar7[8] - 1;
    uVar9 = *(ulong *)(plVar7[7] + (uVar6 >> 6) * 8);
    plVar7[8] = uVar6;
    if ((uVar9 >> (uVar6 & 0x3f) & 1) != 0) {
      auStack_90[0] = 0;
      uStack_88 = 0;
      puVar4 = (undefined1 *)plVar7[10];
      *puVar4 = uVar1;
      uStack_a8 = *(undefined8 *)(puVar4 + 8);
      *(undefined8 *)(puVar4 + 8) = uVar2;
      FUN_109f49928(&uStack_a8);
      plVar7 = (long *)plVar7[10];
      goto LAB_109f568dc;
    }
  }
  plVar7 = (long *)0x0;
LAB_109f568dc:
  FUN_109f49928(&uStack_88,auStack_90[0]);
  return plVar7;
}



/* Entry: 109f567b0; end: 109f56913;  */

long FUN_109f567b0(long *param_1,undefined1 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  if ((*(ulong *)(param_1[4] + (param_1[5] - 1U >> 6) * 8) >> (param_1[5] - 1U & 0x3f) & 1) == 0) {
    return 0;
  }
  auStack_30[0] = param_2;
  FUN_109f510b0(&uStack_28,param_2);
  uVar2 = uStack_28;
  uVar1 = auStack_30[0];
  if (param_1[1] == param_1[2]) {
    auStack_30[0] = 0;
    uStack_28 = 0;
    puVar6 = (undefined1 *)*param_1;
    uStack_40 = *puVar6;
    *puVar6 = uVar1;
    uStack_38 = *(undefined8 *)(puVar6 + 8);
    *(undefined8 *)(puVar6 + 8) = uVar2;
    FUN_109f49928(&uStack_38);
    lVar7 = *param_1;
    goto LAB_109f568dc;
  }
  pcVar3 = *(char **)(param_1[2] + -8);
  if (pcVar3 != (char *)0x0) {
    if (*pcVar3 == '\x02') {
      FUN_109f49e90(*(undefined8 *)(pcVar3 + 8),auStack_30);
      lVar7 = *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
      goto LAB_109f568dc;
    }
    uVar4 = param_1[8] - 1;
    uVar5 = *(ulong *)(param_1[7] + (uVar4 >> 6) * 8);
    param_1[8] = uVar4;
    if ((uVar5 >> (uVar4 & 0x3f) & 1) != 0) {
      auStack_30[0] = 0;
      uStack_28 = 0;
      puVar6 = (undefined1 *)param_1[10];
      *puVar6 = uVar1;
      uStack_48 = *(undefined8 *)(puVar6 + 8);
      *(undefined8 *)(puVar6 + 8) = uVar2;
      FUN_109f49928(&uStack_48);
      lVar7 = param_1[10];
      goto LAB_109f568dc;
    }
  }
  lVar7 = 0;
LAB_109f568dc:
  FUN_109f49928(&uStack_28,auStack_30[0]);
  return lVar7;
}



/* Entry: 109f56914; end: 109f569cb;  */

undefined1  [16] FUN_109f56914(long *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uStack_88;
  long lStack_80;
  long *plStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  long lStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  plVar2 = (long *)param_1[1];
  if (plVar2 < (long *)param_1[2]) {
    plVar9 = plVar2 + 1;
    *plVar2 = param_2;
    plVar2 = param_1;
  }
  else {
    lVar8 = (long)plVar2 - *param_1;
    uVar1 = (lVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_109f569cc();
      pcStack_38 = FUN_109f569cc;
      puVar3 = &DAT_10f62a4d8;
      puStack_40 = &stack0xfffffffffffffff0;
      func_0x000104c4f6cc();
      pcStack_48 = FUN_109f569e0;
      ppuStack_70 = &puStack_50;
      lStack_60 = param_2;
      plStack_58 = param_1;
      if ((ulong)puVar3 >> 0x3d == 0) {
        lVar8 = (long)puVar3 << 3;
        puStack_50 = (undefined1 *)&puStack_40;
        __Znwm(lVar8);
        auVar11._8_8_ = puVar3;
        auVar11._0_8_ = lVar8;
        return auVar11;
      }
      puStack_50 = (undefined1 *)&puStack_40;
      func_0x000104c4f740();
      pcStack_68 = FUN_109f56a14;
      uStack_88 = 0;
      lStack_80 = param_2;
      plStack_78 = param_1;
      FUN_109f5119c();
      uVar5 = 0;
      FUN_109f49928(&uStack_88,0);
      auVar12._8_8_ = uVar5;
      auVar12._0_8_ = puVar3 + 0x18;
      return auVar12;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    lVar4 = param_2;
    FUN_109f569e0();
    plVar2 = (long *)(uVar7 + lVar8);
    plVar9 = plVar2 + 1;
    *plVar2 = param_2;
    param_2 = *param_1;
    lVar8 = (long)plVar2 - (param_1[1] - param_2);
    _memcpy(lVar8);
    plVar2 = (long *)*param_1;
    *param_1 = lVar8;
    param_1[1] = (long)plVar9;
    param_1[2] = uVar7 + lVar4 * 8;
    if (plVar2 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar9;
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = plVar2;
  return auVar10;
}



/* Entry: 109f569cc; end: 109f569df;  */

undefined1  [16] FUN_109f569cc(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uStack_58;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)puVar1 >> 0x3d == 0) {
    lVar2 = (long)puVar1 << 3;
    __Znwm(lVar2);
    auVar4._8_8_ = puVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104c4f740();
  uStack_58 = 0;
  FUN_109f5119c();
  uVar3 = 0;
  FUN_109f49928(&uStack_58,0);
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = puVar1 + 0x18;
  return auVar5;
}



/* Entry: 109f569e0; end: 109f56a13;  */

undefined1  [16] FUN_109f569e0(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uStack_48;
  
  if (param_1 >> 0x3d == 0) {
    lVar1 = param_1 << 3;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  uStack_48 = 0;
  FUN_109f5119c();
  uVar2 = 0;
  FUN_109f49928(&uStack_48,0);
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_1 + 0x18;
  return auVar4;
}



/* Entry: 109f56a14; end: 109f56a73;  */

long FUN_109f56a14(long param_1,undefined8 param_2)

{
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  auStack_30[0] = 0;
  uStack_28 = 0;
  FUN_109f5119c(param_1,param_2,auStack_30);
  FUN_109f49928(&uStack_28,auStack_30[0]);
  return param_1 + 0x18;
}



/* Entry: 109f56a74; end: 109f56a97;  */

undefined * FUN_109f56a74(uint param_1)

{
  if (param_1 < 0x11) {
    return (&PTR_DAT_110b87a60)[param_1];
  }
  return &UNK_10f5685fb;
}



/* Entry: 109f56a98; end: 109f56b63;  */

long FUN_109f56a98(long param_1)

{
  long *plVar1;
  long lVar2;
  
  FUN_109f49928(param_1 + 0x90,*(undefined1 *)(param_1 + 0x88));
  plVar1 = *(long **)(param_1 + 0x78);
  if (plVar1 == (long *)(param_1 + 0x60)) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_109f56ae0;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_109f56ae0:
  if (*(long *)(param_1 + 0x38) != 0) {
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109f56b64; end: 109f56c1b;  */

long * FUN_109f56b64(long *param_1,long param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  char *pcVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  plVar3 = (long *)param_1[1];
  if (plVar3 < (long *)param_1[2]) {
    plVar4 = plVar3 + 1;
    *plVar3 = param_2;
    plVar3 = param_1;
  }
  else {
    lVar12 = (long)plVar3 - *param_1;
    uVar1 = (lVar12 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_109f569cc();
      pcStack_38 = FUN_109f56c1c;
      uVar11 = (uint)param_2;
      uVar2 = (undefined1)param_2;
      puStack_40 = &stack0xfffffffffffffff0;
      if (param_1[1] == param_1[2]) {
        uStack_98 = uVar2;
        FUN_109f510b0(&uStack_90,uVar11 & 0xff);
        puVar8 = (undefined1 *)*param_1;
        uVar2 = *puVar8;
        *puVar8 = uStack_98;
        uVar10 = *(undefined8 *)(puVar8 + 8);
        *(undefined8 *)(puVar8 + 8) = uStack_90;
        uStack_98 = uVar2;
        uStack_90 = uVar10;
        FUN_109f49928(&uStack_90);
        param_1 = (long *)*param_1;
      }
      else {
        pcVar7 = *(char **)(param_1[2] + -8);
        if (*pcVar7 == '\x02') {
          plVar3 = *(long **)(pcVar7 + 8);
          puVar8 = (undefined1 *)plVar3[1];
          if (puVar8 < (undefined1 *)plVar3[2]) {
            *puVar8 = uVar2;
            FUN_109f510b0(puVar8 + 8,uVar11 & 0xff);
            plVar4 = (long *)(puVar8 + 0x10);
            plVar3[1] = (long)plVar4;
          }
          else {
            lVar12 = (long)puVar8 - *plVar3;
            uVar1 = (lVar12 >> 4) + 1;
            if (uVar1 >> 0x3c != 0) {
              FUN_109f49fc0();
              plVar3[1] = lVar12;
              plVar4 = param_1;
              __Unwind_Resume();
              pcStack_b8 = FUN_109f56e20;
              plStack_d8 = plVar4 + 0xc;
              plStack_d0 = plVar3;
              plStack_c8 = param_1;
              ppuStack_c0 = &puStack_40;
              func_0x0001092d2d9c(&plStack_d8);
              if (plVar4[9] != 0) {
                plVar4[10] = plVar4[9];
                __ZdlPv();
              }
              plStack_d8 = plVar4 + 6;
              FUN_109f608e0(&plStack_d8);
              plStack_d8 = plVar4 + 3;
              FUN_109f60564(&plStack_d8);
              plStack_d8 = plVar4;
              func_0x000109f60180(&plStack_d8);
              return plVar4;
            }
            uVar6 = plVar3[2] - *plVar3;
            uVar9 = (long)uVar6 >> 3;
            if (uVar9 <= uVar1) {
              uVar9 = uVar1;
            }
            if (0x7fffffffffffffef < uVar6) {
              uVar9 = 0xfffffffffffffff;
            }
            plStack_68 = plVar3;
            if (uVar9 == 0) {
              plVar4 = (long *)0x0;
            }
            else {
              plVar4 = plVar3;
              FUN_109f49fd4();
            }
            puVar8 = (undefined1 *)((long)plVar4 + lVar12);
            plStack_70 = plVar4 + uVar9 * 2;
            *puVar8 = uVar2;
            plStack_88 = plVar4;
            plStack_80 = (long *)puVar8;
            plStack_78 = (long *)puVar8;
            FUN_109f510b0(puVar8 + 8,uVar11 & 0xff);
            plStack_78 = (long *)(puVar8 + 0x10);
            lVar12 = *plVar3;
            lVar5 = plVar3[1];
            func_0x000109f4a008(plVar3,lVar12,lVar5,puVar8 + (lVar12 - lVar5));
            plVar4 = plStack_78;
            plStack_88 = (long *)*plVar3;
            *plVar3 = (long)(puVar8 + (lVar12 - lVar5));
            plVar3[1] = (long)plStack_78;
            lVar12 = plVar3[2];
            plVar3[2] = (long)plStack_70;
            plStack_80 = plStack_88;
            plStack_78 = plStack_88;
            plStack_70 = (long *)lVar12;
            FUN_109f4a0dc(&plStack_88);
          }
          plVar3[1] = (long)plVar4;
          param_1 = (long *)(*(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10);
        }
        else {
          uStack_a8 = uVar2;
          FUN_109f510b0(&uStack_a0,uVar11 & 0xff);
          puVar8 = (undefined1 *)param_1[4];
          uVar2 = *puVar8;
          *puVar8 = uStack_a8;
          uVar10 = *(undefined8 *)(puVar8 + 8);
          *(undefined8 *)(puVar8 + 8) = uStack_a0;
          uStack_a8 = uVar2;
          uStack_a0 = uVar10;
          FUN_109f49928(&uStack_a0);
          param_1 = (long *)param_1[4];
        }
      }
      return param_1;
    }
    uVar6 = param_1[2] - *param_1;
    uVar9 = (long)uVar6 >> 2;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar9 = 0x1fffffffffffffff;
    }
    lVar5 = param_2;
    FUN_109f569e0();
    plVar3 = (long *)(uVar9 + lVar12);
    plVar4 = plVar3 + 1;
    *plVar3 = param_2;
    lVar12 = (long)plVar3 - (param_1[1] - *param_1);
    _memcpy(lVar12);
    plVar3 = (long *)*param_1;
    *param_1 = lVar12;
    param_1[1] = (long)plVar4;
    param_1[2] = uVar9 + lVar5 * 8;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar4;
  return plVar3;
}



/* Entry: 109f56c1c; end: 109f56e1f;  */

long * FUN_109f56c1c(long *param_1,undefined1 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 uVar3;
  long *plVar4;
  char *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if (param_1[1] == param_1[2]) {
    uStack_68 = param_2;
    FUN_109f510b0(&uStack_60,param_2);
    puVar6 = (undefined1 *)*param_1;
    uVar3 = *puVar6;
    *puVar6 = uStack_68;
    uVar8 = *(undefined8 *)(puVar6 + 8);
    *(undefined8 *)(puVar6 + 8) = uStack_60;
    uStack_68 = uVar3;
    uStack_60 = uVar8;
    FUN_109f49928(&uStack_60);
    param_1 = (long *)*param_1;
  }
  else {
    pcVar5 = *(char **)(param_1[2] + -8);
    if (*pcVar5 == '\x02') {
      plVar10 = *(long **)(pcVar5 + 8);
      puVar6 = (undefined1 *)plVar10[1];
      if (puVar6 < (undefined1 *)plVar10[2]) {
        *puVar6 = param_2;
        FUN_109f510b0(puVar6 + 8,param_2);
        plVar4 = (long *)(puVar6 + 0x10);
        plVar10[1] = (long)plVar4;
      }
      else {
        lVar11 = (long)puVar6 - *plVar10;
        uVar1 = (lVar11 >> 4) + 1;
        if (uVar1 >> 0x3c != 0) {
          FUN_109f49fc0();
          plVar10[1] = lVar11;
          plVar4 = param_1;
          __Unwind_Resume();
          pcStack_88 = FUN_109f56e20;
          plStack_a8 = plVar4 + 0xc;
          plStack_a0 = plVar10;
          plStack_98 = param_1;
          puStack_90 = &stack0xfffffffffffffff0;
          func_0x0001092d2d9c(&plStack_a8);
          if (plVar4[9] != 0) {
            plVar4[10] = plVar4[9];
            __ZdlPv();
          }
          plStack_a8 = plVar4 + 6;
          FUN_109f608e0(&plStack_a8);
          plStack_a8 = plVar4 + 3;
          FUN_109f60564(&plStack_a8);
          plStack_a8 = plVar4;
          func_0x000109f60180(&plStack_a8);
          return plVar4;
        }
        uVar7 = plVar10[2] - *plVar10;
        uVar9 = (long)uVar7 >> 3;
        if (uVar9 <= uVar1) {
          uVar9 = uVar1;
        }
        if (0x7fffffffffffffef < uVar7) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_38 = plVar10;
        if (uVar9 == 0) {
          plVar4 = (long *)0x0;
        }
        else {
          plVar4 = plVar10;
          FUN_109f49fd4();
        }
        puVar6 = (undefined1 *)((long)plVar4 + lVar11);
        plStack_40 = plVar4 + uVar9 * 2;
        *puVar6 = param_2;
        plStack_58 = plVar4;
        plStack_50 = (long *)puVar6;
        plStack_48 = (long *)puVar6;
        FUN_109f510b0(puVar6 + 8,param_2);
        plStack_48 = (long *)(puVar6 + 0x10);
        lVar11 = *plVar10;
        lVar2 = plVar10[1];
        func_0x000109f4a008(plVar10,lVar11,lVar2,puVar6 + (lVar11 - lVar2));
        plVar4 = plStack_48;
        plStack_58 = (long *)*plVar10;
        *plVar10 = (long)(puVar6 + (lVar11 - lVar2));
        plVar10[1] = (long)plStack_48;
        lVar11 = plVar10[2];
        plVar10[2] = (long)plStack_40;
        plStack_50 = plStack_58;
        plStack_48 = plStack_58;
        plStack_40 = (long *)lVar11;
        FUN_109f4a0dc(&plStack_58);
      }
      plVar10[1] = (long)plVar4;
      param_1 = (long *)(*(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10);
    }
    else {
      uStack_78 = param_2;
      FUN_109f510b0(&uStack_70,param_2);
      puVar6 = (undefined1 *)param_1[4];
      uVar3 = *puVar6;
      *puVar6 = uStack_78;
      uVar8 = *(undefined8 *)(puVar6 + 8);
      *(undefined8 *)(puVar6 + 8) = uStack_70;
      uStack_78 = uVar3;
      uStack_70 = uVar8;
      FUN_109f49928(&uStack_70);
      param_1 = (long *)param_1[4];
    }
  }
  return param_1;
}



/* Entry: 109f56e20; end: 109f56e93;  */

long FUN_109f56e20(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x60;
  func_0x0001092d2d9c(&lStack_28);
  if (*(long *)(param_1 + 0x48) != 0) {
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x48);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x30;
  FUN_109f608e0(&lStack_28);
  lStack_28 = param_1 + 0x18;
  FUN_109f60564(&lStack_28);
  lStack_28 = param_1;
  func_0x000109f60180(&lStack_28);
  return param_1;
}



/* Entry: 109f56e94; end: 109f59c8f;  */

/* WARNING: Removing unreachable block (ram,0x000109f5912c) */
/* WARNING: Removing unreachable block (ram,0x000109f5862c) */
/* WARNING: Removing unreachable block (ram,0x000109f58398) */
/* WARNING: Removing unreachable block (ram,0x000109f57610) */
/* WARNING: Removing unreachable block (ram,0x000109f578ec) */
/* WARNING: Removing unreachable block (ram,0x000109f58bc8) */
/* WARNING: Removing unreachable block (ram,0x000109f58f58) */
/* WARNING: Removing unreachable block (ram,0x000109f592ac) */
/* WARNING: Removing unreachable block (ram,0x000109f592bc) */

void FUN_109f56e94(char ******param_1,undefined8 *param_2)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  char *****pppppcVar4;
  code *pcVar5;
  int iVar6;
  char ******ppppppcVar7;
  char ******ppppppcVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  char ******ppppppcVar16;
  char *****pppppcVar17;
  undefined4 *puVar18;
  char *pcVar19;
  char ******ppppppcVar20;
  char ******ppppppcVar21;
  long lVar22;
  char ******ppppppcVar23;
  char ****ppppcVar24;
  char ****ppppcVar25;
  char ******ppppppcVar26;
  char *****pppppcVar27;
  long lStack_240;
  char *****pppppcStack_220;
  undefined8 auStack_218 [2];
  char cStack_201;
  char *****pppppcStack_200;
  char *****pppppcStack_1f8;
  char *****pppppcStack_1f0;
  char *****pppppcStack_1e8;
  char *****pppppcStack_1e0;
  char *****pppppcStack_1d8;
  char ****ppppcStack_1d0;
  char ****ppppcStack_1c8;
  char ****ppppcStack_1c0;
  char ****ppppcStack_1b8;
  char ****ppppcStack_1b0;
  char ****ppppcStack_1a8;
  char ****ppppcStack_1a0;
  char ****ppppcStack_198;
  char ****ppppcStack_190;
  char ****ppppcStack_188;
  char ****ppppcStack_180;
  char ****ppppcStack_178;
  char ****ppppcStack_170;
  char *****pppppcStack_160;
  char *****pppppcStack_158;
  char *****pppppcStack_150;
  undefined8 uStack_148;
  char *****pppppcStack_140;
  char *****pppppcStack_130;
  char *****pppppcStack_128;
  char *****pppppcStack_120;
  undefined8 uStack_118;
  char *****pppppcStack_110;
  char ***pppcStack_108;
  char ***pppcStack_100;
  long lStack_f8;
  char *****pppppcStack_f0;
  char *****pppppcStack_e8;
  char *****pppppcStack_e0;
  char *****pppppcStack_d0;
  char *****pppppcStack_c8;
  char *****pppppcStack_c0;
  char *****pppppcStack_b8;
  char *****pppppcStack_b0;
  char ****ppppcStack_a8;
  char *****pppppcStack_a0;
  char *****pppppcStack_98;
  char *****pppppcStack_90;
  
  func_0x000107c31940(&pppppcStack_f0,&UNK_10f61d593);
  ppppppcVar7 = param_1;
  FUN_109f59c90(param_1,&pppppcStack_f0);
  if (*(char *)ppppppcVar7 != '\x02') {
    uVar12 = 0x20;
    ___cxa_allocate_exception(0x20);
    FUN_109f51088(ppppppcVar7);
    func_0x000107c31940(&pppppcStack_d0,ppppppcVar7);
    func_0x00010928a5e0(&pppppcStack_200,&UNK_10f56748c,&pppppcStack_d0);
    func_0x00010937bbbc(uVar12,0x12e,&pppppcStack_200);
    ___cxa_throw(uVar12,&PTR_DAT_110af4510,&DAT_10937bd14);
    goto LAB_109f595b4;
  }
  pppppcStack_a0 = (char *****)0x0;
  pppppcStack_98 = (char *****)0x0;
  pppppcStack_90 = (char *****)0x0;
  ppppppcVar23 = ppppppcVar7;
  FUN_109f50f2c();
  if (ppppppcVar23 != (char ******)0x0) {
    if ((char ******)0x1af286bca1af286 < ppppppcVar23) {
      FUN_109f59f38();
      goto LAB_109f595b4;
    }
    pppppcStack_1e0 = (char *****)&pppppcStack_a0;
    ppppppcVar21 = &pppppcStack_a0;
    FUN_109f59f4c();
    ppppppcVar8 = (char ******)((long)ppppppcVar21 + ((long)pppppcStack_a0 - (long)pppppcStack_98));
    pppppcStack_200 = (char *****)ppppppcVar21;
    pppppcStack_1f8 = (char *****)ppppppcVar21;
    pppppcStack_1f0 = (char *****)ppppppcVar21;
    pppppcStack_1e8 = (char *****)(ppppppcVar21 + (long)ppppppcVar23 * 0x13);
    FUN_109f59f94(&pppppcStack_a0,pppppcStack_a0,pppppcStack_98,ppppppcVar8);
    pppppcStack_1f0 = pppppcStack_a0;
    pppppcStack_1e8 = pppppcStack_90;
    pppppcStack_200 = pppppcStack_a0;
    pppppcStack_1f8 = pppppcStack_a0;
    pppppcStack_a0 = (char *****)ppppppcVar8;
    pppppcStack_98 = (char *****)ppppppcVar21;
    pppppcStack_90 = (char *****)(ppppppcVar21 + (long)ppppppcVar23 * 0x13);
    func_0x000109f5a5fc(&pppppcStack_200);
  }
  ppppppcVar23 = (char ******)pppppcStack_98;
  pppcStack_108 = (char ***)0x0;
  pppcStack_100 = (char ***)0x0;
  lStack_f8 = -0x8000000000000000;
  cVar2 = *(char *)ppppppcVar7;
  if (cVar2 == '\0') {
    lStack_240 = 1;
    lStack_f8 = 1;
LAB_109f57020:
    pppppcStack_128 = (char *****)0x0;
    pppppcStack_120 = (char *****)0x0;
    uStack_118 = 1;
  }
  else if (cVar2 == '\x02') {
    pppcStack_100 = (char ***)*ppppppcVar7[1];
    pppppcStack_128 = (char *****)0x0;
    lStack_240 = -0x8000000000000000;
    uStack_118 = 0x8000000000000000;
    pppppcStack_120 = (char *****)ppppppcVar7[1][1];
  }
  else {
    if (cVar2 != '\x01') {
      lStack_240 = 0;
      lStack_f8 = 0;
      goto LAB_109f57020;
    }
    pppcStack_108 = (char ***)*ppppppcVar7[1];
    uStack_118 = 0x8000000000000000;
    pppppcStack_120 = (char *****)0x0;
    pppppcStack_128 = (char *****)ppppppcVar7[1][1];
    lStack_240 = -0x8000000000000000;
  }
  ppppcVar25 = (char ****)pppcStack_100;
  ppppcVar24 = (char ****)pppcStack_108;
  ppppppcVar8 = &pppppcStack_110;
  pppppcStack_130 = (char *****)ppppppcVar7;
  pppppcStack_110 = (char *****)ppppppcVar7;
  FUN_109f5a780(ppppppcVar8,&pppppcStack_130);
  if (((ulong)ppppppcVar8 & 1) == 0) {
    do {
      FUN_109f5a648(&pppppcStack_110);
      pppppcStack_200 = (char *****)((ulong)pppppcStack_200 & 0xffffffff00000000);
      pppppcStack_1f0 = (char *****)0x0;
      pppppcStack_1f8 = (char *****)0x0;
      pppppcStack_1e0 = (char *****)0x0;
      pppppcStack_1e8 = (char *****)0x0;
      ppppcStack_1d0 = (char ****)0x0;
      pppppcStack_1d8 = (char *****)0x0;
      ppppcStack_1c0 = (char ****)0x0;
      ppppcStack_1c8 = (char ****)0x0;
      ppppcStack_1b0 = (char ****)0x0;
      ppppcStack_1b8 = (char ****)0x0;
      ppppcStack_1a0 = (char ****)0x0;
      ppppcStack_1a8 = (char ****)0x0;
      ppppcStack_190 = (char ****)0x0;
      ppppcStack_198 = (char ****)0x0;
      ppppcStack_180 = (char ****)0x0;
      ppppcStack_188 = (char ****)0x0;
      ppppcStack_170 = (char ****)0x0;
      ppppcStack_178 = (char ****)0x0;
      FUN_109f5a87c();
      pppppcVar27 = pppppcStack_98;
      pppppcVar17 = pppppcStack_a0;
      if (pppppcStack_98 < pppppcStack_90) {
        ppppppcVar21 = ppppppcVar23;
        if (ppppppcVar23 == (char ******)pppppcStack_98) {
          FUN_109f59ffc(pppppcStack_98,&pppppcStack_200);
          pppppcStack_98 = pppppcVar27 + 0x13;
        }
        else {
          ppppppcVar26 = (char ******)pppppcStack_98;
          for (ppppppcVar8 = (char ******)(pppppcStack_98 + -0x13); ppppppcVar8 < pppppcVar27;
              ppppppcVar8 = ppppppcVar8 + 0x13) {
            FUN_109f59ffc(ppppppcVar26,ppppppcVar8);
            ppppppcVar26 = ppppppcVar26 + 0x13;
          }
          pppppcStack_98 = (char *****)ppppppcVar26;
          if ((char ******)pppppcVar27 != ppppppcVar23 + 0x13) {
            lVar22 = 0;
            do {
              *(undefined4 *)((long)pppppcVar27 + lVar22 + -0x98) =
                   *(undefined4 *)((long)pppppcVar27 + lVar22 + -0x130);
              pcVar19 = (char *)((long)pppppcVar27 + lVar22 + -0x128);
              FUN_109f5f278((char *)((long)pppppcVar27 + lVar22 + -0x90));
              *(undefined8 *)((long)pppppcVar27 + lVar22 + -0x88) =
                   *(undefined8 *)((long)pppppcVar27 + lVar22 + -0x120);
              *(undefined8 *)((long)pppppcVar27 + lVar22 + -0x90) = *(undefined8 *)pcVar19;
              *(undefined8 *)((long)pppppcVar27 + lVar22 + -0x80) =
                   *(undefined8 *)((long)pppppcVar27 + lVar22 + -0x118);
              pcVar13 = (char *)((long)pppppcVar27 + lVar22 + -0x120);
              pcVar13[0] = '\0';
              pcVar13[1] = '\0';
              pcVar13[2] = '\0';
              pcVar13[3] = '\0';
              pcVar13[4] = '\0';
              pcVar13[5] = '\0';
              pcVar13[6] = '\0';
              pcVar13[7] = '\0';
              pcVar19[0] = '\0';
              pcVar19[1] = '\0';
              pcVar19[2] = '\0';
              pcVar19[3] = '\0';
              pcVar19[4] = '\0';
              pcVar19[5] = '\0';
              pcVar19[6] = '\0';
              pcVar19[7] = '\0';
              pcVar13 = (char *)((long)pppppcVar27 + lVar22 + -0x118);
              pcVar13[0] = '\0';
              pcVar13[1] = '\0';
              pcVar13[2] = '\0';
              pcVar13[3] = '\0';
              pcVar13[4] = '\0';
              pcVar13[5] = '\0';
              pcVar13[6] = '\0';
              pcVar13[7] = '\0';
              pcVar19 = (char *)((long)pppppcVar27 + lVar22 + -0x110);
              FUN_109f5f408((char *)((long)pppppcVar27 + lVar22 + -0x78));
              *(undefined8 *)((long)pppppcVar27 + lVar22 + -0x70) =
                   *(undefined8 *)((long)pppppcVar27 + lVar22 + -0x108);
              *(undefined8 *)((long)pppppcVar27 + lVar22 + -0x78) = *(undefined8 *)pcVar19;
              *(undefined8 *)((long)pppppcVar27 + lVar22 + -0x68) =
                   *(undefined8 *)((long)pppppcVar27 + lVar22 + -0x100);
              pcVar13 = (char *)((long)pppppcVar27 + lVar22 + -0x108);
              pcVar13[0] = '\0';
              pcVar13[1] = '\0';
              pcVar13[2] = '\0';
              pcVar13[3] = '\0';
              pcVar13[4] = '\0';
              pcVar13[5] = '\0';
              pcVar13[6] = '\0';
              pcVar13[7] = '\0';
              pcVar19[0] = '\0';
              pcVar19[1] = '\0';
              pcVar19[2] = '\0';
              pcVar19[3] = '\0';
              pcVar19[4] = '\0';
              pcVar19[5] = '\0';
              pcVar19[6] = '\0';
              pcVar19[7] = '\0';
              pcVar13 = (char *)((long)pppppcVar27 + lVar22 + -0x100);
              pcVar13[0] = '\0';
              pcVar13[1] = '\0';
              pcVar13[2] = '\0';
              pcVar13[3] = '\0';
              pcVar13[4] = '\0';
              pcVar13[5] = '\0';
              pcVar13[6] = '\0';
              pcVar13[7] = '\0';
              func_0x000109f5f66c((char *)((long)pppppcVar27 + lVar22 + -0x60));
              *(undefined8 *)((long)pppppcVar27 + lVar22 + -0x58) =
                   *(undefined8 *)((long)pppppcVar27 + lVar22 + -0xf0);
              *(undefined8 *)((long)pppppcVar27 + lVar22 + -0x60) =
                   *(undefined8 *)((long)pppppcVar27 + lVar22 + -0xf8);
              *(undefined8 *)((long)pppppcVar27 + lVar22 + -0x50) =
                   *(undefined8 *)((long)pppppcVar27 + lVar22 + -0xe8);
              pcVar13 = (char *)((long)pppppcVar27 + lVar22 + -0xf8);
              pcVar13[0] = '\0';
              pcVar13[1] = '\0';
              pcVar13[2] = '\0';
              pcVar13[3] = '\0';
              pcVar13[4] = '\0';
              pcVar13[5] = '\0';
              pcVar13[6] = '\0';
              pcVar13[7] = '\0';
              pcVar13 = (char *)((long)pppppcVar27 + lVar22 + -0xf0);
              pcVar13[0] = '\0';
              pcVar13[1] = '\0';
              pcVar13[2] = '\0';
              pcVar13[3] = '\0';
              pcVar13[4] = '\0';
              pcVar13[5] = '\0';
              pcVar13[6] = '\0';
              pcVar13[7] = '\0';
              pcVar13 = (char *)((long)pppppcVar27 + lVar22 + -0xe8);
              pcVar13[0] = '\0';
              pcVar13[1] = '\0';
              pcVar13[2] = '\0';
              pcVar13[3] = '\0';
              pcVar13[4] = '\0';
              pcVar13[5] = '\0';
              pcVar13[6] = '\0';
              pcVar13[7] = '\0';
              FUN_109f5fc5c((char *)((long)pppppcVar27 + lVar22 + -0x48));
              *(undefined8 *)((long)pppppcVar27 + lVar22 + -0x40) =
                   *(undefined8 *)((long)pppppcVar27 + lVar22 + -0xd8);
              *(undefined8 *)((long)pppppcVar27 + lVar22 + -0x48) =
                   *(undefined8 *)((long)pppppcVar27 + lVar22 + -0xe0);
              *(undefined8 *)((long)pppppcVar27 + lVar22 + -0x38) =
                   *(undefined8 *)((long)pppppcVar27 + lVar22 + -0xd0);
              pcVar13 = (char *)((long)pppppcVar27 + lVar22 + -0xe0);
              pcVar13[0] = '\0';
              pcVar13[1] = '\0';
              pcVar13[2] = '\0';
              pcVar13[3] = '\0';
              pcVar13[4] = '\0';
              pcVar13[5] = '\0';
              pcVar13[6] = '\0';
              pcVar13[7] = '\0';
              pcVar13 = (char *)((long)pppppcVar27 + lVar22 + -0xd8);
              pcVar13[0] = '\0';
              pcVar13[1] = '\0';
              pcVar13[2] = '\0';
              pcVar13[3] = '\0';
              pcVar13[4] = '\0';
              pcVar13[5] = '\0';
              pcVar13[6] = '\0';
              pcVar13[7] = '\0';
              pcVar13 = (char *)((long)pppppcVar27 + lVar22 + -0xd0);
              pcVar13[0] = '\0';
              pcVar13[1] = '\0';
              pcVar13[2] = '\0';
              pcVar13[3] = '\0';
              pcVar13[4] = '\0';
              pcVar13[5] = '\0';
              pcVar13[6] = '\0';
              pcVar13[7] = '\0';
              func_0x000109f5feac((char *)((long)pppppcVar27 + lVar22 + -0x30));
              *(undefined8 *)((long)pppppcVar27 + lVar22 + -0x28) =
                   *(undefined8 *)((long)pppppcVar27 + lVar22 + -0xc0);
              *(undefined8 *)((long)pppppcVar27 + lVar22 + -0x30) =
                   *(undefined8 *)((long)pppppcVar27 + lVar22 + -200);
              *(undefined8 *)((long)pppppcVar27 + lVar22 + -0x20) =
                   *(undefined8 *)((long)pppppcVar27 + lVar22 + -0xb8);
              pcVar13 = (char *)((long)pppppcVar27 + lVar22 + -200);
              pcVar13[0] = '\0';
              pcVar13[1] = '\0';
              pcVar13[2] = '\0';
              pcVar13[3] = '\0';
              pcVar13[4] = '\0';
              pcVar13[5] = '\0';
              pcVar13[6] = '\0';
              pcVar13[7] = '\0';
              pcVar13 = (char *)((long)pppppcVar27 + lVar22 + -0xc0);
              pcVar13[0] = '\0';
              pcVar13[1] = '\0';
              pcVar13[2] = '\0';
              pcVar13[3] = '\0';
              pcVar13[4] = '\0';
              pcVar13[5] = '\0';
              pcVar13[6] = '\0';
              pcVar13[7] = '\0';
              pcVar13 = (char *)((long)pppppcVar27 + lVar22 + -0xb8);
              pcVar13[0] = '\0';
              pcVar13[1] = '\0';
              pcVar13[2] = '\0';
              pcVar13[3] = '\0';
              pcVar13[4] = '\0';
              pcVar13[5] = '\0';
              pcVar13[6] = '\0';
              pcVar13[7] = '\0';
              func_0x000109f600e4((char *)((long)pppppcVar27 + lVar22 + -0x18));
              *(undefined8 *)((long)pppppcVar27 + lVar22 + -0x10) =
                   *(undefined8 *)((long)pppppcVar27 + lVar22 + -0xa8);
              *(undefined8 *)((long)pppppcVar27 + lVar22 + -0x18) =
                   *(undefined8 *)((long)pppppcVar27 + lVar22 + -0xb0);
              *(undefined8 *)((long)pppppcVar27 + lVar22 + -8) =
                   *(undefined8 *)((long)pppppcVar27 + lVar22 + -0xa0);
              pcVar13 = (char *)((long)pppppcVar27 + lVar22 + -0xb0);
              pcVar13[0] = '\0';
              pcVar13[1] = '\0';
              pcVar13[2] = '\0';
              pcVar13[3] = '\0';
              pcVar13[4] = '\0';
              pcVar13[5] = '\0';
              pcVar13[6] = '\0';
              pcVar13[7] = '\0';
              pcVar13 = (char *)((long)pppppcVar27 + lVar22 + -0xa8);
              pcVar13[0] = '\0';
              pcVar13[1] = '\0';
              pcVar13[2] = '\0';
              pcVar13[3] = '\0';
              pcVar13[4] = '\0';
              pcVar13[5] = '\0';
              pcVar13[6] = '\0';
              pcVar13[7] = '\0';
              pcVar13 = (char *)((long)pppppcVar27 + lVar22 + -0xa0);
              pcVar13[0] = '\0';
              pcVar13[1] = '\0';
              pcVar13[2] = '\0';
              pcVar13[3] = '\0';
              pcVar13[4] = '\0';
              pcVar13[5] = '\0';
              pcVar13[6] = '\0';
              pcVar13[7] = '\0';
              lVar3 = lVar22 + -0x130;
              lVar22 = lVar22 + -0x98;
            } while ((char ******)((long)pppppcVar27 + lVar3) != ppppppcVar23);
          }
          *(undefined4 *)ppppppcVar23 = pppppcStack_200._0_4_;
          FUN_109f5f278(ppppppcVar23 + 1);
          ppppppcVar23[2] = pppppcStack_1f0;
          ppppppcVar23[1] = pppppcStack_1f8;
          ppppppcVar23[3] = pppppcStack_1e8;
          pppppcStack_1f8 = (char *****)0x0;
          pppppcStack_1f0 = (char *****)0x0;
          pppppcStack_1e8 = (char *****)0x0;
          FUN_109f5f408(ppppppcVar23 + 4);
          ppppppcVar23[5] = pppppcStack_1d8;
          ppppppcVar23[4] = pppppcStack_1e0;
          ppppppcVar23[6] = (char *****)ppppcStack_1d0;
          pppppcStack_1e0 = (char *****)0x0;
          pppppcStack_1d8 = (char *****)0x0;
          ppppcStack_1d0 = (char ****)0x0;
          func_0x000109f5f66c(ppppppcVar23 + 7);
          ppppppcVar23[8] = (char *****)ppppcStack_1c0;
          ppppppcVar23[7] = (char *****)ppppcStack_1c8;
          ppppppcVar23[9] = (char *****)ppppcStack_1b8;
          ppppcStack_1c8 = (char ****)0x0;
          ppppcStack_1c0 = (char ****)0x0;
          ppppcStack_1b8 = (char ****)0x0;
          FUN_109f5fc5c(ppppppcVar23 + 10);
          ppppppcVar23[0xb] = (char *****)ppppcStack_1a8;
          ppppppcVar23[10] = (char *****)ppppcStack_1b0;
          ppppppcVar23[0xc] = (char *****)ppppcStack_1a0;
          ppppcStack_1b0 = (char ****)0x0;
          ppppcStack_1a8 = (char ****)0x0;
          ppppcStack_1a0 = (char ****)0x0;
          func_0x000109f5feac(ppppppcVar23 + 0xd);
          ppppppcVar23[0xe] = (char *****)ppppcStack_190;
          ppppppcVar23[0xd] = (char *****)ppppcStack_198;
          ppppppcVar23[0xf] = (char *****)ppppcStack_188;
          ppppcStack_198 = (char ****)0x0;
          ppppcStack_190 = (char ****)0x0;
          ppppcStack_188 = (char ****)0x0;
          func_0x000109f600e4(ppppppcVar23 + 0x10);
          ppppppcVar23[0x11] = (char *****)ppppcStack_178;
          ppppppcVar23[0x10] = (char *****)ppppcStack_180;
          ppppppcVar23[0x12] = (char *****)ppppcStack_170;
          ppppcStack_180 = (char ****)0x0;
          ppppcStack_178 = (char ****)0x0;
          ppppcStack_170 = (char ****)0x0;
        }
      }
      else {
        uVar14 = ((long)pppppcStack_98 - (long)pppppcStack_a0 >> 3) * -0x79435e50d79435e5 + 1;
        if (0x1af286bca1af286 < uVar14) {
          FUN_109f59f38();
          goto LAB_109f595b4;
        }
        lVar22 = (long)pppppcStack_90 - (long)pppppcStack_a0 >> 3;
        uVar15 = lVar22 * 0xd79435e50d79436;
        if (uVar15 < uVar14 || uVar15 - uVar14 == 0) {
          uVar15 = uVar14;
        }
        if (0xd79435e50d7942 < (ulong)(lVar22 * -0x79435e50d79435e5)) {
          uVar15 = 0x1af286bca1af286;
        }
        pppppcStack_140 = (char *****)&pppppcStack_a0;
        if (uVar15 == 0) {
          ppppppcVar8 = (char ******)0x0;
          uVar15 = 0;
        }
        else {
          ppppppcVar8 = &pppppcStack_a0;
          FUN_109f59f4c();
          uVar15 = uVar15 * 0x98;
        }
        uVar14 = (long)ppppppcVar23 - (long)pppppcVar17;
        pppppcStack_158 = (char *****)((long)ppppppcVar8 + uVar14);
        uStack_148 = (char ******)((long)ppppppcVar8 + uVar15);
        pppppcStack_160 = (char *****)ppppppcVar8;
        pppppcStack_150 = pppppcStack_158;
        if (uVar14 == uVar15) {
          if ((long)uVar14 < 1) {
            uVar15 = 1;
            if (ppppppcVar23 != (char ******)pppppcVar17) {
              uVar15 = (-uVar14 >> 3) * -0xd79435e50d79436;
            }
            pppppcStack_b0 = (char *****)&pppppcStack_a0;
            ppppppcVar21 = &pppppcStack_a0;
            uVar14 = uVar15;
            FUN_109f59f4c();
            pppppcVar27 = pppppcStack_150;
            pppppcVar17 = pppppcStack_158;
            ppppppcVar26 = ppppppcVar21 + (uVar15 >> 2) * 0x13;
            lVar22 = (long)pppppcStack_150 - (long)pppppcStack_158;
            ppppppcVar8 = ppppppcVar26;
            if (lVar22 != 0) {
              ppppppcVar8 = (char ******)((long)ppppppcVar26 + lVar22);
              ppppppcVar20 = ppppppcVar26;
              ppppppcVar16 = (char ******)pppppcStack_158;
              do {
                FUN_109f59ffc(ppppppcVar20,ppppppcVar16);
                ppppppcVar20 = ppppppcVar20 + 0x13;
                ppppppcVar16 = ppppppcVar16 + 0x13;
                lVar22 = lVar22 + -0x98;
              } while (lVar22 != 0);
            }
            pppppcStack_d0 = pppppcStack_160;
            pppppcStack_c8 = pppppcVar17;
            pppppcStack_c0 = pppppcVar27;
            pppppcStack_b8 = (char *****)uStack_148;
            pppppcStack_160 = (char *****)ppppppcVar21;
            pppppcStack_158 = (char *****)ppppppcVar26;
            pppppcStack_150 = (char *****)ppppppcVar8;
            uStack_148 = ppppppcVar21 + uVar14 * 0x13;
            func_0x000109f5a5fc(&pppppcStack_d0);
          }
          else {
            pppppcStack_158 =
                 pppppcStack_158 + ((uVar14 >> 3) * -0x79435e50d79435e5 + 1 >> 1) * -0x13;
            pppppcStack_150 = pppppcStack_158;
          }
        }
        FUN_109f59ffc(pppppcStack_150,&pppppcStack_200);
        ppppppcVar21 = (char ******)pppppcStack_158;
        pppppcStack_150 = pppppcStack_150 + 0x13;
        FUN_109f59f94(&pppppcStack_a0,ppppppcVar23,pppppcStack_98);
        pppppcStack_150 =
             (char *****)((long)pppppcStack_150 + ((long)pppppcStack_98 - (long)ppppppcVar23));
        ppppppcVar8 = (char ******)
                      ((long)pppppcStack_158 + ((long)pppppcStack_a0 - (long)ppppppcVar23));
        pppppcStack_98 = (char *****)ppppppcVar23;
        FUN_109f59f94(&pppppcStack_a0,pppppcStack_a0,ppppppcVar23,ppppppcVar8);
        pppppcVar17 = pppppcStack_90;
        pppppcStack_90 = (char *****)uStack_148;
        pppppcStack_98 = pppppcStack_150;
        pppppcStack_150 = pppppcStack_a0;
        uStack_148 = (char ******)pppppcVar17;
        pppppcStack_160 = pppppcStack_a0;
        pppppcStack_158 = pppppcStack_a0;
        pppppcStack_a0 = (char *****)ppppppcVar8;
        func_0x000109f5a5fc(&pppppcStack_160);
      }
      pppppcStack_d0 = &ppppcStack_180;
      func_0x000109f5a1d4(&pppppcStack_d0);
      pppppcStack_d0 = &ppppcStack_198;
      FUN_109f5a260(&pppppcStack_d0);
      pppppcStack_d0 = &ppppcStack_1b0;
      FUN_109f5a2ec(&pppppcStack_d0);
      pppppcStack_d0 = &ppppcStack_1c8;
      FUN_109f5a378(&pppppcStack_d0);
      pppppcStack_d0 = (char *****)&pppppcStack_1e0;
      func_0x000109f5a404(&pppppcStack_d0);
      pppppcStack_d0 = (char *****)&pppppcStack_1f8;
      FUN_109f5a500(&pppppcStack_d0);
      if (*(char *)ppppppcVar7 == '\x02') {
        ppppcVar25 = ppppcVar25 + 2;
        pppcStack_100 = (char ***)ppppcVar25;
      }
      else if (*(char *)ppppppcVar7 == '\x01') {
        ppppcVar24 = ppppcVar24 + 5;
        pppcStack_108 = (char ***)ppppcVar24;
      }
      else {
        lStack_240 = lStack_240 + 1;
        lStack_f8 = lStack_240;
      }
      ppppppcVar8 = &pppppcStack_110;
      FUN_109f5a780(ppppppcVar8,&pppppcStack_130);
      ppppppcVar23 = ppppppcVar21 + 0x13;
    } while (((ulong)ppppppcVar8 & 1) == 0);
  }
  FUN_109f6011c(param_2);
  param_2[1] = pppppcStack_98;
  *param_2 = pppppcStack_a0;
  param_2[2] = pppppcStack_90;
  pppppcStack_98 = (char *****)0x0;
  pppppcStack_90 = (char *****)0x0;
  pppppcStack_a0 = (char *****)0x0;
  pppppcStack_200 = (char *****)&pppppcStack_a0;
  func_0x000109f60180(&pppppcStack_200);
  func_0x000107c31940(&pppppcStack_f0,&UNK_10f61d5a6);
  ppppppcVar7 = param_1;
  FUN_109f59c90(param_1,&pppppcStack_f0);
  if (*(char *)ppppppcVar7 != '\x02') {
    uVar12 = 0x20;
    ___cxa_allocate_exception(0x20);
    FUN_109f51088(ppppppcVar7);
    func_0x000107c31940(&pppppcStack_d0,ppppppcVar7);
    func_0x00010928a5e0(&pppppcStack_200,&UNK_10f56748c,&pppppcStack_d0);
    func_0x00010937bbbc(uVar12,0x12e,&pppppcStack_200);
    ___cxa_throw(uVar12,&PTR_DAT_110af4510,&DAT_10937bd14);
    goto LAB_109f595b4;
  }
  pppppcStack_a0 = (char *****)0x0;
  pppppcStack_98 = (char *****)0x0;
  pppppcStack_90 = (char *****)0x0;
  ppppppcVar23 = ppppppcVar7;
  FUN_109f50f2c(ppppppcVar7);
  FUN_109f601f0(&pppppcStack_a0,ppppppcVar23);
  pppcStack_108 = (char ***)0x0;
  pppcStack_100 = (char ***)0x0;
  lStack_f8 = -0x8000000000000000;
  cVar2 = *(char *)ppppppcVar7;
  if (cVar2 == '\0') {
    pppppcStack_220 = (char *****)0x1;
    lStack_f8 = 1;
LAB_109f576fc:
    pppppcStack_128 = (char *****)0x0;
    pppppcStack_120 = (char *****)0x0;
    uStack_118 = 1;
  }
  else if (cVar2 == '\x02') {
    pppcStack_100 = (char ***)*ppppppcVar7[1];
    pppppcStack_128 = (char *****)0x0;
    pppppcStack_220 = (char *****)0x8000000000000000;
    uStack_118 = 0x8000000000000000;
    pppppcStack_120 = (char *****)ppppppcVar7[1][1];
  }
  else {
    if (cVar2 != '\x01') {
      pppppcStack_220 = (char *****)0x0;
      lStack_f8 = 0;
      goto LAB_109f576fc;
    }
    pppcStack_108 = (char ***)*ppppppcVar7[1];
    uStack_118 = 0x8000000000000000;
    pppppcStack_120 = (char *****)0x0;
    pppppcStack_128 = (char *****)ppppppcVar7[1][1];
    pppppcStack_220 = (char *****)0x8000000000000000;
  }
  ppppppcVar23 = (char ******)pppppcStack_98;
  pppppcStack_130 = (char *****)ppppppcVar7;
  pppppcStack_110 = (char *****)ppppppcVar7;
  while( true ) {
    ppppppcVar8 = &pppppcStack_110;
    FUN_109f5a780(ppppppcVar8,&pppppcStack_130);
    if (((ulong)ppppppcVar8 & 1) != 0) break;
    ppppppcVar8 = &pppppcStack_110;
    FUN_109f5a648(ppppppcVar8);
    pppppcStack_150 = (char *****)0x0;
    pppppcStack_158 = (char *****)0x0;
    pppppcStack_160 = (char *****)0x0;
    uStack_148 = (char ******)0xffffffff;
    pppppcStack_140 = (char *****)((ulong)pppppcStack_140 & 0xffffffff00000000);
    func_0x000107c31940(&pppppcStack_200,&DAT_10f68f148);
    FUN_109f59c90(ppppppcVar8,&pppppcStack_200);
    FUN_109f5dcc0();
    if ((long)pppppcStack_1f0 < 0) {
      __ZdlPv(pppppcStack_200);
    }
    func_0x000107c31940(&pppppcStack_200,"location");
    FUN_109f59c90(ppppppcVar8,&pppppcStack_200);
    FUN_109f5da58();
    if ((long)pppppcStack_1f0 < 0) {
      __ZdlPv(pppppcStack_200);
    }
    func_0x000107c31940(&pppppcStack_200,&DAT_10f61d658);
    FUN_109f59c90(ppppppcVar8,&pppppcStack_200);
    FUN_109f5da58();
    if ((long)pppppcStack_1f0 < 0) {
      __ZdlPv(pppppcStack_200);
    }
    func_0x000107c31940(&pppppcStack_200,"format");
    FUN_109f59c90(ppppppcVar8,&pppppcStack_200);
    if (((bRam00000001137e7d20 & 1) == 0) &&
       (iVar6 = 0x137e7d20, ___cxa_guard_acquire(), iVar6 != 0)) {
      uRam00000001137e8ee8 = 0;
      puRam00000001137e8ef8 = (undefined *)0x0;
      uRam00000001137e8ef0 = 3;
      puVar10 = &DAT_10f61d667;
      FUN_109f4f5c0();
      uRam00000001137e8f00 = 1;
      puRam00000001137e8f10 = (undefined *)0x0;
      uRam00000001137e8f08 = 3;
      puVar11 = &DAT_10f61d7c0;
      puRam00000001137e8ef8 = puVar10;
      FUN_109f4fe58();
      uRam00000001137e8f18 = 2;
      puRam00000001137e8f28 = (undefined *)0x0;
      uRam00000001137e8f20 = 3;
      puVar10 = &DAT_10f61d7c6;
      puRam00000001137e8f10 = puVar11;
      FUN_109f4fe58();
      uRam00000001137e8f30 = 3;
      puRam00000001137e8f40 = (undefined *)0x0;
      uRam00000001137e8f38 = 3;
      puVar11 = &DAT_10f61d7cc;
      puRam00000001137e8f28 = puVar10;
      FUN_109f4fe58();
      uRam00000001137e8f48 = 4;
      puRam00000001137e8f58 = (undefined *)0x0;
      uRam00000001137e8f50 = 3;
      puVar10 = &DAT_10f61d7d2;
      puRam00000001137e8f40 = puVar11;
      FUN_109f508c0();
      uRam00000001137e8f60 = 5;
      puRam00000001137e8f70 = (undefined *)0x0;
      uRam00000001137e8f68 = 3;
      puVar11 = &DAT_10f61d7e2;
      puRam00000001137e8f58 = puVar10;
      FUN_109f508c0();
      uRam00000001137e8f78 = 6;
      puRam00000001137e8f88 = (undefined *)0x0;
      uRam00000001137e8f80 = 3;
      puVar10 = &DAT_10f61d7f2;
      puRam00000001137e8f70 = puVar11;
      FUN_109f508c0();
      uRam00000001137e8f90 = 7;
      puRam00000001137e8fa0 = (undefined *)0x0;
      uRam00000001137e8f98 = 3;
      puVar11 = &DAT_10f61d802;
      puRam00000001137e8f88 = puVar10;
      FUN_109f50438();
      uRam00000001137e8fa8 = 8;
      puRam00000001137e8fb8 = (undefined *)0x0;
      uRam00000001137e8fb0 = 3;
      puVar10 = &DAT_10f61d810;
      puRam00000001137e8fa0 = puVar11;
      FUN_109f50438();
      uRam00000001137e8fc0 = 9;
      puRam00000001137e8fd0 = (undefined *)0x0;
      uRam00000001137e8fc8 = 3;
      puVar11 = &DAT_10f61d81e;
      puRam00000001137e8fb8 = puVar10;
      FUN_109f50438();
      uRam00000001137e8fd8 = 10;
      puRam00000001137e8fe8 = (undefined *)0x0;
      uRam00000001137e8fe0 = 3;
      puVar10 = &DAT_10f61d82c;
      puRam00000001137e8fd0 = puVar11;
      FUN_109f50908();
      uRam00000001137e8ff0 = 0xb;
      puRam00000001137e9000 = (undefined *)0x0;
      uRam00000001137e8ff8 = 3;
      puVar11 = &DAT_10f61d844;
      puRam00000001137e8fe8 = puVar10;
      FUN_109f50908();
      uRam00000001137e9008 = 0xc;
      puRam00000001137e9018 = (undefined *)0x0;
      uRam00000001137e9010 = 3;
      puVar10 = &DAT_10f61d85c;
      puRam00000001137e9000 = puVar11;
      FUN_109f50908();
      uRam00000001137e9020 = 0xd;
      puRam00000001137e9030 = (undefined *)0x0;
      uRam00000001137e9028 = 3;
      puVar11 = &DAT_10f61d700;
      puRam00000001137e9018 = puVar10;
      FUN_109f4f530();
      uRam00000001137e9038 = 0xe;
      puRam00000001137e9048 = (undefined *)0x0;
      uRam00000001137e9040 = 3;
      puVar10 = &DAT_10f61d707;
      puRam00000001137e9030 = puVar11;
      FUN_109f4f530();
      uRam00000001137e9050 = 0xf;
      puRam00000001137e9060 = (undefined *)0x0;
      uRam00000001137e9058 = 3;
      puVar11 = &DAT_10f61d70e;
      puRam00000001137e9048 = puVar10;
      FUN_109f4f530();
      uRam00000001137e9068 = 0x10;
      puRam00000001137e9078 = (undefined *)0x0;
      uRam00000001137e9070 = 3;
      puVar10 = &DAT_10f61d874;
      puRam00000001137e9060 = puVar11;
      FUN_109f50878();
      uRam00000001137e9080 = 0x11;
      puRam00000001137e9090 = (undefined *)0x0;
      uRam00000001137e9088 = 3;
      puVar11 = &DAT_10f61d885;
      puRam00000001137e9078 = puVar10;
      FUN_109f50878();
      uRam00000001137e9098 = 0x12;
      puRam00000001137e90a8 = (undefined *)0x0;
      uRam00000001137e90a0 = 3;
      puVar10 = &DAT_10f61d896;
      puRam00000001137e9090 = puVar11;
      FUN_109f50878();
      uRam00000001137e90b0 = 0x13;
      puRam00000001137e90c0 = (undefined *)0x0;
      uRam00000001137e90b8 = 3;
      puVar11 = &DAT_10f61d8a7;
      puRam00000001137e90a8 = puVar10;
      FUN_109f4ebd4();
      uRam00000001137e90c8 = 0x14;
      puRam00000001137e90d8 = (undefined *)0x0;
      uRam00000001137e90d0 = 3;
      puVar10 = &DAT_10f61d8b6;
      puRam00000001137e90c0 = puVar11;
      FUN_109f4ebd4();
      uRam00000001137e90e0 = 0x15;
      puRam00000001137e90f0 = (undefined *)0x0;
      uRam00000001137e90e8 = 3;
      puVar11 = &DAT_10f61d8c5;
      puRam00000001137e90d8 = puVar10;
      FUN_109f4ebd4();
      uRam00000001137e90f8 = 0x16;
      puRam00000001137e9108 = (undefined *)0x0;
      uRam00000001137e9100 = 3;
      puVar10 = &DAT_10f61d8d4;
      puRam00000001137e90f0 = puVar11;
      FUN_109f50950();
      uRam00000001137e9110 = 0x17;
      puRam00000001137e9120 = (undefined *)0x0;
      uRam00000001137e9118 = 3;
      puVar11 = &DAT_10f61d8ed;
      puRam00000001137e9108 = puVar10;
      FUN_109f50950();
      uRam00000001137e9128 = 0x18;
      puRam00000001137e9138 = (undefined *)0x0;
      uRam00000001137e9130 = 3;
      puVar10 = &DAT_10f61d906;
      puRam00000001137e9120 = puVar11;
      FUN_109f50950();
      uRam00000001137e9140 = 0x19;
      puRam00000001137e9150 = (undefined *)0x0;
      uRam00000001137e9148 = 3;
      puVar11 = &DAT_10f61d6d9;
      puRam00000001137e9138 = puVar10;
      FUN_109f4f578();
      uRam00000001137e9158 = 0x1a;
      puRam00000001137e9168 = (undefined *)0x0;
      uRam00000001137e9160 = 3;
      puVar10 = &DAT_10f61d6e4;
      puRam00000001137e9150 = puVar11;
      FUN_109f4f578();
      uRam00000001137e9170 = 0x1b;
      puRam00000001137e9180 = (undefined *)0x0;
      uRam00000001137e9178 = 3;
      puVar11 = &DAT_10f61d6ef;
      puRam00000001137e9168 = puVar10;
      FUN_109f4f578();
      uRam00000001137e9188 = 0x1c;
      puRam00000001137e9198 = (undefined *)0x0;
      uRam00000001137e9190 = 3;
      puVar10 = &DAT_10f5a35b4;
      puRam00000001137e9180 = puVar11;
      FUN_109f4fe58();
      uRam00000001137e91a0 = 0x1d;
      puRam00000001137e91b0 = (undefined *)0x0;
      uRam00000001137e91a8 = 3;
      puVar11 = &DAT_10f61d6a9;
      puRam00000001137e9198 = puVar10;
      FUN_109f4f530();
      uRam00000001137e91b8 = 0x1e;
      puRam00000001137e91c8 = (undefined *)0x0;
      uRam00000001137e91c0 = 3;
      puVar10 = &DAT_10f61d6b0;
      puRam00000001137e91b0 = puVar11;
      FUN_109f4f530();
      uRam00000001137e91d0 = 0x1f;
      puRam00000001137e91e0 = (undefined *)0x0;
      uRam00000001137e91d8 = 3;
      puVar11 = &DAT_10f61d6b7;
      puRam00000001137e91c8 = puVar10;
      FUN_109f4f530();
      uRam00000001137e91e8 = 0x20;
      puRam00000001137e91f8 = (undefined *)0x0;
      uRam00000001137e91f0 = 3;
      puRam00000001137e91e0 = puVar11;
      FUN_109f4fea0();
      uRam00000001137e9200 = 0x21;
      puRam00000001137e9210 = (undefined *)0x0;
      uRam00000001137e9208 = 3;
      puVar10 = &DAT_10f61d683;
      puRam00000001137e91f8 = puVar11;
      FUN_109f4ec1c();
      uRam00000001137e9218 = 0x22;
      puRam00000001137e9228 = (undefined *)0x0;
      uRam00000001137e9220 = 3;
      puVar11 = &DAT_10f61d688;
      puRam00000001137e9210 = puVar10;
      FUN_109f4ec1c();
      uRam00000001137e9230 = 0x23;
      puRam00000001137e9240 = (undefined *)0x0;
      uRam00000001137e9238 = 3;
      puVar10 = &DAT_10f61d68d;
      puRam00000001137e9228 = puVar11;
      FUN_109f4ec1c();
      uRam00000001137e9248 = 0x24;
      puRam00000001137e9258 = (undefined *)0x0;
      uRam00000001137e9250 = 3;
      puVar11 = &DAT_10f61d692;
      puRam00000001137e9240 = puVar10;
      FUN_109f4ec1c();
      uRam00000001137e9260 = 0x25;
      puRam00000001137e9270 = (undefined *)0x0;
      uRam00000001137e9268 = 3;
      puVar10 = &DAT_10f61d697;
      puRam00000001137e9258 = puVar11;
      FUN_109f4fe58();
      uRam00000001137e9278 = 0x26;
      puRam00000001137e9288 = (undefined *)0x0;
      uRam00000001137e9280 = 3;
      puVar11 = &DAT_10f61d69d;
      puRam00000001137e9270 = puVar10;
      FUN_109f4fe58();
      uRam00000001137e9290 = 0x27;
      puRam00000001137e92a0 = (undefined *)0x0;
      uRam00000001137e9298 = 3;
      puVar10 = &DAT_10f61d6a3;
      puRam00000001137e9288 = puVar11;
      FUN_109f4fe58();
      uRam00000001137e92a8 = 0x28;
      puRam00000001137e92b8 = (undefined *)0x0;
      uRam00000001137e92b0 = 3;
      puVar11 = &DAT_10f517cd7;
      puRam00000001137e92a0 = puVar10;
      FUN_109f4fe58();
      puRam00000001137e92b8 = puVar11;
      ___cxa_atexit(0x109f610f4,0,0x100000000);
      ___cxa_guard_release(0x1137e7d20);
    }
    lVar22 = 0x3d8;
    puVar18 = (undefined4 *)0x1137e8ee8;
    do {
      puVar9 = puVar18 + 2;
      FUN_109f5ef34(puVar9,ppppppcVar8);
      if (((ulong)puVar9 & 1) != 0) {
        if (lVar22 != 0) goto LAB_109f57860;
        break;
      }
      puVar18 = puVar18 + 6;
      lVar22 = lVar22 + -0x18;
    } while (lVar22 != 0);
    puVar18 = (undefined4 *)0x1137e8ee8;
LAB_109f57860:
    pppppcStack_140 = (char *****)CONCAT44(pppppcStack_140._4_4_,*puVar18);
    if ((long)pppppcStack_1f0 < 0) {
      __ZdlPv(pppppcStack_200);
    }
    pppppcVar17 = pppppcStack_a0;
    if (pppppcStack_98 < pppppcStack_90) {
      ppppppcVar21 = ppppppcVar23;
      if (ppppppcVar23 == (char ******)pppppcStack_98) {
        pppppcStack_98[2] = (char ****)pppppcStack_150;
        pppppcStack_98[1] = (char ****)pppppcStack_158;
        *pppppcStack_98 = (char ****)pppppcStack_160;
        pppppcStack_158 = (char *****)0x0;
        pppppcStack_150 = (char *****)0x0;
        pppppcStack_160 = (char *****)0x0;
        pppppcStack_98[3] = (char ****)uStack_148;
        *(undefined4 *)(pppppcStack_98 + 4) = pppppcStack_140._0_4_;
        pppppcStack_98 = pppppcStack_98 + 5;
      }
      else {
        ppppppcVar26 = (char ******)(pppppcStack_98 + -5);
        ppppppcVar8 = (char ******)pppppcStack_98;
        if (ppppppcVar26 < pppppcStack_98) {
          ppppppcVar8 = (char ******)(pppppcStack_98 + 5);
          pppppcStack_98[2] = pppppcStack_98[-3];
          pppppcStack_98[1] = pppppcStack_98[-4];
          *pppppcStack_98 = (char ****)*ppppppcVar26;
          pppppcStack_98[-4] = (char ****)0x0;
          pppppcStack_98[-3] = (char ****)0x0;
          *ppppppcVar26 = (char *****)0x0;
          *(undefined4 *)(pppppcStack_98 + 4) = *(undefined4 *)(pppppcStack_98 + -1);
          pppppcStack_98[3] = pppppcStack_98[-2];
        }
        if ((char ******)pppppcStack_98 != ppppppcVar23 + 5) {
          lVar22 = 0;
          do {
            pcVar13 = (char *)((long)pppppcStack_98 + lVar22 + -0x50);
            *(undefined8 *)((long)pppppcStack_98 + lVar22 + -0x18) =
                 *(undefined8 *)((long)pppppcStack_98 + lVar22 + -0x40);
            *(undefined8 *)((long)pppppcStack_98 + lVar22 + -0x20) =
                 *(undefined8 *)((long)pppppcStack_98 + lVar22 + -0x48);
            *(undefined8 *)((long)pppppcStack_98 + lVar22 + -0x28) = *(undefined8 *)pcVar13;
            *(char *)((long)pppppcStack_98 + lVar22 + -0x39) = '\0';
            *pcVar13 = '\0';
            *(undefined4 *)((long)pppppcStack_98 + lVar22 + -8) =
                 *(undefined4 *)((long)pppppcStack_98 + lVar22 + -0x30);
            *(undefined8 *)((long)pppppcStack_98 + lVar22 + -0x10) =
                 *(undefined8 *)((long)pppppcStack_98 + lVar22 + -0x38);
            lVar3 = lVar22 + -0x50;
            lVar22 = lVar22 + -0x28;
          } while ((char ******)((long)pppppcStack_98 + lVar3) != ppppppcVar23);
        }
        pppppcStack_98 = (char *****)ppppppcVar8;
        if (*(char *)((long)ppppppcVar23 + 0x17) < '\0') {
          __ZdlPv(*ppppppcVar23);
        }
        ppppppcVar23[2] = pppppcStack_150;
        ppppppcVar23[1] = pppppcStack_158;
        *ppppppcVar23 = pppppcStack_160;
        pppppcStack_150 = (char *****)((ulong)pppppcStack_150 & 0xffffffffffffff);
        pppppcStack_160 = (char *****)((ulong)pppppcStack_160 & 0xffffffffffffff00);
        *(undefined4 *)(ppppppcVar23 + 4) = pppppcStack_140._0_4_;
        ppppppcVar23[3] = (char *****)uStack_148;
      }
    }
    else {
      uVar14 = ((long)pppppcStack_98 - (long)pppppcStack_a0 >> 3) * -0x3333333333333333 + 1;
      if (0x666666666666666 < uVar14) {
        FUN_109f602c8();
        goto LAB_109f595b4;
      }
      lVar22 = (long)pppppcStack_90 - (long)pppppcStack_a0 >> 3;
      uVar15 = lVar22 * -0x6666666666666666;
      if (uVar15 < uVar14 || uVar15 - uVar14 == 0) {
        uVar15 = uVar14;
      }
      if (0x333333333333332 < (ulong)(lVar22 * -0x3333333333333333)) {
        uVar15 = 0x666666666666666;
      }
      pppppcStack_b0 = (char *****)&pppppcStack_a0;
      if (uVar15 == 0) {
        ppppppcVar8 = (char ******)0x0;
        uVar15 = 0;
      }
      else {
        ppppppcVar8 = &pppppcStack_a0;
        FUN_109f602dc();
        uVar15 = uVar15 * 0x28;
      }
      uVar14 = (long)ppppppcVar23 - (long)pppppcVar17;
      pppppcStack_c8 = (char *****)((long)ppppppcVar8 + uVar14);
      pppppcStack_b8 = (char *****)((long)ppppppcVar8 + uVar15);
      pppppcStack_d0 = (char *****)ppppppcVar8;
      pppppcStack_c0 = pppppcStack_c8;
      if (uVar14 == uVar15) {
        if ((long)uVar14 < 1) {
          uVar15 = 1;
          if (ppppppcVar23 != (char ******)pppppcVar17) {
            uVar15 = (-uVar14 >> 3) * 0x6666666666666666;
          }
          pppppcStack_1e0 = (char *****)&pppppcStack_a0;
          ppppppcVar21 = &pppppcStack_a0;
          uVar14 = uVar15;
          FUN_109f602dc();
          ppppppcVar26 = ppppppcVar21 + (uVar15 >> 2) * 5;
          ppppppcVar8 = ppppppcVar26;
          if ((long)pppppcStack_c0 - (long)pppppcStack_c8 != 0) {
            ppppppcVar8 = (char ******)
                          ((long)ppppppcVar26 + ((long)pppppcStack_c0 - (long)pppppcStack_c8));
            ppppppcVar20 = ppppppcVar26;
            ppppppcVar16 = (char ******)pppppcStack_c8;
            do {
              pppppcVar27 = ppppppcVar16[1];
              pppppcVar17 = *ppppppcVar16;
              ppppppcVar20[2] = ppppppcVar16[2];
              ppppppcVar20[1] = pppppcVar27;
              *ppppppcVar20 = pppppcVar17;
              ppppppcVar16[1] = (char *****)0x0;
              ppppppcVar16[2] = (char *****)0x0;
              *ppppppcVar16 = (char *****)0x0;
              pppppcVar17 = ppppppcVar16[3];
              *(undefined4 *)(ppppppcVar20 + 4) = *(undefined4 *)(ppppppcVar16 + 4);
              ppppppcVar20[3] = pppppcVar17;
              ppppppcVar20 = ppppppcVar20 + 5;
              ppppppcVar16 = ppppppcVar16 + 5;
            } while (ppppppcVar20 != ppppppcVar8);
          }
          pppppcStack_200 = pppppcStack_d0;
          pppppcStack_1f8 = pppppcStack_c8;
          pppppcStack_1f0 = pppppcStack_c0;
          pppppcStack_1e8 = pppppcStack_b8;
          pppppcStack_d0 = (char *****)ppppppcVar21;
          pppppcStack_c8 = (char *****)ppppppcVar26;
          pppppcStack_c0 = (char *****)ppppppcVar8;
          pppppcStack_b8 = (char *****)(ppppppcVar21 + uVar14 * 5);
          func_0x000109f60458(&pppppcStack_200);
        }
        else {
          pppppcStack_c8 = pppppcStack_c8 + ((uVar14 >> 3) * -0x3333333333333333 + 1 >> 1) * -5;
          pppppcStack_c0 = pppppcStack_c8;
        }
      }
      ppppppcVar21 = (char ******)pppppcStack_c8;
      pppppcStack_c0[2] = (char ****)pppppcStack_150;
      pppppcStack_c0[1] = (char ****)pppppcStack_158;
      *pppppcStack_c0 = (char ****)pppppcStack_160;
      pppppcStack_158 = (char *****)0x0;
      pppppcStack_150 = (char *****)0x0;
      pppppcStack_160 = (char *****)0x0;
      pppppcStack_c0[3] = (char ****)uStack_148;
      *(undefined4 *)(pppppcStack_c0 + 4) = pppppcStack_140._0_4_;
      pppppcStack_c0 = pppppcStack_c0 + 5;
      func_0x000109f60320(&pppppcStack_a0,ppppppcVar23,pppppcStack_98);
      pppppcStack_c0 =
           (char *****)((long)pppppcStack_c0 + ((long)pppppcStack_98 - (long)ppppppcVar23));
      ppppppcVar8 = (char ******)
                    ((long)pppppcStack_c8 + ((long)pppppcStack_a0 - (long)ppppppcVar23));
      pppppcStack_98 = (char *****)ppppppcVar23;
      func_0x000109f60320(&pppppcStack_a0,pppppcStack_a0,ppppppcVar23,ppppppcVar8);
      pppppcVar17 = pppppcStack_90;
      pppppcStack_90 = pppppcStack_b8;
      pppppcStack_98 = pppppcStack_c0;
      pppppcStack_c0 = pppppcStack_a0;
      pppppcStack_b8 = pppppcVar17;
      pppppcStack_d0 = pppppcStack_a0;
      pppppcStack_c8 = pppppcStack_a0;
      pppppcStack_a0 = (char *****)ppppppcVar8;
      func_0x000109f60458(&pppppcStack_d0);
    }
    if ((long)pppppcStack_150 < 0) {
      __ZdlPv(pppppcStack_160);
    }
    ppppppcVar23 = ppppppcVar21 + 5;
    if (*(char *)ppppppcVar7 == '\x02') {
      pppcStack_100 = pppcStack_100 + 2;
    }
    else if (*(char *)ppppppcVar7 == '\x01') {
      pppcStack_108 = pppcStack_108 + 5;
    }
    else {
      pppppcStack_220 = (char *****)((long)pppppcStack_220 + 1);
      lStack_f8 = (long)pppppcStack_220;
    }
  }
  func_0x000109f604e0(param_2 + 3);
  param_2[4] = pppppcStack_98;
  param_2[3] = pppppcStack_a0;
  param_2[5] = pppppcStack_90;
  pppppcStack_98 = (char *****)0x0;
  pppppcStack_90 = (char *****)0x0;
  pppppcStack_a0 = (char *****)0x0;
  pppppcStack_200 = (char *****)&pppppcStack_a0;
  FUN_109f60564(&pppppcStack_200);
  func_0x000107c31940(&pppppcStack_f0,&UNK_10f61d5b7);
  ppppppcVar7 = param_1;
  FUN_109f59c90(param_1,&pppppcStack_f0);
  if (*(char *)ppppppcVar7 != '\x02') {
    uVar12 = 0x20;
    ___cxa_allocate_exception(0x20);
    FUN_109f51088(ppppppcVar7);
    func_0x000107c31940(&pppppcStack_d0,ppppppcVar7);
    func_0x00010928a5e0(&pppppcStack_200,&UNK_10f56748c,&pppppcStack_d0);
    func_0x00010937bbbc(uVar12,0x12e,&pppppcStack_200);
    ___cxa_throw(uVar12,&PTR_DAT_110af4510,&DAT_10937bd14);
    goto LAB_109f595b4;
  }
  pppppcStack_a0 = (char *****)0x0;
  pppppcStack_98 = (char *****)0x0;
  pppppcStack_90 = (char *****)0x0;
  ppppppcVar23 = ppppppcVar7;
  FUN_109f50f2c(ppppppcVar7);
  FUN_109f605a4(&pppppcStack_a0,ppppppcVar23);
  pppcStack_108 = (char ***)0x0;
  pppcStack_100 = (char ***)0x0;
  lStack_f8 = -0x8000000000000000;
  cVar2 = *(char *)ppppppcVar7;
  if (cVar2 == '\0') {
    pppppcStack_220 = (char *****)0x1;
    lStack_f8 = 1;
LAB_109f58484:
    pppppcStack_128 = (char *****)0x0;
    pppppcStack_120 = (char *****)0x0;
    uStack_118 = 1;
  }
  else if (cVar2 == '\x02') {
    pppcStack_100 = (char ***)*ppppppcVar7[1];
    pppppcStack_128 = (char *****)0x0;
    pppppcStack_220 = (char *****)0x8000000000000000;
    uStack_118 = 0x8000000000000000;
    pppppcStack_120 = (char *****)ppppppcVar7[1][1];
  }
  else {
    if (cVar2 != '\x01') {
      pppppcStack_220 = (char *****)0x0;
      lStack_f8 = 0;
      goto LAB_109f58484;
    }
    pppcStack_108 = (char ***)*ppppppcVar7[1];
    uStack_118 = 0x8000000000000000;
    pppppcStack_120 = (char *****)0x0;
    pppppcStack_128 = (char *****)ppppppcVar7[1][1];
    pppppcStack_220 = (char *****)0x8000000000000000;
  }
  ppppppcVar23 = (char ******)pppppcStack_98;
  pppppcStack_130 = (char *****)ppppppcVar7;
  pppppcStack_110 = (char *****)ppppppcVar7;
  while( true ) {
    ppppppcVar8 = &pppppcStack_110;
    FUN_109f5a780(ppppppcVar8,&pppppcStack_130);
    if (((ulong)ppppppcVar8 & 1) != 0) break;
    ppppppcVar8 = &pppppcStack_110;
    FUN_109f5a648(ppppppcVar8);
    pppppcStack_150 = (char *****)0x0;
    pppppcStack_158 = (char *****)0x0;
    pppppcStack_160 = (char *****)0x0;
    uStack_148 = (char ******)0xffffffff;
    func_0x000107c31940(&pppppcStack_200,&DAT_10f68f148);
    FUN_109f59c90(ppppppcVar8,&pppppcStack_200);
    FUN_109f5dcc0();
    if ((long)pppppcStack_1f0 < 0) {
      __ZdlPv(pppppcStack_200);
    }
    func_0x000107c31940(&pppppcStack_200,"location");
    FUN_109f59c90(ppppppcVar8,&pppppcStack_200);
    FUN_109f5da58();
    if ((long)pppppcStack_1f0 < 0) {
      __ZdlPv(pppppcStack_200);
    }
    func_0x000107c31940(&pppppcStack_200,"format");
    FUN_109f59c90(ppppppcVar8,&pppppcStack_200);
    if (((bRam00000001137e7d28 & 1) == 0) &&
       (iVar6 = 0x137e7d28, ___cxa_guard_acquire(), iVar6 != 0)) {
      uRam00000001137e8390 = 0;
      puRam00000001137e83a0 = (undefined *)0x0;
      uRam00000001137e8398 = 3;
      puVar10 = &DAT_10f61d667;
      FUN_109f4f5c0();
      uRam00000001137e83a8 = 1;
      puRam00000001137e83b8 = (undefined *)0x0;
      uRam00000001137e83b0 = 3;
      puRam00000001137e83a0 = puVar10;
      FUN_109f4fea0();
      uRam00000001137e83c0 = 2;
      puRam00000001137e83d0 = (undefined *)0x0;
      uRam00000001137e83c8 = 3;
      puVar11 = &DAT_10f61d683;
      puRam00000001137e83b8 = puVar10;
      FUN_109f4ec1c();
      uRam00000001137e83d8 = 3;
      puRam00000001137e83e8 = (undefined *)0x0;
      uRam00000001137e83e0 = 3;
      puVar10 = &DAT_10f61d688;
      puRam00000001137e83d0 = puVar11;
      FUN_109f4ec1c();
      uRam00000001137e83f0 = 4;
      puRam00000001137e8400 = (undefined *)0x0;
      uRam00000001137e83f8 = 3;
      puVar11 = &DAT_10f61d68d;
      puRam00000001137e83e8 = puVar10;
      FUN_109f4ec1c();
      uRam00000001137e8408 = 5;
      puRam00000001137e8418 = (undefined *)0x0;
      uRam00000001137e8410 = 3;
      puVar10 = &DAT_10f61d692;
      puRam00000001137e8400 = puVar11;
      FUN_109f4ec1c();
      uRam00000001137e8420 = 6;
      puRam00000001137e8430 = (undefined *)0x0;
      uRam00000001137e8428 = 3;
      puVar11 = &DAT_10f61d697;
      puRam00000001137e8418 = puVar10;
      FUN_109f4fe58();
      uRam00000001137e8438 = 7;
      puRam00000001137e8448 = (undefined *)0x0;
      uRam00000001137e8440 = 3;
      puVar10 = &DAT_10f61d69d;
      puRam00000001137e8430 = puVar11;
      FUN_109f4fe58();
      uRam00000001137e8450 = 8;
      puRam00000001137e8460 = (undefined *)0x0;
      uRam00000001137e8458 = 3;
      puVar11 = &DAT_10f61d6a3;
      puRam00000001137e8448 = puVar10;
      FUN_109f4fe58();
      uRam00000001137e8468 = 9;
      puRam00000001137e8478 = (undefined *)0x0;
      uRam00000001137e8470 = 3;
      puVar10 = &DAT_10f5a35b4;
      puRam00000001137e8460 = puVar11;
      FUN_109f4fe58();
      uRam00000001137e8480 = 10;
      puRam00000001137e8490 = (undefined *)0x0;
      uRam00000001137e8488 = 3;
      puVar11 = &DAT_10f61d6a9;
      puRam00000001137e8478 = puVar10;
      FUN_109f4f530();
      uRam00000001137e8498 = 0xb;
      puRam00000001137e84a8 = (undefined *)0x0;
      uRam00000001137e84a0 = 3;
      puVar10 = &DAT_10f61d6b0;
      puRam00000001137e8490 = puVar11;
      FUN_109f4f530();
      uRam00000001137e84b0 = 0xc;
      puRam00000001137e84c0 = (undefined *)0x0;
      uRam00000001137e84b8 = 3;
      puVar11 = &DAT_10f61d6b7;
      puRam00000001137e84a8 = puVar10;
      FUN_109f4f530();
      uRam00000001137e84c8 = 0xd;
      puRam00000001137e84d8 = (undefined *)0x0;
      uRam00000001137e84d0 = 3;
      puVar10 = &DAT_10f517cd7;
      puRam00000001137e84c0 = puVar11;
      FUN_109f4fe58();
      puRam00000001137e84d8 = puVar10;
      ___cxa_atexit(0x109f61130,0,0x100000000);
      ___cxa_guard_release(0x1137e7d28);
    }
    lVar22 = 0x150;
    puVar18 = (undefined4 *)0x1137e8390;
    do {
      puVar9 = puVar18 + 2;
      FUN_109f5ef34(puVar9,ppppppcVar8);
      if (((ulong)puVar9 & 1) != 0) {
        if (lVar22 != 0) goto LAB_109f585a8;
        break;
      }
      puVar18 = puVar18 + 6;
      lVar22 = lVar22 + -0x18;
    } while (lVar22 != 0);
    puVar18 = (undefined4 *)0x1137e8390;
LAB_109f585a8:
    uStack_148 = (char ******)CONCAT44(*puVar18,(undefined4)uStack_148);
    if ((long)pppppcStack_1f0 < 0) {
      __ZdlPv(pppppcStack_200);
    }
    pppppcVar17 = pppppcStack_a0;
    if (pppppcStack_98 < pppppcStack_90) {
      ppppppcVar21 = ppppppcVar23;
      if (ppppppcVar23 == (char ******)pppppcStack_98) {
        pppppcStack_98[2] = (char ****)pppppcStack_150;
        pppppcStack_98[1] = (char ****)pppppcStack_158;
        *pppppcStack_98 = (char ****)pppppcStack_160;
        pppppcStack_158 = (char *****)0x0;
        pppppcStack_150 = (char *****)0x0;
        pppppcStack_160 = (char *****)0x0;
        pppppcStack_98[3] = (char ****)uStack_148;
        pppppcStack_98 = pppppcStack_98 + 4;
      }
      else {
        ppppppcVar26 = (char ******)(pppppcStack_98 + -4);
        ppppppcVar8 = (char ******)pppppcStack_98;
        if (ppppppcVar26 < pppppcStack_98) {
          ppppppcVar8 = (char ******)(pppppcStack_98 + 4);
          pppppcStack_98[2] = pppppcStack_98[-2];
          pppppcStack_98[1] = pppppcStack_98[-3];
          *pppppcStack_98 = (char ****)*ppppppcVar26;
          pppppcStack_98[-3] = (char ****)0x0;
          pppppcStack_98[-2] = (char ****)0x0;
          *ppppppcVar26 = (char *****)0x0;
          pppppcStack_98[3] = pppppcStack_98[-1];
        }
        if ((char ******)pppppcStack_98 != ppppppcVar23 + 4) {
          lVar22 = 0;
          do {
            pcVar13 = (char *)((long)pppppcStack_98 + lVar22 + -0x40);
            *(undefined8 *)((long)pppppcStack_98 + lVar22 + -0x10) =
                 *(undefined8 *)((long)pppppcStack_98 + lVar22 + -0x30);
            *(undefined8 *)((long)pppppcStack_98 + lVar22 + -0x18) =
                 *(undefined8 *)((long)pppppcStack_98 + lVar22 + -0x38);
            *(undefined8 *)((long)pppppcStack_98 + lVar22 + -0x20) = *(undefined8 *)pcVar13;
            *(char *)((long)pppppcStack_98 + lVar22 + -0x29) = '\0';
            *pcVar13 = '\0';
            *(undefined8 *)((long)pppppcStack_98 + lVar22 + -8) =
                 *(undefined8 *)((long)pppppcStack_98 + lVar22 + -0x28);
            lVar3 = lVar22 + -0x40;
            lVar22 = lVar22 + -0x20;
          } while ((char ******)((long)pppppcStack_98 + lVar3) != ppppppcVar23);
        }
        pppppcStack_98 = (char *****)ppppppcVar8;
        if (*(char *)((long)ppppppcVar23 + 0x17) < '\0') {
          __ZdlPv(*ppppppcVar23);
        }
        ppppppcVar23[2] = pppppcStack_150;
        ppppppcVar23[1] = pppppcStack_158;
        *ppppppcVar23 = pppppcStack_160;
        pppppcStack_150 = (char *****)((ulong)pppppcStack_150 & 0xffffffffffffff);
        pppppcStack_160 = (char *****)((ulong)pppppcStack_160 & 0xffffffffffffff00);
        ppppppcVar23[3] = (char *****)uStack_148;
      }
    }
    else {
      uVar14 = ((long)pppppcStack_98 - (long)pppppcStack_a0 >> 5) + 1;
      if (uVar14 >> 0x3b != 0) {
        FUN_109f6065c();
        goto LAB_109f595b4;
      }
      uVar15 = (long)pppppcStack_90 - (long)pppppcStack_a0 >> 4;
      if (uVar15 <= uVar14) {
        uVar15 = uVar14;
      }
      if (0x7fffffffffffffdf < (ulong)((long)pppppcStack_90 - (long)pppppcStack_a0)) {
        uVar15 = 0x7ffffffffffffff;
      }
      pppppcStack_b0 = (char *****)&pppppcStack_a0;
      if (uVar15 == 0) {
        ppppppcVar8 = (char ******)0x0;
        uVar15 = 0;
      }
      else {
        ppppppcVar8 = &pppppcStack_a0;
        FUN_109f60670();
        uVar15 = uVar15 << 5;
      }
      uVar14 = (long)ppppppcVar23 - (long)pppppcVar17;
      pppppcStack_c8 = (char *****)((long)ppppppcVar8 + uVar14);
      pppppcStack_b8 = (char *****)((long)ppppppcVar8 + uVar15);
      pppppcStack_d0 = (char *****)ppppppcVar8;
      pppppcStack_c0 = pppppcStack_c8;
      if (uVar14 == uVar15) {
        if ((long)uVar14 < 1) {
          uVar14 = (long)uVar14 >> 4;
          if (ppppppcVar23 == (char ******)pppppcVar17) {
            uVar14 = 1;
          }
          pppppcStack_1e0 = (char *****)&pppppcStack_a0;
          ppppppcVar26 = &pppppcStack_a0;
          uVar15 = uVar14;
          FUN_109f60670();
          ppppppcVar8 = ppppppcVar26 + (uVar14 & 0xfffffffffffffffc);
          ppppppcVar21 = ppppppcVar8;
          if ((long)pppppcStack_c0 - (long)pppppcStack_c8 != 0) {
            ppppppcVar21 = (char ******)
                           ((long)ppppppcVar8 + ((long)pppppcStack_c0 - (long)pppppcStack_c8));
            ppppppcVar20 = ppppppcVar8;
            ppppppcVar16 = (char ******)pppppcStack_c8;
            do {
              pppppcVar27 = ppppppcVar16[1];
              pppppcVar17 = *ppppppcVar16;
              ppppppcVar20[2] = ppppppcVar16[2];
              ppppppcVar20[1] = pppppcVar27;
              *ppppppcVar20 = pppppcVar17;
              ppppppcVar16[1] = (char *****)0x0;
              ppppppcVar16[2] = (char *****)0x0;
              *ppppppcVar16 = (char *****)0x0;
              ppppppcVar20[3] = ppppppcVar16[3];
              ppppppcVar20 = ppppppcVar20 + 4;
              ppppppcVar16 = ppppppcVar16 + 4;
            } while (ppppppcVar20 != ppppppcVar21);
          }
          pppppcStack_200 = pppppcStack_d0;
          pppppcStack_1f8 = pppppcStack_c8;
          pppppcStack_1f0 = pppppcStack_c0;
          pppppcStack_1e8 = pppppcStack_b8;
          pppppcStack_d0 = (char *****)ppppppcVar26;
          pppppcStack_c8 = (char *****)ppppppcVar8;
          pppppcStack_c0 = (char *****)ppppppcVar21;
          pppppcStack_b8 = (char *****)(ppppppcVar26 + uVar15 * 4);
          func_0x000109f607d4(&pppppcStack_200);
        }
        else {
          pppppcStack_c8 =
               (char *****)((long)pppppcStack_c8 - ((uVar14 >> 1) + 0x10 & 0xffffffffffffffe0));
          pppppcStack_c0 = pppppcStack_c8;
        }
      }
      ppppppcVar21 = (char ******)pppppcStack_c8;
      pppppcStack_c0[2] = (char ****)pppppcStack_150;
      pppppcStack_c0[1] = (char ****)pppppcStack_158;
      *pppppcStack_c0 = (char ****)pppppcStack_160;
      pppppcStack_158 = (char *****)0x0;
      pppppcStack_150 = (char *****)0x0;
      pppppcStack_160 = (char *****)0x0;
      pppppcStack_c0[3] = (char ****)uStack_148;
      pppppcStack_c0 = pppppcStack_c0 + 4;
      func_0x000109f606a4(&pppppcStack_a0,ppppppcVar23,pppppcStack_98);
      pppppcStack_c0 =
           (char *****)((long)pppppcStack_c0 + ((long)pppppcStack_98 - (long)ppppppcVar23));
      ppppppcVar8 = (char ******)
                    ((long)pppppcStack_c8 + ((long)pppppcStack_a0 - (long)ppppppcVar23));
      pppppcStack_98 = (char *****)ppppppcVar23;
      func_0x000109f606a4(&pppppcStack_a0,pppppcStack_a0,ppppppcVar23,ppppppcVar8);
      pppppcVar17 = pppppcStack_90;
      pppppcStack_90 = pppppcStack_b8;
      pppppcStack_98 = pppppcStack_c0;
      pppppcStack_c0 = pppppcStack_a0;
      pppppcStack_b8 = pppppcVar17;
      pppppcStack_d0 = pppppcStack_a0;
      pppppcStack_c8 = pppppcStack_a0;
      pppppcStack_a0 = (char *****)ppppppcVar8;
      func_0x000109f607d4(&pppppcStack_d0);
    }
    if ((long)pppppcStack_150 < 0) {
      __ZdlPv(pppppcStack_160);
    }
    ppppppcVar23 = ppppppcVar21 + 4;
    if (*(char *)ppppppcVar7 == '\x02') {
      pppcStack_100 = pppcStack_100 + 2;
    }
    else if (*(char *)ppppppcVar7 == '\x01') {
      pppcStack_108 = pppcStack_108 + 5;
    }
    else {
      pppppcStack_220 = (char *****)((long)pppppcStack_220 + 1);
      lStack_f8 = (long)pppppcStack_220;
    }
  }
  func_0x000109f6085c(param_2 + 6);
  param_2[7] = pppppcStack_98;
  param_2[6] = pppppcStack_a0;
  param_2[8] = pppppcStack_90;
  pppppcStack_98 = (char *****)0x0;
  pppppcStack_90 = (char *****)0x0;
  pppppcStack_a0 = (char *****)0x0;
  pppppcStack_200 = (char *****)&pppppcStack_a0;
  FUN_109f608e0(&pppppcStack_200);
  func_0x000107c31940(&pppppcStack_110,&UNK_10f61d5c7);
  ppppppcVar7 = param_1;
  FUN_109f59c90(param_1,&pppppcStack_110);
  if (*(char *)ppppppcVar7 != '\x02') {
    uVar12 = 0x20;
    ___cxa_allocate_exception(0x20);
    FUN_109f51088(ppppppcVar7);
    func_0x000107c31940(&pppppcStack_d0,ppppppcVar7);
    func_0x00010928a5e0(&pppppcStack_200,&UNK_10f56748c,&pppppcStack_d0);
    func_0x00010937bbbc(uVar12,0x12e,&pppppcStack_200);
    ___cxa_throw(uVar12,&PTR_DAT_110af4510,&DAT_10937bd14);
    goto LAB_109f595b4;
  }
  pppppcStack_160 = (char *****)0x0;
  pppppcStack_158 = (char *****)0x0;
  pppppcStack_150 = (char *****)0x0;
  ppppppcVar23 = ppppppcVar7;
  FUN_109f50f2c();
  if (ppppppcVar23 != (char ******)0x0) {
    if ((ulong)ppppppcVar23 >> 0x3c != 0) {
      FUN_109f60920();
      goto LAB_109f595b4;
    }
    ppppppcVar8 = &pppppcStack_160;
    FUN_109f60934();
    ppppppcVar21 = (char ******)
                   ((long)ppppppcVar8 - ((long)pppppcStack_158 - (long)pppppcStack_160));
    _memcpy(ppppppcVar21);
    bVar1 = (char ******)pppppcStack_160 != (char ******)0x0;
    pppppcStack_160 = (char *****)ppppppcVar21;
    pppppcStack_158 = (char *****)ppppppcVar8;
    pppppcStack_150 = (char *****)(ppppppcVar8 + (long)ppppppcVar23 * 2);
    if (bVar1) {
      __ZdlPv();
    }
  }
  pppppcStack_1f8 = (char *****)0x0;
  pppppcStack_1f0 = (char *****)0x0;
  pppppcStack_1e8 = (char *****)0x8000000000000000;
  cVar2 = *(char *)ppppppcVar7;
  ppppppcVar23 = (char ******)pppppcStack_158;
  pppppcStack_200 = (char *****)ppppppcVar7;
  pppppcStack_d0 = (char *****)ppppppcVar7;
  if (cVar2 == '\0') {
    pppppcStack_220 = (char *****)0x1;
    pppppcStack_1e8 = (char *****)0x1;
LAB_109f58cf0:
    pppppcStack_c8 = (char *****)0x0;
    pppppcStack_c0 = (char *****)0x0;
    pppppcStack_b8 = (char *****)0x1;
  }
  else if (cVar2 == '\x02') {
    pppppcStack_1f0 = (char *****)*ppppppcVar7[1];
    pppppcStack_c8 = (char *****)0x0;
    pppppcStack_220 = (char *****)0x8000000000000000;
    pppppcStack_b8 = (char *****)0x8000000000000000;
    pppppcStack_c0 = (char *****)ppppppcVar7[1][1];
  }
  else {
    if (cVar2 != '\x01') {
      pppppcStack_220 = (char *****)0x0;
      pppppcStack_1e8 = (char *****)0x0;
      goto LAB_109f58cf0;
    }
    pppppcStack_1f8 = (char *****)*ppppppcVar7[1];
    pppppcStack_b8 = (char *****)0x8000000000000000;
    pppppcStack_c0 = (char *****)0x0;
    pppppcStack_c8 = (char *****)ppppppcVar7[1][1];
    pppppcStack_220 = (char *****)0x8000000000000000;
  }
  while( true ) {
    ppppppcVar8 = &pppppcStack_200;
    FUN_109f5a780(ppppppcVar8,&pppppcStack_d0);
    if (((ulong)ppppppcVar8 & 1) != 0) break;
    ppppppcVar8 = &pppppcStack_200;
    FUN_109f5a648(ppppppcVar8);
    FUN_109f60968();
    pppppcStack_130 = (char *****)0x0;
    FUN_109f60b98();
    pppppcVar27 = pppppcStack_130;
    FUN_109f60968(ppppppcVar8,1);
    pppppcStack_130 = (char *****)0x0;
    FUN_109f60b98();
    pppppcVar4 = pppppcStack_130;
    pppppcVar17 = pppppcStack_160;
    if (pppppcStack_158 < pppppcStack_150) {
      ppppppcVar26 = ppppppcVar23;
      if (ppppppcVar23 == (char ******)pppppcStack_158) {
        *pppppcStack_158 = (char ****)pppppcVar27;
        pppppcStack_158[1] = (char ****)pppppcVar4;
        pppppcStack_158 = pppppcStack_158 + 2;
      }
      else {
        ppppppcVar8 = (char ******)(pppppcStack_158 + -2);
        ppppppcVar21 = (char ******)pppppcStack_158;
        if (ppppppcVar8 < pppppcStack_158) {
          pppppcStack_158[1] = pppppcStack_158[-1];
          *pppppcStack_158 = (char ****)*ppppppcVar8;
          ppppppcVar21 = (char ******)(pppppcStack_158 + 2);
        }
        if ((char ******)pppppcStack_158 != ppppppcVar23 + 2) {
          ppppppcVar20 = (char ******)(pppppcStack_158 + -1);
          do {
            ppppppcVar16 = ppppppcVar8 + -2;
            ppppppcVar20[-1] = *ppppppcVar16;
            *ppppppcVar20 = ppppppcVar8[-1];
            ppppppcVar8 = ppppppcVar16;
            ppppppcVar20 = ppppppcVar20 + -2;
          } while (ppppppcVar16 != ppppppcVar23);
        }
        *ppppppcVar23 = pppppcVar27;
        ppppppcVar23[1] = pppppcVar4;
        pppppcStack_158 = (char *****)ppppppcVar21;
      }
    }
    else {
      uVar14 = ((long)pppppcStack_158 - (long)pppppcStack_160 >> 4) + 1;
      if (uVar14 >> 0x3c != 0) {
        FUN_109f60920();
        goto LAB_109f595b4;
      }
      uVar15 = (long)pppppcStack_150 - (long)pppppcStack_160 >> 3;
      if (uVar15 <= uVar14) {
        uVar15 = uVar14;
      }
      if (0x7fffffffffffffef < (ulong)((long)pppppcStack_150 - (long)pppppcStack_160)) {
        uVar15 = 0xfffffffffffffff;
      }
      if (uVar15 == 0) {
        ppppppcVar8 = (char ******)0x0;
        uVar15 = 0;
      }
      else {
        ppppppcVar8 = &pppppcStack_160;
        FUN_109f60934();
        uVar15 = uVar15 << 4;
      }
      uVar14 = (long)ppppppcVar23 - (long)pppppcVar17;
      ppppppcVar26 = (char ******)((long)ppppppcVar8 + uVar14);
      ppppppcVar21 = (char ******)((long)ppppppcVar8 + uVar15);
      if (uVar14 == uVar15) {
        if ((long)uVar14 < 1) {
          uVar14 = (long)uVar14 >> 3;
          if (ppppppcVar23 == (char ******)pppppcVar17) {
            uVar14 = 1;
          }
          ppppppcVar21 = &pppppcStack_160;
          uVar15 = uVar14;
          FUN_109f60934();
          ppppppcVar26 = ppppppcVar21 + (uVar14 >> 2) * 2;
          ppppppcVar21 = ppppppcVar21 + uVar15 * 2;
          if (ppppppcVar8 != (char ******)0x0) {
            __ZdlPv(ppppppcVar8);
          }
        }
        else {
          ppppppcVar26 = (char ******)
                         ((long)ppppppcVar26 - ((uVar14 >> 1) + 8 & 0xfffffffffffffff0));
        }
      }
      *ppppppcVar26 = pppppcVar27;
      ppppppcVar26[1] = pppppcVar4;
      lVar22 = (long)pppppcStack_158 - (long)ppppppcVar23;
      _memcpy(ppppppcVar26 + 2,ppppppcVar23,lVar22);
      ppppppcVar8 = (char ******)((long)(ppppppcVar26 + 2) + lVar22);
      ppppppcVar20 = (char ******)
                     ((long)ppppppcVar26 - ((long)ppppppcVar23 - (long)pppppcStack_160));
      pppppcStack_158 = (char *****)ppppppcVar23;
      _memcpy(ppppppcVar20);
      bVar1 = (char ******)pppppcStack_160 != (char ******)0x0;
      pppppcStack_160 = (char *****)ppppppcVar20;
      pppppcStack_158 = (char *****)ppppppcVar8;
      pppppcStack_150 = (char *****)ppppppcVar21;
      if (bVar1) {
        __ZdlPv();
      }
    }
    ppppppcVar23 = ppppppcVar26 + 2;
    if (*(char *)ppppppcVar7 == '\x02') {
      pppppcStack_1f0 = pppppcStack_1f0 + 2;
    }
    else if (*(char *)ppppppcVar7 == '\x01') {
      pppppcStack_1f8 = pppppcStack_1f8 + 5;
    }
    else {
      pppppcStack_220 = (char *****)((long)pppppcStack_220 + 1);
      pppppcStack_1e8 = pppppcStack_220;
    }
  }
  if (param_2[9] != 0) {
    param_2[10] = param_2[9];
    __ZdlPv();
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
  }
  param_2[10] = pppppcStack_158;
  param_2[9] = pppppcStack_160;
  param_2[0xb] = pppppcStack_150;
  func_0x000107c31940(auStack_218,&UNK_10f61d5db);
  FUN_109f59c90(param_1,auStack_218);
  if (*(char *)param_1 != '\x02') {
    uVar12 = 0x20;
    ___cxa_allocate_exception(0x20);
    FUN_109f51088(param_1);
    func_0x000107c31940(&pppppcStack_d0,param_1);
    func_0x00010928a5e0(&pppppcStack_200,&UNK_10f56748c,&pppppcStack_d0);
    func_0x00010937bbbc(uVar12,0x12e,&pppppcStack_200);
    ___cxa_throw(uVar12,&PTR_DAT_110af4510,&DAT_10937bd14);
LAB_109f595b4:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x109f595b8);
    (*pcVar5)();
  }
  pppppcStack_f0 = (char *****)0x0;
  pppppcStack_e8 = (char *****)0x0;
  pppppcStack_e0 = (char *****)0x0;
  ppppppcVar7 = param_1;
  FUN_109f50f2c(param_1);
  FUN_109f60c48(&pppppcStack_f0,ppppppcVar7);
  ppppppcVar7 = (char ******)pppppcStack_e8;
  pppppcStack_158 = (char *****)0x0;
  pppppcStack_150 = (char *****)0x0;
  uStack_148 = (char ******)0x8000000000000000;
  cVar2 = *(char *)param_1;
  if (cVar2 == '\0') {
    ppppppcVar23 = (char ******)0x1;
    uStack_148 = (char ******)0x1;
  }
  else {
    if (cVar2 == '\x02') {
      pppppcStack_150 = (char *****)*param_1[1];
      pppcStack_108 = (char ***)0x0;
      ppppppcVar23 = (char ******)0x8000000000000000;
      lStack_f8 = -0x8000000000000000;
      pppcStack_100 = (char ***)param_1[1][1];
      goto LAB_109f5904c;
    }
    if (cVar2 == '\x01') {
      pppppcStack_158 = (char *****)*param_1[1];
      lStack_f8 = -0x8000000000000000;
      pppcStack_100 = (char ***)0x0;
      pppcStack_108 = (char ***)param_1[1][1];
      ppppppcVar23 = (char ******)0x8000000000000000;
      goto LAB_109f5904c;
    }
    ppppppcVar23 = (char ******)0x0;
    uStack_148 = (char ******)0x0;
  }
  pppcStack_108 = (char ***)0x0;
  pppcStack_100 = (char ***)0x0;
  lStack_f8 = 1;
LAB_109f5904c:
  ppppppcVar26 = (char ******)pppppcStack_150;
  ppppppcVar21 = (char ******)pppppcStack_158;
  ppppppcVar8 = &pppppcStack_160;
  pppppcStack_160 = (char *****)param_1;
  pppppcStack_110 = (char *****)param_1;
  FUN_109f5a780(ppppppcVar8,&pppppcStack_110);
  if (((ulong)ppppppcVar8 & 1) == 0) {
    do {
      ppppppcVar8 = &pppppcStack_160;
      FUN_109f5a648(ppppppcVar8);
      pppppcStack_b8 = (char *****)0x0;
      pppppcStack_c0 = (char *****)0x0;
      ppppcStack_a8 = (char ****)0x0;
      pppppcStack_b0 = (char *****)0x0;
      pppppcStack_c8 = (char *****)0x0;
      pppppcStack_d0 = (char *****)0x0;
      ppppppcVar20 = ppppppcVar8;
      FUN_109f60968();
      FUN_109f60d00(&pppppcStack_130,ppppppcVar20);
      FUN_109f60968(ppppppcVar8,1);
      FUN_109f60d00(&pppppcStack_a0,ppppppcVar8);
      pppppcStack_1f8 = pppppcStack_128;
      pppppcStack_200 = pppppcStack_130;
      pppppcStack_1f0 = pppppcStack_120;
      pppppcStack_128 = (char *****)0x0;
      pppppcStack_120 = (char *****)0x0;
      pppppcStack_130 = (char *****)0x0;
      pppppcStack_1e0 = pppppcStack_98;
      pppppcStack_1e8 = pppppcStack_a0;
      pppppcStack_1d8 = pppppcStack_90;
      pppppcStack_a0 = (char *****)0x0;
      pppppcStack_98 = (char *****)0x0;
      pppppcStack_90 = (char *****)0x0;
      FUN_109f60d4c(&pppppcStack_d0,&pppppcStack_200);
      if ((long)pppppcStack_1d8 < 0) {
        __ZdlPv(pppppcStack_1e8);
      }
      if ((long)pppppcStack_1f0 < 0) {
        __ZdlPv(pppppcStack_200);
      }
      if ((long)pppppcStack_120 < 0) {
        __ZdlPv(pppppcStack_130);
      }
      pppppcVar17 = pppppcStack_f0;
      if (pppppcStack_e8 < pppppcStack_e0) {
        ppppppcVar8 = ppppppcVar7;
        if (ppppppcVar7 == (char ******)pppppcStack_e8) {
          pppppcStack_e8[2] = (char ****)pppppcStack_c0;
          pppppcStack_e8[1] = (char ****)pppppcStack_c8;
          *pppppcStack_e8 = (char ****)pppppcStack_d0;
          pppppcStack_c8 = (char *****)0x0;
          pppppcStack_c0 = (char *****)0x0;
          pppppcStack_d0 = (char *****)0x0;
          pppppcStack_e8[4] = (char ****)pppppcStack_b0;
          pppppcStack_e8[3] = (char ****)pppppcStack_b8;
          pppppcStack_e8[5] = ppppcStack_a8;
          pppppcStack_b0 = (char *****)0x0;
          ppppcStack_a8 = (char ****)0x0;
          pppppcStack_b8 = (char *****)0x0;
          pppppcStack_e8 = pppppcStack_e8 + 6;
        }
        else {
          func_0x0001089f98d8(&pppppcStack_f0,ppppppcVar7,pppppcStack_e8,ppppppcVar7 + 6);
          FUN_109f60d4c(ppppppcVar7,&pppppcStack_d0);
        }
      }
      else {
        uVar14 = ((long)pppppcStack_e8 - (long)pppppcStack_f0 >> 4) * -0x5555555555555555 + 1;
        if (0x555555555555555 < uVar14) {
          func_0x0001092d32dc();
          goto LAB_109f595b4;
        }
        lVar22 = (long)pppppcStack_e0 - (long)pppppcStack_f0 >> 4;
        uVar15 = lVar22 * 0x5555555555555556;
        if (uVar15 < uVar14 || uVar15 - uVar14 == 0) {
          uVar15 = uVar14;
        }
        if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar22 * -0x5555555555555555)) {
          uVar15 = 0x555555555555555;
        }
        pppppcStack_1e0 = (char *****)&pppppcStack_f0;
        if (uVar15 == 0) {
          ppppppcVar8 = (char ******)0x0;
        }
        else {
          ppppppcVar8 = &pppppcStack_f0;
          func_0x0001092d32f0();
        }
        pppppcStack_1f8 = (char *****)((long)ppppppcVar8 + ((long)ppppppcVar7 - (long)pppppcVar17));
        pppppcStack_1e8 = (char *****)(ppppppcVar8 + uVar15 * 6);
        pppppcStack_200 = (char *****)ppppppcVar8;
        pppppcStack_1f0 = pppppcStack_1f8;
        func_0x0001089f99b0(&pppppcStack_200,&pppppcStack_d0);
        ppppppcVar8 = (char ******)pppppcStack_1f8;
        _memcpy(pppppcStack_1f0,ppppppcVar7,(long)pppppcStack_e8 - (long)ppppppcVar7);
        pppppcStack_1f0 =
             (char *****)((long)pppppcStack_1f0 + ((long)pppppcStack_e8 - (long)ppppppcVar7));
        ppppppcVar20 = (char ******)
                       ((long)pppppcStack_1f8 - ((long)ppppppcVar7 - (long)pppppcStack_f0));
        pppppcStack_e8 = (char *****)ppppppcVar7;
        _memcpy(ppppppcVar20);
        pppppcVar17 = pppppcStack_e0;
        pppppcStack_e0 = pppppcStack_1e8;
        pppppcStack_e8 = pppppcStack_1f0;
        pppppcStack_1f0 = pppppcStack_f0;
        pppppcStack_1e8 = pppppcVar17;
        pppppcStack_200 = pppppcStack_f0;
        pppppcStack_1f8 = pppppcStack_f0;
        pppppcStack_f0 = (char *****)ppppppcVar20;
        func_0x000107c31958(&pppppcStack_200);
      }
      if (*(char *)param_1 == '\x02') {
        ppppppcVar26 = ppppppcVar26 + 2;
        pppppcStack_150 = (char *****)ppppppcVar26;
      }
      else if (*(char *)param_1 == '\x01') {
        ppppppcVar21 = ppppppcVar21 + 5;
        pppppcStack_158 = (char *****)ppppppcVar21;
      }
      else {
        ppppppcVar23 = (char ******)((long)ppppppcVar23 + 1);
        uStack_148 = ppppppcVar23;
      }
      ppppppcVar20 = &pppppcStack_160;
      FUN_109f5a780(ppppppcVar20,&pppppcStack_110);
      ppppppcVar7 = ppppppcVar8 + 6;
    } while (((ulong)ppppppcVar20 & 1) == 0);
  }
  FUN_109f60dc0(param_2 + 0xc);
  param_2[0xd] = pppppcStack_e8;
  param_2[0xc] = pppppcStack_f0;
  param_2[0xe] = pppppcStack_e0;
  pppppcStack_e8 = (char *****)0x0;
  pppppcStack_e0 = (char *****)0x0;
  pppppcStack_f0 = (char *****)0x0;
  pppppcStack_200 = (char *****)&pppppcStack_f0;
  func_0x0001092d2d9c(&pppppcStack_200);
  if (cStack_201 < '\0') {
    __ZdlPv(auStack_218[0]);
  }
  return;
}



/* Entry: 109f59c90; end: 109f59f37;  */

undefined8 * FUN_109f59c90(char *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte bVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  if (*param_1 == '\x01') {
    puVar10 = (undefined8 *)**(long **)(param_1 + 8);
    puVar3 = (undefined8 *)(*(long **)(param_1 + 8))[1];
    if (puVar10 != puVar3) {
      uVar5 = param_2[1];
      puVar1 = (undefined8 *)*param_2;
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        uVar5 = (ulong)*(byte *)((long)param_2 + 0x17);
        puVar1 = param_2;
      }
      do {
        bVar4 = *(byte *)((long)puVar10 + 0x17);
        uVar2 = puVar10[1];
        if (-1 < (char)bVar4) {
          uVar2 = (ulong)bVar4;
        }
        if (uVar2 == uVar5) {
          puVar7 = (undefined8 *)*puVar10;
          if (-1 < (char)bVar4) {
            puVar7 = puVar10;
          }
          _memcmp(puVar7,puVar1,uVar5);
          if ((int)puVar7 == 0) {
            return puVar10 + 3;
          }
        }
        puVar10 = puVar10 + 5;
      } while (puVar10 != puVar3);
    }
    plVar8 = (long *)0x10;
    ___cxa_allocate_exception();
    __ZNSt11logic_errorC2EPKc();
    *plVar8 = (long)(PTR___ZTVSt12out_of_range_110346b60 + 0x10);
    ___cxa_throw(plVar8,PTR___ZTISt12out_of_range_110352240,PTR___ZNSt12out_of_rangeD1Ev_110346180);
  }
  else {
    uVar9 = 0x20;
    ___cxa_allocate_exception(0x20);
    FUN_109f51088(param_1);
    func_0x000107c31940(auStack_70,param_1);
    func_0x00010928a5e0(auStack_58,&UNK_10f56caf4,auStack_70);
    func_0x00010937bbbc(uVar9,0x130,auStack_58);
    ___cxa_throw(uVar9,&PTR_DAT_110af4510,&DAT_10937bd14);
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109f59e84);
  (*pcVar6)();
}



/* Entry: 109f59f38; end: 109f59f4b;  */

void FUN_109f59f38(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (0x1af286bca1af286 < param_2) {
    func_0x000104c4f740();
    uVar1 = param_2;
    if (param_2 != param_3) {
      do {
        FUN_109f59ffc(param_4,uVar1);
        uVar1 = uVar1 + 0x98;
        param_4 = param_4 + 0x98;
      } while (uVar1 != param_3);
      do {
        FUN_109f5a0c8(param_2);
        param_2 = param_2 + 0x98;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm(param_2 * 0x98);
  return;
}



/* Entry: 109f59f4c; end: 109f59f93;  */

void FUN_109f59f4c(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  
  if (0x1af286bca1af286 < param_2) {
    func_0x000104c4f740();
    uVar1 = param_2;
    if (param_2 != param_3) {
      do {
        FUN_109f59ffc(param_4,uVar1);
        uVar1 = uVar1 + 0x98;
        param_4 = param_4 + 0x98;
      } while (uVar1 != param_3);
      do {
        FUN_109f5a0c8(param_2);
        param_2 = param_2 + 0x98;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm(param_2 * 0x98);
  return;
}



/* Entry: 109f59f94; end: 109f59ffb;  */

void FUN_109f59f94(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  lVar1 = param_2;
  if (param_2 != param_3) {
    do {
      FUN_109f59ffc(param_4,lVar1);
      lVar1 = lVar1 + 0x98;
      param_4 = param_4 + 0x98;
    } while (lVar1 != param_3);
    do {
      FUN_109f5a0c8(param_2);
      param_2 = param_2 + 0x98;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 109f59ffc; end: 109f5a0c7;  */

void FUN_109f59ffc(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = uVar1;
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x14) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1a) = uVar1;
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_2 + 0x1a) = 0;
  *(undefined8 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x22) = 0;
  *(undefined8 *)(param_2 + 0x24) = 0;
  return;
}



/* Entry: 109f5a0c8; end: 109f5a213;  */

void FUN_109f5a0c8(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x80;
  func_0x000109f5a1d4(&lStack_28);
  lStack_28 = param_1 + 0x68;
  FUN_109f5a260(&lStack_28);
  lStack_28 = param_1 + 0x50;
  FUN_109f5a2ec(&lStack_28);
  lStack_28 = param_1 + 0x38;
  FUN_109f5a378(&lStack_28);
  lStack_28 = param_1 + 0x20;
  func_0x000109f5a404(&lStack_28);
  lStack_28 = param_1 + 8;
  FUN_109f5a500(&lStack_28);
  return;
}



/* Entry: 109f5a214; end: 109f5a25f;  */

/* WARNING: Removing unreachable block (ram,0x000109f5a240) */

void FUN_109f5a214(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x20) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 109f5a260; end: 109f5a29f;  */

void FUN_109f5a260(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_109f5a2a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 109f5a2a0; end: 109f5a2eb;  */

/* WARNING: Removing unreachable block (ram,0x000109f5a2cc) */

void FUN_109f5a2a0(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x28) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 109f5a2ec; end: 109f5a32b;  */

void FUN_109f5a2ec(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_109f5a32c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 109f5a32c; end: 109f5a377;  */

/* WARNING: Removing unreachable block (ram,0x000109f5a358) */

void FUN_109f5a32c(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x20) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 109f5a378; end: 109f5a3b7;  */

void FUN_109f5a378(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_109f5a3b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 109f5a3b8; end: 109f5a473;  */

/* WARNING: Removing unreachable block (ram,0x000109f5a3e4) */

void FUN_109f5a3b8(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x20) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 109f5a474; end: 109f5a4ff;  */

void FUN_109f5a474(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 5;
  func_0x000109f48c10(&puStack_28);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return;
}



/* Entry: 109f5a500; end: 109f5a56f;  */

void FUN_109f5a500(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x38;
        FUN_109f5a570(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109f5a570; end: 109f5a647;  */

void FUN_109f5a570(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 4;
  func_0x000109f48c10(&puStack_28);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return;
}



/* Entry: 109f5a648; end: 109f5a77f;  */

char * FUN_109f5a648(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 auStack_48 [24];
  
  cVar1 = *(char *)*param_1;
  if (cVar1 == '\x01') {
    pcVar4 = (char *)(param_1[1] + 0x18);
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 == '\0') {
        uVar3 = 0x20;
        ___cxa_allocate_exception(0x20);
        func_0x000107c31940(auStack_48,&UNK_10f567425);
        func_0x00010937951c(uVar3,0xd6,auStack_48);
        ___cxa_throw(uVar3,&PTR_DAT_110af4550,&DAT_10937964c);
      }
      else {
        if (param_1[3] == 0) {
          return (char *)*param_1;
        }
        uVar3 = 0x20;
        ___cxa_allocate_exception(0x20);
        func_0x000107c31940(auStack_48,&UNK_10f567425);
        func_0x00010937951c(uVar3,0xd6,auStack_48);
        ___cxa_throw(uVar3,&PTR_DAT_110af4550,&DAT_10937964c);
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109f5a748);
      (*pcVar2)();
    }
    pcVar4 = (char *)param_1[2];
  }
  return pcVar4;
}



/* Entry: 109f5a780; end: 109f5a87b;  */

bool FUN_109f5a780(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_48 [24];
  
  if ((char *)*param_1 == (char *)*param_2) {
    cVar1 = *(char *)*param_1;
    if (cVar1 == '\x02') {
      lVar4 = param_1[2];
      lVar5 = param_2[2];
    }
    else if (cVar1 == '\x01') {
      lVar4 = param_1[1];
      lVar5 = param_2[1];
    }
    else {
      lVar4 = param_1[3];
      lVar5 = param_2[3];
    }
    return lVar4 == lVar5;
  }
  uVar3 = 0x20;
  ___cxa_allocate_exception(0x20);
  func_0x000107c31940(auStack_48,&UNK_10f5673d2);
  func_0x00010937951c(uVar3,0xd4,auStack_48);
  ___cxa_throw(uVar3,&PTR_DAT_110af4550,&DAT_10937964c);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109f5a844);
  (*pcVar2)();
}



/* Entry: 109f5a87c; end: 109f5da57;  */

/* WARNING: Removing unreachable block (ram,0x000109f5bae0) */
/* WARNING: Removing unreachable block (ram,0x000109f5b4d4) */
/* WARNING: Removing unreachable block (ram,0x000109f5b38c) */
/* WARNING: Removing unreachable block (ram,0x000109f5b324) */
/* WARNING: Removing unreachable block (ram,0x000109f5ab60) */
/* WARNING: Removing unreachable block (ram,0x000109f5aaf8) */
/* WARNING: Removing unreachable block (ram,0x000109f5aac4) */
/* WARNING: Removing unreachable block (ram,0x000109f5ab2c) */
/* WARNING: Removing unreachable block (ram,0x000109f5ac04) */
/* WARNING: Removing unreachable block (ram,0x000109f5b358) */
/* WARNING: Removing unreachable block (ram,0x000109f5b404) */
/* WARNING: Removing unreachable block (ram,0x000109f5c098) */
/* WARNING: Removing unreachable block (ram,0x000109f5ce38) */
/* WARNING: Removing unreachable block (ram,0x000109f5b438) */
/* WARNING: Removing unreachable block (ram,0x000109f5c6e0) */

void FUN_109f5a87c(char *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char **ppcVar8;
  undefined8 ****ppppuVar9;
  char **ppcVar10;
  undefined4 *puVar11;
  undefined8 ****ppppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 ****ppppuVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 ****ppppuVar21;
  undefined8 ****ppppuVar22;
  undefined8 ***pppuVar23;
  long lVar24;
  undefined8 ****ppppuVar25;
  undefined4 *puVar26;
  long lVar27;
  long lVar28;
  undefined8 ***pppuVar29;
  long lStack_1b0;
  long lStack_198;
  undefined8 auStack_190 [2];
  char cStack_179;
  undefined8 ***pppuStack_178;
  undefined8 ***pppuStack_170;
  undefined8 ***pppuStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 **ppuStack_140;
  undefined8 ***pppuStack_138;
  undefined8 ***pppuStack_130;
  undefined8 ***pppuStack_128;
  undefined8 uStack_120;
  undefined8 ***pppuStack_118;
  char *pcStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  char *pcStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 ***pppuStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 ***pppuStack_a8;
  undefined8 ***pppuStack_a0;
  undefined8 ***pppuStack_98;
  undefined8 ***pppuStack_90;
  undefined8 ***pppuStack_88;
  
  func_0x000107c31940(&pppuStack_178,&DAT_10f491dce);
  FUN_109f59c90(param_1,&pppuStack_178);
  FUN_109f5da58();
  if ((long)pppuStack_168 < 0) {
    __ZdlPv(pppuStack_178);
  }
  func_0x000107c31940(auStack_190,&UNK_10f61d5f3);
  pcVar6 = param_1;
  FUN_109f59c90(param_1,auStack_190);
  if (*pcVar6 != '\x02') {
    uVar16 = 0x20;
    ___cxa_allocate_exception(0x20);
    FUN_109f51088(pcVar6);
    func_0x000107c31940(&pppuStack_a8,pcVar6);
    func_0x00010928a5e0(&pppuStack_178,&UNK_10f56748c,&pppuStack_a8);
    func_0x00010937bbbc(uVar16,0x12e,&pppuStack_178);
    ___cxa_throw(uVar16,&PTR_DAT_110af4510,&DAT_10937bd14);
    goto LAB_109f5d50c;
  }
  pppuStack_d0 = (undefined8 ****)0x0;
  pppuStack_c8 = (undefined8 ****)0x0;
  pppuStack_c0 = (undefined8 ****)0x0;
  pcVar7 = pcVar6;
  FUN_109f50f2c();
  if (pcVar7 != (char *)0x0) {
    if ((char *)0x492492492492492 < pcVar7) {
      FUN_109f5db8c();
      goto LAB_109f5d50c;
    }
    uStack_158 = &pppuStack_d0;
    ppppuVar15 = &pppuStack_d0;
    FUN_109f5dba0();
    ppppuVar25 = (undefined8 ****)((long)ppppuVar15 + ((long)pppuStack_d0 - (long)pppuStack_c8));
    pppuStack_178 = ppppuVar15;
    pppuStack_170 = ppppuVar15;
    pppuStack_168 = ppppuVar15;
    uStack_160 = ppppuVar15 + (long)pcVar7 * 7;
    func_0x000109f5dbe8(&pppuStack_d0,pppuStack_d0,pppuStack_c8,ppppuVar25);
    pppuStack_168 = pppuStack_d0;
    uStack_160._0_4_ = SUB84(pppuStack_c0,0);
    uStack_160._4_4_ = (undefined4)((ulong)pppuStack_c0 >> 0x20);
    pppuStack_178 = pppuStack_d0;
    pppuStack_170 = pppuStack_d0;
    pppuStack_d0 = ppppuVar25;
    pppuStack_c8 = ppppuVar15;
    pppuStack_c0 = ppppuVar15 + (long)pcVar7 * 7;
    func_0x000109f5dc74(&pppuStack_178);
  }
  ppppuVar25 = (undefined8 ****)pppuStack_c8;
  lStack_e8 = 0;
  lStack_e0 = 0;
  lStack_d8 = -0x8000000000000000;
  cVar1 = *pcVar6;
  if (cVar1 == '\0') {
    lVar28 = 1;
    lStack_d8 = 1;
LAB_109f5aa28:
    lStack_108 = 0;
    lStack_100 = 0;
    uStack_f8 = 1;
  }
  else if (cVar1 == '\x02') {
    lStack_e0 = **(long **)(pcVar6 + 8);
    lStack_108 = 0;
    lVar28 = -0x8000000000000000;
    uStack_f8 = 0x8000000000000000;
    lStack_100 = (*(long **)(pcVar6 + 8))[1];
  }
  else {
    if (cVar1 != '\x01') {
      lVar28 = 0;
      lStack_d8 = 0;
      goto LAB_109f5aa28;
    }
    lStack_e8 = **(long **)(pcVar6 + 8);
    uStack_f8 = 0x8000000000000000;
    lStack_100 = 0;
    lStack_108 = (*(long **)(pcVar6 + 8))[1];
    lVar28 = -0x8000000000000000;
  }
  lVar27 = lStack_e0;
  lVar24 = lStack_e8;
  ppcVar8 = &pcStack_f0;
  pcStack_110 = pcVar6;
  pcStack_f0 = pcVar6;
  FUN_109f5a780(ppcVar8,&pcStack_110);
  if (((ulong)ppcVar8 & 1) == 0) {
    do {
      ppcVar8 = &pcStack_f0;
      FUN_109f5a648(ppcVar8);
      pppuStack_178 = (undefined8 ****)0x0;
      pppuStack_170 = (undefined8 ****)0x0;
      pppuStack_168 = (undefined8 ****)0x0;
      uStack_160._0_4_ = 0xffffffff;
      uStack_160._4_4_ = 0;
      uStack_158._0_4_ = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      uStack_158._4_4_ = 0;
      uStack_150 = 0;
      uStack_144 = 0;
      func_0x000107c31940(&pppuStack_a8,&DAT_10f68f148);
      FUN_109f59c90(ppcVar8,&pppuStack_a8);
      FUN_109f5dcc0();
      func_0x000107c31940(&pppuStack_a8,&DAT_10f491dce);
      FUN_109f59c90(ppcVar8,&pppuStack_a8);
      FUN_109f5da58();
      func_0x000107c31940(&pppuStack_a8,&DAT_10f68f0dc);
      FUN_109f59c90(ppcVar8,&pppuStack_a8);
      FUN_109f5da58();
      func_0x000107c31940(&pppuStack_a8,&UNK_10f61d63f);
      FUN_109f59c90(ppcVar8,&pppuStack_a8);
      FUN_109f5ddc4();
      pppuVar29 = pppuStack_c8;
      pppuVar23 = pppuStack_d0;
      if (pppuStack_c8 < pppuStack_c0) {
        ppppuVar9 = ppppuVar25;
        if (ppppuVar25 == (undefined8 ****)pppuStack_c8) {
          pppuStack_c8[2] = pppuStack_168;
          pppuStack_c8[1] = pppuStack_170;
          *pppuStack_c8 = pppuStack_178;
          pppuStack_170 = (undefined8 ****)0x0;
          pppuStack_168 = (undefined8 ****)0x0;
          pppuStack_178 = (undefined8 ****)0x0;
          pppuStack_c8[3] = (undefined8 ***)CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
          pppuStack_c8[4] = (undefined8 ***)0x0;
          pppuStack_c8[5] = (undefined8 ***)0x0;
          pppuStack_c8[6] = (undefined8 ***)0x0;
          pppuStack_c8[5] = (undefined8 ***)CONCAT44(uStack_14c,uStack_150);
          pppuStack_c8[4] = (undefined8 ***)CONCAT44(uStack_158._4_4_,(undefined4)uStack_158);
          pppuStack_c8[6] = (undefined8 ***)CONCAT44(uStack_144,uStack_148);
          uStack_158._0_4_ = 0;
          uStack_158._4_4_ = 0;
          uStack_150 = 0;
          uStack_14c = 0;
          uStack_148 = 0;
          uStack_144 = 0;
          pppuStack_c8 = pppuStack_c8 + 7;
        }
        else {
          ppppuVar12 = (undefined8 ****)(pppuStack_c8 + -7);
          ppppuVar15 = (undefined8 ****)pppuStack_c8;
          if (ppppuVar12 < pppuStack_c8) {
            ppppuVar15 = (undefined8 ****)(pppuStack_c8 + 7);
            pppuStack_c8[2] = pppuStack_c8[-5];
            pppuStack_c8[1] = pppuStack_c8[-6];
            *pppuStack_c8 = *ppppuVar12;
            pppuStack_c8[-6] = (undefined8 ***)0x0;
            pppuStack_c8[-5] = (undefined8 ***)0x0;
            *ppppuVar12 = (undefined8 ***)0x0;
            pppuStack_c8[5] = (undefined8 ***)0x0;
            pppuStack_c8[6] = (undefined8 ***)0x0;
            pppuStack_c8[3] = pppuStack_c8[-4];
            pppuStack_c8[4] = (undefined8 ***)0x0;
            pppuStack_c8[5] = pppuStack_c8[-2];
            pppuStack_c8[4] = pppuStack_c8[-3];
            pppuStack_c8[6] = pppuStack_c8[-1];
            pppuStack_c8[-3] = (undefined8 ***)0x0;
            pppuStack_c8[-2] = (undefined8 ***)0x0;
            pppuStack_c8[-1] = (undefined8 ***)0x0;
          }
          bVar4 = (undefined8 ****)pppuStack_c8 != ppppuVar25 + 7;
          pppuStack_c8 = ppppuVar15;
          if (bVar4) {
            lVar18 = 0;
            do {
              puVar17 = (undefined8 *)((long)pppuVar29 + lVar18 + -0x70);
              *(undefined8 *)((long)pppuVar29 + lVar18 + -0x28) =
                   *(undefined8 *)((long)pppuVar29 + lVar18 + -0x60);
              *(undefined8 *)((long)pppuVar29 + lVar18 + -0x30) =
                   *(undefined8 *)((long)pppuVar29 + lVar18 + -0x68);
              *(undefined8 *)((long)pppuVar29 + lVar18 + -0x38) = *puVar17;
              *(undefined1 *)((long)pppuVar29 + lVar18 + -0x59) = 0;
              *(undefined1 *)puVar17 = 0;
              *(undefined8 *)((long)pppuVar29 + lVar18 + -0x20) =
                   *(undefined8 *)((long)pppuVar29 + lVar18 + -0x58);
              FUN_109f5f240((long)pppuVar29 + lVar18 + -0x18);
              *(undefined8 *)((long)pppuVar29 + lVar18 + -0x10) =
                   *(undefined8 *)((long)pppuVar29 + lVar18 + -0x48);
              *(undefined8 *)((long)pppuVar29 + lVar18 + -0x18) =
                   *(undefined8 *)((long)pppuVar29 + lVar18 + -0x50);
              *(undefined8 *)((long)pppuVar29 + lVar18 + -8) =
                   *(undefined8 *)((long)pppuVar29 + lVar18 + -0x40);
              *(undefined8 *)((long)pppuVar29 + lVar18 + -0x50) = 0;
              *(undefined8 *)((long)pppuVar29 + lVar18 + -0x48) = 0;
              *(undefined8 *)((long)pppuVar29 + lVar18 + -0x40) = 0;
              lVar2 = lVar18 + -0x70;
              lVar18 = lVar18 + -0x38;
            } while ((undefined8 ****)((long)pppuVar29 + lVar2) != ppppuVar25);
          }
          if (*(char *)((long)ppppuVar25 + 0x17) < '\0') {
            __ZdlPv(*ppppuVar25);
          }
          ppppuVar25[2] = pppuStack_168;
          ppppuVar25[1] = pppuStack_170;
          *ppppuVar25 = pppuStack_178;
          pppuStack_168 = (undefined8 ***)((ulong)pppuStack_168 & 0xffffffffffffff);
          pppuStack_178 = (undefined8 ***)((ulong)pppuStack_178 & 0xffffffffffffff00);
          ppppuVar25[3] = (undefined8 ***)CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
          FUN_109f5f240(ppppuVar25 + 4);
          ppppuVar25[5] = (undefined8 ***)CONCAT44(uStack_14c,uStack_150);
          ppppuVar25[4] = (undefined8 ***)CONCAT44(uStack_158._4_4_,(undefined4)uStack_158);
          ppppuVar25[6] = (undefined8 ***)CONCAT44(uStack_144,uStack_148);
          uStack_158._0_4_ = 0;
          uStack_158._4_4_ = 0;
          uStack_150 = 0;
          uStack_14c = 0;
          uStack_148 = 0;
          uStack_144 = 0;
        }
      }
      else {
        uVar19 = ((long)pppuStack_c8 - (long)pppuStack_d0 >> 3) * 0x6db6db6db6db6db7 + 1;
        if (0x492492492492492 < uVar19) {
          FUN_109f5db8c();
          goto LAB_109f5d50c;
        }
        lVar18 = (long)pppuStack_c0 - (long)pppuStack_d0 >> 3;
        uVar20 = lVar18 * -0x2492492492492492;
        if (uVar20 < uVar19 || uVar20 - uVar19 == 0) {
          uVar20 = uVar19;
        }
        if (0x249249249249248 < (ulong)(lVar18 * 0x6db6db6db6db6db7)) {
          uVar20 = 0x492492492492492;
        }
        pppuStack_118 = &pppuStack_d0;
        if (uVar20 == 0) {
          ppppuVar15 = (undefined8 ****)0x0;
          uVar20 = 0;
        }
        else {
          ppppuVar15 = &pppuStack_d0;
          FUN_109f5dba0();
          uVar20 = uVar20 * 0x38;
        }
        uVar19 = (long)ppppuVar25 - (long)pppuVar23;
        pppuStack_130 = (undefined8 ***)((long)ppppuVar15 + uVar19);
        uStack_120 = (undefined8 ****)((long)ppppuVar15 + uVar20);
        pppuStack_138 = ppppuVar15;
        pppuStack_128 = pppuStack_130;
        if (uVar19 == uVar20) {
          if ((long)uVar19 < 1) {
            uVar20 = 1;
            if (ppppuVar25 != (undefined8 ****)pppuVar23) {
              uVar20 = (-uVar19 >> 3) * 0x2492492492492492;
            }
            pppuStack_88 = &pppuStack_d0;
            ppppuVar9 = &pppuStack_d0;
            uVar19 = uVar20;
            FUN_109f5dba0();
            ppppuVar12 = ppppuVar9 + (uVar20 >> 2) * 7;
            ppppuVar15 = ppppuVar12;
            if ((long)pppuStack_128 - (long)pppuStack_130 != 0) {
              ppppuVar15 = (undefined8 ****)
                           ((long)ppppuVar12 + ((long)pppuStack_128 - (long)pppuStack_130));
              ppppuVar21 = ppppuVar12;
              ppppuVar22 = (undefined8 ****)pppuStack_130;
              do {
                pppuVar29 = ppppuVar22[1];
                pppuVar23 = *ppppuVar22;
                ppppuVar21[2] = ppppuVar22[2];
                ppppuVar21[1] = pppuVar29;
                *ppppuVar21 = pppuVar23;
                ppppuVar22[1] = (undefined8 ***)0x0;
                ppppuVar22[2] = (undefined8 ***)0x0;
                *ppppuVar22 = (undefined8 ***)0x0;
                pppuVar23 = ppppuVar22[3];
                ppppuVar21[5] = (undefined8 ***)0x0;
                ppppuVar21[6] = (undefined8 ***)0x0;
                ppppuVar21[3] = pppuVar23;
                ppppuVar21[4] = (undefined8 ***)0x0;
                pppuVar23 = ppppuVar22[4];
                ppppuVar21[5] = ppppuVar22[5];
                ppppuVar21[4] = pppuVar23;
                ppppuVar21[6] = ppppuVar22[6];
                ppppuVar22[4] = (undefined8 ***)0x0;
                ppppuVar22[5] = (undefined8 ***)0x0;
                ppppuVar22[6] = (undefined8 ***)0x0;
                ppppuVar21 = ppppuVar21 + 7;
                ppppuVar22 = ppppuVar22 + 7;
              } while (ppppuVar21 != ppppuVar15);
            }
            pppuStack_a8 = pppuStack_138;
            pppuStack_a0 = pppuStack_130;
            pppuStack_98 = pppuStack_128;
            pppuStack_90 = uStack_120;
            pppuStack_138 = ppppuVar9;
            pppuStack_130 = ppppuVar12;
            pppuStack_128 = ppppuVar15;
            uStack_120 = ppppuVar9 + uVar19 * 7;
            func_0x000109f5dc74(&pppuStack_a8);
          }
          else {
            pppuStack_130 = pppuStack_130 + ((uVar19 >> 3) * 0x6db6db6db6db6db7 + 1 >> 1) * -7;
            pppuStack_128 = pppuStack_130;
          }
        }
        ppppuVar9 = (undefined8 ****)pppuStack_130;
        pppuStack_128[2] = pppuStack_168;
        pppuStack_128[1] = pppuStack_170;
        *pppuStack_128 = pppuStack_178;
        pppuStack_170 = (undefined8 ****)0x0;
        pppuStack_168 = (undefined8 ****)0x0;
        pppuStack_178 = (undefined8 ****)0x0;
        pppuStack_128[3] = (undefined8 ***)CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
        pppuStack_128[4] = (undefined8 ***)0x0;
        pppuStack_128[5] = (undefined8 ***)0x0;
        pppuStack_128[6] = (undefined8 ***)0x0;
        pppuStack_128[5] = (undefined8 ***)CONCAT44(uStack_14c,uStack_150);
        pppuStack_128[4] = (undefined8 ***)CONCAT44(uStack_158._4_4_,(undefined4)uStack_158);
        pppuStack_128[6] = (undefined8 ***)CONCAT44(uStack_144,uStack_148);
        uStack_158._0_4_ = 0;
        uStack_158._4_4_ = 0;
        uStack_150 = 0;
        uStack_14c = 0;
        uStack_148 = 0;
        uStack_144 = 0;
        pppuStack_128 = pppuStack_128 + 7;
        func_0x000109f5dbe8(&pppuStack_d0,ppppuVar25,pppuStack_c8);
        pppuStack_128 =
             (undefined8 ***)((long)pppuStack_128 + ((long)pppuStack_c8 - (long)ppppuVar25));
        ppppuVar15 = (undefined8 ****)
                     ((long)pppuStack_130 + ((long)pppuStack_d0 - (long)ppppuVar25));
        pppuStack_c8 = ppppuVar25;
        func_0x000109f5dbe8(&pppuStack_d0,pppuStack_d0,ppppuVar25,ppppuVar15);
        pppuVar23 = pppuStack_c0;
        pppuStack_c0 = uStack_120;
        pppuStack_c8 = pppuStack_128;
        pppuStack_128 = pppuStack_d0;
        uStack_120 = (undefined8 ****)pppuVar23;
        pppuStack_138 = pppuStack_d0;
        pppuStack_130 = pppuStack_d0;
        pppuStack_d0 = ppppuVar15;
        func_0x000109f5dc74(&pppuStack_138);
      }
      pppuStack_a8 = (undefined8 ***)&uStack_158;
      func_0x000109f48c10(&pppuStack_a8);
      if ((long)pppuStack_168 < 0) {
        __ZdlPv(pppuStack_178);
      }
      if (*pcVar6 == '\x02') {
        lVar27 = lVar27 + 0x10;
        lStack_e0 = lVar27;
      }
      else if (*pcVar6 == '\x01') {
        lVar24 = lVar24 + 0x28;
        lStack_e8 = lVar24;
      }
      else {
        lVar28 = lVar28 + 1;
        lStack_d8 = lVar28;
      }
      ppcVar8 = &pcStack_f0;
      FUN_109f5a780(ppcVar8,&pcStack_110);
      ppppuVar25 = ppppuVar9 + 7;
    } while (((ulong)ppcVar8 & 1) == 0);
  }
  FUN_109f5f278(param_2 + 8);
  *(undefined8 ****)(param_2 + 0x10) = pppuStack_c8;
  *(undefined8 ****)(param_2 + 8) = pppuStack_d0;
  *(undefined8 ****)(param_2 + 0x18) = pppuStack_c0;
  pppuStack_c8 = (undefined8 ****)0x0;
  pppuStack_c0 = (undefined8 ****)0x0;
  pppuStack_d0 = (undefined8 ****)0x0;
  pppuStack_178 = &pppuStack_d0;
  FUN_109f5a500(&pppuStack_178);
  if (cStack_179 < '\0') {
    __ZdlPv(auStack_190[0]);
  }
  func_0x000107c31940(auStack_190,&UNK_10f61d602);
  pcVar6 = param_1;
  FUN_109f59c90(param_1,auStack_190);
  if (*pcVar6 != '\x02') {
    uVar16 = 0x20;
    ___cxa_allocate_exception(0x20);
    FUN_109f51088(pcVar6);
    func_0x000107c31940(&pppuStack_a8,pcVar6);
    func_0x00010928a5e0(&pppuStack_178,&UNK_10f56748c,&pppuStack_a8);
    func_0x00010937bbbc(uVar16,0x12e,&pppuStack_178);
    ___cxa_throw(uVar16,&PTR_DAT_110af4510,&DAT_10937bd14);
    goto LAB_109f5d50c;
  }
  pppuStack_d0 = (undefined8 ****)0x0;
  pppuStack_c8 = (undefined8 ****)0x0;
  pppuStack_c0 = (undefined8 ****)0x0;
  pcVar7 = pcVar6;
  FUN_109f50f2c();
  if (pcVar7 != (char *)0x0) {
    if ((ulong)pcVar7 >> 0x3a != 0) {
      FUN_109f5f2dc();
      goto LAB_109f5d50c;
    }
    uStack_158 = &pppuStack_d0;
    ppppuVar15 = &pppuStack_d0;
    FUN_109f5f2f0();
    ppppuVar25 = (undefined8 ****)((long)ppppuVar15 + ((long)pppuStack_d0 - (long)pppuStack_c8));
    pppuStack_178 = ppppuVar15;
    pppuStack_170 = ppppuVar15;
    pppuStack_168 = ppppuVar15;
    uStack_160 = ppppuVar15 + (long)pcVar7 * 8;
    func_0x000109f5f324(&pppuStack_d0,pppuStack_d0,pppuStack_c8,ppppuVar25);
    pppuStack_168 = pppuStack_d0;
    uStack_160._0_4_ = SUB84(pppuStack_c0,0);
    uStack_160._4_4_ = (undefined4)((ulong)pppuStack_c0 >> 0x20);
    pppuStack_178 = pppuStack_d0;
    pppuStack_170 = pppuStack_d0;
    pppuStack_d0 = ppppuVar25;
    pppuStack_c8 = ppppuVar15;
    pppuStack_c0 = ppppuVar15 + (long)pcVar7 * 8;
    func_0x000109f5f3bc(&pppuStack_178);
  }
  ppppuVar25 = (undefined8 ****)pppuStack_c8;
  lStack_e8 = 0;
  lStack_e0 = 0;
  lStack_d8 = -0x8000000000000000;
  cVar1 = *pcVar6;
  if (cVar1 == '\0') {
    lVar28 = 1;
    lStack_d8 = 1;
LAB_109f5b158:
    lStack_108 = 0;
    lStack_100 = 0;
    uStack_f8 = 1;
  }
  else if (cVar1 == '\x02') {
    lStack_e0 = **(long **)(pcVar6 + 8);
    lStack_108 = 0;
    lVar28 = -0x8000000000000000;
    uStack_f8 = 0x8000000000000000;
    lStack_100 = (*(long **)(pcVar6 + 8))[1];
  }
  else {
    if (cVar1 != '\x01') {
      lVar28 = 0;
      lStack_d8 = 0;
      goto LAB_109f5b158;
    }
    lStack_e8 = **(long **)(pcVar6 + 8);
    uStack_f8 = 0x8000000000000000;
    lStack_100 = 0;
    lStack_108 = (*(long **)(pcVar6 + 8))[1];
    lVar28 = -0x8000000000000000;
  }
  ppcVar8 = &pcStack_f0;
  pcStack_110 = pcVar6;
  pcStack_f0 = pcVar6;
  FUN_109f5a780(ppcVar8,&pcStack_110);
  if (((ulong)ppcVar8 & 1) == 0) {
    do {
      ppcVar8 = &pcStack_f0;
      FUN_109f5a648(ppcVar8);
      pppuStack_168 = (undefined8 ****)0x0;
      pppuStack_170 = (undefined8 ****)0x0;
      pppuStack_178 = (undefined8 ****)0x0;
      uStack_160._0_4_ = 0xffffffff;
      uStack_160._4_4_ = 0;
      uStack_158._0_4_ = 0;
      uStack_148 = 0;
      uStack_144 = 0;
      ppuStack_140 = (undefined8 ***)0x0;
      uStack_150 = 0;
      uStack_14c = 0;
      func_0x000107c31940(&pppuStack_a8,&DAT_10f68f148);
      FUN_109f59c90(ppcVar8,&pppuStack_a8);
      FUN_109f5dcc0();
      func_0x000107c31940(&pppuStack_a8,&DAT_10f491dce);
      FUN_109f59c90(ppcVar8,&pppuStack_a8);
      FUN_109f5da58();
      func_0x000107c31940(&pppuStack_a8,&DAT_10f68f0dc);
      FUN_109f59c90(ppcVar8,&pppuStack_a8);
      FUN_109f5da58();
      func_0x000107c31940(&pppuStack_a8,&DAT_10f5178dd);
      ppcVar10 = ppcVar8;
      FUN_109f59c90(ppcVar8,&pppuStack_a8);
      if ((bRam00000001137e7d00 & 1) == 0) {
        iVar5 = 0x137e7d00;
        ___cxa_guard_acquire();
        if (iVar5 != 0) {
          uRam00000001137e7ee0 = 0;
          puRam00000001137e7ef0 = (undefined *)0x0;
          uRam00000001137e7ee8 = 3;
          puVar13 = &DAT_10f61d667;
          FUN_109f4f5c0();
          uRam00000001137e7ef8 = 1;
          puRam00000001137e7f08 = (undefined *)0x0;
          uRam00000001137e7f00 = 3;
          puVar14 = &UNK_10f61d734;
          puRam00000001137e7ef0 = puVar13;
          FUN_109f4fee8();
          uRam00000001137e7f10 = 2;
          puRam00000001137e7f20 = (undefined *)0x0;
          uRam00000001137e7f18 = 3;
          puVar13 = &UNK_10f61d73d;
          puRam00000001137e7f08 = puVar14;
          FUN_109f4f5c0();
          uRam00000001137e7f28 = 3;
          puRam00000001137e7f38 = (undefined *)0x0;
          uRam00000001137e7f30 = 3;
          puVar14 = &UNK_10f61d747;
          puRam00000001137e7f20 = puVar13;
          FUN_109f4f5c0();
          uRam00000001137e7f40 = 4;
          puRam00000001137e7f50 = (undefined *)0x0;
          uRam00000001137e7f48 = 3;
          puVar13 = &DAT_10f517cd7;
          puRam00000001137e7f38 = puVar14;
          FUN_109f4fe58();
          puRam00000001137e7f50 = puVar13;
          ___cxa_atexit(0x109f61004,0,0x100000000);
          ___cxa_guard_release(0x1137e7d00);
        }
      }
      lVar24 = 0x78;
      puVar26 = (undefined4 *)0x1137e7ee0;
      do {
        puVar11 = puVar26 + 2;
        FUN_109f5ef34(puVar11,ppcVar10);
        if (((ulong)puVar11 & 1) != 0) {
          if (lVar24 != 0) goto LAB_109f5b3f4;
          break;
        }
        puVar26 = puVar26 + 6;
        lVar24 = lVar24 + -0x18;
      } while (lVar24 != 0);
      puVar26 = (undefined4 *)0x1137e7ee0;
LAB_109f5b3f4:
      uStack_158._0_4_ = *puVar26;
      func_0x000107c31940(&pppuStack_a8,&UNK_10f61d63f);
      FUN_109f59c90(ppcVar8,&pppuStack_a8);
      FUN_109f5ddc4();
      pppuVar29 = pppuStack_c8;
      pppuVar23 = pppuStack_d0;
      if (pppuStack_c8 < pppuStack_c0) {
        ppppuVar9 = ppppuVar25;
        if (ppppuVar25 == (undefined8 ****)pppuStack_c8) {
          pppuStack_c8[2] = pppuStack_168;
          pppuStack_c8[1] = pppuStack_170;
          *pppuStack_c8 = pppuStack_178;
          pppuStack_170 = (undefined8 ****)0x0;
          pppuStack_168 = (undefined8 ****)0x0;
          pppuStack_178 = (undefined8 ****)0x0;
          pppuStack_c8[3] = (undefined8 ***)CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
          *(undefined4 *)(pppuStack_c8 + 4) = (undefined4)uStack_158;
          pppuStack_c8[6] = (undefined8 ***)0x0;
          pppuStack_c8[7] = (undefined8 ***)0x0;
          pppuStack_c8[5] = (undefined8 ***)0x0;
          pppuStack_c8[6] = (undefined8 ***)CONCAT44(uStack_144,uStack_148);
          pppuStack_c8[5] = (undefined8 ***)CONCAT44(uStack_14c,uStack_150);
          pppuStack_c8[7] = ppuStack_140;
          uStack_150 = 0;
          uStack_14c = 0;
          uStack_148 = 0;
          uStack_144 = 0;
          ppuStack_140 = (undefined8 ***)0x0;
          pppuStack_c8 = pppuStack_c8 + 8;
        }
        else {
          ppppuVar12 = (undefined8 ****)(pppuStack_c8 + -8);
          ppppuVar15 = (undefined8 ****)pppuStack_c8;
          if (ppppuVar12 < pppuStack_c8) {
            ppppuVar15 = (undefined8 ****)(pppuStack_c8 + 8);
            pppuStack_c8[2] = pppuStack_c8[-6];
            pppuStack_c8[1] = pppuStack_c8[-7];
            *pppuStack_c8 = *ppppuVar12;
            pppuStack_c8[-7] = (undefined8 ***)0x0;
            pppuStack_c8[-6] = (undefined8 ***)0x0;
            *ppppuVar12 = (undefined8 ***)0x0;
            *(undefined4 *)(pppuStack_c8 + 4) = *(undefined4 *)(pppuStack_c8 + -4);
            pppuStack_c8[3] = pppuStack_c8[-5];
            pppuStack_c8[6] = (undefined8 ***)0x0;
            pppuStack_c8[7] = (undefined8 ***)0x0;
            pppuStack_c8[5] = (undefined8 ***)0x0;
            pppuStack_c8[6] = pppuStack_c8[-2];
            pppuStack_c8[5] = pppuStack_c8[-3];
            pppuStack_c8[7] = pppuStack_c8[-1];
            pppuStack_c8[-3] = (undefined8 ***)0x0;
            pppuStack_c8[-2] = (undefined8 ***)0x0;
            pppuStack_c8[-1] = (undefined8 ***)0x0;
          }
          bVar4 = (undefined8 ****)pppuStack_c8 != ppppuVar25 + 8;
          pppuStack_c8 = ppppuVar15;
          if (bVar4) {
            lVar24 = 0;
            do {
              puVar17 = (undefined8 *)((long)pppuVar29 + lVar24 + -0x80);
              *(undefined8 *)((long)pppuVar29 + lVar24 + -0x30) =
                   *(undefined8 *)((long)pppuVar29 + lVar24 + -0x70);
              *(undefined8 *)((long)pppuVar29 + lVar24 + -0x38) =
                   *(undefined8 *)((long)pppuVar29 + lVar24 + -0x78);
              *(undefined8 *)((long)pppuVar29 + lVar24 + -0x40) = *puVar17;
              *(undefined1 *)((long)pppuVar29 + lVar24 + -0x69) = 0;
              *(undefined1 *)puVar17 = 0;
              *(undefined4 *)((long)pppuVar29 + lVar24 + -0x20) =
                   *(undefined4 *)((long)pppuVar29 + lVar24 + -0x60);
              *(undefined8 *)((long)pppuVar29 + lVar24 + -0x28) =
                   *(undefined8 *)((long)pppuVar29 + lVar24 + -0x68);
              FUN_109f5f240((long)pppuVar29 + lVar24 + -0x18);
              *(undefined8 *)((long)pppuVar29 + lVar24 + -0x10) =
                   *(undefined8 *)((long)pppuVar29 + lVar24 + -0x50);
              *(undefined8 *)((long)pppuVar29 + lVar24 + -0x18) =
                   *(undefined8 *)((long)pppuVar29 + lVar24 + -0x58);
              *(undefined8 *)((long)pppuVar29 + lVar24 + -8) =
                   *(undefined8 *)((long)pppuVar29 + lVar24 + -0x48);
              *(undefined8 *)((long)pppuVar29 + lVar24 + -0x58) = 0;
              *(undefined8 *)((long)pppuVar29 + lVar24 + -0x50) = 0;
              *(undefined8 *)((long)pppuVar29 + lVar24 + -0x48) = 0;
              lVar27 = lVar24 + -0x80;
              lVar24 = lVar24 + -0x40;
            } while ((undefined8 ****)((long)pppuVar29 + lVar27) != ppppuVar25);
          }
          if (*(char *)((long)ppppuVar25 + 0x17) < '\0') {
            __ZdlPv(*ppppuVar25);
          }
          ppppuVar25[2] = pppuStack_168;
          ppppuVar25[1] = pppuStack_170;
          *ppppuVar25 = pppuStack_178;
          pppuStack_168 = (undefined8 ***)((ulong)pppuStack_168 & 0xffffffffffffff);
          pppuStack_178 = (undefined8 ***)((ulong)pppuStack_178 & 0xffffffffffffff00);
          *(undefined4 *)(ppppuVar25 + 4) = (undefined4)uStack_158;
          ppppuVar25[3] = (undefined8 ***)CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
          FUN_109f5f240(ppppuVar25 + 5);
          ppppuVar25[6] = (undefined8 ***)CONCAT44(uStack_144,uStack_148);
          ppppuVar25[5] = (undefined8 ***)CONCAT44(uStack_14c,uStack_150);
          ppppuVar25[7] = (undefined8 ***)ppuStack_140;
          uStack_150 = 0;
          uStack_14c = 0;
          uStack_148 = 0;
          uStack_144 = 0;
          ppuStack_140 = (undefined8 ***)0x0;
        }
      }
      else {
        uVar19 = ((long)pppuStack_c8 - (long)pppuStack_d0 >> 6) + 1;
        if (uVar19 >> 0x3a != 0) {
          FUN_109f5f2dc();
          goto LAB_109f5d50c;
        }
        uVar20 = (long)pppuStack_c0 - (long)pppuStack_d0 >> 5;
        if (uVar20 <= uVar19) {
          uVar20 = uVar19;
        }
        if (0x7fffffffffffffbf < (ulong)((long)pppuStack_c0 - (long)pppuStack_d0)) {
          uVar20 = 0x3ffffffffffffff;
        }
        pppuStack_118 = &pppuStack_d0;
        if (uVar20 == 0) {
          ppppuVar15 = (undefined8 ****)0x0;
          uVar20 = 0;
        }
        else {
          ppppuVar15 = &pppuStack_d0;
          FUN_109f5f2f0();
          uVar20 = uVar20 << 6;
        }
        uVar19 = (long)ppppuVar25 - (long)pppuVar23;
        pppuStack_130 = (undefined8 ***)((long)ppppuVar15 + uVar19);
        uStack_120 = (undefined8 ****)((long)ppppuVar15 + uVar20);
        pppuStack_138 = ppppuVar15;
        pppuStack_128 = pppuStack_130;
        if (uVar19 == uVar20) {
          if ((long)uVar19 < 1) {
            uVar19 = (long)uVar19 >> 5;
            if (ppppuVar25 == (undefined8 ****)pppuVar23) {
              uVar19 = 1;
            }
            pppuStack_88 = &pppuStack_d0;
            ppppuVar12 = &pppuStack_d0;
            uVar20 = uVar19;
            FUN_109f5f2f0();
            ppppuVar15 = ppppuVar12 + (uVar19 >> 2) * 8;
            ppppuVar9 = ppppuVar15;
            if ((long)pppuStack_128 - (long)pppuStack_130 != 0) {
              ppppuVar9 = (undefined8 ****)
                          ((long)ppppuVar15 + ((long)pppuStack_128 - (long)pppuStack_130));
              ppppuVar21 = ppppuVar15;
              ppppuVar22 = (undefined8 ****)pppuStack_130;
              do {
                pppuVar29 = ppppuVar22[1];
                pppuVar23 = *ppppuVar22;
                ppppuVar21[2] = ppppuVar22[2];
                ppppuVar21[1] = pppuVar29;
                *ppppuVar21 = pppuVar23;
                ppppuVar22[1] = (undefined8 ***)0x0;
                ppppuVar22[2] = (undefined8 ***)0x0;
                *ppppuVar22 = (undefined8 ***)0x0;
                pppuVar23 = ppppuVar22[3];
                *(undefined4 *)(ppppuVar21 + 4) = *(undefined4 *)(ppppuVar22 + 4);
                ppppuVar21[3] = pppuVar23;
                ppppuVar21[6] = (undefined8 ***)0x0;
                ppppuVar21[7] = (undefined8 ***)0x0;
                ppppuVar21[5] = (undefined8 ***)0x0;
                pppuVar23 = ppppuVar22[5];
                ppppuVar21[6] = ppppuVar22[6];
                ppppuVar21[5] = pppuVar23;
                ppppuVar21[7] = ppppuVar22[7];
                ppppuVar22[5] = (undefined8 ***)0x0;
                ppppuVar22[6] = (undefined8 ***)0x0;
                ppppuVar22[7] = (undefined8 ***)0x0;
                ppppuVar21 = ppppuVar21 + 8;
                ppppuVar22 = ppppuVar22 + 8;
              } while (ppppuVar21 != ppppuVar9);
            }
            pppuStack_a8 = pppuStack_138;
            pppuStack_a0 = pppuStack_130;
            pppuStack_98 = pppuStack_128;
            pppuStack_90 = uStack_120;
            pppuStack_138 = ppppuVar12;
            pppuStack_130 = ppppuVar15;
            pppuStack_128 = ppppuVar9;
            uStack_120 = ppppuVar12 + uVar20 * 8;
            func_0x000109f5f3bc(&pppuStack_a8);
          }
          else {
            pppuStack_130 =
                 (undefined8 ***)((long)pppuStack_130 - ((uVar19 >> 1) + 0x20 & 0xffffffffffffffc0))
            ;
            pppuStack_128 = pppuStack_130;
          }
        }
        ppppuVar9 = (undefined8 ****)pppuStack_130;
        pppuStack_128[2] = pppuStack_168;
        pppuStack_128[1] = pppuStack_170;
        *pppuStack_128 = pppuStack_178;
        pppuStack_170 = (undefined8 ****)0x0;
        pppuStack_168 = (undefined8 ****)0x0;
        pppuStack_178 = (undefined8 ****)0x0;
        pppuStack_128[3] = (undefined8 ***)CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
        *(undefined4 *)(pppuStack_128 + 4) = (undefined4)uStack_158;
        pppuStack_128[6] = (undefined8 ***)0x0;
        pppuStack_128[7] = (undefined8 ***)0x0;
        pppuStack_128[5] = (undefined8 ***)0x0;
        pppuStack_128[6] = (undefined8 ***)CONCAT44(uStack_144,uStack_148);
        pppuStack_128[5] = (undefined8 ***)CONCAT44(uStack_14c,uStack_150);
        pppuStack_128[7] = ppuStack_140;
        uStack_150 = 0;
        uStack_14c = 0;
        uStack_148 = 0;
        uStack_144 = 0;
        ppuStack_140 = (undefined8 ***)0x0;
        pppuStack_128 = pppuStack_128 + 8;
        func_0x000109f5f324(&pppuStack_d0,ppppuVar25,pppuStack_c8);
        pppuStack_128 =
             (undefined8 ***)((long)pppuStack_128 + ((long)pppuStack_c8 - (long)ppppuVar25));
        ppppuVar15 = (undefined8 ****)
                     ((long)pppuStack_130 + ((long)pppuStack_d0 - (long)ppppuVar25));
        pppuStack_c8 = ppppuVar25;
        func_0x000109f5f324(&pppuStack_d0,pppuStack_d0,ppppuVar25,ppppuVar15);
        pppuVar23 = pppuStack_c0;
        pppuStack_c0 = uStack_120;
        pppuStack_c8 = pppuStack_128;
        pppuStack_128 = pppuStack_d0;
        uStack_120 = (undefined8 ****)pppuVar23;
        pppuStack_138 = pppuStack_d0;
        pppuStack_130 = pppuStack_d0;
        pppuStack_d0 = ppppuVar15;
        func_0x000109f5f3bc(&pppuStack_138);
      }
      pppuStack_a8 = (undefined8 ***)&uStack_150;
      func_0x000109f48c10(&pppuStack_a8);
      if ((long)pppuStack_168 < 0) {
        __ZdlPv(pppuStack_178);
      }
      if (*pcVar6 == '\x02') {
        lStack_e0 = lStack_e0 + 0x10;
      }
      else if (*pcVar6 == '\x01') {
        lStack_e8 = lStack_e8 + 0x28;
      }
      else {
        lVar28 = lVar28 + 1;
        lStack_d8 = lVar28;
      }
      ppcVar8 = &pcStack_f0;
      FUN_109f5a780(ppcVar8,&pcStack_110);
      ppppuVar25 = ppppuVar9 + 8;
    } while (((ulong)ppcVar8 & 1) == 0);
  }
  FUN_109f5f408(param_2 + 0x20);
  *(undefined8 ****)(param_2 + 0x28) = pppuStack_c8;
  *(undefined8 ****)(param_2 + 0x20) = pppuStack_d0;
  *(undefined8 ****)(param_2 + 0x30) = pppuStack_c0;
  pppuStack_c8 = (undefined8 ****)0x0;
  pppuStack_c0 = (undefined8 ****)0x0;
  pppuStack_d0 = (undefined8 ****)0x0;
  pppuStack_178 = &pppuStack_d0;
  func_0x000109f5a404(&pppuStack_178);
  if (cStack_179 < '\0') {
    __ZdlPv(auStack_190[0]);
  }
  func_0x000107c31940(auStack_190,&UNK_10f61d611);
  pcVar6 = param_1;
  FUN_109f59c90(param_1,auStack_190);
  if (*pcVar6 != '\x02') {
    uVar16 = 0x20;
    ___cxa_allocate_exception(0x20);
    FUN_109f51088(pcVar6);
    func_0x000107c31940(&pppuStack_a8,pcVar6);
    func_0x00010928a5e0(&pppuStack_178,&UNK_10f56748c,&pppuStack_a8);
    func_0x00010937bbbc(uVar16,0x12e,&pppuStack_178);
    ___cxa_throw(uVar16,&PTR_DAT_110af4510,&DAT_10937bd14);
    goto LAB_109f5d50c;
  }
  pppuStack_d0 = (undefined8 ****)0x0;
  pppuStack_c8 = (undefined8 ****)0x0;
  pppuStack_c0 = (undefined8 ****)0x0;
  pcVar7 = pcVar6;
  FUN_109f50f2c();
  if (pcVar7 != (char *)0x0) {
    if ((ulong)pcVar7 >> 0x3b != 0) {
      FUN_109f5f46c();
      goto LAB_109f5d50c;
    }
    uStack_158 = &pppuStack_d0;
    ppppuVar15 = &pppuStack_d0;
    FUN_109f5f480();
    ppppuVar25 = (undefined8 ****)((long)ppppuVar15 + ((long)pppuStack_d0 - (long)pppuStack_c8));
    pppuStack_178 = ppppuVar15;
    pppuStack_170 = ppppuVar15;
    pppuStack_168 = ppppuVar15;
    uStack_160 = ppppuVar15 + (long)pcVar7 * 4;
    func_0x000109f5f4b4(&pppuStack_d0,pppuStack_d0,pppuStack_c8,ppppuVar25);
    pppuStack_168 = pppuStack_d0;
    uStack_160._0_4_ = SUB84(pppuStack_c0,0);
    uStack_160._4_4_ = (undefined4)((ulong)pppuStack_c0 >> 0x20);
    pppuStack_178 = pppuStack_d0;
    pppuStack_170 = pppuStack_d0;
    pppuStack_d0 = ppppuVar25;
    pppuStack_c8 = ppppuVar15;
    pppuStack_c0 = ppppuVar15 + (long)pcVar7 * 4;
    func_0x000109f5f5e4(&pppuStack_178);
  }
  lStack_e8 = 0;
  lStack_e0 = 0;
  lStack_d8 = -0x8000000000000000;
  cVar1 = *pcVar6;
  ppppuVar25 = (undefined8 ****)pppuStack_c8;
  lStack_1b0 = lStack_e0;
  lStack_198 = lStack_e8;
  pcStack_110 = pcVar6;
  pcStack_f0 = pcVar6;
  if (cVar1 == '\0') {
    lVar28 = 1;
    lStack_d8 = 1;
LAB_109f5b9c0:
    lStack_108 = 0;
    lStack_100 = 0;
    uStack_f8 = 1;
  }
  else if (cVar1 == '\x02') {
    lStack_1b0 = **(long **)(pcVar6 + 8);
    lStack_108 = 0;
    lVar28 = -0x8000000000000000;
    uStack_f8 = 0x8000000000000000;
    lStack_100 = (*(long **)(pcVar6 + 8))[1];
    lStack_e0 = lStack_1b0;
  }
  else {
    if (cVar1 != '\x01') {
      lVar28 = 0;
      lStack_d8 = 0;
      goto LAB_109f5b9c0;
    }
    lStack_198 = **(long **)(pcVar6 + 8);
    uStack_f8 = 0x8000000000000000;
    lStack_100 = 0;
    lStack_108 = (*(long **)(pcVar6 + 8))[1];
    lVar28 = -0x8000000000000000;
    lStack_e8 = lStack_198;
  }
  while( true ) {
    ppcVar8 = &pcStack_f0;
    FUN_109f5a780(ppcVar8,&pcStack_110);
    if (((ulong)ppcVar8 & 1) != 0) break;
    ppcVar8 = &pcStack_f0;
    FUN_109f5a648(ppcVar8);
    pppuStack_138 = (undefined8 ****)0x0;
    pppuStack_130 = (undefined8 ****)0x0;
    pppuStack_128 = (undefined8 ****)0x0;
    func_0x000107c31940(&pppuStack_178,&DAT_10f68f148);
    FUN_109f59c90(ppcVar8,&pppuStack_178);
    FUN_109f5dcc0();
    if ((long)pppuStack_168 < 0) {
      __ZdlPv(pppuStack_178);
    }
    func_0x000107c31940(&pppuStack_178,"format");
    FUN_109f59c90(ppcVar8,&pppuStack_178);
    FUN_109f5e724();
    if ((long)pppuStack_168 < 0) {
      __ZdlPv(pppuStack_178);
    }
    pppuVar23 = pppuStack_d0;
    if (pppuStack_c8 < pppuStack_c0) {
      ppppuVar9 = ppppuVar25;
      if (ppppuVar25 == (undefined8 ****)pppuStack_c8) {
        pppuStack_c8[2] = pppuStack_128;
        pppuStack_c8[1] = pppuStack_130;
        *pppuStack_c8 = pppuStack_138;
        pppuStack_130 = (undefined8 ****)0x0;
        pppuStack_128 = (undefined8 ****)0x0;
        pppuStack_138 = (undefined8 ****)0x0;
        pppuStack_c8[3] = uStack_120;
        pppuStack_c8 = pppuStack_c8 + 4;
      }
      else {
        ppppuVar12 = (undefined8 ****)(pppuStack_c8 + -4);
        ppppuVar15 = (undefined8 ****)pppuStack_c8;
        if (ppppuVar12 < pppuStack_c8) {
          ppppuVar15 = (undefined8 ****)(pppuStack_c8 + 4);
          pppuStack_c8[2] = pppuStack_c8[-2];
          pppuStack_c8[1] = pppuStack_c8[-3];
          *pppuStack_c8 = *ppppuVar12;
          pppuStack_c8[-3] = (undefined8 ***)0x0;
          pppuStack_c8[-2] = (undefined8 ***)0x0;
          *ppppuVar12 = (undefined8 ***)0x0;
          pppuStack_c8[3] = pppuStack_c8[-1];
        }
        if ((undefined8 ****)pppuStack_c8 != ppppuVar25 + 4) {
          lVar24 = 0;
          do {
            puVar17 = (undefined8 *)((long)pppuStack_c8 + lVar24 + -0x40);
            *(undefined8 *)((long)pppuStack_c8 + lVar24 + -0x10) =
                 *(undefined8 *)((long)pppuStack_c8 + lVar24 + -0x30);
            *(undefined8 *)((long)pppuStack_c8 + lVar24 + -0x18) =
                 *(undefined8 *)((long)pppuStack_c8 + lVar24 + -0x38);
            *(undefined8 *)((long)pppuStack_c8 + lVar24 + -0x20) = *puVar17;
            *(undefined1 *)((long)pppuStack_c8 + lVar24 + -0x29) = 0;
            *(undefined1 *)puVar17 = 0;
            *(undefined8 *)((long)pppuStack_c8 + lVar24 + -8) =
                 *(undefined8 *)((long)pppuStack_c8 + lVar24 + -0x28);
            lVar27 = lVar24 + -0x40;
            lVar24 = lVar24 + -0x20;
          } while ((undefined8 ****)((long)pppuStack_c8 + lVar27) != ppppuVar25);
        }
        pppuStack_c8 = ppppuVar15;
        if (*(char *)((long)ppppuVar25 + 0x17) < '\0') {
          __ZdlPv(*ppppuVar25);
        }
        ppppuVar25[2] = pppuStack_128;
        ppppuVar25[1] = pppuStack_130;
        *ppppuVar25 = pppuStack_138;
        pppuStack_128 = (undefined8 ***)((ulong)pppuStack_128 & 0xffffffffffffff);
        pppuStack_138 = (undefined8 ***)((ulong)pppuStack_138 & 0xffffffffffffff00);
        ppppuVar25[3] = uStack_120;
      }
    }
    else {
      uVar19 = ((long)pppuStack_c8 - (long)pppuStack_d0 >> 5) + 1;
      if (uVar19 >> 0x3b != 0) {
        FUN_109f5f46c();
        goto LAB_109f5d50c;
      }
      uVar20 = (long)pppuStack_c0 - (long)pppuStack_d0 >> 4;
      if (uVar20 <= uVar19) {
        uVar20 = uVar19;
      }
      if (0x7fffffffffffffdf < (ulong)((long)pppuStack_c0 - (long)pppuStack_d0)) {
        uVar20 = 0x7ffffffffffffff;
      }
      pppuStack_88 = &pppuStack_d0;
      if (uVar20 == 0) {
        ppppuVar15 = (undefined8 ****)0x0;
        uVar20 = 0;
      }
      else {
        ppppuVar15 = &pppuStack_d0;
        FUN_109f5f480();
        uVar20 = uVar20 << 5;
      }
      uVar19 = (long)ppppuVar25 - (long)pppuVar23;
      pppuStack_a0 = (undefined8 ***)((long)ppppuVar15 + uVar19);
      pppuStack_90 = (undefined8 ***)((long)ppppuVar15 + uVar20);
      pppuStack_a8 = ppppuVar15;
      pppuStack_98 = pppuStack_a0;
      if (uVar19 == uVar20) {
        if ((long)uVar19 < 1) {
          uVar19 = (long)uVar19 >> 4;
          if (ppppuVar25 == (undefined8 ****)pppuVar23) {
            uVar19 = 1;
          }
          ppppuVar12 = &pppuStack_d0;
          uVar20 = uVar19;
          uStack_158 = &pppuStack_d0;
          FUN_109f5f480();
          ppppuVar15 = ppppuVar12 + (uVar19 & 0xfffffffffffffffc);
          ppppuVar9 = ppppuVar15;
          if ((long)pppuStack_98 - (long)pppuStack_a0 != 0) {
            ppppuVar9 = (undefined8 ****)
                        ((long)ppppuVar15 + ((long)pppuStack_98 - (long)pppuStack_a0));
            ppppuVar21 = ppppuVar15;
            ppppuVar22 = (undefined8 ****)pppuStack_a0;
            do {
              pppuVar29 = ppppuVar22[1];
              pppuVar23 = *ppppuVar22;
              ppppuVar21[2] = ppppuVar22[2];
              ppppuVar21[1] = pppuVar29;
              *ppppuVar21 = pppuVar23;
              ppppuVar22[1] = (undefined8 ***)0x0;
              ppppuVar22[2] = (undefined8 ***)0x0;
              *ppppuVar22 = (undefined8 ***)0x0;
              ppppuVar21[3] = ppppuVar22[3];
              ppppuVar21 = ppppuVar21 + 4;
              ppppuVar22 = ppppuVar22 + 4;
            } while (ppppuVar21 != ppppuVar9);
          }
          pppuStack_178 = pppuStack_a8;
          pppuStack_170 = pppuStack_a0;
          pppuStack_168 = pppuStack_98;
          uStack_160._0_4_ = SUB84(pppuStack_90,0);
          uStack_160._4_4_ = (undefined4)((ulong)pppuStack_90 >> 0x20);
          pppuStack_a8 = ppppuVar12;
          pppuStack_a0 = ppppuVar15;
          pppuStack_98 = ppppuVar9;
          pppuStack_90 = ppppuVar12 + uVar20 * 4;
          func_0x000109f5f5e4(&pppuStack_178);
        }
        else {
          pppuStack_a0 = (undefined8 ***)
                         ((long)pppuStack_a0 - ((uVar19 >> 1) + 0x10 & 0xffffffffffffffe0));
          pppuStack_98 = pppuStack_a0;
        }
      }
      pppuVar23 = pppuStack_98;
      pppuStack_98[2] = pppuStack_128;
      pppuVar23[1] = pppuStack_130;
      *pppuVar23 = pppuStack_138;
      pppuStack_130 = (undefined8 ****)0x0;
      pppuStack_128 = (undefined8 ****)0x0;
      pppuStack_138 = (undefined8 ****)0x0;
      pppuVar23[3] = uStack_120;
      ppppuVar9 = (undefined8 ****)pppuStack_a0;
      pppuStack_98 = pppuStack_98 + 4;
      func_0x000109f5f4b4(&pppuStack_d0,ppppuVar25,pppuStack_c8);
      pppuStack_98 = (undefined8 ***)((long)pppuStack_98 + ((long)pppuStack_c8 - (long)ppppuVar25));
      ppppuVar15 = (undefined8 ****)((long)pppuStack_a0 + ((long)pppuStack_d0 - (long)ppppuVar25));
      pppuStack_c8 = ppppuVar25;
      func_0x000109f5f4b4(&pppuStack_d0,pppuStack_d0,ppppuVar25,ppppuVar15);
      pppuVar23 = pppuStack_c0;
      pppuStack_c0 = pppuStack_90;
      pppuStack_c8 = pppuStack_98;
      pppuStack_98 = pppuStack_d0;
      pppuStack_90 = pppuVar23;
      pppuStack_a8 = pppuStack_d0;
      pppuStack_a0 = pppuStack_d0;
      pppuStack_d0 = ppppuVar15;
      func_0x000109f5f5e4(&pppuStack_a8);
    }
    if ((long)pppuStack_128 < 0) {
      __ZdlPv(pppuStack_138);
    }
    ppppuVar25 = ppppuVar9 + 4;
    if (*pcVar6 == '\x02') {
      lStack_1b0 = lStack_1b0 + 0x10;
      lStack_e0 = lStack_1b0;
    }
    else if (*pcVar6 == '\x01') {
      lStack_198 = lStack_198 + 0x28;
      lStack_e8 = lStack_198;
    }
    else {
      lVar28 = lVar28 + 1;
      lStack_d8 = lVar28;
    }
  }
  func_0x000109f5f66c(param_2 + 0x38);
  *(undefined8 ****)(param_2 + 0x40) = pppuStack_c8;
  *(undefined8 ****)(param_2 + 0x38) = pppuStack_d0;
  *(undefined8 ****)(param_2 + 0x48) = pppuStack_c0;
  pppuStack_c8 = (undefined8 ****)0x0;
  pppuStack_c0 = (undefined8 ****)0x0;
  pppuStack_d0 = (undefined8 ****)0x0;
  pppuStack_178 = &pppuStack_d0;
  FUN_109f5a378(&pppuStack_178);
  if (cStack_179 < '\0') {
    __ZdlPv(auStack_190[0]);
  }
  func_0x000107c31940(auStack_190,&UNK_10f61d61f);
  pcVar6 = param_1;
  FUN_109f59c90(param_1,auStack_190);
  if (*pcVar6 != '\x02') {
    uVar16 = 0x20;
    ___cxa_allocate_exception(0x20);
    FUN_109f51088(pcVar6);
    func_0x000107c31940(&pppuStack_a8,pcVar6);
    func_0x00010928a5e0(&pppuStack_178,&UNK_10f56748c,&pppuStack_a8);
    func_0x00010937bbbc(uVar16,0x12e,&pppuStack_178);
    ___cxa_throw(uVar16,&PTR_DAT_110af4510,&DAT_10937bd14);
    goto LAB_109f5d50c;
  }
  pppuStack_d0 = (undefined8 ****)0x0;
  pppuStack_c8 = (undefined8 ****)0x0;
  pppuStack_c0 = (undefined8 ****)0x0;
  pcVar7 = pcVar6;
  FUN_109f50f2c();
  if (pcVar7 != (char *)0x0) {
    if ((ulong)pcVar7 >> 0x3b != 0) {
      FUN_109f5f6a4();
      goto LAB_109f5d50c;
    }
    uStack_158 = &pppuStack_d0;
    ppppuVar15 = &pppuStack_d0;
    FUN_109f5f6b8();
    ppppuVar25 = (undefined8 ****)((long)ppppuVar15 + ((long)pppuStack_d0 - (long)pppuStack_c8));
    pppuStack_178 = ppppuVar15;
    pppuStack_170 = ppppuVar15;
    pppuStack_168 = ppppuVar15;
    uStack_160 = ppppuVar15 + (long)pcVar7 * 4;
    func_0x000109f5f6ec(&pppuStack_d0,pppuStack_d0,pppuStack_c8,ppppuVar25);
    pppuStack_168 = pppuStack_d0;
    uStack_160._0_4_ = SUB84(pppuStack_c0,0);
    uStack_160._4_4_ = (undefined4)((ulong)pppuStack_c0 >> 0x20);
    pppuStack_178 = pppuStack_d0;
    pppuStack_170 = pppuStack_d0;
    pppuStack_d0 = ppppuVar25;
    pppuStack_c8 = ppppuVar15;
    pppuStack_c0 = ppppuVar15 + (long)pcVar7 * 4;
    func_0x000109f5f81c(&pppuStack_178);
  }
  lStack_e8 = 0;
  lStack_e0 = 0;
  lStack_d8 = -0x8000000000000000;
  cVar1 = *pcVar6;
  ppppuVar25 = (undefined8 ****)pppuStack_c8;
  lStack_1b0 = lStack_e0;
  lStack_198 = lStack_e8;
  pcStack_110 = pcVar6;
  pcStack_f0 = pcVar6;
  if (cVar1 == '\0') {
    lVar28 = 1;
    lStack_d8 = 1;
LAB_109f5bf20:
    lStack_108 = 0;
    lStack_100 = 0;
    uStack_f8 = 1;
  }
  else if (cVar1 == '\x02') {
    lStack_1b0 = **(long **)(pcVar6 + 8);
    lStack_108 = 0;
    lVar28 = -0x8000000000000000;
    uStack_f8 = 0x8000000000000000;
    lStack_100 = (*(long **)(pcVar6 + 8))[1];
    lStack_e0 = lStack_1b0;
  }
  else {
    if (cVar1 != '\x01') {
      lVar28 = 0;
      lStack_d8 = 0;
      goto LAB_109f5bf20;
    }
    lStack_198 = **(long **)(pcVar6 + 8);
    uStack_f8 = 0x8000000000000000;
    lStack_100 = 0;
    lStack_108 = (*(long **)(pcVar6 + 8))[1];
    lVar28 = -0x8000000000000000;
    lStack_e8 = lStack_198;
  }
  while( true ) {
    ppcVar8 = &pcStack_f0;
    FUN_109f5a780(ppcVar8,&pcStack_110);
    if (((ulong)ppcVar8 & 1) != 0) break;
    ppcVar8 = &pcStack_f0;
    FUN_109f5a648(ppcVar8);
    pppuStack_128 = (undefined8 ****)0x0;
    pppuStack_130 = (undefined8 ****)0x0;
    pppuStack_138 = (undefined8 ****)0x0;
    uStack_120 = (undefined8 ****)0xffffffff;
    func_0x000107c31940(&pppuStack_178,&DAT_10f68f148);
    FUN_109f59c90(ppcVar8,&pppuStack_178);
    FUN_109f5dcc0();
    if ((long)pppuStack_168 < 0) {
      __ZdlPv(pppuStack_178);
    }
    func_0x000107c31940(&pppuStack_178,&DAT_10f491dce);
    FUN_109f59c90(ppcVar8,&pppuStack_178);
    FUN_109f5da58();
    if ((long)pppuStack_168 < 0) {
      __ZdlPv(pppuStack_178);
    }
    func_0x000107c31940(&pppuStack_178,&DAT_10f6389e8);
    FUN_109f59c90(ppcVar8,&pppuStack_178);
    FUN_109f5f8a4();
    if ((long)pppuStack_168 < 0) {
      __ZdlPv(pppuStack_178);
    }
    pppuVar23 = pppuStack_d0;
    if (pppuStack_c8 < pppuStack_c0) {
      ppppuVar9 = ppppuVar25;
      if (ppppuVar25 == (undefined8 ****)pppuStack_c8) {
        pppuStack_c8[2] = pppuStack_128;
        pppuStack_c8[1] = pppuStack_130;
        *pppuStack_c8 = pppuStack_138;
        pppuStack_130 = (undefined8 ****)0x0;
        pppuStack_128 = (undefined8 ****)0x0;
        pppuStack_138 = (undefined8 ****)0x0;
        pppuStack_c8[3] = uStack_120;
        pppuStack_c8 = pppuStack_c8 + 4;
      }
      else {
        ppppuVar12 = (undefined8 ****)(pppuStack_c8 + -4);
        ppppuVar15 = (undefined8 ****)pppuStack_c8;
        if (ppppuVar12 < pppuStack_c8) {
          ppppuVar15 = (undefined8 ****)(pppuStack_c8 + 4);
          pppuStack_c8[2] = pppuStack_c8[-2];
          pppuStack_c8[1] = pppuStack_c8[-3];
          *pppuStack_c8 = *ppppuVar12;
          pppuStack_c8[-3] = (undefined8 ***)0x0;
          pppuStack_c8[-2] = (undefined8 ***)0x0;
          *ppppuVar12 = (undefined8 ***)0x0;
          pppuStack_c8[3] = pppuStack_c8[-1];
        }
        if ((undefined8 ****)pppuStack_c8 != ppppuVar25 + 4) {
          lVar24 = 0;
          do {
            puVar17 = (undefined8 *)((long)pppuStack_c8 + lVar24 + -0x40);
            *(undefined8 *)((long)pppuStack_c8 + lVar24 + -0x10) =
                 *(undefined8 *)((long)pppuStack_c8 + lVar24 + -0x30);
            *(undefined8 *)((long)pppuStack_c8 + lVar24 + -0x18) =
                 *(undefined8 *)((long)pppuStack_c8 + lVar24 + -0x38);
            *(undefined8 *)((long)pppuStack_c8 + lVar24 + -0x20) = *puVar17;
            *(undefined1 *)((long)pppuStack_c8 + lVar24 + -0x29) = 0;
            *(undefined1 *)puVar17 = 0;
            *(undefined8 *)((long)pppuStack_c8 + lVar24 + -8) =
                 *(undefined8 *)((long)pppuStack_c8 + lVar24 + -0x28);
            lVar27 = lVar24 + -0x40;
            lVar24 = lVar24 + -0x20;
          } while ((undefined8 ****)((long)pppuStack_c8 + lVar27) != ppppuVar25);
        }
        pppuStack_c8 = ppppuVar15;
        if (*(char *)((long)ppppuVar25 + 0x17) < '\0') {
          __ZdlPv(*ppppuVar25);
        }
        ppppuVar25[2] = pppuStack_128;
        ppppuVar25[1] = pppuStack_130;
        *ppppuVar25 = pppuStack_138;
        pppuStack_128 = (undefined8 ***)((ulong)pppuStack_128 & 0xffffffffffffff);
        pppuStack_138 = (undefined8 ***)((ulong)pppuStack_138 & 0xffffffffffffff00);
        ppppuVar25[3] = uStack_120;
      }
    }
    else {
      uVar19 = ((long)pppuStack_c8 - (long)pppuStack_d0 >> 5) + 1;
      if (uVar19 >> 0x3b != 0) {
        FUN_109f5f6a4();
        goto LAB_109f5d50c;
      }
      uVar20 = (long)pppuStack_c0 - (long)pppuStack_d0 >> 4;
      if (uVar20 <= uVar19) {
        uVar20 = uVar19;
      }
      if (0x7fffffffffffffdf < (ulong)((long)pppuStack_c0 - (long)pppuStack_d0)) {
        uVar20 = 0x7ffffffffffffff;
      }
      pppuStack_88 = &pppuStack_d0;
      if (uVar20 == 0) {
        ppppuVar15 = (undefined8 ****)0x0;
        uVar20 = 0;
      }
      else {
        ppppuVar15 = &pppuStack_d0;
        FUN_109f5f6b8();
        uVar20 = uVar20 << 5;
      }
      uVar19 = (long)ppppuVar25 - (long)pppuVar23;
      pppuStack_a0 = (undefined8 ***)((long)ppppuVar15 + uVar19);
      pppuStack_90 = (undefined8 ***)((long)ppppuVar15 + uVar20);
      pppuStack_a8 = ppppuVar15;
      pppuStack_98 = pppuStack_a0;
      if (uVar19 == uVar20) {
        if ((long)uVar19 < 1) {
          uVar19 = (long)uVar19 >> 4;
          if (ppppuVar25 == (undefined8 ****)pppuVar23) {
            uVar19 = 1;
          }
          ppppuVar12 = &pppuStack_d0;
          uVar20 = uVar19;
          uStack_158 = &pppuStack_d0;
          FUN_109f5f6b8();
          ppppuVar15 = ppppuVar12 + (uVar19 & 0xfffffffffffffffc);
          ppppuVar9 = ppppuVar15;
          if ((long)pppuStack_98 - (long)pppuStack_a0 != 0) {
            ppppuVar9 = (undefined8 ****)
                        ((long)ppppuVar15 + ((long)pppuStack_98 - (long)pppuStack_a0));
            ppppuVar21 = ppppuVar15;
            ppppuVar22 = (undefined8 ****)pppuStack_a0;
            do {
              pppuVar29 = ppppuVar22[1];
              pppuVar23 = *ppppuVar22;
              ppppuVar21[2] = ppppuVar22[2];
              ppppuVar21[1] = pppuVar29;
              *ppppuVar21 = pppuVar23;
              ppppuVar22[1] = (undefined8 ***)0x0;
              ppppuVar22[2] = (undefined8 ***)0x0;
              *ppppuVar22 = (undefined8 ***)0x0;
              ppppuVar21[3] = ppppuVar22[3];
              ppppuVar21 = ppppuVar21 + 4;
              ppppuVar22 = ppppuVar22 + 4;
            } while (ppppuVar21 != ppppuVar9);
          }
          pppuStack_178 = pppuStack_a8;
          pppuStack_170 = pppuStack_a0;
          pppuStack_168 = pppuStack_98;
          uStack_160._0_4_ = SUB84(pppuStack_90,0);
          uStack_160._4_4_ = (undefined4)((ulong)pppuStack_90 >> 0x20);
          pppuStack_a8 = ppppuVar12;
          pppuStack_a0 = ppppuVar15;
          pppuStack_98 = ppppuVar9;
          pppuStack_90 = ppppuVar12 + uVar20 * 4;
          func_0x000109f5f81c(&pppuStack_178);
        }
        else {
          pppuStack_a0 = (undefined8 ***)
                         ((long)pppuStack_a0 - ((uVar19 >> 1) + 0x10 & 0xffffffffffffffe0));
          pppuStack_98 = pppuStack_a0;
        }
      }
      pppuVar23 = pppuStack_98;
      pppuStack_98[2] = pppuStack_128;
      pppuVar23[1] = pppuStack_130;
      *pppuVar23 = pppuStack_138;
      pppuStack_130 = (undefined8 ****)0x0;
      pppuStack_128 = (undefined8 ****)0x0;
      pppuStack_138 = (undefined8 ****)0x0;
      pppuVar23[3] = uStack_120;
      ppppuVar9 = (undefined8 ****)pppuStack_a0;
      pppuStack_98 = pppuStack_98 + 4;
      func_0x000109f5f6ec(&pppuStack_d0,ppppuVar25,pppuStack_c8);
      pppuStack_98 = (undefined8 ***)((long)pppuStack_98 + ((long)pppuStack_c8 - (long)ppppuVar25));
      ppppuVar15 = (undefined8 ****)((long)pppuStack_a0 + ((long)pppuStack_d0 - (long)ppppuVar25));
      pppuStack_c8 = ppppuVar25;
      func_0x000109f5f6ec(&pppuStack_d0,pppuStack_d0,ppppuVar25,ppppuVar15);
      pppuVar23 = pppuStack_c0;
      pppuStack_c0 = pppuStack_90;
      pppuStack_c8 = pppuStack_98;
      pppuStack_98 = pppuStack_d0;
      pppuStack_90 = pppuVar23;
      pppuStack_a8 = pppuStack_d0;
      pppuStack_a0 = pppuStack_d0;
      pppuStack_d0 = ppppuVar15;
      func_0x000109f5f81c(&pppuStack_a8);
    }
    if ((long)pppuStack_128 < 0) {
      __ZdlPv(pppuStack_138);
    }
    ppppuVar25 = ppppuVar9 + 4;
    if (*pcVar6 == '\x02') {
      lStack_1b0 = lStack_1b0 + 0x10;
      lStack_e0 = lStack_1b0;
    }
    else if (*pcVar6 == '\x01') {
      lStack_198 = lStack_198 + 0x28;
      lStack_e8 = lStack_198;
    }
    else {
      lVar28 = lVar28 + 1;
      lStack_d8 = lVar28;
    }
  }
  FUN_109f5fc5c(param_2 + 0x50);
  *(undefined8 ****)(param_2 + 0x58) = pppuStack_c8;
  *(undefined8 ****)(param_2 + 0x50) = pppuStack_d0;
  *(undefined8 ****)(param_2 + 0x60) = pppuStack_c0;
  pppuStack_c8 = (undefined8 ****)0x0;
  pppuStack_c0 = (undefined8 ****)0x0;
  pppuStack_d0 = (undefined8 ****)0x0;
  pppuStack_178 = &pppuStack_d0;
  FUN_109f5a2ec(&pppuStack_178);
  if (cStack_179 < '\0') {
    __ZdlPv(auStack_190[0]);
  }
  func_0x000107c31940(auStack_190,&UNK_10f61d62f);
  pcVar6 = param_1;
  FUN_109f59c90(param_1,auStack_190);
  if (*pcVar6 != '\x02') {
    uVar16 = 0x20;
    ___cxa_allocate_exception(0x20);
    FUN_109f51088(pcVar6);
    func_0x000107c31940(&pppuStack_a8,pcVar6);
    func_0x00010928a5e0(&pppuStack_178,&UNK_10f56748c,&pppuStack_a8);
    func_0x00010937bbbc(uVar16,0x12e,&pppuStack_178);
    ___cxa_throw(uVar16,&PTR_DAT_110af4510,&DAT_10937bd14);
    goto LAB_109f5d50c;
  }
  pppuStack_d0 = (undefined8 ****)0x0;
  pppuStack_c8 = (undefined8 ****)0x0;
  pppuStack_c0 = (undefined8 ****)0x0;
  pcVar7 = pcVar6;
  FUN_109f50f2c();
  if (pcVar7 != (char *)0x0) {
    if ((char *)0x666666666666666 < pcVar7) {
      FUN_109f5fc94();
      goto LAB_109f5d50c;
    }
    uStack_158 = &pppuStack_d0;
    ppppuVar15 = &pppuStack_d0;
    FUN_109f5fca8();
    ppppuVar25 = (undefined8 ****)((long)ppppuVar15 + ((long)pppuStack_d0 - (long)pppuStack_c8));
    pppuStack_178 = ppppuVar15;
    pppuStack_170 = ppppuVar15;
    pppuStack_168 = ppppuVar15;
    uStack_160 = ppppuVar15 + (long)pcVar7 * 5;
    func_0x000109f5fcec(&pppuStack_d0,pppuStack_d0,pppuStack_c8,ppppuVar25);
    pppuStack_168 = pppuStack_d0;
    uStack_160._0_4_ = SUB84(pppuStack_c0,0);
    uStack_160._4_4_ = (undefined4)((ulong)pppuStack_c0 >> 0x20);
    pppuStack_178 = pppuStack_d0;
    pppuStack_170 = pppuStack_d0;
    pppuStack_d0 = ppppuVar25;
    pppuStack_c8 = ppppuVar15;
    pppuStack_c0 = ppppuVar15 + (long)pcVar7 * 5;
    func_0x000109f5fe24(&pppuStack_178);
  }
  lStack_e8 = 0;
  lStack_e0 = 0;
  lStack_d8 = -0x8000000000000000;
  cVar1 = *pcVar6;
  if (cVar1 == '\0') {
    lStack_198 = 1;
    lStack_d8 = 1;
LAB_109f5c4fc:
    lStack_108 = 0;
    lStack_100 = 0;
    uStack_f8 = 1;
  }
  else if (cVar1 == '\x02') {
    lStack_e0 = **(long **)(pcVar6 + 8);
    lStack_108 = 0;
    lStack_198 = -0x8000000000000000;
    uStack_f8 = 0x8000000000000000;
    lStack_100 = (*(long **)(pcVar6 + 8))[1];
  }
  else {
    if (cVar1 != '\x01') {
      lStack_198 = 0;
      lStack_d8 = 0;
      goto LAB_109f5c4fc;
    }
    lStack_e8 = **(long **)(pcVar6 + 8);
    uStack_f8 = 0x8000000000000000;
    lStack_100 = 0;
    lStack_108 = (*(long **)(pcVar6 + 8))[1];
    lStack_198 = -0x8000000000000000;
  }
  ppppuVar25 = (undefined8 ****)pppuStack_c8;
  pcStack_110 = pcVar6;
  pcStack_f0 = pcVar6;
  while( true ) {
    ppcVar8 = &pcStack_f0;
    FUN_109f5a780(ppcVar8,&pcStack_110);
    if (((ulong)ppcVar8 & 1) != 0) break;
    ppcVar8 = &pcStack_f0;
    FUN_109f5a648(ppcVar8);
    pppuStack_128 = (undefined8 ****)0x0;
    pppuStack_130 = (undefined8 ****)0x0;
    pppuStack_138 = (undefined8 ****)0x0;
    uStack_120 = (undefined8 ****)0xffffffff;
    pppuStack_118 = (undefined8 ***)((ulong)pppuStack_118 & 0xffffffff00000000);
    func_0x000107c31940(&pppuStack_178,&DAT_10f68f148);
    FUN_109f59c90(ppcVar8,&pppuStack_178);
    FUN_109f5dcc0();
    if ((long)pppuStack_168 < 0) {
      __ZdlPv(pppuStack_178);
    }
    func_0x000107c31940(&pppuStack_178,&DAT_10f491dce);
    FUN_109f59c90(ppcVar8,&pppuStack_178);
    FUN_109f5da58();
    if ((long)pppuStack_168 < 0) {
      __ZdlPv(pppuStack_178);
    }
    func_0x000107c31940(&pppuStack_178,&DAT_10f6389e8);
    FUN_109f59c90(ppcVar8,&pppuStack_178);
    FUN_109f5f8a4();
    if ((long)pppuStack_168 < 0) {
      __ZdlPv(pppuStack_178);
    }
    func_0x000107c31940(&pppuStack_178,&DAT_10f5178dd);
    FUN_109f59c90(ppcVar8,&pppuStack_178);
    if ((bRam00000001137e7d10 & 1) == 0) {
      iVar5 = 0x137e7d10;
      ___cxa_guard_acquire();
      if (iVar5 != 0) {
        uRam00000001137e7f58 = 0;
        puRam00000001137e7f68 = (undefined *)0x0;
        uRam00000001137e7f60 = 3;
        puVar13 = &DAT_10f61d667;
        FUN_109f4f5c0();
        uRam00000001137e7f70 = 1;
        puRam00000001137e7f80 = (undefined *)0x0;
        uRam00000001137e7f78 = 3;
        puVar14 = &UNK_10f61d734;
        puRam00000001137e7f68 = puVar13;
        FUN_109f4fee8();
        uRam00000001137e7f88 = 2;
        puRam00000001137e7f98 = (undefined *)0x0;
        uRam00000001137e7f90 = 3;
        puVar13 = &UNK_10f61d73d;
        puRam00000001137e7f80 = puVar14;
        FUN_109f4f5c0();
        uRam00000001137e7fa0 = 3;
        puRam00000001137e7fb0 = (undefined *)0x0;
        uRam00000001137e7fa8 = 3;
        puVar14 = &UNK_10f61d747;
        puRam00000001137e7f98 = puVar13;
        FUN_109f4f5c0();
        uRam00000001137e7fb8 = 4;
        puRam00000001137e7fc8 = (undefined *)0x0;
        uRam00000001137e7fc0 = 3;
        puVar13 = &DAT_10f517cd7;
        puRam00000001137e7fb0 = puVar14;
        FUN_109f4fe58();
        puRam00000001137e7fc8 = puVar13;
        ___cxa_atexit(0x109f6107c,0,0x100000000);
        ___cxa_guard_release(0x1137e7d10);
      }
    }
    lVar28 = 0x78;
    puVar26 = (undefined4 *)0x1137e7f58;
    do {
      puVar11 = puVar26 + 2;
      FUN_109f5ef34(puVar11,ppcVar8);
      if (((ulong)puVar11 & 1) != 0) {
        if (lVar28 != 0) goto LAB_109f5c654;
        break;
      }
      puVar26 = puVar26 + 6;
      lVar28 = lVar28 + -0x18;
    } while (lVar28 != 0);
    puVar26 = (undefined4 *)0x1137e7f58;
LAB_109f5c654:
    pppuStack_118 = (undefined8 ***)CONCAT44(pppuStack_118._4_4_,*puVar26);
    if ((long)pppuStack_168 < 0) {
      __ZdlPv(pppuStack_178);
    }
    pppuVar23 = pppuStack_d0;
    if (pppuStack_c8 < pppuStack_c0) {
      ppppuVar9 = ppppuVar25;
      if (ppppuVar25 == (undefined8 ****)pppuStack_c8) {
        pppuStack_c8[2] = pppuStack_128;
        pppuStack_c8[1] = pppuStack_130;
        *pppuStack_c8 = pppuStack_138;
        pppuStack_130 = (undefined8 ****)0x0;
        pppuStack_128 = (undefined8 ****)0x0;
        pppuStack_138 = (undefined8 ****)0x0;
        pppuStack_c8[3] = uStack_120;
        *(undefined4 *)(pppuStack_c8 + 4) = pppuStack_118._0_4_;
        pppuStack_c8 = pppuStack_c8 + 5;
      }
      else {
        ppppuVar12 = (undefined8 ****)(pppuStack_c8 + -5);
        ppppuVar15 = (undefined8 ****)pppuStack_c8;
        if (ppppuVar12 < pppuStack_c8) {
          ppppuVar15 = (undefined8 ****)(pppuStack_c8 + 5);
          pppuStack_c8[2] = pppuStack_c8[-3];
          pppuStack_c8[1] = pppuStack_c8[-4];
          *pppuStack_c8 = *ppppuVar12;
          pppuStack_c8[-4] = (undefined8 ***)0x0;
          pppuStack_c8[-3] = (undefined8 ***)0x0;
          *ppppuVar12 = (undefined8 ***)0x0;
          *(undefined4 *)(pppuStack_c8 + 4) = *(undefined4 *)(pppuStack_c8 + -1);
          pppuStack_c8[3] = pppuStack_c8[-2];
        }
        if ((undefined8 ****)pppuStack_c8 != ppppuVar25 + 5) {
          lVar28 = 0;
          do {
            puVar17 = (undefined8 *)((long)pppuStack_c8 + lVar28 + -0x50);
            *(undefined8 *)((long)pppuStack_c8 + lVar28 + -0x18) =
                 *(undefined8 *)((long)pppuStack_c8 + lVar28 + -0x40);
            *(undefined8 *)((long)pppuStack_c8 + lVar28 + -0x20) =
                 *(undefined8 *)((long)pppuStack_c8 + lVar28 + -0x48);
            *(undefined8 *)((long)pppuStack_c8 + lVar28 + -0x28) = *puVar17;
            *(undefined1 *)((long)pppuStack_c8 + lVar28 + -0x39) = 0;
            *(undefined1 *)puVar17 = 0;
            *(undefined4 *)((long)pppuStack_c8 + lVar28 + -8) =
                 *(undefined4 *)((long)pppuStack_c8 + lVar28 + -0x30);
            *(undefined8 *)((long)pppuStack_c8 + lVar28 + -0x10) =
                 *(undefined8 *)((long)pppuStack_c8 + lVar28 + -0x38);
            lVar24 = lVar28 + -0x50;
            lVar28 = lVar28 + -0x28;
          } while ((undefined8 ****)((long)pppuStack_c8 + lVar24) != ppppuVar25);
        }
        pppuStack_c8 = ppppuVar15;
        if (*(char *)((long)ppppuVar25 + 0x17) < '\0') {
          __ZdlPv(*ppppuVar25);
        }
        ppppuVar25[2] = pppuStack_128;
        ppppuVar25[1] = pppuStack_130;
        *ppppuVar25 = pppuStack_138;
        pppuStack_128 = (undefined8 ***)((ulong)pppuStack_128 & 0xffffffffffffff);
        pppuStack_138 = (undefined8 ***)((ulong)pppuStack_138 & 0xffffffffffffff00);
        *(undefined4 *)(ppppuVar25 + 4) = pppuStack_118._0_4_;
        ppppuVar25[3] = uStack_120;
      }
    }
    else {
      uVar19 = ((long)pppuStack_c8 - (long)pppuStack_d0 >> 3) * -0x3333333333333333 + 1;
      if (0x666666666666666 < uVar19) {
        FUN_109f5fc94();
        goto LAB_109f5d50c;
      }
      lVar28 = (long)pppuStack_c0 - (long)pppuStack_d0 >> 3;
      uVar20 = lVar28 * -0x6666666666666666;
      if (uVar20 < uVar19 || uVar20 - uVar19 == 0) {
        uVar20 = uVar19;
      }
      if (0x333333333333332 < (ulong)(lVar28 * -0x3333333333333333)) {
        uVar20 = 0x666666666666666;
      }
      pppuStack_88 = &pppuStack_d0;
      if (uVar20 == 0) {
        ppppuVar15 = (undefined8 ****)0x0;
        uVar20 = 0;
      }
      else {
        ppppuVar15 = &pppuStack_d0;
        FUN_109f5fca8();
        uVar20 = uVar20 * 0x28;
      }
      uVar19 = (long)ppppuVar25 - (long)pppuVar23;
      pppuStack_a0 = (undefined8 ***)((long)ppppuVar15 + uVar19);
      pppuStack_90 = (undefined8 ***)((long)ppppuVar15 + uVar20);
      pppuStack_a8 = ppppuVar15;
      pppuStack_98 = pppuStack_a0;
      if (uVar19 == uVar20) {
        if ((long)uVar19 < 1) {
          uVar20 = 1;
          if (ppppuVar25 != (undefined8 ****)pppuVar23) {
            uVar20 = (-uVar19 >> 3) * 0x6666666666666666;
          }
          uStack_158 = &pppuStack_d0;
          ppppuVar9 = &pppuStack_d0;
          uVar19 = uVar20;
          FUN_109f5fca8();
          ppppuVar12 = ppppuVar9 + (uVar20 >> 2) * 5;
          ppppuVar15 = ppppuVar12;
          if ((long)pppuStack_98 - (long)pppuStack_a0 != 0) {
            ppppuVar15 = (undefined8 ****)
                         ((long)ppppuVar12 + ((long)pppuStack_98 - (long)pppuStack_a0));
            ppppuVar21 = ppppuVar12;
            ppppuVar22 = (undefined8 ****)pppuStack_a0;
            do {
              pppuVar29 = ppppuVar22[1];
              pppuVar23 = *ppppuVar22;
              ppppuVar21[2] = ppppuVar22[2];
              ppppuVar21[1] = pppuVar29;
              *ppppuVar21 = pppuVar23;
              ppppuVar22[1] = (undefined8 ***)0x0;
              ppppuVar22[2] = (undefined8 ***)0x0;
              *ppppuVar22 = (undefined8 ***)0x0;
              pppuVar23 = ppppuVar22[3];
              *(undefined4 *)(ppppuVar21 + 4) = *(undefined4 *)(ppppuVar22 + 4);
              ppppuVar21[3] = pppuVar23;
              ppppuVar21 = ppppuVar21 + 5;
              ppppuVar22 = ppppuVar22 + 5;
            } while (ppppuVar21 != ppppuVar15);
          }
          pppuStack_178 = pppuStack_a8;
          pppuStack_170 = pppuStack_a0;
          pppuStack_168 = pppuStack_98;
          uStack_160._0_4_ = SUB84(pppuStack_90,0);
          uStack_160._4_4_ = (undefined4)((ulong)pppuStack_90 >> 0x20);
          pppuStack_a8 = ppppuVar9;
          pppuStack_a0 = ppppuVar12;
          pppuStack_98 = ppppuVar15;
          pppuStack_90 = ppppuVar9 + uVar19 * 5;
          func_0x000109f5fe24(&pppuStack_178);
        }
        else {
          pppuStack_a0 = pppuStack_a0 + ((uVar19 >> 3) * -0x3333333333333333 + 1 >> 1) * -5;
          pppuStack_98 = pppuStack_a0;
        }
      }
      pppuVar23 = pppuStack_98;
      pppuStack_98[2] = pppuStack_128;
      pppuVar23[1] = pppuStack_130;
      *pppuVar23 = pppuStack_138;
      pppuStack_130 = (undefined8 ****)0x0;
      pppuStack_128 = (undefined8 ****)0x0;
      pppuStack_138 = (undefined8 ****)0x0;
      pppuVar23[3] = uStack_120;
      *(undefined4 *)(pppuVar23 + 4) = pppuStack_118._0_4_;
      ppppuVar9 = (undefined8 ****)pppuStack_a0;
      pppuStack_98 = pppuStack_98 + 5;
      func_0x000109f5fcec(&pppuStack_d0,ppppuVar25,pppuStack_c8);
      pppuStack_98 = (undefined8 ***)((long)pppuStack_98 + ((long)pppuStack_c8 - (long)ppppuVar25));
      ppppuVar15 = (undefined8 ****)((long)pppuStack_a0 + ((long)pppuStack_d0 - (long)ppppuVar25));
      pppuStack_c8 = ppppuVar25;
      func_0x000109f5fcec(&pppuStack_d0,pppuStack_d0,ppppuVar25,ppppuVar15);
      pppuVar23 = pppuStack_c0;
      pppuStack_c0 = pppuStack_90;
      pppuStack_c8 = pppuStack_98;
      pppuStack_98 = pppuStack_d0;
      pppuStack_90 = pppuVar23;
      pppuStack_a8 = pppuStack_d0;
      pppuStack_a0 = pppuStack_d0;
      pppuStack_d0 = ppppuVar15;
      func_0x000109f5fe24(&pppuStack_a8);
    }
    if ((long)pppuStack_128 < 0) {
      __ZdlPv(pppuStack_138);
    }
    ppppuVar25 = ppppuVar9 + 5;
    if (*pcVar6 == '\x02') {
      lStack_e0 = lStack_e0 + 0x10;
    }
    else if (*pcVar6 == '\x01') {
      lStack_e8 = lStack_e8 + 0x28;
    }
    else {
      lStack_198 = lStack_198 + 1;
      lStack_d8 = lStack_198;
    }
  }
  func_0x000109f5feac(param_2 + 0x68);
  *(undefined8 ****)(param_2 + 0x70) = pppuStack_c8;
  *(undefined8 ****)(param_2 + 0x68) = pppuStack_d0;
  *(undefined8 ****)(param_2 + 0x78) = pppuStack_c0;
  pppuStack_c8 = (undefined8 ****)0x0;
  pppuStack_c0 = (undefined8 ****)0x0;
  pppuStack_d0 = (undefined8 ****)0x0;
  pppuStack_178 = &pppuStack_d0;
  FUN_109f5a260(&pppuStack_178);
  if (cStack_179 < '\0') {
    __ZdlPv(auStack_190[0]);
  }
  func_0x000107c31940(auStack_190,&UNK_10f414faa);
  FUN_109f59c90(param_1,auStack_190);
  if (*param_1 != '\x02') {
    uVar16 = 0x20;
    ___cxa_allocate_exception(0x20);
    FUN_109f51088(param_1);
    func_0x000107c31940(&pppuStack_a8,param_1);
    func_0x00010928a5e0(&pppuStack_178,&UNK_10f56748c,&pppuStack_a8);
    func_0x00010937bbbc(uVar16,0x12e,&pppuStack_178);
    ___cxa_throw(uVar16,&PTR_DAT_110af4510,&DAT_10937bd14);
LAB_109f5d50c:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x109f5d510);
    (*pcVar3)();
  }
  pppuStack_d0 = (undefined8 ****)0x0;
  pppuStack_c8 = (undefined8 ****)0x0;
  pppuStack_c0 = (undefined8 ****)0x0;
  pcVar6 = param_1;
  FUN_109f50f2c();
  if (pcVar6 != (char *)0x0) {
    if ((ulong)pcVar6 >> 0x3b != 0) {
      FUN_109f5fee4();
      goto LAB_109f5d50c;
    }
    uStack_158 = &pppuStack_d0;
    ppppuVar15 = &pppuStack_d0;
    FUN_109f5fef8();
    ppppuVar25 = (undefined8 ****)((long)ppppuVar15 + ((long)pppuStack_d0 - (long)pppuStack_c8));
    pppuStack_178 = ppppuVar15;
    pppuStack_170 = ppppuVar15;
    pppuStack_168 = ppppuVar15;
    uStack_160 = ppppuVar15 + (long)pcVar6 * 4;
    func_0x000109f5ff2c(&pppuStack_d0,pppuStack_d0,pppuStack_c8,ppppuVar25);
    pppuStack_168 = pppuStack_d0;
    uStack_160._0_4_ = SUB84(pppuStack_c0,0);
    uStack_160._4_4_ = (undefined4)((ulong)pppuStack_c0 >> 0x20);
    pppuStack_178 = pppuStack_d0;
    pppuStack_170 = pppuStack_d0;
    pppuStack_d0 = ppppuVar25;
    pppuStack_c8 = ppppuVar15;
    pppuStack_c0 = ppppuVar15 + (long)pcVar6 * 4;
    func_0x000109f6005c(&pppuStack_178);
  }
  lStack_e8 = 0;
  lStack_e0 = 0;
  lStack_d8 = -0x8000000000000000;
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    lStack_198 = 1;
    lStack_d8 = 1;
  }
  else {
    if (cVar1 == '\x02') {
      lStack_e0 = **(long **)(param_1 + 8);
      lStack_108 = 0;
      lStack_198 = -0x8000000000000000;
      uStack_f8 = 0x8000000000000000;
      lStack_100 = (*(long **)(param_1 + 8))[1];
      goto LAB_109f5cca0;
    }
    if (cVar1 == '\x01') {
      lStack_e8 = **(long **)(param_1 + 8);
      uStack_f8 = 0x8000000000000000;
      lStack_100 = 0;
      lStack_108 = (*(long **)(param_1 + 8))[1];
      lStack_198 = -0x8000000000000000;
      goto LAB_109f5cca0;
    }
    lStack_198 = 0;
    lStack_d8 = 0;
  }
  lStack_108 = 0;
  lStack_100 = 0;
  uStack_f8 = 1;
LAB_109f5cca0:
  ppppuVar25 = (undefined8 ****)pppuStack_c8;
  pcStack_110 = param_1;
  pcStack_f0 = param_1;
  do {
    ppcVar8 = &pcStack_f0;
    FUN_109f5a780(ppcVar8,&pcStack_110);
    if (((ulong)ppcVar8 & 1) != 0) {
      func_0x000109f600e4(param_2 + 0x80);
      *(undefined8 ****)(param_2 + 0x88) = pppuStack_c8;
      *(undefined8 ****)(param_2 + 0x80) = pppuStack_d0;
      *(undefined8 ****)(param_2 + 0x90) = pppuStack_c0;
      pppuStack_c8 = (undefined8 ***)0x0;
      pppuStack_c0 = (undefined8 ***)0x0;
      pppuStack_d0 = (undefined8 ***)0x0;
      pppuStack_178 = &pppuStack_d0;
      func_0x000109f5a1d4(&pppuStack_178);
      if (cStack_179 < '\0') {
        __ZdlPv(auStack_190[0]);
      }
      return;
    }
    ppcVar8 = &pcStack_f0;
    FUN_109f5a648(ppcVar8);
    pppuStack_128 = (undefined8 ****)0x0;
    pppuStack_130 = (undefined8 ****)0x0;
    pppuStack_138 = (undefined8 ****)0x0;
    uStack_120 = (undefined8 ****)0xffffffff;
    func_0x000107c31940(&pppuStack_178,&DAT_10f68f148);
    FUN_109f59c90(ppcVar8,&pppuStack_178);
    FUN_109f5dcc0();
    if ((long)pppuStack_168 < 0) {
      __ZdlPv(pppuStack_178);
    }
    func_0x000107c31940(&pppuStack_178,&DAT_10f491dce);
    FUN_109f59c90(ppcVar8,&pppuStack_178);
    FUN_109f5da58();
    if ((long)pppuStack_168 < 0) {
      __ZdlPv(pppuStack_178);
    }
    func_0x000107c31940(&pppuStack_178,&DAT_10f6389e8);
    FUN_109f59c90(ppcVar8,&pppuStack_178);
    if ((bRam00000001137e7d18 & 1) == 0) {
      iVar5 = 0x137e7d18;
      ___cxa_guard_acquire();
      if (iVar5 != 0) {
        uRam00000001137e7d90 = 0;
        puRam00000001137e7da0 = (undefined *)0x0;
        uRam00000001137e7d98 = 3;
        puVar13 = &DAT_10f61d667;
        FUN_109f4f5c0();
        uRam00000001137e7da8 = 1;
        puRam00000001137e7db8 = (undefined *)0x0;
        uRam00000001137e7db0 = 3;
        puVar14 = &UNK_10f562af1;
        puRam00000001137e7da0 = puVar13;
        FUN_109f4eb8c();
        uRam00000001137e7dc0 = 2;
        puRam00000001137e7dd0 = (undefined *)0x0;
        uRam00000001137e7dc8 = 3;
        puVar13 = &UNK_10f61d7b2;
        puRam00000001137e7db8 = puVar14;
        FUN_109f50438();
        uRam00000001137e7dd8 = 3;
        puRam00000001137e7de8 = (undefined *)0x0;
        uRam00000001137e7de0 = 3;
        puVar14 = &DAT_10f517cd7;
        puRam00000001137e7dd0 = puVar13;
        FUN_109f4fe58();
        puRam00000001137e7de8 = puVar14;
        ___cxa_atexit(0x109f610b8,0,0x100000000);
        ___cxa_guard_release(0x1137e7d18);
      }
    }
    lVar28 = 0x60;
    puVar26 = (undefined4 *)0x1137e7d90;
    do {
      puVar11 = puVar26 + 2;
      FUN_109f5ef34(puVar11,ppcVar8);
      if (((ulong)puVar11 & 1) != 0) {
        if (lVar28 != 0) goto LAB_109f5cdb4;
        break;
      }
      puVar26 = puVar26 + 6;
      lVar28 = lVar28 + -0x18;
    } while (lVar28 != 0);
    puVar26 = (undefined4 *)0x1137e7d90;
LAB_109f5cdb4:
    uStack_120 = (undefined8 ****)CONCAT44(*puVar26,(undefined4)uStack_120);
    if ((long)pppuStack_168 < 0) {
      __ZdlPv(pppuStack_178);
    }
    pppuVar23 = pppuStack_d0;
    if (pppuStack_c8 < pppuStack_c0) {
      ppppuVar9 = ppppuVar25;
      if (ppppuVar25 == (undefined8 ****)pppuStack_c8) {
        pppuStack_c8[2] = pppuStack_128;
        pppuStack_c8[1] = pppuStack_130;
        *pppuStack_c8 = pppuStack_138;
        pppuStack_130 = (undefined8 ****)0x0;
        pppuStack_128 = (undefined8 ****)0x0;
        pppuStack_138 = (undefined8 ****)0x0;
        pppuStack_c8[3] = uStack_120;
        pppuStack_c8 = pppuStack_c8 + 4;
      }
      else {
        ppppuVar12 = (undefined8 ****)(pppuStack_c8 + -4);
        ppppuVar15 = (undefined8 ****)pppuStack_c8;
        if (ppppuVar12 < pppuStack_c8) {
          ppppuVar15 = (undefined8 ****)(pppuStack_c8 + 4);
          pppuStack_c8[2] = pppuStack_c8[-2];
          pppuStack_c8[1] = pppuStack_c8[-3];
          *pppuStack_c8 = *ppppuVar12;
          pppuStack_c8[-3] = (undefined8 ***)0x0;
          pppuStack_c8[-2] = (undefined8 ***)0x0;
          *ppppuVar12 = (undefined8 ***)0x0;
          pppuStack_c8[3] = pppuStack_c8[-1];
        }
        if ((undefined8 ****)pppuStack_c8 != ppppuVar25 + 4) {
          lVar28 = 0;
          do {
            puVar17 = (undefined8 *)((long)pppuStack_c8 + lVar28 + -0x40);
            *(undefined8 *)((long)pppuStack_c8 + lVar28 + -0x10) =
                 *(undefined8 *)((long)pppuStack_c8 + lVar28 + -0x30);
            *(undefined8 *)((long)pppuStack_c8 + lVar28 + -0x18) =
                 *(undefined8 *)((long)pppuStack_c8 + lVar28 + -0x38);
            *(undefined8 *)((long)pppuStack_c8 + lVar28 + -0x20) = *puVar17;
            *(undefined1 *)((long)pppuStack_c8 + lVar28 + -0x29) = 0;
            *(undefined1 *)puVar17 = 0;
            *(undefined8 *)((long)pppuStack_c8 + lVar28 + -8) =
                 *(undefined8 *)((long)pppuStack_c8 + lVar28 + -0x28);
            lVar24 = lVar28 + -0x40;
            lVar28 = lVar28 + -0x20;
          } while ((undefined8 ****)((long)pppuStack_c8 + lVar24) != ppppuVar25);
        }
        pppuStack_c8 = ppppuVar15;
        if (*(char *)((long)ppppuVar25 + 0x17) < '\0') {
          __ZdlPv(*ppppuVar25);
        }
        ppppuVar25[2] = pppuStack_128;
        ppppuVar25[1] = pppuStack_130;
        *ppppuVar25 = pppuStack_138;
        pppuStack_128 = (undefined8 ***)((ulong)pppuStack_128 & 0xffffffffffffff);
        pppuStack_138 = (undefined8 ***)((ulong)pppuStack_138 & 0xffffffffffffff00);
        ppppuVar25[3] = uStack_120;
      }
    }
    else {
      uVar19 = ((long)pppuStack_c8 - (long)pppuStack_d0 >> 5) + 1;
      if (uVar19 >> 0x3b != 0) {
        FUN_109f5fee4();
        goto LAB_109f5d50c;
      }
      uVar20 = (long)pppuStack_c0 - (long)pppuStack_d0 >> 4;
      if (uVar20 <= uVar19) {
        uVar20 = uVar19;
      }
      if (0x7fffffffffffffdf < (ulong)((long)pppuStack_c0 - (long)pppuStack_d0)) {
        uVar20 = 0x7ffffffffffffff;
      }
      pppuStack_88 = &pppuStack_d0;
      if (uVar20 == 0) {
        ppppuVar15 = (undefined8 ****)0x0;
        uVar20 = 0;
      }
      else {
        ppppuVar15 = &pppuStack_d0;
        FUN_109f5fef8();
        uVar20 = uVar20 << 5;
      }
      uVar19 = (long)ppppuVar25 - (long)pppuVar23;
      pppuStack_a0 = (undefined8 ***)((long)ppppuVar15 + uVar19);
      pppuStack_90 = (undefined8 ***)((long)ppppuVar15 + uVar20);
      pppuStack_a8 = ppppuVar15;
      pppuStack_98 = pppuStack_a0;
      if (uVar19 == uVar20) {
        if ((long)uVar19 < 1) {
          uVar19 = (long)uVar19 >> 4;
          if (ppppuVar25 == (undefined8 ****)pppuVar23) {
            uVar19 = 1;
          }
          uStack_158 = &pppuStack_d0;
          ppppuVar12 = &pppuStack_d0;
          uVar20 = uVar19;
          FUN_109f5fef8();
          ppppuVar15 = ppppuVar12 + (uVar19 & 0xfffffffffffffffc);
          ppppuVar9 = ppppuVar15;
          if ((long)pppuStack_98 - (long)pppuStack_a0 != 0) {
            ppppuVar9 = (undefined8 ****)
                        ((long)ppppuVar15 + ((long)pppuStack_98 - (long)pppuStack_a0));
            ppppuVar21 = ppppuVar15;
            ppppuVar22 = (undefined8 ****)pppuStack_a0;
            do {
              pppuVar29 = ppppuVar22[1];
              pppuVar23 = *ppppuVar22;
              ppppuVar21[2] = ppppuVar22[2];
              ppppuVar21[1] = pppuVar29;
              *ppppuVar21 = pppuVar23;
              ppppuVar22[1] = (undefined8 ***)0x0;
              ppppuVar22[2] = (undefined8 ***)0x0;
              *ppppuVar22 = (undefined8 ***)0x0;
              ppppuVar21[3] = ppppuVar22[3];
              ppppuVar21 = ppppuVar21 + 4;
              ppppuVar22 = ppppuVar22 + 4;
            } while (ppppuVar21 != ppppuVar9);
          }
          pppuStack_178 = pppuStack_a8;
          pppuStack_170 = pppuStack_a0;
          pppuStack_168 = pppuStack_98;
          uStack_160._0_4_ = SUB84(pppuStack_90,0);
          uStack_160._4_4_ = (undefined4)((ulong)pppuStack_90 >> 0x20);
          pppuStack_a8 = ppppuVar12;
          pppuStack_a0 = ppppuVar15;
          pppuStack_98 = ppppuVar9;
          pppuStack_90 = ppppuVar12 + uVar20 * 4;
          func_0x000109f6005c(&pppuStack_178);
        }
        else {
          pppuStack_a0 = (undefined8 ***)
                         ((long)pppuStack_a0 - ((uVar19 >> 1) + 0x10 & 0xffffffffffffffe0));
          pppuStack_98 = pppuStack_a0;
        }
      }
      pppuVar23 = pppuStack_98;
      pppuStack_98[2] = pppuStack_128;
      pppuVar23[1] = pppuStack_130;
      *pppuVar23 = pppuStack_138;
      pppuStack_130 = (undefined8 ****)0x0;
      pppuStack_128 = (undefined8 ****)0x0;
      pppuStack_138 = (undefined8 ****)0x0;
      pppuVar23[3] = uStack_120;
      ppppuVar9 = (undefined8 ****)pppuStack_a0;
      pppuStack_98 = pppuStack_98 + 4;
      func_0x000109f5ff2c(&pppuStack_d0,ppppuVar25,pppuStack_c8);
      pppuStack_98 = (undefined8 ***)((long)pppuStack_98 + ((long)pppuStack_c8 - (long)ppppuVar25));
      ppppuVar15 = (undefined8 ****)((long)pppuStack_a0 + ((long)pppuStack_d0 - (long)ppppuVar25));
      pppuStack_c8 = ppppuVar25;
      func_0x000109f5ff2c(&pppuStack_d0,pppuStack_d0,ppppuVar25,ppppuVar15);
      pppuVar23 = pppuStack_c0;
      pppuStack_c0 = pppuStack_90;
      pppuStack_c8 = pppuStack_98;
      pppuStack_98 = pppuStack_d0;
      pppuStack_90 = pppuVar23;
      pppuStack_a8 = pppuStack_d0;
      pppuStack_a0 = pppuStack_d0;
      pppuStack_d0 = ppppuVar15;
      func_0x000109f6005c(&pppuStack_a8);
    }
    if ((long)pppuStack_128 < 0) {
      __ZdlPv(pppuStack_138);
    }
    ppppuVar25 = ppppuVar9 + 4;
    if (*param_1 == '\x02') {
      lStack_e0 = lStack_e0 + 0x10;
    }
    else if (*param_1 == '\x01') {
      lStack_e8 = lStack_e8 + 0x28;
    }
    else {
      lStack_198 = lStack_198 + 1;
      lStack_d8 = lStack_198;
    }
  } while( true );
}



/* Entry: 109f5da58; end: 109f5db8b;  */

void FUN_109f5da58(byte *param_1,uint *param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  bVar1 = *param_1;
  if (bVar1 < 6) {
    if (bVar1 == 4) {
      uVar4 = (uint)param_1[8];
      goto LAB_109f5db1c;
    }
    if (bVar1 != 5) {
LAB_109f5daa4:
      uVar3 = 0x20;
      ___cxa_allocate_exception(0x20);
      FUN_109f51088(param_1);
      func_0x000107c31940(auStack_60,param_1);
      func_0x00010928a5e0(auStack_48,&UNK_10f567436,auStack_60);
      func_0x00010937bbbc(uVar3,0x12e,auStack_48);
      ___cxa_throw(uVar3,&PTR_DAT_110af4510,&DAT_10937bd14);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109f5db0c);
      (*pcVar2)();
    }
  }
  else {
    if (bVar1 == 7) {
      uVar4 = (uint)*(double *)(param_1 + 8);
      goto LAB_109f5db1c;
    }
    if (bVar1 != 6) goto LAB_109f5daa4;
  }
  uVar4 = *(uint *)(param_1 + 8);
LAB_109f5db1c:
  *param_2 = uVar4;
  return;
}



/* Entry: 109f5db8c; end: 109f5db9f;  */

void FUN_109f5db8c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if ((undefined8 *)0x492492492492492 < param_2) {
    func_0x000104c4f740();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        param_4[2] = puVar1[2];
        param_4[1] = uVar3;
        *param_4 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        uVar2 = puVar1[3];
        param_4[5] = 0;
        param_4[6] = 0;
        param_4[3] = uVar2;
        param_4[4] = 0;
        uVar2 = puVar1[4];
        param_4[5] = puVar1[5];
        param_4[4] = uVar2;
        param_4[6] = puVar1[6];
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1 = puVar1 + 7;
        param_4 = param_4 + 7;
      } while (puVar1 != param_3);
      do {
        FUN_109f5a570(param_2);
        param_2 = param_2 + 7;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x38);
  return;
}



/* Entry: 109f5dba0; end: 109f5dcbf;  */

void FUN_109f5dba0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((undefined8 *)0x492492492492492 < param_2) {
    func_0x000104c4f740();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        param_4[2] = puVar1[2];
        param_4[1] = uVar3;
        *param_4 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        uVar2 = puVar1[3];
        param_4[5] = 0;
        param_4[6] = 0;
        param_4[3] = uVar2;
        param_4[4] = 0;
        uVar2 = puVar1[4];
        param_4[5] = puVar1[5];
        param_4[4] = uVar2;
        param_4[6] = puVar1[6];
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1 = puVar1 + 7;
        param_4 = param_4 + 7;
      } while (puVar1 != param_3);
      do {
        FUN_109f5a570(param_2);
        param_2 = param_2 + 7;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x38);
  return;
}



/* Entry: 109f5dcc0; end: 109f5ddc3;  */

void FUN_109f5dcc0(char *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (*param_1 == '\x03') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350
    )(param_2,*(undefined8 *)(param_1 + 8));
    return;
  }
  uVar2 = 0x20;
  ___cxa_allocate_exception(0x20);
  FUN_109f51088(param_1);
  func_0x000107c31940(auStack_60,param_1);
  func_0x00010928a5e0(auStack_48,&UNK_10f5674a8,auStack_60);
  func_0x00010937bbbc(uVar2,0x12e,auStack_48);
  ___cxa_throw(uVar2,&PTR_DAT_110af4510,&DAT_10937bd14);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109f5dd6c);
  (*pcVar1)();
}



/* Entry: 109f5ddc4; end: 109f5e723;  */

/* WARNING: Removing unreachable block (ram,0x000109f5e048) */
/* WARNING: Removing unreachable block (ram,0x000109f5df80) */
/* WARNING: Removing unreachable block (ram,0x000109f5dfe0) */
/* WARNING: Removing unreachable block (ram,0x000109f5e150) */
/* WARNING: Removing unreachable block (ram,0x000109f5e07c) */
/* WARNING: Removing unreachable block (ram,0x000109f5dfb0) */
/* WARNING: Removing unreachable block (ram,0x000109f5e014) */

void FUN_109f5ddc4(char *param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  code *pcVar4;
  char *pcVar5;
  undefined8 ****ppppuVar6;
  char **ppcVar7;
  undefined8 ****ppppuVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 ****ppppuVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 ****ppppuVar17;
  long lVar18;
  undefined8 ***pppuVar19;
  undefined8 ***pppuVar20;
  long lStack_180;
  long lStack_178;
  char *pcStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  char *pcStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 ***pppuStack_130;
  undefined8 ***pppuStack_128;
  undefined8 ***pppuStack_120;
  undefined8 ***pppuStack_110;
  undefined8 ***pppuStack_108;
  undefined8 ***pppuStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  uint uStack_e8;
  undefined4 uStack_e4;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  undefined8 ***pppuStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 ***pppuStack_a8;
  undefined8 ***pppuStack_a0;
  undefined8 ***pppuStack_98;
  undefined8 ***pppuStack_90;
  undefined8 ***pppuStack_88;
  undefined8 ***pppuStack_80;
  undefined8 ***pppuStack_78;
  undefined8 ***pppuStack_70;
  
  if (*param_1 != '\x02') {
    uVar9 = 0x20;
    ___cxa_allocate_exception(0x20);
    FUN_109f51088(param_1);
    func_0x000107c31940(&pppuStack_90,param_1);
    func_0x00010928a5e0(&pppuStack_110,&UNK_10f56748c,&pppuStack_90);
    func_0x00010937bbbc(uVar9,0x12e,&pppuStack_110);
    ___cxa_throw(uVar9,&PTR_DAT_110af4510,&DAT_10937bd14);
LAB_109f5e5d8:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109f5e5dc);
    (*pcVar4)();
  }
  pppuStack_130 = (undefined8 ****)0x0;
  pppuStack_128 = (undefined8 ****)0x0;
  pppuStack_120 = (undefined8 ****)0x0;
  pcVar5 = param_1;
  FUN_109f50f2c();
  if (pcVar5 != (char *)0x0) {
    if ((char *)0x555555555555555 < pcVar5) {
      FUN_109f489f8();
      goto LAB_109f5e5d8;
    }
    uStack_f0 = SUB81(&pppuStack_130,0);
    uStack_ef = (undefined7)((ulong)&pppuStack_130 >> 8);
    ppppuVar6 = &pppuStack_130;
    FUN_109f48a0c();
    ppppuVar15 = ppppuVar6 + (long)pcVar5 * 6;
    uStack_f8 = SUB81(ppppuVar15,0);
    uStack_f7 = (undefined7)((ulong)ppppuVar15 >> 8);
    ppppuVar8 = (undefined8 ****)((long)ppppuVar6 + ((long)pppuStack_130 - (long)pppuStack_128));
    pppuStack_110 = ppppuVar6;
    pppuStack_108 = ppppuVar6;
    pppuStack_100 = ppppuVar6;
    func_0x000109f48a50(&pppuStack_130,pppuStack_130,pppuStack_128,ppppuVar8);
    pppuStack_100 = pppuStack_130;
    uStack_f8 = SUB81(pppuStack_120,0);
    uStack_f7 = (undefined7)((ulong)pppuStack_120 >> 8);
    pppuStack_110 = pppuStack_130;
    pppuStack_108 = pppuStack_130;
    pppuStack_130 = ppppuVar8;
    pppuStack_128 = ppppuVar6;
    pppuStack_120 = ppppuVar15;
    func_0x000109f48b88(&pppuStack_110);
  }
  lStack_148 = 0;
  lStack_140 = 0;
  lStack_138 = -0x8000000000000000;
  cVar1 = *param_1;
  ppppuVar6 = (undefined8 ****)pppuStack_128;
  lStack_180 = lStack_140;
  lStack_178 = lStack_148;
  pcStack_170 = param_1;
  pcStack_150 = param_1;
  if (cVar1 == '\0') {
    lVar18 = 1;
    lStack_138 = 1;
  }
  else {
    if (cVar1 == '\x02') {
      lStack_180 = **(long **)(param_1 + 8);
      lStack_160 = (*(long **)(param_1 + 8))[1];
      lStack_168 = 0;
      lVar18 = -0x8000000000000000;
      uStack_158 = 0x8000000000000000;
      lStack_140 = lStack_180;
      goto LAB_109f5df2c;
    }
    if (cVar1 == '\x01') {
      lStack_178 = **(long **)(param_1 + 8);
      lStack_168 = (*(long **)(param_1 + 8))[1];
      uStack_158 = 0x8000000000000000;
      lStack_160 = 0;
      lVar18 = -0x8000000000000000;
      lStack_148 = lStack_178;
      goto LAB_109f5df2c;
    }
    lVar18 = 0;
    lStack_138 = 0;
  }
  lStack_168 = 0;
  lStack_160 = 0;
  uStack_158 = 1;
LAB_109f5df2c:
  do {
    ppcVar7 = &pcStack_150;
    FUN_109f5a780(ppcVar7,&pcStack_170);
    if (((ulong)ppcVar7 & 1) != 0) {
      FUN_109f5f240(param_2);
      param_2[1] = pppuStack_128;
      *param_2 = pppuStack_130;
      param_2[2] = pppuStack_120;
      pppuStack_128 = (undefined8 ***)0x0;
      pppuStack_120 = (undefined8 ***)0x0;
      pppuStack_130 = (undefined8 ***)0x0;
      pppuStack_110 = &pppuStack_130;
      func_0x000109f48c10(&pppuStack_110);
      return;
    }
    ppcVar7 = &pcStack_150;
    FUN_109f5a648();
    uStack_e4 = 0;
    pppuStack_108 = (undefined8 ****)0x0;
    pppuStack_110 = (undefined8 ****)0x0;
    uStack_f8 = 0;
    pppuStack_100 = (undefined8 ****)0x0;
    uStack_ef = 0;
    uStack_e8 = uStack_e8 & 0xffffff00;
    uStack_f7 = 0;
    uStack_f0 = 0;
    func_0x000107c31940(&pppuStack_90,&DAT_10f68f148);
    FUN_109f59c90(ppcVar7,&pppuStack_90);
    FUN_109f5dcc0();
    func_0x000107c31940(&pppuStack_90,&DAT_10f63975c);
    FUN_109f59c90(ppcVar7,&pppuStack_90);
    FUN_109f5da58();
    func_0x000107c31940(&pppuStack_90,&DAT_10f3edc01);
    FUN_109f59c90(ppcVar7,&pppuStack_90);
    FUN_109f5da58();
    func_0x000107c31940(&pppuStack_90,&UNK_10f61d64b);
    FUN_109f59c90(ppcVar7,&pppuStack_90);
    FUN_109f5da58();
    func_0x000107c31940(&pppuStack_90,&DAT_10f61d658);
    FUN_109f59c90(ppcVar7,&pppuStack_90);
    FUN_109f5da58();
    func_0x000107c31940(&pppuStack_90,"format");
    FUN_109f59c90(ppcVar7,&pppuStack_90);
    FUN_109f5e724();
    func_0x000107c31940(auStack_d0,&UNK_10f61d662);
    FUN_109f59c90(ppcVar7,auStack_d0);
    if (*(char *)ppcVar7 != '\x04') {
      uVar9 = 0x20;
      ___cxa_allocate_exception(0x20);
      FUN_109f51088(ppcVar7);
      func_0x000107c31940(&pppuStack_b8,ppcVar7);
      func_0x00010928a5e0(&pppuStack_90,&UNK_10f568911,&pppuStack_b8);
      func_0x00010937bbbc(uVar9,0x12e,&pppuStack_90);
      ___cxa_throw(uVar9,&PTR_DAT_110af4510,&DAT_10937bd14);
      goto LAB_109f5e5d8;
    }
    uStack_e8 = CONCAT31(uStack_e8._1_3_,*(char *)(ppcVar7 + 1));
    if (cStack_b9 < '\0') {
      __ZdlPv(auStack_d0[0]);
    }
    pppuVar19 = pppuStack_130;
    if (pppuStack_128 < pppuStack_120) {
      ppppuVar15 = ppppuVar6;
      if (ppppuVar6 == (undefined8 ****)pppuStack_128) {
        pppuStack_128[2] = pppuStack_100;
        pppuStack_128[1] = pppuStack_108;
        *pppuStack_128 = pppuStack_110;
        pppuStack_108 = (undefined8 ****)0x0;
        pppuStack_100 = (undefined8 ****)0x0;
        pppuStack_110 = (undefined8 ****)0x0;
        pppuVar19 = (undefined8 ***)CONCAT44(uStack_e4,uStack_e8);
        pppuStack_128[4] = (undefined8 ***)CONCAT71(uStack_ef,uStack_f0);
        pppuStack_128[3] = (undefined8 ***)CONCAT71(uStack_f7,uStack_f8);
        pppuStack_128[5] = pppuVar19;
        pppuStack_128 = pppuStack_128 + 6;
      }
      else {
        ppppuVar12 = (undefined8 ****)(pppuStack_128 + -6);
        ppppuVar8 = (undefined8 ****)pppuStack_128;
        if (ppppuVar12 < pppuStack_128) {
          ppppuVar8 = (undefined8 ****)(pppuStack_128 + 6);
          pppuStack_128[2] = pppuStack_128[-4];
          pppuStack_128[1] = pppuStack_128[-5];
          *pppuStack_128 = *ppppuVar12;
          pppuStack_128[-5] = (undefined8 ***)0x0;
          pppuStack_128[-4] = (undefined8 ***)0x0;
          *ppppuVar12 = (undefined8 ***)0x0;
          pppuStack_128[5] = pppuStack_128[-1];
          pppuStack_128[4] = pppuStack_128[-2];
          pppuStack_128[3] = pppuStack_128[-3];
        }
        if ((undefined8 ****)pppuStack_128 != ppppuVar6 + 6) {
          lVar11 = 0;
          do {
            puVar10 = (undefined8 *)((long)pppuStack_128 + lVar11 + -0x60);
            *(undefined8 *)((long)pppuStack_128 + lVar11 + -0x20) =
                 *(undefined8 *)((long)pppuStack_128 + lVar11 + -0x50);
            *(undefined8 *)((long)pppuStack_128 + lVar11 + -0x28) =
                 *(undefined8 *)((long)pppuStack_128 + lVar11 + -0x58);
            *(undefined8 *)((long)pppuStack_128 + lVar11 + -0x30) = *puVar10;
            *(undefined1 *)((long)pppuStack_128 + lVar11 + -0x49) = 0;
            *(undefined1 *)puVar10 = 0;
            *(undefined8 *)((long)pppuStack_128 + lVar11 + -8) =
                 *(undefined8 *)((long)pppuStack_128 + lVar11 + -0x38);
            *(undefined8 *)((long)pppuStack_128 + lVar11 + -0x10) =
                 *(undefined8 *)((long)pppuStack_128 + lVar11 + -0x40);
            *(undefined8 *)((long)pppuStack_128 + lVar11 + -0x18) =
                 *(undefined8 *)((long)pppuStack_128 + lVar11 + -0x48);
            lVar2 = lVar11 + -0x60;
            lVar11 = lVar11 + -0x30;
          } while ((undefined8 ****)((long)pppuStack_128 + lVar2) != ppppuVar6);
        }
        pppuStack_128 = ppppuVar8;
        if (*(char *)((long)ppppuVar6 + 0x17) < '\0') {
          __ZdlPv(*ppppuVar6);
        }
        ppppuVar6[2] = pppuStack_100;
        ppppuVar6[1] = pppuStack_108;
        *ppppuVar6 = pppuStack_110;
        pppuStack_100 = (undefined8 ***)((ulong)pppuStack_100 & 0xffffffffffffff);
        pppuStack_110 = (undefined8 ***)((ulong)pppuStack_110 & 0xffffffffffffff00);
        ppppuVar6[5] = (undefined8 ***)CONCAT44(uStack_e4,uStack_e8);
        ppppuVar6[4] = (undefined8 ***)CONCAT71(uStack_ef,uStack_f0);
        ppppuVar6[3] = (undefined8 ***)CONCAT71(uStack_f7,uStack_f8);
      }
    }
    else {
      uVar13 = ((long)pppuStack_128 - (long)pppuStack_130 >> 4) * -0x5555555555555555 + 1;
      if (0x555555555555555 < uVar13) {
        FUN_109f489f8();
        goto LAB_109f5e5d8;
      }
      lVar11 = (long)pppuStack_120 - (long)pppuStack_130 >> 4;
      uVar14 = lVar11 * 0x5555555555555556;
      if (uVar14 < uVar13 || uVar14 - uVar13 == 0) {
        uVar14 = uVar13;
      }
      if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar11 * -0x5555555555555555)) {
        uVar14 = 0x555555555555555;
      }
      pppuStack_98 = &pppuStack_130;
      if (uVar14 == 0) {
        ppppuVar8 = (undefined8 ****)0x0;
        uVar14 = 0;
      }
      else {
        ppppuVar8 = &pppuStack_130;
        FUN_109f48a0c();
        uVar14 = uVar14 * 0x30;
      }
      uVar13 = (long)ppppuVar6 - (long)pppuVar19;
      pppuStack_b0 = (undefined8 ***)((long)ppppuVar8 + uVar13);
      pppuStack_a0 = (undefined8 ***)((long)ppppuVar8 + uVar14);
      pppuStack_b8 = ppppuVar8;
      pppuStack_a8 = pppuStack_b0;
      if (uVar13 == uVar14) {
        if ((long)uVar13 < 1) {
          uVar14 = 1;
          if (ppppuVar6 != (undefined8 ****)pppuVar19) {
            uVar14 = (-uVar13 >> 4) * -0x5555555555555556;
          }
          pppuStack_70 = &pppuStack_130;
          ppppuVar8 = &pppuStack_130;
          uVar13 = uVar14;
          FUN_109f48a0c();
          ppppuVar12 = ppppuVar8 + (uVar14 >> 2) * 6;
          ppppuVar15 = ppppuVar12;
          if ((long)pppuStack_a8 - (long)pppuStack_b0 != 0) {
            ppppuVar15 = (undefined8 ****)
                         ((long)ppppuVar12 + ((long)pppuStack_a8 - (long)pppuStack_b0));
            ppppuVar16 = ppppuVar12;
            ppppuVar17 = (undefined8 ****)pppuStack_b0;
            do {
              pppuVar20 = ppppuVar17[1];
              pppuVar19 = *ppppuVar17;
              ppppuVar16[2] = ppppuVar17[2];
              ppppuVar16[1] = pppuVar20;
              *ppppuVar16 = pppuVar19;
              ppppuVar17[1] = (undefined8 ***)0x0;
              ppppuVar17[2] = (undefined8 ***)0x0;
              *ppppuVar17 = (undefined8 ***)0x0;
              pppuVar20 = ppppuVar17[4];
              pppuVar19 = ppppuVar17[3];
              ppppuVar16[5] = ppppuVar17[5];
              ppppuVar16[4] = pppuVar20;
              ppppuVar16[3] = pppuVar19;
              ppppuVar16 = ppppuVar16 + 6;
              ppppuVar17 = ppppuVar17 + 6;
            } while (ppppuVar16 != ppppuVar15);
          }
          pppuStack_90 = pppuStack_b8;
          pppuStack_88 = pppuStack_b0;
          pppuStack_80 = pppuStack_a8;
          pppuStack_78 = pppuStack_a0;
          pppuStack_b8 = ppppuVar8;
          pppuStack_b0 = ppppuVar12;
          pppuStack_a8 = ppppuVar15;
          pppuStack_a0 = ppppuVar8 + uVar13 * 6;
          func_0x000109f48b88(&pppuStack_90);
        }
        else {
          pppuStack_b0 = pppuStack_b0 + ((uVar13 >> 4) * -0x5555555555555555 + 1 >> 1) * -6;
          pppuStack_a8 = pppuStack_b0;
        }
      }
      pppuVar3 = pppuStack_a8;
      pppuStack_a8[2] = pppuStack_100;
      pppuVar3[1] = pppuStack_108;
      *pppuVar3 = pppuStack_110;
      pppuStack_108 = (undefined8 ****)0x0;
      pppuStack_100 = (undefined8 ****)0x0;
      pppuStack_110 = (undefined8 ****)0x0;
      pppuVar20 = (undefined8 ***)CONCAT44(uStack_e4,uStack_e8);
      pppuVar19 = (undefined8 ***)CONCAT71(uStack_f7,uStack_f8);
      pppuVar3[4] = (undefined8 ***)CONCAT71(uStack_ef,uStack_f0);
      pppuVar3[3] = pppuVar19;
      pppuVar3[5] = pppuVar20;
      ppppuVar15 = (undefined8 ****)pppuStack_b0;
      pppuStack_a8 = pppuStack_a8 + 6;
      func_0x000109f48a50(&pppuStack_130,ppppuVar6,pppuStack_128);
      pppuStack_a8 = (undefined8 ***)((long)pppuStack_a8 + ((long)pppuStack_128 - (long)ppppuVar6));
      ppppuVar8 = (undefined8 ****)((long)pppuStack_b0 + ((long)pppuStack_130 - (long)ppppuVar6));
      pppuStack_128 = ppppuVar6;
      func_0x000109f48a50(&pppuStack_130,pppuStack_130,ppppuVar6,ppppuVar8);
      pppuVar19 = pppuStack_120;
      pppuStack_120 = pppuStack_a0;
      pppuStack_128 = pppuStack_a8;
      pppuStack_a8 = pppuStack_130;
      pppuStack_a0 = pppuVar19;
      pppuStack_b8 = pppuStack_130;
      pppuStack_b0 = pppuStack_130;
      pppuStack_130 = ppppuVar8;
      func_0x000109f48b88(&pppuStack_b8);
    }
    if ((long)pppuStack_100 < 0) {
      __ZdlPv(pppuStack_110);
    }
    ppppuVar6 = ppppuVar15 + 6;
    if (*param_1 == '\x02') {
      lStack_180 = lStack_180 + 0x10;
      lStack_140 = lStack_180;
    }
    else if (*param_1 == '\x01') {
      lStack_178 = lStack_178 + 0x28;
      lStack_148 = lStack_178;
    }
    else {
      lVar18 = lVar18 + 1;
      lStack_138 = lVar18;
    }
  } while( true );
}



/* Entry: 109f5e724; end: 109f5ef33;  */

void FUN_109f5e724(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  long lVar6;
  
  if ((bRam00000001137e7cf8 & 1) == 0) {
    iVar1 = 0x137e7cf8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001137e87f8 = 0;
      puRam00000001137e8808 = (undefined *)0x0;
      uRam00000001137e8800 = 3;
      puVar3 = &DAT_10f61d667;
      FUN_109f4f5c0();
      uRam00000001137e8810 = 1;
      puRam00000001137e8820 = (undefined *)0x0;
      uRam00000001137e8818 = 3;
      puVar4 = &DAT_10f2da815;
      puRam00000001137e8808 = puVar3;
      FUN_109f4ec1c();
      uRam00000001137e8828 = 2;
      puRam00000001137e8838 = (undefined *)0x0;
      uRam00000001137e8830 = 3;
      puVar3 = &UNK_10f61d671;
      puRam00000001137e8820 = puVar4;
      FUN_109f4fe58();
      uRam00000001137e8840 = 3;
      puRam00000001137e8850 = (undefined *)0x0;
      uRam00000001137e8848 = 3;
      puVar4 = &UNK_10f61d677;
      puRam00000001137e8838 = puVar3;
      FUN_109f4fe58();
      uRam00000001137e8858 = 4;
      puRam00000001137e8868 = (undefined *)0x0;
      uRam00000001137e8860 = 3;
      puVar3 = &UNK_10f61d67d;
      puRam00000001137e8850 = puVar4;
      FUN_109f4fe58();
      uRam00000001137e8870 = 5;
      puRam00000001137e8880 = (undefined *)0x0;
      uRam00000001137e8878 = 3;
      puRam00000001137e8868 = puVar3;
      FUN_109f4fea0();
      uRam00000001137e8888 = 6;
      puRam00000001137e8898 = (undefined *)0x0;
      uRam00000001137e8890 = 3;
      puVar4 = &DAT_10f61d683;
      puRam00000001137e8880 = puVar3;
      FUN_109f4ec1c();
      uRam00000001137e88a0 = 7;
      puRam00000001137e88b0 = (undefined *)0x0;
      uRam00000001137e88a8 = 3;
      puVar3 = &DAT_10f61d688;
      puRam00000001137e8898 = puVar4;
      FUN_109f4ec1c();
      uRam00000001137e88b8 = 8;
      puRam00000001137e88c8 = (undefined *)0x0;
      uRam00000001137e88c0 = 3;
      puVar4 = &DAT_10f61d68d;
      puRam00000001137e88b0 = puVar3;
      FUN_109f4ec1c();
      uRam00000001137e88d0 = 9;
      puRam00000001137e88e0 = (undefined *)0x0;
      uRam00000001137e88d8 = 3;
      puVar3 = &DAT_10f61d692;
      puRam00000001137e88c8 = puVar4;
      FUN_109f4ec1c();
      uRam00000001137e88e8 = 10;
      puRam00000001137e88f8 = (undefined *)0x0;
      uRam00000001137e88f0 = 3;
      puVar4 = &DAT_10f61d697;
      puRam00000001137e88e0 = puVar3;
      FUN_109f4fe58();
      uRam00000001137e8900 = 0xb;
      puRam00000001137e8910 = (undefined *)0x0;
      uRam00000001137e8908 = 3;
      puVar3 = &DAT_10f61d69d;
      puRam00000001137e88f8 = puVar4;
      FUN_109f4fe58();
      uRam00000001137e8918 = 0xc;
      puRam00000001137e8928 = (undefined *)0x0;
      uRam00000001137e8920 = 3;
      puVar4 = &DAT_10f61d6a3;
      puRam00000001137e8910 = puVar3;
      FUN_109f4fe58();
      uRam00000001137e8930 = 0xd;
      puRam00000001137e8940 = (undefined *)0x0;
      uRam00000001137e8938 = 3;
      puVar3 = &DAT_10f5a35b4;
      puRam00000001137e8928 = puVar4;
      FUN_109f4fe58();
      uRam00000001137e8948 = 0xe;
      puRam00000001137e8958 = (undefined *)0x0;
      uRam00000001137e8950 = 3;
      puVar4 = &DAT_10f61d6a9;
      puRam00000001137e8940 = puVar3;
      FUN_109f4f530();
      uRam00000001137e8960 = 0xf;
      puRam00000001137e8970 = (undefined *)0x0;
      uRam00000001137e8968 = 3;
      puVar3 = &DAT_10f61d6b0;
      puRam00000001137e8958 = puVar4;
      FUN_109f4f530();
      uRam00000001137e8978 = 0x10;
      puRam00000001137e8988 = (undefined *)0x0;
      uRam00000001137e8980 = 3;
      puVar4 = &DAT_10f61d6b7;
      puRam00000001137e8970 = puVar3;
      FUN_109f4f530();
      uRam00000001137e8990 = 0x11;
      puRam00000001137e89a0 = (undefined *)0x0;
      uRam00000001137e8998 = 3;
      puVar3 = &UNK_10f61d6be;
      puRam00000001137e8988 = puVar4;
      FUN_109f4fee8();
      uRam00000001137e89a8 = 0x12;
      puRam00000001137e89b8 = (undefined *)0x0;
      uRam00000001137e89b0 = 3;
      puVar4 = &UNK_10f61d6c7;
      puRam00000001137e89a0 = puVar3;
      FUN_109f4fee8();
      uRam00000001137e89c0 = 0x13;
      puRam00000001137e89d0 = (undefined *)0x0;
      uRam00000001137e89c8 = 3;
      puVar3 = &UNK_10f61d6d0;
      puRam00000001137e89b8 = puVar4;
      FUN_109f4fee8();
      uRam00000001137e89d8 = 0x14;
      puRam00000001137e89e8 = (undefined *)0x0;
      uRam00000001137e89e0 = 3;
      puVar4 = &DAT_10f5a35aa;
      puRam00000001137e89d0 = puVar3;
      FUN_109f4f5c0();
      uRam00000001137e89f0 = 0x15;
      puRam00000001137e8a00 = (undefined *)0x0;
      uRam00000001137e89f8 = 3;
      puVar3 = &DAT_10f61d6d9;
      puRam00000001137e89e8 = puVar4;
      FUN_109f4f578();
      uRam00000001137e8a08 = 0x16;
      puRam00000001137e8a18 = (undefined *)0x0;
      uRam00000001137e8a10 = 3;
      puVar4 = &DAT_10f61d6e4;
      puRam00000001137e8a00 = puVar3;
      FUN_109f4f578();
      uRam00000001137e8a20 = 0x17;
      puRam00000001137e8a30 = (undefined *)0x0;
      uRam00000001137e8a28 = 3;
      puVar3 = &DAT_10f61d6ef;
      puRam00000001137e8a18 = puVar4;
      FUN_109f4f578();
      uRam00000001137e8a38 = 0x18;
      puRam00000001137e8a48 = (undefined *)0x0;
      uRam00000001137e8a40 = 3;
      puVar4 = &UNK_10f61d6fa;
      puRam00000001137e8a30 = puVar3;
      FUN_109f4fe58();
      uRam00000001137e8a50 = 0x19;
      puRam00000001137e8a60 = (undefined *)0x0;
      uRam00000001137e8a58 = 3;
      puVar3 = &DAT_10f61d700;
      puRam00000001137e8a48 = puVar4;
      FUN_109f4f530();
      uRam00000001137e8a68 = 0x1a;
      puRam00000001137e8a78 = (undefined *)0x0;
      uRam00000001137e8a70 = 3;
      puVar4 = &DAT_10f61d707;
      puRam00000001137e8a60 = puVar3;
      FUN_109f4f530();
      uRam00000001137e8a80 = 0x1b;
      puRam00000001137e8a90 = (undefined *)0x0;
      uRam00000001137e8a88 = 3;
      puVar3 = &DAT_10f61d70e;
      puRam00000001137e8a78 = puVar4;
      FUN_109f4f530();
      uRam00000001137e8a98 = 0x1c;
      puRam00000001137e8aa8 = (undefined *)0x0;
      uRam00000001137e8aa0 = 3;
      puVar4 = &UNK_10f61d715;
      puRam00000001137e8a90 = puVar3;
      FUN_109f4f530();
      uRam00000001137e8ab0 = 0x1d;
      puRam00000001137e8ac0 = (undefined *)0x0;
      uRam00000001137e8ab8 = 3;
      puVar3 = &UNK_10f61d71c;
      puRam00000001137e8aa8 = puVar4;
      FUN_109f4eb8c();
      uRam00000001137e8ac8 = 0x1e;
      puRam00000001137e8ad8 = (undefined *)0x0;
      uRam00000001137e8ad0 = 3;
      puVar4 = &UNK_10f61d724;
      puRam00000001137e8ac0 = puVar3;
      FUN_109f4eb8c();
      uRam00000001137e8ae0 = 0x1f;
      puRam00000001137e8af0 = (undefined *)0x0;
      uRam00000001137e8ae8 = 3;
      puVar3 = &UNK_10f61d72c;
      puRam00000001137e8ad8 = puVar4;
      FUN_109f4eb8c();
      uRam00000001137e8af8 = 0x20;
      puRam00000001137e8b08 = (undefined *)0x0;
      uRam00000001137e8b00 = 3;
      puVar4 = &DAT_10f517cd7;
      puRam00000001137e8af0 = puVar3;
      FUN_109f4fe58();
      puRam00000001137e8b08 = puVar4;
      ___cxa_atexit(0x109f60fc8,0,0x100000000);
      ___cxa_guard_release(0x1137e7cf8);
    }
  }
  puVar5 = (undefined4 *)0x1137e87f8;
  lVar6 = 0x318;
  do {
    puVar2 = puVar5 + 2;
    FUN_109f5ef34(puVar2,param_1);
    if (((ulong)puVar2 & 1) != 0) {
      if (lVar6 != 0) goto LAB_109f5e788;
      break;
    }
    puVar5 = puVar5 + 6;
    lVar6 = lVar6 + -0x18;
  } while (lVar6 != 0);
  puVar5 = (undefined4 *)0x1137e87f8;
LAB_109f5e788:
  *param_2 = *puVar5;
  return;
}



/* Entry: 109f5ef34; end: 109f5f23f;  */

ulong FUN_109f5ef34(byte *param_1,byte *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  
  bVar4 = *param_1;
  bVar5 = *param_2;
  if (bVar4 != bVar5) {
    if (bVar4 == 5 && bVar5 == 7) {
      dVar15 = (double)*(long *)(param_1 + 8);
LAB_109f5f00c:
      bVar6 = *(double *)(param_2 + 8) == dVar15;
    }
    else {
      if (bVar4 == 7 && bVar5 == 5) {
        dVar15 = *(double *)(param_1 + 8);
        dVar16 = (double)*(long *)(param_2 + 8);
      }
      else {
        if (bVar4 == 6 && bVar5 == 7) {
          dVar15 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 8));
          goto LAB_109f5f00c;
        }
        if ((bVar4 != 7) || (bVar5 != 6)) {
          if ((bVar4 != 6) || (bVar5 != 5)) {
            if (bVar4 != 5) {
              return 0;
            }
            if (bVar5 != 6) {
              return 0;
            }
          }
          goto LAB_109f5f21c;
        }
        dVar15 = *(double *)(param_1 + 8);
        dVar16 = (double)NEON_ucvtf(*(undefined8 *)(param_2 + 8));
      }
LAB_109f5f1f0:
      bVar6 = dVar15 == dVar16;
    }
    goto LAB_109f5f228;
  }
  if (bVar4 < 4) {
    if (bVar4 < 2) {
      if (bVar4 == 0) {
        return 1;
      }
      if (bVar4 == 1) {
        lVar7 = **(long **)(param_1 + 8);
        lVar2 = (*(long **)(param_1 + 8))[1];
        lVar1 = **(long **)(param_2 + 8);
        if (lVar2 - lVar7 == (*(long **)(param_2 + 8))[1] - lVar1) {
          if (lVar7 == lVar2) {
            return 1;
          }
          lVar14 = 0;
          do {
            plVar11 = (long *)(lVar1 + lVar14);
            plVar13 = (long *)(lVar7 + lVar14);
            bVar4 = *(byte *)((long)plVar13 + 0x17);
            uVar12 = plVar13[1];
            if (-1 < (char)bVar4) {
              uVar12 = (ulong)bVar4;
            }
            bVar5 = *(byte *)((long)plVar11 + 0x17);
            uVar3 = plVar11[1];
            if (-1 < (char)bVar5) {
              uVar3 = (ulong)bVar5;
            }
            if (uVar12 != uVar3) {
              return 0;
            }
            plVar9 = (long *)*plVar13;
            if (-1 < (char)bVar4) {
              plVar9 = plVar13;
            }
            plVar13 = (long *)*plVar11;
            if (-1 < (char)bVar5) {
              plVar13 = plVar11;
            }
            _memcmp(plVar9,plVar13);
            if ((int)plVar9 != 0) {
              return 0;
            }
            lVar8 = lVar7 + lVar14 + 0x18;
            FUN_109f5ef34(lVar8,lVar1 + lVar14 + 0x18);
            if ((int)lVar8 == 0) {
              return 0;
            }
            lVar14 = lVar14 + 0x28;
          } while (lVar7 + lVar14 != lVar2);
          return 1;
        }
      }
      return 0;
    }
    if (bVar4 == 2) {
      uVar12 = **(ulong **)(param_1 + 8);
      uVar3 = (*(ulong **)(param_1 + 8))[1];
      lVar7 = **(long **)(param_2 + 8);
      if (uVar3 - uVar12 != (*(long **)(param_2 + 8))[1] - lVar7) {
        return 0;
      }
      if (uVar12 == uVar3) {
        return 1;
      }
      do {
        uVar10 = uVar12;
        FUN_109f5ef34(uVar12,lVar7);
        if ((int)uVar10 == 0) {
          return uVar10;
        }
        uVar12 = uVar12 + 0x10;
        lVar7 = lVar7 + 0x10;
      } while (uVar12 != uVar3);
      return uVar10;
    }
    if (bVar4 != 3) {
      return 0;
    }
    plVar13 = *(long **)(param_1 + 8);
    plVar11 = *(long **)(param_2 + 8);
    bVar4 = *(byte *)((long)plVar13 + 0x17);
    uVar12 = plVar13[1];
    if (-1 < (char)bVar4) {
      uVar12 = (ulong)bVar4;
    }
    bVar5 = *(byte *)((long)plVar11 + 0x17);
    uVar3 = plVar11[1];
    if (-1 < (char)bVar5) {
      uVar3 = (ulong)bVar5;
    }
    if (uVar12 != uVar3) {
      return 0;
    }
    plVar9 = (long *)*plVar13;
    if (-1 < (char)bVar4) {
      plVar9 = plVar13;
    }
    plVar13 = (long *)*plVar11;
    if (-1 < (char)bVar5) {
      plVar13 = plVar11;
    }
    _memcmp(plVar9,plVar13);
    bVar6 = (int)plVar9 == 0;
    goto LAB_109f5f228;
  }
  if (bVar4 < 6) {
    if (bVar4 == 4) {
      bVar4 = param_1[8];
      bVar5 = param_2[8];
      goto LAB_109f5f1e0;
    }
    if (bVar4 != 5) {
      return 0;
    }
  }
  else if (bVar4 != 6) {
    if (bVar4 == 7) {
      dVar15 = *(double *)(param_1 + 8);
      dVar16 = *(double *)(param_2 + 8);
      goto LAB_109f5f1f0;
    }
    if (bVar4 != 8) {
      return 0;
    }
    plVar11 = *(long **)(param_1 + 8);
    plVar13 = *(long **)(param_2 + 8);
    lVar7 = *plVar11;
    if (plVar11[1] - lVar7 != plVar13[1] - *plVar13) {
      return 0;
    }
    _memcmp();
    if ((int)lVar7 != 0) {
      return 0;
    }
    if ((char)plVar11[3] != (char)plVar13[3]) {
      return 0;
    }
    bVar4 = *(byte *)((long)plVar11 + 0x19);
    bVar5 = *(byte *)((long)plVar13 + 0x19);
LAB_109f5f1e0:
    bVar6 = bVar4 == bVar5;
    goto LAB_109f5f228;
  }
LAB_109f5f21c:
  bVar6 = *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
LAB_109f5f228:
  return (ulong)bVar6;
}



/* Entry: 109f5f240; end: 109f5f277;  */

void FUN_109f5f240(long *param_1)

{
  if (*param_1 != 0) {
    FUN_109f48c50();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 109f5f278; end: 109f5f2db;  */

void FUN_109f5f278(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x38;
        FUN_109f5a570(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 109f5f2dc; end: 109f5f2ef;  */

void FUN_109f5f2dc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if ((ulong)param_2 >> 0x3a != 0) {
    func_0x000104c4f740();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        param_4[2] = puVar1[2];
        param_4[1] = uVar3;
        *param_4 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        uVar2 = puVar1[3];
        *(undefined4 *)(param_4 + 4) = *(undefined4 *)(puVar1 + 4);
        param_4[3] = uVar2;
        param_4[6] = 0;
        param_4[7] = 0;
        param_4[5] = 0;
        uVar2 = puVar1[5];
        param_4[6] = puVar1[6];
        param_4[5] = uVar2;
        param_4[7] = puVar1[7];
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
        puVar1 = puVar1 + 8;
        param_4 = param_4 + 8;
      } while (puVar1 != param_3);
      do {
        FUN_109f5a474(param_2);
        param_2 = param_2 + 8;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 << 6);
  return;
}


