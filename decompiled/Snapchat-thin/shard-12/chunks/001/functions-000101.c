/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108dcb86c; end: 108dcbb83;  */

/* WARNING: Removing unreachable block (ram,0x000108d67e24) */
/* WARNING: Removing unreachable block (ram,0x000108d67e2c) */
/* WARNING: Removing unreachable block (ram,0x000108d67e40) */
/* WARNING: Removing unreachable block (ram,0x000108d67e50) */
/* WARNING: Removing unreachable block (ram,0x000108d67e58) */
/* WARNING: Removing unreachable block (ram,0x000108d67e60) */
/* WARNING: Removing unreachable block (ram,0x000108d67e48) */
/* WARNING: Removing unreachable block (ram,0x000108d67e64) */
/* WARNING: Removing unreachable block (ram,0x000108d67e78) */
/* WARNING: Removing unreachable block (ram,0x000108d67d34) */
/* WARNING: Removing unreachable block (ram,0x000108d67d3c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d48) */
/* WARNING: Removing unreachable block (ram,0x000108d67da8) */
/* WARNING: Removing unreachable block (ram,0x000108d67dbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67de4) */
/* WARNING: Removing unreachable block (ram,0x000108d67dcc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ddc) */
/* WARNING: Removing unreachable block (ram,0x000108d67dfc) */
/* WARNING: Removing unreachable block (ram,0x000108d67e70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d28) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb0) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb8) */
/* WARNING: Removing unreachable block (ram,0x000108d67cbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ccc) */
/* WARNING: Removing unreachable block (ram,0x000108d67d50) */
/* WARNING: Removing unreachable block (ram,0x000108d67d54) */
/* WARNING: Removing unreachable block (ram,0x000108d67d5c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d68) */
/* WARNING: Removing unreachable block (ram,0x000108d67d70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d7c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d90) */
/* WARNING: Removing unreachable block (ram,0x000108d67d88) */
/* WARNING: Removing unreachable block (ram,0x000108d67da0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c44) */
/* WARNING: Removing unreachable block (ram,0x000108d67ca0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c54) */

char * FUN_108dcb86c(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  int iStack_64;
  
  pcVar4 = (char *)*param_3;
  FUN_108d67a14(pcVar4,1);
  pcVar5 = (char *)param_3[1];
  func_0x000108d67a18(pcVar5,1);
  if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
    pcVar5 = (char *)0x0;
    uVar7 = *(undefined8 *)(*param_1 + 0x28);
    iVar8 = 3;
    do {
      do {
        pcVar4 = pcVar4 + (int)pcVar5;
        pcVar5 = pcVar4;
        FUN_108d95788(pcVar4,&iStack_64);
      } while (iStack_64 == 0x97);
      iVar1 = 0;
      if (iStack_64 != 0x6b && iStack_64 != 0x7a) {
        iVar1 = iVar8 + 1;
      }
      if ((iVar1 == 2) && (((iStack_64 == 5 || (iStack_64 == 0x89)) || (iStack_64 == 0x2e)))) {
        FUN_108d6a8e0(uVar7,&UNK_10f51b543);
        pcVar4 = (char *)*param_1;
        FUN_108d67c04(pcVar4,uVar7,0xffffffff,1,FUN_108d627f0);
        if ((int)pcVar4 == 0x12) {
          *(undefined4 *)((long)param_1 + 0x24) = 0x12;
          *(undefined1 *)((long)param_1 + 0x29) = 1;
          uVar2 = 0xf51745e;
          lVar3 = *param_1;
          if (*(long *)(lVar3 + 0x28) == 0) {
            iVar8 = 1000000000;
          }
          else {
            iVar8 = *(int *)(*(long *)(lVar3 + 0x28) + 0x68);
          }
          _strlen();
          uVar2 = uVar2 & 0x3fffffff;
          if (iVar8 < (int)uVar2) {
            uVar2 = iVar8 + 1;
          }
          if (((*(ushort *)(lVar3 + 8) & 0x2460) != 0) || (*(int *)(lVar3 + 0x20) != 0)) {
            FUN_108d826d0(lVar3);
          }
          *(undefined **)(lVar3 + 0x10) = &DAT_10f51745e;
          *(undefined8 *)(lVar3 + 0x30) = 0;
          *(uint *)(lVar3 + 0xc) = uVar2;
          *(undefined2 *)(lVar3 + 8) = 0xa02;
          *(undefined1 *)(lVar3 + 10) = 1;
          uVar6 = 0x12;
          if ((int)uVar2 <= iVar8) {
            uVar6 = 0;
          }
          return (char *)(ulong)uVar6;
        }
        return pcVar4;
      }
      iVar8 = iVar1;
    } while (*pcVar4 != '\0');
  }
  return pcVar5;
}



/* Entry: 108dcbb84; end: 108dcbbd7;  */

long FUN_108dcbb84(int param_1)

{
  long lVar1;
  
  lVar1 = lRam000000011372e6b8;
  _malloc_zone_malloc(lRam000000011372e6b8,(long)param_1);
  if (lVar1 == 0) {
    FUN_108d64c00(7,&UNK_10f51b559);
  }
  return lVar1;
}



/* Entry: 108dcbbd8; end: 108dcbbe7;  */

void FUN_108dcbbd8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_zone_free_11034c618)(uRam000000011372e6b8,param_1);
  return;
}



/* Entry: 108dcbbe8; end: 108dcbc6b;  */

long FUN_108dcbbe8(undefined8 param_1,int param_2)

{
  long lVar1;
  
  lVar1 = lRam000000011372e6b8;
  _malloc_zone_realloc(lRam000000011372e6b8,param_1,(long)param_2);
  if (lVar1 == 0) {
    if (lRam000000011372e6b8 == 0) {
      _malloc_size();
    }
    else {
      (**(code **)(lRam000000011372e6b8 + 0x10))(lRam000000011372e6b8,param_1);
    }
    FUN_108d64c00(7,&UNK_10f51b57f);
  }
  return lVar1;
}



/* Entry: 108dcbc6c; end: 108dcbca3;  */

void FUN_108dcbc6c(long param_1)

{
  if (param_1 != 0) {
    if (lRam000000011372e6b8 == 0) {
      _malloc_size(param_1);
    }
    else {
      (**(code **)(lRam000000011372e6b8 + 0x10))();
    }
  }
  return;
}



/* Entry: 108dcbca4; end: 108dcbcaf;  */

uint FUN_108dcbca4(int param_1)

{
  return param_1 + 7U & 0xfffffff8;
}



/* Entry: 108dcbcb0; end: 108dcbd63;  */

undefined8 FUN_108dcbcb0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uStack_30;
  int iStack_24;
  
  if (puRam000000011372e6b8 == (undefined *)0x0) {
    uStack_30 = 4;
    puVar1 = &UNK_10f51b5a3;
    _sysctlbyname(&UNK_10f51b5a3,&iStack_24,&uStack_30,0,0);
    if (iStack_24 < 2) {
      uVar2 = 0x1000;
      _malloc_create_zone(0x1000,0);
      _malloc_set_zone_name();
      do {
        uVar3 = 0;
        _OSAtomicCompareAndSwapPtrBarrier(0,uVar2,0x11372e6b8);
      } while (puRam000000011372e6b8 == (undefined *)0x0);
      if ((uVar3 & 1) == 0) {
        _malloc_destroy_zone(uVar2);
      }
    }
    else {
      _malloc_default_zone();
      puRam000000011372e6b8 = puVar1;
    }
  }
  return 0;
}



/* Entry: 108dcbd64; end: 108dcbd67;  */

void FUN_108dcbd64(void)

{
  return;
}



/* Entry: 108dcbd68; end: 108dcbdd7;  */

undefined8 FUN_108dcbd68(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uRam000000011372e758 = 0;
  uRam000000011372e750 = 0;
  uRam000000011372e768 = 0;
  uRam000000011372e760 = 0;
  uRam000000011372e738 = 0;
  uRam000000011372e730 = 0;
  uRam000000011372e748 = 0;
  uRam000000011372e740 = 0;
  uRam000000011372e718 = 0;
  uRam000000011372e710 = 0;
  uRam000000011372e728 = 0;
  uRam000000011372e720 = 0;
  if (iRam0000000113297914 != 0) {
    uVar1 = 6;
    func_0x000108d60700();
    uVar2 = 7;
    uRam000000011372e710 = uVar1;
    func_0x000108d60700();
    uRam000000011372e758 = uVar2;
  }
  uRam000000011372e720 = CONCAT44(uRam000000011372e720._4_4_,10);
  uRam000000011372e738 = CONCAT44(uRam000000011372e738._4_4_,1);
  return 0;
}



/* Entry: 108dcbdd8; end: 108dcbdf3;  */

void FUN_108dcbdd8(void)

{
  uRam000000011372e758 = 0;
  uRam000000011372e750 = 0;
  uRam000000011372e768 = 0;
  uRam000000011372e760 = 0;
  uRam000000011372e738 = 0;
  uRam000000011372e730 = 0;
  uRam000000011372e748 = 0;
  uRam000000011372e740 = 0;
  uRam000000011372e718 = 0;
  uRam000000011372e710 = 0;
  uRam000000011372e728 = 0;
  uRam000000011372e720 = 0;
  return;
}



/* Entry: 108dcbdf4; end: 108dcbeeb;  */

undefined8 * FUN_108dcbdf4(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  
  iVar1 = iRam0000000113297914;
  puVar2 = (undefined8 *)0x60;
  if (iRam0000000113297914 < 1) {
    puVar2 = (undefined8 *)0x38;
  }
  func_0x000108d65d8c();
  if (puVar2 != (undefined8 *)0x0) {
    if (iVar1 < 1) {
      plVar3 = (long *)0x11372e710;
    }
    else {
      plVar3 = puVar2 + 7;
      *(undefined4 *)(puVar2 + 9) = 10;
    }
    *puVar2 = plVar3;
    *(undefined4 *)(puVar2 + 1) = param_1;
    *(undefined4 *)((long)puVar2 + 0xc) = param_2;
    *(uint *)(puVar2 + 2) = (uint)(param_3 != 0);
    if (*plVar3 != 0) {
      (*pcRam0000000113297998)();
    }
    FUN_108dcc3d8(puVar2);
    if (param_3 != 0) {
      *(undefined4 *)((long)puVar2 + 0x14) = 10;
      uVar4 = NEON_rev64(plVar3[1],4);
      *(ulong *)((long)plVar3 + 0xc) =
           CONCAT44((int)((ulong)uVar4 >> 0x20) - (int)((ulong)plVar3[1] >> 0x20),(int)uVar4 + 10);
    }
    if (*plVar3 != 0) {
      (*pcRam00000001132979a8)();
    }
    if (*(int *)((long)puVar2 + 0x2c) == 0) {
      func_0x000108dcc2f0(puVar2);
      puVar2 = (undefined8 *)0x0;
    }
  }
  return puVar2;
}



/* Entry: 108dcbeec; end: 108dcbf87;  */

void FUN_108dcbeec(undefined8 *param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  
  if (*(int *)(param_1 + 2) != 0) {
    plVar2 = (long *)*param_1;
    if (*plVar2 != 0) {
      (*pcRam0000000113297998)();
    }
    iVar1 = (int)plVar2[1] + (param_2 - *(int *)(param_1 + 3));
    *(int *)(plVar2 + 1) = iVar1;
    *(int *)(plVar2 + 2) = (iVar1 - *(int *)((long)plVar2 + 0xc)) + 10;
    *(int *)(param_1 + 3) = param_2;
    *(uint *)((long)param_1 + 0x1c) = (uint)(param_2 * 9) / 10;
    func_0x000108dcc4d4(plVar2);
    if (*plVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108dcbf80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam00000001132979a8)();
      return;
    }
  }
  return;
}



/* Entry: 108dcbf88; end: 108dcbfe3;  */

undefined4 FUN_108dcbf88(undefined8 *param_1)

{
  undefined4 uVar1;
  
  if (*(long *)*param_1 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 5);
  }
  else {
    (*pcRam0000000113297998)();
    uVar1 = *(undefined4 *)(param_1 + 5);
    if (*(long *)*param_1 != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  return uVar1;
}



/* Entry: 108dcbfe4; end: 108dcc277;  */

undefined8 * FUN_108dcbfe4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  if (*(long *)*param_1 != 0) {
    (*pcRam0000000113297998)();
  }
  uVar1 = *(uint *)((long)param_1 + 0x2c);
  uVar2 = 0;
  uVar4 = (uint)param_2;
  if (uVar1 != 0) {
    uVar2 = uVar4 / uVar1;
  }
  puVar3 = *(undefined8 **)(param_1[6] + (ulong)(uVar4 - uVar2 * uVar1) * 8);
  do {
    if (puVar3 == (undefined8 *)0x0) {
      if ((int)param_3 == 0) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        puVar3 = param_1;
        FUN_108dcc5dc(param_1,param_2,param_3);
      }
LAB_108dcc078:
      if (*(long *)*param_1 != 0) {
        (*pcRam00000001132979a8)();
      }
      return puVar3;
    }
    if (*(uint *)(puVar3 + 2) == uVar4) {
      if (*(char *)((long)puVar3 + 0x14) == '\0') {
        FUN_108dcc58c(puVar3);
      }
      goto LAB_108dcc078;
    }
    puVar3 = (undefined8 *)puVar3[3];
  } while( true );
}



/* Entry: 108dcc278; end: 108dcc3d7;  */

void FUN_108dcc278(undefined8 *param_1,undefined8 param_2)

{
  if (*(long *)*param_1 != 0) {
    (*pcRam0000000113297998)();
  }
  if ((uint)param_2 <= *(uint *)(param_1 + 4)) {
    func_0x000108dcc8ac(param_1,param_2);
    *(uint *)(param_1 + 4) = (uint)param_2 - 1;
  }
  if (*(long *)*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108dcc2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000001132979a8)();
    return;
  }
  return;
}



/* Entry: 108dcc3d8; end: 108dcc58b;  */

void FUN_108dcc3d8(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  
  iVar7 = *(int *)((long)param_1 + 0x2c);
  uVar2 = iVar7 << 1;
  if (uVar2 < 0x101) {
    uVar2 = 0x100;
  }
  if (*(long *)*param_1 != 0) {
    (*pcRam00000001132979a8)();
    iVar7 = *(int *)((long)param_1 + 0x2c);
  }
  if ((iVar7 != 0) && (pcRam000000011372e6f8 != (code *)0x0)) {
    (*pcRam000000011372e6f8)();
  }
  lVar5 = (ulong)uVar2 << 3;
  func_0x000108d65d8c();
  if ((*(int *)((long)param_1 + 0x2c) != 0) && (pcRam000000011372e700 != (code *)0x0)) {
    (*pcRam000000011372e700)();
  }
  if (*(long *)*param_1 != 0) {
    (*pcRam0000000113297998)();
  }
  if (lVar5 != 0) {
    uVar1 = *(uint *)((long)param_1 + 0x2c);
    lVar6 = param_1[6];
    if (uVar1 != 0) {
      uVar8 = 0;
      do {
        lVar4 = *(long *)(lVar6 + uVar8 * 8);
        while (lVar4 != 0) {
          uVar3 = 0;
          if (uVar2 != 0) {
            uVar3 = *(uint *)(lVar4 + 0x10) / uVar2;
          }
          uVar3 = *(uint *)(lVar4 + 0x10) - uVar3 * uVar2;
          lVar9 = *(long *)(lVar4 + 0x18);
          *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar5 + (ulong)uVar3 * 8);
          *(long *)(lVar5 + (ulong)uVar3 * 8) = lVar4;
          lVar4 = lVar9;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar1);
    }
    func_0x000108d5e198();
    param_1[6] = lVar5;
    *(uint *)((long)param_1 + 0x2c) = uVar2;
  }
  return;
}



/* Entry: 108dcc58c; end: 108dcc5db;  */

void FUN_108dcc58c(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x28);
  plVar1 = *(long **)(param_1 + 0x20);
  lVar3 = *plVar1;
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    *(long *)(lVar3 + 0x18) = lVar2;
  }
  else {
    *(long *)(lVar4 + 0x28) = lVar2;
  }
  if (lVar2 == 0) {
    *(long *)(lVar3 + 0x20) = lVar4;
  }
  else {
    *(long *)(lVar2 + 0x30) = lVar4;
  }
  *(long *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(int *)((long)plVar1 + 0x24) = *(int *)((long)plVar1 + 0x24) + -1;
  return;
}



/* Entry: 108dcc5dc; end: 108dcc96b;  */

ulong * FUN_108dcc5dc(long *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  int *piVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  long *plVar10;
  
  lVar9 = *param_1;
  if (param_3 == 1) {
    uVar1 = *(uint *)(param_1 + 5) - *(uint *)((long)param_1 + 0x24);
    if ((*(uint *)(lVar9 + 0x10) <= uVar1) || (*(uint *)((long)param_1 + 0x1c) <= uVar1)) {
      return (ulong *)0x0;
    }
    if ((iRam000000011372e740 == 0) ||
       (piVar6 = (int *)0x11372e76c,
       iRam000000011372e73c < *(int *)((long)param_1 + 0xc) + (int)param_1[1])) {
      piVar6 = (int *)0x113829b24;
    }
    if (*piVar6 != 0 && *(uint *)((long)param_1 + 0x24) < uVar1) {
      return (ulong *)0x0;
    }
  }
  if (*(uint *)((long)param_1 + 0x2c) <= *(uint *)(param_1 + 5)) {
    FUN_108dcc3d8(param_1);
  }
  if (((int)param_1[2] != 0) && (puVar8 = *(ulong **)(lVar9 + 0x20), puVar8 != (ulong *)0x0)) {
    if (((int)param_1[5] + 1U < *(uint *)(param_1 + 3)) &&
       (*(uint *)(lVar9 + 0x14) < *(uint *)(lVar9 + 8))) {
      if ((iRam000000011372e740 == 0) ||
         (piVar6 = (int *)0x11372e76c,
         iRam000000011372e73c < *(int *)((long)param_1 + 0xc) + (int)param_1[1])) {
        piVar6 = (int *)0x113829b24;
      }
      if (*piVar6 == 0) goto LAB_108dcc798;
    }
    uVar4 = puVar8[4];
    uVar1 = *(uint *)(uVar4 + 0x2c);
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = (uint)puVar8[2] / uVar1;
    }
    puVar3 = (ulong *)(*(long *)(uVar4 + 0x30) + (ulong)((uint)puVar8[2] - uVar2 * uVar1) * 8);
    do {
      puVar5 = puVar3;
      puVar7 = (ulong *)*puVar5;
      puVar3 = puVar7 + 3;
    } while (puVar7 != puVar8);
    *puVar5 = *puVar3;
    *(int *)(uVar4 + 0x28) = *(int *)(uVar4 + 0x28) + -1;
    FUN_108dcc58c(puVar8);
    plVar10 = (long *)puVar8[4];
    if (*(int *)((long)plVar10 + 0xc) + (int)plVar10[1] ==
        *(int *)((long)param_1 + 0xc) + (int)param_1[1]) {
      *(int *)(lVar9 + 0x14) = ((int)param_1[2] - (int)plVar10[2]) + *(int *)(lVar9 + 0x14);
      goto LAB_108dcc844;
    }
    func_0x000108d78fdc(*puVar8);
    if ((int)plVar10[2] != 0) {
      *(int *)(*plVar10 + 0x14) = *(int *)(*plVar10 + 0x14) + -1;
    }
  }
LAB_108dcc798:
  if ((param_3 == 1) && (pcRam000000011372e6f8 != (code *)0x0)) {
    (*pcRam000000011372e6f8)();
  }
  if (*(long *)*param_1 != 0) {
    (*pcRam00000001132979a8)();
  }
  uVar4 = (ulong)((int)param_1[1] + *(int *)((long)param_1 + 0xc) + 0x38);
  func_0x000108d78dcc();
  lVar9 = param_1[1];
  if (*(long *)*param_1 != 0) {
    (*pcRam0000000113297998)();
  }
  if (uVar4 == 0) {
    puVar8 = (ulong *)0x0;
  }
  else {
    puVar8 = (ulong *)(uVar4 + (long)(int)lVar9);
    *puVar8 = uVar4;
    puVar8[1] = (ulong)(puVar8 + 7);
    if ((int)param_1[2] != 0) {
      *(int *)(*param_1 + 0x14) = *(int *)(*param_1 + 0x14) + 1;
    }
  }
  if ((param_3 == 1) && (pcRam000000011372e700 != (code *)0x0)) {
    (*pcRam000000011372e700)();
  }
  if (puVar8 == (ulong *)0x0) {
    return (ulong *)0x0;
  }
LAB_108dcc844:
  uVar1 = *(uint *)((long)param_1 + 0x2c);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = param_2 / uVar1;
  }
  uVar1 = param_2 - uVar2 * uVar1;
  *(int *)(param_1 + 5) = (int)param_1[5] + 1;
  *(uint *)(puVar8 + 2) = param_2;
  puVar8[3] = *(ulong *)(param_1[6] + (ulong)uVar1 * 8);
  puVar8[4] = (ulong)param_1;
  puVar8[5] = 0;
  puVar8[6] = 0;
  *(undefined1 *)((long)puVar8 + 0x14) = 1;
  *(undefined8 *)puVar8[1] = 0;
  *(ulong **)(param_1[6] + (ulong)uVar1 * 8) = puVar8;
  if (*(uint *)(param_1 + 4) < param_2) {
    *(uint *)(param_1 + 4) = param_2;
  }
  return puVar8;
}



/* Entry: 108dcc96c; end: 108dcc9af;  */

undefined8 FUN_108dcc96c(long param_1)

{
  ulong uVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    return 1;
  }
  uVar1 = (ulong)*(uint *)(param_1 + 0x28);
  if (0 < (int)*(uint *)(param_1 + 0x28)) {
    plVar2 = (long *)(*(long *)(param_1 + 0x20) + 8);
    do {
      if ((*plVar2 != 0) && (*(int *)(*plVar2 + 0x18) != 0)) {
        return 1;
      }
      uVar1 = uVar1 - 1;
      plVar2 = plVar2 + 4;
    } while (uVar1 != 0);
  }
  return 0;
}



/* Entry: 108dcc9b0; end: 108dcc9ff;  */

void FUN_108dcc9b0(long param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_2 == (int *)0x0) || (iVar1 = *param_2, *param_2 = iVar1 + -1, iVar1 + -1 != 0)) {
    return;
  }
  (**(code **)(param_2 + 2))(*(undefined8 *)(param_2 + 4));
  if (param_2 == (int *)0x0) {
    return;
  }
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x328) != 0) {
      if ((param_2 < *(int **)(param_1 + 0x170)) || (*(int **)(param_1 + 0x178) <= param_2)) {
        (*pcRam0000000113297950)();
        uVar2 = (uint)param_2;
      }
      else {
        uVar2 = (uint)*(ushort *)(param_1 + 0x150);
      }
      **(int **)(param_1 + 0x328) = **(int **)(param_1 + 0x328) + uVar2;
      return;
    }
    if ((*(int **)(param_1 + 0x170) <= param_2) && (param_2 < *(int **)(param_1 + 0x178))) {
      *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x168);
      *(int **)(param_1 + 0x168) = param_2;
      *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + -1;
      return;
    }
  }
  if (param_2 == (int *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
  if (iRam0000000113297910 != 0) {
    if (piRam0000000113829af0 != (int *)0x0) {
      (*pcRam0000000113297998)();
    }
    piVar3 = param_2;
    (*pcRam0000000113297950)();
    lRam0000000113829a50 = lRam0000000113829a50 - (int)piVar3;
    lRam0000000113829a98 = lRam0000000113829a98 + -1;
    (*pcRam0000000113297940)(param_2);
    param_2 = piRam0000000113829af0;
    UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
    if (piRam0000000113829af0 == (int *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Entry: 108dcca00; end: 108dcca6f;  */

uint FUN_108dcca00(short *param_1,int param_2,uint param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 == -2) {
    uVar2 = 6;
    if ((*(long *)(param_1 + 0xc) == 0) && (uVar2 = 0, *(long *)(param_1 + 0x10) != 0)) {
      uVar2 = 6;
    }
  }
  else {
    sVar1 = *param_1;
    if ((sVar1 < 0) || (param_2 == sVar1)) {
      uVar3 = 4;
      if (param_2 != sVar1) {
        uVar3 = 1;
      }
      uVar2 = (((ushort)param_1[1] & param_3) >> 1 & 1) + uVar3;
      if (((ushort)param_1[1] & 3) == param_3) {
        uVar2 = uVar3 | 2;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* Entry: 108dcca70; end: 108dccb43;  */

void FUN_108dcca70(long param_1,int param_2,long param_3,int param_4,long param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  iVar2 = param_2;
  if (param_4 <= param_2) {
    iVar2 = param_4;
  }
  lVar6 = (long)iVar2;
  lVar4 = param_3;
  _memcmp(param_3,param_5,lVar6);
  if (((int)lVar4 == 0) && (param_1 != 0)) {
    uVar5 = param_2 - iVar2;
    if ((int)uVar5 < 1) {
      if (uVar5 != 0) {
        return;
      }
    }
    else {
      do {
        if (*(char *)(param_3 + lVar6 + -1 + (ulong)uVar5) != ' ') {
          return;
        }
        uVar3 = uVar5 - 1;
        bVar1 = 0 < (int)uVar5;
        uVar5 = uVar3;
      } while (uVar3 != 0 && bVar1);
    }
    if (0 < param_4 - iVar2) {
      uVar5 = param_4 - iVar2;
      do {
        if (*(char *)(param_5 + lVar6 + -1 + (ulong)uVar5) != ' ') {
          return;
        }
        uVar3 = uVar5 - 1;
        bVar1 = 0 < (int)uVar5;
        uVar5 = uVar3;
      } while (uVar3 != 0 && bVar1);
    }
  }
  return;
}



/* Entry: 108dccb44; end: 108dccbeb;  */

int FUN_108dccb44(undefined8 param_1,int param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  
  iVar1 = param_2;
  if (param_4 <= param_2) {
    iVar1 = param_4;
  }
  func_0x000108d5ea34(param_3,param_5,iVar1);
  iVar1 = param_2 - param_4;
  if ((int)param_3 != 0) {
    iVar1 = (int)param_3;
  }
  return iVar1;
}



/* Entry: 108dccbec; end: 108dcd107;  */

void FUN_108dccbec(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 uStack_68;
  
  if (uRam000000011372e6d0 != 0) {
    uVar4 = 0;
    do {
      if (iRam0000000113297914 == 0) {
        lVar2 = 0;
LAB_108dccc6c:
        bVar1 = true;
      }
      else {
        lVar2 = 2;
        (*pcRam0000000113297988)();
        if (lVar2 == 0) goto LAB_108dccc6c;
        (*pcRam0000000113297998)(lVar2);
        bVar1 = false;
      }
      uVar6 = (ulong)uRam000000011372e6d0;
      if (uVar4 < uVar6) {
        pcVar5 = *(code **)(lRam000000011372e708 + uVar4 * 8);
      }
      else {
        pcVar5 = (code *)0x0;
      }
      if (!bVar1) {
        (*pcRam00000001132979a8)(lVar2);
      }
      uStack_68 = 0;
      if ((pcVar5 != (code *)0x0) &&
         (uVar3 = param_1, (*pcVar5)(param_1,&uStack_68,&PTR_DAT_110ac4368), (int)uVar3 != 0)) {
        FUN_108d65cb8(param_1,uVar3,&UNK_10f51b904);
        func_0x000108d5e198(uStack_68);
        return;
      }
      func_0x000108d5e198(uStack_68);
      bVar1 = uVar4 < uVar6;
      uVar4 = uVar4 + 1;
    } while (bVar1);
  }
  return;
}



/* Entry: 108dcd108; end: 108dcd193;  */

void FUN_108dcd108(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aef90;
  func_0x00010bf63b00(PTR_PTR_1126aef90,param_2,&PTR____CFConstantStringClassReference_110ef7d98);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
    puVar3 = puVar2;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108dcd194; end: 108dcd207;  */

void FUN_108dcd194(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar1 == 0) {
    func_0x00010c12bca0(PTR_PTR_1126aef90,param_2,&PTR____CFConstantStringClassReference_110ef7d98);
  }
  else {
    func_0x00010c1894c0(PTR_PTR_1126aef90,param_2,lVar1,
                        &PTR____CFConstantStringClassReference_110ef7d98);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108dcd208; end: 108dcd293;  */

void FUN_108dcd208(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aef90;
  func_0x00010bf63b00(PTR_PTR_1126aef90,param_2,&PTR____CFConstantStringClassReference_110ef7db8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
    puVar3 = puVar2;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108dcd294; end: 108dcd527;  */

void FUN_108dcd294(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar1 == 0) {
    func_0x00010c12bca0(PTR_PTR_1126aef90,param_2,&PTR____CFConstantStringClassReference_110ef7db8);
  }
  else {
    func_0x00010c1894c0(PTR_PTR_1126aef90,param_2,lVar1,
                        &PTR____CFConstantStringClassReference_110ef7db8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108dcd528; end: 108dcd7e3; -[SCMemoriesPrivateKeyServiceProvider _buildKeyService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dcd528(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f51baa5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0,0,0xc);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126dbe58;
  _objc_alloc();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_11277b8e4;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar10;
  func_0x00010c0c94e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_11277b8e8;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar11;
  func_0x00010c0d82c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_11277b8ec;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar12;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11277b8e0;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar13;
  func_0x00010bf8d080();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_11277b8f0;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar14;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_11277b8f4;
    _objc_loadWeakRetained(lVar15);
  }
  lVar8 = lVar15;
  func_0x00010bfcdfa0(lVar15);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11277b8f8;
    _objc_loadWeakRetained();
  }
  lVar9 = param_1;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03ac80(puVar2,param_2,lVar3,lVar4,lVar5,lVar6,lVar7,lVar8,puVar1,lVar9);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar15);
  _objc_release(lVar7);
  _objc_release(lVar14);
  _objc_release(lVar6);
  _objc_release(lVar13);
  _objc_release(lVar5);
  _objc_release(lVar12);
  _objc_release(lVar4);
  _objc_release(lVar11);
  _objc_release(lVar3);
  _objc_release(lVar10);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108dcd7e4; end: 108dcd863; -[SCMemoriesPrivateKeyServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dcd7e4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277b8f8);
  _objc_destroyWeak(param_1 + _DAT_11277b8f4);
  _objc_destroyWeak(param_1 + _DAT_11277b8f0);
  _objc_destroyWeak(param_1 + _DAT_11277b8ec);
  _objc_destroyWeak(param_1 + _DAT_11277b8e8);
  _objc_destroyWeak(param_1 + _DAT_11277b8e4);
  _objc_destroyWeak(param_1 + _DAT_11277b8e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277b8dc);
  return;
}



/* Entry: 108dcd864; end: 108dcd947; -[SCMemoriesPrivateMemoriesManagerServiceProvider provide] */

void FUN_108dcd864(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126dbe60;
  _objc_alloc(PTR_PTR_1126dbe60);
  func_0x00010c02ab60();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108dcd948; end: 108dcd987;  */

void FUN_108dcd948(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd64a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108dcd988; end: 108dcdafb; -[SCMemoriesPrivateMemoriesManagerServiceProvider _buildManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dcd988(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126dbe68;
  _objc_alloc(PTR_PTR_1126dbe68);
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_11277b900;
    _objc_loadWeakRetained(lVar7);
  }
  lVar2 = lVar7;
  func_0x00010c0869e0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_11277b904;
    _objc_loadWeakRetained(lVar8);
  }
  lVar3 = lVar8;
  func_0x00010bfa2b80(lVar8);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_11277b90c;
    _objc_loadWeakRetained(lVar9);
  }
  lVar4 = lVar9;
  func_0x00010bf522a0(lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = 0;
  if (param_1 != 0) {
    lVar5 = param_1 + _DAT_11277b908;
    _objc_loadWeakRetained(lVar5);
  }
  lVar6 = lVar5;
  func_0x00010c293fc0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020f60(puVar1,param_2,lVar2,lVar3,lVar4,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108dcdafc; end: 108dcdb57; -[SCMemoriesPrivateMemoriesManagerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dcdafc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277b90c);
  _objc_destroyWeak(param_1 + _DAT_11277b908);
  _objc_destroyWeak(param_1 + _DAT_11277b904);
  _objc_destroyWeak(param_1 + _DAT_11277b900);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277b8fc);
  return;
}



/* Entry: 108dcdb58; end: 108dcdb9f; -[SCGalleryPrivateGalleryFlowPagingAnimator initWithOperation:] */

void FUN_108dcdb58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fe808;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 108dcdba0; end: 108dcdbab; -[SCGalleryPrivateGalleryFlowPagingAnimator transitionDuration:] */

undefined8 FUN_108dcdba0(void)

{
  return 0x3fd6666666666666;
}



/* Entry: 108dcdbac; end: 108dcdd9f; -[SCGalleryPrivateGalleryFlowPagingAnimator animateTransition:] */

void FUN_108dcdbac(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  double dStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  double dStack_88;
  
  _objc_retain(param_7);
  uVar2 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar5 = param_1;
  _CGRectGetWidth();
  uVar3 = param_7;
  dVar6 = dVar5;
  func_0x00010c29ce60(param_7,param_6,*(undefined8 *)PTR__UITransitionContextFromViewKey_110345e50);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_7;
  func_0x00010c29ce60(param_7,param_6,*(undefined8 *)PTR__UITransitionContextToViewKey_110345e60);
  _objc_retainAutoreleasedReturnValue();
  dVar7 = dVar5;
  if (*(long *)(param_5 + 8) != 1) {
    if (*(long *)(param_5 + 8) != 2) goto LAB_108dcdc9c;
    dVar7 = -dVar5;
  }
  dVar6 = param_1;
  func_0x00010b690928(param_1,param_2,param_3,param_4,dVar7,0);
  func_0x00010c19f0e0(uVar4);
  func_0x00010befbb60(uVar2,param_6,uVar4);
LAB_108dcdc9c:
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010c27a940(param_5,param_6,param_7);
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_108dcdda0;
  puStack_c8 = &UNK_110ac5398;
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  uStack_f8 = 0x108dcde14;
  puStack_f0 = &UNK_110841f20;
  uStack_e8 = param_7;
  lStack_c0 = param_5;
  uStack_b8 = uVar3;
  uStack_b0 = uVar4;
  dStack_a8 = param_1;
  uStack_a0 = param_2;
  uStack_98 = param_3;
  uStack_90 = param_4;
  dStack_88 = dVar5;
  _objc_retain(param_7);
  _objc_retain(uVar4);
  _objc_retain(uVar3);
  func_0x00010bf03420(dVar6,puVar1,param_6,&puStack_e0,&puStack_108);
  _objc_release(uStack_e8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(param_7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 108dcdda0; end: 108dcde3f;  */

/* WARNING: Possible PIC construction at 0x000108dcddec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108dcddf0) */

void FUN_108dcdda0(long param_1)

{
  long lVar1;
  double dVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  if (lVar1 == 2) {
    dVar2 = *(double *)(param_1 + 0x58);
  }
  else {
    if (lVar1 != 1) {
      return;
    }
    dVar2 = -*(double *)(param_1 + 0x58);
  }
  func_0x00010b690928(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),dVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 108dcde40; end: 108dcde8f; -[SCGalleryPrivateGalleryFlowTransitioningAnimator initWithPresenting:vertical:] */

void FUN_108dcde40(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fe810;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
  }
  return;
}



/* Entry: 108dcde90; end: 108dcde9b; -[SCGalleryPrivateGalleryFlowTransitioningAnimator transitionDuration:] */

undefined8 FUN_108dcde90(void)

{
  return 0x3fd6666666666666;
}



/* Entry: 108dcde9c; end: 108dce0ff; -[SCGalleryPrivateGalleryFlowTransitioningAnimator animateTransition:] */

void FUN_108dcde9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  _objc_retain(param_7);
  uVar2 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar5 = param_1;
  _CGRectGetWidth();
  uVar6 = param_1;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  uVar3 = param_7;
  func_0x00010c29ce60(param_7,param_6,*(undefined8 *)PTR__UITransitionContextFromViewKey_110345e50);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_7;
  func_0x00010c29ce60(param_7,param_6,*(undefined8 *)PTR__UITransitionContextToViewKey_110345e60);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  if (*(char *)(param_5 + 8) == '\x01') {
    if (*(char *)(param_5 + 9) == '\x01') {
      uVar8 = 0;
      uVar9 = uVar6;
    }
    else {
      uVar9 = 0;
      uVar8 = uVar5;
    }
    func_0x00010b690928(param_1,param_2,param_3,param_4,uVar8,uVar9);
    func_0x00010c19f0e0(uVar4);
    func_0x00010befbb60(uVar2,param_6,uVar4);
  }
  else {
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4,uVar4);
    func_0x00010befbb60(uVar2,param_6,uVar4);
    func_0x00010bf21300(uVar2,param_6,uVar3);
  }
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010c27a940(param_5,param_6,param_7);
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_108dce100;
  puStack_e0 = &UNK_110870740;
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x108dce16c;
  puStack_108 = &UNK_110841f20;
  uStack_100 = param_7;
  lStack_d8 = param_5;
  uStack_d0 = uVar4;
  uStack_c8 = uVar3;
  uStack_c0 = param_1;
  uStack_b8 = param_2;
  uStack_b0 = param_3;
  uStack_a8 = param_4;
  uStack_a0 = uVar6;
  uStack_98 = uVar5;
  _objc_retain(param_7);
  _objc_retain(uVar3);
  _objc_retain(uVar4);
  func_0x00010bf03420(uVar7,puVar1,param_6,&puStack_f8,&puStack_120);
  _objc_release(uStack_100);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(param_7);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  return;
}



/* Entry: 108dce100; end: 108dce197;  */

void FUN_108dce100(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(*(long *)(param_1 + 0x20) + 8) == '\x01') {
    puVar1 = (undefined8 *)(param_1 + 0x28);
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 0x30);
    if (*(char *)(*(long *)(param_1 + 0x20) + 9) == '\x01') {
      uVar3 = *(undefined8 *)(param_1 + 0x58);
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x60);
      uVar3 = 0;
    }
    func_0x00010b690928(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),uVar2,uVar3)
    ;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*puVar1,PTR_s_setFrame__112645658);
  return;
}



/* Entry: 108dce198; end: 108dce22f; -[SCGalleryPrivateGalleryFlowNavigationController initWithRootViewController:currentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108dce198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe818;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithRootViewController__1125edab8,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_11277b91c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108dce230; end: 108dce237; -[SCGalleryPrivateGalleryFlowNavigationController pageViewName] */

undefined8 FUN_108dce230(void)

{
  return 0x7c;
}



/* Entry: 108dce238; end: 108dce297; -[SCGalleryPrivateGalleryFlowNavigationController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dce238(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fe818;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277b91c);
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar1);
  return;
}



/* Entry: 108dce298; end: 108dce2c7; +[SCGalleryPrivateGalleryFlowNavigationController pagingAnimatorForOperation:] */

void FUN_108dce298(void)

{
  _objc_alloc(PTR_PTR_1126dbe70);
  func_0x00010c031fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108dce2c8; end: 108dce2ff; +[SCGalleryPrivateGalleryFlowNavigationController transitioningAnimatorForPresenting:vertical:] */

void FUN_108dce2c8(void)

{
  _objc_alloc(PTR_PTR_1126dbe78);
  func_0x00010c038cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108dce300; end: 108dce30b; -[SCGalleryPrivateGalleryFlowNavigationController supportedInterfaceOrientations] */

undefined8 FUN_108dce300(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 108dce30c; end: 108dce313; -[SCGalleryPrivateGalleryFlowNavigationController preferredStatusBarStyle] */

undefined8 FUN_108dce30c(void)

{
  return 0;
}



/* Entry: 108dce314; end: 108dce31b; -[SCGalleryPrivateGalleryFlowNavigationController prefersStatusBarHidden] */

undefined8 FUN_108dce314(void)

{
  return 0;
}



/* Entry: 108dce31c; end: 108dce323; -[SCGalleryPrivateGalleryFlowNavigationController modalPresentationStyle] */

undefined8 FUN_108dce31c(void)

{
  return 0;
}



/* Entry: 108dce324; end: 108dce32b; -[SCGalleryPrivateGalleryFlowNavigationController shouldPopToRootViewController] */

undefined8 FUN_108dce324(void)

{
  return 0;
}



/* Entry: 108dce32c; end: 108dce333; -[SCGalleryPrivateGalleryFlowNavigationController shouldPopToRootViewControllerLater] */

undefined8 FUN_108dce32c(void)

{
  return 0;
}



/* Entry: 108dce334; end: 108dce33b; -[SCGalleryPrivateGalleryFlowNavigationController shouldDisplayStatusBar] */

undefined8 FUN_108dce334(void)

{
  return 1;
}



/* Entry: 108dce33c; end: 108dce34f; -[SCGalleryPrivateGalleryFlowNavigationController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dce33c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b91c,0);
  return;
}



/* Entry: 108dce350; end: 108dce3a3; -[SCGalleryPrivateGalleryFlowPageViewController initWithNibName:bundle:] */

undefined1 * FUN_108dce350(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fe820;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithNibName_bundle__1125e9850);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108dce3a4; end: 108dce3f7; -[SCGalleryPrivateGalleryFlowPageViewController init] */

undefined1 * FUN_108dce3a4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fe820;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108dce3f8; end: 108dce47f; -[SCGalleryPrivateGalleryFlowPageViewController viewDidLoad] */

void FUN_108dce3f8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fe820;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 108dce480; end: 108dce48b; -[SCGalleryPrivateGalleryFlowPageViewController supportedInterfaceOrientations] */

undefined8 FUN_108dce480(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 108dce48c; end: 108dce493; -[SCGalleryPrivateGalleryFlowPageViewController preferredStatusBarStyle] */

undefined8 FUN_108dce48c(void)

{
  return 0;
}



/* Entry: 108dce494; end: 108dce49b; -[SCGalleryPrivateGalleryFlowPageViewController prefersStatusBarHidden] */

undefined8 FUN_108dce494(void)

{
  return 0;
}



/* Entry: 108dce49c; end: 108dce4a3; -[SCGalleryPrivateGalleryFlowPageViewController shouldPopToRootViewController] */

undefined8 FUN_108dce49c(void)

{
  return 0;
}



/* Entry: 108dce4a4; end: 108dce4ab; -[SCGalleryPrivateGalleryFlowPageViewController shouldPopToRootViewControllerLater] */

undefined8 FUN_108dce4a4(void)

{
  return 0;
}



/* Entry: 108dce4ac; end: 108dce4b3; -[SCGalleryPrivateGalleryFlowPageViewController shouldDisplayStatusBar] */

undefined8 FUN_108dce4ac(void)

{
  return 1;
}



/* Entry: 108dce4b4; end: 108dcee13; -[SCGalleryPrivateGalleryReauthenticateView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108dce4b4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_d0 = PTR_PTR_1126fe828;
  puVar1 = &uStack_d8;
  puVar10 = (undefined8 *)PTR_s_initWithFrame__1125e2948;
  uStack_d8 = param_1;
  _objc_msgSendSuper2();
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar10 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4030000000000000);
    _objc_release(puVar10);
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = (long)_DAT_11277b94c;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined **)((long)puVar1 + lVar13) = puVar2;
    _objc_release(uVar11);
    uVar11 = *(undefined8 *)((long)puVar1 + lVar13);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(uVar11);
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar13);
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_108dcee14;
    puStack_e8 = &UNK_1108471b0;
    _objc_retain(puVar1);
    puStack_e0 = puVar1;
    func_0x00010c0bbfc0(uVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    uVar14 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar14,uVar15,uVar16,uVar17);
    lVar13 = (long)_DAT_11277b950;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined **)((long)puVar1 + lVar13) = puVar3;
    _objc_release(uVar11);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar13));
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar13));
    _objc_release(puVar3);
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010befbb60(puVar1);
    uVar11 = *(undefined8 *)((long)puVar1 + lVar13);
    puStack_128 = puVar2;
    uStack_120 = 0xc2000000;
    uStack_118 = 0x108dcef48;
    puStack_110 = &UNK_1108471b0;
    _objc_retain(puVar1);
    puStack_108 = puVar1;
    func_0x00010c0bbfc0(uVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UITextField_1126af060;
    _objc_alloc();
    func_0x00010c013de0(uVar14,uVar15,uVar16,uVar17);
    lVar13 = (long)_DAT_11277b954;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined **)((long)puVar1 + lVar13) = puVar2;
    _objc_release(uVar11);
    puVar2 = PTR_PTR_1126c2e38;
    func_0x00010bdc2b00();
    if (puVar2 == (undefined *)0x0) {
      _CATransform3DMakeTranslation(&uStack_1a8,0x4024000000000000,0,0);
      uVar11 = *(undefined8 *)((long)puVar1 + lVar13);
      func_0x00010c08c0e0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uStack_1e8 = uStack_160;
      uStack_1f0 = uStack_168;
      uStack_1d8 = uStack_150;
      uStack_1e0 = uStack_158;
      uStack_1c8 = uStack_140;
      uStack_1d0 = uStack_148;
      uStack_1b8 = uStack_130;
      uStack_1c0 = uStack_138;
      uStack_228 = uStack_1a0;
      uStack_230 = uStack_1a8;
      uStack_218 = uStack_190;
      uStack_220 = uStack_198;
    }
    else {
      _CATransform3DMakeTranslation(&uStack_2b0,0xc024000000000000,0,0);
      uVar11 = *(undefined8 *)((long)puVar1 + lVar13);
      func_0x00010c08c0e0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uStack_1e8 = uStack_268;
      uStack_1f0 = uStack_270;
      uStack_1d8 = uStack_258;
      uStack_1e0 = uStack_260;
      uStack_1c8 = uStack_248;
      uStack_1d0 = uStack_250;
      uStack_1b8 = uStack_238;
      uStack_1c0 = uStack_240;
      uStack_228 = uStack_2a8;
      uStack_230 = uStack_2b0;
      uStack_218 = uStack_298;
      uStack_220 = uStack_2a0;
    }
    func_0x00010c20f020();
    _objc_release(uVar11);
    uVar11 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010c08c0e0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4014000000000000);
    _objc_release(uVar11);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar13));
    _objc_release(puVar2);
    func_0x00010c1f9a00(*(undefined8 *)((long)puVar1 + lVar13));
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar13));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar13));
    _objc_release(puVar2);
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar13));
    puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    ppuVar4 = &PTR____CFConstantStringClassReference_110dadaf8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dadaf8,0);
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_b8 = puVar3;
    func_0x00010c098f40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_b0 = puVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar2);
    func_0x00010c16b680(*(undefined8 *)((long)puVar1 + lVar13));
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(ppuVar4);
    func_0x00010befbb60(puVar1);
    uVar11 = *(undefined8 *)((long)puVar1 + lVar13);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar13));
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_11277b958;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined **)((long)puVar1 + lVar12) = puVar2;
    _objc_release(uVar11);
    func_0x00010c195460(*(undefined8 *)((long)puVar1 + lVar12));
    uVar11 = *(undefined8 *)((long)puVar1 + lVar12);
    func_0x00010c08c0e0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4036000000000000);
    _objc_release(uVar11);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar12));
    _objc_release(puVar2);
    uVar11 = *(undefined8 *)((long)puVar1 + lVar12);
    ppuVar4 = &PTR____CFConstantStringClassReference_110dada38;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dada38,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar11);
    _objc_release(ppuVar4);
    uVar11 = *(undefined8 *)((long)puVar1 + lVar12);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar11);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar1 + lVar12);
    func_0x00010c271420(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar11);
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
    uVar11 = *(undefined8 *)((long)puVar1 + lVar12);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar12));
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = (long)_DAT_11277b95c;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined **)((long)puVar1 + lVar13) = puVar2;
    _objc_release(uVar11);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar13));
    _objc_release(puVar2);
    uVar11 = *(undefined8 *)((long)puVar1 + lVar13);
    ppuVar4 = &PTR____CFConstantStringClassReference_110dcc5f8;
    puVar10 = (undefined8 *)0x0;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcc5f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar11);
    _objc_release(ppuVar4);
    uVar11 = *(undefined8 *)((long)puVar1 + lVar13);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar11);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010c271420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar11);
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
    uVar11 = *(undefined8 *)((long)puVar1 + lVar13);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar13));
    puVar2 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
    _objc_alloc();
    func_0x00010bff0f20();
    lVar13 = (long)_DAT_11277b960;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined **)((long)puVar1 + lVar13) = puVar2;
    _objc_release(uVar11);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar12));
    uVar11 = *(undefined8 *)((long)puVar1 + lVar13);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puStack_108);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  puVar1 = puVar10;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)puVar9[2])();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar1);
  puVar1 = puVar10;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar10 = puVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar10;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)puVar8[2])();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 108dcee14; end: 108dcf0b3;  */

void FUN_108dcee14(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108dcf0b4; end: 108dcf70f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dcf0b4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277b950);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4034000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108dcf710; end: 108dcf783;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dcf710(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108dcf784; end: 108dcf79b; -[SCGalleryPrivateGalleryReauthenticateView intrinsicContentSize] */

undefined1  [16] FUN_108dcf784(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = *(undefined8 *)PTR__UIViewNoIntrinsicMetric_110345e70;
  auVar1._0_8_ = 0x4071800000000000;
  return auVar1;
}



/* Entry: 108dcf79c; end: 108dcf7ab; -[SCGalleryPrivateGalleryReauthenticateView questionMarkButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108dcf79c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b94c);
}



/* Entry: 108dcf7ac; end: 108dcf7bb; -[SCGalleryPrivateGalleryReauthenticateView label] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108dcf7ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b950);
}



/* Entry: 108dcf7bc; end: 108dcf7cb; -[SCGalleryPrivateGalleryReauthenticateView textField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108dcf7bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b954);
}



/* Entry: 108dcf7cc; end: 108dcf7db; -[SCGalleryPrivateGalleryReauthenticateView nextButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108dcf7cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b958);
}



/* Entry: 108dcf7dc; end: 108dcf7eb; -[SCGalleryPrivateGalleryReauthenticateView cancelButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108dcf7dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b95c);
}



/* Entry: 108dcf7ec; end: 108dcf7fb; -[SCGalleryPrivateGalleryReauthenticateView loadingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108dcf7ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b960);
}



/* Entry: 108dcf7fc; end: 108dcf87b; -[SCGalleryPrivateGalleryReauthenticateView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dcf7fc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277b960,0);
  _objc_storeStrong(param_1 + _DAT_11277b95c,0);
  _objc_storeStrong(param_1 + _DAT_11277b958,0);
  _objc_storeStrong(param_1 + _DAT_11277b954,0);
  _objc_storeStrong(param_1 + _DAT_11277b950,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b94c,0);
  return;
}



/* Entry: 108dcf87c; end: 108dcf95b; -[SCGalleryPrivateGalleryReauthenticateFlow initWithReauthenticationService:fromViewController:currentPageTracker:] */

undefined1 *
FUN_108dcf87c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fe830;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release();
    func_0x000108dfda4c();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108dcf95c; end: 108dcf993; -[SCGalleryPrivateGalleryReauthenticateFlow startWithPresentationAnimationType:] */

void FUN_108dcf95c(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    return;
  }
  func_0x00010beaa4c0();
                    /* WARNING: Could not recover jumptable at 0x00010bebbd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__showWithPresentationAnimationTy_11258c8f8,param_3);
  return;
}



/* Entry: 108dcf994; end: 108dcfd17; -[SCGalleryPrivateGalleryReauthenticateFlow _setup] */

void FUN_108dcf994(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar7 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar6);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_108dcfd18;
  puStack_80 = &UNK_1108471b0;
  lStack_78 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_98);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar5;
  _objc_release(uVar6);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + 0x28),param_2,puVar5);
  _objc_release(puVar5);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x28));
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_108dcfdd4;
  puStack_a8 = &UNK_1108471b0;
  lStack_a0 = param_1;
  func_0x00010c0bbfe0(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_c0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126dbe80;
  _objc_alloc();
  func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar5;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c087500(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar6);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x30));
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x108dcfe40;
  puStack_d0 = &UNK_1108471b0;
  lStack_c8 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + 0x30),param_2,&puStack_e8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11dc60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c26bc20(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0d98c0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf2dfc0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar6);
  func_0x00010c08cdc0(*(undefined8 *)(param_1 + 0x20));
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  return;
}



/* Entry: 108dcfd18; end: 108dcfdd3;  */

void FUN_108dcfd18(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20) + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108dcfdd4; end: 108dcff2f;  */

void FUN_108dcfdd4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108dcff30; end: 108dcffef; -[SCGalleryPrivateGalleryReauthenticateFlow _teardown] */

void FUN_108dcff30(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x48) = 0;
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108dcfff0; end: 108dd016b; -[SCGalleryPrivateGalleryReauthenticateFlow _showWithPresentationAnimationType:] */

void FUN_108dcfff0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  long lStack_108;
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  *(undefined1 *)(param_1 + 0x48) = 1;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c26bc20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf179a0();
  _objc_release(uVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108dd016c;
  puStack_60 = &UNK_110842e18;
  lStack_58 = param_1;
  func_0x00010bf03400(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_78);
  if (param_3 == 1) {
    func_0x00010bede540(param_1);
    func_0x00010c08cdc0(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x30));
    _CGAffineTransformMakeScale(&uStack_d0,0x3feccccccccccccd,0x3feccccccccccccd);
    uStack_f8 = uStack_c8;
    uStack_100 = uStack_d0;
    uStack_e8 = uStack_b8;
    uStack_f0 = uStack_c0;
    uStack_d8 = uStack_a8;
    uStack_e0 = uStack_b0;
    func_0x00010c219960(*(undefined8 *)(param_1 + 0x30),param_2,&uStack_100);
    puStack_128 = puVar1;
    uStack_120 = 0xc2000000;
    uStack_118 = 0x108dd01ac;
    puStack_110 = &UNK_110842e18;
    lStack_108 = param_1;
    func_0x00010bf03400(0x3fc3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_128);
  }
  else if (param_3 == 0) {
    puStack_a0 = puVar1;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_108dd0180;
    puStack_88 = &UNK_110842e18;
    lStack_80 = param_1;
    func_0x00010bf03460(0x3fd999999999999a,0,0x3fe6666666666666,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIView_1126aec20,param_2,4,&puStack_a0,0);
  }
  return;
}



/* Entry: 108dd016c; end: 108dd017f;  */

void FUN_108dd016c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fd47ae147ae147b,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108dd0180; end: 108dd0207;  */

void FUN_108dd0180(long param_1)

{
  func_0x00010bede540(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 108dd0208; end: 108dd0333; -[SCGalleryPrivateGalleryReauthenticateFlow _dismissWithCompletion:] */

void FUN_108dd0208(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0x48) = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c26bc20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13a0e0();
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108dd0334;
  puStack_60 = &UNK_110842e18;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x108dd0344;
  puStack_88 = &UNK_110842508;
  uStack_80 = param_3;
  lStack_58 = param_1;
  _objc_retain(param_3);
  func_0x00010bf03420(0x3fd3333333333333,puVar2,param_2,&puStack_78,&puStack_a0);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_108dd0350;
  puStack_b0 = &UNK_110842e18;
  lStack_a8 = param_1;
  func_0x00010bf03440(0x3fc999999999999a,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0x30004,
                      &puStack_c8,0);
  _objc_release(uStack_80);
  _objc_release(param_3);
  return;
}



/* Entry: 108dd0334; end: 108dd034f;  */

void FUN_108dd0334(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108dd0350; end: 108dd037b;  */

void FUN_108dd0350(long param_1)

{
  func_0x00010bede540(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 108dd037c; end: 108dd03db; -[SCGalleryPrivateGalleryReauthenticateFlow _updateReauthenticateViewLayoutConstraints] */

void FUN_108dd037c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108dd03dc;
  puStack_20 = &UNK_1108471b0;
  lStack_18 = param_1;
  func_0x00010c0bbfe0(*(undefined8 *)(param_1 + 0x30),param_2,&puStack_38);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 108dd03dc; end: 108dd064f;  */

void FUN_108dd03dc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x48) == '\x01') {
    lVar2 = param_2;
    func_0x00010bf1fec0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010c098960();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar7;
    (**(code **)(lVar7 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c2a7440();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0e1c40();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(-*(double *)(*(long *)(param_1 + 0x20) + 0x40));
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar7);
    _objc_release(lVar2);
    func_0x00010bf348c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    (**(code **)(lVar2 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar7;
    func_0x00010c2a7440();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0e1c40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    (**(code **)(lVar4 + 0x10))(*(double *)(*(long *)(param_1 + 0x20) + 0x40) * -0.5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c14d8c0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar6 + 0x10))();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  else {
    func_0x00010c274140();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010c0bbea0(lVar7);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,lVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108dd0650; end: 108dd07eb; -[SCGalleryPrivateGalleryReauthenticateFlow _keyboardWillChangeFrame:] */

void FUN_108dd0650(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  func_0x00010c292820(param_7);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1080();
  dVar3 = param_1;
  _objc_release(lVar1);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x20));
  _CGRectGetMaxY();
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  dVar4 = 0.0;
  if (0.0 <= dVar3 - param_1) {
    dVar4 = dVar3 - param_1;
  }
  if ((*(double *)(param_5 + 0x40) != dVar4) &&
     (*(double *)(param_5 + 0x40) = dVar4, *(char *)(param_5 + 0x48) == '\x01')) {
    lVar1 = param_7;
    func_0x00010c0e00e0(param_7,param_6,
                        *(undefined8 *)PTR__UIKeyboardAnimationDurationUserInfoKey_110345ce0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(lVar1);
    lVar1 = param_7;
    func_0x00010c0e00e0(param_7,param_6,
                        *(undefined8 *)PTR__UIKeyboardAnimationCurveUserInfoKey_110345cd8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c067fc0();
    _objc_release(lVar1);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_108dd07ec;
    puStack_70 = &UNK_110842e18;
    lStack_68 = param_5;
    func_0x00010bf03440(dVar4,0,PTR__OBJC_CLASS___UIView_1126aec20,param_6,lVar2 << 0x10 | 4,
                        &puStack_88,0);
  }
  _objc_release(param_7);
  return;
}



/* Entry: 108dd07ec; end: 108dd0817;  */

void FUN_108dd07ec(long param_1)

{
  func_0x00010bede540(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 108dd0818; end: 108dd0867; -[SCGalleryPrivateGalleryReauthenticateFlow _didPressQuestionMarkButton] */

void FUN_108dd0818(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108dd0868;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010be03c00(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 108dd0868; end: 108dd094f;  */

void FUN_108dd0868(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e74598);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c3a18;
  _objc_alloc(PTR_PTR_1126c3a18);
  func_0x00010c057c20();
  func_0x00010c18b5e0();
  lVar3 = *(long *)(param_1 + 0x20) + 0x10;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010becaf20(*(undefined8 *)(param_1 + 0x20));
  lVar3 = *(long *)(param_1 + 0x20) + 0x50;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c114220();
  _objc_release(lVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108dd0950; end: 108dd0a47; -[SCGalleryPrivateGalleryReauthenticateFlow _textFieldDidChange] */

void FUN_108dd0950(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  func_0x00010bde03a0();
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c26bc20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0d98c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    func_0x00010c195460();
    _objc_release(uVar4);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c14c520(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c195460();
    _objc_release(uVar4);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6d);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0d98c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 108dd0a48; end: 108dd0c2f; -[SCGalleryPrivateGalleryReauthenticateFlow _didPressNextButton] */

void FUN_108dd0a48(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  ppuVar5 = &puStack_c0;
  func_0x00010bde03a0();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c26bc20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13a0e0();
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0d98c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c09d4e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24dbc0();
  _objc_release(uVar2);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_108dd0c30;
  puStack_80 = &UNK_110841fb0;
  lStack_78 = param_1;
  _objc_copyWeak(auStack_70,auStack_68);
  ppuVar4 = &puStack_98;
  _objc_retainBlock(ppuVar4);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_108dd0d0c;
  puStack_a8 = &UNK_110843540;
  _objc_copyWeak(auStack_a0,auStack_68);
  _objc_retainBlock(&puStack_c0);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c26bc20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be869e0(param_1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(ppuVar5);
  _objc_destroyWeak(auStack_a0);
  _objc_release(ppuVar4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 108dd0c30; end: 108dd0cbb;  */

void FUN_108dd0c30(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  func_0x00010be03c00(uVar1);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 108dd0cbc; end: 108dd0d0b;  */

void FUN_108dd0cbc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010becaf20(param_1);
    lVar1 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c114240();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108dd0d0c; end: 108dd0dbf;  */

void FUN_108dd0d0c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010beb8f40(param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0d98c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c271420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0x3ff0000000000000);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c09d4e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2558c0();
    _objc_release(uVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108dd0dc0; end: 108dd0e0f; -[SCGalleryPrivateGalleryReauthenticateFlow _didPressCancelButton] */

void FUN_108dd0dc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108dd0e10;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010be03c00(param_1,param_2,&puStack_38);
  return;
}


