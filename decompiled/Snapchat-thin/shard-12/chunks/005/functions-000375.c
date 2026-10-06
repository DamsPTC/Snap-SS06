/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10924a7ac; end: 10924a827;  */

undefined8 * FUN_10924a7ac(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 0x14;
  *param_1 = &PTR_DAT_110ae5758;
  param_1[1] = 0;
  func_0x000109fc8f60(param_1 + 5,param_3);
  *param_1 = &PTR_FUN_110ae5700;
  uVar1 = *(undefined8 *)(param_2 + 0x14c0);
  param_1[9] = uVar1;
  if ((*(byte *)(param_2 + 0x7f8) >> 1 & 1) != 0) {
    FUN_10924a4a4(uVar1,param_1);
  }
  return param_1;
}



/* Entry: 10924a828; end: 10924a88b;  */

undefined8 * FUN_10924a828(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_DAT_110ae5758;
  plVar1 = (long *)param_1[8];
  if (plVar1 == param_1 + 5) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_10924a870;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10924a870:
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10924a88c; end: 10924a8c7;  */

undefined8 * FUN_10924a88c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  if ((*(byte *)(param_1[3] + 0x7f8) >> 1 & 1) != 0) {
    FUN_10924a50c(param_1[9],param_1);
  }
  *param_1 = &PTR_DAT_110ae5758;
  plVar1 = (long *)param_1[8];
  if (plVar1 == param_1 + 5) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_10924a870;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10924a870:
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10924a8c8; end: 10924a8cb;  */

undefined8 * FUN_10924a8c8(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  if ((*(byte *)(param_1[3] + 0x7f8) >> 1 & 1) != 0) {
    FUN_10924a50c(param_1[9],param_1);
  }
  *param_1 = &PTR_DAT_110ae5758;
  plVar1 = (long *)param_1[8];
  if (plVar1 == param_1 + 5) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_10924a870;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10924a870:
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10924a8cc; end: 10924a8df;  */

void FUN_10924a8cc(void)

{
  FUN_10924a88c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10924a8e0; end: 10924a8f3;  */

undefined8 FUN_10924a8e0(void)

{
  return 0;
}



/* Entry: 10924a8f4; end: 10924a907;  */

void FUN_10924a8f4(void)

{
  FUN_10924a828();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10924a908; end: 10924aaef;  */

undefined8 * FUN_10924a908(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar6 = param_1;
  func_0x000109fc901c();
  *puVar6 = &PTR_DAT_110ae5860;
  puVar6[8] = *param_3;
  puVar6[0x109] = puVar6 + 9;
  puVar6[0x10b] = 0x40;
  puVar6[0x10a] = 0;
  puVar6[0x114] = puVar6 + 0x10c;
  puVar6[0x115] = 0;
  puVar6[0x116] = 8;
  puVar6[0x117] = param_2;
  *(undefined4 *)(puVar6 + 0x11b) = 0;
  puVar6[0x119] = 0;
  puVar6[0x11a] = 0;
  puVar6[0x118] = 0;
  puVar6[0x11c] = param_2 + 0x810;
  func_0x000109fccc60(puVar6 + 0x117,*param_3);
  uVar10 = (ulong)*(uint *)(param_3 + 2);
  if (*(char *)(param_1[8] + 0x209) == '\0') {
    uVar10 = 0;
  }
  uVar10 = uVar10 + *(long *)(param_1[8] + 0x200);
  if (*(uint *)(param_2 + 0x114) < uVar10) {
    FUN_109243bf8(&UNK_10f55ede0);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10924aa94);
    (*pcVar5)();
  }
  uVar9 = param_1[0x10a];
  if (uVar9 < uVar10) {
    if ((ulong)param_1[0x10b] < uVar10) {
      uVar1 = uVar10;
      if (uVar10 < 0x41) {
        uVar1 = 0x40;
      }
      puVar7 = (undefined8 *)(uVar1 << 5);
      __ZnwmSt11align_val_t(puVar7,8);
      puVar8 = (undefined8 *)param_1[0x109];
      uVar9 = param_1[0x10a];
      puVar3 = puVar8;
      puVar4 = puVar7;
      for (uVar2 = uVar9; uVar2 != 0; uVar2 = uVar2 - 1) {
        uVar11 = *puVar3;
        uVar13 = puVar3[3];
        uVar12 = puVar3[2];
        puVar4[1] = puVar3[1];
        *puVar4 = uVar11;
        puVar4[3] = uVar13;
        puVar4[2] = uVar12;
        puVar3 = puVar3 + 4;
        puVar4 = puVar4 + 4;
      }
      if (puVar8 != puVar6 + 9) {
        __ZdlPvSt11align_val_t(puVar8,8);
        uVar9 = param_1[0x10a];
      }
      param_1[0x109] = puVar7;
      param_1[0x10b] = uVar1;
    }
    while (uVar9 < uVar10) {
      puVar6 = (undefined8 *)(param_1[0x109] + uVar9 * 0x20);
      puVar6[1] = 0;
      *puVar6 = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      uVar9 = param_1[0x10a] + 1;
      param_1[0x10a] = uVar9;
    }
  }
  else {
    param_1[0x10a] = uVar10;
  }
  return param_1;
}



/* Entry: 10924aaf0; end: 10924ac07;  */

void FUN_10924aaf0(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x40);
  if (((int)param_6 == 0) && ((*(byte *)(uVar2 + 0x208) & 1) == 0)) {
    if (((ulong)param_2 < *(ulong *)(uVar2 + 0xd8)) &&
       (uVar3 = (ulong)*(byte *)(*(long *)(uVar2 + 0xd0) + (ulong)param_2), uVar3 != 0xff))
    goto LAB_10924ab5c;
    func_0x000109fca954();
  }
  else {
    func_0x000109fca9d0(uVar2,param_2,param_6,*(undefined8 *)(param_1 + 0x850));
  }
  uVar3 = uVar2;
  if (uVar2 == 0xffffffffffffffff) {
    return;
  }
LAB_10924ab5c:
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x848) + uVar3 * 0x20);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1[2] = param_5;
  return;
}



/* Entry: 10924ac08; end: 10924ace3;  */

void FUN_10924ac08(long param_1,ulong param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lStack_38;
  
  if ((param_3 != 0) && (lVar2 = *(long *)(param_3 + 0x88), lVar2 != 0)) {
    lVar4 = *(long *)(param_1 + 0x8a8);
    lStack_38 = lVar2;
    if (lVar4 == *(long *)(param_1 + 0x8b0)) {
      FUN_10924b16c(param_1 + 0x860,&lStack_38);
    }
    else {
      *(long *)(*(long *)(param_1 + 0x8a0) + lVar4 * 8) = lVar2;
      *(long *)(param_1 + 0x8a8) = lVar4 + 1;
    }
  }
  uVar1 = *(ulong *)(param_1 + 0x40);
  if (((int)param_5 == 0) && ((*(byte *)(uVar1 + 0x208) & 1) == 0)) {
    if (((param_2 & 0xffffffff) < *(ulong *)(uVar1 + 0xd8)) &&
       (uVar3 = (ulong)*(byte *)(*(long *)(uVar1 + 0xd0) + (param_2 & 0xffffffff)), uVar3 != 0xff))
    goto LAB_10924acc0;
    func_0x000109fca954(uVar1,param_2);
  }
  else {
    func_0x000109fca9d0(uVar1,param_2,param_5,*(undefined8 *)(param_1 + 0x850));
  }
  uVar3 = uVar1;
  if (uVar1 == 0xffffffffffffffff) {
    return;
  }
LAB_10924acc0:
  *(long *)(*(long *)(param_1 + 0x848) + uVar3 * 0x20) = param_3;
  return;
}



/* Entry: 10924ace4; end: 10924adcf;  */

void FUN_10924ace4(long param_1,ulong param_2,long param_3,undefined4 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lStack_48;
  
  if ((param_3 != 0) && (lVar3 = *(long *)(param_3 + 0x88), lVar3 != 0)) {
    lVar5 = *(long *)(param_1 + 0x8a8);
    lStack_48 = lVar3;
    if (lVar5 == *(long *)(param_1 + 0x8b0)) {
      FUN_10924b16c(param_1 + 0x860,&lStack_48);
    }
    else {
      *(long *)(*(long *)(param_1 + 0x8a0) + lVar5 * 8) = lVar3;
      *(long *)(param_1 + 0x8a8) = lVar5 + 1;
    }
  }
  uVar2 = *(ulong *)(param_1 + 0x40);
  if (((int)param_6 == 0) && ((*(byte *)(uVar2 + 0x208) & 1) == 0)) {
    if (((param_2 & 0xffffffff) < *(ulong *)(uVar2 + 0xd8)) &&
       (uVar4 = (ulong)*(byte *)(*(long *)(uVar2 + 0xd0) + (param_2 & 0xffffffff)), uVar4 != 0xff))
    goto LAB_10924ada4;
    func_0x000109fca954(uVar2,param_2);
  }
  else {
    func_0x000109fca9d0(uVar2,param_2,param_6,*(undefined8 *)(param_1 + 0x850));
  }
  uVar4 = uVar2;
  if (uVar2 == 0xffffffffffffffff) {
    return;
  }
LAB_10924ada4:
  plVar1 = (long *)(*(long *)(param_1 + 0x848) + uVar4 * 0x20);
  *plVar1 = param_3;
  *(undefined4 *)(plVar1 + 3) = param_4;
  return;
}



/* Entry: 10924add0; end: 10924aeab;  */

void FUN_10924add0(long param_1,ulong param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lStack_38;
  
  if (param_3 == 0) {
    return;
  }
  lVar2 = *(long *)(param_3 + 0x88);
  if (lVar2 != 0) {
    lVar4 = *(long *)(param_1 + 0x8a8);
    lStack_38 = lVar2;
    if (lVar4 == *(long *)(param_1 + 0x8b0)) {
      FUN_10924b16c(param_1 + 0x860,&lStack_38);
    }
    else {
      *(long *)(*(long *)(param_1 + 0x8a0) + lVar4 * 8) = lVar2;
      *(long *)(param_1 + 0x8a8) = lVar4 + 1;
    }
  }
  uVar1 = *(ulong *)(param_1 + 0x40);
  if (((int)param_5 == 0) && ((*(byte *)(uVar1 + 0x208) & 1) == 0)) {
    if (((param_2 & 0xffffffff) < *(ulong *)(uVar1 + 0xd8)) &&
       (uVar3 = (ulong)*(byte *)(*(long *)(uVar1 + 0xd0) + (param_2 & 0xffffffff)), uVar3 != 0xff))
    goto LAB_10924ae88;
    func_0x000109fca954(uVar1,param_2);
  }
  else {
    func_0x000109fca9d0(uVar1,param_2,param_5,*(undefined8 *)(param_1 + 0x850));
  }
  uVar3 = uVar1;
  if (uVar1 == 0xffffffffffffffff) {
    return;
  }
LAB_10924ae88:
  *(long *)(*(long *)(param_1 + 0x848) + uVar3 * 0x20) = param_3;
  return;
}



/* Entry: 10924aeac; end: 10924af27;  */

void FUN_10924aeac(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x40);
  if (((int)param_4 == 0) && ((*(byte *)(uVar1 + 0x208) & 1) == 0)) {
    if (((ulong)param_2 < *(ulong *)(uVar1 + 0xd8)) &&
       (uVar2 = (ulong)*(byte *)(*(long *)(uVar1 + 0xd0) + (ulong)param_2), uVar2 != 0xff))
    goto LAB_10924af10;
    func_0x000109fca954();
  }
  else {
    func_0x000109fca9d0(uVar1,param_2,param_4,*(undefined8 *)(param_1 + 0x850));
  }
  uVar2 = uVar1;
  if (uVar1 == 0xffffffffffffffff) {
    return;
  }
LAB_10924af10:
  *(undefined8 *)(*(long *)(param_1 + 0x848) + uVar2 * 0x20) = param_3;
  return;
}



/* Entry: 10924af28; end: 10924af2b;  */

undefined8 * FUN_10924af28(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_DAT_110ae5860;
  puStack_28 = param_1 + 0x118;
  FUN_10922d758(&puStack_28);
  param_1[0x115] = 0;
  if ((undefined8 *)param_1[0x114] != param_1 + 0x10c) {
    __ZdlPvSt11align_val_t((undefined8 *)param_1[0x114],8);
  }
  param_1[0x10a] = 0;
  if ((undefined8 *)param_1[0x109] != param_1 + 9) {
    __ZdlPvSt11align_val_t((undefined8 *)param_1[0x109],8);
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10924af2c; end: 10924af3f;  */

void FUN_10924af2c(void)

{
  FUN_10924b0e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10924af40; end: 10924af77;  */

void FUN_10924af40(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)(param_1 + 0x8a8) = 0;
  if (0 < *(long *)(param_1 + 0x850)) {
    puVar2 = *(undefined8 **)(param_1 + 0x848);
    uVar1 = *(long *)(param_1 + 0x850) + 1;
    do {
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 3) = 0;
      puVar2[2] = 0;
      puVar2 = puVar2 + 4;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return;
}



/* Entry: 10924af78; end: 10924b0e3;  */

void FUN_10924af78(long *param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  
  if (param_3 != 0) {
    lVar10 = 0;
    do {
      iVar4 = *(int *)(param_2 + lVar10 + 8);
      if (iVar4 < 5) {
        if (iVar4 < 3) {
          if (iVar4 == 1) {
            puVar1 = (undefined4 *)(param_2 + lVar10);
            (**(code **)(*param_1 + 0x60))(param_1,*puVar1,*(undefined8 *)(puVar1 + 4),puVar1[1]);
          }
          else if (iVar4 == 2) {
            puVar1 = (undefined4 *)(param_2 + lVar10);
            uVar6 = *(undefined8 *)(puVar1 + 6);
            uVar5 = puVar1[8];
            uVar2 = *puVar1;
            uVar3 = puVar1[1];
            pcVar9 = *(code **)(*param_1 + 0x48);
LAB_10924b054:
            (*pcVar9)(param_1,uVar2,uVar6,uVar5,uVar3);
          }
        }
        else if (iVar4 == 3) {
          puVar1 = (undefined4 *)(param_2 + lVar10);
          (**(code **)(*param_1 + 0x50))
                    (param_1,*puVar1,*(undefined8 *)(puVar1 + 10),puVar1[0xc],puVar1[0xd],puVar1[1])
          ;
        }
        else if (iVar4 == 4) {
LAB_10924b010:
          puVar1 = (undefined4 *)(param_2 + lVar10);
          uVar6 = *(undefined8 *)(puVar1 + 0x12);
          uVar7 = *(undefined8 *)(puVar1 + 0x14);
          uVar8 = *(undefined8 *)(puVar1 + 0x16);
          uVar2 = *puVar1;
          uVar3 = puVar1[1];
          pcVar9 = *(code **)(*param_1 + 0x38);
          goto LAB_10924b078;
        }
      }
      else if (iVar4 < 7) {
        if (iVar4 == 5) {
LAB_10924b060:
          puVar1 = (undefined4 *)(param_2 + lVar10);
          uVar6 = *(undefined8 *)(puVar1 + 0x12);
          uVar7 = *(undefined8 *)(puVar1 + 0x14);
          uVar8 = *(undefined8 *)(puVar1 + 0x16);
          uVar2 = *puVar1;
          uVar3 = puVar1[1];
          pcVar9 = *(code **)(*param_1 + 0x40);
LAB_10924b078:
          (*pcVar9)(param_1,uVar2,uVar6,uVar7,uVar8,uVar3);
        }
        else if (iVar4 == 6) goto LAB_10924b010;
      }
      else {
        if (iVar4 == 7) goto LAB_10924b060;
        if (iVar4 == 8) {
          puVar1 = (undefined4 *)(param_2 + lVar10);
          uVar6 = *(undefined8 *)(puVar1 + 0xe);
          uVar5 = puVar1[0x10];
          uVar2 = *puVar1;
          uVar3 = puVar1[1];
          pcVar9 = *(code **)(*param_1 + 0x58);
          goto LAB_10924b054;
        }
      }
      lVar10 = lVar10 + 0x60;
    } while (param_3 * 0x60 - lVar10 != 0);
  }
  return;
}



/* Entry: 10924b0e4; end: 10924b16b;  */

undefined8 * FUN_10924b0e4(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_DAT_110ae5860;
  puStack_28 = param_1 + 0x118;
  FUN_10922d758(&puStack_28);
  param_1[0x115] = 0;
  if ((undefined8 *)param_1[0x114] != param_1 + 0x10c) {
    __ZdlPvSt11align_val_t((undefined8 *)param_1[0x114],8);
  }
  param_1[0x10a] = 0;
  if ((undefined8 *)param_1[0x109] != param_1 + 9) {
    __ZdlPvSt11align_val_t((undefined8 *)param_1[0x109],8);
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10924b16c; end: 10924b21b;  */

undefined8 * FUN_10924b16c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = *(long *)(param_1 + 0x50) * 2;
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  if (uVar3 <= *(ulong *)(param_1 + 0x48)) {
    uVar3 = *(ulong *)(param_1 + 0x48) + 1;
  }
  uVar2 = uVar3;
  FUN_10924b21c();
  lVar4 = *(long *)(param_1 + 0x48);
  puVar1 = (undefined8 *)(uVar2 + lVar4 * 8);
  *puVar1 = *param_2;
  if (lVar4 != 0) {
    lVar5 = 0;
    do {
      *(undefined8 *)(uVar2 + lVar5 * 8) = *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar5 * 8);
      lVar5 = lVar5 + 1;
    } while (lVar4 != lVar5);
  }
  if (*(long *)(param_1 + 0x40) != param_1) {
    __ZdlPvSt11align_val_t(*(long *)(param_1 + 0x40),8);
    lVar4 = *(long *)(param_1 + 0x48);
  }
  *(ulong *)(param_1 + 0x40) = uVar2;
  *(long *)(param_1 + 0x48) = lVar4 + 1;
  *(ulong *)(param_1 + 0x50) = uVar3;
  return puVar1;
}



/* Entry: 10924b21c; end: 10924b257;  */

/* WARNING: Possible PIC construction at 0x00010924f48c: Changing call to branch */

undefined1  [16] FUN_10924b21c(ulong param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  uint *puVar3;
  char *pcVar4;
  uint uVar5;
  undefined1 uVar6;
  char cVar7;
  undefined8 uVar8;
  uint *puVar9;
  code *pcVar10;
  undefined ****ppppuVar11;
  bool bVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  char *pcVar17;
  char *pcVar18;
  uint *puVar19;
  uint *puVar20;
  undefined8 *****pppppuVar21;
  undefined8 *****pppppuVar22;
  undefined8 ****ppppuVar23;
  undefined8 ***pppuVar24;
  undefined ******ppppppuVar25;
  long *plVar26;
  undefined8 *puVar27;
  undefined *****pppppuVar28;
  undefined *****pppppuVar29;
  undefined *****pppppuVar30;
  undefined ****ppppuVar31;
  undefined8 uVar32;
  uint *puVar33;
  undefined ****ppppuVar34;
  ulong uVar35;
  long lVar36;
  ulong uVar37;
  undefined ****ppppuVar38;
  long *plVar39;
  long *plVar40;
  undefined1 ***pppuVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined ***pppuStack_9f0;
  undefined ****ppppuStack_9e8;
  undefined1 **ppuStack_9e0;
  code *pcStack_9d8;
  undefined1 ***pppuStack_9d0;
  code *pcStack_9c8;
  undefined1 auStack_9c0 [8];
  undefined ***pppuStack_9b8;
  undefined ***pppuStack_9b0;
  undefined ***pppuStack_9a8;
  undefined ***pppuStack_9a0;
  undefined ****ppppuStack_998;
  undefined8 uStack_990;
  undefined ***pppuStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined ****ppppuStack_970;
  undefined8 *puStack_968;
  undefined1 **ppuStack_960;
  code *pcStack_958;
  ulong uStack_950;
  ulong uStack_948;
  ulong uStack_940;
  ulong uStack_938;
  ulong uStack_930;
  ulong uStack_928;
  undefined8 *puStack_920;
  undefined8 ****ppppuStack_918;
  ulong uStack_910;
  byte bStack_901;
  undefined8 ****ppppuStack_900;
  char *pcStack_8f8;
  undefined8 uStack_8f0;
  undefined8 ****ppppuStack_8e8;
  ulong uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 ***pppuStack_8d0;
  undefined8 ***pppuStack_8c8;
  undefined8 ***pppuStack_8c0;
  undefined8 **ppuStack_8b0;
  undefined8 **ppuStack_8a8;
  undefined8 **ppuStack_8a0;
  long alStack_890 [4];
  undefined ****ppppuStack_870;
  short sStack_868;
  undefined *****pppppuStack_860;
  undefined8 *puStack_858;
  undefined8 uStack_850;
  undefined *****pppppuStack_848;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined7 uStack_90;
  long lStack_88;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if (param_1 >> 0x3d == 0) {
    lVar13 = param_1 << 3;
    uVar32 = 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZnwmSt11align_val_t_110352290)(lVar13,8);
    auVar42._8_8_ = uVar32;
    auVar42._0_8_ = lVar13;
    return auVar42;
  }
  puVar14 = (undefined8 *)0x8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  puVar33 = (uint *)PTR___ZTISt9bad_alloc_110346a68;
  ___cxa_throw();
  pcStack_18 = FUN_10924b258;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &PTR_DAT_110b97ba0;
  plVar39 = puVar14 + 3;
  puStack_20 = &stack0xfffffffffffffff0;
  _bzero(plVar39,0x7e0);
  FUN_109264810(puVar14 + 6);
  uVar32 = *(undefined8 *)puVar33;
  uVar8 = *(undefined8 *)(puVar33 + 2);
  puVar14[0x101] = *(undefined8 *)(puVar33 + 4);
  puVar14[0x100] = uVar8;
  puVar14[0xff] = uVar32;
  puStack_920 = puVar14 + 0x102;
  uVar5 = puVar33[4];
  puVar14[0x102] = *(undefined8 *)(puVar33 + 2);
  *(uint *)(puVar14 + 0x103) = uVar5;
  puVar14[0x104] = 0x32aaaba7;
  puVar14[0x106] = 0;
  puVar14[0x105] = 0;
  puVar14[0x108] = 0;
  puVar14[0x107] = 0;
  puVar14[0x10a] = 0;
  puVar14[0x109] = 0;
  puVar14[0x10c] = 0;
  puVar14[0x10b] = 0;
  puVar14[0x10e] = 0;
  puVar14[0x10d] = 0;
  *(undefined4 *)(puVar14 + 0x10f) = 0xffffffff;
  puVar14[0x115] = 0;
  puVar14[0x114] = 0;
  puVar14[0x113] = 0;
  puVar14[0x112] = 0;
  puVar14[0x111] = 0;
  puVar14[0x110] = 0;
  *puVar14 = &PTR_FUN_110ae58e0;
  puVar14[0x116] = 0x32aaaba7;
  *(undefined1 *)(puVar14 + 0x120) = 0;
  puVar14[0x118] = 0;
  puVar14[0x117] = 0;
  puVar14[0x11a] = 0;
  puVar14[0x119] = 0;
  puVar14[0x11c] = 0;
  puVar14[0x11b] = 0;
  *(undefined8 *)((long)puVar14 + 0x8e9) = 0;
  *(undefined8 *)((long)puVar14 + 0x8e1) = 0;
  *(uint *)(puVar14 + 0x121) = puVar33[0xd];
  *(undefined8 *)((long)puVar14 + 0x90c) = *(undefined8 *)(puVar33 + 10);
  *(uint *)((long)puVar14 + 0x914) = puVar33[0xe];
  auVar42 = NEON_ext(*(undefined1 (*) [16])(puVar33 + 0xf),*(undefined1 (*) [16])(puVar33 + 0xf),0xc
                     ,1);
  puVar14[0x124] = auVar42._8_8_;
  puVar14[0x123] = auVar42._0_8_;
  *(uint *)(puVar14 + 0x125) = puVar33[0xc];
  puVar14[0x126] = puVar14;
  puVar14[0x127] = puStack_920;
  puVar14[0x128] = 0;
  *(undefined4 *)(puVar14 + 0x129) = 0;
  puVar14[299] = 0;
  puVar14[0x12a] = 0;
  puVar14[0x12d] = 0;
  puVar14[300] = 0;
  puVar14[0x12f] = 0;
  puVar14[0x12e] = 0;
  *(undefined8 *)((long)puVar14 + 0x987) = 0;
  *(undefined8 *)((long)puVar14 + 0x97f) = 0;
  puVar14[0x133] = 0;
  puVar14[0x132] = 0;
  puVar14[0x135] = 0;
  puVar14[0x134] = 0;
  puVar14[0x137] = 0;
  puVar14[0x136] = 0;
  *(undefined4 *)(puVar14 + 0x138) = 0;
  *(undefined4 *)((long)puVar14 + 0x9dc) = 0x3f800000;
  _bzero(puVar14 + 0x13c,0x65e);
  _bzero(puVar14 + 0x208,0x2c8);
  puVar14[0x261] = 1;
  puVar14[0x270] = 0;
  puVar14[0x26f] = 0;
  puVar14[0x272] = 0;
  puVar14[0x271] = 0;
  puVar14[0x274] = 0;
  puVar14[0x273] = 0;
  puVar14[0x276] = 0;
  puVar14[0x275] = 0;
  puVar14[0x278] = 0;
  puVar14[0x277] = 0;
  puVar14[0x27a] = 0;
  puVar14[0x279] = 0;
  puVar14[0x27c] = 0;
  puVar14[0x27b] = 0;
  puVar14[0x27e] = 0;
  puVar14[0x27d] = 0;
  puVar14[0x280] = 0;
  puVar14[0x27f] = 0;
  puVar14[0x282] = 0;
  puVar14[0x281] = 0;
  puVar14[0x284] = 0;
  puVar14[0x283] = 0;
  puVar14[0x286] = 0;
  puVar14[0x285] = 0;
  puVar14[0x287] = 0;
  puVar14[0x263] = 0x32aaaba7;
  puVar14[0x262] = 1;
  puVar14[0x265] = 0;
  puVar14[0x264] = 0;
  puVar14[0x267] = 0;
  puVar14[0x266] = 0;
  puVar14[0x269] = 0;
  puVar14[0x268] = 0;
  puVar14[0x26b] = 0;
  puVar14[0x26a] = 0;
  puVar14[0x26d] = 0;
  puVar14[0x26c] = 0;
  puVar14[0x26e] = 0;
  *(undefined4 *)(puVar14 + 0x26f) = 0x3f800000;
  puVar14[0x271] = 0;
  puVar14[0x270] = 0;
  puVar14[0x273] = 0;
  puVar14[0x272] = 0;
  puVar14[0x274] = 0;
  *(undefined4 *)(puVar14 + 0x275) = 0x3f800000;
  puVar14[0x277] = 0;
  puVar14[0x276] = 0;
  puVar14[0x279] = 0;
  puVar14[0x278] = 0;
  puVar14[0x27a] = 0;
  *(undefined4 *)(puVar14 + 0x27b) = 0x3f800000;
  puVar14[0x27d] = 0;
  puVar14[0x27c] = 0;
  puVar14[0x27f] = 0;
  puVar14[0x27e] = 0;
  puVar14[0x280] = 0;
  *(undefined4 *)(puVar14 + 0x281) = 0x3f800000;
  puVar14[0x283] = 0;
  puVar14[0x282] = 0;
  puVar14[0x285] = 0;
  puVar14[0x284] = 0;
  puVar14[0x286] = 0;
  *(undefined4 *)(puVar14 + 0x287) = 0x3f800000;
  puVar14[0x289] = 0x32aaaba7;
  puVar14[0x288] = 0;
  puVar14[0x298] = 0;
  puVar14[0x297] = 0;
  puVar14[0x296] = 0;
  puVar14[0x295] = 0;
  puVar14[0x294] = 0;
  puVar14[0x293] = 0;
  puVar14[0x292] = 0;
  puVar14[0x291] = 0;
  puVar14[0x290] = 0;
  puVar14[0x28f] = 0;
  puVar14[0x28e] = 0;
  puVar14[0x28d] = 0;
  puVar14[0x28c] = 0;
  puVar14[0x28b] = 0;
  puVar14[0x28a] = 0;
  if (puVar33[7] == 0) {
    func_0x000109fd19d0(puStack_920,6,0x800000,&UNK_10f55ee7c,0xa1);
  }
  if (*(undefined ******)(puVar33 + 8) == (undefined *****)0x0) {
    FUN_10924a20c(&ppppuStack_870,puVar33[7],(char)puVar33[6],*puVar33 >> 1 & 1);
  }
  else {
    sStack_868 = ((byte)((byte)*puVar33 >> 1) & 1) << 8;
    ppppuStack_870 = (undefined ****)*(undefined ******)(puVar33 + 8);
    _CFRetain();
  }
  FUN_10924a2ac(alStack_890,&ppppuStack_870);
  func_0x000109374d08();
  uVar15 = 0x1f02;
  _glGetString();
  uVar35 = uVar15;
  func_0x00010925cea8();
  uVar5 = puVar33[7];
  if (uVar5 == 0xffffffff) {
LAB_10924b5a0:
    uVar37 = uVar35;
  }
  else if (((uint)uVar35 < uVar5) ||
          (uVar37 = (ulong)uVar5, (uint)uVar35 - 0x44d < 0xffffff9b == uVar5 - 1000 < 0x65)) {
    uStack_950 = (ulong)uVar5;
    uStack_948 = uVar35;
    FUN_109231308(&pppppuStack_860,&UNK_10f55ef1e);
    ppppppuVar25 = (undefined ******)pppppuStack_860;
    if (-1 < (long)uStack_850) {
      puStack_858 = (undefined8 *)(ulong)uStack_850._7_1_;
      ppppppuVar25 = &pppppuStack_860;
    }
    func_0x000109fd19d0(puStack_920,6,0x800000,ppppppuVar25,puStack_858);
    if ((char)uStack_850._7_1_ < '\0') {
      __ZdlPv(pppppuStack_860);
    }
    uVar37 = (ulong)puVar33[7];
    if (puVar33[7] == 0xffffffff) goto LAB_10924b5a0;
  }
  uVar16 = 0x1f00;
  _glGetString();
  uStack_940 = uVar37;
  uStack_930 = uVar15;
  uStack_928 = uVar16;
  _strlen();
  pcVar17 = (char *)0x1f01;
  _glGetString();
  pcVar18 = pcVar17;
  uStack_938 = uVar35;
  _strlen();
  uVar35 = *(ulong *)(puVar33 + 0x16);
  puVar9 = *(uint **)(puVar33 + 0x14);
  if (-1 < (char)*(byte *)((long)puVar33 + 0x67)) {
    uVar35 = (ulong)*(byte *)((long)puVar33 + 0x67);
    puVar9 = puVar33 + 0x14;
  }
  if (pcVar18 == (char *)0x0) {
LAB_10924b664:
    *(undefined4 *)((long)puVar14 + 0x914) = 1;
  }
  else if ((long)pcVar18 <= (long)uVar35) {
    puVar3 = (uint *)((long)puVar9 + uVar35);
    cVar7 = *pcVar17;
    puVar19 = puVar9;
    do {
      if ((0xfffffffffffffffe < uVar35 - (long)pcVar18) ||
         (_memchr(puVar19,(long)cVar7,(uVar35 - (long)pcVar18) + 1), puVar19 == (uint *)0x0)) break;
      puVar20 = puVar19;
      _memcmp();
      if ((int)puVar20 == 0) {
        if ((puVar19 != puVar3) && ((long)puVar19 - (long)puVar9 != -1)) goto LAB_10924b664;
        break;
      }
      puVar19 = (uint *)((long)puVar19 + 1);
      uVar35 = (long)puVar3 - (long)puVar19;
    } while ((long)pcVar18 <= (long)uVar35);
  }
  if (0x7ffffffffffffff7 < uVar16) {
    func_0x000104c4f6b8();
    goto LAB_10924bc80;
  }
  if (uVar16 < 0x17) {
    uStack_8d8 = CONCAT17((char)uVar16,(undefined7)uStack_8d8);
    pppppuVar21 = &ppppuStack_8e8;
    if (uVar16 != 0) goto LAB_10924b6bc;
  }
  else {
    pppppuVar22 = (undefined8 *****)0x19;
    if ((uVar16 | 7) != 0x17) {
      pppppuVar22 = (undefined8 *****)((uVar16 | 7) + 1);
    }
    pppppuVar21 = pppppuVar22;
    __Znwm();
    uStack_8d8 = (ulong)pppppuVar22 | 0x8000000000000000;
    ppppuStack_8e8 = pppppuVar21;
    uStack_8e0 = uVar16;
LAB_10924b6bc:
    _memmove(pppppuVar21,uStack_928,uVar16);
  }
  *(undefined1 *)((long)pppppuVar21 + uVar16) = 0;
  pppppuVar22 = &ppppuStack_8e8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(pppppuVar22," ",1);
  pppuStack_8d0 = *pppppuVar22;
  pppuStack_8c8 = pppppuVar22[1];
  pppuStack_8c0 = pppppuVar22[2];
  pppppuVar22[1] = (undefined8 ****)0x0;
  pppppuVar22[2] = (undefined8 ****)0x0;
  *pppppuVar22 = (undefined8 ****)0x0;
  if ((char *)0x7ffffffffffffff7 < pcVar18) {
    func_0x000104c4f6b8();
LAB_10924bc80:
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10924bc84);
    (*pcVar10)();
  }
  if (pcVar18 < (char *)0x17) {
    uStack_8f0 = CONCAT17((char)pcVar18,(undefined7)uStack_8f0);
    pppppuVar21 = &ppppuStack_900;
    if (pcVar18 != (char *)0x0) goto LAB_10924b744;
  }
  else {
    pppppuVar22 = (undefined8 *****)0x19;
    if (((ulong)pcVar18 | 7) != 0x17) {
      pppppuVar22 = (undefined8 *****)(((ulong)pcVar18 | 7) + 1);
    }
    pppppuVar21 = pppppuVar22;
    __Znwm();
    uStack_8f0 = (ulong)pppppuVar22 | 0x8000000000000000;
    ppppuStack_900 = pppppuVar21;
    pcStack_8f8 = pcVar18;
LAB_10924b744:
    _memmove(pppppuVar21,pcVar17,pcVar18);
  }
  *(char *)((long)pppppuVar21 + (long)pcVar18) = '\0';
  pcVar4 = pcStack_8f8;
  pppppuVar22 = (undefined8 *****)ppppuStack_900;
  if (-1 < (long)uStack_8f0) {
    pcVar4 = (char *)(uStack_8f0 >> 0x38);
    pppppuVar22 = &ppppuStack_900;
  }
  ppppuVar23 = &pppuStack_8d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppuVar23,pppppuVar22,pcVar4);
  ppuStack_8b0 = *ppppuVar23;
  ppuStack_8a8 = ppppuVar23[1];
  ppuStack_8a0 = ppppuVar23[2];
  ppppuVar23[1] = (undefined8 ***)0x0;
  ppppuVar23[2] = (undefined8 ***)0x0;
  *ppppuVar23 = (undefined8 ***)0x0;
  pppuVar24 = &ppuStack_8b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(pppuVar24," ",1);
  pppppuStack_860 = (undefined *****)*pppuVar24;
  puStack_858 = pppuVar24[1];
  uStack_850 = pppuVar24[2];
  pppuVar24[1] = (undefined8 **)0x0;
  pppuVar24[2] = (undefined8 **)0x0;
  *pppuVar24 = (undefined8 **)0x0;
  func_0x000107c31940(&ppppuStack_918,uStack_930);
  pppppuVar22 = (undefined8 *****)ppppuStack_918;
  if (-1 < (char)bStack_901) {
    uStack_910 = (ulong)bStack_901;
    pppppuVar22 = &ppppuStack_918;
  }
  ppppppuVar25 = &pppppuStack_860;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppuVar25,pppppuVar22,uStack_910);
  pppppuVar30 = *ppppppuVar25;
  uStack_98 = SUB87(ppppppuVar25[1],0);
  uStack_91 = (undefined1)*(undefined8 *)((long)ppppppuVar25 + 0xf);
  uStack_90 = (undefined7)((ulong)*(undefined8 *)((long)ppppppuVar25 + 0xf) >> 8);
  uVar6 = *(undefined1 *)((long)ppppppuVar25 + 0x17);
  ppppppuVar25[1] = (undefined *****)0x0;
  ppppppuVar25[2] = (undefined *****)0x0;
  *ppppppuVar25 = (undefined *****)0x0;
  if (*(char *)((long)puVar14 + 0x2f) < '\0') {
    __ZdlPv(*plVar39);
  }
  puVar14[3] = pppppuVar30;
  puVar14[4] = CONCAT17(uStack_91,uStack_98);
  *(ulong *)((long)puVar14 + 0x27) = CONCAT71(uStack_90,uStack_91);
  *(undefined1 *)((long)puVar14 + 0x2f) = uVar6;
  if ((char)bStack_901 < '\0') {
    __ZdlPv(ppppuStack_918);
  }
  uVar35 = uStack_938;
  if ((long)uStack_850 < 0) {
    __ZdlPv(pppppuStack_860);
  }
  if ((long)ppuStack_8a0 < 0) {
    __ZdlPv(ppuStack_8b0);
  }
  if ((long)uStack_8f0 < 0) {
    __ZdlPv(ppppuStack_900);
  }
  if ((long)pppuStack_8c0 < 0) {
    __ZdlPv(pppuStack_8d0);
  }
  if ((long)uStack_8d8 < 0) {
    __ZdlPv(ppppuStack_8e8);
  }
  if (*(char *)((long)puVar14 + 0x2f) < '\0') {
    plVar39 = (long *)*plVar39;
  }
  uStack_950 = (ulong)plVar39;
  FUN_10924a40c(2,&UNK_10f55ef9b);
  puVar1 = puVar14 + 0x126;
  FUN_109263344(puVar1,uStack_940,uVar35,uStack_928,uVar16,pcVar17,pcVar18);
  FUN_109263df0(&pppppuStack_860,puVar1);
  plVar39 = puVar14 + 0x261;
  _memcpy(puVar14 + 6,&pppppuStack_860,0x7c8);
  do {
    lVar13 = *plVar39;
    cVar7 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar39,0x10);
    if (bVar12) {
      *plVar39 = lVar13 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  plVar26 = (long *)0x2f8;
  __Znwm();
  plVar40 = plVar26 + 1;
  *plVar40 = 0;
  plVar26[2] = 0;
  *plVar26 = (long)&PTR_FUN_110ae5a20;
  plVar39 = plVar26 + 3;
  pppppuStack_860 = (undefined *****)ppppuStack_870;
  puStack_858 = (undefined8 *)CONCAT62(puStack_858._2_6_,sStack_868);
  ppppuStack_870 = (undefined ****)0x0;
  uStack_850 = (undefined8 **)CONCAT71(uStack_850._1_7_,1);
  FUN_109253078(plVar39,puVar14,&pppppuStack_860,puVar33 + 6,lVar13);
  if ((char)uStack_850 == '\x01') {
    FUN_10924a26c(&pppppuStack_860);
  }
  if (plVar26[5] == 0) {
    do {
      cVar7 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar40,0x10);
      if (bVar12) {
        *plVar40 = *plVar40 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    plVar2 = plVar26 + 2;
    do {
      cVar7 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar12) {
        *plVar2 = *plVar2 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    plVar26[4] = (long)plVar39;
    plVar26[5] = (long)plVar26;
LAB_10924b9ec:
    do {
      lVar13 = *plVar40;
      cVar7 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar40,0x10);
      if (bVar12) {
        *plVar40 = lVar13 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
    }
  }
  else if (*(long *)(plVar26[5] + 8) == -1) {
    do {
      cVar7 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar40,0x10);
      if (bVar12) {
        *plVar40 = *plVar40 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    plVar2 = plVar26 + 2;
    do {
      cVar7 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar12) {
        *plVar2 = *plVar2 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    plVar26[4] = (long)plVar39;
    plVar26[5] = (long)plVar26;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    goto LAB_10924b9ec;
  }
  puVar14[0x294] = plVar39;
  plVar39 = (long *)puVar14[0x295];
  puVar14[0x295] = plVar26;
  if (plVar39 != (long *)0x0) {
    plVar26 = plVar39 + 1;
    do {
      lVar13 = *plVar26;
      cVar7 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar12) {
        *plVar26 = lVar13 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar39 + 0x10))(plVar39);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar39);
    }
  }
  puVar27 = (undefined8 *)0x70;
  __Znwm();
  *puVar27 = puVar14;
  puVar27[1] = puVar1;
  *(undefined1 *)(puVar27 + 2) = 0;
  puVar27[4] = 0;
  puVar27[3] = puVar27 + 4;
  puVar27[5] = 0;
  puVar27[6] = 0x32aaaba7;
  puVar27[8] = 0;
  puVar27[7] = 0;
  puVar27[10] = 0;
  puVar27[9] = 0;
  puVar27[0xc] = 0;
  puVar27[0xb] = 0;
  puVar27[0xd] = 0;
  FUN_10924c30c(puVar14 + 0x298);
  func_0x000109fce9b0(puVar14 + 6,puStack_920);
  plVar39 = puVar14 + 0x113;
  FUN_10924be68(plVar39,4);
  lVar13 = 0;
  do {
    func_0x00010924befc(*plVar39 + lVar13 * 0x18,
                        *(undefined4 *)((long)puVar14 + lVar13 * 0xc + 0x164));
    if (*(int *)((long)puVar14 + lVar13 * 0xc + 0x164) != 0) {
      uVar35 = 0;
      do {
        uVar32 = 0xadb0;
        __Znwm();
        FUN_109247204();
        lVar36 = *(long *)(*plVar39 + lVar13 * 0x18);
        plVar26 = *(long **)(lVar36 + uVar35 * 8);
        *(undefined8 *)(lVar36 + uVar35 * 8) = uVar32;
        if (plVar26 != (long *)0x0) {
          (**(code **)(*plVar26 + 8))();
        }
        uVar35 = uVar35 + 1;
      } while (uVar35 < *(uint *)((long)puVar14 + lVar13 * 0xc + 0x164));
    }
    lVar13 = lVar13 + 1;
  } while (lVar13 != 4);
  lVar36 = 0x80;
  __Znwm();
  pppppuStack_860 = (undefined *****)&PTR_DAT_110ae5a70;
  lVar13 = lVar36;
  puStack_858 = puVar14;
  pppppuStack_848 = (undefined *****)&pppppuStack_860;
  func_0x000109fcbeb0();
  *(undefined8 **)(lVar13 + 0x20) = puStack_920;
  *(undefined8 *)(lVar13 + 0x28) = 0x32aaaba7;
  *(undefined8 *)(lVar13 + 0x38) = 0;
  *(undefined8 *)(lVar13 + 0x30) = 0;
  *(undefined8 *)(lVar13 + 0x48) = 0;
  *(undefined8 *)(lVar13 + 0x40) = 0;
  *(undefined8 *)(lVar13 + 0x58) = 0;
  *(undefined8 *)(lVar13 + 0x50) = 0;
  *(undefined8 *)(lVar13 + 0x68) = 0;
  *(undefined8 *)(lVar13 + 0x60) = 0;
  *(undefined8 *)(lVar13 + 0x78) = 0;
  *(undefined8 *)(lVar13 + 0x70) = 0;
  if ((undefined ******)pppppuStack_848 == &pppppuStack_860) {
    lVar13 = 0x20;
LAB_10924bba8:
    (**(code **)((long)*pppppuStack_848 + lVar13))();
  }
  else if ((undefined ******)pppppuStack_848 != (undefined ******)0x0) {
    lVar13 = 0x28;
    goto LAB_10924bba8;
  }
  func_0x00010924c278(puVar14 + 0x112,lVar36);
  uVar32 = 0xd8;
  __Znwm(0xd8);
  pppppuStack_860 = (undefined *****)&PTR_FUN_110ae5b60;
  puStack_858 = puVar14;
  pppppuStack_848 = (undefined *****)&pppppuStack_860;
  func_0x000109fccda0();
  if ((undefined ******)pppppuStack_848 == &pppppuStack_860) {
    lVar13 = 0x20;
  }
  else {
    if ((undefined ******)pppppuStack_848 == (undefined ******)0x0) goto LAB_10924bc14;
    lVar13 = 0x28;
  }
  (**(code **)((long)*pppppuStack_848 + lVar13))();
LAB_10924bc14:
  func_0x00010924c250(puVar14 + 0x111,uVar32);
  if (alStack_890[0] != 0) {
    FUN_10924a39c(alStack_890);
  }
  pppppuVar30 = &ppppuStack_870;
  FUN_10924a26c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    auVar43._8_8_ = uVar32;
    auVar43._0_8_ = puVar14;
    return auVar43;
  }
  ___stack_chk_fail();
  uVar35 = 0;
  FUN_10924c30c(puVar14 + 0x298);
  func_0x00010924f92c(puVar14 + 0x296);
  func_0x00010924f92c(puVar14 + 0x294);
  if (puVar14[0x291] != 0) {
    puVar14[0x292] = puVar14[0x291];
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(puVar14 + 0x289);
  FUN_10924bf80(puVar14 + 0x263);
  if (*(char *)(puVar14 + 0x120) == '\x01') {
    FUN_10924a26c(puVar14 + 0x11e);
  }
  __ZNSt3__15mutexD1Ev(puVar14 + 0x116);
  func_0x000109fcab78(puVar14);
  pppppuVar28 = pppppuVar30;
  __Unwind_Resume();
  uStack_980 = 0x1448;
  uStack_978 = 0x1318;
  pcStack_958 = FUN_10924be68;
  ppppuVar31 = pppppuVar28[1];
  lVar13 = (long)ppppuVar31 - (long)*pppppuVar28 >> 3;
  bVar12 = uVar35 < (ulong)(lVar13 * -0x5555555555555555);
  ppppuVar38 = (undefined ****)(uVar35 + lVar13 * 0x5555555555555555);
  ppppuStack_970 = (undefined ****)pppppuVar30;
  puStack_968 = puVar14;
  ppuStack_960 = &puStack_20;
  if (!bVar12 && ppppuVar38 != (undefined ****)0x0) {
    ppppuVar11 = (undefined ****)auStack_9c0;
    uStack_990 = 0x14b0;
    pppuStack_988 = (undefined ***)0x14a0;
    uStack_980 = 0x1448;
    uStack_978 = 0x1318;
    pcStack_958 = FUN_10924be68;
    pppuVar41 = &ppuStack_960;
    pppppuVar30 = (undefined *****)pppppuVar28[1];
    if (ppppuVar38 <=
        (undefined ****)(((long)pppppuVar28[2] - (long)pppppuVar30 >> 3) * -0x5555555555555555)) {
      lVar13 = 0;
      pppppuVar29 = pppppuVar28;
      if (ppppuVar38 != (undefined ****)0x0) {
        uVar35 = ((long)ppppuVar38 * 0x18 - 0x18U) / 0x18;
        lVar13 = uVar35 * 0x18 + 0x18;
        pppppuVar29 = pppppuVar30;
        _bzero(pppppuVar30,lVar13);
        pppppuVar30 = pppppuVar30 + uVar35 * 3 + 3;
      }
      pppppuVar28[1] = (undefined ****)pppppuVar30;
      auVar45._8_8_ = lVar13;
      auVar45._0_8_ = pppppuVar29;
      return auVar45;
    }
    lVar13 = (long)pppppuVar30 - (long)*pppppuVar28;
    uVar35 = (long)ppppuVar38 + (lVar13 >> 3) * -0x5555555555555555;
    if (uVar35 < 0xaaaaaaaaaaaaaab) {
      lVar36 = (long)pppppuVar28[2] - (long)*pppppuVar28 >> 3;
      uVar15 = lVar36 * 0x5555555555555556;
      if (uVar15 < uVar35 || uVar15 - uVar35 == 0) {
        uVar15 = uVar35;
      }
      if (0x555555555555554 < (ulong)(lVar36 * -0x5555555555555555)) {
        uVar15 = 0xaaaaaaaaaaaaaaa;
      }
      ppppuStack_998 = (undefined ****)pppppuVar28;
      if (uVar15 == 0) {
        pppppuVar30 = (undefined *****)0x0;
      }
      else {
        pppppuVar30 = pppppuVar28;
        FUN_10924f4c0();
      }
      lVar13 = (long)pppppuVar30 + lVar13;
      lVar36 = (((long)ppppuVar38 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
      _bzero(lVar13,lVar36);
      ppppuVar34 = *pppppuVar28;
      ppppuVar38 = (undefined ****)(lVar13 - ((long)pppppuVar28[1] - (long)ppppuVar34));
      _memcpy(ppppuVar38);
      pppuStack_9b8 = (undefined ***)*pppppuVar28;
      *pppppuVar28 = ppppuVar38;
      pppppuVar28[1] = (undefined ****)(lVar13 + lVar36);
      pppuStack_9a0 = (undefined ***)pppppuVar28[2];
      pppppuVar28[2] = (undefined ****)(pppppuVar30 + uVar15 * 3);
      ppppuVar31 = &pppuStack_9b8;
      uVar32 = 0x10924f490;
      pppuStack_9b0 = pppuStack_9b8;
      pppuStack_9a8 = pppuStack_9b8;
    }
    else {
      ppppuVar34 = ppppuVar38;
      FUN_10924f4ac();
      pcStack_9c8 = FUN_10924f4ac;
      ppppuVar31 = (undefined ****)&DAT_10f62a4d8;
      pppuStack_9d0 = pppuVar41;
      func_0x000104c4f6cc();
      ppppuVar11 = &pppuStack_9f0;
      pcStack_9d8 = FUN_10924f4c0;
      pppuVar41 = &ppuStack_9e0;
      pppuStack_9f0 = (undefined ***)ppppuVar38;
      ppppuStack_9e8 = (undefined ****)pppppuVar28;
      if (ppppuVar34 < (undefined ****)0xaaaaaaaaaaaaaab) {
        lVar13 = (long)ppppuVar34 * 0x18;
        ppuStack_9e0 = (undefined1 **)&pppuStack_9d0;
        __Znwm(lVar13);
        auVar46._8_8_ = ppppuVar34;
        auVar46._0_8_ = lVar13;
        return auVar46;
      }
      uVar32 = 0x10924f504;
      ppuStack_9e0 = (undefined1 **)&pppuStack_9d0;
      func_0x000104c4f740();
    }
    *(undefined *****)((long)ppppuVar11 + -0x20) = ppppuVar38;
    *(undefined ******)((long)ppppuVar11 + -0x18) = pppppuVar28;
    *(undefined1 ****)((long)ppppuVar11 + -0x10) = pppuVar41;
    *(undefined8 *)((long)ppppuVar11 + -8) = uVar32;
    func_0x00010924f534();
    if (*ppppuVar31 != (undefined ***)0x0) {
      __ZdlPv();
    }
    auVar47._8_8_ = ppppuVar34;
    auVar47._0_8_ = ppppuVar31;
    return auVar47;
  }
  pppppuVar30 = pppppuVar28;
  if (bVar12) {
    ppppuVar38 = *pppppuVar28 + uVar35 * 3;
    while (ppppuVar31 != ppppuVar38) {
      ppppuVar31 = ppppuVar31 + -3;
      pppppuVar30 = (undefined *****)&pppuStack_988;
      pppuStack_988 = (undefined ***)ppppuVar31;
      FUN_10924f584(pppppuVar30);
    }
    pppppuVar28[1] = ppppuVar38;
  }
  auVar44._8_8_ = uVar35;
  auVar44._0_8_ = pppppuVar30;
  return auVar44;
}



/* Entry: 10924b258; end: 10924be67;  */

/* WARNING: Possible PIC construction at 0x00010924f48c: Changing call to branch */

undefined1  [16] FUN_10924b258(undefined8 *param_1,uint *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  uint *puVar3;
  char *pcVar4;
  uint uVar5;
  undefined1 uVar6;
  char cVar7;
  undefined8 uVar8;
  uint *puVar9;
  code *pcVar10;
  undefined ****ppppuVar11;
  bool bVar12;
  ulong uVar13;
  ulong uVar14;
  char *pcVar15;
  char *pcVar16;
  uint *puVar17;
  uint *puVar18;
  undefined8 *****pppppuVar19;
  undefined8 *****pppppuVar20;
  undefined8 ****ppppuVar21;
  undefined8 ***pppuVar22;
  undefined ******ppppppuVar23;
  long *plVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  undefined *****pppppuVar27;
  undefined *****pppppuVar28;
  undefined *****pppppuVar29;
  undefined ****ppppuVar30;
  undefined ****ppppuVar31;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  undefined ****ppppuVar35;
  long *plVar36;
  long lVar37;
  long *plVar38;
  undefined1 **ppuVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined ***pppuStack_9e0;
  undefined ****ppppuStack_9d8;
  undefined1 *puStack_9d0;
  code *pcStack_9c8;
  undefined1 **ppuStack_9c0;
  code *pcStack_9b8;
  undefined1 auStack_9b0 [8];
  undefined ***pppuStack_9a8;
  undefined ***pppuStack_9a0;
  undefined ***pppuStack_998;
  undefined ***pppuStack_990;
  undefined ****ppppuStack_988;
  undefined8 uStack_980;
  undefined ***pppuStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined ****ppppuStack_960;
  undefined8 *puStack_958;
  undefined1 *puStack_950;
  code *pcStack_948;
  ulong uStack_940;
  ulong uStack_938;
  ulong uStack_930;
  ulong uStack_928;
  ulong uStack_920;
  ulong uStack_918;
  undefined8 *puStack_910;
  undefined8 ****ppppuStack_908;
  ulong uStack_900;
  byte bStack_8f1;
  undefined8 ****ppppuStack_8f0;
  char *pcStack_8e8;
  undefined8 uStack_8e0;
  undefined8 ****ppppuStack_8d8;
  ulong uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 ***pppuStack_8c0;
  undefined8 ***pppuStack_8b8;
  undefined8 ***pppuStack_8b0;
  undefined8 **ppuStack_8a0;
  undefined8 **ppuStack_898;
  undefined8 **ppuStack_890;
  long alStack_880 [4];
  undefined ****ppppuStack_860;
  short sStack_858;
  undefined *****pppppuStack_850;
  undefined8 *puStack_848;
  undefined8 uStack_840;
  undefined *****pppppuStack_838;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110b97ba0;
  plVar36 = param_1 + 3;
  _bzero(plVar36,0x7e0);
  FUN_109264810(param_1 + 6);
  uVar26 = *(undefined8 *)param_2;
  uVar8 = *(undefined8 *)(param_2 + 2);
  param_1[0x101] = *(undefined8 *)(param_2 + 4);
  param_1[0x100] = uVar8;
  param_1[0xff] = uVar26;
  puStack_910 = param_1 + 0x102;
  uVar5 = param_2[4];
  param_1[0x102] = *(undefined8 *)(param_2 + 2);
  *(uint *)(param_1 + 0x103) = uVar5;
  param_1[0x104] = 0x32aaaba7;
  param_1[0x106] = 0;
  param_1[0x105] = 0;
  param_1[0x108] = 0;
  param_1[0x107] = 0;
  param_1[0x10a] = 0;
  param_1[0x109] = 0;
  param_1[0x10c] = 0;
  param_1[0x10b] = 0;
  param_1[0x10e] = 0;
  param_1[0x10d] = 0;
  *(undefined4 *)(param_1 + 0x10f) = 0xffffffff;
  param_1[0x115] = 0;
  param_1[0x114] = 0;
  param_1[0x113] = 0;
  param_1[0x112] = 0;
  param_1[0x111] = 0;
  param_1[0x110] = 0;
  *param_1 = &PTR_FUN_110ae58e0;
  param_1[0x116] = 0x32aaaba7;
  *(undefined1 *)(param_1 + 0x120) = 0;
  param_1[0x118] = 0;
  param_1[0x117] = 0;
  param_1[0x11a] = 0;
  param_1[0x119] = 0;
  param_1[0x11c] = 0;
  param_1[0x11b] = 0;
  *(undefined8 *)((long)param_1 + 0x8e9) = 0;
  *(undefined8 *)((long)param_1 + 0x8e1) = 0;
  *(uint *)(param_1 + 0x121) = param_2[0xd];
  *(undefined8 *)((long)param_1 + 0x90c) = *(undefined8 *)(param_2 + 10);
  *(uint *)((long)param_1 + 0x914) = param_2[0xe];
  auVar40 = NEON_ext(*(undefined1 (*) [16])(param_2 + 0xf),*(undefined1 (*) [16])(param_2 + 0xf),0xc
                     ,1);
  param_1[0x124] = auVar40._8_8_;
  param_1[0x123] = auVar40._0_8_;
  *(uint *)(param_1 + 0x125) = param_2[0xc];
  param_1[0x126] = param_1;
  param_1[0x127] = puStack_910;
  param_1[0x128] = 0;
  *(undefined4 *)(param_1 + 0x129) = 0;
  param_1[299] = 0;
  param_1[0x12a] = 0;
  param_1[0x12d] = 0;
  param_1[300] = 0;
  param_1[0x12f] = 0;
  param_1[0x12e] = 0;
  *(undefined8 *)((long)param_1 + 0x987) = 0;
  *(undefined8 *)((long)param_1 + 0x97f) = 0;
  param_1[0x133] = 0;
  param_1[0x132] = 0;
  param_1[0x135] = 0;
  param_1[0x134] = 0;
  param_1[0x137] = 0;
  param_1[0x136] = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)((long)param_1 + 0x9dc) = 0x3f800000;
  _bzero(param_1 + 0x13c,0x65e);
  _bzero(param_1 + 0x208,0x2c8);
  param_1[0x261] = 1;
  param_1[0x270] = 0;
  param_1[0x26f] = 0;
  param_1[0x272] = 0;
  param_1[0x271] = 0;
  param_1[0x274] = 0;
  param_1[0x273] = 0;
  param_1[0x276] = 0;
  param_1[0x275] = 0;
  param_1[0x278] = 0;
  param_1[0x277] = 0;
  param_1[0x27a] = 0;
  param_1[0x279] = 0;
  param_1[0x27c] = 0;
  param_1[0x27b] = 0;
  param_1[0x27e] = 0;
  param_1[0x27d] = 0;
  param_1[0x280] = 0;
  param_1[0x27f] = 0;
  param_1[0x282] = 0;
  param_1[0x281] = 0;
  param_1[0x284] = 0;
  param_1[0x283] = 0;
  param_1[0x286] = 0;
  param_1[0x285] = 0;
  param_1[0x287] = 0;
  param_1[0x263] = 0x32aaaba7;
  param_1[0x262] = 1;
  param_1[0x265] = 0;
  param_1[0x264] = 0;
  param_1[0x267] = 0;
  param_1[0x266] = 0;
  param_1[0x269] = 0;
  param_1[0x268] = 0;
  param_1[0x26b] = 0;
  param_1[0x26a] = 0;
  param_1[0x26d] = 0;
  param_1[0x26c] = 0;
  param_1[0x26e] = 0;
  *(undefined4 *)(param_1 + 0x26f) = 0x3f800000;
  param_1[0x271] = 0;
  param_1[0x270] = 0;
  param_1[0x273] = 0;
  param_1[0x272] = 0;
  param_1[0x274] = 0;
  *(undefined4 *)(param_1 + 0x275) = 0x3f800000;
  param_1[0x277] = 0;
  param_1[0x276] = 0;
  param_1[0x279] = 0;
  param_1[0x278] = 0;
  param_1[0x27a] = 0;
  *(undefined4 *)(param_1 + 0x27b) = 0x3f800000;
  param_1[0x27d] = 0;
  param_1[0x27c] = 0;
  param_1[0x27f] = 0;
  param_1[0x27e] = 0;
  param_1[0x280] = 0;
  *(undefined4 *)(param_1 + 0x281) = 0x3f800000;
  param_1[0x283] = 0;
  param_1[0x282] = 0;
  param_1[0x285] = 0;
  param_1[0x284] = 0;
  param_1[0x286] = 0;
  *(undefined4 *)(param_1 + 0x287) = 0x3f800000;
  param_1[0x289] = 0x32aaaba7;
  param_1[0x288] = 0;
  param_1[0x298] = 0;
  param_1[0x297] = 0;
  param_1[0x296] = 0;
  param_1[0x295] = 0;
  param_1[0x294] = 0;
  param_1[0x293] = 0;
  param_1[0x292] = 0;
  param_1[0x291] = 0;
  param_1[0x290] = 0;
  param_1[0x28f] = 0;
  param_1[0x28e] = 0;
  param_1[0x28d] = 0;
  param_1[0x28c] = 0;
  param_1[0x28b] = 0;
  param_1[0x28a] = 0;
  if (param_2[7] == 0) {
    func_0x000109fd19d0(puStack_910,6,0x800000,&UNK_10f55ee7c,0xa1);
  }
  if (*(undefined ******)(param_2 + 8) == (undefined *****)0x0) {
    FUN_10924a20c(&ppppuStack_860,param_2[7],(char)param_2[6],*param_2 >> 1 & 1);
  }
  else {
    sStack_858 = ((byte)((byte)*param_2 >> 1) & 1) << 8;
    ppppuStack_860 = (undefined ****)*(undefined ******)(param_2 + 8);
    _CFRetain();
  }
  FUN_10924a2ac(alStack_880,&ppppuStack_860);
  func_0x000109374d08();
  uVar13 = 0x1f02;
  _glGetString();
  uVar32 = uVar13;
  func_0x00010925cea8();
  uVar5 = param_2[7];
  if (uVar5 == 0xffffffff) {
LAB_10924b5a0:
    uVar34 = uVar32;
  }
  else if (((uint)uVar32 < uVar5) ||
          (uVar34 = (ulong)uVar5, (uint)uVar32 - 0x44d < 0xffffff9b == uVar5 - 1000 < 0x65)) {
    uStack_940 = (ulong)uVar5;
    uStack_938 = uVar32;
    FUN_109231308(&pppppuStack_850,&UNK_10f55ef1e);
    ppppppuVar23 = (undefined ******)pppppuStack_850;
    if (-1 < (long)uStack_840) {
      puStack_848 = (undefined8 *)(ulong)uStack_840._7_1_;
      ppppppuVar23 = &pppppuStack_850;
    }
    func_0x000109fd19d0(puStack_910,6,0x800000,ppppppuVar23,puStack_848);
    if ((char)uStack_840._7_1_ < '\0') {
      __ZdlPv(pppppuStack_850);
    }
    uVar34 = (ulong)param_2[7];
    if (param_2[7] == 0xffffffff) goto LAB_10924b5a0;
  }
  uVar14 = 0x1f00;
  _glGetString();
  uStack_930 = uVar34;
  uStack_920 = uVar13;
  uStack_918 = uVar14;
  _strlen();
  pcVar15 = (char *)0x1f01;
  _glGetString();
  pcVar16 = pcVar15;
  uStack_928 = uVar32;
  _strlen();
  uVar32 = *(ulong *)(param_2 + 0x16);
  puVar9 = *(uint **)(param_2 + 0x14);
  if (-1 < (char)*(byte *)((long)param_2 + 0x67)) {
    uVar32 = (ulong)*(byte *)((long)param_2 + 0x67);
    puVar9 = param_2 + 0x14;
  }
  if (pcVar16 == (char *)0x0) {
LAB_10924b664:
    *(undefined4 *)((long)param_1 + 0x914) = 1;
  }
  else if ((long)pcVar16 <= (long)uVar32) {
    puVar3 = (uint *)((long)puVar9 + uVar32);
    cVar7 = *pcVar15;
    puVar17 = puVar9;
    do {
      if ((0xfffffffffffffffe < uVar32 - (long)pcVar16) ||
         (_memchr(puVar17,(long)cVar7,(uVar32 - (long)pcVar16) + 1), puVar17 == (uint *)0x0)) break;
      puVar18 = puVar17;
      _memcmp();
      if ((int)puVar18 == 0) {
        if ((puVar17 != puVar3) && ((long)puVar17 - (long)puVar9 != -1)) goto LAB_10924b664;
        break;
      }
      puVar17 = (uint *)((long)puVar17 + 1);
      uVar32 = (long)puVar3 - (long)puVar17;
    } while ((long)pcVar16 <= (long)uVar32);
  }
  if (0x7ffffffffffffff7 < uVar14) {
    func_0x000104c4f6b8();
    goto LAB_10924bc80;
  }
  if (uVar14 < 0x17) {
    uStack_8c8 = CONCAT17((char)uVar14,(undefined7)uStack_8c8);
    pppppuVar19 = &ppppuStack_8d8;
    if (uVar14 != 0) goto LAB_10924b6bc;
  }
  else {
    pppppuVar20 = (undefined8 *****)0x19;
    if ((uVar14 | 7) != 0x17) {
      pppppuVar20 = (undefined8 *****)((uVar14 | 7) + 1);
    }
    pppppuVar19 = pppppuVar20;
    __Znwm();
    uStack_8c8 = (ulong)pppppuVar20 | 0x8000000000000000;
    ppppuStack_8d8 = pppppuVar19;
    uStack_8d0 = uVar14;
LAB_10924b6bc:
    _memmove(pppppuVar19,uStack_918,uVar14);
  }
  *(undefined1 *)((long)pppppuVar19 + uVar14) = 0;
  pppppuVar20 = &ppppuStack_8d8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(pppppuVar20," ",1);
  pppuStack_8c0 = *pppppuVar20;
  pppuStack_8b8 = pppppuVar20[1];
  pppuStack_8b0 = pppppuVar20[2];
  pppppuVar20[1] = (undefined8 ****)0x0;
  pppppuVar20[2] = (undefined8 ****)0x0;
  *pppppuVar20 = (undefined8 ****)0x0;
  if ((char *)0x7ffffffffffffff7 < pcVar16) {
    func_0x000104c4f6b8();
LAB_10924bc80:
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10924bc84);
    (*pcVar10)();
  }
  if (pcVar16 < (char *)0x17) {
    uStack_8e0 = CONCAT17((char)pcVar16,(undefined7)uStack_8e0);
    pppppuVar19 = &ppppuStack_8f0;
    if (pcVar16 != (char *)0x0) goto LAB_10924b744;
  }
  else {
    pppppuVar20 = (undefined8 *****)0x19;
    if (((ulong)pcVar16 | 7) != 0x17) {
      pppppuVar20 = (undefined8 *****)(((ulong)pcVar16 | 7) + 1);
    }
    pppppuVar19 = pppppuVar20;
    __Znwm();
    uStack_8e0 = (ulong)pppppuVar20 | 0x8000000000000000;
    ppppuStack_8f0 = pppppuVar19;
    pcStack_8e8 = pcVar16;
LAB_10924b744:
    _memmove(pppppuVar19,pcVar15,pcVar16);
  }
  *(char *)((long)pppppuVar19 + (long)pcVar16) = '\0';
  pcVar4 = pcStack_8e8;
  pppppuVar20 = (undefined8 *****)ppppuStack_8f0;
  if (-1 < (long)uStack_8e0) {
    pcVar4 = (char *)(uStack_8e0 >> 0x38);
    pppppuVar20 = &ppppuStack_8f0;
  }
  ppppuVar21 = &pppuStack_8c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppuVar21,pppppuVar20,pcVar4);
  ppuStack_8a0 = *ppppuVar21;
  ppuStack_898 = ppppuVar21[1];
  ppuStack_890 = ppppuVar21[2];
  ppppuVar21[1] = (undefined8 ***)0x0;
  ppppuVar21[2] = (undefined8 ***)0x0;
  *ppppuVar21 = (undefined8 ***)0x0;
  pppuVar22 = &ppuStack_8a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(pppuVar22," ",1);
  pppppuStack_850 = (undefined *****)*pppuVar22;
  puStack_848 = pppuVar22[1];
  uStack_840 = pppuVar22[2];
  pppuVar22[1] = (undefined8 **)0x0;
  pppuVar22[2] = (undefined8 **)0x0;
  *pppuVar22 = (undefined8 **)0x0;
  func_0x000107c31940(&ppppuStack_908,uStack_920);
  pppppuVar20 = (undefined8 *****)ppppuStack_908;
  if (-1 < (char)bStack_8f1) {
    uStack_900 = (ulong)bStack_8f1;
    pppppuVar20 = &ppppuStack_908;
  }
  ppppppuVar23 = &pppppuStack_850;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppuVar23,pppppuVar20,uStack_900);
  pppppuVar29 = *ppppppuVar23;
  uStack_88 = SUB87(ppppppuVar23[1],0);
  uStack_81 = (undefined1)*(undefined8 *)((long)ppppppuVar23 + 0xf);
  uStack_80 = (undefined7)((ulong)*(undefined8 *)((long)ppppppuVar23 + 0xf) >> 8);
  uVar6 = *(undefined1 *)((long)ppppppuVar23 + 0x17);
  ppppppuVar23[1] = (undefined *****)0x0;
  ppppppuVar23[2] = (undefined *****)0x0;
  *ppppppuVar23 = (undefined *****)0x0;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(*plVar36);
  }
  param_1[3] = pppppuVar29;
  param_1[4] = CONCAT17(uStack_81,uStack_88);
  *(ulong *)((long)param_1 + 0x27) = CONCAT71(uStack_80,uStack_81);
  *(undefined1 *)((long)param_1 + 0x2f) = uVar6;
  if ((char)bStack_8f1 < '\0') {
    __ZdlPv(ppppuStack_908);
  }
  uVar32 = uStack_928;
  if ((long)uStack_840 < 0) {
    __ZdlPv(pppppuStack_850);
  }
  if ((long)ppuStack_890 < 0) {
    __ZdlPv(ppuStack_8a0);
  }
  if ((long)uStack_8e0 < 0) {
    __ZdlPv(ppppuStack_8f0);
  }
  if ((long)pppuStack_8b0 < 0) {
    __ZdlPv(pppuStack_8c0);
  }
  if ((long)uStack_8c8 < 0) {
    __ZdlPv(ppppuStack_8d8);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    plVar36 = (long *)*plVar36;
  }
  uStack_940 = (ulong)plVar36;
  FUN_10924a40c(2,&UNK_10f55ef9b);
  puVar1 = param_1 + 0x126;
  FUN_109263344(puVar1,uStack_930,uVar32,uStack_918,uVar14,pcVar15,pcVar16);
  FUN_109263df0(&pppppuStack_850,puVar1);
  plVar36 = param_1 + 0x261;
  _memcpy(param_1 + 6,&pppppuStack_850,0x7c8);
  do {
    lVar37 = *plVar36;
    cVar7 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar36,0x10);
    if (bVar12) {
      *plVar36 = lVar37 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  plVar24 = (long *)0x2f8;
  __Znwm();
  plVar38 = plVar24 + 1;
  *plVar38 = 0;
  plVar24[2] = 0;
  *plVar24 = (long)&PTR_FUN_110ae5a20;
  plVar36 = plVar24 + 3;
  pppppuStack_850 = (undefined *****)ppppuStack_860;
  puStack_848 = (undefined8 *)CONCAT62(puStack_848._2_6_,sStack_858);
  ppppuStack_860 = (undefined ****)0x0;
  uStack_840 = (undefined8 **)CONCAT71(uStack_840._1_7_,1);
  FUN_109253078(plVar36,param_1,&pppppuStack_850,param_2 + 6,lVar37);
  if ((char)uStack_840 == '\x01') {
    FUN_10924a26c(&pppppuStack_850);
  }
  if (plVar24[5] == 0) {
    do {
      cVar7 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar38,0x10);
      if (bVar12) {
        *plVar38 = *plVar38 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    plVar2 = plVar24 + 2;
    do {
      cVar7 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar12) {
        *plVar2 = *plVar2 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    plVar24[4] = (long)plVar36;
    plVar24[5] = (long)plVar24;
LAB_10924b9ec:
    do {
      lVar37 = *plVar38;
      cVar7 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar38,0x10);
      if (bVar12) {
        *plVar38 = lVar37 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar37 == 0) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
    }
  }
  else if (*(long *)(plVar24[5] + 8) == -1) {
    do {
      cVar7 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar38,0x10);
      if (bVar12) {
        *plVar38 = *plVar38 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    plVar2 = plVar24 + 2;
    do {
      cVar7 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar12) {
        *plVar2 = *plVar2 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    plVar24[4] = (long)plVar36;
    plVar24[5] = (long)plVar24;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    goto LAB_10924b9ec;
  }
  param_1[0x294] = plVar36;
  plVar36 = (long *)param_1[0x295];
  param_1[0x295] = plVar24;
  if (plVar36 != (long *)0x0) {
    plVar24 = plVar36 + 1;
    do {
      lVar37 = *plVar24;
      cVar7 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar12) {
        *plVar24 = lVar37 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar37 == 0) {
      (**(code **)(*plVar36 + 0x10))(plVar36);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar36);
    }
  }
  puVar25 = (undefined8 *)0x70;
  __Znwm();
  *puVar25 = param_1;
  puVar25[1] = puVar1;
  *(undefined1 *)(puVar25 + 2) = 0;
  puVar25[4] = 0;
  puVar25[3] = puVar25 + 4;
  puVar25[5] = 0;
  puVar25[6] = 0x32aaaba7;
  puVar25[8] = 0;
  puVar25[7] = 0;
  puVar25[10] = 0;
  puVar25[9] = 0;
  puVar25[0xc] = 0;
  puVar25[0xb] = 0;
  puVar25[0xd] = 0;
  FUN_10924c30c(param_1 + 0x298);
  func_0x000109fce9b0(param_1 + 6,puStack_910);
  plVar36 = param_1 + 0x113;
  FUN_10924be68(plVar36,4);
  lVar37 = 0;
  do {
    func_0x00010924befc(*plVar36 + lVar37 * 0x18,
                        *(undefined4 *)((long)param_1 + lVar37 * 0xc + 0x164));
    if (*(int *)((long)param_1 + lVar37 * 0xc + 0x164) != 0) {
      uVar32 = 0;
      do {
        uVar26 = 0xadb0;
        __Znwm();
        FUN_109247204();
        lVar33 = *(long *)(*plVar36 + lVar37 * 0x18);
        plVar24 = *(long **)(lVar33 + uVar32 * 8);
        *(undefined8 *)(lVar33 + uVar32 * 8) = uVar26;
        if (plVar24 != (long *)0x0) {
          (**(code **)(*plVar24 + 8))();
        }
        uVar32 = uVar32 + 1;
      } while (uVar32 < *(uint *)((long)param_1 + lVar37 * 0xc + 0x164));
    }
    lVar37 = lVar37 + 1;
  } while (lVar37 != 4);
  lVar33 = 0x80;
  __Znwm();
  pppppuStack_850 = (undefined *****)&PTR_DAT_110ae5a70;
  lVar37 = lVar33;
  puStack_848 = param_1;
  pppppuStack_838 = (undefined *****)&pppppuStack_850;
  func_0x000109fcbeb0();
  *(undefined8 **)(lVar37 + 0x20) = puStack_910;
  *(undefined8 *)(lVar37 + 0x28) = 0x32aaaba7;
  *(undefined8 *)(lVar37 + 0x38) = 0;
  *(undefined8 *)(lVar37 + 0x30) = 0;
  *(undefined8 *)(lVar37 + 0x48) = 0;
  *(undefined8 *)(lVar37 + 0x40) = 0;
  *(undefined8 *)(lVar37 + 0x58) = 0;
  *(undefined8 *)(lVar37 + 0x50) = 0;
  *(undefined8 *)(lVar37 + 0x68) = 0;
  *(undefined8 *)(lVar37 + 0x60) = 0;
  *(undefined8 *)(lVar37 + 0x78) = 0;
  *(undefined8 *)(lVar37 + 0x70) = 0;
  if ((undefined ******)pppppuStack_838 == &pppppuStack_850) {
    lVar37 = 0x20;
LAB_10924bba8:
    (**(code **)((long)*pppppuStack_838 + lVar37))();
  }
  else if ((undefined ******)pppppuStack_838 != (undefined ******)0x0) {
    lVar37 = 0x28;
    goto LAB_10924bba8;
  }
  func_0x00010924c278(param_1 + 0x112,lVar33);
  uVar26 = 0xd8;
  __Znwm(0xd8);
  pppppuStack_850 = (undefined *****)&PTR_FUN_110ae5b60;
  puStack_848 = param_1;
  pppppuStack_838 = (undefined *****)&pppppuStack_850;
  func_0x000109fccda0();
  if ((undefined ******)pppppuStack_838 == &pppppuStack_850) {
    lVar37 = 0x20;
  }
  else {
    if ((undefined ******)pppppuStack_838 == (undefined ******)0x0) goto LAB_10924bc14;
    lVar37 = 0x28;
  }
  (**(code **)((long)*pppppuStack_838 + lVar37))();
LAB_10924bc14:
  func_0x00010924c250(param_1 + 0x111,uVar26);
  if (alStack_880[0] != 0) {
    FUN_10924a39c(alStack_880);
  }
  pppppuVar29 = &ppppuStack_860;
  FUN_10924a26c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    auVar40._8_8_ = uVar26;
    auVar40._0_8_ = param_1;
    return auVar40;
  }
  ___stack_chk_fail();
  uVar32 = 0;
  FUN_10924c30c(param_1 + 0x298);
  func_0x00010924f92c(param_1 + 0x296);
  func_0x00010924f92c(param_1 + 0x294);
  if (param_1[0x291] != 0) {
    param_1[0x292] = param_1[0x291];
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x289);
  FUN_10924bf80(param_1 + 0x263);
  if (*(char *)(param_1 + 0x120) == '\x01') {
    FUN_10924a26c(param_1 + 0x11e);
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x116);
  func_0x000109fcab78(param_1);
  pppppuVar27 = pppppuVar29;
  __Unwind_Resume();
  uStack_970 = 0x1448;
  uStack_968 = 0x1318;
  pcStack_948 = FUN_10924be68;
  ppppuVar30 = pppppuVar27[1];
  lVar37 = (long)ppppuVar30 - (long)*pppppuVar27 >> 3;
  bVar12 = uVar32 < (ulong)(lVar37 * -0x5555555555555555);
  ppppuVar35 = (undefined ****)(uVar32 + lVar37 * 0x5555555555555555);
  ppppuStack_960 = (undefined ****)pppppuVar29;
  puStack_958 = param_1;
  puStack_950 = &stack0xfffffffffffffff0;
  if (!bVar12 && ppppuVar35 != (undefined ****)0x0) {
    ppppuVar11 = (undefined ****)auStack_9b0;
    uStack_980 = 0x14b0;
    pppuStack_978 = (undefined ***)0x14a0;
    uStack_970 = 0x1448;
    uStack_968 = 0x1318;
    pcStack_948 = FUN_10924be68;
    ppuVar39 = &puStack_950;
    pppppuVar29 = (undefined *****)pppppuVar27[1];
    if (ppppuVar35 <=
        (undefined ****)(((long)pppppuVar27[2] - (long)pppppuVar29 >> 3) * -0x5555555555555555)) {
      lVar37 = 0;
      pppppuVar28 = pppppuVar27;
      if (ppppuVar35 != (undefined ****)0x0) {
        uVar32 = ((long)ppppuVar35 * 0x18 - 0x18U) / 0x18;
        lVar37 = uVar32 * 0x18 + 0x18;
        pppppuVar28 = pppppuVar29;
        _bzero(pppppuVar29,lVar37);
        pppppuVar29 = pppppuVar29 + uVar32 * 3 + 3;
      }
      pppppuVar27[1] = (undefined ****)pppppuVar29;
      auVar42._8_8_ = lVar37;
      auVar42._0_8_ = pppppuVar28;
      return auVar42;
    }
    lVar37 = (long)pppppuVar29 - (long)*pppppuVar27;
    uVar32 = (long)ppppuVar35 + (lVar37 >> 3) * -0x5555555555555555;
    if (uVar32 < 0xaaaaaaaaaaaaaab) {
      lVar33 = (long)pppppuVar27[2] - (long)*pppppuVar27 >> 3;
      uVar13 = lVar33 * 0x5555555555555556;
      if (uVar13 < uVar32 || uVar13 - uVar32 == 0) {
        uVar13 = uVar32;
      }
      if (0x555555555555554 < (ulong)(lVar33 * -0x5555555555555555)) {
        uVar13 = 0xaaaaaaaaaaaaaaa;
      }
      ppppuStack_988 = (undefined ****)pppppuVar27;
      if (uVar13 == 0) {
        pppppuVar29 = (undefined *****)0x0;
      }
      else {
        pppppuVar29 = pppppuVar27;
        FUN_10924f4c0();
      }
      lVar37 = (long)pppppuVar29 + lVar37;
      lVar33 = (((long)ppppuVar35 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
      _bzero(lVar37,lVar33);
      ppppuVar31 = *pppppuVar27;
      ppppuVar35 = (undefined ****)(lVar37 - ((long)pppppuVar27[1] - (long)ppppuVar31));
      _memcpy(ppppuVar35);
      pppuStack_9a8 = (undefined ***)*pppppuVar27;
      *pppppuVar27 = ppppuVar35;
      pppppuVar27[1] = (undefined ****)(lVar37 + lVar33);
      pppuStack_990 = (undefined ***)pppppuVar27[2];
      pppppuVar27[2] = (undefined ****)(pppppuVar29 + uVar13 * 3);
      ppppuVar30 = &pppuStack_9a8;
      uVar26 = 0x10924f490;
      pppuStack_9a0 = pppuStack_9a8;
      pppuStack_998 = pppuStack_9a8;
    }
    else {
      ppppuVar31 = ppppuVar35;
      FUN_10924f4ac();
      pcStack_9b8 = FUN_10924f4ac;
      ppppuVar30 = (undefined ****)&DAT_10f62a4d8;
      ppuStack_9c0 = ppuVar39;
      func_0x000104c4f6cc();
      ppppuVar11 = &pppuStack_9e0;
      pcStack_9c8 = FUN_10924f4c0;
      ppuVar39 = &puStack_9d0;
      pppuStack_9e0 = (undefined ***)ppppuVar35;
      ppppuStack_9d8 = (undefined ****)pppppuVar27;
      if (ppppuVar31 < (undefined ****)0xaaaaaaaaaaaaaab) {
        lVar37 = (long)ppppuVar31 * 0x18;
        puStack_9d0 = (undefined1 *)&ppuStack_9c0;
        __Znwm(lVar37);
        auVar43._8_8_ = ppppuVar31;
        auVar43._0_8_ = lVar37;
        return auVar43;
      }
      uVar26 = 0x10924f504;
      puStack_9d0 = (undefined1 *)&ppuStack_9c0;
      func_0x000104c4f740();
    }
    *(undefined *****)((long)ppppuVar11 + -0x20) = ppppuVar35;
    *(undefined ******)((long)ppppuVar11 + -0x18) = pppppuVar27;
    *(undefined1 ***)((long)ppppuVar11 + -0x10) = ppuVar39;
    *(undefined8 *)((long)ppppuVar11 + -8) = uVar26;
    func_0x00010924f534();
    if (*ppppuVar30 != (undefined ***)0x0) {
      __ZdlPv();
    }
    auVar44._8_8_ = ppppuVar31;
    auVar44._0_8_ = ppppuVar30;
    return auVar44;
  }
  pppppuVar29 = pppppuVar27;
  if (bVar12) {
    ppppuVar35 = *pppppuVar27 + uVar32 * 3;
    while (ppppuVar30 != ppppuVar35) {
      ppppuVar30 = ppppuVar30 + -3;
      pppppuVar29 = (undefined *****)&pppuStack_978;
      pppuStack_978 = (undefined ***)ppppuVar30;
      FUN_10924f584(pppppuVar29);
    }
    pppppuVar27[1] = ppppuVar35;
  }
  auVar41._8_8_ = uVar32;
  auVar41._0_8_ = pppppuVar29;
  return auVar41;
}



/* Entry: 10924be68; end: 10924bf7f;  */

/* WARNING: Possible PIC construction at 0x00010924f48c: Changing call to branch */

undefined1  [16] FUN_10924be68(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 **ppuVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulong uStack_a0;
  ulong *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined1 auStack_70 [8];
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong *puStack_48;
  
  uVar7 = param_1[1];
  lVar5 = (long)(uVar7 - *param_1) >> 3;
  bVar2 = param_2 < (ulong)(lVar5 * -0x5555555555555555);
  uVar9 = param_2 + lVar5 * 0x5555555555555555;
  if (bVar2 || uVar9 == 0) {
    puVar4 = param_1;
    if (bVar2) {
      uVar9 = *param_1 + param_2 * 0x18;
      for (; uVar7 != uVar9; uVar7 = uVar7 - 0x18) {
        puVar4 = (ulong *)&stack0xffffffffffffffc8;
        FUN_10924f584(puVar4);
      }
      param_1[1] = uVar9;
    }
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = puVar4;
    return auVar12;
  }
  puVar1 = (ulong *)auStack_70;
  ppuVar10 = (undefined1 **)&stack0xfffffffffffffff0;
  puVar4 = (ulong *)param_1[1];
  if ((ulong)(((long)(param_1[2] - (long)puVar4) >> 3) * -0x5555555555555555) < uVar9) {
    lVar5 = (long)puVar4 - *param_1;
    uVar7 = uVar9 + (lVar5 >> 3) * -0x5555555555555555;
    if (uVar7 < 0xaaaaaaaaaaaaaab) {
      lVar6 = (long)(param_1[2] - *param_1) >> 3;
      uVar8 = lVar6 * 0x5555555555555556;
      if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
        uVar8 = uVar7;
      }
      if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
        uVar8 = 0xaaaaaaaaaaaaaaa;
      }
      puStack_48 = param_1;
      if (uVar8 == 0) {
        puVar4 = (ulong *)0x0;
      }
      else {
        puVar4 = param_1;
        FUN_10924f4c0();
      }
      lVar5 = (long)puVar4 + lVar5;
      lVar6 = ((uVar9 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
      _bzero(lVar5,lVar6);
      uVar7 = *param_1;
      uVar9 = lVar5 - (param_1[1] - uVar7);
      _memcpy(uVar9);
      uStack_68 = *param_1;
      *param_1 = uVar9;
      param_1[1] = lVar5 + lVar6;
      uStack_50 = param_1[2];
      param_1[2] = (ulong)(puVar4 + uVar8 * 3);
      puVar4 = &uStack_68;
      uVar11 = 0x10924f490;
      uStack_60 = uStack_68;
      uStack_58 = uStack_68;
    }
    else {
      uVar7 = uVar9;
      FUN_10924f4ac();
      pcStack_78 = FUN_10924f4ac;
      puVar4 = (ulong *)&DAT_10f62a4d8;
      ppuStack_80 = ppuVar10;
      func_0x000104c4f6cc();
      puVar1 = &uStack_a0;
      pcStack_88 = FUN_10924f4c0;
      ppuVar10 = &puStack_90;
      uStack_a0 = uVar9;
      puStack_98 = param_1;
      if (uVar7 < 0xaaaaaaaaaaaaaab) {
        lVar5 = uVar7 * 0x18;
        puStack_90 = (undefined1 *)&ppuStack_80;
        __Znwm(lVar5);
        auVar14._8_8_ = uVar7;
        auVar14._0_8_ = lVar5;
        return auVar14;
      }
      uVar11 = 0x10924f504;
      puStack_90 = (undefined1 *)&ppuStack_80;
      func_0x000104c4f740();
    }
    *(ulong *)((long)puVar1 + -0x20) = uVar9;
    *(ulong **)((long)puVar1 + -0x18) = param_1;
    *(undefined1 ***)((long)puVar1 + -0x10) = ppuVar10;
    *(undefined8 *)((long)puVar1 + -8) = uVar11;
    func_0x00010924f534();
    if (*puVar4 != 0) {
      __ZdlPv();
    }
    auVar15._8_8_ = uVar7;
    auVar15._0_8_ = puVar4;
    return auVar15;
  }
  lVar5 = 0;
  puVar3 = param_1;
  if (uVar9 != 0) {
    uVar7 = (uVar9 * 0x18 - 0x18) / 0x18;
    lVar5 = uVar7 * 0x18 + 0x18;
    puVar3 = puVar4;
    _bzero(puVar4,lVar5);
    puVar4 = puVar4 + uVar7 * 3 + 3;
  }
  param_1[1] = (ulong)puVar4;
  auVar13._8_8_ = lVar5;
  auVar13._0_8_ = puVar3;
  return auVar13;
}



/* Entry: 10924bf80; end: 10924bfc7;  */

void FUN_10924bf80(long param_1)

{
  func_0x00010924f7c4(param_1 + 0x100);
  func_0x00010924f80c(param_1 + 0xd0);
  func_0x00010924f854(param_1 + 0xa0);
  func_0x00010924f89c(param_1 + 0x70);
  func_0x00010924f8e4(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 10924bfc8; end: 10924c24f;  */

long * FUN_10924bfc8(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lStack_60;
  undefined8 *puStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10925341c(&puStack_58,param_1[0x294]);
  lVar6 = param_1[0x114];
  lVar4 = param_1[0x113];
  while (lVar6 != lVar4) {
    lVar6 = lVar6 + -0x18;
    lStack_60 = lVar6;
    FUN_10924f584(&lStack_60);
  }
  param_1[0x114] = lVar4;
  FUN_10924c250(param_1 + 0x111,0);
  func_0x00010924c278(param_1 + 0x112,0);
  FUN_10924c2a0(param_1);
  FUN_10924c30c(param_1 + 0x298,0);
  if (puStack_58 != (undefined8 *)0x0) {
    (*(code *)puStack_58[2])(auStack_50);
    if (puStack_58 != (undefined8 *)0x0) {
      (*(code *)*puStack_58)(auStack_50);
    }
  }
  while( true ) {
    plVar5 = (long *)param_1[0x295];
    param_1[0x295] = 0;
    param_1[0x294] = 0;
    if (plVar5 != (long *)0x0) {
      plVar3 = plVar5 + 1;
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    lVar4 = 0;
    FUN_10924c30c(param_1 + 0x298);
    func_0x00010924f92c(param_1 + 0x296);
    func_0x00010924f92c(param_1 + 0x294);
    if (param_1[0x291] != 0) {
      param_1[0x292] = param_1[0x291];
      __ZdlPv();
    }
    __ZNSt3__15mutexD1Ev(param_1 + 0x289);
    func_0x00010924f7c4(param_1 + 0x283);
    func_0x00010924f80c(param_1 + 0x27d);
    func_0x00010924f854(param_1 + 0x277);
    func_0x00010924f89c(param_1 + 0x271);
    func_0x00010924f8e4(param_1 + 0x26b);
    __ZNSt3__15mutexD1Ev(param_1 + 0x263);
    if ((char)param_1[0x120] == '\x01') {
      FUN_10924a26c(param_1 + 0x11e);
    }
    __ZNSt3__15mutexD1Ev(param_1 + 0x116);
    plVar5 = param_1;
    func_0x000109fcab78();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) break;
    ___stack_chk_fail();
    if ((int)lVar4 == 0) {
      __Unwind_Resume(plVar5);
      func_0x000104bd46a0();
      plVar3 = (long *)*plVar5;
      *plVar5 = lVar4;
      if (plVar3 != (long *)0x0) {
        func_0x000109fccfbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        return plVar3;
      }
      return (long *)0x0;
    }
    if (puStack_58 != (undefined8 *)0x0) {
      (*(code *)puStack_58[2])(auStack_50);
      if (puStack_58 != (undefined8 *)0x0) {
        (*(code *)*puStack_58)(auStack_50);
      }
    }
    ___cxa_begin_catch();
    if ((int)lVar4 == 2) {
      (**(code **)(*plVar5 + 0x10))();
      FUN_10924a40c(4,&UNK_10f55f038);
    }
    else {
      FUN_10924a40c(4,&UNK_10f55efe3);
    }
    ___cxa_end_catch();
  }
  return param_1;
}



/* Entry: 10924c250; end: 10924c29f;  */

void FUN_10924c250(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x000109fccfbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10924c2a0; end: 10924c30b;  */

void FUN_10924c2a0(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x1448);
  plVar1 = *(long **)(param_1 + 0x1488);
  plVar2 = *(long **)(param_1 + 0x1490);
  if (plVar1 != plVar2) {
    do {
      if ((long *)*plVar1 != (long *)0x0) {
        (**(code **)(*(long *)*plVar1 + 8))();
      }
      plVar1 = plVar1 + 1;
    } while (plVar1 != plVar2);
    plVar1 = *(long **)(param_1 + 0x1488);
  }
  *(long **)(param_1 + 0x1490) = plVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x1448);
  return;
}



/* Entry: 10924c30c; end: 10924c353;  */

void FUN_10924c30c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    __ZNSt3__15mutexD1Ev(lVar1 + 0x30);
    FUN_10924a570(lVar1 + 0x18,*(undefined8 *)(lVar1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10924c354; end: 10924c357;  */

long * FUN_10924c354(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lStack_60;
  undefined8 *puStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10925341c(&puStack_58,param_1[0x294]);
  lVar6 = param_1[0x114];
  lVar4 = param_1[0x113];
  while (lVar6 != lVar4) {
    lVar6 = lVar6 + -0x18;
    lStack_60 = lVar6;
    FUN_10924f584(&lStack_60);
  }
  param_1[0x114] = lVar4;
  FUN_10924c250(param_1 + 0x111,0);
  func_0x00010924c278(param_1 + 0x112,0);
  FUN_10924c2a0(param_1);
  FUN_10924c30c(param_1 + 0x298,0);
  if (puStack_58 != (undefined8 *)0x0) {
    (*(code *)puStack_58[2])(auStack_50);
    if (puStack_58 != (undefined8 *)0x0) {
      (*(code *)*puStack_58)(auStack_50);
    }
  }
  while( true ) {
    plVar5 = (long *)param_1[0x295];
    param_1[0x295] = 0;
    param_1[0x294] = 0;
    if (plVar5 != (long *)0x0) {
      plVar3 = plVar5 + 1;
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    lVar4 = 0;
    FUN_10924c30c(param_1 + 0x298);
    func_0x00010924f92c(param_1 + 0x296);
    func_0x00010924f92c(param_1 + 0x294);
    if (param_1[0x291] != 0) {
      param_1[0x292] = param_1[0x291];
      __ZdlPv();
    }
    __ZNSt3__15mutexD1Ev(param_1 + 0x289);
    func_0x00010924f7c4(param_1 + 0x283);
    func_0x00010924f80c(param_1 + 0x27d);
    func_0x00010924f854(param_1 + 0x277);
    func_0x00010924f89c(param_1 + 0x271);
    func_0x00010924f8e4(param_1 + 0x26b);
    __ZNSt3__15mutexD1Ev(param_1 + 0x263);
    if ((char)param_1[0x120] == '\x01') {
      FUN_10924a26c(param_1 + 0x11e);
    }
    __ZNSt3__15mutexD1Ev(param_1 + 0x116);
    plVar5 = param_1;
    func_0x000109fcab78();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) break;
    ___stack_chk_fail();
    if ((int)lVar4 == 0) {
      __Unwind_Resume(plVar5);
      func_0x000104bd46a0();
      plVar3 = (long *)*plVar5;
      *plVar5 = lVar4;
      if (plVar3 != (long *)0x0) {
        func_0x000109fccfbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        return plVar3;
      }
      return (long *)0x0;
    }
    if (puStack_58 != (undefined8 *)0x0) {
      (*(code *)puStack_58[2])(auStack_50);
      if (puStack_58 != (undefined8 *)0x0) {
        (*(code *)*puStack_58)(auStack_50);
      }
    }
    ___cxa_begin_catch();
    if ((int)lVar4 == 2) {
      (**(code **)(*plVar5 + 0x10))();
      FUN_10924a40c(4,&UNK_10f55f038);
    }
    else {
      FUN_10924a40c(4,&UNK_10f55efe3);
    }
    ___cxa_end_catch();
  }
  return param_1;
}



/* Entry: 10924c358; end: 10924c36b;  */

void FUN_10924c358(void)

{
  FUN_10924bfc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10924c36c; end: 10924c583;  */

void FUN_10924c36c(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 auStack_90 [16];
  char cStack_80;
  undefined2 uStack_74;
  undefined1 uStack_72;
  undefined8 uStack_70;
  long *plStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [16];
  char cStack_48;
  
  plVar2 = (long *)(param_2 + 0x1308);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = *plVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uStack_72 = 0;
  uStack_74 = 0;
  auStack_90[0] = 0;
  cStack_80 = '\0';
  lVar6 = 0x2e0;
  __Znwm();
  auStack_58[0] = 0;
  cStack_48 = '\0';
  FUN_109253078();
  FUN_1092315a8(&uStack_70,param_2 + 8);
  uStack_60 = 0xffffffff;
  *param_1 = lVar6;
  puVar7 = (undefined8 *)0x38;
  __Znwm();
  plVar2 = plStack_68;
  uVar5 = uStack_70;
  uStack_70 = 0;
  plStack_68 = (long *)0x0;
  puVar7[2] = 0;
  puVar7[1] = 0;
  *puVar7 = &PTR_FUN_110ae5c50;
  puVar7[3] = lVar6;
  puVar7[5] = plVar2;
  puVar7[4] = uVar5;
  puVar7[6] = 0xffffffff;
  param_1[1] = (long)puVar7;
  FUN_1092500d8(param_1,lVar6 + 8,lVar6);
  plVar2 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  if (cStack_48 == '\x01') {
    FUN_10924a26c(auStack_58);
  }
  FUN_109231548(param_2,param_1);
  if (cStack_80 == '\x01') {
    FUN_10924a26c(auStack_90);
  }
  return;
}



/* Entry: 10924c584; end: 10924c593;  */

void FUN_10924c584(undefined8 *param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_3 != (undefined *)0x0) {
    ppuVar3 = &PTR___tlv_bootstrap_11340dcf0;
    (*(code *)PTR___tlv_bootstrap_11340dcf0)();
    puVar5 = *ppuVar3;
    *ppuVar3 = param_3;
    FUN_10924a2ac(&uStack_60,param_3 + 0x28);
    if ((param_3[0x2d9] & 1) == 0) {
      lVar6 = *(long *)(param_3 + 0x38);
      (**(code **)(lVar6 + 0x950))(0xcf5,1);
      (**(code **)(lVar6 + 0x950))(0xd05,1);
      if (*(char *)(lVar6 + 0x45) == '\x01') {
        _glEnable(0x8d69);
      }
      param_3[0x2d9] = 1;
    }
    uVar1 = uStack_60;
    uStack_60 = 0;
    puVar2 = (undefined8 *)0x28;
    __Znwm();
    *puVar2 = uVar1;
    puVar2[1] = uStack_58;
    puVar2[3] = uStack_48;
    puVar2[2] = uStack_50;
    puVar2[4] = puVar5;
    *param_1 = &PTR_DAT_110ae6558;
    param_1[1] = puVar2;
    return;
  }
  ppuVar3 = &PTR___tlv_bootstrap_11340dcf0;
  (*(code *)PTR___tlv_bootstrap_11340dcf0)();
  puVar5 = *ppuVar3;
  ppuVar4 = ppuVar3;
  FUN_109374fe0();
  if (ppuVar4 != (undefined **)0x0) {
    _CFRetain(ppuVar4);
  }
  *ppuVar3 = (undefined *)0x0;
  FUN_109375044(0);
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = puVar5;
  puVar2[1] = ppuVar4;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *param_1 = &PTR_FUN_110ae6570;
  param_1[1] = puVar2;
  return;
}



/* Entry: 10924c594; end: 10924c5b7;  */

undefined * FUN_10924c594(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340dcf0;
  (*(code *)PTR___tlv_bootstrap_11340dcf0)();
  return *ppuVar1;
}



/* Entry: 10924c5b8; end: 10924c7e3;  */

void FUN_10924c5b8(long *param_1,long param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  
  if ((*param_3 == 0) || (*(char *)(param_2 + 0x98d) != '\x01')) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  lVar3 = 0x80;
  __Znwm();
  FUN_109265978();
  FUN_1092315a8(&lStack_60,param_2 + 8);
  uStack_50 = 0xffffffff;
  *param_1 = lVar3;
  plVar4 = (long *)0x38;
  __Znwm();
  plVar5 = plStack_58;
  lVar6 = lStack_60;
  plVar7 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar7 = 0;
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  *plVar4 = (long)&PTR_FUN_110ae5ca0;
  plVar4[3] = lVar3;
  plVar4[5] = (long)plVar5;
  plVar4[4] = lVar6;
  plVar4[6] = 0xffffffff;
  param_1[1] = (long)plVar4;
  if (*(long *)(lVar3 + 0x10) == 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar5 = plVar4 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(long *)(lVar3 + 8) = lVar3;
    *(long **)(lVar3 + 0x10) = plVar4;
  }
  else {
    if (*(long *)(*(long *)(lVar3 + 0x10) + 8) != -1) goto LAB_10924c6fc;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar5 = plVar4 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(long *)(lVar3 + 8) = lVar3;
    *(long **)(lVar3 + 0x10) = plVar4;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar6 = *plVar7;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_10924c6fc:
  plVar5 = plStack_58;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = (long *)param_1[1];
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x18))(plVar5,&PTR_DAT_110ae5ce0);
  }
  param_2 = param_2 + 0x820;
  func_0x000109fcbf14(param_2,*param_1);
  *(int *)(plVar5 + 2) = (int)param_2;
  return;
}



/* Entry: 10924c7e4; end: 10924ca7b;  */

/* WARNING: Removing unreachable block (ram,0x00010924c97c) */
/* WARNING: Removing unreachable block (ram,0x00010924c980) */
/* WARNING: Removing unreachable block (ram,0x00010924c988) */
/* WARNING: Removing unreachable block (ram,0x00010924c990) */
/* WARNING: Removing unreachable block (ram,0x00010924c994) */

void FUN_10924c7e4(long *param_1,long param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lStack_60;
  long *plStack_58;
  
  if ((*param_3 == 0) || (*(long *)(*param_3 + 0x18) != param_2)) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  FUN_10922d97c(&lStack_60,param_2);
  if (lStack_60 == 0) {
LAB_10924c9d0:
    *param_1 = 0;
    param_1[1] = 0;
    goto LAB_10924c9ec;
  }
  lVar7 = *param_3;
  lVar6 = lVar7 + 0x48;
  plVar4 = param_3;
  FUN_1092504e4();
  uVar5 = SUB84(plVar4,0);
  if (lVar6 == 0) {
    func_0x000109fcd53c(*(undefined8 *)(*(long *)(lVar7 + 0x40) + 0x888));
    lVar6 = lVar7 + 0x48;
    FUN_1092504e4();
    uVar5 = SUB84(param_3,0);
    if (lVar6 == 0) goto LAB_10924c9d0;
  }
  plVar4 = plStack_58;
  lVar7 = lStack_60;
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  *param_1 = lVar6;
  plVar3 = (long *)0x38;
  __Znwm();
  plVar8 = plVar3 + 1;
  *plVar8 = 0;
  *plVar3 = (long)&PTR_FUN_110ae5d00;
  plVar3[2] = 0;
  plVar3[3] = lVar6;
  plVar3[4] = lVar7;
  plVar3[5] = (long)plVar4;
  plVar3[6] = CONCAT44(0xffffffff,uVar5);
  param_1[1] = (long)plVar3;
  if (*(long *)(lVar6 + 0x10) == 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4 = plVar3 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(long *)(lVar6 + 8) = lVar6;
    *(long **)(lVar6 + 0x10) = plVar3;
LAB_10924c948:
    do {
      lVar6 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  else if (*(long *)(*(long *)(lVar6 + 0x10) + 8) == -1) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4 = plVar3 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(long *)(lVar6 + 8) = lVar6;
    *(long **)(lVar6 + 0x10) = plVar3;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    goto LAB_10924c948;
  }
  plVar4 = (long *)param_1[1];
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x18))(plVar4,&PTR_DAT_110ae5d40);
  }
  param_2 = param_2 + 0x820;
  func_0x000109fcbf14(param_2,*param_1);
  *(int *)((long)plVar4 + 0x14) = (int)param_2;
LAB_10924c9ec:
  plVar4 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar3 = plStack_58 + 1;
    do {
      lVar6 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10924ca7c; end: 10924d087;  */

void FUN_10924ca7c(undefined8 *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 *puVar8;
  uint *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *extraout_x8;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  ulong uVar20;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long *plVar21;
  undefined8 *unaff_x24;
  uint *puVar22;
  undefined8 *puVar23;
  long lStack_150;
  long *plStack_148;
  undefined4 uStack_140;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  long *plStack_120;
  long lStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  long lStack_d8;
  undefined8 *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  uint uStack_b4;
  undefined8 *puStack_b0;
  long *plStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined ***pppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_3 == 0) {
LAB_10924cad8:
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uVar3 = *(uint *)(param_3 + 1);
    puVar22 = (uint *)(ulong)uVar3;
    unaff_x22 = param_3;
    if ((*(long *)(*param_3 + 0x18) != param_2 || uVar3 == 0) || 7 < *(uint *)(param_3 + 2))
    goto LAB_10924cad8;
    uVar4 = *(uint *)((long)param_3 + 0xc);
    puVar8 = (undefined8 *)0xd8;
    plVar11 = param_3;
    puStack_e0 = param_1;
    __Znwm();
    ppuStack_88 = &PTR_DAT_110ae5d60;
    pppuStack_70 = &ppuStack_88;
    uStack_78 = (ulong)uVar4;
    puVar8[2] = 0;
    puVar8[3] = param_2;
    *(undefined4 *)(puVar8 + 4) = 0x18;
    lVar15 = *param_3;
    puVar8[6] = param_3[1];
    puVar8[5] = lVar15;
    lVar15 = param_3[2];
    *puVar8 = &PTR_FUN_110ae5df0;
    puVar8[1] = 0;
    puVar8[7] = lVar15;
    puVar8[8] = param_2;
    puVar8[9] = param_2 + 0x810;
    puStack_e8 = puVar8 + 10;
    *puStack_e8 = 0x32aaaba7;
    plVar12 = puVar8 + 0x12;
    unaff_x24 = puVar8 + 0x15;
    puVar8[0x16] = 0;
    *unaff_x24 = 0;
    puVar8[0xc] = 0;
    puVar8[0xb] = 0;
    puVar8[0xe] = 0;
    puVar8[0xd] = 0;
    puVar8[0x10] = 0;
    puVar8[0xf] = 0;
    puVar8[0x12] = 0;
    puVar8[0x11] = 0;
    puVar8[0x14] = 0;
    puVar8[0x13] = 0;
    puVar8[0x18] = 0;
    puVar8[0x17] = 0;
    puVar8[0x1a] = 0;
    puVar8[0x19] = 0;
    puVar9 = puVar22;
    lStack_d8 = param_2;
    puStack_d0 = unaff_x24;
    plStack_90 = plVar12;
    lStack_80 = param_2;
    FUN_109250ab8();
    puStack_b0 = (undefined8 *)puVar8[0x12];
    puVar2 = (undefined8 *)puVar8[0x13];
    puVar23 = (undefined8 *)((long)puVar9 + ((long)puStack_b0 - (long)puVar2));
    puVar13 = puStack_b0;
    puVar16 = puVar23;
    if (puVar2 != puStack_b0) {
      do {
        uVar19 = *puVar13;
        *puVar13 = 0;
        *puVar16 = uVar19;
        puVar16[1] = puVar13[1];
        puVar13 = puVar13 + 2;
        puVar16 = puVar16 + 2;
      } while (puVar13 != puVar2);
      do {
        FUN_1092508cc(puStack_b0);
        puStack_b0 = puStack_b0 + 2;
      } while (puStack_b0 != puVar2);
      puStack_b0 = (undefined8 *)*plVar12;
    }
    puVar8[0x12] = puVar23;
    puVar8[0x13] = puVar9;
    uStack_98 = puVar8[0x14];
    puVar8[0x14] = puVar9 + (long)plVar11 * 4;
    plStack_a8 = puStack_b0;
    puStack_a0 = puStack_b0;
    func_0x000109250aec(&puStack_b0);
    func_0x0001056c5718(unaff_x24,puVar22);
    func_0x0001056c5718(puVar8 + 0x18);
    uStack_b4 = 0;
    do {
      if (pppuStack_70 == (undefined ***)0x0) {
        func_0x000104c501e4();
LAB_10924cf98:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10924cf9c);
        (*pcVar7)();
      }
      (*(code *)(*pppuStack_70)[6])(&lStack_c8);
      lVar15 = lStack_c8;
      lStack_c0 = -1;
      plVar11 = (long *)puVar8[0x13];
      if (plVar11 < (long *)puVar8[0x14]) {
        lStack_c8 = 0;
        *plVar11 = lVar15;
        plVar11[1] = -1;
        plVar11 = plVar11 + 2;
      }
      else {
        lVar15 = (long)plVar11 - *plVar12;
        uVar1 = (lVar15 >> 4) + 1;
        if (uVar1 >> 0x3c != 0) {
          FUN_109250aa4();
          goto LAB_10924cf98;
        }
        uVar17 = (long)puVar8[0x14] - *plVar12;
        uVar20 = (long)uVar17 >> 3;
        if (uVar20 <= uVar1) {
          uVar20 = uVar1;
        }
        if (0x7fffffffffffffef < uVar17) {
          uVar20 = 0xfffffffffffffff;
        }
        plStack_90 = plVar12;
        FUN_109250ab8();
        lVar14 = lStack_c8;
        puVar23 = (undefined8 *)puVar8[0x12];
        puVar16 = (undefined8 *)puVar8[0x13];
        plVar11 = (long *)(uVar20 + lVar15);
        lStack_c8 = 0;
        *plVar11 = lVar14;
        plVar11[1] = lStack_c0;
        puVar2 = (undefined8 *)((long)plVar11 + ((long)puVar23 - (long)puVar16));
        puVar13 = puVar23;
        puVar18 = puVar2;
        if ((long)puVar23 - (long)puVar16 != 0) {
          do {
            uVar19 = *puVar13;
            *puVar13 = 0;
            *puVar18 = uVar19;
            puVar18[1] = puVar13[1];
            puVar13 = puVar13 + 2;
            puVar18 = puVar18 + 2;
          } while (puVar13 != puVar16);
          do {
            FUN_1092508cc(puVar23);
            puVar23 = puVar23 + 2;
          } while (puVar23 != puVar16);
          puVar23 = (undefined8 *)*plVar12;
        }
        plVar11 = plVar11 + 2;
        puVar8[0x12] = puVar2;
        puVar8[0x13] = plVar11;
        uStack_98 = puVar8[0x14];
        puVar8[0x14] = uVar20 + (long)puVar22 * 0x10;
        puStack_b0 = puVar23;
        plStack_a8 = puVar23;
        puStack_a0 = puVar23;
        func_0x000109250aec(&puStack_b0);
        unaff_x24 = puStack_d0;
      }
      lVar15 = lStack_c8;
      puVar8[0x13] = plVar11;
      lStack_c8 = 0;
      if (lVar15 != 0) {
        FUN_109246718();
        __ZdlPv();
      }
      puVar22 = &uStack_b4;
      FUN_109231afc(unaff_x24);
      uStack_b4 = uStack_b4 + 1;
    } while (uStack_b4 < uVar3);
    FUN_1092315a8(&puStack_b0,lStack_d8 + 8);
    unaff_x23 = puStack_e0;
    puStack_a0 = (undefined8 *)CONCAT44(puStack_a0._4_4_,0xffffffff);
    *puStack_e0 = puVar8;
    unaff_x22 = (long *)0x38;
    __Znwm();
    plVar12 = plStack_a8;
    puVar13 = puStack_b0;
    unaff_x20 = unaff_x22 + 1;
    unaff_x22[2] = 0;
    *unaff_x20 = 0;
    puStack_b0 = (undefined8 *)0x0;
    plStack_a8 = (long *)0x0;
    *unaff_x22 = (long)&PTR_FUN_110ae5e50;
    unaff_x22[3] = (long)puVar8;
    unaff_x22[5] = (long)plVar12;
    unaff_x22[4] = (long)puVar13;
    unaff_x22[6] = 0xffffffff;
    unaff_x23[1] = unaff_x22;
    if (puVar8[2] == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(unaff_x20,0x10);
        if (bVar6) {
          *unaff_x20 = *unaff_x20 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar12 = unaff_x22 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar6) {
          *plVar12 = *plVar12 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      puVar8[1] = puVar8;
      puVar8[2] = unaff_x22;
LAB_10924ce4c:
      do {
        lVar15 = *unaff_x20;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(unaff_x20,0x10);
        if (bVar6) {
          *unaff_x20 = lVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*unaff_x22 + 0x10))(unaff_x22);
        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x22);
      }
    }
    else if (*(long *)(puVar8[2] + 8) == -1) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(unaff_x20,0x10);
        if (bVar6) {
          *unaff_x20 = *unaff_x20 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar12 = unaff_x22 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar6) {
          *plVar12 = *plVar12 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      puVar8[1] = puVar8;
      puVar8[2] = unaff_x22;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      goto LAB_10924ce4c;
    }
    plVar12 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar11 = plStack_a8 + 1;
      do {
        lVar15 = *plVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    if (pppuStack_70 == &ppuStack_88) {
      lVar15 = 0x20;
LAB_10924ced0:
      (**(code **)((long)*pppuStack_70 + lVar15))();
    }
    else if (pppuStack_70 != (undefined ***)0x0) {
      lVar15 = 0x28;
      goto LAB_10924ced0;
    }
    unaff_x19 = (long *)unaff_x23[1];
    if (unaff_x19 == (long *)0x0) {
      unaff_x19 = (long *)0x0;
    }
    else {
      (**(code **)(*unaff_x19 + 0x18))(unaff_x19,&PTR_DAT_110ae5e90);
    }
    param_2 = lStack_d8 + 0x820;
    func_0x000109fcbf14(param_2,*unaff_x23);
    *(int *)(unaff_x19 + 2) = (int)param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  FUN_1092323ec(unaff_x23);
  lVar15 = param_2;
  __Unwind_Resume();
  pcStack_f8 = FUN_10924d088;
  lVar10 = 0x70;
  puStack_130 = unaff_x24;
  puStack_128 = unaff_x23;
  plStack_120 = unaff_x22;
  lStack_118 = param_2;
  plStack_110 = unaff_x20;
  plStack_108 = unaff_x19;
  puStack_100 = &stack0xfffffffffffffff0;
  __Znwm();
  FUN_10926bc58();
  FUN_1092315a8(&lStack_150,lVar15 + 8);
  uStack_140 = 0xffffffff;
  *extraout_x8 = lVar10;
  plVar11 = (long *)0x38;
  __Znwm();
  plVar12 = plStack_148;
  lVar14 = lStack_150;
  plVar21 = plVar11 + 1;
  plVar11[2] = 0;
  *plVar21 = 0;
  lStack_150 = 0;
  plStack_148 = (long *)0x0;
  *plVar11 = (long)&PTR_FUN_110ae5eb0;
  plVar11[3] = lVar10;
  plVar11[5] = (long)plVar12;
  plVar11[4] = lVar14;
  plVar11[6] = 0xffffffff;
  extraout_x8[1] = (long)plVar11;
  if (*(long *)(lVar10 + 0x10) == 0) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = *plVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar12 = plVar11 + 2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = *plVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(long *)(lVar10 + 8) = lVar10;
    *(long **)(lVar10 + 0x10) = plVar11;
  }
  else {
    if (*(long *)(*(long *)(lVar10 + 0x10) + 8) != -1) goto LAB_10924d1b8;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = *plVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar12 = plVar11 + 2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = *plVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(long *)(lVar10 + 8) = lVar10;
    *(long **)(lVar10 + 0x10) = plVar11;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar14 = *plVar21;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar6) {
      *plVar21 = lVar14 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar14 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
  }
LAB_10924d1b8:
  plVar12 = plStack_148;
  if (plStack_148 != (long *)0x0) {
    plVar11 = plStack_148 + 1;
    do {
      lVar14 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_148 + 0x10))(plStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  plVar12 = (long *)extraout_x8[1];
  if (plVar12 == (long *)0x0) {
    plVar12 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar12 + 0x18))(plVar12,&PTR_DAT_110ae5ef0);
  }
  lVar15 = lVar15 + 0x820;
  func_0x000109fcbf14(lVar15,*extraout_x8);
  *(int *)(plVar12 + 2) = (int)lVar15;
  return;
}



/* Entry: 10924d088; end: 10924d297;  */

void FUN_10924d088(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  
  lVar3 = 0x70;
  __Znwm();
  FUN_10926bc58();
  FUN_1092315a8(&lStack_60,param_2 + 8);
  uStack_50 = 0xffffffff;
  *param_1 = lVar3;
  plVar4 = (long *)0x38;
  __Znwm();
  plVar5 = plStack_58;
  lVar6 = lStack_60;
  plVar7 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar7 = 0;
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  *plVar4 = (long)&PTR_FUN_110ae5eb0;
  plVar4[3] = lVar3;
  plVar4[5] = (long)plVar5;
  plVar4[4] = lVar6;
  plVar4[6] = 0xffffffff;
  param_1[1] = (long)plVar4;
  if (*(long *)(lVar3 + 0x10) == 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar5 = plVar4 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(long *)(lVar3 + 8) = lVar3;
    *(long **)(lVar3 + 0x10) = plVar4;
  }
  else {
    if (*(long *)(*(long *)(lVar3 + 0x10) + 8) != -1) goto LAB_10924d1b8;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar5 = plVar4 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(long *)(lVar3 + 8) = lVar3;
    *(long **)(lVar3 + 0x10) = plVar4;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar6 = *plVar7;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_10924d1b8:
  plVar5 = plStack_58;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = (long *)param_1[1];
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x18))(plVar5,&PTR_DAT_110ae5ef0);
  }
  param_2 = param_2 + 0x820;
  func_0x000109fcbf14(param_2,*param_1);
  *(int *)(plVar5 + 2) = (int)param_2;
  return;
}



/* Entry: 10924d298; end: 10924d4a3;  */

void FUN_10924d298(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lStack_50;
  long *plStack_48;
  undefined4 uStack_40;
  
  if ((*param_4 != 0) && (plVar3 = *(long **)(*param_4 + 8), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x40))();
  }
  puVar4 = (undefined8 *)0xa8;
  __Znwm();
  *(undefined4 *)(puVar4 + 4) = 6;
  puVar4[2] = 0;
  puVar4[3] = param_2;
  *puVar4 = &PTR_FUN_110ae7128;
  puVar4[1] = 0;
  puVar4[5] = param_2 + 0x930;
  puVar4[6] = 0;
  puVar4[7] = 0x32aaaba7;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0x3cb0b1bb;
  puVar4[0x11] = 0;
  puVar4[0x10] = 0;
  puVar4[0x13] = 0;
  puVar4[0x12] = 0;
  puVar4[0x14] = 0;
  FUN_1092315a8(&lStack_50,param_2 + 8);
  uStack_40 = 0xffffffff;
  *param_1 = puVar4;
  plVar5 = (long *)0x38;
  __Znwm();
  plVar3 = plStack_48;
  lVar7 = lStack_50;
  plVar6 = plVar5 + 1;
  plVar5[2] = 0;
  *plVar6 = 0;
  lStack_50 = 0;
  plStack_48 = (long *)0x0;
  *plVar5 = (long)&PTR_FUN_110ae5f10;
  plVar5[3] = (long)puVar4;
  plVar5[5] = (long)plVar3;
  plVar5[4] = lVar7;
  plVar5[6] = 0xffffffff;
  param_1[1] = plVar5;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = *plVar6 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar3 = plVar5 + 2;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = *plVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puVar4[1] = puVar4;
  puVar4[2] = plVar5;
  do {
    lVar7 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar7 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  plVar3 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar5 = plStack_48 + 1;
    do {
      lVar7 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  plVar3 = (long *)param_1[1];
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x18))(plVar3,&PTR_DAT_110ae5f50);
  }
  param_2 = param_2 + 0x820;
  func_0x000109fcbf14(param_2,*param_1);
  *(int *)(plVar3 + 2) = (int)param_2;
  return;
}



/* Entry: 10924d4a4; end: 10924d63f;  */

void FUN_10924d4a4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uStack_50;
  long *plStack_48;
  undefined4 uStack_40;
  
  puVar5 = (undefined8 *)0x88;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = param_2;
  *(undefined4 *)(puVar5 + 4) = 5;
  puVar5[5] = 0x32aaaba7;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  *puVar5 = &PTR_FUN_110ae6780;
  puVar5[0xe] = param_2 + 0x930;
  puVar5[0xf] = 0;
  *(undefined4 *)(puVar5 + 0x10) = 0;
  FUN_1092315a8(&uStack_50,param_2 + 8);
  uStack_40 = 0xffffffff;
  *param_1 = puVar5;
  puVar6 = (undefined8 *)0x38;
  __Znwm();
  plVar7 = plStack_48;
  uVar4 = uStack_50;
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  puVar6[2] = 0;
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_110ae5f70;
  puVar6[3] = puVar5;
  puVar6[5] = plVar7;
  puVar6[4] = uVar4;
  puVar6[6] = 0xffffffff;
  param_1[1] = puVar6;
  FUN_10924fb94(param_1,puVar5 + 1,puVar5);
  plVar7 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar7 + 0x18))(plVar7,&PTR_DAT_110ae5fb0);
  }
  param_2 = param_2 + 0x820;
  func_0x000109fcbf14(param_2,*param_1);
  *(int *)(plVar7 + 2) = (int)param_2;
  return;
}



/* Entry: 10924d640; end: 10924d73b;  */

void FUN_10924d640(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_58 [8];
  long *plStack_50;
  undefined4 uStack_48;
  
  uVar4 = 0x60;
  __Znwm(0x60);
  FUN_109245ca4();
  FUN_1092315a8(auStack_58,param_2 + 8);
  uStack_48 = 0xffffffff;
  FUN_109251294(param_1,uVar4,auStack_58);
  if (plStack_50 != (long *)0x0) {
    plVar1 = plStack_50 + 1;
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
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
    }
  }
  FUN_109251234(param_2,param_1);
  return;
}



/* Entry: 10924d73c; end: 10924d823;  */

void FUN_10924d73c(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined4 uStack_38;
  
  uVar4 = 0x60;
  __Znwm(0x60);
  FUN_109245b08();
  FUN_1092315a8(auStack_48,param_2 + 8);
  uStack_38 = 0xffffffff;
  FUN_109251294(param_1,uVar4,auStack_48);
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  FUN_109251234(param_2,param_1);
  return;
}



/* Entry: 10924d824; end: 10924d933;  */

void FUN_10924d824(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_58 [8];
  long *plStack_50;
  undefined4 uStack_48;
  
  func_0x000109fcac90();
  plVar1 = (long *)(param_2 + 0x1310);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar4 = 200;
  __Znwm(200);
  FUN_10926dd38();
  FUN_1092315a8(auStack_58,param_2 + 8);
  uStack_48 = 0xffffffff;
  FUN_1092515c8(param_1,uVar4,auStack_58);
  if (plStack_50 != (long *)0x0) {
    plVar1 = plStack_50 + 1;
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
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
    }
  }
  FUN_109251568(param_2,param_1);
  return;
}



/* Entry: 10924d934; end: 10924d9b3;  */

void FUN_10924d934(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lStack_50;
  long lStack_48;
  undefined1 uStack_39;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_39 = param_6;
  uStack_38 = param_5;
  uStack_34 = param_4;
  func_0x000109fcac90();
  plVar1 = (long *)(param_2 + 0x1310);
  do {
    lStack_48 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lStack_48 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lStack_50 = param_2;
  FUN_10924d9b4(param_1,param_2,&lStack_50,param_3,&uStack_34,&uStack_38,&uStack_39,&lStack_48);
  return;
}



/* Entry: 10924d9b4; end: 10924dad7;  */

void FUN_10924d9b4(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_78 [8];
  long *plStack_70;
  undefined4 uStack_68;
  
  uVar4 = 200;
  __Znwm(200);
  FUN_10926e758();
  FUN_1092315a8(auStack_78,param_2 + 8);
  uStack_68 = 0xffffffff;
  FUN_1092515c8(param_1,uVar4,auStack_78);
  if (plStack_70 != (long *)0x0) {
    plVar1 = plStack_70 + 1;
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
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    }
  }
  FUN_109251568(param_2,param_1);
  return;
}



/* Entry: 10924dad8; end: 10924dbe3;  */

void FUN_10924dad8(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_58 [8];
  long *plStack_50;
  undefined4 uStack_48;
  
  plVar1 = (long *)(param_2 + 0x1310);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar4 = 200;
  __Znwm(200);
  FUN_10926e648();
  FUN_1092315a8(auStack_58,param_2 + 8);
  uStack_48 = 0xffffffff;
  FUN_1092515c8(param_1,uVar4,auStack_58);
  if (plStack_50 != (long *)0x0) {
    plVar1 = plStack_50 + 1;
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
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
    }
  }
  FUN_109251568(param_2,param_1);
  return;
}



/* Entry: 10924dbe4; end: 10924dbf7;  */

void FUN_10924dbe4(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *extraout_x8;
  undefined8 uStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  
  puVar5 = &UNK_10f55f07b;
  FUN_109243bf8();
  lVar6 = 0x868;
  __Znwm();
  func_0x000109fc97ec();
  FUN_1092315a8(&uStack_60,puVar5 + 8);
  uStack_50 = 0xffffffff;
  *extraout_x8 = lVar6;
  puVar7 = (undefined8 *)0x38;
  __Znwm();
  plVar8 = plStack_58;
  uVar4 = uStack_60;
  uStack_60 = 0;
  plStack_58 = (long *)0x0;
  puVar7[2] = 0;
  puVar7[1] = 0;
  *puVar7 = &PTR_FUN_110ae6090;
  puVar7[3] = lVar6;
  puVar7[5] = plVar8;
  puVar7[4] = uVar4;
  puVar7[6] = 0xffffffff;
  extraout_x8[1] = (long)puVar7;
  FUN_109232f34(extraout_x8,lVar6 + 8,lVar6);
  plVar8 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = (long *)extraout_x8[1];
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar8 + 0x18))(plVar8,&PTR_DAT_110ae60d0);
  }
  puVar5 = puVar5 + 0x820;
  func_0x000109fcbf14(puVar5,*extraout_x8);
  *(int *)(plVar8 + 2) = (int)puVar5;
  return;
}



/* Entry: 10924dbf8; end: 10924dd6f;  */

void FUN_10924dbf8(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_50;
  long *plStack_48;
  undefined4 uStack_40;
  
  lVar5 = 0x868;
  __Znwm();
  func_0x000109fc97ec();
  FUN_1092315a8(&uStack_50,param_2 + 8);
  uStack_40 = 0xffffffff;
  *param_1 = lVar5;
  puVar6 = (undefined8 *)0x38;
  __Znwm();
  plVar7 = plStack_48;
  uVar4 = uStack_50;
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  puVar6[2] = 0;
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_110ae6090;
  puVar6[3] = lVar5;
  puVar6[5] = plVar7;
  puVar6[4] = uVar4;
  puVar6[6] = 0xffffffff;
  param_1[1] = (long)puVar6;
  FUN_109232f34(param_1,lVar5 + 8,lVar5);
  plVar7 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar7 + 0x18))(plVar7,&PTR_DAT_110ae60d0);
  }
  param_2 = param_2 + 0x820;
  func_0x000109fcbf14(param_2,*param_1);
  *(int *)(plVar7 + 2) = (int)param_2;
  return;
}



/* Entry: 10924dd70; end: 10924df8b;  */

void FUN_10924dd70(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  
  puVar3 = (undefined8 *)0x298;
  __Znwm();
  func_0x000109fc919c();
  *puVar3 = &PTR_FUN_110ae6800;
  FUN_1092315a8(&lStack_60,param_2 + 8);
  uStack_50 = 0xffffffff;
  *param_1 = puVar3;
  plVar4 = (long *)0x38;
  __Znwm();
  plVar5 = plStack_58;
  lVar6 = lStack_60;
  plVar7 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar7 = 0;
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  *plVar4 = (long)&PTR_FUN_110ae60f0;
  plVar4[3] = (long)puVar3;
  plVar4[5] = (long)plVar5;
  plVar4[4] = lVar6;
  plVar4[6] = 0xffffffff;
  param_1[1] = plVar4;
  if (puVar3[2] == 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar5 = plVar4 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    puVar3[1] = puVar3;
    puVar3[2] = plVar4;
  }
  else {
    if (*(long *)(puVar3[2] + 8) != -1) goto LAB_10924deac;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar5 = plVar4 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    puVar3[1] = puVar3;
    puVar3[2] = plVar4;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar6 = *plVar7;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_10924deac:
  plVar5 = plStack_58;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = (long *)param_1[1];
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x18))(plVar5,&PTR_DAT_110ae6130);
  }
  param_2 = param_2 + 0x820;
  func_0x000109fcbf14(param_2,*param_1);
  *(int *)(plVar5 + 2) = (int)param_2;
  return;
}



/* Entry: 10924df8c; end: 10924e19b;  */

void FUN_10924df8c(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  
  lVar3 = 0x60;
  __Znwm();
  FUN_10926c670();
  FUN_1092315a8(&lStack_60,param_2 + 8);
  uStack_50 = 0xffffffff;
  *param_1 = lVar3;
  plVar4 = (long *)0x38;
  __Znwm();
  plVar5 = plStack_58;
  lVar6 = lStack_60;
  plVar7 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar7 = 0;
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  *plVar4 = (long)&PTR_FUN_110ae6150;
  plVar4[3] = lVar3;
  plVar4[5] = (long)plVar5;
  plVar4[4] = lVar6;
  plVar4[6] = 0xffffffff;
  param_1[1] = (long)plVar4;
  if (*(long *)(lVar3 + 0x10) == 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar5 = plVar4 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(long *)(lVar3 + 8) = lVar3;
    *(long **)(lVar3 + 0x10) = plVar4;
  }
  else {
    if (*(long *)(*(long *)(lVar3 + 0x10) + 8) != -1) goto LAB_10924e0bc;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar5 = plVar4 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(long *)(lVar3 + 8) = lVar3;
    *(long **)(lVar3 + 0x10) = plVar4;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar6 = *plVar7;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_10924e0bc:
  plVar5 = plStack_58;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = (long *)param_1[1];
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x18))(plVar5,&PTR_DAT_110ae6190);
  }
  param_2 = param_2 + 0x820;
  func_0x000109fcbf14(param_2,*param_1);
  *(int *)(plVar5 + 2) = (int)param_2;
  return;
}



/* Entry: 10924e19c; end: 10924e2a7;  */

void FUN_10924e19c(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_68 [8];
  long *plStack_60;
  undefined4 uStack_58;
  
  uVar4 = 400;
  __Znwm(400);
  FUN_10926cdf0();
  FUN_1092315a8(auStack_68,param_2 + 8);
  uStack_58 = 0xffffffff;
  FUN_109251d64(param_1,uVar4,auStack_68);
  if (plStack_60 != (long *)0x0) {
    plVar1 = plStack_60 + 1;
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
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_60);
    }
  }
  FUN_109251d04(param_2,param_1);
  return;
}



/* Entry: 10924e2a8; end: 10924e38f;  */

void FUN_10924e2a8(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined4 uStack_38;
  
  uVar4 = 400;
  __Znwm(400);
  FUN_10926c764();
  FUN_1092315a8(auStack_48,param_2 + 8);
  uStack_38 = 0xffffffff;
  FUN_109251d64(param_1,uVar4,auStack_48);
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  FUN_109251d04(param_2,param_1);
  return;
}



/* Entry: 10924e390; end: 10924e507;  */

void FUN_10924e390(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_50;
  long *plStack_48;
  undefined4 uStack_40;
  
  lVar5 = 0x210;
  __Znwm();
  FUN_10922e254();
  FUN_1092315a8(&uStack_50,param_2 + 8);
  uStack_40 = 0xffffffff;
  *param_1 = lVar5;
  puVar6 = (undefined8 *)0x38;
  __Znwm();
  plVar7 = plStack_48;
  uVar4 = uStack_50;
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  puVar6[2] = 0;
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_110ae6210;
  puVar6[3] = lVar5;
  puVar6[5] = plVar7;
  puVar6[4] = uVar4;
  puVar6[6] = 0xffffffff;
  param_1[1] = (long)puVar6;
  FUN_109252038(param_1,lVar5 + 8,lVar5);
  plVar7 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar7 + 0x18))(plVar7,&PTR_DAT_110ae6250);
  }
  param_2 = param_2 + 0x820;
  func_0x000109fcbf14(param_2,*param_1);
  *(int *)(plVar7 + 2) = (int)param_2;
  return;
}



/* Entry: 10924e508; end: 10924e6db;  */

void FUN_10924e508(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_50;
  long *plStack_48;
  undefined4 uStack_40;
  
  puVar3 = (undefined8 *)0x50;
  __Znwm();
  puVar3[2] = 0;
  puVar3[3] = param_2;
  *(undefined4 *)(puVar3 + 4) = 0x10;
  *puVar3 = &PTR_DAT_110b97ae0;
  puVar3[1] = 0;
  uVar8 = *param_3;
  uVar10 = param_3[3];
  uVar9 = param_3[2];
  *(undefined8 *)((long)puVar3 + 0x2c) = param_3[1];
  *(undefined8 *)((long)puVar3 + 0x24) = uVar8;
  *(undefined8 *)((long)puVar3 + 0x3c) = uVar10;
  *(undefined8 *)((long)puVar3 + 0x34) = uVar9;
  uVar8 = *(undefined8 *)((long)param_3 + 0x1c);
  puVar3[9] = *(undefined8 *)((long)param_3 + 0x24);
  puVar3[8] = uVar8;
  FUN_1092315a8(&lStack_50,param_2 + 8);
  uStack_40 = 0xffffffff;
  *param_1 = puVar3;
  plVar4 = (long *)0x38;
  __Znwm();
  plVar5 = plStack_48;
  lVar7 = lStack_50;
  plVar6 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar6 = 0;
  lStack_50 = 0;
  plStack_48 = (long *)0x0;
  *plVar4 = (long)&PTR_FUN_110ae6270;
  plVar4[3] = (long)puVar3;
  plVar4[5] = (long)plVar5;
  plVar4[4] = lVar7;
  plVar4[6] = 0xffffffff;
  param_1[1] = plVar4;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = *plVar6 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar5 = plVar4 + 2;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puVar3[1] = puVar3;
  puVar3[2] = plVar4;
  do {
    lVar7 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar7 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  plVar5 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar4 = plStack_48 + 1;
    do {
      lVar7 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = (long *)param_1[1];
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x18))(plVar5,&PTR_DAT_110ae62b0);
  }
  param_2 = param_2 + 0x820;
  func_0x000109fcbf14(param_2,*param_1);
  *(int *)(plVar5 + 2) = (int)param_2;
  return;
}



/* Entry: 10924e6dc; end: 10924e8f7;  */

void FUN_10924e6dc(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  
  puVar3 = (undefined8 *)0x8e8;
  __Znwm();
  FUN_10924a908();
  *puVar3 = &PTR_FUN_110ae57b0;
  FUN_1092315a8(&lStack_60,param_2 + 8);
  uStack_50 = 0xffffffff;
  *param_1 = puVar3;
  plVar4 = (long *)0x38;
  __Znwm();
  plVar5 = plStack_58;
  lVar6 = lStack_60;
  plVar7 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar7 = 0;
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  *plVar4 = (long)&PTR_FUN_110ae62d0;
  plVar4[3] = (long)puVar3;
  plVar4[5] = (long)plVar5;
  plVar4[4] = lVar6;
  plVar4[6] = 0xffffffff;
  param_1[1] = plVar4;
  if (puVar3[2] == 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar5 = plVar4 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    puVar3[1] = puVar3;
    puVar3[2] = plVar4;
  }
  else {
    if (*(long *)(puVar3[2] + 8) != -1) goto LAB_10924e818;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar5 = plVar4 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    puVar3[1] = puVar3;
    puVar3[2] = plVar4;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar6 = *plVar7;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_10924e818:
  plVar5 = plStack_58;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = (long *)param_1[1];
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x18))(plVar5,&PTR_DAT_110ae6310);
  }
  param_2 = param_2 + 0x820;
  func_0x000109fcbf14(param_2,*param_1);
  *(int *)(plVar5 + 2) = (int)param_2;
  return;
}



/* Entry: 10924e8f8; end: 10924ea6f;  */

void FUN_10924e8f8(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_50;
  long *plStack_48;
  undefined4 uStack_40;
  
  lVar5 = 0x98;
  __Znwm();
  func_0x000109fcc6bc();
  FUN_1092315a8(&uStack_50,param_2 + 8);
  uStack_40 = 0xffffffff;
  *param_1 = lVar5;
  puVar6 = (undefined8 *)0x38;
  __Znwm();
  plVar7 = plStack_48;
  uVar4 = uStack_50;
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  puVar6[2] = 0;
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_110ae6330;
  puVar6[3] = lVar5;
  puVar6[5] = plVar7;
  puVar6[4] = uVar4;
  puVar6[6] = 0xffffffff;
  param_1[1] = (long)puVar6;
  FUN_109233c70(param_1,lVar5 + 8,lVar5);
  plVar7 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar7 + 0x18))(plVar7,&PTR_DAT_110ae6370);
  }
  param_2 = param_2 + 0x820;
  func_0x000109fcbf14(param_2,*param_1);
  *(int *)(plVar7 + 2) = (int)param_2;
  return;
}



/* Entry: 10924ea70; end: 10924eb57;  */

void FUN_10924ea70(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined4 uStack_38;
  
  uVar4 = 0xc0;
  __Znwm(0xc0);
  FUN_10925fa78();
  FUN_1092315a8(auStack_48,param_2 + 8);
  uStack_38 = 0xffffffff;
  FUN_109252728(param_1,uVar4,auStack_48);
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  FUN_1092526c8(param_2,param_1);
  return;
}



/* Entry: 10924eb58; end: 10924edcf;  */

void FUN_10924eb58(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long lVar10;
  ulong auStack_c8 [12];
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 auStack_58 [2];
  long *plStack_50;
  undefined4 uStack_48;
  
  if ((((*(long *)(param_3 + 0x428) != 0) &&
       (auStack_c8[0] = *(ulong *)(*(long *)(param_3 + 0x428) + 0x6d0),
       auStack_c8[0] <= *(uint *)(param_3 + 0x430))) && ((*(byte *)(param_2 + 0x811) >> 2 & 1) != 0)
      ) && (*(uint *)(param_2 + 0x818) < 6)) {
    FUN_109231264(param_2 + 0x810,5,0x400,&UNK_10f55e1af,0x59,param_3 + 0x430,auStack_c8);
  }
  uVar2 = *(uint *)(param_3 + 0x2d4);
  uVar3 = *(uint *)(param_3 + 0x2d8);
  if (uVar3 - 1 < 0x40 && (uVar3 & uVar3 - 1) == 0) {
    uVar4 = *(uint *)(param_2 + 0x48);
    uVar7 = (ulong)uVar2;
    FUN_10922e6d8();
    if (8 < uVar2) goto LAB_10924ec1c;
    if (uVar2 != 0) {
      if (((uint)uVar7 & (uVar4 ^ 0xffffffff)) != 0) goto LAB_10924ec1c;
      if (uVar3 == 1) {
        bVar6 = true;
      }
      else {
        bVar6 = (*(uint *)(param_2 + (ulong)uVar2 * 4 + 0x7d4) & uVar3) != 0;
      }
      goto LAB_10924ec20;
    }
    bVar6 = true;
  }
  else {
LAB_10924ec1c:
    bVar6 = false;
LAB_10924ec20:
    if (uVar2 - 3 < 3) {
      uVar9 = 2;
      goto LAB_10924ec50;
    }
    if (uVar2 - 6 < 3) {
      uVar9 = 4;
      goto LAB_10924ec50;
    }
  }
  uVar9 = 1;
LAB_10924ec50:
  auStack_c8[0] = CONCAT44(auStack_c8[0]._4_4_,uVar9);
  if (uVar2 - 1 < 8) {
    auStack_58[0] = *(undefined4 *)(&UNK_10dfbf124 + (ulong)(uVar2 - 1) * 4);
  }
  else {
    auStack_58[0] = 1;
  }
  uStack_60 = *(undefined4 *)(param_2 + 0x48);
  uStack_64 = *(undefined4 *)(param_3 + 0x2d8);
  uStack_5c = uVar2;
  if (bVar6) {
    FUN_109269cbc(auStack_c8,param_2 + 0x1318,param_3);
    uVar8 = 0x1800;
    __Znwm(0x1800);
    FUN_1092695d8();
    FUN_1092315a8(auStack_58,param_2 + 8);
    uStack_48 = 0xffffffff;
    FUN_109252a5c(param_1,uVar8,auStack_58);
    if (plStack_50 != (long *)0x0) {
      plVar1 = plStack_50 + 1;
      do {
        lVar10 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
      }
    }
    FUN_1092529fc(param_2,param_1);
  }
  else {
    if (((*(byte *)(param_2 + 0x811) >> 2 & 1) != 0) && (*(uint *)(param_2 + 0x818) < 6)) {
      FUN_1092313a4(param_2 + 0x810,5,0x400,&UNK_10f55e209,0x9c,auStack_c8,auStack_58,&uStack_5c,
                    &uStack_60,&uStack_64);
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}



/* Entry: 10924edd0; end: 10924eecb;  */

void FUN_10924edd0(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_58 [8];
  long *plStack_50;
  undefined4 uStack_48;
  
  uVar4 = 0x1800;
  __Znwm(0x1800);
  FUN_1092697a0();
  FUN_1092315a8(auStack_58,param_2 + 8);
  uStack_48 = 0xffffffff;
  FUN_109252a5c(param_1,uVar4,auStack_58);
  if (plStack_50 != (long *)0x0) {
    plVar1 = plStack_50 + 1;
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
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
    }
  }
  FUN_1092529fc(param_2,param_1);
  return;
}



/* Entry: 10924eecc; end: 10924f0db;  */

void FUN_10924eecc(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  
  lVar3 = 0x12c0;
  __Znwm();
  FUN_109249bd8();
  FUN_1092315a8(&lStack_60,param_2 + 8);
  uStack_50 = 0xffffffff;
  *param_1 = lVar3;
  plVar4 = (long *)0x38;
  __Znwm();
  plVar5 = plStack_58;
  lVar6 = lStack_60;
  plVar7 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar7 = 0;
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  *plVar4 = (long)&PTR_FUN_110ae6450;
  plVar4[3] = lVar3;
  plVar4[5] = (long)plVar5;
  plVar4[4] = lVar6;
  plVar4[6] = 0xffffffff;
  param_1[1] = (long)plVar4;
  if (*(long *)(lVar3 + 0x10) == 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar5 = plVar4 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(long *)(lVar3 + 8) = lVar3;
    *(long **)(lVar3 + 0x10) = plVar4;
  }
  else {
    if (*(long *)(*(long *)(lVar3 + 0x10) + 8) != -1) goto LAB_10924effc;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar5 = plVar4 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(long *)(lVar3 + 8) = lVar3;
    *(long **)(lVar3 + 0x10) = plVar4;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar6 = *plVar7;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_10924effc:
  plVar5 = plStack_58;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = (long *)param_1[1];
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x18))(plVar5,&PTR_DAT_110ae6490);
  }
  param_2 = param_2 + 0x820;
  func_0x000109fcbf14(param_2,*param_1);
  *(int *)(plVar5 + 2) = (int)param_2;
  return;
}



/* Entry: 10924f0dc; end: 10924f113;  */

void FUN_10924f0dc(int *param_1,long param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 0x80);
  *param_1 = iVar1;
  param_1[1] = iVar1;
  param_1[2] = iVar1;
  param_1[3] = 0xc;
  iVar2 = *(int *)(param_2 + (ulong)*param_3 * 0x10 + 0x198);
  param_1[4] = *(int *)(param_2 + 0x78);
  param_1[5] = iVar2;
  *(ulong *)(param_1 + 6) = (ulong)(uint)(iVar1 * iVar1 * iVar1 * 0x10);
  return;
}



/* Entry: 10924f114; end: 10924f323;  */

void FUN_10924f114(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  
  lVar3 = 0x50;
  __Znwm();
  FUN_10924a7ac();
  FUN_1092315a8(&lStack_60,param_2 + 8);
  uStack_50 = 0xffffffff;
  *param_1 = lVar3;
  plVar4 = (long *)0x38;
  __Znwm();
  plVar5 = plStack_58;
  lVar6 = lStack_60;
  plVar7 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar7 = 0;
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  *plVar4 = (long)&PTR_FUN_110ae64b0;
  plVar4[3] = lVar3;
  plVar4[5] = (long)plVar5;
  plVar4[4] = lVar6;
  plVar4[6] = 0xffffffff;
  param_1[1] = (long)plVar4;
  if (*(long *)(lVar3 + 0x10) == 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar5 = plVar4 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(long *)(lVar3 + 8) = lVar3;
    *(long **)(lVar3 + 0x10) = plVar4;
  }
  else {
    if (*(long *)(*(long *)(lVar3 + 0x10) + 8) != -1) goto LAB_10924f244;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar5 = plVar4 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(long *)(lVar3 + 8) = lVar3;
    *(long **)(lVar3 + 0x10) = plVar4;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar6 = *plVar7;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_10924f244:
  plVar5 = plStack_58;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = (long *)param_1[1];
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x18))(plVar5,&PTR_DAT_110ae64f0);
  }
  param_2 = param_2 + 0x820;
  func_0x000109fcbf14(param_2,*param_1);
  *(int *)(plVar5 + 2) = (int)param_2;
  return;
}



/* Entry: 10924f324; end: 10924f33f;  */

bool FUN_10924f324(long param_1)

{
  FUN_109374fe0();
  return param_1 != 0;
}



/* Entry: 10924f340; end: 10924f347;  */

undefined8 FUN_10924f340(long param_1)

{
  return *(undefined8 *)(param_1 + 0x14a0);
}



/* Entry: 10924f348; end: 10924f4ab;  */

/* WARNING: Possible PIC construction at 0x00010924f48c: Changing call to branch */

undefined1  [16] FUN_10924f348(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 **ppuVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulong uStack_a0;
  ulong *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined1 auStack_70 [8];
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong *puStack_48;
  
  puVar1 = (ulong *)auStack_70;
  ppuVar8 = (undefined1 **)&stack0xfffffffffffffff0;
  puVar3 = (ulong *)param_1[1];
  if (param_2 <= (ulong)(((long)(param_1[2] - (long)puVar3) >> 3) * -0x5555555555555555)) {
    lVar7 = 0;
    puVar2 = param_1;
    if (param_2 != 0) {
      uVar5 = (param_2 * 0x18 - 0x18) / 0x18;
      lVar7 = uVar5 * 0x18 + 0x18;
      puVar2 = puVar3;
      _bzero(puVar3,lVar7);
      puVar3 = puVar3 + uVar5 * 3 + 3;
    }
    param_1[1] = (ulong)puVar3;
    auVar10._8_8_ = lVar7;
    auVar10._0_8_ = puVar2;
    return auVar10;
  }
  lVar7 = (long)puVar3 - *param_1;
  uVar5 = param_2 + (lVar7 >> 3) * -0x5555555555555555;
  if (uVar5 < 0xaaaaaaaaaaaaaab) {
    lVar4 = (long)(param_1[2] - *param_1) >> 3;
    uVar6 = lVar4 * 0x5555555555555556;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      uVar6 = uVar5;
    }
    if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar6 = 0xaaaaaaaaaaaaaaa;
    }
    puStack_48 = param_1;
    if (uVar6 == 0) {
      puVar3 = (ulong *)0x0;
    }
    else {
      puVar3 = param_1;
      FUN_10924f4c0();
    }
    lVar7 = (long)puVar3 + lVar7;
    lVar4 = ((param_2 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    _bzero(lVar7,lVar4);
    uVar5 = *param_1;
    param_2 = lVar7 - (param_1[1] - uVar5);
    _memcpy(param_2);
    uStack_68 = *param_1;
    *param_1 = param_2;
    param_1[1] = lVar7 + lVar4;
    uStack_50 = param_1[2];
    param_1[2] = (ulong)(puVar3 + uVar6 * 3);
    puVar3 = &uStack_68;
    uVar9 = 0x10924f490;
    uStack_60 = uStack_68;
    uStack_58 = uStack_68;
  }
  else {
    uVar5 = param_2;
    FUN_10924f4ac();
    pcStack_78 = FUN_10924f4ac;
    puVar3 = (ulong *)&DAT_10f62a4d8;
    ppuStack_80 = ppuVar8;
    func_0x000104c4f6cc();
    puVar1 = &uStack_a0;
    pcStack_88 = FUN_10924f4c0;
    ppuVar8 = &puStack_90;
    uStack_a0 = param_2;
    puStack_98 = param_1;
    if (uVar5 < 0xaaaaaaaaaaaaaab) {
      lVar7 = uVar5 * 0x18;
      puStack_90 = (undefined1 *)&ppuStack_80;
      __Znwm(lVar7);
      auVar11._8_8_ = uVar5;
      auVar11._0_8_ = lVar7;
      return auVar11;
    }
    uVar9 = 0x10924f504;
    puStack_90 = (undefined1 *)&ppuStack_80;
    func_0x000104c4f740();
  }
  *(ulong *)((long)puVar1 + -0x20) = param_2;
  *(ulong **)((long)puVar1 + -0x18) = param_1;
  *(undefined1 ***)((long)puVar1 + -0x10) = ppuVar8;
  *(undefined8 *)((long)puVar1 + -8) = uVar9;
  func_0x00010924f534();
  if (*puVar3 != 0) {
    __ZdlPv();
  }
  auVar12._8_8_ = uVar5;
  auVar12._0_8_ = puVar3;
  return auVar12;
}



/* Entry: 10924f4ac; end: 10924f4bf;  */

undefined1  [16] FUN_10924f4ac(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar2 = param_2 * 0x18;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000104c4f740();
  func_0x00010924f534();
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = plVar1;
  return auVar4;
}



/* Entry: 10924f4c0; end: 10924f583;  */

undefined1  [16] FUN_10924f4c0(long *param_1,ulong param_2)

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
  func_0x000104c4f740();
  func_0x00010924f534();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10924f584; end: 10924f5ff;  */

void FUN_10924f584(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  
  puVar2 = (undefined8 *)*param_1;
  plVar3 = (long *)*puVar2;
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)puVar2[1];
    plVar1 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar4 = plVar4 + -1;
        plVar1 = (long *)*plVar4;
        *plVar4 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar4 != plVar3);
      plVar1 = *(long **)*param_1;
    }
    puVar2[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar1);
    return;
  }
  return;
}



/* Entry: 10924f600; end: 10924f71f;  */

/* WARNING: Possible PIC construction at 0x00010924f6fc: Changing call to branch */

undefined1  [16] FUN_10924f600(ulong *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 **ppuVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  ulong uStack_b0;
  ulong *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined1 auStack_80 [8];
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong *puStack_58;
  
  puVar4 = (ulong *)auStack_80;
  ppuVar15 = (undefined1 **)&stack0xfffffffffffffff0;
  puVar6 = (ulong *)param_1[1];
  if (param_2 <= (ulong)((long)(param_1[2] - (long)puVar6) >> 3)) {
    lVar14 = 0;
    puVar5 = param_1;
    if (param_2 != 0) {
      lVar14 = param_2 << 3;
      puVar5 = puVar6;
      _bzero(puVar6,lVar14);
      puVar6 = puVar6 + param_2;
    }
    param_1[1] = (ulong)puVar6;
    auVar17._8_8_ = lVar14;
    auVar17._0_8_ = puVar5;
    return auVar17;
  }
  uVar11 = *param_1;
  lVar13 = (long)puVar6 - uVar11;
  lVar14 = lVar13 >> 3;
  uVar2 = param_2 + lVar14;
  if (uVar2 >> 0x3d == 0) {
    uVar8 = param_1[2] - uVar11;
    uVar10 = (long)uVar8 >> 2;
    if (uVar10 <= uVar2) {
      uVar10 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      uVar10 = 0x1fffffffffffffff;
    }
    puStack_58 = param_1;
    if (uVar10 == 0) {
      puVar6 = (ulong *)0x0;
      lVar12 = lVar13;
    }
    else {
      puVar6 = param_1;
      FUN_10924f734();
      uVar11 = *param_1;
      lVar14 = (long)(param_1[1] - uVar11) >> 3;
      lVar12 = param_1[1] - uVar11;
    }
    lVar13 = (long)puVar6 + lVar13;
    _bzero(lVar13,param_2 << 3);
    lVar1 = param_2 * 8;
    param_2 = lVar13 + lVar14 * -8;
    _memcpy(param_2,uVar11,lVar12);
    uStack_68 = *param_1;
    *param_1 = param_2;
    param_1[1] = lVar13 + lVar1;
    uStack_60 = param_1[2];
    param_1[2] = (ulong)(puVar6 + uVar10);
    uStack_78 = uStack_68;
    uStack_70 = uStack_68;
    puVar6 = &uStack_78;
    uVar16 = 0x10924f700;
  }
  else {
    uVar11 = param_2;
    FUN_10924f720();
    pcStack_88 = FUN_10924f720;
    puVar6 = (ulong *)&DAT_10f62a4d8;
    ppuStack_90 = ppuVar15;
    func_0x000104c4f6cc();
    puVar4 = &uStack_b0;
    pcStack_98 = FUN_10924f734;
    ppuVar15 = &puStack_a0;
    uStack_b0 = param_2;
    puStack_a8 = param_1;
    if (uVar11 >> 0x3d == 0) {
      lVar14 = uVar11 << 3;
      puStack_a0 = (undefined1 *)&ppuStack_90;
      __Znwm(lVar14);
      auVar18._8_8_ = uVar11;
      auVar18._0_8_ = lVar14;
      return auVar18;
    }
    uVar16 = 0x10924f768;
    puStack_a0 = (undefined1 *)&ppuStack_90;
    func_0x000104c4f740();
  }
  *(ulong *)((long)puVar4 + -0x20) = param_2;
  *(ulong **)((long)puVar4 + -0x18) = param_1;
  *(undefined1 ***)((long)puVar4 + -0x10) = ppuVar15;
  *(undefined8 *)((long)puVar4 + -8) = uVar16;
  plVar3 = (long *)puVar6[1];
  plVar9 = (long *)puVar6[2];
  while (plVar9 != plVar3) {
    plVar9 = plVar9 + -1;
    plVar7 = (long *)*plVar9;
    puVar6[2] = (ulong)plVar9;
    *plVar9 = 0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
      plVar9 = (long *)puVar6[2];
    }
  }
  if (*puVar6 != 0) {
    __ZdlPv();
  }
  auVar19._8_8_ = uVar11;
  auVar19._0_8_ = puVar6;
  return auVar19;
}



/* Entry: 10924f720; end: 10924f733;  */

undefined1  [16] FUN_10924f720(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3d == 0) {
    lVar3 = param_2 << 3;
    __Znwm(lVar3);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar3;
    return auVar6;
  }
  func_0x000104c4f740();
  plVar1 = (long *)plVar2[1];
  plVar5 = (long *)plVar2[2];
  while (plVar5 != plVar1) {
    plVar5 = plVar5 + -1;
    plVar4 = (long *)*plVar5;
    plVar2[2] = (long)plVar5;
    *plVar5 = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
      plVar5 = (long *)plVar2[2];
    }
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = plVar2;
  return auVar7;
}



/* Entry: 10924f734; end: 10924f983;  */

undefined1  [16] FUN_10924f734(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000104c4f740();
  plVar1 = (long *)param_1[1];
  plVar4 = (long *)param_1[2];
  while (plVar4 != plVar1) {
    plVar4 = plVar4 + -1;
    plVar3 = (long *)*plVar4;
    param_1[2] = (long)plVar4;
    *plVar4 = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      plVar4 = (long *)param_1[2];
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 10924f984; end: 10924f993;  */

void FUN_10924f984(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae5a20;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10924f994; end: 10924f9b3;  */

void FUN_10924f994(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae5a20;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10924f9b4; end: 10924f9c7;  */

long FUN_10924f9b4(long param_1)

{
  long lVar1;
  long lVar2;
  long alStack_50 [4];
  
  lVar1 = param_1 + 0x18;
  FUN_10924a2ac(alStack_50,param_1 + 0x40);
  FUN_109253374(lVar1);
  if (alStack_50[0] != 0) {
    FUN_10924a39c(alStack_50);
  }
  if (*(long *)(param_1 + 0x2c8) != 0) {
    *(long *)(param_1 + 0x2d0) = *(long *)(param_1 + 0x2c8);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x2b0) != 0) {
    *(long *)(param_1 + 0x2b8) = *(long *)(param_1 + 0x2b0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x298) != 0) {
    *(long *)(param_1 + 0x2a0) = *(long *)(param_1 + 0x298);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x270) != 0) {
    *(long *)(param_1 + 0x278) = *(long *)(param_1 + 0x270);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x150) != 0) {
    *(long *)(param_1 + 0x158) = *(long *)(param_1 + 0x150);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x100);
    __ZdlPv();
  }
  alStack_50[0] = param_1 + 200;
  func_0x000109256b98(alStack_50);
  if (*(long *)(param_1 + 0x98) != 0) {
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0x98);
    __ZdlPv();
  }
  lVar2 = 0x70;
  do {
    func_0x000109253934(lVar1 + lVar2);
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != 0x40);
  FUN_10924a26c(param_1 + 0x40);
  if (*(long *)(param_1 + 0x28) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return lVar1;
}



/* Entry: 10924f9c8; end: 10924f9fb;  */

void FUN_10924f9c8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110ae5a70;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10924f9fc; end: 10924fa17;  */

void FUN_10924f9fc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110ae5a70;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10924fa18; end: 10924fb4b;  */

void FUN_10924fa18(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 8);
  puVar1 = (undefined8 *)0x88;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = lVar3;
  *(undefined4 *)(puVar1 + 4) = 5;
  puVar1[5] = 0x32aaaba7;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  *puVar1 = &PTR_FUN_110ae6780;
  puVar1[0xe] = lVar3 + 0x930;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  *param_1 = puVar1;
  plVar2 = (long *)0x30;
  __Znwm();
  *plVar2 = (long)&PTR_FUN_110ae5af0;
  plVar2[1] = 0;
  plVar2[2] = 0;
  plVar2[3] = (long)puVar1;
  plVar2[4] = lVar3;
  plVar2[5] = 0xffffffff;
  param_1[1] = plVar2;
  FUN_10924fb94(param_1,puVar1 + 1,puVar1);
  (**(code **)(*plVar2 + 0x18))(plVar2,&PTR_DAT_110ae5b30);
  lVar3 = lVar3 + 0x820;
  func_0x000109fcbf14(lVar3,puVar1);
  *(int *)(plVar2 + 1) = (int)lVar3;
  return;
}



/* Entry: 10924fb4c; end: 10924fb87;  */

long FUN_10924fb4c(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae5b40);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10924fb88; end: 10924fb93;  */

undefined ** FUN_10924fb88(void)

{
  return &PTR_DAT_110ae5b40;
}



/* Entry: 10924fb94; end: 10924fc3f;  */

void FUN_10924fb94(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_2[1];
  if ((lVar4 == 0) || (*(long *)(lVar4 + 8) == -1)) {
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



/* Entry: 10924fc40; end: 10924fcf3;  */

void FUN_10924fc40(long *param_1,long *param_2)

{
  long lVar1;
  long *plStack_38;
  
  lVar1 = *param_1 + 0x820;
  func_0x000109fcc0a8(lVar1,(int)param_1[1],param_2);
  FUN_109374fe0();
  if (lVar1 == 0) {
    lVar1 = *param_1;
    __ZNSt3__15mutex4lockEv(lVar1 + 0x1448);
    plStack_38 = param_2;
    FUN_10924fd6c(*param_1 + 0x1488,&plStack_38);
    __ZNSt3__15mutex6unlockEv(lVar1 + 0x1448);
  }
  else if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010924fc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 8))(param_2);
    return;
  }
  return;
}



/* Entry: 10924fcf4; end: 10924fcf7;  */

void FUN_10924fcf4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10924fcf8; end: 10924fd0b;  */

void FUN_10924fcf8(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10924fd0c; end: 10924fd2b;  */

void FUN_10924fd0c(long param_1)

{
  FUN_10924fc40(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10924fd2c; end: 10924fd67;  */

long FUN_10924fd2c(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae5b30);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10924fd68; end: 10924fd6b;  */

void FUN_10924fd68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10924fd6c; end: 10924fe47;  */

void FUN_10924fd6c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar8 = puVar2 + 1;
    *puVar2 = *param_2;
LAB_10924fe24:
    param_1[1] = (long)puVar8;
    return;
  }
  lVar6 = *param_1;
  lVar7 = (long)puVar2 - lVar6;
  uVar1 = (lVar7 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar4 = param_1[2] - lVar6;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 >> 0x3d == 0) {
      lVar3 = uVar5 << 3;
      __Znwm();
      puVar2 = (undefined8 *)(lVar3 + lVar7);
      puVar8 = puVar2 + 1;
      *puVar2 = *param_2;
      _memcpy(puVar2 + -(lVar7 >> 3),lVar6,lVar7);
      *param_1 = (long)(puVar2 + -(lVar7 >> 3));
      param_1[1] = (long)puVar8;
      param_1[2] = lVar3 + uVar5 * 8;
      if (lVar6 != 0) {
        __ZdlPv(lVar6);
      }
      goto LAB_10924fe24;
    }
  }
  else {
    FUN_10924fe48();
  }
  func_0x000104c4f740();
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  return;
}



/* Entry: 10924fe48; end: 10924fe5b;  */

void FUN_10924fe48(void)

{
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  return;
}



/* Entry: 10924fe5c; end: 10924fe63;  */

void FUN_10924fe5c(void)

{
  return;
}



/* Entry: 10924fe64; end: 10924fe97;  */

void FUN_10924fe64(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110ae5b60;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10924fe98; end: 10924feb3;  */

void FUN_10924fe98(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110ae5b60;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10924feb4; end: 10925002f;  */

void FUN_10924feb4(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 auStack_68 [16];
  char cStack_58;
  undefined2 uStack_4c;
  undefined1 uStack_4a;
  undefined1 auStack_48 [16];
  char cStack_38;
  
  lVar6 = *(long *)(param_2 + 8);
  plVar1 = (long *)(lVar6 + 0x1308);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uStack_4a = 0;
  uStack_4c = 0;
  auStack_68[0] = 0;
  cStack_58 = '\0';
  lVar4 = 0x2e0;
  __Znwm();
  auStack_48[0] = 0;
  cStack_38 = '\0';
  FUN_109253078();
  *param_1 = lVar4;
  puVar5 = (undefined8 *)0x30;
  __Znwm();
  *puVar5 = &PTR_FUN_110ae5be0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = lVar4;
  puVar5[4] = lVar6;
  puVar5[5] = 0xffffffff;
  param_1[1] = (long)puVar5;
  FUN_1092500d8(param_1,lVar4 + 8,lVar4);
  if (cStack_38 == '\x01') {
    FUN_10924a26c(auStack_48);
  }
  FUN_109250078(lVar6,param_1);
  if (cStack_58 == '\x01') {
    FUN_10924a26c(auStack_68);
  }
  return;
}



/* Entry: 109250030; end: 10925006b;  */

long FUN_109250030(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae5c30);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10925006c; end: 109250077;  */

undefined ** FUN_10925006c(void)

{
  return &PTR_DAT_110ae5c30;
}



/* Entry: 109250078; end: 1092500d7;  */

void FUN_109250078(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[1];
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,&PTR_DAT_110ae5c20);
  }
  param_1 = param_1 + 0x820;
  func_0x000109fcbf14(param_1,*param_2);
  *(int *)(plVar1 + 1) = (int)param_1;
  return;
}



/* Entry: 1092500d8; end: 109250183;  */

void FUN_1092500d8(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_2[1];
  if ((lVar4 == 0) || (*(long *)(lVar4 + 8) == -1)) {
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



/* Entry: 109250184; end: 109250187;  */

void FUN_109250184(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109250188; end: 10925019b;  */

void FUN_109250188(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10925019c; end: 10925021f;  */

void FUN_10925019c(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000109fcc0a8(*(long *)(param_1 + 0x20) + 0x820,*(undefined4 *)(param_1 + 0x28),plVar1);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001092501d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1);
    return;
  }
  return;
}



/* Entry: 109250220; end: 109250223;  */

void FUN_109250220(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109250224; end: 10925030f;  */

void FUN_109250224(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae5c50;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109250310; end: 109250313;  */

void FUN_109250310(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


