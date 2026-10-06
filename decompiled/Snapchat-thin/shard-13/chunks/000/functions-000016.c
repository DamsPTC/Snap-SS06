/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109d30bb8; end: 109d30bd3;  */

bool FUN_109d30bb8(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  
  if (*(char *)(param_2 + 0x20) != '\x01') {
    return false;
  }
  if (*(char *)(param_1 + 0x20) == '\x01') {
    bVar4 = *(byte *)(param_1 + 0x1f);
    uVar1 = *(ulong *)(param_1 + 0x10);
    if (-1 < (char)bVar4) {
      uVar1 = (ulong)bVar4;
    }
    bVar5 = *(byte *)(param_2 + 0x1f);
    uVar2 = *(ulong *)(param_2 + 0x10);
    if (-1 < (char)bVar5) {
      uVar2 = (ulong)bVar5;
    }
    if (uVar1 == uVar2) {
      plVar6 = (long *)*(long *)(param_1 + 8);
      if (-1 < (char)bVar4) {
        plVar6 = (long *)(param_1 + 8);
      }
      plVar3 = (long *)*(long *)(param_2 + 8);
      if (-1 < (char)bVar5) {
        plVar3 = (long *)(param_2 + 8);
      }
      _memcmp(plVar6,plVar3);
      return (int)plVar6 != 0;
    }
    return true;
  }
  return false;
}



/* Entry: 109d30bd4; end: 109d30c53;  */

bool FUN_109d30bd4(long param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  
  if (*(char *)(param_1 + 0x20) != '\x01') {
    return false;
  }
  bVar4 = *(byte *)(param_1 + 0x1f);
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  bVar5 = *(byte *)((long)param_2 + 0x17);
  uVar2 = param_2[1];
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  if (uVar1 == uVar2) {
    plVar6 = (long *)*(long *)(param_1 + 8);
    if (-1 < (char)bVar4) {
      plVar6 = (long *)(param_1 + 8);
    }
    plVar3 = (long *)*param_2;
    if (-1 < (char)bVar5) {
      plVar3 = param_2;
    }
    _memcmp(plVar6,plVar3);
    return (int)plVar6 != 0;
  }
  return true;
}



/* Entry: 109d30c54; end: 109d30c93;  */

undefined8 * FUN_109d30c54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3ff08;
  if ((undefined8 *)param_1[2] != param_1 + 4) {
    _free();
  }
  return param_1;
}



/* Entry: 109d30c94; end: 109d30db3;  */

undefined4
FUN_109d30c94(ulong param_1,undefined2 param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
             ulong param_6)

{
  ulong uVar1;
  long *plVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined4 uStack_94;
  undefined *apuStack_90 [2];
  undefined8 uStack_80;
  ulong uStack_78;
  undefined2 uStack_70;
  undefined **appuStack_68 [2];
  undefined *puStack_58;
  undefined2 uStack_48;
  
  uStack_94 = 0;
  if (*(long *)(*(long *)(param_1 + 0xa0) + 0x18) != 0) {
    param_4 = param_6;
    param_3 = param_5;
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0xb0);
  uVar1 = param_1;
  if (*(uint *)(param_1 + 0xb0) != 0) {
    puVar5 = *(ulong **)(param_1 + 0xa8);
    do {
      if (puVar5[1] == param_4) {
        if (param_4 != 0) {
          uVar1 = *puVar5;
          _memcmp(uVar1,param_3,param_4);
          if ((int)uVar1 != 0) goto LAB_109d30cfc;
        }
        uStack_94 = (undefined4)puVar5[5];
        uVar3 = uStack_94;
        goto LAB_109d30d74;
      }
LAB_109d30cfc:
      puVar5 = puVar5 + 6;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  uStack_70 = 0x503;
  apuStack_90[0] = &UNK_10f5ad52f;
  appuStack_68[0] = apuStack_90;
  puStack_58 = &UNK_10f5ad54a;
  uStack_48 = 0x302;
  uStack_80 = param_3;
  uStack_78 = param_4;
  func_0x000107c2b034();
  uVar4 = param_1;
  FUN_109df35b4(param_1,appuStack_68,0,0,uVar1);
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
LAB_109d30d74:
    *(undefined4 *)(param_1 + 0x80) = uVar3;
    *(undefined2 *)(param_1 + 0xc) = param_2;
    plVar2 = *(long **)(param_1 + 0x250);
    if (plVar2 == (long *)0x0) {
      func_0x000104c501e4();
      uVar3 = 2;
      if (*(long *)(plVar2[0x14] + 0x18) == 0) {
        uVar3 = 3;
      }
      return uVar3;
    }
    (**(code **)(*plVar2 + 0x30))(plVar2,&uStack_94);
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 109d30db4; end: 109d30dcb;  */

undefined4 FUN_109d30db4(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (*(long *)(*(long *)(param_1 + 0xa0) + 0x18) == 0) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 109d30dcc; end: 109d30e47;  */

void FUN_109d30dcc(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110b3fe58;
  plVar1 = (long *)param_1[0x4a];
  if (plVar1 == param_1 + 0x47) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_109d30e14;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_109d30e14:
  param_1[0x13] = &PTR_FUN_110b3ff08;
  if ((undefined8 *)param_1[0x15] != param_1 + 0x17) {
    _free();
  }
  func_0x000109d2f664(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d30e48; end: 109d30e63;  */

ulong FUN_109d30e48(long *param_1)

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar4;
  
  plVar1 = param_1 + 0x13;
  lVar8 = param_1[3];
  if (lVar8 == 0) {
    plVar5 = plVar1;
    (**(code **)(*plVar1 + 0x10))();
    if ((uint)plVar5 == 0) {
      uVar9 = 0;
    }
    else {
      uVar10 = 0;
      uVar9 = 0;
      do {
        uVar7 = uVar10;
        (**(code **)(*plVar1 + 0x18))(plVar1);
        if (uVar9 <= uVar7 + 8) {
          uVar9 = uVar7 + 8;
        }
        uVar3 = (int)uVar10 + 1;
        uVar10 = (ulong)uVar3;
      } while ((uint)plVar5 != uVar3);
    }
  }
  else {
    uVar9 = 0xf;
    if (lVar8 != 1) {
      uVar9 = lVar8 + 0xf;
    }
    plVar5 = plVar1;
    (**(code **)(*plVar1 + 0x10))();
    if ((uint)plVar5 != 0) {
      uVar10 = 0;
      do {
        uVar7 = uVar10;
        (**(code **)(*plVar1 + 0x18))(plVar1);
        uVar6 = uVar10;
        (**(code **)(*plVar1 + 0x20))(plVar1);
        uVar2 = *(ushort *)((long)param_1 + 10) >> 3;
        uVar3 = uVar2 & 3;
        if ((uVar2 & 3) == 0) {
          plVar4 = param_1;
          (**(code **)(*param_1 + 8))();
          uVar3 = (uint)plVar4;
        }
        if ((uVar3 != 1 || uVar7 != 0) || uVar6 != 0) {
          uVar6 = 0xf;
          if (uVar7 != 0) {
            uVar6 = uVar7 + 8;
          }
          if (uVar9 <= uVar6) {
            uVar9 = uVar6;
          }
        }
        uVar3 = (int)uVar10 + 1;
        uVar10 = (ulong)uVar3;
      } while ((uint)plVar5 != uVar3);
    }
  }
  return uVar9;
}



/* Entry: 109d30e64; end: 109d30ed3;  */

void FUN_109d30e64(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuStack_20;
  int iStack_18;
  undefined1 uStack_14;
  
  if (param_3 == 0) {
    if ((*(char *)(param_1 + 0x94) != '\x01') ||
       (iStack_18 = *(int *)(param_1 + 0x80), *(int *)(param_1 + 0x90) == iStack_18)) {
      return;
    }
  }
  else {
    iStack_18 = *(int *)(param_1 + 0x80);
  }
  ppuStack_20 = &PTR_DAT_110b3ff70;
  uStack_14 = 1;
  FUN_109df4440(param_1 + 0x98,param_1,&ppuStack_20,param_1 + 0x88,param_2);
  return;
}



/* Entry: 109d30ed4; end: 109d30efb;  */

void FUN_109d30ed4(long param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x94) == '\x01') {
    uVar1 = *(undefined4 *)(param_1 + 0x90);
  }
  else {
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  return;
}



/* Entry: 109d30efc; end: 109d30f3b;  */

void FUN_109d30efc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3ff08;
  if ((undefined8 *)param_1[2] != param_1 + 4) {
    _free();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109d30f3c; end: 109d30fbb;  */

undefined4 FUN_109d30f3c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 109d30fbc; end: 109d30fdf;  */

void FUN_109d30fbc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110b3fff8;
  return;
}



/* Entry: 109d30fe0; end: 109d30ffb;  */

void FUN_109d30fe0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110b3fff8;
  return;
}



/* Entry: 109d30ffc; end: 109d31037;  */

long FUN_109d30ffc(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b40068);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109d31038; end: 109d31043;  */

undefined ** FUN_109d31038(void)

{
  return &PTR_DAT_110b40068;
}



/* Entry: 109d31044; end: 109d3110f;  */

void FUN_109d31044(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 auStack_38 [2];
  
  puVar2 = (undefined8 *)0x1137e2590;
  FUN_109dffb24(0x1137e2590,0x1137e25a0,param_1,0x30,auStack_38);
  if (uRam00000001137e2598 != 0) {
    puVar4 = puRam00000001137e2590 + (ulong)uRam00000001137e2598 * 6;
    puVar3 = puRam00000001137e2590;
    puVar5 = puVar2;
    do {
      uVar6 = *puVar3;
      uVar8 = puVar3[3];
      uVar7 = puVar3[2];
      puVar5[1] = puVar3[1];
      *puVar5 = uVar6;
      puVar5[3] = uVar8;
      puVar5[2] = uVar7;
      puVar5[4] = &PTR_DAT_110b3fe38;
      uVar1 = *(undefined4 *)(puVar3 + 5);
      *(undefined1 *)((long)puVar5 + 0x2c) = *(undefined1 *)((long)puVar3 + 0x2c);
      *(undefined4 *)(puVar5 + 5) = uVar1;
      puVar5[4] = &PTR_DAT_110b3fdd0;
      puVar5 = puVar5 + 6;
      puVar3 = puVar3 + 6;
    } while (puVar3 != puVar4);
  }
  if (puRam00000001137e2590 != (undefined8 *)0x1137e25a0) {
    _free();
  }
  puRam00000001137e2590 = puVar2;
  uRam00000001137e259c = auStack_38[0];
  return;
}



/* Entry: 109d31110; end: 109d31117;  */

void FUN_109d31110(void)

{
  return;
}



/* Entry: 109d31118; end: 109d3113b;  */

void FUN_109d31118(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110b40118;
  return;
}



/* Entry: 109d3113c; end: 109d31157;  */

void FUN_109d3113c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110b40118;
  return;
}



/* Entry: 109d31158; end: 109d31193;  */

long FUN_109d31158(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b40178);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109d31194; end: 109d311a7;  */

undefined ** FUN_109d31194(void)

{
  return &PTR_DAT_110b40178;
}



/* Entry: 109d311a8; end: 109d311cb;  */

void FUN_109d311a8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110b40088;
  return;
}



/* Entry: 109d311cc; end: 109d311e7;  */

void FUN_109d311cc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110b40088;
  return;
}



/* Entry: 109d311e8; end: 109d31223;  */

long FUN_109d311e8(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b400f8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109d31224; end: 109d3122f;  */

undefined ** FUN_109d31224(void)

{
  return &PTR_DAT_110b400f8;
}



/* Entry: 109d31230; end: 109d312fb;  */

void FUN_109d31230(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 auStack_38 [2];
  
  puVar2 = (undefined8 *)0x1137e27e8;
  FUN_109dffb24(0x1137e27e8,0x1137e27f8,param_1,0x30,auStack_38);
  if (uRam00000001137e27f0 != 0) {
    puVar4 = puRam00000001137e27e8 + (ulong)uRam00000001137e27f0 * 6;
    puVar3 = puRam00000001137e27e8;
    puVar5 = puVar2;
    do {
      uVar6 = *puVar3;
      uVar8 = puVar3[3];
      uVar7 = puVar3[2];
      puVar5[1] = puVar3[1];
      *puVar5 = uVar6;
      puVar5[3] = uVar8;
      puVar5[2] = uVar7;
      puVar5[4] = &PTR_DAT_110b3ffd8;
      uVar1 = *(undefined4 *)(puVar3 + 5);
      *(undefined1 *)((long)puVar5 + 0x2c) = *(undefined1 *)((long)puVar3 + 0x2c);
      *(undefined4 *)(puVar5 + 5) = uVar1;
      puVar5[4] = &PTR_DAT_110b3ff70;
      puVar5 = puVar5 + 6;
      puVar3 = puVar3 + 6;
    } while (puVar3 != puVar4);
  }
  if (puRam00000001137e27e8 != (undefined8 *)0x1137e27f8) {
    _free();
  }
  puRam00000001137e27e8 = puVar2;
  uRam00000001137e27f4 = auStack_38[0];
  return;
}



/* Entry: 109d312fc; end: 109d3130f;  */

void FUN_109d312fc(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  uVar1 = *(uint *)(plVar3 + 2);
  lVar6 = *plVar3;
  uVar2 = (int)param_2 - 1;
  uVar2 = uVar2 | uVar2 >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(plVar3 + 2) = uVar5;
  lVar4 = (ulong)uVar5 << 2;
  __ZnwmSt11align_val_t(lVar4,4);
  *plVar3 = lVar4;
  if (lVar6 != 0) {
    func_0x000109d31400(plVar3,lVar6,lVar6 + (ulong)uVar1 * 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar6,4);
    return;
  }
  plVar3[1] = 0;
  if ((int)plVar3[2] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memset_11034c668)();
    return;
  }
  return;
}



/* Entry: 109d31310; end: 109d31343;  */

void FUN_109d31310(long *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  uVar1 = *(uint *)(param_1 + 2);
  lVar5 = *param_1;
  uVar2 = (int)param_2 - 1;
  uVar2 = uVar2 | uVar2 >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar4 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar4 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar4;
  lVar3 = (ulong)uVar4 << 2;
  __ZnwmSt11align_val_t(lVar3,4);
  *param_1 = lVar3;
  if (lVar5 != 0) {
    func_0x000109d31400(param_1,lVar5,lVar5 + (ulong)uVar1 * 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,4);
    return;
  }
  param_1[1] = 0;
  if ((int)param_1[2] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memset_11034c668)();
    return;
  }
  return;
}



/* Entry: 109d31344; end: 109d31493;  */

void FUN_109d31344(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 2);
  lVar5 = *param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar4 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar4 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar4;
  lVar3 = (ulong)uVar4 << 2;
  __ZnwmSt11align_val_t(lVar3,4);
  *param_1 = lVar3;
  if (lVar5 != 0) {
    func_0x000109d31400(param_1,lVar5,lVar5 + (ulong)uVar1 * 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,4);
    return;
  }
  param_1[1] = 0;
  if ((int)param_1[2] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memset_11034c668)();
    return;
  }
  return;
}



/* Entry: 109d31494; end: 109d31527;  */

undefined8 FUN_109d31494(long *param_1,int *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  if ((int)param_1[2] == 0) {
    uVar4 = 0;
    piVar5 = (int *)0x0;
  }
  else {
    iVar2 = *param_2;
    uVar3 = (int)param_1[2] - 1;
    uVar6 = iVar2 * 0x25 & uVar3;
    piVar5 = (int *)(*param_1 + (ulong)uVar6 * 4);
    iVar8 = *piVar5;
    if (iVar2 != iVar8) {
      iVar9 = 1;
      piVar7 = (int *)0x0;
      do {
        if (iVar8 == -1) {
          uVar4 = 0;
          if (piVar7 != (int *)0x0) {
            piVar5 = piVar7;
          }
          goto LAB_109d314d4;
        }
        piVar1 = piVar5;
        if (piVar7 != (int *)0x0 || iVar8 != -2) {
          piVar1 = piVar7;
        }
        uVar6 = uVar6 + iVar9;
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 & uVar3;
        piVar5 = (int *)(*param_1 + (ulong)uVar6 * 4);
        iVar8 = *piVar5;
        piVar7 = piVar1;
      } while (iVar2 != iVar8);
    }
    uVar4 = 1;
  }
LAB_109d314d4:
  *param_3 = (long)piVar5;
  return uVar4;
}



/* Entry: 109d31528; end: 109d315a7;  */

void FUN_109d31528(undefined8 *param_1,long *param_2,undefined4 *param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  FUN_109d31494(param_2,param_3,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d315a8(param_2,param_3,param_3);
    *(undefined4 *)plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 4;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d315a8; end: 109d3164f;  */

int * FUN_109d315a8(long param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint uVar1;
  int *piStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d315f4;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d31344(param_1,uVar1);
  FUN_109d31494(param_1,param_3,&piStack_28);
  param_4 = piStack_28;
LAB_109d315f4:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -1) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d31650; end: 109d31713;  */

long * FUN_109d31650(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar8 = puVar2 + 1;
    *puVar2 = *param_2;
    plVar4 = param_1;
  }
  else {
    lVar7 = (long)puVar2 - *param_1;
    uVar1 = (lVar7 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_109d312fc();
      *(undefined4 *)(param_1 + 1) = 0;
      *(undefined1 *)(param_1 + 5) = 0;
      param_1[6] = 0;
      *(undefined4 *)(param_1 + 7) = 1;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      *param_1 = (long)&PTR_FUN_110b5c6b0;
      param_1[8] = (long)param_2;
      FUN_109d317a0();
      return param_1;
    }
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    plVar3 = param_1;
    FUN_109d31310();
    puVar2 = (undefined8 *)((long)plVar3 + lVar7);
    puVar8 = puVar2 + 1;
    *puVar2 = *param_2;
    lVar7 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    plVar4 = (long *)*param_1;
    *param_1 = lVar7;
    param_1[1] = (long)puVar8;
    param_1[2] = (long)(plVar3 + uVar6);
    if (plVar4 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar8;
  return plVar4;
}



/* Entry: 109d31714; end: 109d3179f;  */

undefined8 * FUN_109d31714(undefined8 *param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_110b5c6b0;
  param_1[8] = param_2;
  FUN_109d317a0();
  return param_1;
}



/* Entry: 109d317a0; end: 109d31853;  */

void FUN_109d317a0(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x20) != *plVar1) {
    FUN_109e05520(param_1);
  }
  if ((*(int *)(param_1 + 0x38) == 1) && (*plVar1 != 0)) {
    __ZdaPv();
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *plVar1 = 0;
  return;
}



/* Entry: 109d31854; end: 109d318df;  */

void FUN_109d31854(ulong *param_1,ulong *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = (uint)param_2[1];
  *(uint *)(param_1 + 1) = uVar1;
  if (uVar1 < 0x41) {
    uVar2 = 0;
    if (uVar1 != (uint)param_3) {
      uVar2 = *param_2 >> (param_3 & 0x3f);
    }
  }
  else {
    uVar2 = (ulong)uVar1 + 0x3f >> 3 & 0x3ffffff8;
    __Znam();
    _memcpy();
    func_0x000109df0f28(uVar2,(ulong)uVar1 + 0x3f >> 6,param_3);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 109d318e0; end: 109d31957;  */

ulong FUN_109d318e0(ulong param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  uVar1 = param_1;
  FUN_109df3c68(param_1,param_5,param_6,&uStack_38);
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x80) = uStack_38;
    *(undefined2 *)(param_1 + 0xc) = param_2;
    plVar2 = *(long **)(param_1 + 0xc0);
    if (plVar2 == (long *)0x0) {
      func_0x000104c501e4();
      return 2;
    }
    (**(code **)(*plVar2 + 0x30))(plVar2,&uStack_38);
  }
  return uVar1;
}



/* Entry: 109d31958; end: 109d3195f;  */

undefined8 FUN_109d31958(void)

{
  return 2;
}



/* Entry: 109d31960; end: 109d319bb;  */

void FUN_109d31960(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110b401d0;
  plVar1 = (long *)param_1[0x18];
  if (plVar1 == param_1 + 0x15) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_109d319a8;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_109d319a8:
  func_0x000109d2f664(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d319bc; end: 109d319d7;  */

long FUN_109d319bc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 7;
  if (*(long *)(param_1 + 0x18) != 1) {
    lVar3 = *(long *)(param_1 + 0x18) + 7;
  }
  lVar2 = param_1;
  (**(code **)(*(long *)(param_1 + 0xa0) + 0x10))();
  if (lVar2 != 0) {
    lVar1 = 3;
    if ((*(ushort *)(param_1 + 10) & 0x400) != 0) {
      lVar1 = 6;
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      lVar2 = *(long *)(param_1 + 0x38);
    }
    lVar3 = lVar1 + lVar3 + lVar2;
  }
  return lVar3;
}



/* Entry: 109d319d8; end: 109d31a43;  */

void FUN_109d319d8(long param_1,undefined8 param_2,int param_3)

{
  double dVar1;
  undefined **ppuStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  if (param_3 == 0) {
    if (*(char *)(param_1 + 0x98) != '\x01') {
      return;
    }
    dVar1 = *(double *)(param_1 + 0x80);
    if (*(double *)(param_1 + 0x90) == dVar1) {
      return;
    }
  }
  else {
    dVar1 = *(double *)(param_1 + 0x80);
  }
  uStack_20 = *(undefined8 *)(param_1 + 0x90);
  uStack_18 = *(undefined1 *)(param_1 + 0x98);
  ppuStack_28 = &PTR_DAT_110b40280;
  FUN_109df50a4(dVar1,param_1 + 0xa0,param_1,&ppuStack_28,param_2);
  return;
}



/* Entry: 109d31a44; end: 109d31a9f;  */

void FUN_109d31a44(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x98) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x90);
  }
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  return;
}



/* Entry: 109d31aa0; end: 109d31ac3;  */

void FUN_109d31aa0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110b402e8;
  return;
}



/* Entry: 109d31ac4; end: 109d31adf;  */

void FUN_109d31ac4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110b402e8;
  return;
}



/* Entry: 109d31ae0; end: 109d31b1b;  */

long FUN_109d31ae0(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b40358);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109d31b1c; end: 109d31b27;  */

undefined ** FUN_109d31b1c(void)

{
  return &PTR_DAT_110b40358;
}



/* Entry: 109d31b28; end: 109d31c53;  */

long FUN_109d31b28(long param_1)

{
  func_0x000109d31bac(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 109d31c54; end: 109d31ceb;  */

undefined8 FUN_109d31c54(long *param_1,ulong *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  
  if ((int)param_1[2] == 0) {
    uVar3 = 0;
    puVar4 = (ulong *)0x0;
  }
  else {
    uVar5 = *param_2;
    uVar2 = (int)param_1[2] - 1;
    uVar6 = ((uint)(uVar5 >> 4) & 0xfffffff ^ (uint)uVar5 >> 9) & uVar2;
    puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
    uVar8 = *puVar4;
    if (uVar5 != uVar8) {
      iVar9 = 1;
      puVar7 = (ulong *)0x0;
      do {
        if (uVar8 == 0xfffffffffffff000) {
          uVar3 = 0;
          if (puVar7 != (ulong *)0x0) {
            puVar4 = puVar7;
          }
          goto LAB_109d31c94;
        }
        puVar1 = puVar4;
        if (puVar7 != (ulong *)0x0 || uVar8 != 0xffffffffffffe000) {
          puVar1 = puVar7;
        }
        uVar6 = uVar6 + iVar9;
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 & uVar2;
        puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
        uVar8 = *puVar4;
        puVar7 = puVar1;
      } while (uVar5 != uVar8);
    }
    uVar3 = 1;
  }
LAB_109d31c94:
  *param_3 = (long)puVar4;
  return uVar3;
}



/* Entry: 109d31cec; end: 109d31d93;  */

long * FUN_109d31cec(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d31d38;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d31d94(param_1,uVar1);
  FUN_109d31c54(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d31d38:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d31d94; end: 109d31ef3;  */

void FUN_109d31d94(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 2);
  lVar5 = *param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar4 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar4 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar4;
  puVar3 = (undefined8 *)((ulong)uVar4 << 4);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109d31e4c(param_1,lVar5,lVar5 + (ulong)uVar1 * 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 4;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -0x10;
      puVar3 = puVar3 + 2;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d31ef4; end: 109d31fa7;  */

bool FUN_109d31ef4(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = param_1;
  FUN_109d2f848();
  lVar2 = 0x14;
  if (param_1[1] != *param_1) {
    lVar2 = 0x10;
  }
  plVar1 = (long *)(param_1[1] + (ulong)*(uint *)((long)param_1 + lVar2) * 8);
  if (plVar3 != plVar1) {
    *plVar3 = -2;
    *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  }
  return plVar3 != plVar1;
}



/* Entry: 109d31fa8; end: 109d31feb;  */

undefined8 * FUN_109d31fa8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puStack_40;
  ulong uStack_38;
  
  lVar4 = *(long *)*param_1;
  if ((param_1 != (undefined8 *)0x0) && ((*(uint *)(param_1 + 1) & 0xfe) == 0x12)) {
    uVar1 = *(uint *)(param_1 + 4);
    uStack_38 = (ulong)uVar1;
    puVar3 = (undefined8 *)(lVar4 + 0x750);
    puVar2 = (undefined8 *)(lVar4 + 0x750);
    if (((*(uint *)(param_1 + 1) ^ 0xffffffff) & 0x13) == 0) {
      lVar5 = *(long *)*puVar3;
      uStack_38 = uStack_38 | 0x100000000;
      lVar4 = lVar5 + 0x900;
      puStack_40 = puVar3;
      FUN_109da1690(lVar4,&puStack_40);
      puVar2 = *(undefined8 **)(lVar4 + 0x10);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)(lVar5 + 0x7e8);
        FUN_109d34148(puVar2,0x28,3);
        *puVar2 = *puVar3;
        puVar2[3] = puVar3;
        *(uint *)(puVar2 + 4) = uVar1;
        puVar2[2] = puVar2 + 3;
        puVar2[1] = 0x100000013;
        *(undefined8 **)(lVar4 + 0x10) = puVar2;
      }
      return puVar2;
    }
    lVar5 = *(long *)*puVar2;
    lVar4 = lVar5 + 0x900;
    puStack_40 = puVar2;
    FUN_109da1690(lVar4,&puStack_40);
    puVar3 = *(undefined8 **)(lVar4 + 0x10);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)(lVar5 + 0x7e8);
      FUN_109d34148(puVar3,0x28,3);
      *puVar3 = *puVar2;
      puVar3[3] = puVar2;
      *(uint *)(puVar3 + 4) = uVar1;
      puVar3[2] = puVar3 + 3;
      puVar3[1] = 0x100000012;
      *(undefined8 **)(lVar4 + 0x10) = puVar3;
    }
    return puVar3;
  }
  return (undefined8 *)(lVar4 + 0x750);
}



/* Entry: 109d31fec; end: 109d32047;  */

void FUN_109d31fec(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(uint *)(param_1 + 1);
  if (*(uint *)((long)param_1 + 0xc) <= *(uint *)(param_1 + 1)) {
    func_0x000107c2b01c(param_1,param_1 + 2,uVar1 + 1,8);
    uVar1 = (ulong)*(uint *)(param_1 + 1);
  }
  *(undefined8 *)(*param_1 + uVar1 * 8) = param_2;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}



/* Entry: 109d32048; end: 109d320a3;  */

void FUN_109d32048(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uStack_24;
  
  uStack_24 = 0;
  FUN_109d32200(param_1 + 8,param_2,&uStack_24);
  FUN_109d32198(param_1,param_3);
  return;
}



/* Entry: 109d320a4; end: 109d32117;  */

undefined8 FUN_109d320a4(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong *puVar6;
  long lVar7;
  undefined1 auStack_48 [16];
  byte bStack_38;
  
  while( true ) {
    while( true ) {
      bVar2 = *(byte *)(param_1 + 8);
      if ((bVar2 == 0xd) ||
         (((uVar5 = (uint)bVar2, bVar2 < 6 && ((0x2fU >> (ulong)(uVar5 & 0x1f) & 1) != 0)) ||
          (uVar1 = uVar5 & 0xfe, (uVar1 == 10 || (uVar5 & 0xfffffffd) == 4) || bVar2 == 0xf)))) {
        return 1;
      }
      if ((uVar1 != 0x10 && uVar1 != 0x12) && bVar2 != 0x15) {
        return 0;
      }
      bVar2 = *(byte *)(param_1 + 8);
      if (((param_1 == 0) || (bVar2 != 0x11)) && ((param_1 == 0 || ((bVar2 & 0xfe) != 0x12))))
      break;
      param_1 = *(long *)(param_1 + 0x18);
    }
    if ((param_1 == 0) || (bVar2 != 0x15)) break;
    FUN_109da0310();
  }
  if ((*(uint *)(param_1 + 8) >> 0xb & 1) != 0) {
    return 1;
  }
  if ((*(uint *)(param_1 + 8) >> 8 & 1) == 0) {
    return 0;
  }
  if ((param_2 == 0) || (FUN_109d9fea0(auStack_48,param_2,param_1), (bStack_38 & 1) != 0)) {
    if (*(uint *)(param_1 + 0xc) != 0) {
      lVar7 = (ulong)*(uint *)(param_1 + 0xc) << 3;
      puVar6 = *(ulong **)(param_1 + 0x10);
      do {
        uVar3 = *puVar6;
        if ((*(char *)(uVar3 + 8) == '\x13') || (FUN_109d320a4(uVar3,param_2), (uVar3 & 1) == 0))
        goto LAB_109d9f838;
        lVar7 = lVar7 + -8;
        puVar6 = puVar6 + 1;
      } while (lVar7 != 0);
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x800;
    uVar4 = 1;
  }
  else {
LAB_109d9f838:
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 109d32118; end: 109d32197;  */

void FUN_109d32118(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  uVar2 = (ulong)*(uint *)(param_1 + 1);
  uVar1 = uVar2 + ((long)param_3 - (long)param_2 >> 5);
  if (*(uint *)((long)param_1 + 0xc) < uVar1) {
    func_0x000107c2b01c(param_1,param_1 + 2,uVar1,8);
    uVar2 = (ulong)*(uint *)(param_1 + 1);
  }
  if (param_2 != param_3) {
    puVar3 = (undefined8 *)(*param_1 + uVar2 * 8);
    puVar4 = param_2;
    do {
      puVar5 = puVar4 + 4;
      *puVar3 = *puVar4;
      puVar3 = puVar3 + 1;
      puVar4 = puVar5;
    } while (puVar5 != param_3);
  }
  *(int *)(param_1 + 1) = (int)uVar2 + (int)((ulong)((long)param_3 - (long)param_2) >> 5);
  return;
}



/* Entry: 109d32198; end: 109d321ff;  */

void FUN_109d32198(long param_1,uint param_2)

{
  long *plVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  uVar5 = param_2;
  if (*(undefined **)(param_1 + 8) == &DAT_10e05ae6c) {
    do {
      FUN_109d32198(*(undefined8 *)(param_1 + 0x10),param_2 & 1);
      param_2 = 0;
      plVar1 = (long *)(param_1 + 0x10);
      param_1 = *plVar1 + 0x20;
      uVar5 = 0;
    } while (*(undefined **)(*plVar1 + 0x28) == &DAT_10e05ae6c);
  }
  bVar2 = 0xb;
  if (uVar5 == 0) {
    bVar2 = 3;
  }
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xf0 | bVar2;
  iVar3 = *(int *)(*(long *)(param_1 + 8) + 8);
  *(int *)(param_1 + 0x18) = *(int *)(*(long *)(param_1 + 8) + 4) + -1;
  if (0xffffff7f < iVar3 - 0x40U) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    return;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  *puVar4 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)(puVar4 + 1,(ulong)((iVar3 + 0x40U >> 6) - 1) << 3);
  return;
}



/* Entry: 109d32200; end: 109d32233;  */

void FUN_109d32200(undefined8 param_1,undefined *param_2)

{
  if (param_2 == &DAT_10e05ae6c) {
    FUN_109ded638(param_1,&DAT_10e05ae6c);
  }
  else {
    FUN_109de8290();
  }
  return;
}



/* Entry: 109d32234; end: 109d32333;  */

undefined8 * FUN_109d32234(undefined8 *param_1)

{
  long lVar1;
  
  if ((undefined *)*param_1 == &DAT_10e05ae6c) {
    lVar1 = param_1[1];
    param_1[1] = 0;
    if (lVar1 != 0) {
      func_0x000109d3229c();
    }
  }
  else if ((*(int *)((undefined *)*param_1 + 8) - 0x40U < 0xffffff80) && (param_1[1] != 0)) {
    __ZdaPv();
  }
  return param_1;
}



/* Entry: 109d32334; end: 109d32387;  */

void FUN_109d32334(long *param_1,ulong param_2,undefined8 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = (undefined4)param_2;
  if (*(uint *)((long)param_1 + 0xc) < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    func_0x000107c2b01c(param_1,param_1 + 2,param_2,8);
    if (param_2 != 0) {
      puVar4 = (undefined8 *)*param_1;
      do {
        *puVar4 = param_3;
        param_2 = param_2 - 1;
        puVar4 = puVar4 + 1;
      } while (param_2 != 0);
    }
    *(undefined4 *)(param_1 + 1) = uVar2;
    return;
  }
  uVar3 = (ulong)*(uint *)(param_1 + 1);
  uVar5 = uVar3;
  if (param_2 <= uVar3) {
    uVar5 = param_2;
  }
  if (uVar5 != 0) {
    puVar4 = (undefined8 *)*param_1;
    do {
      *puVar4 = param_3;
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
  }
  lVar6 = uVar3 - param_2;
  if (uVar3 < param_2) {
    puVar4 = (undefined8 *)(*param_1 + uVar3 * 8);
    do {
      *puVar4 = param_3;
      bVar1 = lVar6 != -1;
      lVar6 = lVar6 + 1;
      puVar4 = puVar4 + 1;
    } while (bVar1);
  }
  *(undefined4 *)(param_1 + 1) = uVar2;
  return;
}



/* Entry: 109d32388; end: 109d323e3;  */

void FUN_109d32388(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 1) = 0;
  func_0x000107c2b01c(param_1,param_1 + 2,param_2,8);
  if (param_2 != 0) {
    puVar1 = (undefined8 *)*param_1;
    lVar2 = param_2;
    do {
      *puVar1 = param_3;
      lVar2 = lVar2 + -1;
      puVar1 = puVar1 + 1;
    } while (lVar2 != 0);
  }
  *(int *)(param_1 + 1) = (int)param_2;
  return;
}



/* Entry: 109d323e4; end: 109d323ff;  */

/* WARNING: Type propagation algorithm not settling */

undefined ** FUN_109d323e4(undefined **param_1,long param_2)

{
  undefined8 *******pppppppuVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined8 ******ppppppuVar6;
  ulong uVar7;
  long lVar8;
  undefined **extraout_x8;
  undefined8 *puVar9;
  undefined **extraout_x8_00;
  undefined **extraout_x8_01;
  uint uVar10;
  undefined **ppuVar11;
  uint *puVar12;
  undefined *puVar13;
  uint uVar14;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar15;
  long lStack_100;
  uint uStack_f8;
  undefined *puStack_f0;
  undefined *apuStack_e8 [4];
  undefined *puStack_c8;
  undefined1 auStack_c0 [24];
  long lStack_a8;
  byte bStack_69;
  undefined8 *puStack_68;
  uint uStack_60;
  undefined8 *******pppppppuStack_58;
  uint uStack_50;
  undefined8 ******ppppppuStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  
  ppuVar4 = (undefined **)(param_2 + 8);
  if (*ppuVar4 == &DAT_10e05ae6c) {
    lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
    FUN_109d323e4(&pppppppuStack_58,*(long *)(param_2 + 0x10));
    pppppppuVar1 = &pppppppuStack_58;
    if (0x40 < uStack_50) {
      pppppppuVar1 = pppppppuStack_58;
    }
    ppppppuStack_48 = *pppppppuVar1;
    FUN_109d323e4(&puStack_68,*(long *)(param_2 + 0x10) + 0x20);
    if (uStack_60 < 0x41) {
      puStack_40 = puStack_68;
    }
    else {
      puStack_40 = (undefined8 *)*puStack_68;
      __ZdaPv();
    }
    if ((0x40 < uStack_50) && (pppppppuStack_58 != (undefined8 *******)0x0)) {
      __ZdaPv();
    }
    *(undefined4 *)(param_1 + 1) = 0x80;
    ppppppuVar6 = &ppppppuStack_48;
    func_0x000109defe68(param_1,ppppppuVar6,2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
      ___stack_chk_fail();
      if ((0x40 < uStack_50) && (pppppppuStack_58 != (undefined8 *******)0x0)) {
        __ZdaPv();
      }
      __Unwind_Resume();
      lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      FUN_109deea4c(&puStack_f0);
      FUN_109dece44(auStack_c0,&puStack_f0);
      if ((0x40 < (uint)apuStack_e8[0]) && (puStack_f0 != (undefined *)0x0)) {
        __ZdaPv();
      }
      FUN_109deea4c(&lStack_100,ppppppuVar6);
      FUN_109dece44(apuStack_e8,&lStack_100);
      ppuVar4 = &puStack_c8;
      func_0x000109d32708(ppuVar4,&puStack_f0);
      FUN_109d32234(apuStack_e8);
      if ((0x40 < uStack_f8) && (lStack_100 != 0)) {
        __ZdaPv();
      }
      FUN_109d323e4(&lStack_100,&puStack_c8);
      FUN_109ded6cc(&puStack_f0,&DAT_10e05ae6c,&lStack_100);
      puVar13 = apuStack_e8[0];
      if (&puStack_f0 == param_1) {
        apuStack_e8[0] = (undefined *)0x0;
        if (puVar13 != (undefined *)0x0) {
          func_0x000109d3229c((ulong)&puStack_f0 | 8);
        }
      }
      else {
        puVar13 = param_1[1];
        param_1[1] = (undefined *)0x0;
        if (puVar13 != (undefined *)0x0) {
          func_0x000109d3229c();
        }
        param_1[1] = apuStack_e8[0];
        *param_1 = puStack_f0;
        puStack_f0 = &UNK_10e05aebc;
        apuStack_e8[0] = (undefined *)0x0;
      }
      if ((0x40 < uStack_f8) && (lStack_100 != 0)) {
        __ZdaPv();
      }
      puVar5 = auStack_c0;
      FUN_109d32234(puVar5);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
        return ppuVar4;
      }
      ___stack_chk_fail();
      if ((0x40 < uStack_f8) && (lStack_100 != 0)) {
        __ZdaPv();
      }
      FUN_109d32234(auStack_c0);
      do {
        do {
          __Unwind_Resume(puVar5);
        } while ((uint)apuStack_e8[0] < 0x41);
        if (puStack_f0 != (undefined *)0x0) {
          __ZdaPv();
        }
      } while( true );
    }
    return param_1;
  }
  puVar13 = *ppuVar4;
  if (puVar13 == &DAT_10e05ae08) {
    bVar3 = *(byte *)(param_2 + 0x1c);
    if ((bVar3 & 6) == 0 || (bVar3 & 7) == 3) {
      if ((bVar3 & 7) == 3) {
        uVar14 = 0;
        uVar10 = 0;
      }
      else {
        if ((bVar3 & 7) == 0) {
          uVar14 = 0;
        }
        else {
          puVar12 = (uint *)(param_2 + 0x10);
          if (*(int *)(*ppuVar4 + 8) - 0x40U < 0xffffff80) {
            puVar12 = *(uint **)puVar12;
          }
          uVar14 = *puVar12;
        }
        uVar10 = 0x1f;
      }
    }
    else {
      uVar10 = *(int *)(param_2 + 0x18) + 0xf;
      puVar12 = (uint *)(param_2 + 0x10);
      if (*(int *)(*ppuVar4 + 8) - 0x40U < 0xffffff80) {
        puVar12 = *(uint **)puVar12;
      }
      uVar14 = *puVar12;
      if (uVar10 == 1) {
        uVar10 = uVar14 >> 10 & 1;
      }
    }
    *(undefined4 *)(param_1 + 1) = 0x10;
    *param_1 = (undefined *)(ulong)((bVar3 & 8) << 0xc | (uVar10 & 0x1f) << 10 | uVar14 & 0x3ff);
    goto FUN_109d301fc;
  }
  if (puVar13 == &DAT_10e05ae1c) {
    bVar3 = *(byte *)(param_2 + 0x1c);
    if ((bVar3 & 6) == 0 || (bVar3 & 7) == 3) {
      if ((bVar3 & 7) == 3) {
        uVar14 = 0;
        uVar10 = 0;
      }
      else {
        if ((bVar3 & 7) == 0) {
          uVar14 = 0;
        }
        else {
          puVar12 = (uint *)(param_2 + 0x10);
          if (*(int *)(*ppuVar4 + 8) - 0x40U < 0xffffff80) {
            puVar12 = *(uint **)puVar12;
          }
          uVar14 = *puVar12;
        }
        uVar10 = 0xff;
      }
    }
    else {
      uVar10 = *(int *)(param_2 + 0x18) + 0x7f;
      puVar12 = (uint *)(param_2 + 0x10);
      if (*(int *)(*ppuVar4 + 8) - 0x40U < 0xffffff80) {
        puVar12 = *(uint **)puVar12;
      }
      uVar14 = *puVar12;
      if (uVar10 == 1) {
        uVar10 = uVar14 >> 7 & 1;
      }
    }
    *(undefined4 *)(param_1 + 1) = 0x10;
    *param_1 = (undefined *)(ulong)((bVar3 & 8) << 0xc | (uVar10 & 0xff) << 7 | uVar14 & 0x7f);
    goto FUN_109d301fc;
  }
  if (puVar13 == &DAT_10e05ae30) {
FUN_109dec8f0:
    bVar3 = *(byte *)((long)ppuVar4 + 0x14);
    if ((bVar3 & 6) == 0 || (bVar3 & 7) == 3) {
      if ((bVar3 & 7) == 3) {
        uVar10 = 0;
        uVar14 = 0;
      }
      else {
        if ((bVar3 & 7) == 0) {
          uVar10 = 0;
        }
        else {
          ppuVar11 = ppuVar4 + 1;
          if (*(int *)(*ppuVar4 + 8) - 0x40U < 0xffffff80) {
            ppuVar11 = (undefined **)*ppuVar11;
          }
          uVar10 = *(uint *)ppuVar11;
        }
        uVar14 = 0xff;
      }
    }
    else {
      ppuVar11 = ppuVar4 + 1;
      if (*(int *)(*ppuVar4 + 8) - 0x40U < 0xffffff80) {
        ppuVar11 = (undefined **)*ppuVar11;
      }
      uVar10 = *(uint *)ppuVar11;
      uVar14 = *(int *)(ppuVar4 + 2) + 0x7fU;
      if (*(int *)(ppuVar4 + 2) + 0x7fU == 1) {
        uVar14 = uVar10 >> 0x17 & 1;
      }
    }
    *(undefined4 *)(param_1 + 1) = 0x20;
    *param_1 = (undefined *)
               (ulong)((bVar3 & 8) << 0x1c | (uVar14 & 0xff) << 0x17 | uVar10 & 0x7fffff);
  }
  else {
    if (puVar13 != &DAT_10e05ae44) {
      if (puVar13 == &DAT_10e05ae58) {
        lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        *(undefined4 *)(param_1 + 1) = 0x80;
        func_0x000109defe68(param_1,&stack0xffffffffffffffd8,2);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
          return param_1;
        }
        ___stack_chk_fail();
        ppuVar4 = param_1;
        param_1 = extraout_x8_01;
        goto FUN_109dec8f0;
      }
      if (puVar13 != &UNK_10e05aed0) {
        if (puVar13 == &UNK_10e05ae80) {
          bVar3 = *(byte *)(param_2 + 0x1c);
          if ((bVar3 & 6) == 0 || (bVar3 & 7) == 3) {
            if ((bVar3 & 7) == 3) {
              uVar14 = 0;
              uVar10 = 0;
            }
            else {
              if ((bVar3 & 7) == 0) {
                uVar14 = 0;
              }
              else {
                puVar12 = (uint *)(param_2 + 0x10);
                if (*(int *)(*ppuVar4 + 8) - 0x40U < 0xffffff80) {
                  puVar12 = *(uint **)puVar12;
                }
                uVar14 = *puVar12;
              }
              uVar10 = 0x1f;
            }
          }
          else {
            uVar10 = *(int *)(param_2 + 0x18) + 0xf;
            puVar12 = (uint *)(param_2 + 0x10);
            if (*(int *)(*ppuVar4 + 8) - 0x40U < 0xffffff80) {
              puVar12 = *(uint **)puVar12;
            }
            uVar14 = *puVar12;
            if (uVar10 == 1) {
              uVar10 = uVar14 >> 2 & 1;
            }
          }
          *(undefined4 *)(param_1 + 1) = 8;
          *param_1 = (undefined *)(ulong)((bVar3 & 8) << 4 | (uVar10 & 0x1f) << 2 | uVar14 & 3);
          goto FUN_109d301fc;
        }
        if (puVar13 == &UNK_10e05ae94) {
          bVar3 = *(byte *)(param_2 + 0x1c);
          if ((bVar3 & 6) == 0 || (bVar3 & 7) == 3) {
            if ((bVar3 & 7) == 3) {
              uVar14 = 0;
              uVar10 = 0;
            }
            else {
              if ((bVar3 & 7) == 0) {
                uVar14 = 0;
              }
              else {
                puVar12 = (uint *)(param_2 + 0x10);
                if (*(int *)(*ppuVar4 + 8) - 0x40U < 0xffffff80) {
                  puVar12 = *(uint **)puVar12;
                }
                uVar14 = *puVar12;
              }
              uVar10 = 0xf;
            }
          }
          else {
            uVar10 = *(int *)(param_2 + 0x18) + 7;
            puVar12 = (uint *)(param_2 + 0x10);
            if (*(int *)(*ppuVar4 + 8) - 0x40U < 0xffffff80) {
              puVar12 = *(uint **)puVar12;
            }
            uVar14 = *puVar12;
            if (uVar10 == 1) {
              uVar10 = uVar14 >> 3 & 1;
            }
          }
          *(undefined4 *)(param_1 + 1) = 8;
          *param_1 = (undefined *)(ulong)((bVar3 & 8) << 4 | (uVar10 & 0xf) << 3 | uVar14 & 7);
          goto FUN_109d301fc;
        }
        unaff_x29 = &stack0xfffffffffffffff0;
        lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        *(undefined4 *)(param_1 + 1) = 0x50;
        func_0x000109defe68(param_1,&stack0xffffffffffffffd8,2);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
          return param_1;
        }
        unaff_x30 = FUN_109dec498;
        ___stack_chk_fail();
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
        ppuVar4 = param_1;
        param_1 = extraout_x8;
      }
      *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(code **)((long)register0x00000008 + -8) = unaff_x30;
      *(undefined8 *)((long)register0x00000008 + -0x28) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      puVar9 = (undefined8 *)*ppuVar4;
      uVar2 = *(undefined4 *)(puVar9 + 2);
      uVar15 = *puVar9;
      *(undefined8 *)((long)register0x00000008 + -0x48) = puVar9[1];
      *(undefined8 *)((long)register0x00000008 + -0x50) = uVar15;
      *(undefined4 *)((long)register0x00000008 + -0x40) = uVar2;
      *(undefined4 *)((long)register0x00000008 + -0x4c) = 0xfffffc02;
      FUN_109de8340((undefined1 *)((long)register0x00000008 + -0x68),ppuVar4);
      FUN_109de8868((undefined1 *)((long)register0x00000008 + -0x68),
                    (undefined1 *)((long)register0x00000008 + -0x50),1,
                    (undefined1 *)((long)register0x00000008 + -0x39));
      FUN_109de8340((undefined1 *)((long)register0x00000008 + -0x80),
                    (undefined1 *)((long)register0x00000008 + -0x68));
      FUN_109de8868((undefined1 *)((long)register0x00000008 + -0x80),&DAT_10e05ae44,1,
                    (undefined1 *)((long)register0x00000008 + -0x39));
      FUN_109dec730((undefined1 *)((long)register0x00000008 + -0x98),
                    (undefined1 *)((long)register0x00000008 + -0x80));
      if (*(uint *)((long)register0x00000008 + -0x90) < 0x41) {
        *(undefined8 *)((long)register0x00000008 + -0x38) =
             *(undefined8 *)((long)register0x00000008 + -0x98);
      }
      else {
        *(undefined8 *)((long)register0x00000008 + -0x38) =
             **(undefined8 **)((long)register0x00000008 + -0x98);
        __ZdaPv();
      }
      if ((((*(byte *)((long)register0x00000008 + -0x6c) & 6) == 0) ||
          ((*(byte *)((long)register0x00000008 + -0x6c) & 7) == 3)) ||
         ((*(byte *)((long)register0x00000008 + -0x39) & 1) == 0)) {
        *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
      }
      else {
        FUN_109de8868((undefined1 *)((long)register0x00000008 + -0x80),
                      (undefined1 *)((long)register0x00000008 + -0x50),1,
                      (undefined1 *)((long)register0x00000008 + -0x39));
        FUN_109de8340((undefined1 *)((long)register0x00000008 + -0x98),
                      (undefined1 *)((long)register0x00000008 + -0x68));
        FUN_109de9ad8((undefined1 *)((long)register0x00000008 + -0x98),
                      (undefined1 *)((long)register0x00000008 + -0x80),1,1);
        FUN_109de8868((undefined1 *)((long)register0x00000008 + -0x98),&DAT_10e05ae44,1,
                      (undefined1 *)((long)register0x00000008 + -0x39));
        FUN_109dec730((undefined1 *)((long)register0x00000008 + -0xa8),
                      (undefined1 *)((long)register0x00000008 + -0x98));
        if (*(uint *)((long)register0x00000008 + -0xa0) < 0x41) {
          *(undefined8 *)((long)register0x00000008 + -0x30) =
               *(undefined8 *)((long)register0x00000008 + -0xa8);
        }
        else {
          *(undefined8 *)((long)register0x00000008 + -0x30) =
               **(undefined8 **)((long)register0x00000008 + -0xa8);
          __ZdaPv();
        }
        if ((*(int *)(*(long *)((long)register0x00000008 + -0x98) + 8) - 0x40U < 0xffffff80) &&
           (*(long *)((long)register0x00000008 + -0x90) != 0)) {
          __ZdaPv();
        }
      }
      *(undefined4 *)(param_1 + 1) = 0x80;
      func_0x000109defe68(param_1,(undefined1 *)((long)register0x00000008 + -0x38),2);
      ppuVar4 = param_1;
      if ((*(int *)(*(long *)((long)register0x00000008 + -0x80) + 8) - 0x40U < 0xffffff80) &&
         (ppuVar4 = *(undefined ***)((long)register0x00000008 + -0x78), ppuVar4 != (undefined **)0x0
         )) {
        __ZdaPv();
      }
      if ((*(int *)(*(long *)((long)register0x00000008 + -0x68) + 8) - 0x40U < 0xffffff80) &&
         (ppuVar4 = *(undefined ***)((long)register0x00000008 + -0x60), ppuVar4 != (undefined **)0x0
         )) {
        __ZdaPv();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28))
      {
        return ppuVar4;
      }
      ___stack_chk_fail();
      if ((*(int *)(*(long *)((long)register0x00000008 + -0x98) + 8) - 0x40U < 0xffffff80) &&
         (*(long *)((long)register0x00000008 + -0x90) != 0)) {
        __ZdaPv();
      }
      if ((*(int *)(*(long *)((long)register0x00000008 + -0x80) + 8) - 0x40U < 0xffffff80) &&
         (*(long *)((long)register0x00000008 + -0x78) != 0)) {
        __ZdaPv();
      }
      if ((*(int *)(*(long *)((long)register0x00000008 + -0x68) + 8) - 0x40U < 0xffffff80) &&
         (*(long *)((long)register0x00000008 + -0x60) != 0)) {
        __ZdaPv();
      }
      __Unwind_Resume();
      param_1 = extraout_x8_00;
    }
    bVar3 = *(byte *)((long)ppuVar4 + 0x14);
    if ((bVar3 & 6) == 0 || (bVar3 & 7) == 3) {
      if ((bVar3 & 7) == 3) {
        puVar13 = (undefined *)0x0;
        uVar7 = 0;
      }
      else {
        if ((bVar3 & 7) == 0) {
          puVar13 = (undefined *)0x0;
        }
        else {
          ppuVar11 = ppuVar4 + 1;
          if (*(int *)(*ppuVar4 + 8) - 0x40U < 0xffffff80) {
            ppuVar11 = (undefined **)*ppuVar11;
          }
          puVar13 = *ppuVar11;
        }
        uVar7 = 0x7ff;
      }
    }
    else {
      ppuVar11 = ppuVar4 + 1;
      if (*(int *)(*ppuVar4 + 8) - 0x40U < 0xffffff80) {
        ppuVar11 = (undefined **)*ppuVar11;
      }
      puVar13 = *ppuVar11;
      uVar7 = (ulong)(*(int *)(ppuVar4 + 2) + 0x3ffU);
      if (*(int *)(ppuVar4 + 2) + 0x3ffU == 1) {
        uVar7 = (ulong)puVar13 >> 0x34 & 1;
      }
    }
    *(undefined4 *)(param_1 + 1) = 0x40;
    *param_1 = (undefined *)
               (((ulong)bVar3 & 8) << 0x3c | (uVar7 & 0x7ff) << 0x34 |
               (ulong)puVar13 & 0xfffffffffffff);
  }
FUN_109d301fc:
  uVar10 = *(uint *)(param_1 + 1);
  ppuVar4 = param_1;
  if (uVar10 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0xffffffffffffffff >> ((ulong)-uVar10 & 0x3f);
    if (0x40 < uVar10) {
      ppuVar4 = (undefined **)(*param_1 + (ulong)((int)((ulong)uVar10 + 0x3f >> 6) - 1) * 8);
    }
  }
  *ppuVar4 = (undefined *)((ulong)*ppuVar4 & uVar7);
  return param_1;
}



/* Entry: 109d32400; end: 109d3246f;  */

void FUN_109d32400(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uStack_34;
  
  uStack_34 = 0;
  FUN_109d32200(param_1 + 8,param_2,&uStack_34);
  FUN_109d32518(param_1,0,param_3,param_4);
  return;
}



/* Entry: 109d32470; end: 109d3249f;  */

void FUN_109d32470(undefined8 param_1,undefined8 *param_2)

{
  if ((undefined *)*param_2 == &DAT_10e05ae6c) {
    FUN_109ded868();
  }
  else {
    FUN_109de8340();
  }
  return;
}



/* Entry: 109d324a0; end: 109d324f3;  */

void FUN_109d324a0(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  
  puVar2 = *(undefined **)(param_1 + 8);
  while (puVar2 == &DAT_10e05ae6c) {
    FUN_109d324a0(*(undefined8 *)(param_1 + 0x10));
    plVar1 = (long *)(param_1 + 0x10);
    param_1 = *plVar1 + 0x20;
    puVar2 = *(undefined **)(*plVar1 + 0x28);
  }
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) ^ 8;
  return;
}



/* Entry: 109d324f4; end: 109d32517;  */

undefined8 * FUN_109d324f4(long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  puVar2 = (undefined8 *)(param_1 + 8);
  if ((undefined *)*puVar2 != &DAT_10e05ae6c) {
    puVar3 = puVar2;
    FUN_109de96c0(puVar2,param_2 + 8,1);
    if ((int)puVar3 == 2) {
      puVar3 = puVar2;
      FUN_109de8db8(puVar2,param_2 + 8,1);
      FUN_109de7fd0(puVar2,param_3,puVar3);
      puVar3 = puVar2;
    }
    bVar1 = *(byte *)(param_1 + 0x1c);
    if (((bVar1 & 7) == 3) &&
       (((*(byte *)(param_2 + 0x1c) & 7) != 3 || (((*(byte *)(param_2 + 0x1c) ^ bVar1) & 8) != 8))))
    {
      bVar4 = 8;
      if ((int)param_3 != 3) {
        bVar4 = 0;
      }
      *(byte *)(param_1 + 0x1c) = bVar1 & 0xf3 | bVar4;
    }
    return puVar3;
  }
  FUN_109d324a0(*(undefined8 *)(param_1 + 0x10));
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
  FUN_109d324a0(puVar2);
  FUN_109dedad0();
  FUN_109d324a0(*(undefined8 *)(param_1 + 0x10));
  FUN_109d324a0(*(long *)(param_1 + 0x10) + 0x20);
  return puVar2;
}



/* Entry: 109d32518; end: 109d32567;  */

void FUN_109d32518(long param_1,uint param_2,int param_3,long *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  byte bVar11;
  int *piVar12;
  undefined *puVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  uint uVar18;
  uint *puVar19;
  long lStack_80;
  uint uStack_78;
  long lStack_70;
  uint auStack_68 [2];
  
  puVar7 = (undefined8 *)(param_1 + 8);
  if ((undefined *)*puVar7 == &DAT_10e05ae6c) {
    FUN_109d32518(*(undefined8 *)(param_1 + 0x10));
    lVar8 = *(long *)(param_1 + 0x10) + 0x20;
    if (*(undefined **)(*(long *)(param_1 + 0x10) + 0x28) == &DAT_10e05ae6c) {
      do {
        FUN_109d32198(*(undefined8 *)(lVar8 + 0x10),0);
        plVar17 = (long *)(lVar8 + 0x10);
        lVar8 = *plVar17 + 0x20;
      } while (*(undefined **)(*plVar17 + 0x28) == &DAT_10e05ae6c);
    }
    *(byte *)(lVar8 + 0x1c) = *(byte *)(lVar8 + 0x1c) & 0xf0 | 3;
    iVar9 = *(int *)(*(long *)(lVar8 + 8) + 8);
    *(int *)(lVar8 + 0x18) = *(int *)(*(long *)(lVar8 + 8) + 4) + -1;
    if (0xffffff7f < iVar9 - 0x40U) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      return;
    }
    puVar7 = *(undefined8 **)(lVar8 + 0x10);
    *puVar7 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_11034bf90)(puVar7 + 1,(ulong)((iVar9 + 0x40U >> 6) - 1) << 3);
    return;
  }
  bVar11 = 9;
  if (param_3 == 0) {
    bVar11 = 1;
  }
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xf0 | bVar11;
  piVar12 = (int *)*puVar7;
  iVar1 = piVar12[4];
  iVar9 = *piVar12;
  if (iVar1 != 1) {
    iVar9 = iVar9 + 1;
  }
  *(int *)(param_1 + 0x18) = iVar9;
  uVar2 = piVar12[2];
  plVar17 = (long *)(param_1 + 0x10);
  if (uVar2 - 0x40 < 0xffffff80) {
    plVar17 = (long *)*plVar17;
  }
  uVar3 = uVar2 + 0x40 >> 6;
  auStack_68[0] = 1;
  lStack_70 = 0;
  if (iVar1 == 1) {
    puVar19 = auStack_68;
    func_0x000109d301b0(&lStack_80,uVar2 - 1,0xffffffffffffffff,1);
    param_2 = 0;
    lStack_70 = lStack_80;
    auStack_68[0] = uStack_78;
    param_4 = &lStack_70;
LAB_109de79c8:
    lVar8 = lStack_70;
    uVar18 = auStack_68[0];
    if ((uint)((ulong)uStack_78 + 0x3f >> 6) < uVar3) {
      bVar4 = false;
      goto LAB_109de79ec;
    }
LAB_109de7a40:
    if (0x40 < uStack_78) {
      param_4 = (long *)*param_4;
    }
    uVar10 = (uint)((ulong)uStack_78 + 0x3f >> 6);
    uVar5 = uVar3;
    if (uVar10 <= uVar3) {
      uVar5 = uVar10;
    }
    uVar15 = (ulong)uVar5;
    plVar14 = plVar17;
    if (uVar5 != 0) {
      do {
        *plVar14 = *param_4;
        uVar15 = uVar15 - 1;
        plVar14 = plVar14 + 1;
        param_4 = param_4 + 1;
      } while (uVar15 != 0);
    }
    puVar13 = (undefined *)*puVar7;
    iVar9 = *(int *)(puVar13 + 8);
    uVar5 = iVar9 - 1U >> 6;
    plVar17[uVar5] = plVar17[uVar5] & (-1L << ((ulong)(iVar9 - 1U) & 0x3f) ^ 0xffffffffffffffffU);
    while (uVar5 = uVar5 + 1, uVar5 != uVar3) {
      plVar17[uVar5] = 0;
    }
    uVar15 = (ulong)(iVar9 - 2);
    if (param_2 != 0) goto LAB_109de7ac0;
LAB_109de7a24:
    uVar16 = uVar15 >> 6;
    uVar15 = 1L << (uVar15 & 0x3f) | plVar17[uVar16];
  }
  else {
    puVar19 = (uint *)(param_4 + 1);
    if (param_4 != (long *)0x0) {
      uStack_78 = *puVar19;
      goto LAB_109de79c8;
    }
    bVar4 = true;
LAB_109de79ec:
    uVar18 = auStack_68[0];
    lVar8 = lStack_70;
    *plVar17 = 0;
    if (0x7f < uVar2 + 0x40) {
      _bzero(plVar17 + 1,(ulong)(uVar3 - 1) << 3);
    }
    if (!bVar4) {
      uStack_78 = *puVar19;
      goto LAB_109de7a40;
    }
    puVar13 = (undefined *)*puVar7;
    iVar9 = *(int *)(puVar13 + 8);
    uVar15 = (ulong)(iVar9 - 2);
    if ((param_2 & 1) == 0) goto LAB_109de7a24;
LAB_109de7ac0:
    plVar17[uVar15 >> 6] = plVar17[uVar15 >> 6] & (1L << (uVar15 & 0x3f) ^ 0xffffffffffffffffU);
    if (uVar2 < 0xffffffc0) {
      if (*plVar17 != 0) goto LAB_109de7afc;
      uVar15 = 0;
      do {
        if ((ulong)uVar3 - 1 == uVar15) goto LAB_109de7ae0;
        lVar6 = uVar15 + 1;
        uVar15 = uVar15 + 1;
      } while (plVar17[lVar6] == 0);
      if (uVar15 < uVar3) goto LAB_109de7afc;
    }
LAB_109de7ae0:
    uVar16 = (ulong)(iVar9 - 3U >> 6);
    uVar15 = plVar17[uVar16] | 1L << ((ulong)(iVar9 - 3U) & 0x3f);
  }
  plVar17[uVar16] = uVar15;
LAB_109de7afc:
  if (puVar13 == &DAT_10e05aea8) {
    uVar2 = iVar9 - 1U >> 6;
    plVar17[uVar2] = plVar17[uVar2] | 1L << ((ulong)(iVar9 - 1U) & 0x3f);
  }
  if ((0x40 < uVar18) && (lVar8 != 0)) {
    __ZdaPv();
  }
  return;
}



/* Entry: 109d32568; end: 109d3261b;  */

undefined8 * FUN_109d32568(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((undefined *)*param_1 == &DAT_10e05ae6c || (undefined *)*param_2 == &DAT_10e05ae6c) {
    if ((undefined *)*param_1 == &DAT_10e05ae6c && (undefined *)*param_2 == &DAT_10e05ae6c) {
      FUN_109d3261c(param_1,param_2);
      return param_1;
    }
    if (param_1 == param_2) {
      return param_1;
    }
    FUN_109d32234(param_1);
    if ((undefined *)*param_2 == &DAT_10e05ae6c) {
      uVar1 = param_2[1];
      param_2[1] = 0;
      *param_1 = &DAT_10e05ae6c;
      param_1[1] = uVar1;
      *param_2 = &UNK_10e05aebc;
      return param_1;
    }
    *param_1 = &UNK_10e05aebc;
  }
  func_0x000109de7c14(param_1,param_2);
  return param_1;
}



/* Entry: 109d3261c; end: 109d32673;  */

undefined8 * FUN_109d3261c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    lVar1 = param_1[1];
    param_1[1] = 0;
    if (lVar1 != 0) {
      func_0x000109d3229c();
    }
    uVar3 = param_2[1];
    uVar2 = *param_2;
    param_2[1] = 0;
    param_1[1] = uVar3;
    *param_1 = uVar2;
    *param_2 = &UNK_10e05aebc;
  }
  return param_1;
}



/* Entry: 109d32674; end: 109d32727;  */

long * FUN_109d32674(long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined1 **ppuVar12;
  undefined **ppuVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  long *plVar16;
  long lVar17;
  long extraout_x8;
  ulong uVar18;
  long *plVar19;
  int iVar20;
  undefined8 *puVar21;
  uint uVar22;
  uint uVar23;
  undefined1 uVar24;
  uint uVar25;
  int iVar26;
  undefined8 uVar27;
  undefined1 **ppuVar28;
  int iVar29;
  uint uVar30;
  long *plVar31;
  undefined **ppuVar32;
  long *plStack_2d0;
  uint uStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined1 *****pppppuStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  undefined4 uStack_298;
  uint uStack_294;
  long *plStack_290;
  long *plStack_288;
  uint uStack_280;
  int iStack_27c;
  undefined1 *puStack_278;
  undefined1 ****ppppuStack_220;
  code *pcStack_218;
  undefined1 uStack_201;
  long *plStack_200;
  long *plStack_1f8;
  byte bStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  long *plStack_1c8;
  undefined1 ***pppuStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  long *plStack_1a8;
  undefined *puStack_198;
  undefined1 auStack_190 [24];
  undefined *puStack_178;
  long alStack_170 [3];
  long lStack_158;
  undefined8 uStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  long *plStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  uint uStack_118;
  undefined *puStack_110;
  undefined8 *puStack_108;
  long lStack_f8;
  long alStack_f0 [3];
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined **ppuStack_88;
  uint uStack_80;
  long lStack_78;
  undefined *apuStack_70 [3];
  long lStack_58;
  
  plVar7 = (long *)(param_1 + 8);
  if ((undefined *)*plVar7 != &DAT_10e05ae6c) {
    FUN_109dea4e8();
    if ((int)plVar7 == 1) {
      iVar26 = (int)param_4;
      uVar6 = iVar26 + 0x3fU >> 6;
      iVar29 = (int)param_5;
      iVar20 = iVar26 - iVar29;
      if ((*(byte *)(param_1 + 0x1c) & 8) != 0) {
        iVar20 = iVar29;
      }
      iVar1 = 0;
      if ((*(byte *)(param_1 + 0x1c) & 7) != 1) {
        iVar1 = iVar20;
      }
      FUN_109de9568(param_2,uVar6,iVar1);
      if ((iVar29 != 0) && ((*(byte *)(param_1 + 0x1c) >> 3 & 1) != 0)) {
        FUN_109df0fe4(param_2,uVar6,iVar26 + -1);
      }
    }
    return plVar7;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109deea4c(&ppuStack_88);
  FUN_109dece44(apuStack_70,&ppuStack_88);
  plVar7 = &lStack_78;
  uVar10 = param_2;
  uVar27 = param_3;
  ppuVar32 = param_4;
  FUN_109d32674(plVar7,param_2,param_3,param_4,param_5,param_6,param_7);
  ppuVar8 = apuStack_70;
  FUN_109d32234();
  if ((0x40 < uStack_80) && (ppuVar8 = ppuStack_88, ppuStack_88 != (undefined **)0x0)) {
    __ZdaPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar7;
  }
  ___stack_chk_fail();
  FUN_109d32234(apuStack_70);
  if ((0x40 < uStack_80) && (ppuStack_88 != (undefined **)0x0)) {
    __ZdaPv();
  }
  ppuVar9 = ppuVar8;
  __Unwind_Resume();
  ppuVar13 = &puStack_120;
  pcStack_98 = FUN_109def420;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_d0 = param_2;
  uStack_c8 = param_3;
  ppuStack_c0 = param_4;
  uStack_b8 = param_5;
  uStack_b0 = param_6;
  ppuStack_a8 = ppuVar8;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_109de8290(alStack_f0,&UNK_10e05aed0);
  plVar7 = &lStack_f8;
  FUN_109d5e7ec(plVar7,uVar10,uVar27);
  FUN_109d323e4(&puStack_120,&lStack_f8);
  ppuVar8 = &puStack_110;
  FUN_109ded6cc(&puStack_110,&DAT_10e05ae6c);
  puVar11 = puStack_108;
  if (ppuVar8 == ppuVar9) {
    puStack_108 = (undefined8 *)0x0;
    if (puVar11 != (undefined8 *)0x0) {
      func_0x000109d3229c((ulong)&puStack_110 | 8);
    }
  }
  else {
    puVar11 = (undefined8 *)ppuVar9[1];
    ppuVar9[1] = (undefined *)0x0;
    if (puVar11 != (undefined8 *)0x0) {
      func_0x000109d3229c();
    }
    ppuVar9[1] = (undefined *)puStack_108;
    *ppuVar9 = puStack_110;
    puStack_110 = &UNK_10e05aebc;
    puStack_108 = (undefined8 *)0x0;
  }
  if ((0x40 < uStack_118) && (puStack_120 != (undefined *)0x0)) {
    __ZdaPv();
  }
  plVar16 = alStack_f0;
  FUN_109d32234();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return plVar7;
  }
  ___stack_chk_fail();
  if ((0x40 < uStack_118) && (puStack_120 != (undefined *)0x0)) {
    __ZdaPv();
  }
  FUN_109d32234(alStack_f0);
  plVar7 = plVar16;
  __Unwind_Resume();
  pcStack_128 = FUN_109def58c;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_150 = uVar10;
  ppuStack_148 = ppuVar8;
  ppuStack_140 = ppuVar9;
  plStack_138 = plVar16;
  ppuStack_130 = &puStack_a0;
  if (ppuVar13 == (undefined **)&DAT_10e05ae6c) {
    uVar27 = *puVar11;
    puStack_1b0 = &UNK_10e05aebc;
    func_0x000109de7c14(&puStack_1b0);
    FUN_109d32794(&puStack_178,&puStack_1b0,uVar27);
    ppuVar9 = &puStack_198;
    FUN_109de8290(auStack_190,&DAT_10e05ae44);
    ppuVar8 = &puStack_178;
    ppuVar13 = &puStack_178;
    ppuVar32 = &puStack_198;
    FUN_109ded7a8(plVar7,&DAT_10e05ae6c,ppuVar13);
    FUN_109d32234(auStack_190);
    plVar16 = alStack_170;
    FUN_109d32234();
    if ((*(int *)(puStack_1b0 + 8) - 0x40U < 0xffffff80) &&
       (plVar16 = plStack_1a8, plStack_1a8 != (long *)0x0)) {
      __ZdaPv();
    }
  }
  else {
    *plVar7 = (long)&UNK_10e05aebc;
    plVar16 = plVar7;
    func_0x000109de7c14();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return plVar7;
  }
  ___stack_chk_fail();
  FUN_109d32234(ppuVar9 + 1);
  FUN_109d32234(alStack_170);
  if ((*(int *)(puStack_1b0 + 8) - 0x40U < 0xffffff80) && (plStack_1a8 != (long *)0x0)) {
    __ZdaPv();
  }
  plVar7 = plVar16;
  __Unwind_Resume();
  pcStack_1b8 = FUN_109def6e8;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1e0 = uVar10;
  ppuStack_1d8 = ppuVar8;
  ppuStack_1d0 = ppuVar9;
  plStack_1c8 = plVar16;
  pppuStack_1c0 = &ppuStack_130;
  FUN_109d32854(plVar7 + 1);
  puVar14 = (undefined1 *)0x1;
  FUN_109def2ec(&plStack_1f8,plVar7,ppuVar13);
  plStack_200 = plStack_1f8;
  ppuVar28 = (undefined1 **)(ulong)bStack_1f0;
  if ((bStack_1f0 & 1) == 0) {
    plStack_200 = (long *)0x0;
  }
  else {
    plStack_1f8 = (long *)0x0;
  }
  ppuVar12 = (undefined1 **)&uStack_201;
  FUN_109d3b1b0(&plStack_200);
  plVar16 = plStack_200;
  if (plStack_200 != (long *)0x0) {
    (**(code **)(*plStack_200 + 8))();
  }
  if (((bStack_1f0 & 1) != 0) && (plVar16 = plStack_1f8, plStack_1f8 != (long *)0x0)) {
    (**(code **)(*plStack_1f8 + 8))();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return plVar7;
  }
  ___stack_chk_fail();
  if (plStack_200 != (long *)0x0) {
    (**(code **)(*plStack_200 + 8))();
  }
  if (((bStack_1f0 & 1) != 0) && (plStack_1f8 != (long *)0x0)) {
    (**(code **)(*plStack_1f8 + 8))();
  }
  FUN_109d32234(plVar7 + 1);
  __Unwind_Resume();
  pcStack_218 = FUN_109def808;
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = plVar16 + 1;
  ppppuStack_220 = &pppuStack_1c0;
  if ((undefined1 **)*plVar7 == ppuVar12) {
    plVar19 = (long *)0x0;
    *puVar14 = 0;
  }
  else {
    ppuVar28 = ppuVar12;
    if ((undefined1 **)*plVar7 == (undefined1 **)&DAT_10e05ae6c) {
      plVar19 = (long *)(plVar16[2] + 8);
      FUN_109de8868(plVar19,ppuVar12);
      plVar31 = plVar7;
      if ((undefined *)plVar16[1] == &DAT_10e05ae6c) {
        plVar31 = (long *)(plVar16[2] + 8);
      }
      puStack_2a0 = &UNK_10e05aebc;
      func_0x000109de7c14(&puStack_2a0,plVar31);
      FUN_109d32794(&puStack_278,&puStack_2a0,ppuVar12);
      FUN_109d32568(plVar7,&stack0xfffffffffffffd90);
      plVar16 = (long *)&stack0xfffffffffffffd90;
      FUN_109d32234();
      if (*(int *)(puStack_2a0 + 8) - 0x40U < 0xffffff80) {
        plVar31 = (long *)CONCAT44(uStack_294,uStack_298);
joined_r0x000109def924:
        plVar16 = plVar31;
        ppuVar28 = ppuVar12;
        if (plVar16 != (long *)0x0) {
          __ZdaPv();
        }
      }
    }
    else {
      if (ppuVar12 != (undefined1 **)&DAT_10e05ae6c) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) goto LAB_109def9c4;
        plVar31 = (long *)*plVar7;
        plVar19 = plVar7;
        puStack_278 = puVar14;
        FUN_109de9830();
        uVar25 = 0;
        uVar6 = *(int *)(ppuVar12 + 1) + 0x40;
        uVar2 = *(uint *)(plVar31 + 1);
        uVar30 = *(int *)(ppuVar12 + 1) - uVar2;
        if ((ppuVar12 != (undefined1 **)&DAT_10e05aea8) && (plVar31 == (long *)&DAT_10e05aea8)) {
          if ((*(byte *)((long)plVar16 + 0x1c) & 7) == 1) {
            if (uVar2 - 0x40 < 0xffffff80) {
              uVar18 = *(ulong *)plVar16[2];
            }
            else {
              uVar18 = plVar16[2];
            }
            if ((-1 < (long)uVar18) || ((uVar18 >> 0x3e & 1) == 0)) {
              uVar25 = 1;
              goto LAB_109de8918;
            }
          }
          uVar25 = 0;
        }
LAB_109de8918:
        uVar4 = uVar6 >> 6;
        uVar5 = uVar2 + 0x40 >> 6;
        uVar18 = (ulong)uVar5;
        plStack_290 = plVar19;
        plStack_288 = plVar31;
        if ((int)uVar30 < 0) {
          bVar3 = *(byte *)((long)plVar16 + 0x1c) & 7;
          if ((*(byte *)((long)plVar16 + 0x1c) & 6) == 0 || bVar3 == 3) {
            if ((bVar3 == 1) && ((int)plVar31[2] != 1)) {
LAB_109de8ce4:
              plVar19 = plVar16 + 2;
              if (uVar2 - 0x40 < 0xffffff80) {
                plVar19 = (long *)*plVar19;
              }
              lVar17 = (long)plVar19;
              uStack_294 = (uint)ppuVar32;
              uStack_280 = uVar25;
              FUN_109dea7ec(plVar19,uVar18,-uVar30);
              iStack_27c = (int)lVar17;
              func_0x000109df0f28(plVar19,uVar18,-uVar30);
              ppuVar32 = (undefined **)(ulong)uStack_294;
              uVar25 = uStack_280;
              goto LAB_109de892c;
            }
          }
          else {
            plVar19 = plVar16 + 2;
            if (uVar2 - 0x40 < 0xffffff80) {
              plVar19 = (long *)*plVar19;
            }
            iVar20 = uVar5 * -0x40;
            uVar22 = uVar5 - 1;
            do {
              iVar20 = iVar20 + 0x40;
              if (plVar19[uVar22] != 0) {
                uVar22 = (int)LZCOUNT(plVar19[uVar22]) - iVar20 ^ 0x3f;
                goto LAB_109de8c20;
              }
              uVar22 = uVar22 - 1;
            } while (uVar22 != 0xffffffff);
            uVar22 = 0xffffffff;
LAB_109de8c20:
            iVar20 = uVar22 + 1;
            iVar26 = (int)plVar16[3];
            uVar23 = *(int *)((long)ppuVar12 + 4) - iVar26;
            if (*(int *)((long)ppuVar12 + 4) <= (int)((iVar20 - uVar2) + iVar26)) {
              uVar23 = iVar20 - uVar2;
            }
            if ((int)uVar23 < 0) {
              if (uVar23 <= uVar30) {
                uVar23 = uVar30;
              }
              uVar30 = uVar30 - uVar23;
            }
            else {
              if (iVar20 + uVar30 != 0 && (int)(iVar20 + uVar30) < 0 == SCARRY4(iVar20,uVar30))
              goto LAB_109de8ce4;
              uVar23 = uVar22 + uVar30;
              uVar30 = -uVar22;
            }
            *(uint *)(plVar16 + 3) = uVar23 + iVar26;
            if ((int)uVar30 < 0) goto LAB_109de8ce4;
          }
        }
        iStack_27c = 0;
LAB_109de892c:
        if (uVar5 < uVar4) {
          puVar11 = (undefined8 *)(ulong)(uVar4 << 3);
          uStack_280 = uVar25;
          __Znam();
          *puVar11 = 0;
          if (0x7f < uVar6) {
            _bzero(puVar11 + 1,(ulong)(uVar4 - 1) << 3);
          }
          bVar3 = *(byte *)((long)plVar16 + 0x1c) & 7;
          uVar6 = *(int *)(*plVar7 + 8) - 0x40;
          if ((bVar3 == 1) || ((*(byte *)((long)plVar16 + 0x1c) & 6) != 0 && bVar3 != 3)) {
            plVar19 = plVar16 + 2;
            if (uVar6 < 0xffffff80) {
              plVar19 = (long *)*plVar19;
            }
            puVar21 = puVar11;
            if (uVar2 < 0xffffffc0) {
              do {
                *puVar21 = *plVar19;
                uVar18 = uVar18 - 1;
                plVar19 = plVar19 + 1;
                puVar21 = puVar21 + 1;
              } while (uVar18 != 0);
            }
          }
          if ((uVar6 < 0xffffff80) && (plVar16[2] != 0)) {
            __ZdaPv();
          }
          plVar16[2] = (long)puVar11;
          uVar25 = uStack_280;
        }
        else if (uVar4 == 1 && uVar5 != 1) {
          bVar3 = *(byte *)((long)plVar16 + 0x1c) & 7;
          uVar6 = *(int *)(*plVar7 + 8) - 0x40;
          if ((bVar3 == 1) || ((*(byte *)((long)plVar16 + 0x1c) & 6) != 0 && bVar3 != 3)) {
            plVar19 = plVar16 + 2;
            if (uVar6 < 0xffffff80) {
              plVar19 = (long *)*plVar19;
            }
            lVar17 = *plVar19;
          }
          else {
            lVar17 = 0;
          }
          if ((uVar6 < 0xffffff80) && (plVar16[2] != 0)) {
            __ZdaPv();
          }
          plVar16[2] = lVar17;
        }
        uVar24 = (undefined1)uVar25;
        *plVar7 = (long)ppuVar12;
        if ((0 < (int)uVar30) &&
           (bVar3 = *(byte *)((long)plVar16 + 0x1c) & 7,
           bVar3 == 1 || (*(byte *)((long)plVar16 + 0x1c) & 6) != 0 && bVar3 != 3)) {
          plVar19 = plVar16 + 2;
          if (*(int *)(ppuVar12 + 1) - 0x40U < 0xffffff80) {
            plVar19 = (long *)*plVar19;
          }
          FUN_109df0fe4(plVar19,uVar4,uVar30);
        }
        bVar3 = *(byte *)((long)plVar16 + 0x1c);
        if (((bVar3 & 6) == 0) || ((bVar3 & 7) == 3)) {
          if ((bVar3 & 7) == 0) {
            if (*(int *)(*plVar7 + 0x10) == 1) {
              FUN_109de78e4(plVar7,0,bVar3 >> 3 & 1,0);
              *puStack_278 = 1;
              return (long *)0x10;
            }
          }
          else if ((bVar3 & 7) == 1) {
            puVar15 = (undefined *)*plVar7;
            if (*(int *)(puVar15 + 0x10) == 1) {
              *puStack_278 = (int)plStack_288[2] != 1;
              FUN_109de78e4(plVar7,0,*(byte *)((long)plVar16 + 0x1c) >> 3 & 1,0);
              return plStack_290;
            }
            if (iStack_27c != 0) {
              uVar24 = 1;
            }
            *puStack_278 = uVar24;
            if (puVar15 != &DAT_10e05aea8) {
              uVar25 = 1;
            }
            if ((uVar25 & 1) == 0) {
              *(ulong *)plVar16[2] = *(ulong *)plVar16[2] | 0x8000000000000000;
            }
            if ((int)plStack_290 != 0) {
              plVar16 = plVar16 + 2;
              if (*(int *)(puVar15 + 8) - 0x40U < 0xffffff80) {
                plVar16 = (long *)*plVar16;
              }
              uVar6 = *(int *)(puVar15 + 8) - 2;
              uVar25 = uVar6 >> 6;
              plVar16[uVar25] = plVar16[uVar25] | 1L << ((ulong)uVar6 & 0x3f);
              return (long *)0x1;
            }
            return (long *)0x0;
          }
          plVar7 = (long *)0x0;
          *puStack_278 = 0;
        }
        else {
          FUN_109de7fd0(plVar7,ppuVar32,iStack_27c);
          *puStack_278 = (int)plVar7 != 0;
        }
        return plVar7;
      }
      plVar19 = plVar7;
      FUN_109de8868(plVar7,&UNK_10e05aed0);
      func_0x000109decc74(&plStack_288,plVar7);
      ppuVar12 = &puStack_278;
      FUN_109ded6cc(&stack0xfffffffffffffd90,&DAT_10e05ae6c,&plStack_288);
      FUN_109d32568(plVar7,&stack0xfffffffffffffd90);
      plVar16 = (long *)&stack0xfffffffffffffd90;
      FUN_109d32234();
      ppuVar28 = ppuVar12;
      plVar31 = plStack_288;
      if (0x40 < uStack_280) goto joined_r0x000109def924;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return plVar19;
  }
LAB_109def9c4:
  ___stack_chk_fail();
  FUN_109d32234(ppuVar28 + 1);
  if ((0x40 < uStack_280) && (plStack_288 != (long *)0x0)) {
    __ZdaPv();
  }
  plVar19 = plVar16;
  __Unwind_Resume();
  pcStack_2a8 = FUN_109defa38;
  plStack_2c0 = plVar7;
  plStack_2b8 = plVar16;
  pppppuStack_2b0 = &ppppuStack_220;
  func_0x000109d301b0(&plStack_2d0,*(undefined4 *)((long)plVar19 + 0xc),0xffffffffffffffff,1);
  plVar7 = (long *)(extraout_x8 + 8);
  func_0x000109d322e8(plVar7,plVar19,&plStack_2d0);
  if ((0x40 < uStack_2c8) && (plVar7 = plStack_2d0, plStack_2d0 != (long *)0x0)) {
    __ZdaPv();
    plVar7 = plStack_2d0;
  }
  return plVar7;
}



/* Entry: 109d32728; end: 109d32793;  */

bool FUN_109d32728(long *param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 < 0x41) {
    return *param_1 == 1L << ((ulong)(uVar1 - 1) & 0x3f);
  }
  uVar1 = uVar1 - 1;
  if ((*(ulong *)(*param_1 + (ulong)(uVar1 >> 6) * 8) >> ((ulong)uVar1 & 0x3f) & 1) == 0) {
    bVar2 = false;
  }
  else {
    func_0x000109df09c4();
    bVar2 = (uint)param_1 == uVar1;
  }
  return bVar2;
}



/* Entry: 109d32794; end: 109d3282f;  */

long FUN_109d32794(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  long lStack_30;
  
  puStack_38 = &UNK_10e05aebc;
  func_0x000109de7c14(&puStack_38);
  FUN_109def58c(param_1 + 8,&puStack_38,param_3);
  if ((*(int *)(puStack_38 + 8) - 0x40U < 0xffffff80) && (lStack_30 != 0)) {
    __ZdaPv();
  }
  return param_1;
}



/* Entry: 109d32830; end: 109d32853;  */

undefined ** FUN_109d32830(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  long lVar7;
  byte bVar8;
  long lStack_d0;
  uint uStack_c8;
  long lStack_c0;
  uint uStack_b8;
  long lStack_b0;
  uint auStack_a8 [6];
  undefined *puStack_90;
  long alStack_88 [4];
  undefined *puStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  long in_stack_ffffffffffffffc0;
  
  ppuVar4 = (undefined **)(param_1 + 8);
  lVar7 = param_2 + 8;
  lVar1 = param_3 + 8;
  if (*ppuVar4 != &DAT_10e05ae6c) {
    bVar3 = *(byte *)(param_1 + 0x1c);
    *(byte *)(param_1 + 0x1c) = *(byte *)(param_2 + 0x1c) & 8 ^ bVar3;
    if ((((bVar3 & 6) == 0 || (bVar3 & 7) == 3) ||
        ((*(byte *)(param_2 + 0x1c) & 6) == 0 || (*(byte *)(param_2 + 0x1c) & 7) == 3)) ||
       ((*(byte *)(param_3 + 0x1c) & 6) == 0)) {
      ppuVar5 = ppuVar4;
      FUN_109de988c(ppuVar4,lVar7);
      if ((int)ppuVar5 == 0) {
        ppuVar5 = ppuVar4;
        FUN_109de96c0(ppuVar4,lVar1,0);
        if ((int)ppuVar5 == 2) {
          ppuVar5 = ppuVar4;
          FUN_109de8db8(ppuVar4,lVar1,0);
          FUN_109de7fd0(ppuVar4,param_4,ppuVar5);
          ppuVar5 = ppuVar4;
        }
        bVar3 = *(byte *)(param_1 + 0x1c);
        if (((bVar3 & 7) == 3) &&
           (((*(byte *)(param_3 + 0x1c) & 7) != 3 ||
            (((*(byte *)(param_3 + 0x1c) ^ bVar3) & 8) != 0)))) {
          bVar8 = 8;
          if ((int)param_4 != 3) {
            bVar8 = 0;
          }
          *(byte *)(param_1 + 0x1c) = bVar3 & 0xf3 | bVar8;
        }
        return ppuVar5;
      }
      ppuVar4 = (undefined **)0x1;
    }
    else {
      FUN_109de8340(&lStack_48,lVar1);
      ppuVar5 = ppuVar4;
      FUN_109de8500(ppuVar4,lVar7,&lStack_48);
      if ((*(int *)(lStack_48 + 8) - 0x40U < 0xffffff80) && (in_stack_ffffffffffffffc0 != 0)) {
        __ZdaPv();
      }
      FUN_109de7fd0(ppuVar4,param_4,ppuVar5);
      uVar2 = (uint)ppuVar4;
      if ((int)ppuVar5 != 0) {
        uVar2 = (uint)ppuVar4 | 0x10;
      }
      ppuVar4 = (undefined **)(ulong)uVar2;
      bVar3 = *(byte *)(param_1 + 0x1c);
      if ((((bVar3 & 7) == 3) && ((uVar2 >> 3 & 1) == 0)) &&
         (((*(byte *)(param_3 + 0x1c) ^ bVar3) >> 3 & 1) != 0)) {
        bVar8 = 8;
        if ((int)param_4 != 3) {
          bVar8 = 0;
        }
        *(byte *)(param_1 + 0x1c) = bVar3 & 0xf3 | bVar8;
      }
    }
    return ppuVar4;
  }
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109deea4c(&puStack_90);
  FUN_109dece44(auStack_60,&puStack_90);
  if ((0x40 < (uint)alStack_88[0]) && (puStack_90 != (undefined *)0x0)) {
    __ZdaPv();
  }
  FUN_109deea4c(&lStack_c0,lVar7);
  FUN_109dece44(alStack_88,&lStack_c0);
  FUN_109deea4c(&lStack_d0,lVar1);
  FUN_109dece44(auStack_a8,&lStack_d0);
  ppuVar5 = &puStack_68;
  FUN_109d32830(ppuVar5,&puStack_90,&lStack_b0,param_4);
  FUN_109d32234(auStack_a8);
  if ((0x40 < uStack_c8) && (lStack_d0 != 0)) {
    __ZdaPv();
  }
  FUN_109d32234(alStack_88);
  if ((0x40 < uStack_b8) && (lStack_c0 != 0)) {
    __ZdaPv();
  }
  FUN_109d323e4(&lStack_b0,&puStack_68);
  FUN_109ded6cc(&puStack_90,&DAT_10e05ae6c,&lStack_b0);
  lVar7 = alStack_88[0];
  if (&puStack_90 == ppuVar4) {
    alStack_88[0] = 0;
    if (lVar7 != 0) {
      func_0x000109d3229c((ulong)&puStack_90 | 8);
    }
  }
  else {
    lVar7 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = 0;
    if (lVar7 != 0) {
      func_0x000109d3229c();
    }
    *(long *)(param_1 + 0x10) = alStack_88[0];
    *ppuVar4 = puStack_90;
    puStack_90 = &UNK_10e05aebc;
    alStack_88[0] = 0;
  }
  if ((0x40 < auStack_a8[0]) && (lStack_b0 != 0)) {
    __ZdaPv();
  }
  puVar6 = auStack_60;
  FUN_109d32234(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  if ((0x40 < auStack_a8[0]) && (lStack_b0 != 0)) {
    __ZdaPv();
  }
  FUN_109d32234(auStack_60);
  do {
    do {
      do {
        __Unwind_Resume(puVar6);
      } while ((uint)alStack_88[0] < 0x41);
    } while (puStack_90 == (undefined *)0x0);
    __ZdaPv();
  } while( true );
}



/* Entry: 109d32854; end: 109d32887;  */

void FUN_109d32854(undefined8 param_1,undefined *param_2)

{
  if (param_2 == &DAT_10e05ae6c) {
    FUN_109ded5a4(param_1,&DAT_10e05ae6c);
  }
  else {
    FUN_109de8290();
  }
  return;
}



/* Entry: 109d32888; end: 109d328a7;  */

void FUN_109d32888(long param_1,long param_2)

{
  undefined8 uVar1;
  
  while( true ) {
    if (*(undefined **)(param_1 + 8) != &DAT_10e05ae6c) {
                    /* WARNING: Could not recover jumptable at 0x000109de7db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10e05adb8)
                              [(*(byte *)(param_1 + 0x1c) & 7) * 4 + (*(byte *)(param_2 + 0x1c) & 7)
                              ] * 4 + 0x109de7db8))((undefined8 *)(param_1 + 8),3);
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    FUN_109d32888(uVar1,*(undefined8 *)(param_2 + 0x10));
    if ((int)uVar1 != 1) break;
    param_1 = *(long *)(param_1 + 0x10) + 0x20;
    param_2 = *(long *)(param_2 + 0x10) + 0x20;
  }
  return;
}



/* Entry: 109d328a8; end: 109d3298f;  */

void FUN_109d328a8(undefined8 *param_1,undefined8 *param_2)

{
  if ((undefined *)*param_1 == &DAT_10e05ae6c || (undefined *)*param_2 == &DAT_10e05ae6c) {
    if ((undefined *)*param_1 == &DAT_10e05ae6c && (undefined *)*param_2 == &DAT_10e05ae6c) {
      FUN_109ded914(param_1,param_2);
    }
    else if (param_1 != param_2) {
      FUN_109d32234();
      FUN_109d32470();
    }
  }
  else {
    FUN_109de7b88(param_1,param_2);
  }
  return;
}



/* Entry: 109d32990; end: 109d32a2b;  */

void FUN_109d32990(long *param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((ulong)param_1[2] < param_2) {
    param_1[1] = 0;
    FUN_109dffce4(param_1,param_1 + 3,param_2,1);
    lVar1 = *param_1;
    uVar2 = param_2;
  }
  else {
    uVar3 = param_1[1];
    uVar2 = uVar3;
    if (param_2 <= uVar3) {
      uVar2 = param_2;
    }
    if (uVar2 != 0) {
      _memset(*param_1,param_3);
      uVar3 = param_1[1];
    }
    uVar2 = param_2 - uVar3;
    if (param_2 < uVar3 || uVar2 == 0) goto LAB_109d32a18;
    lVar1 = *param_1 + uVar3;
  }
  _memset(lVar1,param_3,uVar2);
LAB_109d32a18:
  param_1[1] = param_2;
  return;
}



/* Entry: 109d32a2c; end: 109d32a67;  */

undefined8 * FUN_109d32a2c(long *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_38;
  
  puVar2 = (undefined8 *)(*param_1 + 0x768);
  FUN_109d9ffc0(puVar2,param_3);
  if (param_3 != 0) {
    lVar5 = 0;
    do {
      if (*(char *)(param_2 + lVar5) != '\0') {
        uStack_38 = 0;
        plVar6 = (long *)(*(long *)*puVar2 + 0x578);
        FUN_109d71890();
        lVar5 = *plVar6;
        FUN_109d6b36c(&uStack_38,0);
        puVar3 = (undefined8 *)(lVar5 + 8);
        puVar1 = (undefined8 *)*puVar3;
        if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
          do {
            puVar3 = puVar1;
            if ((undefined8 *)*puVar3 == puVar2) {
              return puVar3;
            }
            puVar1 = (undefined8 *)puVar3[4];
          } while ((undefined8 *)puVar3[4] != (undefined8 *)0x0);
          puVar3 = puVar3 + 4;
        }
        lVar5 = lVar5 + 0x10;
        if (*(char *)(puVar2 + 1) == '\x11') {
          plVar6 = (long *)0x28;
          __Znwm();
          *plVar6 = (long)puVar2;
          plVar6[1] = 0;
          plVar6[2] = 0xe;
          plVar6[3] = lVar5;
          plVar6[4] = 0;
        }
        else {
          plVar6 = (long *)0x30;
          __Znwm();
          *plVar6 = (long)puVar2;
          plVar6[1] = 0;
          plVar6[2] = 0xf;
          plVar6[3] = lVar5;
          plVar6[4] = 0;
          *(byte *)(plVar6 + 5) = *(byte *)(plVar6 + 5) & 0xfe;
        }
        FUN_109d6b36c(puVar3,plVar6);
        return (undefined8 *)*puVar3;
      }
      lVar5 = lVar5 + 1;
    } while (param_3 != lVar5);
  }
  lVar5 = *(long *)*puVar2 + 0x4b8;
  FUN_109d6eaf8(lVar5,&stack0xffffffffffffffd8);
  plVar6 = (long *)(lVar5 + 8);
  puVar3 = (undefined8 *)*plVar6;
  if (puVar3 == (undefined8 *)0x0) {
    plVar4 = (long *)0x18;
    __Znwm();
    *plVar4 = (long)puVar2;
    plVar4[1] = 0;
    plVar4[2] = 0xd;
    FUN_109d69b08(plVar6,plVar4);
    puVar3 = (undefined8 *)*plVar6;
  }
  return puVar3;
}



/* Entry: 109d32a68; end: 109d32acf;  */

void FUN_109d32a68(long param_1,undefined8 param_2,int param_3)

{
  func_0x000109d301b0(param_1,param_2,0,0);
  FUN_109d32ba0(param_1,*(int *)(param_1 + 8) - param_3);
  return;
}



/* Entry: 109d32ad0; end: 109d32b37;  */

void FUN_109d32ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000109d301b0(param_1,param_2,0,0);
  FUN_109d32ba0(param_1,0,param_3);
  return;
}



/* Entry: 109d32b38; end: 109d32b9f;  */

void FUN_109d32b38(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000109d301b0(param_1,param_2,0,0);
  FUN_109d32ba0(param_1,param_3,*(undefined4 *)(param_1 + 8));
  return;
}



/* Entry: 109d32ba0; end: 109d32c03;  */

void FUN_109d32ba0(ulong *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == param_3) {
    return;
  }
  if ((param_2 < 0x40) && (param_3 < 0x41)) {
    uVar3 = (0xffffffffffffffffU >> ((ulong)(param_2 - param_3) & 0x3f)) << ((ulong)param_2 & 0x3f);
    if (0x40 < (uint)param_1[1]) {
      *(ulong *)*param_1 = *(ulong *)*param_1 | uVar3;
      return;
    }
    *param_1 = *param_1 | uVar3;
    return;
  }
  uVar1 = param_2 >> 6;
  uVar2 = param_3 >> 6;
  uVar3 = -1L << ((ulong)param_2 & 0x3f);
  if ((param_3 & 0x3f) != 0) {
    uVar4 = 0xffffffffffffffff >> ((ulong)-(param_3 & 0x3f) & 0x3f);
    if (uVar2 == uVar1) {
      uVar3 = uVar4 & uVar3;
    }
    else {
      *(ulong *)(*param_1 + (ulong)uVar2 * 8) = *(ulong *)(*param_1 + (ulong)uVar2 * 8) | uVar4;
    }
  }
  *(ulong *)(*param_1 + (ulong)uVar1 * 8) = *(ulong *)(*param_1 + (ulong)uVar1 * 8) | uVar3;
  uVar3 = (ulong)(uVar1 + 1);
  if (uVar1 + 1 < uVar2) {
    do {
      *(undefined8 *)(*param_1 + uVar3 * 8) = 0xffffffffffffffff;
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  return;
}



/* Entry: 109d32c04; end: 109d32cdb;  */

void FUN_109d32c04(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(uint *)(param_1 + 1);
  if (*(uint *)((long)param_1 + 0xc) <= *(uint *)(param_1 + 1)) {
    func_0x000107c2b01c(param_1,param_1 + 2,uVar1 + 1,8);
    uVar1 = (ulong)*(uint *)(param_1 + 1);
  }
  *(undefined8 *)(*param_1 + uVar1 * 8) = param_2;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}



/* Entry: 109d32cdc; end: 109d32dbf;  */

long * FUN_109d32cdc(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  
  if (param_1 == param_2) {
    return param_1;
  }
  plVar3 = (long *)*param_2;
  if (plVar3 != param_2 + 2) {
    FUN_109d32dc0(param_1,param_2);
    return param_1;
  }
  uVar1 = *(uint *)(param_2 + 1);
  uVar2 = *(uint *)(param_1 + 1);
  uVar4 = (ulong)uVar2;
  if (uVar1 <= uVar2) {
    if (uVar1 != 0) {
      _memmove(*param_1,plVar3,(ulong)uVar1 << 3);
    }
    goto LAB_109d32da4;
  }
  if (*(uint *)((long)param_1 + 0xc) < uVar1) {
    *(undefined4 *)(param_1 + 1) = 0;
    func_0x000107c2b01c(param_1,param_1 + 2,(ulong)uVar1,8);
LAB_109d32d7c:
    uVar4 = 0;
  }
  else {
    if (uVar2 == 0) goto LAB_109d32d7c;
    _memmove(*param_1,plVar3,uVar4 << 3);
  }
  if (*(uint *)(param_2 + 1) - uVar4 != 0) {
    _memcpy(*param_1 + uVar4 * 8,*param_2 + uVar4 * 8,(*(uint *)(param_2 + 1) - uVar4) * 8);
  }
LAB_109d32da4:
  *(uint *)(param_1 + 1) = uVar1;
  *(undefined4 *)(param_2 + 1) = 0;
  return param_1;
}



/* Entry: 109d32dc0; end: 109d32e0b;  */

void FUN_109d32dc0(long *param_1,long *param_2)

{
  if ((long *)*param_1 != param_1 + 2) {
    _free();
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *param_2 = (long)(param_2 + 2);
  param_2[1] = 0;
  return;
}



/* Entry: 109d32e0c; end: 109d32ed7;  */

bool FUN_109d32e0c(long *param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  
  bVar1 = *(byte *)(param_1 + 2);
  if ((param_1 == (long *)0x0) || (uVar3 = bVar1 - 0x1c, bVar1 < 0x1c)) {
    if (param_1 == (long *)0x0) {
      return false;
    }
    if (bVar1 != 5) {
      return false;
    }
    uVar3 = (uint)*(ushort *)((long)param_1 + 0x12);
  }
  if (uVar3 < 0x3a) {
    if ((1L << ((ulong)uVar3 & 0x3f) & 0x40000001255000U) == 0) {
      if ((1L << ((ulong)uVar3 & 0x3f) & 0x380000000000000U) == 0) goto LAB_109d32ed0;
      do {
        lVar4 = *param_1;
        bVar1 = *(byte *)(lVar4 + 8);
        uVar3 = (uint)bVar1;
        param_1 = (long *)(lVar4 + 0x18);
      } while (lVar4 != 0 && bVar1 == 0x11);
      if ((bVar1 & 0xfe) == 0x12) {
        uVar3 = *(uint *)(**(long **)(lVar4 + 0x10) + 8);
      }
      if ((5 < (uVar3 & 0xff)) || ((0x2fU >> (ulong)(uVar3 & 0x1f) & 1) == 0)) {
        return (uVar3 & 0xfd) == 4;
      }
    }
    bVar2 = true;
  }
  else {
LAB_109d32ed0:
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 109d32ed8; end: 109d32f83;  */

void FUN_109d32ed8(ulong *param_1,ulong *param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = (uint)param_2[1];
  *(uint *)(param_1 + 1) = uVar1;
  if (uVar1 < 0x41) {
    *param_1 = *param_2;
  }
  else {
    uVar2 = (ulong)uVar1 + 0x3f >> 3 & 0x3ffffff8;
    __Znam();
    *param_1 = uVar2;
    _memcpy();
  }
  func_0x000109d30394(param_3,(ulong)uVar1);
  FUN_109d37674(param_1,param_3);
  return;
}



/* Entry: 109d32f84; end: 109d3302f;  */

void FUN_109d32f84(ulong *param_1,ulong *param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = (uint)param_2[1];
  *(uint *)(param_1 + 1) = uVar1;
  if (uVar1 < 0x41) {
    *param_1 = *param_2;
  }
  else {
    uVar2 = (ulong)uVar1 + 0x3f >> 3 & 0x3ffffff8;
    __Znam();
    *param_1 = uVar2;
    _memcpy();
  }
  func_0x000109d30394(param_3,(ulong)uVar1);
  FUN_109d303fc(param_1,param_3);
  return;
}



/* Entry: 109d33030; end: 109d3317b;  */

bool FUN_109d33030(undefined8 param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  
  if ((param_2 == (long *)0x0) || ((char)param_2[2] != '\x10')) {
    lVar6 = *param_2;
    if (lVar6 != 0 && (*(uint *)(lVar6 + 8) & 0xfe) == 0x12) {
      plVar5 = param_2;
      FUN_109d65ff0(param_2,0);
      if ((plVar5 != (long *)0x0) && ((char)plVar5[2] == '\x10')) {
        uVar1 = *(uint *)(plVar5 + 4);
        if (0x40 < uVar1) {
          plVar5 = plVar5 + 3;
          func_0x000109df08dc(plVar5);
          iVar3 = (int)plVar5;
          goto LAB_109d330c0;
        }
        lVar6 = plVar5[3];
        goto LAB_109d33064;
      }
      if ((*(char *)(lVar6 + 8) == '\x12') && (iVar3 = *(int *)(lVar6 + 0x20), iVar3 != 0)) {
        iVar7 = 0;
        bVar2 = false;
        while (plVar5 = param_2, FUN_109d66314(param_2,iVar7), plVar5 != (long *)0x0) {
          if (1 < *(byte *)(plVar5 + 2) - 0xb) {
            if (*(byte *)(plVar5 + 2) != 0x10) break;
            uVar1 = *(uint *)(plVar5 + 4);
            if (uVar1 < 0x41) {
              if (plVar5[3] != 1) break;
            }
            else {
              iVar4 = (int)plVar5 + 0x18;
              func_0x000109df08dc();
              if (iVar4 != uVar1 - 1) break;
            }
            bVar2 = true;
          }
          iVar7 = iVar7 + 1;
          if (iVar3 == iVar7) {
            return bVar2;
          }
        }
      }
    }
    bVar2 = false;
  }
  else {
    uVar1 = *(uint *)(param_2 + 4);
    if (0x40 < uVar1) {
      param_2 = param_2 + 3;
      func_0x000109df08dc(param_2);
      iVar3 = (int)param_2;
LAB_109d330c0:
      return iVar3 == uVar1 - 1;
    }
    lVar6 = param_2[3];
LAB_109d33064:
    bVar2 = lVar6 == 1;
  }
  return bVar2;
}



/* Entry: 109d3317c; end: 109d331cb;  */

undefined1 * FUN_109d3317c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 uStack_21;
  
  if (param_2 != 0) {
    uVar1 = param_2;
    FUN_109d661e0();
    if ((uVar1 & 1) == 0) {
      puVar2 = &uStack_21;
      FUN_109d2fcb4(puVar2,param_2);
    }
    else {
      puVar2 = (undefined1 *)0x1;
    }
    return puVar2;
  }
  return (undefined1 *)0x0;
}



/* Entry: 109d331cc; end: 109d33407;  */

ulong * FUN_109d331cc(ulong *param_1,undefined1 param_2)

{
  ulong *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  undefined8 *****pppppuVar6;
  ulong uVar7;
  long *extraout_x8;
  ulong uVar8;
  ulong *puVar9;
  undefined1 *unaff_x20;
  long lVar10;
  ulong *puStack_108;
  ulong *puStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  ulong auStack_e8 [8];
  undefined1 auStack_a8 [16];
  char cStack_98;
  undefined8 ****ppppuStack_90;
  undefined1 *puStack_88;
  ulong uStack_80;
  undefined1 auStack_78 [64];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar2 = (char)param_1[2] - 0xb;
  if (bVar2 < 2) {
    puVar9 = (ulong *)0x1;
    goto LAB_109d333a4;
  }
  if (bVar2 < 0xfd) {
    puVar9 = (ulong *)0x0;
    goto LAB_109d333a4;
  }
  puStack_108 = auStack_e8;
  uStack_f8 = 8;
  uStack_f0 = 0;
  unaff_x20 = auStack_78;
  uStack_80 = 0x800000000;
  uVar3 = *(uint *)((long)param_1 + 0x14);
  puStack_100 = puStack_108;
  puStack_88 = unaff_x20;
  if ((uVar3 >> 0x1e & 1) == 0) {
    uVar7 = (ulong)(uVar3 & 0x7ffffff);
    param_1 = param_1 + uVar7 * -4;
    if (uVar7 != 0) {
LAB_109d33274:
      lVar10 = uVar7 << 5;
      do {
        pppppuVar6 = (undefined8 *****)*param_1;
        if (1 < *(byte *)(pppppuVar6 + 2) - 0xb) {
          ppppuStack_90 = pppppuVar6;
          if (2 < *(byte *)(pppppuVar6 + 2) - 8) {
            ppppuStack_90 = (undefined8 *****)0x0;
          }
          if ((undefined8 *****)ppppuStack_90 == (undefined8 *****)0x0) goto LAB_109d33380;
          FUN_109d33408(auStack_a8,&puStack_108);
          if (cStack_98 == '\x01') {
            pppppuVar6 = &ppppuStack_90;
            func_0x000109d33474(&puStack_88);
          }
        }
        param_2 = SUB81(pppppuVar6,0);
        param_1 = param_1 + 4;
        lVar10 = lVar10 + -0x20;
      } while (lVar10 != 0);
joined_r0x000109d332d4:
      uVar7 = uStack_80 & 0xffffffff;
      if ((int)uStack_80 != 0) {
        do {
          param_2 = SUB81(pppppuVar6,0);
          lVar10 = *(long *)(puStack_88 + uVar7 * 8 + -8);
          uVar4 = (int)uVar7 - 1;
          uVar7 = (ulong)uVar4;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar4);
          uVar3 = *(uint *)(lVar10 + 0x14);
          if ((uVar3 >> 0x1e & 1) == 0) {
            uVar8 = (ulong)(uVar3 & 0x7ffffff);
            puVar9 = (ulong *)(lVar10 + uVar8 * -0x20);
            if (uVar8 != 0) goto LAB_109d33314;
          }
          else {
            puVar9 = *(ulong **)(lVar10 + -8);
            uVar8 = (ulong)uVar3 & 0x7ffffff;
            if ((uVar3 & 0x7ffffff) != 0) goto LAB_109d33314;
          }
          if (uVar4 == 0) break;
        } while( true );
      }
    }
  }
  else {
    param_1 = (ulong *)param_1[-1];
    uVar7 = (ulong)uVar3 & 0x7ffffff;
    if ((uVar3 & 0x7ffffff) != 0) goto LAB_109d33274;
  }
  puVar9 = (ulong *)0x1;
  goto LAB_109d33384;
LAB_109d33314:
  lVar10 = uVar8 << 5;
  do {
    pppppuVar6 = (undefined8 *****)*puVar9;
    if (1 < *(byte *)(pppppuVar6 + 2) - 0xb) {
      ppppuStack_90 = pppppuVar6;
      if (2 < *(byte *)(pppppuVar6 + 2) - 8) {
        ppppuStack_90 = (undefined8 *****)0x0;
      }
      if ((undefined8 *****)ppppuStack_90 == (undefined8 *****)0x0) goto LAB_109d33380;
      FUN_109d33408(auStack_a8,&puStack_108);
      if (cStack_98 == '\x01') {
        pppppuVar6 = &ppppuStack_90;
        func_0x000109d33474(&puStack_88);
      }
    }
    param_2 = SUB81(pppppuVar6,0);
    puVar9 = puVar9 + 4;
    lVar10 = lVar10 + -0x20;
  } while (lVar10 != 0);
  goto joined_r0x000109d332d4;
LAB_109d33380:
  param_2 = SUB81(pppppuVar6,0);
  puVar9 = (ulong *)0x0;
LAB_109d33384:
  if (puStack_88 != unaff_x20) {
    _free();
  }
  param_1 = puStack_100;
  if (puStack_100 != puStack_108) {
    _free();
  }
LAB_109d333a4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (puStack_88 != unaff_x20) {
      _free();
    }
    if (puStack_100 != puStack_108) {
      _free();
    }
    __Unwind_Resume();
    puVar9 = param_1;
    func_0x000107c2af58();
    lVar10 = 0x14;
    if (param_1[1] != *param_1) {
      lVar10 = 0x10;
    }
    puVar1 = (ulong *)(param_1[1] + (ulong)*(uint *)((long)param_1 + lVar10) * 8);
    puVar5 = puVar9;
    for (; (puVar1 != puVar9 && (puVar5 = puVar9, 0xfffffffffffffffd < *puVar9));
        puVar9 = puVar9 + 1) {
      puVar5 = puVar1;
    }
    *extraout_x8 = (long)puVar5;
    extraout_x8[1] = (long)puVar1;
    *(undefined1 *)(extraout_x8 + 2) = param_2;
    return puVar5;
  }
  return puVar9;
}



/* Entry: 109d33408; end: 109d3352b;  */

void FUN_109d33408(long *param_1,ulong *param_2,undefined1 param_3)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  
  puVar3 = param_2;
  func_0x000107c2af58();
  lVar2 = 0x14;
  if (param_2[1] != *param_2) {
    lVar2 = 0x10;
  }
  puVar1 = (ulong *)(param_2[1] + (ulong)*(uint *)((long)param_2 + lVar2) * 8);
  puVar4 = puVar3;
  for (; (puVar1 != puVar3 && (puVar4 = puVar3, 0xfffffffffffffffd < *puVar3)); puVar3 = puVar3 + 1)
  {
    puVar4 = puVar1;
  }
  *param_1 = (long)puVar4;
  param_1[1] = (long)puVar1;
  *(undefined1 *)(param_1 + 2) = param_3;
  return;
}



/* Entry: 109d3352c; end: 109d335ab;  */

void FUN_109d3352c(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_3 - param_2;
  uVar2 = (ulong)*(uint *)(param_1 + 1);
  uVar1 = uVar2 + ((long)uVar3 >> 2);
  if (*(uint *)((long)param_1 + 0xc) < uVar1) {
    func_0x000107c2b01c(param_1,param_1 + 2,uVar1,4);
    uVar2 = (ulong)*(uint *)(param_1 + 1);
  }
  if (param_2 != param_3) {
    _memcpy(*param_1 + uVar2 * 4,param_2,uVar3);
    uVar2 = (ulong)*(uint *)(param_1 + 1);
  }
  *(int *)(param_1 + 1) = (int)uVar2 + (int)(uVar3 >> 2);
  return;
}



/* Entry: 109d335ac; end: 109d33607;  */

long * FUN_109d335ac(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0x2000000000;
  FUN_109d32334(param_1,param_2,*param_3);
  return param_1;
}



/* Entry: 109d33608; end: 109d336bb;  */

long * FUN_109d33608(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  int in_w4;
  int in_w5;
  undefined1 auStack_b8 [24];
  undefined1 uStack_59;
  undefined1 auStack_58 [8];
  long alStack_50 [3];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000109d32918(auStack_58);
  puVar6 = &uStack_59;
  uVar5 = 1;
  FUN_109def808(auStack_58,*(undefined8 *)(param_1 + 0x20),1,puVar6);
  plVar2 = (long *)(param_1 + 0x18);
  puVar4 = auStack_58;
  FUN_109d67e08(plVar2,puVar4);
  plVar1 = alStack_50;
  FUN_109d32234();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar2 = (long *)plVar1[9];
  (**(code **)(*plVar2 + 0x20))(plVar2,0x11,puVar4,uVar5);
  if (plVar2 != (long *)0x0) {
    return plVar2;
  }
  uVar3 = 0x11;
  FUN_109d8c8c0(0x11,puVar4,uVar5,auStack_b8,0);
  func_0x000109d33940(plVar1,uVar3,puVar6);
  if (in_w4 != 0) {
    *(byte *)((long)plVar1 + 0x11) = *(byte *)((long)plVar1 + 0x11) | 2;
  }
  if (in_w5 != 0) {
    *(byte *)((long)plVar1 + 0x11) = *(byte *)((long)plVar1 + 0x11) | 4;
  }
  return plVar1;
}



/* Entry: 109d336bc; end: 109d337db;  */

void FUN_109d336bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,int param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  plVar1 = *(long **)(param_1 + 0x48);
  (**(code **)(*plVar1 + 0x20))(plVar1,0x11,param_2,param_3);
  if (plVar1 != (long *)0x0) {
    return;
  }
  uVar2 = 0x11;
  FUN_109d8c8c0(0x11,param_2,param_3,auStack_58,0);
  func_0x000109d33940(param_1,uVar2,param_4);
  if (param_5 != 0) {
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 2;
  }
  if (param_6 != 0) {
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 4;
  }
  return;
}



/* Entry: 109d337dc; end: 109d339ab;  */

undefined8 FUN_109d337dc(undefined8 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  (**(code **)(*(long *)param_1[10] + 0x10))();
  if (*(uint *)(param_1 + 1) != 0) {
    puVar2 = (undefined4 *)*param_1;
    puVar1 = puVar2 + (ulong)*(uint *)(param_1 + 1) * 4;
    do {
      FUN_109d97dec(param_2,*puVar2,*(undefined8 *)(puVar2 + 2));
      puVar2 = puVar2 + 4;
    } while (puVar2 != puVar1);
  }
  return param_2;
}



/* Entry: 109d339ac; end: 109d33a43;  */

undefined8 * FUN_109d339ac(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110b40378;
  plVar1 = (long *)param_1[0x17];
  if (plVar1 == param_1 + 0x14) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto SUB_109d2f664;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
SUB_109d2f664:
  *param_1 = &PTR____cxa_pure_virtual_110b5bf28;
  if (param_1[0xc] != param_1[0xb]) {
    _free();
  }
  if ((undefined8 *)param_1[8] != param_1 + 10) {
    _free();
  }
  return param_1;
}



/* Entry: 109d33a44; end: 109d33abf;  */

ulong FUN_109d33a44(long param_1,undefined2 param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined4 uStack_34;
  
  uStack_34 = 0;
  uVar1 = param_1 + 0x98;
  FUN_109df2844(uVar1,param_1);
  if ((uVar1 & 1) == 0) {
    **(undefined4 **)(param_1 + 0x80) = uStack_34;
    *(undefined2 *)(param_1 + 0xc) = param_2;
    plVar2 = *(long **)(param_1 + 0xb8);
    if (plVar2 == (long *)0x0) {
      func_0x000104c501e4();
      return 2;
    }
    (**(code **)(*plVar2 + 0x30))(plVar2,&uStack_34);
  }
  return uVar1;
}



/* Entry: 109d33ac0; end: 109d33ac7;  */

undefined8 FUN_109d33ac0(void)

{
  return 2;
}


