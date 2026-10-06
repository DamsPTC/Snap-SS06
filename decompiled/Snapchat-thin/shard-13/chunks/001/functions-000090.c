/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a09b3e8; end: 10a09b4e7;  */

void FUN_10a09b3e8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lStack_28;
  
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a09b4b8);
    (*pcVar5)();
  }
  lStack_28 = param_1[3];
  param_1[3] = 0;
  *(undefined4 *)(*param_1 + 0xd0) = 3;
  func_0x000109375044(0);
  lVar4 = lStack_28;
  plVar1 = (long *)(lStack_28 + 0x10);
  do {
    lVar6 = *plVar1;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lStack_28 + 0x18);
        goto LAB_10a09b470;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_10a09b470:
      if ((char)param_1[2] == '\x01') {
        *(undefined1 *)(param_1 + 2) = 0;
      }
      lStack_28 = 0;
      if ((lVar4 != 0) && (func_0x0001092b4274(&lStack_28,lVar4), lStack_28 != 0)) {
        func_0x0001092b4274(&lStack_28);
      }
      return;
    }
  } while( true );
}



/* Entry: 10a09b4e8; end: 10a09b62f;  */

undefined8 * FUN_10a09b4e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba0868;
  if (param_1[0x17] != 0) {
    func_0x0001092b4274();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a09b630; end: 10a09b69f;  */

undefined8 * FUN_10a09b630(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_10a09b6a0(puVar1,puVar1 + 0x105,0x57,0,param_2);
  lVar3 = *param_1;
  if ((undefined8 *)(lVar3 + 0x828) != puVar1) {
    uVar2 = *param_2;
    FUN_10a003d5c(uVar2,param_2[1],*puVar1,puVar1[1]);
    if (((uint)uVar2 >> 7 & 1) == 0) {
      return puVar1;
    }
    lVar3 = *param_1;
  }
  return (undefined8 *)(lVar3 + 0x828);
}



/* Entry: 10a09b6a0; end: 10a09b747;  */

undefined1  [16]
FUN_10a09b6a0(long param_1,undefined8 *param_2,ulong param_3,ulong param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  
  if (param_3 != 0) {
    puVar2 = param_2;
    while( true ) {
      while( true ) {
        param_2 = (undefined8 *)(param_1 + param_4 * 0x18);
        uVar1 = *param_2;
        FUN_10a003d5c(uVar1,param_2[1],*param_5,param_5[1]);
        if (((uint)uVar1 >> 7 & 1) != 0) break;
        if (param_3 >> 1 <= param_4) goto LAB_10a09b724;
        param_4 = param_4 << 1 | 1;
        puVar2 = param_2;
      }
      param_2 = puVar2;
      if (param_3 - 1 >> 1 <= param_4) break;
      param_4 = param_4 * 2 + 2;
    }
  }
LAB_10a09b724:
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_2;
  return auVar3;
}



/* Entry: 10a09b748; end: 10a09b7bb;  */

int * FUN_10a09b748(long param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  ulong uVar3;
  int *piVar4;
  
  uVar3 = 0;
  piVar1 = (int *)(param_1 + 0x6b8);
  piVar2 = piVar1;
  while( true ) {
    for (; piVar4 = (int *)(param_1 + uVar3 * 0x14), *piVar4 < *param_2; uVar3 = uVar3 * 2 + 2) {
      piVar4 = piVar2;
      if (0x29 < uVar3) goto LAB_10a09b7a0;
    }
    if (0x2a < uVar3) break;
    uVar3 = uVar3 << 1 | 1;
    piVar2 = piVar4;
  }
LAB_10a09b7a0:
  if ((piVar1 == piVar4) || (*param_2 < *piVar4)) {
    piVar4 = piVar1;
  }
  return piVar4;
}



/* Entry: 10a09b7bc; end: 10a09b83f;  */

void FUN_10a09b7bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a09b840(param_1,param_4);
    lVar1 = param_1;
    FUN_10a09b8c0(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a09b840; end: 10a09b877;  */

undefined1  [16]
FUN_10a09b840(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined *puStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined1 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    plVar1 = param_1;
    FUN_10a09b88c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 4);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = plVar1;
    return auVar7;
  }
  FUN_10a09b878();
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3b == 0) {
    lVar3 = (long)param_2 << 5;
    __Znwm(lVar3);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar3;
    return auVar8;
  }
  func_0x000109ffded8();
  ppuStack_a8 = &puStack_90;
  ppuStack_a0 = &puStack_88;
  uStack_98 = 0;
  puStack_b0 = puVar2;
  puVar4 = param_2;
  puStack_90 = param_4;
  for (; puStack_88 = param_4, param_2 != param_3; param_2 = param_2 + 4) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      puVar4 = (undefined8 *)*param_2;
      func_0x000107c3192c(param_4,puVar4,param_2[1]);
    }
    else {
      uVar6 = param_2[1];
      uVar5 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar6;
      *param_4 = uVar5;
    }
    *(undefined4 *)(param_4 + 3) = *(undefined4 *)(param_2 + 3);
    param_4 = puStack_88 + 4;
  }
  uStack_98 = 1;
  FUN_10a09b988(&puStack_b0);
  auVar9._8_8_ = puVar4;
  auVar9._0_8_ = param_4;
  return auVar9;
}



/* Entry: 10a09b878; end: 10a09b88b;  */

undefined1  [16]
FUN_10a09b878(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3b == 0) {
    lVar2 = (long)param_2 << 5;
    __Znwm(lVar2);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar2;
    return auVar6;
  }
  func_0x000109ffded8();
  ppuStack_88 = &puStack_70;
  ppuStack_80 = &puStack_68;
  uStack_78 = 0;
  puStack_90 = puVar1;
  puVar3 = param_2;
  puStack_70 = param_4;
  for (; puStack_68 = param_4, param_2 != param_3; param_2 = param_2 + 4) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      puVar3 = (undefined8 *)*param_2;
      func_0x000107c3192c(param_4,puVar3,param_2[1]);
    }
    else {
      uVar5 = param_2[1];
      uVar4 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar5;
      *param_4 = uVar4;
    }
    *(undefined4 *)(param_4 + 3) = *(undefined4 *)(param_2 + 3);
    param_4 = puStack_68 + 4;
  }
  uStack_78 = 1;
  FUN_10a09b988(&puStack_90);
  auVar7._8_8_ = puVar3;
  auVar7._0_8_ = param_4;
  return auVar7;
}



/* Entry: 10a09b88c; end: 10a09b8bf;  */

undefined1  [16]
FUN_10a09b88c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    lVar1 = (long)param_2 << 5;
    __Znwm(lVar1);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar1;
    return auVar5;
  }
  func_0x000109ffded8();
  ppuStack_78 = &puStack_60;
  ppuStack_70 = &puStack_58;
  uStack_68 = 0;
  uStack_80 = param_1;
  puVar2 = param_2;
  puStack_60 = param_4;
  for (; puStack_58 = param_4, param_2 != param_3; param_2 = param_2 + 4) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      puVar2 = (undefined8 *)*param_2;
      func_0x000107c3192c(param_4,puVar2,param_2[1]);
    }
    else {
      uVar4 = param_2[1];
      uVar3 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar4;
      *param_4 = uVar3;
    }
    *(undefined4 *)(param_4 + 3) = *(undefined4 *)(param_2 + 3);
    param_4 = puStack_58 + 4;
  }
  uStack_68 = 1;
  FUN_10a09b988(&uStack_80);
  auVar6._8_8_ = puVar2;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 10a09b8c0; end: 10a09b987;  */

undefined8 *
FUN_10a09b8c0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 4) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar2;
      *param_4 = uVar1;
    }
    *(undefined4 *)(param_4 + 3) = *(undefined4 *)(param_2 + 3);
    param_4 = puStack_38 + 4;
  }
  uStack_48 = 1;
  FUN_10a09b988(&uStack_60);
  return param_4;
}



/* Entry: 10a09b988; end: 10a09b9bb;  */

long FUN_10a09b988(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a09b9bc(param_1);
  }
  return param_1;
}



/* Entry: 10a09b9bc; end: 10a09ba3f;  */

/* WARNING: Removing unreachable block (ram,0x00010a09b9e8) */

void FUN_10a09b9bc(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x20
      ) {
  }
  return;
}



/* Entry: 10a09ba40; end: 10a09ba8b;  */

/* WARNING: Removing unreachable block (ram,0x00010a09ba6c) */

void FUN_10a09ba40(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x20) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10a09ba8c; end: 10a09c5d3;  */

/* WARNING: Possible PIC construction at 0x00010a09bb2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a09bb60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a09bb9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a09bfe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a09bf8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a09bfe4) */
/* WARNING: Removing unreachable block (ram,0x00010a09bff4) */
/* WARNING: Removing unreachable block (ram,0x00010a09c010) */
/* WARNING: Removing unreachable block (ram,0x00010a09c02c) */
/* WARNING: Removing unreachable block (ram,0x00010a09bb64) */
/* WARNING: Removing unreachable block (ram,0x00010a09bba0) */
/* WARNING: Removing unreachable block (ram,0x00010a09bbb0) */
/* WARNING: Removing unreachable block (ram,0x00010a09bbc4) */
/* WARNING: Removing unreachable block (ram,0x00010a09be14) */
/* WARNING: Removing unreachable block (ram,0x00010a09be18) */
/* WARNING: Removing unreachable block (ram,0x00010a09be28) */
/* WARNING: Removing unreachable block (ram,0x00010a09bbfc) */
/* WARNING: Removing unreachable block (ram,0x00010a09bc00) */
/* WARNING: Removing unreachable block (ram,0x00010a09bc14) */
/* WARNING: Removing unreachable block (ram,0x00010a09bc28) */
/* WARNING: Removing unreachable block (ram,0x00010a09be38) */
/* WARNING: Removing unreachable block (ram,0x00010a09be44) */
/* WARNING: Removing unreachable block (ram,0x00010a09be4c) */
/* WARNING: Removing unreachable block (ram,0x00010a09be64) */
/* WARNING: Removing unreachable block (ram,0x00010a09be68) */
/* WARNING: Removing unreachable block (ram,0x00010a09be70) */
/* WARNING: Removing unreachable block (ram,0x00010a09be7c) */
/* WARNING: Removing unreachable block (ram,0x00010a09be90) */
/* WARNING: Removing unreachable block (ram,0x00010a09be9c) */
/* WARNING: Removing unreachable block (ram,0x00010a09bea8) */
/* WARNING: Removing unreachable block (ram,0x00010a09bebc) */
/* WARNING: Removing unreachable block (ram,0x00010a09becc) */
/* WARNING: Removing unreachable block (ram,0x00010a09bed8) */
/* WARNING: Removing unreachable block (ram,0x00010a09bee0) */
/* WARNING: Removing unreachable block (ram,0x00010a09bee8) */
/* WARNING: Removing unreachable block (ram,0x00010a09bf08) */
/* WARNING: Removing unreachable block (ram,0x00010a09bf10) */
/* WARNING: Removing unreachable block (ram,0x00010a09bf18) */
/* WARNING: Removing unreachable block (ram,0x00010a09bf44) */
/* WARNING: Removing unreachable block (ram,0x00010a09bba8) */
/* WARNING: Removing unreachable block (ram,0x00010a09bc2c) */
/* WARNING: Removing unreachable block (ram,0x00010a09bc58) */
/* WARNING: Removing unreachable block (ram,0x00010a09bc6c) */
/* WARNING: Removing unreachable block (ram,0x00010a09bc7c) */
/* WARNING: Removing unreachable block (ram,0x00010a09bcb0) */
/* WARNING: Removing unreachable block (ram,0x00010a09bcb4) */
/* WARNING: Removing unreachable block (ram,0x00010a09bcbc) */
/* WARNING: Removing unreachable block (ram,0x00010a09bc88) */
/* WARNING: Removing unreachable block (ram,0x00010a09bc90) */
/* WARNING: Removing unreachable block (ram,0x00010a09bca8) */
/* WARNING: Removing unreachable block (ram,0x00010a09bcd4) */
/* WARNING: Removing unreachable block (ram,0x00010a09bce4) */
/* WARNING: Removing unreachable block (ram,0x00010a09bcf0) */
/* WARNING: Removing unreachable block (ram,0x00010a09bd04) */
/* WARNING: Removing unreachable block (ram,0x00010a09bd10) */
/* WARNING: Removing unreachable block (ram,0x00010a09bd1c) */
/* WARNING: Removing unreachable block (ram,0x00010a09bd30) */
/* WARNING: Removing unreachable block (ram,0x00010a09bd40) */
/* WARNING: Removing unreachable block (ram,0x00010a09bd4c) */
/* WARNING: Removing unreachable block (ram,0x00010a09bd54) */
/* WARNING: Removing unreachable block (ram,0x00010a09bd5c) */
/* WARNING: Removing unreachable block (ram,0x00010a09bd7c) */
/* WARNING: Removing unreachable block (ram,0x00010a09bd84) */
/* WARNING: Removing unreachable block (ram,0x00010a09bd8c) */
/* WARNING: Removing unreachable block (ram,0x00010a09bdb4) */
/* WARNING: Removing unreachable block (ram,0x00010a09bdbc) */
/* WARNING: Removing unreachable block (ram,0x00010a09bddc) */
/* WARNING: Removing unreachable block (ram,0x00010a09be0c) */
/* WARNING: Removing unreachable block (ram,0x00010a09be10) */
/* WARNING: Removing unreachable block (ram,0x00010a09bdfc) */
/* WARNING: Removing unreachable block (ram,0x00010a09be00) */
/* WARNING: Removing unreachable block (ram,0x00010a09bdc4) */
/* WARNING: Removing unreachable block (ram,0x00010a09bf4c) */
/* WARNING: Removing unreachable block (ram,0x00010a09bf50) */
/* WARNING: Removing unreachable block (ram,0x00010a09bf54) */
/* WARNING: Removing unreachable block (ram,0x00010a09bb30) */
/* WARNING: Removing unreachable block (ram,0x00010a09bf90) */
/* WARNING: Removing unreachable block (ram,0x00010a09c374) */

void FUN_10a09ba8c(ulong *******param_1,ulong *******param_2,ulong *******param_3,
                  ulong *******param_4)

{
  ulong uVar1;
  ulong *******pppppppuVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong *******pppppppuVar5;
  bool bVar6;
  uint uVar7;
  byte bVar8;
  code *pcVar9;
  undefined1 *puVar10;
  ulong *******pppppppuVar11;
  ulong *******pppppppuVar12;
  ulong *******pppppppuVar13;
  undefined1 *puVar14;
  ulong *******pppppppuVar15;
  long lVar16;
  long lVar17;
  ulong ******ppppppuVar18;
  ulong ******ppppppuVar19;
  ulong *******pppppppuVar20;
  ulong *******pppppppuVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  ulong *******pppppppuVar27;
  ulong *******pppppppuVar28;
  undefined8 *******pppppppuVar29;
  undefined8 uVar30;
  ulong ******ppppppuVar31;
  undefined1 auStack_120 [8];
  undefined7 uStack_118;
  undefined1 uStack_111;
  undefined7 uStack_110;
  long lStack_108;
  ulong ******ppppppuStack_100;
  ulong ******ppppppuStack_f8;
  ulong ******ppppppuStack_f0;
  ulong ******ppppppuStack_e8;
  undefined8 ******ppppppuStack_e0;
  code *pcStack_d8;
  undefined1 auStack_d0 [8];
  undefined4 uStack_c8;
  uint uStack_c4;
  ulong ******ppppppuStack_c0;
  ulong ******ppppppuStack_b8;
  ulong ******ppppppuStack_b0;
  ulong ******ppppppuStack_a8;
  ulong ******ppppppuStack_a0;
  ulong *****pppppuStack_98;
  ulong *****pppppuStack_90;
  undefined4 uStack_88;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  long lStack_68;
  
  puVar10 = auStack_d0;
  pppppppuVar29 = (undefined8 *******)&stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar22 = (long)param_2 - (long)param_1 >> 5;
  pppppppuVar11 = param_1;
  pppppppuVar15 = param_2;
  pppppppuVar13 = param_3;
  pppppppuVar12 = param_3;
  ppppppuStack_c0 = (ulong ******)param_2;
  ppppppuStack_b8 = (ulong ******)param_1;
  if (uVar22 - 2 == 0 || (long)uVar22 < 2) {
    if (1 < uVar22) {
      if (uVar22 == 2) {
        pppppppuVar11 = param_2 + -4;
        pppppppuVar15 = param_1;
        ppppppuStack_c0 = (ulong ******)pppppppuVar11;
        FUN_10a003e3c();
        if (((uint)pppppppuVar11 >> 7 & 1) != 0) {
          pppppppuVar11 = &ppppppuStack_b8;
          pppppppuVar15 = &ppppppuStack_c0;
          FUN_10a09c5d4();
        }
      }
      else {
LAB_10a09bb08:
        if ((long)uVar22 < 0x18) {
          if (((ulong)param_4 & 1) == 0) {
            if ((param_1 != param_2) && (pppppppuVar12 = param_1 + 4, pppppppuVar12 != param_2)) {
              lVar16 = 0x20;
              param_4 = param_1;
              lVar25 = 0;
              do {
                lVar17 = lVar16;
                pppppppuVar11 = pppppppuVar12;
                pppppppuVar15 = param_4;
                FUN_10a003e3c();
                if (((uint)pppppppuVar11 >> 7 & 1) != 0) {
                  pppppuStack_98 = (ulong *****)pppppppuVar12[1];
                  ppppppuStack_a0 = *pppppppuVar12;
                  pppppuStack_90 = (ulong *****)pppppppuVar12[2];
                  pppppppuVar12[1] = (ulong ******)0x0;
                  pppppppuVar12[2] = (ulong ******)0x0;
                  *pppppppuVar12 = (ulong ******)0x0;
                  uStack_88 = *(undefined4 *)(param_4 + 7);
                  do {
                    lVar16 = lVar25;
                    puVar3 = (undefined8 *)((long)param_1 + lVar16);
                    if (*(char *)((long)puVar3 + 0x37) < '\0') {
                      __ZdlPv(puVar3[4]);
                    }
                    puVar3[5] = puVar3[1];
                    puVar3[4] = *puVar3;
                    puVar3[6] = puVar3[2];
                    *(undefined1 *)((long)puVar3 + 0x17) = 0;
                    *(undefined1 *)puVar3 = 0;
                    *(undefined4 *)(puVar3 + 7) = *(undefined4 *)(puVar3 + 3);
                    if (lVar16 == -0x20) {
                    /* WARNING: Does not return */
                      pcVar9 = (code *)SoftwareBreakpoint(1,0x10a09c5d0);
                      (*pcVar9)();
                    }
                    pppppppuVar11 = &ppppppuStack_a0;
                    pppppppuVar15 = (ulong *******)(lVar16 + -0x20 + (long)param_1);
                    FUN_10a003e3c();
                    lVar25 = lVar16 + -0x20;
                  } while (((uint)pppppppuVar11 >> 7 & 1) != 0);
                  if (*(char *)((long)param_1 + lVar16 + 0x17) < '\0') {
                    pppppppuVar11 = *(ulong ********)((long)param_1 + lVar16);
                    __ZdlPv();
                  }
                  *(ulong ******)((long)param_1 + lVar16 + 0x10) = pppppuStack_90;
                  *(ulong ******)((long)param_1 + lVar16 + 8) = pppppuStack_98;
                  *(ulong *******)((long)param_1 + lVar16) = ppppppuStack_a0;
                  pppppuStack_90 = (ulong *****)((ulong)pppppuStack_90 & 0xffffffffffffff);
                  ppppppuStack_a0 = (ulong ******)((ulong)ppppppuStack_a0 & 0xffffffffffffff00);
                  *(undefined4 *)((long)param_1 + lVar16 + 0x18) = uStack_88;
                }
                param_4 = (ulong *******)((long)param_1 + lVar17);
                pppppppuVar12 = (ulong *******)((long)param_1 + lVar17 + 0x20);
                lVar16 = lVar17 + 0x20;
                lVar25 = lVar17;
              } while (pppppppuVar12 != param_2);
            }
          }
          else if ((param_1 != param_2) && (param_1 + 4 != param_2)) {
            lVar16 = 0;
            pppppppuVar21 = param_1 + 4;
            pppppppuVar20 = param_1;
            do {
              pppppppuVar12 = pppppppuVar21;
              pppppppuVar11 = pppppppuVar12;
              pppppppuVar15 = pppppppuVar20;
              FUN_10a003e3c();
              if (((uint)pppppppuVar11 >> 7 & 1) != 0) {
                pppppuStack_98 = (ulong *****)pppppppuVar12[1];
                ppppppuStack_a0 = *pppppppuVar12;
                pppppuStack_90 = (ulong *****)pppppppuVar12[2];
                pppppppuVar12[1] = (ulong ******)0x0;
                pppppppuVar12[2] = (ulong ******)0x0;
                *pppppppuVar12 = (ulong ******)0x0;
                uStack_88 = *(undefined4 *)(pppppppuVar20 + 7);
                lVar25 = lVar16;
                do {
                  lVar17 = lVar25;
                  puVar3 = (undefined8 *)((long)param_1 + lVar17);
                  if (*(char *)((long)puVar3 + 0x37) < '\0') {
                    pppppppuVar11 = (ulong *******)puVar3[4];
                    __ZdlPv();
                  }
                  puVar3[5] = puVar3[1];
                  puVar3[4] = *puVar3;
                  puVar3[6] = puVar3[2];
                  *(undefined1 *)((long)puVar3 + 0x17) = 0;
                  *(undefined1 *)puVar3 = 0;
                  *(undefined4 *)(puVar3 + 7) = *(undefined4 *)(puVar3 + 3);
                  pppppppuVar21 = param_1;
                  if (lVar17 == 0) goto LAB_10a09c0ec;
                  pppppppuVar11 = &ppppppuStack_a0;
                  pppppppuVar15 = (ulong *******)(lVar17 + -0x20 + (long)param_1);
                  FUN_10a003e3c();
                  lVar25 = lVar17 + -0x20;
                } while (((uint)pppppppuVar11 >> 7 & 1) != 0);
                pppppppuVar21 = (ulong *******)((long)param_1 + lVar17);
LAB_10a09c0ec:
                if (*(char *)((long)pppppppuVar21 + 0x17) < '\0') {
                  pppppppuVar11 = (ulong *******)*pppppppuVar21;
                  __ZdlPv();
                }
                pppppppuVar21[2] = (ulong ******)pppppuStack_90;
                pppppppuVar21[1] = (ulong ******)pppppuStack_98;
                *pppppppuVar21 = ppppppuStack_a0;
                *(undefined4 *)(pppppppuVar21 + 3) = uStack_88;
              }
              lVar16 = lVar16 + 0x20;
              pppppppuVar21 = pppppppuVar12 + 4;
              param_4 = pppppppuVar12;
              pppppppuVar20 = pppppppuVar12;
            } while (pppppppuVar12 + 4 != param_2);
          }
        }
        else {
          if (param_3 != (ulong *******)0x0) {
            pppppppuVar13 = param_2 + -4;
            if (uVar22 < 0x81) {
              uVar30 = 0x10a09bba0;
              puVar10 = auStack_d0;
              pppppppuVar11 = param_1 + (uVar22 >> 1) * 4;
              pppppppuVar15 = param_1;
              ppppppuStack_c0 = (ulong ******)param_2;
            }
            else {
              uVar30 = 0x10a09bb30;
              puVar10 = auStack_d0;
              pppppppuVar15 = param_1 + (uVar22 >> 1) * 4;
              ppppppuStack_c0 = (ulong ******)param_2;
            }
            goto SUB_10a09c698;
          }
          if (param_1 != param_2) {
            uVar23 = uVar22 - 2 >> 1;
            uVar24 = uVar23;
            do {
              if ((long)uVar24 <= (long)uVar23) {
                uVar4 = uVar24 << 1 | 1;
                pppppppuVar15 = param_1 + uVar4 * 4;
                uVar1 = uVar24 * 2 + 2;
                pppppppuVar12 = pppppppuVar15;
                uVar26 = uVar4;
                if ((long)uVar1 < (long)uVar22) {
                  pppppppuVar11 = pppppppuVar15;
                  FUN_10a003e3c(pppppppuVar15,pppppppuVar15 + 4);
                  pppppppuVar12 = pppppppuVar15 + 4;
                  uVar26 = uVar1;
                  if (-1 < (char)pppppppuVar11) {
                    pppppppuVar12 = pppppppuVar15;
                    uVar26 = uVar4;
                  }
                }
                pppppppuVar21 = param_1 + uVar24 * 4;
                pppppppuVar11 = pppppppuVar12;
                pppppppuVar15 = pppppppuVar21;
                FUN_10a003e3c();
                if (((uint)pppppppuVar11 >> 7 & 1) == 0) {
                  pppppuStack_98 = (ulong *****)pppppppuVar21[1];
                  ppppppuStack_a0 = *pppppppuVar21;
                  pppppuStack_90 = (ulong *****)pppppppuVar21[2];
                  pppppppuVar21[1] = (ulong ******)0x0;
                  pppppppuVar21[2] = (ulong ******)0x0;
                  *pppppppuVar21 = (ulong ******)0x0;
                  uStack_88 = *(undefined4 *)(pppppppuVar21 + 3);
                  do {
                    pppppppuVar20 = pppppppuVar12;
                    if (*(char *)((long)pppppppuVar21 + 0x17) < '\0') {
                      pppppppuVar11 = (ulong *******)*pppppppuVar21;
                      __ZdlPv();
                    }
                    ppppppuVar19 = pppppppuVar20[1];
                    ppppppuVar18 = *pppppppuVar20;
                    pppppppuVar21[2] = pppppppuVar20[2];
                    pppppppuVar21[1] = ppppppuVar19;
                    *pppppppuVar21 = ppppppuVar18;
                    *(undefined1 *)((long)pppppppuVar20 + 0x17) = 0;
                    *(undefined1 *)pppppppuVar20 = 0;
                    *(undefined4 *)(pppppppuVar21 + 3) = *(undefined4 *)(pppppppuVar20 + 3);
                    if ((long)uVar23 < (long)uVar26) break;
                    uVar4 = uVar26 << 1 | 1;
                    pppppppuVar15 = param_1 + uVar4 * 4;
                    uVar1 = uVar26 * 2 + 2;
                    pppppppuVar12 = pppppppuVar15;
                    uVar26 = uVar4;
                    if ((long)uVar1 < (long)uVar22) {
                      pppppppuVar11 = pppppppuVar15;
                      FUN_10a003e3c(pppppppuVar15,pppppppuVar15 + 4);
                      pppppppuVar12 = pppppppuVar15 + 4;
                      uVar26 = uVar1;
                      if (-1 < (char)pppppppuVar11) {
                        pppppppuVar12 = pppppppuVar15;
                        uVar26 = uVar4;
                      }
                    }
                    pppppppuVar15 = &ppppppuStack_a0;
                    pppppppuVar11 = pppppppuVar12;
                    FUN_10a003e3c();
                    pppppppuVar21 = pppppppuVar20;
                  } while (((uint)pppppppuVar11 >> 7 & 1) == 0);
                  if (*(char *)((long)pppppppuVar20 + 0x17) < '\0') {
                    pppppppuVar11 = (ulong *******)*pppppppuVar20;
                    __ZdlPv();
                  }
                  pppppppuVar20[2] = (ulong ******)pppppuStack_90;
                  pppppppuVar20[1] = (ulong ******)pppppuStack_98;
                  *pppppppuVar20 = ppppppuStack_a0;
                  *(undefined4 *)(pppppppuVar20 + 3) = uStack_88;
                }
              }
              bVar6 = uVar24 != 0;
              uVar24 = uVar24 - 1;
              pppppppuVar21 = param_2;
            } while (bVar6);
            do {
              ppppppuVar18 = *param_1;
              uStack_78 = SUB87(param_1[1],0);
              uStack_71 = (undefined1)*(undefined8 *)((long)param_1 + 0xf);
              uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)param_1 + 0xf) >> 8);
              param_1[1] = (ulong ******)0x0;
              param_1[2] = (ulong ******)0x0;
              *param_1 = (ulong ******)0x0;
              uStack_c8 = *(undefined4 *)(param_1 + 3);
              uStack_c4 = (uint)*(byte *)((long)param_1 + 0x17);
              pppppppuVar20 = param_1;
              pppppppuVar27 = (ulong *******)0x0;
              do {
                pppppppuVar2 = pppppppuVar20 + (long)pppppppuVar27 * 4 + 4;
                pppppppuVar5 = (ulong *******)((long)pppppppuVar27 << 1 | 1);
                param_4 = (ulong *******)((long)pppppppuVar27 * 2 + 2);
                pppppppuVar12 = pppppppuVar2;
                pppppppuVar28 = pppppppuVar5;
                if ((long)param_4 < (long)uVar22) {
                  pppppppuVar11 = pppppppuVar2;
                  pppppppuVar15 = pppppppuVar20 + (long)pppppppuVar27 * 4 + 8;
                  FUN_10a003e3c();
                  pppppppuVar12 = pppppppuVar20 + (long)pppppppuVar27 * 4 + 8;
                  pppppppuVar28 = param_4;
                  if (-1 < (char)pppppppuVar11) {
                    pppppppuVar12 = pppppppuVar2;
                    pppppppuVar28 = pppppppuVar5;
                  }
                }
                if (*(char *)((long)pppppppuVar20 + 0x17) < '\0') {
                  pppppppuVar11 = (ulong *******)*pppppppuVar20;
                  __ZdlPv();
                }
                ppppppuVar31 = pppppppuVar12[1];
                ppppppuVar19 = *pppppppuVar12;
                pppppppuVar20[2] = pppppppuVar12[2];
                pppppppuVar20[1] = ppppppuVar31;
                *pppppppuVar20 = ppppppuVar19;
                *(undefined1 *)((long)pppppppuVar12 + 0x17) = 0;
                *(undefined1 *)pppppppuVar12 = 0;
                *(undefined4 *)(pppppppuVar20 + 3) = *(undefined4 *)(pppppppuVar12 + 3);
                pppppppuVar20 = pppppppuVar12;
                pppppppuVar27 = pppppppuVar28;
              } while ((long)pppppppuVar28 <= (long)(uVar22 - 2 >> 1));
              param_2 = pppppppuVar21 + -4;
              if (pppppppuVar12 == param_2) {
                if (*(char *)((long)pppppppuVar12 + 0x17) < '\0') {
                  pppppppuVar11 = (ulong *******)*pppppppuVar12;
                  __ZdlPv();
                }
                *pppppppuVar12 = ppppppuVar18;
                pppppppuVar12[1] = (ulong ******)CONCAT17(uStack_71,uStack_78);
                *(ulong *)((long)pppppppuVar12 + 0xf) = CONCAT71(uStack_70,uStack_71);
                *(char *)((long)pppppppuVar12 + 0x17) = (char)uStack_c4;
                *(undefined4 *)(pppppppuVar12 + 3) = uStack_c8;
              }
              else {
                if (*(char *)((long)pppppppuVar12 + 0x17) < '\0') {
                  pppppppuVar11 = (ulong *******)*pppppppuVar12;
                  __ZdlPv();
                }
                ppppppuVar31 = pppppppuVar21[-3];
                ppppppuVar19 = *param_2;
                pppppppuVar12[2] = pppppppuVar21[-2];
                pppppppuVar12[1] = ppppppuVar31;
                *pppppppuVar12 = ppppppuVar19;
                *(undefined1 *)((long)pppppppuVar21 + -9) = 0;
                *(undefined1 *)(pppppppuVar21 + -4) = 0;
                *(undefined4 *)(pppppppuVar12 + 3) = *(undefined4 *)(pppppppuVar21 + -1);
                pppppppuVar21[-4] = ppppppuVar18;
                pppppppuVar21[-3] = (ulong ******)CONCAT17(uStack_71,uStack_78);
                *(ulong *)((long)pppppppuVar21 + -0x11) = CONCAT71(uStack_70,uStack_71);
                *(char *)((long)pppppppuVar21 + -9) = (char)uStack_c4;
                *(undefined4 *)(pppppppuVar21 + -1) = uStack_c8;
                lVar16 = (long)pppppppuVar12 + (0x20 - (long)param_1) >> 5;
                if (1 < lVar16) {
                  uVar24 = lVar16 - 2U >> 1;
                  param_4 = param_1 + uVar24 * 4;
                  pppppppuVar11 = param_4;
                  pppppppuVar15 = pppppppuVar12;
                  FUN_10a003e3c();
                  if (((uint)pppppppuVar11 >> 7 & 1) != 0) {
                    pppppuStack_98 = (ulong *****)pppppppuVar12[1];
                    ppppppuStack_a0 = *pppppppuVar12;
                    pppppuStack_90 = (ulong *****)pppppppuVar12[2];
                    pppppppuVar12[1] = (ulong ******)0x0;
                    pppppppuVar12[2] = (ulong ******)0x0;
                    *pppppppuVar12 = (ulong ******)0x0;
                    uStack_88 = *(undefined4 *)(pppppppuVar12 + 3);
                    pppppppuVar21 = pppppppuVar12;
                    do {
                      pppppppuVar12 = param_4;
                      if (*(char *)((long)pppppppuVar21 + 0x17) < '\0') {
                        pppppppuVar11 = (ulong *******)*pppppppuVar21;
                        __ZdlPv();
                      }
                      ppppppuVar19 = pppppppuVar12[1];
                      ppppppuVar18 = *pppppppuVar12;
                      pppppppuVar21[2] = pppppppuVar12[2];
                      pppppppuVar21[1] = ppppppuVar19;
                      *pppppppuVar21 = ppppppuVar18;
                      *(undefined1 *)((long)pppppppuVar12 + 0x17) = 0;
                      *(undefined1 *)pppppppuVar12 = 0;
                      *(undefined4 *)(pppppppuVar21 + 3) = *(undefined4 *)(pppppppuVar12 + 3);
                      param_4 = pppppppuVar12;
                      if (uVar24 == 0) break;
                      uVar24 = uVar24 - 1 >> 1;
                      param_4 = param_1 + uVar24 * 4;
                      pppppppuVar15 = &ppppppuStack_a0;
                      pppppppuVar11 = param_4;
                      FUN_10a003e3c();
                      pppppppuVar21 = pppppppuVar12;
                    } while (((uint)pppppppuVar11 >> 7 & 1) != 0);
                    if (*(char *)((long)pppppppuVar12 + 0x17) < '\0') {
                      pppppppuVar11 = (ulong *******)*pppppppuVar12;
                      __ZdlPv();
                    }
                    pppppppuVar12[2] = (ulong ******)pppppuStack_90;
                    pppppppuVar12[1] = (ulong ******)pppppuStack_98;
                    *pppppppuVar12 = ppppppuStack_a0;
                    *(undefined4 *)(pppppppuVar12 + 3) = uStack_88;
                  }
                }
              }
              bVar6 = 2 < (long)uVar22;
              pppppppuVar21 = param_2;
              uVar22 = uVar22 - 1;
            } while (bVar6);
          }
        }
      }
    }
  }
  else {
    if (uVar22 == 3) {
      pppppppuVar13 = param_2 + -4;
      pppppppuVar15 = param_1 + 4;
      uVar30 = 0x10a09bf90;
      ppppppuStack_c0 = (ulong ******)pppppppuVar13;
      goto SUB_10a09c698;
    }
    if (uVar22 == 4) {
      param_3 = param_2 + -4;
      pppppppuVar15 = param_1 + 4;
      pppppppuVar13 = param_1 + 8;
      uStack_78 = SUB87(pppppppuVar15,0);
      uStack_71 = (undefined1)((ulong)pppppppuVar15 >> 0x38);
      uVar30 = 0x10a09bfe4;
      puVar10 = auStack_d0;
      param_2 = pppppppuVar15;
      param_4 = pppppppuVar13;
      ppppppuStack_c0 = (ulong ******)param_3;
      ppppppuStack_b0 = (ulong ******)param_3;
      ppppppuStack_a8 = (ulong ******)pppppppuVar13;
      ppppppuStack_a0 = (ulong ******)param_1;
      goto SUB_10a09c698;
    }
    if (uVar22 != 5) goto LAB_10a09bb08;
    ppppppuStack_c0 = (ulong ******)(param_2 + -4);
    pppppppuVar15 = param_1 + 4;
    pppppppuVar13 = param_1 + 8;
    FUN_10a09c744();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_10a09c5d4;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar18 = *pppppppuVar11;
  pppppppuVar20 = (ulong *******)*pppppppuVar15;
  pppppppuVar21 = (ulong *******)*ppppppuVar18;
  uStack_118 = SUB87(ppppppuVar18[1],0);
  uStack_111 = (undefined1)*(undefined8 *)((long)ppppppuVar18 + 0xf);
  uStack_110 = (undefined7)((ulong)*(undefined8 *)((long)ppppppuVar18 + 0xf) >> 8);
  bVar8 = *(byte *)((long)ppppppuVar18 + 0x17);
  param_3 = (ulong *******)(ulong)bVar8;
  ppppppuVar18[1] = (ulong *****)0x0;
  ppppppuVar18[2] = (ulong *****)0x0;
  *ppppppuVar18 = (ulong *****)0x0;
  uVar7 = *(uint *)(ppppppuVar18 + 3);
  ppppppuVar19 = pppppppuVar20[2];
  ppppppuVar31 = *pppppppuVar20;
  ppppppuVar18[1] = (ulong *****)pppppppuVar20[1];
  *ppppppuVar18 = (ulong *****)ppppppuVar31;
  ppppppuVar18[2] = (ulong *****)ppppppuVar19;
  *(undefined1 *)((long)pppppppuVar20 + 0x17) = 0;
  *(undefined1 *)pppppppuVar20 = 0;
  *(undefined4 *)(ppppppuVar18 + 3) = *(undefined4 *)(pppppppuVar20 + 3);
  ppppppuStack_100 = (ulong ******)param_4;
  ppppppuStack_f8 = (ulong ******)pppppppuVar12;
  ppppppuStack_f0 = (ulong ******)param_2;
  ppppppuStack_e8 = (ulong ******)param_1;
  ppppppuStack_e0 = pppppppuVar29;
  if (*(char *)((long)pppppppuVar20 + 0x17) < '\0') {
    pppppppuVar11 = (ulong *******)*pppppppuVar20;
    __ZdlPv();
  }
  *pppppppuVar20 = (ulong ******)pppppppuVar21;
  pppppppuVar20[1] = (ulong ******)CONCAT17(uStack_111,uStack_118);
  *(ulong *)((long)pppppppuVar20 + 0xf) = CONCAT71(uStack_110,uStack_111);
  *(byte *)((long)pppppppuVar20 + 0x17) = bVar8;
  *(uint *)(pppppppuVar20 + 3) = uVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  uVar30 = 0x10a09c698;
  ___stack_chk_fail();
  puVar10 = auStack_120;
  param_1 = pppppppuVar20;
  param_2 = pppppppuVar21;
  param_4 = (ulong *******)(ulong)uVar7;
  pppppppuVar29 = &ppppppuStack_e0;
SUB_10a09c698:
  *(ulong ********)(puVar10 + -0x30) = param_4;
  *(ulong ********)(puVar10 + -0x28) = param_3;
  *(ulong ********)(puVar10 + -0x20) = param_2;
  *(ulong ********)(puVar10 + -0x18) = param_1;
  *(undefined8 ********)(puVar10 + -0x10) = pppppppuVar29;
  *(undefined8 *)(puVar10 + -8) = uVar30;
  *(ulong ********)(puVar10 + -0x40) = pppppppuVar15;
  *(ulong ********)(puVar10 + -0x38) = pppppppuVar11;
  *(ulong ********)(puVar10 + -0x48) = pppppppuVar13;
  pppppppuVar12 = pppppppuVar15;
  FUN_10a003e3c(pppppppuVar15,pppppppuVar11);
  FUN_10a003e3c(pppppppuVar13,pppppppuVar15);
  if (((uint)pppppppuVar12 >> 7 & 1) == 0) {
    if (-1 < (char)pppppppuVar13) {
      return;
    }
    FUN_10a09c5d4(puVar10 + -0x40,puVar10 + -0x48);
    uVar30 = *(undefined8 *)(puVar10 + -0x40);
    FUN_10a003e3c(uVar30,*(undefined8 *)(puVar10 + -0x38));
    if (((uint)uVar30 >> 7 & 1) == 0) {
      return;
    }
    puVar14 = puVar10 + -0x38;
    puVar10 = puVar10 + -0x40;
  }
  else {
    puVar14 = puVar10 + -0x38;
    if (-1 < (char)pppppppuVar13) {
      FUN_10a09c5d4(puVar14,puVar10 + -0x40);
      uVar30 = *(undefined8 *)(puVar10 + -0x48);
      FUN_10a003e3c(uVar30,*(undefined8 *)(puVar10 + -0x40));
      if (((uint)uVar30 >> 7 & 1) == 0) {
        return;
      }
      puVar14 = puVar10 + -0x40;
    }
    puVar10 = puVar10 + -0x48;
  }
  FUN_10a09c5d4(puVar14,puVar10);
  return;
}



/* Entry: 10a09c5d4; end: 10a09c743;  */

void FUN_10a09c5d4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  byte bVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined7 uStack_48;
  undefined1 uStack_41;
  undefined7 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined8 *)*param_1;
  puVar8 = (undefined8 *)*param_2;
  uVar1 = *puVar6;
  uStack_48 = (undefined7)puVar6[1];
  uStack_41 = (undefined1)*(undefined8 *)((long)puVar6 + 0xf);
  uStack_40 = (undefined7)((ulong)*(undefined8 *)((long)puVar6 + 0xf) >> 8);
  bVar3 = *(byte *)((long)puVar6 + 0x17);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  uVar2 = *(uint *)(puVar6 + 3);
  uVar7 = puVar8[2];
  uVar9 = *puVar8;
  puVar6[1] = puVar8[1];
  *puVar6 = uVar9;
  puVar6[2] = uVar7;
  *(undefined1 *)((long)puVar8 + 0x17) = 0;
  *(undefined1 *)puVar8 = 0;
  *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(puVar8 + 3);
  if (*(char *)((long)puVar8 + 0x17) < '\0') {
    param_1 = (undefined8 *)*puVar8;
    __ZdlPv();
  }
  *puVar8 = uVar1;
  puVar8[1] = CONCAT17(uStack_41,uStack_48);
  *(ulong *)((long)puVar8 + 0xf) = CONCAT71(uStack_40,uStack_41);
  *(byte *)((long)puVar8 + 0x17) = bVar3;
  *(uint *)(puVar8 + 3) = uVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  uStack_58 = 0x10a09c698;
  puVar6 = param_2;
  puStack_98 = param_3;
  puStack_90 = param_2;
  puStack_88 = param_1;
  uStack_80 = (ulong)uVar2;
  uStack_78 = (ulong)bVar3;
  uStack_70 = uVar1;
  puStack_68 = puVar8;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_10a003e3c(param_2,param_1);
  FUN_10a003e3c(param_3,param_2);
  if (((uint)puVar6 >> 7 & 1) == 0) {
    if (-1 < (char)param_3) {
      return;
    }
    FUN_10a09c5d4(&puStack_90,&puStack_98);
    puVar6 = puStack_90;
    FUN_10a003e3c(puStack_90,puStack_88);
    if (((uint)puVar6 >> 7 & 1) == 0) {
      return;
    }
    ppuVar4 = &puStack_88;
    ppuVar5 = &puStack_90;
  }
  else {
    ppuVar4 = &puStack_88;
    if (-1 < (char)param_3) {
      FUN_10a09c5d4(ppuVar4,&puStack_90);
      puVar6 = puStack_98;
      FUN_10a003e3c(puStack_98,puStack_90);
      if (((uint)puVar6 >> 7 & 1) == 0) {
        return;
      }
      ppuVar4 = &puStack_90;
    }
    ppuVar5 = &puStack_98;
  }
  FUN_10a09c5d4(ppuVar4,ppuVar5);
  return;
}



/* Entry: 10a09c744; end: 10a09c867;  */

void FUN_10a09c744(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_88 = param_5;
  uStack_80 = param_4;
  uStack_78 = param_3;
  uStack_70 = param_2;
  uStack_68 = param_1;
  uStack_60 = param_4;
  uStack_58 = param_3;
  uStack_50 = param_2;
  uStack_48 = param_1;
  func_0x00010a09c698();
  uVar1 = param_4;
  FUN_10a003e3c(param_4,param_3);
  if (((uint)uVar1 >> 7 & 1) != 0) {
    func_0x00010a09c5d4(&uStack_58,&uStack_60);
    uVar1 = uStack_58;
    FUN_10a003e3c(uStack_58,param_2);
    if (((uint)uVar1 >> 7 & 1) != 0) {
      func_0x00010a09c5d4(&uStack_50,&uStack_58);
      uVar1 = uStack_50;
      FUN_10a003e3c(uStack_50,param_1);
      if (((uint)uVar1 >> 7 & 1) != 0) {
        func_0x00010a09c5d4(&uStack_48,&uStack_50);
      }
    }
  }
  FUN_10a003e3c(param_5,param_4);
  if (((uint)param_5 >> 7 & 1) != 0) {
    func_0x00010a09c5d4(&uStack_80,&uStack_88);
    uVar1 = uStack_80;
    FUN_10a003e3c(uStack_80,param_3);
    if (((uint)uVar1 >> 7 & 1) != 0) {
      func_0x00010a09c5d4(&uStack_78,&uStack_80);
      uVar1 = uStack_78;
      FUN_10a003e3c(uStack_78,param_2);
      if (((uint)uVar1 >> 7 & 1) != 0) {
        func_0x00010a09c5d4(&uStack_70,&uStack_78);
        uVar1 = uStack_70;
        FUN_10a003e3c(uStack_70,param_1);
        if (((uint)uVar1 >> 7 & 1) != 0) {
          func_0x00010a09c5d4(&uStack_68,&uStack_70);
        }
      }
    }
  }
  return;
}



/* Entry: 10a09c868; end: 10a09cb77;  */

ulong * FUN_10a09c868(ulong *param_1,ulong *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  uint uVar3;
  ulong **ppuVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong **ppuVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong *puStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined4 uStack_b8;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  ulong *puStack_90;
  ulong *puStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined7 uStack_48;
  undefined1 uStack_41;
  undefined7 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = (undefined8 *)*param_1;
  puVar11 = (undefined8 *)*param_2;
  uVar1 = *puVar8;
  uStack_48 = (undefined7)puVar8[1];
  uStack_41 = (undefined1)*(undefined8 *)((long)puVar8 + 0xf);
  uStack_40 = (undefined7)((ulong)*(undefined8 *)((long)puVar8 + 0xf) >> 8);
  bVar2 = *(byte *)((long)puVar8 + 0x17);
  uVar14 = (ulong)bVar2;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  uVar3 = *(uint *)(puVar8 + 3);
  uVar15 = (ulong)uVar3;
  uVar10 = puVar11[2];
  uVar16 = *puVar11;
  puVar8[1] = puVar11[1];
  *puVar8 = uVar16;
  puVar8[2] = uVar10;
  *(undefined1 *)((long)puVar11 + 0x17) = 0;
  *(undefined1 *)puVar11 = 0;
  *(undefined4 *)(puVar8 + 3) = *(undefined4 *)(puVar11 + 3);
  if (*(char *)((long)puVar11 + 0x17) < '\0') {
    param_1 = (ulong *)*puVar11;
    __ZdlPv();
  }
  *puVar11 = uVar1;
  puVar11[1] = CONCAT17(uStack_41,uStack_48);
  *(ulong *)((long)puVar11 + 0xf) = CONCAT71(uStack_40,uStack_41);
  *(byte *)((long)puVar11 + 0x17) = bVar2;
  *(uint *)(puVar11 + 3) = uVar3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_d0;
  uStack_58 = 0x10a09c92c;
  uVar9 = (long)param_2 - (long)param_1 >> 5;
  puStack_a8 = param_2;
  puStack_a0 = param_1;
  uStack_80 = uVar15;
  uStack_78 = uVar14;
  uStack_70 = uVar1;
  puStack_68 = puVar11;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((long)uVar9 < 3) {
    if (uVar9 < 2) {
      return (ulong *)0x1;
    }
    if (uVar9 != 2) {
LAB_10a09c9d4:
      func_0x00010a09c698(param_1,param_1 + 4,param_1 + 8);
      if (param_1 + 0xc == param_2) {
        return (ulong *)0x1;
      }
      iVar13 = 0;
      puVar6 = param_1 + 0xc;
      puVar5 = param_1 + 8;
      do {
        puVar12 = puVar6;
        puVar6 = puVar12;
        FUN_10a003e3c(puVar12,puVar5);
        if (((uint)puVar6 >> 7 & 1) != 0) {
          uStack_c8 = puVar12[1];
          puStack_d0 = (ulong *)*puVar12;
          uStack_c0 = puVar12[2];
          puVar12[1] = 0;
          puVar12[2] = 0;
          *puVar12 = 0;
          uStack_b8 = (undefined4)puVar12[3];
          do {
            puVar6 = puVar5;
            if (*(char *)((long)puVar6 + 0x37) < '\0') {
              __ZdlPv(puVar6[4]);
            }
            puVar6[5] = puVar6[1];
            puVar6[4] = *puVar6;
            puVar6[6] = puVar6[2];
            *(undefined1 *)((long)puVar6 + 0x17) = 0;
            *(undefined1 *)puVar6 = 0;
            *(int *)(puVar6 + 7) = (int)puVar6[3];
            if (puVar6 == puStack_a0) break;
            uVar3 = 0;
            FUN_10a003e3c(&puStack_d0,puVar6 + -4);
            puVar5 = puVar6 + -4;
          } while ((uVar3 >> 7 & 1) != 0);
          if (*(char *)((long)puVar6 + 0x17) < '\0') {
            __ZdlPv(*puVar6);
          }
          puVar6[2] = uStack_c0;
          puVar6[1] = uStack_c8;
          *puVar6 = (ulong)puStack_d0;
          uStack_c0 = uStack_c0 & 0xffffffffffffff;
          puStack_d0 = (ulong *)((ulong)puStack_d0 & 0xffffffffffffff00);
          *(undefined4 *)(puVar6 + 3) = uStack_b8;
          iVar13 = iVar13 + 1;
          if (iVar13 == 8) {
            return (ulong *)(ulong)(puVar12 + 4 == puStack_a8);
          }
        }
        puVar6 = puVar12 + 4;
        puVar5 = puVar12;
        if (puVar12 + 4 == puStack_a8) {
          return (ulong *)0x1;
        }
      } while( true );
    }
    param_2 = param_2 + -4;
    puStack_a8 = param_2;
    FUN_10a003e3c(param_2,param_1);
    if (((uint)param_2 >> 7 & 1) == 0) {
      return (ulong *)0x1;
    }
    ppuVar4 = &puStack_a0;
    ppuVar7 = &puStack_a8;
  }
  else {
    if (uVar9 == 3) {
      func_0x00010a09c698(param_1,param_1 + 4,param_2 + -4);
      return (ulong *)0x1;
    }
    if (uVar9 != 4) {
      if (uVar9 == 5) {
        FUN_10a09c744(param_1,param_1 + 4,param_1 + 8,param_1 + 0xc,param_2 + -4);
        return (ulong *)0x1;
      }
      goto LAB_10a09c9d4;
    }
    puVar6 = param_1 + 4;
    puVar5 = param_1 + 8;
    param_2 = param_2 + -4;
    puStack_d0 = param_1;
    puStack_98 = param_2;
    puStack_90 = puVar5;
    puStack_88 = puVar6;
    func_0x00010a09c698(param_1,puVar6,puVar5);
    FUN_10a003e3c(param_2,puVar5);
    if (((uint)param_2 >> 7 & 1) == 0) {
      return (ulong *)0x1;
    }
    FUN_10a09c5d4(&puStack_90,&puStack_98);
    puVar5 = puStack_90;
    FUN_10a003e3c(puStack_90,puVar6);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return (ulong *)0x1;
    }
    FUN_10a09c5d4(&puStack_88,&puStack_90);
    puVar6 = puStack_88;
    FUN_10a003e3c(puStack_88,param_1);
    if (((uint)puVar6 >> 7 & 1) == 0) {
      return (ulong *)0x1;
    }
    ppuVar7 = &puStack_88;
  }
  FUN_10a09c5d4(ppuVar4,ppuVar7);
  return (ulong *)0x1;
}



/* Entry: 10a09cb78; end: 10a09cbaf;  */

bool FUN_10a09cb78(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  __ZNKSt3__14__fs10filesystem4path9__compareENS_17basic_string_viewIcNS_11char_traitsIcEEEE
            (param_1,puVar2,uVar1);
  return (int)param_1 == 0;
}



/* Entry: 10a09cbb0; end: 10a09cc03;  */

undefined8 * FUN_10a09cbb0(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a09cc04(param_1,*param_2,*param_2 + param_2[1]);
  return param_1;
}



/* Entry: 10a09cc04; end: 10a09cd77;  */

undefined8 * FUN_10a09cc04(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  code *pcVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 ***pppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  uVar7 = (ulong)*(char *)((long)param_1 + 0x17);
  uVar1 = param_3 - (long)param_2;
  if ((long)uVar7 < 0) {
    if (uVar1 == 0) {
      return param_1;
    }
    uVar8 = param_1[1];
    if ((long)uVar8 < -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a09cd5c);
      (*pcVar3)();
    }
    lVar4 = (param_1[2] & 0x7fffffffffffffff) - 1;
    puVar6 = (undefined8 *)*param_1;
    uVar7 = (ulong)param_1[2] >> 0x38;
  }
  else {
    if (uVar1 == 0) {
      return param_1;
    }
    lVar4 = 0x16;
    puVar6 = param_1;
    uVar8 = uVar7;
  }
  uVar5 = (uint)uVar7;
  if ((param_2 < puVar6) || ((undefined8 *)((long)puVar6 + uVar8 + 1) <= param_2)) {
    if (lVar4 - uVar8 < uVar1) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                (param_1,lVar4,(uVar1 - lVar4) + uVar8,uVar8,uVar8,0,0);
      param_1[1] = uVar8;
      uVar5 = (uint)*(byte *)((long)param_1 + 0x17);
    }
    puVar6 = param_1;
    if ((uVar5 >> 7 & 1) != 0) {
      puVar6 = (undefined8 *)*param_1;
    }
    _memmove((long)puVar6 + uVar8,param_2,uVar1);
    *(undefined1 *)((long)puVar6 + uVar8 + uVar1) = 0;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      param_1[1] = uVar8 + uVar1;
    }
    else {
      *(byte *)((long)param_1 + 0x17) = (byte)(uVar8 + uVar1) & 0x7f;
    }
  }
  else {
    FUN_10a09cd78(&pppuStack_58,param_2,param_3,uVar1);
    ppppuVar2 = (undefined8 ****)pppuStack_58;
    if (-1 < (char)bStack_41) {
      uStack_50 = (ulong)bStack_41;
      ppppuVar2 = &pppuStack_58;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,ppppuVar2,uStack_50);
    if ((char)bStack_41 < '\0') {
      __ZdlPv(pppuStack_58);
    }
  }
  return param_1;
}



/* Entry: 10a09cd78; end: 10a09ce13;  */

ulong * FUN_10a09cd78(ulong *param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  if (param_4 < 0x7ffffffffffffff8) {
    if (param_4 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)param_4;
      puVar2 = param_1;
    }
    else {
      puVar3 = (ulong *)0x19;
      if ((param_4 | 7) != 0x17) {
        puVar3 = (ulong *)((param_4 | 7) + 1);
      }
      puVar2 = puVar3;
      __Znwm();
      param_1[1] = param_4;
      param_1[2] = (ulong)puVar3 | 0x8000000000000000;
      *param_1 = (ulong)puVar2;
    }
    param_3 = param_3 - param_2;
    puVar3 = puVar2;
    if (param_3 != 0) {
      _memmove(puVar2,param_2,param_3);
    }
    *(undefined1 *)((long)puVar2 + param_3) = 0;
    return puVar3;
  }
  func_0x000109ffde50();
  uVar1 = ((ulong)(uint)*param_1 + 0x5bae56a5fb ^ 0x16ad5a70a) + 0x9e3779b9;
  uVar1 = ((ulong)*(uint *)((long)param_1 + 4) + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1) +
          0x9e3779b9;
  uVar1 = ((ulong)(uint)param_1[1] + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1) + 0x9e3779b9;
  uVar1 = ((ulong)*(uint *)((long)param_1 + 0xc) + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1)
          + 0x9e3779b9;
  uVar1 = ((ulong)(uint)param_1[2] + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1) + 0x9e3779b9;
  uVar1 = ((ulong)*(uint *)((long)param_1 + 0x1c) + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1
          ) + 0x9e3779b9;
  uVar1 = ((ulong)(uint)param_1[3] + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1) + 0x9e3779b9;
  uVar1 = ((ulong)*(uint *)((long)param_1 + 0x14) + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1
          ) + 0x9e3779b9;
  uVar1 = ((ulong)(uint)param_1[4] + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1) + 0x9e3779b9;
  uVar1 = ((ulong)*(uint *)((long)param_1 + 0x24) + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1
          ) + 0x9e3779b9;
  uVar1 = ((ulong)(uint)param_1[5] + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1) + 0x9e3779b9;
  return (ulong *)((ulong)*(uint *)((long)param_1 + 0x2c) + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9
                  ^ uVar1);
}



/* Entry: 10a09ce14; end: 10a09cf33;  */

ulong FUN_10a09ce14(uint *param_1)

{
  ulong uVar1;
  
  uVar1 = ((ulong)*param_1 + 0x5bae56a5fb ^ 0x16ad5a70a) + 0x9e3779b9;
  uVar1 = ((ulong)param_1[1] + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1) + 0x9e3779b9;
  uVar1 = ((ulong)param_1[2] + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1) + 0x9e3779b9;
  uVar1 = ((ulong)param_1[3] + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1) + 0x9e3779b9;
  uVar1 = ((ulong)param_1[4] + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1) + 0x9e3779b9;
  uVar1 = ((ulong)param_1[7] + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1) + 0x9e3779b9;
  uVar1 = ((ulong)param_1[6] + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1) + 0x9e3779b9;
  uVar1 = ((ulong)param_1[5] + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1) + 0x9e3779b9;
  uVar1 = ((ulong)param_1[8] + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1) + 0x9e3779b9;
  uVar1 = ((ulong)param_1[9] + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1) + 0x9e3779b9;
  uVar1 = ((ulong)param_1[10] + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1) + 0x9e3779b9;
  return (ulong)param_1[0xb] + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1;
}



/* Entry: 10a09cf34; end: 10a09cf47;  */

void FUN_10a09cf34(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3c == 0) {
    __Znwm((long)plVar1 << 4);
    return;
  }
  func_0x000109ffded8();
  plVar4 = (long *)*plVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar3 = plVar4[1];
    lVar2 = lVar5;
    if (lVar3 != lVar5) {
      do {
        lVar3 = lVar3 + -8;
        func_0x00010a09cff0(lVar3,0);
      } while (lVar3 != lVar5);
      lVar2 = *(long *)*plVar1;
    }
    plVar4[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a09cf48; end: 10a09cf7b;  */

void FUN_10a09cf48(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if ((ulong)param_1 >> 0x3c == 0) {
    __Znwm((long)param_1 << 4);
    return;
  }
  func_0x000109ffded8();
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -8;
        func_0x00010a09cff0(lVar2,0);
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



/* Entry: 10a09cf7c; end: 10a09d157;  */

void FUN_10a09cf7c(long *param_1)

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
        lVar2 = lVar2 + -8;
        func_0x00010a09cff0(lVar2,0);
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



/* Entry: 10a09d158; end: 10a09d1bb;  */

long FUN_10a09d158(long param_1)

{
  long lStack_28;
  
  if (*(char *)(param_1 + 0x198) == '\x01') {
    lStack_28 = param_1 + 0x148;
    FUN_10a09d1bc(&lStack_28);
    lStack_28 = param_1 + 0x130;
    FUN_10a09d284(&lStack_28);
    lStack_28 = param_1 + 8;
    func_0x00010a09d2f4(&lStack_28);
  }
  return param_1;
}



/* Entry: 10a09d1bc; end: 10a09d22b;  */

void FUN_10a09d1bc(long *param_1)

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
        FUN_10a09d22c();
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



/* Entry: 10a09d22c; end: 10a09d283;  */

long FUN_10a09d22c(long param_1)

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



/* Entry: 10a09d284; end: 10a09d363;  */

void FUN_10a09d284(long *param_1)

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
        func_0x00010a045fb4();
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



/* Entry: 10a09d364; end: 10a09d3bb;  */

long FUN_10a09d364(long param_1)

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



/* Entry: 10a09d3bc; end: 10a09d487;  */

void FUN_10a09d3bc(undefined8 param_1,long param_2,uint *param_3,undefined4 *param_4)

{
  code *pcVar1;
  long lVar2;
  uint *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uStack_58;
  undefined4 uStack_54;
  undefined1 uStack_49;
  uint *puStack_48;
  
  uStack_58 = *param_3;
  uStack_54 = *param_4;
  puStack_48 = &uStack_58;
  lVar2 = param_2;
  func_0x00010a09d54c(param_2,&uStack_58,&UNK_10dd5b8f9,&puStack_48,&uStack_49);
  lVar6 = *(long *)(lVar2 + 0x28);
  lVar5 = *(long *)(lVar2 + 0x30);
  if (lVar6 == lVar5) {
    puVar3 = (uint *)(ulong)*param_3;
    FUN_10a301918(puVar3,*param_4,0);
    puStack_48 = puVar3;
    func_0x00010a09d488((long *)(lVar2 + 0x28),&puStack_48);
    lVar6 = *(long *)(lVar2 + 0x28);
    lVar5 = *(long *)(lVar2 + 0x30);
  }
  if (lVar6 != lVar5) {
    uVar4 = *(undefined8 *)(lVar5 + -8);
    *(undefined8 **)(lVar2 + 0x30) = (undefined8 *)(lVar5 + -8);
    FUN_10a09d6ec(param_1,uVar4,param_2,CONCAT44(uStack_54,uStack_58));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a09d488);
  (*pcVar1)();
}



/* Entry: 10a09d488; end: 10a09d5d3;  */

undefined1  [16]
FUN_10a09d488(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uStack_68;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 < (undefined8 *)param_1[2]) {
    puVar10 = puVar3 + 1;
    *puVar3 = *param_2;
    plVar4 = param_1;
  }
  else {
    lVar9 = (long)puVar3 - *param_1;
    uVar1 = (lVar9 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10a09d6a4();
      plVar5 = param_1;
      FUN_10a09d5d4();
      lVar9 = *plVar5;
      bVar2 = lVar9 == 0;
      if (bVar2) {
        lVar9 = 0x40;
        __Znwm();
        uVar7 = *(undefined8 *)*param_4;
        *(undefined8 *)(lVar9 + 0x30) = 0;
        *(undefined8 *)(lVar9 + 0x38) = 0;
        *(undefined8 *)(lVar9 + 0x20) = uVar7;
        *(undefined8 *)(lVar9 + 0x28) = 0;
        FUN_10a09d650(param_1,uStack_68,plVar5,lVar9);
      }
      auVar12[8] = bVar2;
      auVar12._0_8_ = lVar9;
      auVar12._9_7_ = 0;
      return auVar12;
    }
    uVar6 = param_1[2] - *param_1;
    uVar8 = (long)uVar6 >> 2;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar8 = 0x1fffffffffffffff;
    }
    plVar5 = param_1;
    FUN_10a09d6b8();
    puVar3 = (undefined8 *)((long)plVar5 + lVar9);
    puVar10 = puVar3 + 1;
    *puVar3 = *param_2;
    param_2 = (undefined8 *)*param_1;
    lVar9 = (long)puVar3 - (param_1[1] - (long)param_2);
    _memcpy(lVar9);
    plVar4 = (long *)*param_1;
    *param_1 = lVar9;
    param_1[1] = (long)puVar10;
    param_1[2] = (long)(plVar5 + uVar8);
    if (plVar4 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar10;
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = plVar4;
  return auVar11;
}



/* Entry: 10a09d5d4; end: 10a09d64f;  */

long * FUN_10a09d5d4(long param_1,long *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = (long *)(param_1 + 8);
  plVar6 = plVar5;
  if ((long *)*plVar5 != (long *)0x0) {
    iVar1 = *param_3;
    iVar2 = param_3[1];
    plVar4 = (long *)*plVar5;
    do {
      while (plVar6 = plVar4, iVar3 = (int)plVar6[4], iVar1 == iVar3) {
        iVar3 = *(int *)((long)plVar6 + 0x24);
        if (iVar3 <= iVar2) {
          if (iVar3 != iVar2 && iVar3 < iVar2) goto LAB_10a09d634;
          goto LAB_10a09d648;
        }
LAB_10a09d618:
        plVar5 = plVar6;
        plVar4 = (long *)*plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_10a09d648;
      }
      if (iVar1 < iVar3) goto LAB_10a09d618;
      if (iVar1 <= iVar3) break;
LAB_10a09d634:
      plVar5 = plVar6 + 1;
      plVar4 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
  }
LAB_10a09d648:
  *param_2 = (long)plVar6;
  return plVar5;
}



/* Entry: 10a09d650; end: 10a09d6a3;  */

void FUN_10a09d650(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10a09d6a4; end: 10a09d6b7;  */

undefined1  [16]
FUN_10a09d6a4(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  puVar1 = (ulong *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000109ffded8();
  *puVar1 = param_2;
  puVar3 = (undefined8 *)0x30;
  uVar4 = param_2;
  __Znwm();
  *puVar3 = &PTR_FUN_110ba0dc8;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = param_2;
  puVar3[4] = param_3;
  puVar3[5] = param_4;
  puVar1[1] = (ulong)puVar3;
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = puVar1;
  return auVar6;
}



/* Entry: 10a09d6b8; end: 10a09d6eb;  */

undefined1  [16] FUN_10a09d6b8(ulong *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000109ffded8();
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x30;
  uVar3 = param_2;
  __Znwm();
  *puVar2 = &PTR_FUN_110ba0dc8;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[4] = param_3;
  puVar2[5] = param_4;
  param_1[1] = (ulong)puVar2;
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 10a09d6ec; end: 10a09d77b;  */

undefined8 *
FUN_10a09d6ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *puVar1 = &PTR_FUN_110ba0dc8;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  puVar1[4] = param_3;
  puVar1[5] = param_4;
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 10a09d77c; end: 10a09d7c7;  */

void FUN_10a09d77c(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_28;
  undefined1 uStack_19;
  long *plStack_18;
  
  plStack_18 = param_1 + 1;
  lVar1 = *param_1;
  uStack_28 = param_2;
  func_0x00010a09d54c(lVar1,plStack_18,&UNK_10dd5b8f9,&plStack_18,&uStack_19);
  FUN_10a09d870(lVar1 + 0x28,&uStack_28);
  return;
}



/* Entry: 10a09d7c8; end: 10a09d7cb;  */

void FUN_10a09d7c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a09d7cc; end: 10a09d7df;  */

void FUN_10a09d7cc(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a09d7e0; end: 10a09d82f;  */

void FUN_10a09d7e0(long param_1)

{
  long lVar1;
  undefined8 uStack_28;
  undefined1 uStack_19;
  long lStack_18;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x20);
  lStack_18 = param_1 + 0x28;
  func_0x00010a09d54c(lVar1,lStack_18,&UNK_10dd5b8f9,&lStack_18,&uStack_19);
  FUN_10a09d870(lVar1 + 0x28,&uStack_28);
  return;
}



/* Entry: 10a09d830; end: 10a09d86b;  */

long FUN_10a09d830(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba0e08);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a09d86c; end: 10a09d86f;  */

void FUN_10a09d86c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a09d870; end: 10a09d933;  */

void FUN_10a09d870(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar8 = puVar2 + 1;
    *puVar2 = *param_2;
  }
  else {
    lVar7 = (long)puVar2 - *param_1;
    uVar1 = (lVar7 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10a09d6a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
      return;
    }
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    plVar3 = param_1;
    FUN_10a09d6b8();
    puVar2 = (undefined8 *)((long)plVar3 + lVar7);
    puVar8 = puVar2 + 1;
    *puVar2 = *param_2;
    lVar6 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    lVar7 = *param_1;
    *param_1 = lVar6;
    param_1[1] = (long)puVar8;
    param_1[2] = (long)(plVar3 + uVar5);
    if (lVar7 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar8;
  return;
}



/* Entry: 10a09d934; end: 10a09d937;  */

void FUN_10a09d934(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a09d938; end: 10a09d94b;  */

void FUN_10a09d938(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a09d94c; end: 10a09d963;  */

void FUN_10a09d94c(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a09d95c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a09d964; end: 10a09d99b;  */

undefined8 FUN_10a09d964(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba0938);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a09d99c; end: 10a09d99f;  */

void FUN_10a09d99c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a09d9a0; end: 10a09da03;  */

undefined8 * FUN_10a09d9a0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  cVar3 = *(char *)((long)param_2 + 0x17);
  plVar1 = (long *)*param_2;
  if (-1 < (long)cVar3) {
    plVar1 = param_2;
  }
  lVar2 = param_2[1];
  if (-1 < cVar3) {
    lVar2 = (long)cVar3;
  }
  FUN_10a09cc04(param_1,plVar1,(long)plVar1 + lVar2);
  return param_1;
}



/* Entry: 10a09da04; end: 10a09dd17;  */

long FUN_10a09da04(long param_1)

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



/* Entry: 10a09dd18; end: 10a09e027;  */

void FUN_10a09dd18(ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  
  if (0x17 < param_1[4]) {
    param_1[4] = param_1[4] - 0x18;
    puVar10 = (undefined8 *)param_1[1] + 1;
    uVar3 = *(undefined8 *)param_1[1];
LAB_10a09dd50:
    param_1[1] = (ulong)puVar10;
    puVar10 = (undefined8 *)param_1[2];
    if (puVar10 == (undefined8 *)param_1[3]) {
      uVar15 = *param_1;
      uVar5 = param_1[1];
      if (uVar5 < uVar15 || uVar5 - uVar15 == 0) {
        uVar8 = (long)((long)puVar10 - uVar15) >> 2;
        if ((long)puVar10 - uVar15 == 0) {
          uVar8 = 1;
        }
        uVar15 = uVar8;
        FUN_10a09e124();
        puVar11 = (undefined8 *)(uVar15 + (uVar8 >> 2) * 8);
        lVar12 = param_1[2] - (long)param_1[1];
        puVar10 = puVar11;
        if (lVar12 != 0) {
          puVar10 = (undefined8 *)((long)puVar11 + lVar12);
          puVar7 = (undefined8 *)param_1[1];
          puVar9 = puVar11;
          do {
            *puVar9 = *puVar7;
            lVar12 = lVar12 + -8;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar12 != 0);
        }
        uVar8 = *param_1;
        *param_1 = uVar15;
        param_1[1] = (ulong)puVar11;
        param_1[2] = (ulong)puVar10;
        param_1[3] = uVar15 + uVar5 * 8;
        if (uVar8 != 0) {
          __ZdlPv(uVar8);
          puVar10 = (undefined8 *)param_1[2];
        }
      }
      else {
        lVar12 = (((long)(uVar5 - uVar15) >> 3) + 1) / 2;
        lVar13 = uVar5 + lVar12 * -8;
        lVar1 = (long)puVar10 - uVar5;
        if (lVar1 != 0) {
          _memmove(lVar13,uVar5,lVar1);
          uVar5 = param_1[1];
        }
        puVar10 = (undefined8 *)(lVar13 + lVar1);
        param_1[1] = uVar5 + lVar12 * -8;
        param_1[2] = (ulong)puVar10;
      }
    }
    *puVar10 = uVar3;
    param_1[2] = param_1[2] + 8;
    return;
  }
  puVar11 = (undefined8 *)param_1[2];
  puVar9 = (undefined8 *)param_1[3];
  puVar7 = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)param_1[1];
  uVar15 = (long)puVar11 - (long)puVar10;
  if (uVar15 < (ulong)((long)puVar9 - (long)puVar7)) {
    uVar3 = 0xfc0;
    __Znwm();
    if (puVar9 == puVar11) {
      if (puVar10 == puVar7) {
        uVar15 = (long)puVar9 - (long)puVar10 >> 2;
        if (puVar11 == puVar10) {
          uVar15 = 1;
        }
        lVar12 = uVar15 * 2;
        FUN_10a09e124();
        puVar10 = (undefined8 *)(uVar15 + (lVar12 + 6U & 0xfffffffffffffff8));
        lVar12 = param_1[2] - (long)param_1[1];
        puVar11 = puVar10;
        if (lVar12 != 0) {
          puVar11 = (undefined8 *)((long)puVar10 + lVar12);
          puVar7 = (undefined8 *)param_1[1];
          puVar9 = puVar10;
          do {
            *puVar9 = *puVar7;
            lVar12 = lVar12 + -8;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar12 != 0);
        }
        uVar5 = *param_1;
        *param_1 = uVar15;
        param_1[1] = (ulong)puVar10;
        param_1[2] = (ulong)puVar11;
        param_1[3] = uVar15 + (long)param_2 * 8;
        if (uVar5 != 0) {
          __ZdlPv(uVar5);
          puVar10 = (undefined8 *)param_1[1];
        }
      }
      puVar10[-1] = uVar3;
      puVar10 = (undefined8 *)param_1[1];
      param_1[1] = (ulong)(puVar10 + -1);
      uVar3 = puVar10[-1];
      goto LAB_10a09dd50;
    }
    *puVar11 = uVar3;
    param_1[2] = param_1[2] + 8;
  }
  else {
    puVar6 = (undefined8 *)((long)puVar9 - (long)puVar7 >> 2);
    if (puVar9 == puVar7) {
      puVar6 = (undefined8 *)0x1;
    }
    FUN_10a09e124();
    uVar3 = 0xfc0;
    puVar4 = param_2;
    __Znwm();
    puVar7 = (undefined8 *)((long)puVar6 + uVar15);
    puVar9 = puVar6 + (long)param_2;
    puVar2 = puVar6;
    if (uVar15 == (long)param_2 * 8) {
      if ((long)uVar15 < 1) {
        puVar7 = (undefined8 *)((long)puVar7 - (long)puVar6 >> 2);
        if (puVar11 == puVar10) {
          puVar7 = (undefined8 *)0x1;
        }
        puVar2 = puVar7;
        FUN_10a09e124();
        puVar7 = puVar2 + ((ulong)puVar7 >> 2);
        puVar9 = puVar2 + (long)puVar4;
        if (puVar6 != (undefined8 *)0x0) {
          __ZdlPv(puVar6);
        }
      }
      else {
        lVar12 = ((long)puVar7 - (long)puVar6 >> 3) + 1;
        puVar7 = puVar7 + -((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
      }
    }
    puVar10 = puVar7 + 1;
    *puVar7 = uVar3;
    puVar11 = (undefined8 *)param_1[2];
    puVar6 = puVar2;
    if (puVar11 != (undefined8 *)param_1[1]) {
      do {
        puVar2 = puVar6;
        puVar14 = puVar7;
        if (puVar7 == puVar6) {
          if (puVar10 < puVar9) {
            lVar12 = ((long)puVar9 - (long)puVar10 >> 3) + 1;
            lVar1 = (long)puVar10 - (long)puVar6;
            lVar13 = (long)puVar10 - (long)puVar6;
            puVar10 = puVar10 + ((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
            puVar14 = (undefined8 *)((long)puVar10 - lVar1);
            if (lVar13 != 0) {
              _memmove(puVar14,puVar7,lVar13);
              puVar4 = puVar7;
            }
          }
          else {
            puVar14 = (undefined8 *)((long)puVar9 - (long)puVar6 >> 2);
            if ((long)puVar9 - (long)puVar6 == 0) {
              puVar14 = (undefined8 *)0x1;
            }
            puVar2 = puVar14;
            FUN_10a09e124();
            puVar14 = (undefined8 *)((long)puVar2 + ((long)puVar14 * 2 + 6U & 0xfffffffffffffff8));
            lVar12 = (long)puVar10 - (long)puVar6;
            puVar10 = puVar14;
            if (lVar12 != 0) {
              puVar10 = (undefined8 *)((long)puVar14 + lVar12);
              puVar9 = puVar14;
              do {
                *puVar9 = *puVar7;
                lVar12 = lVar12 + -8;
                puVar9 = puVar9 + 1;
                puVar7 = puVar7 + 1;
              } while (lVar12 != 0);
            }
            puVar9 = puVar2 + (long)puVar4;
            if (puVar6 != (undefined8 *)0x0) {
              __ZdlPv(puVar6);
            }
          }
        }
        puVar11 = puVar11 + -1;
        puVar7 = puVar14 + -1;
        *puVar7 = *puVar11;
        puVar6 = puVar2;
      } while (puVar11 != (undefined8 *)param_1[1]);
    }
    uVar15 = *param_1;
    *param_1 = (ulong)puVar2;
    param_1[1] = (ulong)puVar7;
    param_1[2] = (ulong)puVar10;
    param_1[3] = (ulong)puVar9;
    if (uVar15 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10a09e028; end: 10a09e123;  */

void FUN_10a09e028(ulong *param_1,undefined8 param_2)

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
      FUN_10a09e124();
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



/* Entry: 10a09e124; end: 10a09e157;  */

undefined1  [16] FUN_10a09e124(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000109ffded8();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  func_0x00010a09a188(param_1 + 3,param_2 + 3);
  puVar2 = param_2 + 7;
  FUN_10a09a1d8(param_1 + 7,puVar2);
  uVar3 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar3;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  uVar3 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar3;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  uVar3 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar3;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  uVar3 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar3;
  uVar3 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_1[0x14] = uVar3;
  auVar5._8_8_ = puVar2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 10a09e158; end: 10a09e20f;  */

undefined8 * FUN_10a09e158(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  func_0x00010a09a188(param_1 + 3,param_2 + 3);
  FUN_10a09a1d8(param_1 + 7,param_2 + 7);
  uVar1 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar1;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  uVar1 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar1;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  uVar1 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar1;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  uVar1 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar1;
  uVar1 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_1[0x14] = uVar1;
  return param_1;
}



/* Entry: 10a09e210; end: 10a09e2c7;  */

void FUN_10a09e210(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar2 = 0;
  if (lVar4 != lVar3) {
    lVar2 = (lVar4 - lVar3 >> 3) * 0x2e + -1;
  }
  if (lVar2 == *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) {
    FUN_10a09e2c8(param_1);
    lVar3 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  if (lVar4 == lVar3) {
    lVar2 = 0;
  }
  else {
    uVar1 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
    lVar2 = *(long *)(lVar3 + (uVar1 / 0x2e) * 8) + (uVar1 % 0x2e) * 0x58;
  }
  FUN_10a09e708(lVar2,param_2);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return;
}



/* Entry: 10a09e2c8; end: 10a09e5d7;  */

void FUN_10a09e2c8(ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  
  if (0x2d < param_1[4]) {
    param_1[4] = param_1[4] - 0x2e;
    puVar10 = (undefined8 *)param_1[1] + 1;
    uVar3 = *(undefined8 *)param_1[1];
LAB_10a09e300:
    param_1[1] = (ulong)puVar10;
    puVar10 = (undefined8 *)param_1[2];
    if (puVar10 == (undefined8 *)param_1[3]) {
      uVar15 = *param_1;
      uVar5 = param_1[1];
      if (uVar5 < uVar15 || uVar5 - uVar15 == 0) {
        uVar8 = (long)((long)puVar10 - uVar15) >> 2;
        if ((long)puVar10 - uVar15 == 0) {
          uVar8 = 1;
        }
        uVar15 = uVar8;
        FUN_10a09e6d4();
        puVar11 = (undefined8 *)(uVar15 + (uVar8 >> 2) * 8);
        lVar12 = param_1[2] - (long)param_1[1];
        puVar10 = puVar11;
        if (lVar12 != 0) {
          puVar10 = (undefined8 *)((long)puVar11 + lVar12);
          puVar7 = (undefined8 *)param_1[1];
          puVar9 = puVar11;
          do {
            *puVar9 = *puVar7;
            lVar12 = lVar12 + -8;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar12 != 0);
        }
        uVar8 = *param_1;
        *param_1 = uVar15;
        param_1[1] = (ulong)puVar11;
        param_1[2] = (ulong)puVar10;
        param_1[3] = uVar15 + uVar5 * 8;
        if (uVar8 != 0) {
          __ZdlPv(uVar8);
          puVar10 = (undefined8 *)param_1[2];
        }
      }
      else {
        lVar12 = (((long)(uVar5 - uVar15) >> 3) + 1) / 2;
        lVar13 = uVar5 + lVar12 * -8;
        lVar1 = (long)puVar10 - uVar5;
        if (lVar1 != 0) {
          _memmove(lVar13,uVar5,lVar1);
          uVar5 = param_1[1];
        }
        puVar10 = (undefined8 *)(lVar13 + lVar1);
        param_1[1] = uVar5 + lVar12 * -8;
        param_1[2] = (ulong)puVar10;
      }
    }
    *puVar10 = uVar3;
    param_1[2] = param_1[2] + 8;
    return;
  }
  puVar11 = (undefined8 *)param_1[2];
  puVar9 = (undefined8 *)param_1[3];
  puVar7 = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)param_1[1];
  uVar15 = (long)puVar11 - (long)puVar10;
  if (uVar15 < (ulong)((long)puVar9 - (long)puVar7)) {
    uVar3 = 0xfd0;
    __Znwm();
    if (puVar9 == puVar11) {
      if (puVar10 == puVar7) {
        uVar15 = (long)puVar9 - (long)puVar10 >> 2;
        if (puVar11 == puVar10) {
          uVar15 = 1;
        }
        lVar12 = uVar15 * 2;
        FUN_10a09e6d4();
        puVar10 = (undefined8 *)(uVar15 + (lVar12 + 6U & 0xfffffffffffffff8));
        lVar12 = param_1[2] - (long)param_1[1];
        puVar11 = puVar10;
        if (lVar12 != 0) {
          puVar11 = (undefined8 *)((long)puVar10 + lVar12);
          puVar7 = (undefined8 *)param_1[1];
          puVar9 = puVar10;
          do {
            *puVar9 = *puVar7;
            lVar12 = lVar12 + -8;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar12 != 0);
        }
        uVar5 = *param_1;
        *param_1 = uVar15;
        param_1[1] = (ulong)puVar10;
        param_1[2] = (ulong)puVar11;
        param_1[3] = uVar15 + (long)param_2 * 8;
        if (uVar5 != 0) {
          __ZdlPv(uVar5);
          puVar10 = (undefined8 *)param_1[1];
        }
      }
      puVar10[-1] = uVar3;
      puVar10 = (undefined8 *)param_1[1];
      param_1[1] = (ulong)(puVar10 + -1);
      uVar3 = puVar10[-1];
      goto LAB_10a09e300;
    }
    *puVar11 = uVar3;
    param_1[2] = param_1[2] + 8;
  }
  else {
    puVar6 = (undefined8 *)((long)puVar9 - (long)puVar7 >> 2);
    if (puVar9 == puVar7) {
      puVar6 = (undefined8 *)0x1;
    }
    FUN_10a09e6d4();
    uVar3 = 0xfd0;
    puVar4 = param_2;
    __Znwm();
    puVar7 = (undefined8 *)((long)puVar6 + uVar15);
    puVar9 = puVar6 + (long)param_2;
    puVar2 = puVar6;
    if (uVar15 == (long)param_2 * 8) {
      if ((long)uVar15 < 1) {
        puVar7 = (undefined8 *)((long)puVar7 - (long)puVar6 >> 2);
        if (puVar11 == puVar10) {
          puVar7 = (undefined8 *)0x1;
        }
        puVar2 = puVar7;
        FUN_10a09e6d4();
        puVar7 = puVar2 + ((ulong)puVar7 >> 2);
        puVar9 = puVar2 + (long)puVar4;
        if (puVar6 != (undefined8 *)0x0) {
          __ZdlPv(puVar6);
        }
      }
      else {
        lVar12 = ((long)puVar7 - (long)puVar6 >> 3) + 1;
        puVar7 = puVar7 + -((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
      }
    }
    puVar10 = puVar7 + 1;
    *puVar7 = uVar3;
    puVar11 = (undefined8 *)param_1[2];
    puVar6 = puVar2;
    if (puVar11 != (undefined8 *)param_1[1]) {
      do {
        puVar2 = puVar6;
        puVar14 = puVar7;
        if (puVar7 == puVar6) {
          if (puVar10 < puVar9) {
            lVar12 = ((long)puVar9 - (long)puVar10 >> 3) + 1;
            lVar1 = (long)puVar10 - (long)puVar6;
            lVar13 = (long)puVar10 - (long)puVar6;
            puVar10 = puVar10 + ((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
            puVar14 = (undefined8 *)((long)puVar10 - lVar1);
            if (lVar13 != 0) {
              _memmove(puVar14,puVar7,lVar13);
              puVar4 = puVar7;
            }
          }
          else {
            puVar14 = (undefined8 *)((long)puVar9 - (long)puVar6 >> 2);
            if ((long)puVar9 - (long)puVar6 == 0) {
              puVar14 = (undefined8 *)0x1;
            }
            puVar2 = puVar14;
            FUN_10a09e6d4();
            puVar14 = (undefined8 *)((long)puVar2 + ((long)puVar14 * 2 + 6U & 0xfffffffffffffff8));
            lVar12 = (long)puVar10 - (long)puVar6;
            puVar10 = puVar14;
            if (lVar12 != 0) {
              puVar10 = (undefined8 *)((long)puVar14 + lVar12);
              puVar9 = puVar14;
              do {
                *puVar9 = *puVar7;
                lVar12 = lVar12 + -8;
                puVar9 = puVar9 + 1;
                puVar7 = puVar7 + 1;
              } while (lVar12 != 0);
            }
            puVar9 = puVar2 + (long)puVar4;
            if (puVar6 != (undefined8 *)0x0) {
              __ZdlPv(puVar6);
            }
          }
        }
        puVar11 = puVar11 + -1;
        puVar7 = puVar14 + -1;
        *puVar7 = *puVar11;
        puVar6 = puVar2;
      } while (puVar11 != (undefined8 *)param_1[1]);
    }
    uVar15 = *param_1;
    *param_1 = (ulong)puVar2;
    param_1[1] = (ulong)puVar7;
    param_1[2] = (ulong)puVar10;
    param_1[3] = (ulong)puVar9;
    if (uVar15 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10a09e5d8; end: 10a09e6d3;  */

void FUN_10a09e5d8(ulong *param_1,undefined8 param_2)

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
      FUN_10a09e6d4();
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



/* Entry: 10a09e6d4; end: 10a09e707;  */

undefined1  [16] FUN_10a09e6d4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  func_0x00010a09a188(param_1 + 3,param_2 + 3);
  param_2 = param_2 + 7;
  FUN_10a09a1d8(param_1 + 7,param_2);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a09e708; end: 10a09e783;  */

undefined8 * FUN_10a09e708(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  func_0x00010a09a188(param_1 + 3,param_2 + 3);
  FUN_10a09a1d8(param_1 + 7,param_2 + 7);
  return param_1;
}



/* Entry: 10a09e784; end: 10a09e853;  */

bool FUN_10a09e784(long param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a09e7f8);
    (*pcVar1)();
  }
  FUN_10a09a8fc(*(long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) / 0x18) * 8) +
                (*(ulong *)(param_1 + 0x20) % 0x18) * 0xa8);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  bVar2 = 0x2f < *(ulong *)(param_1 + 0x20);
  if (bVar2) {
    __ZdlPv(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x18;
  }
  return bVar2;
}



/* Entry: 10a09e854; end: 10a09e86f;  */

undefined1 FUN_10a09e854(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 10a09e870; end: 10a09e91f;  */

long FUN_10a09e870(long param_1)

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



/* Entry: 10a09e920; end: 10a09e92f;  */

void FUN_10a09e920(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba0c80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a09e930; end: 10a09e94f;  */

void FUN_10a09e930(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba0c80;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a09e950; end: 10a09e95f;  */

void FUN_10a09e950(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a09e958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a09e960; end: 10a09e9b7;  */

long FUN_10a09e960(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a09e9b8; end: 10a09eb67;  */

undefined8 FUN_10a09e9b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



/* Entry: 10a09eb68; end: 10a09ec23;  */

void FUN_10a09eb68(undefined8 param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  char cStack_29;
  char cStack_28;
  
  pbVar1 = (byte *)(param_2 + 0x50);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *(undefined1 *)(param_2 + 0x50) = 0;
  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
    uStack_40 = 0;
    cStack_28 = '\0';
    FUN_10a09f1ec(param_2,&uStack_40);
    if ((cStack_28 == '\x01') && (cStack_29 < '\0')) {
      __ZdlPv(CONCAT71(uStack_3f,uStack_40));
    }
  }
  return;
}



/* Entry: 10a09ec24; end: 10a09ecdf;  */

void FUN_10a09ec24(undefined8 param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  long lStack_38;
  char cStack_28;
  
  pbVar1 = (byte *)(param_2 + 0x50);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *(undefined1 *)(param_2 + 0x50) = 0;
  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
    uStack_40 = 0;
    cStack_28 = '\0';
    FUN_10a09f354(param_2,&uStack_40);
    if ((cStack_28 == '\x01') && (lStack_38 = CONCAT71(uStack_3f,uStack_40), lStack_38 != 0)) {
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10a09ece0; end: 10a09ee33;  */

void FUN_10a09ece0(undefined8 param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined4 uStack_34;
  
  pbVar1 = (byte *)(param_2 + 0x60);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *(undefined1 *)(param_2 + 0x60) = 0;
  if ((*(byte *)(param_2 + 0x68) & 1) != 0) {
    return;
  }
  pbVar1 = (byte *)(param_2 + 0x60);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a09f590(param_2);
  uStack_34 = *(undefined4 *)(param_2 + 0x18);
  puVar5 = &uStack_34;
  (**(code **)(param_2 + 0x20))(puVar5,param_2 + 0x20);
  *(int *)(param_2 + 100) = (int)puVar5;
  *(undefined1 *)(param_2 + 0x68) = 1;
  *(undefined1 *)(param_2 + 0x60) = 0;
  return;
}



/* Entry: 10a09ee34; end: 10a09eeef;  */

void FUN_10a09ee34(undefined8 param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  char cStack_29;
  char cStack_28;
  
  pbVar1 = (byte *)(param_2 + 0x70);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *(undefined1 *)(param_2 + 0x70) = 0;
  if ((*(byte *)(param_2 + 0x90) & 1) == 0) {
    uStack_40 = 0;
    cStack_28 = '\0';
    FUN_10a09fb9c(param_2,&uStack_40);
    if ((cStack_28 == '\x01') && (cStack_29 < '\0')) {
      __ZdlPv(CONCAT71(uStack_3f,uStack_40));
    }
  }
  return;
}



/* Entry: 10a09eef0; end: 10a09efab;  */

void FUN_10a09eef0(undefined8 param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  long lStack_38;
  char cStack_28;
  
  pbVar1 = (byte *)(param_2 + 0x70);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *(undefined1 *)(param_2 + 0x70) = 0;
  if ((*(byte *)(param_2 + 0x90) & 1) == 0) {
    uStack_40 = 0;
    cStack_28 = '\0';
    FUN_10a09fdd8(param_2,&uStack_40);
    if ((cStack_28 == '\x01') && (lStack_38 = CONCAT71(uStack_3f,uStack_40), lStack_38 != 0)) {
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10a09efac; end: 10a09f03b;  */

void FUN_10a09efac(long param_1,ulong param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined4 uStack_24;
  
  pbVar1 = (byte *)(param_1 + 0x24);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if ((param_2 >> 0x20 & 1) == 0) {
    param_2 = (ulong)*(uint *)(param_1 + 0x18);
  }
  uStack_24 = (undefined4)param_2;
  puVar5 = &uStack_24;
  (**(code **)(param_1 + 0x28))(puVar5,param_1 + 0x28);
  *(int *)(param_1 + 0x1c) = (int)puVar5;
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined1 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10a09f03c; end: 10a09f0cb;  */

void FUN_10a09f03c(long param_1,undefined8 param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uStack_28;
  
  pbVar1 = (byte *)(param_1 + 0x30);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if ((param_3 & 1) == 0) {
    param_2 = *(undefined8 *)(param_1 + 0x18);
  }
  puVar5 = &uStack_28;
  uStack_28 = param_2;
  (**(code **)(param_1 + 0x38))(puVar5,param_1 + 0x38);
  *(undefined8 **)(param_1 + 0x20) = puVar5;
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 10a09f0cc; end: 10a09f15b;  */

void FUN_10a09f0cc(long param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  byte bStack_21;
  
  pbVar4 = (byte *)(param_1 + 0x1b);
  do {
    bVar1 = *pbVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pbVar4,0x10);
    if (bVar3) {
      *pbVar4 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while ((bVar1 & 1) != 0) {
    do {
    } while ((*pbVar4 & 1) != 0);
    do {
      bVar1 = *pbVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pbVar4,0x10);
      if (bVar3) {
        *pbVar4 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if ((param_2 >> 8 & 1) == 0) {
    param_2 = (uint)*(byte *)(param_1 + 0x18);
  }
  bStack_21 = (byte)param_2 & 1;
  pbVar4 = &bStack_21;
  (**(code **)(param_1 + 0x20))(pbVar4,param_1 + 0x20);
  *(ushort *)(param_1 + 0x19) = (ushort)pbVar4 | 0x100;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  return;
}



/* Entry: 10a09f15c; end: 10a09f1eb;  */

void FUN_10a09f15c(undefined4 param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined4 uStack_24;
  
  pbVar1 = (byte *)(param_2 + 0x24);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if ((param_3 >> 0x20 & 1) == 0) {
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
  }
  uStack_24 = (undefined4)param_3;
  (**(code **)(param_2 + 0x28))(&uStack_24,param_2 + 0x28);
  *(undefined4 *)(param_2 + 0x1c) = param_1;
  *(undefined1 *)(param_2 + 0x20) = 1;
  *(undefined1 *)(param_2 + 0x24) = 0;
  return;
}



/* Entry: 10a09f1ec; end: 10a09f2ff;  */

void FUN_10a09f1ec(long param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 auStack_50 [2];
  char cStack_39;
  ulong uStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  
  pbVar1 = (byte *)(param_1 + 0x50);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a09f300(auStack_50,param_2,param_1 + 0x18);
  (**(code **)(param_1 + 0x58))(&uStack_38,auStack_50);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    if (*(char *)(param_1 + 0x47) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x30));
    }
    *(undefined8 *)(param_1 + 0x38) = uStack_30;
    *(ulong *)(param_1 + 0x30) = uStack_38;
    *(ulong *)(param_1 + 0x40) = uStack_28;
    uStack_28 = uStack_28 & 0xffffffffffffff;
    uStack_38 = uStack_38 & 0xffffffffffffff00;
  }
  else {
    *(undefined8 *)(param_1 + 0x38) = uStack_30;
    *(ulong *)(param_1 + 0x30) = uStack_38;
    *(ulong *)(param_1 + 0x40) = uStack_28;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_38 = 0;
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  *pbVar1 = 0;
  return;
}



/* Entry: 10a09f300; end: 10a09f353;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10a09f300(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  
  if ((char)param_2[3] == '\x01') {
    lVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar2;
    param_1[2] = param_2[2];
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    return;
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    lVar2 = *param_3;
    uVar1 = param_3[1];
    if (0x16 < uVar1) {
      if (uVar1 < 0x7ffffffffffffff7) {
        lVar2 = 0x19;
        if ((uVar1 | 7) != 0x17) {
          lVar2 = (uVar1 | 7) + 1;
        }
      }
      else {
        func_0x000104bd47d4();
      }
      func_0x000107c60e20(lVar2);
      return;
    }
    *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)(param_1,lVar2,uVar1 + 1);
    return;
  }
  lVar2 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = lVar2;
  param_1[2] = param_3[2];
  return;
}



/* Entry: 10a09f354; end: 10a09f443;  */

void FUN_10a09f354(long param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lStack_50;
  long lStack_48;
  long lStack_38;
  long lStack_30;
  
  pbVar1 = (byte *)(param_1 + 0x50);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a09f444(&lStack_50,param_2,param_1 + 0x18);
  (**(code **)(param_1 + 0x58))(&lStack_38,&lStack_50);
  FUN_10a09f488(param_1 + 0x30,&lStack_38);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  *pbVar1 = 0;
  return;
}



/* Entry: 10a09f444; end: 10a09f487;  */

void FUN_10a09f444(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    uVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    param_1[2] = param_2[2];
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = *param_3;
  lVar2 = param_3[1];
  lVar3 = lVar2 - lVar1;
  if (lVar3 != 0) {
    func_0x000107c2b04c(param_1,lVar3);
    lVar3 = param_1[1];
    lVar2 = lVar2 - lVar1;
    if (lVar2 != 0) {
      _memmove(lVar3,lVar1,lVar2);
    }
    param_1[1] = lVar3 + lVar2;
  }
  return;
}



/* Entry: 10a09f488; end: 10a09f4e7;  */

undefined8 * FUN_10a09f488(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 3) == '\x01') {
    func_0x000107c3194c(param_1);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return param_1;
}



/* Entry: 10a09f4e8; end: 10a09f58f;  */

void FUN_10a09f4e8(long param_1,ulong param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined4 uStack_34;
  
  pbVar1 = (byte *)(param_1 + 0x60);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a09f590(param_1);
  if ((param_2 >> 0x20 & 1) == 0) {
    param_2 = (ulong)*(uint *)(param_1 + 0x18);
  }
  uStack_34 = (undefined4)param_2;
  puVar5 = &uStack_34;
  (**(code **)(param_1 + 0x20))(puVar5,param_1 + 0x20);
  *(int *)(param_1 + 100) = (int)puVar5;
  *(undefined1 *)(param_1 + 0x68) = 1;
  *(undefined1 *)(param_1 + 0x60) = 0;
  return;
}



/* Entry: 10a09f590; end: 10a09f673;  */

void FUN_10a09f590(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  *(code **)(param_1 + 0x80) = FUN_10a09f674;
  puVar6 = (undefined8 *)(param_1 + 0x88);
  (**(code **)*puVar6)(puVar6);
  *puVar6 = &PTR_DAT_110ae9180;
  puVar6 = (undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 0xc0) = 0x10a09f684;
  (**(code **)*puVar6)(puVar6);
  *puVar6 = &PTR_DAT_110950c70;
  if (*(char *)(param_1 + 0x68) == '\x01') {
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  plVar4 = *(long **)(param_1 + 0x70);
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
  plVar4 = (long *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (*plVar4 != 0) {
    func_0x0001092b4274(plVar4);
  }
  *plVar4 = 0;
  return;
}



/* Entry: 10a09f674; end: 10a09f693;  */

void FUN_10a09f674(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uStack_58;
  
  func_0x000105277f8c(param_3);
  func_0x000105277f8c();
  pbVar1 = (byte *)(param_4 + 0x60);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a09f740(param_4);
  if ((param_3 & 1) == 0) {
    param_2 = *(undefined8 *)(param_4 + 0x18);
  }
  puVar5 = &uStack_58;
  uStack_58 = param_2;
  (**(code **)(param_4 + 0x20))(puVar5,param_4 + 0x20);
  *(undefined8 **)(param_4 + 0x68) = puVar5;
  *(undefined1 *)(param_4 + 0x70) = 1;
  *(undefined1 *)(param_4 + 0x60) = 0;
  return;
}



/* Entry: 10a09f694; end: 10a09f73f;  */

void FUN_10a09f694(long param_1,undefined8 param_2,ulong param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uStack_38;
  
  pbVar1 = (byte *)(param_1 + 0x60);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a09f740(param_1);
  if ((param_3 & 1) == 0) {
    param_2 = *(undefined8 *)(param_1 + 0x18);
  }
  puVar5 = &uStack_38;
  uStack_38 = param_2;
  (**(code **)(param_1 + 0x20))(puVar5,param_1 + 0x20);
  *(undefined8 **)(param_1 + 0x68) = puVar5;
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined1 *)(param_1 + 0x60) = 0;
  return;
}



/* Entry: 10a09f740; end: 10a09f823;  */

void FUN_10a09f740(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  *(code **)(param_1 + 0x88) = FUN_10a09f824;
  puVar6 = (undefined8 *)(param_1 + 0x90);
  (**(code **)*puVar6)(puVar6);
  *puVar6 = &PTR_DAT_110ae9180;
  puVar6 = (undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 200) = 0x10a09f834;
  (**(code **)*puVar6)(puVar6);
  *puVar6 = &PTR_DAT_110950c70;
  if (*(char *)(param_1 + 0x70) == '\x01') {
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  plVar4 = *(long **)(param_1 + 0x78);
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
  plVar4 = (long *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (*plVar4 != 0) {
    func_0x0001092b4274(plVar4);
  }
  *plVar4 = 0;
  return;
}



/* Entry: 10a09f824; end: 10a09f843;  */

void FUN_10a09f824(undefined8 param_1,uint param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  byte bStack_51;
  
  func_0x000105277f8c(param_3);
  func_0x000105277f8c();
  pbVar4 = (byte *)(param_4 + 0x60);
  do {
    bVar1 = *pbVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pbVar4,0x10);
    if (bVar3) {
      *pbVar4 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while ((bVar1 & 1) != 0) {
    do {
    } while ((*pbVar4 & 1) != 0);
    do {
      bVar1 = *pbVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pbVar4,0x10);
      if (bVar3) {
        *pbVar4 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a09f8ec(param_4);
  if ((param_2 >> 8 & 1) == 0) {
    param_2 = (uint)*(byte *)(param_4 + 0x18);
  }
  bStack_51 = (byte)param_2 & 1;
  pbVar4 = &bStack_51;
  (**(code **)(param_4 + 0x20))(pbVar4,param_4 + 0x20);
  *(ushort *)(param_4 + 0x61) = (ushort)pbVar4 | 0x100;
  *(undefined1 *)(param_4 + 0x60) = 0;
  return;
}



/* Entry: 10a09f844; end: 10a09f8eb;  */

void FUN_10a09f844(long param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  byte bStack_31;
  
  pbVar4 = (byte *)(param_1 + 0x60);
  do {
    bVar1 = *pbVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pbVar4,0x10);
    if (bVar3) {
      *pbVar4 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while ((bVar1 & 1) != 0) {
    do {
    } while ((*pbVar4 & 1) != 0);
    do {
      bVar1 = *pbVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pbVar4,0x10);
      if (bVar3) {
        *pbVar4 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a09f8ec(param_1);
  if ((param_2 >> 8 & 1) == 0) {
    param_2 = (uint)*(byte *)(param_1 + 0x18);
  }
  bStack_31 = (byte)param_2 & 1;
  pbVar4 = &bStack_31;
  (**(code **)(param_1 + 0x20))(pbVar4,param_1 + 0x20);
  *(ushort *)(param_1 + 0x61) = (ushort)pbVar4 | 0x100;
  *(undefined1 *)(param_1 + 0x60) = 0;
  return;
}



/* Entry: 10a09f8ec; end: 10a09f9cf;  */

void FUN_10a09f8ec(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  *(code **)(param_1 + 0x78) = FUN_10a09f9d0;
  puVar6 = (undefined8 *)(param_1 + 0x80);
  (**(code **)*puVar6)(puVar6);
  *puVar6 = &PTR_DAT_110ae9180;
  puVar6 = (undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = 0x10a09f9e0;
  (**(code **)*puVar6)(puVar6);
  *puVar6 = &PTR_DAT_110950c70;
  if (*(char *)(param_1 + 0x62) == '\x01') {
    *(undefined1 *)(param_1 + 0x62) = 0;
  }
  plVar4 = *(long **)(param_1 + 0x68);
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
  plVar4 = (long *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (*plVar4 != 0) {
    func_0x0001092b4274(plVar4);
  }
  *plVar4 = 0;
  return;
}



/* Entry: 10a09f9d0; end: 10a09f9ef;  */

void FUN_10a09f9d0(undefined4 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  long param_5)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined4 uStack_54;
  
  func_0x000105277f8c(param_4);
  func_0x000105277f8c();
  pbVar1 = (byte *)(param_5 + 0x60);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a09fa98(param_5);
  if ((param_3 >> 0x20 & 1) == 0) {
    param_3 = (ulong)*(uint *)(param_5 + 0x18);
  }
  uStack_54 = (undefined4)param_3;
  (**(code **)(param_5 + 0x20))(&uStack_54,param_5 + 0x20);
  *(undefined4 *)(param_5 + 100) = param_1;
  *(undefined1 *)(param_5 + 0x68) = 1;
  *(undefined1 *)(param_5 + 0x60) = 0;
  return;
}



/* Entry: 10a09f9f0; end: 10a09fa97;  */

void FUN_10a09f9f0(undefined4 param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined4 uStack_34;
  
  pbVar1 = (byte *)(param_2 + 0x60);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a09fa98(param_2);
  if ((param_3 >> 0x20 & 1) == 0) {
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
  }
  uStack_34 = (undefined4)param_3;
  (**(code **)(param_2 + 0x20))(&uStack_34,param_2 + 0x20);
  *(undefined4 *)(param_2 + 100) = param_1;
  *(undefined1 *)(param_2 + 0x68) = 1;
  *(undefined1 *)(param_2 + 0x60) = 0;
  return;
}



/* Entry: 10a09fa98; end: 10a09fb7b;  */

void FUN_10a09fa98(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  *(code **)(param_1 + 0x80) = FUN_10a09fb7c;
  puVar6 = (undefined8 *)(param_1 + 0x88);
  (**(code **)*puVar6)(puVar6);
  *puVar6 = &PTR_DAT_110ae9180;
  puVar6 = (undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 0xc0) = 0x10a09fb8c;
  (**(code **)*puVar6)(puVar6);
  *puVar6 = &PTR_DAT_110950c70;
  if (*(char *)(param_1 + 0x68) == '\x01') {
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  plVar4 = *(long **)(param_1 + 0x70);
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
  plVar4 = (long *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (*plVar4 != 0) {
    func_0x0001092b4274(plVar4);
  }
  *plVar4 = 0;
  return;
}



/* Entry: 10a09fb7c; end: 10a09fb9b;  */

void FUN_10a09fb7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 auStack_80 [2];
  char cStack_69;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  func_0x000105277f8c(param_2);
  func_0x000105277f8c();
  pbVar1 = (byte *)(param_3 + 0x70);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a09fcc4(param_3);
  FUN_10a09f300(auStack_80,param_2,param_3 + 0x18);
  (**(code **)(param_3 + 0x30))(&uStack_68,auStack_80);
  if (*(char *)(param_3 + 0x90) == '\x01') {
    if (*(char *)(param_3 + 0x8f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_3 + 0x78));
    }
    *(undefined8 *)(param_3 + 0x80) = uStack_60;
    *(ulong *)(param_3 + 0x78) = uStack_68;
    *(ulong *)(param_3 + 0x88) = uStack_58;
    uStack_58 = uStack_58 & 0xffffffffffffff;
    uStack_68 = uStack_68 & 0xffffffffffffff00;
  }
  else {
    *(undefined8 *)(param_3 + 0x80) = uStack_60;
    *(ulong *)(param_3 + 0x78) = uStack_68;
    *(ulong *)(param_3 + 0x88) = uStack_58;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_68 = 0;
    *(undefined1 *)(param_3 + 0x90) = 1;
  }
  if (cStack_69 < '\0') {
    __ZdlPv(auStack_80[0]);
  }
  *pbVar1 = 0;
  return;
}



/* Entry: 10a09fb9c; end: 10a09fcc3;  */

void FUN_10a09fb9c(long param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 auStack_60 [2];
  char cStack_49;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  pbVar1 = (byte *)(param_1 + 0x70);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a09fcc4(param_1);
  FUN_10a09f300(auStack_60,param_2,param_1 + 0x18);
  (**(code **)(param_1 + 0x30))(&uStack_48,auStack_60);
  if (*(char *)(param_1 + 0x90) == '\x01') {
    if (*(char *)(param_1 + 0x8f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x78));
    }
    *(undefined8 *)(param_1 + 0x80) = uStack_40;
    *(ulong *)(param_1 + 0x78) = uStack_48;
    *(ulong *)(param_1 + 0x88) = uStack_38;
    uStack_38 = uStack_38 & 0xffffffffffffff;
    uStack_48 = uStack_48 & 0xffffffffffffff00;
  }
  else {
    *(undefined8 *)(param_1 + 0x80) = uStack_40;
    *(ulong *)(param_1 + 0x78) = uStack_48;
    *(ulong *)(param_1 + 0x88) = uStack_38;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
    *(undefined1 *)(param_1 + 0x90) = 1;
  }
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  *pbVar1 = 0;
  return;
}



/* Entry: 10a09fcc4; end: 10a09fdb7;  */

void FUN_10a09fcc4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  *(code **)(param_1 + 0xa8) = FUN_10a09fdb8;
  puVar6 = (undefined8 *)(param_1 + 0xb0);
  (**(code **)*puVar6)(puVar6);
  *puVar6 = &PTR_DAT_110ae9180;
  puVar6 = (undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xe8) = 0x10a09fdc8;
  (**(code **)*puVar6)(puVar6);
  *puVar6 = &PTR_DAT_110950c70;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    if (*(char *)(param_1 + 0x8f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x78));
    }
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  plVar4 = *(long **)(param_1 + 0x98);
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
  plVar4 = (long *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (*plVar4 != 0) {
    func_0x0001092b4274(plVar4);
  }
  *plVar4 = 0;
  return;
}



/* Entry: 10a09fdb8; end: 10a09fdd7;  */

void FUN_10a09fdb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lStack_80;
  long lStack_78;
  long lStack_68;
  long lStack_60;
  
  func_0x000105277f8c(param_3);
  func_0x000105277f8c();
  pbVar1 = (byte *)(param_4 + 0x70);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a09fedc(param_4);
  FUN_10a09f444(&lStack_80,param_2,param_4 + 0x18);
  (**(code **)(param_4 + 0x30))(&lStack_68,&lStack_80);
  FUN_10a09f488(param_4 + 0x78,&lStack_68);
  if (lStack_68 != 0) {
    lStack_60 = lStack_68;
    __ZdlPv();
  }
  if (lStack_80 != 0) {
    lStack_78 = lStack_80;
    __ZdlPv();
  }
  *pbVar1 = 0;
  return;
}



/* Entry: 10a09fdd8; end: 10a09fedb;  */

void FUN_10a09fdd8(long param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lStack_60;
  long lStack_58;
  long lStack_48;
  long lStack_40;
  
  pbVar1 = (byte *)(param_1 + 0x70);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a09fedc(param_1);
  FUN_10a09f444(&lStack_60,param_2,param_1 + 0x18);
  (**(code **)(param_1 + 0x30))(&lStack_48,&lStack_60);
  FUN_10a09f488(param_1 + 0x78,&lStack_48);
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  if (lStack_60 != 0) {
    lStack_58 = lStack_60;
    __ZdlPv();
  }
  *pbVar1 = 0;
  return;
}



/* Entry: 10a09fedc; end: 10a09ffcf;  */

void FUN_10a09fedc(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  *(code **)(param_1 + 0xa8) = FUN_10a09ffd0;
  puVar6 = (undefined8 *)(param_1 + 0xb0);
  (**(code **)*puVar6)(puVar6);
  *puVar6 = &PTR_DAT_110ae9180;
  puVar6 = (undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xe8) = 0x10a09ffe0;
  (**(code **)*puVar6)(puVar6);
  *puVar6 = &PTR_DAT_110950c70;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    if (*(long *)(param_1 + 0x78) != 0) {
      *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x78);
      __ZdlPv();
    }
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  plVar4 = *(long **)(param_1 + 0x98);
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
  plVar4 = (long *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (*plVar4 != 0) {
    func_0x0001092b4274(plVar4);
  }
  *plVar4 = 0;
  return;
}



/* Entry: 10a09ffd0; end: 10a09ffef;  */

void FUN_10a09ffd0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x000105277f8c(param_3);
  func_0x000105277f8c();
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_4 + 8);
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


