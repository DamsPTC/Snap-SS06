/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109d36d5c; end: 109d36d7f;  */

void FUN_109d36d5c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110b40a08;
  return;
}



/* Entry: 109d36d80; end: 109d36d87;  */

void FUN_109d36d80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d36d88; end: 109d36dc3;  */

long FUN_109d36d88(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b40a78);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109d36dc4; end: 109d36dcf;  */

undefined ** FUN_109d36dc4(void)

{
  return &PTR_DAT_110b40a78;
}



/* Entry: 109d36dd0; end: 109d36e87;  */

undefined8 * FUN_109d36dd0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110b40b00;
  plVar1 = (long *)param_1[0x4a];
  if (plVar1 == param_1 + 0x47) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_109d36e18;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_109d36e18:
  param_1[0x13] = &PTR_DAT_110b40bb0;
  if ((undefined8 *)param_1[0x15] != param_1 + 0x17) {
    _free();
  }
  *param_1 = &PTR____cxa_pure_virtual_110b5bf28;
  if (param_1[0xc] != param_1[0xb]) {
    _free();
  }
  if ((undefined8 *)param_1[8] != param_1 + 10) {
    _free();
  }
  return param_1;
}



/* Entry: 109d36e88; end: 109d36fa7;  */

undefined4
FUN_109d36e88(ulong param_1,undefined2 param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
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
          if ((int)uVar1 != 0) goto LAB_109d36ef0;
        }
        uStack_94 = (undefined4)puVar5[5];
        uVar3 = uStack_94;
        goto LAB_109d36f68;
      }
LAB_109d36ef0:
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
LAB_109d36f68:
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



/* Entry: 109d36fa8; end: 109d36fbf;  */

undefined4 FUN_109d36fa8(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (*(long *)(*(long *)(param_1 + 0xa0) + 0x18) == 0) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 109d36fc0; end: 109d3703b;  */

void FUN_109d36fc0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110b40b00;
  plVar1 = (long *)param_1[0x4a];
  if (plVar1 == param_1 + 0x47) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_109d37008;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_109d37008:
  param_1[0x13] = &PTR_DAT_110b40bb0;
  if ((undefined8 *)param_1[0x15] != param_1 + 0x17) {
    _free();
  }
  func_0x000109d2f664(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d3703c; end: 109d37057;  */

ulong FUN_109d3703c(long *param_1)

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



/* Entry: 109d37058; end: 109d370c7;  */

void FUN_109d37058(long param_1,undefined8 param_2,int param_3)

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
  ppuStack_20 = &PTR_DAT_110b40c18;
  uStack_14 = 1;
  FUN_109df4440(param_1 + 0x98,param_1,&ppuStack_20,param_1 + 0x88,param_2);
  return;
}



/* Entry: 109d370c8; end: 109d370ef;  */

void FUN_109d370c8(long param_1)

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



/* Entry: 109d370f0; end: 109d3712f;  */

void FUN_109d370f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b40bb0;
  if ((undefined8 *)param_1[2] != param_1 + 4) {
    _free();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109d37130; end: 109d371a7;  */

undefined4 FUN_109d37130(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 109d371a8; end: 109d37227;  */

void FUN_109d371a8(undefined8 param_1,ulong param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  
  if (param_3 == 0) {
    uVar1 = param_2;
    FUN_109e0ec38();
    uStack_40 = param_2 & 0xffffffff;
    uStack_30 = param_1;
    uStack_28 = uVar1;
  }
  else {
    uStack_40 = param_2 & 0xffffffff | (ulong)param_3 << 0x20 | 0x8000000000000000;
    if (param_4 != 0) {
      FUN_109e0ec38();
      uStack_38 = (ulong)(param_4 | 0x80000000);
      uStack_30 = param_1;
      uStack_28 = param_2;
      goto LAB_109d3720c;
    }
    FUN_109e0ec38();
    uStack_30 = param_1;
    uStack_28 = param_2;
  }
  uStack_38 = 0;
LAB_109d3720c:
  FUN_109d37228(&uStack_30,&uStack_40);
  return;
}



/* Entry: 109d37228; end: 109d372bf;  */

uint FUN_109d37228(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 **ppuVar1;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 *puStack_60;
  uint *puStack_58;
  uint *puStack_50;
  undefined1 *puStack_48;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 *puStack_30;
  uint *puStack_28;
  uint *puStack_20;
  uint *puStack_18;
  
  puStack_48 = (undefined1 *)&uStack_70;
  uStack_34 = (undefined4)*param_1;
  uStack_38 = (uint)((ulong)*param_1 >> 0x20) & 0x7fffffff;
  uStack_3c = *(uint *)(param_1 + 1) & 0x7fffffff;
  uStack_40 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  puStack_30 = &uStack_34;
  puStack_28 = &uStack_38;
  puStack_20 = &uStack_3c;
  puStack_18 = &uStack_40;
  uStack_64 = (undefined4)*param_2;
  uStack_68 = (uint)((ulong)*param_2 >> 0x20) & 0x7fffffff;
  uStack_6c = *(uint *)(param_2 + 1) & 0x7fffffff;
  uStack_70 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
  puStack_60 = &uStack_64;
  puStack_58 = &uStack_68;
  puStack_50 = &uStack_6c;
  ppuVar1 = &puStack_30;
  FUN_109d372c0(ppuVar1,&puStack_60);
  return (uint)ppuVar1 >> 7 & 1;
}



/* Entry: 109d372c0; end: 109d3734b;  */

uint FUN_109d372c0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  
  uVar1 = 1;
  if (*(uint *)*param_1 < *(uint *)*param_2) {
    uVar1 = 0xffffffff;
  }
  if (*(uint *)*param_1 == *(uint *)*param_2) {
    uVar1 = 1;
    if (*(uint *)param_1[1] < *(uint *)param_2[1]) {
      uVar1 = 0xffffffff;
    }
    if (*(uint *)param_1[1] == *(uint *)param_2[1]) {
      uVar1 = 1;
      if (*(uint *)param_1[2] < *(uint *)param_2[2]) {
        uVar1 = 0xffffffff;
      }
      if (*(uint *)param_1[2] == *(uint *)param_2[2]) {
        uVar1 = (uint)(*(uint *)param_2[3] < *(uint *)param_1[3]);
        if (*(uint *)param_1[3] < *(uint *)param_2[3]) {
          uVar1 = 0xffffffff;
        }
        return uVar1;
      }
    }
  }
  return uVar1;
}



/* Entry: 109d3734c; end: 109d3736f;  */

void FUN_109d3734c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110b40ca0;
  return;
}



/* Entry: 109d37370; end: 109d3738b;  */

void FUN_109d37370(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110b40ca0;
  return;
}



/* Entry: 109d3738c; end: 109d373c7;  */

long FUN_109d3738c(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b40d10);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109d373c8; end: 109d373d3;  */

undefined ** FUN_109d373c8(void)

{
  return &PTR_DAT_110b40d10;
}



/* Entry: 109d373d4; end: 109d3751f;  */

void FUN_109d373d4(undefined8 param_1)

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
  
  puVar2 = (undefined8 *)0x1137e54f8;
  FUN_109dffb24(0x1137e54f8,0x1137e5508,param_1,0x30,auStack_38);
  if (uRam00000001137e5500 != 0) {
    puVar4 = puRam00000001137e54f8 + (ulong)uRam00000001137e5500 * 6;
    puVar3 = puRam00000001137e54f8;
    puVar5 = puVar2;
    do {
      uVar6 = *puVar3;
      uVar8 = puVar3[3];
      uVar7 = puVar3[2];
      puVar5[1] = puVar3[1];
      *puVar5 = uVar6;
      puVar5[3] = uVar8;
      puVar5[2] = uVar7;
      puVar5[4] = &PTR_DAT_110b40c80;
      uVar1 = *(undefined4 *)(puVar3 + 5);
      *(undefined1 *)((long)puVar5 + 0x2c) = *(undefined1 *)((long)puVar3 + 0x2c);
      *(undefined4 *)(puVar5 + 5) = uVar1;
      puVar5[4] = &PTR_DAT_110b40c18;
      puVar5 = puVar5 + 6;
      puVar3 = puVar3 + 6;
    } while (puVar3 != puVar4);
  }
  if (puRam00000001137e54f8 != (undefined8 *)0x1137e5508) {
    _free();
  }
  puRam00000001137e54f8 = puVar2;
  uRam00000001137e5504 = auStack_38[0];
  return;
}



/* Entry: 109d37520; end: 109d375d7;  */

void FUN_109d37520(long *param_1,undefined8 param_2)

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



/* Entry: 109d375d8; end: 109d37673;  */

ulong * FUN_109d375d8(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong *puVar2;
  uint uVar3;
  ulong *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  uVar9 = param_2[1];
  if (0x7ffffffffffffff7 < uVar9) {
    func_0x000104c4f6b8();
    uVar1 = (uint)param_1[1];
    uVar6 = (uint)param_2;
    if (0x40 < uVar1) {
      param_1 = (ulong *)*param_1;
      if (uVar6 == 0) {
        return param_1;
      }
      uVar7 = uVar6 >> 6;
      uVar5 = (uint)((ulong)uVar1 + 0x3f >> 6);
      uVar1 = uVar7;
      if (uVar5 <= uVar7) {
        uVar1 = uVar5;
      }
      uVar3 = uVar5 - uVar1;
      uVar6 = uVar6 & 0x3f;
      if (((ulong)param_2 & 0x3f) == 0) {
        _memmove(param_1,param_1 + uVar1,uVar3 * 8);
      }
      else if (uVar7 < uVar5) {
        uVar9 = param_1[uVar1] >> (ulong)uVar6;
        *param_1 = uVar9;
        if (uVar3 != 1) {
          lVar8 = -(ulong)uVar3;
          puVar2 = param_1;
          uVar7 = uVar1;
          do {
            uVar7 = uVar7 + 1;
            lVar8 = lVar8 + 1;
            *puVar2 = param_1[uVar7] << ((ulong)(0x40 - uVar6) & 0x3f) | uVar9;
            uVar9 = param_1[uVar7] >> (ulong)uVar6;
            puVar2[1] = uVar9;
            puVar2 = puVar2 + 1;
          } while (lVar8 != -1);
        }
      }
      param_1 = param_1 + uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__bzero_11034bf90)(param_1,uVar1 << 3);
      return param_1;
    }
    if (uVar1 != uVar6) {
      *param_1 = *param_1 >> ((ulong)param_2 & 0x3f);
      return param_1;
    }
    *param_1 = 0;
    return param_1;
  }
  uVar10 = *param_2;
  if (uVar9 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar9;
    puVar4 = param_1;
    if (uVar9 == 0) goto LAB_109d37654;
  }
  else {
    puVar2 = (ulong *)0x19;
    if ((uVar9 | 7) != 0x17) {
      puVar2 = (ulong *)((uVar9 | 7) + 1);
    }
    puVar4 = puVar2;
    __Znwm();
    param_1[1] = uVar9;
    param_1[2] = (ulong)puVar2 | 0x8000000000000000;
    *param_1 = (ulong)puVar4;
  }
  _memmove(puVar4,uVar10,uVar9);
LAB_109d37654:
  *(undefined1 *)((long)puVar4 + uVar9) = 0;
  return param_1;
}



/* Entry: 109d37674; end: 109d376b3;  */

void FUN_109d37674(ulong *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  
  uVar1 = (uint)param_1[1];
  uVar5 = (uint)param_2;
  if (0x40 < uVar1) {
    param_1 = (ulong *)*param_1;
    if (uVar5 == 0) {
      return;
    }
    uVar7 = uVar5 >> 6;
    uVar4 = (uint)((ulong)uVar1 + 0x3f >> 6);
    uVar1 = uVar7;
    if (uVar4 <= uVar7) {
      uVar1 = uVar4;
    }
    uVar2 = uVar4 - uVar1;
    uVar5 = uVar5 & 0x3f;
    if ((param_2 & 0x3f) == 0) {
      _memmove(param_1,param_1 + uVar1,uVar2 * 8);
    }
    else if (uVar7 < uVar4) {
      uVar6 = param_1[uVar1] >> (ulong)uVar5;
      *param_1 = uVar6;
      if (uVar2 != 1) {
        lVar8 = -(ulong)uVar2;
        puVar3 = param_1;
        uVar7 = uVar1;
        do {
          uVar7 = uVar7 + 1;
          lVar8 = lVar8 + 1;
          *puVar3 = param_1[uVar7] << ((ulong)(0x40 - uVar5) & 0x3f) | uVar6;
          uVar6 = param_1[uVar7] >> (ulong)uVar5;
          puVar3[1] = uVar6;
          puVar3 = puVar3 + 1;
        } while (lVar8 != -1);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_11034bf90)(param_1 + uVar2,uVar1 << 3);
    return;
  }
  if (uVar1 != uVar5) {
    *param_1 = *param_1 >> (param_2 & 0x3f);
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 109d376b4; end: 109d377af;  */

undefined8 *
FUN_109d376b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0xa0;
  __Znwm();
  *(uint *)((long)puVar2 + 0x54) = *(uint *)((long)puVar2 + 0x54) & 0x38000000 | 2;
  puVar1 = puVar2 + 8;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = puVar1;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = puVar1;
  FUN_109d8b0bc(puVar1,*param_1,0x41,puVar2,2,param_6);
  puVar2[0x10] = puVar2 + 0x12;
  puVar2[0x11] = 0x400000000;
  FUN_109d8c54c(puVar1,param_1,param_2,param_3,param_4,param_5);
  return puVar1;
}



/* Entry: 109d377b0; end: 109d3785b;  */

void FUN_109d377b0(ulong *param_1,ulong *param_2,undefined8 param_3)

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
  FUN_109d30470(param_1,param_3);
  return;
}



/* Entry: 109d3785c; end: 109d378b7;  */

void FUN_109d3785c(long *param_1,undefined4 param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(uint *)(param_1 + 1);
  if (*(uint *)((long)param_1 + 0xc) <= *(uint *)(param_1 + 1)) {
    func_0x000107c2b01c(param_1,param_1 + 2,uVar1 + 1,4);
    uVar1 = (ulong)*(uint *)(param_1 + 1);
  }
  *(undefined4 *)(*param_1 + uVar1 * 4) = param_2;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}



/* Entry: 109d378b8; end: 109d3790f;  */

void FUN_109d378b8(undefined8 *param_1,ulong param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  
  uVar2 = (undefined4)param_2;
  if (param_2 <= *(uint *)((long)param_1 + 0xc)) {
    puVar3 = (undefined4 *)*param_1;
    uVar6 = (ulong)*(uint *)(param_1 + 1);
    uVar4 = uVar6;
    if (param_2 <= uVar6) {
      uVar4 = param_2;
    }
    puVar7 = puVar3;
    if (uVar4 != 0) {
      do {
        *puVar7 = param_3;
        uVar4 = uVar4 - 1;
        puVar7 = puVar7 + 1;
      } while (uVar4 != 0);
      uVar6 = (ulong)*(uint *)(param_1 + 1);
    }
    lVar5 = uVar6 - param_2;
    if (uVar6 < param_2) {
      puVar3 = puVar3 + uVar6;
      do {
        *puVar3 = param_3;
        bVar1 = lVar5 != -1;
        lVar5 = lVar5 + 1;
        puVar3 = puVar3 + 1;
      } while (bVar1);
    }
    *(undefined4 *)(param_1 + 1) = uVar2;
    return;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  func_0x000107c2b01c(param_1,param_1 + 2,param_2,4);
  if (param_2 != 0) {
    puVar3 = (undefined4 *)*param_1;
    do {
      *puVar3 = param_3;
      param_2 = param_2 - 1;
      puVar3 = puVar3 + 1;
    } while (param_2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = uVar2;
  return;
}



/* Entry: 109d37910; end: 109d3798f;  */

void FUN_109d37910(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_3 - param_2;
  uVar2 = (ulong)*(uint *)(param_1 + 1);
  uVar1 = uVar2 + ((long)uVar3 >> 3);
  if (*(uint *)((long)param_1 + 0xc) < uVar1) {
    func_0x000107c2b01c(param_1,param_1 + 2,uVar1,8);
    uVar2 = (ulong)*(uint *)(param_1 + 1);
  }
  if (param_2 != param_3) {
    _memcpy(*param_1 + uVar2 * 8,param_2,uVar3);
    uVar2 = (ulong)*(uint *)(param_1 + 1);
  }
  *(int *)(param_1 + 1) = (int)uVar2 + (int)(uVar3 >> 3);
  return;
}



/* Entry: 109d37990; end: 109d37a6b;  */

void FUN_109d37990(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [32];
  undefined2 uStack_58;
  
  plVar2 = *(long **)(param_1 + 0x48);
  (**(code **)(*plVar2 + 0x70))();
  if (plVar2 == (long *)0x0) {
    puVar3 = (undefined8 *)0xa8;
    __Znwm();
    *(uint *)((long)puVar3 + 0x54) = *(uint *)((long)puVar3 + 0x54) & 0x38000000 | 2;
    puVar1 = puVar3 + 8;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = puVar1;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = puVar1;
    uStack_58 = 0x101;
    FUN_109d8c238(puVar1,param_2,param_3,param_4,param_5,auStack_78,0);
    FUN_109d37a6c(param_1,puVar1,param_6);
  }
  return;
}



/* Entry: 109d37a6c; end: 109d37ad7;  */

undefined8 FUN_109d37a6c(undefined8 *param_1,undefined8 param_2)

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



/* Entry: 109d37ad8; end: 109d37b63;  */

undefined8 * FUN_109d37ad8(undefined8 *param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_110b5c728;
  param_1[8] = param_2;
  FUN_109d317a0();
  return param_1;
}



/* Entry: 109d37b64; end: 109d37bcb;  */

bool FUN_109d37b64(long param_1,long param_2,long param_3,long param_4)

{
  bool bVar1;
  
  if (param_3 == -2) {
    bVar1 = param_1 == -2;
  }
  else {
    if (param_3 != -1) {
      if (param_2 != param_4) {
        return false;
      }
      if (param_2 != 0) {
        _memcmp(param_1,param_3,param_2);
        return (int)param_1 == 0;
      }
      return true;
    }
    bVar1 = param_1 == -1;
  }
  return bVar1;
}



/* Entry: 109d37bcc; end: 109d37c33;  */

ulong FUN_109d37bcc(ulong *param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((ulong)*(uint *)((long)param_1 + 0xc) < param_3 + (ulong)(uint)param_1[1]) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (ulong)(uint)param_1[1] * 0x18;
    if ((param_2 >= uVar2 && param_2 <= uVar1) && (param_2 < uVar2 || uVar1 != param_2)) {
      FUN_109d37c34();
      param_2 = *param_1 + (param_2 - uVar2);
    }
    else {
      FUN_109d37c34();
    }
  }
  return param_2;
}



/* Entry: 109d37c34; end: 109d37ca3;  */

void FUN_109d37c34(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined4 auStack_38 [2];
  
  plVar1 = param_1;
  FUN_109dffb24(param_1,param_1 + 2,param_2,0x18,auStack_38);
  FUN_109d37ca4(param_1,plVar1);
  if ((long *)*param_1 != param_1 + 2) {
    _free();
  }
  *param_1 = (long)plVar1;
  *(undefined4 *)((long)param_1 + 0xc) = auStack_38[0];
  return;
}



/* Entry: 109d37ca4; end: 109d37d2f;  */

void FUN_109d37ca4(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(uint *)(param_1 + 1) != 0) {
    lVar3 = (ulong)*(uint *)(param_1 + 1) * 0x18;
    puVar2 = (undefined8 *)*param_1;
    do {
      uVar6 = puVar2[1];
      uVar5 = *puVar2;
      param_2[2] = puVar2[2];
      param_2[1] = uVar6;
      *param_2 = uVar5;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
      lVar3 = lVar3 + -0x18;
      param_2 = param_2 + 3;
      puVar2 = puVar2 + 3;
    } while (lVar3 != 0);
    uVar1 = *(uint *)(param_1 + 1);
    if (uVar1 != 0) {
      lVar3 = (ulong)uVar1 * -0x18;
      pcVar4 = (char *)(*param_1 + (ulong)uVar1 * 0x18 + -1);
      do {
        if (*pcVar4 < '\0') {
          __ZdlPv(*(undefined8 *)(pcVar4 + -0x17));
        }
        lVar3 = lVar3 + 0x18;
        pcVar4 = pcVar4 + -0x18;
      } while (lVar3 != 0);
    }
  }
  return;
}



/* Entry: 109d37d30; end: 109d37ed3;  */

void FUN_109d37d30(undefined8 *param_1,long param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 1) = 0;
  func_0x000107c2b01c(param_1,param_1 + 2,param_2,4);
  if (param_2 != 0) {
    puVar1 = (undefined4 *)*param_1;
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



/* Entry: 109d37ed4; end: 109d37fbb;  */

undefined8 FUN_109d37ed4(long *param_1,ulong *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  
  lVar3 = param_1[2];
  if ((int)lVar3 == 0) {
    uVar5 = 0;
    plVar8 = (long *)0x0;
  }
  else {
    lVar9 = *param_1;
    uVar4 = *param_2;
    FUN_109e0438c(uVar4,uVar4 + param_2[1]);
    uVar2 = (int)lVar3 - 1;
    uVar10 = uVar2 & (uint)uVar4;
    plVar8 = (long *)(lVar9 + (ulong)uVar10 * 0x10);
    uVar4 = *param_2;
    FUN_109d37b64(uVar4,param_2[1],*plVar8,plVar8[1]);
    if ((uVar4 & 1) == 0) {
      plVar6 = (long *)0x0;
      iVar7 = 1;
      do {
        if (*plVar8 == -1) {
          uVar5 = 0;
          if (plVar6 != (long *)0x0) {
            plVar8 = plVar6;
          }
          goto LAB_109d37f3c;
        }
        plVar1 = plVar8;
        if (plVar6 != (long *)0x0 || *plVar8 != -2) {
          plVar1 = plVar6;
        }
        uVar10 = uVar10 + iVar7 & uVar2;
        plVar8 = (long *)(lVar9 + (ulong)uVar10 * 0x10);
        uVar4 = *param_2;
        FUN_109d37b64(uVar4,param_2[1],*plVar8,plVar8[1]);
        plVar6 = plVar1;
        iVar7 = iVar7 + 1;
      } while ((int)uVar4 == 0);
    }
    uVar5 = 1;
  }
LAB_109d37f3c:
  *param_3 = (long)plVar8;
  return uVar5;
}



/* Entry: 109d37fbc; end: 109d38063;  */

long * FUN_109d37fbc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d38008;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d38064(param_1,uVar1);
  FUN_109d37ed4(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d38008:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -1) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d38064; end: 109d381bf;  */

void FUN_109d38064(long *param_1,int param_2)

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
    func_0x000109d38120(param_1,lVar5,lVar5 + (ulong)uVar1 * 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 4;
    do {
      puVar3[1] = 0;
      *puVar3 = 0xffffffffffffffff;
      lVar5 = lVar5 + -0x10;
      puVar3 = puVar3 + 2;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d381c0; end: 109d381d3;  */

undefined1  [16] FUN_109d381c0(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  puVar1 = &UNK_10f5aedf9;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000104c4f740();
  FUN_109d3865c(puVar1 + 0x80);
  if (*(long *)(puVar1 + 0x68) != 0) {
    *(long *)(puVar1 + 0x70) = *(long *)(puVar1 + 0x68);
    __ZdlPv();
  }
  if ((char)puVar1[0x67] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar1 + 0x50));
  }
  if ((char)puVar1[0x4f] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar1 + 0x38));
  }
  if ((char)puVar1[0x27] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar1 + 0x10));
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 109d381d4; end: 109d3826f;  */

undefined1  [16] FUN_109d381d4(long param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104c4f740();
  FUN_109d3865c(param_1 + 0x80);
  if (*(long *)(param_1 + 0x68) != 0) {
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x68);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
  }
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 109d38270; end: 109d383df;  */

/* WARNING: Removing unreachable block (ram,0x000109d383d0) */

long * FUN_109d38270(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  if (param_1 == param_2) {
    return param_1;
  }
  plVar3 = (long *)*param_2;
  if (plVar3 != param_2 + 2) {
    FUN_109d383e0(param_1,param_2);
    return param_1;
  }
  uVar1 = *(uint *)(param_2 + 1);
  uVar2 = *(uint *)(param_1 + 1);
  uVar8 = (ulong)uVar2;
  if (uVar1 <= uVar2) {
    lVar4 = *param_1;
    lVar6 = lVar4;
    if (uVar1 != 0) {
      func_0x000109d38544(&uStack_42,plVar3,plVar3 + (ulong)uVar1 * 5);
      lVar4 = *param_1;
      uVar8 = (ulong)*(uint *)(param_1 + 1);
      lVar6 = (long)plVar3;
    }
    for (lVar4 = lVar4 + uVar8 * 0x28; lVar4 != lVar6; lVar4 = lVar4 + -0x28) {
    }
    goto LAB_109d3838c;
  }
  if (*(uint *)((long)param_1 + 0xc) < uVar1) {
    func_0x000109d38470(param_1);
    func_0x000109d384d4(param_1,uVar1);
LAB_109d38330:
    uVar8 = 0;
  }
  else {
    if (uVar2 == 0) goto LAB_109d38330;
    func_0x000109d38544(&uStack_41,plVar3,plVar3 + uVar8 * 5,*param_1);
  }
  uVar2 = *(uint *)(param_2 + 1);
  if (uVar8 != uVar2) {
    lVar6 = *param_2;
    puVar5 = (undefined8 *)(*param_1 + uVar8 * 0x28);
    puVar7 = (undefined8 *)(lVar6 + uVar8 * 0x28);
    do {
      uVar9 = *puVar7;
      puVar5[1] = puVar7[1];
      *puVar5 = uVar9;
      uVar10 = puVar7[3];
      uVar9 = puVar7[2];
      puVar5[4] = puVar7[4];
      puVar5[3] = uVar10;
      puVar5[2] = uVar9;
      puVar7[3] = 0;
      puVar7[4] = 0;
      puVar7[2] = 0;
      puVar5 = puVar5 + 5;
      puVar7 = puVar7 + 5;
    } while (puVar7 != (undefined8 *)(lVar6 + (ulong)uVar2 * 0x28));
  }
LAB_109d3838c:
  *(uint *)(param_1 + 1) = uVar1;
  func_0x000109d38470(param_2);
  return param_1;
}



/* Entry: 109d383e0; end: 109d385c3;  */

void FUN_109d383e0(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    plVar2 = plVar2 + (ulong)uVar1 * 5 + -3;
    lVar3 = (ulong)uVar1 * -0x28;
    do {
      if (*(char *)((long)plVar2 + 0x17) < '\0') {
        __ZdlPv(*plVar2);
      }
      plVar2 = plVar2 + -5;
      lVar3 = lVar3 + 0x28;
    } while (lVar3 != 0);
    plVar2 = (long *)*param_1;
  }
  if (plVar2 != param_1 + 2) {
    _free();
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *param_2 = (long)(param_2 + 2);
  param_2[1] = 0;
  return;
}



/* Entry: 109d385c4; end: 109d3865b;  */

void FUN_109d385c4(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(uint *)(param_1 + 1) != 0) {
    puVar2 = (undefined8 *)*param_1;
    puVar3 = puVar2 + (ulong)*(uint *)(param_1 + 1) * 5;
    do {
      uVar5 = *puVar2;
      param_2[1] = puVar2[1];
      *param_2 = uVar5;
      uVar6 = puVar2[3];
      uVar5 = puVar2[2];
      param_2[4] = puVar2[4];
      param_2[3] = uVar6;
      param_2[2] = uVar5;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[2] = 0;
      param_2 = param_2 + 5;
      puVar2 = puVar2 + 5;
    } while (puVar2 != puVar3);
    uVar1 = *(uint *)(param_1 + 1);
    if (uVar1 != 0) {
      puVar2 = (undefined8 *)(*param_1 + (ulong)uVar1 * 0x28 + -0x18);
      lVar4 = (ulong)uVar1 * -0x28;
      do {
        if (*(char *)((long)puVar2 + 0x17) < '\0') {
          __ZdlPv(*puVar2);
        }
        puVar2 = puVar2 + -5;
        lVar4 = lVar4 + 0x28;
      } while (lVar4 != 0);
    }
  }
  return;
}



/* Entry: 109d3865c; end: 109d3879b;  */

long * FUN_109d3865c(long *param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  plVar2 = (long *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    puVar3 = plVar2 + (ulong)uVar1 * 5 + -3;
    lVar4 = (ulong)uVar1 * -0x28;
    do {
      if (*(char *)((long)puVar3 + 0x17) < '\0') {
        __ZdlPv(*puVar3);
      }
      puVar3 = puVar3 + -5;
      lVar4 = lVar4 + 0x28;
    } while (lVar4 != 0);
    plVar2 = (long *)*param_1;
  }
  if (plVar2 != param_1 + 2) {
    _free();
  }
  return param_1;
}



/* Entry: 109d3879c; end: 109d3885b;  */

void FUN_109d3879c(long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  uint uVar5;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000104c4f6b8();
    uVar5 = (uint)param_2;
    uVar2 = *(uint *)(param_1 + 0x20) & 0xfffffccf;
    if (1 < uVar5 - 7) {
      uVar2 = *(uint *)(param_1 + 0x20);
    }
    uVar1 = uVar2 & 0xfffffff0 | uVar5 & 0xf;
    *(uint *)(param_1 + 0x20) = uVar1;
    if (((uVar5 & 0xf) - 7 < 2) || (((uVar5 & 0xf) != 9 && ((uVar2 & 0x30) != 0)))) {
      *(uint *)(param_1 + 0x20) = uVar1 | 0x4000;
    }
    return;
  }
  if (param_3 < 0x17) {
    uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
    pppuVar4 = &ppuStack_58;
    if (param_3 == 0) goto LAB_109d3881c;
  }
  else {
    pppuVar3 = (undefined8 ***)0x19;
    if ((param_3 | 7) != 0x17) {
      pppuVar3 = (undefined8 ***)((param_3 | 7) + 1);
    }
    pppuVar4 = pppuVar3;
    __Znwm();
    uStack_48 = (ulong)pppuVar3 | 0x8000000000000000;
    ppuStack_58 = pppuVar4;
    uStack_50 = param_3;
  }
  _memmove(pppuVar4,param_2,param_3);
LAB_109d3881c:
  *(undefined1 *)((long)pppuVar4 + param_3) = 0;
  if (*(char *)(param_1 + 0xe7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xd0));
  }
  *(ulong *)(param_1 + 0xd8) = uStack_50;
  *(undefined8 ***)(param_1 + 0xd0) = ppuStack_58;
  *(ulong *)(param_1 + 0xe0) = uStack_48;
  return;
}



/* Entry: 109d3885c; end: 109d388ab;  */

void FUN_109d3885c(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x20) & 0xfffffccf;
  if (1 < param_2 - 7) {
    uVar2 = *(uint *)(param_1 + 0x20);
  }
  uVar1 = uVar2 & 0xfffffff0 | param_2 & 0xf;
  *(uint *)(param_1 + 0x20) = uVar1;
  if (((param_2 & 0xf) - 7 < 2) || (((param_2 & 0xf) != 9 && ((uVar2 & 0x30) != 0)))) {
    *(uint *)(param_1 + 0x20) = uVar1 | 0x4000;
  }
  return;
}



/* Entry: 109d388ac; end: 109d38917;  */

undefined8 FUN_109d388ac(long *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  
  uVar3 = *(uint *)(param_1 + 3);
  uVar2 = uVar3;
  if (uVar3 < 2) {
    uVar2 = 1;
  }
  uVar1 = param_3;
  if (uVar2 <= param_3) {
    uVar1 = (ulong)uVar2;
  }
  if (param_3 <= uVar3 || 0x7fffffff < uVar3) {
    uVar1 = param_3;
  }
  plVar5 = param_1;
  FUN_109e03610(param_1,param_2,uVar1);
  iVar4 = (int)plVar5;
  if ((iVar4 == -1) || ((long)iVar4 == (ulong)*(uint *)(param_1 + 1))) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(*(long *)(*param_1 + (long)iVar4 * 8) + 8);
  }
  return uVar6;
}



/* Entry: 109d38918; end: 109d38987;  */

undefined8 FUN_109d38918(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x40;
  __Znwm(0x40);
  FUN_109d5d628();
  return uVar1;
}



/* Entry: 109d38988; end: 109d389e3;  */

void FUN_109d38988(long *param_1,undefined8 param_2)

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



/* Entry: 109d389e4; end: 109d38aa7;  */

long * FUN_109d389e4(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 < (undefined8 *)param_1[2]) {
    puVar8 = puVar4 + 1;
    *puVar4 = *param_2;
    plVar3 = param_1;
  }
  else {
    lVar7 = (long)puVar4 - *param_1;
    uVar1 = (lVar7 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_109d39f3c();
      puVar4 = (undefined8 *)0x80;
      __Znwm();
      *(uint *)((long)puVar4 + 0x1c) = *(uint *)((long)puVar4 + 0x1c) & 0x38000000 | 0x40000000;
      *puVar4 = 0;
      FUN_109d81a4c(puVar4 + 1,param_1,param_2,param_3,param_4,param_5);
      return puVar4 + 1;
    }
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    plVar2 = param_1;
    FUN_109d39f50();
    puVar4 = (undefined8 *)((long)plVar2 + lVar7);
    puVar8 = puVar4 + 1;
    *puVar4 = *param_2;
    lVar7 = (long)puVar4 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    plVar3 = (long *)*param_1;
    *param_1 = lVar7;
    param_1[1] = (long)puVar8;
    param_1[2] = (long)(plVar2 + uVar6);
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar8;
  return plVar3;
}



/* Entry: 109d38aa8; end: 109d38b33;  */

undefined8 *
FUN_109d38aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x80;
  __Znwm();
  *(uint *)((long)puVar1 + 0x1c) = *(uint *)((long)puVar1 + 0x1c) & 0x38000000 | 0x40000000;
  *puVar1 = 0;
  FUN_109d81a4c(puVar1 + 1,param_1,param_2,param_3,param_4,param_5);
  return puVar1 + 1;
}



/* Entry: 109d38b34; end: 109d38b9b;  */

undefined8 FUN_109d38b34(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x40;
  FUN_109da2290(0x40,param_2 != 0);
  FUN_109d8ba14();
  return uVar1;
}



/* Entry: 109d38b9c; end: 109d38c0f;  */

undefined8 * FUN_109d38b9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x60;
  __Znwm();
  *(uint *)((long)puVar2 + 0x34) = *(uint *)((long)puVar2 + 0x34) & 0x38000000 | 1;
  puVar1 = puVar2 + 4;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = puVar1;
  func_0x000109d8baa0(puVar1,param_1,param_2);
  return puVar1;
}



/* Entry: 109d38c10; end: 109d38cab;  */

undefined8 *
FUN_109d38c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)0xa0;
  __Znwm();
  puVar1 = puVar2 + 0xc;
  *(uint *)((long)puVar2 + 0x74) = *(uint *)((long)puVar2 + 0x74) & 0x38000000 | 3;
  lVar3 = 0x60;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = puVar1;
    puVar2 = puVar2 + 4;
    lVar3 = lVar3 + -0x20;
  } while (lVar3 != 0);
  FUN_109d8bb20(puVar1,param_1,param_2,param_3,param_4);
  return puVar1;
}



/* Entry: 109d38cac; end: 109d38d73;  */

undefined8 *
FUN_109d38cac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)0xa0;
  __Znwm();
  puVar1 = puVar2 + 0xc;
  *(uint *)((long)puVar2 + 0x74) = *(uint *)((long)puVar2 + 0x74) & 0x38000000 | 3;
  lVar3 = 0x60;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = puVar1;
    puVar2 = puVar2 + 4;
    lVar3 = lVar3 + -0x20;
  } while (lVar3 != 0);
  FUN_109d39f84(puVar1,param_1,param_2,param_3,param_4,param_5);
  if (param_6 != 0) {
    FUN_109d8b534(puVar1,param_6,0,0);
  }
  return puVar1;
}



/* Entry: 109d38d74; end: 109d38e07;  */

undefined8 *
FUN_109d38d74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x80;
  __Znwm();
  *(uint *)((long)puVar2 + 0x54) = *(uint *)((long)puVar2 + 0x54) & 0x38000000 | 2;
  puVar1 = puVar2 + 8;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = puVar1;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = puVar1;
  FUN_109d8c000(puVar1,param_1,param_2,param_3,param_4);
  return puVar1;
}



/* Entry: 109d38e08; end: 109d38eab;  */

undefined8 *
FUN_109d38e08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)0xa0;
  __Znwm();
  puVar1 = puVar2 + 0xc;
  *(uint *)((long)puVar2 + 0x74) = *(uint *)((long)puVar2 + 0x74) & 0x38000000 | 3;
  lVar3 = 0x60;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = puVar1;
    puVar2 = puVar2 + 4;
    lVar3 = lVar3 + -0x20;
  } while (lVar3 != 0);
  FUN_109d8c0fc(puVar1,param_1,param_2,param_3,param_4,param_5);
  return puVar1;
}



/* Entry: 109d38eac; end: 109d3902b;  */

long FUN_109d38eac(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  
  iVar6 = 0;
  if (param_6 != 0) {
    lVar4 = param_6 * 0x30;
    plVar7 = (long *)(param_5 + 0x20);
    do {
      iVar6 = iVar6 + (int)((ulong)(*plVar7 - plVar7[-1]) >> 3);
      plVar7 = plVar7 + 6;
      lVar4 = lVar4 + -0x30;
    } while (lVar4 != 0);
  }
  iVar1 = (int)param_4 + 1;
  lVar4 = 0x50;
  FUN_109da22e8(0x50,iVar6 + iVar1,(int)param_6 << 4);
  if (param_6 == 0) {
    iVar6 = 0;
    uVar3 = param_4;
  }
  else {
    uVar2 = 0;
    lVar5 = param_6 * 0x30;
    plVar7 = (long *)(param_5 + 0x20);
    lVar8 = lVar5;
    do {
      uVar2 = uVar2 + (int)((ulong)(*plVar7 - plVar7[-1]) >> 3);
      plVar7 = plVar7 + 6;
      lVar8 = lVar8 + -0x30;
    } while (lVar8 != 0);
    iVar6 = 0;
    plVar7 = (long *)(param_5 + 0x20);
    do {
      iVar6 = iVar6 + (int)((ulong)(*plVar7 - plVar7[-1]) >> 3);
      plVar7 = plVar7 + 6;
      lVar5 = lVar5 + -0x30;
    } while (lVar5 != 0);
    uVar3 = param_4 + uVar2;
  }
  FUN_109d8b0bc(lVar4,**(undefined8 **)(param_1 + 0x10),0x38,lVar4 + ~uVar3 * 0x20,iVar6 + iVar1,
                param_8);
  *(undefined8 *)(lVar4 + 0x40) = 0;
  FUN_109d8b97c(lVar4,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return lVar4;
}



/* Entry: 109d3902c; end: 109d39127;  */

undefined8 *
FUN_109d3902c(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)0x80;
  __Znwm();
  puVar1 = puVar2 + 4;
  *(uint *)((long)puVar2 + 0x34) = *(uint *)((long)puVar2 + 0x34) & 0x38000000 | 1;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = puVar1;
  uVar3 = *param_1;
  FUN_109d8c60c(uVar3,param_2,param_3);
  FUN_109d3a0d8(puVar1,uVar3,0x40,param_1,param_5);
  puVar2[0xc] = puVar2 + 0xe;
  puVar2[0xd] = 0x400000000;
  FUN_109d36160(puVar2 + 0xc,param_2,param_2 + param_3 * 4);
  FUN_109da2b08(puVar1,param_4);
  return puVar1;
}



/* Entry: 109d39128; end: 109d39193;  */

void FUN_109d39128(undefined8 *param_1)

{
  long *plStack_30;
  undefined1 auStack_28 [8];
  
  plStack_30 = (long *)*param_1;
  *param_1 = 0;
  FUN_109d39194(auStack_28,&plStack_30);
  if (plStack_30 != (long *)0x0) {
    (**(code **)(*plStack_30 + 8))();
  }
  return;
}



/* Entry: 109d39194; end: 109d39357;  */

void FUN_109d39194(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  plVar4 = (long *)*param_2;
  if (plVar4 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    *param_2 = 0;
    plVar6 = plVar4;
    (**(code **)(*plVar4 + 0x30))(plVar4,0x113834570);
    if ((int)plVar6 == 0) {
      plStack_68 = plVar4;
      FUN_109d395bc(param_1,&plStack_68,param_3);
      plVar4 = plStack_68;
      plStack_68 = (long *)0x0;
      if (plVar4 == (long *)0x0) {
        return;
      }
      pcVar3 = *(code **)(*plVar4 + 8);
    }
    else {
      *param_1 = 0;
      puVar5 = (undefined8 *)plVar4[1];
      puVar1 = (undefined8 *)plVar4[2];
      if (puVar5 != puVar1) {
        plVar6 = (long *)0x0;
        do {
          *param_1 = 0;
          plStack_60 = (long *)*puVar5;
          *puVar5 = 0;
          plStack_50 = plVar6;
          FUN_109d395bc(&plStack_58,&plStack_60,param_3);
          FUN_109d39358(&plStack_48,&plStack_50,&plStack_58);
          plVar6 = plStack_48;
          *param_1 = plStack_48;
          plStack_48 = (long *)0x0;
          if (plStack_58 != (long *)0x0) {
            (**(code **)(*plStack_58 + 8))();
          }
          plVar2 = plStack_60;
          plStack_60 = (long *)0x0;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
          if (plStack_50 != (long *)0x0) {
            (**(code **)(*plStack_50 + 8))();
          }
          puVar5 = puVar5 + 1;
        } while (puVar5 != puVar1);
      }
      pcVar3 = *(code **)(*plVar4 + 8);
    }
    (*pcVar3)(plVar4);
  }
  return;
}



/* Entry: 109d39358; end: 109d395bb;  */

void FUN_109d39358(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plStack_48;
  
  plVar2 = (long *)*param_2;
  lVar4 = *param_3;
  if (plVar2 == (long *)0x0) {
LAB_109d39468:
    *param_1 = lVar4;
    *param_3 = 0;
    return;
  }
  if (lVar4 == 0) {
    *param_1 = (long)plVar2;
    goto LAB_109d39520;
  }
  (**(code **)(*plVar2 + 0x30))(plVar2,0x113834570);
  if ((int)plVar2 == 0) {
    plVar2 = (long *)*param_3;
    if ((plVar2 == (long *)0x0) ||
       ((**(code **)(*plVar2 + 0x30))(plVar2,0x113834570), (int)plVar2 == 0)) {
      lVar4 = 0x20;
      __Znwm();
      plVar7 = (long *)*param_2;
      *param_2 = 0;
      plVar2 = (long *)*param_3;
      *param_3 = 0;
      FUN_109d39b48();
      plStack_48 = (long *)0x0;
      *param_1 = lVar4;
      FUN_109d39c3c(&plStack_48,0);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar7 == (long *)0x0) {
        return;
      }
      (**(code **)(*plVar7 + 8))();
      return;
    }
    lVar4 = *param_3;
    uVar3 = *(undefined8 *)(lVar4 + 8);
    plStack_48 = (long *)*param_2;
    *param_2 = 0;
    FUN_109d39750((undefined8 *)(lVar4 + 8),uVar3,&plStack_48);
    plVar2 = plStack_48;
    plStack_48 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    lVar4 = *param_3;
    goto LAB_109d39468;
  }
  lVar4 = *param_2;
  plVar2 = (long *)*param_3;
  if (plVar2 == (long *)0x0) {
    plVar7 = (long *)0x0;
LAB_109d394ec:
    *param_3 = 0;
    plStack_48 = plVar7;
    FUN_109d3966c(lVar4 + 8,&plStack_48);
    plVar7 = plStack_48;
    plStack_48 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      pcVar5 = *(code **)(*plVar7 + 8);
LAB_109d39514:
      (*pcVar5)(plVar7);
    }
  }
  else {
    (**(code **)(*plVar2 + 0x30))(plVar2,0x113834570);
    plVar7 = (long *)*param_3;
    if ((int)plVar2 == 0) goto LAB_109d394ec;
    *param_3 = 0;
    lVar6 = plVar7[1];
    lVar1 = plVar7[2];
    if (lVar6 == lVar1) {
LAB_109d393f8:
      pcVar5 = *(code **)(*plVar7 + 8);
      goto LAB_109d39514;
    }
    do {
      FUN_109d3966c(lVar4 + 8,lVar6);
      lVar6 = lVar6 + 8;
    } while (lVar6 != lVar1);
    if (plVar7 != (long *)0x0) goto LAB_109d393f8;
  }
  *param_1 = *param_2;
LAB_109d39520:
  *param_2 = 0;
  return;
}



/* Entry: 109d395bc; end: 109d3966b;  */

void FUN_109d395bc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plStack_38;
  
  plVar1 = (long *)*param_2;
  (**(code **)(*plVar1 + 0x30))(plVar1,0x113834571);
  plStack_38 = (long *)*param_2;
  *param_2 = 0;
  if ((int)plVar1 == 0) {
    *param_1 = plStack_38;
  }
  else {
    FUN_109d39c80(param_1,param_3,&plStack_38);
    plVar1 = plStack_38;
    plStack_38 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  return;
}



/* Entry: 109d3966c; end: 109d3974f;  */

/* WARNING: Possible PIC construction at 0x000109d39730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109d39898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109d398c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109d3989c) */
/* WARNING: Removing unreachable block (ram,0x000109d398c8) */
/* WARNING: Removing unreachable block (ram,0x000109d39914) */
/* WARNING: Removing unreachable block (ram,0x000109d398f8) */

long ****** FUN_109d3966c(long ******param_1,long ******param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *****ppppplVar4;
  long ******pppppplVar5;
  long ****pppplVar6;
  long *****ppppplVar7;
  ulong uVar8;
  ulong uVar9;
  long *****ppppplVar10;
  long ******pppppplVar11;
  long ******pppppplVar12;
  long lVar13;
  undefined8 ******ppppppuVar14;
  undefined8 uVar15;
  undefined1 auStack_c0 [8];
  long *****ppppplStack_b8;
  long ****pppplStack_b0;
  long ****pppplStack_a8;
  long *****ppppplStack_a0;
  long *****ppppplStack_98;
  undefined8 *****pppppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  long ****pppplStack_58;
  long ****pppplStack_50;
  long ****pppplStack_48;
  long ****pppplStack_40;
  long *****ppppplStack_38;
  
  ppppplVar4 = param_1[1];
  if (ppppplVar4 < param_1[2]) {
    ppppplVar7 = *param_2;
    *param_2 = (long *****)0x0;
    *ppppplVar4 = (long ****)ppppplVar7;
    param_1[1] = ppppplVar4 + 1;
    return param_1;
  }
  lVar13 = (long)ppppplVar4 - (long)*param_1;
  uVar1 = (lVar13 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar8 = (long)param_1[2] - (long)*param_1;
    uVar9 = (long)uVar8 >> 2;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      uVar9 = 0x1fffffffffffffff;
    }
    pppppplVar5 = param_1;
    ppppplStack_38 = (long *****)param_1;
    FUN_109d398e4();
    ppppplVar4 = *param_1;
    ppppplVar7 = param_1[1];
    plVar2 = (long *)((long)pppppplVar5 + lVar13);
    ppppplVar10 = *param_2;
    *param_2 = (long *****)0x0;
    pppppplVar12 = (long ******)((long)plVar2 - ((long)ppppplVar7 - (long)ppppplVar4));
    *plVar2 = (long)ppppplVar10;
    _memcpy(pppppplVar12,ppppplVar4);
    pppplStack_48 = (long ****)*param_1;
    *param_1 = (long *****)pppppplVar12;
    param_1[1] = (long *****)(plVar2 + 1);
    pppplStack_40 = (long ****)param_1[2];
    param_1[2] = (long *****)(pppppplVar5 + uVar9);
    pppplStack_58 = pppplStack_48;
    pppplStack_50 = pppplStack_48;
    pppppplVar5 = (long ******)&pppplStack_58;
    uVar15 = 0x109d39734;
    puVar3 = auStack_60;
    pppppplVar11 = param_1;
    param_1 = pppppplVar12;
    ppppppuVar14 = (undefined8 ******)&stack0xfffffffffffffff0;
  }
  else {
    FUN_109d398d0();
    puVar3 = auStack_c0;
    pcStack_68 = FUN_109d39750;
    ppppppuVar14 = &pppppuStack_70;
    pppppplVar5 = (long ******)param_1[1];
    pppppuStack_70 = (undefined8 *****)&stack0xfffffffffffffff0;
    if (pppppplVar5 < param_1[2]) {
      if (param_2 == pppppplVar5) {
        ppppplVar4 = (long *****)*param_3;
        *param_3 = 0;
        *pppppplVar5 = ppppplVar4;
        param_1[1] = (long *****)(pppppplVar5 + 1);
      }
      else {
        FUN_109d39974(param_1,param_2,pppppplVar5,param_2 + 1);
        ppppplVar7 = (long *****)*param_3;
        *param_3 = 0;
        ppppplVar4 = *param_2;
        *param_2 = ppppplVar7;
        if (ppppplVar4 != (long *****)0x0) {
          (*(code *)(*ppppplVar4)[1])();
        }
      }
      return param_2;
    }
    ppppplVar4 = *param_1;
    uVar1 = ((long)pppppplVar5 - (long)ppppplVar4 >> 3) + 1;
    if (uVar1 >> 0x3d == 0) {
      uVar8 = (long)param_1[2] - (long)ppppplVar4;
      uVar9 = (long)uVar8 >> 2;
      if (uVar9 <= uVar1) {
        uVar9 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar8) {
        uVar9 = 0x1fffffffffffffff;
      }
      ppppplStack_98 = (long *****)param_1;
      if (uVar9 == 0) {
        pppppplVar5 = (long ******)0x0;
      }
      else {
        pppppplVar5 = param_1;
        FUN_109d398e4();
      }
      pppplStack_b0 = (long ****)((long)pppppplVar5 + ((long)param_2 - (long)ppppplVar4));
      ppppplStack_a0 = (long *****)(pppppplVar5 + uVar9);
      ppppplStack_b8 = (long *****)pppppplVar5;
      pppplStack_a8 = pppplStack_b0;
      FUN_109d399fc(&ppppplStack_b8,param_3);
      _memcpy(pppplStack_a8,param_2,(long)param_1[1] - (long)param_2);
      pppplStack_a8 = (long ****)((long)param_1[1] + ((long)pppplStack_a8 - (long)param_2));
      param_1[1] = (long *****)param_2;
      pppppplVar11 = (long ******)((long)pppplStack_b0 - ((long)param_2 - (long)*param_1));
      _memcpy(pppppplVar11);
      ppppplStack_b8 = *param_1;
      *param_1 = (long *****)pppppplVar11;
      ppppplVar4 = param_1[2];
      param_1[2] = ppppplStack_a0;
      param_1[1] = (long *****)pppplStack_a8;
      pppplStack_a8 = (long ****)ppppplStack_b8;
      ppppplStack_a0 = ppppplVar4;
      pppplStack_b0 = (long ****)ppppplStack_b8;
      pppppplVar5 = &ppppplStack_b8;
      uVar15 = 0x109d3989c;
      puVar3 = auStack_c0;
    }
    else {
      pppppplVar11 = param_1;
      FUN_109d398d0();
      pppppplVar5 = &ppppplStack_b8;
      uVar15 = 0x109d398c8;
    }
  }
  *(long *******)(puVar3 + -0x20) = param_1;
  *(long *******)(puVar3 + -0x18) = pppppplVar11;
  *(undefined8 *******)(puVar3 + -0x10) = ppppppuVar14;
  *(undefined8 *)(puVar3 + -8) = uVar15;
  ppppplVar4 = pppppplVar5[1];
  ppppplVar7 = pppppplVar5[2];
  while (ppppplVar7 != ppppplVar4) {
    ppppplVar7 = ppppplVar7 + -1;
    pppplVar6 = *ppppplVar7;
    pppppplVar5[2] = ppppplVar7;
    *ppppplVar7 = (long ****)0x0;
    if (pppplVar6 != (long ****)0x0) {
      (*(code *)(*pppplVar6)[1])();
      ppppplVar7 = pppppplVar5[2];
    }
  }
  if (*pppppplVar5 != (long *****)0x0) {
    __ZdlPv();
  }
  return pppppplVar5;
}



/* Entry: 109d39750; end: 109d398cf;  */

/* WARNING: Possible PIC construction at 0x000109d39898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109d398c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109d3989c) */
/* WARNING: Removing unreachable block (ram,0x000109d398c8) */
/* WARNING: Removing unreachable block (ram,0x000109d39914) */
/* WARNING: Removing unreachable block (ram,0x000109d398f8) */

long ** FUN_109d39750(long *param_1,long **param_2,long *param_3)

{
  ulong uVar1;
  long **pplVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  pplVar2 = (long **)param_1[1];
  if (pplVar2 < (long **)param_1[2]) {
    if (param_2 == pplVar2) {
      plVar3 = (long *)*param_3;
      *param_3 = 0;
      *pplVar2 = plVar3;
      param_1[1] = (long)(pplVar2 + 1);
    }
    else {
      FUN_109d39974(param_1,param_2,pplVar2,param_2 + 1);
      plVar4 = (long *)*param_3;
      *param_3 = 0;
      plVar3 = *param_2;
      *param_2 = plVar4;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    return param_2;
  }
  lVar6 = *param_1;
  uVar1 = ((long)pplVar2 - lVar6 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar5 = param_1[2] - lVar6;
    uVar7 = (long)uVar5 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar7 = 0x1fffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar7 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_109d398e4();
    }
    plStack_50 = (long *)((long)plVar3 + ((long)param_2 - lVar6));
    plStack_40 = plVar3 + uVar7;
    plStack_58 = plVar3;
    plStack_48 = plStack_50;
    FUN_109d399fc(&plStack_58,param_3);
    _memcpy(plStack_48,param_2,param_1[1] - (long)param_2);
    plStack_48 = (long *)((long)plStack_48 + (param_1[1] - (long)param_2));
    param_1[1] = (long)param_2;
    lVar6 = (long)plStack_50 - ((long)param_2 - *param_1);
    _memcpy(lVar6);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar6;
    lVar6 = param_1[2];
    param_1[2] = (long)plStack_40;
    param_1[1] = (long)plStack_48;
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    plStack_40 = (long *)lVar6;
  }
  else {
    FUN_109d398d0();
  }
  plVar3 = plStack_50;
  while (plStack_48 != plVar3) {
    plStack_48 = plStack_48 + -1;
    plVar4 = (long *)*plStack_48;
    *plStack_48 = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (plStack_58 != (long *)0x0) {
    __ZdlPv();
  }
  return &plStack_58;
}



/* Entry: 109d398d0; end: 109d398e3;  */

undefined1  [16] FUN_109d398d0(undefined8 param_1,ulong param_2)

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



/* Entry: 109d398e4; end: 109d39973;  */

undefined1  [16] FUN_109d398e4(long *param_1,ulong param_2)

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



/* Entry: 109d39974; end: 109d399fb;  */

void FUN_109d39974(long param_1,long param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar2 = *(long **)(param_1 + 8);
  lVar5 = (long)plVar2 - (long)param_4;
  plVar3 = plVar2;
  for (plVar1 = (long *)(param_2 + lVar5); plVar1 < param_3; plVar1 = plVar1 + 1) {
    lVar4 = *plVar1;
    *plVar1 = 0;
    *plVar3 = lVar4;
    plVar3 = plVar3 + 1;
  }
  *(long **)(param_1 + 8) = plVar3;
  if (plVar2 != param_4) {
    do {
      plVar2 = plVar2 + -1;
      lVar4 = *(long *)(param_2 + -8 + lVar5);
      *(undefined8 *)(param_2 + -8 + lVar5) = 0;
      plVar1 = (long *)*plVar2;
      *plVar2 = lVar4;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d399fc; end: 109d39b47;  */

void FUN_109d399fc(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  plVar11 = (long *)param_1[2];
  if (plVar11 == (long *)param_1[3]) {
    plVar10 = (long *)*param_1;
    plVar12 = (long *)param_1[1];
    if (plVar12 < plVar10 || (long)plVar12 - (long)plVar10 == 0) {
      uVar5 = (long)plVar11 - (long)plVar10 >> 2;
      if ((long)plVar11 - (long)plVar10 == 0) {
        uVar5 = 1;
      }
      lVar4 = param_1[4];
      uVar3 = uVar5;
      lStack_48 = lVar4;
      FUN_109d398e4();
      puVar1 = (undefined8 *)(lVar4 + (uVar5 >> 2) * 8);
      lStack_58 = param_1[2];
      puStack_60 = (undefined8 *)param_1[1];
      lVar6 = lStack_58 - (long)puStack_60;
      puVar7 = puVar1;
      if (lVar6 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar6);
        puVar8 = puVar1;
        do {
          uVar9 = *puStack_60;
          *puStack_60 = 0;
          *puVar8 = uVar9;
          lVar6 = lVar6 + -8;
          puStack_60 = puStack_60 + 1;
          puVar8 = puVar8 + 1;
        } while (lVar6 != 0);
        lStack_58 = param_1[2];
        puStack_60 = (undefined8 *)param_1[1];
      }
      lStack_68 = *param_1;
      *param_1 = lVar4;
      param_1[1] = (long)puVar1;
      lStack_50 = param_1[3];
      param_1[2] = (long)puVar7;
      param_1[3] = lVar4 + uVar3 * 8;
      func_0x000109d39918(&lStack_68);
      plVar11 = (long *)param_1[2];
    }
    else {
      lVar6 = (((long)plVar12 - (long)plVar10 >> 3) + 1) / 2;
      plVar10 = plVar12 + -lVar6;
      if (plVar12 != plVar11) {
        do {
          lVar4 = *plVar12;
          *plVar12 = 0;
          plVar2 = (long *)*plVar10;
          *plVar10 = lVar4;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
          plVar12 = plVar12 + 1;
          plVar10 = plVar10 + 1;
        } while (plVar12 != plVar11);
        plVar12 = (long *)param_1[1];
      }
      plVar11 = plVar10;
      param_1[1] = (long)(plVar12 + -lVar6);
    }
  }
  lVar6 = *param_2;
  *param_2 = 0;
  *plVar11 = lVar6;
  param_1[2] = (long)(plVar11 + 1);
  return;
}



/* Entry: 109d39b48; end: 109d39bbf;  */

undefined8 * FUN_109d39b48(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b5c320;
  puVar1 = param_1 + 1;
  *puVar1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_109d3966c(puVar1);
  FUN_109d3966c(puVar1,param_3);
  return param_1;
}



/* Entry: 109d39bc0; end: 109d39c3b;  */

void FUN_109d39bc0(undefined8 *param_1)

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



/* Entry: 109d39c3c; end: 109d39c7f;  */

void FUN_109d39c3c(long *param_1,long param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    lStack_28 = lVar1 + 8;
    FUN_109d39bc0(&lStack_28);
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 109d39c80; end: 109d39d33;  */

void FUN_109d39c80(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  plVar3 = (long *)*param_2;
  (**(code **)(*(long *)*param_3 + 0x18))(auStack_38,(long *)*param_3);
  plVar1 = plVar3;
  FUN_109d37bcc(plVar3,auStack_38,1);
  plVar2 = (long *)(*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x18);
  lVar5 = plVar1[1];
  lVar4 = *plVar1;
  plVar2[2] = plVar1[2];
  plVar2[1] = lVar5;
  *plVar2 = lVar4;
  plVar1[1] = 0;
  plVar1[2] = 0;
  *plVar1 = 0;
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  *param_1 = 0;
  return;
}



/* Entry: 109d39d34; end: 109d39e4b;  */

void FUN_109d39d34(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != param_3) {
    lVar3 = (((long)param_3 - (long)param_2 >> 3) * -0x5555555555555555 + -1) * param_5;
    puVar4 = param_2;
    do {
      lVar5 = (long)*(char *)((long)puVar4 + 0x17);
      if (lVar5 < 0) {
        lVar5 = puVar4[1];
      }
      lVar3 = lVar5 + lVar3;
      puVar4 = puVar4 + 3;
    } while (puVar4 != param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(param_1,lVar3);
    uVar1 = param_2[1];
    puVar4 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar4 = param_2;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,puVar4,uVar1);
    while (puVar4 = param_2 + 3, puVar4 != param_3) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,param_4,param_5);
      uVar1 = param_2[4];
      puVar2 = (undefined8 *)*puVar4;
      if (-1 < (char)*(byte *)((long)param_2 + 0x2f)) {
        uVar1 = (ulong)*(byte *)((long)param_2 + 0x2f);
        puVar2 = puVar4;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,puVar2,uVar1);
      param_2 = puVar4;
    }
  }
  return;
}



/* Entry: 109d39e4c; end: 109d39f3b;  */

long * FUN_109d39e4c(long *param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  char *pcVar4;
  
  plVar2 = (long *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 * -0x18;
    pcVar4 = (char *)((long)plVar2 + (ulong)uVar1 * 0x18 + -1);
    do {
      if (*pcVar4 < '\0') {
        __ZdlPv(*(undefined8 *)(pcVar4 + -0x17));
      }
      lVar3 = lVar3 + 0x18;
      pcVar4 = pcVar4 + -0x18;
    } while (lVar3 != 0);
    plVar2 = (long *)*param_1;
  }
  if (plVar2 != param_1 + 2) {
    _free();
  }
  return param_1;
}



/* Entry: 109d39f3c; end: 109d39f4f;  */

undefined1  [16]
FUN_109d39f3c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000104c4f740();
  FUN_109d8b0bc();
  FUN_109d3a008();
  FUN_109da2b08(puVar1,param_5);
  auVar4._8_8_ = param_5;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 109d39f50; end: 109d39f83;  */

undefined1  [16]
FUN_109d39f50(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

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
  func_0x000104c4f740();
  FUN_109d8b0bc();
  FUN_109d3a008();
  FUN_109da2b08(param_1,param_5);
  auVar3._8_8_ = param_5;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 109d39f84; end: 109d3a007;  */

long FUN_109d39f84(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_109d8b0bc(param_1,*param_3,0x39,param_1 + -0x60,3);
  FUN_109d3a008();
  FUN_109da2b08(param_1,param_5);
  return param_1;
}



/* Entry: 109d3a008; end: 109d3a0d7;  */

void FUN_109d3a008(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)(param_1 + -0x60);
  if (*plVar2 != 0) {
    lVar3 = *(long *)(param_1 + -0x58);
    **(long **)(param_1 + -0x50) = lVar3;
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_1 + -0x50);
    }
  }
  *plVar2 = param_2;
  if (param_2 != 0) {
    plVar1 = (long *)(param_2 + 8);
    lVar3 = *plVar1;
    *(long *)(param_1 + -0x58) = lVar3;
    if (lVar3 != 0) {
      *(long **)(lVar3 + 0x10) = (long *)(param_1 + -0x58);
    }
    *(long **)(param_1 + -0x50) = plVar1;
    *plVar1 = (long)plVar2;
  }
  plVar2 = (long *)(param_1 + -0x40);
  if (*plVar2 != 0) {
    lVar3 = *(long *)(param_1 + -0x38);
    **(long **)(param_1 + -0x30) = lVar3;
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_1 + -0x30);
    }
  }
  *plVar2 = param_3;
  if (param_3 != 0) {
    plVar1 = (long *)(param_3 + 8);
    lVar3 = *plVar1;
    *(long *)(param_1 + -0x38) = lVar3;
    if (lVar3 != 0) {
      *(long **)(lVar3 + 0x10) = (long *)(param_1 + -0x38);
    }
    *(long **)(param_1 + -0x30) = plVar1;
    *plVar1 = (long)plVar2;
  }
  plVar2 = (long *)(param_1 + -0x20);
  if (*plVar2 != 0) {
    lVar3 = *(long *)(param_1 + -0x18);
    **(long **)(param_1 + -0x10) = lVar3;
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_1 + -0x10);
    }
  }
  *plVar2 = param_4;
  if (param_4 != 0) {
    plVar1 = (long *)(param_4 + 8);
    lVar3 = *plVar1;
    *(long *)(param_1 + -0x18) = lVar3;
    if (lVar3 != 0) {
      *(long **)(lVar3 + 0x10) = (long *)(param_1 + -0x18);
    }
    *(long **)(param_1 + -0x10) = plVar1;
    *plVar1 = (long)plVar2;
  }
  return;
}



/* Entry: 109d3a0d8; end: 109d3a147;  */

void FUN_109d3a0d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + -0x20);
  FUN_109d8b0bc();
  if (*(long *)(param_1 + -0x20) != 0) {
    lVar1 = *(long *)(param_1 + -0x18);
    **(long **)(param_1 + -0x10) = lVar1;
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + -0x10);
    }
  }
  *plVar3 = param_4;
  if (param_4 != 0) {
    plVar2 = (long *)(param_4 + 8);
    lVar1 = *plVar2;
    *(long *)(param_1 + -0x18) = lVar1;
    if (lVar1 != 0) {
      *(long **)(lVar1 + 0x10) = (long *)(param_1 + -0x18);
    }
    *(long **)(param_1 + -0x10) = plVar2;
    *plVar2 = (long)plVar3;
  }
  return;
}



/* Entry: 109d3a148; end: 109d3a16f;  */

long FUN_109d3a148(long param_1)

{
  uint uVar1;
  
  FUN_109d67674();
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    FUN_109da2494(param_1);
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  if ((uVar1 >> 0x1b & 1) != 0) {
    func_0x000109d95478(param_1);
    uVar1 = *(uint *)(param_1 + 0x14);
  }
  if ((uVar1 >> 0x1d & 1) != 0) {
    FUN_109d97d98(param_1);
  }
  FUN_109da258c(param_1);
  return param_1;
}



/* Entry: 109d3a170; end: 109d3a373;  */

ulong * FUN_109d3a170(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uStack_30;
  uint uStack_28;
  
  puVar9 = &uStack_30;
  uVar3 = (uint)param_1[1];
  uVar1 = (uint)param_2[1];
  if ((uVar3 == uVar1) && (*(char *)((long)param_1 + 0xc) == *(char *)((long)param_2 + 0xc))) {
    if (*(char *)((long)param_1 + 0xc) == '\0') {
      uVar3 = (uint)param_1[1];
      if (uVar3 < 0x41) {
        uVar5 = -(ulong)uVar3;
        lVar6 = (long)(*param_1 << (uVar5 & 0x3f)) >> (uVar5 & 0x3f);
        lVar4 = (long)(*param_2 << (uVar5 & 0x3f)) >> (uVar5 & 0x3f);
        uVar3 = (uint)(lVar4 < lVar6);
        if (lVar6 < lVar4) {
          uVar3 = 0xffffffff;
        }
        return (ulong *)(ulong)uVar3;
      }
      uVar5 = *(ulong *)(*param_1 + (ulong)(uVar3 - 1 >> 6) * 8) & 1L << ((ulong)(uVar3 - 1) & 0x3f)
      ;
      uVar1 = (uint)param_2[1] - 1;
      puVar9 = param_2;
      if (0x40 < (uint)param_2[1]) {
        puVar9 = (ulong *)(*param_2 + (ulong)(uVar1 >> 6) * 8);
      }
      if ((uint)(uVar5 != 0) == ((uint)(*puVar9 >> ((ulong)uVar1 & 0x3f)) & 1)) {
        uVar5 = (ulong)uVar3 + 0x3f >> 3 & 0x3ffffff8;
        do {
          if (uVar5 == 0) {
            return (ulong *)0x0;
          }
          uVar7 = *(ulong *)((*param_1 - 8) + uVar5);
          uVar8 = *(ulong *)((*param_2 - 8) + uVar5);
          uVar5 = uVar5 - 8;
        } while (uVar7 == uVar8);
        uVar3 = 0xffffffff;
        if (uVar8 < uVar7) {
          uVar3 = 1;
        }
        return (ulong *)(ulong)uVar3;
      }
      uVar3 = 1;
      if (uVar5 != 0) {
        uVar3 = 0xffffffff;
      }
      return (ulong *)(ulong)uVar3;
    }
    if (uVar3 < 0x41) {
LAB_109d3a2dc:
      uVar3 = (uint)(*param_2 < *param_1);
      if (*param_1 < *param_2) {
        uVar3 = 0xffffffff;
      }
      return (ulong *)(ulong)uVar3;
    }
    uVar5 = (ulong)uVar3 + 0x3f >> 3 & 0x3ffffff8;
    do {
      if (uVar5 == 0) {
        return (ulong *)0x0;
      }
      uVar7 = *(ulong *)((*param_1 - 8) + uVar5);
      uVar8 = *(ulong *)((*param_2 - 8) + uVar5);
      uVar5 = uVar5 - 8;
      bVar2 = uVar8 <= uVar7;
    } while (uVar7 == uVar8);
LAB_109d3a328:
    uVar3 = 0xffffffff;
    if (bVar2) {
      uVar3 = 1;
    }
    puVar9 = (ulong *)(ulong)uVar3;
  }
  else {
    if (uVar1 < uVar3) {
      FUN_109d3a374(&uStack_30,param_2);
      FUN_109d3a170(param_1,&uStack_30);
      puVar9 = param_1;
    }
    else {
      if (uVar1 <= uVar3) {
        if ((*(byte *)((long)param_1 + 0xc) & 1) == 0) {
          puVar9 = param_1;
          if (0x40 < uVar3) {
            puVar9 = (ulong *)(*param_1 + (ulong)(uVar3 - 1 >> 6) * 8);
          }
          if ((*puVar9 >> ((ulong)(uVar3 - 1) & 0x3f) & 1) != 0) {
            return (ulong *)0xffffffff;
          }
        }
        else if ((*(byte *)((long)param_2 + 0xc) & 1) == 0) {
          puVar9 = param_2;
          if (0x40 < uVar1) {
            puVar9 = (ulong *)(*param_2 + (ulong)(uVar1 - 1 >> 6) * 8);
          }
          if ((*puVar9 >> ((ulong)(uVar1 - 1) & 0x3f) & 1) != 0) {
            return (ulong *)0x1;
          }
        }
        if (uVar3 < 0x41) goto LAB_109d3a2dc;
        uVar5 = (ulong)uVar3 + 0x3f >> 3 & 0x3ffffff8;
        do {
          if (uVar5 == 0) {
            return (ulong *)0x0;
          }
          uVar7 = *(ulong *)((*param_1 - 8) + uVar5);
          uVar8 = *(ulong *)((*param_2 - 8) + uVar5);
          uVar5 = uVar5 - 8;
          bVar2 = uVar8 <= uVar7;
        } while (uVar7 == uVar8);
        goto LAB_109d3a328;
      }
      FUN_109d3a374(&uStack_30,param_1,uVar1);
      FUN_109d3a170(&uStack_30,param_2);
    }
    if ((0x40 < uStack_28) && (uStack_30 != 0)) {
      __ZdaPv();
    }
  }
  return puVar9;
}



/* Entry: 109d3a374; end: 109d3a3eb;  */

void FUN_109d3a374(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 auStack_50 [2];
  undefined8 auStack_40 [2];
  
  puVar3 = auStack_50;
  if (*(char *)(param_2 + 0xc) == '\x01') {
    puVar3 = auStack_40;
    FUN_109df0638(auStack_40,param_2);
  }
  else {
    FUN_109df0c98(auStack_50,param_2);
  }
  uVar1 = *(undefined1 *)(param_2 + 0xc);
  uVar2 = *puVar3;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar3 + 1);
  *param_1 = uVar2;
  *(undefined1 *)((long)param_1 + 0xc) = uVar1;
  return;
}



/* Entry: 109d3a3ec; end: 109d3a45f;  */

int FUN_109d3a3ec(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = *param_2;
  *param_2 = 0;
  uStack_30 = 0;
  uStack_28 = param_3;
  func_0x000109d3a4a4(param_1,&uStack_38);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  func_0x000109e00714(&uStack_38);
  return (int)((ulong)(lVar2 - lVar1) >> 3) * -0x55555555;
}



/* Entry: 109d3a460; end: 109d3a4f7;  */

long FUN_109d3a460(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x18;
  func_0x000104c607c8(&lStack_28);
  lStack_28 = param_1;
  FUN_109d3a718(&lStack_28);
  return param_1;
}



/* Entry: 109d3a4f8; end: 109d3a60f;  */

/* WARNING: Possible PIC construction at 0x000109d3a5bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109d3a5c0) */

void FUN_109d3a4f8(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *unaff_x20;
  long lVar7;
  undefined1 **ppuVar8;
  undefined8 uVar9;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  puVar1 = auStack_60;
  ppuVar8 = (undefined1 **)&stack0xfffffffffffffff0;
  lVar7 = param_1[1] - *param_1;
  uVar5 = (lVar7 >> 3) * -0x5555555555555555 + 1;
  if (uVar5 < 0xaaaaaaaaaaaaaab) {
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar6 = lVar4 * 0x5555555555555556;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      uVar6 = uVar5;
    }
    if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar6 = 0xaaaaaaaaaaaaaaa;
    }
    plVar2 = param_1;
    plStack_38 = param_1;
    FUN_109d3a624();
    puStack_50 = (undefined8 *)((long)plVar2 + lVar7);
    plStack_40 = plVar2 + uVar6 * 3;
    uVar9 = *param_2;
    *param_2 = 0;
    puStack_50[1] = param_2[1];
    *puStack_50 = uVar9;
    puStack_50[2] = param_2[2];
    param_2[1] = 0;
    unaff_x20 = puStack_50 + 3;
    param_2 = (undefined8 *)*param_1;
    param_3 = (undefined8 *)param_1[1];
    param_4 = (undefined8 *)((long)puStack_50 + ((long)param_2 - (long)param_3));
    uVar9 = 0x109d3a5c0;
    plStack_58 = plVar2;
    puStack_48 = unaff_x20;
  }
  else {
    FUN_109d3a610();
    func_0x000109d3a6cc(&plStack_58);
    __Unwind_Resume(param_1);
    pcStack_68 = FUN_109d3a610;
    ppuStack_70 = ppuVar8;
    func_0x000104c4f6cc(&DAT_10f62a4d8);
    puVar1 = &stack0xffffffffffffff70;
    pcStack_78 = FUN_109d3a624;
    ppuVar8 = &puStack_80;
    if (param_2 < (undefined8 *)0xaaaaaaaaaaaaaab) {
      puStack_80 = (undefined1 *)&ppuStack_70;
      __Znwm((long)param_2 * 0x18);
      return;
    }
    uVar9 = 0x109d3a668;
    puStack_80 = (undefined1 *)&ppuStack_70;
    func_0x000104c4f740();
  }
  if (param_2 != param_3) {
    *(undefined8 **)(puVar1 + -0x20) = unaff_x20;
    *(long **)(puVar1 + -0x18) = param_1;
    *(undefined1 ***)(puVar1 + -0x10) = ppuVar8;
    *(undefined8 *)(puVar1 + -8) = uVar9;
    puVar3 = param_2;
    do {
      uVar9 = *puVar3;
      *puVar3 = 0;
      param_4[1] = puVar3[1];
      *param_4 = uVar9;
      param_4[2] = puVar3[2];
      puVar3[1] = 0;
      puVar3 = puVar3 + 3;
      param_4 = param_4 + 3;
    } while (puVar3 != param_3);
    do {
      func_0x000109e00714();
      param_2 = param_2 + 3;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 109d3a610; end: 109d3a623;  */

void FUN_109d3a610(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if ((undefined8 *)0xaaaaaaaaaaaaaaa < param_2) {
    func_0x000104c4f740();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        uVar2 = *puVar1;
        *puVar1 = 0;
        param_4[1] = puVar1[1];
        *param_4 = uVar2;
        param_4[2] = puVar1[2];
        puVar1[1] = 0;
        puVar1 = puVar1 + 3;
        param_4 = param_4 + 3;
      } while (puVar1 != param_3);
      do {
        func_0x000109e00714();
        param_2 = param_2 + 3;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x18);
  return;
}



/* Entry: 109d3a624; end: 109d3a717;  */

void FUN_109d3a624(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((undefined8 *)0xaaaaaaaaaaaaaaa < param_2) {
    func_0x000104c4f740();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        uVar2 = *puVar1;
        *puVar1 = 0;
        param_4[1] = puVar1[1];
        *param_4 = uVar2;
        param_4[2] = puVar1[2];
        puVar1[1] = 0;
        puVar1 = puVar1 + 3;
        param_4 = param_4 + 3;
      } while (puVar1 != param_3);
      do {
        func_0x000109e00714();
        param_2 = param_2 + 3;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x18);
  return;
}



/* Entry: 109d3a718; end: 109d3a787;  */

void FUN_109d3a718(long *param_1)

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
        lVar1 = lVar1 + -0x18;
        func_0x000109e00714();
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



/* Entry: 109d3a788; end: 109d3a7bb;  */

undefined1  [16] FUN_109d3a788(uint param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (param_1 < 0x17) {
    auVar1._8_8_ = *(undefined8 *)(&UNK_10e0433c0 + (ulong)param_1 * 8);
    auVar1._0_8_ = (&PTR_DAT_110b40d20)[param_1];
    return auVar1;
  }
  auVar2._8_8_ = 7;
  auVar2._0_8_ = &DAT_10f5aefc7;
  return auVar2;
}



/* Entry: 109d3a7bc; end: 109d3a913;  */

void FUN_109d3a7bc(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_3 - param_2;
  lVar1 = param_1[1];
  if ((ulong)param_1[2] < (ulong)(lVar1 + lVar2)) {
    FUN_109dffce4(param_1,param_1 + 3,lVar1 + lVar2,1);
    lVar1 = param_1[1];
  }
  if (param_2 != param_3) {
    _memcpy(*param_1 + lVar1,param_2,lVar2);
    lVar1 = param_1[1];
  }
  param_1[1] = lVar1 + lVar2;
  return;
}



/* Entry: 109d3a914; end: 109d3aa17;  */

void FUN_109d3a914(long *param_1,long *param_2)

{
  long lVar1;
  
  if ((long *)*param_1 != param_1 + 3) {
    _free();
  }
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = (long)(param_2 + 3);
  return;
}



/* Entry: 109d3aa18; end: 109d3aa87;  */

void FUN_109d3aa18(long *param_1)

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
        func_0x000109d3a9c0();
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



/* Entry: 109d3aa88; end: 109d3ab07;  */

void FUN_109d3aa88(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)0x38;
  __Znwm();
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *puVar3 = &PTR_FUN_110b5c180;
  FUN_109e04498(puVar3 + 1,param_2);
  puVar3[4] = uVar1;
  puVar3[5] = uVar2;
  *(undefined1 *)(puVar3 + 6) = 1;
  *param_1 = puVar3;
  return;
}



/* Entry: 109d3ab08; end: 109d3abbb;  */

undefined8 * FUN_109d3ab08(long *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_38;
  
  puVar2 = (undefined8 *)(*param_1 + 0x780);
  FUN_109d9ffc0(puVar2,param_3);
  if (param_3 * 2 != 0) {
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
    } while (param_3 * 2 != lVar5);
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



/* Entry: 109d3abbc; end: 109d3ac3f;  */

void FUN_109d3abbc(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  
  lVar3 = param_1[1];
  lVar1 = (long)param_3 - (long)param_2 >> 3;
  uVar2 = lVar3 + lVar1;
  if ((ulong)param_1[2] < uVar2) {
    FUN_109dffce4(param_1,param_1 + 3,uVar2,1);
    lVar3 = param_1[1];
  }
  if (param_2 != param_3) {
    puVar4 = (undefined1 *)(*param_1 + lVar3);
    do {
      puVar5 = param_2 + 1;
      *puVar4 = (char)*param_2;
      puVar4 = puVar4 + 1;
      param_2 = puVar5;
    } while (puVar5 != param_3);
    lVar3 = param_1[1];
  }
  param_1[1] = lVar3 + lVar1;
  return;
}



/* Entry: 109d3ac40; end: 109d3ac93;  */

uint FUN_109d3ac40(uint *param_1)

{
  ulong uVar1;
  
  uVar1 = ((ulong)(param_1[2] * 0x25) << 0x20 ^ 0xffffffffffffffff) + (ulong)(param_1[2] * 0x25) +
          ((ulong)(*param_1 >> 4 ^ *param_1 >> 9) << 0x20);
  uVar1 = uVar1 ^ uVar1 >> 0x16;
  uVar1 = uVar1 + (uVar1 << 0xd ^ 0xffffffffffffffff);
  uVar1 = (uVar1 ^ uVar1 >> 8) * 9;
  uVar1 = uVar1 ^ uVar1 >> 0xf;
  uVar1 = uVar1 + (uVar1 << 0x1b ^ 0xffffffffffffffff);
  return (uint)(uVar1 >> 0x1f) ^ (uint)uVar1;
}



/* Entry: 109d3ac94; end: 109d3aca7;  */

void FUN_109d3ac94(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  lVar2 = plVar1[1];
  if ((ulong)plVar1[2] < lVar2 + 1U) {
    FUN_109dffce4(plVar1,plVar1 + 3,lVar2 + 1U,1);
    lVar2 = plVar1[1];
  }
  *(char *)(*plVar1 + lVar2) = (char)param_2;
  plVar1[1] = plVar1[1] + 1;
  return;
}


