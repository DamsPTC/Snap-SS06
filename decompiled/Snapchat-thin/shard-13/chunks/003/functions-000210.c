/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a3c83bc; end: 10a3c83f3;  */

void FUN_10a3c83bc(undefined8 *param_1,long *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar7;
  
  while( true ) {
    plVar6 = param_2 + -2;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x19 = plVar6;
    (**(code **)(*plVar6 + 0x38))();
    if (param_3 < 0x7ffffffffffffff8) break;
    func_0x000109ffde50();
    if (*(char *)((long)register0x00000008 + -0x41) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x58));
    }
    unaff_x30 = FUN_10a3c83bc;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = extraout_x8;
    unaff_x20 = plVar6;
  }
  if (param_3 < 0x17) {
    *(char *)((long)register0x00000008 + -0x41) = (char)param_3;
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x58);
    if (param_3 == 0) goto LAB_10a3c832c;
  }
  else {
    puVar2 = (undefined1 *)0x19;
    if ((param_3 | 7) != 0x17) {
      puVar2 = (undefined1 *)((param_3 | 7) + 1);
    }
    puVar4 = puVar2;
    __Znwm();
    *(ulong *)((long)register0x00000008 + -0x50) = param_3;
    *(ulong *)((long)register0x00000008 + -0x48) = (ulong)puVar2 | 0x8000000000000000;
    *(undefined1 **)((long)register0x00000008 + -0x58) = puVar4;
  }
  _memmove(puVar4,unaff_x19,param_3);
LAB_10a3c832c:
  puVar4[param_3] = 0;
  bVar3 = (*(ushort *)(param_2 + 0x2e) & 2) != 0;
  puVar1 = &UNK_10f65387d;
  if (bVar3) {
    puVar1 = &UNK_10f653888;
  }
  uVar7 = 10;
  if (bVar3) {
    uVar7 = 0xb;
  }
  puVar5 = (undefined8 *)((long)register0x00000008 + -0x58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar5,puVar1,uVar7);
  uVar7 = *puVar5;
  param_1[1] = puVar5[1];
  *param_1 = uVar7;
  param_1[2] = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if (*(char *)((long)register0x00000008 + -0x41) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x58));
  }
  return;
}



/* Entry: 10a3c83f4; end: 10a3c8473;  */

void FUN_10a3c83f4(long *param_1)

{
  (**(code **)(*param_1 + 0x88))();
  return;
}



/* Entry: 10a3c8474; end: 10a3c8487;  */

bool FUN_10a3c8474(long param_1)

{
  return (*(ushort *)(param_1 + 0x180) & 0x12) == 0;
}



/* Entry: 10a3c8488; end: 10a3c8547;  */

long FUN_10a3c8488(void)

{
  long lVar1;
  int iVar2;
  undefined **ppuVar3;
  long extraout_x8;
  long lVar4;
  
  if ((bRam00000001138353b8 & 1) == 0) {
    iVar2 = 0x138353b8;
    ___cxa_guard_acquire(0x113835390);
    if (iVar2 != 0) {
      uRam00000001138353a0 = 0;
      uRam0000000113835398 = 0;
      ppuRam0000000113835390 = &PTR_FUN_110c38400;
      uRam00000001138353a8 = 0x17d;
      uRam00000001138353b0 = 0;
      ___cxa_atexit(FUN_10a3df818,0x113835390,0x100000000);
      ___cxa_guard_release(0x1138353b8);
    }
  }
  ppuVar3 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)(0x113835390);
  lVar4 = 0;
  if (*ppuVar3 != (undefined *)0x0) {
    lVar4 = *(long *)(*ppuVar3 + 0xa20);
  }
  lVar1 = extraout_x8;
  if (lVar4 != 0) {
    lVar1 = lVar4;
  }
  return lVar1;
}



/* Entry: 10a3c8548; end: 10a3c869b;  */

undefined8 ** FUN_10a3c8548(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *apuStack_70 [2];
  char cStack_59;
  undefined7 uStack_58;
  undefined1 uStack_51;
  undefined7 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)((long)param_2 + 0x17f) < '\0') {
    ppuVar4 = (undefined8 **)param_1;
    func_0x000107c3192c(param_1,param_2[0x2d],param_2[0x2e]);
  }
  else {
    uVar7 = param_2[0x2d];
    param_1[1] = param_2[0x2e];
    *param_1 = uVar7;
    param_1[2] = param_2[0x2f];
    ppuVar4 = (undefined8 **)param_2;
  }
  while (param_2 = (undefined8 *)param_2[0x31], param_2 != (undefined8 *)0x0) {
    FUN_10a0b4df8(apuStack_70,param_2 + 0x2d,param_3);
    uVar1 = param_1[1];
    puVar3 = (undefined8 *)*param_1;
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
      puVar3 = param_1;
    }
    ppuVar4 = apuStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (apuStack_70,puVar3,uVar1);
    uVar7 = *ppuVar4;
    uStack_58 = SUB87(ppuVar4[1],0);
    uStack_51 = (undefined1)*(undefined8 *)((long)ppuVar4 + 0xf);
    uStack_50 = (undefined7)((ulong)*(undefined8 *)((long)ppuVar4 + 0xf) >> 8);
    uVar2 = *(undefined1 *)((long)ppuVar4 + 0x17);
    ppuVar4[1] = (undefined8 *)0x0;
    ppuVar4[2] = (undefined8 *)0x0;
    *ppuVar4 = (undefined8 *)0x0;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      ppuVar4 = (undefined8 **)*param_1;
      __ZdlPv();
    }
    *param_1 = uVar7;
    param_1[1] = CONCAT17(uStack_51,uStack_58);
    *(ulong *)((long)param_1 + 0xf) = CONCAT71(uStack_50,uStack_51);
    *(undefined1 *)((long)param_1 + 0x17) = uVar2;
    if (cStack_59 < '\0') {
      ppuVar4 = (undefined8 **)apuStack_70[0];
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  __Unwind_Resume();
  FUN_10a3c87d8();
  if (ppuVar4[0x26] != (undefined8 *)0x0) {
    ppuVar4[0x27] = ppuVar4[0x26];
    __ZdlPv();
  }
  if (ppuVar4[0x1f] != (undefined8 *)0x0) {
    ppuVar4[0x20] = ppuVar4[0x1f];
    __ZdlPv();
  }
  if (ppuVar4[0x18] != (undefined8 *)0x0) {
    ppuVar4[0x19] = ppuVar4[0x18];
    __ZdlPv();
  }
  if (ppuVar4[0x11] != (undefined8 *)0x0) {
    ppuVar4[0x12] = ppuVar4[0x11];
    __ZdlPv();
  }
  if (ppuVar4[10] != (undefined8 *)0x0) {
    ppuVar4[0xb] = ppuVar4[10];
    __ZdlPv();
  }
  puVar5 = ppuVar4 + 8;
  puVar3 = (undefined8 *)*puVar5;
  while (puVar3 != puVar5) {
    puVar6 = (undefined8 *)*puVar3;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = puVar6;
  }
  *puVar5 = 0;
  ppuVar4[9] = (undefined8 *)0x0;
  puVar5 = ppuVar4 + 6;
  puVar3 = (undefined8 *)*puVar5;
  while (puVar3 != puVar5) {
    puVar6 = (undefined8 *)*puVar3;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = puVar6;
  }
  *puVar5 = 0;
  ppuVar4[7] = (undefined8 *)0x0;
  puVar5 = ppuVar4 + 4;
  puVar3 = (undefined8 *)*puVar5;
  while (puVar3 != puVar5) {
    puVar6 = (undefined8 *)*puVar3;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = puVar6;
  }
  *puVar5 = 0;
  ppuVar4[5] = (undefined8 *)0x0;
  puVar5 = ppuVar4 + 2;
  puVar3 = (undefined8 *)*puVar5;
  while (puVar3 != puVar5) {
    puVar6 = (undefined8 *)*puVar3;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = puVar6;
  }
  *puVar5 = 0;
  ppuVar4[3] = (undefined8 *)0x0;
  puVar3 = *ppuVar4;
  while ((undefined8 **)puVar3 != ppuVar4) {
    puVar5 = (undefined8 *)*puVar3;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = puVar5;
  }
  *ppuVar4 = (undefined8 *)0x0;
  ppuVar4[1] = (undefined8 *)0x0;
  return ppuVar4;
}



/* Entry: 10a3c869c; end: 10a3c87d7;  */

undefined8 * FUN_10a3c869c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_10a3c87d8();
  if (param_1[0x26] != 0) {
    param_1[0x27] = param_1[0x26];
    __ZdlPv();
  }
  if (param_1[0x1f] != 0) {
    param_1[0x20] = param_1[0x1f];
    __ZdlPv();
  }
  if (param_1[0x18] != 0) {
    param_1[0x19] = param_1[0x18];
    __ZdlPv();
  }
  if (param_1[0x11] != 0) {
    param_1[0x12] = param_1[0x11];
    __ZdlPv();
  }
  if (param_1[10] != 0) {
    param_1[0xb] = param_1[10];
    __ZdlPv();
  }
  puVar2 = param_1 + 8;
  puVar1 = (undefined8 *)*puVar2;
  while (puVar1 != puVar2) {
    puVar3 = (undefined8 *)*puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar3;
  }
  *puVar2 = 0;
  param_1[9] = 0;
  puVar2 = param_1 + 6;
  puVar1 = (undefined8 *)*puVar2;
  while (puVar1 != puVar2) {
    puVar3 = (undefined8 *)*puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar3;
  }
  *puVar2 = 0;
  param_1[7] = 0;
  puVar2 = param_1 + 4;
  puVar1 = (undefined8 *)*puVar2;
  while (puVar1 != puVar2) {
    puVar3 = (undefined8 *)*puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar3;
  }
  *puVar2 = 0;
  param_1[5] = 0;
  puVar2 = param_1 + 2;
  puVar1 = (undefined8 *)*puVar2;
  while (puVar1 != puVar2) {
    puVar3 = (undefined8 *)*puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar3;
  }
  *puVar2 = 0;
  param_1[3] = 0;
  puVar1 = (undefined8 *)*param_1;
  while (puVar1 != param_1) {
    puVar2 = (undefined8 *)*puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar2;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 10a3c87d8; end: 10a3c8a23;  */

void FUN_10a3c87d8(long param_1)

{
  long *plVar1;
  undefined8 ****ppppuVar2;
  bool bVar3;
  bool bVar4;
  undefined **ppuVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 ****ppppuVar10;
  undefined8 *puVar11;
  undefined8 *puStack_60;
  long *plStack_58;
  undefined8 ***pppuStack_50;
  undefined8 ***pppuStack_48;
  
  plStack_58 = (long *)&puStack_60;
  puStack_60 = &puStack_60;
  plVar1 = (long *)(param_1 + 0x40);
  pppuStack_50 = &pppuStack_50;
  pppuStack_48 = &pppuStack_50;
  do {
    while( true ) {
      FUN_10a3c8c64(param_1,&pppuStack_50);
      FUN_10a3c8c64(param_1 + 0x10,&pppuStack_50);
      FUN_10a3c8c64(param_1 + 0x20,&pppuStack_50);
      FUN_10a3c8c64(param_1 + 0x30,&pppuStack_50);
      plVar6 = *(long **)(param_1 + 0x40);
      while (plVar8 = plVar6, plVar8 != plVar1) {
        plVar6 = (long *)*plVar8;
        if ((((*(ushort *)(plVar8 + 0x19) >> 10 & 1) != 0) && ((undefined8 **)plVar8 != &puStack_60)
            ) && ((undefined8 **)plVar6 != &puStack_60)) {
          puVar11 = (undefined8 *)plVar8[1];
          *plStack_58 = (long)plVar8;
          *plVar8 = (long)&puStack_60;
          plVar8[1] = (long)plStack_58;
          plVar6[1] = (long)puVar11;
          *puVar11 = plVar6;
          plStack_58 = plVar8;
        }
      }
      if (((undefined8 ****)pppuStack_50 == (undefined8 ****)0x0) ||
         ((undefined8 ****)pppuStack_50 == &pppuStack_50)) break;
      do {
        (*(code *)pppuStack_50[-0x14][1])();
      } while ((undefined8 ****)pppuStack_50 != (undefined8 ****)0x0 &&
               (undefined8 ****)pppuStack_50 != &pppuStack_50);
      if ((puStack_60 != (undefined8 *)0x0) && ((undefined8 **)puStack_60 != &puStack_60)) {
        do {
          (**(code **)(puStack_60[-10] + 8))();
        } while (puStack_60 != (undefined8 *)0x0 && (undefined8 **)puStack_60 != &puStack_60);
      }
    }
    bVar3 = puStack_60 != (undefined8 *)0x0;
    bVar4 = (undefined8 **)puStack_60 != &puStack_60;
    if ((puStack_60 != (undefined8 *)0x0) && (bVar4)) {
      do {
        (**(code **)(puStack_60[-10] + 8))();
      } while (puStack_60 != (undefined8 *)0x0 && (undefined8 **)puStack_60 != &puStack_60);
    }
  } while (bVar4 && bVar3);
  FUN_10a3c8cb4(param_1);
  FUN_10a3c8cb4(param_1 + 0x10);
  FUN_10a3c8cb4(param_1 + 0x20);
  FUN_10a3c8cb4(param_1 + 0x30);
  plVar6 = *(long **)(param_1 + 0x40);
  if ((plVar6 != (long *)0x0) && (plVar6 != plVar1)) {
    ppuVar5 = &PTR_PTR_113301f78;
    FUN_10ae079a0(0,&PTR_PTR_113301f78);
    FUN_10ae07cd4(ppuVar5,&PTR_PTR_113301f78);
    plVar6 = (long *)*plVar1;
  }
  while ((plVar6 != (long *)0x0 && (plVar6 != plVar1))) {
    lVar7 = *plVar6;
    if (lVar7 != 0) {
      plVar8 = (long *)plVar6[1];
      *plVar8 = lVar7;
      *(long **)(lVar7 + 8) = plVar8;
      *plVar6 = 0;
      plVar6[1] = 0;
      plVar6 = (long *)*plVar1;
    }
  }
  puVar11 = puStack_60;
  if ((undefined8 **)puStack_60 != &puStack_60) {
    do {
      puVar9 = (undefined8 *)*puVar11;
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11 = puVar9;
    } while ((undefined8 **)puVar9 != &puStack_60);
  }
  ppppuVar2 = (undefined8 ****)pppuStack_50;
  while (ppppuVar2 != &pppuStack_50) {
    ppppuVar10 = (undefined8 ****)*ppppuVar2;
    *ppppuVar2 = (undefined8 ***)0x0;
    ppppuVar2[1] = (undefined8 ***)0x0;
    ppppuVar2 = ppppuVar10;
  }
  return;
}



/* Entry: 10a3c8a24; end: 10a3c8c63;  */

void FUN_10a3c8a24(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  puStack_28 = &puStack_30;
  puStack_30 = &puStack_30;
  puVar1 = (undefined8 *)(param_1 + 0x40);
  puVar3 = (undefined8 *)*puVar1;
  if ((undefined8 *)*puVar1 != puVar1) {
    do {
      puVar2 = (undefined8 *)*puVar3;
      *(undefined1 *)((long)puVar3 + 0xca) = 0;
      if (*(char *)((long)puVar3 + 0xcb) == '\0') {
        if (puVar2 != (undefined8 *)0x0) {
          puVar4 = (undefined8 *)puVar3[1];
          *puVar4 = puVar2;
          puVar2[1] = puVar4;
          *puVar3 = 0;
          puVar3[1] = 0;
        }
        if ((*(ushort *)(puVar3 + 0x19) >> 10 & 1) != 0) {
          *puVar3 = &puStack_30;
          puVar3[1] = puStack_28;
          *puStack_28 = puVar3;
          puStack_28 = puVar3;
        }
      }
      puVar3 = puVar2;
    } while (puVar2 != puVar1);
    if ((puStack_30 != (undefined8 *)0x0) && ((undefined8 **)puStack_30 != &puStack_30)) {
      do {
        (**(code **)(puStack_30[-10] + 8))();
      } while (puStack_30 != (undefined8 *)0x0 && (undefined8 **)puStack_30 != &puStack_30);
    }
    if ((undefined8 **)puStack_30 != &puStack_30) {
      do {
        puVar3 = (undefined8 *)*puStack_30;
        *puStack_30 = 0;
        puStack_30[1] = 0;
        puStack_30 = puVar3;
      } while ((undefined8 **)puVar3 != &puStack_30);
    }
  }
  return;
}



/* Entry: 10a3c8c64; end: 10a3c8cb3;  */

void FUN_10a3c8c64(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  plVar2 = (long *)*param_1;
  while (plVar1 = plVar2, plVar1 != param_1) {
    plVar2 = (long *)*plVar1;
    if ((((*(ushort *)(plVar1 + 0x1c) >> 0xb & 1) != 0) && (plVar1 != param_2)) &&
       (plVar2 != param_2)) {
      puVar3 = (undefined8 *)param_2[1];
      puVar4 = (undefined8 *)plVar1[1];
      *puVar3 = plVar1;
      *plVar1 = (long)param_2;
      plVar1[1] = (long)puVar3;
      param_2[1] = (long)plVar1;
      plVar2[1] = (long)puVar4;
      *puVar4 = plVar2;
    }
  }
  return;
}



/* Entry: 10a3c8cb4; end: 10a3c8d37;  */

void FUN_10a3c8cb4(long *param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0 && plVar2 != param_1) {
    ppuVar1 = &PTR_PTR_113301fe0;
    FUN_10ae079a0(0,&PTR_PTR_113301fe0);
    FUN_10ae07cd4(ppuVar1,&PTR_PTR_113301fe0);
    plVar2 = (long *)*param_1;
  }
  if (plVar2 != (long *)0x0 && plVar2 != param_1) {
    do {
      lVar3 = *plVar2;
      if (lVar3 != 0) {
        plVar4 = (long *)plVar2[1];
        *plVar4 = lVar3;
        *(long **)(lVar3 + 8) = plVar4;
        *plVar2 = 0;
        plVar2[1] = 0;
        plVar2 = (long *)*param_1;
      }
    } while ((plVar2 != (long *)0x0) && (plVar2 != param_1));
  }
  return;
}



/* Entry: 10a3c8d38; end: 10a3c8d5f;  */

undefined1  [16] FUN_10a3c8d38(long param_1)

{
  undefined1 auVar1 [16];
  short sVar2;
  ulong uVar3;
  
  uVar3 = 0x40;
  if (param_1 != 0) {
    uVar3 = (ulong)*(ushort *)(param_1 + 0xd14);
    sVar2 = 0x40;
    if (uVar3 != 0xfffe) {
      sVar2 = *(ushort *)(param_1 + 0xd14) + 1;
    }
    *(short *)(param_1 + 0xd14) = sVar2;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  return auVar1 << 0x40;
}



/* Entry: 10a3c8d60; end: 10a3c8ddb;  */

undefined8 FUN_10a3c8d60(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_38;
  undefined1 uStack_29;
  undefined1 auStack_28 [24];
  
  lVar2 = 0;
  uStack_38 = 0;
  lVar1 = param_1 + 8;
  do {
    if (*(short *)(param_1 + lVar2) == 0) {
      lVar1 = param_1 + lVar2;
      break;
    }
    lVar2 = lVar2 + 2;
  } while (lVar2 != 8);
  lVar3 = 0;
  lVar2 = param_2 + 8;
  do {
    if (*(short *)(param_2 + lVar3) == 0) {
      lVar2 = param_2 + lVar3;
      break;
    }
    lVar3 = lVar3 + 2;
  } while (lVar3 != 8);
  FUN_10a3ec110(auStack_28,param_1,lVar1,param_2,lVar2,&uStack_38,&uStack_29);
  return uStack_38;
}



/* Entry: 10a3c8ddc; end: 10a3c8ec3;  */

undefined8 FUN_10a3c8ddc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar3 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  puVar1 = param_1 + 1;
  do {
    if (*(short *)((long)param_1 + lVar3) == 0) {
      puVar1 = (undefined8 *)((long)param_1 + lVar3);
      break;
    }
    lVar3 = lVar3 + 2;
  } while (lVar3 != 8);
  lVar4 = 0;
  lVar3 = param_2 + 8;
  do {
    if (*(short *)(param_2 + lVar4) == 0) {
      lVar3 = param_2 + lVar4;
      break;
    }
    lVar4 = lVar4 + 2;
  } while (lVar4 != 8);
  FUN_10a3ec2ec(param_1,puVar1,param_2,lVar3,&uStack_38);
  uStack_28 = 0;
  uVar2 = (long)param_1 - (long)&uStack_38;
  if (uVar2 < 9) {
    if (param_1 == &uStack_38) {
      return 0;
    }
  }
  else {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f653984,&UNK_10f6539aa,0x32,&UNK_10f653a18);
    }
    uVar2 = 8;
  }
  _memcpy(&uStack_28,&uStack_38,uVar2);
  return uStack_28;
}



/* Entry: 10a3c8ec4; end: 10a3c8f9b;  */

undefined8 FUN_10a3c8ec4(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  long lVar5;
  ushort *puVar6;
  undefined8 uStack_18;
  
  lVar5 = 0;
  uStack_18 = 0;
  puVar4 = param_1 + 4;
  do {
    if (*(short *)((long)param_1 + lVar5) == 0) {
      puVar4 = (ushort *)((long)param_1 + lVar5);
      break;
    }
    lVar5 = lVar5 + 2;
  } while (lVar5 != 8);
  lVar5 = 0;
  puVar6 = param_2 + 4;
  do {
    if (*(short *)((long)param_2 + lVar5) == 0) {
      puVar6 = (ushort *)((long)param_2 + lVar5);
      break;
    }
    lVar5 = lVar5 + 2;
  } while (lVar5 != 8);
  puVar3 = (ushort *)&uStack_18;
  do {
    if (puVar4 == param_1) {
      if (param_2 != puVar6) {
        lVar5 = (long)puVar6 - (long)param_2;
        param_1 = param_2;
LAB_10a3c8f88:
        _memmove(puVar3,param_1,lVar5);
      }
      return uStack_18;
    }
    if (param_2 == puVar6) {
      lVar5 = (long)puVar4 - (long)param_1;
      goto LAB_10a3c8f88;
    }
    uVar1 = *param_1;
    uVar2 = *param_2;
    if (uVar1 < uVar2) {
      *puVar3 = uVar1;
      param_1 = param_1 + 1;
      puVar3 = puVar3 + 1;
    }
    else {
      if (uVar2 < uVar1) {
        *puVar3 = uVar2;
        puVar3 = puVar3 + 1;
      }
      else {
        param_1 = param_1 + 1;
      }
      param_2 = param_2 + 1;
    }
  } while( true );
}



/* Entry: 10a3c8f9c; end: 10a3c9057;  */

void FUN_10a3c8f9c(undefined8 *param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  uint uStack_38;
  int iStack_34;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = *param_2;
  iStack_34 = 0;
  if (uVar2 != 0) {
    do {
      if ((uVar2 & 1) != 0) {
        func_0x000109febdc8(param_1,&iStack_34);
      }
      iStack_34 = iStack_34 + 1;
      bVar1 = 1 < uVar2;
      uVar2 = uVar2 >> 1;
    } while (bVar1);
  }
  lVar3 = 0;
  do {
    uStack_38 = (uint)*(ushort *)((long)param_2 + lVar3 + 8);
    if (uStack_38 == 0) {
      return;
    }
    func_0x000109febd04(param_1,&uStack_38);
    lVar3 = lVar3 + 2;
  } while (lVar3 != 8);
  return;
}



/* Entry: 10a3c9058; end: 10a3c9113;  */

void FUN_10a3c9058(ulong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  ulong *puVar5;
  ulong *puVar6;
  long extraout_x8;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined **appuStack_1d0 [2];
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined1 auStack_1b0 [56];
  undefined8 uStack_178;
  char cStack_161;
  undefined **appuStack_150 [19];
  undefined1 uStack_b1;
  
  puVar6 = param_1 + 1;
  *puVar6 = 0;
  *param_1 = 0;
  puVar1 = (uint *)*param_2;
  puVar2 = (uint *)param_2[1];
joined_r0x00010a3c9088:
  if (puVar1 == puVar2) {
    return;
  }
  uVar3 = *puVar1;
  if (uVar3 < 0x40) {
    *param_1 = *param_1 | 1L << ((ulong)uVar3 & 0x3f);
  }
  else {
    if (0xfffe < uVar3) {
      puVar6 = (ulong *)&UNK_10f653a63;
      FUN_10a00946c();
      FUN_109febc44(appuStack_1d0);
      uVar9 = *puVar6;
      if (uVar9 != 0) {
        iVar7 = 0;
        do {
          if ((uVar9 & 1) != 0) {
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(&ppuStack_1c0,iVar7);
            FUN_10a002568();
          }
          iVar7 = iVar7 + 1;
          bVar4 = 1 < uVar9;
          uVar9 = uVar9 >> 1;
        } while (bVar4);
      }
      lVar8 = 0;
      do {
        if ((((ulong)param_2 & 1) == 0) && (*(short *)((long)puVar6 + lVar8 + 8) == 0)) break;
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEt(&ppuStack_1c0);
        FUN_10a002568();
        lVar8 = lVar8 + 2;
      } while (lVar8 != 8);
      func_0x00010a002480(extraout_x8,&ppuStack_1b8,&uStack_b1);
      lVar8 = (long)*(char *)(extraout_x8 + 0x17);
      if (lVar8 < 0) {
        lVar8 = *(long *)(extraout_x8 + 8);
        if (lVar8 == 0) goto LAB_10a3c9200;
      }
      else if (*(char *)(extraout_x8 + 0x17) == '\0') goto LAB_10a3c9200;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                (extraout_x8,lVar8 + -2,0);
LAB_10a3c9200:
      appuStack_1d0[0] = &PTR_SUB_1108a5a38;
      ppuStack_1c0 = &PTR_DAT_1108a5a60;
      appuStack_150[0] = &PTR_DAT_1108a5a88;
      ppuStack_1b8 = &PTR_DAT_11088d7b0;
      if (cStack_161 < '\0') {
        __ZdlPv(uStack_178);
      }
      ppuStack_1b8 = (undefined **)
                     (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
      __ZNSt3__16localeD1Ev(auStack_1b0);
      __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_1d0,&PTR_PTR_1108a5aa0);
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_150);
      return;
    }
    param_2 = (undefined8 *)0x0;
    puVar5 = puVar6;
    FUN_10a3c8ddc();
    *puVar6 = (ulong)puVar5;
  }
  puVar1 = puVar1 + 1;
  goto joined_r0x00010a3c9088;
}



/* Entry: 10a3c9114; end: 10a3c92c7;  */

void FUN_10a3c9114(long param_1,ulong *param_2,ulong param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined **appuStack_170 [2];
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined1 auStack_150 [56];
  undefined8 uStack_118;
  char cStack_101;
  undefined **appuStack_f0 [19];
  undefined1 uStack_51;
  
  FUN_109febc44(appuStack_170);
  uVar4 = *param_2;
  if (uVar4 != 0) {
    iVar2 = 0;
    do {
      if ((uVar4 & 1) != 0) {
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(&ppuStack_160,iVar2);
        FUN_10a002568();
      }
      iVar2 = iVar2 + 1;
      bVar1 = 1 < uVar4;
      uVar4 = uVar4 >> 1;
    } while (bVar1);
  }
  lVar3 = 0;
  do {
    if (((param_3 & 1) == 0) && (*(short *)((long)param_2 + lVar3 + 8) == 0)) break;
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEt(&ppuStack_160);
    FUN_10a002568();
    lVar3 = lVar3 + 2;
  } while (lVar3 != 8);
  func_0x00010a002480(param_1,&ppuStack_158,&uStack_51);
  lVar3 = (long)*(char *)(param_1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 == 0) goto LAB_10a3c9200;
  }
  else if (*(char *)(param_1 + 0x17) == '\0') goto LAB_10a3c9200;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(param_1,lVar3 + -2,0);
LAB_10a3c9200:
  appuStack_170[0] = &PTR_SUB_1108a5a38;
  ppuStack_160 = &PTR_DAT_1108a5a60;
  appuStack_f0[0] = &PTR_DAT_1108a5a88;
  ppuStack_158 = &PTR_DAT_11088d7b0;
  if (cStack_101 < '\0') {
    __ZdlPv(uStack_118);
  }
  ppuStack_158 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_150);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_170,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_f0);
  return;
}



/* Entry: 10a3c92c8; end: 10a3c9383;  */

void FUN_10a3c92c8(ulong *param_1,long *param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  code *pcVar3;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bd0108);
  if ((int)plVar1 == 0) {
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bd1508);
    if ((int)plVar1 == 0) {
      plVar1 = param_2;
      (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bd0128);
      if ((int)plVar1 == 0) {
        return;
      }
      pcVar3 = *(code **)(*param_2 + 200);
      ppuVar2 = &PTR_DAT_110bd0128;
    }
    else {
      pcVar3 = *(code **)(*param_2 + 200);
      ppuVar2 = &PTR_DAT_110bd1508;
    }
    (*pcVar3)(param_2,ppuVar2);
    param_2 = (long *)((ulong)param_2 & 0xffffffff);
  }
  else {
    (**(code **)(*param_2 + 0x20))(param_2,&PTR_DAT_110bd0108);
  }
  *param_1 = (ulong)param_2;
  return;
}



/* Entry: 10a3c9384; end: 10a3c9efb;  */

long * FUN_10a3c9384(long *param_1,long *param_2,long *param_3,long *param_4,undefined *param_5,
                    long *param_6,long *param_7,long param_8)

{
  undefined **ppuVar1;
  undefined1 uVar2;
  long *plVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  undefined *puVar18;
  undefined1 uVar19;
  int iVar20;
  long *plVar21;
  ulong uVar22;
  undefined **ppuVar23;
  long lVar24;
  undefined *puStack_130;
  undefined **ppuStack_128;
  byte bStack_11c;
  char cStack_11b;
  char cStack_119;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = (long)&PTR_FUN_110bd0158;
  *(char *)(param_1 + 1) = (char)param_3[6];
  *(int *)((long)param_1 + 0xc) = (int)param_3[0xf];
  lVar17 = *param_4;
  param_1[3] = param_4[1];
  param_1[2] = lVar17;
  *param_4 = 0;
  param_4[1] = 0;
  param_1[4] = 0;
  plVar16 = param_1 + 5;
  *(undefined1 *)plVar16 = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  plVar10 = param_1;
  FUN_10a102184();
  puStack_b8 = (undefined *)*plVar10;
  uStack_c0 = 0;
  uStack_c8 = 0;
  lStack_d0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_e8 = 0;
  puStack_f8 = &UNK_1053a6a3c;
  ppuStack_f0 = &PTR_DAT_110ae9180;
  puStack_b0 = &UNK_1053a6a3c;
  ppuStack_a8 = &PTR_DAT_110ae9180;
  func_0x000109d18d1c(param_1 + 0x1d,&UNK_10f653a8a,0x16,&puStack_b8);
  func_0x0001092ba41c(&puStack_b8);
  (*(code *)*ppuStack_f0)(&ppuStack_f0);
  FUN_10ad004d8(param_1 + 0x34);
  param_1[0x39] = (long)param_2;
  param_1[0x3a] = (long)param_7;
  puVar11 = (undefined8 *)0x1f0;
  __Znwm();
  plVar10 = param_2;
  (**(code **)(*param_2 + 0x20))();
  lVar17 = *plVar10;
  lVar24 = plVar10[1];
  if (lVar24 == 0) {
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[3] = lVar17;
    puVar11[4] = 0;
  }
  else {
    plVar10 = (long *)(lVar24 + 0x10);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar8) {
        *plVar10 = *plVar10 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[3] = lVar17;
    puVar11[4] = lVar24;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar8) {
        *plVar10 = *plVar10 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  lVar17 = 0;
  *(undefined2 *)(puVar11 + 5) = 0x100;
  puVar11[7] = 0;
  puVar11[6] = 0;
  puVar11[9] = 0;
  puVar11[8] = 0;
  puVar11[0xb] = 0;
  puVar11[10] = 0;
  puVar11[0xd] = 0;
  puVar11[0xc] = 0;
  puVar11[0xe] = 0;
  do {
    *(undefined8 *)((long)puVar11 + lVar17 + 0x90) = 0;
    *(undefined8 *)((long)puVar11 + lVar17 + 0x88) = 0;
    *(undefined8 *)((long)puVar11 + lVar17 + 0x80) = 0;
    *(undefined8 *)((long)puVar11 + lVar17 + 0x78) = 0;
    *(undefined4 *)((long)puVar11 + lVar17 + 0x98) = 0x3f800000;
    lVar17 = lVar17 + 0x28;
  } while (lVar17 != 0xa0);
  lVar17 = 0;
  do {
    *(undefined8 *)((long)puVar11 + lVar17 + 0x120) = 0;
    *(undefined8 *)((long)puVar11 + lVar17 + 0x118) = 0;
    *(undefined8 *)((long)puVar11 + lVar17 + 0x130) = 0;
    *(undefined8 *)((long)puVar11 + lVar17 + 0x128) = 0;
    *(undefined4 *)((long)puVar11 + lVar17 + 0x138) = 0x3f800000;
    lVar17 = lVar17 + 0x28;
  } while (lVar17 != 0xa0);
  puVar11[0x38] = 0;
  puVar11[0x37] = 0;
  puVar11[0x3a] = 0;
  puVar11[0x39] = 0;
  *(undefined4 *)(puVar11 + 0x3b) = 0x3f800000;
  puVar11[0x3c] = 0;
  puVar11[0x3d] = 0;
  param_1[0x3b] = (long)puVar11;
  if (lVar24 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar11 = (undefined8 *)0xa0;
  __Znwm();
  puVar11[1] = 0;
  puVar11[2] = 0;
  puVar12 = puVar11 + 3;
  *puVar11 = &PTR_FUN_110bd1820;
  FUN_10acfce0c(puVar12,param_2,param_3);
  param_1[0x3c] = (long)puVar12;
  param_1[0x3d] = (long)puVar11;
  puVar11 = (undefined8 *)0x70;
  __Znwm();
  puVar11[1] = 0;
  puVar11[2] = 0;
  puVar11[9] = 0;
  *puVar11 = &PTR_FUN_110bd1870;
  puVar11[7] = 0;
  puVar11[8] = puVar11 + 9;
  puVar11[4] = 0;
  puVar11[3] = 0;
  puVar11[6] = 0;
  puVar11[5] = 0;
  *(undefined4 *)(puVar11 + 7) = 0x3f800000;
  puVar11[0xd] = 0;
  puVar11[0xc] = 0;
  puVar11[10] = 0;
  puVar11[0xb] = puVar11 + 0xc;
  param_1[0x3e] = (long)(puVar11 + 3);
  param_1[0x3f] = (long)puVar11;
  puVar11 = (undefined8 *)0x28;
  __Znwm();
  puVar11[1] = 0;
  *puVar11 = 0;
  puVar11[3] = 0;
  puVar11[2] = 0;
  *(undefined4 *)(puVar11 + 4) = 0x3f800000;
  param_1[0x40] = (long)puVar11;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0x41,*param_3,param_3[1]);
  }
  else {
    lVar24 = param_3[1];
    lVar17 = *param_3;
    param_1[0x43] = param_3[2];
    param_1[0x42] = lVar24;
    param_1[0x41] = lVar17;
  }
  uVar22 = param_3[4];
  if (-1 < (char)*(byte *)((long)param_3 + 0x2f)) {
    uVar22 = (ulong)*(byte *)((long)param_3 + 0x2f);
  }
  FUN_10a003c90(param_1 + 0x44,uVar22 + 1,&puStack_b8);
  plVar10 = param_3 + 3;
  plVar21 = (long *)param_1[0x44];
  if (-1 < *(char *)((long)param_1 + 0x237)) {
    plVar21 = param_1 + 0x44;
  }
  if (uVar22 != 0) {
    plVar3 = (long *)param_3[3];
    if (-1 < *(char *)((long)param_3 + 0x2f)) {
      plVar3 = plVar10;
    }
    _memmove(plVar21,plVar3,uVar22);
  }
  *(undefined2 *)((long)plVar21 + uVar22) = 0x2f;
  if (*(char *)((long)param_3 + 0x2f) < '\0') {
    func_0x000107c3192c(&lStack_110,param_3[3],param_3[4]);
  }
  else {
    lStack_108 = param_3[4];
    lStack_110 = *plVar10;
    lStack_100 = param_3[5];
  }
  FUN_10ad0279c(param_1 + 0x47,&lStack_110);
  if (lStack_100 < 0) {
    __ZdlPv(lStack_110);
  }
  param_1[0x49] = param_3[0xd];
  lVar17 = param_6[1];
  lVar24 = *param_6;
  param_1[0x4b] = param_6[1];
  param_1[0x4a] = lVar24;
  if (lVar17 != 0) {
    plVar21 = (long *)(lVar17 + 8);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar8) {
        *plVar21 = *plVar21 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  param_1[0x4c] = 0;
  plVar21 = param_3;
  FUN_10a3c9efc();
  param_1[0x4d] = *plVar21;
  lVar17 = plVar21[1];
  param_1[0x4e] = lVar17;
  if (lVar17 != 0) {
    plVar21 = (long *)(lVar17 + 8);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar8) {
        *plVar21 = *plVar21 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  param_1[0x4f] = param_3[9];
  lVar17 = param_3[10];
  param_1[0x50] = lVar17;
  if (lVar17 != 0) {
    plVar21 = (long *)(lVar17 + 8);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar8) {
        *plVar21 = *plVar21 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  param_1[0x51] = *(long *)((long)param_3 + 0x34);
  *(undefined1 *)(param_1 + 0x52) = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  plVar21 = param_3;
  FUN_10a3c9efc();
  uVar4 = *(uint *)(*plVar21 + 0x98);
  if (8 < uVar4) {
    uVar4 = 0;
  }
  *(uint *)(param_1 + 0x55) = uVar4;
  if ((char)param_3[8] == '\x01') {
    ppuVar23 = (undefined **)(ulong)*(uint *)((long)param_3 + 0x3c);
  }
  else {
    func_0x000107c2b070(&puStack_b8);
    ppuVar23 = &puStack_b8;
    __ZNSt3__113random_deviceclEv();
    __ZNSt3__113random_deviceD1Ev(&puStack_b8);
  }
  puVar11 = (undefined8 *)0x9e0;
  __Znwm();
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = &PTR_FUN_110bd18c0;
  *(int *)(puVar11 + 3) = (int)ppuVar23;
  iVar20 = 1;
  lVar17 = 7;
  do {
    iVar6 = ((uint)ppuVar23 ^ (uint)ppuVar23 >> 0x1e) * 0x6c078965;
    ppuVar23 = (undefined **)(ulong)(uint)(iVar6 + iVar20);
    *(int *)((long)puVar11 + lVar17 * 4) = (int)lVar17 + iVar6 + -6;
    iVar20 = iVar20 + 1;
    lVar17 = lVar17 + 1;
  } while (lVar17 != 0x276);
  puVar11[0x13b] = 0;
  param_1[0x53] = (long)(puVar11 + 3);
  plVar21 = (long *)param_1[0x54];
  param_1[0x54] = (long)puVar11;
  if (plVar21 != (long *)0x0) {
    plVar3 = plVar21 + 1;
    do {
      lVar17 = *plVar3;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar8) {
        *plVar3 = lVar17 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
    }
  }
  FUN_10a0ff18c(&puStack_f8,plVar10,2);
  FUN_10a596208(&bStack_11c,&puStack_f8);
  if (param_5 != (undefined *)0x0) {
    if ((char)param_1[0x1c] == '\x01') {
      func_0x000109d18f34(plVar16);
      *(undefined1 *)(param_1 + 0x1c) = 0;
    }
    puStack_b0 = &UNK_1053a6a3c;
    ppuStack_a8 = &PTR_DAT_110ae9180;
    puStack_b8 = param_5;
    func_0x000109d18d1c(plVar16,&UNK_10f653aa1,0x11,&puStack_b8);
    func_0x0001092ba41c(&puStack_b8);
    *(undefined1 *)(param_1 + 0x1c) = 1;
    (**(code **)(*param_7 + 0x18))(param_7,param_1 + 8,param_3);
  }
  param_1[4] = param_8;
  (**(code **)(*param_7 + 0x18))(param_7,param_1[2] + 0x18,param_3);
  (**(code **)(*param_7 + 0x18))(param_7,param_1 + 0x34,param_3);
  (**(code **)(*param_7 + 0x18))(param_7,param_1 + 0x20,param_3);
  ppuVar23 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  puVar18 = *ppuVar23;
  puStack_b8 = &UNK_10f63b699;
  puStack_b0 = (undefined *)0x28;
  if (puVar18 == (undefined *)0x0) {
    FUN_10a0edfc4(&puStack_b8);
    goto LAB_10a3c9d60;
  }
  ppuStack_128 = *(undefined ***)(puVar18 + 0x18);
  puStack_130 = *(undefined **)(puVar18 + 0x10);
  if (*(long *)(puVar18 + 0x18) != 0) {
    plVar10 = (long *)(*(long *)(puVar18 + 0x18) + 8);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar8) {
        *plVar10 = *plVar10 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  ppuVar23 = &puStack_130;
  FUN_10a08f87c();
  ppuVar13 = ppuStack_128;
  ppuVar14 = ppuVar23;
  if (ppuStack_128 != (undefined **)0x0) {
    ppuVar1 = ppuStack_128 + 1;
    do {
      puVar18 = *ppuVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar8) {
        *ppuVar1 = puVar18 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (puVar18 == (undefined *)0x0) {
      (**(code **)(*ppuStack_128 + 0x10))(ppuStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar14 = ppuVar13;
    }
  }
  uVar19 = 3;
  if (cStack_119 == '\0' && cStack_11b == '\0') {
    uVar19 = 4;
  }
  uVar2 = 5;
  if (bStack_11c == 0) {
    uVar2 = uVar19;
  }
  *(undefined1 *)(param_1 + 0x52) = uVar2;
  if (((uint)param_1[0x49] >> 4 & 1) == 0) {
    if (((uint)param_1[0x49] >> 5 & 1) == 0) {
      bVar5 = 0;
      if (cStack_119 != '\0' || cStack_11b != '\0') {
        bVar5 = bStack_11c ^ 1;
      }
      if ((((uint)ppuVar23 >> 5 & 1) != 0) && ((bVar5 & 1) == 0)) goto LAB_10a3c9a40;
    }
    else {
      *(undefined1 *)(param_1 + 0x52) = 3;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x52) = 4;
    if (((uint)ppuVar23 >> 5 & 1) != 0) {
LAB_10a3c9a40:
      *(undefined1 *)(param_1 + 0x52) = 3;
      if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
        ppuVar14 = (undefined **)0x1;
        func_0x00010ae06f08(1,2,&UNK_10f653ab3,&UNK_10f653adb,0xa1,&UNK_10f653c01);
      }
    }
  }
  FUN_10a08fd8c();
  if ((char)param_1[0x52] == '\x02') {
    ppuVar14 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    if (*(long *)(*(long *)*ppuVar14 + 0x10) == 0) {
      *(undefined1 *)(param_1 + 0x52) = uVar19;
    }
  }
  FUN_10a3ca004();
  bVar5 = *(byte *)(param_1 + 0x52);
  if (bVar5 < 3) {
    if (bVar5 == 0) {
      if ((bRam000000011330a9e8 >> 2 & 1) == 0) {
        uVar19 = 0;
      }
      else {
        puVar18 = &UNK_10f655bfb;
        uVar15 = 0x23;
LAB_10a3c9bb4:
        func_0x00010ae06f08(1,4,&UNK_10f653ab3,&UNK_10f655ba8,uVar15,puVar18);
        uVar19 = (undefined1)param_1[0x52];
      }
    }
    else if (bVar5 == 1) {
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        puVar18 = &UNK_10f655c2a;
        uVar15 = 0x26;
        goto LAB_10a3c9bb4;
      }
      uVar19 = 1;
    }
    else {
      if (bVar5 != 2) {
LAB_10a3c9d54:
        FUN_10a00946c(&UNK_10f655d16);
        goto LAB_10a3c9d60;
      }
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        puVar18 = &UNK_10f655c8d;
        uVar15 = 0x2c;
        goto LAB_10a3c9bb4;
      }
      uVar19 = 2;
    }
  }
  else if (bVar5 == 3) {
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      puVar18 = &UNK_10f655c58;
      uVar15 = 0x29;
      goto LAB_10a3c9bb4;
    }
    uVar19 = 3;
  }
  else if (bVar5 == 4) {
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      puVar18 = &UNK_10f655cc3;
      uVar15 = 0x2f;
      goto LAB_10a3c9bb4;
    }
    uVar19 = 4;
  }
  else {
    if (bVar5 != 5) goto LAB_10a3c9d54;
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      puVar18 = &UNK_10f655cf9;
      uVar15 = 0x32;
      goto LAB_10a3c9bb4;
    }
    uVar19 = 5;
  }
  FUN_10a3ca05c(ppuVar14,uVar19);
  uVar22 = (ulong)*(byte *)(param_1 + 0x52);
  if (5 < uVar22) goto LAB_10a3c9d60;
  if (ppuVar14[uVar22 + 7] == (undefined *)0x0) {
    FUN_10a3ca05c(ppuVar14,uVar22);
    puVar18 = ppuVar14[uVar22 + 7];
    param_1[0x4c] = (long)puVar18;
    puStack_b8 = &UNK_10f653c20;
    puStack_b0 = (undefined *)0x21;
    if (puVar18 != (undefined *)0x0) goto LAB_10a3c9c24;
  }
  else {
    param_1[0x4c] = (long)ppuVar14[uVar22 + 7];
LAB_10a3c9c24:
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f653ab3,&UNK_10f653adb,0xd6,&UNK_10f653c42);
    }
    if (((ulong)ppuVar23 & 0xa0) != 0) {
      FUN_10a3ca05c(ppuVar14,4);
    }
    if ((char)param_1[0x52] == '\x02') {
      puVar18 = ppuVar14[0xb];
      if (puVar18 == (undefined *)0x0) {
        FUN_10a3ca05c(ppuVar14,4);
        puVar18 = ppuVar14[0xb];
      }
      FUN_10a244d68(puVar18);
      puVar18 = ppuVar14[10];
      if (puVar18 == (undefined *)0x0) {
        FUN_10a3ca05c(ppuVar14,3);
        puVar18 = ppuVar14[10];
      }
      FUN_10a244d68(puVar18);
    }
    FUN_10a5962ec(&bStack_11c);
    if (lStack_d0 < 0) {
      __ZdlPv(uStack_e0);
    }
    if (lStack_e8 < 0) {
      __ZdlPv(puStack_f8);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return param_1;
    }
    ___stack_chk_fail();
  }
  FUN_10a0edfc4(&puStack_b8);
LAB_10a3c9d60:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a3c9d64);
  (*pcVar9)();
}



/* Entry: 10a3c9efc; end: 10a3ca003;  */

long * FUN_10a3c9efc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plStack_40;
  long *plStack_38;
  
  plVar6 = (long *)(param_1 + 0x98);
  if (*plVar6 == 0) {
    plVar4 = (long *)0xc0;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_110bd3040;
    plVar4[4] = 0;
    plVar4[5] = 0;
    plVar4[6] = 0;
    plVar4[7] = 0;
    *(undefined4 *)(plVar4 + 8) = 0;
    plVar4[9] = 0;
    plVar4[10] = 0;
    *(undefined4 *)(plVar4 + 0xb) = 0;
    plVar4[0xc] = (long)&DAT_11383d918;
    plVar4[0xd] = (long)&DAT_11383d918;
    plVar4[0xe] = (long)&DAT_11383d918;
    plVar4[0x10] = 0;
    plVar4[0xf] = 0;
    plVar4[0x12] = 0;
    plVar4[0x11] = 0;
    plVar4[0x14] = 0;
    plVar4[0x13] = 0;
    plVar4[0x16] = 0;
    plVar4[0x15] = 0;
    *(undefined4 *)(plVar4 + 0x17) = 0;
    plStack_40 = plVar4 + 3;
    *plStack_40 = (long)&PTR_DAT_110b1a000;
    plStack_38 = plVar4;
    FUN_10a3ec398(plVar6,&plStack_40);
    plVar4 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
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
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    plStack_40 = *(long **)(param_1 + 0x80);
    plStack_38 = (long *)(long)(*(int *)(param_1 + 0x88) - (int)plStack_40);
    func_0x000107c30348(*(undefined8 *)(param_1 + 0x98),&plStack_40);
  }
  return plVar6;
}



/* Entry: 10a3ca004; end: 10a3ca05b;  */

undefined8 ******* FUN_10a3ca004(undefined8 param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  byte *pbVar7;
  undefined8 ******ppppppuVar8;
  undefined8 uVar9;
  undefined8 *******pppppppuVar10;
  uint uVar11;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar12;
  long *plVar13;
  undefined8 ******ppppppuVar14;
  long *plVar15;
  long lVar16;
  undefined8 ******ppppppuStack_88;
  long *plStack_80;
  undefined8 ******ppppppuStack_78;
  long *plStack_70;
  undefined4 uStack_68;
  char cStack_61;
  
  ppuVar6 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  if (*ppuVar6 != (undefined *)0x0) {
    plVar13 = (long *)(*(long *)(*ppuVar6 + 0x10) + 0xc0);
    pppppppuVar4 = (undefined8 *******)*plVar13;
    if (pppppppuVar4 == (undefined8 *******)0x0) {
      puVar5 = (undefined8 *)0x70;
      __Znwm();
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[7] = 0;
      puVar5[6] = 0;
      puVar5[9] = 0;
      puVar5[8] = 0;
      puVar5[0xb] = 0;
      puVar5[10] = 0;
      puVar5[0xd] = 0;
      puVar5[0xc] = 0;
      FUN_10a0a01c8(plVar13,puVar5);
      pppppppuVar4 = (undefined8 *******)*plVar13;
    }
    return pppppppuVar4;
  }
  ppuVar6 = &PTR___tlv_bootstrap_11340df30;
  (*(code *)PTR___tlv_bootstrap_11340df30)();
  if ((undefined8 *******)*ppuVar6 != (undefined8 *******)0x0) {
    return (undefined8 *******)*ppuVar6;
  }
  pppppppuVar4 = (undefined8 *******)&UNK_10f653c98;
  FUN_10a0ee06c();
  uVar11 = (uint)param_2;
  if (5 < uVar11) goto LAB_10a3ca47c;
  pppppppuVar10 = pppppppuVar4 + (param_2 & 0xffffffff) + 7;
  if (*pppppppuVar10 != (undefined8 ******)0x0) {
    return pppppppuVar4;
  }
  pbVar7 = (byte *)0x113836510;
  FUN_10ad0621c();
  if ((*pbVar7 >> 6 & 1) != 0) {
    ppppppuStack_78 = (undefined8 ******)&UNK_10f653cdc;
    plStack_70 = (long *)0x47;
    if (uVar11 == 0) {
      pppppppuVar4 = &ppppppuStack_78;
      FUN_10a0edfc4();
      __ZdlPv();
      func_0x00010a09e8c8(&ppppppuStack_78);
      __Unwind_Resume();
      if (*(char *)(pppppppuVar4 + 0x1c) == '\x01') {
        (*(code *)(*pppppppuVar4[0x3a])[5])(pppppppuVar4[0x3a],pppppppuVar4 + 8);
      }
      (*(code *)(*pppppppuVar4[0x3a])[5])(pppppppuVar4[0x3a],pppppppuVar4[2] + 3);
      (*(code *)(*pppppppuVar4[0x3a])[5])(pppppppuVar4[0x3a],pppppppuVar4 + 0x34);
      (*(code *)(*pppppppuVar4[0x3a])[5])(pppppppuVar4[0x3a],pppppppuVar4 + 0x20);
      FUN_10a009414(pppppppuVar4 + 0x53);
      func_0x00010a2349b4(pppppppuVar4 + 0x4f);
      FUN_10a3f23d0(pppppppuVar4 + 0x4d);
      func_0x00010a3f5df8(pppppppuVar4 + 0x4a);
      FUN_10a15206c(pppppppuVar4 + 0x47);
      if (*(char *)((long)pppppppuVar4 + 0x237) < '\0') {
        __ZdlPv(pppppppuVar4[0x44]);
      }
      if (*(char *)((long)pppppppuVar4 + 0x21f) < '\0') {
        __ZdlPv(pppppppuVar4[0x41]);
      }
      FUN_10a3f5ba8(pppppppuVar4 + 0x40);
      func_0x00010a3f5b50(pppppppuVar4 + 0x3e);
      FUN_10a3f599c(pppppppuVar4 + 0x3c);
      FUN_10a3f5c74(pppppppuVar4 + 0x3b);
      func_0x00010ad0070c(pppppppuVar4 + 0x34);
      func_0x000109d18f34(pppppppuVar4 + 0x1d);
      if (*(char *)(pppppppuVar4 + 0x1c) == '\x01') {
        func_0x000109d18f34(pppppppuVar4 + 5);
      }
      func_0x00010a061620(pppppppuVar4 + 2);
      return pppppppuVar4;
    }
  }
  ppppppuVar14 = pppppppuVar4[(param_2 & 0xffffffff) + 1];
  if (ppppppuVar14 == (undefined8 ******)0x0) {
    if ((int)uVar11 < 3) {
      if (uVar11 == 0) {
        ppppppuVar14 = (undefined8 ******)0x10;
        __Znwm();
        FUN_10ab8fe20();
      }
      else {
        if (uVar11 != 1) {
          ppuVar6 = &PTR___tlv_bootstrap_11340de10;
          (*(code *)PTR___tlv_bootstrap_11340de10)();
          puVar5 = (undefined8 *)*ppuVar6;
          ppppppuStack_78 = (undefined8 ******)*puVar5;
          plVar13 = (long *)puVar5[1];
          if (plVar13 != (long *)0x0) {
            plVar15 = plVar13 + 1;
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar2) {
                *plVar15 = *plVar15 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          lVar16 = puVar5[2];
          lVar12 = *(long *)(lVar16 + 0x10);
          plStack_70 = plVar13;
          if ((*(byte *)(lVar12 + 0x440) & 1) == 0) goto LAB_10a3ca47c;
          func_0x00010a1557e8(lVar12 + 0x3f8);
          lVar12 = *(long *)(lVar16 + 0x10);
          if ((*(byte *)(lVar12 + 0x440) & 1) == 0) goto LAB_10a3ca47c;
          func_0x00010a1556b8(lVar12 + 0x200);
          ppppppuVar14 = (undefined8 ******)0x80;
          __Znwm();
          FUN_10a15adcc();
          ppppppuVar8 = pppppppuVar4[(param_2 & 0xffffffff) + 1];
          pppppppuVar4[(param_2 & 0xffffffff) + 1] = ppppppuVar14;
          if (ppppppuVar8 != (undefined8 ******)0x0) {
            (*(code *)(*ppppppuVar8)[1])();
          }
          if (plVar13 != (long *)0x0) {
            plVar15 = plVar13 + 1;
            do {
              lVar12 = *plVar15;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar2) {
                *plVar15 = lVar12 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            goto LAB_10a3ca304;
          }
          goto LAB_10a3ca3bc;
        }
        ppppppuVar14 = (undefined8 ******)0x10;
        __Znwm();
        FUN_10ad70fb8();
      }
LAB_10a3ca3a4:
      ppppppuVar8 = pppppppuVar4[(param_2 & 0xffffffff) + 1];
      pppppppuVar4[(param_2 & 0xffffffff) + 1] = ppppppuVar14;
      if (ppppppuVar8 == (undefined8 ******)0x0) goto LAB_10a3ca3c0;
      (*(code *)(*ppppppuVar8)[1])();
    }
    else if (uVar11 == 3) {
      ppuVar6 = &PTR___tlv_bootstrap_11340de10;
      (*(code *)PTR___tlv_bootstrap_11340de10)();
      puVar5 = (undefined8 *)*ppuVar6;
      ppppppuStack_78 = (undefined8 ******)*puVar5;
      plVar13 = (long *)puVar5[1];
      if (plVar13 != (long *)0x0) {
        plVar15 = plVar13 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar2) {
            *plVar15 = *plVar15 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar15 = (long *)puVar5[2];
      lVar12 = *plVar15;
      plStack_70 = plVar13;
      if ((*(byte *)(lVar12 + 0x440) & 1) == 0) goto LAB_10a3ca47c;
      ppppppuVar14 = (undefined8 ******)*ppppppuStack_78;
      func_0x00010a1557e8(lVar12 + 0x3f8);
      lVar12 = *plVar15;
      if ((*(byte *)(lVar12 + 0x440) & 1) == 0) goto LAB_10a3ca47c;
      func_0x00010a1556b8(lVar12 + 0x200);
      if (*(int *)((long)*ppppppuVar14 + 0x734) == 2) {
        ppppppuVar14 = (undefined8 ******)0x80;
        __Znwm();
        FUN_10a15adcc();
        ppppppuVar8 = pppppppuVar4[(param_2 & 0xffffffff) + 1];
        pppppppuVar4[(param_2 & 0xffffffff) + 1] = ppppppuVar14;
        if (ppppppuVar8 != (undefined8 ******)0x0) {
          (*(code *)(*ppppppuVar8)[1])();
        }
      }
      if (plVar13 != (long *)0x0) {
        plVar15 = plVar13 + 1;
        do {
          lVar12 = *plVar15;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar2) {
            *plVar15 = lVar12 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        goto LAB_10a3ca304;
      }
    }
    else if (uVar11 == 5) {
      ppppppuStack_78 = (undefined8 ******)((ulong)ppppppuStack_78 & 0xffffffff00000000);
      plStack_70 = (long *)0x0;
      uStack_68 = 0;
      func_0x0001092343ac(&ppppppuStack_88,&ppppppuStack_78);
      ppppppuVar14 = (undefined8 ******)0x20;
      __Znwm();
      FUN_10aba0c5c();
      ppppppuVar8 = pppppppuVar4[(param_2 & 0xffffffff) + 1];
      pppppppuVar4[(param_2 & 0xffffffff) + 1] = ppppppuVar14;
      if (ppppppuVar8 != (undefined8 ******)0x0) {
        (*(code *)(*ppppppuVar8)[1])();
      }
      if (plStack_80 != (long *)0x0) {
        plVar15 = plStack_80 + 1;
        do {
          lVar12 = *plVar15;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar2) {
            *plVar15 = lVar12 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
          plVar13 = plStack_80;
        } while (cVar1 != '\0');
LAB_10a3ca304:
        if (lVar12 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
    }
    else {
      ppuVar6 = &PTR___tlv_bootstrap_11340de10;
      (*(code *)PTR___tlv_bootstrap_11340de10)();
      lVar16 = *(long *)((long)*ppuVar6 + 0x10);
      lVar12 = *(long *)(lVar16 + 8);
      if ((*(byte *)(lVar12 + 0x440) & 1) == 0) goto LAB_10a3ca47c;
      plVar13 = *(long **)(*(long *)*ppuVar6 + 8);
      func_0x00010a1557e8(lVar12 + 0x3f8);
      lVar12 = *(long *)(lVar16 + 8);
      if ((*(byte *)(lVar12 + 0x440) & 1) == 0) goto LAB_10a3ca47c;
      func_0x00010a1556b8(lVar12 + 0x200);
      if (*(int *)(*plVar13 + 0x734) != 2) {
        ppppppuVar14 = (undefined8 ******)0x80;
        __Znwm();
        FUN_10a15adcc();
        goto LAB_10a3ca3a4;
      }
    }
LAB_10a3ca3bc:
    ppppppuVar14 = pppppppuVar4[(param_2 & 0xffffffff) + 1];
  }
LAB_10a3ca3c0:
  FUN_10a0ee900(&ppppppuStack_78,&UNK_10f653d24,0x16);
  plStack_80 = (long *)(long)cStack_61;
  if ((long)plStack_80 < 0) {
    ppppppuStack_88 = ppppppuStack_78;
    plStack_80 = plStack_70;
    if (ppppppuVar14 != (undefined8 ******)0x0) {
      __ZdlPv();
      goto LAB_10a3ca400;
    }
  }
  else {
    ppppppuStack_88 = &ppppppuStack_78;
    if (ppppppuVar14 != (undefined8 ******)0x0) {
LAB_10a3ca400:
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f653d3b,&UNK_10f653d68,0x73,&UNK_10f653dbf,in_x6,in_x7,
                            param_2);
      }
      uVar9 = 0x330;
      __Znwm(0x330);
      FUN_10a24227c();
      FUN_10a3f5fb0(pppppppuVar10,uVar9);
      return pppppppuVar10;
    }
  }
  FUN_10a0edfc4(&ppppppuStack_88);
LAB_10a3ca47c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a3ca480);
  (*pcVar3)();
}



/* Entry: 10a3ca05c; end: 10a3ca523;  */

undefined8 ******* FUN_10a3ca05c(undefined8 *******param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  byte *pbVar4;
  undefined **ppuVar5;
  undefined8 ******ppppppuVar6;
  undefined8 uVar7;
  undefined8 *******pppppppuVar8;
  uint uVar9;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 *puVar10;
  long lVar11;
  undefined8 ******ppppppuVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 ******ppppppuStack_78;
  long *plStack_70;
  undefined8 ******ppppppuStack_68;
  long *plStack_60;
  undefined4 uStack_58;
  char cStack_51;
  
  uVar9 = (uint)param_2;
  if (5 < uVar9) goto LAB_10a3ca47c;
  pppppppuVar8 = param_1 + (param_2 & 0xffffffff) + 7;
  if (*pppppppuVar8 != (undefined8 ******)0x0) {
    return param_1;
  }
  pbVar4 = (byte *)0x113836510;
  FUN_10ad0621c();
  if ((*pbVar4 >> 6 & 1) != 0) {
    ppppppuStack_68 = (undefined8 ******)&UNK_10f653cdc;
    plStack_60 = (long *)0x47;
    if (uVar9 == 0) {
      pppppppuVar8 = &ppppppuStack_68;
      FUN_10a0edfc4();
      __ZdlPv();
      func_0x00010a09e8c8(&ppppppuStack_68);
      __Unwind_Resume();
      if (*(char *)(pppppppuVar8 + 0x1c) == '\x01') {
        (*(code *)(*pppppppuVar8[0x3a])[5])(pppppppuVar8[0x3a],pppppppuVar8 + 8);
      }
      (*(code *)(*pppppppuVar8[0x3a])[5])(pppppppuVar8[0x3a],pppppppuVar8[2] + 3);
      (*(code *)(*pppppppuVar8[0x3a])[5])(pppppppuVar8[0x3a],pppppppuVar8 + 0x34);
      (*(code *)(*pppppppuVar8[0x3a])[5])(pppppppuVar8[0x3a],pppppppuVar8 + 0x20);
      FUN_10a009414(pppppppuVar8 + 0x53);
      func_0x00010a2349b4(pppppppuVar8 + 0x4f);
      FUN_10a3f23d0(pppppppuVar8 + 0x4d);
      func_0x00010a3f5df8(pppppppuVar8 + 0x4a);
      FUN_10a15206c(pppppppuVar8 + 0x47);
      if (*(char *)((long)pppppppuVar8 + 0x237) < '\0') {
        __ZdlPv(pppppppuVar8[0x44]);
      }
      if (*(char *)((long)pppppppuVar8 + 0x21f) < '\0') {
        __ZdlPv(pppppppuVar8[0x41]);
      }
      FUN_10a3f5ba8(pppppppuVar8 + 0x40);
      func_0x00010a3f5b50(pppppppuVar8 + 0x3e);
      FUN_10a3f599c(pppppppuVar8 + 0x3c);
      FUN_10a3f5c74(pppppppuVar8 + 0x3b);
      func_0x00010ad0070c(pppppppuVar8 + 0x34);
      func_0x000109d18f34(pppppppuVar8 + 0x1d);
      if (*(char *)(pppppppuVar8 + 0x1c) == '\x01') {
        func_0x000109d18f34(pppppppuVar8 + 5);
      }
      func_0x00010a061620(pppppppuVar8 + 2);
      return pppppppuVar8;
    }
  }
  ppppppuVar12 = param_1[(param_2 & 0xffffffff) + 1];
  if (ppppppuVar12 == (undefined8 ******)0x0) {
    if ((int)uVar9 < 3) {
      if (uVar9 == 0) {
        ppppppuVar12 = (undefined8 ******)0x10;
        __Znwm();
        FUN_10ab8fe20();
      }
      else {
        if (uVar9 != 1) {
          ppuVar5 = &PTR___tlv_bootstrap_11340de10;
          (*(code *)PTR___tlv_bootstrap_11340de10)();
          puVar10 = (undefined8 *)*ppuVar5;
          ppppppuStack_68 = (undefined8 ******)*puVar10;
          plVar13 = (long *)puVar10[1];
          if (plVar13 != (long *)0x0) {
            plVar14 = plVar13 + 1;
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar2) {
                *plVar14 = *plVar14 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          lVar15 = puVar10[2];
          lVar11 = *(long *)(lVar15 + 0x10);
          plStack_60 = plVar13;
          if ((*(byte *)(lVar11 + 0x440) & 1) == 0) goto LAB_10a3ca47c;
          func_0x00010a1557e8(lVar11 + 0x3f8);
          lVar11 = *(long *)(lVar15 + 0x10);
          if ((*(byte *)(lVar11 + 0x440) & 1) == 0) goto LAB_10a3ca47c;
          func_0x00010a1556b8(lVar11 + 0x200);
          ppppppuVar12 = (undefined8 ******)0x80;
          __Znwm();
          FUN_10a15adcc();
          ppppppuVar6 = param_1[(param_2 & 0xffffffff) + 1];
          param_1[(param_2 & 0xffffffff) + 1] = ppppppuVar12;
          if (ppppppuVar6 != (undefined8 ******)0x0) {
            (*(code *)(*ppppppuVar6)[1])();
          }
          if (plVar13 != (long *)0x0) {
            plVar14 = plVar13 + 1;
            do {
              lVar11 = *plVar14;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar2) {
                *plVar14 = lVar11 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            goto LAB_10a3ca304;
          }
          goto LAB_10a3ca3bc;
        }
        ppppppuVar12 = (undefined8 ******)0x10;
        __Znwm();
        FUN_10ad70fb8();
      }
LAB_10a3ca3a4:
      ppppppuVar6 = param_1[(param_2 & 0xffffffff) + 1];
      param_1[(param_2 & 0xffffffff) + 1] = ppppppuVar12;
      if (ppppppuVar6 == (undefined8 ******)0x0) goto LAB_10a3ca3c0;
      (*(code *)(*ppppppuVar6)[1])();
    }
    else if (uVar9 == 3) {
      ppuVar5 = &PTR___tlv_bootstrap_11340de10;
      (*(code *)PTR___tlv_bootstrap_11340de10)();
      puVar10 = (undefined8 *)*ppuVar5;
      ppppppuStack_68 = (undefined8 ******)*puVar10;
      plVar13 = (long *)puVar10[1];
      if (plVar13 != (long *)0x0) {
        plVar14 = plVar13 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar2) {
            *plVar14 = *plVar14 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar14 = (long *)puVar10[2];
      lVar11 = *plVar14;
      plStack_60 = plVar13;
      if ((*(byte *)(lVar11 + 0x440) & 1) == 0) goto LAB_10a3ca47c;
      ppppppuVar12 = (undefined8 ******)*ppppppuStack_68;
      func_0x00010a1557e8(lVar11 + 0x3f8);
      lVar11 = *plVar14;
      if ((*(byte *)(lVar11 + 0x440) & 1) == 0) goto LAB_10a3ca47c;
      func_0x00010a1556b8(lVar11 + 0x200);
      if (*(int *)((long)*ppppppuVar12 + 0x734) == 2) {
        ppppppuVar12 = (undefined8 ******)0x80;
        __Znwm();
        FUN_10a15adcc();
        ppppppuVar6 = param_1[(param_2 & 0xffffffff) + 1];
        param_1[(param_2 & 0xffffffff) + 1] = ppppppuVar12;
        if (ppppppuVar6 != (undefined8 ******)0x0) {
          (*(code *)(*ppppppuVar6)[1])();
        }
      }
      if (plVar13 != (long *)0x0) {
        plVar14 = plVar13 + 1;
        do {
          lVar11 = *plVar14;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar2) {
            *plVar14 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        goto LAB_10a3ca304;
      }
    }
    else if (uVar9 == 5) {
      ppppppuStack_68 = (undefined8 ******)((ulong)ppppppuStack_68 & 0xffffffff00000000);
      plStack_60 = (long *)0x0;
      uStack_58 = 0;
      func_0x0001092343ac(&ppppppuStack_78,&ppppppuStack_68);
      ppppppuVar12 = (undefined8 ******)0x20;
      __Znwm();
      FUN_10aba0c5c();
      ppppppuVar6 = param_1[(param_2 & 0xffffffff) + 1];
      param_1[(param_2 & 0xffffffff) + 1] = ppppppuVar12;
      if (ppppppuVar6 != (undefined8 ******)0x0) {
        (*(code *)(*ppppppuVar6)[1])();
      }
      if (plStack_70 != (long *)0x0) {
        plVar14 = plStack_70 + 1;
        do {
          lVar11 = *plVar14;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar2) {
            *plVar14 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
          plVar13 = plStack_70;
        } while (cVar1 != '\0');
LAB_10a3ca304:
        if (lVar11 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
    }
    else {
      ppuVar5 = &PTR___tlv_bootstrap_11340de10;
      (*(code *)PTR___tlv_bootstrap_11340de10)();
      lVar15 = *(long *)((long)*ppuVar5 + 0x10);
      lVar11 = *(long *)(lVar15 + 8);
      if ((*(byte *)(lVar11 + 0x440) & 1) == 0) goto LAB_10a3ca47c;
      plVar13 = *(long **)(*(long *)*ppuVar5 + 8);
      func_0x00010a1557e8(lVar11 + 0x3f8);
      lVar11 = *(long *)(lVar15 + 8);
      if ((*(byte *)(lVar11 + 0x440) & 1) == 0) goto LAB_10a3ca47c;
      func_0x00010a1556b8(lVar11 + 0x200);
      if (*(int *)(*plVar13 + 0x734) != 2) {
        ppppppuVar12 = (undefined8 ******)0x80;
        __Znwm();
        FUN_10a15adcc();
        goto LAB_10a3ca3a4;
      }
    }
LAB_10a3ca3bc:
    ppppppuVar12 = param_1[(param_2 & 0xffffffff) + 1];
  }
LAB_10a3ca3c0:
  FUN_10a0ee900(&ppppppuStack_68,&UNK_10f653d24,0x16);
  plStack_70 = (long *)(long)cStack_51;
  if ((long)plStack_70 < 0) {
    ppppppuStack_78 = ppppppuStack_68;
    plStack_70 = plStack_60;
    if (ppppppuVar12 != (undefined8 ******)0x0) {
      __ZdlPv();
      goto LAB_10a3ca400;
    }
  }
  else {
    ppppppuStack_78 = &ppppppuStack_68;
    if (ppppppuVar12 != (undefined8 ******)0x0) {
LAB_10a3ca400:
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f653d3b,&UNK_10f653d68,0x73,&UNK_10f653dbf,in_x6,in_x7,
                            param_2);
      }
      uVar7 = 0x330;
      __Znwm(0x330);
      FUN_10a24227c();
      FUN_10a3f5fb0(pppppppuVar8,uVar7);
      return pppppppuVar8;
    }
  }
  FUN_10a0edfc4(&ppppppuStack_78);
LAB_10a3ca47c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a3ca480);
  (*pcVar3)();
}



/* Entry: 10a3ca524; end: 10a3ca63f;  */

long FUN_10a3ca524(long param_1)

{
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    (**(code **)(**(long **)(param_1 + 0x1d0) + 0x28))(*(long **)(param_1 + 0x1d0),param_1 + 0x40);
  }
  (**(code **)(**(long **)(param_1 + 0x1d0) + 0x28))
            (*(long **)(param_1 + 0x1d0),*(long *)(param_1 + 0x10) + 0x18);
  (**(code **)(**(long **)(param_1 + 0x1d0) + 0x28))(*(long **)(param_1 + 0x1d0),param_1 + 0x1a0);
  (**(code **)(**(long **)(param_1 + 0x1d0) + 0x28))(*(long **)(param_1 + 0x1d0),param_1 + 0x100);
  FUN_10a009414(param_1 + 0x298);
  func_0x00010a2349b4(param_1 + 0x278);
  FUN_10a3f23d0(param_1 + 0x268);
  func_0x00010a3f5df8(param_1 + 0x250);
  FUN_10a15206c(param_1 + 0x238);
  if (*(char *)(param_1 + 0x237) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x220));
  }
  if (*(char *)(param_1 + 0x21f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x208));
  }
  FUN_10a3f5ba8(param_1 + 0x200);
  func_0x00010a3f5b50(param_1 + 0x1f0);
  FUN_10a3f599c(param_1 + 0x1e0);
  FUN_10a3f5c74(param_1 + 0x1d8);
  func_0x00010ad0070c(param_1 + 0x1a0);
  func_0x000109d18f34(param_1 + 0xe8);
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    func_0x000109d18f34(param_1 + 0x28);
  }
  func_0x00010a061620((long *)(param_1 + 0x10));
  return param_1;
}



/* Entry: 10a3ca640; end: 10a3ca643;  */

long FUN_10a3ca640(long param_1)

{
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    (**(code **)(**(long **)(param_1 + 0x1d0) + 0x28))(*(long **)(param_1 + 0x1d0),param_1 + 0x40);
  }
  (**(code **)(**(long **)(param_1 + 0x1d0) + 0x28))
            (*(long **)(param_1 + 0x1d0),*(long *)(param_1 + 0x10) + 0x18);
  (**(code **)(**(long **)(param_1 + 0x1d0) + 0x28))(*(long **)(param_1 + 0x1d0),param_1 + 0x1a0);
  (**(code **)(**(long **)(param_1 + 0x1d0) + 0x28))(*(long **)(param_1 + 0x1d0),param_1 + 0x100);
  FUN_10a009414(param_1 + 0x298);
  func_0x00010a2349b4(param_1 + 0x278);
  FUN_10a3f23d0(param_1 + 0x268);
  func_0x00010a3f5df8(param_1 + 0x250);
  FUN_10a15206c(param_1 + 0x238);
  if (*(char *)(param_1 + 0x237) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x220));
  }
  if (*(char *)(param_1 + 0x21f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x208));
  }
  FUN_10a3f5ba8(param_1 + 0x200);
  func_0x00010a3f5b50(param_1 + 0x1f0);
  FUN_10a3f599c(param_1 + 0x1e0);
  FUN_10a3f5c74(param_1 + 0x1d8);
  func_0x00010ad0070c(param_1 + 0x1a0);
  func_0x000109d18f34(param_1 + 0xe8);
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    func_0x000109d18f34(param_1 + 0x28);
  }
  func_0x00010a061620((long *)(param_1 + 0x10));
  return param_1;
}



/* Entry: 10a3ca644; end: 10a3ca657;  */

void FUN_10a3ca644(void)

{
  FUN_10a3ca524();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3ca658; end: 10a3ca6e7;  */

undefined ** FUN_10a3ca658(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_40;
  ppuVar3 = &puStack_40;
  puStack_40 = &UNK_10f653c75;
  uStack_38 = 0x22;
  if (*(long *)(param_2 + 0x260) != 0) {
    uVar1 = 0x20;
    __Znwm(0x20);
    FUN_10a3f5f44();
    puStack_40 = (undefined *)0x0;
    func_0x00010a3f5ee0(param_1,uVar1);
    func_0x00010a3f5ee0(&puStack_40,0);
    return ppuVar2;
  }
  FUN_10a0edfc4();
  __ZdlPv();
  __Unwind_Resume();
  *ppuVar3 = (undefined *)0x0;
  FUN_10a3ca658();
  return ppuVar3;
}



/* Entry: 10a3ca6e8; end: 10a3ca727;  */

undefined8 * FUN_10a3ca6e8(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_10a3ca658();
  return param_1;
}



/* Entry: 10a3ca728; end: 10a3ca7a3;  */

long * FUN_10a3ca728(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  FUN_10a3f6124(param_1 + 0xd,0);
  lVar2 = 0x60;
  do {
    FUN_10a3f5fb0((long)param_1 + lVar2,0);
    lVar2 = lVar2 + -8;
  } while (lVar2 != 0x30);
  do {
    plVar1 = *(long **)((long)param_1 + lVar2);
    *(undefined8 *)((long)param_1 + lVar2) = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    lVar2 = lVar2 + -8;
  } while (lVar2 != 0);
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    FUN_10a3f5fd8(param_1);
  }
  return param_1;
}



/* Entry: 10a3ca7a4; end: 10a3ca83f;  */

undefined ** FUN_10a3ca7a4(long param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  
  ppuVar6 = &PTR___tlv_bootstrap_11340dee8;
  (*(code *)PTR___tlv_bootstrap_11340dee8)();
  lVar7 = 0;
  ppuVar1 = ppuVar6;
  do {
    puVar4 = *(undefined **)(param_1 + 0x38 + lVar7);
    if (puVar4 != (undefined *)0x0) {
      if (*ppuVar6 != (undefined *)0x0) {
        plVar2 = (long *)&UNK_10f646d5c;
        FUN_10a0ee06c();
        *ppuVar6 = (undefined *)0x0;
        __Unwind_Resume();
        ppuVar6 = (undefined **)*plVar2;
        if (ppuVar6 == (undefined **)0x0) {
          ppuVar6 = (undefined **)0x80;
          __Znwm();
          FUN_10a569350();
          lVar7 = *plVar2;
          *plVar2 = (long)ppuVar6;
          if (lVar7 != 0) {
            FUN_10a3f5fd8(plVar2);
            ppuVar6 = (undefined **)*plVar2;
          }
          *(undefined1 *)(ppuVar6 + 0xf) = 1;
        }
        return ppuVar6;
      }
      *ppuVar6 = puVar4;
      ppuVar1 = *(undefined ***)(param_1 + 0x38 + lVar7);
      FUN_10a244f20(ppuVar1);
      *ppuVar6 = (undefined *)0x0;
    }
    lVar7 = lVar7 + 8;
  } while (lVar7 != 0x30);
  lVar7 = *(long *)(param_1 + 0x68);
  if (lVar7 != 0) {
    ppuVar6 = (undefined **)(lVar7 + 8);
    ppuVar1 = ppuVar6;
    if (*(long *)(lVar7 + 0x20) != 0) {
      func_0x000104c4f97c(ppuVar6,*(undefined8 *)(lVar7 + 0x18));
      *(undefined8 *)(lVar7 + 0x18) = 0;
      lVar3 = *(long *)(lVar7 + 0x10);
      if (lVar3 != 0) {
        lVar5 = 0;
        do {
          *(undefined8 *)(*ppuVar6 + lVar5 * 8) = 0;
          lVar5 = lVar5 + 1;
        } while (lVar3 != lVar5);
      }
      *(undefined8 *)(lVar7 + 0x20) = 0;
    }
    return ppuVar1;
  }
  return ppuVar1;
}



/* Entry: 10a3ca840; end: 10a3ca8ab;  */

long FUN_10a3ca840(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    lVar2 = 0x80;
    __Znwm();
    FUN_10a569350();
    lVar1 = *param_1;
    *param_1 = lVar2;
    if (lVar1 != 0) {
      FUN_10a3f5fd8(param_1);
      lVar2 = *param_1;
    }
    *(undefined1 *)(lVar2 + 0x78) = 1;
  }
  return lVar2;
}



/* Entry: 10a3ca8ac; end: 10a3ca90b;  */

long FUN_10a3ca8ac(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + 0x68);
  lVar1 = *plVar3;
  if (lVar1 == 0) {
    puVar2 = (undefined8 *)0x30;
    __Znwm();
    puVar2[5] = 0;
    *puVar2 = &PTR_DAT_110bd1910;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 5) = 0x3f800000;
    FUN_10a3f6124(plVar3,puVar2);
    lVar1 = *plVar3;
  }
  return lVar1;
}



/* Entry: 10a3ca90c; end: 10a3ca95f;  */

void FUN_10a3ca90c(long *param_1,undefined8 param_2)

{
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  FUN_10a3f6260(&uStack_21,&uStack_22,param_2);
  if (*param_1 != 0) {
    FUN_10a3ca960();
  }
  return;
}



/* Entry: 10a3ca960; end: 10a3cce0b;  */

undefined8 ** FUN_10a3ca960(long param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  ulong *puVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  code *pcVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined **ppuVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 **ppuVar19;
  undefined8 **ppuVar20;
  undefined8 **ppuVar21;
  undefined8 **ppuVar22;
  undefined8 *puVar23;
  uint uVar24;
  ulong uVar25;
  undefined *puVar26;
  long lVar27;
  long lVar28;
  long *plVar29;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined **ppuStack_2d0;
  long *plStack_2c8;
  undefined **ppuStack_2c0;
  long *plStack_2b8;
  long *plStack_2b0;
  undefined8 *puStack_2a8;
  undefined *puStack_2a0;
  undefined **ppuStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined **ppuStack_260;
  undefined *puStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  long *plStack_240;
  long lStack_218;
  undefined8 **ppuStack_210;
  undefined8 **ppuStack_208;
  code *pcStack_200;
  undefined **ppuStack_1f8;
  undefined8 **ppuStack_1f0;
  undefined8 **ppuStack_1e8;
  undefined8 **ppuStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 **ppuStack_1c8;
  undefined1 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined8 **ppuStack_1a8;
  undefined8 **ppuStack_1a0;
  undefined8 **ppuStack_198;
  undefined8 **ppuStack_190;
  undefined8 **ppuStack_188;
  undefined8 **ppuStack_180;
  undefined8 **ppuStack_178;
  undefined8 **ppuStack_170;
  undefined8 **ppuStack_168;
  undefined8 **ppuStack_160;
  undefined8 **ppuStack_158;
  undefined8 **ppuStack_150;
  long lStack_148;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 *apuStack_e0 [6];
  long *plStack_b0;
  long *plStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined8 *puStack_80;
  long lStack_58;
  
  ppuVar19 = apuStack_e0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a1cc18c(apuStack_e0,&UNK_10f653e02);
  ppuStack_90 = *(undefined ***)(*(long *)(param_1 + 0x100) + 0x298);
  ppuStack_88 = *(undefined ***)(*(long *)(param_1 + 0x100) + 0x2a0);
  if (ppuStack_88 != (undefined **)0x0) {
    ppuVar16 = ppuStack_88 + 1;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
      if (bVar10) {
        *ppuVar16 = *ppuVar16 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  ppuStack_a0 = (undefined **)FUN_10a3ee1d8;
  ppuStack_98 = &PTR_FUN_110bd16a0;
  uVar12 = 0x3d0;
  __Znwm();
  FUN_10a4603c8();
  plVar13 = *(long **)(param_1 + 0x870);
  *(undefined8 *)(param_1 + 0x870) = uVar12;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  (*(code *)*ppuStack_98)(&ppuStack_98);
  puVar14 = (undefined8 *)0x28;
  __Znwm();
  puVar14[4] = 0;
  puVar14[1] = 0;
  *puVar14 = 0;
  puVar14[3] = 0;
  puVar14[2] = 0;
  *(undefined4 *)(puVar14 + 4) = 0x3f800000;
  FUN_10a3f6520(param_1 + 0x878);
  puVar15 = (undefined8 *)0x50;
  __Znwm();
  *puVar15 = &PTR_FUN_110bd0928;
  puVar15[1] = 0;
  puVar15[2] = 0;
  puVar15[3] = 0;
  puVar14 = puVar15;
  __ZNSt3__16chrono12steady_clock3nowEv();
  puVar15[4] = puVar14;
  *(undefined1 *)(puVar15 + 5) = 0;
  *(undefined4 *)((long)puVar15 + 0x2c) = 0;
  *(undefined4 *)(puVar15 + 6) = 0;
  puVar15[9] = 0;
  puVar15[8] = 0;
  puVar15[7] = puVar15 + 8;
  func_0x00010a3ed08c(param_1 + 0x850,puVar15);
  uVar12 = 0x78;
  __Znwm(0x78);
  FUN_10a2587a0();
  FUN_10a3f6678(param_1 + 0x880,uVar12);
  ppuVar16 = (undefined **)0x50;
  __Znwm();
  ppuVar16[1] = (undefined *)0x0;
  ppuVar16[2] = (undefined *)0x0;
  *ppuVar16 = (undefined *)&PTR_DAT_110bd3090;
  ppuVar16[4] = (undefined *)0x0;
  ppuVar16[5] = (undefined *)0x0;
  ppuStack_a0 = ppuVar16 + 3;
  *ppuStack_a0 = (undefined *)&PTR_FUN_110c458a0;
  *(undefined2 *)(ppuVar16 + 6) = 0;
  ppuVar16[8] = (undefined *)0x0;
  ppuVar16[9] = (undefined *)0x0;
  ppuVar16[7] = (undefined *)0x0;
  ppuStack_98 = ppuVar16;
  FUN_10a3cfaa4((long *)(param_1 + 0xa80),&ppuStack_a0);
  ppuVar16 = ppuStack_98;
  if (ppuStack_98 != (undefined **)0x0) {
    ppuVar1 = ppuStack_98 + 1;
    do {
      puVar26 = *ppuVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar10) {
        *ppuVar1 = puVar26 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (puVar26 == (undefined *)0x0) {
      (**(code **)(*ppuStack_98 + 0x10))(ppuStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar16);
    }
  }
  *(undefined1 *)(*(long *)(param_1 + 0xa80) + 0x18) = 1;
  puVar14 = (undefined8 *)0xd8;
  __Znwm();
  *puVar14 = &PTR_FUN_110baea20;
  puVar14[1] = 0x32aaaba7;
  puVar14[3] = 0;
  puVar14[2] = 0;
  puVar14[5] = 0;
  puVar14[4] = 0;
  puVar14[7] = 0;
  puVar14[6] = 0;
  puVar14[9] = 0;
  puVar14[8] = 0;
  puVar14[0xb] = 0;
  puVar14[10] = 0;
  puVar14[0xc] = 0;
  *(undefined4 *)(puVar14 + 0xd) = 0x3f800000;
  puVar14[0xf] = 0;
  puVar14[0xe] = 0;
  puVar14[0x11] = 0;
  puVar14[0x10] = 0;
  *(undefined4 *)(puVar14 + 0x12) = 0x3f800000;
  puVar14[0x14] = 0;
  puVar14[0x13] = 0;
  puVar14[0x16] = 0;
  puVar14[0x15] = 0;
  *(undefined4 *)(puVar14 + 0x17) = 0x3f800000;
  puVar14[0x19] = 0;
  puVar14[0x1a] = 0;
  puVar14[0x18] = 0;
  plVar13 = *(long **)(param_1 + 0x828);
  *(undefined8 **)(param_1 + 0x828) = puVar14;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))(plVar13);
  }
  puVar14 = (undefined8 *)0x128;
  __Znwm();
  puVar14[0x24] = 0;
  *puVar14 = 0x32aaaba7;
  puVar14[2] = 0;
  puVar14[1] = 0;
  puVar14[4] = 0;
  puVar14[3] = 0;
  puVar14[6] = 0;
  puVar14[5] = 0;
  puVar14[7] = 0;
  puVar14[8] = &UNK_10e52b660;
  puVar14[9] = 0;
  puVar14[10] = 0;
  puVar14[0xb] = 0;
  puVar14[0xc] = &UNK_10e52b660;
  puVar14[0xd] = 0;
  puVar14[0xe] = 0;
  puVar14[0xf] = 0;
  puVar14[0x10] = &UNK_10e52b660;
  puVar14[0x11] = 0;
  puVar14[0x12] = 0;
  puVar14[0x13] = 0;
  puVar14[0x14] = &UNK_10e52b660;
  puVar14[0x15] = 0;
  puVar14[0x16] = 0;
  puVar14[0x17] = 0;
  puVar14[0x18] = &UNK_10e52b660;
  puVar14[0x19] = 0;
  puVar14[0x1a] = 0;
  puVar14[0x1b] = 0;
  puVar14[0x1c] = &UNK_10e52b660;
  puVar14[0x1d] = 0;
  puVar14[0x1e] = 0;
  puVar14[0x1f] = 0;
  puVar14[0x20] = &UNK_10e52b660;
  puVar14[0x21] = 0;
  puVar14[0x22] = 0;
  *(undefined8 *)((long)puVar14 + 0x11d) = 0;
  puVar14[0x23] = 0;
  FUN_10a3f76ec(param_1 + 0xbd0);
  puVar14 = (undefined8 *)0x220;
  __Znwm();
  *(undefined1 *)(puVar14 + 1) = 0;
  *puVar14 = &PTR_FUN_110bcfca8;
  puVar14[2] = param_1;
  *(undefined1 *)(puVar14 + 3) = 0;
  puVar14[5] = 0;
  puVar14[4] = 0;
  puVar14[7] = 0;
  puVar14[6] = 0;
  *(undefined4 *)(puVar14 + 8) = 0x3f800000;
  puVar14[10] = 0;
  puVar14[9] = 0;
  puVar14[0xc] = 0;
  puVar14[0xb] = 0;
  *(undefined4 *)(puVar14 + 0xd) = 0x3f800000;
  puVar14[0xe] = 0x32aaaba7;
  puVar14[0x10] = 0;
  puVar14[0xf] = 0;
  puVar14[0x12] = 0;
  puVar14[0x11] = 0;
  puVar14[0x14] = 0;
  puVar14[0x13] = 0;
  puVar14[0x15] = 0;
  puVar14[0x16] = 0x32aaaba7;
  puVar14[0x1d] = 0;
  puVar14[0x1c] = 0;
  puVar14[0x1b] = 0;
  puVar14[0x1a] = 0;
  puVar14[0x19] = 0;
  puVar14[0x20] = 0;
  puVar14[0x1f] = 0;
  puVar14[0x18] = 0;
  puVar14[0x17] = 0;
  puVar14[0x1e] = 0x32aaaba7;
  puVar14[0x22] = 0;
  puVar14[0x21] = 0;
  puVar14[0x24] = 0;
  puVar14[0x23] = 0;
  puVar14[0x26] = 0;
  puVar14[0x25] = 0;
  puVar14[0x28] = 0;
  puVar14[0x27] = 0;
  puVar14[0x29] = 0;
  *(undefined4 *)(puVar14 + 0x2a) = 0x3f800000;
  puVar14[0x2c] = 0;
  puVar14[0x2b] = 0;
  puVar14[0x2e] = 0;
  puVar14[0x2d] = 0;
  puVar14[0x30] = 0;
  puVar14[0x2f] = 0;
  puVar14[0x31] = 0x32aaaba7;
  puVar14[0x33] = 0;
  puVar14[0x32] = 0;
  puVar14[0x35] = 0;
  puVar14[0x34] = 0;
  puVar14[0x37] = 0;
  puVar14[0x36] = 0;
  puVar14[0x38] = 0;
  puVar14[0x39] = 1;
  puVar14[0x3d] = 0;
  puVar14[0x3c] = 0;
  puVar14[0x3b] = 0;
  puVar14[0x3a] = 0;
  *(undefined4 *)(puVar14 + 0x3e) = 0x3f800000;
  puVar14[0x40] = 0;
  puVar14[0x3f] = 0;
  puVar14[0x42] = 0;
  puVar14[0x41] = 0;
  *(undefined4 *)(puVar14 + 0x43) = 0x3f800000;
  puVar15 = (undefined8 *)0x20;
  __Znwm();
  *puVar15 = &PTR_DAT_110bd19f8;
  puVar15[1] = 0;
  puVar15[2] = 0;
  puVar15[3] = puVar14;
  *(undefined8 **)(param_1 + 0x858) = puVar14;
  plVar13 = *(long **)(param_1 + 0x860);
  *(undefined8 **)(param_1 + 0x860) = puVar15;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  lVar27 = *(long *)(*(long *)(param_1 + 0x100) + 0x260);
  ppuStack_a0 = (undefined **)&UNK_10f653c20;
  ppuStack_98 = (undefined **)0x21;
  if (lVar27 == 0) {
    FUN_10a0edfc4(&ppuStack_a0);
    goto LAB_10a3cca90;
  }
  plVar13 = (long *)0xa0;
  __Znwm();
  *plVar13 = param_1;
  plVar13[1] = lVar27;
  plVar13[3] = 0;
  plVar13[2] = 0;
  plVar13[5] = 0;
  plVar13[4] = 0;
  plVar13[7] = 0;
  plVar13[6] = 0;
  plVar13[9] = 0;
  plVar13[8] = 0;
  plVar13[0xb] = 0;
  plVar13[10] = 0;
  plVar13[0xd] = 0;
  plVar13[0xc] = 0;
  plVar13[0xf] = 0;
  plVar13[0xe] = 0;
  plVar13[0x11] = 0;
  plVar13[0x10] = 0;
  plVar13[0x13] = 0;
  plVar13[0x12] = 0;
  FUN_10a3f64f8(param_1 + 0x868);
  puVar14 = (undefined8 *)0x48;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar15 = puVar14 + 3;
  *puVar14 = &PTR_DAT_110bd1a58;
  FUN_10a1c82cc();
  *(undefined8 **)(param_1 + 0x830) = puVar15;
  plVar13 = *(long **)(param_1 + 0x838);
  *(undefined8 **)(param_1 + 0x838) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  puVar14 = (undefined8 *)0x188;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &PTR_DAT_110bd1aa8;
  puVar14[9] = 0;
  puVar14[10] = 0x32aaaba7;
  puVar14[6] = 0;
  puVar14[5] = 0;
  puVar14[4] = 0;
  puVar14[3] = 0;
  puVar14[8] = 0;
  puVar14[7] = 0;
  *(undefined4 *)((long)puVar14 + 0x4c) = 1;
  puVar14[0xc] = 0;
  puVar14[0xb] = 0;
  puVar14[0xe] = 0;
  puVar14[0xd] = 0;
  puVar14[0x10] = 0;
  puVar14[0xf] = 0;
  puVar14[0x11] = 0;
  puVar14[0x12] = 0x32aaaba7;
  puVar14[0x14] = 0;
  puVar14[0x13] = 0;
  puVar14[0x16] = 0;
  puVar14[0x15] = 0;
  puVar14[0x18] = 0;
  puVar14[0x17] = 0;
  puVar14[0x1a] = 0;
  puVar14[0x19] = 0;
  puVar14[0x1c] = 0;
  puVar14[0x1b] = 0;
  puVar14[0x1e] = 0;
  puVar14[0x1d] = 0;
  *(undefined8 *)((long)puVar14 + 0xfc) = 0;
  *(undefined8 *)((long)puVar14 + 0xf4) = 0;
  *(undefined4 *)((long)puVar14 + 0x104) = 1;
  puVar14[0x21] = 0x32aaaba7;
  puVar14[0x23] = 0;
  puVar14[0x22] = 0;
  puVar14[0x25] = 0;
  puVar14[0x24] = 0;
  puVar14[0x27] = 0;
  puVar14[0x26] = 0;
  puVar14[0x28] = 0;
  puVar14[0x29] = 0x32aaaba7;
  puVar14[0x30] = 0;
  puVar14[0x2d] = 0;
  puVar14[0x2c] = 0;
  puVar14[0x2f] = 0;
  puVar14[0x2e] = 0;
  puVar14[0x2b] = 0;
  puVar14[0x2a] = 0;
  *(undefined8 **)(param_1 + 0x840) = puVar14 + 3;
  plVar13 = *(long **)(param_1 + 0x848);
  *(undefined8 **)(param_1 + 0x848) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  puVar14 = (undefined8 *)0x60;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar15 = puVar14 + 3;
  *puVar14 = &PTR_FUN_110bd1af8;
  FUN_10a76db8c(puVar15,param_1);
  *(undefined8 **)(param_1 + 0x888) = puVar15;
  plVar13 = *(long **)(param_1 + 0x890);
  *(undefined8 **)(param_1 + 0x890) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  puVar14 = (undefined8 *)0xb0;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar15 = puVar14 + 3;
  *puVar14 = &PTR_DAT_110bd1b48;
  FUN_10a5a0ee8(puVar15,param_1);
  *(undefined8 **)(param_1 + 0x8a8) = puVar15;
  plVar13 = *(long **)(param_1 + 0x8b0);
  *(undefined8 **)(param_1 + 0x8b0) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  uVar12 = 0x30;
  __Znwm();
  FUN_10a5953e0();
  plVar13 = *(long **)(param_1 + 0x8b8);
  *(undefined8 *)(param_1 + 0x8b8) = uVar12;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  puVar14 = (undefined8 *)0x98;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar15 = puVar14 + 3;
  *puVar14 = &PTR_DAT_110bd1b98;
  FUN_10a23e370(puVar15,param_1);
  *(undefined8 **)(param_1 + 0x898) = puVar15;
  plVar13 = *(long **)(param_1 + 0x8a0);
  *(undefined8 **)(param_1 + 0x8a0) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  uVar12 = 0x138;
  __Znwm();
  FUN_10a25c960();
  plVar13 = *(long **)(param_1 + 0x8c0);
  *(undefined8 *)(param_1 + 0x8c0) = uVar12;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  puVar14 = (undefined8 *)0xc8;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &PTR_DAT_110bd1be8;
  puVar14[3] = &PTR_FUN_110c17530;
  puVar14[4] = 0;
  puVar14[5] = 0;
  puVar14[6] = 0x32aaaba7;
  puVar14[8] = 0;
  puVar14[7] = 0;
  puVar14[10] = 0;
  puVar14[9] = 0;
  puVar14[0xc] = 0;
  puVar14[0xb] = 0;
  puVar14[0xe] = 0;
  puVar14[0xd] = 0;
  puVar14[0x10] = 0;
  puVar14[0xf] = 0;
  puVar14[0x11] = 0;
  *(undefined4 *)(puVar14 + 0x12) = 0x3f800000;
  puVar14[0x14] = 0;
  puVar14[0x13] = 0;
  puVar14[0x16] = 0;
  puVar14[0x15] = 0;
  *(undefined4 *)(puVar14 + 0x17) = 0x3f800000;
  puVar14[0x18] = param_1;
  *(undefined8 **)(param_1 + 0x8d8) = puVar14 + 3;
  plVar13 = *(long **)(param_1 + 0x8e0);
  *(undefined8 **)(param_1 + 0x8e0) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  puVar14 = (undefined8 *)0x38;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &PTR_DAT_110bd1c38;
  puVar14[4] = 0;
  puVar14[5] = 0;
  puVar14[3] = &PTR_DAT_110bb6548;
  puVar14[6] = param_1;
  *(undefined8 **)(param_1 + 0x8c8) = puVar14 + 3;
  plVar13 = *(long **)(param_1 + 0x8d0);
  *(undefined8 **)(param_1 + 0x8d0) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  lVar27 = *(long *)(param_1 + 0x100);
  puVar14 = (undefined8 *)0x48;
  __Znwm();
  *puVar14 = &PTR_FUN_110bd1c88;
  puVar14[2] = 0;
  puVar14[1] = 0;
  puVar14[4] = 0;
  puVar14[3] = 0;
  *(undefined4 *)(puVar14 + 5) = 0x3f800000;
  if (*(char *)(lVar27 + 0x237) < '\0') {
    func_0x000107c3192c(&ppuStack_a0,*(undefined8 *)(lVar27 + 0x220),*(undefined8 *)(lVar27 + 0x228)
                       );
  }
  else {
    ppuStack_98 = *(undefined ***)(lVar27 + 0x228);
    ppuStack_a0 = *(undefined ***)(lVar27 + 0x220);
    ppuStack_90 = *(undefined ***)(lVar27 + 0x230);
  }
  FUN_10a0f2224(puVar14 + 6,&ppuStack_a0);
  if ((long)ppuStack_90 < 0) {
    __ZdlPv(ppuStack_a0);
  }
  plVar13 = *(long **)(param_1 + 0x920);
  *(undefined8 **)(param_1 + 0x920) = puVar14;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  puVar14 = (undefined8 *)0xc0;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar15 = puVar14 + 3;
  *puVar14 = &PTR_FUN_110bd1cc0;
  FUN_10a596aac(puVar15,param_1);
  *(undefined8 **)(param_1 + 0x900) = puVar15;
  plVar13 = *(long **)(param_1 + 0x908);
  *(undefined8 **)(param_1 + 0x908) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  uVar12 = 0x70;
  __Znwm(0x70);
  FUN_10a7713cc();
  func_0x00010a3f6960(param_1 + 0x928,uVar12);
  puVar14 = (undefined8 *)0x158;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar15 = puVar14 + 3;
  *puVar14 = &PTR_DAT_110bd1d10;
  FUN_10a9db274(puVar15,param_1);
  *(undefined8 **)(param_1 + 0x8e8) = puVar15;
  plVar13 = *(long **)(param_1 + 0x8f0);
  *(undefined8 **)(param_1 + 0x8f0) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  uVar12 = 0x70;
  __Znwm(0x70);
  FUN_10ad72444();
  FUN_10a3ed028(param_1 + 0x8f8,uVar12);
  puVar14 = (undefined8 *)0x30;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &PTR_DAT_110bd1d60;
  puVar14[4] = 0;
  puVar14[5] = 0;
  puVar14[3] = &PTR_DAT_110bb5dc8;
  *(undefined8 **)(param_1 + 0x930) = puVar14 + 3;
  plVar13 = *(long **)(param_1 + 0x938);
  *(undefined8 **)(param_1 + 0x938) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  puVar14 = (undefined8 *)0x38;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &PTR_DAT_110bd1db0;
  puVar14[4] = 0;
  puVar14[5] = 0;
  puVar14[3] = &PTR_FUN_110bb5bb8;
  puVar14[6] = param_1;
  *(undefined8 **)(param_1 + 0xa10) = puVar14 + 3;
  plVar13 = *(long **)(param_1 + 0xa18);
  *(undefined8 **)(param_1 + 0xa18) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  plVar17 = (long *)0x80;
  __Znwm();
  plVar29 = plVar17 + 1;
  *plVar29 = 0;
  plVar17[2] = 0;
  *plVar17 = (long)&PTR_DAT_110bd1e00;
  plVar13 = plVar17 + 3;
  FUN_10a25f318(plVar13,param_1);
  if (plVar17[7] == 0) {
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar10) {
        *plVar29 = *plVar29 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    plVar2 = plVar17 + 2;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar10) {
        *plVar2 = *plVar2 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    plVar17[6] = (long)plVar13;
    plVar17[7] = (long)plVar17;
LAB_10a3cb47c:
    do {
      lVar27 = *plVar29;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar10) {
        *plVar29 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  else if (*(long *)(plVar17[7] + 8) == -1) {
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar10) {
        *plVar29 = *plVar29 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    plVar2 = plVar17 + 2;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar10) {
        *plVar2 = *plVar2 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    plVar17[6] = (long)plVar13;
    plVar17[7] = (long)plVar17;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    goto LAB_10a3cb47c;
  }
  *(long **)(param_1 + 0x940) = plVar13;
  plVar13 = *(long **)(param_1 + 0x948);
  *(long **)(param_1 + 0x948) = plVar17;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  puVar14 = (undefined8 *)0xa0;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar15 = puVar14 + 3;
  *puVar14 = &PTR_DAT_110bd1e50;
  FUN_10a5aefe4(puVar15,param_1);
  *(undefined8 **)(param_1 + 0x950) = puVar15;
  plVar13 = *(long **)(param_1 + 0x958);
  *(undefined8 **)(param_1 + 0x958) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  plVar17 = (long *)0x450;
  __Znwm();
  plVar29 = plVar17 + 1;
  *plVar29 = 0;
  plVar17[2] = 0;
  *plVar17 = (long)&PTR_DAT_110bd1ea0;
  plVar13 = plVar17 + 3;
  FUN_10a6ea560(plVar13,param_1);
  if (plVar17[0x10] == 0) {
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar10) {
        *plVar29 = *plVar29 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    plVar2 = plVar17 + 2;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar10) {
        *plVar2 = *plVar2 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    plVar17[0xf] = (long)plVar13;
    plVar17[0x10] = (long)plVar17;
LAB_10a3cb5ec:
    do {
      lVar27 = *plVar29;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar10) {
        *plVar29 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  else if (*(long *)(plVar17[0x10] + 8) == -1) {
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar10) {
        *plVar29 = *plVar29 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    plVar2 = plVar17 + 2;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar10) {
        *plVar2 = *plVar2 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    plVar17[0xf] = (long)plVar13;
    plVar17[0x10] = (long)plVar17;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    goto LAB_10a3cb5ec;
  }
  *(long **)(param_1 + 0x960) = plVar13;
  plVar13 = *(long **)(param_1 + 0x968);
  *(long **)(param_1 + 0x968) = plVar17;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  plVar13 = (long *)0xb8;
  __Znwm();
  plVar17 = plVar13 + 1;
  *plVar17 = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&PTR_DAT_110bd1ef0;
  plVar29 = plVar13 + 3;
  *plVar29 = (long)&PTR_FUN_110b9be20;
  plVar13[4] = 0;
  plVar13[5] = 0;
  plVar13[9] = 0;
  plVar13[8] = 0;
  plVar13[0xb] = 0;
  plVar13[10] = 0;
  *(undefined4 *)(plVar13 + 0xc) = 0x3f800000;
  plVar13[0xe] = 0;
  plVar13[0xd] = 0;
  plVar13[0x10] = 0;
  plVar13[0xf] = 0;
  plVar13[0x11] = param_1;
  plVar13[0x13] = 0;
  plVar13[0x12] = 0;
  plVar13[0x15] = 0;
  plVar13[0x14] = 0;
  *(undefined4 *)(plVar13 + 0x16) = 0x3f800000;
  do {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar10) {
      *plVar17 = *plVar17 + 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  plVar2 = plVar13 + 2;
  do {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar10) {
      *plVar2 = *plVar2 + 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  plVar13[6] = (long)plVar29;
  plVar13[7] = (long)plVar13;
  do {
    lVar27 = *plVar17;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar10) {
      *plVar17 = lVar27 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (lVar27 == 0) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
  }
  *(long **)(param_1 + 0x970) = plVar29;
  plVar17 = *(long **)(param_1 + 0x978);
  *(long **)(param_1 + 0x978) = plVar13;
  if (plVar17 != (long *)0x0) {
    plVar13 = plVar17 + 1;
    do {
      lVar27 = *plVar13;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar10) {
        *plVar13 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  puVar14 = (undefined8 *)0x48;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &PTR_DAT_110bd1f40;
  puVar14[3] = param_1;
  puVar14[5] = 0;
  puVar14[4] = 0;
  puVar14[7] = 0;
  puVar14[6] = 0;
  *(undefined4 *)(puVar14 + 8) = 0x3f800000;
  *(undefined8 **)(param_1 + 0x9a0) = puVar14 + 3;
  plVar13 = *(long **)(param_1 + 0x9a8);
  *(undefined8 **)(param_1 + 0x9a8) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  puVar14 = (undefined8 *)0xd8;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar15 = puVar14 + 3;
  *puVar14 = &PTR_FUN_110bd1f90;
  FUN_10a8768c4(puVar15,param_1);
  *(undefined8 **)(param_1 + 0x980) = puVar15;
  plVar13 = *(long **)(param_1 + 0x988);
  *(undefined8 **)(param_1 + 0x988) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  if ((*(byte *)(*(long *)(param_1 + 0x100) + 0x248) & 1) != 0) {
    puVar14 = (undefined8 *)0x68;
    __Znwm();
    puVar14[1] = 0;
    puVar14[2] = 0;
    puVar15 = puVar14 + 3;
    *puVar14 = &PTR_DAT_110bd1fe0;
    FUN_10a59d5c4(puVar15,param_1);
    *(undefined8 **)(param_1 + 0x990) = puVar15;
    plVar13 = *(long **)(param_1 + 0x998);
    *(undefined8 **)(param_1 + 0x998) = puVar14;
    if (plVar13 != (long *)0x0) {
      plVar17 = plVar13 + 1;
      do {
        lVar27 = *plVar17;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar10) {
          *plVar17 = lVar27 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar27 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
  }
  puVar14 = (undefined8 *)0x38;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &PTR_DAT_110bd2030;
  puVar14[4] = 0;
  puVar14[5] = 0;
  puVar14[3] = &PTR_DAT_110c37270;
  puVar14[6] = param_1;
  *(undefined8 **)(param_1 + 0x9b0) = puVar14 + 3;
  plVar13 = *(long **)(param_1 + 0x9b8);
  *(undefined8 **)(param_1 + 0x9b8) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  puVar14 = (undefined8 *)0xb0;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar15 = puVar14 + 3;
  *puVar14 = &PTR_DAT_110bd2080;
  FUN_10a9de0b8(puVar15,param_1);
  *(undefined8 **)(param_1 + 0x9c0) = puVar15;
  plVar13 = *(long **)(param_1 + 0x9c8);
  *(undefined8 **)(param_1 + 0x9c8) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  puVar14 = (undefined8 *)0x70;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &PTR_DAT_110bd20d0;
  puVar14[3] = &PTR_DAT_110c17be0;
  puVar14[4] = 0;
  puVar14[5] = 0;
  puVar14[9] = 0;
  puVar14[7] = param_1;
  puVar14[8] = puVar14 + 9;
  puVar14[0xd] = 0;
  puVar14[0xc] = 0;
  puVar14[10] = 0;
  puVar14[0xb] = puVar14 + 0xc;
  puVar14[6] = *(undefined8 *)(*(long *)(param_1 + 0x100) + 0x1d8);
  *(undefined8 **)(param_1 + 0x9d0) = puVar14 + 3;
  plVar13 = *(long **)(param_1 + 0x9d8);
  *(undefined8 **)(param_1 + 0x9d8) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  puVar14 = (undefined8 *)0x40;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar15 = puVar14 + 3;
  *puVar14 = &PTR_DAT_110bd2120;
  FUN_10a6b34b8(puVar15,param_1);
  *(undefined8 **)(param_1 + 0x9e0) = puVar15;
  plVar13 = *(long **)(param_1 + 0x9e8);
  *(undefined8 **)(param_1 + 0x9e8) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  uVar12 = 0x98;
  __Znwm();
  FUN_10a23fdc0();
  plVar13 = *(long **)(param_1 + 0xa30);
  *(undefined8 *)(param_1 + 0xa30) = uVar12;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  puVar14 = (undefined8 *)0x88;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar15 = puVar14 + 3;
  *puVar14 = &PTR_DAT_110bd2170;
  FUN_10a5a02a0(puVar15,param_1);
  *(undefined8 **)(param_1 + 0xa40) = puVar15;
  plVar13 = *(long **)(param_1 + 0xa48);
  *(undefined8 **)(param_1 + 0xa48) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  plVar17 = (long *)0x338;
  __Znwm();
  plVar29 = plVar17 + 1;
  *plVar29 = 0;
  plVar17[2] = 0;
  *plVar17 = (long)&PTR_DAT_110bd21c0;
  plVar13 = plVar17 + 3;
  FUN_10aa34294(plVar13,param_1);
  if (plVar17[9] == 0) {
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar10) {
        *plVar29 = *plVar29 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    plVar2 = plVar17 + 2;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar10) {
        *plVar2 = *plVar2 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    plVar17[8] = (long)plVar13;
    plVar17[9] = (long)plVar17;
LAB_10a3cbb88:
    do {
      lVar27 = *plVar29;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar10) {
        *plVar29 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  else if (*(long *)(plVar17[9] + 8) == -1) {
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar10) {
        *plVar29 = *plVar29 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    plVar2 = plVar17 + 2;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar10) {
        *plVar2 = *plVar2 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    plVar17[8] = (long)plVar13;
    plVar17[9] = (long)plVar17;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    goto LAB_10a3cbb88;
  }
  *(long **)(param_1 + 0xac0) = plVar13;
  plVar13 = *(long **)(param_1 + 0xac8);
  *(long **)(param_1 + 0xac8) = plVar17;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  puVar14 = (undefined8 *)0x70;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar15 = puVar14 + 3;
  *puVar14 = &PTR_DAT_110bd2210;
  FUN_10a537360(puVar15,param_1,0);
  *(undefined8 **)(param_1 + 0xb60) = puVar15;
  plVar13 = *(long **)(param_1 + 0xb68);
  *(undefined8 **)(param_1 + 0xb68) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  puVar14 = (undefined8 *)0x38;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &PTR_DAT_110bd2260;
  puVar14[4] = 0;
  puVar14[5] = 0;
  puVar14[3] = &PTR_FUN_110c36d70;
  puVar14[6] = param_1;
  *(undefined8 **)(param_1 + 0xa00) = puVar14 + 3;
  plVar13 = *(long **)(param_1 + 0xa08);
  *(undefined8 **)(param_1 + 0xa08) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  puVar14 = (undefined8 *)0x18;
  __Znwm();
  puVar14[2] = 0;
  puVar14[1] = 0;
  *puVar14 = puVar14 + 1;
  func_0x00010a3ed050(param_1 + 0xa38);
  plVar13 = (long *)0xb8;
  __Znwm();
  plVar17 = plVar13 + 1;
  *plVar17 = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&PTR_DAT_110bd22b0;
  plVar13[3] = (long)&PTR_FUN_110bf1908;
  plVar13[4] = 0;
  plVar13[5] = 0;
  plVar13[6] = (long)&PTR_FUN_110bf1970;
  *(undefined1 *)(plVar13 + 9) = 0;
  *(undefined1 *)(plVar13 + 0xd) = 0;
  plVar13[0xe] = (long)FUN_10a3f824c;
  plVar13[0xf] = (long)&PTR_DAT_110950c70;
  plVar13[0x16] = param_1;
  do {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar10) {
      *plVar17 = *plVar17 + 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  plVar29 = plVar13 + 2;
  do {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
    if (bVar10) {
      *plVar29 = *plVar29 + 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  plVar13[7] = (long)(plVar13 + 6);
  plVar13[8] = (long)plVar13;
  do {
    lVar27 = *plVar17;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar10) {
      *plVar17 = lVar27 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (lVar27 == 0) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
  }
  *(long **)(param_1 + 0xa50) = plVar13 + 3;
  plVar17 = *(long **)(param_1 + 0xa58);
  *(long **)(param_1 + 0xa58) = plVar13;
  if (plVar17 != (long *)0x0) {
    plVar13 = plVar17 + 1;
    do {
      lVar27 = *plVar13;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar10) {
        *plVar13 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  puVar14 = (undefined8 *)0x5e0;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar15 = puVar14 + 3;
  *puVar14 = &PTR_FUN_110bd2300;
  FUN_10a249db0(puVar15,param_1);
  *(undefined8 **)(param_1 + 0xa60) = puVar15;
  plVar13 = *(long **)(param_1 + 0xa68);
  *(undefined8 **)(param_1 + 0xa68) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  puVar14 = (undefined8 *)0x20;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &PTR_DAT_110bd2350;
  puVar14[3] = 0;
  *(undefined8 **)(param_1 + 0xa70) = puVar14 + 3;
  plVar13 = *(long **)(param_1 + 0xa78);
  *(undefined8 **)(param_1 + 0xa78) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  puVar14 = (undefined8 *)0x38;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar15 = puVar14 + 3;
  *puVar14 = &PTR_DAT_110bd23a0;
  FUN_10a9df220(puVar15,param_1);
  *(undefined8 **)(param_1 + 0xa90) = puVar15;
  plVar13 = *(long **)(param_1 + 0xa98);
  *(undefined8 **)(param_1 + 0xa98) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  puVar14 = (undefined8 *)0xd0;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar15 = puVar14 + 3;
  *puVar14 = &PTR_DAT_110bd23f0;
  FUN_10a260de4(puVar15,param_1);
  *(undefined8 **)(param_1 + 0xaa0) = puVar15;
  plVar13 = *(long **)(param_1 + 0xaa8);
  *(undefined8 **)(param_1 + 0xaa8) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  puVar14 = (undefined8 *)0x78;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar15 = puVar14 + 3;
  *puVar14 = &PTR_DAT_110bd2440;
  FUN_10a5982c4(puVar15,param_1);
  *(undefined8 **)(param_1 + 0xb70) = puVar15;
  plVar13 = *(long **)(param_1 + 0xb78);
  *(undefined8 **)(param_1 + 0xb78) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  puVar14 = (undefined8 *)0xc0;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar15 = puVar14 + 3;
  *puVar14 = &PTR_DAT_110bd2490;
  FUN_10a268998(puVar15,param_1);
  *(undefined8 **)(param_1 + 0xb80) = puVar15;
  plVar13 = *(long **)(param_1 + 0xb88);
  *(undefined8 **)(param_1 + 0xb88) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  puVar14 = (undefined8 *)0xb0;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &PTR_DAT_110bd24e0;
  puVar23 = puVar14 + 3;
  *puVar23 = &PTR_DAT_110b17898;
  puVar14[4] = 0;
  puVar14[5] = 0;
  FUN_10a3f840c(puVar14 + 6);
  FUN_10a03c0d0(puVar14 + 10);
  FUN_10a03e114(puVar14 + 0xe);
  *puVar23 = &PTR_DAT_110c381e8;
  puVar14[6] = &PTR_FUN_110c38258;
  puVar14[10] = &PTR_DAT_110c38280;
  puVar14[0xe] = &PTR_DAT_110c382a8;
  puVar15 = (undefined8 *)0x2b0;
  __Znwm();
  plVar13 = puVar15 + 1;
  *plVar13 = 0;
  puVar15[2] = 0;
  ppuVar16 = (undefined **)(puVar15 + 3);
  *puVar15 = &PTR_FUN_110b3f3d8;
  FUN_109d20224(ppuVar16,&UNK_10f655feb,0x28);
  puVar14[0x12] = ppuVar16;
  puVar14[0x13] = puVar15;
  do {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar10) {
      *plVar13 = *plVar13 + 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  plStack_b0 = (long *)0x0;
  plStack_a8 = (long *)0x0;
  ppuStack_98 = (undefined **)&UNK_109896774;
  ppuStack_90 = &PTR_DAT_110b17068;
  puVar18 = (undefined8 *)0xd0;
  ppuStack_a0 = ppuVar16;
  ppuStack_88 = ppuVar16;
  puStack_80 = puVar15;
  __Znwm();
  puVar18[1] = 0;
  puVar18[2] = 0;
  puVar15 = puVar18 + 3;
  *puVar18 = &PTR_DAT_110ae90f0;
  func_0x000109d18d1c(puVar15,&UNK_10f656014,0x22,&ppuStack_a0);
  puVar14[0x14] = puVar15;
  puVar14[0x15] = puVar18;
  func_0x0001092ba41c(&ppuStack_a0);
  FUN_10a5ae998(puVar14[7],&PTR_DAT_110bd3150,param_1,puVar14 + 6);
  FUN_10a5ae998(puVar14[0xb],&PTR_DAT_110b9f988,param_1,puVar14 + 10);
  FUN_10a5ae998(puVar14[0xf],&PTR_DAT_110b9fab0,param_1,puVar14 + 0xe);
  *(undefined8 **)(param_1 + 0xab0) = puVar23;
  plVar13 = *(long **)(param_1 + 0xab8);
  *(undefined8 **)(param_1 + 0xab8) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  puVar14 = (undefined8 *)0x158;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &PTR_FUN_110bd2530;
  puVar14[6] = 0;
  puVar14[5] = 0;
  puVar14[8] = 0;
  puVar14[7] = 0;
  puVar14[10] = 0;
  puVar14[9] = 0;
  puVar14[0xc] = 0;
  puVar14[0xb] = 0;
  puVar14[0xe] = 0;
  puVar14[0xd] = 0;
  puVar14[0x10] = 0;
  puVar14[0xf] = 0;
  puVar14[0x12] = 0;
  puVar14[0x11] = 0;
  puVar14[0x14] = 0;
  puVar14[0x13] = 0;
  puVar14[0x16] = 0;
  puVar14[0x15] = 0;
  puVar14[0x18] = 0;
  puVar14[0x17] = 0;
  puVar14[0x1a] = 0;
  puVar14[0x19] = 0;
  puVar14[0x1c] = 0;
  puVar14[0x1b] = 0;
  puVar14[0x1e] = 0;
  puVar14[0x1d] = 0;
  puVar14[0x20] = 0;
  puVar14[0x1f] = 0;
  puVar14[4] = 0;
  puVar14[3] = 0;
  puVar14[0x22] = 0;
  puVar14[0x21] = 0;
  puVar14[0x24] = 0;
  puVar14[0x23] = 0;
  puVar14[0x26] = 0;
  puVar14[0x25] = 0;
  puVar14[0x28] = 0;
  puVar14[0x27] = 0;
  puVar14[0x2a] = 0;
  puVar14[0x29] = 0;
  *(undefined4 *)(puVar14 + 7) = 0x3f800000;
  puVar14[9] = 0;
  puVar14[8] = 0;
  puVar14[0xb] = 0;
  puVar14[10] = 0;
  *(undefined4 *)(puVar14 + 0xc) = 0x3f800000;
  puVar14[0xe] = 0;
  puVar14[0xd] = 0;
  puVar14[0x10] = 0;
  puVar14[0xf] = 0;
  *(undefined4 *)(puVar14 + 0x11) = 0x3f800000;
  puVar14[0x13] = 0;
  puVar14[0x12] = 0;
  puVar14[0x15] = 0;
  puVar14[0x14] = 0;
  *(undefined4 *)(puVar14 + 0x16) = 0x3f800000;
  puVar14[0x18] = 0;
  puVar14[0x17] = 0;
  puVar14[0x1a] = 0;
  puVar14[0x19] = 0;
  *(undefined4 *)(puVar14 + 0x1b) = 0x3f800000;
  puVar14[0x1d] = 0;
  puVar14[0x1c] = 0;
  puVar14[0x1f] = 0;
  puVar14[0x1e] = 0;
  *(undefined4 *)(puVar14 + 0x20) = 0x3f800000;
  puVar14[0x22] = 0;
  puVar14[0x21] = 0;
  puVar14[0x24] = 0;
  puVar14[0x23] = 0;
  puVar14[0x26] = 0;
  puVar14[0x25] = 0;
  puVar14[0x27] = 0;
  *(undefined4 *)(puVar14 + 0x28) = 0x3f800000;
  *(undefined1 *)(puVar14 + 0x2a) = 1;
  *(undefined8 **)(param_1 + 0xad0) = puVar14 + 3;
  plVar13 = *(long **)(param_1 + 0xad8);
  *(undefined8 **)(param_1 + 0xad8) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  puVar14 = (undefined8 *)0x20;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &PTR_FUN_110bd2580;
  *(undefined8 **)(param_1 + 0xae0) = puVar14 + 3;
  plVar13 = *(long **)(param_1 + 0xae8);
  *(undefined8 **)(param_1 + 0xae8) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  puVar14 = (undefined8 *)0x50;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &PTR_DAT_110bd25d0;
  puVar14[8] = 0;
  puVar14[7] = 0;
  puVar14[9] = 0;
  puVar14[6] = 0;
  puVar14[5] = 0;
  puVar14[4] = 0;
  puVar14[3] = 0;
  *(undefined4 *)(puVar14 + 7) = 0x3f800000;
  *(undefined1 *)((long)puVar14 + 0x49) = 1;
  *(undefined8 **)(param_1 + 0xaf0) = puVar14 + 3;
  plVar13 = *(long **)(param_1 + 0xaf8);
  *(undefined8 **)(param_1 + 0xaf8) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  puVar14 = (undefined8 *)0x18;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &PTR_DAT_110bd2620;
  FUN_10a3f761c(param_1 + 0xbb0);
  plVar13 = (long *)0x70;
  __Znwm();
  *plVar13 = param_1;
  plVar13[2] = 0;
  plVar13[1] = 0;
  plVar13[4] = 0;
  plVar13[3] = 0;
  plVar13[6] = 0;
  plVar13[5] = 0;
  plVar13[7] = 0x8000000040;
  plVar13[9] = 0;
  plVar13[8] = (long)(plVar13 + 9);
  plVar13[0xd] = 0;
  plVar13[0xc] = 0;
  plVar13[10] = 0;
  plVar13[0xb] = (long)(plVar13 + 0xc);
  func_0x00010a3ed0c8(param_1 + 0xbc8);
  uVar12 = 0x60;
  __Znwm();
  FUN_10a772ddc();
  puVar14 = (undefined8 *)0x20;
  __Znwm();
  *puVar14 = &PTR_FUN_110bd2690;
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar14[3] = uVar12;
  *(undefined8 *)(param_1 + 0xb90) = uVar12;
  plVar13 = *(long **)(param_1 + 0xb98);
  *(undefined8 **)(param_1 + 0xb98) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  uVar12 = 0x30;
  __Znwm();
  FUN_10a9efb10();
  plVar13 = *(long **)(param_1 + 0xba0);
  *(undefined8 *)(param_1 + 0xba0) = uVar12;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  plVar13 = (long *)0x48;
  __Znwm();
  plVar17 = *(long **)(*(long *)(param_1 + 0x100) + 0x1c8);
  (**(code **)(*plVar17 + 0x28))();
  lVar27 = *plVar17;
  lVar28 = plVar17[1];
  if (lVar28 == 0) {
    *plVar13 = lVar27;
    plVar13[1] = 0;
  }
  else {
    plVar17 = (long *)(lVar28 + 0x10);
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = *plVar17 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    *plVar13 = lVar27;
    plVar13[1] = lVar28;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = *plVar17 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  *(undefined4 *)(plVar13 + 8) = 0;
  plVar13[5] = 0;
  plVar13[4] = 0;
  plVar13[7] = 0;
  plVar13[6] = 0;
  plVar13[3] = 0;
  plVar13[2] = 0;
  plVar17 = (long *)0x20;
  plStack_b0 = plVar13;
  __Znwm();
  *plVar17 = (long)&PTR_DAT_110bd26f0;
  plVar17[1] = 0;
  plVar17[2] = 0;
  plVar17[3] = (long)plVar13;
  plStack_a8 = plVar17;
  if (lVar28 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar28);
  }
  FUN_10a9efbe4(*(long *)(param_1 + 0xba0) + 8,&plStack_b0);
  puVar14 = (undefined8 *)0x70;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &PTR_FUN_110c372e8;
  *(undefined4 *)(puVar14 + 3) = 0;
  puVar14[5] = 0;
  puVar14[4] = 0;
  puVar14[7] = 0;
  puVar14[6] = 0;
  *(undefined4 *)((long)puVar14 + 0x44) = 0xffffffff;
  puVar14[10] = 0;
  puVar14[9] = 0;
  puVar14[0xc] = 0;
  puVar14[0xb] = 0;
  *(undefined4 *)(puVar14 + 0xd) = 0x3f800000;
  FUN_10a3f75f4(param_1 + 0xba8);
  uVar12 = 0x128;
  __Znwm();
  FUN_10a79a854();
  puVar14 = (undefined8 *)0x20;
  __Znwm();
  *puVar14 = &PTR_FUN_110bd2768;
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar14[3] = uVar12;
  *(undefined8 *)(param_1 + 3000) = uVar12;
  plVar13 = *(long **)(param_1 + 0xbc0);
  *(undefined8 **)(param_1 + 0xbc0) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  (**(code **)(**(long **)(*(long *)(param_1 + 0x100) + 0x1c8) + 0x60))();
  uVar12 = 0x78;
  __Znwm();
  FUN_10a259904();
  lVar27 = *(long *)(param_1 + 0xc48);
  *(undefined8 *)(param_1 + 0xc48) = uVar12;
  if (lVar27 != 0) {
    func_0x00010a3f775c();
  }
  uVar12 = 0x198;
  __Znwm();
  FUN_10a77fa24();
  plVar13 = *(long **)(param_1 + 0xc50);
  *(undefined8 *)(param_1 + 0xc50) = uVar12;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  uVar12 = 0xc0;
  __Znwm();
  FUN_10a7911e0();
  plVar13 = *(long **)(param_1 + 0xc60);
  *(undefined8 *)(param_1 + 0xc60) = uVar12;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  plVar13 = (long *)0xc8;
  __Znwm();
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&PTR_DAT_110bd27c8;
  plVar29 = plVar13 + 3;
  *plVar29 = 0;
  plVar13[4] = 0;
  plVar13[5] = 0;
  *(undefined4 *)(plVar13 + 6) = 0x3fff3fff;
  plVar13[8] = 0;
  plVar13[9] = 0;
  plVar13[7] = 0;
  *(undefined4 *)(plVar13 + 10) = 0x3fff3fff;
  plVar13[0xc] = 0;
  plVar13[0xd] = 0;
  plVar13[0xb] = 0;
  *(undefined4 *)(plVar13 + 0xe) = 0x3fff3fff;
  plVar13[0x10] = 0;
  plVar13[0xf] = 0;
  plVar13[0x12] = 0;
  plVar13[0x11] = 0;
  *(undefined4 *)(plVar13 + 0x13) = 0x3fff3fff;
  plVar13[0x14] = 0;
  plVar13[0x15] = 0;
  plVar13[0x16] = 0;
  *(undefined4 *)(plVar13 + 0x17) = 0x3fff3fff;
  plVar13[0x18] = param_1;
  *(long **)(param_1 + 0xcf8) = plVar29;
  plVar17 = *(long **)(param_1 + 0xd00);
  *(long **)(param_1 + 0xd00) = plVar13;
  if (plVar17 != (long *)0x0) {
    plVar13 = plVar17 + 1;
    do {
      lVar27 = *plVar13;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar10) {
        *plVar13 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
    plVar13 = *(long **)(param_1 + 0xd00);
    plVar29 = *(long **)(param_1 + 0xcf8);
  }
  puVar14 = (undefined8 *)0x40;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &PTR_DAT_110bd2828;
  if (plVar13 == (long *)0x0) {
    puVar14[3] = &PTR_FUN_110c35228;
    puVar14[4] = 0;
    puVar14[5] = 0;
    puVar14[6] = plVar29;
    puVar14[7] = 0;
  }
  else {
    plVar17 = plVar13 + 1;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = *plVar17 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    puVar14[3] = &PTR_FUN_110c35228;
    puVar14[4] = 0;
    puVar14[5] = 0;
    puVar14[6] = plVar29;
    puVar14[7] = plVar13;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = *plVar17 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  *(undefined8 **)(param_1 + 0xce8) = puVar14 + 3;
  plVar13 = *(long **)(param_1 + 0xcf0);
  *(undefined8 **)(param_1 + 0xcf0) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    FUN_10a3ca004();
    ppuVar16 = &PTR___tlv_bootstrap_11340de28;
    (*(code *)PTR___tlv_bootstrap_11340de28)();
    ppuStack_a0 = (undefined **)&UNK_10f63b699;
    ppuStack_98 = (undefined **)0x28;
    if (*ppuVar16 == (undefined *)0x0) {
LAB_10a3cca7c:
      ppuStack_98 = (undefined **)0x28;
      ppuStack_a0 = (undefined **)&UNK_10f63b699;
      FUN_10a0edfc4(&ppuStack_a0);
LAB_10a3cca90:
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10a3cca94);
      (*pcVar11)();
    }
    if (*(long *)(*ppuVar16 + 0x10) != 0) {
      iVar8 = *(int *)(*(long *)(param_1 + 0x100) + 0x2a8);
      FUN_10a3ca004();
      ppuStack_a0 = (undefined **)&UNK_10f63b699;
      ppuStack_98 = (undefined **)0x28;
      if (*ppuVar16 == (undefined *)0x0) goto LAB_10a3cca7c;
      *(bool *)(*(long *)(*ppuVar16 + 0x10) + 0x18) = iVar8 - 7U < 2;
    }
  }
  puVar14 = (undefined8 *)0xa8;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar15 = puVar14 + 3;
  *puVar14 = &PTR_DAT_110bd2878;
  FUN_10a03e190(puVar15,param_1);
  *(undefined8 **)(param_1 + 0xb20) = puVar15;
  plVar13 = *(long **)(param_1 + 0xb28);
  *(undefined8 **)(param_1 + 0xb28) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  puVar14 = (undefined8 *)0xb0;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar15 = puVar14 + 3;
  *puVar14 = &PTR_DAT_110bd28c8;
  FUN_10a1159bc(puVar15,param_1);
  *(undefined8 **)(param_1 + 0xb38) = puVar15;
  plVar13 = *(long **)(param_1 + 0xb40);
  *(undefined8 **)(param_1 + 0xb40) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  puVar14 = (undefined8 *)0x20;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar15 = puVar14 + 3;
  *puVar14 = &PTR_DAT_110bd2918;
  FUN_10a8fb03c(puVar15,param_1);
  *(undefined8 **)(param_1 + 0xb48) = puVar15;
  plVar13 = *(long **)(param_1 + 0xb50);
  *(undefined8 **)(param_1 + 0xb50) = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  puVar15 = (undefined8 *)0x18;
  __Znwm();
  puVar15[2] = 0;
  puVar15[1] = 0;
  *puVar15 = puVar15 + 1;
  func_0x00010a3f74ac(param_1 + 0xb58);
  plVar17 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar29 = plStack_a8 + 1;
    do {
      lVar27 = *plVar29;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar10) {
        *plVar29 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  FUN_10a1d33b4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppuVar19;
  }
  ___stack_chk_fail();
  func_0x000104c4f944(plVar13);
  __ZdlPv(puVar14);
  FUN_10a1d33b4(apuStack_e0);
  __Unwind_Resume();
  pcStack_e8 = FUN_10a3cce0c;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f0 = &stack0xfffffffffffffff0;
  *(undefined1 *)(ppuVar19 + 1) = 0;
  ppuVar19[4] = (undefined8 *)0x0;
  ppuVar19[3] = (undefined8 *)0x0;
  *ppuVar19 = &PTR_FUN_110bd04e8;
  ppuVar19[2] = &PTR_DAT_110bd0540;
  *(undefined2 *)(ppuVar19 + 5) = 0;
  ppuStack_168 = ppuVar19 + 6;
  ppuVar19[7] = (undefined8 *)0x0;
  *ppuStack_168 = (undefined8 *)0x0;
  ppuVar19[9] = (undefined8 *)0x0;
  ppuVar19[8] = (undefined8 *)0x0;
  ppuVar19[0xb] = (undefined8 *)0x0;
  ppuVar19[10] = (undefined8 *)0x0;
  ppuVar19[0xd] = (undefined8 *)0x0;
  ppuVar19[0xc] = (undefined8 *)0x0;
  ppuVar19[0xf] = (undefined8 *)0x0;
  ppuVar19[0xe] = (undefined8 *)0x3f800000;
  ppuVar19[0x11] = (undefined8 *)0x0;
  ppuVar19[0x10] = (undefined8 *)0x3f80000000000000;
  ppuVar19[0x13] = (undefined8 *)0x3f800000;
  ppuVar19[0x12] = (undefined8 *)0x0;
  ppuVar19[0x15] = (undefined8 *)0x3f80000000000000;
  ppuVar19[0x14] = (undefined8 *)0x0;
  ppuVar19[0x17] = (undefined8 *)0x0;
  ppuVar19[0x16] = (undefined8 *)0x0;
  ppuVar19[0x19] = (undefined8 *)0x0;
  ppuVar19[0x18] = (undefined8 *)0x3f800000;
  ppuVar19[0x1b] = (undefined8 *)0x0;
  ppuVar19[0x1a] = (undefined8 *)0x3f80000000000000;
  ppuVar19[0x1d] = (undefined8 *)0x3f800000;
  ppuVar19[0x1c] = (undefined8 *)0x0;
  ppuVar19[0x1f] = (undefined8 *)0x3f80000000000000;
  ppuVar19[0x1e] = (undefined8 *)0x0;
  puVar14 = (undefined8 *)*puVar15;
  ppuVar19[0x21] = (undefined8 *)puVar15[1];
  ppuVar19[0x20] = puVar14;
  puVar15[1] = 0;
  *puVar15 = 0;
  *(undefined1 *)(ppuVar19 + 0x22) = 0;
  *(undefined1 *)(ppuVar19 + 0x2b) = 0;
  *(undefined1 *)(ppuVar19 + 0x2c) = 0;
  *(undefined1 *)(ppuVar19 + 0x35) = 0;
  *(undefined1 *)(ppuVar19 + 0x36) = 0;
  *(undefined1 *)(ppuVar19 + 0x3f) = 0;
  ppuVar19[0x40] = &PTR_FUN_110bf75c0;
  ppuVar19[0x41] = ppuVar19;
  *(undefined4 *)(ppuVar19 + 0x42) = 0;
  *(undefined1 *)((long)ppuVar19 + 0x214) = 0;
  ppuVar19[0x45] = (undefined8 *)0x0;
  ppuVar19[0x44] = (undefined8 *)0x0;
  ppuVar19[0x43] = (undefined8 *)0x0;
  ppuStack_190 = ppuVar19 + 0x4b;
  *(undefined4 *)(ppuVar19 + 0x4f) = 0;
  ppuVar19[0x4c] = (undefined8 *)0x0;
  *ppuStack_190 = (undefined8 *)0x0;
  ppuVar19[0x4e] = (undefined8 *)0x0;
  ppuVar19[0x4d] = (undefined8 *)0x0;
  ppuVar19[0x50] = ppuVar19;
  *(undefined4 *)(ppuVar19 + 0x51) = 0;
  *(undefined1 *)((long)ppuVar19 + 0x28c) = 0;
  ppuVar19[0x52] = (undefined8 *)0x32aaaba7;
  ppuVar19[0x59] = (undefined8 *)0x0;
  ppuVar19[0x56] = (undefined8 *)0x0;
  ppuVar19[0x55] = (undefined8 *)0x0;
  ppuVar19[0x58] = (undefined8 *)0x0;
  ppuVar19[0x57] = (undefined8 *)0x0;
  ppuVar19[0x54] = (undefined8 *)0x0;
  ppuVar19[0x53] = (undefined8 *)0x0;
  ppuVar19[0x5a] = (undefined8 *)0x32aaaba7;
  ppuVar19[0x5c] = (undefined8 *)0x0;
  ppuVar19[0x5b] = (undefined8 *)0x0;
  ppuVar19[0x5e] = (undefined8 *)0x0;
  ppuVar19[0x5d] = (undefined8 *)0x0;
  ppuVar19[0x60] = (undefined8 *)0x0;
  ppuVar19[0x5f] = (undefined8 *)0x0;
  ppuVar19[0x61] = (undefined8 *)0x0;
  ppuVar19[0x62] = (undefined8 *)0x32aaaba7;
  ppuVar19[100] = (undefined8 *)0x0;
  ppuVar19[99] = (undefined8 *)0x0;
  ppuVar19[0x66] = (undefined8 *)0x0;
  ppuVar19[0x65] = (undefined8 *)0x0;
  ppuVar19[0x68] = (undefined8 *)0x0;
  ppuVar19[0x67] = (undefined8 *)0x0;
  ppuVar19[0x69] = (undefined8 *)0x0;
  ppuVar19[0x6a] = (undefined8 *)0x32aaaba7;
  ppuVar19[0x6c] = (undefined8 *)0x0;
  ppuVar19[0x6b] = (undefined8 *)0x0;
  ppuVar19[0x6e] = (undefined8 *)0x0;
  ppuVar19[0x6d] = (undefined8 *)0x0;
  ppuVar19[0x70] = (undefined8 *)0x0;
  ppuVar19[0x6f] = (undefined8 *)0x0;
  ppuVar19[0x71] = (undefined8 *)0x0;
  ppuVar19[0x72] = (undefined8 *)0x32aaaba7;
  ppuVar19[0x79] = (undefined8 *)0x0;
  ppuVar19[0x76] = (undefined8 *)0x0;
  ppuVar19[0x75] = (undefined8 *)0x0;
  ppuVar19[0x78] = (undefined8 *)0x0;
  ppuVar19[0x77] = (undefined8 *)0x0;
  ppuVar19[0x74] = (undefined8 *)0x0;
  ppuVar19[0x73] = (undefined8 *)0x0;
  ppuVar19[0x7a] = (undefined8 *)0x32aaaba7;
  ppuVar19[0x81] = (undefined8 *)0x0;
  ppuVar19[0x7e] = (undefined8 *)0x0;
  ppuVar19[0x7d] = (undefined8 *)0x0;
  ppuVar19[0x80] = (undefined8 *)0x0;
  ppuVar19[0x7f] = (undefined8 *)0x0;
  ppuVar19[0x7c] = (undefined8 *)0x0;
  ppuVar19[0x7b] = (undefined8 *)0x0;
  ppuVar19[0x82] = (undefined8 *)0x32aaaba7;
  ppuVar19[0x8d] = (undefined8 *)0x0;
  ppuVar19[0x8a] = (undefined8 *)0x0;
  ppuVar19[0x89] = (undefined8 *)0x0;
  ppuVar19[0x8c] = (undefined8 *)0x0;
  ppuVar19[0x8b] = (undefined8 *)0x0;
  ppuVar19[0x86] = (undefined8 *)0x0;
  ppuVar19[0x85] = (undefined8 *)0x0;
  ppuVar19[0x88] = (undefined8 *)0x0;
  ppuVar19[0x87] = (undefined8 *)0x0;
  ppuVar19[0x84] = (undefined8 *)0x0;
  ppuVar19[0x83] = (undefined8 *)0x0;
  *(undefined4 *)(ppuVar19 + 0x8e) = 0x3f800000;
  ppuStack_170 = ppuVar19 + 0x8f;
  ppuStack_178 = ppuVar19 + 0x96;
  ppuVar19[0x95] = (undefined8 *)0x0;
  ppuVar19[0x92] = (undefined8 *)0x0;
  ppuVar19[0x91] = (undefined8 *)0x0;
  ppuVar19[0x94] = (undefined8 *)0x0;
  ppuVar19[0x93] = (undefined8 *)0x0;
  ppuVar19[0x90] = (undefined8 *)0x0;
  *ppuStack_170 = (undefined8 *)0x0;
  ppuVar19[0x96] = ppuStack_178;
  ppuVar19[0x97] = ppuStack_178;
  ppuVar19[0x98] = (undefined8 *)0x0;
  ppuStack_180 = ppuVar19 + 0x99;
  ppuVar19[0x99] = ppuStack_180;
  ppuVar19[0x9a] = ppuStack_180;
  ppuVar22 = ppuVar19 + 0x9f;
  ppuVar19[0x9c] = (undefined8 *)0x0;
  ppuVar19[0x9b] = (undefined8 *)0x0;
  ppuVar19[0x9e] = (undefined8 *)0x0;
  ppuVar19[0x9d] = (undefined8 *)0x0;
  ppuVar19[0x9f] = ppuVar22;
  ppuVar19[0xa0] = ppuVar22;
  ppuVar20 = ppuVar19 + 0xa1;
  ppuVar19[0xa1] = ppuVar20;
  ppuVar19[0xa2] = ppuVar20;
  ppuVar3 = ppuVar19 + 0xa3;
  ppuVar19[0xa3] = ppuVar3;
  ppuVar19[0xa4] = ppuVar3;
  ppuVar4 = ppuVar19 + 0xa5;
  ppuVar19[0xa5] = ppuVar4;
  ppuVar19[0xa6] = ppuVar4;
  ppuVar5 = ppuVar19 + 0xa7;
  ppuVar19[0xa7] = ppuVar5;
  ppuVar19[0xa8] = ppuVar5;
  ppuVar19[0xab] = (undefined8 *)0x0;
  ppuStack_198 = ppuVar19 + 0xa9;
  ppuVar19[0xaa] = (undefined8 *)0x0;
  ppuVar19[0xa9] = (undefined8 *)0x0;
  plVar13 = (long *)0x10;
  ppuStack_188 = ppuVar22;
  __Znwm();
  ppuVar19[0xa9] = plVar13;
  ppuVar19[0xab] = plVar13 + 2;
  *plVar13 = (long)ppuVar5;
  plVar13[1] = 0;
  ppuVar19[0xaa] = plVar13 + 2;
  ppuVar19[0xac] = plVar13;
  ppuVar19[0xad] = plVar13;
  ppuVar19[0xae] = ppuVar5;
  ppuVar19[0xaf] = ppuVar5;
  ppuVar5 = ppuVar19 + 0xb0;
  ppuStack_158 = ppuVar22;
  ppuVar19[0xb0] = (undefined8 *)0x0;
  ppuVar19[0xb2] = (undefined8 *)0x0;
  ppuVar19[0xb1] = (undefined8 *)0x0;
  FUN_10a3f42fc(ppuVar5,2);
  FUN_10a3f448c(ppuVar5,ppuVar19[0xb1],&ppuStack_158,&ppuStack_150,1);
  func_0x00010a3f438c(ppuVar5,0);
  puVar14 = ppuVar19[0xb0];
  lVar28 = (long)ppuVar19[0xb1] - (long)puVar14 >> 3;
  ppuVar19[0xb3] = puVar14;
  lVar27 = 0;
  if (lVar28 != 0) {
    lVar27 = lVar28 + -1;
  }
  puVar15 = puVar14 + -1;
  do {
    if (lVar27 == 0) {
      puVar15 = puVar14;
      if (ppuVar19[0xb1] == puVar14) goto LAB_10a3cd6e0;
      break;
    }
    plVar13 = puVar15 + 2;
    puVar15 = puVar15 + 1;
    lVar27 = lVar27 + -1;
  } while (*plVar13 != 0);
  puVar14 = (undefined8 *)*puVar15;
  ppuVar19[0xb4] = puVar15;
  ppuVar19[0xb5] = puVar14;
  ppuVar19[0xb6] = puVar14;
  ppuVar22 = ppuVar19 + 0xb7;
  ppuStack_158 = ppuVar20;
  ppuVar19[0xb7] = (undefined8 *)0x0;
  ppuVar19[0xb9] = (undefined8 *)0x0;
  ppuVar19[0xb8] = (undefined8 *)0x0;
  FUN_10a3f42fc(ppuVar22,2);
  FUN_10a3f448c(ppuVar22,ppuVar19[0xb8],&ppuStack_158,&ppuStack_150,1);
  func_0x00010a3f438c(ppuVar22,0);
  puVar14 = ppuVar19[0xb7];
  lVar28 = (long)ppuVar19[0xb8] - (long)puVar14 >> 3;
  ppuVar19[0xba] = puVar14;
  lVar27 = 0;
  if (lVar28 != 0) {
    lVar27 = lVar28 + -1;
  }
  puVar15 = puVar14 + -1;
  do {
    if (lVar27 == 0) {
      puVar15 = puVar14;
      if (ppuVar19[0xb8] == puVar14) goto LAB_10a3cd6e0;
      break;
    }
    plVar13 = puVar15 + 2;
    puVar15 = puVar15 + 1;
    lVar27 = lVar27 + -1;
  } while (*plVar13 != 0);
  puVar14 = (undefined8 *)*puVar15;
  ppuVar19[0xbb] = puVar15;
  ppuVar19[0xbc] = puVar14;
  ppuVar19[0xbd] = puVar14;
  ppuVar22 = ppuVar19 + 0xbe;
  ppuStack_158 = ppuVar3;
  ppuVar19[0xbe] = (undefined8 *)0x0;
  ppuVar19[0xc0] = (undefined8 *)0x0;
  ppuVar19[0xbf] = (undefined8 *)0x0;
  FUN_10a3f42fc(ppuVar22,2);
  FUN_10a3f448c(ppuVar22,ppuVar19[0xbf],&ppuStack_158,&ppuStack_150,1);
  func_0x00010a3f438c(ppuVar22,0);
  puVar14 = ppuVar19[0xbe];
  lVar28 = (long)ppuVar19[0xbf] - (long)puVar14 >> 3;
  ppuVar19[0xc1] = puVar14;
  lVar27 = 0;
  if (lVar28 != 0) {
    lVar27 = lVar28 + -1;
  }
  puVar15 = puVar14 + -1;
  do {
    if (lVar27 == 0) {
      puVar15 = puVar14;
      if (ppuVar19[0xbf] == puVar14) goto LAB_10a3cd6e0;
      break;
    }
    plVar13 = puVar15 + 2;
    puVar15 = puVar15 + 1;
    lVar27 = lVar27 + -1;
  } while (*plVar13 != 0);
  puVar14 = (undefined8 *)*puVar15;
  ppuVar19[0xc2] = puVar15;
  ppuVar19[0xc3] = puVar14;
  ppuVar19[0xc4] = puVar14;
  ppuVar22 = ppuVar19 + 0xc5;
  ppuStack_158 = ppuVar4;
  ppuStack_150 = ppuVar20;
  ppuVar19[0xc5] = (undefined8 *)0x0;
  ppuVar19[199] = (undefined8 *)0x0;
  ppuVar19[0xc6] = (undefined8 *)0x0;
  FUN_10a3f42fc(ppuVar22,3);
  FUN_10a3f448c(ppuVar22,ppuVar19[0xc6],&ppuStack_158,&lStack_148,2);
  func_0x00010a3f438c(ppuVar22,0);
  puVar14 = ppuVar19[0xc5];
  lVar28 = (long)ppuVar19[0xc6] - (long)puVar14 >> 3;
  ppuVar19[200] = puVar14;
  lVar27 = 0;
  if (lVar28 != 0) {
    lVar27 = lVar28 + -1;
  }
  puVar15 = puVar14 + -1;
  do {
    if (lVar27 == 0) {
      puVar15 = puVar14;
      if (ppuVar19[0xc6] == puVar14) goto LAB_10a3cd6e0;
      break;
    }
    plVar13 = puVar15 + 2;
    puVar15 = puVar15 + 1;
    lVar27 = lVar27 + -1;
  } while (*plVar13 != 0);
  puVar14 = (undefined8 *)*puVar15;
  ppuVar19[0xc9] = puVar15;
  ppuVar19[0xca] = puVar14;
  ppuVar19[0xcb] = puVar14;
  ppuVar19[0xcc] = ppuVar19;
  ppuVar19[0xcd] = ppuVar19 + 0xd0;
  ppuVar19[0xcf] = (undefined8 *)0x20;
  ppuVar19[0xce] = (undefined8 *)0x0;
  FUN_10a3ec438(ppuVar19 + 0xf0);
  ppuVar19[0xf6] = (undefined8 *)0x0;
  ppuVar19[0xf5] = (undefined8 *)0x0;
  ppuVar19[0xf4] = ppuVar19 + 0xf5;
  FUN_10a3ec438(ppuVar19 + 0xf7);
  ppuVar19[0xfd] = (undefined8 *)0x0;
  ppuVar19[0xfc] = (undefined8 *)0x0;
  ppuVar19[0xfb] = ppuVar19 + 0xfc;
  FUN_10a3ec438(ppuVar19 + 0xfe);
  ppuVar19[0x104] = (undefined8 *)0x0;
  ppuVar19[0x103] = (undefined8 *)0x0;
  ppuVar19[0x102] = ppuVar19 + 0x103;
  ppuStack_198 = ppuVar19 + 0x105;
  ppuVar19[0x188] = (undefined8 *)0x0;
  ppuVar19[0x187] = (undefined8 *)0x0;
  _bzero(ppuStack_198,0x401);
  ppuVar19[0x186] = ppuVar19 + 0x187;
  ppuVar22 = ppuVar19 + 0x189;
  ppuStack_1a0 = ppuVar19 + 0x199;
  ppuVar19[0x18a] = (undefined8 *)0x0;
  *ppuVar22 = (undefined8 *)0x0;
  ppuVar19[0x18c] = (undefined8 *)0x0;
  ppuVar19[0x18b] = (undefined8 *)0x0;
  ppuVar19[0x18e] = (undefined8 *)0x0;
  ppuVar19[0x18d] = (undefined8 *)0x0;
  ppuVar19[400] = (undefined8 *)0x0;
  ppuVar19[399] = (undefined8 *)0x0;
  ppuVar19[0x192] = (undefined8 *)0x0;
  ppuVar19[0x191] = (undefined8 *)0x0;
  ppuVar19[0x194] = (undefined8 *)0x0;
  ppuVar19[0x193] = (undefined8 *)0x0;
  *(undefined1 *)(ppuVar19 + 0x195) = 0;
  ppuVar19[0x197] = (undefined8 *)0x0;
  ppuVar19[0x196] = (undefined8 *)0x0;
  *(undefined4 *)(ppuVar19 + 0x198) = 0;
  ppuVar19[0x19a] = (undefined8 *)0x0;
  *ppuStack_1a0 = (undefined8 *)0x0;
  ppuVar19[0x19c] = (undefined8 *)0x0;
  ppuVar19[0x19b] = (undefined8 *)0x0;
  ppuVar19[0x19e] = (undefined8 *)0x0;
  ppuVar19[0x19d] = (undefined8 *)0x0;
  ppuVar19[0x1a0] = (undefined8 *)0x0;
  ppuVar19[0x19f] = (undefined8 *)0x0;
  *(undefined8 *)((long)ppuVar19 + 0xd0c) = 0;
  *(undefined8 *)((long)ppuVar19 + 0xd04) = 0;
  *(undefined2 *)((long)ppuVar19 + 0xd14) = 0x40;
  *(undefined4 *)(ppuVar19 + 0x1a3) = 0;
  *(undefined1 *)((long)ppuVar19 + 0xd1c) = 0;
  ppuVar19[0x1ac] = (undefined8 *)0x0;
  ppuVar19[0x1ab] = (undefined8 *)0x0;
  *(undefined8 *)((long)ppuVar19 + 0xd46) = 0;
  *(undefined8 *)((long)ppuVar19 + 0xd3e) = 0;
  *(undefined8 *)((long)ppuVar19 + 0xd56) = 0;
  *(undefined8 *)((long)ppuVar19 + 0xd4e) = 0;
  *(undefined8 *)((long)ppuVar19 + 0xd26) = 0;
  *(undefined8 *)((long)ppuVar19 + 0xd1e) = 0;
  *(undefined8 *)((long)ppuVar19 + 0xd36) = 0;
  *(undefined8 *)((long)ppuVar19 + 0xd2e) = 0;
  *(undefined4 *)(ppuVar19 + 0x1ad) = 0x3f800000;
  *(undefined2 *)(ppuVar19 + 0x1ae) = 0;
  *(undefined1 *)((long)ppuVar19 + 0xd72) = 0;
  ppuVar19[0x1af] = (undefined8 *)0x0;
  *(undefined1 *)(ppuVar19 + 0x1b0) = 0;
  ppuVar19[0x1b2] = (undefined8 *)0x0;
  ppuVar19[0x1b1] = (undefined8 *)0x0;
  ppuVar19[0x1b4] = (undefined8 *)0x0;
  ppuVar19[0x1b3] = (undefined8 *)0x0;
  ppuVar19[0x1b6] = (undefined8 *)0x0;
  ppuVar19[0x1b5] = (undefined8 *)0x0;
  ppuVar19[0x1b8] = (undefined8 *)0x0;
  ppuVar19[0x1b7] = (undefined8 *)0x0;
  ppuVar19[0x1ba] = (undefined8 *)0x0;
  ppuVar19[0x1b9] = (undefined8 *)0x0;
  ppuVar19[0x1bc] = (undefined8 *)0x0;
  ppuVar19[0x1bb] = (undefined8 *)0x0;
  ppuVar19[0x1be] = (undefined8 *)0x0;
  ppuVar19[0x1bd] = (undefined8 *)0x0;
  ppuVar19[0x1c0] = (undefined8 *)0x0;
  ppuVar19[0x1bf] = (undefined8 *)0x0;
  ppuVar19[0x1c2] = (undefined8 *)0x0;
  ppuVar19[0x1c1] = (undefined8 *)0x0;
  ppuVar19[0x1c4] = (undefined8 *)0x0;
  ppuVar19[0x1c3] = (undefined8 *)0x0;
  *(undefined8 *)((long)ppuVar19 + 0xe26) = 0;
  ppuVar19[0x1c6] = (undefined8 *)0x4;
  *(undefined4 *)(ppuVar19 + 0x1c7) = 0;
  ppuVar19[0x1cc] = (undefined8 *)0x0;
  *(undefined1 *)(ppuVar19 + 0x1cd) = 0;
  ppuVar19[0x1ca] = (undefined8 *)0x0;
  *(undefined4 *)(ppuVar19 + 0x1cb) = 0;
  ppuVar19[0x1c9] = (undefined8 *)0x0;
  ppuVar19[0x1c8] = (undefined8 *)0x0;
  ppuVar19[0x1cf] = (undefined8 *)0x0;
  ppuVar19[0x1ce] = (undefined8 *)0x0;
  ppuVar19[0x1d1] = (undefined8 *)0x0;
  ppuVar19[0x1d0] = (undefined8 *)0x0;
  ppuVar19[0x1d3] = (undefined8 *)0x0;
  ppuVar19[0x1d2] = (undefined8 *)0x0;
  ppuVar19[0x1d5] = (undefined8 *)0x0;
  ppuVar19[0x1d4] = (undefined8 *)0x0;
  ppuVar19[0x1d6] = (undefined8 *)0x0;
  ppuVar19[0x1cf] = (undefined8 *)FUN_10a3ec56c;
  ppuVar19[0x1d0] = &PTR_DAT_110ae9180;
  ppuVar19[0x1da] = (undefined8 *)0x0;
  ppuVar19[0x1d9] = (undefined8 *)0x0;
  ppuVar19[0x1dc] = (undefined8 *)0x0;
  ppuVar19[0x1db] = (undefined8 *)0x0;
  ppuVar19[0x1de] = (undefined8 *)0x0;
  ppuVar19[0x1dd] = (undefined8 *)0x0;
  ppuVar19[0x1d7] = (undefined8 *)FUN_10a3ec56c;
  ppuVar19[0x1d8] = &PTR_DAT_110ae9180;
  ppuVar19[0x1e4] = (undefined8 *)0x0;
  ppuVar19[0x1e3] = (undefined8 *)0x0;
  ppuVar19[0x1e6] = (undefined8 *)0x0;
  ppuVar19[0x1e5] = (undefined8 *)0x0;
  ppuVar19[0x1e2] = (undefined8 *)0x0;
  ppuVar19[0x1e1] = (undefined8 *)0x0;
  ppuVar19[0x1df] = (undefined8 *)FUN_10a3ec56c;
  ppuVar19[0x1e0] = &PTR_DAT_110ae9180;
  ppuVar19[0x1ec] = (undefined8 *)0x0;
  ppuVar19[0x1eb] = (undefined8 *)0x0;
  ppuVar19[0x1ee] = (undefined8 *)0x0;
  ppuVar19[0x1ed] = (undefined8 *)0x0;
  ppuVar19[0x1ea] = (undefined8 *)0x0;
  ppuVar19[0x1e9] = (undefined8 *)0x0;
  ppuVar19[0x1e7] = (undefined8 *)FUN_10a3ec56c;
  ppuVar19[0x1e8] = &PTR_DAT_110ae9180;
  ppuVar19[0x1ef] = (undefined8 *)0x32aaaba7;
  ppuVar19[0x1fe] = (undefined8 *)0x0;
  ppuVar19[0x1fd] = (undefined8 *)0x0;
  ppuVar19[0x1fc] = (undefined8 *)0x0;
  ppuVar19[0x1fb] = (undefined8 *)0x0;
  ppuVar19[0x1fa] = (undefined8 *)0x0;
  ppuVar19[0x1f9] = (undefined8 *)0x0;
  ppuVar19[0x1f8] = (undefined8 *)0x0;
  ppuVar19[0x1f7] = (undefined8 *)0x0;
  ppuVar19[0x1f6] = (undefined8 *)0x0;
  ppuVar19[0x1f5] = (undefined8 *)0x0;
  ppuVar19[500] = (undefined8 *)0x0;
  ppuVar19[499] = (undefined8 *)0x0;
  ppuVar19[0x1f2] = (undefined8 *)0x0;
  ppuVar19[0x1f1] = (undefined8 *)0x0;
  ppuVar19[0x1f0] = (undefined8 *)0x0;
  ppuVar19[0x1f7] = (undefined8 *)0x10a3ec57c;
  ppuVar19[0x1f8] = &PTR_DAT_110950c70;
  *(undefined1 *)(ppuVar19 + 0x1ff) = 0;
  *(undefined1 *)(ppuVar19 + 0x22a) = 0;
  ppuVar19[0x22f] = (undefined8 *)0x0;
  *(undefined1 *)(ppuVar19 + 0x22e) = 0;
  ppuVar19[0x22d] = (undefined8 *)0x0;
  ppuStack_1a8 = ppuVar19 + 0x22b;
  ppuVar19[0x22c] = (undefined8 *)0x0;
  ppuVar19[0x22b] = (undefined8 *)0x0;
  if (*(int *)((long)ppuVar19[0x20] + 0xc) == 1) {
    *(undefined4 *)(ppuVar19 + 0x4f) = 3;
  }
  FUN_10a3cddf8(ppuVar19);
  lVar27 = 0;
  do {
    ppuVar20 = (undefined8 **)0x98;
    __Znwm();
    ppuVar20[1] = (undefined8 *)0x0;
    ppuVar20[2] = (undefined8 *)0x0;
    *ppuVar20 = &PTR_FUN_110b9a070;
    ppuVar20[0xd] = (undefined8 *)0x0;
    ppuVar20[0xc] = (undefined8 *)0x0;
    ppuVar20[0xf] = (undefined8 *)0x0;
    ppuVar20[0xe] = (undefined8 *)0x0;
    ppuVar20[0x11] = (undefined8 *)0x0;
    ppuVar20[0x10] = (undefined8 *)0x0;
    ppuVar20[0x12] = (undefined8 *)0x0;
    ppuStack_158 = ppuVar20 + 3;
    *ppuStack_158 = &PTR_FUN_110b9a0c0;
    ppuVar20[9] = (undefined8 *)0x0;
    ppuVar20[8] = (undefined8 *)0x0;
    ppuVar20[0xb] = (undefined8 *)0x0;
    ppuVar20[10] = (undefined8 *)0x0;
    ppuVar20[5] = (undefined8 *)0x0;
    ppuVar20[4] = (undefined8 *)0x0;
    ppuVar20[7] = (undefined8 *)0x0;
    ppuVar20[6] = (undefined8 *)0x0;
    *(undefined4 *)(ppuVar20 + 10) = 0x3f800000;
    ppuVar20[0xb] = (undefined8 *)FUN_10a004c4c;
    ppuVar20[0xc] = &PTR_DAT_110ae9180;
    ppuStack_150 = ppuVar20;
    FUN_10a3ce310(ppuVar19 + 0x1b1 + lVar27 * 2,&ppuStack_158);
    ppuVar20 = ppuStack_150;
    if (ppuStack_150 != (undefined8 **)0x0) {
      ppuVar3 = ppuStack_150 + 1;
      do {
        puVar14 = *ppuVar3;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ppuVar3,0x10);
        if (bVar10) {
          *ppuVar3 = (undefined8 *)((long)puVar14 + -1);
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (puVar14 == (undefined8 *)0x0) {
        (*(code *)(*ppuStack_150)[2])(ppuStack_150);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar20);
      }
    }
    lVar27 = lVar27 + 1;
  } while (lVar27 != 10);
  FUN_10a3ce374(ppuVar19,0x17d);
  puVar14 = (undefined8 *)0x58;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar15 = puVar14 + 3;
  *puVar14 = &PTR_FUN_110bd19a8;
  FUN_10a5ae610();
  ppuVar19[0x122] = puVar15;
  plVar13 = ppuVar19[0x123];
  ppuVar19[0x123] = puVar14;
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  *(undefined1 *)((long)ppuVar19 + 0x29) = *(undefined1 *)(ppuVar19[0x20] + 0x52);
  lVar27 = ppuVar19[0x20][0x4c];
  ppuStack_158 = (undefined8 **)&UNK_10f653c20;
  ppuStack_150 = (undefined8 **)0x21;
  if (lVar27 == 0) {
    FUN_10a0edfc4(&ppuStack_158);
LAB_10a3cd6e0:
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x10a3cd6e4);
    (*pcVar11)();
  }
  plVar13 = *(long **)(lVar27 + 0x228);
  (**(code **)(*plVar13 + 0x38))(&ppuStack_160,plVar13,ppuVar19);
  ppuVar20 = ppuStack_160;
  uVar25 = (ulong)*(byte *)((long)ppuVar19 + 0x29);
  if (5 < uVar25) goto LAB_10a3cd6e0;
  ppuStack_160 = (undefined8 **)0x0;
  plVar13 = ppuStack_168[uVar25];
  ppuStack_168[uVar25] = ppuVar20;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
    ppuVar20 = ppuStack_160;
    ppuStack_160 = (undefined8 **)0x0;
    if (ppuVar20 != (undefined8 **)0x0) {
      (*(code *)(*ppuVar20)[1])();
    }
  }
  uVar12 = 0x58;
  __Znwm(0x58);
  FUN_10ad628bc();
  ppuVar20 = ppuVar19 + 0x1a8;
  func_0x00010a3ed14c(ppuVar20,uVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return ppuVar19;
  }
  ___stack_chk_fail();
  ppuStack_168 = ppuVar20;
  __ZdlPv(uVar12);
  ppuVar20 = ppuVar19 + 0x1d0;
  ppuVar3 = ppuVar19 + 0x1d8;
  ppuVar4 = ppuVar19 + 0x1e0;
  ppuVar5 = ppuVar19 + 0x1e8;
  ppuStack_160 = ppuStack_1a8;
  ppuVar6 = ppuVar19 + 0x1f8;
  func_0x00010a2e3118(&ppuStack_160);
  (*(code *)**ppuVar6)(ppuVar6);
  __ZNSt3__15mutexD1Ev(ppuVar19 + 0x1ef);
  (*(code *)**ppuVar5)(ppuVar5);
  (*(code *)**ppuVar4)(ppuVar4);
  (*(code *)**ppuVar3)(ppuVar3);
  (*(code *)**ppuVar20)(ppuVar20);
  if (ppuVar19[0x1c8] != (undefined8 *)0x0) {
    ppuVar19[0x1c9] = ppuVar19[0x1c8];
    __ZdlPv();
  }
  ppuVar21 = ppuVar19 + 0x1c3;
  lVar27 = -0xa0;
  do {
    FUN_10a004cfc(ppuVar21);
    ppuVar21 = ppuVar21 + -2;
    lVar27 = lVar27 + 0x10;
  } while (lVar27 != 0);
  FUN_10a5cf6e4(ppuVar19 + 0x1a9);
  func_0x00010a3ed14c(ppuVar19 + 0x1a8,0);
  FUN_10a3ec58c(ppuVar19 + 0x1a5);
  func_0x00010a3f6208(ppuVar19 + 0x19f);
  func_0x00010a3f7874(ppuVar19 + 0x19d);
  func_0x00010a3f781c(ppuVar19 + 0x19b);
  func_0x00010a3f77c4(ppuStack_1a0);
  func_0x00010a1fec54(ppuVar19 + 0x196);
  FUN_10a3ce434(ppuVar19 + 399);
  func_0x00010a09db64(ppuVar19 + 0x18d);
  plVar13 = ppuVar19[0x18c];
  ppuVar19[0x18c] = (undefined8 *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  FUN_10a3ed8c0(ppuVar19 + 0x18b,0);
  plVar13 = ppuVar19[0x18a];
  ppuVar19[0x18a] = (undefined8 *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  puVar14 = *ppuVar22;
  *ppuVar22 = (undefined8 *)0x0;
  if (puVar14 != (undefined8 *)0x0) {
    func_0x00010a3f775c();
  }
  func_0x00010a3f7714(ppuVar19 + 0x186,ppuVar19[0x187]);
  func_0x00010a05248c(ppuVar19 + 0x17f);
  func_0x00010a05248c(ppuVar19 + 0x17d);
  func_0x00010a05248c(ppuVar19 + 0x17b);
  FUN_10a3f76ec(ppuVar19 + 0x17a,0);
  func_0x00010a3ed0c8(ppuVar19 + 0x179,0);
  func_0x00010a3f7694(ppuVar19 + 0x177);
  FUN_10a3f761c(ppuVar19 + 0x176,0);
  FUN_10a3f75f4(ppuVar19 + 0x175,0);
  plVar13 = ppuVar19[0x174];
  ppuVar19[0x174] = (undefined8 *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  func_0x00010a3f759c(ppuVar19 + 0x172);
  func_0x00010a3f7544(ppuVar19 + 0x170);
  func_0x00010a3f74ec(ppuVar19 + 0x16e);
  func_0x00010a296760(ppuVar19 + 0x16c);
  func_0x00010a3f74ac(ppuVar19 + 0x16b,0);
  func_0x00010a3f7454(ppuVar19 + 0x169);
  func_0x00010a3f73fc(ppuVar19 + 0x167);
  plVar13 = ppuVar19[0x166];
  ppuVar19[0x166] = (undefined8 *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  func_0x00010a3f73a4(ppuVar19 + 0x164);
  func_0x00010a3f734c(ppuVar19 + 0x162);
  func_0x00010a3f72f4(ppuVar19 + 0x160);
  func_0x00010a3f729c(ppuVar19 + 0x15e);
  func_0x00010a3f7244(ppuVar19 + 0x15c);
  func_0x00010a3f71ec(ppuVar19 + 0x15a);
  func_0x00010a3f7194(ppuVar19 + 0x158);
  func_0x00010a3f713c(ppuVar19 + 0x156);
  func_0x00010a3f70e4(ppuVar19 + 0x154);
  func_0x00010a3f708c(ppuVar19 + 0x152);
  func_0x00010a3f7034(ppuVar19 + 0x150);
  func_0x00010a3f6fdc(ppuVar19 + 0x14e);
  func_0x00010a3f6f84(ppuVar19 + 0x14c);
  func_0x00010a3f6f2c(ppuVar19 + 0x14a);
  func_0x00010a3f6ed4(ppuVar19 + 0x148);
  func_0x00010a3ed050(ppuVar19 + 0x147,0);
  plVar13 = ppuVar19[0x146];
  ppuVar19[0x146] = (undefined8 *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  func_0x00010a3f6e7c(ppuVar19 + 0x144);
  func_0x00010a3f6e24(ppuVar19 + 0x142);
  func_0x00010a3f6dcc(ppuVar19 + 0x140);
  func_0x00010a3f6d74(ppuVar19 + 0x13e);
  func_0x00010a3f6d1c(ppuVar19 + 0x13c);
  func_0x00010a3f6cc4(ppuVar19 + 0x13a);
  func_0x00010a3f6c6c(ppuVar19 + 0x138);
  func_0x00010a3f6c14(ppuVar19 + 0x136);
  func_0x00010a3f6bbc(ppuVar19 + 0x134);
  func_0x00010a3f6b64(ppuVar19 + 0x132);
  func_0x00010a3f6b0c(ppuVar19 + 0x130);
  FUN_10a082070(ppuVar19 + 0x12e);
  func_0x00010a3f6ab4(ppuVar19 + 300);
  func_0x00010a3f6a5c(ppuVar19 + 0x12a);
  func_0x00010a3f6a04(ppuVar19 + 0x128);
  func_0x00010a3f69ac(ppuVar19 + 0x126);
  func_0x00010a3f6960(ppuVar19 + 0x125,0);
  plVar13 = ppuVar19[0x124];
  ppuVar19[0x124] = (undefined8 *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  func_0x00010a3f6908(ppuVar19 + 0x122);
  func_0x00010a3f68b0(ppuVar19 + 0x120);
  FUN_10a3ed028(ppuVar19 + 0x11f,0);
  func_0x00010a3f6858(ppuVar19 + 0x11d);
  func_0x00010a3f6800(ppuVar19 + 0x11b);
  func_0x00010a3f67a8(ppuVar19 + 0x119);
  plVar13 = ppuVar19[0x118];
  ppuVar19[0x118] = (undefined8 *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  plVar13 = ppuVar19[0x117];
  ppuVar19[0x117] = (undefined8 *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  func_0x00010a3f6750(ppuVar19 + 0x115);
  func_0x00010a3f66f8(ppuVar19 + 0x113);
  func_0x00010a3f66a0(ppuVar19 + 0x111);
  FUN_10a3f6678(ppuVar19 + 0x110,0);
  FUN_10a3f6520(ppuVar19 + 0x10f,0);
  plVar13 = ppuVar19[0x10e];
  ppuVar19[0x10e] = (undefined8 *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  FUN_10a3f64f8(ppuVar19 + 0x10d,0);
  FUN_10a054c5c(ppuVar19 + 0x10b);
  func_0x00010a3ed08c(ppuVar19 + 0x10a,0);
  func_0x00010a3f64a0(ppuVar19 + 0x108);
  func_0x00010a3f6448(ppuVar19 + 0x106);
  plVar13 = *ppuStack_198;
  *ppuStack_198 = (undefined8 *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  func_0x00010a3ce464(ppuVar19 + 0xfe);
  func_0x00010a3ce49c(ppuVar19 + 0xf7);
  func_0x00010a3ce4d4(ppuVar19 + 0xf0);
  func_0x00010a3bfe08(ppuVar19 + 0xcc);
  FUN_10a3c869c(ppuStack_188);
  ppuStack_160 = ppuVar19 + 0x9c;
  FUN_10a0d80a4(&ppuStack_160);
  FUN_10a3ec714(ppuStack_180);
  func_0x00010a3ec780(ppuStack_178);
  func_0x00010a3ec7ec(ppuVar19 + 0x92);
  func_0x00010a3ec7ec(ppuStack_170);
  func_0x00010a3f6400(ppuVar19 + 0x8a);
  func_0x00010a3ce50c(ppuVar19 + 0x52);
  plVar13 = ppuVar19[0x4e];
  ppuVar19[0x4e] = (undefined8 *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  if (*(char *)((long)ppuVar19 + 0x26f) < '\0') {
    __ZdlPv(*ppuStack_190);
  }
  if (ppuVar19[0x43] != (undefined8 *)0x0) {
    ppuVar19[0x44] = ppuVar19[0x43];
    __ZdlPv();
  }
  if (*(char *)(ppuVar19 + 0x3f) == '\x01') {
    func_0x0001092ba41c(ppuVar19 + 0x36);
  }
  if (*(char *)(ppuVar19 + 0x35) == '\x01') {
    func_0x0001092ba41c(ppuVar19 + 0x2c);
  }
  if (*(char *)(ppuVar19 + 0x2b) == '\x01') {
    func_0x0001092ba41c(ppuVar19 + 0x22);
  }
  FUN_10a3f5e88(ppuVar19 + 0x20);
  lVar28 = 0x58;
  do {
    plVar13 = *(long **)((long)ppuVar19 + lVar28);
    *(undefined8 *)((long)ppuVar19 + lVar28) = 0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    lVar28 = lVar28 + -8;
  } while (lVar28 != 0x28);
  if (ppuVar19[4] != (undefined8 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  ppuVar22 = ppuStack_168;
  __Unwind_Resume();
  pcStack_200 = FUN_10a004c4c;
  ppuStack_1f8 = &PTR_FUN_110b9a0c0;
  pcStack_1b8 = FUN_10a3cddf8;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar21 = ppuVar22;
  ppuStack_210 = ppuVar6;
  ppuStack_208 = ppuVar5;
  ppuStack_1f0 = ppuVar4;
  ppuStack_1e8 = ppuVar3;
  ppuStack_1e0 = ppuVar20;
  lStack_1d8 = lVar27;
  lStack_1d0 = lVar28;
  ppuStack_1c8 = ppuVar19;
  ppuStack_1c0 = &puStack_f0;
  FUN_10a3cf3d8();
  uVar24 = (uint)ppuVar21;
  puVar14 = ppuVar22[0x20];
  __ZNSt3__16thread20hardware_concurrencyEv();
  if (uVar24 < 5) {
    uVar24 = 4;
  }
  puVar23 = (undefined8 *)0xd0;
  __Znwm();
  puVar23[1] = 0;
  puVar23[2] = 0;
  *puVar23 = &PTR_DAT_110ae90f0;
  puVar15 = puVar23 + 3;
  puStack_258 = &UNK_1053a6a3c;
  ppuStack_250 = &PTR_DAT_110ae9180;
  ppuStack_260 = (undefined **)(puVar14 + 0x1d);
  FUN_10a3ee05c(puVar15,&UNK_10f655d63,0x13,uVar24,&ppuStack_260,puVar14 + 0x24);
  func_0x0001092ba41c(&ppuStack_260);
  puStack_2a0 = &UNK_109896774;
  ppuStack_298 = &PTR_DAT_110b17068;
  puStack_2a8 = puVar15;
  puStack_290 = puVar15;
  puStack_288 = puVar23;
  FUN_10a1087d0(ppuVar22 + 0x22,&puStack_2a8);
  func_0x0001092ba41c(&puStack_2a8);
  ppuVar16 = (undefined **)ppuVar22[0x20][2];
  plStack_2b8 = (long *)ppuVar22[0x20][3];
  if (plStack_2b8 != (long *)0x0) {
    plVar13 = plStack_2b8 + 1;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar10) {
        *plVar13 = *plVar13 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar10) {
        *plVar13 = *plVar13 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  ppuStack_2d0 = (undefined **)0x0;
  plStack_2c8 = (long *)0x0;
  puStack_258 = &UNK_109896774;
  ppuStack_250 = &PTR_DAT_110b17068;
  puVar15 = (undefined8 *)0xd0;
  ppuStack_2c0 = ppuVar16;
  ppuStack_260 = ppuVar16;
  ppuStack_248 = ppuVar16;
  plStack_240 = plStack_2b8;
  __Znwm();
  puVar15[2] = 0;
  puVar14 = puVar15 + 3;
  *puVar15 = &PTR_DAT_110ae90f0;
  puVar15[1] = 0;
  func_0x000109d18e28(puVar14,&UNK_10f655d77,0x16,&ppuStack_260,ppuVar16 + 7);
  puStack_2a0 = &UNK_109896774;
  ppuStack_298 = &PTR_DAT_110b17068;
  puStack_2a8 = puVar14;
  puStack_290 = puVar14;
  puStack_288 = puVar15;
  func_0x0001092ba41c(&ppuStack_260);
  plVar13 = plStack_2c8;
  if (plStack_2c8 != (long *)0x0) {
    plVar17 = plStack_2c8 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plStack_2c8 + 0x10))(plStack_2c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  plVar13 = plStack_2b8;
  if (plStack_2b8 != (long *)0x0) {
    plVar17 = plStack_2b8 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  FUN_10a1087d0(ppuVar22 + 0x2c,&puStack_2a8);
  func_0x0001092ba41c(&puStack_2a8);
  plStack_2b0 = (long *)ppuVar22[0x20][0x35];
  if (plStack_2b0 != (long *)0x0) {
    plVar13 = plStack_2b0 + 1;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar10) {
        *plVar13 = *plVar13 + 4;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  FUN_10a30c09c(&ppuStack_2c0);
  if (ppuStack_2c0 != (undefined **)0x0) {
    ppuVar16 = (undefined **)ppuStack_2c0[2];
    plVar13 = (long *)ppuStack_2c0[3];
    ppuStack_2d0 = ppuVar16;
    plStack_2c8 = plVar13;
    if (plVar13 == (long *)0x0) {
      if (ppuVar16 != (undefined **)0x0) goto LAB_10a3ce070;
    }
    else {
      plVar17 = plVar13 + 1;
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar10) {
          *plVar17 = *plVar17 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (ppuVar16 != (undefined **)0x0) {
LAB_10a3ce070:
        ppuStack_2d0 = (undefined **)0x0;
        plStack_2c8 = (long *)0x0;
        uStack_2e0 = 0;
        uStack_2d8 = 0;
        puStack_258 = &UNK_109896774;
        ppuStack_250 = &PTR_DAT_110b17068;
        puVar15 = (undefined8 *)0xd0;
        ppuStack_260 = ppuVar16;
        ppuStack_248 = ppuVar16;
        plStack_240 = plVar13;
        __Znwm();
        puVar15[2] = 0;
        puVar14 = puVar15 + 3;
        *puVar15 = &PTR_DAT_110ae90f0;
        puVar15[1] = 0;
        FUN_10a3ee05c(puVar14,&UNK_10f655d8e,0x10,1,&ppuStack_260,&plStack_2b0);
        puStack_2a0 = &UNK_109896774;
        ppuStack_298 = &PTR_DAT_110b17068;
        puStack_2a8 = puVar14;
        puStack_290 = puVar14;
        puStack_288 = puVar15;
        func_0x0001092ba41c(&ppuStack_260);
        plVar13 = plStack_2b8;
        if (plStack_2b8 != (long *)0x0) {
          plVar17 = plStack_2b8 + 1;
          do {
            lVar27 = *plVar17;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar10) {
              *plVar17 = lVar27 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar27 == 0) {
            (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        goto LAB_10a3ce198;
      }
      do {
        lVar27 = *plVar17;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar10) {
          *plVar17 = lVar27 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar27 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
  }
  plVar13 = plStack_2b8;
  if (plStack_2b8 != (long *)0x0) {
    plVar17 = plStack_2b8 + 1;
    do {
      lVar27 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  puVar15 = (undefined8 *)0xd0;
  __Znwm();
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &PTR_DAT_110ae90f0;
  puVar14 = puVar15 + 3;
  ppuStack_260 = &PTR_PTR_1132fed50;
  puStack_258 = &UNK_1053a6a3c;
  ppuStack_250 = &PTR_DAT_110ae9180;
  func_0x000109d18e28(puVar14,&UNK_10f655d8e,0x10,&ppuStack_260,&plStack_2b0);
  func_0x0001092ba41c(&ppuStack_260);
  puStack_2a0 = &UNK_109896774;
  ppuStack_298 = &PTR_DAT_110b17068;
  puStack_2a8 = puVar14;
  puStack_290 = puVar14;
  puStack_288 = puVar15;
LAB_10a3ce198:
  plVar13 = plStack_2b0;
  if (plStack_2b0 != (long *)0x0) {
    puVar7 = (ulong *)(plStack_2b0 + 1);
    do {
      uVar25 = *puVar7;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar7,0x10);
      if (bVar10) {
        *puVar7 = uVar25 - 4;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if ((uVar25 & 0x1fffffffc) == 4) {
      (**(code **)(*plStack_2b0 + 0x10))(plStack_2b0);
      do {
        uVar25 = *puVar7;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar10) {
          *puVar7 = uVar25 - 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (uVar25 - 1 == 0) {
        (**(code **)(*plVar13 + 8))(plVar13);
      }
    }
  }
  ppuVar19 = &puStack_2a8;
  FUN_10a1087d0(ppuVar22 + 0x36);
  ppuVar22 = &puStack_2a8;
  func_0x0001092ba41c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_218) {
    ___stack_chk_fail();
    func_0x0001092ba41c(&ppuStack_260);
    func_0x00010a06e274(&uStack_2e0);
    func_0x00010a061620(&ppuStack_2d0);
    FUN_10a0a16d0(&ppuStack_2c0);
    plVar13 = plStack_2b0;
    if (plStack_2b0 != (long *)0x0) {
      puVar7 = (ulong *)(plStack_2b0 + 1);
      do {
        uVar25 = *puVar7;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar10) {
          *puVar7 = uVar25 - 4;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if ((uVar25 & 0x1fffffffc) == 4) {
        (**(code **)(*plStack_2b0 + 0x10))(plStack_2b0);
        do {
          uVar25 = *puVar7;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(puVar7,0x10);
          if (bVar10) {
            *puVar7 = uVar25 - 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (uVar25 - 1 == 0) {
          (**(code **)(*plVar13 + 8))(plVar13);
        }
      }
    }
    __Unwind_Resume();
    puVar15 = ppuVar19[1];
    puVar14 = *ppuVar19;
    *ppuVar19 = (undefined8 *)0x0;
    ppuVar19[1] = (undefined8 *)0x0;
    plVar13 = ppuVar22[1];
    ppuVar22[1] = puVar15;
    *ppuVar22 = puVar14;
    if (plVar13 != (long *)0x0) {
      plVar17 = plVar13 + 1;
      do {
        lVar27 = *plVar17;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar10) {
          *plVar17 = lVar27 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar27 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    return ppuVar22;
  }
  return ppuVar22;
}



/* Entry: 10a3cce0c; end: 10a3cddf7;  */

undefined8 ** FUN_10a3cce0c(undefined8 **param_1,undefined8 *param_2)

{
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  long *plVar4;
  undefined8 **ppuVar5;
  ulong *puVar6;
  undefined **ppuVar7;
  char cVar8;
  bool bVar9;
  code *pcVar10;
  long *plVar11;
  undefined8 **ppuVar12;
  undefined8 uVar13;
  undefined8 **ppuVar14;
  undefined8 **ppuVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined **ppuStack_1f0;
  long *plStack_1e8;
  undefined **ppuStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  undefined8 *puStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined **ppuStack_180;
  undefined *puStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  long *plStack_160;
  long lStack_138;
  undefined8 **ppuStack_130;
  undefined8 **ppuStack_128;
  code *pcStack_120;
  undefined **ppuStack_118;
  undefined8 **ppuStack_110;
  undefined8 **ppuStack_108;
  undefined8 **ppuStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 **ppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 **ppuStack_c8;
  undefined8 **ppuStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[4] = (undefined8 *)0x0;
  param_1[3] = (undefined8 *)0x0;
  *param_1 = &PTR_FUN_110bd04e8;
  param_1[2] = &PTR_DAT_110bd0540;
  *(undefined2 *)(param_1 + 5) = 0;
  ppuStack_88 = param_1 + 6;
  param_1[7] = (undefined8 *)0x0;
  *ppuStack_88 = (undefined8 *)0x0;
  param_1[9] = (undefined8 *)0x0;
  param_1[8] = (undefined8 *)0x0;
  param_1[0xb] = (undefined8 *)0x0;
  param_1[10] = (undefined8 *)0x0;
  param_1[0xd] = (undefined8 *)0x0;
  param_1[0xc] = (undefined8 *)0x0;
  param_1[0xf] = (undefined8 *)0x0;
  param_1[0xe] = (undefined8 *)0x3f800000;
  param_1[0x11] = (undefined8 *)0x0;
  param_1[0x10] = (undefined8 *)0x3f80000000000000;
  param_1[0x13] = (undefined8 *)0x3f800000;
  param_1[0x12] = (undefined8 *)0x0;
  param_1[0x15] = (undefined8 *)0x3f80000000000000;
  param_1[0x14] = (undefined8 *)0x0;
  param_1[0x17] = (undefined8 *)0x0;
  param_1[0x16] = (undefined8 *)0x0;
  param_1[0x19] = (undefined8 *)0x0;
  param_1[0x18] = (undefined8 *)0x3f800000;
  param_1[0x1b] = (undefined8 *)0x0;
  param_1[0x1a] = (undefined8 *)0x3f80000000000000;
  param_1[0x1d] = (undefined8 *)0x3f800000;
  param_1[0x1c] = (undefined8 *)0x0;
  param_1[0x1f] = (undefined8 *)0x3f80000000000000;
  param_1[0x1e] = (undefined8 *)0x0;
  puVar19 = (undefined8 *)*param_2;
  param_1[0x21] = (undefined8 *)param_2[1];
  param_1[0x20] = puVar19;
  param_2[1] = 0;
  *param_2 = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = &PTR_FUN_110bf75c0;
  param_1[0x41] = param_1;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined1 *)((long)param_1 + 0x214) = 0;
  param_1[0x45] = (undefined8 *)0x0;
  param_1[0x44] = (undefined8 *)0x0;
  param_1[0x43] = (undefined8 *)0x0;
  ppuStack_b0 = param_1 + 0x4b;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x4c] = (undefined8 *)0x0;
  *ppuStack_b0 = (undefined8 *)0x0;
  param_1[0x4e] = (undefined8 *)0x0;
  param_1[0x4d] = (undefined8 *)0x0;
  param_1[0x50] = param_1;
  *(undefined4 *)(param_1 + 0x51) = 0;
  *(undefined1 *)((long)param_1 + 0x28c) = 0;
  param_1[0x52] = (undefined8 *)0x32aaaba7;
  param_1[0x59] = (undefined8 *)0x0;
  param_1[0x56] = (undefined8 *)0x0;
  param_1[0x55] = (undefined8 *)0x0;
  param_1[0x58] = (undefined8 *)0x0;
  param_1[0x57] = (undefined8 *)0x0;
  param_1[0x54] = (undefined8 *)0x0;
  param_1[0x53] = (undefined8 *)0x0;
  param_1[0x5a] = (undefined8 *)0x32aaaba7;
  param_1[0x5c] = (undefined8 *)0x0;
  param_1[0x5b] = (undefined8 *)0x0;
  param_1[0x5e] = (undefined8 *)0x0;
  param_1[0x5d] = (undefined8 *)0x0;
  param_1[0x60] = (undefined8 *)0x0;
  param_1[0x5f] = (undefined8 *)0x0;
  param_1[0x61] = (undefined8 *)0x0;
  param_1[0x62] = (undefined8 *)0x32aaaba7;
  param_1[100] = (undefined8 *)0x0;
  param_1[99] = (undefined8 *)0x0;
  param_1[0x66] = (undefined8 *)0x0;
  param_1[0x65] = (undefined8 *)0x0;
  param_1[0x68] = (undefined8 *)0x0;
  param_1[0x67] = (undefined8 *)0x0;
  param_1[0x69] = (undefined8 *)0x0;
  param_1[0x6a] = (undefined8 *)0x32aaaba7;
  param_1[0x6c] = (undefined8 *)0x0;
  param_1[0x6b] = (undefined8 *)0x0;
  param_1[0x6e] = (undefined8 *)0x0;
  param_1[0x6d] = (undefined8 *)0x0;
  param_1[0x70] = (undefined8 *)0x0;
  param_1[0x6f] = (undefined8 *)0x0;
  param_1[0x71] = (undefined8 *)0x0;
  param_1[0x72] = (undefined8 *)0x32aaaba7;
  param_1[0x79] = (undefined8 *)0x0;
  param_1[0x76] = (undefined8 *)0x0;
  param_1[0x75] = (undefined8 *)0x0;
  param_1[0x78] = (undefined8 *)0x0;
  param_1[0x77] = (undefined8 *)0x0;
  param_1[0x74] = (undefined8 *)0x0;
  param_1[0x73] = (undefined8 *)0x0;
  param_1[0x7a] = (undefined8 *)0x32aaaba7;
  param_1[0x81] = (undefined8 *)0x0;
  param_1[0x7e] = (undefined8 *)0x0;
  param_1[0x7d] = (undefined8 *)0x0;
  param_1[0x80] = (undefined8 *)0x0;
  param_1[0x7f] = (undefined8 *)0x0;
  param_1[0x7c] = (undefined8 *)0x0;
  param_1[0x7b] = (undefined8 *)0x0;
  param_1[0x82] = (undefined8 *)0x32aaaba7;
  param_1[0x8d] = (undefined8 *)0x0;
  param_1[0x8a] = (undefined8 *)0x0;
  param_1[0x89] = (undefined8 *)0x0;
  param_1[0x8c] = (undefined8 *)0x0;
  param_1[0x8b] = (undefined8 *)0x0;
  param_1[0x86] = (undefined8 *)0x0;
  param_1[0x85] = (undefined8 *)0x0;
  param_1[0x88] = (undefined8 *)0x0;
  param_1[0x87] = (undefined8 *)0x0;
  param_1[0x84] = (undefined8 *)0x0;
  param_1[0x83] = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x8e) = 0x3f800000;
  ppuStack_90 = param_1 + 0x8f;
  ppuStack_98 = param_1 + 0x96;
  param_1[0x95] = (undefined8 *)0x0;
  param_1[0x92] = (undefined8 *)0x0;
  param_1[0x91] = (undefined8 *)0x0;
  param_1[0x94] = (undefined8 *)0x0;
  param_1[0x93] = (undefined8 *)0x0;
  param_1[0x90] = (undefined8 *)0x0;
  *ppuStack_90 = (undefined8 *)0x0;
  param_1[0x96] = ppuStack_98;
  param_1[0x97] = ppuStack_98;
  param_1[0x98] = (undefined8 *)0x0;
  ppuStack_a0 = param_1 + 0x99;
  param_1[0x99] = ppuStack_a0;
  param_1[0x9a] = ppuStack_a0;
  ppuVar15 = param_1 + 0x9f;
  param_1[0x9c] = (undefined8 *)0x0;
  param_1[0x9b] = (undefined8 *)0x0;
  param_1[0x9e] = (undefined8 *)0x0;
  param_1[0x9d] = (undefined8 *)0x0;
  param_1[0x9f] = ppuVar15;
  param_1[0xa0] = ppuVar15;
  ppuVar12 = param_1 + 0xa1;
  param_1[0xa1] = ppuVar12;
  param_1[0xa2] = ppuVar12;
  ppuVar1 = param_1 + 0xa3;
  param_1[0xa3] = ppuVar1;
  param_1[0xa4] = ppuVar1;
  ppuVar2 = param_1 + 0xa5;
  param_1[0xa5] = ppuVar2;
  param_1[0xa6] = ppuVar2;
  ppuVar3 = param_1 + 0xa7;
  param_1[0xa7] = ppuVar3;
  param_1[0xa8] = ppuVar3;
  ppuStack_b8 = param_1 + 0xa9;
  param_1[0xab] = (undefined8 *)0x0;
  param_1[0xaa] = (undefined8 *)0x0;
  *ppuStack_b8 = (undefined8 *)0x0;
  plVar11 = (long *)0x10;
  ppuStack_a8 = ppuVar15;
  __Znwm();
  param_1[0xa9] = plVar11;
  param_1[0xab] = plVar11 + 2;
  *plVar11 = (long)ppuVar3;
  plVar11[1] = 0;
  param_1[0xaa] = plVar11 + 2;
  param_1[0xac] = plVar11;
  param_1[0xad] = plVar11;
  param_1[0xae] = ppuVar3;
  param_1[0xaf] = ppuVar3;
  ppuVar3 = param_1 + 0xb0;
  param_1[0xb0] = (undefined8 *)0x0;
  param_1[0xb2] = (undefined8 *)0x0;
  param_1[0xb1] = (undefined8 *)0x0;
  ppuStack_78 = ppuVar15;
  FUN_10a3f42fc(ppuVar3,2);
  FUN_10a3f448c(ppuVar3,param_1[0xb1],&ppuStack_78,&ppuStack_70,1);
  func_0x00010a3f438c(ppuVar3,0);
  puVar19 = param_1[0xb0];
  lVar21 = (long)param_1[0xb1] - (long)puVar19 >> 3;
  param_1[0xb3] = puVar19;
  lVar22 = 0;
  if (lVar21 != 0) {
    lVar22 = lVar21 + -1;
  }
  puVar17 = puVar19 + -1;
  do {
    if (lVar22 == 0) {
      puVar17 = puVar19;
      if (param_1[0xb1] == puVar19) goto LAB_10a3cd6e0;
      break;
    }
    plVar11 = puVar17 + 2;
    puVar17 = puVar17 + 1;
    lVar22 = lVar22 + -1;
  } while (*plVar11 != 0);
  puVar19 = (undefined8 *)*puVar17;
  param_1[0xb4] = puVar17;
  param_1[0xb5] = puVar19;
  param_1[0xb6] = puVar19;
  ppuVar15 = param_1 + 0xb7;
  param_1[0xb7] = (undefined8 *)0x0;
  param_1[0xb9] = (undefined8 *)0x0;
  param_1[0xb8] = (undefined8 *)0x0;
  ppuStack_78 = ppuVar12;
  FUN_10a3f42fc(ppuVar15,2);
  FUN_10a3f448c(ppuVar15,param_1[0xb8],&ppuStack_78,&ppuStack_70,1);
  func_0x00010a3f438c(ppuVar15,0);
  puVar19 = param_1[0xb7];
  lVar21 = (long)param_1[0xb8] - (long)puVar19 >> 3;
  param_1[0xba] = puVar19;
  lVar22 = 0;
  if (lVar21 != 0) {
    lVar22 = lVar21 + -1;
  }
  puVar17 = puVar19 + -1;
  do {
    if (lVar22 == 0) {
      puVar17 = puVar19;
      if (param_1[0xb8] == puVar19) goto LAB_10a3cd6e0;
      break;
    }
    plVar11 = puVar17 + 2;
    puVar17 = puVar17 + 1;
    lVar22 = lVar22 + -1;
  } while (*plVar11 != 0);
  puVar19 = (undefined8 *)*puVar17;
  param_1[0xbb] = puVar17;
  param_1[0xbc] = puVar19;
  param_1[0xbd] = puVar19;
  ppuVar15 = param_1 + 0xbe;
  param_1[0xbe] = (undefined8 *)0x0;
  param_1[0xc0] = (undefined8 *)0x0;
  param_1[0xbf] = (undefined8 *)0x0;
  ppuStack_78 = ppuVar1;
  FUN_10a3f42fc(ppuVar15,2);
  FUN_10a3f448c(ppuVar15,param_1[0xbf],&ppuStack_78,&ppuStack_70,1);
  func_0x00010a3f438c(ppuVar15,0);
  puVar19 = param_1[0xbe];
  lVar21 = (long)param_1[0xbf] - (long)puVar19 >> 3;
  param_1[0xc1] = puVar19;
  lVar22 = 0;
  if (lVar21 != 0) {
    lVar22 = lVar21 + -1;
  }
  puVar17 = puVar19 + -1;
  do {
    if (lVar22 == 0) {
      puVar17 = puVar19;
      if (param_1[0xbf] == puVar19) goto LAB_10a3cd6e0;
      break;
    }
    plVar11 = puVar17 + 2;
    puVar17 = puVar17 + 1;
    lVar22 = lVar22 + -1;
  } while (*plVar11 != 0);
  puVar19 = (undefined8 *)*puVar17;
  param_1[0xc2] = puVar17;
  param_1[0xc3] = puVar19;
  param_1[0xc4] = puVar19;
  ppuVar15 = param_1 + 0xc5;
  param_1[0xc5] = (undefined8 *)0x0;
  param_1[199] = (undefined8 *)0x0;
  param_1[0xc6] = (undefined8 *)0x0;
  ppuStack_78 = ppuVar2;
  ppuStack_70 = ppuVar12;
  FUN_10a3f42fc(ppuVar15,3);
  FUN_10a3f448c(ppuVar15,param_1[0xc6],&ppuStack_78,&lStack_68,2);
  func_0x00010a3f438c(ppuVar15,0);
  puVar19 = param_1[0xc5];
  lVar21 = (long)param_1[0xc6] - (long)puVar19 >> 3;
  param_1[200] = puVar19;
  lVar22 = 0;
  if (lVar21 != 0) {
    lVar22 = lVar21 + -1;
  }
  puVar17 = puVar19 + -1;
  do {
    if (lVar22 == 0) {
      puVar17 = puVar19;
      if (param_1[0xc6] == puVar19) goto LAB_10a3cd6e0;
      break;
    }
    plVar11 = puVar17 + 2;
    puVar17 = puVar17 + 1;
    lVar22 = lVar22 + -1;
  } while (*plVar11 != 0);
  puVar19 = (undefined8 *)*puVar17;
  param_1[0xc9] = puVar17;
  param_1[0xca] = puVar19;
  param_1[0xcb] = puVar19;
  param_1[0xcc] = param_1;
  param_1[0xcd] = param_1 + 0xd0;
  param_1[0xcf] = (undefined8 *)0x20;
  param_1[0xce] = (undefined8 *)0x0;
  FUN_10a3ec438(param_1 + 0xf0);
  param_1[0xf6] = (undefined8 *)0x0;
  param_1[0xf5] = (undefined8 *)0x0;
  param_1[0xf4] = param_1 + 0xf5;
  FUN_10a3ec438(param_1 + 0xf7);
  param_1[0xfd] = (undefined8 *)0x0;
  param_1[0xfc] = (undefined8 *)0x0;
  param_1[0xfb] = param_1 + 0xfc;
  FUN_10a3ec438(param_1 + 0xfe);
  param_1[0x104] = (undefined8 *)0x0;
  param_1[0x103] = (undefined8 *)0x0;
  param_1[0x102] = param_1 + 0x103;
  ppuStack_b8 = param_1 + 0x105;
  param_1[0x188] = (undefined8 *)0x0;
  param_1[0x187] = (undefined8 *)0x0;
  _bzero(ppuStack_b8,0x401);
  param_1[0x186] = param_1 + 0x187;
  ppuVar15 = param_1 + 0x189;
  ppuStack_c0 = param_1 + 0x199;
  param_1[0x18a] = (undefined8 *)0x0;
  *ppuVar15 = (undefined8 *)0x0;
  param_1[0x18c] = (undefined8 *)0x0;
  param_1[0x18b] = (undefined8 *)0x0;
  param_1[0x18e] = (undefined8 *)0x0;
  param_1[0x18d] = (undefined8 *)0x0;
  param_1[400] = (undefined8 *)0x0;
  param_1[399] = (undefined8 *)0x0;
  param_1[0x192] = (undefined8 *)0x0;
  param_1[0x191] = (undefined8 *)0x0;
  param_1[0x194] = (undefined8 *)0x0;
  param_1[0x193] = (undefined8 *)0x0;
  *(undefined1 *)(param_1 + 0x195) = 0;
  param_1[0x197] = (undefined8 *)0x0;
  param_1[0x196] = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  param_1[0x19a] = (undefined8 *)0x0;
  *ppuStack_c0 = (undefined8 *)0x0;
  param_1[0x19c] = (undefined8 *)0x0;
  param_1[0x19b] = (undefined8 *)0x0;
  param_1[0x19e] = (undefined8 *)0x0;
  param_1[0x19d] = (undefined8 *)0x0;
  param_1[0x1a0] = (undefined8 *)0x0;
  param_1[0x19f] = (undefined8 *)0x0;
  *(undefined8 *)((long)param_1 + 0xd0c) = 0;
  *(undefined8 *)((long)param_1 + 0xd04) = 0;
  *(undefined2 *)((long)param_1 + 0xd14) = 0x40;
  *(undefined4 *)(param_1 + 0x1a3) = 0;
  *(undefined1 *)((long)param_1 + 0xd1c) = 0;
  param_1[0x1ac] = (undefined8 *)0x0;
  param_1[0x1ab] = (undefined8 *)0x0;
  *(undefined8 *)((long)param_1 + 0xd46) = 0;
  *(undefined8 *)((long)param_1 + 0xd3e) = 0;
  *(undefined8 *)((long)param_1 + 0xd56) = 0;
  *(undefined8 *)((long)param_1 + 0xd4e) = 0;
  *(undefined8 *)((long)param_1 + 0xd26) = 0;
  *(undefined8 *)((long)param_1 + 0xd1e) = 0;
  *(undefined8 *)((long)param_1 + 0xd36) = 0;
  *(undefined8 *)((long)param_1 + 0xd2e) = 0;
  *(undefined4 *)(param_1 + 0x1ad) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x1ae) = 0;
  *(undefined1 *)((long)param_1 + 0xd72) = 0;
  param_1[0x1af] = (undefined8 *)0x0;
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  param_1[0x1b2] = (undefined8 *)0x0;
  param_1[0x1b1] = (undefined8 *)0x0;
  param_1[0x1b4] = (undefined8 *)0x0;
  param_1[0x1b3] = (undefined8 *)0x0;
  param_1[0x1b6] = (undefined8 *)0x0;
  param_1[0x1b5] = (undefined8 *)0x0;
  param_1[0x1b8] = (undefined8 *)0x0;
  param_1[0x1b7] = (undefined8 *)0x0;
  param_1[0x1ba] = (undefined8 *)0x0;
  param_1[0x1b9] = (undefined8 *)0x0;
  param_1[0x1bc] = (undefined8 *)0x0;
  param_1[0x1bb] = (undefined8 *)0x0;
  param_1[0x1be] = (undefined8 *)0x0;
  param_1[0x1bd] = (undefined8 *)0x0;
  param_1[0x1c0] = (undefined8 *)0x0;
  param_1[0x1bf] = (undefined8 *)0x0;
  param_1[0x1c2] = (undefined8 *)0x0;
  param_1[0x1c1] = (undefined8 *)0x0;
  param_1[0x1c4] = (undefined8 *)0x0;
  param_1[0x1c3] = (undefined8 *)0x0;
  *(undefined8 *)((long)param_1 + 0xe26) = 0;
  param_1[0x1c6] = (undefined8 *)0x4;
  *(undefined4 *)(param_1 + 0x1c7) = 0;
  param_1[0x1cc] = (undefined8 *)0x0;
  *(undefined1 *)(param_1 + 0x1cd) = 0;
  param_1[0x1ca] = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x1cb) = 0;
  param_1[0x1c9] = (undefined8 *)0x0;
  param_1[0x1c8] = (undefined8 *)0x0;
  param_1[0x1cf] = (undefined8 *)0x0;
  param_1[0x1ce] = (undefined8 *)0x0;
  param_1[0x1d1] = (undefined8 *)0x0;
  param_1[0x1d0] = (undefined8 *)0x0;
  param_1[0x1d3] = (undefined8 *)0x0;
  param_1[0x1d2] = (undefined8 *)0x0;
  param_1[0x1d5] = (undefined8 *)0x0;
  param_1[0x1d4] = (undefined8 *)0x0;
  param_1[0x1d6] = (undefined8 *)0x0;
  param_1[0x1cf] = (undefined8 *)FUN_10a3ec56c;
  param_1[0x1d0] = &PTR_DAT_110ae9180;
  param_1[0x1da] = (undefined8 *)0x0;
  param_1[0x1d9] = (undefined8 *)0x0;
  param_1[0x1dc] = (undefined8 *)0x0;
  param_1[0x1db] = (undefined8 *)0x0;
  param_1[0x1de] = (undefined8 *)0x0;
  param_1[0x1dd] = (undefined8 *)0x0;
  param_1[0x1d7] = (undefined8 *)FUN_10a3ec56c;
  param_1[0x1d8] = &PTR_DAT_110ae9180;
  param_1[0x1e4] = (undefined8 *)0x0;
  param_1[0x1e3] = (undefined8 *)0x0;
  param_1[0x1e6] = (undefined8 *)0x0;
  param_1[0x1e5] = (undefined8 *)0x0;
  param_1[0x1e2] = (undefined8 *)0x0;
  param_1[0x1e1] = (undefined8 *)0x0;
  param_1[0x1df] = (undefined8 *)FUN_10a3ec56c;
  param_1[0x1e0] = &PTR_DAT_110ae9180;
  param_1[0x1ec] = (undefined8 *)0x0;
  param_1[0x1eb] = (undefined8 *)0x0;
  param_1[0x1ee] = (undefined8 *)0x0;
  param_1[0x1ed] = (undefined8 *)0x0;
  param_1[0x1ea] = (undefined8 *)0x0;
  param_1[0x1e9] = (undefined8 *)0x0;
  param_1[0x1e7] = (undefined8 *)FUN_10a3ec56c;
  param_1[0x1e8] = &PTR_DAT_110ae9180;
  param_1[0x1ef] = (undefined8 *)0x32aaaba7;
  param_1[0x1fe] = (undefined8 *)0x0;
  param_1[0x1fd] = (undefined8 *)0x0;
  param_1[0x1fc] = (undefined8 *)0x0;
  param_1[0x1fb] = (undefined8 *)0x0;
  param_1[0x1fa] = (undefined8 *)0x0;
  param_1[0x1f9] = (undefined8 *)0x0;
  param_1[0x1f8] = (undefined8 *)0x0;
  param_1[0x1f7] = (undefined8 *)0x0;
  param_1[0x1f6] = (undefined8 *)0x0;
  param_1[0x1f5] = (undefined8 *)0x0;
  param_1[500] = (undefined8 *)0x0;
  param_1[499] = (undefined8 *)0x0;
  param_1[0x1f2] = (undefined8 *)0x0;
  param_1[0x1f1] = (undefined8 *)0x0;
  param_1[0x1f0] = (undefined8 *)0x0;
  param_1[0x1f7] = (undefined8 *)0x10a3ec57c;
  param_1[0x1f8] = &PTR_DAT_110950c70;
  *(undefined1 *)(param_1 + 0x1ff) = 0;
  *(undefined1 *)(param_1 + 0x22a) = 0;
  ppuStack_c8 = param_1 + 0x22b;
  param_1[0x22f] = (undefined8 *)0x0;
  *(undefined1 *)(param_1 + 0x22e) = 0;
  param_1[0x22d] = (undefined8 *)0x0;
  param_1[0x22c] = (undefined8 *)0x0;
  *ppuStack_c8 = (undefined8 *)0x0;
  if (*(int *)((long)param_1[0x20] + 0xc) == 1) {
    *(undefined4 *)(param_1 + 0x4f) = 3;
  }
  FUN_10a3cddf8(param_1);
  lVar22 = 0;
  do {
    ppuVar12 = (undefined8 **)0x98;
    __Znwm();
    ppuVar12[1] = (undefined8 *)0x0;
    ppuVar12[2] = (undefined8 *)0x0;
    *ppuVar12 = &PTR_FUN_110b9a070;
    ppuVar12[0xd] = (undefined8 *)0x0;
    ppuVar12[0xc] = (undefined8 *)0x0;
    ppuVar12[0xf] = (undefined8 *)0x0;
    ppuVar12[0xe] = (undefined8 *)0x0;
    ppuVar12[0x11] = (undefined8 *)0x0;
    ppuVar12[0x10] = (undefined8 *)0x0;
    ppuVar12[0x12] = (undefined8 *)0x0;
    ppuStack_78 = ppuVar12 + 3;
    *ppuStack_78 = &PTR_FUN_110b9a0c0;
    ppuVar12[9] = (undefined8 *)0x0;
    ppuVar12[8] = (undefined8 *)0x0;
    ppuVar12[0xb] = (undefined8 *)0x0;
    ppuVar12[10] = (undefined8 *)0x0;
    ppuVar12[5] = (undefined8 *)0x0;
    ppuVar12[4] = (undefined8 *)0x0;
    ppuVar12[7] = (undefined8 *)0x0;
    ppuVar12[6] = (undefined8 *)0x0;
    *(undefined4 *)(ppuVar12 + 10) = 0x3f800000;
    ppuVar12[0xb] = (undefined8 *)FUN_10a004c4c;
    ppuVar12[0xc] = &PTR_DAT_110ae9180;
    ppuStack_70 = ppuVar12;
    FUN_10a3ce310(param_1 + 0x1b1 + lVar22 * 2,&ppuStack_78);
    ppuVar12 = ppuStack_70;
    if (ppuStack_70 != (undefined8 **)0x0) {
      ppuVar1 = ppuStack_70 + 1;
      do {
        puVar19 = *ppuVar1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar9) {
          *ppuVar1 = (undefined8 *)((long)puVar19 + -1);
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (puVar19 == (undefined8 *)0x0) {
        (*(code *)(*ppuStack_70)[2])(ppuStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar12);
      }
    }
    lVar22 = lVar22 + 1;
  } while (lVar22 != 10);
  FUN_10a3ce374(param_1,0x17d);
  puVar19 = (undefined8 *)0x58;
  __Znwm();
  puVar19[1] = 0;
  puVar19[2] = 0;
  puVar17 = puVar19 + 3;
  *puVar19 = &PTR_FUN_110bd19a8;
  FUN_10a5ae610();
  param_1[0x122] = puVar17;
  plVar11 = param_1[0x123];
  param_1[0x123] = puVar19;
  if (plVar11 != (long *)0x0) {
    plVar4 = plVar11 + 1;
    do {
      lVar22 = *plVar4;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar9) {
        *plVar4 = lVar22 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)(param_1[0x20] + 0x52);
  lVar22 = param_1[0x20][0x4c];
  ppuStack_78 = (undefined8 **)&UNK_10f653c20;
  ppuStack_70 = (undefined8 **)0x21;
  if (lVar22 == 0) {
    FUN_10a0edfc4(&ppuStack_78);
LAB_10a3cd6e0:
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10a3cd6e4);
    (*pcVar10)();
  }
  plVar11 = *(long **)(lVar22 + 0x228);
  (**(code **)(*plVar11 + 0x38))(&ppuStack_80,plVar11,param_1);
  ppuVar12 = ppuStack_80;
  uVar20 = (ulong)*(byte *)((long)param_1 + 0x29);
  if (5 < uVar20) goto LAB_10a3cd6e0;
  ppuStack_80 = (undefined8 **)0x0;
  plVar11 = ppuStack_88[uVar20];
  ppuStack_88[uVar20] = ppuVar12;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
    ppuVar12 = ppuStack_80;
    ppuStack_80 = (undefined8 **)0x0;
    if (ppuVar12 != (undefined8 **)0x0) {
      (*(code *)(*ppuVar12)[1])();
    }
  }
  uVar13 = 0x58;
  __Znwm(0x58);
  FUN_10ad628bc();
  ppuVar12 = param_1 + 0x1a8;
  func_0x00010a3ed14c(ppuVar12,uVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  ppuStack_88 = ppuVar12;
  __ZdlPv(uVar13);
  ppuVar12 = param_1 + 0x1d0;
  ppuVar1 = param_1 + 0x1d8;
  ppuVar2 = param_1 + 0x1e0;
  ppuVar3 = param_1 + 0x1e8;
  ppuStack_80 = ppuStack_c8;
  ppuVar5 = param_1 + 0x1f8;
  func_0x00010a2e3118(&ppuStack_80);
  (*(code *)**ppuVar5)(ppuVar5);
  __ZNSt3__15mutexD1Ev(param_1 + 0x1ef);
  (*(code *)**ppuVar3)(ppuVar3);
  (*(code *)**ppuVar2)(ppuVar2);
  (*(code *)**ppuVar1)(ppuVar1);
  (*(code *)**ppuVar12)(ppuVar12);
  if (param_1[0x1c8] != (undefined8 *)0x0) {
    param_1[0x1c9] = param_1[0x1c8];
    __ZdlPv();
  }
  ppuVar14 = param_1 + 0x1c3;
  lVar22 = -0xa0;
  do {
    FUN_10a004cfc(ppuVar14);
    ppuVar14 = ppuVar14 + -2;
    lVar22 = lVar22 + 0x10;
  } while (lVar22 != 0);
  FUN_10a5cf6e4(param_1 + 0x1a9);
  func_0x00010a3ed14c(param_1 + 0x1a8,0);
  FUN_10a3ec58c(param_1 + 0x1a5);
  func_0x00010a3f6208(param_1 + 0x19f);
  func_0x00010a3f7874(param_1 + 0x19d);
  func_0x00010a3f781c(param_1 + 0x19b);
  func_0x00010a3f77c4(ppuStack_c0);
  func_0x00010a1fec54(param_1 + 0x196);
  FUN_10a3ce434(param_1 + 399);
  func_0x00010a09db64(param_1 + 0x18d);
  plVar11 = param_1[0x18c];
  param_1[0x18c] = (undefined8 *)0x0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
  }
  FUN_10a3ed8c0(param_1 + 0x18b,0);
  plVar11 = param_1[0x18a];
  param_1[0x18a] = (undefined8 *)0x0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
  }
  puVar19 = *ppuVar15;
  *ppuVar15 = (undefined8 *)0x0;
  if (puVar19 != (undefined8 *)0x0) {
    func_0x00010a3f775c();
  }
  func_0x00010a3f7714(param_1 + 0x186,param_1[0x187]);
  func_0x00010a05248c(param_1 + 0x17f);
  func_0x00010a05248c(param_1 + 0x17d);
  func_0x00010a05248c(param_1 + 0x17b);
  FUN_10a3f76ec(param_1 + 0x17a,0);
  func_0x00010a3ed0c8(param_1 + 0x179,0);
  func_0x00010a3f7694(param_1 + 0x177);
  func_0x00010a3f761c(param_1 + 0x176,0);
  FUN_10a3f75f4(param_1 + 0x175,0);
  plVar11 = param_1[0x174];
  param_1[0x174] = (undefined8 *)0x0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
  }
  func_0x00010a3f759c(param_1 + 0x172);
  func_0x00010a3f7544(param_1 + 0x170);
  func_0x00010a3f74ec(param_1 + 0x16e);
  func_0x00010a296760(param_1 + 0x16c);
  func_0x00010a3f74ac(param_1 + 0x16b,0);
  func_0x00010a3f7454(param_1 + 0x169);
  func_0x00010a3f73fc(param_1 + 0x167);
  plVar11 = param_1[0x166];
  param_1[0x166] = (undefined8 *)0x0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
  }
  func_0x00010a3f73a4(param_1 + 0x164);
  func_0x00010a3f734c(param_1 + 0x162);
  func_0x00010a3f72f4(param_1 + 0x160);
  func_0x00010a3f729c(param_1 + 0x15e);
  func_0x00010a3f7244(param_1 + 0x15c);
  func_0x00010a3f71ec(param_1 + 0x15a);
  func_0x00010a3f7194(param_1 + 0x158);
  func_0x00010a3f713c(param_1 + 0x156);
  func_0x00010a3f70e4(param_1 + 0x154);
  func_0x00010a3f708c(param_1 + 0x152);
  func_0x00010a3f7034(param_1 + 0x150);
  func_0x00010a3f6fdc(param_1 + 0x14e);
  func_0x00010a3f6f84(param_1 + 0x14c);
  func_0x00010a3f6f2c(param_1 + 0x14a);
  func_0x00010a3f6ed4(param_1 + 0x148);
  func_0x00010a3ed050(param_1 + 0x147,0);
  plVar11 = param_1[0x146];
  param_1[0x146] = (undefined8 *)0x0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
  }
  func_0x00010a3f6e7c(param_1 + 0x144);
  func_0x00010a3f6e24(param_1 + 0x142);
  func_0x00010a3f6dcc(param_1 + 0x140);
  func_0x00010a3f6d74(param_1 + 0x13e);
  func_0x00010a3f6d1c(param_1 + 0x13c);
  func_0x00010a3f6cc4(param_1 + 0x13a);
  func_0x00010a3f6c6c(param_1 + 0x138);
  func_0x00010a3f6c14(param_1 + 0x136);
  func_0x00010a3f6bbc(param_1 + 0x134);
  func_0x00010a3f6b64(param_1 + 0x132);
  func_0x00010a3f6b0c(param_1 + 0x130);
  FUN_10a082070(param_1 + 0x12e);
  func_0x00010a3f6ab4(param_1 + 300);
  func_0x00010a3f6a5c(param_1 + 0x12a);
  func_0x00010a3f6a04(param_1 + 0x128);
  func_0x00010a3f69ac(param_1 + 0x126);
  func_0x00010a3f6960(param_1 + 0x125,0);
  plVar11 = param_1[0x124];
  param_1[0x124] = (undefined8 *)0x0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
  }
  func_0x00010a3f6908(param_1 + 0x122);
  func_0x00010a3f68b0(param_1 + 0x120);
  FUN_10a3ed028(param_1 + 0x11f,0);
  func_0x00010a3f6858(param_1 + 0x11d);
  func_0x00010a3f6800(param_1 + 0x11b);
  func_0x00010a3f67a8(param_1 + 0x119);
  plVar11 = param_1[0x118];
  param_1[0x118] = (undefined8 *)0x0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
  }
  plVar11 = param_1[0x117];
  param_1[0x117] = (undefined8 *)0x0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
  }
  func_0x00010a3f6750(param_1 + 0x115);
  func_0x00010a3f66f8(param_1 + 0x113);
  func_0x00010a3f66a0(param_1 + 0x111);
  FUN_10a3f6678(param_1 + 0x110,0);
  FUN_10a3f6520(param_1 + 0x10f,0);
  plVar11 = param_1[0x10e];
  param_1[0x10e] = (undefined8 *)0x0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
  }
  FUN_10a3f64f8(param_1 + 0x10d,0);
  FUN_10a054c5c(param_1 + 0x10b);
  func_0x00010a3ed08c(param_1 + 0x10a,0);
  func_0x00010a3f64a0(param_1 + 0x108);
  func_0x00010a3f6448(param_1 + 0x106);
  plVar11 = *ppuStack_b8;
  *ppuStack_b8 = (undefined8 *)0x0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
  }
  func_0x00010a3ce464(param_1 + 0xfe);
  func_0x00010a3ce49c(param_1 + 0xf7);
  func_0x00010a3ce4d4(param_1 + 0xf0);
  func_0x00010a3bfe08(param_1 + 0xcc);
  FUN_10a3c869c(ppuStack_a8);
  ppuStack_80 = param_1 + 0x9c;
  FUN_10a0d80a4(&ppuStack_80);
  FUN_10a3ec714(ppuStack_a0);
  func_0x00010a3ec780(ppuStack_98);
  func_0x00010a3ec7ec(param_1 + 0x92);
  func_0x00010a3ec7ec(ppuStack_90);
  func_0x00010a3f6400(param_1 + 0x8a);
  func_0x00010a3ce50c(param_1 + 0x52);
  plVar11 = param_1[0x4e];
  param_1[0x4e] = (undefined8 *)0x0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
  }
  if (*(char *)((long)param_1 + 0x26f) < '\0') {
    __ZdlPv(*ppuStack_b0);
  }
  if (param_1[0x43] != (undefined8 *)0x0) {
    param_1[0x44] = param_1[0x43];
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x3f) == '\x01') {
    func_0x0001092ba41c(param_1 + 0x36);
  }
  if (*(char *)(param_1 + 0x35) == '\x01') {
    func_0x0001092ba41c(param_1 + 0x2c);
  }
  if (*(char *)(param_1 + 0x2b) == '\x01') {
    func_0x0001092ba41c(param_1 + 0x22);
  }
  FUN_10a3f5e88(param_1 + 0x20);
  lVar21 = 0x58;
  do {
    plVar11 = *(long **)((long)param_1 + lVar21);
    *(undefined8 *)((long)param_1 + lVar21) = 0;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 8))();
    }
    lVar21 = lVar21 + -8;
  } while (lVar21 != 0x28);
  if (param_1[4] != (undefined8 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  ppuVar15 = ppuStack_88;
  __Unwind_Resume();
  pcStack_120 = FUN_10a004c4c;
  ppuStack_118 = &PTR_FUN_110b9a0c0;
  pcStack_d8 = FUN_10a3cddf8;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar14 = ppuVar15;
  ppuStack_130 = ppuVar5;
  ppuStack_128 = ppuVar3;
  ppuStack_110 = ppuVar2;
  ppuStack_108 = ppuVar1;
  ppuStack_100 = ppuVar12;
  lStack_f8 = lVar22;
  lStack_f0 = lVar21;
  ppuStack_e8 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  FUN_10a3cf3d8();
  uVar18 = (uint)ppuVar14;
  puVar19 = ppuVar15[0x20];
  __ZNSt3__16thread20hardware_concurrencyEv();
  if (uVar18 < 5) {
    uVar18 = 4;
  }
  puVar16 = (undefined8 *)0xd0;
  __Znwm();
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = &PTR_DAT_110ae90f0;
  puVar17 = puVar16 + 3;
  puStack_178 = &UNK_1053a6a3c;
  ppuStack_170 = &PTR_DAT_110ae9180;
  ppuStack_180 = (undefined **)(puVar19 + 0x1d);
  FUN_10a3ee05c(puVar17,&UNK_10f655d63,0x13,uVar18,&ppuStack_180,puVar19 + 0x24);
  func_0x0001092ba41c(&ppuStack_180);
  puStack_1c0 = &UNK_109896774;
  ppuStack_1b8 = &PTR_DAT_110b17068;
  puStack_1c8 = puVar17;
  puStack_1b0 = puVar17;
  puStack_1a8 = puVar16;
  FUN_10a1087d0(ppuVar15 + 0x22,&puStack_1c8);
  func_0x0001092ba41c(&puStack_1c8);
  ppuVar7 = (undefined **)ppuVar15[0x20][2];
  plStack_1d8 = (long *)ppuVar15[0x20][3];
  if (plStack_1d8 != (long *)0x0) {
    plVar11 = plStack_1d8 + 1;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar9) {
        *plVar11 = *plVar11 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar9) {
        *plVar11 = *plVar11 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  ppuStack_1f0 = (undefined **)0x0;
  plStack_1e8 = (long *)0x0;
  puStack_178 = &UNK_109896774;
  ppuStack_170 = &PTR_DAT_110b17068;
  puVar17 = (undefined8 *)0xd0;
  ppuStack_1e0 = ppuVar7;
  ppuStack_180 = ppuVar7;
  ppuStack_168 = ppuVar7;
  plStack_160 = plStack_1d8;
  __Znwm();
  puVar17[2] = 0;
  puVar19 = puVar17 + 3;
  *puVar17 = &PTR_DAT_110ae90f0;
  puVar17[1] = 0;
  func_0x000109d18e28(puVar19,&UNK_10f655d77,0x16,&ppuStack_180,ppuVar7 + 7);
  puStack_1c0 = &UNK_109896774;
  ppuStack_1b8 = &PTR_DAT_110b17068;
  puStack_1c8 = puVar19;
  puStack_1b0 = puVar19;
  puStack_1a8 = puVar17;
  func_0x0001092ba41c(&ppuStack_180);
  plVar11 = plStack_1e8;
  if (plStack_1e8 != (long *)0x0) {
    plVar4 = plStack_1e8 + 1;
    do {
      lVar22 = *plVar4;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar9) {
        *plVar4 = lVar22 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  plVar11 = plStack_1d8;
  if (plStack_1d8 != (long *)0x0) {
    plVar4 = plStack_1d8 + 1;
    do {
      lVar22 = *plVar4;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar9) {
        *plVar4 = lVar22 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  FUN_10a1087d0(ppuVar15 + 0x2c,&puStack_1c8);
  func_0x0001092ba41c(&puStack_1c8);
  plStack_1d0 = (long *)ppuVar15[0x20][0x35];
  if (plStack_1d0 != (long *)0x0) {
    plVar11 = plStack_1d0 + 1;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar9) {
        *plVar11 = *plVar11 + 4;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  FUN_10a30c09c(&ppuStack_1e0);
  if (ppuStack_1e0 != (undefined **)0x0) {
    ppuVar7 = (undefined **)ppuStack_1e0[2];
    plVar11 = (long *)ppuStack_1e0[3];
    ppuStack_1f0 = ppuVar7;
    plStack_1e8 = plVar11;
    if (plVar11 == (long *)0x0) {
      if (ppuVar7 != (undefined **)0x0) goto LAB_10a3ce070;
    }
    else {
      plVar4 = plVar11 + 1;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar9) {
          *plVar4 = *plVar4 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (ppuVar7 != (undefined **)0x0) {
LAB_10a3ce070:
        ppuStack_1f0 = (undefined **)0x0;
        plStack_1e8 = (long *)0x0;
        uStack_200 = 0;
        uStack_1f8 = 0;
        puStack_178 = &UNK_109896774;
        ppuStack_170 = &PTR_DAT_110b17068;
        puVar17 = (undefined8 *)0xd0;
        ppuStack_180 = ppuVar7;
        ppuStack_168 = ppuVar7;
        plStack_160 = plVar11;
        __Znwm();
        puVar17[2] = 0;
        puVar19 = puVar17 + 3;
        *puVar17 = &PTR_DAT_110ae90f0;
        puVar17[1] = 0;
        FUN_10a3ee05c(puVar19,&UNK_10f655d8e,0x10,1,&ppuStack_180,&plStack_1d0);
        puStack_1c0 = &UNK_109896774;
        ppuStack_1b8 = &PTR_DAT_110b17068;
        puStack_1c8 = puVar19;
        puStack_1b0 = puVar19;
        puStack_1a8 = puVar17;
        func_0x0001092ba41c(&ppuStack_180);
        plVar11 = plStack_1d8;
        if (plStack_1d8 != (long *)0x0) {
          plVar4 = plStack_1d8 + 1;
          do {
            lVar22 = *plVar4;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar9) {
              *plVar4 = lVar22 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar22 == 0) {
            (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        goto LAB_10a3ce198;
      }
      do {
        lVar22 = *plVar4;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar9) {
          *plVar4 = lVar22 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar22 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
  }
  plVar11 = plStack_1d8;
  if (plStack_1d8 != (long *)0x0) {
    plVar4 = plStack_1d8 + 1;
    do {
      lVar22 = *plVar4;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar9) {
        *plVar4 = lVar22 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  puVar17 = (undefined8 *)0xd0;
  __Znwm();
  puVar17[1] = 0;
  puVar17[2] = 0;
  *puVar17 = &PTR_DAT_110ae90f0;
  puVar19 = puVar17 + 3;
  ppuStack_180 = &PTR_PTR_1132fed50;
  puStack_178 = &UNK_1053a6a3c;
  ppuStack_170 = &PTR_DAT_110ae9180;
  func_0x000109d18e28(puVar19,&UNK_10f655d8e,0x10,&ppuStack_180,&plStack_1d0);
  func_0x0001092ba41c(&ppuStack_180);
  puStack_1c0 = &UNK_109896774;
  ppuStack_1b8 = &PTR_DAT_110b17068;
  puStack_1c8 = puVar19;
  puStack_1b0 = puVar19;
  puStack_1a8 = puVar17;
LAB_10a3ce198:
  plVar11 = plStack_1d0;
  if (plStack_1d0 != (long *)0x0) {
    puVar6 = (ulong *)(plStack_1d0 + 1);
    do {
      uVar20 = *puVar6;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar9) {
        *puVar6 = uVar20 - 4;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((uVar20 & 0x1fffffffc) == 4) {
      (**(code **)(*plStack_1d0 + 0x10))(plStack_1d0);
      do {
        uVar20 = *puVar6;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar9) {
          *puVar6 = uVar20 - 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (uVar20 - 1 == 0) {
        (**(code **)(*plVar11 + 8))(plVar11);
      }
    }
  }
  ppuVar12 = &puStack_1c8;
  FUN_10a1087d0(ppuVar15 + 0x36);
  ppuVar15 = &puStack_1c8;
  func_0x0001092ba41c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
    ___stack_chk_fail();
    func_0x0001092ba41c(&ppuStack_180);
    func_0x00010a06e274(&uStack_200);
    func_0x00010a061620(&ppuStack_1f0);
    FUN_10a0a16d0(&ppuStack_1e0);
    plVar11 = plStack_1d0;
    if (plStack_1d0 != (long *)0x0) {
      puVar6 = (ulong *)(plStack_1d0 + 1);
      do {
        uVar20 = *puVar6;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar9) {
          *puVar6 = uVar20 - 4;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((uVar20 & 0x1fffffffc) == 4) {
        (**(code **)(*plStack_1d0 + 0x10))(plStack_1d0);
        do {
          uVar20 = *puVar6;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar9) {
            *puVar6 = uVar20 - 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (uVar20 - 1 == 0) {
          (**(code **)(*plVar11 + 8))(plVar11);
        }
      }
    }
    __Unwind_Resume();
    puVar17 = ppuVar12[1];
    puVar19 = *ppuVar12;
    *ppuVar12 = (undefined8 *)0x0;
    ppuVar12[1] = (undefined8 *)0x0;
    plVar11 = ppuVar15[1];
    ppuVar15[1] = puVar17;
    *ppuVar15 = puVar19;
    if (plVar11 != (long *)0x0) {
      plVar4 = plVar11 + 1;
      do {
        lVar22 = *plVar4;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar9) {
          *plVar4 = lVar22 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar22 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    return ppuVar15;
  }
  return ppuVar15;
}



/* Entry: 10a3cddf8; end: 10a3ce30f;  */

undefined8 ** FUN_10a3cddf8(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  undefined **ppuVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  long *plStack_118;
  undefined **ppuStack_110;
  long *plStack_108;
  long *plStack_100;
  undefined8 *puStack_f8;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  long *plStack_90;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = param_1;
  FUN_10a3cf3d8();
  uVar9 = (uint)lVar12;
  lVar12 = *(long *)(param_1 + 0x100);
  __ZNSt3__16thread20hardware_concurrencyEv();
  if (uVar9 < 5) {
    uVar9 = 4;
  }
  puVar6 = (undefined8 *)0xd0;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_DAT_110ae90f0;
  puVar13 = puVar6 + 3;
  puStack_a8 = &UNK_1053a6a3c;
  ppuStack_a0 = &PTR_DAT_110ae9180;
  ppuStack_b0 = (undefined **)(lVar12 + 0xe8);
  FUN_10a3ee05c(puVar13,&UNK_10f655d63,0x13,uVar9,&ppuStack_b0,lVar12 + 0x120);
  func_0x0001092ba41c(&ppuStack_b0);
  puStack_f0 = &UNK_109896774;
  ppuStack_e8 = &PTR_DAT_110b17068;
  puStack_f8 = puVar13;
  puStack_e0 = puVar13;
  puStack_d8 = puVar6;
  FUN_10a1087d0(param_1 + 0x110,&puStack_f8);
  func_0x0001092ba41c(&puStack_f8);
  ppuVar3 = *(undefined ***)(*(long *)(param_1 + 0x100) + 0x10);
  plStack_108 = *(long **)(*(long *)(param_1 + 0x100) + 0x18);
  if (plStack_108 != (long *)0x0) {
    plVar11 = plStack_108 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppuStack_120 = (undefined **)0x0;
  plStack_118 = (long *)0x0;
  puStack_a8 = &UNK_109896774;
  ppuStack_a0 = &PTR_DAT_110b17068;
  puVar6 = (undefined8 *)0xd0;
  ppuStack_110 = ppuVar3;
  ppuStack_b0 = ppuVar3;
  ppuStack_98 = ppuVar3;
  plStack_90 = plStack_108;
  __Znwm();
  puVar6[2] = 0;
  puVar13 = puVar6 + 3;
  *puVar6 = &PTR_DAT_110ae90f0;
  puVar6[1] = 0;
  func_0x000109d18e28(puVar13,&UNK_10f655d77,0x16,&ppuStack_b0,ppuVar3 + 7);
  puStack_f0 = &UNK_109896774;
  ppuStack_e8 = &PTR_DAT_110b17068;
  puStack_f8 = puVar13;
  puStack_e0 = puVar13;
  puStack_d8 = puVar6;
  func_0x0001092ba41c(&ppuStack_b0);
  plVar11 = plStack_118;
  if (plStack_118 != (long *)0x0) {
    plVar1 = plStack_118 + 1;
    do {
      lVar12 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  plVar11 = plStack_108;
  if (plStack_108 != (long *)0x0) {
    plVar1 = plStack_108 + 1;
    do {
      lVar12 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  FUN_10a1087d0(param_1 + 0x160,&puStack_f8);
  func_0x0001092ba41c(&puStack_f8);
  plStack_100 = *(long **)(*(long *)(param_1 + 0x100) + 0x1a8);
  if (plStack_100 != (long *)0x0) {
    plVar11 = plStack_100 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_10a30c09c(&ppuStack_110);
  if (ppuStack_110 != (undefined **)0x0) {
    ppuVar3 = (undefined **)ppuStack_110[2];
    plVar11 = (long *)ppuStack_110[3];
    ppuStack_120 = ppuVar3;
    plStack_118 = plVar11;
    if (plVar11 == (long *)0x0) {
      if (ppuVar3 != (undefined **)0x0) goto LAB_10a3ce070;
    }
    else {
      plVar1 = plVar11 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (ppuVar3 != (undefined **)0x0) {
LAB_10a3ce070:
        ppuStack_120 = (undefined **)0x0;
        plStack_118 = (long *)0x0;
        uStack_130 = 0;
        uStack_128 = 0;
        puStack_a8 = &UNK_109896774;
        ppuStack_a0 = &PTR_DAT_110b17068;
        puVar6 = (undefined8 *)0xd0;
        ppuStack_b0 = ppuVar3;
        ppuStack_98 = ppuVar3;
        plStack_90 = plVar11;
        __Znwm();
        puVar6[2] = 0;
        puVar13 = puVar6 + 3;
        *puVar6 = &PTR_DAT_110ae90f0;
        puVar6[1] = 0;
        FUN_10a3ee05c(puVar13,&UNK_10f655d8e,0x10,1,&ppuStack_b0,&plStack_100);
        puStack_f0 = &UNK_109896774;
        ppuStack_e8 = &PTR_DAT_110b17068;
        puStack_f8 = puVar13;
        puStack_e0 = puVar13;
        puStack_d8 = puVar6;
        func_0x0001092ba41c(&ppuStack_b0);
        plVar11 = plStack_108;
        if (plStack_108 != (long *)0x0) {
          plVar1 = plStack_108 + 1;
          do {
            lVar12 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_108 + 0x10))(plStack_108);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        goto LAB_10a3ce198;
      }
      do {
        lVar12 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
  }
  plVar11 = plStack_108;
  if (plStack_108 != (long *)0x0) {
    plVar1 = plStack_108 + 1;
    do {
      lVar12 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  puVar6 = (undefined8 *)0xd0;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_DAT_110ae90f0;
  puVar13 = puVar6 + 3;
  ppuStack_b0 = &PTR_PTR_1132fed50;
  puStack_a8 = &UNK_1053a6a3c;
  ppuStack_a0 = &PTR_DAT_110ae9180;
  func_0x000109d18e28(puVar13,&UNK_10f655d8e,0x10,&ppuStack_b0,&plStack_100);
  func_0x0001092ba41c(&ppuStack_b0);
  puStack_f0 = &UNK_109896774;
  ppuStack_e8 = &PTR_DAT_110b17068;
  puStack_f8 = puVar13;
  puStack_e0 = puVar13;
  puStack_d8 = puVar6;
LAB_10a3ce198:
  plVar11 = plStack_100;
  if (plStack_100 != (long *)0x0) {
    puVar2 = (ulong *)(plStack_100 + 1);
    do {
      uVar10 = *puVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = uVar10 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      (**(code **)(*plStack_100 + 0x10))(plStack_100);
      do {
        uVar10 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar10 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*plVar11 + 8))(plVar11);
      }
    }
  }
  ppuVar8 = &puStack_f8;
  FUN_10a1087d0(param_1 + 0x1b0);
  ppuVar7 = &puStack_f8;
  func_0x0001092ba41c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppuVar7;
  }
  ___stack_chk_fail();
  func_0x0001092ba41c(&ppuStack_b0);
  func_0x00010a06e274(&uStack_130);
  func_0x00010a061620(&ppuStack_120);
  FUN_10a0a16d0(&ppuStack_110);
  plVar11 = plStack_100;
  if (plStack_100 != (long *)0x0) {
    puVar2 = (ulong *)(plStack_100 + 1);
    do {
      uVar10 = *puVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = uVar10 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      (**(code **)(*plStack_100 + 0x10))(plStack_100);
      do {
        uVar10 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar10 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*plVar11 + 8))(plVar11);
      }
    }
  }
  __Unwind_Resume();
  puVar6 = ppuVar8[1];
  puVar13 = *ppuVar8;
  *ppuVar8 = (undefined8 *)0x0;
  ppuVar8[1] = (undefined8 *)0x0;
  plVar11 = ppuVar7[1];
  ppuVar7[1] = puVar6;
  *ppuVar7 = puVar13;
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 1;
    do {
      lVar12 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  return ppuVar7;
}



/* Entry: 10a3ce310; end: 10a3ce373;  */

undefined8 * FUN_10a3ce310(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a3ce374; end: 10a3ce433;  */

void FUN_10a3ce374(long param_1,undefined4 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_40;
  long *plStack_38;
  
  if (*(long *)(param_1 + 0xa20) == 0) {
    plVar4 = (long *)0x40;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_110bd2a40;
    plVar4[4] = 0;
    plVar4[5] = 0;
    *(undefined4 *)(plVar4 + 6) = param_2;
    *(undefined4 *)((long)plVar4 + 0x34) = 0;
    *(undefined2 *)(plVar4 + 7) = 0;
    plStack_40 = plVar4 + 3;
    *plStack_40 = (long)&PTR_FUN_110c38400;
    plStack_38 = plVar4;
    FUN_10a3debd4(param_1 + 0xa20,&plStack_40);
    plVar4 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
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
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  else {
    *(undefined4 *)(*(long *)(param_1 + 0xa20) + 0x18) = param_2;
  }
  *(undefined4 *)(param_1 + 0xd18) = param_2;
  return;
}



/* Entry: 10a3ce434; end: 10a3ce55b;  */

/* WARNING: Possible PIC construction at 0x00010a3ce448: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a3ce44c) */

long FUN_10a3ce434(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x28);
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
  return param_1 + 0x20;
}



/* Entry: 10a3ce55c; end: 10a3cf39f;  */

undefined * FUN_10a3ce55c(undefined *param_1)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  undefined **ppuVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined *unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  undefined *unaff_x22;
  undefined8 unaff_x23;
  long lVar14;
  undefined1 *unaff_x24;
  undefined1 *unaff_x25;
  undefined *unaff_x26;
  undefined **unaff_x27;
  undefined1 *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined1 **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined ***)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
    if (*(long *)(param_1 + 0x880) != 0) {
      (**(code **)(**(long **)(*(long *)(param_1 + 0x880) + 0x48) + 0x38))
                ((undefined1 *)((long)register0x00000008 + -0x370));
      puVar12 = *(undefined8 **)((long)register0x00000008 + -0xa8);
      if (puVar12 < *(undefined8 **)((long)register0x00000008 + -0xa0)) {
        *puVar12 = *(undefined8 *)((long)register0x00000008 + -0x370);
        *(undefined8 **)((long)register0x00000008 + -0xa8) = puVar12 + 1;
      }
      else {
        puVar6 = (undefined1 *)((long)register0x00000008 + -0xb0);
        func_0x0001098b74c4(puVar6,(undefined1 *)((long)register0x00000008 + -0x370));
        plVar5 = *(long **)((long)register0x00000008 + -0x370);
        *(undefined1 **)((long)register0x00000008 + -0xa8) = puVar6;
        if (plVar5 != (long *)0x0) {
          puVar1 = (ulong *)(plVar5 + 1);
          do {
            uVar13 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar13 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar13 & 0x1fffffffc) == 4) {
            do {
              uVar13 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar13 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar13 - 1 == 0) {
              (**(code **)(*plVar5 + 8))();
            }
          }
        }
      }
    }
    if (*(long *)(param_1 + 0x870) != 0) {
      FUN_10a462294((undefined1 *)((long)register0x00000008 + -0x370));
      puVar12 = *(undefined8 **)((long)register0x00000008 + -0xa8);
      if (puVar12 < *(undefined8 **)((long)register0x00000008 + -0xa0)) {
        *puVar12 = *(undefined8 *)((long)register0x00000008 + -0x370);
        *(undefined8 **)((long)register0x00000008 + -0xa8) = puVar12 + 1;
      }
      else {
        puVar6 = (undefined1 *)((long)register0x00000008 + -0xb0);
        func_0x0001098b74c4(puVar6,(undefined1 *)((long)register0x00000008 + -0x370));
        plVar5 = *(long **)((long)register0x00000008 + -0x370);
        *(undefined1 **)((long)register0x00000008 + -0xa8) = puVar6;
        if (plVar5 != (long *)0x0) {
          puVar1 = (ulong *)(plVar5 + 1);
          do {
            uVar13 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar13 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar13 & 0x1fffffffc) == 4) {
            do {
              uVar13 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar13 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar13 - 1 == 0) {
              (**(code **)(*plVar5 + 8))();
            }
          }
        }
      }
    }
    if (param_1[0x1a8] == '\x01') {
      plVar5 = *(long **)(param_1 + 0x160);
      (**(code **)(*plVar5 + 0x18))();
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))((undefined1 *)((long)register0x00000008 + -0x370));
        puVar12 = *(undefined8 **)((long)register0x00000008 + -0xa8);
        if (puVar12 < *(undefined8 **)((long)register0x00000008 + -0xa0)) {
          *puVar12 = *(undefined8 *)((long)register0x00000008 + -0x370);
          *(undefined8 **)((long)register0x00000008 + -0xa8) = puVar12 + 1;
        }
        else {
          puVar6 = (undefined1 *)((long)register0x00000008 + -0xb0);
          func_0x0001098b74c4(puVar6,(undefined1 *)((long)register0x00000008 + -0x370));
          plVar5 = *(long **)((long)register0x00000008 + -0x370);
          *(undefined1 **)((long)register0x00000008 + -0xa8) = puVar6;
          if (plVar5 != (long *)0x0) {
            puVar1 = (ulong *)(plVar5 + 1);
            do {
              uVar13 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar13 - 4;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((uVar13 & 0x1fffffffc) == 4) {
              do {
                uVar13 = *puVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = uVar13 - 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (uVar13 - 1 == 0) {
                (**(code **)(*plVar5 + 8))();
              }
            }
          }
        }
      }
    }
    if (param_1[0x158] == '\x01') {
      plVar5 = *(long **)(param_1 + 0x110);
      (**(code **)(*plVar5 + 0x18))();
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))((undefined1 *)((long)register0x00000008 + -0x370));
        puVar12 = *(undefined8 **)((long)register0x00000008 + -0xa8);
        if (puVar12 < *(undefined8 **)((long)register0x00000008 + -0xa0)) {
          *puVar12 = *(undefined8 *)((long)register0x00000008 + -0x370);
          *(undefined8 **)((long)register0x00000008 + -0xa8) = puVar12 + 1;
        }
        else {
          puVar6 = (undefined1 *)((long)register0x00000008 + -0xb0);
          func_0x0001098b74c4(puVar6,(undefined1 *)((long)register0x00000008 + -0x370));
          plVar5 = *(long **)((long)register0x00000008 + -0x370);
          *(undefined1 **)((long)register0x00000008 + -0xa8) = puVar6;
          if (plVar5 != (long *)0x0) {
            puVar1 = (ulong *)(plVar5 + 1);
            do {
              uVar13 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar13 - 4;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((uVar13 & 0x1fffffffc) == 4) {
              do {
                uVar13 = *puVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = uVar13 - 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (uVar13 - 1 == 0) {
                (**(code **)(*plVar5 + 8))();
              }
            }
          }
        }
      }
    }
    if (param_1[0x1f8] == '\x01') {
      plVar5 = *(long **)(param_1 + 0x1b0);
      (**(code **)(*plVar5 + 0x18))();
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))((undefined1 *)((long)register0x00000008 + -0x370));
        puVar12 = *(undefined8 **)((long)register0x00000008 + -0xa8);
        if (puVar12 < *(undefined8 **)((long)register0x00000008 + -0xa0)) {
          *puVar12 = *(undefined8 *)((long)register0x00000008 + -0x370);
          *(undefined8 **)((long)register0x00000008 + -0xa8) = puVar12 + 1;
        }
        else {
          puVar6 = (undefined1 *)((long)register0x00000008 + -0xb0);
          func_0x0001098b74c4(puVar6,(undefined1 *)((long)register0x00000008 + -0x370));
          plVar5 = *(long **)((long)register0x00000008 + -0x370);
          *(undefined1 **)((long)register0x00000008 + -0xa8) = puVar6;
          if (plVar5 != (long *)0x0) {
            puVar1 = (ulong *)(plVar5 + 1);
            do {
              uVar13 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar13 - 4;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((uVar13 & 0x1fffffffc) == 4) {
              do {
                uVar13 = *puVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = uVar13 - 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (uVar13 - 1 == 0) {
                (**(code **)(*plVar5 + 8))();
              }
            }
          }
        }
      }
    }
    lVar14 = *(long *)((long)register0x00000008 + -0xb0);
    lVar2 = *(long *)((long)register0x00000008 + -0xa8);
    if (lVar14 == lVar2) {
      FUN_109d1b124((undefined1 *)((long)register0x00000008 + -0x380));
    }
    else {
      *(long *)((long)register0x00000008 + -0x378) = lVar2 - lVar14 >> 3;
      func_0x0001098b7954((undefined1 *)((long)register0x00000008 + -0x370),
                          (undefined1 *)((long)register0x00000008 + -0x378));
      plVar5 = (long *)(*(long *)((long)register0x00000008 + -0x360) + 8);
      if (*plVar5 != 0) {
        func_0x0001092b4274(plVar5);
      }
      *plVar5 = *(long *)((long)register0x00000008 + -0x368);
      *(undefined8 *)((long)register0x00000008 + -0x368) = 0;
      lVar10 = 0;
      do {
        func_0x0001098b799c(*(undefined8 *)((long)register0x00000008 + -0x360),lVar10,lVar14);
        lVar14 = lVar14 + 8;
        lVar10 = lVar10 + 1;
      } while (lVar14 != lVar2);
      *(undefined8 *)((long)register0x00000008 + -0x380) =
           *(undefined8 *)((long)register0x00000008 + -0x370);
      *(undefined8 *)((long)register0x00000008 + -0x370) = 0;
      if (*(long *)((long)register0x00000008 + -0x368) != 0) {
        func_0x0001092b4274((undefined1 *)((long)register0x00000008 + -0x368));
        plVar5 = *(long **)((long)register0x00000008 + -0x370);
        if (plVar5 != (long *)0x0) {
          puVar1 = (ulong *)(plVar5 + 1);
          do {
            uVar13 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar13 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar13 & 0x1fffffffc) == 4) {
            do {
              uVar13 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar13 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar13 - 1 == 0) {
              (**(code **)(*plVar5 + 8))();
            }
          }
        }
      }
    }
    *(undefined1 **)((long)register0x00000008 + -0x370) =
         (undefined1 *)((long)register0x00000008 + -0xb0);
    FUN_10a2325bc((undefined1 *)((long)register0x00000008 + -0x370));
    plVar5 = *(long **)((long)register0x00000008 + -0x380);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar13 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar13 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar13 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    pbVar7 = (byte *)0x1138363e8;
    FUN_10a08fec0();
    if ((*pbVar7 & 1) != 0) {
      _glFinish();
    }
    param_1[0xd72] = 1;
    ppuVar8 = &PTR___tlv_bootstrap_11340dea0;
    (*(code *)PTR___tlv_bootstrap_11340dea0)();
    unaff_x22 = *ppuVar8;
    *ppuVar8 = param_1;
    if (*(long *)(param_1 + 0xb00) != 0) {
      FUN_10a76c62c();
    }
    *(code **)((long)register0x00000008 + -0x370) = FUN_10a3ec858;
    *(undefined ***)((long)register0x00000008 + -0x368) = &PTR_FUN_110bd1528;
    *(code **)((long)register0x00000008 + -0x330) = FUN_10a3ec8a8;
    *(undefined ***)((long)register0x00000008 + -0x328) = &PTR_FUN_110bd1548;
    *(undefined **)((long)register0x00000008 + -800) = param_1;
    *(code **)((long)register0x00000008 + -0x2f0) = FUN_10a3ed298;
    *(undefined ***)((long)register0x00000008 + -0x2e8) = &PTR_FUN_110bd1568;
    *(undefined **)((long)register0x00000008 + -0x2e0) = param_1;
    *(code **)((long)register0x00000008 + -0x2b0) = FUN_10a3ed388;
    *(undefined ***)((long)register0x00000008 + -0x2a8) = &PTR_FUN_110bd1588;
    *(undefined **)((long)register0x00000008 + -0x2a0) = param_1;
    *(code **)((long)register0x00000008 + -0x270) = FUN_10a3ed560;
    *(undefined ***)((long)register0x00000008 + -0x268) = &PTR_FUN_110bd15a8;
    *(undefined **)((long)register0x00000008 + -0x260) = param_1;
    *(code **)((long)register0x00000008 + -0x230) = FUN_10a3ed6bc;
    *(undefined ***)((long)register0x00000008 + -0x228) = &PTR_FUN_110bd15c8;
    *(undefined **)((long)register0x00000008 + -0x220) = param_1;
    *(code **)((long)register0x00000008 + -0x1f0) = FUN_10a3ed91c;
    *(undefined ***)((long)register0x00000008 + -0x1e8) = &PTR_FUN_110bd15e8;
    *(undefined **)((long)register0x00000008 + -0x1e0) = param_1;
    *(code **)((long)register0x00000008 + -0x1b0) = FUN_10a3eda40;
    *(undefined ***)((long)register0x00000008 + -0x1a8) = &PTR_FUN_110bd1608;
    *(undefined **)((long)register0x00000008 + -0x1a0) = param_1;
    *(code **)((long)register0x00000008 + -0x170) = FUN_10a3edb18;
    *(undefined ***)((long)register0x00000008 + -0x168) = &PTR_FUN_110bd1628;
    *(undefined **)((long)register0x00000008 + -0x160) = param_1;
    *(code **)((long)register0x00000008 + -0x130) = FUN_10a3edc54;
    *(undefined ***)((long)register0x00000008 + -0x128) = &PTR_FUN_110bd1648;
    *(undefined **)((long)register0x00000008 + -0x120) = param_1;
    unaff_x24 = (undefined1 *)((long)register0x00000008 + -0xb0);
    lVar14 = 0x2c0;
    unaff_x25 = (undefined1 *)((long)register0x00000008 + -0x370);
    *(code **)((long)register0x00000008 + -0xf0) = FUN_10a3edd90;
    *(undefined ***)((long)register0x00000008 + -0xe8) = &PTR_FUN_110bd1668;
    unaff_x26 = &UNK_1053a6a3c;
    unaff_x27 = &PTR_DAT_110950c70;
    *(undefined **)((long)register0x00000008 + -0xe0) = param_1;
    do {
      unaff_x28 = unaff_x25 + lVar14;
      unaff_x21 = (long *)(unaff_x28 + -0x38);
      puVar12 = (undefined8 *)*unaff_x21;
      if (*(char *)(puVar12 + 1) == '\x01') {
        *(undefined8 *)((long)register0x00000008 + -0xb0) = *(undefined8 *)(unaff_x28 + -0x40);
        (*(code *)puVar12[2])((undefined1 *)((long)register0x00000008 + -0xa8),unaff_x21);
        *(undefined **)(unaff_x28 + -0x40) = &UNK_1053a6a3c;
        (**(code **)*unaff_x21)(unaff_x21);
        *unaff_x21 = (long)&PTR_DAT_110950c70;
        (**(code **)((long)register0x00000008 + -0xb0))
                  ((undefined1 *)((long)register0x00000008 + -0xb0));
        (*(code *)**(undefined8 **)((long)register0x00000008 + -0xa8))
                  ((undefined1 *)((long)register0x00000008 + -0xa8));
        puVar12 = (undefined8 *)*unaff_x21;
      }
      (*(code *)*puVar12)(unaff_x21);
      lVar14 = lVar14 + -0x40;
    } while (lVar14 != 0);
    *ppuVar8 = unaff_x22;
    *(undefined **)((long)register0x00000008 + -0x370) = param_1 + 0x1158;
    func_0x00010a2e3118((undefined1 *)((long)register0x00000008 + -0x370));
    (*(code *)**(undefined8 **)(param_1 + 0xfc0))(param_1 + 0xfc0);
    __ZNSt3__15mutexD1Ev(param_1 + 0xf78);
    (*(code *)**(undefined8 **)(param_1 + 0xf40))(param_1 + 0xf40);
    (*(code *)**(undefined8 **)(param_1 + 0xf00))(param_1 + 0xf00);
    (*(code *)**(undefined8 **)(param_1 + 0xec0))(param_1 + 0xec0);
    (*(code *)**(undefined8 **)(param_1 + 0xe80))(param_1 + 0xe80);
    if (*(long *)(param_1 + 0xe40) != 0) {
      *(long *)(param_1 + 0xe48) = *(long *)(param_1 + 0xe40);
      __ZdlPv();
    }
    lVar14 = 0xe18;
    do {
      FUN_10a004cfc(param_1 + lVar14);
      lVar14 = lVar14 + -0x10;
    } while (lVar14 != 0xd78);
    FUN_10a5cf6e4(param_1 + 0xd48);
    func_0x00010a3ed14c(param_1 + 0xd40,0);
    FUN_10a3ec58c(param_1 + 0xd28);
    func_0x00010a3f6208(param_1 + 0xcf8);
    func_0x00010a3f7874(param_1 + 0xce8);
    func_0x00010a3f781c(param_1 + 0xcd8);
    func_0x00010a3f77c4(param_1 + 0xcc8);
    func_0x00010a1fec54(param_1 + 0xcb0);
    func_0x00010a09db64(param_1 + 0xc98);
    func_0x00010a09db64(param_1 + 0xc88);
    func_0x00010a09db64(param_1 + 0xc78);
    func_0x00010a09db64(param_1 + 0xc68);
    plVar5 = *(long **)(param_1 + 0xc60);
    *(undefined8 *)(param_1 + 0xc60) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    FUN_10a3ed8c0(param_1 + 0xc58,0);
    plVar5 = *(long **)(param_1 + 0xc50);
    *(undefined8 *)(param_1 + 0xc50) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    lVar14 = *(long *)(param_1 + 0xc48);
    *(undefined8 *)(param_1 + 0xc48) = 0;
    if (lVar14 != 0) {
      func_0x00010a3f775c();
    }
    func_0x00010a3f7714(param_1 + 0xc30,*(undefined8 *)(param_1 + 0xc38));
    func_0x00010a05248c(param_1 + 0xbf8);
    func_0x00010a05248c(param_1 + 0xbe8);
    func_0x00010a05248c(param_1 + 0xbd8);
    FUN_10a3f76ec(param_1 + 0xbd0,0);
    func_0x00010a3ed0c8(param_1 + 0xbc8,0);
    func_0x00010a3f7694(param_1 + 3000);
    func_0x00010a3f761c(param_1 + 0xbb0,0);
    FUN_10a3f75f4(param_1 + 0xba8,0);
    plVar5 = *(long **)(param_1 + 0xba0);
    *(undefined8 *)(param_1 + 0xba0) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    func_0x00010a3f759c(param_1 + 0xb90);
    func_0x00010a3f7544(param_1 + 0xb80);
    func_0x00010a3f74ec(param_1 + 0xb70);
    func_0x00010a296760(param_1 + 0xb60);
    func_0x00010a3f74ac(param_1 + 0xb58,0);
    func_0x00010a3f7454(param_1 + 0xb48);
    func_0x00010a3f73fc(param_1 + 0xb38);
    plVar5 = *(long **)(param_1 + 0xb30);
    *(undefined8 *)(param_1 + 0xb30) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    func_0x00010a3f73a4(param_1 + 0xb20);
    func_0x00010a3f734c(param_1 + 0xb10);
    func_0x00010a3f72f4(param_1 + 0xb00);
    func_0x00010a3f729c(param_1 + 0xaf0);
    func_0x00010a3f7244(param_1 + 0xae0);
    func_0x00010a3f71ec(param_1 + 0xad0);
    func_0x00010a3f7194(param_1 + 0xac0);
    func_0x00010a3f713c(param_1 + 0xab0);
    func_0x00010a3f70e4(param_1 + 0xaa0);
    func_0x00010a3f708c(param_1 + 0xa90);
    func_0x00010a3f7034(param_1 + 0xa80);
    func_0x00010a3f6fdc(param_1 + 0xa70);
    func_0x00010a3f6f84(param_1 + 0xa60);
    func_0x00010a3f6f2c(param_1 + 0xa50);
    func_0x00010a3f6ed4(param_1 + 0xa40);
    func_0x00010a3ed050(param_1 + 0xa38,0);
    plVar5 = *(long **)(param_1 + 0xa30);
    *(undefined8 *)(param_1 + 0xa30) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    func_0x00010a3f6e7c(param_1 + 0xa20);
    func_0x00010a3f6e24(param_1 + 0xa10);
    func_0x00010a3f6dcc(param_1 + 0xa00);
    func_0x00010a3f6d74(param_1 + 0x9f0);
    func_0x00010a3f6d1c(param_1 + 0x9e0);
    func_0x00010a3f6cc4(param_1 + 0x9d0);
    func_0x00010a3f6c6c(param_1 + 0x9c0);
    func_0x00010a3f6c14(param_1 + 0x9b0);
    func_0x00010a3f6bbc(param_1 + 0x9a0);
    func_0x00010a3f6b64(param_1 + 0x990);
    func_0x00010a3f6b0c(param_1 + 0x980);
    FUN_10a082070(param_1 + 0x970);
    func_0x00010a3f6ab4(param_1 + 0x960);
    func_0x00010a3f6a5c(param_1 + 0x950);
    func_0x00010a3f6a04(param_1 + 0x940);
    func_0x00010a3f69ac(param_1 + 0x930);
    func_0x00010a3f6960(param_1 + 0x928,0);
    plVar5 = *(long **)(param_1 + 0x920);
    *(undefined8 *)(param_1 + 0x920) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    func_0x00010a3f6908(param_1 + 0x910);
    func_0x00010a3f68b0(param_1 + 0x900);
    FUN_10a3ed028(param_1 + 0x8f8,0);
    func_0x00010a3f6858(param_1 + 0x8e8);
    func_0x00010a3f6800(param_1 + 0x8d8);
    func_0x00010a3f67a8(param_1 + 0x8c8);
    plVar5 = *(long **)(param_1 + 0x8c0);
    *(undefined8 *)(param_1 + 0x8c0) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = *(long **)(param_1 + 0x8b8);
    *(undefined8 *)(param_1 + 0x8b8) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    func_0x00010a3f6750(param_1 + 0x8a8);
    func_0x00010a3f66f8(param_1 + 0x898);
    func_0x00010a3f66a0(param_1 + 0x888);
    FUN_10a3f6678(param_1 + 0x880,0);
    FUN_10a3f6520(param_1 + 0x878,0);
    plVar5 = *(long **)(param_1 + 0x870);
    *(undefined8 *)(param_1 + 0x870) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    FUN_10a3f64f8(param_1 + 0x868,0);
    FUN_10a054c5c(param_1 + 0x858);
    uVar11 = 0;
    func_0x00010a3ed08c(param_1 + 0x850);
    func_0x00010a3f64a0(param_1 + 0x840);
    func_0x00010a3f6448(param_1 + 0x830);
    plVar5 = *(long **)(param_1 + 0x828);
    *(undefined8 *)(param_1 + 0x828) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    FUN_10a3ec600(*(undefined8 *)(param_1 + 0x818));
    if (*(long *)(param_1 + 0x7f8) != 0) {
      *(long *)(param_1 + 0x800) = *(long *)(param_1 + 0x7f8);
      __ZdlPv();
    }
    func_0x00010a3ec65c(*(undefined8 *)(param_1 + 0x7e0));
    if (*(long *)(param_1 + 0x7c0) != 0) {
      *(long *)(param_1 + 0x7c8) = *(long *)(param_1 + 0x7c0);
      __ZdlPv();
    }
    func_0x00010a3ec6b8(*(undefined8 *)(param_1 + 0x7a8));
    if (*(long *)(param_1 + 0x788) != 0) {
      *(long *)(param_1 + 0x790) = *(long *)(param_1 + 0x788);
      __ZdlPv();
    }
    func_0x00010a3bfe08(param_1 + 0x660);
    FUN_10a3c869c(param_1 + 0x4f8);
    *(undefined **)((long)register0x00000008 + -0x370) = param_1 + 0x4e0;
    FUN_10a0d80a4((undefined1 *)((long)register0x00000008 + -0x370));
    FUN_10a3ec714(param_1 + 0x4c8);
    func_0x00010a3ec780(param_1 + 0x4b0);
    func_0x00010a3ec7ec(param_1 + 0x490);
    func_0x00010a3ec7ec(param_1 + 0x478);
    func_0x00010a3f6400(param_1 + 0x450);
    __ZNSt3__15mutexD1Ev(param_1 + 0x410);
    __ZNSt3__15mutexD1Ev(param_1 + 0x3d0);
    __ZNSt3__15mutexD1Ev(param_1 + 0x390);
    __ZNSt3__15mutexD1Ev(param_1 + 0x350);
    __ZNSt3__15mutexD1Ev(param_1 + 0x310);
    __ZNSt3__15mutexD1Ev(param_1 + 0x2d0);
    __ZNSt3__15mutexD1Ev(param_1 + 0x290);
    plVar5 = *(long **)(param_1 + 0x270);
    *(undefined8 *)(param_1 + 0x270) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    if ((char)param_1[0x26f] < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 600));
    }
    if (*(long *)(param_1 + 0x218) != 0) {
      *(long *)(param_1 + 0x220) = *(long *)(param_1 + 0x218);
      __ZdlPv();
    }
    if (param_1[0x1f8] == '\x01') {
      func_0x0001092ba41c(param_1 + 0x1b0);
    }
    if (param_1[0x1a8] == '\x01') {
      func_0x0001092ba41c(param_1 + 0x160);
    }
    if (param_1[0x158] == '\x01') {
      func_0x0001092ba41c(param_1 + 0x110);
    }
    FUN_10a3f5e88(param_1 + 0x100);
    lVar14 = 0x58;
    do {
      plVar5 = *(long **)(param_1 + lVar14);
      *(undefined8 *)(param_1 + lVar14) = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      iVar9 = (int)uVar11;
      lVar14 = lVar14 + -8;
    } while (lVar14 != 0x28);
    unaff_x19 = *(undefined **)(param_1 + 0x20);
    if (unaff_x19 != (undefined *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x70))
    break;
    ___stack_chk_fail();
    if (iVar9 == 0) {
      __Unwind_Resume(unaff_x19);
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0xa8))
                ((undefined1 *)((long)register0x00000008 + -0xa8));
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0x3a8))();
    }
    else {
      plVar5 = *(long **)((long)register0x00000008 + -0x370);
      if (plVar5 != (long *)0x0) {
        puVar1 = (ulong *)(plVar5 + 1);
        do {
          uVar13 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar13 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar13 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
      *(undefined1 **)((long)register0x00000008 + -0x370) =
           (undefined1 *)((long)register0x00000008 + -0xb0);
      FUN_10a2325bc((undefined1 *)((long)register0x00000008 + -0x370));
    }
    unaff_x30 = FUN_10a3cf3a0;
    param_1 = unaff_x19;
    func_0x000104bd46a0();
    unaff_x23 = 0;
    unaff_x20 = 0x28;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x380);
  }
  return param_1;
}



/* Entry: 10a3cf3a0; end: 10a3cf3ab;  */

undefined * FUN_10a3cf3a0(undefined *param_1)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  undefined **ppuVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined *unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  undefined *unaff_x22;
  long lVar14;
  undefined8 unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *unaff_x25;
  undefined *unaff_x26;
  undefined **unaff_x27;
  undefined1 *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined1 **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined ***)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
    if (*(long *)(param_1 + 0x880) != 0) {
      (**(code **)(**(long **)(*(long *)(param_1 + 0x880) + 0x48) + 0x38))
                ((undefined1 *)((long)register0x00000008 + -0x370));
      puVar12 = *(undefined8 **)((long)register0x00000008 + -0xa8);
      if (puVar12 < *(undefined8 **)((long)register0x00000008 + -0xa0)) {
        *puVar12 = *(undefined8 *)((long)register0x00000008 + -0x370);
        *(undefined8 **)((long)register0x00000008 + -0xa8) = puVar12 + 1;
      }
      else {
        puVar6 = (undefined1 *)((long)register0x00000008 + -0xb0);
        func_0x0001098b74c4(puVar6,(undefined1 *)((long)register0x00000008 + -0x370));
        plVar5 = *(long **)((long)register0x00000008 + -0x370);
        *(undefined1 **)((long)register0x00000008 + -0xa8) = puVar6;
        if (plVar5 != (long *)0x0) {
          puVar1 = (ulong *)(plVar5 + 1);
          do {
            uVar13 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar13 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar13 & 0x1fffffffc) == 4) {
            do {
              uVar13 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar13 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar13 - 1 == 0) {
              (**(code **)(*plVar5 + 8))();
            }
          }
        }
      }
    }
    if (*(long *)(param_1 + 0x870) != 0) {
      FUN_10a462294((undefined1 *)((long)register0x00000008 + -0x370));
      puVar12 = *(undefined8 **)((long)register0x00000008 + -0xa8);
      if (puVar12 < *(undefined8 **)((long)register0x00000008 + -0xa0)) {
        *puVar12 = *(undefined8 *)((long)register0x00000008 + -0x370);
        *(undefined8 **)((long)register0x00000008 + -0xa8) = puVar12 + 1;
      }
      else {
        puVar6 = (undefined1 *)((long)register0x00000008 + -0xb0);
        func_0x0001098b74c4(puVar6,(undefined1 *)((long)register0x00000008 + -0x370));
        plVar5 = *(long **)((long)register0x00000008 + -0x370);
        *(undefined1 **)((long)register0x00000008 + -0xa8) = puVar6;
        if (plVar5 != (long *)0x0) {
          puVar1 = (ulong *)(plVar5 + 1);
          do {
            uVar13 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar13 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar13 & 0x1fffffffc) == 4) {
            do {
              uVar13 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar13 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar13 - 1 == 0) {
              (**(code **)(*plVar5 + 8))();
            }
          }
        }
      }
    }
    if (param_1[0x1a8] == '\x01') {
      plVar5 = *(long **)(param_1 + 0x160);
      (**(code **)(*plVar5 + 0x18))();
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))((undefined1 *)((long)register0x00000008 + -0x370));
        puVar12 = *(undefined8 **)((long)register0x00000008 + -0xa8);
        if (puVar12 < *(undefined8 **)((long)register0x00000008 + -0xa0)) {
          *puVar12 = *(undefined8 *)((long)register0x00000008 + -0x370);
          *(undefined8 **)((long)register0x00000008 + -0xa8) = puVar12 + 1;
        }
        else {
          puVar6 = (undefined1 *)((long)register0x00000008 + -0xb0);
          func_0x0001098b74c4(puVar6,(undefined1 *)((long)register0x00000008 + -0x370));
          plVar5 = *(long **)((long)register0x00000008 + -0x370);
          *(undefined1 **)((long)register0x00000008 + -0xa8) = puVar6;
          if (plVar5 != (long *)0x0) {
            puVar1 = (ulong *)(plVar5 + 1);
            do {
              uVar13 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar13 - 4;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((uVar13 & 0x1fffffffc) == 4) {
              do {
                uVar13 = *puVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = uVar13 - 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (uVar13 - 1 == 0) {
                (**(code **)(*plVar5 + 8))();
              }
            }
          }
        }
      }
    }
    if (param_1[0x158] == '\x01') {
      plVar5 = *(long **)(param_1 + 0x110);
      (**(code **)(*plVar5 + 0x18))();
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))((undefined1 *)((long)register0x00000008 + -0x370));
        puVar12 = *(undefined8 **)((long)register0x00000008 + -0xa8);
        if (puVar12 < *(undefined8 **)((long)register0x00000008 + -0xa0)) {
          *puVar12 = *(undefined8 *)((long)register0x00000008 + -0x370);
          *(undefined8 **)((long)register0x00000008 + -0xa8) = puVar12 + 1;
        }
        else {
          puVar6 = (undefined1 *)((long)register0x00000008 + -0xb0);
          func_0x0001098b74c4(puVar6,(undefined1 *)((long)register0x00000008 + -0x370));
          plVar5 = *(long **)((long)register0x00000008 + -0x370);
          *(undefined1 **)((long)register0x00000008 + -0xa8) = puVar6;
          if (plVar5 != (long *)0x0) {
            puVar1 = (ulong *)(plVar5 + 1);
            do {
              uVar13 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar13 - 4;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((uVar13 & 0x1fffffffc) == 4) {
              do {
                uVar13 = *puVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = uVar13 - 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (uVar13 - 1 == 0) {
                (**(code **)(*plVar5 + 8))();
              }
            }
          }
        }
      }
    }
    if (param_1[0x1f8] == '\x01') {
      plVar5 = *(long **)(param_1 + 0x1b0);
      (**(code **)(*plVar5 + 0x18))();
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))((undefined1 *)((long)register0x00000008 + -0x370));
        puVar12 = *(undefined8 **)((long)register0x00000008 + -0xa8);
        if (puVar12 < *(undefined8 **)((long)register0x00000008 + -0xa0)) {
          *puVar12 = *(undefined8 *)((long)register0x00000008 + -0x370);
          *(undefined8 **)((long)register0x00000008 + -0xa8) = puVar12 + 1;
        }
        else {
          puVar6 = (undefined1 *)((long)register0x00000008 + -0xb0);
          func_0x0001098b74c4(puVar6,(undefined1 *)((long)register0x00000008 + -0x370));
          plVar5 = *(long **)((long)register0x00000008 + -0x370);
          *(undefined1 **)((long)register0x00000008 + -0xa8) = puVar6;
          if (plVar5 != (long *)0x0) {
            puVar1 = (ulong *)(plVar5 + 1);
            do {
              uVar13 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar13 - 4;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((uVar13 & 0x1fffffffc) == 4) {
              do {
                uVar13 = *puVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = uVar13 - 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (uVar13 - 1 == 0) {
                (**(code **)(*plVar5 + 8))();
              }
            }
          }
        }
      }
    }
    lVar14 = *(long *)((long)register0x00000008 + -0xb0);
    lVar2 = *(long *)((long)register0x00000008 + -0xa8);
    if (lVar14 == lVar2) {
      FUN_109d1b124((undefined1 *)((long)register0x00000008 + -0x380));
    }
    else {
      *(long *)((long)register0x00000008 + -0x378) = lVar2 - lVar14 >> 3;
      func_0x0001098b7954((undefined1 *)((long)register0x00000008 + -0x370),
                          (undefined1 *)((long)register0x00000008 + -0x378));
      plVar5 = (long *)(*(long *)((long)register0x00000008 + -0x360) + 8);
      if (*plVar5 != 0) {
        func_0x0001092b4274(plVar5);
      }
      *plVar5 = *(long *)((long)register0x00000008 + -0x368);
      *(undefined8 *)((long)register0x00000008 + -0x368) = 0;
      lVar10 = 0;
      do {
        func_0x0001098b799c(*(undefined8 *)((long)register0x00000008 + -0x360),lVar10,lVar14);
        lVar14 = lVar14 + 8;
        lVar10 = lVar10 + 1;
      } while (lVar14 != lVar2);
      *(undefined8 *)((long)register0x00000008 + -0x380) =
           *(undefined8 *)((long)register0x00000008 + -0x370);
      *(undefined8 *)((long)register0x00000008 + -0x370) = 0;
      if (*(long *)((long)register0x00000008 + -0x368) != 0) {
        func_0x0001092b4274((undefined1 *)((long)register0x00000008 + -0x368));
        plVar5 = *(long **)((long)register0x00000008 + -0x370);
        if (plVar5 != (long *)0x0) {
          puVar1 = (ulong *)(plVar5 + 1);
          do {
            uVar13 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar13 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar13 & 0x1fffffffc) == 4) {
            do {
              uVar13 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar13 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar13 - 1 == 0) {
              (**(code **)(*plVar5 + 8))();
            }
          }
        }
      }
    }
    *(undefined1 **)((long)register0x00000008 + -0x370) =
         (undefined1 *)((long)register0x00000008 + -0xb0);
    FUN_10a2325bc((undefined1 *)((long)register0x00000008 + -0x370));
    plVar5 = *(long **)((long)register0x00000008 + -0x380);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar13 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar13 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar13 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    pbVar7 = (byte *)0x1138363e8;
    FUN_10a08fec0();
    if ((*pbVar7 & 1) != 0) {
      _glFinish();
    }
    param_1[0xd72] = 1;
    ppuVar8 = &PTR___tlv_bootstrap_11340dea0;
    (*(code *)PTR___tlv_bootstrap_11340dea0)();
    unaff_x22 = *ppuVar8;
    *ppuVar8 = param_1;
    if (*(long *)(param_1 + 0xb00) != 0) {
      FUN_10a76c62c();
    }
    *(code **)((long)register0x00000008 + -0x370) = FUN_10a3ec858;
    *(undefined ***)((long)register0x00000008 + -0x368) = &PTR_FUN_110bd1528;
    *(code **)((long)register0x00000008 + -0x330) = FUN_10a3ec8a8;
    *(undefined ***)((long)register0x00000008 + -0x328) = &PTR_FUN_110bd1548;
    *(undefined **)((long)register0x00000008 + -800) = param_1;
    *(code **)((long)register0x00000008 + -0x2f0) = FUN_10a3ed298;
    *(undefined ***)((long)register0x00000008 + -0x2e8) = &PTR_FUN_110bd1568;
    *(undefined **)((long)register0x00000008 + -0x2e0) = param_1;
    *(code **)((long)register0x00000008 + -0x2b0) = FUN_10a3ed388;
    *(undefined ***)((long)register0x00000008 + -0x2a8) = &PTR_FUN_110bd1588;
    *(undefined **)((long)register0x00000008 + -0x2a0) = param_1;
    *(code **)((long)register0x00000008 + -0x270) = FUN_10a3ed560;
    *(undefined ***)((long)register0x00000008 + -0x268) = &PTR_FUN_110bd15a8;
    *(undefined **)((long)register0x00000008 + -0x260) = param_1;
    *(code **)((long)register0x00000008 + -0x230) = FUN_10a3ed6bc;
    *(undefined ***)((long)register0x00000008 + -0x228) = &PTR_FUN_110bd15c8;
    *(undefined **)((long)register0x00000008 + -0x220) = param_1;
    *(code **)((long)register0x00000008 + -0x1f0) = FUN_10a3ed91c;
    *(undefined ***)((long)register0x00000008 + -0x1e8) = &PTR_FUN_110bd15e8;
    *(undefined **)((long)register0x00000008 + -0x1e0) = param_1;
    *(code **)((long)register0x00000008 + -0x1b0) = FUN_10a3eda40;
    *(undefined ***)((long)register0x00000008 + -0x1a8) = &PTR_FUN_110bd1608;
    *(undefined **)((long)register0x00000008 + -0x1a0) = param_1;
    *(code **)((long)register0x00000008 + -0x170) = FUN_10a3edb18;
    *(undefined ***)((long)register0x00000008 + -0x168) = &PTR_FUN_110bd1628;
    *(undefined **)((long)register0x00000008 + -0x160) = param_1;
    *(code **)((long)register0x00000008 + -0x130) = FUN_10a3edc54;
    *(undefined ***)((long)register0x00000008 + -0x128) = &PTR_FUN_110bd1648;
    *(undefined **)((long)register0x00000008 + -0x120) = param_1;
    unaff_x24 = (undefined1 *)((long)register0x00000008 + -0xb0);
    lVar14 = 0x2c0;
    unaff_x25 = (undefined1 *)((long)register0x00000008 + -0x370);
    *(code **)((long)register0x00000008 + -0xf0) = FUN_10a3edd90;
    *(undefined ***)((long)register0x00000008 + -0xe8) = &PTR_FUN_110bd1668;
    unaff_x26 = &UNK_1053a6a3c;
    unaff_x27 = &PTR_DAT_110950c70;
    *(undefined **)((long)register0x00000008 + -0xe0) = param_1;
    do {
      unaff_x28 = unaff_x25 + lVar14;
      unaff_x21 = (long *)(unaff_x28 + -0x38);
      puVar12 = (undefined8 *)*unaff_x21;
      if (*(char *)(puVar12 + 1) == '\x01') {
        *(undefined8 *)((long)register0x00000008 + -0xb0) = *(undefined8 *)(unaff_x28 + -0x40);
        (*(code *)puVar12[2])((undefined1 *)((long)register0x00000008 + -0xa8),unaff_x21);
        *(undefined **)(unaff_x28 + -0x40) = &UNK_1053a6a3c;
        (**(code **)*unaff_x21)(unaff_x21);
        *unaff_x21 = (long)&PTR_DAT_110950c70;
        (**(code **)((long)register0x00000008 + -0xb0))
                  ((undefined1 *)((long)register0x00000008 + -0xb0));
        (*(code *)**(undefined8 **)((long)register0x00000008 + -0xa8))
                  ((undefined1 *)((long)register0x00000008 + -0xa8));
        puVar12 = (undefined8 *)*unaff_x21;
      }
      (*(code *)*puVar12)(unaff_x21);
      lVar14 = lVar14 + -0x40;
    } while (lVar14 != 0);
    *ppuVar8 = unaff_x22;
    *(undefined **)((long)register0x00000008 + -0x370) = param_1 + 0x1158;
    func_0x00010a2e3118((undefined1 *)((long)register0x00000008 + -0x370));
    (*(code *)**(undefined8 **)(param_1 + 0xfc0))(param_1 + 0xfc0);
    __ZNSt3__15mutexD1Ev(param_1 + 0xf78);
    (*(code *)**(undefined8 **)(param_1 + 0xf40))(param_1 + 0xf40);
    (*(code *)**(undefined8 **)(param_1 + 0xf00))(param_1 + 0xf00);
    (*(code *)**(undefined8 **)(param_1 + 0xec0))(param_1 + 0xec0);
    (*(code *)**(undefined8 **)(param_1 + 0xe80))(param_1 + 0xe80);
    if (*(long *)(param_1 + 0xe40) != 0) {
      *(long *)(param_1 + 0xe48) = *(long *)(param_1 + 0xe40);
      __ZdlPv();
    }
    lVar14 = 0xe18;
    do {
      FUN_10a004cfc(param_1 + lVar14);
      lVar14 = lVar14 + -0x10;
    } while (lVar14 != 0xd78);
    FUN_10a5cf6e4(param_1 + 0xd48);
    func_0x00010a3ed14c(param_1 + 0xd40,0);
    FUN_10a3ec58c(param_1 + 0xd28);
    func_0x00010a3f6208(param_1 + 0xcf8);
    func_0x00010a3f7874(param_1 + 0xce8);
    func_0x00010a3f781c(param_1 + 0xcd8);
    func_0x00010a3f77c4(param_1 + 0xcc8);
    func_0x00010a1fec54(param_1 + 0xcb0);
    func_0x00010a09db64(param_1 + 0xc98);
    func_0x00010a09db64(param_1 + 0xc88);
    func_0x00010a09db64(param_1 + 0xc78);
    func_0x00010a09db64(param_1 + 0xc68);
    plVar5 = *(long **)(param_1 + 0xc60);
    *(undefined8 *)(param_1 + 0xc60) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    FUN_10a3ed8c0(param_1 + 0xc58,0);
    plVar5 = *(long **)(param_1 + 0xc50);
    *(undefined8 *)(param_1 + 0xc50) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    lVar14 = *(long *)(param_1 + 0xc48);
    *(undefined8 *)(param_1 + 0xc48) = 0;
    if (lVar14 != 0) {
      func_0x00010a3f775c();
    }
    func_0x00010a3f7714(param_1 + 0xc30,*(undefined8 *)(param_1 + 0xc38));
    func_0x00010a05248c(param_1 + 0xbf8);
    func_0x00010a05248c(param_1 + 0xbe8);
    func_0x00010a05248c(param_1 + 0xbd8);
    FUN_10a3f76ec(param_1 + 0xbd0,0);
    func_0x00010a3ed0c8(param_1 + 0xbc8,0);
    func_0x00010a3f7694(param_1 + 3000);
    func_0x00010a3f761c(param_1 + 0xbb0,0);
    FUN_10a3f75f4(param_1 + 0xba8,0);
    plVar5 = *(long **)(param_1 + 0xba0);
    *(undefined8 *)(param_1 + 0xba0) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    func_0x00010a3f759c(param_1 + 0xb90);
    func_0x00010a3f7544(param_1 + 0xb80);
    func_0x00010a3f74ec(param_1 + 0xb70);
    func_0x00010a296760(param_1 + 0xb60);
    func_0x00010a3f74ac(param_1 + 0xb58,0);
    func_0x00010a3f7454(param_1 + 0xb48);
    func_0x00010a3f73fc(param_1 + 0xb38);
    plVar5 = *(long **)(param_1 + 0xb30);
    *(undefined8 *)(param_1 + 0xb30) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    func_0x00010a3f73a4(param_1 + 0xb20);
    func_0x00010a3f734c(param_1 + 0xb10);
    func_0x00010a3f72f4(param_1 + 0xb00);
    func_0x00010a3f729c(param_1 + 0xaf0);
    func_0x00010a3f7244(param_1 + 0xae0);
    func_0x00010a3f71ec(param_1 + 0xad0);
    func_0x00010a3f7194(param_1 + 0xac0);
    func_0x00010a3f713c(param_1 + 0xab0);
    func_0x00010a3f70e4(param_1 + 0xaa0);
    func_0x00010a3f708c(param_1 + 0xa90);
    func_0x00010a3f7034(param_1 + 0xa80);
    func_0x00010a3f6fdc(param_1 + 0xa70);
    func_0x00010a3f6f84(param_1 + 0xa60);
    func_0x00010a3f6f2c(param_1 + 0xa50);
    func_0x00010a3f6ed4(param_1 + 0xa40);
    func_0x00010a3ed050(param_1 + 0xa38,0);
    plVar5 = *(long **)(param_1 + 0xa30);
    *(undefined8 *)(param_1 + 0xa30) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    func_0x00010a3f6e7c(param_1 + 0xa20);
    func_0x00010a3f6e24(param_1 + 0xa10);
    func_0x00010a3f6dcc(param_1 + 0xa00);
    func_0x00010a3f6d74(param_1 + 0x9f0);
    func_0x00010a3f6d1c(param_1 + 0x9e0);
    func_0x00010a3f6cc4(param_1 + 0x9d0);
    func_0x00010a3f6c6c(param_1 + 0x9c0);
    func_0x00010a3f6c14(param_1 + 0x9b0);
    func_0x00010a3f6bbc(param_1 + 0x9a0);
    func_0x00010a3f6b64(param_1 + 0x990);
    func_0x00010a3f6b0c(param_1 + 0x980);
    FUN_10a082070(param_1 + 0x970);
    func_0x00010a3f6ab4(param_1 + 0x960);
    func_0x00010a3f6a5c(param_1 + 0x950);
    func_0x00010a3f6a04(param_1 + 0x940);
    func_0x00010a3f69ac(param_1 + 0x930);
    func_0x00010a3f6960(param_1 + 0x928,0);
    plVar5 = *(long **)(param_1 + 0x920);
    *(undefined8 *)(param_1 + 0x920) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    func_0x00010a3f6908(param_1 + 0x910);
    func_0x00010a3f68b0(param_1 + 0x900);
    FUN_10a3ed028(param_1 + 0x8f8,0);
    func_0x00010a3f6858(param_1 + 0x8e8);
    func_0x00010a3f6800(param_1 + 0x8d8);
    func_0x00010a3f67a8(param_1 + 0x8c8);
    plVar5 = *(long **)(param_1 + 0x8c0);
    *(undefined8 *)(param_1 + 0x8c0) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = *(long **)(param_1 + 0x8b8);
    *(undefined8 *)(param_1 + 0x8b8) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    func_0x00010a3f6750(param_1 + 0x8a8);
    func_0x00010a3f66f8(param_1 + 0x898);
    func_0x00010a3f66a0(param_1 + 0x888);
    FUN_10a3f6678(param_1 + 0x880,0);
    FUN_10a3f6520(param_1 + 0x878,0);
    plVar5 = *(long **)(param_1 + 0x870);
    *(undefined8 *)(param_1 + 0x870) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    FUN_10a3f64f8(param_1 + 0x868,0);
    FUN_10a054c5c(param_1 + 0x858);
    uVar11 = 0;
    func_0x00010a3ed08c(param_1 + 0x850);
    func_0x00010a3f64a0(param_1 + 0x840);
    func_0x00010a3f6448(param_1 + 0x830);
    plVar5 = *(long **)(param_1 + 0x828);
    *(undefined8 *)(param_1 + 0x828) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    FUN_10a3ec600(*(undefined8 *)(param_1 + 0x818));
    if (*(long *)(param_1 + 0x7f8) != 0) {
      *(long *)(param_1 + 0x800) = *(long *)(param_1 + 0x7f8);
      __ZdlPv();
    }
    func_0x00010a3ec65c(*(undefined8 *)(param_1 + 0x7e0));
    if (*(long *)(param_1 + 0x7c0) != 0) {
      *(long *)(param_1 + 0x7c8) = *(long *)(param_1 + 0x7c0);
      __ZdlPv();
    }
    func_0x00010a3ec6b8(*(undefined8 *)(param_1 + 0x7a8));
    if (*(long *)(param_1 + 0x788) != 0) {
      *(long *)(param_1 + 0x790) = *(long *)(param_1 + 0x788);
      __ZdlPv();
    }
    func_0x00010a3bfe08(param_1 + 0x660);
    FUN_10a3c869c(param_1 + 0x4f8);
    *(undefined **)((long)register0x00000008 + -0x370) = param_1 + 0x4e0;
    FUN_10a0d80a4((undefined1 *)((long)register0x00000008 + -0x370));
    FUN_10a3ec714(param_1 + 0x4c8);
    func_0x00010a3ec780(param_1 + 0x4b0);
    func_0x00010a3ec7ec(param_1 + 0x490);
    func_0x00010a3ec7ec(param_1 + 0x478);
    func_0x00010a3f6400(param_1 + 0x450);
    __ZNSt3__15mutexD1Ev(param_1 + 0x410);
    __ZNSt3__15mutexD1Ev(param_1 + 0x3d0);
    __ZNSt3__15mutexD1Ev(param_1 + 0x390);
    __ZNSt3__15mutexD1Ev(param_1 + 0x350);
    __ZNSt3__15mutexD1Ev(param_1 + 0x310);
    __ZNSt3__15mutexD1Ev(param_1 + 0x2d0);
    __ZNSt3__15mutexD1Ev(param_1 + 0x290);
    plVar5 = *(long **)(param_1 + 0x270);
    *(undefined8 *)(param_1 + 0x270) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    if ((char)param_1[0x26f] < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 600));
    }
    if (*(long *)(param_1 + 0x218) != 0) {
      *(long *)(param_1 + 0x220) = *(long *)(param_1 + 0x218);
      __ZdlPv();
    }
    if (param_1[0x1f8] == '\x01') {
      func_0x0001092ba41c(param_1 + 0x1b0);
    }
    if (param_1[0x1a8] == '\x01') {
      func_0x0001092ba41c(param_1 + 0x160);
    }
    if (param_1[0x158] == '\x01') {
      func_0x0001092ba41c(param_1 + 0x110);
    }
    FUN_10a3f5e88(param_1 + 0x100);
    lVar14 = 0x58;
    do {
      plVar5 = *(long **)(param_1 + lVar14);
      *(undefined8 *)(param_1 + lVar14) = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      iVar9 = (int)uVar11;
      lVar14 = lVar14 + -8;
    } while (lVar14 != 0x28);
    unaff_x19 = *(undefined **)(param_1 + 0x20);
    if (unaff_x19 != (undefined *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x70))
    break;
    ___stack_chk_fail();
    if (iVar9 == 0) {
      __Unwind_Resume(unaff_x19);
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0xa8))
                ((undefined1 *)((long)register0x00000008 + -0xa8));
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0x3a8))();
    }
    else {
      plVar5 = *(long **)((long)register0x00000008 + -0x370);
      if (plVar5 != (long *)0x0) {
        puVar1 = (ulong *)(plVar5 + 1);
        do {
          uVar13 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar13 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar13 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
      *(undefined1 **)((long)register0x00000008 + -0x370) =
           (undefined1 *)((long)register0x00000008 + -0xb0);
      FUN_10a2325bc((undefined1 *)((long)register0x00000008 + -0x370));
    }
    unaff_x30 = FUN_10a3cf3a0;
    param_1 = unaff_x19;
    func_0x000104bd46a0();
    unaff_x23 = 0;
    unaff_x20 = 0x28;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x380);
  }
  return param_1;
}



/* Entry: 10a3cf3ac; end: 10a3cf3d7;  */

void FUN_10a3cf3ac(void)

{
  FUN_10a3ce55c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3cf3d8; end: 10a3cf61f;  */

void FUN_10a3cf3d8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(char *)(param_1 + 0x1f8) != '\x01') {
    return;
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  if ((*(byte *)(param_1 + 0x158) & 1) != 0) {
    plVar5 = *(long **)(param_1 + 0x110);
    (**(code **)(*plVar5 + 0x18))();
    if ((*(byte *)(param_1 + 0x1a8) & 1) != 0) {
      plVar6 = *(long **)(param_1 + 0x160);
      (**(code **)(*plVar6 + 0x18))();
      if ((*(byte *)(param_1 + 0x1f8) & 1) != 0) {
        plVar7 = *(long **)(param_1 + 0x1b0);
        (**(code **)(*plVar7 + 0x18))();
        if (plVar5 == (long *)0x0) {
          FUN_109d1b124(&lStack_48);
        }
        else {
          (**(code **)(*plVar5 + 0x38))(&lStack_48,plVar5);
        }
        if (plVar6 == (long *)0x0) {
          FUN_109d1b124(auStack_40);
        }
        else {
          (**(code **)(*plVar6 + 0x38))(auStack_40,plVar6);
        }
        if (plVar7 == (long *)0x0) {
          FUN_109d1b124(auStack_38);
        }
        else {
          (**(code **)(*plVar7 + 0x38))(auStack_38,plVar7);
        }
        lVar9 = 0;
        plVar5 = (long *)&stack0xffffffffffffffd0;
        do {
          FUN_109d1a244(auStack_40 + lVar9 + -8);
          FUN_10a09b344(auStack_40 + lVar9 + -8);
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0x18);
        do {
          plVar5 = plVar5 + -1;
          plVar6 = (long *)*plVar5;
          if (plVar6 != (long *)0x0) {
            puVar1 = (ulong *)(plVar6 + 1);
            do {
              uVar8 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar8 - 4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((uVar8 & 0x1fffffffc) == 4) {
              do {
                uVar8 = *puVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = uVar8 - 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (uVar8 - 1 == 0) {
                (**(code **)(*plVar6 + 8))();
              }
            }
          }
        } while (plVar5 != &lStack_48);
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a3cf564);
  (*pcVar4)();
}



/* Entry: 10a3cf620; end: 10a3cf743;  */

undefined8 FUN_10a3cf620(long param_1,int param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  undefined1 uStack_31;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x310);
  for (puVar2 = *(undefined8 **)(param_1 + 0x478); puVar2 != *(undefined8 **)(param_1 + 0x480);
      puVar2 = puVar2 + 1) {
    piVar5 = (int *)*puVar2;
    if (*piVar5 == param_2) {
      if (puVar2 != *(undefined8 **)(param_1 + 0x480)) goto LAB_10a3cf6a8;
      break;
    }
  }
  for (puVar2 = *(undefined8 **)(param_1 + 0x490); puVar2 != *(undefined8 **)(param_1 + 0x498);
      puVar2 = puVar2 + 1) {
    piVar5 = (int *)*puVar2;
    if (*piVar5 == param_2) {
      if (puVar2 != *(undefined8 **)(param_1 + 0x498)) goto LAB_10a3cf6a8;
      break;
    }
  }
  goto LAB_10a3cf700;
LAB_10a3cf6a8:
  for (lVar1 = *(long *)(piVar5 + 0x4e); lVar1 != *(long *)(piVar5 + 0x50); lVar1 = lVar1 + 0x28) {
    if (*(long *)(lVar1 + 0x10) == param_3) {
      if (lVar1 != *(long *)(piVar5 + 0x50)) {
        lVar1 = lVar1 + 0x28;
        FUN_10a3ee14c(&uStack_31);
        for (lVar4 = *(long *)(piVar5 + 0x50); lVar4 != lVar1; lVar4 = lVar4 + -0x28) {
          if (*(long *)(lVar4 + -0x20) != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
        *(long *)(piVar5 + 0x50) = lVar1;
        uVar3 = 1;
        goto LAB_10a3cf704;
      }
      break;
    }
  }
LAB_10a3cf700:
  uVar3 = 0;
LAB_10a3cf704:
  __ZNSt3__15mutex6unlockEv(param_1 + 0x310);
  return uVar3;
}



/* Entry: 10a3cf744; end: 10a3cfa0b;  */

undefined4
FUN_10a3cf744(undefined4 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  FUN_10a3cfa0c();
  if (param_1 == (undefined4 *)0x0) {
    plVar6 = (long *)param_2[1];
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
    }
    FUN_10a5aea7c();
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar11 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    return 0;
  }
  uVar17 = *param_2;
  lVar11 = param_2[1];
  if (lVar11 == 0) {
    plVar6 = (long *)0x0;
    uVar16 = 0;
  }
  else {
    plVar6 = (long *)(lVar11 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar6 = (long *)param_2[1];
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar6 != (long *)0x0) {
        uVar16 = *param_2;
        goto LAB_10a3cf804;
      }
    }
    uVar16 = 0;
  }
LAB_10a3cf804:
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  if (puVar2 < *(undefined8 **)(param_1 + 0x52)) {
    *puVar2 = uVar17;
    puVar2[1] = lVar11;
    puVar2[2] = uVar16;
    puVar2[3] = param_3;
    puVar14 = puVar2 + 5;
    puVar2[4] = param_4;
LAB_10a3cf928:
    *(undefined8 **)(param_1 + 0x50) = puVar14;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar11 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    return *param_1;
  }
  puVar15 = *(undefined8 **)(param_1 + 0x4e);
  uVar12 = ((long)puVar2 - (long)puVar15 >> 3) * -0x3333333333333333 + 1;
  if (uVar12 < 0x666666666666667) {
    lVar9 = (long)*(undefined8 **)(param_1 + 0x52) - (long)puVar15 >> 3;
    uVar13 = lVar9 * -0x6666666666666666;
    if (uVar13 < uVar12 || uVar13 - uVar12 == 0) {
      uVar13 = uVar12;
    }
    if (0x333333333333332 < (ulong)(lVar9 * -0x3333333333333333)) {
      uVar13 = 0x666666666666666;
    }
    if (uVar13 < 0x666666666666667) {
      puVar7 = (undefined8 *)(uVar13 * 0x28);
      __Znwm();
      puVar10 = (undefined8 *)((long)puVar7 + ((long)puVar2 - (long)puVar15));
      *puVar10 = uVar17;
      puVar10[1] = lVar11;
      puVar10[2] = uVar16;
      puVar10[3] = param_3;
      puVar14 = puVar10 + 5;
      puVar10[4] = param_4;
      puVar8 = puVar7;
      puVar10 = puVar15;
      if (puVar15 != puVar2) {
        do {
          uVar17 = *puVar10;
          puVar8[1] = puVar10[1];
          *puVar8 = uVar17;
          *puVar10 = 0;
          puVar10[1] = 0;
          uVar16 = puVar10[3];
          uVar17 = puVar10[2];
          puVar8[4] = puVar10[4];
          puVar8[3] = uVar16;
          puVar8[2] = uVar17;
          puVar10 = puVar10 + 5;
          puVar8 = puVar8 + 5;
        } while (puVar10 != puVar2);
        do {
          if (puVar15[1] != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          puVar15 = puVar15 + 5;
        } while (puVar15 != puVar2);
        puVar15 = *(undefined8 **)(param_1 + 0x4e);
      }
      *(undefined8 **)(param_1 + 0x4e) = puVar7;
      *(undefined8 **)(param_1 + 0x50) = puVar14;
      *(undefined8 **)(param_1 + 0x52) = puVar7 + uVar13 * 5;
      if (puVar15 != (undefined8 *)0x0) {
        __ZdlPv(puVar15);
      }
      goto LAB_10a3cf928;
    }
    func_0x000109ffded8();
  }
  else {
    FUN_10a3ee1c4();
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a3cf9e4);
  (*pcVar5)();
}



/* Entry: 10a3cfa0c; end: 10a3cfaa3;  */

undefined8 FUN_10a3cfa0c(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_28;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340df18;
  (*(code *)PTR___tlv_bootstrap_11340df18)();
  if (*(char *)ppuVar1 == '\x01') {
    lVar2 = param_1 + 0x2d0;
    __ZNSt3__15mutex4lockEv();
    _pthread_self();
    lVar3 = param_1 + 0x450;
    lStack_28 = lVar2;
    func_0x00010a3fa294(lVar3,&lStack_28);
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(lVar3 + 0x18);
    }
    __ZNSt3__15mutex6unlockEv(param_1 + 0x2d0);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 10a3cfaa4; end: 10a3cfb07;  */

undefined8 * FUN_10a3cfaa4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a3cfb08; end: 10a3cfc8f;  */

void FUN_10a3cfb08(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_38;
  
  FUN_10a0f1b8c(&puStack_b0,param_3,0);
  uVar3 = uStack_a8;
  puVar1 = puStack_b0;
  if ((uStack_80 & 1) == 0) {
    FUN_10a3ee510(&UNK_10f655d9f);
LAB_10a3cfc44:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a3cfc48);
    (*pcVar2)();
  }
  puStack_b0 = (undefined8 *)0x0;
  uStack_a8 = 0;
  puStack_60 = puVar1;
  uStack_50 = uStack_a0;
  uStack_58 = uVar3;
  uStack_48 = uStack_98;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a0f1ea0(&puStack_b0);
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  puStack_b0 = (undefined8 *)0x0;
  uStack_98 = 0;
  uStack_a0 = 0;
  (**(code **)(*(long *)*puVar1 + 0x20))((long *)*puVar1,&puStack_b0,1,0x48);
  (**(code **)(*(long *)*puVar1 + 0x28))((long *)*puVar1,0);
  (**(code **)(*(long *)*puStack_60 + 0x28))((long *)*puStack_60,0);
  if ((char)uStack_a8 == '\0') {
    uVar3 = 0x140;
    __Znwm();
    FUN_10a0f6d8c();
  }
  else {
    if ((char)uStack_a8 != '\x01') {
      FUN_10a3f9380(&UNK_10f653e0e);
      goto LAB_10a3cfc44;
    }
    uVar3 = 0x130;
    __Znwm();
    FUN_10a0fc0b8();
  }
  *param_1 = uVar3;
  FUN_10a0f1ea0(&puStack_60);
  return;
}



/* Entry: 10a3cfc90; end: 10a3cff8b;  */

void FUN_10a3cfc90(long param_1,long ****param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long ****pppplVar5;
  undefined8 *puVar6;
  long ****pppplVar7;
  long ****pppplVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long ***ppplStack_b0;
  undefined **ppuStack_a8;
  long ***ppplStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 uStack_61;
  
  pppplVar5 = param_2;
  (*(code *)(*param_2)[0x40])(param_2,&PTR_DAT_110bd0560);
  if ((int)pppplVar5 != 0) {
    (*(code *)(*param_2)[0x42])(param_2,&PTR_DAT_110bd0560);
    pppplVar5 = param_2;
    (*(code *)(*param_2)[0x41])();
    if ((int)pppplVar5 != 0) {
      iVar12 = 0;
      do {
        (*(code *)(*param_2)[0x43])(param_2,iVar12);
        FUN_10a34ada8(&uStack_90,param_2,0);
        (*(code *)(*param_2)[0x44])(param_2);
        plVar4 = plStack_88;
        if (plStack_88 != (long *)0x0) {
          plVar1 = plStack_88 + 1;
          do {
            lVar11 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_88 + 0x10))(plStack_88);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 != (int)pppplVar5);
    }
    (*(code *)(*param_2)[0x44])(param_2);
  }
  pppplVar5 = param_2;
  (*(code *)(*param_2)[0x40])(param_2,&PTR_DAT_110bd16c0);
  if ((int)pppplVar5 != 0) {
    lVar11 = *(long *)(param_1 + 0x10);
    plStack_88 = (long *)0x0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_70 = 0x3f800000;
    FUN_10a3f9424(&uStack_90,(long)(float)*(ulong *)(lVar11 + 0x4c0));
    lVar13 = *(long *)(lVar11 + 0x4b8);
    if (lVar13 != lVar11 + 0x4b0) {
      do {
        lVar14 = *(long *)(lVar13 + 0x10);
        ppuStack_98 = *(undefined ***)(lVar14 + 0x48);
        ppplStack_a0 = *(long ****)(lVar14 + 0x40);
        puVar6 = &uStack_90;
        ppplStack_b0 = (long ***)&ppplStack_a0;
        FUN_10a3f9630(puVar6,&ppplStack_a0,&UNK_10dd5b8f9,&ppplStack_b0,&uStack_61);
        puVar6[4] = lVar14;
        lVar13 = *(long *)(lVar13 + 8);
      } while (lVar13 != lVar11 + 0x4b0);
    }
    (*(code *)(*param_2)[0x42])(param_2,&PTR_DAT_110bd16c0);
    pppplVar5 = param_2;
    (*(code *)(*param_2)[0x41])();
    if ((int)pppplVar5 != 0) {
      iVar12 = 0;
      do {
        (*(code *)(*param_2)[0x43])(param_2,iVar12);
        pppplVar7 = param_2;
        ppuVar9 = &PTR_DAT_110bd16e0;
        (*(code *)(*param_2)[2])();
        pppplVar8 = param_2;
        ppuVar10 = &PTR_DAT_110bd1700;
        ppplStack_a0 = (long ***)pppplVar7;
        ppuStack_98 = ppuVar9;
        (*(code *)(*param_2)[2])();
        ppplStack_b0 = (long ***)pppplVar8;
        ppuStack_a8 = ppuVar10;
        (*(code *)(*param_2)[0x44])(param_2);
        puVar6 = &uStack_90;
        FUN_10a3f9844(puVar6,pppplVar7,ppuVar9,&ppplStack_a0);
        uVar15 = puVar6[4];
        puVar6 = &uStack_90;
        FUN_10a3f9844(puVar6,pppplVar8,ppuVar10,&ppplStack_b0);
        FUN_10a0c3500(uVar15,puVar6[4]);
        iVar12 = iVar12 + 1;
      } while ((int)pppplVar5 != iVar12);
    }
    (*(code *)(*param_2)[0x44])(param_2);
    FUN_10a3f2240(&uStack_90);
  }
  return;
}



/* Entry: 10a3cff8c; end: 10a3d0017;  */

void FUN_10a3cff8c(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    *param_2 = 0;
    plVar1 = *(long **)(param_1 + 0x270);
    *(long *)(param_1 + 0x270) = lVar2;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
      lVar2 = *(long *)(param_1 + 0x270);
    }
    FUN_10a3d0018(param_1,lVar2);
    FUN_10a57120c(*(undefined8 *)(*(long *)(param_1 + 0x270) + 8));
    if ((*(long *)(param_1 + 0x858) == 0) ||
       ((*(byte *)(*(long *)(param_1 + 0x858) + 0x18) & 1) == 0)) {
      plVar1 = *(long **)(param_1 + 0x270);
      *(undefined8 *)(param_1 + 0x270) = 0;
      if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a3d0008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 8))();
        return;
      }
    }
  }
  return;
}



/* Entry: 10a3d0018; end: 10a3d04bf;  */

void FUN_10a3d0018(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long alStack_128 [6];
  undefined8 *puStack_f8;
  undefined **ppuStack_f0;
  long lStack_e8;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a1cc18c(alStack_128,&UNK_10f653e2d);
  (**(code **)(*param_2 + 0xd0))(param_2,&PTR_s_version_110bd0580,1);
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110bd05a0,0x40);
  FUN_10a3ce374(param_1,plVar2);
  *(int *)(param_2 + 0xd) = (int)plVar2;
  plVar2 = param_2;
  (**(code **)(*param_2 + 0xd0))(param_2,&PTR_DAT_110bd05c0,*(undefined4 *)(param_1 + 0xd10));
  *(int *)(param_1 + 0xd10) = (int)plVar2;
  lVar1 = 0;
  if (*(long *)(param_1 + 0x910) != 0) {
    lVar1 = *(long *)(param_1 + 0x910) + 0x18;
  }
  (**(code **)(*param_2 + 0x1e0))(param_2,lVar1);
  plVar2 = param_2;
  (**(code **)(*param_2 + 0xd0))(param_2,&PTR_DAT_110bd05e0,0);
  *(byte *)(param_1 + 0xd1c) = (byte)plVar2;
  if (*(int *)(*(long *)(param_1 + 0xa20) + 0x18) < 0xf7) {
    *(byte *)(param_1 + 0xd1c) = (byte)plVar2 | 1;
  }
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bd06e0);
  lStack_68 = param_1;
  if ((int)plVar2 == 0) {
    ppuStack_78 = (undefined **)0x10a3f9ad4;
    ppuStack_70 = &PTR_DAT_110bd29a0;
    FUN_10a02d928(param_2,&PTR_DAT_110bd0700,&ppuStack_78,0);
    (*(code *)*ppuStack_70)(&ppuStack_70);
  }
  else {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110bd06e0);
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110bd0700);
    (**(code **)(*param_2 + 0x218))(param_2,0);
    ppuStack_78 = (undefined **)0x10a3f9aa4;
    ppuStack_70 = &PTR_DAT_110bd2988;
    FUN_10a02d928(param_2,&PTR_DAT_110bd0720,&ppuStack_78,0);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    (**(code **)(*param_2 + 0x220))(param_2);
    (**(code **)(*param_2 + 0x220))(param_2);
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  pcStack_b8 = FUN_10a3f9a44;
  ppuStack_b0 = &PTR_DAT_110bd2958;
  lStack_a8 = param_1;
  FUN_10a02d928(param_2,&PTR_DAT_110bd0600,&pcStack_b8,0);
  (*(code *)*ppuStack_b0)(&ppuStack_b0);
  puStack_f8 = (undefined8 *)0x10a3f9a74;
  ppuStack_f0 = &PTR_DAT_110bd2970;
  lStack_e8 = param_1;
  FUN_10a02d928(param_2,&PTR_DAT_110bd0620,&puStack_f8,0);
  (*(code *)*ppuStack_f0)(&ppuStack_f0);
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bd0640);
  if ((int)plVar2 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110bd0640);
    FUN_10a3c92c8(param_1 + 0xc08,param_2);
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bd0660);
  if ((int)plVar2 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110bd0660);
    FUN_10a3c92c8(param_1 + 0xc18,param_2);
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  (**(code **)(*param_2 + 0x1f8))(param_2,&PTR_DAT_110bcfce0,*(undefined8 *)(param_1 + 0x858));
  lVar1 = 0;
  if (*(long *)(param_1 + 0xac0) != 0) {
    lVar1 = *(long *)(param_1 + 0xac0) + 0x18;
  }
  (**(code **)(*param_2 + 0x1f8))(param_2,&PTR_DAT_110bd0680,lVar1);
  (**(code **)(*param_2 + 0x1f8))(param_2,&PTR_DAT_110bd06a0,*(undefined8 *)(param_1 + 0x870));
  if (*(long *)(param_1 + 0x990) != 0) {
    (**(code **)(*param_2 + 0x1f8))(param_2,&PTR_DAT_110bd06c0);
  }
  ppuStack_70 = (undefined **)((ulong)ppuStack_70 & 0xffffffffffffff00);
  ppuStack_78 = &PTR_FUN_110bd0d38;
  lStack_68 = param_1;
  (**(code **)(*param_2 + 0x1e0))(param_2,&ppuStack_78);
  FUN_10a1dfc0c(*(undefined8 *)(param_1 + 0x828));
  (**(code **)(*param_2 + 0x238))(param_2,1);
  plVar2 = alStack_128;
  FUN_10a1d33b4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*puStack_f8)(&puStack_f8);
  FUN_10a1d33b4(alStack_128);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010a3d04cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x20))();
  return;
}



/* Entry: 10a3d04c0; end: 10a3d04cf;  */

void FUN_10a3d04c0(long *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010a3d04cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,param_2,0);
  return;
}



/* Entry: 10a3d04d0; end: 10a3d0657;  */

void FUN_10a3d04d0(long *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 **ppuStack_78;
  long lStack_70;
  char cStack_61;
  undefined8 **ppuStack_60;
  long lStack_58;
  
  lVar1 = param_2 + 400;
  lVar3 = *(long *)(param_2 + 0x198);
  if (lVar3 != lVar1) {
    do {
      lVar4 = *(long *)(lVar3 + 0x10);
      (**(code **)(*param_1 + 0x10))(param_1);
      uStack_88 = *(undefined8 *)(lVar4 + 0x48);
      uStack_90 = *(undefined8 *)(lVar4 + 0x40);
      FUN_10a0ffca4(&ppuStack_78,&uStack_90);
      lStack_58 = (long)cStack_61;
      ppuStack_60 = &ppuStack_78;
      if (lStack_58 < 0) {
        ppuStack_60 = ppuStack_78;
        lStack_58 = lStack_70;
        if (lStack_70 < 0) goto LAB_10a3d0634;
      }
      (**(code **)(*param_1 + 0x30))(param_1,&PTR_DAT_110bd16e0,&ppuStack_60);
      if (cStack_61 < '\0') {
        __ZdlPv(ppuStack_78);
      }
      uStack_88 = *(undefined8 *)(param_2 + 0x48);
      uStack_90 = *(undefined8 *)(param_2 + 0x40);
      FUN_10a0ffca4(&ppuStack_78,&uStack_90);
      lStack_58 = (long)cStack_61;
      ppuStack_60 = &ppuStack_78;
      if (lStack_58 < 0) {
        ppuStack_60 = ppuStack_78;
        lStack_58 = lStack_70;
        if (lStack_70 < 0) {
LAB_10a3d0634:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10a3d0638);
          (*pcVar2)();
        }
      }
      (**(code **)(*param_1 + 0x30))(param_1,&PTR_DAT_110bd1700,&ppuStack_60);
      if (cStack_61 < '\0') {
        __ZdlPv(ppuStack_78);
      }
      (**(code **)(*param_1 + 0x20))(param_1);
      lVar3 = *(long *)(lVar3 + 8);
    } while (lVar3 != lVar1);
    lVar3 = *(long *)(param_2 + 0x198);
  }
  for (; lVar3 != lVar1; lVar3 = *(long *)(lVar3 + 8)) {
    FUN_10a3d04d0(param_1,*(undefined8 *)(lVar3 + 0x10));
  }
  return;
}



/* Entry: 10a3d0f38; end: 10a3dc3db;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a3d0f38(code *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined ********ppppppppuVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  char cVar10;
  bool bVar11;
  code *pcVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *extraout_x8;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined ********ppppppppuVar21;
  ulong uVar22;
  ulong uVar23;
  undefined ********ppppppppuStack_110;
  long *plStack_108;
  char cStack_f9;
  undefined ********ppppppppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined ********ppppppppuStack_e0;
  undefined **ppuStack_d8;
  code *pcStack_d0;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f240;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  puStack_b8 = &UNK_10f654995;
  uStack_b0 = 0xa1;
  puStack_a8 = &UNK_10f654a37;
  uStack_a0 = 0x1e0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f2d8;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&DAT_10f638986;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&DAT_10f2dae3c;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&DAT_10f63a6be;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f14d;
  uStack_c0 = 0xffffffff;
  uStack_bc = 4;
  iStack_c8 = 100;
  uStack_c4 = 0x100;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&DAT_10f63f0e3;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f0ea;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654c18;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f273;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f0fb;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f10b;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f1b9;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&DAT_10f654c30;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 2;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f197;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654c35;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f38d;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654c52;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 0x400;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f30b;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f2e6;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f39b;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654c65;
  uStack_c0 = 0xffffffff;
  uStack_bc = 4;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654c78;
  uStack_c0 = 0xffffffff;
  uStack_bc = 4;
  iStack_c8 = 0x19;
  uStack_c4 = 0x400;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654c8e;
  uStack_c0 = 0xffffffff;
  uStack_bc = 4;
  iStack_c8 = 0x19;
  uStack_c4 = 0x400;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f33c;
  uStack_c0 = 0xffffffff;
  uStack_bc = 4;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654cac;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654cc0;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654cd3;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654cea;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654d02;
  uStack_c0 = 0xffffffff;
  uStack_bc = 4;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f1c4;
  uStack_c0 = 0xffffffff;
  uStack_bc = 4;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f296;
  uStack_c0 = 2;
  uStack_bc = 4;
  iStack_c8 = 100;
  uStack_c4 = 0x40;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f27f;
  uStack_c0 = 0xffffffff;
  uStack_bc = 4;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f1aa;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f1eb;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f222;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654d12;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f1da;
  uStack_c0 = 2;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654d30;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654d4f;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654d68;
  uStack_c0 = 2;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f15a;
  uStack_c0 = 0xffffffff;
  uStack_bc = 4;
  iStack_c8 = 100;
  uStack_c4 = 0x400;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f16f;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654d80;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654da8;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f2a7;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654dcd;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 0x40;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654de5;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  iStack_c8 = *(int *)(param_2 + 0x2c);
  uStack_bc = 6;
  if (iStack_c8 != 100) {
    uStack_bc = 0xffffffff;
  }
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  if (iStack_c8 != 100) {
    iStack_c8 = 0x19;
  }
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f250;
  uStack_c4 = 1;
  uStack_c0 = 0xffffffff;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f207;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f2f7;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f0ce;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f32c;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654dfa;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f2c0;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654e11;
  uStack_c0 = 0xffffffff;
  uStack_bc = 4;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f630f9d;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f269;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&DAT_10f2f709e;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654e1b;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654e35;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f643e01;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654e52;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654e5d;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654e62;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&DAT_10f4913b9;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&DAT_10f4913be;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&DAT_10f4913c3;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654e6c;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&DAT_10f4913fe;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&DAT_10f491403;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&DAT_10f491408;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63646c;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654e71;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654e85;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f181;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654e95;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654ea8;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&DAT_10f482744;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654eb8;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654ed1;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654ed9;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654ef1;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654ef7;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654f06;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f123;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654f1a;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654f26;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654f39;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654f46;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654f51;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654f65;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654f76;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654f89;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654fa0;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f653965;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654faa;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f2b4;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654fbb;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f632c04;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&DAT_10f2fc6b9;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&DAT_10f63f379;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654fc7;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654fd6;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f633082;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f642caa;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654fea;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654fef;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654ff6;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f655004;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f655015;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f655033;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f343;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f65504c;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f65505a;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f655077;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f65508f;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f6550ab;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f5ac32c;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f6550b6;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f6550c3;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f6550d6;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f6550f7;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f655110;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f2d0;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  puStack_b8 = &UNK_10f655137;
  uStack_b0 = 0x40;
  puStack_a8 = &UNK_10f655178;
  uStack_a0 = 0x73;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f6551ec;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f6551ff;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f65520e;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f655229;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f65522f;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f65523e;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f65525e;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f655272;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f65528a;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f6552a3;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f6552bb;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f6552db;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f6552e2;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 2;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f6552ea;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 2;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f655309;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 2;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f655328;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 2;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f65533a;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 2;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f655357;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 2;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f655370;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 2;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f65537e;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 2;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f65539d;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f6553a4;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 2;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f6553b4;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f132;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&DAT_10f63f143;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f64effc;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f6553c5;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 2;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f6553de;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f6553f0;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f6553fc;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f64f053;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f655406;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f65541a;
  uStack_c0 = 2;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&DAT_10f570415;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f655430;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f655439;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f655452;
  uStack_c0 = 2;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 0x400;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f65545e;
  uStack_c0 = 2;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 0x400;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63e1c7;
  uStack_c0 = 2;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 0x400;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&DAT_10f512644;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f655470;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f65547e;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f63f35e;
  uStack_c0 = 0xffffffff;
  uStack_bc = 4;
  iStack_c8 = 100;
  uStack_c4 = 0x40;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f68efd8;
  uStack_c0 = 0xffffffff;
  uStack_bc = 4;
  iStack_c8 = 100;
  uStack_c4 = 0x40;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f65548f;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  FUN_10a07c674(param_2);
  puVar13 = param_2;
  FUN_10a0051e8(param_2,100,0x10,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar13 & 1) == 0) {
    ppppppppuStack_e0 = (undefined ********)FUN_10a3feb08;
    ppuStack_d8 = &PTR_FUN_110bd2c60;
    pcStack_d0 = param_1;
    if (param_2[2] == param_2[3]) goto LAB_10a3dc170;
    FUN_10a0544d8(param_2,&UNK_10f634b4f,&ppppppppuStack_e0,0,param_2[3] + -8);
    (*(code *)*ppuStack_d8)(&ppuStack_d8);
  }
  puVar13 = param_2;
  FUN_10a0051e8(param_2,100,0x10,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar13 & 1) == 0) {
    ppppppppuStack_e0 = (undefined ********)FUN_10a3febc8;
    ppuStack_d8 = &PTR_FUN_110bd2c78;
    pcStack_d0 = param_1;
    if (param_2[2] == param_2[3]) goto LAB_10a3dc170;
    FUN_10a0544d8(param_2,&UNK_10f655497,&ppppppppuStack_e0,0,param_2[3] + -8);
    (*(code *)*ppuStack_d8)(&ppuStack_d8);
  }
  puVar13 = param_2;
  FUN_10a0051e8(param_2,100,0x10,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar13 & 1) == 0) {
    ppppppppuStack_e0 = (undefined ********)FUN_10a3fec94;
    ppuStack_d8 = &PTR_FUN_110bd2c90;
    pcStack_d0 = param_1;
    if (param_2[2] == param_2[3]) goto LAB_10a3dc170;
    FUN_10a0544d8(param_2,&UNK_10f6554a8,&ppppppppuStack_e0,0,param_2[3] + -8);
    (*(code *)*ppuStack_d8)(&ppuStack_d8);
  }
  puVar13 = param_2;
  FUN_10a0051e8(param_2,100,0x10,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar13 & 1) == 0) {
    ppppppppuStack_e0 = (undefined ********)FUN_10a3fed54;
    ppuStack_d8 = &PTR_FUN_110bd2ca8;
    pcStack_d0 = param_1;
    if (param_2[2] == param_2[3]) goto LAB_10a3dc170;
    FUN_10a0544d8(param_2,&UNK_10f6554b5,&ppppppppuStack_e0,0,param_2[3] + -8);
    (*(code *)*ppuStack_d8)(&ppuStack_d8);
  }
  FUN_10a003e74(param_2,&UNK_10f643e01,0x19);
  puVar13 = param_2;
  FUN_10a0051e8(param_2,100,2,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar13 & 1) == 0) {
    ppppppppuStack_e0 = (undefined ********)FUN_10a3fee14;
    ppuStack_d8 = &PTR_FUN_110bd2cc0;
    pcStack_d0 = param_1;
    if (param_2[2] == param_2[3]) goto LAB_10a3dc170;
    FUN_10a0544d8(param_2,&DAT_10f68efec,&ppppppppuStack_e0,3,param_2[3] + -8);
    (*(code *)*ppuStack_d8)(&ppuStack_d8);
  }
  puVar13 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar13 & 1) == 0) {
    ppppppppuStack_e0 = (undefined ********)FUN_10a3ff21c;
    ppuStack_d8 = &PTR_FUN_110bd2cd8;
    pcStack_d0 = param_1;
    if (param_2[2] == param_2[3]) goto LAB_10a3dc170;
    FUN_10a0544d8(param_2,&UNK_10f6554ca,&ppppppppuStack_e0,3,param_2[3] + -8);
    (*(code *)*ppuStack_d8)(&ppuStack_d8);
  }
  func_0x00010a004064(param_2);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654ed1;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
  uStack_88 = 0;
  uStack_80 = 0;
  func_0x00010a004eb4(param_2,&ppppppppuStack_e0);
  puVar13 = param_2;
  FUN_10a0051e8(param_2,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar13 & 1) == 0) {
    ppppppppuStack_e0 = (undefined ********)FUN_10a3ff450;
    ppuStack_d8 = &PTR_FUN_110bd2cf0;
    pcStack_d0 = param_1;
    if (param_2[2] == param_2[3]) goto LAB_10a3dc170;
    FUN_10a0544d8(param_2,&UNK_10f6554db,&ppppppppuStack_e0,3,param_2[3] + -8);
    (*(code *)*ppuStack_d8)(&ppuStack_d8);
  }
  func_0x00010a004064(param_2);
  puVar13 = param_2;
  FUN_10a0051e8(param_2,0x19,1,0xffffffff,0xffffffff,4);
  if (((ulong)puVar13 & 1) == 0) {
    ppppppppuStack_e0 = (undefined ********)FUN_10a3ff518;
    ppuStack_d8 = &PTR_FUN_110bd2d08;
    pcStack_d0 = param_1;
    if (param_2[2] == param_2[3]) goto LAB_10a3dc170;
    FUN_10a0544d8(param_2,&UNK_10f6554ec,&ppppppppuStack_e0,1,param_2[3] + -8);
    (*(code *)*ppuStack_d8)(&ppuStack_d8);
  }
  FUN_10a464f6c(param_2,param_1);
  FUN_10a4536b8(param_2);
  FUN_10a45aac0(param_2);
  FUN_10a455554(param_2);
  FUN_10a6887f4(param_2);
  FUN_10a572dd8(param_2);
  FUN_10a573054(param_2);
  FUN_10a1595e8(param_2);
  func_0x000109887da8(&ppppppppuStack_110,&UNK_10f64c61b,0xb);
  ppppppppuVar21 = ppppppppuStack_110;
  if (-1 < cStack_f9) {
    ppppppppuVar21 = (undefined ********)&ppppppppuStack_110;
  }
  param_2[0x36] = &PTR_DAT_110bd3290;
  puVar13 = param_2 + 0x37;
  ppppppppuVar3 = (undefined ********)&UNK_10f653596;
  if (ppppppppuVar21 != (undefined ********)0x0) {
    ppppppppuVar3 = ppppppppuVar21;
  }
  func_0x000107c2c4dc(puVar13,ppppppppuVar3);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
  uStack_88 = 0;
  uStack_80 = 0;
  ppppppppuStack_e0 = ppppppppuVar21;
  func_0x00010a052690(param_2 + 0x2d,&ppppppppuStack_e0);
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    ppppppppuStack_f8 = (undefined ********)&PTR_DAT_110bd3290;
    ppuStack_f0 = (undefined **)0x0;
    ppppppppuStack_e0 = (undefined ********)&PTR_DAT_110bf32c0;
    ppuStack_d8 = (undefined **)0x0;
    pcStack_d0 = (code *)CONCAT71(pcStack_d0._1_7_,1);
    func_0x0001098949cc(param_2,ppppppppuVar21,&ppppppppuStack_f8,&ppppppppuStack_e0);
  }
  if (cStack_f9 < '\0') {
    __ZdlPv(ppppppppuStack_110);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,2,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f654257,FUN_10a3facf4,1,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f654268,FUN_10a3fb030,1,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f654279,FUN_10a3fb0ec,2,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f654282,FUN_10a3fb1d8,2,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f654290,FUN_10a3fb570,2,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f6542a0,FUN_10a3fb6f8,1,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f6535eb,FUN_10a3fb7b8,1,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,2,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f6542aa,FUN_10a3fb8a8,1,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,2,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f6542b9,FUN_10a3fb978,2,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&DAT_10f6535d4,FUN_10a3fba40,1,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f6542c8,FUN_10a3fbaf4,2,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f6542db,FUN_10a3fbbac,2,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f6542f7,FUN_10a3fbc64,2,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f654304,FUN_10a3fbd90,2,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f654312,FUN_10a3fbecc,5,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f65432a,FUN_10a3fc1d0,5,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f654343,FUN_10a3fc4a8,5,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f65435d,FUN_10a3fc560,5,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f654378,FUN_10a3fc618,2,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f654387,FUN_10a3fc718,2,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,2,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f654397,FUN_10a3fc8ac,2,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,2,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f6543a9,FUN_10a3fc9b8,3,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,2,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f6543bd,FUN_10a3fcb24,2,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f6543cf,FUN_10a3fcbdc,1,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f6543d9,FUN_10a3fccd4,2,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f6543e3,FUN_10a3fce88,1,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f6543f0,FUN_10a3fcf4c,1,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f654413,FUN_10a3fd010,2,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    FUN_10a052828(param_2,"enabled",FUN_10a3fd0c8,FUN_10a3fd190);
  }
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f6535f8;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  puStack_b8 = &UNK_10f653596;
  puStack_a8 = (undefined *)0x0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_90._0_4_ = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3fd264(param_2,&ppppppppuStack_e0);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f654433;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 2;
  puStack_b8 = &UNK_10f653596;
  puStack_a8 = (undefined *)0x0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3fd264(param_2,&ppppppppuStack_e0);
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    FUN_10a0605c4(param_2,&UNK_10f65360d,FUN_10a3fd37c,0);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    FUN_10a0605c4(param_2,&DAT_10f638ba8,FUN_10a3fd438,0);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    FUN_10a052828(param_2,&DAT_10f654447,FUN_10a3fd53c,FUN_10a3fd610);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    FUN_10a052828(param_2,&DAT_10f65361e,FUN_10a3fd6e8,FUN_10a3fd7d0);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    FUN_10a05ef6c(param_2,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_2,&UNK_10f65444d,FUN_10a3fd8cc,0);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    FUN_10a05ef6c(param_2,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_2,&UNK_10f654457,FUN_10a3fda20,0);
  }
  param_2[0x36] = PTR___ZTIDn_1103469e8;
  lVar15 = param_2[0x2e];
  if (param_2[0x2d] == lVar15) goto LAB_10a3dc170;
  ppuStack_d8 = *(undefined ***)(lVar15 + -0x60);
  ppppppppuStack_e0 = *(undefined *********)(lVar15 + -0x68);
  puStack_b8 = *(undefined **)(lVar15 + -0x40);
  uVar22 = *(ulong *)(lVar15 + -0x48);
  uVar23 = *(ulong *)(lVar15 + -0x50);
  pcStack_d0 = *(code **)(lVar15 + -0x58);
  iStack_c8 = (int)uVar23;
  uStack_c4 = (undefined4)(uVar23 >> 0x20);
  puStack_a8 = *(undefined **)(lVar15 + -0x30);
  uStack_b0 = *(undefined8 *)(lVar15 + -0x38);
  uStack_98 = *(undefined8 *)(lVar15 + -0x20);
  uStack_a0 = *(undefined8 *)(lVar15 + -0x28);
  uStack_80 = *(undefined8 *)(lVar15 + -8);
  uStack_88 = *(undefined8 *)(lVar15 + -0x10);
  uStack_90 = *(ulong *)(lVar15 + -0x18);
  uStack_c0 = (undefined4)uVar22;
  uStack_bc = (undefined4)(uVar22 >> 0x20);
  param_2[0x2e] = lVar15 + -0x68;
  puVar14 = param_2;
  FUN_10a0051e8(param_2,uVar23 & 0xffffffff,uStack_c4,uStack_90 & 0xffffffff,uVar22 & 0xffffffff,
                uStack_bc);
  if (((ulong)puVar14 & 1) == 0) {
    func_0x000109894f40(param_2,0);
    FUN_10a054234(param_2,&ppppppppuStack_e0,puVar13,&UNK_10f64c61b,0xb);
    FUN_10a05431c(param_2);
  }
  FUN_10ad7175c(param_2);
  FUN_10a23d824(param_2);
  FUN_10a1c6664(param_2);
  func_0x000109887da8(&ppppppppuStack_110,&UNK_10f57dd0d,9);
  ppppppppuVar21 = ppppppppuStack_110;
  if (-1 < cStack_f9) {
    ppppppppuVar21 = (undefined ********)&ppppppppuStack_110;
  }
  param_2[0x36] = &PTR_DAT_110bd11a0;
  ppppppppuVar3 = (undefined ********)&UNK_10f653596;
  if (ppppppppuVar21 != (undefined ********)0x0) {
    ppppppppuVar3 = ppppppppuVar21;
  }
  func_0x000107c2c4dc(puVar13,ppppppppuVar3);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
  uStack_88 = 0;
  uStack_80 = 0;
  ppppppppuStack_e0 = ppppppppuVar21;
  func_0x00010a052690(param_2 + 0x2d,&ppppppppuStack_e0);
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    ppppppppuStack_f8 = (undefined ********)&PTR_DAT_110bd11a0;
    ppuStack_f0 = (undefined **)0x0;
    ppppppppuStack_e0 = (undefined ********)&PTR_DAT_110b178e0;
    ppuStack_d8 = (undefined **)0x0;
    pcStack_d0 = (code *)CONCAT71(pcStack_d0._1_7_,1);
    func_0x0001098949cc(param_2,ppppppppuVar21,&ppppppppuStack_f8,&ppppppppuStack_e0);
  }
  if (cStack_f9 < '\0') {
    __ZdlPv(ppppppppuStack_110);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f6559f8,FUN_10a400328,1,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f655a06,FUN_10a4004f4,1,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f655a17,FUN_10a4005c8,1,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f655a28,FUN_10a40069c,1,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f655a36,FUN_10a40074c,1,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f655a47,FUN_10a40081c,1,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f655a58,FUN_10a4008cc,1,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f655a6a,FUN_10a40099c,1,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f655a84,FUN_10a400a64,2,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f655a96,FUN_10a400bcc,2,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f655aa8,FUN_10a400ca8,2,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f655ab9,FUN_10a400e0c,2,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f655aca,FUN_10a400ec4,2,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f655adb,FUN_10a400fa0,2,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f655aec,FUN_10a40107c,2,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f655afa,FUN_10a401134,2,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f6535dc,FUN_10a4011ec,1,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    FUN_10a0605c4(param_2,&DAT_10f36da21,FUN_10a401304,0);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    FUN_10a0605c4(param_2,&DAT_10f4653a7,FUN_10a4013f4,0);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    FUN_10a0605c4(param_2,&DAT_10f3260f3,FUN_10a4014a4,0);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    FUN_10a0605c4(param_2,&UNK_10f655b08,FUN_10a401554,0);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    FUN_10a0605c4(param_2,"left",FUN_10a401604,0);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    FUN_10a0605c4(param_2,"right",FUN_10a4016b4,0);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    FUN_10a052828(param_2,&DAT_10f655b0d,FUN_10a401764,FUN_10a401820);
  }
  param_2[0x36] = PTR___ZTIDn_1103469e8;
  lVar15 = param_2[0x2e];
  if (param_2[0x2d] == lVar15) goto LAB_10a3dc170;
  ppuStack_d8 = *(undefined ***)(lVar15 + -0x60);
  ppppppppuStack_e0 = *(undefined *********)(lVar15 + -0x68);
  puStack_b8 = *(undefined **)(lVar15 + -0x40);
  uVar22 = *(ulong *)(lVar15 + -0x48);
  uVar23 = *(ulong *)(lVar15 + -0x50);
  pcStack_d0 = *(code **)(lVar15 + -0x58);
  iStack_c8 = (int)uVar23;
  uStack_c4 = (undefined4)(uVar23 >> 0x20);
  puStack_a8 = *(undefined **)(lVar15 + -0x30);
  uStack_b0 = *(undefined8 *)(lVar15 + -0x38);
  uStack_98 = *(undefined8 *)(lVar15 + -0x20);
  uStack_a0 = *(undefined8 *)(lVar15 + -0x28);
  uStack_80 = *(undefined8 *)(lVar15 + -8);
  uStack_88 = *(undefined8 *)(lVar15 + -0x10);
  uStack_90 = *(ulong *)(lVar15 + -0x18);
  uStack_c0 = (undefined4)uVar22;
  uStack_bc = (undefined4)(uVar22 >> 0x20);
  param_2[0x2e] = lVar15 + -0x68;
  puVar14 = param_2;
  FUN_10a0051e8(param_2,uVar23 & 0xffffffff,uStack_c4,uStack_90 & 0xffffffff,uVar22 & 0xffffffff,
                uStack_bc);
  if (((ulong)puVar14 & 1) == 0) {
    func_0x000109894f40(param_2,0);
    FUN_10a054234(param_2,&ppppppppuStack_e0,puVar13,&UNK_10f57dd0d,9);
    FUN_10a05431c(param_2);
  }
  func_0x000109887da8(&ppppppppuStack_110,&UNK_10f655b47,0xe);
  ppppppppuVar21 = ppppppppuStack_110;
  if (-1 < cStack_f9) {
    ppppppppuVar21 = (undefined ********)&ppppppppuStack_110;
  }
  param_2[0x36] = &PTR_DAT_110bd3188;
  ppppppppuVar3 = (undefined ********)&UNK_10f653596;
  if (ppppppppuVar21 != (undefined ********)0x0) {
    ppppppppuVar3 = ppppppppuVar21;
  }
  func_0x000107c2c4dc(puVar13,ppppppppuVar3);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
  uStack_88 = 0;
  uStack_80 = 0;
  ppppppppuStack_e0 = ppppppppuVar21;
  func_0x00010a052690(param_2 + 0x2d,&ppppppppuStack_e0);
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    ppppppppuStack_f8 = (undefined ********)&PTR_DAT_110bd3188;
    ppuStack_f0 = (undefined **)0x0;
    ppppppppuStack_e0 = (undefined ********)&PTR_DAT_110b178e0;
    ppuStack_d8 = (undefined **)0x0;
    pcStack_d0 = (code *)CONCAT71(pcStack_d0._1_7_,1);
    func_0x0001098949cc(param_2,ppppppppuVar21,&ppppppppuStack_f8,&ppppppppuStack_e0);
  }
  if (cStack_f9 < '\0') {
    __ZdlPv(ppppppppuStack_110);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f653597,FUN_10a3f33a8,1,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f6535a3,FUN_10a3f34c8,1,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f6535ac,FUN_10a3f3580,1,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f6535b8,FUN_10a3f3638,1,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f6535c2,FUN_10a3f36f0,1,param_2[8]);
  }
  param_2[0x36] = PTR___ZTIDn_1103469e8;
  lVar15 = param_2[0x2e];
  if (param_2[0x2d] == lVar15) goto LAB_10a3dc170;
  ppuStack_d8 = *(undefined ***)(lVar15 + -0x60);
  ppppppppuStack_e0 = *(undefined *********)(lVar15 + -0x68);
  puStack_b8 = *(undefined **)(lVar15 + -0x40);
  uVar22 = *(ulong *)(lVar15 + -0x48);
  uVar23 = *(ulong *)(lVar15 + -0x50);
  pcStack_d0 = *(code **)(lVar15 + -0x58);
  iStack_c8 = (int)uVar23;
  uStack_c4 = (undefined4)(uVar23 >> 0x20);
  puStack_a8 = *(undefined **)(lVar15 + -0x30);
  uStack_b0 = *(undefined8 *)(lVar15 + -0x38);
  uStack_98 = *(undefined8 *)(lVar15 + -0x20);
  uStack_a0 = *(undefined8 *)(lVar15 + -0x28);
  uStack_80 = *(undefined8 *)(lVar15 + -8);
  uStack_88 = *(undefined8 *)(lVar15 + -0x10);
  uStack_90 = *(ulong *)(lVar15 + -0x18);
  uStack_c0 = (undefined4)uVar22;
  uStack_bc = (undefined4)(uVar22 >> 0x20);
  param_2[0x2e] = lVar15 + -0x68;
  puVar14 = param_2;
  FUN_10a0051e8(param_2,uVar23 & 0xffffffff,uStack_c4,uStack_90 & 0xffffffff,uVar22 & 0xffffffff,
                uStack_bc);
  if (((ulong)puVar14 & 1) == 0) {
    func_0x000109894f40(param_2,0);
    FUN_10a054234(param_2,&ppppppppuStack_e0,puVar13,&UNK_10f655b47,0xe);
    FUN_10a05431c(param_2);
  }
  FUN_10aaf5b70(param_2);
  FUN_10ac9c3f4(param_2);
  FUN_10a76bad4(param_2);
  func_0x00010ad6587c(param_2);
  FUN_10a76d4a0(param_2);
  FUN_10a5a0bc8(param_2);
  FUN_10a245984(param_2);
  FUN_10a267900(param_2);
  FUN_10a9da4a4(param_2);
  FUN_10a593470(param_2);
  FUN_10a9da69c(param_2);
  FUN_10a216554(param_2);
  FUN_10a216c08(param_2);
  FUN_10a216aac(param_2);
  FUN_10a79a6ec(param_2);
  FUN_10a79a20c(param_2);
  FUN_10a5963dc(param_2);
  FUN_10a260bf0(param_2);
  FUN_10a25ef7c(param_2);
  FUN_10a5aecb8(param_2);
  FUN_10a9ef660(param_2);
  FUN_10a9dda0c(param_2);
  FUN_10a9ddd40(param_2);
  FUN_10a9dcf68(param_2);
  func_0x00010a247b5c(param_2);
  func_0x00010a248284(param_2);
  FUN_10a2485c4(param_2);
  FUN_10a266aa0(param_2);
  FUN_10a9d8d40(param_2);
  FUN_10a246374(param_2);
  func_0x00010a2464b0(param_2);
  FUN_10a246748(param_2);
  FUN_10a246a00(param_2);
  FUN_10a246cfc(param_2);
  FUN_10a246e2c(param_2);
  func_0x000109887510();
  func_0x000109887600();
  func_0x000109887510();
  func_0x000109887600();
  FUN_10a245e10(param_2);
  func_0x00010a267b98(param_2);
  FUN_10a59812c(param_2);
  FUN_10a26851c(param_2);
  func_0x00010a2687b0(param_2);
  FUN_10a9d8610(param_2);
  FUN_10acb2a1c(param_2);
  FUN_10acb26ec(param_2);
  FUN_10a6f0a6c(param_2);
  FUN_10a97bb7c(param_2);
  FUN_10a97c6c0(param_2);
  FUN_10a97a16c(param_2);
  FUN_10a97a4c0(param_2);
  FUN_10a97a62c(param_2);
  FUN_10a97a798(param_2);
  FUN_10a97a8bc(param_2);
  FUN_10a97aa28(param_2);
  FUN_10a97b440(param_2);
  FUN_10a977ca4(param_2);
  FUN_10a978ba8(param_2);
  FUN_10a396938(param_2);
  FUN_10a64e804(param_2);
  FUN_10a49f960(param_2);
  FUN_10a535bc4(param_2);
  FUN_10a5393dc(param_2);
  FUN_10a5377f0(param_2);
  FUN_10a53a404(param_2);
  FUN_10a53ae68(param_2);
  FUN_10a53bb2c(param_2);
  FUN_10a5382b8(param_2);
  FUN_10a538e44(param_2);
  FUN_10a9442b8(param_2);
  FUN_10a4a087c(param_2);
  FUN_10a38c5a0(param_2);
  FUN_10a2d3cc4(param_2);
  FUN_10a4a2818(param_2);
  FUN_10a4a299c(param_2);
  FUN_10a4a2b1c(param_2);
  FUN_10a4a3060(param_2);
  FUN_10a4a2e64(param_2);
  FUN_10a3a2fd4(param_2);
  FUN_10a8ffc50(param_2);
  FUN_10a588f3c(param_2);
  FUN_10a58b184(param_2);
  FUN_10a696588(param_2);
  FUN_10a6881e0(param_2);
  FUN_10a6968d8(param_2);
  FUN_10a58ad44(param_2);
  FUN_10a58aa60(param_2);
  FUN_10a6859c4(param_2);
  FUN_10a685534(param_2);
  FUN_10a68d168(param_2);
  FUN_10a68d330(param_2);
  FUN_10a68d53c(param_2);
  FUN_10a68d744(param_2);
  FUN_10a68da0c(param_2);
  FUN_10a68dbcc(param_2);
  FUN_10a68d8d4(param_2);
  FUN_10a68a400(param_2);
  FUN_10a68dd8c(param_2);
  FUN_10a68e1ec(param_2);
  FUN_10a68e384(param_2);
  FUN_10a68df0c(param_2);
  FUN_10a68e07c(param_2);
  FUN_10a7e1e64(param_2);
  FUN_10a68ea74(param_2);
  FUN_10a68ebec(param_2);
  FUN_10a68ed80(param_2);
  FUN_10a589e94(param_2);
  FUN_10a58a1d4(param_2);
  FUN_10a589b54(param_2);
  FUN_10a688dc4(param_2);
  FUN_10a686e0c(param_2);
  FUN_10a686f84(param_2);
  FUN_10a6870a8(param_2);
  FUN_10a587fdc(param_2);
  FUN_10a6867e0(param_2);
  FUN_10a68e51c(param_2);
  FUN_10a68e6e4(param_2);
  FUN_10a68e8ac(param_2);
  FUN_10a68af10(param_2);
  FUN_10a68b0d8(param_2);
  FUN_10a68b2a0(param_2);
  FUN_10a587cd0(param_2);
  FUN_10a69a2a8(param_2);
  FUN_10a69a5a8(param_2);
  FUN_10a5876f0(param_2);
  FUN_10a5879e0(param_2);
  FUN_10a588194(param_2);
  FUN_10a585edc(param_2);
  FUN_10a5885bc(param_2);
  FUN_10a586520(param_2);
  FUN_10a5888b8(param_2);
  FUN_10a58681c(param_2);
  FUN_10a586e04(param_2);
  FUN_10a586b18(param_2);
  FUN_10a6874dc(param_2);
  FUN_10a2168c4(param_2);
  FUN_10a216e60(param_2);
  FUN_10a6878f8(param_2);
  FUN_10aaeadfc(param_2);
  FUN_10ab68b08(param_2);
  FUN_10a3494c0(param_2);
  FUN_10aae9aec(param_2);
  FUN_10aaee298(param_2);
  FUN_10ab435c8(param_2);
  FUN_10a554d0c(param_2);
  func_0x00010a554588(param_2);
  FUN_10aa883dc(param_2);
  FUN_10a5512a4(param_2);
  FUN_10a557d88(param_2);
  FUN_10aaf7a20(param_2);
  FUN_10aaf82d0(param_2);
  FUN_10ab268f0(param_2);
  FUN_10ab26c10(param_2);
  FUN_10ab3d9ec(param_2);
  FUN_10ab3f6f4(param_2);
  FUN_10ab3f310(param_2);
  FUN_10ab3ece0(param_2);
  FUN_10ab3f018(param_2);
  FUN_10ab3e738(param_2);
  FUN_10ab3ea08(param_2);
  FUN_10a96652c(param_2);
  FUN_10a9667e4(param_2);
  FUN_10a966a9c(param_2);
  FUN_10a96701c(param_2);
  FUN_10a964154(param_2);
  FUN_10a971f70(param_2);
  FUN_10a9723a8(param_2);
  FUN_10a343644(param_2);
  FUN_10a96cd68(param_2);
  FUN_10a33f650(param_2);
  FUN_10a00d498(param_2);
  FUN_10ab65fb0(param_2);
  FUN_10acb3efc(param_2);
  FUN_10ab6e594(param_2);
  FUN_10ab6e104(param_2);
  FUN_10ab70b48(param_2);
  FUN_10ab17b38(param_2);
  FUN_10a8fb840(param_2);
  FUN_10a8fb714(param_2);
  FUN_10a93fe38(param_2);
  FUN_10a9403b0(param_2);
  FUN_10a7e1afc(param_2);
  FUN_10a7dec20(param_2);
  FUN_10a7e0d94(param_2);
  FUN_10a7e0740(param_2);
  FUN_10a66aef8(param_2);
  FUN_10ac25810(param_2);
  FUN_10ac22bd0(param_2);
  FUN_10a74c85c(param_2);
  FUN_10a1e3584(param_2);
  FUN_10ac338d8(param_2);
  FUN_10a1e01f4(param_2);
  FUN_10a1e0884(param_2);
  FUN_10ac6a470(param_2);
  FUN_10ac6389c(param_2);
  FUN_10a1dbde4(param_2);
  FUN_10ac295e0(param_2);
  FUN_10a1d9bc8(param_2);
  FUN_10ac1e660(param_2);
  FUN_10ac28050(param_2);
  ppppppppuStack_e0 = (undefined ********)FUN_10a2d2a7c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a2d2a7c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10ab44110;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10ab44110(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10ac69d48;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10ac69d48(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10ac7037c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10ac7037c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10ac58ef4;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10ac58ef4(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a2d2a7c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a2d2a7c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10ab44110;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10ab44110(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10ac69d48;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10ac69d48(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a1e7068;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a1e7068(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a58a514;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a58a514(param_2);
  }
  FUN_10ac69fc4(param_2);
  FUN_10a817de0(param_2);
  param_2[0x36] = &PTR_DAT_110bbac18;
  if (*(char *)((long)param_2 + 0x1cf) < '\0') {
    param_2[0x38] = 8;
    puVar14 = (undefined8 *)param_2[0x37];
  }
  else {
    *(undefined1 *)((long)param_2 + 0x1cf) = 8;
    puVar14 = puVar13;
  }
  *puVar14 = 0x746553726579614c;
  *(undefined1 *)(puVar14 + 1) = 0;
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f653965;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
  uStack_88 = 0;
  uStack_80 = 0;
  func_0x00010a052690(param_2 + 0x2d,&ppppppppuStack_e0);
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    ppppppppuStack_110 = (undefined ********)&PTR_DAT_110bbac18;
    plStack_108 = (long *)0x0;
    ppppppppuStack_e0 = (undefined ********)((ulong)ppppppppuStack_e0 & 0xffffffffffffff00);
    pcStack_d0 = (code *)((ulong)pcStack_d0 & 0xffffffffffffff00);
    func_0x0001098949cc(param_2,&UNK_10f653965,&ppppppppuStack_110,&ppppppppuStack_e0);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f5af6c1,FUN_10a3f4db8,2,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f653953,FUN_10a3f4fa0,2,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f5fdc16,FUN_10a3f50c4,2,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&DAT_10f3dd8f5,FUN_10a3f517c,2,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&DAT_10f648172,FUN_10a3f5284,1,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&DAT_10f6455c5,FUN_10a3f53b8,1,param_2[8]);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    FUN_10a052828(param_2,&UNK_10f65395d,FUN_10a3f54a0,FUN_10a3f559c);
  }
  param_2[0x36] = PTR___ZTIDn_1103469e8;
  lVar15 = param_2[0x2e];
  if (param_2[0x2d] == lVar15) goto LAB_10a3dc170;
  ppuStack_d8 = *(undefined ***)(lVar15 + -0x60);
  ppppppppuStack_e0 = *(undefined *********)(lVar15 + -0x68);
  puStack_b8 = *(undefined **)(lVar15 + -0x40);
  uVar22 = *(ulong *)(lVar15 + -0x48);
  uVar23 = *(ulong *)(lVar15 + -0x50);
  pcStack_d0 = *(code **)(lVar15 + -0x58);
  iStack_c8 = (int)uVar23;
  uStack_c4 = (undefined4)(uVar23 >> 0x20);
  puStack_a8 = *(undefined **)(lVar15 + -0x30);
  uStack_b0 = *(undefined8 *)(lVar15 + -0x38);
  uStack_98 = *(undefined8 *)(lVar15 + -0x20);
  uStack_a0 = *(undefined8 *)(lVar15 + -0x28);
  uStack_80 = *(undefined8 *)(lVar15 + -8);
  uStack_88 = *(undefined8 *)(lVar15 + -0x10);
  uStack_90 = *(ulong *)(lVar15 + -0x18);
  uStack_c0 = (undefined4)uVar22;
  uStack_bc = (undefined4)(uVar22 >> 0x20);
  param_2[0x2e] = lVar15 + -0x68;
  puVar14 = param_2;
  FUN_10a0051e8(param_2,uVar23 & 0xffffffff,uStack_c4,uStack_90 & 0xffffffff,uVar22 & 0xffffffff,
                uStack_bc);
  if (((ulong)puVar14 & 1) == 0) {
    func_0x000109894f40(param_2,0);
    FUN_10a054234(param_2,&ppppppppuStack_e0,puVar13,&UNK_10f653965,8);
    FUN_10a05431c(param_2);
  }
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f653965;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  puStack_b8 = &UNK_10f653596;
  uStack_b0 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f653596;
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
  uStack_88 = 0;
  uStack_80 = 0;
  func_0x00010a004eb4(param_2,&ppppppppuStack_e0);
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if (param_2[2] == param_2[3]) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&UNK_10f65396e,FUN_10a3f56bc,1,param_2[3] + -8);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    ppppppppuStack_e0 = (undefined ********)FUN_10a3f57bc;
    ppuStack_d8 = &PTR_FUN_110bd17f8;
    pcStack_d0 = FUN_10a3c8d38;
    if (param_2[2] == param_2[3]) goto LAB_10a3dc170;
    FUN_10a0544d8(param_2,&UNK_10f653979,&ppppppppuStack_e0,0,param_2[3] + -8);
    (*(code *)*ppuStack_d8)(&ppuStack_d8);
  }
  puVar14 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if (param_2[2] == param_2[3]) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,"all",FUN_10a3f58ac,0,param_2[3] + -8);
  }
  func_0x00010a004064(param_2);
  FUN_10ac556f4(param_2);
  FUN_10ac9c844(param_2);
  FUN_10a5adbfc(param_2);
  FUN_10ac9bfe4(param_2);
  FUN_10acae9cc(param_2);
  FUN_10ac9ae18(param_2);
  FUN_10a33f0d4(param_2);
  FUN_10aca20d0(param_2);
  FUN_10aca2204(param_2);
  FUN_10a036b44(param_2);
  FUN_10a036348(param_2);
  FUN_10a0367e8(param_2);
  FUN_10ac98eac(param_2);
  FUN_10ac9a648(param_2);
  FUN_10aa72904(param_2);
  FUN_10a039814(param_2);
  FUN_10a0390f0(param_2);
  FUN_10a03af08(param_2);
  FUN_10a1bb59c(param_2);
  FUN_10a111ee4(param_2);
  FUN_10a003e74(param_2,&UNK_10f654fef,6);
  FUN_10a1121b4(param_2);
  func_0x00010a004064(param_2);
  FUN_10a00d838(param_2);
  FUN_10a6099b0(param_2);
  FUN_10a1e7344(param_2);
  FUN_10ab28b90(param_2);
  FUN_10ab28eb0(param_2);
  FUN_10a55673c(param_2);
  FUN_10a5569ec(param_2);
  func_0x00010a556b0c(param_2);
  FUN_10a32e12c(param_2);
  FUN_10aaea414(param_2);
  FUN_10ab17eb4(param_2);
  FUN_10ab1d478(param_2);
  FUN_10ab1af98(param_2);
  FUN_10a553e14(param_2);
  FUN_10a6b2b0c(param_2);
  FUN_10a6baf14(param_2);
  FUN_10a6b8d48(param_2);
  FUN_10a6b82c8(param_2);
  FUN_10a6bad70(param_2);
  FUN_10a6bee1c(param_2);
  FUN_10a6b0174(param_2);
  ppppppppuStack_e0 = (undefined ********)FUN_10ab42c70;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10ab42c70(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a7cdc6c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a7cdc6c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a7cc8f0;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a7cc8f0(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a7cb7c8;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a7cb7c8(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a7cc2f0;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a7cc2f0(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10ab44110;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10ab44110(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10ac69d48;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10ac69d48(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10ac7037c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10ac7037c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a6ea334;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a6ea334(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a6f0c40;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a6f0c40(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a8180d8;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a8180d8(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a818ce0;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a818ce0(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a6e293c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a6e293c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a6ed904;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a6ed904(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a8247c4;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a8247c4(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a817900;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a817900(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a8174e4;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a8174e4(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a6f3da4;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a6f3da4(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a7cdc6c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a7cdc6c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10ab42c70;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10ab42c70(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a6db520;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a6db520(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a6db4a0;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a6db4a0(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a82da24;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a82da24(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a82e120;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a82e120(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10ab686c4;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10ab686c4(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a1e0d9c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a1e0d9c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a9809f8;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a9809f8(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a98067c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a98067c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)0x10a980770;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    func_0x00010a980770(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a3f1b48;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a3f1b48(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a980360;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a980360(param_2);
  }
  FUN_10a8c7ab8(param_2);
  FUN_10a8c7db0(param_2);
  FUN_10a8c7f70(param_2);
  FUN_10a8c3574(param_2);
  FUN_10a8c31d4(param_2);
  FUN_10a8c399c(param_2);
  FUN_10a8c3ee4(param_2);
  FUN_10a8c9e74(param_2);
  FUN_10a8ccffc(param_2);
  FUN_10a8c43e4(param_2);
  FUN_10a8c4734(param_2);
  FUN_10a8c4ba4(param_2);
  FUN_10a8c50a4(param_2);
  FUN_10a8c53ac(param_2);
  FUN_10a8c56b4(param_2);
  FUN_10a8c594c(param_2);
  FUN_10a8bb928(param_2);
  FUN_10a8bbb1c(param_2);
  FUN_10a8bbd04(param_2);
  FUN_10a8bbef0(param_2);
  FUN_10a8bc0dc(param_2);
  FUN_10a8bc2d0(param_2);
  FUN_10a8bc55c(param_2);
  ppppppppuStack_e0 = (undefined ********)FUN_10a7490c4;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a7490c4(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a8ba3a0;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a8ba3a0(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a8b6994;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a8b6994(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a8c0b1c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a8c0b1c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a91c648;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a91c648(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a91e1d8;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a91e1d8(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a8cd410;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a8cd410(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a91ba40;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a91ba40(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a91eb84;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a91eb84(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a91f020;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a91f020(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aa1a4fc;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa1a4fc(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aa26914;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa26914(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aa33758;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa33758(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aa19edc;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa19edc(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)0x10aa19f8c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    func_0x00010aa19f8c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)0x10aa1a03c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    func_0x00010aa1a03c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)0x10aa1a0ec;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    func_0x00010aa1a0ec(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)0x10aa1a218;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    func_0x00010aa1a218(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)0x10aa1a344;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    func_0x00010aa1a344(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aa17524;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa17524(param_2);
  }
  FUN_10a1114bc(param_2);
  FUN_10a11166c(param_2);
  FUN_10a10eef0(param_2);
  FUN_10a110af8(param_2);
  FUN_10a110ca8(param_2);
  FUN_10a110e60(param_2);
  FUN_10a10f4d0(param_2);
  FUN_10a10f794(param_2);
  FUN_10a10fae0(param_2);
  FUN_10a10ff94(param_2);
  FUN_10a10f36c(param_2);
  FUN_10a10db74(param_2);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f655fcf;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a3e77e8(param_2,&ppppppppuStack_e0);
  FUN_10a948584(param_2);
  FUN_10a9486e8(param_2);
  FUN_10a94c85c(param_2);
  FUN_10a94c668(param_2);
  FUN_10a948adc(param_2);
  FUN_10a946d38(param_2);
  FUN_10a035fb8(param_2);
  FUN_10a035278(param_2);
  FUN_10a0357c8(param_2);
  FUN_10a03254c(param_2);
  FUN_10a032fa0(param_2);
  FUN_10a033358(param_2);
  FUN_10a0339ec(param_2);
  FUN_10a94dd44(param_2);
  ppppppppuStack_e0 = (undefined ********)FUN_10aa1a4fc;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa1a4fc(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aa26914;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa26914(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aa33758;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa33758(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aa19edc;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa19edc(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)0x10aa19f8c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    func_0x00010aa19f8c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)0x10aa1a03c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    func_0x00010aa1a03c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)0x10aa1a0ec;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    func_0x00010aa1a0ec(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)0x10aa1a218;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    func_0x00010aa1a218(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)0x10aa1a344;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    func_0x00010aa1a344(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aa17524;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa17524(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aa33f48;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa33f48(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aa159dc;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa159dc(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aa23174;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa23174(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aa25184;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa25184(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)0x10aa24a54;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    func_0x00010aa24a54(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)0x10aa24d04;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    func_0x00010aa24d04(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aa25840;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa25840(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aa26358;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa26358(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aa2386c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa2386c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aa26cac;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa26cac(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aa32d6c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa32d6c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aa382e0;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa382e0(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aa39b6c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa39b6c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aa3a500;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa3a500(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aa3a920;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa3a920(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aa3b278;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa3b278(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aa1b6d4;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa1b6d4(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aa206a0;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa206a0(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aa1c184;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa1c184(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a407ec8;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a407ec8(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a405f44;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a405f44(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a408b50;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a408b50(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a403bec;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a403bec(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a403194;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a403194(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a405340;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a405340(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a4046e0;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a4046e0(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a4070a4;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a4070a4(param_2);
  }
  FUN_10a87d91c(param_2);
  FUN_10a87d2c4(param_2);
  FUN_10a85e530(param_2);
  FUN_10a85ed3c(param_2);
  FUN_10a85d154(param_2);
  FUN_10a85e924(param_2);
  FUN_10a85dd80(param_2);
  FUN_10a8791bc(param_2);
  FUN_10a8798e0(param_2);
  FUN_10a879ad4(param_2);
  FUN_10a87955c(param_2);
  FUN_10a879cc8(param_2);
  FUN_10a879ec4(param_2);
  FUN_10a87dc28(param_2);
  FUN_10aaef914(param_2);
  FUN_10a87cb24(param_2);
  FUN_10a876730(param_2);
  FUN_10a74f10c(param_2);
  FUN_10a750390(param_2);
  FUN_10a74f588(param_2);
  FUN_10a74fe58(param_2);
  FUN_10a74ec84(param_2);
  FUN_10a74f988(param_2);
  FUN_10aaee6d0(param_2);
  FUN_10a59d2b4(param_2);
  FUN_10a9c001c(param_2);
  FUN_10a9c0b88(param_2);
  FUN_10a9bfd94(param_2);
  FUN_10a9c0930(param_2);
  FUN_10a9c1110(param_2);
  FUN_10a9c262c(param_2);
  FUN_10a9c206c(param_2);
  FUN_10a9c1b00(param_2);
  FUN_10a9c2864(param_2);
  FUN_10a9c0f54(param_2);
  FUN_10a9c23bc(param_2);
  FUN_10a9c2270(param_2);
  FUN_10a9c1e60(param_2);
  FUN_10a9c1d04(param_2);
  FUN_10a9c0dbc(param_2);
  FUN_10a9c1430(param_2);
  FUN_10a9c338c(param_2);
  FUN_10a9c2980(param_2);
  FUN_10a9c2e08(param_2);
  FUN_10a9c2aa8(param_2);
  FUN_10a9c3118(param_2);
  FUN_10a9c2c34(param_2);
  FUN_10a9c3534(param_2);
  FUN_10a9c15c8(param_2);
  FUN_10a2ad504(param_2);
  FUN_10a2adb94(param_2);
  FUN_10a2add7c(param_2);
  FUN_10a2ad624(param_2);
  FUN_10a9c6e08(param_2);
  FUN_10a9c68a4(param_2);
  FUN_10a9c6b38(param_2);
  FUN_10a9c3cd8(param_2);
  FUN_10a9bfa68(param_2);
  FUN_10a9bd4e4(param_2);
  FUN_10a2daaa4(param_2);
  FUN_10a32f33c(param_2);
  FUN_10ac73a50(param_2);
  FUN_10a2476b0(param_2);
  FUN_10acaee1c(param_2);
  FUN_10a03c1d8(param_2);
  FUN_10a03b6f8(param_2);
  FUN_10a7997ec(param_2);
  FUN_10a73fab4(param_2);
  FUN_10a73fd9c(param_2);
  FUN_10a741a00(param_2);
  FUN_10a741de0(param_2);
  FUN_10a744904(param_2);
  FUN_10ac1f808(param_2);
  if (param_1 != (code *)0x0) {
    lVar15 = *(long *)(param_1 + 0xb60);
    plVar19 = *(long **)(param_1 + 0xb68);
    if (plVar19 == (long *)0x0) {
      bVar9 = *(byte *)(lVar15 + 0x40) & 1;
    }
    else {
      plVar1 = plVar19 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = *plVar1 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      bVar9 = *(byte *)(lVar15 + 0x40);
      do {
        lVar15 = *plVar1;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = lVar15 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
        bVar9 = bVar9 & 1;
      }
    }
    if (bVar9 != 0) {
      FUN_10a5371e0(param_2);
    }
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a7e28d4;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a7e28d4(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a7e54c4;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a7e54c4(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a2d8148;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a2d8148(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a327484;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a327484(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a7ef100;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a7ef100(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a7edf80;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a7edf80(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a7e9ea4;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a7e9ea4(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a327354;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a327354(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a7f5468;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a7f5468(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a7f568c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a7f568c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a7f85e0;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a7f85e0(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a009804;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a009804(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a7f9188;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a7f9188(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a7ec630;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a7ec630(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a4a1830;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a4a1830(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a54a3a4;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a54a3a4(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aafc6b0;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aafc6b0(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10ac26994;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10ac26994(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10ac26b7c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10ac26b7c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10ac8dd7c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10ac8dd7c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a114da0;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a114da0(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a113778;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a113778(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a113430;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a113430(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a5efec4;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a5efec4(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a4a3260;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a4a3260(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10acb3700;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10acb3700(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a66876c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a66876c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a6aef54;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a6aef54(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a58bfe4;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a58bfe4(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a58c52c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a58c52c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a6ae7d4;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a6ae7d4(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a6aeb94;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a6aeb94(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10ac65548;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10ac65548(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10ac36af0;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10ac36af0(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a689c28;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a689c28(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a689340;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a689340(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a6897dc;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a6897dc(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a69876c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a69876c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a698374;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a698374(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a696194;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a696194(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a589758;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a589758(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a695d98;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a695d98(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a5891f8;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a5891f8(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a684cf4;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a684cf4(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a6848f4;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a6848f4(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a6850e8;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a6850e8(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a685e54;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a685e54(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10ac55804;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10ac55804(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10ac3aed0;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10ac3aed0(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10ac70718;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10ac70718(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10ac1b16c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10ac1b16c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10ac33dfc;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10ac33dfc(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a8cdd24;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a8cdd24(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a59f1b8;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a59f1b8(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10acb0c64;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10acb0c64(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a2d6268;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a2d6268(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a2d8148;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a2d8148(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a327484;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a327484(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a698c88;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a698c88(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a698f9c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a698f9c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a6990c0;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a6990c0(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a8ced10;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a8ced10(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a8d035c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a8d035c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a8cf9e0;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a8cf9e0(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a327730;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a327730(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a32a4c8;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a32a4c8(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a327354;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a327354(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10ab3bcbc;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10ab3bcbc(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10ab3ba54;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10ab3ba54(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aaf466c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aaf466c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10acaf1f4;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10acaf1f4(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10acaf3b4;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10acaf3b4(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10acaf66c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10acaf66c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10ac8efc4;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10ac8efc4(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10ac8f30c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10ac8f30c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a58b4e0;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a58b4e0(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a58b88c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a58b88c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a58bc38;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a58bc38(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)0x10a94d51c;
  func_0x0001072a83d0(param_2 + 0x1a,&ppppppppuStack_e0,&ppppppppuStack_e0);
  ppppppppuStack_e0 = (undefined ********)FUN_10a94d000;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a94d000(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a772954;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a772954(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a41f064;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a41f064(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a39f3b0;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a39f3b0(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a41b718;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a41b718(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a39e958;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a39e958(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a39ec60;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a39ec60(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a39eee8;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a39eee8(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a39f0a8;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a39f0a8(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a39f234;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a39f234(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a4202c0;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a4202c0(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10a64c200;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10a64c200(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aa89ee4;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa89ee4(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10ac5970c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10ac5970c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10ac6f054;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10ac6f054(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aa1a4fc;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa1a4fc(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aa26914;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa26914(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aa33758;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa33758(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aa19edc;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa19edc(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)0x10aa19f8c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    func_0x00010aa19f8c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)0x10aa1a03c;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    func_0x00010aa1a03c(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)0x10aa1a0ec;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    func_0x00010aa1a0ec(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)0x10aa1a218;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    func_0x00010aa1a218(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)0x10aa1a344;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    func_0x00010aa1a344(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10aa17524;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10aa17524(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10ab3b0ac;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10ab3b0ac(param_2);
  }
  ppppppppuStack_e0 = (undefined ********)FUN_10ab418a0;
  ppppppppuVar21 = (undefined ********)&ppppppppuStack_e0;
  func_0x0001072a83d0(param_2 + 0x1a,ppppppppuVar21,&ppppppppuStack_e0);
  if (((ulong)ppppppppuVar21 & 1) != 0) {
    FUN_10ab418a0(param_2);
  }
  func_0x000109887da8(&ppppppppuStack_110,&UNK_10e4b43ae,0x87);
  ppppppppuVar21 = ppppppppuStack_110;
  if (-1 < cStack_f9) {
    ppppppppuVar21 = (undefined ********)&ppppppppuStack_110;
  }
  param_2[0x36] = &PTR_DAT_110bd2fe8;
  ppppppppuVar3 = (undefined ********)&UNK_10f653596;
  if (ppppppppuVar21 != (undefined ********)0x0) {
    ppppppppuVar3 = ppppppppuVar21;
  }
  func_0x000107c2c4dc(puVar13,ppppppppuVar3);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
  uStack_88 = 0;
  uStack_80 = 0;
  ppppppppuStack_e0 = ppppppppuVar21;
  func_0x00010a052690(param_2 + 0x2d,&ppppppppuStack_e0);
  puVar13 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar13 & 1) == 0) {
    ppppppppuStack_f8 = (undefined ********)&PTR_DAT_110bd2fe8;
    ppuStack_f0 = (undefined **)0x0;
    ppppppppuStack_e0 = (undefined ********)&PTR_DAT_110b178e0;
    ppuStack_d8 = (undefined **)0x0;
    pcStack_d0 = (code *)CONCAT71(pcStack_d0._1_7_,1);
    func_0x0001098949cc(param_2,ppppppppuVar21,&ppppppppuStack_f8,&ppppppppuStack_e0);
  }
  if (cStack_f9 < '\0') {
    __ZdlPv(ppppppppuStack_110);
  }
  puVar13 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar13 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&DAT_10f68571c,FUN_10a3ff860,2,param_2[8]);
  }
  puVar13 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar13 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_10a3dc170;
    FUN_10a054dac(param_2,&DAT_10f685720,FUN_10a40016c,2,param_2[8]);
  }
  param_2[0x36] = PTR___ZTIDn_1103469e8;
  lVar15 = param_2[0x2e];
  if (param_2[0x2d] == lVar15) goto LAB_10a3dc170;
  uVar4 = *(undefined4 *)(lVar15 + -0x50);
  uVar6 = *(undefined4 *)(lVar15 + -0x4c);
  uVar5 = *(undefined4 *)(lVar15 + -0x48);
  uVar7 = *(undefined4 *)(lVar15 + -0x44);
  uVar8 = *(undefined4 *)(lVar15 + -0x18);
  param_2[0x2e] = lVar15 + -0x68;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,uVar4,uVar6,uVar8,uVar5,uVar7);
  if (((ulong)puVar13 & 1) == 0) {
    func_0x000109894f40(param_2,0);
    FUN_10a05431c(param_2);
  }
  FUN_10a003e74(param_2,&UNK_10f63f33c,6);
  if (param_1 == (code *)0x0) {
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    ppppppppuStack_f8 = *(undefined *********)(*(long *)(param_1 + 0x8f8) + 8);
    ppuStack_f0 = *(undefined ***)(*(long *)(param_1 + 0x8f8) + 0x10);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,0x19,1,0xffffffff,2,4);
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110bd2fe8;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&UNK_10f655527,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar18 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar18;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
      }
    }
  }
  ppuVar17 = ppuStack_f0;
  if (ppuStack_f0 != (undefined **)0x0) {
    ppuVar18 = ppuStack_f0 + 1;
    do {
      puVar16 = *ppuVar18;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
      if (bVar11) {
        *ppuVar18 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 == (undefined *)0x0) {
      (**(code **)(*ppuStack_f0 + 0x10))(ppuStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
    }
  }
  func_0x00010a004064(param_2);
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&DAT_10f570415;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 100;
  uStack_c4 = 1;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
  uStack_88 = 0;
  uStack_80 = 0;
  func_0x00010a004eb4(param_2,&ppppppppuStack_e0);
  if (param_1 == (code *)0x0) {
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    ppppppppuStack_f8 = *(undefined *********)(param_1 + 0x888);
    ppuStack_f0 = *(undefined ***)(param_1 + 0x890);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  ppuVar18 = ppuVar17;
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110c18e20;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&UNK_10f65553e,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    ppuVar18 = ppuStack_f0;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar2 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        ppuVar18 = ppuStack_f0;
      }
    }
  }
  if (ppuVar18 == (undefined **)0x0) {
LAB_10a3d88d0:
    if (param_1 != (code *)0x0) goto LAB_10a3d88d4;
LAB_10a3d8918:
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    ppuVar17 = ppuVar18 + 1;
    do {
      puVar16 = *ppuVar17;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
      if (bVar11) {
        *ppuVar17 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 != (undefined *)0x0) goto LAB_10a3d88d0;
    (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
    if (param_1 == (code *)0x0) goto LAB_10a3d8918;
LAB_10a3d88d4:
    ppppppppuStack_f8 = *(undefined *********)(param_1 + 0x898);
    ppuStack_f0 = *(undefined ***)(param_1 + 0x8a0);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  ppuVar18 = ppuVar17;
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110bb9ba8;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&DAT_10f2c3a26,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    ppuVar18 = ppuStack_f0;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar2 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        ppuVar18 = ppuStack_f0;
      }
    }
  }
  if (ppuVar18 == (undefined **)0x0) {
LAB_10a3d8a84:
    if (param_1 != (code *)0x0) goto LAB_10a3d8a88;
LAB_10a3d8acc:
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    ppuVar17 = ppuVar18 + 1;
    do {
      puVar16 = *ppuVar17;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
      if (bVar11) {
        *ppuVar17 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 != (undefined *)0x0) goto LAB_10a3d8a84;
    (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
    if (param_1 == (code *)0x0) goto LAB_10a3d8acc;
LAB_10a3d8a88:
    ppppppppuStack_f8 = *(undefined *********)(param_1 + 0x830);
    ppuStack_f0 = *(undefined ***)(param_1 + 0x838);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  ppuVar18 = ppuVar17;
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110badec0;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&UNK_10f65557b,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    ppuVar18 = ppuStack_f0;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar2 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        ppuVar18 = ppuStack_f0;
      }
    }
  }
  if (ppuVar18 == (undefined **)0x0) {
LAB_10a3d8c38:
    if (param_1 != (code *)0x0) goto LAB_10a3d8c3c;
LAB_10a3d8c80:
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    ppuVar17 = ppuVar18 + 1;
    do {
      puVar16 = *ppuVar17;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
      if (bVar11) {
        *ppuVar17 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 != (undefined *)0x0) goto LAB_10a3d8c38;
    (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
    if (param_1 == (code *)0x0) goto LAB_10a3d8c80;
LAB_10a3d8c3c:
    ppppppppuStack_f8 = *(undefined *********)(param_1 + 0x8d8);
    ppuStack_f0 = *(undefined ***)(param_1 + 0x8e0);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  ppuVar18 = ppuVar17;
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110c18e58;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&UNK_10f655587,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    ppuVar18 = ppuStack_f0;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar2 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        ppuVar18 = ppuStack_f0;
      }
    }
  }
  if (ppuVar18 == (undefined **)0x0) {
LAB_10a3d8dec:
    if (param_1 != (code *)0x0) goto LAB_10a3d8df0;
LAB_10a3d8e34:
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    ppuVar17 = ppuVar18 + 1;
    do {
      puVar16 = *ppuVar17;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
      if (bVar11) {
        *ppuVar17 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 != (undefined *)0x0) goto LAB_10a3d8dec;
    (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
    if (param_1 == (code *)0x0) goto LAB_10a3d8e34;
LAB_10a3d8df0:
    ppppppppuStack_f8 = *(undefined *********)(param_1 + 0x8a8);
    ppuStack_f0 = *(undefined ***)(param_1 + 0x8b0);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  ppuVar18 = ppuVar17;
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110bf8128;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&UNK_10f65554a,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    ppuVar18 = ppuStack_f0;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar2 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        ppuVar18 = ppuStack_f0;
      }
    }
  }
  if (ppuVar18 == (undefined **)0x0) {
LAB_10a3d8fa0:
    if (param_1 != (code *)0x0) goto LAB_10a3d8fa4;
LAB_10a3d8fe8:
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    ppuVar17 = ppuVar18 + 1;
    do {
      puVar16 = *ppuVar17;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
      if (bVar11) {
        *ppuVar17 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 != (undefined *)0x0) goto LAB_10a3d8fa0;
    (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
    if (param_1 == (code *)0x0) goto LAB_10a3d8fe8;
LAB_10a3d8fa4:
    ppppppppuStack_f8 = *(undefined *********)(*(long *)(param_1 + 0x8b8) + 0x20);
    ppuStack_f0 = *(undefined ***)(*(long *)(param_1 + 0x8b8) + 0x28);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110c6c3d8;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&DAT_10f655562,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar18 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar18;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
      }
    }
  }
  ppuVar17 = ppuStack_f0;
  if (ppuStack_f0 == (undefined **)0x0) {
LAB_10a3d9154:
    if (param_1 != (code *)0x0) goto LAB_10a3d9158;
LAB_10a3d919c:
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    ppuVar18 = ppuStack_f0 + 1;
    do {
      puVar16 = *ppuVar18;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
      if (bVar11) {
        *ppuVar18 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 != (undefined *)0x0) goto LAB_10a3d9154;
    (**(code **)(*ppuStack_f0 + 0x10))(ppuStack_f0);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
    if (param_1 == (code *)0x0) goto LAB_10a3d919c;
LAB_10a3d9158:
    ppppppppuStack_f8 = *(undefined *********)(param_1 + 0x8c8);
    ppuStack_f0 = *(undefined ***)(param_1 + 0x8d0);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  ppuVar18 = ppuVar17;
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110bb9be0;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&UNK_10f655597,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    ppuVar18 = ppuStack_f0;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar2 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        ppuVar18 = ppuStack_f0;
      }
    }
  }
  if (ppuVar18 == (undefined **)0x0) {
LAB_10a3d9308:
    if (param_1 != (code *)0x0) goto LAB_10a3d930c;
LAB_10a3d9350:
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    ppuVar17 = ppuVar18 + 1;
    do {
      puVar16 = *ppuVar17;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
      if (bVar11) {
        *ppuVar17 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 != (undefined *)0x0) goto LAB_10a3d9308;
    (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
    if (param_1 == (code *)0x0) goto LAB_10a3d9350;
LAB_10a3d930c:
    ppppppppuStack_f8 = *(undefined *********)(param_1 + 0x8e8);
    ppuStack_f0 = *(undefined ***)(param_1 + 0x8f0);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  ppuVar18 = ppuVar17;
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110c382c0;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&UNK_10f6555a6,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    ppuVar18 = ppuStack_f0;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar2 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        ppuVar18 = ppuStack_f0;
      }
    }
  }
  if (ppuVar18 == (undefined **)0x0) {
LAB_10a3d94bc:
    if (param_1 != (code *)0x0) goto LAB_10a3d94c0;
LAB_10a3d9504:
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    ppuVar17 = ppuVar18 + 1;
    do {
      puVar16 = *ppuVar17;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
      if (bVar11) {
        *ppuVar17 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 != (undefined *)0x0) goto LAB_10a3d94bc;
    (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
    if (param_1 == (code *)0x0) goto LAB_10a3d9504;
LAB_10a3d94c0:
    ppppppppuStack_f8 = *(undefined *********)(param_1 + 0x900);
    ppuStack_f0 = *(undefined ***)(param_1 + 0x908);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  ppuVar18 = ppuVar17;
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110bf8160;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&UNK_10f6555cd,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    ppuVar18 = ppuStack_f0;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar2 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        ppuVar18 = ppuStack_f0;
      }
    }
  }
  if (ppuVar18 == (undefined **)0x0) {
LAB_10a3d9670:
    if (param_1 != (code *)0x0) goto LAB_10a3d9674;
LAB_10a3d96b8:
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    ppuVar17 = ppuVar18 + 1;
    do {
      puVar16 = *ppuVar17;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
      if (bVar11) {
        *ppuVar17 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 != (undefined *)0x0) goto LAB_10a3d9670;
    (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
    if (param_1 == (code *)0x0) goto LAB_10a3d96b8;
LAB_10a3d9674:
    ppppppppuStack_f8 = *(undefined *********)(param_1 + 3000);
    ppuStack_f0 = *(undefined ***)(param_1 + 0xbc0);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  ppuVar18 = ppuVar17;
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110c18e70;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&UNK_10f6555b7,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    ppuVar18 = ppuStack_f0;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar2 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        ppuVar18 = ppuStack_f0;
      }
    }
  }
  if (ppuVar18 == (undefined **)0x0) {
LAB_10a3d9824:
    if (param_1 != (code *)0x0) goto LAB_10a3d9828;
LAB_10a3d986c:
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    ppuVar17 = ppuVar18 + 1;
    do {
      puVar16 = *ppuVar17;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
      if (bVar11) {
        *ppuVar17 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 != (undefined *)0x0) goto LAB_10a3d9824;
    (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
    if (param_1 == (code *)0x0) goto LAB_10a3d986c;
LAB_10a3d9828:
    ppppppppuStack_f8 = *(undefined *********)(param_1 + 0x930);
    ppuStack_f0 = *(undefined ***)(param_1 + 0x938);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  ppuVar18 = ppuVar17;
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110bb9bf8;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&UNK_10f6555e0,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    ppuVar18 = ppuStack_f0;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar2 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        ppuVar18 = ppuStack_f0;
      }
    }
  }
  if (ppuVar18 == (undefined **)0x0) {
LAB_10a3d99d8:
    if (param_1 != (code *)0x0) goto LAB_10a3d99dc;
LAB_10a3d9a20:
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    ppuVar17 = ppuVar18 + 1;
    do {
      puVar16 = *ppuVar17;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
      if (bVar11) {
        *ppuVar17 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 != (undefined *)0x0) goto LAB_10a3d99d8;
    (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
    if (param_1 == (code *)0x0) goto LAB_10a3d9a20;
LAB_10a3d99dc:
    ppppppppuStack_f8 = *(undefined *********)(param_1 + 0xa10);
    ppuStack_f0 = *(undefined ***)(param_1 + 0xa18);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  ppuVar18 = ppuVar17;
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110bb9c10;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&UNK_10f6555f1,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    ppuVar18 = ppuStack_f0;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar2 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        ppuVar18 = ppuStack_f0;
      }
    }
  }
  if (ppuVar18 == (undefined **)0x0) {
LAB_10a3d9b8c:
    if (param_1 != (code *)0x0) goto LAB_10a3d9b90;
LAB_10a3d9bd4:
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    ppuVar17 = ppuVar18 + 1;
    do {
      puVar16 = *ppuVar17;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
      if (bVar11) {
        *ppuVar17 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 != (undefined *)0x0) goto LAB_10a3d9b8c;
    (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
    if (param_1 == (code *)0x0) goto LAB_10a3d9bd4;
LAB_10a3d9b90:
    ppppppppuStack_f8 = *(undefined *********)(param_1 + 0x940);
    ppuStack_f0 = *(undefined ***)(param_1 + 0x948);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  ppuVar18 = ppuVar17;
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110bb9c28;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&UNK_10f655605,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    ppuVar18 = ppuStack_f0;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar2 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        ppuVar18 = ppuStack_f0;
      }
    }
  }
  if (ppuVar18 == (undefined **)0x0) {
LAB_10a3d9d40:
    if (param_1 != (code *)0x0) goto LAB_10a3d9d44;
LAB_10a3d9d88:
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    ppuVar17 = ppuVar18 + 1;
    do {
      puVar16 = *ppuVar17;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
      if (bVar11) {
        *ppuVar17 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 != (undefined *)0x0) goto LAB_10a3d9d40;
    (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
    if (param_1 == (code *)0x0) goto LAB_10a3d9d88;
LAB_10a3d9d44:
    ppppppppuStack_f8 = *(undefined *********)(param_1 + 0x950);
    ppuStack_f0 = *(undefined ***)(param_1 + 0x958);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  ppuVar18 = ppuVar17;
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110bf8178;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&UNK_10f65560f,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    ppuVar18 = ppuStack_f0;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar2 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        ppuVar18 = ppuStack_f0;
      }
    }
  }
  if (ppuVar18 == (undefined **)0x0) {
LAB_10a3d9ef4:
    if (param_1 != (code *)0x0) goto LAB_10a3d9ef8;
LAB_10a3d9f3c:
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    ppuVar17 = ppuVar18 + 1;
    do {
      puVar16 = *ppuVar17;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
      if (bVar11) {
        *ppuVar17 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 != (undefined *)0x0) goto LAB_10a3d9ef4;
    (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
    if (param_1 == (code *)0x0) goto LAB_10a3d9f3c;
LAB_10a3d9ef8:
    ppppppppuStack_f8 = *(undefined *********)(param_1 + 0x9b0);
    ppuStack_f0 = *(undefined ***)(param_1 + 0x9b8);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  ppuVar18 = ppuVar17;
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110c382d8;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&UNK_10f655627,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    ppuVar18 = ppuStack_f0;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar2 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        ppuVar18 = ppuStack_f0;
      }
    }
  }
  if (ppuVar18 == (undefined **)0x0) {
LAB_10a3da0a8:
    if (param_1 != (code *)0x0) goto LAB_10a3da0ac;
LAB_10a3da0f0:
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    ppuVar17 = ppuVar18 + 1;
    do {
      puVar16 = *ppuVar17;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
      if (bVar11) {
        *ppuVar17 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 != (undefined *)0x0) goto LAB_10a3da0a8;
    (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
    if (param_1 == (code *)0x0) goto LAB_10a3da0f0;
LAB_10a3da0ac:
    ppppppppuStack_f8 = *(undefined *********)(param_1 + 0x9c0);
    ppuStack_f0 = *(undefined ***)(param_1 + 0x9c8);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,0x19,0x100,0xffffffff,0xffffffff,0xffffffff);
  ppuVar18 = ppuVar17;
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110c382f0;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&UNK_10f65563c,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    ppuVar18 = ppuStack_f0;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar2 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        ppuVar18 = ppuStack_f0;
      }
    }
  }
  if (ppuVar18 == (undefined **)0x0) {
LAB_10a3da25c:
    if (param_1 != (code *)0x0) goto LAB_10a3da260;
LAB_10a3da2a4:
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    ppuVar17 = ppuVar18 + 1;
    do {
      puVar16 = *ppuVar17;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
      if (bVar11) {
        *ppuVar17 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 != (undefined *)0x0) goto LAB_10a3da25c;
    (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
    if (param_1 == (code *)0x0) goto LAB_10a3da2a4;
LAB_10a3da260:
    ppppppppuStack_f8 = *(undefined *********)(param_1 + 0x9d0);
    ppuStack_f0 = *(undefined ***)(param_1 + 0x9d8);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110c18ec8;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&UNK_10f655649,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar18 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar18;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
      }
    }
  }
  ppuVar17 = ppuStack_f0;
  if (ppuStack_f0 == (undefined **)0x0) {
LAB_10a3da410:
    if (param_1 != (code *)0x0) goto LAB_10a3da414;
LAB_10a3da458:
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    ppuVar18 = ppuStack_f0 + 1;
    do {
      puVar16 = *ppuVar18;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
      if (bVar11) {
        *ppuVar18 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 != (undefined *)0x0) goto LAB_10a3da410;
    (**(code **)(*ppuStack_f0 + 0x10))(ppuStack_f0);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
    if (param_1 == (code *)0x0) goto LAB_10a3da458;
LAB_10a3da414:
    ppppppppuStack_f8 = *(undefined *********)(param_1 + 0xa00);
    ppuStack_f0 = *(undefined ***)(param_1 + 0xa08);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  ppuVar18 = ppuVar17;
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110c38308;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&UNK_10f655657,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    ppuVar18 = ppuStack_f0;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar2 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        ppuVar18 = ppuStack_f0;
      }
    }
  }
  if (ppuVar18 == (undefined **)0x0) {
LAB_10a3da5c4:
    if (param_1 != (code *)0x0) goto LAB_10a3da5c8;
LAB_10a3da60c:
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    ppuVar17 = ppuVar18 + 1;
    do {
      puVar16 = *ppuVar17;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
      if (bVar11) {
        *ppuVar17 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 != (undefined *)0x0) goto LAB_10a3da5c4;
    (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
    if (param_1 == (code *)0x0) goto LAB_10a3da60c;
LAB_10a3da5c8:
    ppppppppuStack_f8 = *(undefined *********)(param_1 + 0x910);
    ppuStack_f0 = *(undefined ***)(param_1 + 0x918);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  ppuVar18 = ppuVar17;
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110bf8190;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&UNK_10f65556f,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    ppuVar18 = ppuStack_f0;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar2 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        ppuVar18 = ppuStack_f0;
      }
    }
  }
  if (ppuVar18 == (undefined **)0x0) {
LAB_10a3da778:
    if (param_1 != (code *)0x0) goto LAB_10a3da77c;
LAB_10a3da7c0:
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    ppuVar17 = ppuVar18 + 1;
    do {
      puVar16 = *ppuVar17;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
      if (bVar11) {
        *ppuVar17 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 != (undefined *)0x0) goto LAB_10a3da778;
    (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
    if (param_1 == (code *)0x0) goto LAB_10a3da7c0;
LAB_10a3da77c:
    ppppppppuStack_f8 = *(undefined *********)(param_1 + 0xa80);
    ppuStack_f0 = *(undefined ***)(param_1 + 0xa88);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110c46210;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&UNK_10f65568c,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar18 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar18;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
      }
    }
  }
  ppuVar17 = ppuStack_f0;
  if (ppuStack_f0 == (undefined **)0x0) {
LAB_10a3da92c:
    if (param_1 != (code *)0x0) goto LAB_10a3da930;
LAB_10a3da974:
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    ppuVar18 = ppuStack_f0 + 1;
    do {
      puVar16 = *ppuVar18;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
      if (bVar11) {
        *ppuVar18 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 != (undefined *)0x0) goto LAB_10a3da92c;
    (**(code **)(*ppuStack_f0 + 0x10))(ppuStack_f0);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
    if (param_1 == (code *)0x0) goto LAB_10a3da974;
LAB_10a3da930:
    ppppppppuStack_f8 = *(undefined *********)(param_1 + 0xa50);
    ppuStack_f0 = *(undefined ***)(param_1 + 0xa58);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  ppuVar18 = ppuVar17;
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110bf1990;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&UNK_10f655668,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    ppuVar18 = ppuStack_f0;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar2 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        ppuVar18 = ppuStack_f0;
      }
    }
  }
  if (ppuVar18 == (undefined **)0x0) {
LAB_10a3daae0:
    if (param_1 != (code *)0x0) goto LAB_10a3daae4;
LAB_10a3dab28:
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    ppuVar17 = ppuVar18 + 1;
    do {
      puVar16 = *ppuVar17;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
      if (bVar11) {
        *ppuVar17 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 != (undefined *)0x0) goto LAB_10a3daae0;
    (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
    if (param_1 == (code *)0x0) goto LAB_10a3dab28;
LAB_10a3daae4:
    ppppppppuStack_f8 = *(undefined *********)(param_1 + 0xa60);
    ppuStack_f0 = *(undefined ***)(param_1 + 0xa68);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  ppuVar18 = ppuVar17;
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110bb9c60;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&UNK_10f65567c,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    ppuVar18 = ppuStack_f0;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar2 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        ppuVar18 = ppuStack_f0;
      }
    }
  }
  if (ppuVar18 == (undefined **)0x0) {
LAB_10a3dac94:
    if (param_1 != (code *)0x0) goto LAB_10a3dac98;
LAB_10a3dacdc:
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    ppuVar17 = ppuVar18 + 1;
    do {
      puVar16 = *ppuVar17;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
      if (bVar11) {
        *ppuVar17 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 != (undefined *)0x0) goto LAB_10a3dac94;
    (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
    if (param_1 == (code *)0x0) goto LAB_10a3dacdc;
LAB_10a3dac98:
    ppppppppuStack_f8 = *(undefined *********)(param_1 + 0xa90);
    ppuStack_f0 = *(undefined ***)(param_1 + 0xa98);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  ppuVar18 = ppuVar17;
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110c38320;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&UNK_10f65569e,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    ppuVar18 = ppuStack_f0;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar2 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        ppuVar18 = ppuStack_f0;
      }
    }
  }
  if (ppuVar18 == (undefined **)0x0) {
LAB_10a3dae48:
    if (param_1 != (code *)0x0) goto LAB_10a3dae4c;
LAB_10a3dae90:
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    ppuVar17 = ppuVar18 + 1;
    do {
      puVar16 = *ppuVar17;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
      if (bVar11) {
        *ppuVar17 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 != (undefined *)0x0) goto LAB_10a3dae48;
    (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
    if (param_1 == (code *)0x0) goto LAB_10a3dae90;
LAB_10a3dae4c:
    ppppppppuStack_f8 = *(undefined *********)(param_1 + 0xaa0);
    ppuStack_f0 = *(undefined ***)(param_1 + 0xaa8);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,100,1,0xffffffff,0xffffffff,0xffffffff);
  ppuVar18 = ppuVar17;
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110bb9c98;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&UNK_10f6556aa,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    ppuVar18 = ppuStack_f0;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar2 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        ppuVar18 = ppuStack_f0;
      }
    }
  }
  if (ppuVar18 == (undefined **)0x0) {
LAB_10a3daffc:
    if (param_1 != (code *)0x0) goto LAB_10a3db000;
LAB_10a3db044:
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    ppuVar17 = ppuVar18 + 1;
    do {
      puVar16 = *ppuVar17;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
      if (bVar11) {
        *ppuVar17 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 != (undefined *)0x0) goto LAB_10a3daffc;
    (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
    if (param_1 == (code *)0x0) goto LAB_10a3db044;
LAB_10a3db000:
    ppppppppuStack_f8 = *(undefined *********)(param_1 + 0xa20);
    ppuStack_f0 = *(undefined ***)(param_1 + 0xa28);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  ppuVar18 = ppuVar17;
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110c38380;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&UNK_10f6556bc,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    ppuVar18 = ppuStack_f0;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar2 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        ppuVar18 = ppuStack_f0;
      }
    }
  }
  if (ppuVar18 == (undefined **)0x0) {
LAB_10a3db1b0:
    if (param_1 != (code *)0x0) goto LAB_10a3db1b4;
LAB_10a3db1f8:
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    ppuVar17 = ppuVar18 + 1;
    do {
      puVar16 = *ppuVar17;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
      if (bVar11) {
        *ppuVar17 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 != (undefined *)0x0) goto LAB_10a3db1b0;
    (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
    if (param_1 == (code *)0x0) goto LAB_10a3db1f8;
LAB_10a3db1b4:
    ppppppppuStack_f8 = *(undefined *********)(param_1 + 0xb70);
    ppuStack_f0 = *(undefined ***)(param_1 + 0xb78);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  ppuVar18 = ppuVar17;
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110bf81c8;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&UNK_10f6556ce,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    ppuVar18 = ppuStack_f0;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar2 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        ppuVar18 = ppuStack_f0;
      }
    }
  }
  if (ppuVar18 == (undefined **)0x0) {
LAB_10a3db364:
    if (param_1 != (code *)0x0) goto LAB_10a3db368;
LAB_10a3db3ac:
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    ppuVar17 = ppuVar18 + 1;
    do {
      puVar16 = *ppuVar17;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
      if (bVar11) {
        *ppuVar17 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 != (undefined *)0x0) goto LAB_10a3db364;
    (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
    if (param_1 == (code *)0x0) goto LAB_10a3db3ac;
LAB_10a3db368:
    ppppppppuStack_f8 = *(undefined *********)(param_1 + 0xb80);
    ppuStack_f0 = *(undefined ***)(param_1 + 0xb88);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  ppuVar18 = ppuVar17;
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110bb9cd0;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&UNK_10f6556dd,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    ppuVar18 = ppuStack_f0;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar2 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        ppuVar18 = ppuStack_f0;
      }
    }
  }
  if (ppuVar18 == (undefined **)0x0) {
LAB_10a3db518:
    if (param_1 != (code *)0x0) goto LAB_10a3db51c;
LAB_10a3db560:
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    ppuVar17 = ppuVar18 + 1;
    do {
      puVar16 = *ppuVar17;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
      if (bVar11) {
        *ppuVar17 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 != (undefined *)0x0) goto LAB_10a3db518;
    (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
    if (param_1 == (code *)0x0) goto LAB_10a3db560;
LAB_10a3db51c:
    ppppppppuStack_f8 = *(undefined *********)(param_1 + 0xce8);
    ppuStack_f0 = *(undefined ***)(param_1 + 0xcf0);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  ppuVar18 = ppuVar17;
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110c35270;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&UNK_10f6556eb,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    ppuVar18 = ppuStack_f0;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar2 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        ppuVar18 = ppuStack_f0;
      }
    }
  }
  if (ppuVar18 == (undefined **)0x0) {
LAB_10a3db6cc:
    if (param_1 != (code *)0x0) goto LAB_10a3db6d0;
LAB_10a3db714:
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    ppuVar17 = ppuVar18 + 1;
    do {
      puVar16 = *ppuVar17;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
      if (bVar11) {
        *ppuVar17 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 != (undefined *)0x0) goto LAB_10a3db6cc;
    (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
    if (param_1 == (code *)0x0) goto LAB_10a3db714;
LAB_10a3db6d0:
    ppppppppuStack_f8 = *(undefined *********)(param_1 + 0x9e0);
    ppuStack_f0 = *(undefined ***)(param_1 + 0x9e8);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,0x19,10,0xffffffff,0xffffffff,0xffffffff);
  ppuVar18 = ppuVar17;
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110c113a0;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&UNK_10f6556f5,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    ppuVar18 = ppuStack_f0;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar2 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        ppuVar18 = ppuStack_f0;
      }
    }
  }
  if (ppuVar18 == (undefined **)0x0) {
LAB_10a3db880:
    if (param_1 != (code *)0x0) goto LAB_10a3db884;
LAB_10a3db8c8:
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    ppuVar17 = ppuVar18 + 1;
    do {
      puVar16 = *ppuVar17;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
      if (bVar11) {
        *ppuVar17 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 != (undefined *)0x0) goto LAB_10a3db880;
    (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
    if (param_1 == (code *)0x0) goto LAB_10a3db8c8;
LAB_10a3db884:
    ppppppppuStack_f8 = *(undefined *********)(param_1 + 0x980);
    ppuStack_f0 = *(undefined ***)(param_1 + 0x988);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  ppuVar18 = ppuVar17;
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110c255b0;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&UNK_10f655702,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    ppuVar18 = ppuStack_f0;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar2 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        ppuVar18 = ppuStack_f0;
      }
    }
  }
  if (ppuVar18 == (undefined **)0x0) {
LAB_10a3dba34:
    if (param_1 != (code *)0x0) goto LAB_10a3dba38;
LAB_10a3dba7c:
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    ppuVar17 = ppuVar18 + 1;
    do {
      puVar16 = *ppuVar17;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
      if (bVar11) {
        *ppuVar17 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 != (undefined *)0x0) goto LAB_10a3dba34;
    (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
    if (param_1 == (code *)0x0) goto LAB_10a3dba7c;
LAB_10a3dba38:
    ppppppppuStack_f8 = *(undefined *********)(param_1 + 0x960);
    ppuStack_f0 = *(undefined ***)(param_1 + 0x968);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110c147b0;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&UNK_10f655714,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar18 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar18;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
      }
    }
  }
  ppuVar17 = ppuStack_f0;
  if (ppuStack_f0 != (undefined **)0x0) {
    ppuVar18 = ppuStack_f0 + 1;
    do {
      puVar16 = *ppuVar18;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
      if (bVar11) {
        *ppuVar18 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 == (undefined *)0x0) {
      (**(code **)(*ppuStack_f0 + 0x10))(ppuStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
    }
  }
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f655726;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 2;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
  uStack_88 = 0;
  uStack_80 = 0;
  if (param_1 == (code *)0x0) {
    ppppppppuStack_110 = (undefined ********)0x0;
    plStack_108 = (long *)0x0;
  }
  else {
    ppppppppuStack_110 = *(undefined *********)(param_1 + 0xa40);
    plStack_108 = *(long **)(param_1 + 0xa48);
    if (plStack_108 != (long *)0x0) {
      plVar19 = plStack_108 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar11) {
          *plVar19 = *plVar19 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  plVar19 = plStack_108;
  FUN_10a3e7c68(param_2,&ppppppppuStack_e0,ppppppppuStack_110,plStack_108);
  if (plVar19 != (long *)0x0) {
    plVar1 = plVar19 + 1;
    do {
      lVar15 = *plVar1;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = lVar15 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    }
  }
  ppuStack_d8 = (undefined **)0x0;
  pcStack_d0 = (code *)0x0;
  ppppppppuStack_e0 = (undefined ********)&UNK_10f65573b;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  iStack_c8 = 0x19;
  uStack_c4 = 2;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
  uStack_88 = 0;
  uStack_80 = 0;
  if (param_1 == (code *)0x0) {
    ppppppppuStack_110 = (undefined ********)0x0;
    plStack_108 = (long *)0x0;
  }
  else {
    ppppppppuStack_110 = *(undefined *********)(param_1 + 0xa40);
    plStack_108 = *(long **)(param_1 + 0xa48);
    if (plStack_108 != (long *)0x0) {
      plVar19 = plStack_108 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar11) {
          *plVar19 = *plVar19 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  plVar19 = plStack_108;
  FUN_10a3e7c68(param_2,&ppppppppuStack_e0,ppppppppuStack_110,plStack_108);
  if (plVar19 == (long *)0x0) {
LAB_10a3dbd48:
    if (param_1 != (code *)0x0) goto LAB_10a3dbd4c;
LAB_10a3dbd90:
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppuStack_f0 = (undefined **)0x0;
  }
  else {
    plVar1 = plVar19 + 1;
    do {
      lVar15 = *plVar1;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = lVar15 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar15 != 0) goto LAB_10a3dbd48;
    (**(code **)(*plVar19 + 0x10))(plVar19);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    if (param_1 == (code *)0x0) goto LAB_10a3dbd90;
LAB_10a3dbd4c:
    ppppppppuStack_f8 = *(undefined *********)(param_1 + 0xb90);
    ppuStack_f0 = *(undefined ***)(param_1 + 0xb98);
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_f0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar11) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  ppuVar17 = ppuStack_f0;
  ppppppppuVar21 = ppppppppuStack_f8;
  puVar13 = param_2;
  FUN_10a0051e8(param_2,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  ppuVar18 = ppuVar17;
  if (((ulong)puVar13 & 1) == 0) {
    if (ppuVar17 == (undefined **)0x0) {
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
    }
    else {
      ppuVar18 = ppuVar17 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar15 = param_2[3];
      if (param_2[2] == lVar15) goto LAB_10a3dc170;
      uVar20 = *param_2;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar11) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_e8 = &PTR_DAT_110c18ee0;
    ppppppppuStack_e0 = ppppppppuVar21;
    ppuStack_d8 = ppuVar17;
    func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10a005308(lVar15 + -8,uVar20,&UNK_10f655751,&ppppppppuStack_110);
    if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
      (**(code **)*plStack_108)();
    }
    ppuVar18 = ppuStack_f0;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar2 = ppuVar17 + 1;
      do {
        puVar16 = *ppuVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar11) {
          *ppuVar2 = puVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        ppuVar18 = ppuStack_f0;
      }
    }
  }
  if (ppuVar18 != (undefined **)0x0) {
    ppuVar17 = ppuVar18 + 1;
    do {
      puVar16 = *ppuVar17;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
      if (bVar11) {
        *ppuVar17 = puVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar16 == (undefined *)0x0) {
      (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
    }
  }
  if (param_1 != (code *)0x0) {
    lVar15 = *(long *)(param_1 + 0xb60);
    plVar19 = *(long **)(param_1 + 0xb68);
    if (plVar19 == (long *)0x0) {
      bVar9 = *(byte *)(lVar15 + 0x40) & 1;
    }
    else {
      plVar1 = plVar19 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = *plVar1 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      bVar9 = *(byte *)(lVar15 + 0x40);
      do {
        lVar15 = *plVar1;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = lVar15 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
        bVar9 = bVar9 & 1;
      }
    }
    if (bVar9 != 0) {
      ppppppppuVar21 = *(undefined *********)(param_1 + 0xb60);
      ppuVar17 = *(undefined ***)(param_1 + 0xb68);
      if (ppuVar17 != (undefined **)0x0) {
        ppuVar18 = ppuVar17 + 1;
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
          if (bVar11) {
            *ppuVar18 = *ppuVar18 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      puVar13 = param_2;
      ppppppppuStack_f8 = ppppppppuVar21;
      ppuStack_f0 = ppuVar17;
      FUN_10a0051e8(param_2,100,8,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)puVar13 & 1) == 0) {
        if (ppuVar17 == (undefined **)0x0) {
          lVar15 = param_2[3];
          if (param_2[2] == lVar15) goto LAB_10a3dc170;
          uVar20 = *param_2;
        }
        else {
          ppuVar18 = ppuVar17 + 1;
          do {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
            if (bVar11) {
              *ppuVar18 = *ppuVar18 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          lVar15 = param_2[3];
          if (param_2[2] == lVar15) {
LAB_10a3dc170:
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x10a3dc174);
            (*pcVar12)();
          }
          uVar20 = *param_2;
          do {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
            if (bVar11) {
              *ppuVar18 = *ppuVar18 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
        }
        ppppppppuStack_e0 = (undefined ********)0x0;
        if (ppppppppuVar21 != (undefined ********)0x0) {
          ppppppppuStack_e0 = ppppppppuVar21 + 3;
        }
        ppuStack_e8 = &PTR_DAT_110bf02d8;
        ppuStack_d8 = ppuVar17;
        func_0x000109899de4(&ppppppppuStack_110,uVar20,&ppppppppuStack_e0,&ppuStack_e8,0,0);
        ppuVar18 = ppuStack_d8;
        if (ppuStack_d8 != (undefined **)0x0) {
          ppuVar2 = ppuStack_d8 + 1;
          do {
            puVar16 = *ppuVar2;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
            if (bVar11) {
              *ppuVar2 = puVar16 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (puVar16 == (undefined *)0x0) {
            (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
          }
        }
        FUN_10a005308(lVar15 + -8,uVar20,&UNK_10f65575d,&ppppppppuStack_110);
        if ((3 < (int)ppppppppuStack_110) && (plStack_108 != (long *)0x0)) {
          (**(code **)*plStack_108)();
        }
        if (ppuVar17 != (undefined **)0x0) {
          ppuVar18 = ppuVar17 + 1;
          do {
            puVar16 = *ppuVar18;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
            if (bVar11) {
              *ppuVar18 = puVar16 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (puVar16 == (undefined *)0x0) {
            (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
          }
        }
      }
      ppuVar17 = ppuStack_f0;
      if (ppuStack_f0 != (undefined **)0x0) {
        ppuVar18 = ppuStack_f0 + 1;
        do {
          puVar16 = *ppuVar18;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
          if (bVar11) {
            *ppuVar18 = puVar16 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (puVar16 == (undefined *)0x0) {
          (**(code **)(*ppuStack_f0 + 0x10))(ppuStack_f0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        }
      }
    }
  }
  func_0x00010a004064();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x00010a296760(&ppppppppuStack_f8);
    __Unwind_Resume();
    __ZNSt3__15mutex4lockEv(param_2 + 0x1ef);
    *extraout_x8 = param_2[0x1f7];
    (**(code **)(param_2[0x1f8] + 0x18))(extraout_x8 + 1,param_2 + 0x1f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 0x1ef);
    return;
  }
  return;
}



/* Entry: 10a3dc3dc; end: 10a3dc44f;  */

void FUN_10a3dc3dc(undefined8 *param_1,long param_2)

{
  __ZNSt3__15mutex4lockEv(param_2 + 0xf78);
  *param_1 = *(undefined8 *)(param_2 + 0xfb8);
  (**(code **)(*(long *)(param_2 + 0xfc0) + 0x18))(param_1 + 1,param_2 + 0xfc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 0xf78);
  return;
}



/* Entry: 10a3dc450; end: 10a3dcc83;  */

void FUN_10a3dc450(undefined8 ****param_1)

{
  char *pcVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined8 ****ppppuVar9;
  undefined8 ***pppuVar10;
  undefined8 ***pppuStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined8 ***pppuStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined8 ***pppuStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 *puStack_e0;
  char cStack_d1;
  undefined8 ***pppuStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined1 uStack_b8;
  undefined8 ***pppuStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined1 uStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = (undefined **)param_1;
  FUN_10ad055a0();
  if ((int)ppuVar6 == 0) {
LAB_10a3dc4b4:
    iVar4 = (int)ppuVar6;
    FUN_10ad055a0();
    if (iVar4 != 0) {
      ppuVar6 = &PTR___tlv_bootstrap_11340dfd8;
      (*(code *)PTR___tlv_bootstrap_11340dfd8)();
      if (*ppuVar6 == (undefined *)0x0) {
        ppuVar6 = &PTR___tlv_bootstrap_11340dd98;
        (*(code *)PTR___tlv_bootstrap_11340dd98)();
        plVar7 = (long *)*ppuVar6;
        if ((plVar7 == (long *)0x0) || ((**(code **)(*plVar7 + 0x18))(), plVar7 == (long *)0x0))
        goto LAB_10a3dc4e8;
        plVar7 = plVar7 + 7;
      }
      else {
        plVar7 = (long *)(*ppuVar6 + 8);
      }
      if (((uint)*(undefined8 *)(*plVar7 + 0x10) >> 1 & 1) != 0) {
        func_0x000107c2b054(&pppuStack_120,&UNK_10f653e46);
        pppuVar10 = param_1[0x20];
        if (*(char *)((long)pppuVar10 + 0x21f) < '\0') {
          func_0x000107c3192c(&pppuStack_140,pppuVar10[0x41],pppuVar10[0x42]);
        }
        else {
          puStack_138 = pppuVar10[0x42];
          pppuStack_140 = (undefined8 ***)pppuVar10[0x41];
          uStack_130 = pppuVar10[0x43];
        }
        if (uStack_110 < 0) {
          pppuStack_a0 = (undefined8 ***)"null";
          if (puStack_118 != (undefined8 *)0x0) {
            pppuStack_a0 = pppuStack_120;
          }
        }
        else {
          pppuStack_a0 = (undefined8 ***)"null";
          if (uStack_110._7_1_ != '\0') {
            pppuStack_a0 = &pppuStack_120;
          }
        }
        if ((long)uStack_130 < 0) {
          pppuStack_d0 = (undefined8 ***)"null";
          if ((undefined8 **)puStack_138 != (undefined8 **)0x0) {
            pppuStack_d0 = pppuStack_140;
          }
        }
        else {
          pppuStack_d0 = (undefined8 ***)"null";
          if (uStack_130._7_1_ != '\0') {
            pppuStack_d0 = &pppuStack_140;
          }
        }
        FUN_10a224324(&pppuStack_a0,&pppuStack_d0);
        if (uStack_110 < 0) {
          if (puStack_118 == (undefined8 *)0x0) goto LAB_10a3dc954;
          func_0x000107c3192c(&pppuStack_a0,pppuStack_120);
LAB_10a3dca44:
          uStack_88 = 1;
        }
        else {
          if (uStack_110._7_1_ != '\0') {
            puStack_98 = puStack_118;
            pppuStack_a0 = pppuStack_120;
            lStack_90 = uStack_110;
            goto LAB_10a3dca44;
          }
LAB_10a3dc954:
          uStack_88 = 0;
          pppuStack_a0 = (undefined8 ***)((ulong)pppuStack_a0 & 0xffffffffffffff00);
        }
        if ((long)uStack_130 < 0) {
          if ((undefined8 **)puStack_138 == (undefined8 **)0x0) goto LAB_10a3dca70;
          func_0x000107c3192c(&pppuStack_d0,pppuStack_140);
LAB_10a3dcafc:
          uStack_b8 = 1;
        }
        else {
          if (uStack_130._7_1_ != '\0') {
            puStack_c8 = puStack_138;
            pppuStack_d0 = pppuStack_140;
            puStack_c0 = uStack_130;
            goto LAB_10a3dcafc;
          }
LAB_10a3dca70:
          uStack_b8 = 0;
          pppuStack_d0 = (undefined8 ***)((ulong)pppuStack_d0 & 0xffffffffffffff00);
        }
        FUN_10a234a0c(&pppuStack_a0,&pppuStack_d0);
        goto LAB_10a3dcb38;
      }
    }
LAB_10a3dc4e8:
    (*(code *)param_1[0x10e][0x20])(&pppuStack_a0,param_1[0x10e] + 0x20);
    FUN_10a1cc18c(&pppuStack_d0,&UNK_10f653e64);
    iVar4 = *(int *)((long)param_1[0x20] + 0xc);
    uVar8 = 3;
    if (iVar4 != 1) {
      uVar8 = 1;
    }
    *(undefined4 *)(param_1 + 0x4f) = uVar8;
    *(undefined1 *)(param_1 + 0x1ae) = 1;
    iVar5 = (int)param_1 + 0x200;
    FUN_10a5b4ed0();
    FUN_10ad055a0();
    if (iVar5 != 0) {
      ppuVar6 = &PTR___tlv_bootstrap_11340dfd8;
      (*(code *)PTR___tlv_bootstrap_11340dfd8)();
      if (*ppuVar6 == (undefined *)0x0) {
        ppuVar6 = &PTR___tlv_bootstrap_11340dd98;
        (*(code *)PTR___tlv_bootstrap_11340dd98)();
        plVar7 = (long *)*ppuVar6;
        if ((plVar7 == (long *)0x0) || ((**(code **)(*plVar7 + 0x18))(), plVar7 == (long *)0x0))
        goto LAB_10a3dc56c;
        plVar7 = plVar7 + 7;
      }
      else {
        plVar7 = (long *)(*ppuVar6 + 8);
      }
      if (((uint)*(undefined8 *)(*plVar7 + 0x10) >> 1 & 1) != 0) {
        func_0x000107c2b054(&pppuStack_e8,&UNK_10f653e72);
        pppuVar10 = param_1[0x20];
        if (*(char *)((long)pppuVar10 + 0x21f) < '\0') {
          func_0x000107c3192c(&pppuStack_100,pppuVar10[0x41],pppuVar10[0x42]);
        }
        else {
          puStack_f8 = pppuVar10[0x42];
          pppuStack_100 = (undefined8 ***)pppuVar10[0x41];
          uStack_f0 = pppuVar10[0x43];
        }
        if (cStack_d1 < '\0') {
          pppuStack_120 = (undefined8 ***)"null";
          if (puStack_e0 != (undefined8 *)0x0) {
            pppuStack_120 = pppuStack_e8;
          }
        }
        else {
          pppuStack_120 = (undefined8 ***)"null";
          if (cStack_d1 != '\0') {
            pppuStack_120 = &pppuStack_e8;
          }
        }
        if ((long)uStack_f0 < 0) {
          pppuStack_140 = (undefined8 ***)"null";
          if ((undefined8 **)puStack_f8 != (undefined8 **)0x0) {
            pppuStack_140 = pppuStack_100;
          }
        }
        else {
          pppuStack_140 = (undefined8 ***)"null";
          if (uStack_f0._7_1_ != '\0') {
            pppuStack_140 = &pppuStack_100;
          }
        }
        FUN_10a224324(&pppuStack_120,&pppuStack_140);
        if (cStack_d1 < '\0') {
          if (puStack_e0 == (undefined8 *)0x0) goto LAB_10a3dc9e0;
          func_0x000107c3192c(&pppuStack_120,pppuStack_e8);
LAB_10a3dca8c:
          uStack_108 = 1;
        }
        else {
          if (cStack_d1 != '\0') {
            puStack_118 = puStack_e0;
            pppuStack_120 = pppuStack_e8;
            goto LAB_10a3dca8c;
          }
LAB_10a3dc9e0:
          uStack_108 = 0;
          pppuStack_120 = (undefined8 ***)((ulong)pppuStack_120 & 0xffffffffffffff00);
        }
        if ((long)uStack_f0 < 0) {
          if ((undefined8 **)puStack_f8 == (undefined8 **)0x0) goto LAB_10a3dcab8;
          func_0x000107c3192c(&pppuStack_140,pppuStack_100);
LAB_10a3dcb24:
          uStack_128 = 1;
        }
        else {
          if (uStack_f0._7_1_ != '\0') {
            puStack_138 = puStack_f8;
            pppuStack_140 = pppuStack_100;
            uStack_130 = uStack_f0;
            goto LAB_10a3dcb24;
          }
LAB_10a3dcab8:
          uStack_128 = 0;
          pppuStack_140 = (undefined8 ***)((ulong)pppuStack_140 & 0xffffffffffffff00);
        }
        FUN_10a234a0c(&pppuStack_120,&pppuStack_140);
        goto LAB_10a3dcb38;
      }
    }
LAB_10a3dc56c:
    *(undefined1 *)((long)param_1 + 0xd71) = 1;
    uVar8 = 4;
    if (iVar4 != 1) {
      uVar8 = 2;
    }
    pcVar1 = "Background";
    if (iVar4 != 1) {
      pcVar1 = "Foreground";
    }
    FUN_10ae03140(0,pcVar1,10);
    ppuVar6 = &PTR_PTR_113302048;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar6,&PTR_PTR_113302048);
    *(undefined4 *)(param_1 + 0x4f) = uVar8;
    if (0x16a < *(int *)(param_1[0x144] + 3)) {
      lVar2 = 0x50;
      if (iVar4 != 1) {
        lVar2 = 0x70;
      }
      FUN_10a07e58c(*(undefined8 *)((long)param_1 + lVar2 + 0xd88));
    }
    if ((*(int *)(param_1 + 0x51) < 1) && (*(int *)(param_1[0x50] + 0x4f) == 4)) {
      FUN_10a031cc8();
    }
    FUN_10a1d33b4(&pppuStack_d0);
    param_1 = &pppuStack_a0;
    FUN_10a044790(&pppuStack_a0);
    (*(code *)*puStack_98)(&puStack_98);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    ppuVar6 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if ((undefined8 ***)*ppuVar6 == (undefined8 ***)0x0) {
      ppuVar6 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      ppuVar6 = (undefined **)*ppuVar6;
      if (((undefined8 ****)ppuVar6 == (undefined8 ****)0x0) ||
         ((*(code *)*(undefined8 ***)((long)*ppuVar6 + 0x18))(),
         (undefined8 ****)ppuVar6 == (undefined8 ****)0x0)) goto LAB_10a3dc4b4;
      ppppuVar9 = (undefined8 ****)(ppuVar6 + 7);
    }
    else {
      ppppuVar9 = (undefined8 ****)((long)*ppuVar6 + 8);
    }
    if (((uint)(*ppppuVar9)[2] >> 1 & 1) == 0) goto LAB_10a3dc4b4;
  }
  func_0x000107c2b054(&pppuStack_120,&UNK_10f653e39);
  pppuVar10 = param_1[0x20];
  if (*(char *)((long)pppuVar10 + 0x21f) < '\0') {
    func_0x000107c3192c(&pppuStack_140,pppuVar10[0x41],pppuVar10[0x42]);
  }
  else {
    puStack_138 = pppuVar10[0x42];
    pppuStack_140 = (undefined8 ***)pppuVar10[0x41];
    uStack_130 = pppuVar10[0x43];
  }
  if (uStack_110 < 0) {
    pppuStack_a0 = (undefined8 ***)"null";
    if (puStack_118 != (undefined8 *)0x0) {
      pppuStack_a0 = pppuStack_120;
    }
  }
  else {
    pppuStack_a0 = (undefined8 ***)"null";
    if (uStack_110._7_1_ != '\0') {
      pppuStack_a0 = &pppuStack_120;
    }
  }
  if ((long)uStack_130 < 0) {
    pppuStack_d0 = (undefined8 ***)"null";
    if ((undefined8 **)puStack_138 != (undefined8 **)0x0) {
      pppuStack_d0 = pppuStack_140;
    }
  }
  else {
    pppuStack_d0 = (undefined8 ***)"null";
    if (uStack_130._7_1_ != '\0') {
      pppuStack_d0 = &pppuStack_140;
    }
  }
  FUN_10a224324(&pppuStack_a0,&pppuStack_d0);
  if (uStack_110 < 0) {
    if (puStack_118 == (undefined8 *)0x0) goto LAB_10a3dc8c8;
    func_0x000107c3192c(&pppuStack_a0,pppuStack_120);
LAB_10a3dc9fc:
    uStack_88 = 1;
  }
  else {
    if (uStack_110._7_1_ != '\0') {
      puStack_98 = puStack_118;
      pppuStack_a0 = pppuStack_120;
      lStack_90 = uStack_110;
      goto LAB_10a3dc9fc;
    }
LAB_10a3dc8c8:
    uStack_88 = 0;
    pppuStack_a0 = (undefined8 ***)((ulong)pppuStack_a0 & 0xffffffffffffff00);
  }
  if ((long)uStack_130 < 0) {
    if ((undefined8 **)puStack_138 == (undefined8 **)0x0) goto LAB_10a3dca28;
    func_0x000107c3192c(&pppuStack_d0,pppuStack_140);
LAB_10a3dcad4:
    uStack_b8 = 1;
  }
  else {
    if (uStack_130._7_1_ != '\0') {
      puStack_c8 = puStack_138;
      pppuStack_d0 = pppuStack_140;
      puStack_c0 = uStack_130;
      goto LAB_10a3dcad4;
    }
LAB_10a3dca28:
    uStack_b8 = 0;
    pppuStack_d0 = (undefined8 ***)((ulong)pppuStack_d0 & 0xffffffffffffff00);
  }
  FUN_10a234a0c(&pppuStack_a0,&pppuStack_d0);
LAB_10a3dcb38:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a3dcb3c);
  (*pcVar3)();
}



/* Entry: 10a3dcc84; end: 10a3dcd3b;  */

void FUN_10a3dcc84(long param_1)

{
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_108 [48];
  undefined1 auStack_d8 [8];
  undefined8 *apuStack_d0 [7];
  long lStack_98;
  undefined1 *puStack_90;
  undefined8 **ppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined8 *apuStack_60 [7];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*(long *)(param_1 + 0x870) + 0x100))(auStack_68,*(long *)(param_1 + 0x870) + 0x100);
  FUN_10a5b6864(param_1 + 0x200);
  FUN_10a044790(auStack_68);
  ppuVar1 = apuStack_60;
  (*(code *)*apuStack_60[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a044790(auStack_68);
  (*(code *)*apuStack_60[0])(apuStack_60);
  ppuVar2 = ppuVar1;
  __Unwind_Resume();
  pcStack_78 = FUN_10a3dcd3c;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = auStack_68;
  ppuStack_88 = ppuVar1;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_10a1cc18c(auStack_108,&UNK_10f653e9e);
  (*(code *)ppuVar2[0x10e][0x20])(auStack_d8,ppuVar2[0x10e] + 0x20);
  FUN_10a5b6450(ppuVar2 + 0x40);
  *(undefined1 *)((long)ppuVar2 + 0xd71) = 0;
  FUN_10a044790(auStack_d8);
  (*(code *)*apuStack_d0[0])(apuStack_d0);
  puVar3 = auStack_108;
  FUN_10a1d33b4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a044790(auStack_d8);
  (*(code *)*apuStack_d0[0])(apuStack_d0);
  FUN_10a1d33b4(auStack_108);
  __Unwind_Resume();
  puVar3[0xe2a] = 1;
  puVar3 = puVar3 + 0xd48;
  FUN_10a5aeb74(puVar3,&PTR_DAT_110bd31c8);
  for (puVar4 = *(undefined1 **)(puVar3 + 8); puVar4 != puVar3;
      puVar4 = *(undefined1 **)(puVar4 + 8)) {
    (**(code **)(**(long **)(puVar4 + 0x28) + 0x10))();
  }
  return;
}



/* Entry: 10a3dcd3c; end: 10a3dce1f;  */

void FUN_10a3dcd3c(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_98 [48];
  undefined1 auStack_68 [8];
  undefined8 *apuStack_60 [7];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a1cc18c(auStack_98,&UNK_10f653e9e);
  (**(code **)(*(long *)(param_1 + 0x870) + 0x100))(auStack_68,*(long *)(param_1 + 0x870) + 0x100);
  FUN_10a5b6450(param_1 + 0x200);
  *(undefined1 *)(param_1 + 0xd71) = 0;
  FUN_10a044790(auStack_68);
  (*(code *)*apuStack_60[0])(apuStack_60);
  puVar1 = auStack_98;
  FUN_10a1d33b4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a044790(auStack_68);
  (*(code *)*apuStack_60[0])(apuStack_60);
  FUN_10a1d33b4(auStack_98);
  __Unwind_Resume();
  puVar1[0xe2a] = 1;
  puVar1 = puVar1 + 0xd48;
  FUN_10a5aeb74(puVar1,&PTR_DAT_110bd31c8);
  for (puVar2 = *(undefined1 **)(puVar1 + 8); puVar2 != puVar1;
      puVar2 = *(undefined1 **)(puVar2 + 8)) {
    (**(code **)(**(long **)(puVar2 + 0x28) + 0x10))();
  }
  return;
}



/* Entry: 10a3dce20; end: 10a3dce7b;  */

void FUN_10a3dce20(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + 0xe2a) = 1;
  param_1 = param_1 + 0xd48;
  FUN_10a5aeb74(param_1,&PTR_DAT_110bd31c8);
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_1; lVar1 = *(long *)(lVar1 + 8)) {
    (**(code **)(**(long **)(lVar1 + 0x28) + 0x10))();
  }
  return;
}



/* Entry: 10a3dce7c; end: 10a3dce83;  */

void FUN_10a3dce7c(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + 0xe1a) = 1;
  param_1 = param_1 + 0xd38;
  FUN_10a5aeb74(param_1,&PTR_DAT_110bd31c8);
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_1; lVar1 = *(long *)(lVar1 + 8)) {
    (**(code **)(**(long **)(lVar1 + 0x28) + 0x10))();
  }
  return;
}



/* Entry: 10a3dce84; end: 10a3dcedb;  */

void FUN_10a3dce84(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + 0xe2a) = 0;
  param_1 = param_1 + 0xd48;
  FUN_10a5aeb74(param_1,&PTR_DAT_110bd31c8);
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_1; lVar1 = *(long *)(lVar1 + 8)) {
    (**(code **)(**(long **)(lVar1 + 0x28) + 0x18))();
  }
  return;
}



/* Entry: 10a3dcedc; end: 10a3dcee3;  */

void FUN_10a3dcedc(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + 0xe1a) = 0;
  param_1 = param_1 + 0xd38;
  FUN_10a5aeb74(param_1,&PTR_DAT_110bd31c8);
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_1; lVar1 = *(long *)(lVar1 + 8)) {
    (**(code **)(**(long **)(lVar1 + 0x28) + 0x18))();
  }
  return;
}



/* Entry: 10a3dcee4; end: 10a3dcfbf;  */

void FUN_10a3dcee4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_68 [8];
  undefined8 *apuStack_60 [7];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*(long *)(param_1 + 0x870) + 0x100))(auStack_68,*(long *)(param_1 + 0x870) + 0x100);
  FUN_10a3dcfc0(param_1);
  *(int *)(*(long *)(param_1 + 0x850) + 0x2c) = *(int *)(*(long *)(param_1 + 0x850) + 0x2c) + 1;
  FUN_10a5afce4(param_1 + 0x200);
  FUN_10a044790(auStack_68);
  (*(code *)*apuStack_60[0])(apuStack_60);
  lVar1 = *(long *)(param_1 + 0x870);
  FUN_10a46373c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a044790(auStack_68);
  (*(code *)*apuStack_60[0])(apuStack_60);
  __Unwind_Resume();
  if (*(char *)(*(long *)(lVar1 + 0xa80) + 0x18) == '\x01') {
    func_0x00010aafc5c0();
  }
  lVar1 = lVar1 + 0xd48;
  FUN_10a5aeb74(lVar1,&PTR_DAT_110bd9f10);
  for (lVar2 = *(long *)(lVar1 + 8); lVar2 != lVar1; lVar2 = *(long *)(lVar2 + 8)) {
    func_0x00010aafc5c0(*(undefined8 *)(*(long *)(lVar2 + 0x28) + 0x2e0));
  }
  return;
}



/* Entry: 10a3dcfc0; end: 10a3dd027;  */

void FUN_10a3dcfc0(long param_1)

{
  long lVar1;
  
  if (*(char *)(*(long *)(param_1 + 0xa80) + 0x18) == '\x01') {
    func_0x00010aafc5c0();
  }
  param_1 = param_1 + 0xd48;
  FUN_10a5aeb74(param_1,&PTR_DAT_110bd9f10);
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_1; lVar1 = *(long *)(lVar1 + 8)) {
    func_0x00010aafc5c0(*(undefined8 *)(*(long *)(lVar1 + 0x28) + 0x2e0));
  }
  return;
}



/* Entry: 10a3dd028; end: 10a3dd13f;  */

void FUN_10a3dd028(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lStack_50;
  long lStack_48;
  
  lVar7 = *param_3;
  lVar5 = param_3[1];
  plVar4 = (long *)0x20;
  __Znwm();
  plVar4[2] = lVar7;
  plVar4[3] = lVar5;
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
    lVar7 = *param_3;
  }
  lVar5 = *(long *)(param_2 + 0x4c8);
  *plVar4 = lVar5;
  plVar4[1] = param_2 + 0x4c8;
  *(long **)(lVar5 + 8) = plVar4;
  *(long **)(param_2 + 0x4c8) = plVar4;
  *(long *)(param_2 + 0x4d8) = *(long *)(param_2 + 0x4d8) + 1;
  if (0x91 < *(int *)(*(long *)(param_2 + 0xa20) + 0x18)) {
    lStack_48 = param_3[1];
    if (lStack_48 != 0) {
      plVar4 = (long *)(lStack_48 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_50 = lVar7;
    FUN_10a3dd140(param_2 + 0x4e0,&lStack_50);
    if (lStack_48 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    lVar7 = *param_3;
  }
  if ((*(ushort *)(lVar7 + 0x180) >> 7 & 1) != 0) {
    FUN_10a3c6798(lVar7);
  }
  uVar6 = *(undefined8 *)(param_2 + 0x4c8);
  param_1[2] = param_2;
  param_1[3] = uVar6;
  *param_1 = FUN_10a3f9b1c;
  param_1[1] = &PTR_FUN_110bd29d0;
  return;
}



/* Entry: 10a3dd140; end: 10a3dd21f;  */

undefined ***
FUN_10a3dd140(undefined ***param_1,undefined8 *param_2,undefined8 param_3,undefined ***param_4)

{
  ulong uVar1;
  undefined ***pppuVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined ****ppppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *extraout_x8;
  ulong uVar13;
  code *pcVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined ***pppuStack_190;
  undefined ***pppuStack_188;
  undefined ***pppuStack_180;
  undefined ***pppuStack_170;
  undefined ***pppuStack_168;
  undefined ***pppuStack_160;
  undefined ***pppuStack_158;
  code *pcStack_150;
  undefined **ppuStack_148;
  undefined *puStack_140;
  undefined ***pppuStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  long lStack_c8;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined ***pppuStack_38;
  
  ppuVar15 = param_1[1];
  if (ppuVar15 < param_1[2]) {
    puVar18 = (undefined *)*param_2;
    ppuVar17 = ppuVar15 + 2;
    ppuVar15[1] = (undefined *)param_2[1];
    *ppuVar15 = puVar18;
    *param_2 = 0;
    param_2[1] = 0;
    pppuVar8 = param_1;
LAB_10a3dd204:
    param_1[1] = ppuVar17;
    return pppuVar8;
  }
  lVar16 = (long)ppuVar15 - (long)*param_1;
  uVar1 = (lVar16 >> 4) + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar12 = (long)param_1[2] - (long)*param_1;
    uVar13 = (long)uVar12 >> 3;
    if (uVar13 <= uVar1) {
      uVar13 = uVar1;
    }
    if (0x7fffffffffffffef < uVar12) {
      uVar13 = 0xfffffffffffffff;
    }
    puVar11 = param_2;
    pppuStack_38 = param_1;
    FUN_10a3ef8bc();
    puVar3 = (undefined8 *)(uVar13 + lVar16);
    uVar19 = *param_2;
    ppuVar17 = (undefined **)(puVar3 + 2);
    puVar3[1] = param_2[1];
    *puVar3 = uVar19;
    *param_2 = 0;
    param_2[1] = 0;
    ppuVar15 = (undefined **)((long)puVar3 - ((long)param_1[1] - (long)*param_1));
    _memcpy(ppuVar15);
    ppuStack_58 = *param_1;
    *param_1 = ppuVar15;
    param_1[1] = ppuVar17;
    ppuStack_40 = param_1[2];
    param_1[2] = (undefined **)(uVar13 + (long)puVar11 * 0x10);
    pppuVar8 = &ppuStack_58;
    ppuStack_50 = ppuStack_58;
    ppuStack_48 = ppuStack_58;
    func_0x00010a3ef8f0(pppuVar8);
    goto LAB_10a3dd204;
  }
  func_0x00010a3ef8a8();
  if ((ulong)param_1[0x98] >> 5 < 0xc35) {
    if ((ulong)param_1[0x9b] >> 6 < 0xc35) {
      return param_1;
    }
  }
  else {
    FUN_10a00946c(&UNK_10f653ead);
  }
  puVar18 = &UNK_10f653f25;
  FUN_10a00946c();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a3dd220();
  puVar6 = puVar18;
  FUN_10a3f9c24(puVar18,param_2,param_3);
  pppuStack_108 = (undefined ***)FUN_10a3f9c7c;
  ppuStack_100 = &PTR_DAT_110bd2a18;
  puStack_f8 = puVar6;
  FUN_10a10c584(&pppuStack_190,puVar6,0x10a3df904);
  pppuStack_158 = pppuStack_188;
  pppuStack_160 = pppuStack_190;
  pcStack_150 = FUN_10a3f9c7c;
  ppuStack_148 = &PTR_DAT_110bd2a18;
  pppuStack_108 = (undefined ***)&UNK_1053a6a3c;
  ppuStack_100 = &PTR_DAT_110ae9180;
  puStack_140 = puVar6;
  FUN_10a044790(&pppuStack_108);
  (*(code *)*ppuStack_100)(&ppuStack_100);
  FUN_10a3dd718(puVar18,&pppuStack_160);
  pppuVar8 = pppuStack_160;
  ppuVar15 = (undefined **)(long)*(char *)((long)param_4 + 0x17);
  if ((long)ppuVar15 < 0) {
    ppuVar15 = param_4[1];
    if (ppuVar15 == (undefined **)0x0) goto LAB_10a3dd36c;
    param_4 = (undefined ***)*param_4;
  }
  else if (*(char *)((long)param_4 + 0x17) == '\0') {
LAB_10a3dd36c:
    __ZNSt3__19to_stringEj(&pppuStack_108,*(undefined4 *)(puVar18 + 0xd08));
    ppppuVar7 = &pppuStack_108;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (ppppuVar7,0,&UNK_10f654016,0xc);
    pppuStack_188 = ppppuVar7[1];
    pppuStack_190 = *ppppuVar7;
    pppuStack_180 = ppppuVar7[2];
    ppppuVar7[1] = (undefined ***)0x0;
    ppppuVar7[2] = (undefined ***)0x0;
    *ppppuVar7 = (undefined ***)0x0;
    if ((long)puStack_f8 < 0) {
      __ZdlPv(pppuStack_108);
    }
    *(int *)(puVar18 + 0xd08) = *(int *)(puVar18 + 0xd08) + 1;
    pppuStack_168 = pppuStack_188;
    pppuStack_170 = pppuStack_190;
    if (-1 < (long)pppuStack_180) {
      pppuStack_168 = (undefined ***)((ulong)pppuStack_180 >> 0x38);
      pppuStack_170 = (undefined ***)&pppuStack_190;
    }
    ppppuVar7 = &pppuStack_170;
    FUN_10a0c34a4(pppuVar8);
    if ((long)pppuStack_180 < 0) {
      __ZdlPv(pppuStack_190);
    }
    goto LAB_10a3dd404;
  }
  ppppuVar7 = &pppuStack_108;
  pppuStack_108 = param_4;
  ppuStack_100 = ppuVar15;
  FUN_10a0c34a4(pppuStack_160);
LAB_10a3dd404:
  pppuVar10 = pppuStack_160;
  FUN_10a044790(&pcStack_150);
  pppuVar8 = &ppuStack_148;
  (*(code *)*ppuStack_148)();
  pppuVar9 = pppuStack_158;
  if (pppuStack_158 != (undefined ***)0x0) {
    pppuVar2 = pppuStack_158 + 1;
    do {
      ppuVar15 = *pppuVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
      if (bVar5) {
        *pppuVar2 = (undefined **)((long)ppuVar15 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppuVar15 == (undefined **)0x0) {
      (*(code *)(*pppuStack_158)[2])(pppuStack_158);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar8 = pppuVar9;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pppuVar10;
  }
  ___stack_chk_fail();
  if ((long)pppuStack_180 < 0) {
    __ZdlPv(pppuStack_190);
  }
  FUN_10a3dd84c(&pppuStack_160);
  __Unwind_Resume();
  pppuVar10 = pppuVar8;
  FUN_10a3cfa0c();
  if (pppuVar10 == (undefined ***)0x0) {
    pppuVar10 = pppuVar8 + 0x96;
    FUN_10a3dd6b0(pppuVar10,ppppuVar7);
    ppuVar15 = pppuVar8[0x96];
    *(ushort *)(*ppppuVar7 + 0x23) = *(ushort *)(*ppppuVar7 + 0x23) | 0x200;
    extraout_x8[2] = pppuVar8;
    extraout_x8[3] = ppuVar15;
    ppuVar15 = &PTR_FUN_110bd2a00;
    pcVar14 = FUN_10a3f9ba0;
  }
  else {
    pppuVar10 = pppuVar10 + 0x21;
    FUN_10a3dd588(pppuVar10,ppppuVar7);
    ppuVar15 = &PTR_DAT_110bd29e8;
    pcVar14 = (code *)0x10a3f9b88;
  }
  *extraout_x8 = pcVar14;
  extraout_x8[1] = ppuVar15;
  return pppuVar10;
}



/* Entry: 10a3dd220; end: 10a3dd267;  */

undefined ***
FUN_10a3dd220(undefined ***param_1,undefined8 param_2,undefined8 param_3,undefined ***param_4)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined ****ppppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  undefined8 *extraout_x8;
  code *pcVar11;
  undefined ***pppuStack_130;
  undefined ***pppuStack_128;
  undefined ***pppuStack_120;
  undefined ***pppuStack_110;
  undefined ***pppuStack_108;
  undefined ***pppuStack_100;
  undefined ***pppuStack_f8;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  undefined ***pppuStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  long lStack_68;
  
  if ((ulong)param_1[0x98] >> 5 < 0xc35) {
    if ((ulong)param_1[0x9b] >> 6 < 0xc35) {
      return param_1;
    }
  }
  else {
    FUN_10a00946c(&UNK_10f653ead);
  }
  puVar4 = &UNK_10f653f25;
  FUN_10a00946c();
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a3dd220();
  puVar5 = puVar4;
  FUN_10a3f9c24(puVar4,param_2,param_3);
  pppuStack_a8 = (undefined ***)FUN_10a3f9c7c;
  ppuStack_a0 = &PTR_DAT_110bd2a18;
  puStack_98 = puVar5;
  FUN_10a10c584(&pppuStack_130,puVar5,0x10a3df904);
  pppuStack_f8 = pppuStack_128;
  pppuStack_100 = pppuStack_130;
  pcStack_f0 = FUN_10a3f9c7c;
  ppuStack_e8 = &PTR_DAT_110bd2a18;
  pppuStack_a8 = (undefined ***)&UNK_1053a6a3c;
  ppuStack_a0 = &PTR_DAT_110ae9180;
  puStack_e0 = puVar5;
  FUN_10a044790(&pppuStack_a8);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  FUN_10a3dd718(puVar4,&pppuStack_100);
  pppuVar7 = pppuStack_100;
  ppuVar10 = (undefined **)(long)*(char *)((long)param_4 + 0x17);
  if ((long)ppuVar10 < 0) {
    ppuVar10 = param_4[1];
    if (ppuVar10 == (undefined **)0x0) goto LAB_10a3dd36c;
    param_4 = (undefined ***)*param_4;
  }
  else if (*(char *)((long)param_4 + 0x17) == '\0') {
LAB_10a3dd36c:
    __ZNSt3__19to_stringEj(&pppuStack_a8,*(undefined4 *)(puVar4 + 0xd08));
    ppppuVar6 = &pppuStack_a8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (ppppuVar6,0,&UNK_10f654016,0xc);
    pppuStack_128 = ppppuVar6[1];
    pppuStack_130 = *ppppuVar6;
    pppuStack_120 = ppppuVar6[2];
    ppppuVar6[1] = (undefined ***)0x0;
    ppppuVar6[2] = (undefined ***)0x0;
    *ppppuVar6 = (undefined ***)0x0;
    if ((long)puStack_98 < 0) {
      __ZdlPv(pppuStack_a8);
    }
    *(int *)(puVar4 + 0xd08) = *(int *)(puVar4 + 0xd08) + 1;
    pppuStack_108 = pppuStack_128;
    pppuStack_110 = pppuStack_130;
    if (-1 < (long)pppuStack_120) {
      pppuStack_108 = (undefined ***)((ulong)pppuStack_120 >> 0x38);
      pppuStack_110 = (undefined ***)&pppuStack_130;
    }
    ppppuVar6 = &pppuStack_110;
    FUN_10a0c34a4(pppuVar7);
    if ((long)pppuStack_120 < 0) {
      __ZdlPv(pppuStack_130);
    }
    goto LAB_10a3dd404;
  }
  ppppuVar6 = &pppuStack_a8;
  pppuStack_a8 = param_4;
  ppuStack_a0 = ppuVar10;
  FUN_10a0c34a4(pppuStack_100);
LAB_10a3dd404:
  pppuVar9 = pppuStack_100;
  FUN_10a044790(&pcStack_f0);
  pppuVar7 = &ppuStack_e8;
  (*(code *)*ppuStack_e8)();
  pppuVar8 = pppuStack_f8;
  if (pppuStack_f8 != (undefined ***)0x0) {
    pppuVar1 = pppuStack_f8 + 1;
    do {
      ppuVar10 = *pppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar3) {
        *pppuVar1 = (undefined **)((long)ppuVar10 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar10 == (undefined **)0x0) {
      (*(code *)(*pppuStack_f8)[2])(pppuStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar7 = pppuVar8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppuVar9;
  }
  ___stack_chk_fail();
  if ((long)pppuStack_120 < 0) {
    __ZdlPv(pppuStack_130);
  }
  FUN_10a3dd84c(&pppuStack_100);
  __Unwind_Resume();
  pppuVar9 = pppuVar7;
  FUN_10a3cfa0c();
  if (pppuVar9 == (undefined ***)0x0) {
    pppuVar9 = pppuVar7 + 0x96;
    FUN_10a3dd6b0(pppuVar9,ppppuVar6);
    ppuVar10 = pppuVar7[0x96];
    *(ushort *)(*ppppuVar6 + 0x23) = *(ushort *)(*ppppuVar6 + 0x23) | 0x200;
    extraout_x8[2] = pppuVar7;
    extraout_x8[3] = ppuVar10;
    ppuVar10 = &PTR_FUN_110bd2a00;
    pcVar11 = FUN_10a3f9ba0;
  }
  else {
    pppuVar9 = pppuVar9 + 0x21;
    FUN_10a3dd588(pppuVar9,ppppuVar6);
    ppuVar10 = &PTR_DAT_110bd29e8;
    pcVar11 = (code *)0x10a3f9b88;
  }
  *extraout_x8 = pcVar11;
  extraout_x8[1] = ppuVar10;
  return pppuVar9;
}



/* Entry: 10a3dd268; end: 10a3dd4fb;  */

undefined *** FUN_10a3dd268(long param_1,undefined8 param_2,undefined8 param_3,undefined ***param_4)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined ****ppppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  undefined8 *extraout_x8;
  code *pcVar10;
  undefined ***pppuStack_120;
  undefined ***pppuStack_118;
  undefined ***pppuStack_110;
  undefined ***pppuStack_100;
  undefined ***pppuStack_f8;
  undefined ***pppuStack_f0;
  undefined ***pppuStack_e8;
  code *pcStack_e0;
  undefined **ppuStack_d8;
  long lStack_d0;
  undefined ***pppuStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a3dd220();
  lVar4 = param_1;
  FUN_10a3f9c24(param_1,param_2,param_3);
  pppuStack_98 = (undefined ***)FUN_10a3f9c7c;
  ppuStack_90 = &PTR_DAT_110bd2a18;
  lStack_88 = lVar4;
  FUN_10a10c584(&pppuStack_120,lVar4,0x10a3df904);
  pppuStack_e8 = pppuStack_118;
  pppuStack_f0 = pppuStack_120;
  pcStack_e0 = FUN_10a3f9c7c;
  ppuStack_d8 = &PTR_DAT_110bd2a18;
  pppuStack_98 = (undefined ***)&UNK_1053a6a3c;
  ppuStack_90 = &PTR_DAT_110ae9180;
  lStack_d0 = lVar4;
  FUN_10a044790(&pppuStack_98);
  (*(code *)*ppuStack_90)(&ppuStack_90);
  FUN_10a3dd718(param_1,&pppuStack_f0);
  pppuVar6 = pppuStack_f0;
  ppuVar9 = (undefined **)(long)*(char *)((long)param_4 + 0x17);
  if ((long)ppuVar9 < 0) {
    ppuVar9 = param_4[1];
    if (ppuVar9 == (undefined **)0x0) goto LAB_10a3dd36c;
    param_4 = (undefined ***)*param_4;
  }
  else if (*(char *)((long)param_4 + 0x17) == '\0') {
LAB_10a3dd36c:
    __ZNSt3__19to_stringEj(&pppuStack_98,*(undefined4 *)(param_1 + 0xd08));
    ppppuVar5 = &pppuStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (ppppuVar5,0,&UNK_10f654016,0xc);
    pppuStack_118 = ppppuVar5[1];
    pppuStack_120 = *ppppuVar5;
    pppuStack_110 = ppppuVar5[2];
    ppppuVar5[1] = (undefined ***)0x0;
    ppppuVar5[2] = (undefined ***)0x0;
    *ppppuVar5 = (undefined ***)0x0;
    if (lStack_88 < 0) {
      __ZdlPv(pppuStack_98);
    }
    *(int *)(param_1 + 0xd08) = *(int *)(param_1 + 0xd08) + 1;
    pppuStack_f8 = pppuStack_118;
    pppuStack_100 = pppuStack_120;
    if (-1 < (long)pppuStack_110) {
      pppuStack_f8 = (undefined ***)((ulong)pppuStack_110 >> 0x38);
      pppuStack_100 = (undefined ***)&pppuStack_120;
    }
    ppppuVar5 = &pppuStack_100;
    FUN_10a0c34a4(pppuVar6);
    if ((long)pppuStack_110 < 0) {
      __ZdlPv(pppuStack_120);
    }
    goto LAB_10a3dd404;
  }
  ppppuVar5 = &pppuStack_98;
  pppuStack_98 = param_4;
  ppuStack_90 = ppuVar9;
  FUN_10a0c34a4(pppuStack_f0);
LAB_10a3dd404:
  pppuVar8 = pppuStack_f0;
  FUN_10a044790(&pcStack_e0);
  pppuVar6 = &ppuStack_d8;
  (*(code *)*ppuStack_d8)();
  pppuVar7 = pppuStack_e8;
  if (pppuStack_e8 != (undefined ***)0x0) {
    pppuVar1 = pppuStack_e8 + 1;
    do {
      ppuVar9 = *pppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar3) {
        *pppuVar1 = (undefined **)((long)ppuVar9 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar9 == (undefined **)0x0) {
      (*(code *)(*pppuStack_e8)[2])(pppuStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar6 = pppuVar7;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pppuVar8;
  }
  ___stack_chk_fail();
  if ((long)pppuStack_110 < 0) {
    __ZdlPv(pppuStack_120);
  }
  FUN_10a3dd84c(&pppuStack_f0);
  __Unwind_Resume();
  pppuVar8 = pppuVar6;
  FUN_10a3cfa0c();
  if (pppuVar8 == (undefined ***)0x0) {
    pppuVar8 = pppuVar6 + 0x96;
    FUN_10a3dd6b0(pppuVar8,ppppuVar5);
    ppuVar9 = pppuVar6[0x96];
    *(ushort *)(*ppppuVar5 + 0x23) = *(ushort *)(*ppppuVar5 + 0x23) | 0x200;
    extraout_x8[2] = pppuVar6;
    extraout_x8[3] = ppuVar9;
    ppuVar9 = &PTR_FUN_110bd2a00;
    pcVar10 = FUN_10a3f9ba0;
  }
  else {
    pppuVar8 = pppuVar8 + 0x21;
    FUN_10a3dd588(pppuVar8,ppppuVar5);
    ppuVar9 = &PTR_DAT_110bd29e8;
    pcVar10 = (code *)0x10a3f9b88;
  }
  *extraout_x8 = pcVar10;
  extraout_x8[1] = ppuVar9;
  return pppuVar8;
}



/* Entry: 10a3dd4fc; end: 10a3dd587;  */

void FUN_10a3dd4fc(undefined8 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  code *pcVar4;
  
  lVar1 = param_2;
  FUN_10a3cfa0c();
  if (lVar1 == 0) {
    FUN_10a3dd6b0(param_2 + 0x4b0,param_3);
    uVar2 = *(undefined8 *)(param_2 + 0x4b0);
    *(ushort *)(*param_3 + 0x118) = *(ushort *)(*param_3 + 0x118) | 0x200;
    param_1[2] = param_2;
    param_1[3] = uVar2;
    ppuVar3 = &PTR_FUN_110bd2a00;
    pcVar4 = FUN_10a3f9ba0;
  }
  else {
    FUN_10a3dd588(lVar1 + 0x108,param_3);
    ppuVar3 = &PTR_DAT_110bd29e8;
    pcVar4 = (code *)0x10a3f9b88;
  }
  *param_1 = pcVar4;
  param_1[1] = ppuVar3;
  return;
}



/* Entry: 10a3dd588; end: 10a3dd6af;  */

void FUN_10a3dd588(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  plVar6 = (long *)param_1[1];
  if (plVar6 < (long *)param_1[2]) {
    lVar7 = param_2[1];
    lVar11 = *param_2;
    plVar6[1] = param_2[1];
    *plVar6 = lVar11;
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar6 = plVar6 + 2;
LAB_10a3dd68c:
    param_1[1] = (long)plVar6;
    return;
  }
  lVar7 = *param_1;
  lVar11 = (long)plVar6 - lVar7;
  lVar12 = lVar11 >> 4;
  uVar2 = lVar12 + 1;
  if (uVar2 >> 0x3c == 0) {
    uVar8 = param_1[2] - lVar7;
    uVar10 = (long)uVar8 >> 3;
    if (uVar10 <= uVar2) {
      uVar10 = uVar2;
    }
    if (0x7fffffffffffffef < uVar8) {
      uVar10 = 0xfffffffffffffff;
    }
    if (uVar10 >> 0x3c == 0) {
      lVar5 = uVar10 << 4;
      __Znwm();
      plVar1 = (long *)(lVar5 + lVar11);
      lVar9 = param_2[1];
      lVar13 = *param_2;
      plVar1[1] = param_2[1];
      *plVar1 = lVar13;
      if (lVar9 != 0) {
        plVar6 = (long *)(lVar9 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = *plVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lVar7 = *param_1;
        lVar11 = param_1[1] - lVar7;
        lVar12 = lVar11 >> 4;
      }
      plVar6 = plVar1 + 2;
      _memcpy(plVar1 + lVar12 * -2,lVar7,lVar11);
      *param_1 = (long)(plVar1 + lVar12 * -2);
      param_1[1] = (long)plVar6;
      param_1[2] = lVar5 + uVar10 * 0x10;
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
      }
      goto LAB_10a3dd68c;
    }
  }
  else {
    FUN_10a3ef94c();
  }
  func_0x000109ffded8();
  plVar6 = (long *)0x20;
  __Znwm();
  lVar7 = param_2[1];
  lVar11 = *param_2;
  plVar6[3] = param_2[1];
  plVar6[2] = lVar11;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar7 = *param_1;
  *plVar6 = lVar7;
  plVar6[1] = (long)param_1;
  *(long **)(lVar7 + 8) = plVar6;
  *param_1 = (long)plVar6;
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10a3dd6b0; end: 10a3dd717;  */

void FUN_10a3dd6b0(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  plVar4 = (long *)0x20;
  __Znwm();
  lVar5 = param_2[1];
  lVar6 = *param_2;
  plVar4[3] = param_2[1];
  plVar4[2] = lVar6;
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
  lVar5 = *param_1;
  *plVar4 = lVar5;
  plVar4[1] = (long)param_1;
  *(long **)(lVar5 + 8) = plVar4;
  *param_1 = (long)plVar4;
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10a3dd718; end: 10a3dd84b;  */

undefined *** FUN_10a3dd718(undefined8 param_1,undefined8 *param_2)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_b8;
  undefined8 *apuStack_b0 [7];
  undefined *puStack_78;
  undefined **appuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a3dd4fc(&puStack_78);
  uVar7 = *param_2;
  puStack_b8 = puStack_78;
  (*(code *)appuStack_70[0][2])(apuStack_b0,appuStack_70);
  puStack_78 = &UNK_1053a6a3c;
  (*(code *)*appuStack_70[0])(appuStack_70);
  appuStack_70[0] = &PTR_DAT_110ae9180;
  FUN_10a3dd884(uVar7,param_1,&puStack_b8);
  FUN_10a044790(&puStack_b8);
  (*(code *)*apuStack_b0[0])(apuStack_b0);
  FUN_10a044790(&puStack_78);
  pppuVar4 = appuStack_70;
  (*(code *)*appuStack_70[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  FUN_10a044790(&puStack_b8);
  (*(code *)*apuStack_b0[0])(apuStack_b0);
  FUN_10a044790(&puStack_78);
  (*(code *)*appuStack_70[0])(appuStack_70);
  __Unwind_Resume();
  FUN_10a044790(pppuVar4 + 2);
  (*(code *)*pppuVar4[3])();
  ppuVar6 = pppuVar4[1];
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar1 = ppuVar6 + 1;
    do {
      puVar5 = *ppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = puVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar5 == (undefined *)0x0) {
      (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
    }
  }
  return pppuVar4;
}



/* Entry: 10a3dd84c; end: 10a3dd883;  */

long FUN_10a3dd84c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a044790(param_1 + 0x10);
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
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



/* Entry: 10a3dd884; end: 10a3dd96b;  */

void FUN_10a3dd884(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  long *plStack_30;
  
  if ((*(ushort *)(param_1 + 0x118) >> 5 & 1) == 0) {
    *(ushort *)(param_1 + 0x118) = *(ushort *)(param_1 + 0x118) | 0x20;
    *(undefined8 *)(param_1 + 0x120) = param_2;
    func_0x00010a108320(param_1 + 0x1a8,param_3);
    plVar2 = *(long **)(*(long *)(param_1 + 0x120) + 0xd20);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,param_1);
    }
    return;
  }
  plVar2 = (long *)&UNK_10f654462;
  FUN_10a00946c();
  if ((int)param_2 == 1) {
    ___cxa_begin_catch();
    if ((bRam000000011330a9e8 & 1) != 0) {
      (**(code **)(*plVar2 + 0x10))();
      plStack_30 = plVar2;
      func_0x00010ae06f08(0,1,&UNK_10f654482,&UNK_10f6544ae,0x118,&UNK_10f6544f8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd88c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR____cxa_end_catch_110346bc0)();
    return;
  }
  __Unwind_Resume();
  func_0x000104bd46a0();
  pcStack_38 = FUN_10a3dd96c;
  puStack_50 = &UNK_10f653fcf;
  uStack_48 = 0x26;
  if (plVar2[0x10d] != 0) {
    return;
  }
  puStack_40 = &stack0xfffffffffffffff0;
  FUN_10a0edfc4(&puStack_50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3dd9a8);
  (*pcVar1)();
}



/* Entry: 10a3dd96c; end: 10a3dd9ab;  */

void FUN_10a3dd96c(long param_1)

{
  code *pcVar1;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_20 = &UNK_10f653fcf;
  uStack_18 = 0x26;
  if (*(long *)(param_1 + 0x868) != 0) {
    return;
  }
  FUN_10a0edfc4(&puStack_20);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3dd9a8);
  (*pcVar1)();
}



/* Entry: 10a3dd9ac; end: 10a3dda07;  */

void FUN_10a3dd9ac(undefined8 *param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_2 + 0x928);
  uVar2 = param_2;
  FUN_10a1c5b90();
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    lVar3 = param_2 + 0x350;
    __ZNSt3__15mutex4lockEv(lVar3);
  }
  else {
    lVar3 = 0;
  }
  *param_1 = uVar4;
  param_1[1] = lVar3;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 10a3dda08; end: 10a3dda63;  */

void FUN_10a3dda08(undefined8 *param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_2 + 0x920);
  uVar2 = param_2;
  FUN_10a1c5b90();
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    lVar3 = param_2 + 0x410;
    __ZNSt3__15mutex4lockEv(lVar3);
  }
  else {
    lVar3 = 0;
  }
  *param_1 = uVar4;
  param_1[1] = lVar3;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 10a3dda64; end: 10a3de76b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a3dda64(ulong *******param_1,ulong *******param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  ulong *******pppppppuVar4;
  undefined8 *puVar5;
  ulong *******pppppppuVar6;
  code *pcVar7;
  long lVar8;
  ulong ******ppppppuVar9;
  ulong *******pppppppuVar10;
  int *piVar11;
  int *piVar12;
  long lVar13;
  ulong *******pppppppuVar14;
  ulong *******pppppppuVar15;
  int iVar16;
  int *piVar17;
  ulong uVar18;
  ulong *******unaff_x21;
  ulong *******pppppppuVar19;
  ulong *******unaff_x22;
  int *piVar20;
  ulong *******pppppppuVar21;
  ulong uVar22;
  ulong *******pppppppuVar23;
  ulong *******pppppppuVar24;
  ulong *******pppppppuVar25;
  ulong *******pppppppuStack_398;
  ulong *******pppppppuStack_390;
  ulong *******pppppppuStack_388;
  ulong *******pppppppuStack_380;
  ulong *******pppppppuStack_378;
  int *piStack_370;
  ulong *******pppppppuStack_368;
  undefined1 *puStack_360;
  code *pcStack_358;
  ulong *******pppppppuStack_350;
  ulong *******pppppppuStack_348;
  ulong *******pppppppuStack_340;
  ulong *******pppppppuStack_338;
  ulong *******pppppppuStack_330;
  ulong *******pppppppuStack_328;
  ulong *******pppppppuStack_320;
  ulong *******pppppppuStack_318;
  ulong *******pppppppuStack_310;
  ulong *******pppppppuStack_308;
  ulong *******pppppppuStack_300;
  ulong *******pppppppuStack_2f8;
  ulong *******pppppppuStack_2e8;
  ulong *******pppppppuStack_2e0;
  ulong *******pppppppuStack_2d8;
  int aiStack_2d0 [12];
  ulong *******pppppppuStack_2a0;
  ulong *******pppppppuStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  ulong uStack_270;
  long lStack_268;
  ulong *******apppppppuStack_260 [2];
  long lStack_250;
  ulong ******appppppuStack_248 [4];
  ulong *******apppppppuStack_228 [2];
  long lStack_218;
  ulong ******appppppuStack_210 [4];
  ulong *******pppppppuStack_1f0;
  ulong *******pppppppuStack_1e8;
  ulong *******pppppppuStack_1e0;
  ulong ******appppppuStack_1d8 [4];
  ulong *******pppppppuStack_1b8;
  ulong *******pppppppuStack_1b0;
  ulong *******pppppppuStack_1a8;
  ulong ******appppppuStack_1a0 [4];
  ulong *******pppppppuStack_180;
  ulong *******pppppppuStack_178;
  ulong *******pppppppuStack_170;
  ulong *******pppppppuStack_168;
  ulong *******pppppppuStack_160;
  ulong ******appppppuStack_158 [3];
  ulong *******pppppppuStack_140;
  ulong *******pppppppuStack_138;
  ulong *******pppppppuStack_130;
  ulong *******pppppppuStack_128;
  ulong ******appppppuStack_120 [4];
  ulong *******pppppppuStack_100;
  ulong *******pppppppuStack_f8;
  ulong *******pppppppuStack_f0;
  ulong *******pppppppuStack_e8;
  ulong *******pppppppuStack_e0;
  ulong ******appppppuStack_d8 [3];
  ulong *******pppppppuStack_c0;
  ulong *******pppppppuStack_b8;
  ulong *******pppppppuStack_b0;
  ulong *******pppppppuStack_a8;
  ulong ******appppppuStack_a0 [3];
  char cStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a1cc18c(aiStack_2d0,&UNK_10f653ff6);
  pppppppuStack_2e8 = (ulong *******)0x0;
  pppppppuStack_2e0 = (ulong *******)0x0;
  pppppppuStack_2d8 = (ulong *******)0x0;
  pppppppuVar23 = (ulong *******)param_1[0xac];
  pppppppuVar24 = (ulong *******)*pppppppuVar23;
  pppppppuVar25 = (ulong *******)*pppppppuVar24;
  if (pppppppuVar25 == pppppppuVar24) {
    do {
      pppppppuVar21 = pppppppuVar23 + 1;
      pppppppuVar14 = (ulong *******)*pppppppuVar21;
      if (pppppppuVar14 == (ulong *******)0x0) break;
      pppppppuVar25 = (ulong *******)*pppppppuVar14;
      pppppppuVar23 = pppppppuVar21;
      pppppppuVar24 = pppppppuVar14;
    } while (pppppppuVar25 == pppppppuVar14);
  }
  pppppppuVar21 = (ulong *******)param_1[0xae];
  if (pppppppuVar25 != pppppppuVar21) {
    pppppppuStack_350 = (ulong *******)0x0;
    pppppppuVar14 = (ulong *******)&pppppppuStack_160;
    pppppppuStack_308 = (ulong *******)&pppppppuStack_128;
    pppppppuStack_310 = (ulong *******)&pppppppuStack_e0;
    pppppppuStack_318 = (ulong *******)&pppppppuStack_a8;
    pppppppuStack_320 = appppppuStack_210;
    pppppppuStack_328 = appppppuStack_248;
    pppppppuStack_2f8 = (ulong *******)0x4;
    pppppppuStack_300 = (ulong *******)0x0;
    pppppppuStack_340 = pppppppuVar21;
    pppppppuStack_330 = pppppppuVar14;
    do {
      if ((*(ushort *)(pppppppuVar25 + 0x19) >> 3 & 1) == 0) {
        bVar3 = *(byte *)((long)pppppppuVar25 + 0xcb) | *(byte *)((long)pppppppuVar25 + 0xca);
        if ((bVar3 >> 4 & 1) == 0) {
          if ((bVar3 >> 3 & 1) == 0) goto LAB_10a3dde68;
        }
        else {
          *(byte *)((long)pppppppuVar25 + 0xca) = *(byte *)((long)pppppppuVar25 + 0xca) & 0xef;
          *(byte *)((long)pppppppuVar25 + 0xcb) = *(byte *)((long)pppppppuVar25 + 0xcb) & 0xef;
        }
        unaff_x21 = (ulong *******)pppppppuVar25[0x1b];
        if (unaff_x21 != (ulong *******)0x0) {
          *(int *)unaff_x21 = *(int *)unaff_x21 + 1;
        }
        pppppppuVar10 = pppppppuVar25 + -10;
        param_2 = pppppppuVar10;
        pppppppuStack_1b8 = unaff_x21;
        FUN_10a3e1eb0(&pppppppuStack_1f0);
        unaff_x22 = pppppppuStack_1f0;
        if (unaff_x21 == pppppppuStack_1f0) {
          pppppppuStack_100 = (ulong *******)((ulong)pppppppuStack_100 & 0xffffffffffffff00);
          cStack_88 = '\0';
        }
        else {
          FUN_10a3bfc38(apppppppuStack_260,unaff_x21,pppppppuStack_1f0);
          if (unaff_x22 != (ulong *******)0x0) {
            *(int *)unaff_x22 = *(int *)unaff_x22 + 1;
          }
          pppppppuStack_180 = (ulong *******)pppppppuVar25[0x1b];
          pppppppuVar25[0x1b] = (ulong ******)unaff_x22;
          FUN_10a3f2154(&pppppppuStack_180);
          pppppppuStack_1b8 = (ulong *******)0x0;
          pppppppuStack_168 = pppppppuStack_2f8;
          pppppppuStack_170 = pppppppuStack_300;
          pppppppuStack_180 = unaff_x21;
          pppppppuStack_178 = pppppppuVar14;
          FUN_10a3e98e4(&pppppppuStack_178,apppppppuStack_260);
          pppppppuStack_140 = pppppppuStack_308;
          pppppppuStack_130 = pppppppuStack_2f8;
          pppppppuStack_138 = pppppppuStack_300;
          FUN_10a3e98e4(&pppppppuStack_140,apppppppuStack_228);
          pppppppuStack_100 = pppppppuStack_180;
          unaff_x21 = (ulong *******)&pppppppuStack_100;
          pppppppuStack_180 = (ulong *******)0x0;
          pppppppuStack_f8 = pppppppuStack_310;
          pppppppuStack_e8 = pppppppuStack_2f8;
          pppppppuStack_f0 = pppppppuStack_300;
          FUN_10a3e98e4(&pppppppuStack_f8,&pppppppuStack_178);
          pppppppuStack_c0 = pppppppuStack_318;
          pppppppuStack_b0 = pppppppuStack_2f8;
          pppppppuStack_b8 = pppppppuStack_300;
          param_2 = (ulong *******)&pppppppuStack_140;
          FUN_10a3e98e4(&pppppppuStack_c0);
          cStack_88 = '\x01';
          if ((pppppppuStack_130 != (ulong *******)0x0) && (pppppppuStack_308 != pppppppuStack_140))
          {
            __ZdlPv();
          }
          if ((pppppppuStack_168 != (ulong *******)0x0) && (pppppppuVar14 != pppppppuStack_178)) {
            __ZdlPv();
          }
          FUN_10a3f2154(&pppppppuStack_180);
          if ((lStack_218 != 0) && (pppppppuStack_320 != apppppppuStack_228[0])) {
            __ZdlPv();
          }
          if ((lStack_250 != 0) && (pppppppuStack_328 != apppppppuStack_260[0])) {
            __ZdlPv();
          }
        }
        FUN_10a3f2154(&pppppppuStack_1f0);
        FUN_10a3f2154(&pppppppuStack_1b8);
        if (cStack_88 == '\x01') {
          if (pppppppuStack_350 < pppppppuStack_2d8) {
            FUN_10a3ef960(pppppppuStack_350,pppppppuVar10,&pppppppuStack_100);
            pppppppuVar19 = pppppppuStack_350;
            pppppppuVar15 = pppppppuStack_2e8;
          }
          else {
            lVar13 = (long)pppppppuStack_350 - (long)pppppppuStack_2e8;
            uVar18 = (lVar13 >> 7) + 1;
            if (uVar18 >> 0x39 != 0) {
              FUN_10a3ef9dc();
LAB_10a3de534:
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10a3de538);
              (*pcVar7)();
            }
            uVar22 = (long)pppppppuStack_2d8 - (long)pppppppuStack_2e8 >> 6;
            if (uVar22 <= uVar18) {
              uVar22 = uVar18;
            }
            if (0x7fffffffffffff7f < (ulong)((long)pppppppuStack_2d8 - (long)pppppppuStack_2e8)) {
              uVar22 = 0x1ffffffffffffff;
            }
            if (uVar22 == 0) {
              lVar8 = 0;
            }
            else {
              if (uVar22 >> 0x39 != 0) {
                func_0x000109ffded8();
                goto LAB_10a3de534;
              }
              lVar8 = uVar22 << 7;
              __Znwm();
            }
            unaff_x21 = (ulong *******)(lVar8 + lVar13);
            FUN_10a3ef960(unaff_x21,pppppppuVar10,&pppppppuStack_100);
            pppppppuVar4 = pppppppuStack_2e0;
            pppppppuVar19 = pppppppuStack_2e8;
            pppppppuVar15 =
                 (ulong *******)
                 ((long)unaff_x21 + ((long)pppppppuStack_2e8 - (long)pppppppuStack_2e0));
            pppppppuVar14 = pppppppuStack_2e8;
            pppppppuVar6 = pppppppuVar15;
            if (pppppppuStack_2e0 != pppppppuStack_2e8) {
              do {
                pppppppuStack_338 = pppppppuVar6;
                ppppppuVar9 = *pppppppuVar14;
                pppppppuVar15[1] = pppppppuVar14[1];
                *pppppppuVar15 = ppppppuVar9;
                pppppppuVar14[1] = (ulong ******)0x0;
                pppppppuVar15[2] = (ulong ******)(pppppppuVar15 + 5);
                pppppppuVar15[4] = (ulong ******)pppppppuStack_2f8;
                pppppppuVar15[3] = (ulong ******)pppppppuStack_300;
                FUN_10a3e98e4(pppppppuVar15 + 2,pppppppuVar14 + 2);
                unaff_x22 = pppppppuVar15 + 9;
                *unaff_x22 = (ulong ******)(pppppppuVar15 + 0xc);
                pppppppuVar15[0xb] = (ulong ******)pppppppuStack_2f8;
                pppppppuVar15[10] = (ulong ******)pppppppuStack_300;
                pppppppuVar10 = pppppppuVar14 + 9;
                FUN_10a3e98e4(unaff_x22);
                pppppppuVar14 = pppppppuVar14 + 0x10;
                pppppppuVar15 = pppppppuVar15 + 0x10;
                pppppppuVar6 = pppppppuStack_338;
              } while (pppppppuVar14 != pppppppuVar4);
              do {
                func_0x00010a3ef9f0(pppppppuVar19);
                pppppppuVar19 = pppppppuVar19 + 0x10;
                pppppppuVar15 = pppppppuStack_338;
                pppppppuVar21 = pppppppuStack_340;
              } while (pppppppuVar19 != pppppppuVar4);
            }
            pppppppuStack_2d8 = (ulong *******)(lVar8 + uVar22 * 0x80);
            pppppppuVar14 = pppppppuStack_330;
            pppppppuVar19 = unaff_x21;
            if (pppppppuStack_2e8 != (ulong *******)0x0) {
              pppppppuVar14 = pppppppuStack_2e8;
              pppppppuStack_2e8 = pppppppuVar15;
              __ZdlPv(pppppppuVar14);
              pppppppuVar14 = pppppppuStack_330;
              pppppppuVar15 = pppppppuStack_2e8;
            }
          }
          pppppppuStack_2e8 = pppppppuVar15;
          pppppppuStack_350 = pppppppuVar19 + 0x10;
          param_2 = pppppppuVar10;
          pppppppuStack_2e0 = pppppppuStack_350;
        }
        func_0x00010a3efa48(&pppppppuStack_100);
      }
LAB_10a3dde68:
      pppppppuVar25 = (ulong *******)*pppppppuVar25;
      if (pppppppuVar25 == pppppppuVar24) {
        do {
          pppppppuVar10 = pppppppuVar23 + 1;
          pppppppuVar15 = (ulong *******)*pppppppuVar10;
          if (pppppppuVar15 == (ulong *******)0x0) break;
          pppppppuVar25 = (ulong *******)*pppppppuVar15;
          pppppppuVar23 = pppppppuVar10;
          pppppppuVar24 = pppppppuVar15;
        } while (pppppppuVar25 == pppppppuVar15);
      }
    } while (pppppppuVar25 != pppppppuVar21);
    param_1 = pppppppuStack_2e8;
    if (pppppppuStack_2e8 != pppppppuStack_350) {
      pppppppuStack_328 = appppppuStack_d8;
      pppppppuStack_330 = appppppuStack_a0;
      pppppppuStack_318 = appppppuStack_1a0;
      pppppppuStack_320 = appppppuStack_1d8;
      pppppppuStack_308 = appppppuStack_158;
      pppppppuStack_310 = appppppuStack_120;
      pppppppuStack_338 = appppppuStack_210;
      pppppppuStack_340 = appppppuStack_248;
      do {
        uStack_278 = 0;
        uStack_280 = 0;
        lStack_268 = 0;
        uStack_270 = 0;
        puStack_288 = (undefined8 *)0x0;
        uStack_290 = 0;
        pppppppuStack_100 = (ulong *******)*param_1;
        pppppppuStack_f8 = (ulong *******)param_1[1];
        if (pppppppuStack_f8 != (ulong *******)0x0) {
          *(int *)pppppppuStack_f8 = *(int *)pppppppuStack_f8 + 1;
        }
        pppppppuStack_f0 = pppppppuStack_328;
        pppppppuStack_e0 = pppppppuStack_2f8;
        pppppppuStack_e8 = pppppppuStack_300;
        FUN_10a3f001c(&pppppppuStack_f0,param_1[2],param_1[2] + (long)param_1[3]);
        pppppppuStack_b8 = pppppppuStack_330;
        pppppppuStack_a8 = pppppppuStack_2f8;
        pppppppuStack_b0 = pppppppuStack_300;
        FUN_10a3f001c(&pppppppuStack_b8,param_1[9],param_1[9] + (long)param_1[10]);
        param_2 = (ulong *******)&pppppppuStack_100;
        FUN_10a3e20c8(&uStack_290);
        if ((pppppppuStack_a8 != (ulong *******)0x0) && (pppppppuStack_330 != pppppppuStack_b8)) {
          __ZdlPv();
        }
        pppppppuStack_348 = param_1;
        if ((pppppppuStack_e0 != (ulong *******)0x0) && (pppppppuStack_328 != pppppppuStack_f0)) {
          __ZdlPv();
        }
        pppppppuVar24 = (ulong *******)&pppppppuStack_f8;
        while (FUN_10a3f2154(pppppppuVar24), lVar13 = lStack_268, uVar18 = uStack_270,
              puVar5 = puStack_288, lStack_268 != 0) {
          unaff_x22 = (ulong *******)(uStack_270 >> 5);
          uVar22 = uStack_270 & 0x1f;
          pppppppuVar23 = (ulong *******)(puStack_288[(long)unaff_x22] + uVar22 * 0x80);
          pppppppuStack_f8 = (ulong *******)pppppppuVar23[1];
          pppppppuStack_100 = (ulong *******)*pppppppuVar23;
          pppppppuVar23[1] = (ulong ******)0x0;
          pppppppuStack_f0 = pppppppuStack_328;
          pppppppuStack_e0 = pppppppuStack_2f8;
          pppppppuStack_e8 = pppppppuStack_300;
          FUN_10a3e98e4(&pppppppuStack_f0,pppppppuVar23 + 2);
          pppppppuStack_b8 = pppppppuStack_330;
          pppppppuStack_a8 = pppppppuStack_2f8;
          pppppppuStack_b0 = pppppppuStack_300;
          param_2 = pppppppuVar23 + 9;
          FUN_10a3e98e4(&pppppppuStack_b8);
          FUN_10a3fdb9c(puVar5[(long)unaff_x22] + uVar22 * 0x80);
          lStack_268 = lVar13 + -1;
          uStack_270 = uVar18 + 1;
          if (0x3f < uStack_270) {
            __ZdlPv(*puVar5);
            uStack_270 = uVar18 - 0x1f;
            puStack_288 = puVar5 + 1;
          }
          pppppppuVar14 = pppppppuStack_100;
          pppppppuVar24 = pppppppuStack_100 + 0x2a;
          for (pppppppuVar25 = (ulong *******)pppppppuStack_100[0x2b];
              pppppppuVar25 != pppppppuVar24; pppppppuVar25 = (ulong *******)pppppppuVar25[1]) {
            ppppppuVar9 = pppppppuVar25[2];
            if ((ppppppuVar9 != (ulong ******)0x0) &&
               ((*(ushort *)(ppppppuVar9 + 0x30) >> 4 & 1) == 0)) {
              param_2 = (ulong *******)&pppppppuStack_f0;
              (*(code *)(*ppppppuVar9)[0x16])();
            }
          }
          pppppppuVar21 = pppppppuVar14 + 0x32;
          for (pppppppuVar24 = (ulong *******)pppppppuVar14[0x33]; pppppppuVar24 != pppppppuVar21;
              pppppppuVar24 = (ulong *******)pppppppuVar24[1]) {
            pppppppuVar25 = (ulong *******)pppppppuVar24[2];
            if ((pppppppuVar25 != (ulong *******)0x0) &&
               ((*(ushort *)(pppppppuVar25 + 0x23) >> 3 & 1) == 0)) {
              pppppppuVar10 = (ulong *******)pppppppuVar25[0x25];
              if (pppppppuVar10 == pppppppuStack_f8) {
                ppppppuVar9 = pppppppuVar14[0x25];
                if (ppppppuVar9 != (ulong ******)0x0) {
                  *(int *)ppppppuVar9 = *(int *)ppppppuVar9 + 1;
                }
                pppppppuVar25[0x25] = ppppppuVar9;
                pppppppuStack_180 = pppppppuVar10;
                FUN_10a3f2154(&pppppppuStack_180);
                pppppppuStack_178 = pppppppuStack_f8;
                if (pppppppuStack_f8 != (ulong *******)0x0) {
                  *(int *)pppppppuStack_f8 = *(int *)pppppppuStack_f8 + 1;
                }
                pppppppuStack_170 = pppppppuStack_308;
                pppppppuStack_160 = pppppppuStack_2f8;
                pppppppuStack_168 = pppppppuStack_300;
                pppppppuStack_180 = pppppppuVar25;
                FUN_10a3f001c(&pppppppuStack_170,pppppppuStack_f0,
                              pppppppuStack_f0 + (long)pppppppuStack_e8);
                pppppppuStack_138 = pppppppuStack_310;
                pppppppuStack_128 = pppppppuStack_2f8;
                pppppppuStack_130 = pppppppuStack_300;
                FUN_10a3f001c(&pppppppuStack_138,pppppppuStack_b8,
                              pppppppuStack_b8 + (long)pppppppuStack_b0);
                param_2 = (ulong *******)&pppppppuStack_180;
                FUN_10a3e20c8(&uStack_290);
                if ((pppppppuStack_128 != (ulong *******)0x0) &&
                   (pppppppuStack_310 != pppppppuStack_138)) {
                  __ZdlPv();
                }
                if ((pppppppuStack_160 != (ulong *******)0x0) &&
                   (pppppppuStack_308 != pppppppuStack_170)) {
                  __ZdlPv();
                }
                FUN_10a3f2154(&pppppppuStack_178);
              }
              else {
                FUN_10a3bfba4();
                pppppppuStack_1b8 = pppppppuStack_318;
                pppppppuStack_1a8 = pppppppuStack_2f8;
                pppppppuStack_1b0 = pppppppuStack_300;
                FUN_10a3f001c(&pppppppuStack_1b8,*pppppppuVar10,
                              *pppppppuVar10 + (long)pppppppuVar10[1]);
                if (pppppppuStack_e8 == (ulong *******)0x0) {
                  unaff_x22 = (ulong *******)0x0;
                }
                else {
                  unaff_x22 = (ulong *******)0x0;
                  pppppppuVar15 = pppppppuStack_f0 + (long)pppppppuStack_e8;
                  pppppppuVar10 = pppppppuStack_f0;
                  do {
                    if ((*pppppppuVar10 != (ulong ******)0x0) &&
                       (pppppppuStack_1b0 != (ulong *******)0x0)) {
                      lVar13 = (long)pppppppuStack_1b0 * 8 + -8;
                      pppppppuVar19 = pppppppuStack_1b8;
                      do {
                        if (*pppppppuVar19 == *pppppppuVar10) {
                          if (lVar13 != 0) {
                            _memmove(pppppppuVar19,pppppppuVar19 + 1);
                          }
                          pppppppuStack_1b0 = (ulong *******)((long)pppppppuStack_1b0 + -1);
                          unaff_x22 = (ulong *******)0x1;
                          break;
                        }
                        lVar13 = lVar13 + -8;
                        pppppppuVar19 = pppppppuVar19 + 1;
                      } while (lVar13 != -8);
                    }
                    pppppppuVar10 = pppppppuVar10 + 1;
                  } while (pppppppuVar10 != pppppppuVar15);
                }
                if (pppppppuStack_b0 != (ulong *******)0x0) {
                  pppppppuVar15 = pppppppuStack_b8 + (long)pppppppuStack_b0;
                  pppppppuVar10 = pppppppuStack_b8;
                  do {
                    pppppppuVar19 = (ulong *******)*pppppppuVar10;
                    if (pppppppuVar19 != (ulong *******)0x0) {
                      if (pppppppuStack_1b0 != (ulong *******)0x0) {
                        lVar13 = (long)pppppppuStack_1b0 << 3;
                        pppppppuVar23 = pppppppuStack_1b8;
                        do {
                          ppppppuVar9 = *pppppppuVar23;
                          if ((ppppppuVar9 != (ulong ******)0x0) &&
                             ((*(code *)(*ppppppuVar9)[0x17])(ppppppuVar9,pppppppuVar19),
                             ((ulong)ppppppuVar9 & 1) != 0)) goto LAB_10a3de298;
                          pppppppuVar23 = pppppppuVar23 + 1;
                          lVar13 = lVar13 + -8;
                        } while (lVar13 != 0);
                      }
                      apppppppuStack_260[0] = pppppppuVar19;
                      FUN_10a3f1ef4(&pppppppuStack_180,&pppppppuStack_1b8,apppppppuStack_260);
                      unaff_x22 = (ulong *******)0x1;
                    }
LAB_10a3de298:
                    pppppppuVar10 = pppppppuVar10 + 1;
                  } while (pppppppuVar10 != pppppppuVar15);
                }
                if ((int)unaff_x22 != 0) {
                  pppppppuVar10 = (ulong *******)pppppppuVar25[0x25];
                  if (pppppppuVar10 != (ulong *******)0x0) {
                    *(int *)pppppppuVar10 = *(int *)pppppppuVar10 + 1;
                  }
                  ppppppuVar9 = pppppppuVar25[0x24];
                  pppppppuStack_1f0 = pppppppuStack_320;
                  pppppppuStack_1e0 = pppppppuStack_2f8;
                  pppppppuStack_1e8 = pppppppuStack_300;
                  pppppppuStack_298 = pppppppuVar10;
                  FUN_10a3e98e4(&pppppppuStack_1f0,&pppppppuStack_1b8);
                  FUN_10a3bfe68(&pppppppuStack_2a0,ppppppuVar9 + 0xcc,&pppppppuStack_1f0);
                  if ((pppppppuStack_1e0 != (ulong *******)0x0) &&
                     (pppppppuStack_320 != pppppppuStack_1f0)) {
                    __ZdlPv();
                  }
                  unaff_x22 = pppppppuStack_2a0;
                  FUN_10a3bfc38(apppppppuStack_260,pppppppuVar10,pppppppuStack_2a0);
                  if (unaff_x22 != (ulong *******)0x0) {
                    *(int *)unaff_x22 = *(int *)unaff_x22 + 1;
                  }
                  pppppppuStack_180 = (ulong *******)pppppppuVar25[0x25];
                  pppppppuVar25[0x25] = (ulong ******)unaff_x22;
                  FUN_10a3f2154(&pppppppuStack_180);
                  pppppppuStack_298 = (ulong *******)0x0;
                  pppppppuStack_170 = pppppppuStack_308;
                  pppppppuStack_160 = pppppppuStack_2f8;
                  pppppppuStack_168 = pppppppuStack_300;
                  pppppppuStack_180 = pppppppuVar25;
                  pppppppuStack_178 = pppppppuVar10;
                  FUN_10a3e98e4(&pppppppuStack_170,apppppppuStack_260);
                  pppppppuStack_138 = pppppppuStack_310;
                  pppppppuStack_128 = pppppppuStack_2f8;
                  pppppppuStack_130 = pppppppuStack_300;
                  FUN_10a3e98e4(&pppppppuStack_138,apppppppuStack_228);
                  FUN_10a3e20c8(&uStack_290,&pppppppuStack_180);
                  if ((pppppppuStack_128 != (ulong *******)0x0) &&
                     (pppppppuStack_310 != pppppppuStack_138)) {
                    __ZdlPv();
                  }
                  if ((pppppppuStack_160 != (ulong *******)0x0) &&
                     (pppppppuStack_308 != pppppppuStack_170)) {
                    __ZdlPv();
                  }
                  FUN_10a3f2154(&pppppppuStack_178);
                  if ((lStack_218 != 0) && (pppppppuStack_338 != apppppppuStack_228[0])) {
                    __ZdlPv();
                  }
                  if ((lStack_250 != 0) && (pppppppuStack_340 != apppppppuStack_260[0])) {
                    __ZdlPv();
                  }
                  FUN_10a3f2154(&pppppppuStack_2a0);
                  FUN_10a3f2154(&pppppppuStack_298);
                }
                pppppppuStack_180 = (ulong *******)pppppppuVar25[0x25];
                if (pppppppuStack_180 != (ulong *******)0x0) {
                  *(int *)pppppppuStack_180 = *(int *)pppppppuStack_180 + 1;
                }
                FUN_10a3e1eb0(apppppppuStack_260);
                FUN_10a3f2154(apppppppuStack_260);
                FUN_10a3f2154(&pppppppuStack_180);
                param_2 = pppppppuVar25;
                if ((pppppppuStack_1a8 != (ulong *******)0x0) &&
                   (pppppppuStack_318 != pppppppuStack_1b8)) {
                  __ZdlPv();
                  param_2 = pppppppuVar25;
                }
              }
            }
          }
          if ((pppppppuStack_a8 != (ulong *******)0x0) && (pppppppuStack_330 != pppppppuStack_b8)) {
            __ZdlPv();
          }
          if ((pppppppuStack_e0 != (ulong *******)0x0) && (pppppppuStack_328 != pppppppuStack_f0)) {
            __ZdlPv();
          }
          pppppppuVar24 = (ulong *******)((ulong)&pppppppuStack_100 | 8);
        }
        FUN_10a3e24d8(&uStack_290);
        param_1 = pppppppuStack_348 + 0x10;
        unaff_x21 = (ulong *******)0x0;
      } while (param_1 != pppppppuStack_350);
    }
  }
  FUN_10a3efab4(&pppppppuStack_2e8);
  piVar12 = aiStack_2d0;
  FUN_10a1d33b4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  piVar11 = piVar12;
  __Unwind_Resume();
  pcStack_358 = FUN_10a3de76c;
  pppppppuStack_390 = pppppppuVar23;
  pppppppuStack_388 = pppppppuVar21;
  pppppppuStack_380 = unaff_x22;
  pppppppuStack_378 = unaff_x21;
  piStack_370 = piVar12;
  pppppppuStack_368 = param_1;
  puStack_360 = &stack0xfffffffffffffff0;
  if (0 < *piVar11) {
    pppppppuStack_398 = param_2;
    FUN_10a3f9ca4(piVar11 + 2,&pppppppuStack_398);
    return;
  }
  iVar1 = *(int *)((long)param_2 + 0x184);
  uVar2 = *(uint *)((long)param_2 + 0x18c);
  piVar12 = piVar11 + 10;
  piVar17 = *(int **)piVar12;
joined_r0x00010a3de7bc:
  piVar20 = piVar12;
  if (piVar17 == (int *)0x0) {
LAB_10a3de830:
    piVar17 = (int *)0x38;
    __Znwm();
    *(ulong *)(piVar17 + 8) = CONCAT44(uVar2,iVar1);
    *(int **)(piVar17 + 10) = piVar17 + 10;
    *(int **)(piVar17 + 0xc) = piVar17 + 10;
    piVar17[0] = 0;
    piVar17[1] = 0;
    piVar17[2] = 0;
    piVar17[3] = 0;
    *(int **)(piVar17 + 4) = piVar12;
    *(int **)piVar20 = piVar17;
    piVar12 = piVar17;
    if (**(long **)(piVar11 + 8) != 0) {
      *(long *)(piVar11 + 8) = **(long **)(piVar11 + 8);
      piVar12 = *(int **)piVar20;
    }
    func_0x000107c2b058(*(undefined8 *)(piVar11 + 10),piVar12);
    *(long *)(piVar11 + 0xc) = *(long *)(piVar11 + 0xc) + 1;
    piVar12 = piVar17;
LAB_10a3de888:
    ppppppuVar9 = *(ulong *******)(piVar12 + 0xc);
    pppppppuVar23 = param_2 + 0xe;
    *pppppppuVar23 = (ulong ******)(piVar12 + 10);
    param_2[0xf] = ppppppuVar9;
    *(ulong ********)(piVar12 + 0xc) = pppppppuVar23;
    *ppppppuVar9 = (ulong *****)pppppppuVar23;
    return;
  }
  do {
    piVar12 = piVar17;
    uVar18 = *(ulong *)(piVar12 + 8);
    iVar16 = (int)uVar18;
    if (iVar1 == iVar16) {
      iVar16 = (int)(uVar18 >> 0x20);
      if (uVar18 >> 0x20 != (ulong)uVar2 && (int)uVar2 < iVar16) break;
      if (uVar18 >> 0x20 == (ulong)uVar2 || (int)uVar2 <= iVar16) goto LAB_10a3de888;
    }
    else {
      if (iVar1 < iVar16) break;
      if (iVar1 <= iVar16) goto LAB_10a3de888;
    }
    piVar17 = *(int **)(piVar12 + 2);
    if (*(int **)(piVar12 + 2) == (int *)0x0) {
      piVar20 = piVar12 + 2;
      goto LAB_10a3de830;
    }
  } while( true );
  piVar17 = *(int **)piVar12;
  goto joined_r0x00010a3de7bc;
}



/* Entry: 10a3de76c; end: 10a3de8b3;  */

void FUN_10a3de76c(int *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int *piVar9;
  long lStack_48;
  
  if (0 < *param_1) {
    lStack_48 = param_2;
    FUN_10a3f9ca4(param_1 + 2,&lStack_48);
    return;
  }
  iVar1 = *(int *)(param_2 + 0x184);
  uVar2 = *(uint *)(param_2 + 0x18c);
  piVar3 = param_1 + 10;
  piVar6 = *(int **)piVar3;
joined_r0x00010a3de7bc:
  piVar9 = piVar3;
  if (piVar6 == (int *)0x0) {
LAB_10a3de830:
    piVar6 = (int *)0x38;
    __Znwm();
    *(ulong *)(piVar6 + 8) = CONCAT44(uVar2,iVar1);
    *(int **)(piVar6 + 10) = piVar6 + 10;
    *(int **)(piVar6 + 0xc) = piVar6 + 10;
    piVar6[0] = 0;
    piVar6[1] = 0;
    piVar6[2] = 0;
    piVar6[3] = 0;
    *(int **)(piVar6 + 4) = piVar3;
    *(int **)piVar9 = piVar6;
    piVar3 = piVar6;
    if (**(long **)(param_1 + 8) != 0) {
      *(long *)(param_1 + 8) = **(long **)(param_1 + 8);
      piVar3 = *(int **)piVar9;
    }
    func_0x000107c2b058(*(undefined8 *)(param_1 + 10),piVar3);
    *(long *)(param_1 + 0xc) = *(long *)(param_1 + 0xc) + 1;
    piVar3 = piVar6;
LAB_10a3de888:
    puVar4 = *(undefined8 **)(piVar3 + 0xc);
    puVar8 = (undefined8 *)(param_2 + 0x70);
    *puVar8 = piVar3 + 10;
    *(undefined8 **)(param_2 + 0x78) = puVar4;
    *(undefined8 **)(piVar3 + 0xc) = puVar8;
    *puVar4 = puVar8;
    return;
  }
  do {
    piVar3 = piVar6;
    uVar7 = *(ulong *)(piVar3 + 8);
    iVar5 = (int)uVar7;
    if (iVar1 == iVar5) {
      iVar5 = (int)(uVar7 >> 0x20);
      if (uVar7 >> 0x20 != (ulong)uVar2 && (int)uVar2 < iVar5) break;
      if (uVar7 >> 0x20 == (ulong)uVar2 || (int)uVar2 <= iVar5) goto LAB_10a3de888;
    }
    else {
      if (iVar1 < iVar5) break;
      if (iVar1 <= iVar5) goto LAB_10a3de888;
    }
    piVar6 = *(int **)(piVar3 + 2);
    if (*(int **)(piVar3 + 2) == (int *)0x0) {
      piVar9 = piVar3 + 2;
      goto LAB_10a3de830;
    }
  } while( true );
  piVar6 = *(int **)piVar3;
  goto joined_r0x00010a3de7bc;
}



/* Entry: 10a3de8b4; end: 10a3de9a3;  */

void FUN_10a3de8b4(int *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_18;
  
  if (0 < *param_1) {
    lStack_18 = param_2;
    FUN_10a3f9ca4(param_1 + 2,&lStack_18);
    return;
  }
  lVar1 = *(long *)(param_2 + 0x70);
  if (lVar1 != 0) {
    plVar2 = *(long **)(param_2 + 0x78);
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    *(long *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
  }
  return;
}



/* Entry: 10a3de9a4; end: 10a3de9f3;  */

void FUN_10a3de9a4(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xcc0);
  if ((iVar1 == 0) || (*(int *)(*(long *)(param_1 + 0xa20) + 0x18) < 0x10e)) {
    FUN_10a79bf00(*(undefined8 *)(param_1 + 3000),0xb,3);
    iVar1 = *(int *)(param_1 + 0xcc0);
  }
  *(int *)(param_1 + 0xcc0) = iVar1 + 1;
  return;
}



/* Entry: 10a3de9f4; end: 10a3dea27;  */

ulong FUN_10a3de9f4(ulong param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_40;
  long *plStack_38;
  
  iVar4 = *(int *)(param_1 + 0xcc0) + -1;
  *(int *)(param_1 + 0xcc0) = iVar4;
  if ((iVar4 != 0) && (0x10d < *(int *)(*(long *)(param_1 + 0xa20) + 0x18))) {
    return param_1;
  }
  lVar5 = *(long *)(param_1 + 3000);
  uVar6 = 0xb;
  FUN_10a79b2c8(&plStack_40);
  if (plStack_40 == (long *)0x0) goto LAB_10a79bf90;
  if (*(char *)(lVar5 + 0x77) < '\0') {
    if (*(long *)(lVar5 + 0x68) == 0) goto LAB_10a79bf8c;
  }
  else if (*(char *)(lVar5 + 0x77) == '\0') {
LAB_10a79bf8c:
    uVar6 = 0;
    goto LAB_10a79bf90;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x3f800000;
  (**(code **)(*plStack_40 + 0x18))(plStack_40,lVar5 + 0x60,0xb,4,&uStack_70);
  FUN_10a7575a8(&uStack_70);
  uVar6 = 1;
LAB_10a79bf90:
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return (ulong)(plStack_40 != (long *)0x0 & uVar6);
}



/* Entry: 10a3dea28; end: 10a3dea87;  */

long FUN_10a3dea28(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0xc58);
  if (lVar1 == 0) {
    uVar2 = 0xa8;
    __Znwm(0xa8);
    FUN_10a909ac4();
    FUN_10a3ed8c0((long *)(param_1 + 0xc58),uVar2);
    lVar1 = *(long *)(param_1 + 0xc58);
  }
  return lVar1;
}



/* Entry: 10a3dea88; end: 10a3deb0f;  */

void FUN_10a3dea88(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  for (lVar1 = *(long *)(param_2 + 0x4b8); lVar1 != param_2 + 0x4b0; lVar1 = *(long *)(lVar1 + 8)) {
    lStack_38 = *(long *)(lVar1 + 0x10);
    if (*(long *)(lStack_38 + 0x188) == 0) {
      FUN_10a3deb10(param_1,&lStack_38);
    }
  }
  return;
}



/* Entry: 10a3deb10; end: 10a3debd3;  */

long * FUN_10a3deb10(long *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  plVar5 = (long *)param_1[1];
  if (plVar5 < (long *)param_1[2]) {
    plVar9 = plVar5 + 1;
    *plVar5 = *param_2;
    plVar5 = param_1;
  }
  else {
    lVar8 = (long)plVar5 - *param_1;
    uVar1 = (lVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10a3efb1c();
      lVar10 = param_2[1];
      lVar8 = *param_2;
      *param_2 = 0;
      param_2[1] = 0;
      plVar5 = (long *)param_1[1];
      param_1[1] = lVar10;
      *param_1 = lVar8;
      if (plVar5 != (long *)0x0) {
        plVar4 = plVar5 + 1;
        do {
          lVar8 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      return param_1;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    plVar4 = param_1;
    FUN_10a3efb30();
    plVar5 = (long *)((long)plVar4 + lVar8);
    plVar9 = plVar5 + 1;
    *plVar5 = *param_2;
    lVar8 = (long)plVar5 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    plVar5 = (long *)*param_1;
    *param_1 = lVar8;
    param_1[1] = (long)plVar9;
    param_1[2] = (long)(plVar4 + uVar7);
    if (plVar5 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar9;
  return plVar5;
}



/* Entry: 10a3debd4; end: 10a3ded63;  */

undefined8 * FUN_10a3debd4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a3ded64; end: 10a3dedfb;  */

undefined * FUN_10a3ded64(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  undefined1 uStack_61;
  undefined8 uStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  if ((*param_3 != 0) &&
     ((lVar4 = *(long *)(*param_3 + 0x268), lVar4 == 0 ||
      (___dynamic_cast(lVar4,&PTR_DAT_110bb3788,&PTR_DAT_110bb2dc8,0), lVar4 == 0)))) {
    puVar5 = &UNK_10f6540de;
    FUN_10a00946c();
    uStack_48 = 0x10a3dedfc;
    if (*(long *)(puVar5 + 0xcc8) == 0) {
      puStack_80 = puVar5;
      uStack_60 = param_2;
      plStack_58 = param_3;
      puStack_50 = &stack0xfffffffffffffff0;
      FUN_10a3f9f00(auStack_78,&uStack_61,&puStack_80);
      func_0x00010a3dee88(puVar5 + 0xcc8,auStack_78);
      if (plStack_70 != (long *)0x0) {
        plVar1 = plStack_70 + 1;
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
          (**(code **)(*plStack_70 + 0x10))(plStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
        }
      }
    }
    return puVar5 + 0xcc8;
  }
  param_1 = param_1 + 0xc30;
  uStack_38 = param_2;
  FUN_10a3f9da8(param_1,param_2,&UNK_10dd5b8f9,&uStack_38,&uStack_39);
  puVar5 = (undefined *)(param_1 + 0x30);
  func_0x00010a04a704(puVar5,param_3);
  return puVar5;
}



/* Entry: 10a3dedfc; end: 10a3df0ab;  */

long FUN_10a3dedfc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_40;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  if (*(long *)(param_1 + 0xcc8) == 0) {
    lStack_40 = param_1;
    FUN_10a3f9f00(auStack_38,&uStack_21,&lStack_40);
    func_0x00010a3dee88(param_1 + 0xcc8,auStack_38);
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
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
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
      }
    }
  }
  return param_1 + 0xcc8;
}



/* Entry: 10a3df0ac; end: 10a3df143;  */

void FUN_10a3df0ac(long param_1,float *param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  bVar1 = false;
  if ((*param_2 == *(float *)(param_1 + 0x60)) &&
     (bVar1 = false, !NAN(param_2[1]) && !NAN(*(float *)(param_1 + 100)))) {
    bVar1 = param_2[1] == *(float *)(param_1 + 100);
  }
  if (bVar1) {
    bVar1 = false;
    if ((param_2[0x14] == *(float *)(param_1 + 0xb0)) &&
       (bVar1 = false, !NAN(param_2[0x15]) && !NAN(*(float *)(param_1 + 0xb4)))) {
      bVar1 = param_2[0x15] == *(float *)(param_1 + 0xb4);
    }
    if (bVar1) {
      return;
    }
  }
  uVar3 = *(undefined8 *)param_2;
  uVar5 = *(undefined8 *)(param_2 + 6);
  uVar4 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 10);
  uVar3 = *(undefined8 *)(param_2 + 8);
  uVar6 = *(undefined8 *)(param_2 + 0xe);
  uVar5 = *(undefined8 *)(param_2 + 0xc);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  uVar9 = *(undefined8 *)(param_2 + 0x16);
  uVar8 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0xa0) = uVar7;
  *(undefined8 *)(param_1 + 0xb8) = uVar9;
  *(undefined8 *)(param_1 + 0xb0) = uVar8;
  *(undefined8 *)(param_1 + 0x88) = uVar4;
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  *(undefined8 *)(param_1 + 0x98) = uVar6;
  *(undefined8 *)(param_1 + 0x90) = uVar5;
  uVar4 = *(undefined8 *)(param_2 + 0x1a);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar6 = *(undefined8 *)(param_2 + 0x1e);
  uVar5 = *(undefined8 *)(param_2 + 0x1c);
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  uVar9 = *(undefined8 *)(param_2 + 0x26);
  uVar8 = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0xe0) = uVar7;
  *(undefined8 *)(param_1 + 0xf8) = uVar9;
  *(undefined8 *)(param_1 + 0xf0) = uVar8;
  *(undefined8 *)(param_1 + 200) = uVar4;
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  *(undefined8 *)(param_1 + 0xd8) = uVar6;
  *(undefined8 *)(param_1 + 0xd0) = uVar5;
  param_1 = param_1 + 0xd48;
  FUN_10a5aeb74(param_1,&PTR_DAT_110bd9f10);
  for (lVar2 = *(long *)(param_1 + 8); lVar2 != param_1; lVar2 = *(long *)(lVar2 + 8)) {
    *(undefined1 *)(*(long *)(lVar2 + 0x28) + 0x2f0) = 1;
  }
  return;
}



/* Entry: 10a3df144; end: 10a3df43b;  */

/* WARNING: Removing unreachable block (ram,0x00010a3df3dc) */

void FUN_10a3df144(long param_1,undefined8 *param_2,int param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined1 auStack_70 [8];
  long *plStack_68;
  undefined6 uStack_60;
  undefined2 uStack_5a;
  undefined6 uStack_58;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined2 uStack_50;
  undefined1 uStack_4e;
  char cStack_49;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (param_3 == 0) {
    uVar9 = param_2[1];
    uVar8 = *param_2;
    if (param_2[1] != 0) {
      plVar4 = (long *)(param_2[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar4 = *(long **)(param_1 + 0xcb8);
    *(undefined8 *)(param_1 + 0xcb8) = uVar9;
    *(undefined8 *)(param_1 + 0xcb0) = uVar8;
    if (plVar4 == (long *)0x0) {
      return;
    }
    plVar6 = plVar4 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 != 0) {
      return;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
    return;
  }
  if ((param_3 == 1) && (lVar7 = *(long *)(param_1 + 0x9a0), lVar7 != 0)) {
    cStack_49 = '\x12';
    uStack_50 = 0x6449;
    uStack_58 = 0x72756f736552;
    uStack_52 = 99;
    uStack_51 = 0x65;
    uStack_60 = 0x6e7265747865;
    uStack_5a = 0x6c61;
    uStack_4e = 0;
    FUN_10a0ee880(param_4,&uStack_60);
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_40,*param_4,param_4[1]);
    }
    else {
      uStack_38 = param_4[1];
      uStack_40 = *param_4;
      uStack_30 = param_4[2];
    }
    if (cStack_49 < '\0') {
      __ZdlPv(CONCAT26(uStack_5a,uStack_60));
    }
    plStack_78 = (long *)param_2[1];
    uStack_80 = *param_2;
    if (param_2[1] != 0) {
      plVar4 = (long *)(param_2[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a9dd10c(auStack_70,lVar7,&uStack_40,&uStack_80);
    if (plStack_68 != (long *)0x0) {
      plVar4 = plStack_68 + 1;
      do {
        lVar7 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
      }
    }
    if (plStack_78 == (long *)0x0) {
      return;
    }
    plVar4 = plStack_78 + 1;
    do {
      lVar7 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar6 = plStack_78;
    } while (cVar2 != '\0');
  }
  else {
    lVar7 = *(long *)(param_1 + 0x980);
    if ((param_3 != 2) || (lVar7 == 0)) {
      if (param_3 != 3) {
        return;
      }
      if (lVar7 == 0) {
        return;
      }
      puVar1 = *(undefined8 **)(lVar7 + 0x58);
      for (puVar5 = *(undefined8 **)(lVar7 + 0x50); puVar5 != puVar1; puVar5 = puVar5 + 4) {
        FUN_10a860a30(*puVar5);
      }
      return;
    }
    cStack_49 = '\x0e';
    uStack_60 = 0x6e7265747865;
    uStack_5a = 0x6c61;
    uStack_58 = 0x644972657355;
    uStack_52 = 0;
    FUN_10a0ee880(param_4,&uStack_60);
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_40,*param_4,param_4[1]);
    }
    else {
      uStack_38 = param_4[1];
      uStack_40 = *param_4;
      uStack_30 = param_4[2];
    }
    if (cStack_49 < '\0') {
      __ZdlPv(CONCAT26(uStack_5a,uStack_60));
    }
    plStack_88 = (long *)param_2[1];
    uStack_90 = *param_2;
    if (param_2[1] != 0) {
      plVar4 = (long *)(param_2[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a8789a0(lVar7,&uStack_40,&uStack_90);
    if (plStack_88 == (long *)0x0) {
      return;
    }
    plVar4 = plStack_88 + 1;
    do {
      lVar7 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar6 = plStack_88;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
  return;
}



/* Entry: 10a3df43c; end: 10a3df5eb;  */

void FUN_10a3df43c(long param_1,int param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined6 uStack_60;
  undefined2 uStack_5a;
  undefined6 uStack_58;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined2 uStack_50;
  undefined1 uStack_4e;
  char cStack_49;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  if (param_2 == 0) {
    plVar6 = *(long **)(param_1 + 0xcb8);
    *(undefined8 *)(param_1 + 0xcb0) = 0;
    *(undefined8 *)(param_1 + 0xcb8) = 0;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
    return;
  }
  if ((param_2 == 1) && (lVar5 = *(long *)(param_1 + 0x9a0), lVar5 != 0)) {
    cStack_49 = '\x12';
    uStack_50 = 0x6449;
    uStack_58 = 0x72756f736552;
    uStack_52 = 99;
    uStack_51 = 0x65;
    uStack_60 = 0x6e7265747865;
    uStack_5a = 0x6c61;
    uStack_4e = 0;
    FUN_10a0ee880(param_3,&uStack_60);
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_40,*param_3,param_3[1]);
    }
    else {
      uStack_38 = param_3[1];
      uStack_40 = *param_3;
      lStack_30 = param_3[2];
    }
    if (cStack_49 < '\0') {
      __ZdlPv(CONCAT26(uStack_5a,uStack_60));
    }
    func_0x00010aa08908(lVar5 + 8,&uStack_40);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x980);
    if ((param_2 != 2) || (lVar5 == 0)) {
      if (param_2 != 3) {
        return;
      }
      if (lVar5 == 0) {
        return;
      }
      puVar2 = *(undefined8 **)(lVar5 + 0x58);
      for (puVar7 = *(undefined8 **)(lVar5 + 0x50); puVar7 != puVar2; puVar7 = puVar7 + 4) {
        FUN_10a860acc(*puVar7);
      }
      return;
    }
    cStack_49 = '\x0e';
    uStack_60 = 0x6e7265747865;
    uStack_5a = 0x6c61;
    uStack_58 = 0x644972657355;
    uStack_52 = 0;
    FUN_10a0ee880(param_3,&uStack_60);
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_40,*param_3,param_3[1]);
    }
    else {
      uStack_38 = param_3[1];
      uStack_40 = *param_3;
      lStack_30 = param_3[2];
    }
    if (cStack_49 < '\0') {
      __ZdlPv(CONCAT26(uStack_5a,uStack_60));
    }
    FUN_10a878d44(lVar5,&uStack_40);
  }
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  return;
}



/* Entry: 10a3df5ec; end: 10a3df647;  */

void FUN_10a3df5ec(undefined8 *param_1)

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



/* Entry: 10a3df648; end: 10a3df72f;  */

undefined1  [16] FUN_10a3df648(long param_1,long param_2,undefined8 *param_3,ulong param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)(param_2 + 0x138);
  uStack_60 = *(undefined8 *)(param_2 + 0x130);
  lVar2 = param_1 + 0xd48;
  FUN_10a5aeb74(lVar2,&PTR_DAT_110bd9f10);
  lVar7 = *(long *)(lVar2 + 8);
  if (lVar7 != lVar2) {
    uVar5 = 0;
    do {
      lVar4 = *(long *)(lVar7 + 0x28);
      lVar3 = lVar4;
      FUN_10a3df730(lVar4,&uStack_60);
      if ((int)lVar3 != 0) {
        if (param_4 <= uVar5) goto LAB_10a3df72c;
        param_3[uVar5] = *(undefined8 *)(lVar4 + 0x2e0);
        uVar5 = uVar5 + 1;
        uVar6 = param_4;
        if (uVar5 == param_4) goto LAB_10a3df6f4;
      }
      lVar7 = *(long *)(lVar7 + 8);
    } while (lVar7 != lVar2);
    uVar6 = uVar5;
    if (uVar5 != 0) {
LAB_10a3df6f4:
      uVar5 = param_4;
      if ((uVar6 != 0xffffffffffffffff) && (uVar5 = uVar6, param_4 < uVar6)) goto LAB_10a3df72c;
      goto LAB_10a3df708;
    }
  }
  if (param_4 == 0) {
LAB_10a3df72c:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3df730);
    (*pcVar1)();
  }
  *param_3 = *(undefined8 *)(param_1 + 0xa80);
  uVar5 = 1;
LAB_10a3df708:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = param_3;
  return auVar8;
}



/* Entry: 10a3df730; end: 10a3df7af;  */

bool FUN_10a3df730(long param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  
  bVar1 = false;
  if (((*(ushort *)(param_1 + 0x180) & 0x17) == 0) && ((*(byte *)(param_1 + 0x6f8) & 1) == 0)) {
    uStack_38 = *(undefined8 *)(param_1 + 0x298);
    uStack_40 = *(undefined8 *)(param_1 + 0x290);
    uVar3 = *(ulong *)(param_1 + 0x290);
    uStack_28 = param_2[1];
    uStack_30 = *param_2;
    uVar4 = *param_2;
    uVar2 = (ulong)&uStack_30 | 8;
    FUN_10a3c8d60(uVar2,(ulong)&uStack_40 | 8);
    bVar1 = (uVar4 & uVar3) == *param_2 && uVar2 == param_2[1];
  }
  return bVar1;
}



/* Entry: 10a3df7b0; end: 10a3df817;  */

bool FUN_10a3df7b0(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x100) + 0x268);
  if (((lVar3 == 0) || ((*(byte *)(lVar3 + 0x10) >> 6 & 1) == 0)) ||
     (lVar3 = *(long *)(lVar3 + 0x90), *(char *)(lVar3 + 0x40) != '\x01')) {
    return true;
  }
  piVar4 = *(int **)(lVar3 + 0x18);
  iVar2 = *(int *)(lVar3 + 0x10);
  piVar1 = piVar4 + iVar2;
  piVar5 = piVar4;
  if (iVar2 != 0) {
    lVar3 = (long)iVar2 << 2;
    do {
      piVar5 = piVar4;
      if (*piVar4 == param_2) break;
      piVar4 = piVar4 + 1;
      lVar3 = lVar3 + -4;
      piVar5 = piVar1;
    } while (lVar3 != 0);
  }
  return piVar5 != piVar1;
}



/* Entry: 10a3df818; end: 10a3df847;  */

undefined8 * FUN_10a3df818(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a3df848; end: 10a3df8cb;  */

undefined8 FUN_10a3df848(undefined8 param_1,long param_2,ulong *param_3,int param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = *(long *)(param_2 + 0x168);
  uStack_38 = *(undefined8 *)(lVar3 + 0x138);
  uStack_40 = *(undefined8 *)(lVar3 + 0x130);
  uVar4 = *(ulong *)(lVar3 + 0x130);
  uVar5 = *param_3;
  uVar1 = (ulong)&uStack_40 | 8;
  FUN_10a3c8d60(uVar1,param_3 + 1);
  if (((uVar5 & uVar4) == 0 && (uVar1 & 0xffff) == 0) ||
     ((param_4 != 0 && ((*(ushort *)(param_2 + 0x180) & 0x17) != 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 10a3df8cc; end: 10a3df93b;  */

void FUN_10a3df8cc(long *param_1)

{
  long *plVar1;
  
  *(ushort *)(param_1 + 0x30) = *(ushort *)(param_1 + 0x30) | 0x800;
  plVar1 = (long *)param_1[0x14];
  if ((param_1 != (long *)0x0) && (plVar1 == (long *)0x0 || plVar1 == param_1 + 0x14)) {
                    /* WARNING: Could not recover jumptable at 0x00010a3df8fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 10a3df93c; end: 10a3df9f3;  */

undefined * FUN_10a3df93c(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puStack_40;
  long *plStack_38;
  
  if (*(long *)(param_1 + 0x100) == 0) {
    puVar7 = &UNK_10e4b1948;
  }
  else {
    puVar7 = &UNK_10e4b1948;
    if (*(long *)(*(long *)(param_1 + 0x100) + 0x250) != 0) {
      FUN_10a3df9f4(&puStack_40);
      if (plStack_38 != (long *)0x0) {
        plVar5 = plStack_38;
        __ZNSt3__119__shared_weak_count4lockEv();
        puVar2 = (undefined *)0x0;
        if (plVar5 != (long *)0x0) {
          puVar2 = puStack_40;
        }
        if (plStack_38 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (puVar2 != (undefined *)0x0) {
          puVar7 = puVar2;
        }
        if (plVar5 != (long *)0x0) {
          plVar1 = plVar5 + 1;
          do {
            lVar6 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          }
        }
      }
    }
  }
  return puVar7;
}



/* Entry: 10a3df9f4; end: 10a3dfabb;  */

void FUN_10a3df9f4(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  lVar6 = *(long *)(param_2 + 0x180);
  if (lVar6 != 0) {
    plVar7 = (long *)(param_2 + 0x10);
    lVar8 = 0x10;
    do {
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a3dfabc);
        (*pcVar5)();
      }
      if ((undefined *)plVar7[-2] == &UNK_10e4b44c0) {
        lVar6 = plVar7[-1];
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) {
          *param_1 = lVar6;
          param_1[1] = 0;
          return;
        }
        plVar1 = plVar7 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        *param_1 = lVar6;
        param_1[1] = (long)plVar7;
        plVar2 = plVar7 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          lVar6 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 != 0) {
          return;
        }
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
        return;
      }
      plVar7 = plVar7 + 3;
      lVar8 = lVar8 + -1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a3dfabc; end: 10a3dfbff;  */

void FUN_10a3dfabc(long param_1,char param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  if (param_2 == '\x02') {
    if (*(char *)(param_1 + 0xe2d) != '\x02') {
      FUN_10a3dd9ac(&uStack_48,param_1);
      FUN_10a77281c(uStack_48);
      if (cStack_38 == '\x01') {
        __ZNSt3__15mutex6unlockEv(uStack_40);
      }
      lVar1 = param_1 + 0xd48;
      FUN_10a5aeb74(lVar1,&PTR_DAT_110bbbb40);
      for (lVar2 = *(long *)(lVar1 + 8); lVar2 != lVar1; lVar2 = *(long *)(lVar2 + 8)) {
        (**(code **)**(undefined8 **)(lVar2 + 0x28))();
      }
    }
  }
  else if (*(char *)(param_1 + 0xe2d) == '\x02') {
    FUN_10a3dd9ac(&uStack_48,param_1);
    FUN_10a772878(uStack_48);
    if (cStack_38 == '\x01') {
      __ZNSt3__15mutex6unlockEv(uStack_40);
    }
    lVar1 = param_1 + 0xd48;
    FUN_10a5aeb74(lVar1,&PTR_DAT_110bbbb40);
    for (lVar2 = *(long *)(lVar1 + 8); lVar2 != lVar1; lVar2 = *(long *)(lVar2 + 8)) {
      (**(code **)(**(long **)(lVar2 + 0x28) + 8))();
    }
  }
  *(char *)(param_1 + 0xe2d) = param_2;
  return;
}


