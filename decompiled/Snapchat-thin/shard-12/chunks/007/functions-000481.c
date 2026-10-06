/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1096973b4; end: 10969741f;  */

void FUN_1096973b4(undefined8 param_1,undefined8 param_2)

{
  undefined **appuStack_30 [2];
  
  FUN_10969bc60(appuStack_30);
  FUN_109697420(param_1,param_2,appuStack_30);
  appuStack_30[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_30);
  return;
}



/* Entry: 109697420; end: 109697513;  */

void FUN_109697420(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined **ppuStack_50;
  long lStack_48;
  undefined **appuStack_40 [2];
  
  FUN_10969b010(appuStack_40,param_2,1,0);
  FUN_10969a8ac(&ppuStack_50,appuStack_40,0x2000);
  if (*(long *)(lStack_48 + 0x10) != 0) {
    plVar1 = (long *)(lStack_48 + 8);
    (**(code **)(*plVar1 + 0x20))();
    if (((ulong)plVar1 & 1) != 0) {
      (**(code **)(*param_3 + 0x28))(param_1,param_3,&ppuStack_50);
      FUN_10969aa84(&ppuStack_50);
      goto LAB_1096974ac;
    }
  }
  *param_1 = &PTR_FUN_110b01d60;
  param_1[1] = 0;
LAB_1096974ac:
  ppuStack_50 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_50);
  appuStack_40[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_40);
  return;
}



/* Entry: 109697514; end: 109697547;  */

undefined8 * FUN_109697514(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 109697548; end: 10969757b;  */

undefined8 * FUN_109697548(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 10969757c; end: 1096975af;  */

undefined8 * FUN_10969757c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096975b0; end: 1096975f3;  */

long FUN_1096975b0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)(*(long *)(param_2 + 8) + 0x38);
  if (*(char *)(*(long *)(param_2 + 8) + 0x4f) < '\0') {
    plVar3 = (long *)*plVar3;
  }
  lVar1 = (long)plVar3;
  _strlen(plVar3);
  lVar2 = param_1;
  func_0x000107c2ace8();
  func_0x000107c2c4d8(*(long *)(lVar2 + 8) + 8,plVar3,lVar1);
  return param_1;
}



/* Entry: 1096975f4; end: 1096976f3;  */

void FUN_1096975f4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lVar2 = *(long *)(param_2 + 8) + 8;
  FUN_109698e78();
  if (lVar2 == 0) {
    if ((bRam000000011382a960 & 1) == 0) {
      iVar1 = 0x1382a960;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        func_0x000107c2accc();
        func_0x00010969659c(auStack_40);
        lRam000000011382a958 = lStack_38;
        lStack_38 = 0;
        ppuRam000000011382a950 = &PTR_FUN_110b00f28;
        FUN_109693dac(auStack_40);
        ___cxa_guard_release(0x11382a960);
      }
    }
    if (*(long *)(param_2 + 8) != lRam000000011382a958) {
      lVar2 = lRam000000011382a958 + 0x20;
      FUN_109698e78(lVar2,param_3);
      if (lVar2 != 0) goto LAB_109697624;
    }
    uVar3 = 0;
  }
  else {
LAB_109697624:
    uVar3 = *(undefined8 *)(lVar2 + 8);
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 1096976f4; end: 10969777b;  */

void FUN_1096976f4(ulong *param_1,long param_2)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(param_2 + 8);
  if (*(int *)(lVar3 + 0x14) != 0) {
    uVar4 = 0;
    do {
      puVar1 = (ulong *)(*(long *)(lVar3 + 8) + uVar4 * 8);
      if ((1 < *puVar1) && (uVar5 = puVar1[1], (*(byte *)(uVar5 + 0x10) >> 1 & 1) != 0))
      goto LAB_109697774;
      uVar2 = (int)uVar4 + 2;
      uVar4 = (ulong)uVar2;
    } while (uVar2 <= *(uint *)(lVar3 + 0x10));
  }
  if (*(int *)(lVar3 + 0x2c) != 0) {
    uVar4 = 0;
    do {
      puVar1 = (ulong *)(*(long *)(lVar3 + 0x20) + uVar4 * 8);
      if ((1 < *puVar1) && (uVar5 = puVar1[1], (*(byte *)(uVar5 + 0x10) >> 1 & 1) != 0))
      goto LAB_109697774;
      uVar2 = (int)uVar4 + 2;
      uVar4 = (ulong)uVar2;
    } while (uVar2 <= *(uint *)(lVar3 + 0x28));
  }
  uVar5 = 0;
LAB_109697774:
  *param_1 = uVar5;
  return;
}



/* Entry: 10969777c; end: 1096977e3;  */

void FUN_10969777c(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_38;
  
  FUN_1096975f4(&lStack_38);
  if (lStack_38 == 0) {
    lVar1 = *(long *)(param_2 + 8) + 0x20;
    FUN_109698e78(lVar1,param_3);
    if (lVar1 == 0) {
      lStack_38 = 0;
    }
    else {
      lStack_38 = *(long *)(lVar1 + 8);
    }
  }
  *param_1 = lStack_38;
  return;
}



/* Entry: 1096977e4; end: 109697863;  */

void FUN_1096977e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  uVar1 = param_2;
  func_0x000107c2accc();
  func_0x000107c31940(auStack_48,param_2);
  FUN_109697864(param_1,uVar1,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return;
}



/* Entry: 109697864; end: 1096978cb;  */

void FUN_109697864(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  
  FUN_1096990a8();
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x28);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096978cc; end: 109697927;  */

undefined8 FUN_1096978cc(void)

{
  int iVar1;
  
  if ((bRam000000011382a978 & 1) == 0) {
    iVar1 = 0x1382a978;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ppuRam000000011382a968 = &PTR_FUN_110b00f28;
      uRam000000011382a970 = 0;
      ___cxa_guard_release(0x11382a978);
    }
  }
  return 0x11382a968;
}



/* Entry: 109697928; end: 109697983;  */

long FUN_109697928(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c2ace8();
  func_0x000107c2c4d8(*(long *)(lVar1 + 8) + 8,param_2,param_3);
  return param_1;
}



/* Entry: 109697984; end: 109697a37;  */

undefined8 * FUN_109697984(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined ***pppuVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined **ppuStack_90;
  long lStack_88;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_28;
  
  pppuVar4 = &ppuStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_1[1] == 0) || (*(int *)(param_1[1] + -8) != 1)) {
    FUN_109697928(&ppuStack_50);
    uVar6 = param_1[1];
    param_1[1] = uStack_48;
    *param_1 = ppuStack_50;
    ppuStack_50 = &PTR_FUN_110b01d60;
    uStack_48 = uVar6;
    func_0x000107c2acd4(&ppuStack_50);
  }
  else {
    pppuVar4 = (undefined ***)(param_1[1] + 8);
    func_0x000107c2c4d8(pppuVar4);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    func_0x000104bd46a0();
  }
  __Unwind_Resume();
  if ((param_2[1] == 0) || (*(int *)(param_2[1] + -8) != 1)) {
    func_0x000107c2ace8(&ppuStack_90);
    lVar3 = lStack_88;
    FUN_10923b090(pppuVar4,lStack_88 + 8);
    if (param_2[1] != lVar3) {
      func_0x000107c2acd4(param_2);
      param_2[1] = lStack_88;
      *param_2 = ppuStack_90;
      if (param_2[1] != 0) {
        piVar5 = (int *)(param_2[1] + -8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = *piVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    ppuStack_90 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_90);
  }
  else {
    FUN_10923b090(pppuVar4,param_2[1] + 8);
  }
  return pppuVar4;
}



/* Entry: 109697a38; end: 109697b13;  */

undefined8 FUN_109697a38(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  undefined **ppuStack_40;
  long lStack_38;
  
  if ((param_2[1] == 0) || (*(int *)(param_2[1] + -8) != 1)) {
    func_0x000107c2ace8(&ppuStack_40);
    lVar3 = lStack_38;
    FUN_10923b090(param_1,lStack_38 + 8);
    if (param_2[1] != lVar3) {
      func_0x000107c2acd4(param_2);
      param_2[1] = lStack_38;
      *param_2 = ppuStack_40;
      if (param_2[1] != 0) {
        piVar4 = (int *)(param_2[1] + -8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar2) {
            *piVar4 = *piVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    ppuStack_40 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_40);
  }
  else {
    FUN_10923b090(param_1,param_2[1] + 8);
  }
  return param_1;
}



/* Entry: 109697b14; end: 109697beb;  */

undefined8 * FUN_109697b14(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined ***pppuVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *extraout_x8;
  undefined8 uVar6;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_28;
  
  pppuVar2 = &ppuStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = 0;
  if ((param_1[1] == 0) || (lVar5 = param_1[1], *(int *)(param_1[1] + -8) != 1)) {
    lVar4 = (long)*(char *)(lVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar1 = *(long *)(lVar5 + 8);
      lVar4 = *(long *)(lVar5 + 0x10);
    }
    else {
      lVar1 = lVar5 + 8;
    }
    FUN_109697bec(&ppuStack_50,lVar1);
    uVar6 = param_1[1];
    param_1[1] = uStack_48;
    *param_1 = ppuStack_50;
    ppuStack_50 = &PTR_FUN_110b01d60;
    uStack_48 = uVar6;
    func_0x000107c2acd4(&ppuStack_50);
  }
  else {
    pppuVar2 = (undefined ***)(lVar5 + 8);
    lVar5 = param_3;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppuVar2,param_2,param_3);
    lVar4 = param_2;
    param_2 = param_3;
    param_3 = lVar5;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if ((int)lVar4 != 0) {
    func_0x000104bd46a0();
  }
  __Unwind_Resume();
  FUN_109697928(extraout_x8,pppuVar2,lVar4);
  puVar3 = extraout_x8;
  FUN_109697b14(extraout_x8,param_2,param_3);
  return puVar3;
}



/* Entry: 109697bec; end: 109697c4b;  */

void FUN_109697bec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_109697928(param_1,param_2,param_3);
  FUN_109697b14(param_1,param_4,param_5);
  return;
}



/* Entry: 109697c4c; end: 109697ca3;  */

long FUN_109697c4c(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_2 + 8);
  if (lVar4 == lVar3) {
    return 0;
  }
  if (lVar4 == 0) {
    return 0xffffffff;
  }
  if (lVar3 == 0) {
    return 1;
  }
  plVar1 = (long *)(lVar4 + 8);
  if (*(char *)(lVar4 + 0x1f) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  plVar2 = (long *)(lVar3 + 8);
  if (*(char *)(lVar3 + 0x1f) < '\0') {
    plVar2 = (long *)*plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbfe24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strcmp_11034cba8)(plVar1,plVar2);
  return (long)plVar1;
}



/* Entry: 109697ca4; end: 109697d7b;  */

void FUN_109697ca4(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  byte bStack_32;
  byte bStack_31;
  
  uVar2 = (ulong)*(char *)(*(long *)(param_2 + 8) + 0x1f);
  if ((long)uVar2 < 0) {
    uVar2 = *(ulong *)(*(long *)(param_2 + 8) + 0x10);
  }
  uVar4 = uVar2 & 0xffffff80;
  uVar2 = (long)(int)uVar2;
  while (bStack_32 = (byte)uVar2, uVar4 != 0) {
    bStack_31 = bStack_32 | 0x80;
    (**(code **)(*param_1 + 0x48))(param_1,&bStack_31,1,1);
    uVar4 = uVar2 >> 0xe;
    uVar2 = uVar2 >> 7;
  }
  (**(code **)(*param_1 + 0x48))(param_1,&bStack_32,1,1);
  lVar5 = *(long *)(param_2 + 8);
  lVar3 = (long)*(char *)(lVar5 + 0x1f);
  if (lVar3 < 0) {
    lVar1 = *(long *)(lVar5 + 8);
    lVar3 = *(long *)(lVar5 + 0x10);
  }
  else {
    lVar1 = lVar5 + 8;
  }
  (**(code **)(*param_1 + 0x48))(param_1,lVar1,1,(long)(int)lVar3);
  return;
}



/* Entry: 109697d7c; end: 109697e8b;  */

bool FUN_109697d7c(long *param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  byte bStack_31;
  
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x40))(param_1,&bStack_31,1,1);
  if ((int)plVar2 == 1) {
    uVar7 = 0;
    uVar5 = 0;
    do {
      uVar7 = ((ulong)bStack_31 & 0x7f) << (uVar5 & 0x3f) | uVar7;
      if (-1 < (char)bStack_31) {
        lVar3 = uVar7 + 1;
        __Znam();
        iVar6 = (int)uVar7;
        (**(code **)(*param_1 + 0x40))(param_1,lVar3,1,(long)iVar6);
        bVar1 = iVar6 == (int)param_1;
        if (bVar1) {
          *(undefined1 *)(lVar3 + uVar7) = 0;
          lVar4 = lVar3;
          _strlen(lVar3);
          FUN_109697984(param_2,lVar3,lVar4);
        }
        __ZdaPv(lVar3);
        return bVar1;
      }
      uVar5 = uVar5 + 7;
      plVar2 = param_1;
      (**(code **)(*param_1 + 0x40))(param_1,&bStack_31,1,1);
    } while ((int)plVar2 == 1);
  }
  return false;
}



/* Entry: 109697e8c; end: 109697f17;  */

void FUN_109697e8c(long *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  int *piVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar6 = (undefined8 *)param_1[1];
  uVar9 = (long)puVar6 - *param_1 >> 4;
  if (param_2 <= uVar9) {
    if (param_2 < uVar9) {
      puVar5 = (undefined8 *)(*param_1 + param_2 * 0x10);
      while (puVar6 != puVar5) {
        puVar6 = puVar6 + -2;
        (**(code **)*puVar6)(puVar6);
      }
      param_1[1] = (long)puVar5;
    }
    return;
  }
  puVar5 = (undefined8 *)(param_2 - uVar9);
  puVar6 = (undefined8 *)param_1[1];
  if ((undefined8 *)(param_1[2] - (long)puVar6 >> 4) < puVar5) {
    lVar13 = (long)puVar6 - *param_1;
    uVar9 = (long)puVar5 + (lVar13 >> 4);
    if (uVar9 >> 0x3c != 0) {
      FUN_109698528();
      func_0x000109698570(&uStack_58);
      __Unwind_Resume();
      puVar4 = (undefined8 *)*param_1;
      puVar1 = (undefined8 *)param_1[1];
      puVar7 = (undefined8 *)((long)puVar4 + (puVar5[1] - (long)puVar1));
      puVar6 = puVar4;
      puVar11 = puVar7;
      if (puVar1 != puVar4) {
        do {
          *puVar11 = &PTR_FUN_110b01d60;
          uVar14 = *puVar6;
          puVar11[1] = puVar6[1];
          *puVar11 = uVar14;
          puVar6[1] = 0;
          puVar6 = puVar6 + 2;
          puVar11 = puVar11 + 2;
        } while (puVar6 != puVar1);
        do {
          puVar6 = puVar4 + 2;
          (**(code **)*puVar4)(puVar4);
          puVar4 = puVar6;
        } while (puVar6 != puVar1);
        puVar4 = (undefined8 *)*param_1;
      }
      puVar5[1] = puVar7;
      *param_1 = (long)puVar7;
      param_1[1] = (long)puVar4;
      puVar5[1] = puVar4;
      lVar13 = param_1[1];
      param_1[1] = puVar5[2];
      puVar5[2] = lVar13;
      lVar13 = param_1[2];
      param_1[2] = puVar5[3];
      puVar5[3] = lVar13;
      *puVar5 = puVar5[1];
      return;
    }
    uVar8 = param_1[2] - *param_1;
    uVar10 = (long)uVar8 >> 3;
    if (uVar10 <= uVar9) {
      uVar10 = uVar9;
    }
    if (0x7fffffffffffffef < uVar8) {
      uVar10 = 0xfffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar10 == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = puVar5;
      FUN_10969853c();
    }
    puStack_50 = (undefined8 *)(uVar10 + lVar13);
    lStack_40 = uVar10 + (long)puVar6 * 0x10;
    puStack_48 = puStack_50 + (long)puVar5 * 2;
    puVar6 = puStack_50;
    do {
      *puVar6 = &PTR_FUN_110b01d60;
      uVar14 = *param_3;
      puVar6[1] = param_3[1];
      *puVar6 = uVar14;
      if (puVar6[1] != 0) {
        piVar12 = (int *)(puVar6[1] + -8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar3) {
            *piVar12 = *piVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar6 = puVar6 + 2;
    } while (puVar6 != puStack_48);
    uStack_58 = uVar10;
    FUN_109698458(param_1,&uStack_58);
    func_0x000109698570(&uStack_58);
  }
  else {
    puVar7 = puVar6;
    if (puVar5 != (undefined8 *)0x0) {
      puVar7 = puVar6 + (long)puVar5 * 2;
      do {
        *puVar6 = &PTR_FUN_110b01d60;
        uVar14 = *param_3;
        puVar6[1] = param_3[1];
        *puVar6 = uVar14;
        if (puVar6[1] != 0) {
          piVar12 = (int *)(puVar6[1] + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar3) {
              *piVar12 = *piVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        puVar6 = puVar6 + 2;
      } while (puVar6 != puVar7);
    }
    param_1[1] = (long)puVar7;
  }
  return;
}



/* Entry: 109697f18; end: 109697f7b;  */

void FUN_109697f18(long param_1,int param_2)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  FUN_109697e8c(*(long *)(param_1 + 8) + 8,(long)param_2,&ppuStack_30);
  ppuStack_30 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 109697f7c; end: 109698157;  */

long * FUN_109697f7c(ulong *param_1,long *param_2,ulong param_3,long *param_4)

{
  ulong uVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined1 *puVar11;
  int iStack_84;
  ulong *puStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  
  plVar4 = param_2;
  if (param_3 != 0) {
    puVar2 = (undefined1 *)param_1[1];
    if (param_1[2] - (long)puVar2 < param_3) {
      uVar10 = *param_1;
      puVar11 = puVar2 + (param_3 - uVar10);
      if ((long)puVar11 < 0) {
        puVar3 = param_1;
        FUN_109274940();
        pcStack_68 = FUN_109698158;
        iStack_84 = *(int *)(puVar3[1] + 0x10) - *(int *)(puVar3[1] + 8);
        puStack_80 = param_1;
        plStack_78 = param_2;
        puStack_70 = &stack0xfffffffffffffff0;
        (**(code **)(*plVar4 + 0x48))(plVar4,&iStack_84,4,1);
        uVar5 = *(undefined8 *)(puVar3[1] + 8);
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,uVar5,1,(long)(*(int *)(puVar3[1] + 0x10) - (int)uVar5));
        return plVar4;
      }
      uVar6 = param_1[2] - uVar10;
      puVar7 = (undefined1 *)(uVar6 * 2);
      if (puVar7 < puVar11 || (long)puVar7 - (long)puVar11 == 0) {
        puVar7 = puVar11;
      }
      if (0x3ffffffffffffffe < uVar6) {
        puVar7 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar7 == (undefined1 *)0x0) {
        puVar11 = (undefined1 *)0x0;
      }
      else {
        puVar11 = puVar7;
        __Znwm();
      }
      plVar4 = (long *)(puVar11 + ((long)param_2 - uVar10));
      _memset(plVar4,(char)*param_4,param_3);
      _memcpy((undefined1 *)((long)plVar4 + param_3),param_2,(long)puVar2 - (long)param_2);
      param_1[1] = (ulong)param_2;
      _memcpy(puVar11,uVar10,(long)param_2 - uVar10);
      *param_1 = (ulong)puVar11;
      param_1[1] = (ulong)((undefined1 *)((long)plVar4 + param_3) + ((long)puVar2 - (long)param_2));
      param_1[2] = (ulong)(puVar11 + (long)puVar7);
      if (uVar10 != 0) {
        __ZdlPv(uVar10);
      }
    }
    else {
      uVar6 = (long)puVar2 - (long)param_2;
      lVar9 = param_3 - uVar6;
      puVar11 = puVar2;
      uVar10 = param_3;
      if (uVar6 <= param_3 && lVar9 != 0) {
        _memset(puVar2,(char)*param_4,lVar9);
        puVar11 = puVar2 + lVar9;
        param_1[1] = (ulong)puVar11;
        uVar10 = uVar6;
        if (uVar6 == 0) {
          return param_2;
        }
      }
      puVar7 = puVar11;
      if (puVar11 + -param_3 < puVar2) {
        uVar1 = param_3;
        if (param_3 <= uVar6) {
          uVar1 = uVar6;
        }
        lVar9 = (long)param_2 - param_3;
        plVar8 = param_2;
        do {
          *(undefined1 *)((long)plVar8 + uVar1) = *(undefined1 *)(lVar9 + uVar1);
          lVar9 = lVar9 + 1;
          plVar8 = (long *)((long)plVar8 + 1);
        } while ((undefined1 *)(lVar9 + uVar1) != puVar2);
        uVar1 = param_3;
        if (param_3 <= uVar6) {
          uVar1 = uVar6;
        }
        puVar7 = (undefined1 *)((long)plVar8 + uVar1);
      }
      param_1[1] = (ulong)puVar7;
      if (puVar11 != (undefined1 *)((long)param_2 + param_3)) {
        _memmove((undefined1 *)((long)param_2 + param_3),param_2);
      }
      if (param_2 <= param_4) {
        if ((long *)param_1[1] <= param_4) {
          param_3 = 0;
        }
        param_4 = (long *)((long)param_4 + param_3);
      }
      _memset(param_2,(char)*param_4,uVar10);
    }
  }
  return plVar4;
}



/* Entry: 109698158; end: 109698293;  */

void FUN_109698158(long param_1,long *param_2)

{
  undefined8 uVar1;
  int iStack_24;
  
  iStack_24 = *(int *)(*(long *)(param_1 + 8) + 0x10) - *(int *)(*(long *)(param_1 + 8) + 8);
  (**(code **)(*param_2 + 0x48))(param_2,&iStack_24,4,1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 8) + 8);
  (**(code **)(*param_2 + 0x48))
            (param_2,uVar1,1,(long)(*(int *)(*(long *)(param_1 + 8) + 0x10) - (int)uVar1));
  return;
}



/* Entry: 109698294; end: 1096982c7;  */

undefined8 * FUN_109698294(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096982c8; end: 1096982fb;  */

void FUN_1096982c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096982fc; end: 109698457;  */

void FUN_1096982fc(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar6 = (undefined8 *)param_1[1];
  if ((undefined8 *)(param_1[2] - (long)puVar6 >> 4) < param_2) {
    lVar12 = (long)puVar6 - *param_1;
    uVar1 = (long)param_2 + (lVar12 >> 4);
    if (uVar1 >> 0x3c != 0) {
      FUN_109698528();
      func_0x000109698570(&uStack_58);
      __Unwind_Resume();
      puVar5 = (undefined8 *)*param_1;
      puVar2 = (undefined8 *)param_1[1];
      puVar7 = (undefined8 *)((long)puVar5 + (param_2[1] - (long)puVar2));
      puVar6 = puVar5;
      puVar10 = puVar7;
      if (puVar2 != puVar5) {
        do {
          *puVar10 = &PTR_FUN_110b01d60;
          uVar13 = *puVar6;
          puVar10[1] = puVar6[1];
          *puVar10 = uVar13;
          puVar6[1] = 0;
          puVar6 = puVar6 + 2;
          puVar10 = puVar10 + 2;
        } while (puVar6 != puVar2);
        do {
          puVar6 = puVar5 + 2;
          (**(code **)*puVar5)(puVar5);
          puVar5 = puVar6;
        } while (puVar6 != puVar2);
        puVar5 = (undefined8 *)*param_1;
      }
      param_2[1] = puVar7;
      *param_1 = (long)puVar7;
      param_1[1] = (long)puVar5;
      param_2[1] = puVar5;
      lVar12 = param_1[1];
      param_1[1] = param_2[2];
      param_2[2] = lVar12;
      lVar12 = param_1[2];
      param_1[2] = param_2[3];
      param_2[3] = lVar12;
      *param_2 = param_2[1];
      return;
    }
    uVar8 = param_1[2] - *param_1;
    uVar9 = (long)uVar8 >> 3;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7fffffffffffffef < uVar8) {
      uVar9 = 0xfffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar9 == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = param_2;
      FUN_10969853c();
    }
    puStack_50 = (undefined8 *)(uVar9 + lVar12);
    lStack_40 = uVar9 + (long)puVar6 * 0x10;
    puStack_48 = puStack_50 + (long)param_2 * 2;
    puVar6 = puStack_50;
    do {
      *puVar6 = &PTR_FUN_110b01d60;
      uVar13 = *param_3;
      puVar6[1] = param_3[1];
      *puVar6 = uVar13;
      if (puVar6[1] != 0) {
        piVar11 = (int *)(puVar6[1] + -8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar4) {
            *piVar11 = *piVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar6 = puVar6 + 2;
    } while (puVar6 != puStack_48);
    uStack_58 = uVar9;
    FUN_109698458(param_1,&uStack_58);
    func_0x000109698570(&uStack_58);
  }
  else {
    puVar7 = puVar6;
    if (param_2 != (undefined8 *)0x0) {
      puVar7 = puVar6 + (long)param_2 * 2;
      do {
        *puVar6 = &PTR_FUN_110b01d60;
        uVar13 = *param_3;
        puVar6[1] = param_3[1];
        *puVar6 = uVar13;
        if (puVar6[1] != 0) {
          piVar11 = (int *)(puVar6[1] + -8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar4) {
              *piVar11 = *piVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puVar6 = puVar6 + 2;
      } while (puVar6 != puVar7);
    }
    param_1[1] = (long)puVar7;
  }
  return;
}



/* Entry: 109698458; end: 109698527;  */

void FUN_109698458(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar3 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar3 + (param_2[1] - (long)puVar2));
  puVar5 = puVar3;
  puVar6 = puVar1;
  if (puVar2 != puVar3) {
    do {
      *puVar6 = &PTR_FUN_110b01d60;
      uVar7 = *puVar5;
      puVar6[1] = puVar5[1];
      *puVar6 = uVar7;
      puVar5[1] = 0;
      puVar5 = puVar5 + 2;
      puVar6 = puVar6 + 2;
    } while (puVar5 != puVar2);
    do {
      puVar5 = puVar3 + 2;
      (**(code **)*puVar3)(puVar3);
      puVar3 = puVar5;
    } while (puVar5 != puVar2);
    puVar3 = (undefined8 *)*param_1;
  }
  param_2[1] = puVar1;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar3;
  param_2[1] = puVar3;
  lVar4 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar4;
  lVar4 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar4;
  *param_2 = param_2[1];
  return;
}



/* Entry: 109698528; end: 10969853b;  */

undefined1  [16] FUN_109698528(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar5._8_8_ = plVar1;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000104c4f740();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    puVar4 = *(undefined8 **)(lVar3 + -0x10);
    plVar1[2] = (long)(lVar3 + -0x10);
    (*(code *)*puVar4)();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = plVar1;
  return auVar6;
}



/* Entry: 10969853c; end: 1096985bf;  */

undefined1  [16] FUN_10969853c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000104c4f740();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    puVar3 = *(undefined8 **)(lVar2 + -0x10);
    param_1[2] = (long)(lVar2 + -0x10);
    (*(code *)*puVar3)();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 1096985c0; end: 109698703;  */

undefined8 * FUN_1096985c0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 < (undefined8 *)param_1[2]) {
    *puVar7 = &PTR_FUN_110b01d60;
    uVar9 = *param_2;
    puVar7[1] = param_2[1];
    *puVar7 = uVar9;
    if (puVar7[1] != 0) {
      piVar4 = (int *)(puVar7[1] + -8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar3) {
          *piVar4 = *piVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar7 = puVar7 + 2;
    param_1[1] = (long)puVar7;
  }
  else {
    lVar8 = (long)puVar7 - *param_1;
    uVar1 = (lVar8 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_109698528();
      func_0x000109698570(&uStack_58);
      __Unwind_Resume(param_1);
      puVar7 = (undefined8 *)0x1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__malloc_11034c5e8)(1);
      return puVar7;
    }
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 3;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar6 = 0xfffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar6 == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar7 = param_2;
      FUN_10969853c();
    }
    puStack_50 = (undefined8 *)(uVar6 + lVar8);
    lStack_40 = uVar6 + (long)puVar7 * 0x10;
    *puStack_50 = &PTR_FUN_110b01d60;
    uVar9 = *param_2;
    puStack_50[1] = param_2[1];
    *puStack_50 = uVar9;
    if (puStack_50[1] != 0) {
      piVar4 = (int *)(puStack_50[1] + -8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar3) {
          *piVar4 = *piVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puStack_48 = puStack_50 + 2;
    uStack_58 = uVar6;
    FUN_109698458(param_1,&uStack_58);
    puVar7 = (undefined8 *)param_1[1];
    func_0x000109698570(&uStack_58);
  }
  param_1[1] = (long)puVar7;
  return puVar7 + -2;
}



/* Entry: 109698704; end: 10969871f;  */

void FUN_109698704(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 109698720; end: 109698767;  */

void FUN_109698720(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = *param_3;
  uStack_21 = 0;
  puVar1 = &uStack_22;
  _strlen(puVar1);
  FUN_109697928(param_1,&uStack_22,puVar1);
  return;
}



/* Entry: 109698768; end: 1096987bf;  */

undefined8 * FUN_109698768(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00af0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b01c08;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096987c0; end: 109698817;  */

void FUN_1096987c0(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b018d0;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 109698818; end: 109698863;  */

void FUN_109698818(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  func_0x000107c2acf0(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 109698864; end: 109698893;  */

bool FUN_109698864(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b018d0,0);
  return param_1 != 0;
}



/* Entry: 109698894; end: 1096988a7;  */

void FUN_109698894(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096988a8; end: 1096988d7;  */

void FUN_1096988a8(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1096988d8; end: 109698913;  */

void FUN_1096988d8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  uVar4 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar4;
  if (param_1[1] != 0) {
    piVar3 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00af0;
  return;
}



/* Entry: 109698914; end: 109698973;  */

undefined8 FUN_109698914(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  if (param_3[1] != param_2[1]) {
    func_0x000107c2acd4(param_3);
    uVar4 = *param_2;
    param_3[1] = param_2[1];
    *param_3 = uVar4;
    if (param_3[1] != 0) {
      piVar3 = (int *)(param_3[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return 1;
}



/* Entry: 109698974; end: 109698987;  */

undefined8 FUN_109698974(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109698988; end: 1096989b3;  */

void FUN_109698988(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b01d40;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096989b4; end: 109698a9f;  */

void FUN_1096989b4(undefined8 *param_1,undefined1 *param_2)

{
  undefined ***pppuVar1;
  int iVar2;
  undefined8 uVar3;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_28;
  
  pppuVar1 = &ppuStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2accc();
  iVar2 = 0x10b00b10;
  func_0x00010969659c(param_1);
  FUN_1096978cc();
  if (param_1[1] == lRam000000011382a970) {
    func_0x000107c2acbc("",0);
    func_0x000107c2accc();
    iVar2 = 0x10b00b10;
    func_0x00010969659c(&ppuStack_50);
    uVar3 = param_1[1];
    param_1[1] = uStack_48;
    *param_1 = ppuStack_50;
    ppuStack_50 = &PTR_FUN_110b01d60;
    uStack_48 = uVar3;
    func_0x000107c2acd4(&ppuStack_50);
    param_2 = (undefined1 *)pppuVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar2 != 0) {
    func_0x000104bd46a0(param_2);
    FUN_109693dac(param_1);
  }
  __Unwind_Resume(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 109698aa0; end: 109698aa7;  */

void FUN_109698aa0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 109698aa8; end: 109698ad7;  */

void FUN_109698aa8(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 109698ad8; end: 109698b2f;  */

void FUN_109698ad8(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  char *pcVar4;
  char cVar5;
  long lVar6;
  
  lVar3 = 0x21;
  __Znam();
  lVar6 = 0x10;
  pcVar4 = (char *)(lVar3 + 1);
  do {
    bVar2 = *param_3;
    cVar5 = '0';
    cVar1 = '0';
    if (9 < (bVar2 & 0xf)) {
      cVar1 = '7';
    }
    pcVar4[-1] = cVar1 + (bVar2 & 0xf);
    if (0x9f < bVar2) {
      cVar5 = '7';
    }
    *pcVar4 = cVar5 + (bVar2 >> 4);
    lVar6 = lVar6 + -1;
    pcVar4 = pcVar4 + 2;
    param_3 = param_3 + 1;
  } while (lVar6 != 0);
  *(undefined1 *)(lVar3 + 0x20) = 0;
  lVar6 = lVar3;
  _strlen(lVar3);
  FUN_109697928(param_1,lVar3,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(lVar3);
  return;
}



/* Entry: 109698b30; end: 109698b5b;  */

void FUN_109698b30(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b01d40;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 109698b5c; end: 109698c47;  */

long * FUN_109698b5c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined ***pppuVar4;
  undefined **ppuVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_28;
  
  pppuVar4 = &ppuStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2accc();
  ppuVar5 = &PTR_DAT_110afd8d8;
  func_0x00010969659c(param_1);
  FUN_1096978cc();
  if (param_1[1] == lRam000000011382a970) {
    func_0x000107c2acb8("",0);
    func_0x000107c2accc();
    ppuVar5 = &PTR_DAT_110afd8d8;
    func_0x00010969659c(&ppuStack_50);
    uVar9 = param_1[1];
    param_1[1] = uStack_48;
    *param_1 = ppuStack_50;
    ppuStack_50 = &PTR_FUN_110b01d60;
    uStack_48 = uVar9;
    func_0x000107c2acd4();
    param_2 = (long *)pppuVar4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_2;
  }
  ___stack_chk_fail();
  if ((int)ppuVar5 != 0) {
    func_0x000104bd46a0();
    FUN_109693dac(param_1);
  }
  __Unwind_Resume();
  uVar8 = (uint)((ulong)ppuVar5 >> 3) & 0xfffffffe;
  uVar3 = uVar8 | 2;
  lVar6 = *param_2;
  do {
    uVar2 = uVar8 & *(uint *)(param_2 + 1);
    uVar7 = *(ulong *)(lVar6 + (ulong)uVar2 * 8);
    uVar8 = uVar2 + uVar3;
  } while (1 < uVar7);
  plVar1 = (long *)(lVar6 + (ulong)uVar2 * 8);
  *(ulong *)((long)param_2 + 0xc) =
       CONCAT44((int)((ulong)*(undefined8 *)((long)param_2 + 0xc) >> 0x20) - (int)uVar7,
                (int)*(undefined8 *)((long)param_2 + 0xc) + 1);
  *plVar1 = (long)ppuVar5;
  *(undefined8 *)(lVar6 + (ulong)(uVar2 + 1) * 8) = 0;
  return plVar1;
}



/* Entry: 109698c48; end: 109698c9b;  */

ulong * FUN_109698c48(long *param_1,ulong param_2)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar6 = (uint)(param_2 >> 3) & 0xfffffffe;
  uVar3 = uVar6 | 2;
  lVar4 = *param_1;
  do {
    uVar2 = uVar6 & *(uint *)(param_1 + 1);
    uVar5 = *(ulong *)(lVar4 + (ulong)uVar2 * 8);
    uVar6 = uVar2 + uVar3;
  } while (1 < uVar5);
  puVar1 = (ulong *)(lVar4 + (ulong)uVar2 * 8);
  *(ulong *)((long)param_1 + 0xc) =
       CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0xc) >> 0x20) - (int)uVar5,
                (int)*(undefined8 *)((long)param_1 + 0xc) + 1);
  *puVar1 = param_2;
  *(undefined8 *)(lVar4 + (ulong)(uVar2 + 1) * 8) = 0;
  return puVar1;
}



/* Entry: 109698c9c; end: 109698def;  */

void FUN_109698c9c(long *param_1,int param_2)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar6 = *param_1;
  lVar3 = param_1[1];
  lVar4 = 1;
  _calloc(1,(ulong)(uint)(param_2 * 2) << 3);
  *param_1 = lVar4;
  *(uint *)(param_1 + 1) = param_2 * 2 - 2;
  if (*(int *)((long)param_1 + 0xc) != 0) {
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    if ((int)lVar3 != -2) {
      uVar7 = 0;
      do {
        puVar1 = (ulong *)(lVar6 + uVar7 * 8);
        if (1 < *puVar1) {
          uVar8 = puVar1[1];
          plVar5 = param_1;
          FUN_109698c48();
          plVar5[1] = uVar8;
        }
        uVar2 = (int)uVar7 + 2;
        uVar7 = (ulong)uVar2;
      } while (uVar2 < (int)lVar3 + 2U);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar6);
  return;
}



/* Entry: 109698df0; end: 109698df7;  */

void FUN_109698df0(void)

{
  return;
}



/* Entry: 109698df8; end: 109698e77;  */

long FUN_109698df8(long param_1)

{
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  _free(*(undefined8 *)(param_1 + 0x20));
  _free(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 109698e78; end: 109698f0f;  */

long FUN_109698e78(long *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  char *pcVar4;
  char cVar5;
  ulong uVar6;
  uint uVar7;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    cVar1 = *param_2;
    if (cVar1 == '\0') {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      pcVar4 = param_2;
      cVar5 = cVar1;
      do {
        pcVar4 = pcVar4 + 1;
        uVar7 = uVar7 * 0x1f + (int)cVar5;
        cVar5 = *pcVar4;
      } while (cVar5 != '\0');
    }
    uVar6 = (ulong)(*(uint *)(param_1 + 1) & uVar7);
    pcVar4 = *(char **)(lVar3 + uVar6 * 8);
    if (pcVar4 != (char *)0x0) {
      cVar5 = cVar1;
      pcVar2 = param_2;
joined_r0x000109698ec8:
      do {
        if (cVar5 == '\0') {
          if (*pcVar4 == '\0') {
            return lVar3 + uVar6 * 8;
          }
        }
        else if (*pcVar4 == cVar5) {
          cVar5 = pcVar2[1];
          pcVar4 = pcVar4 + 1;
          pcVar2 = pcVar2 + 1;
          goto joined_r0x000109698ec8;
        }
        uVar6 = (ulong)((int)uVar6 + (uVar7 | 2) & *(uint *)(param_1 + 1));
        pcVar4 = *(char **)(lVar3 + uVar6 * 8);
        cVar5 = cVar1;
        pcVar2 = param_2;
      } while (pcVar4 != (char *)0x0);
    }
  }
  return 0;
}



/* Entry: 109698f10; end: 109698f77;  */

void FUN_109698f10(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      *(undefined ***)(lVar1 + 0x28) = &PTR_FUN_110b01d60;
      func_0x000107c2acd4();
      if (*(char *)(lVar1 + 0x27) < '\0') {
        __ZdlPv(*(undefined8 *)(lVar1 + 0x10));
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109698f78; end: 109698fb3;  */

void FUN_109698f78(ulong param_1,long param_2)

{
  if ((param_1 & 1) != 0) {
    *(undefined ***)(param_2 + 0x18) = &PTR_FUN_110b01d60;
    func_0x000107c2acd4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 109698fb4; end: 1096990a7;  */

long FUN_109698fb4(long *param_1,long *param_2)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar6 = *(ulong *)(*param_2 + 8);
  if ((long)uVar6 < 0) {
    pbVar3 = (byte *)(uVar6 & 0x7fffffffffffffff);
    uVar7 = 0x1505;
    do {
      uVar6 = uVar7;
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      uVar7 = uVar6 * 0x21 ^ (ulong)bVar1;
    } while ((ulong)bVar1 != 0);
  }
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar8 = uVar7 - 1;
    if ((uVar7 & uVar8) == 0) {
      uVar9 = uVar8 & uVar6;
    }
    else {
      uVar9 = uVar6;
      if (uVar7 <= uVar6) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar6 / uVar7;
        }
        uVar9 = uVar6 - uVar9 * uVar7;
      }
    }
    plVar4 = *(long **)(*param_1 + uVar9 * 8);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)*plVar4;
      do {
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        uVar5 = plVar4[1];
        if (uVar6 == uVar5) {
          uVar5 = plVar4[2];
          func_0x000107c31948(uVar5,*param_2);
          if ((uVar5 & 1) != 0) {
            return (long)plVar4;
          }
        }
        else {
          if ((uVar7 & uVar8) == 0) {
            uVar5 = uVar5 & uVar8;
          }
          else if (uVar7 <= uVar5) {
            uVar2 = 0;
            if (uVar7 != 0) {
              uVar2 = uVar5 / uVar7;
            }
            uVar5 = uVar5 - uVar2 * uVar7;
          }
          if (uVar5 != uVar9) {
            return 0;
          }
        }
        plVar4 = (long *)*plVar4;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 1096990a8; end: 10969918b;  */

long FUN_1096990a8(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c31944();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar2 == plVar4) {
          plVar4 = param_1;
          func_0x000104c4fbc4(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10969918c; end: 10969923b;  */

long FUN_10969918c(long param_1)

{
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10969923c; end: 1096992b3;  */

void FUN_10969923c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = puVar3;
  if (puVar2 != puVar3) {
    do {
      puVar2 = puVar2 + -2;
      (**(code **)*puVar2)(puVar2);
    } while (puVar2 != puVar3);
    puVar1 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 1096992b4; end: 109699357;  */

long FUN_1096992b4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109699358; end: 10969937f;  */

void FUN_109699358(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long in_x5;
  ulong in_x6;
  undefined8 *in_x7;
  ulong uVar9;
  long lVar10;
  float *pfVar11;
  undefined8 *puVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  
  puVar3 = (undefined8 *)0x8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
  lVar4 = *(long *)PTR____stderrp_11034bdc8;
  uStack_40 = *puVar3;
  uStack_50 = puVar3[1];
  uStack_48 = (ulong)*(uint *)(puVar3 + 2);
  puVar6 = &UNK_10f57c0e2;
  _fprintf(lVar4,&UNK_10f57c0e2);
  if (4 < *(int *)((long)puVar3 + 0x14)) {
    return;
  }
  _abort();
  if ((bRam000000011382a9d0 & 1) == 0) {
    iVar2 = 0x1382a9d0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      uRam000000011382a990 = 0x32aaaba7;
      uRam000000011382a9a0 = 0;
      uRam000000011382a998 = 0;
      uRam000000011382a9b0 = 0;
      uRam000000011382a9a8 = 0;
      uRam000000011382a9c0 = 0;
      uRam000000011382a9b8 = 0;
      uRam000000011382a9c8 = 0;
      ___cxa_guard_release(0x11382a9d0);
    }
  }
  __ZNSt3__15mutex4lockEv(0x11382a990);
  puVar1 = PTR____stderrp_11034bdc8;
  _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f57c0e2);
  lVar8 = *(long *)puVar1;
  _fwrite(&UNK_10f57c0d8,9,1);
  puVar3 = &uStack_50;
  _vfprintf(*(undefined8 *)puVar1,puVar6);
  puVar7 = *(undefined8 **)puVar1;
  uVar5 = 10;
  _fputc();
  if (4 < *(int *)(lVar4 + 0x14)) {
    __ZNSt3__15mutex6unlockEv(0x11382a990);
    return;
  }
  _abort();
  lVar4 = 0;
  do {
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0x10);
  lVar4 = 0;
  do {
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0x10);
  lVar4 = 0;
  do {
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0x18);
  lVar4 = 0;
  do {
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
    return;
  }
  ___stack_chk_fail();
  if (0 < (int)puVar3) {
    uVar9 = 0;
    lVar4 = lVar8;
    do {
      lVar10 = 0;
      pfVar11 = (float *)(in_x5 + (long)*(int *)(lVar8 + 4 + uVar9 * 4) * 0xc);
      pfVar13 = (float *)(in_x5 + (long)*(int *)(lVar8 + uVar9 * 4) * 0xc);
      fVar14 = *pfVar11;
      fVar15 = *pfVar13;
      uVar17 = *(undefined8 *)(pfVar11 + 1);
      pfVar11 = (float *)(in_x5 + (long)*(int *)(lVar8 + 8 + uVar9 * 4) * 0xc);
      fVar18 = *pfVar11;
      uVar20 = *(undefined8 *)(pfVar13 + 1);
      fVar16 = (float)uVar20;
      fVar22 = (float)uVar17 - fVar16;
      fVar19 = (float)((ulong)uVar17 >> 0x20);
      fVar21 = (float)((ulong)uVar20 >> 0x20);
      uVar17 = *(undefined8 *)(pfVar11 + 1);
      fVar23 = (float)((ulong)uVar17 >> 0x20);
      fVar16 = (float)uVar17 - fVar16;
      do {
        puVar12 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar4 + lVar10) * 0xc);
        *puVar12 = CONCAT44((fVar14 - fVar15) * -(fVar23 - fVar21) +
                            (fVar18 - fVar15) * (fVar19 - fVar21) + (float)((ulong)*puVar12 >> 0x20)
                            ,(fVar19 - fVar21) * -fVar16 + (fVar23 - fVar21) * fVar22 +
                             (float)*puVar12);
        *(float *)(puVar12 + 1) =
             -(fVar18 - fVar15) * fVar22 + fVar16 * (fVar14 - fVar15) + *(float *)(puVar12 + 1);
        lVar10 = lVar10 + 4;
      } while (lVar10 != 0xc);
      uVar9 = uVar9 + 3;
      lVar4 = lVar4 + 0xc;
    } while (uVar9 < ((ulong)puVar3 & 0x7fffffff));
  }
  if ((in_x6 & 0xffffffff) != 0) {
    uVar9 = -(in_x6 >> 0x1f & 1) & 0xfffffff800000000 | (in_x6 & 0xffffffff) << 3;
    do {
      puVar12 = (undefined8 *)((long)puVar7 + (long)(int)((ulong)*in_x7 >> 0x20) * 0xc);
      puVar3 = (undefined8 *)((long)puVar7 + (long)(int)*in_x7 * 0xc);
      *puVar3 = CONCAT44((float)((ulong)*puVar12 >> 0x20) + (float)((ulong)*puVar3 >> 0x20),
                         (float)*puVar12 + (float)*puVar3);
      *(float *)(puVar3 + 1) = *(float *)(puVar12 + 1) + *(float *)(puVar3 + 1);
      uVar17 = *puVar3;
      *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar3 + 1);
      *puVar12 = uVar17;
      uVar9 = uVar9 - 8;
      in_x7 = in_x7 + 1;
    } while (uVar9 != 0);
  }
  if ((uVar5 & 0xffffffff) != 0) {
    puVar3 = (undefined8 *)((long)puVar7 + (long)(int)uVar5 * 0xc);
    do {
      fVar14 = (float)*puVar7;
      fVar15 = (float)((ulong)*puVar7 >> 0x20);
      if (ABS(fVar14) <= 1.8446744e+19) {
        fVar16 = 1.0;
        if (ABS(fVar14) < 5.421011e-20) {
          fVar16 = 1.9342813e+25;
        }
      }
      else {
        fVar16 = 5.169879e-26;
      }
      fVar19 = fVar15 * fVar16;
      fVar23 = *(float *)(puVar7 + 1) * fVar16;
      fVar16 = 1.0 / (SQRT(fVar19 * fVar19 + fVar14 * fVar16 * fVar14 * fVar16 + fVar23 * fVar23) /
                     fVar16);
      *puVar7 = CONCAT44(fVar15 * fVar16,fVar14 * fVar16);
      *(float *)(puVar7 + 1) = *(float *)(puVar7 + 1) * fVar16;
      puVar7 = (undefined8 *)((long)puVar7 + 0xc);
    } while (puVar7 != puVar3);
  }
  return;
}



/* Entry: 109699380; end: 1096993db;  */

void FUN_109699380(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long in_x5;
  ulong in_x6;
  undefined8 *in_x7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  float *pfVar11;
  undefined8 *puVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  
  lVar3 = *(long *)PTR____stderrp_11034bdc8;
  uStack_30 = *param_1;
  uStack_40 = param_1[1];
  uStack_38 = (ulong)*(uint *)(param_1 + 2);
  puVar5 = &UNK_10f57c0e2;
  _fprintf(lVar3,&UNK_10f57c0e2);
  if (4 < *(int *)((long)param_1 + 0x14)) {
    return;
  }
  _abort();
  if ((bRam000000011382a9d0 & 1) == 0) {
    iVar2 = 0x1382a9d0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      uRam000000011382a990 = 0x32aaaba7;
      uRam000000011382a9a0 = 0;
      uRam000000011382a998 = 0;
      uRam000000011382a9b0 = 0;
      uRam000000011382a9a8 = 0;
      uRam000000011382a9c0 = 0;
      uRam000000011382a9b8 = 0;
      uRam000000011382a9c8 = 0;
      ___cxa_guard_release(0x11382a9d0);
    }
  }
  __ZNSt3__15mutex4lockEv(0x11382a990);
  puVar1 = PTR____stderrp_11034bdc8;
  _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f57c0e2);
  lVar7 = *(long *)puVar1;
  _fwrite(&UNK_10f57c0d8,9,1);
  puVar9 = &uStack_40;
  _vfprintf(*(undefined8 *)puVar1,puVar5);
  puVar6 = *(undefined8 **)puVar1;
  uVar4 = 10;
  _fputc();
  if (4 < *(int *)(lVar3 + 0x14)) {
    __ZNSt3__15mutex6unlockEv(0x11382a990);
    return;
  }
  _abort();
  lVar3 = 0;
  do {
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x10);
  lVar3 = 0;
  do {
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x10);
  lVar3 = 0;
  do {
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x18);
  lVar3 = 0;
  do {
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
    return;
  }
  ___stack_chk_fail();
  if (0 < (int)puVar9) {
    uVar8 = 0;
    lVar3 = lVar7;
    do {
      lVar10 = 0;
      pfVar11 = (float *)(in_x5 + (long)*(int *)(lVar7 + 4 + uVar8 * 4) * 0xc);
      pfVar13 = (float *)(in_x5 + (long)*(int *)(lVar7 + uVar8 * 4) * 0xc);
      fVar14 = *pfVar11;
      fVar15 = *pfVar13;
      uVar17 = *(undefined8 *)(pfVar11 + 1);
      pfVar11 = (float *)(in_x5 + (long)*(int *)(lVar7 + 8 + uVar8 * 4) * 0xc);
      fVar18 = *pfVar11;
      uVar20 = *(undefined8 *)(pfVar13 + 1);
      fVar16 = (float)uVar20;
      fVar22 = (float)uVar17 - fVar16;
      fVar19 = (float)((ulong)uVar17 >> 0x20);
      fVar21 = (float)((ulong)uVar20 >> 0x20);
      uVar17 = *(undefined8 *)(pfVar11 + 1);
      fVar23 = (float)((ulong)uVar17 >> 0x20);
      fVar16 = (float)uVar17 - fVar16;
      do {
        puVar12 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar3 + lVar10) * 0xc);
        *puVar12 = CONCAT44((fVar14 - fVar15) * -(fVar23 - fVar21) +
                            (fVar18 - fVar15) * (fVar19 - fVar21) + (float)((ulong)*puVar12 >> 0x20)
                            ,(fVar19 - fVar21) * -fVar16 + (fVar23 - fVar21) * fVar22 +
                             (float)*puVar12);
        *(float *)(puVar12 + 1) =
             -(fVar18 - fVar15) * fVar22 + fVar16 * (fVar14 - fVar15) + *(float *)(puVar12 + 1);
        lVar10 = lVar10 + 4;
      } while (lVar10 != 0xc);
      uVar8 = uVar8 + 3;
      lVar3 = lVar3 + 0xc;
    } while (uVar8 < ((ulong)puVar9 & 0x7fffffff));
  }
  if ((in_x6 & 0xffffffff) != 0) {
    uVar8 = -(in_x6 >> 0x1f & 1) & 0xfffffff800000000 | (in_x6 & 0xffffffff) << 3;
    do {
      puVar12 = (undefined8 *)((long)puVar6 + (long)(int)((ulong)*in_x7 >> 0x20) * 0xc);
      puVar9 = (undefined8 *)((long)puVar6 + (long)(int)*in_x7 * 0xc);
      *puVar9 = CONCAT44((float)((ulong)*puVar12 >> 0x20) + (float)((ulong)*puVar9 >> 0x20),
                         (float)*puVar12 + (float)*puVar9);
      *(float *)(puVar9 + 1) = *(float *)(puVar12 + 1) + *(float *)(puVar9 + 1);
      uVar17 = *puVar9;
      *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar9 + 1);
      *puVar12 = uVar17;
      uVar8 = uVar8 - 8;
      in_x7 = in_x7 + 1;
    } while (uVar8 != 0);
  }
  if ((uVar4 & 0xffffffff) != 0) {
    puVar9 = (undefined8 *)((long)puVar6 + (long)(int)uVar4 * 0xc);
    do {
      fVar14 = (float)*puVar6;
      fVar15 = (float)((ulong)*puVar6 >> 0x20);
      if (ABS(fVar14) <= 1.8446744e+19) {
        fVar16 = 1.0;
        if (ABS(fVar14) < 5.421011e-20) {
          fVar16 = 1.9342813e+25;
        }
      }
      else {
        fVar16 = 5.169879e-26;
      }
      fVar19 = fVar15 * fVar16;
      fVar23 = *(float *)(puVar6 + 1) * fVar16;
      fVar16 = 1.0 / (SQRT(fVar19 * fVar19 + fVar14 * fVar16 * fVar14 * fVar16 + fVar23 * fVar23) /
                     fVar16);
      *puVar6 = CONCAT44(fVar15 * fVar16,fVar14 * fVar16);
      *(float *)(puVar6 + 1) = *(float *)(puVar6 + 1) * fVar16;
      puVar6 = (undefined8 *)((long)puVar6 + 0xc);
    } while (puVar6 != puVar9);
  }
  return;
}



/* Entry: 1096993dc; end: 1096994ef;  */

void FUN_1096993dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long in_x5;
  ulong in_x6;
  undefined8 *in_x7;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  float *pfVar10;
  undefined8 *puVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if ((bRam000000011382a9d0 & 1) == 0) {
    iVar2 = 0x1382a9d0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      uRam000000011382a990 = 0x32aaaba7;
      uRam000000011382a9a0 = 0;
      uRam000000011382a998 = 0;
      uRam000000011382a9b0 = 0;
      uRam000000011382a9a8 = 0;
      uRam000000011382a9c0 = 0;
      uRam000000011382a9b8 = 0;
      uRam000000011382a9c8 = 0;
      ___cxa_guard_release(0x11382a9d0);
    }
  }
  __ZNSt3__15mutex4lockEv(0x11382a990);
  puVar1 = PTR____stderrp_11034bdc8;
  _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f57c0e2);
  lVar5 = *(long *)puVar1;
  _fwrite(&UNK_10f57c0d8,9,1);
  _vfprintf(*(undefined8 *)puVar1,param_2);
  puVar4 = *(undefined8 **)puVar1;
  uVar3 = 10;
  _fputc();
  if (4 < *(int *)(param_1 + 0x14)) {
    __ZNSt3__15mutex6unlockEv(0x11382a990);
    return;
  }
  _abort();
  lVar6 = 0;
  do {
    lVar6 = lVar6 + 4;
  } while (lVar6 != 0x10);
  lVar6 = 0;
  do {
    lVar6 = lVar6 + 4;
  } while (lVar6 != 0x10);
  lVar6 = 0;
  do {
    lVar6 = lVar6 + 4;
  } while (lVar6 != 0x18);
  lVar6 = 0;
  do {
    lVar6 = lVar6 + 4;
  } while (lVar6 != 0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
    return;
  }
  ___stack_chk_fail();
  if (0 < (int)register0x00000008) {
    uVar7 = 0;
    lVar6 = lVar5;
    do {
      lVar9 = 0;
      pfVar10 = (float *)(in_x5 + (long)*(int *)(lVar5 + 4 + uVar7 * 4) * 0xc);
      pfVar12 = (float *)(in_x5 + (long)*(int *)(lVar5 + uVar7 * 4) * 0xc);
      fVar13 = *pfVar10;
      fVar14 = *pfVar12;
      uVar16 = *(undefined8 *)(pfVar10 + 1);
      pfVar10 = (float *)(in_x5 + (long)*(int *)(lVar5 + 8 + uVar7 * 4) * 0xc);
      fVar17 = *pfVar10;
      uVar19 = *(undefined8 *)(pfVar12 + 1);
      fVar15 = (float)uVar19;
      fVar21 = (float)uVar16 - fVar15;
      fVar18 = (float)((ulong)uVar16 >> 0x20);
      fVar20 = (float)((ulong)uVar19 >> 0x20);
      uVar16 = *(undefined8 *)(pfVar10 + 1);
      fVar22 = (float)((ulong)uVar16 >> 0x20);
      fVar15 = (float)uVar16 - fVar15;
      do {
        puVar11 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar6 + lVar9) * 0xc);
        *puVar11 = CONCAT44((fVar13 - fVar14) * -(fVar22 - fVar20) +
                            (fVar17 - fVar14) * (fVar18 - fVar20) + (float)((ulong)*puVar11 >> 0x20)
                            ,(fVar18 - fVar20) * -fVar15 + (fVar22 - fVar20) * fVar21 +
                             (float)*puVar11);
        *(float *)(puVar11 + 1) =
             -(fVar17 - fVar14) * fVar21 + fVar15 * (fVar13 - fVar14) + *(float *)(puVar11 + 1);
        lVar9 = lVar9 + 4;
      } while (lVar9 != 0xc);
      uVar7 = uVar7 + 3;
      lVar6 = lVar6 + 0xc;
    } while (uVar7 < ((ulong)register0x00000008 & 0x7fffffff));
  }
  if ((in_x6 & 0xffffffff) != 0) {
    uVar7 = -(in_x6 >> 0x1f & 1) & 0xfffffff800000000 | (in_x6 & 0xffffffff) << 3;
    do {
      puVar8 = (undefined8 *)((long)puVar4 + (long)(int)((ulong)*in_x7 >> 0x20) * 0xc);
      puVar11 = (undefined8 *)((long)puVar4 + (long)(int)*in_x7 * 0xc);
      *puVar11 = CONCAT44((float)((ulong)*puVar8 >> 0x20) + (float)((ulong)*puVar11 >> 0x20),
                          (float)*puVar8 + (float)*puVar11);
      *(float *)(puVar11 + 1) = *(float *)(puVar8 + 1) + *(float *)(puVar11 + 1);
      uVar16 = *puVar11;
      *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar11 + 1);
      *puVar8 = uVar16;
      uVar7 = uVar7 - 8;
      in_x7 = in_x7 + 1;
    } while (uVar7 != 0);
  }
  if ((uVar3 & 0xffffffff) != 0) {
    puVar11 = (undefined8 *)((long)puVar4 + (long)(int)uVar3 * 0xc);
    do {
      fVar13 = (float)*puVar4;
      fVar14 = (float)((ulong)*puVar4 >> 0x20);
      if (ABS(fVar13) <= 1.8446744e+19) {
        fVar15 = 1.0;
        if (ABS(fVar13) < 5.421011e-20) {
          fVar15 = 1.9342813e+25;
        }
      }
      else {
        fVar15 = 5.169879e-26;
      }
      fVar18 = fVar14 * fVar15;
      fVar22 = *(float *)(puVar4 + 1) * fVar15;
      fVar15 = 1.0 / (SQRT(fVar18 * fVar18 + fVar13 * fVar15 * fVar13 * fVar15 + fVar22 * fVar22) /
                     fVar15);
      *puVar4 = CONCAT44(fVar14 * fVar15,fVar13 * fVar15);
      *(float *)(puVar4 + 1) = *(float *)(puVar4 + 1) * fVar15;
      puVar4 = (undefined8 *)((long)puVar4 + 0xc);
    } while (puVar4 != puVar11);
  }
  return;
}



/* Entry: 1096994f0; end: 109699627;  */

void FUN_1096994f0(int param_1,undefined8 *param_2,uint param_3,long param_4,undefined8 param_5,
                  long param_6,ulong param_7,undefined8 *param_8)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  float *pfVar5;
  undefined8 *puVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar1 = 0;
  do {
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x10);
  lVar1 = 0;
  do {
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x10);
  lVar1 = 0;
  do {
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x18);
  lVar1 = 0;
  do {
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
    return;
  }
  ___stack_chk_fail();
  if (0 < (int)param_3) {
    uVar2 = 0;
    lVar1 = param_4;
    do {
      lVar4 = 0;
      pfVar5 = (float *)(param_6 + (long)*(int *)(param_4 + 4 + uVar2 * 4) * 0xc);
      pfVar7 = (float *)(param_6 + (long)*(int *)(param_4 + uVar2 * 4) * 0xc);
      fVar8 = *pfVar5;
      fVar9 = *pfVar7;
      uVar11 = *(undefined8 *)(pfVar5 + 1);
      pfVar5 = (float *)(param_6 + (long)*(int *)(param_4 + 8 + uVar2 * 4) * 0xc);
      fVar12 = *pfVar5;
      uVar14 = *(undefined8 *)(pfVar7 + 1);
      fVar10 = (float)uVar14;
      fVar16 = (float)uVar11 - fVar10;
      fVar13 = (float)((ulong)uVar11 >> 0x20);
      fVar15 = (float)((ulong)uVar14 >> 0x20);
      uVar11 = *(undefined8 *)(pfVar5 + 1);
      fVar17 = (float)((ulong)uVar11 >> 0x20);
      fVar10 = (float)uVar11 - fVar10;
      do {
        puVar6 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar1 + lVar4) * 0xc);
        *puVar6 = CONCAT44((fVar8 - fVar9) * -(fVar17 - fVar15) +
                           (fVar12 - fVar9) * (fVar13 - fVar15) + (float)((ulong)*puVar6 >> 0x20),
                           (fVar13 - fVar15) * -fVar10 + (fVar17 - fVar15) * fVar16 + (float)*puVar6
                          );
        *(float *)(puVar6 + 1) =
             -(fVar12 - fVar9) * fVar16 + fVar10 * (fVar8 - fVar9) + *(float *)(puVar6 + 1);
        lVar4 = lVar4 + 4;
      } while (lVar4 != 0xc);
      uVar2 = uVar2 + 3;
      lVar1 = lVar1 + 0xc;
    } while (uVar2 < ((ulong)param_3 & 0x7fffffff));
  }
  if ((param_7 & 0xffffffff) != 0) {
    uVar2 = -(param_7 >> 0x1f & 1) & 0xfffffff800000000 | (param_7 & 0xffffffff) << 3;
    do {
      puVar3 = (undefined8 *)((long)param_2 + (long)(int)((ulong)*param_8 >> 0x20) * 0xc);
      puVar6 = (undefined8 *)((long)param_2 + (long)(int)*param_8 * 0xc);
      *puVar6 = CONCAT44((float)((ulong)*puVar3 >> 0x20) + (float)((ulong)*puVar6 >> 0x20),
                         (float)*puVar3 + (float)*puVar6);
      *(float *)(puVar6 + 1) = *(float *)(puVar3 + 1) + *(float *)(puVar6 + 1);
      uVar11 = *puVar6;
      *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
      *puVar3 = uVar11;
      uVar2 = uVar2 - 8;
      param_8 = param_8 + 1;
    } while (uVar2 != 0);
  }
  if (param_1 != 0) {
    puVar6 = (undefined8 *)((long)param_2 + (long)param_1 * 0xc);
    do {
      fVar8 = (float)*param_2;
      fVar9 = (float)((ulong)*param_2 >> 0x20);
      if (ABS(fVar8) <= 1.8446744e+19) {
        fVar10 = 1.0;
        if (ABS(fVar8) < 5.421011e-20) {
          fVar10 = 1.9342813e+25;
        }
      }
      else {
        fVar10 = 5.169879e-26;
      }
      fVar13 = fVar9 * fVar10;
      fVar17 = *(float *)(param_2 + 1) * fVar10;
      fVar10 = 1.0 / (SQRT(fVar13 * fVar13 + fVar8 * fVar10 * fVar8 * fVar10 + fVar17 * fVar17) /
                     fVar10);
      *param_2 = CONCAT44(fVar9 * fVar10,fVar8 * fVar10);
      *(float *)(param_2 + 1) = *(float *)(param_2 + 1) * fVar10;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
    } while (param_2 != puVar6);
  }
  return;
}



/* Entry: 109699628; end: 109699803;  */

void FUN_109699628(int param_1,undefined8 *param_2,uint param_3,long param_4,undefined8 param_5,
                  long param_6,ulong param_7,undefined8 *param_8)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  undefined8 *puVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if (0 < (int)param_3) {
    uVar1 = 0;
    lVar3 = param_4;
    do {
      lVar4 = 0;
      pfVar5 = (float *)(param_6 + (long)*(int *)(param_4 + 4 + uVar1 * 4) * 0xc);
      pfVar7 = (float *)(param_6 + (long)*(int *)(param_4 + uVar1 * 4) * 0xc);
      fVar8 = *pfVar5;
      fVar9 = *pfVar7;
      uVar11 = *(undefined8 *)(pfVar5 + 1);
      pfVar5 = (float *)(param_6 + (long)*(int *)(param_4 + 8 + uVar1 * 4) * 0xc);
      fVar12 = *pfVar5;
      uVar14 = *(undefined8 *)(pfVar7 + 1);
      fVar10 = (float)uVar14;
      fVar16 = (float)uVar11 - fVar10;
      fVar13 = (float)((ulong)uVar11 >> 0x20);
      fVar15 = (float)((ulong)uVar14 >> 0x20);
      uVar11 = *(undefined8 *)(pfVar5 + 1);
      fVar17 = (float)((ulong)uVar11 >> 0x20);
      fVar10 = (float)uVar11 - fVar10;
      do {
        puVar6 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + lVar4) * 0xc);
        *puVar6 = CONCAT44((fVar8 - fVar9) * -(fVar17 - fVar15) +
                           (fVar12 - fVar9) * (fVar13 - fVar15) + (float)((ulong)*puVar6 >> 0x20),
                           (fVar13 - fVar15) * -fVar10 + (fVar17 - fVar15) * fVar16 + (float)*puVar6
                          );
        *(float *)(puVar6 + 1) =
             -(fVar12 - fVar9) * fVar16 + fVar10 * (fVar8 - fVar9) + *(float *)(puVar6 + 1);
        lVar4 = lVar4 + 4;
      } while (lVar4 != 0xc);
      uVar1 = uVar1 + 3;
      lVar3 = lVar3 + 0xc;
    } while (uVar1 < ((ulong)param_3 & 0x7fffffff));
  }
  if ((param_7 & 0xffffffff) != 0) {
    uVar1 = -(param_7 >> 0x1f & 1) & 0xfffffff800000000 | (param_7 & 0xffffffff) << 3;
    do {
      puVar2 = (undefined8 *)((long)param_2 + (long)(int)((ulong)*param_8 >> 0x20) * 0xc);
      puVar6 = (undefined8 *)((long)param_2 + (long)(int)*param_8 * 0xc);
      *puVar6 = CONCAT44((float)((ulong)*puVar2 >> 0x20) + (float)((ulong)*puVar6 >> 0x20),
                         (float)*puVar2 + (float)*puVar6);
      *(float *)(puVar6 + 1) = *(float *)(puVar2 + 1) + *(float *)(puVar6 + 1);
      uVar11 = *puVar6;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
      *puVar2 = uVar11;
      uVar1 = uVar1 - 8;
      param_8 = param_8 + 1;
    } while (uVar1 != 0);
  }
  if (param_1 != 0) {
    puVar6 = (undefined8 *)((long)param_2 + (long)param_1 * 0xc);
    do {
      fVar8 = (float)*param_2;
      fVar9 = (float)((ulong)*param_2 >> 0x20);
      if (ABS(fVar8) <= 1.8446744e+19) {
        fVar10 = 1.0;
        if (ABS(fVar8) < 5.421011e-20) {
          fVar10 = 1.9342813e+25;
        }
      }
      else {
        fVar10 = 5.169879e-26;
      }
      fVar13 = fVar9 * fVar10;
      fVar17 = *(float *)(param_2 + 1) * fVar10;
      fVar10 = 1.0 / (SQRT(fVar13 * fVar13 + fVar8 * fVar10 * fVar8 * fVar10 + fVar17 * fVar17) /
                     fVar10);
      *param_2 = CONCAT44(fVar9 * fVar10,fVar8 * fVar10);
      *(float *)(param_2 + 1) = *(float *)(param_2 + 1) * fVar10;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
    } while (param_2 != puVar6);
  }
  return;
}



/* Entry: 109699804; end: 1096999eb;  */

void FUN_109699804(float param_1,undefined8 param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float *param_8,long param_9,ulong param_10,
                  long param_11,uint param_12,long param_13,undefined8 param_14,long param_15,
                  undefined4 param_16,undefined4 param_17,long param_18)

{
  int iVar1;
  uint uVar2;
  float **ppfVar3;
  bool bVar4;
  float *pfVar5;
  long lVar6;
  bool bVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  float *pfVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float *pfStack_128;
  float *pfStack_120;
  long lStack_118;
  undefined **ppuStack_110;
  long lStack_108;
  undefined1 auStack_100 [48];
  float fStack_d0;
  float fStack_cc;
  float afStack_c8 [2];
  float fStack_c0;
  float fStack_bc;
  float afStack_b8 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  float afStack_30 [6];
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fStack_d0 = param_4;
  if (0 < (int)param_10) {
    uVar9 = 0;
    param_8 = afStack_30 + 3;
    lVar13 = param_11;
    do {
      lVar15 = 0;
      afStack_30[0] = 0.0;
      afStack_30[1] = 0.0;
      afStack_30[2] = 0.0;
      afStack_30[3] = 0.0;
      afStack_30[4] = 0.0;
      afStack_30[5] = 0.0;
      uStack_40 = 0;
      uStack_38 = 0;
      iVar1 = *(int *)(param_11 + uVar9 * 4);
      puVar14 = (undefined8 *)(param_13 + (long)iVar1 * 0xc);
      uVar17 = *puVar14;
      fVar20 = *(float *)(puVar14 + 1);
      uVar22 = *(undefined8 *)(param_18 + (long)iVar1 * 8);
      pfVar5 = afStack_30;
      puVar14 = &uStack_38;
      bVar4 = true;
      do {
        bVar7 = bVar4;
        iVar1 = *(int *)(param_11 + 4 + uVar9 * 4 + lVar15 * 4);
        puVar8 = (undefined8 *)(param_13 + (long)iVar1 * 0xc);
        fVar24 = *(float *)(puVar8 + 1);
        uVar28 = *puVar8;
        *(ulong *)pfVar5 =
             CONCAT44((float)((ulong)uVar28 >> 0x20) - (float)((ulong)uVar17 >> 0x20),
                      (float)uVar28 - (float)uVar17);
        pfVar5[2] = fVar24 - fVar20;
        uVar28 = *(undefined8 *)(param_18 + (long)iVar1 * 8);
        *puVar14 = CONCAT44((float)((ulong)uVar28 >> 0x20) - (float)((ulong)uVar22 >> 0x20),
                            (float)uVar28 - (float)uVar22);
        lVar15 = 1;
        pfVar5 = param_8;
        puVar14 = &uStack_40;
        bVar4 = false;
      } while (bVar7);
      lVar15 = 0;
      fStack_d0 = afStack_30[3] * uStack_38._4_4_;
      param_1 = (float)afStack_30._0_8_ * uStack_40._4_4_ - fStack_d0;
      param_3 = uStack_40._4_4_ * afStack_30[2] - uStack_38._4_4_ * afStack_30[5];
      do {
        puVar14 = (undefined8 *)(param_9 + (long)*(int *)(lVar13 + lVar15) * 0x10);
        uVar22 = puVar14[1];
        uVar17 = *puVar14;
        param_2 = CONCAT44((float)((ulong)uVar17 >> 0x20) +
                           (SUB84(afStack_30._0_8_,4) * uStack_40._4_4_ -
                           afStack_30[4] * uStack_38._4_4_),(float)uVar17 + param_1);
        puVar14 = (undefined8 *)(param_9 + (long)*(int *)(lVar13 + lVar15) * 0x10);
        puVar14[1] = CONCAT44((float)((ulong)uVar22 >> 0x20) + 0.0,(float)uVar22 + param_3);
        *puVar14 = param_2;
        lVar15 = lVar15 + 4;
      } while (lVar15 != 0xc);
      uVar9 = uVar9 + 3;
      lVar13 = lVar13 + 0xc;
      param_5 = afStack_30[5];
    } while (uVar9 < (param_10 & 0x7fffffff));
  }
  fVar20 = (float)param_2;
  fStack_cc = param_5;
  if (0 < (int)param_12) {
    uVar9 = (ulong)param_12 & 0x7fffffff;
    pfVar5 = (float *)(param_9 + 8);
    param_1 = 1.0;
    pfVar11 = (float *)(param_15 + 8);
    do {
      fVar24 = pfVar5[-2] * pfVar11[-2] + pfVar5[-1] * pfVar11[-1] + *pfVar5 * *pfVar11;
      fVar20 = pfVar5[-2] - pfVar11[-2] * fVar24;
      param_3 = pfVar5[-1] - pfVar11[-1] * fVar24;
      fStack_d0 = *pfVar5 - *pfVar11 * fVar24;
      param_6 = param_3 * param_3;
      param_7 = fStack_d0 * fStack_d0;
      fStack_cc = 1.0 / SQRT(param_7 + fVar20 * fVar20 + param_6);
      param_3 = param_3 * fStack_cc;
      pfVar5[-2] = fVar20 * fStack_cc;
      pfVar5[-1] = param_3;
      fVar20 = fStack_d0 * fStack_cc;
      *pfVar5 = fVar20;
      pfVar5[1] = 1.0;
      pfVar5 = pfVar5 + 4;
      uVar9 = uVar9 - 1;
      pfVar11 = pfVar11 + 3;
    } while (uVar9 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  afStack_c8[0] = param_6;
  fStack_c0 = param_1;
  fStack_bc = fVar20;
  afStack_b8[0] = param_3;
  FUN_109699cd8(auStack_100,*(long *)(param_8 + 2) + 0x30);
  FUN_109699d9c(auStack_100,&fStack_c0);
  fStack_c0 = param_1;
  fStack_bc = fVar20;
  afStack_b8[0] = param_3;
  FUN_109699d9c(auStack_100,&fStack_d0);
  lStack_118 = *(long *)(param_8 + 2);
  lVar13 = *(long *)(*(long *)(lStack_118 + 0x10) + 0x50);
  uVar9 = *(long *)(*(long *)(lStack_118 + 0x10) + 0x58) - lVar13;
  if (0 < (int)(uVar9 >> 4)) {
    uVar16 = 0;
    pfStack_120 = afStack_b8;
    pfStack_128 = afStack_c8;
    fStack_d0 = param_1;
    fStack_cc = fVar20;
    afStack_c8[0] = param_3;
    do {
      func_0x000107c2ace8(&ppuStack_110);
      if (*(char *)(lStack_108 + 0x1f) < '\0') {
        *(undefined8 *)(lStack_108 + 0x10) = 0xc;
        puVar14 = *(undefined8 **)(lStack_108 + 8);
      }
      else {
        puVar14 = (undefined8 *)(lStack_108 + 8);
        *(undefined1 *)(lStack_108 + 0x1f) = 0xc;
      }
      *(undefined4 *)(puVar14 + 1) = 0x68637461;
      lVar15 = lVar13 + uVar16 * 0x10;
      *puVar14 = 0x506579457466654c;
      *(undefined1 *)((long)puVar14 + 0xc) = 0;
      lVar6 = lVar15;
      FUN_109697c4c(lVar15,&ppuStack_110);
      ppuStack_110 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_110);
      if ((int)lVar6 == 0) {
LAB_109699b90:
        FUN_1096b9498(param_8);
        bVar4 = (int)lVar6 == 0;
        piVar10 = (int *)(*(long *)(*(long *)(lStack_118 + 0x10) + 0x68) +
                         ((long)(uVar16 << 0x20) >> 0x1e));
        iVar1 = *piVar10;
        ppfVar3 = &pfStack_120;
        if (!bVar4) {
          ppfVar3 = &pfStack_128;
        }
        uVar2 = piVar10[1] - iVar1;
        if (uVar2 != 0) {
          lVar15 = *(long *)(*(long *)(param_8 + 2) + 0x18);
          piVar10 = (int *)(*(long *)(*(long *)(lStack_118 + 0x10) + 0x20) + (long)iVar1 * 4);
          uVar18 = CONCAT44(fStack_bc,fStack_c0) ^
                   (CONCAT44(fStack_bc,fStack_c0) ^ CONCAT44(fStack_cc,fStack_d0)) &
                   ~CONCAT44(-(uint)((int)((uint)bVar4 << 0x1f) < 0),
                             -(uint)((int)((uint)bVar4 << 0x1f) < 0));
          fVar20 = **ppfVar3;
          uVar12 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
          do {
            puVar14 = (undefined8 *)(lVar15 + (long)*piVar10 * 0xc);
            fVar24 = (float)uVar18;
            fVar21 = (float)*puVar14 - fVar24;
            fVar19 = (float)(uVar18 >> 0x20);
            fVar23 = (float)((ulong)*puVar14 >> 0x20) - fVar19;
            if (ABS(fVar21) <= 1.8446744e+19) {
              fVar27 = 1.0;
              if (ABS(fVar21) < 5.421011e-20) {
                fVar27 = 1.9342813e+25;
              }
            }
            else {
              fVar27 = 5.169879e-26;
            }
            fVar25 = *(float *)(puVar14 + 1) - fVar20;
            fVar26 = fVar23 * fVar27;
            fVar29 = fVar25 * fVar27;
            fVar27 = param_7 / (SQRT(fVar26 * fVar26 + fVar21 * fVar27 * fVar21 * fVar27 +
                                     fVar29 * fVar29) / fVar27);
            *puVar14 = CONCAT44(fVar19 + fVar23 * fVar27,fVar24 + fVar21 * fVar27);
            *(float *)(puVar14 + 1) = fVar20 + fVar25 * fVar27;
            piVar10 = piVar10 + 1;
            uVar12 = uVar12 - 4;
          } while (uVar12 != 0);
        }
      }
      else {
        func_0x000107c2ace8(&ppuStack_110);
        if (*(char *)(lStack_108 + 0x1f) < '\0') {
          *(undefined8 *)(lStack_108 + 0x10) = 0xd;
          puVar14 = *(undefined8 **)(lStack_108 + 8);
        }
        else {
          puVar14 = (undefined8 *)(lStack_108 + 8);
          *(undefined1 *)(lStack_108 + 0x1f) = 0xd;
        }
        *puVar14 = 0x6579457468676952;
        *(undefined8 *)((long)puVar14 + 5) = 0x6863746150657945;
        *(undefined1 *)((long)puVar14 + 0xd) = 0;
        FUN_109697c4c(lVar15,&ppuStack_110);
        ppuStack_110 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_110);
        if ((int)lVar15 == 0) goto LAB_109699b90;
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != (uVar9 >> 4 & 0x7fffffff));
  }
  return;
}



/* Entry: 1096999ec; end: 109699cd7;  */

void FUN_1096999ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,float param_7,long param_8)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined4 **ppuVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  int iVar12;
  ulong uVar13;
  float fVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 *puStack_e8;
  undefined4 *puStack_e0;
  long lStack_d8;
  undefined **ppuStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [48];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 auStack_88 [2];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 auStack_78 [2];
  
  uStack_90 = param_4;
  uStack_8c = param_5;
  auStack_88[0] = param_6;
  uStack_80 = param_1;
  uStack_7c = param_2;
  auStack_78[0] = param_3;
  FUN_109699cd8(auStack_c0,*(long *)(param_8 + 8) + 0x30);
  FUN_109699d9c(auStack_c0,&uStack_80);
  uStack_80 = param_1;
  uStack_7c = param_2;
  auStack_78[0] = param_3;
  FUN_109699d9c(auStack_c0,&uStack_90);
  lStack_d8 = *(long *)(param_8 + 8);
  lVar2 = *(long *)(*(long *)(lStack_d8 + 0x10) + 0x50);
  uVar6 = *(long *)(*(long *)(lStack_d8 + 0x10) + 0x58) - lVar2;
  if (0 < (int)(uVar6 >> 4)) {
    uVar13 = 0;
    puStack_e0 = auStack_78;
    puStack_e8 = auStack_88;
    uStack_90 = param_1;
    uStack_8c = param_2;
    auStack_88[0] = param_3;
    do {
      func_0x000107c2ace8(&ppuStack_d0);
      if (*(char *)(lStack_c8 + 0x1f) < '\0') {
        *(undefined8 *)(lStack_c8 + 0x10) = 0xc;
        puVar11 = *(undefined8 **)(lStack_c8 + 8);
      }
      else {
        puVar11 = (undefined8 *)(lStack_c8 + 8);
        *(undefined1 *)(lStack_c8 + 0x1f) = 0xc;
      }
      *(undefined4 *)(puVar11 + 1) = 0x68637461;
      lVar7 = lVar2 + uVar13 * 0x10;
      *puVar11 = 0x506579457466654c;
      *(undefined1 *)((long)puVar11 + 0xc) = 0;
      lVar5 = lVar7;
      FUN_109697c4c(lVar7,&ppuStack_d0);
      ppuStack_d0 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_d0);
      iVar12 = (int)lVar5;
      if (iVar12 == 0) {
LAB_109699b90:
        FUN_1096b9498(param_8);
        piVar8 = (int *)(*(long *)(*(long *)(lStack_d8 + 0x10) + 0x68) +
                        ((long)(uVar13 << 0x20) >> 0x1e));
        iVar1 = *piVar8;
        ppuVar4 = &puStack_e0;
        if (iVar12 != 0) {
          ppuVar4 = &puStack_e8;
        }
        uVar3 = piVar8[1] - iVar1;
        if (uVar3 != 0) {
          lVar7 = *(long *)(*(long *)(param_8 + 8) + 0x18);
          piVar8 = (int *)(*(long *)(*(long *)(lStack_d8 + 0x10) + 0x20) + (long)iVar1 * 4);
          uVar9 = (uint)(iVar12 == 0);
          uVar15 = CONCAT44(uStack_7c,uStack_80) ^
                   (CONCAT44(uStack_7c,uStack_80) ^ CONCAT44(uStack_8c,uStack_90)) &
                   ~CONCAT44(-(uint)((int)(uVar9 << 0x1f) < 0),-(uint)((int)(uVar9 << 0x1f) < 0));
          fVar17 = (float)**ppuVar4;
          uVar10 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2;
          do {
            puVar11 = (undefined8 *)(lVar7 + (long)*piVar8 * 0xc);
            fVar14 = (float)uVar15;
            fVar18 = (float)*puVar11 - fVar14;
            fVar16 = (float)(uVar15 >> 0x20);
            fVar19 = (float)((ulong)*puVar11 >> 0x20) - fVar16;
            if (ABS(fVar18) <= 1.8446744e+19) {
              fVar22 = 1.0;
              if (ABS(fVar18) < 5.421011e-20) {
                fVar22 = 1.9342813e+25;
              }
            }
            else {
              fVar22 = 5.169879e-26;
            }
            fVar20 = *(float *)(puVar11 + 1) - fVar17;
            fVar21 = fVar19 * fVar22;
            fVar23 = fVar20 * fVar22;
            fVar22 = param_7 / (SQRT(fVar21 * fVar21 + fVar18 * fVar22 * fVar18 * fVar22 +
                                     fVar23 * fVar23) / fVar22);
            *puVar11 = CONCAT44(fVar16 + fVar19 * fVar22,fVar14 + fVar18 * fVar22);
            *(float *)(puVar11 + 1) = fVar17 + fVar20 * fVar22;
            piVar8 = piVar8 + 1;
            uVar10 = uVar10 - 4;
          } while (uVar10 != 0);
        }
      }
      else {
        func_0x000107c2ace8(&ppuStack_d0);
        if (*(char *)(lStack_c8 + 0x1f) < '\0') {
          *(undefined8 *)(lStack_c8 + 0x10) = 0xd;
          puVar11 = *(undefined8 **)(lStack_c8 + 8);
        }
        else {
          puVar11 = (undefined8 *)(lStack_c8 + 8);
          *(undefined1 *)(lStack_c8 + 0x1f) = 0xd;
        }
        *puVar11 = 0x6579457468676952;
        *(undefined8 *)((long)puVar11 + 5) = 0x6863746150657945;
        *(undefined1 *)((long)puVar11 + 0xd) = 0;
        FUN_109697c4c(lVar7,&ppuStack_d0);
        ppuStack_d0 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_d0);
        if ((int)lVar7 == 0) goto LAB_109699b90;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != (uVar6 >> 4 & 0x7fffffff));
  }
  return;
}



/* Entry: 109699cd8; end: 109699d9b;  */

void FUN_109699cd8(long param_1,float *param_2)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  lVar1 = 0;
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  pfVar2 = param_2;
  lVar3 = param_1;
  do {
    lVar4 = 0;
    do {
      *(float *)(lVar3 + lVar4) =
           (1.0 / (fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7)) * pfVar2[lVar4];
      lVar4 = lVar4 + 4;
    } while (lVar4 != 0xc);
    *(undefined4 *)(param_1 + lVar1 * 0x10 + 0xc) = 0;
    lVar1 = lVar1 + 1;
    lVar3 = lVar3 + 0x10;
    pfVar2 = pfVar2 + 1;
  } while (lVar1 != 3);
  fVar5 = -param_2[3];
  fVar6 = -param_2[7];
  fVar7 = -param_2[0xb];
  fStack_2c = fVar5;
  fStack_28 = fVar6;
  fStack_24 = fVar7;
  FUN_109699d9c(param_1,&fStack_2c);
  *(float *)(param_1 + 0xc) = fVar5;
  *(float *)(param_1 + 0x1c) = fVar6;
  *(float *)(param_1 + 0x2c) = fVar7;
  return;
}



/* Entry: 109699d9c; end: 109699e43;  */

undefined4 FUN_109699d9c(long param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float afStack_c [3];
  
  lVar5 = 0;
  afStack_c[1] = 0.0;
  afStack_c[2] = 0.0;
  afStack_c[0] = 0.0;
  lVar6 = param_1;
  do {
    lVar7 = 0;
    iVar4 = (int)lVar5;
    pfVar2 = afStack_c + 2;
    if (iVar4 == 1) {
      pfVar2 = afStack_c + 1;
    }
    pfVar1 = afStack_c;
    if (iVar4 != 2) {
      pfVar1 = pfVar2;
    }
    *pfVar1 = *(float *)(param_1 + lVar5 * 0x10 + 0xc);
    do {
      pfVar2 = param_2;
      if ((int)lVar7 == 1) {
        pfVar2 = param_2 + 1;
      }
      pfVar1 = param_2 + 2;
      if ((int)lVar7 != 2) {
        pfVar1 = pfVar2;
      }
      pfVar2 = afStack_c + 2;
      if (iVar4 == 1) {
        pfVar2 = afStack_c + 1;
      }
      pfVar3 = afStack_c;
      if (iVar4 != 2) {
        pfVar3 = pfVar2;
      }
      *pfVar3 = *pfVar3 + *pfVar1 * *(float *)(lVar6 + lVar7 * 4);
      lVar7 = lVar7 + 1;
    } while (lVar7 != 3);
    lVar5 = lVar5 + 1;
    lVar6 = lVar6 + 0x10;
  } while (lVar5 != 3);
  return afStack_c[2];
}



/* Entry: 109699e44; end: 109699f5f;  */

undefined8 * FUN_109699e44(undefined8 *param_1,undefined8 param_2,ulong param_3,long param_4)

{
  bool bVar1;
  undefined1 *puVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined ***pppuVar6;
  long *plVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  byte *pbVar14;
  uint uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  uint uVar18;
  undefined8 uVar19;
  byte abStack_c8 [4];
  byte abStack_c4 [4];
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_38;
  
  pppuVar6 = &ppuStack_60;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = &PTR_FUN_110b01d60;
  puVar5 = (undefined8 *)0x28;
  _malloc();
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar5 + 3) = 1;
    *puVar5 = 0;
    puVar5[1] = 0;
    *(undefined4 *)(puVar5 + 2) = 0;
    puVar5 = puVar5 + 4;
    *puVar5 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b01d90;
  param_1[1] = puVar5;
  puVar8 = (undefined1 *)0x20;
  puVar5 = param_1;
  func_0x000107c2acd0();
  puVar5[1] = &PTR_FUN_110b01d60;
  puVar5[2] = 0;
  puVar5[3] = 1;
  *puVar5 = &PTR_FUN_110b01e20;
  FUN_10969a674(&ppuStack_60,param_2);
  lVar11 = param_1[1];
  uVar19 = *(undefined8 *)(lVar11 + 0x10);
  *(undefined8 *)(lVar11 + 0x10) = uStack_58;
  *(undefined ***)(lVar11 + 8) = ppuStack_60;
  ppuStack_60 = &PTR_FUN_110b01d60;
  uStack_58 = uVar19;
  func_0x000107c2acd4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if ((int)puVar8 != 0) {
    func_0x000104bd46a0();
    FUN_109696618(param_1);
  }
  __Unwind_Resume();
  puVar2 = puVar8 + param_4 * param_3;
  uVar18 = *(uint *)(*(long *)((long)pppuVar6 + 8) + 0x18);
  uVar9 = *(uint *)(*(long *)((long)pppuVar6 + 8) + 0x1c);
  puVar16 = puVar8;
  uVar12 = uVar9;
  if (2 < (long)(param_4 * param_3)) {
    do {
      if (uVar9 == 0) {
        plVar7 = (long *)(*(long *)((long)pppuVar6 + 8) + 8);
        (**(code **)(*plVar7 + 0x40))(plVar7,abStack_c8,1,4);
        iVar4 = (int)plVar7;
        if (iVar4 == 0) {
          uVar12 = 0;
          break;
        }
        iVar10 = iVar4;
        if (iVar4 < 3) {
          iVar10 = 2;
        }
        uVar9 = iVar10 - 1;
        if (iVar4 < 1) {
          uVar18 = 0;
        }
        else {
          uVar18 = 0;
          uVar13 = (ulong)plVar7 & 0x7fffffff;
          pbVar14 = abStack_c8;
          do {
            bVar3 = *pbVar14;
            uVar18 = uVar18 << 6;
            uVar12 = (uint)bVar3;
            if (bVar3 < 0x41) {
              if (uVar12 < 0x3a) {
                uVar15 = uVar12 + 4;
                goto LAB_10969a040;
              }
              if (uVar12 == 0x3a) {
                uVar15 = 0x3f;
                goto LAB_10969a040;
              }
              uVar9 = uVar9 - 1;
            }
            else {
              uVar15 = 0x3e;
              if (uVar12 != 0x5f) {
                uVar15 = uVar12 - 0x47;
              }
              if (uVar12 < 0x5f) {
                uVar15 = bVar3 - 0x41;
              }
LAB_10969a040:
              uVar18 = uVar15 | uVar18;
            }
            uVar13 = uVar13 - 1;
            pbVar14 = pbVar14 + 1;
          } while (uVar13 != 0);
        }
        uVar18 = uVar18 << (ulong)((4 - iVar4) * 6 & 0x1f);
        uVar18 = ((uVar18 ^ uVar18 >> 0x10) & 0xff) * 0x10001 ^ uVar18;
      }
      uVar12 = 0;
      *puVar16 = (char)uVar18;
      puVar16[1] = (char)(uVar18 >> 8);
      puVar16[2] = (char)(uVar18 >> 0x10);
      puVar16 = puVar16 + (int)uVar9;
      uVar9 = 0;
    } while (puVar16 + 2 < puVar2);
  }
  puVar17 = puVar2;
  if (puVar16 != puVar2) {
    puVar17 = puVar16;
    if (uVar12 == 0) {
      plVar7 = (long *)(*(long *)((long)pppuVar6 + 8) + 8);
      (**(code **)(*plVar7 + 0x40))(plVar7,abStack_c4,1,4);
      iVar4 = (int)plVar7;
      if (iVar4 == 0) {
        uVar12 = 0;
        goto LAB_10969a1e0;
      }
      iVar10 = iVar4;
      if (iVar4 < 3) {
        iVar10 = 2;
      }
      uVar12 = iVar10 - 1;
      if (iVar4 < 1) {
        uVar18 = 0;
      }
      else {
        uVar18 = 0;
        uVar13 = (ulong)plVar7 & 0x7fffffff;
        pbVar14 = abStack_c4;
        do {
          bVar3 = *pbVar14;
          uVar9 = (uint)bVar3;
          if (bVar3 < 0x41) {
            if (uVar9 < 0x3a) {
              uVar15 = uVar9 + 4;
              goto LAB_10969a154;
            }
            if (uVar9 == 0x3a) {
              uVar15 = 0x3f;
              goto LAB_10969a154;
            }
            uVar12 = uVar12 - 1;
            uVar18 = uVar18 << 6;
          }
          else {
            uVar15 = 0x3e;
            if (uVar9 != 0x5f) {
              uVar15 = uVar9 - 0x47;
            }
            if (uVar9 < 0x5f) {
              uVar15 = bVar3 - 0x41;
            }
LAB_10969a154:
            uVar18 = uVar15 | uVar18 << 6;
          }
          uVar13 = uVar13 - 1;
          pbVar14 = pbVar14 + 1;
        } while (uVar13 != 0);
      }
      uVar18 = uVar18 << (ulong)((4 - iVar4) * 6 & 0x1f);
      uVar9 = (uVar18 ^ uVar18 >> 0x10) & 0xff;
      uVar18 = (uVar9 | uVar9 << 0x10) ^ uVar18;
    }
    uVar9 = uVar12;
    if (0 < (int)uVar12) {
      do {
        uVar12 = uVar9 - 1;
        puVar17 = puVar16 + 1;
        *puVar16 = (char)uVar18;
        uVar18 = uVar18 >> 8;
        if (puVar17 == puVar2) break;
        bVar1 = 1 < uVar9;
        puVar16 = puVar17;
        uVar9 = uVar12;
      } while (bVar1);
    }
  }
LAB_10969a1e0:
  lVar11 = *(long *)((long)pppuVar6 + 8);
  puVar5 = (undefined8 *)0x0;
  if (param_3 != 0) {
    puVar5 = (undefined8 *)((ulong)((long)puVar17 - (long)puVar8) / param_3);
  }
  *(uint *)(lVar11 + 0x18) = uVar18;
  *(uint *)(lVar11 + 0x1c) = uVar12;
  return puVar5;
}



/* Entry: 109699f60; end: 10969a20f;  */

ulong FUN_109699f60(long param_1,undefined1 *param_2,ulong param_3,long param_4)

{
  bool bVar1;
  undefined1 *puVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  byte abStack_68 [4];
  byte abStack_64 [4];
  
  puVar2 = param_2 + param_4 * param_3;
  uVar15 = *(uint *)(*(long *)(param_1 + 8) + 0x18);
  uVar6 = *(uint *)(*(long *)(param_1 + 8) + 0x1c);
  puVar13 = param_2;
  uVar8 = uVar6;
  if (2 < (long)(param_4 * param_3)) {
    do {
      if (uVar6 == 0) {
        plVar5 = (long *)(*(long *)(param_1 + 8) + 8);
        (**(code **)(*plVar5 + 0x40))(plVar5,abStack_68,1,4);
        iVar4 = (int)plVar5;
        if (iVar4 == 0) {
          uVar8 = 0;
          break;
        }
        iVar7 = iVar4;
        if (iVar4 < 3) {
          iVar7 = 2;
        }
        uVar6 = iVar7 - 1;
        if (iVar4 < 1) {
          uVar15 = 0;
        }
        else {
          uVar15 = 0;
          uVar9 = (ulong)plVar5 & 0x7fffffff;
          pbVar11 = abStack_68;
          do {
            bVar3 = *pbVar11;
            uVar15 = uVar15 << 6;
            uVar8 = (uint)bVar3;
            if (bVar3 < 0x41) {
              if (uVar8 < 0x3a) {
                uVar12 = uVar8 + 4;
                goto LAB_10969a040;
              }
              if (uVar8 == 0x3a) {
                uVar12 = 0x3f;
                goto LAB_10969a040;
              }
              uVar6 = uVar6 - 1;
            }
            else {
              uVar12 = 0x3e;
              if (uVar8 != 0x5f) {
                uVar12 = uVar8 - 0x47;
              }
              if (uVar8 < 0x5f) {
                uVar12 = bVar3 - 0x41;
              }
LAB_10969a040:
              uVar15 = uVar12 | uVar15;
            }
            uVar9 = uVar9 - 1;
            pbVar11 = pbVar11 + 1;
          } while (uVar9 != 0);
        }
        uVar15 = uVar15 << (ulong)((4 - iVar4) * 6 & 0x1f);
        uVar15 = ((uVar15 ^ uVar15 >> 0x10) & 0xff) * 0x10001 ^ uVar15;
      }
      uVar8 = 0;
      *puVar13 = (char)uVar15;
      puVar13[1] = (char)(uVar15 >> 8);
      puVar13[2] = (char)(uVar15 >> 0x10);
      puVar13 = puVar13 + (int)uVar6;
      uVar6 = 0;
    } while (puVar13 + 2 < puVar2);
  }
  puVar14 = puVar2;
  if (puVar13 != puVar2) {
    puVar14 = puVar13;
    if (uVar8 == 0) {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 8);
      (**(code **)(*plVar5 + 0x40))(plVar5,abStack_64,1,4);
      iVar4 = (int)plVar5;
      if (iVar4 == 0) {
        uVar8 = 0;
        goto LAB_10969a1e0;
      }
      iVar7 = iVar4;
      if (iVar4 < 3) {
        iVar7 = 2;
      }
      uVar8 = iVar7 - 1;
      if (iVar4 < 1) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        uVar9 = (ulong)plVar5 & 0x7fffffff;
        pbVar11 = abStack_64;
        do {
          bVar3 = *pbVar11;
          uVar6 = (uint)bVar3;
          if (bVar3 < 0x41) {
            if (uVar6 < 0x3a) {
              uVar12 = uVar6 + 4;
              goto LAB_10969a154;
            }
            if (uVar6 == 0x3a) {
              uVar12 = 0x3f;
              goto LAB_10969a154;
            }
            uVar8 = uVar8 - 1;
            uVar15 = uVar15 << 6;
          }
          else {
            uVar12 = 0x3e;
            if (uVar6 != 0x5f) {
              uVar12 = uVar6 - 0x47;
            }
            if (uVar6 < 0x5f) {
              uVar12 = bVar3 - 0x41;
            }
LAB_10969a154:
            uVar15 = uVar12 | uVar15 << 6;
          }
          uVar9 = uVar9 - 1;
          pbVar11 = pbVar11 + 1;
        } while (uVar9 != 0);
      }
      uVar15 = uVar15 << (ulong)((4 - iVar4) * 6 & 0x1f);
      uVar6 = (uVar15 ^ uVar15 >> 0x10) & 0xff;
      uVar15 = (uVar6 | uVar6 << 0x10) ^ uVar15;
    }
    uVar6 = uVar8;
    if (0 < (int)uVar8) {
      do {
        uVar8 = uVar6 - 1;
        puVar14 = puVar13 + 1;
        *puVar13 = (char)uVar15;
        uVar15 = uVar15 >> 8;
        if (puVar14 == puVar2) break;
        bVar1 = 1 < uVar6;
        puVar13 = puVar14;
        uVar6 = uVar8;
      } while (bVar1);
    }
  }
LAB_10969a1e0:
  lVar10 = *(long *)(param_1 + 8);
  uVar9 = 0;
  if (param_3 != 0) {
    uVar9 = (ulong)((long)puVar14 - (long)param_2) / param_3;
  }
  *(uint *)(lVar10 + 0x18) = uVar15;
  *(uint *)(lVar10 + 0x1c) = uVar8;
  return uVar9;
}



/* Entry: 10969a210; end: 10969a3a7;  */

ulong FUN_10969a210(long param_1,long param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  long *plVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  char cVar9;
  char cStack_79;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  uVar5 = *(uint *)(*(long *)(param_1 + 8) + 0x18);
  lStack_78 = 0;
  lStack_70 = 0;
  uStack_68 = 0;
  lVar7 = param_4 * param_3;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = lVar7 + 2;
  func_0x0001081867d4(&lStack_78,
                      (SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0x7ffffffffffffffe) << 1);
  if (lVar7 != 0) {
    lVar8 = 0;
    do {
      uVar1 = (uint)*(byte *)(param_2 + lVar8) | uVar5 << 8;
      uVar2 = uVar5 >> 0x10;
      uVar5 = uVar1;
      if ((uVar2 & 0xff) != 0) {
        uVar5 = 0x18;
        do {
          uVar5 = uVar5 - 6;
          uVar2 = uVar1 >> (ulong)(uVar5 & 0x1f) & 0x3f;
          cStack_79 = '_';
          if (uVar2 != 0x3e) {
            cStack_79 = ':';
          }
          if (uVar2 < 0x3e) {
            cStack_79 = (char)uVar2 + -4;
          }
          cVar9 = 'A';
          if (0x19 < uVar2) {
            cVar9 = 'G';
          }
          if (uVar2 < 0x34) {
            cStack_79 = cVar9 + (char)uVar2;
          }
          func_0x0001092d2fc0(&lStack_78,&cStack_79);
        } while (5 < uVar5);
        uVar5 = 1;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != lVar7);
  }
  plVar6 = (long *)(lStack_70 - lStack_78);
  plVar4 = (long *)(*(long *)(param_1 + 8) + 8);
  *(uint *)(*(long *)(param_1 + 8) + 0x18) = uVar5;
  (**(code **)(*plVar4 + 0x48))(plVar4,lStack_78,1,(long)(int)plVar6);
  if (plVar4 != plVar6) {
    param_4 = 0;
    if (param_3 != 0) {
      param_4 = (((ulong)plVar4 >> 2) * 2 + ((ulong)plVar4 >> 2)) / param_3;
    }
  }
  if (lStack_78 != 0) {
    lStack_70 = lStack_78;
    __ZdlPv();
  }
  return param_4;
}



/* Entry: 10969a3a8; end: 10969a3f3;  */

long * FUN_10969a3a8(long param_1)

{
  long *plVar1;
  
  if (*(long *)(*(long *)(param_1 + 8) + 0x10) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 8) + 8);
                    /* WARNING: Could not recover jumptable at 0x00010969a3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))();
    return plVar1;
  }
  return (long *)0x0;
}



/* Entry: 10969a3f4; end: 10969a4cb;  */

void FUN_10969a3f4(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  char *pcVar6;
  char cVar7;
  char cVar8;
  char acStack_14 [4];
  
  uVar4 = *(uint *)(param_1 + 2);
  if (uVar4 < 2) {
    return;
  }
  if (uVar4 >> 0x18 == 0) {
    uVar2 = 3;
    do {
      uVar5 = uVar2;
      acStack_14[uVar5] = '=';
      bVar3 = uVar4 < 0x10000;
      uVar4 = uVar4 << 8;
      uVar2 = uVar5 - 1;
    } while (bVar3);
    if ((long)(uVar5 + 1) < 2) goto LAB_10969a4a0;
  }
  else {
    uVar5 = 4;
  }
  uVar5 = uVar5 & 0xffffffff;
  pcVar6 = acStack_14;
  do {
    uVar1 = uVar4 >> 0x12 & 0x3f;
    uVar4 = uVar4 << 6;
    cVar7 = '_';
    if (uVar1 != 0x3e) {
      cVar7 = ':';
    }
    if (uVar1 < 0x3e) {
      cVar7 = (char)uVar1 + -4;
    }
    cVar8 = 'A';
    if (0x19 < uVar1) {
      cVar8 = 'G';
    }
    if (uVar1 < 0x34) {
      cVar7 = cVar8 + (char)uVar1;
    }
    *pcVar6 = cVar7;
    uVar5 = uVar5 - 1;
    pcVar6 = pcVar6 + 1;
  } while (uVar5 != 0);
LAB_10969a4a0:
  *(undefined4 *)(param_1 + 2) = 1;
  (**(code **)(*param_1 + 0x48))(param_1,acStack_14,1,4);
  return;
}



/* Entry: 10969a4cc; end: 10969a4d7;  */

long * FUN_10969a4cc(long param_1,int param_2)

{
  long *plVar1;
  undefined ***pppuVar2;
  long *plVar3;
  long lVar4;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_28;
  
  lVar4 = *(long *)(param_1 + 8);
  plVar3 = (long *)(lVar4 + 8);
  pppuVar2 = &ppuStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(lVar4 + 0x10) != 0) {
    plVar1 = plVar3;
    (**(code **)(*plVar3 + 0x28))();
    if ((int)plVar1 != 0) {
      FUN_10969a3f4(plVar3);
    }
    uStack_48 = *(undefined8 *)(lVar4 + 0x10);
    *(undefined8 *)(lVar4 + 0x10) = 0;
    *plVar3 = (long)&PTR_FUN_110b01d60;
    ppuStack_50 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4();
    plVar3 = (long *)pppuVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *plVar3 = (long)&PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return plVar3;
}



/* Entry: 10969a4d8; end: 10969a57b;  */

long * FUN_10969a4d8(long *param_1,int param_2)

{
  long *plVar1;
  undefined ***pppuVar2;
  undefined **ppuStack_50;
  long lStack_48;
  long lStack_28;
  
  pppuVar2 = &ppuStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1[1] != 0) {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x28))();
    if ((int)plVar1 != 0) {
      FUN_10969a3f4(param_1);
    }
    lStack_48 = param_1[1];
    param_1[1] = 0;
    *param_1 = (long)&PTR_FUN_110b01d60;
    ppuStack_50 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4();
    param_1 = (long *)pppuVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *param_1 = (long)&PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 10969a57c; end: 10969a5af;  */

undefined8 * FUN_10969a57c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 10969a5b0; end: 10969a5e3;  */

void FUN_10969a5b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10969a5e4; end: 10969a633;  */

long FUN_10969a5e4(long param_1)

{
  FUN_10969a634(param_1 + 8);
  return param_1;
}



/* Entry: 10969a634; end: 10969a673;  */

undefined8 * FUN_10969a634(undefined8 *param_1)

{
  FUN_10969a4d8();
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(param_1);
  return param_1;
}



/* Entry: 10969a674; end: 10969a6e7;  */

void FUN_10969a674(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_FUN_110b01d60;
  param_1[1] = 0;
  if (param_2[1] != 0) {
    func_0x000107c2acd4(param_1);
    uVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    if (param_1[1] != 0) {
      piVar3 = (int *)(param_1[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return;
}



/* Entry: 10969a6e8; end: 10969a7d3;  */

uint FUN_10969a6e8(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar2 = param_1 >> 0x10 & 0x8000;
  uVar4 = param_1 >> 0x17 & 0xff;
  uVar6 = param_1 & 0x7fffff;
  uVar3 = uVar4 - 0x70;
  if (uVar4 < 0x70 || uVar3 == 0) {
    uVar6 = (uVar6 | 0x800000) >> (ulong)(0x71 - uVar4 & 0x1f);
    uVar6 = uVar2 | (uVar6 & 0x1000) * 2 + uVar6 >> 0xd;
    if (uVar4 < 0x66) {
      uVar6 = uVar2;
    }
  }
  else if (uVar3 == 0x8f) {
    uVar3 = (uint)(uVar6 < 0x2000) | uVar6 >> 0xd | uVar2;
    if (uVar6 == 0) {
      uVar3 = uVar2;
    }
    uVar6 = uVar3 | 0x7c00;
  }
  else {
    uVar1 = uVar6 + 0x2000;
    uVar5 = uVar3;
    if (0x7fdfff < uVar6) {
      uVar1 = 0;
      uVar5 = uVar4 - 0x6f;
    }
    if ((param_1 & 0x1000) != 0) {
      uVar6 = uVar1;
      uVar3 = uVar5;
    }
    if (uVar3 < 0x1f) {
      uVar6 = uVar3 << 10 | uVar6 >> 0xd | uVar2;
    }
    else {
      iVar7 = 10;
      do {
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      uVar6 = uVar2 | 0x7c00;
    }
  }
  return uVar6 & 0xffff;
}



/* Entry: 10969a7d4; end: 10969a84f;  */

uint FUN_10969a7d4(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1 >> 0xf;
  uVar3 = param_1 >> 10 & 0x1f;
  uVar2 = param_1 & 0x3ff;
  if (uVar3 == 0x1f) {
    uVar3 = uVar1 << 0x1f | param_1 << 0xd;
    if (uVar2 == 0) {
      uVar3 = uVar1 << 0x1f;
    }
    uVar3 = uVar3 | 0x7f800000;
  }
  else {
    if (uVar3 == 0) {
      if (uVar2 == 0) {
        return uVar1 << 0x1f;
      }
      uVar3 = 0x16 - (uint)LZCOUNT(uVar2);
      uVar2 = uVar2 << (ulong)(10 - ((uint)LZCOUNT(uVar2) ^ 0x1f) & 0x1f) & 0x1fffbfe;
    }
    uVar3 = uVar3 * 0x800000 + 0x38000000 | uVar1 << 0x1f | uVar2 << 0xd;
  }
  return uVar3;
}



/* Entry: 10969a850; end: 10969a8ab;  */

bool FUN_10969a850(undefined4 param_1,long *param_2,undefined4 *param_3)

{
  undefined2 uStack_22;
  
  (**(code **)(*param_2 + 0x40))(param_2,&uStack_22,2,1);
  if (((ulong)param_2 & 0xffffffff) == 1) {
    FUN_10969a7d4(uStack_22);
    *param_3 = param_1;
  }
  return ((ulong)param_2 & 0xffffffff) == 1;
}



/* Entry: 10969a8ac; end: 10969a9eb;  */

long * FUN_10969a8ac(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = (long)&PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = (long)&PTR_FUN_110b01e88;
  param_1[1] = (long)puVar1;
  iVar3 = 0x30;
  plVar2 = param_1;
  func_0x000107c2acd0();
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  *plVar2 = (long)&PTR_FUN_110b01f00;
  plVar2[1] = (long)&PTR_FUN_110b01d60;
  *(long *)(param_1[1] + 0x28) = param_3;
  FUN_10969a674(&ppuStack_60,param_2);
  lVar4 = param_1[1];
  uVar6 = *(undefined8 *)(lVar4 + 0x10);
  *(undefined8 *)(lVar4 + 0x10) = uStack_58;
  *(undefined ***)(lVar4 + 8) = ppuStack_60;
  ppuStack_60 = &PTR_FUN_110b01d60;
  uStack_58 = uVar6;
  func_0x000107c2acd4(&ppuStack_60);
  lVar5 = param_1[1];
  __Znam();
  lVar4 = *(long *)(lVar5 + 0x18);
  *(long *)(lVar5 + 0x18) = param_3;
  if (lVar4 != 0) {
    __ZdaPv();
    param_3 = lVar4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (iVar3 != 0) {
    func_0x000104bd46a0();
    FUN_109696618(param_1);
  }
  __Unwind_Resume();
  if (*(long *)(*(long *)(param_3 + 8) + 0x10) != 0) {
    plVar2 = (long *)(*(long *)(param_3 + 8) + 8);
                    /* WARNING: Could not recover jumptable at 0x00010969aa00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x20))();
    return plVar2;
  }
  return (long *)0x0;
}



/* Entry: 10969a9ec; end: 10969aa2b;  */

long * FUN_10969a9ec(long param_1)

{
  long *plVar1;
  
  if (*(long *)(*(long *)(param_1 + 8) + 0x10) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 8) + 8);
                    /* WARNING: Could not recover jumptable at 0x00010969aa00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))();
    return plVar1;
  }
  return (long *)0x0;
}



/* Entry: 10969aa2c; end: 10969aa83;  */

void FUN_10969aa2c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (*(int *)(lVar1 + 0x20) != 0) {
    (**(code **)(*(long *)(lVar1 + 8) + 0x48))((long *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x18),1);
    lVar1 = *(long *)(param_1 + 8);
    *(undefined4 *)(lVar1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010969aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + 8) + 0x30))();
    return;
  }
  return;
}



/* Entry: 10969aa84; end: 10969ab43;  */

undefined1 * FUN_10969aa84(long param_1,long param_2,ulong param_3,undefined1 *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  long *plVar3;
  long lVar4;
  undefined ***pppuVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_28;
  
  pppuVar5 = &ppuStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = *(undefined1 **)(param_1 + 8);
  if (*(long *)(puVar2 + 0x10) != 0) {
    plVar3 = (long *)(puVar2 + 8);
    (**(code **)(*plVar3 + 0x28))();
    if ((int)plVar3 != 0) {
      FUN_10969aa2c(param_1);
    }
    lVar7 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(lVar7 + 0x18);
    *(undefined8 *)(lVar7 + 0x18) = 0;
    if (lVar4 != 0) {
      __ZdaPv();
      lVar7 = *(long *)(param_1 + 8);
    }
    uStack_48 = *(undefined8 *)(lVar7 + 0x10);
    *(undefined8 *)(lVar7 + 0x10) = 0;
    *(undefined ***)(lVar7 + 8) = &PTR_FUN_110b01d60;
    ppuStack_50 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4();
    puVar2 = (undefined1 *)pppuVar5;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    if ((int)param_2 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    uVar10 = (long)param_4 * param_3;
    lVar4 = *(long *)(puVar2 + 8);
    uVar11 = (long)*(int *)(lVar4 + 0x24) - (long)*(int *)(lVar4 + 0x20);
    uVar8 = uVar10;
    if (uVar11 <= uVar10) {
      uVar8 = uVar11;
    }
    _memcpy(param_2,*(long *)(lVar4 + 0x18) + (long)*(int *)(lVar4 + 0x20),uVar8);
    lVar4 = param_2 + uVar8;
    lVar7 = *(long *)(puVar2 + 8);
    *(int *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) + (int)uVar8;
    if (uVar11 <= uVar10 && uVar10 - uVar11 != 0) {
      iVar9 = (int)(uVar10 - uVar8);
      if (uVar10 - uVar8 < *(ulong *)(lVar7 + 0x28)) {
        lVar6 = lVar7 + 8;
        (**(code **)(*(long *)(lVar7 + 8) + 0x40))
                  (lVar6,*(undefined8 *)(lVar7 + 0x18),1,(long)(int)*(ulong *)(lVar7 + 0x28));
        lVar7 = *(long *)(puVar2 + 8);
        iVar1 = (int)lVar6;
        *(int *)(lVar7 + 0x24) = iVar1;
        if (iVar9 <= iVar1) {
          iVar1 = iVar9;
        }
        _memcpy(lVar4,*(undefined8 *)(lVar7 + 0x18),(long)iVar1);
        *(int *)(*(long *)(puVar2 + 8) + 0x20) = iVar1;
        lVar4 = lVar4 + iVar1;
      }
      else {
        lVar6 = lVar7 + 8;
        (**(code **)(*(long *)(lVar7 + 8) + 0x40))(lVar6,lVar4,1,(long)iVar9);
        lVar4 = lVar4 + (int)lVar6;
      }
    }
    uVar8 = lVar4 - param_2;
    if (uVar8 != uVar10) {
      uVar10 = 0;
      if (param_3 != 0) {
        uVar10 = uVar8 / param_3;
      }
      uVar10 = uVar8 - uVar10 * param_3;
      if (uVar10 != 0) {
        lVar7 = *(long *)(puVar2 + 8);
        if (*(ulong *)(lVar7 + 0x28) < uVar10) {
          *(ulong *)(lVar7 + 0x28) = uVar10;
          uVar8 = uVar10;
          __Znam();
          lVar6 = *(long *)(lVar7 + 0x18);
          *(ulong *)(lVar7 + 0x18) = uVar8;
          if (lVar6 != 0) {
            __ZdaPv();
            lVar7 = *(long *)(puVar2 + 8);
          }
        }
        _memcpy(*(undefined8 *)(lVar7 + 0x18),lVar4 - uVar10,uVar10);
        uVar8 = (lVar4 - uVar10) - param_2;
      }
      param_4 = (undefined1 *)0x0;
      if (param_3 != 0) {
        param_4 = (undefined1 *)(uVar8 / param_3);
      }
    }
    return param_4;
  }
  return puVar2;
}



/* Entry: 10969ab44; end: 10969adb3;  */

ulong FUN_10969ab44(long param_1,long param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar7 = param_4 * param_3;
  lVar3 = *(long *)(param_1 + 8);
  uVar8 = (long)*(int *)(lVar3 + 0x24) - (long)*(int *)(lVar3 + 0x20);
  uVar5 = uVar7;
  if (uVar8 <= uVar7) {
    uVar5 = uVar8;
  }
  _memcpy(param_2,*(long *)(lVar3 + 0x18) + (long)*(int *)(lVar3 + 0x20),uVar5);
  lVar3 = param_2 + uVar5;
  lVar4 = *(long *)(param_1 + 8);
  *(int *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) + (int)uVar5;
  if (uVar8 <= uVar7 && uVar7 - uVar8 != 0) {
    iVar6 = (int)(uVar7 - uVar5);
    if (uVar7 - uVar5 < *(ulong *)(lVar4 + 0x28)) {
      lVar2 = lVar4 + 8;
      (**(code **)(*(long *)(lVar4 + 8) + 0x40))
                (lVar2,*(undefined8 *)(lVar4 + 0x18),1,(long)(int)*(ulong *)(lVar4 + 0x28));
      lVar4 = *(long *)(param_1 + 8);
      iVar1 = (int)lVar2;
      *(int *)(lVar4 + 0x24) = iVar1;
      if (iVar6 <= iVar1) {
        iVar1 = iVar6;
      }
      _memcpy(lVar3,*(undefined8 *)(lVar4 + 0x18),(long)iVar1);
      *(int *)(*(long *)(param_1 + 8) + 0x20) = iVar1;
      lVar3 = lVar3 + iVar1;
    }
    else {
      lVar2 = lVar4 + 8;
      (**(code **)(*(long *)(lVar4 + 8) + 0x40))(lVar2,lVar3,1,(long)iVar6);
      lVar3 = lVar3 + (int)lVar2;
    }
  }
  uVar5 = lVar3 - param_2;
  if (uVar5 != uVar7) {
    uVar7 = 0;
    if (param_3 != 0) {
      uVar7 = uVar5 / param_3;
    }
    uVar7 = uVar5 - uVar7 * param_3;
    if (uVar7 != 0) {
      lVar4 = *(long *)(param_1 + 8);
      if (*(ulong *)(lVar4 + 0x28) < uVar7) {
        *(ulong *)(lVar4 + 0x28) = uVar7;
        uVar5 = uVar7;
        __Znam();
        lVar2 = *(long *)(lVar4 + 0x18);
        *(ulong *)(lVar4 + 0x18) = uVar5;
        if (lVar2 != 0) {
          __ZdaPv();
          lVar4 = *(long *)(param_1 + 8);
        }
      }
      _memcpy(*(undefined8 *)(lVar4 + 0x18),lVar3 - uVar7,uVar7);
      uVar5 = (lVar3 - uVar7) - param_2;
    }
    param_4 = 0;
    if (param_3 != 0) {
      param_4 = uVar5 / param_3;
    }
  }
  return param_4;
}



/* Entry: 10969adb4; end: 10969ade7;  */

void FUN_10969adb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10969ade8; end: 10969ae2f;  */

long FUN_10969ade8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lVar1 != 0) {
    __ZdaPv();
  }
  *(undefined ***)(param_1 + 8) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 10969ae30; end: 10969ae77;  */

void FUN_10969ae30(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lVar1 != 0) {
    __ZdaPv();
  }
  *(undefined ***)(param_1 + 8) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10969ae78; end: 10969b00f;  */

bool FUN_10969ae78(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 ****ppppuVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined8 ***pppuStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [4];
  ushort uStack_cc;
  
  pppuStack_e8 = (undefined8 ****)0x0;
  uStack_e0 = 0;
  lStack_d8 = 0;
  lVar5 = *(long *)(param_1 + 8);
  uVar4 = (ulong)*(char *)(lVar5 + 0x1f);
  if ((long)uVar4 < 0) {
    pcVar6 = *(char **)(lVar5 + 8);
    uVar4 = *(ulong *)(lVar5 + 0x10);
  }
  else {
    pcVar6 = (char *)(lVar5 + 8);
  }
  if ((uVar4 & 0xffffffff) != 0) {
    iVar7 = 0;
    iVar8 = 0;
    lVar5 = (long)(int)uVar4;
    do {
      cVar1 = *pcVar6;
      if (cVar1 == '.') {
        iVar7 = iVar7 + 1;
      }
      else if ((cVar1 == '\\') || (cVar1 == '/')) {
        if ((iVar8 != 0) || (2 < iVar7)) {
          ppppuVar3 = (undefined8 ****)pppuStack_e8;
          if (-1 < lStack_d8) {
            ppppuVar3 = &pppuStack_e8;
          }
          _stat(ppppuVar3,auStack_d0);
          if ((int)ppppuVar3 != 0 || (uStack_cc & 0x4000) == 0) {
            ppppuVar3 = (undefined8 ****)pppuStack_e8;
            if (-1 < lStack_d8) {
              ppppuVar3 = &pppuStack_e8;
            }
            _mkdir(ppppuVar3,0x1ff);
          }
        }
        iVar8 = 0;
        iVar7 = 0;
      }
      else {
        iVar8 = iVar8 + 1;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (&pppuStack_e8,(int)cVar1);
      pcVar6 = pcVar6 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    if ((iVar8 != 0) || (2 < iVar7)) {
      ppppuVar3 = (undefined8 ****)pppuStack_e8;
      if (-1 < lStack_d8) {
        ppppuVar3 = &pppuStack_e8;
      }
      _stat(ppppuVar3,auStack_d0);
      if (((int)ppppuVar3 != 0) || ((uStack_cc >> 0xe & 1) == 0)) {
        ppppuVar3 = (undefined8 ****)pppuStack_e8;
        if (-1 < lStack_d8) {
          ppppuVar3 = &pppuStack_e8;
        }
        _mkdir(ppppuVar3,0x1ff);
        bVar2 = (int)ppppuVar3 == 0;
        goto LAB_10969af9c;
      }
    }
  }
  bVar2 = true;
LAB_10969af9c:
  if (lStack_d8 < 0) {
    __ZdlPv(pppuStack_e8);
  }
  return bVar2;
}



/* Entry: 10969b010; end: 10969b3e3;  */

undefined8 * FUN_10969b010(undefined8 *param_1,long param_2,int param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  long *plVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_48;
  
  iVar11 = (int)&ppuStack_70;
  pppuVar5 = &ppuStack_70;
  pppuVar7 = &ppuStack_70;
  pppuVar8 = &ppuStack_70;
  iVar3 = (int)&ppuStack_70;
  pppuVar6 = &ppuStack_70;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = &PTR_FUN_110b01d60;
  puVar4 = (undefined8 *)0x28;
  _malloc();
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar4 + 3) = 1;
    *puVar4 = 0;
    puVar4[1] = 0;
    *(undefined4 *)(puVar4 + 2) = 0;
    puVar4 = puVar4 + 4;
    *puVar4 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b01f68;
  param_1[1] = puVar4;
  func_0x000107c2acfc(param_1);
  if (param_3 == 1) {
    func_0x000107c2ace8(&ppuStack_70);
    if (*(char *)(lStack_68 + 0x1f) < '\0') {
      *(undefined8 *)(lStack_68 + 0x10) = 7;
      puVar14 = *(undefined4 **)(lStack_68 + 8);
    }
    else {
      puVar14 = (undefined4 *)(lStack_68 + 8);
      *(undefined1 *)(lStack_68 + 0x1f) = 7;
    }
    *(undefined4 *)((long)puVar14 + 3) = 0x2a6e6964;
    *puVar14 = 0x6474732a;
    *(undefined1 *)((long)puVar14 + 7) = 0;
    lVar17 = param_2;
    FUN_109697c4c();
    ppuStack_70 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4();
    if ((int)lVar17 != 0) {
      pppuVar6 = (undefined ***)(*(long *)(param_2 + 8) + 8);
      if (*(char *)(*(long *)(param_2 + 8) + 0x1f) < '\0') {
        pppuVar6 = (undefined ***)*pppuVar6;
      }
      iVar11 = 0xf432965;
      (*(code *)PTR__fopen_1132dfc00)();
      uVar13 = 5;
LAB_10969b348:
      lVar17 = param_1[1];
      *(undefined ****)(lVar17 + 8) = pppuVar6;
      *(undefined4 *)(lVar17 + 0x10) = uVar13;
      goto LAB_10969b354;
    }
    plVar10 = (long *)0x113735b80;
    pppuVar6 = pppuVar5;
  }
  else {
    func_0x000107c2ace8(&ppuStack_70);
    if (*(char *)(lStack_68 + 0x1f) < '\0') {
      *(undefined8 *)(lStack_68 + 0x10) = 8;
      puVar4 = *(undefined8 **)(lStack_68 + 8);
    }
    else {
      puVar4 = (undefined8 *)(lStack_68 + 8);
      *(undefined1 *)(lStack_68 + 0x1f) = 8;
    }
    *puVar4 = 0x2a74756f6474732a;
    *(undefined1 *)(puVar4 + 1) = 0;
    lVar17 = param_2;
    iVar11 = (int)&ppuStack_70;
    FUN_109697c4c();
    ppuStack_70 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4();
    if ((int)lVar17 == 0) {
      plVar10 = (long *)0x113735b90;
      pppuVar6 = pppuVar7;
    }
    else {
      func_0x000107c2ace8(&ppuStack_70);
      if (*(char *)(lStack_68 + 0x1f) < '\0') {
        *(undefined8 *)(lStack_68 + 0x10) = 8;
        puVar4 = *(undefined8 **)(lStack_68 + 8);
      }
      else {
        puVar4 = (undefined8 *)(lStack_68 + 8);
        *(undefined1 *)(lStack_68 + 0x1f) = 8;
      }
      *puVar4 = 0x2a7272656474732a;
      *(undefined1 *)(puVar4 + 1) = 0;
      lVar17 = param_2;
      iVar11 = (int)&ppuStack_70;
      FUN_109697c4c();
      ppuStack_70 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4();
      if ((int)lVar17 != 0) {
        if (param_4 != 0) {
          lVar18 = *(long *)(param_2 + 8);
          lVar17 = (long)*(char *)(lVar18 + 0x1f);
          if (lVar17 < 0) {
            lVar9 = *(long *)(lVar18 + 8);
            lVar17 = *(long *)(lVar18 + 0x10);
          }
          else {
            lVar9 = lVar18 + 8;
          }
          FUN_109697bec(&ppuStack_70,lVar9,lVar17,&UNK_10f57c133,7);
          lVar17 = param_1[1];
          lVar18 = *(long *)(lVar17 + 0x20);
          *(long *)(lVar17 + 0x20) = lStack_68;
          *(undefined ***)(lVar17 + 0x18) = ppuStack_70;
          ppuStack_70 = &PTR_FUN_110b01d60;
          lStack_68 = lVar18;
          func_0x000107c2acd4(&ppuStack_70);
          plVar10 = (long *)(*(long *)(param_2 + 8) + 8);
          if (*(char *)(*(long *)(param_2 + 8) + 0x1f) < '\0') {
            plVar10 = (long *)*plVar10;
          }
          plVar12 = (long *)(*(long *)(param_1[1] + 0x20) + 8);
          if (*(char *)(*(long *)(param_1[1] + 0x20) + 0x1f) < '\0') {
            plVar12 = (long *)*plVar12;
          }
          iVar11 = (int)plVar12;
          _rename(plVar10);
        }
        FUN_10969bb24(&ppuStack_70,param_2);
        FUN_10969ae78();
        ppuStack_70 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4();
        if (iVar3 == 0) goto LAB_10969b354;
        pppuVar6 = (undefined ***)(*(long *)(param_2 + 8) + 8);
        if (*(char *)(*(long *)(param_2 + 8) + 0x1f) < '\0') {
          pppuVar6 = (undefined ***)*pppuVar6;
        }
        iVar11 = 0xf5173d2;
        _fopen();
        uVar13 = 6;
        goto LAB_10969b348;
      }
      plVar10 = (long *)0x113735ba0;
      pppuVar6 = pppuVar8;
    }
  }
  lVar18 = *plVar10;
  lVar17 = param_1[1];
  uVar15 = *(undefined8 *)(lVar18 + 8);
  *(undefined4 *)(lVar17 + 0x10) = *(undefined4 *)(lVar18 + 0x10);
  *(undefined8 *)(lVar17 + 8) = uVar15;
  if (*(long *)(lVar17 + 0x20) != *(long *)(lVar18 + 0x20)) {
    pppuVar6 = (undefined ***)(lVar17 + 0x18);
    func_0x000107c2acd4();
    uVar15 = *(undefined8 *)(lVar18 + 0x18);
    *(undefined8 *)(lVar17 + 0x20) = *(undefined8 *)(lVar18 + 0x20);
    *(undefined8 *)(lVar17 + 0x18) = uVar15;
    if (*(long *)(lVar17 + 0x20) != 0) {
      piVar16 = (int *)(*(long *)(lVar17 + 0x20) + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar2) {
          *piVar16 = *piVar16 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
LAB_10969b354:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  if (iVar11 != 0) {
    func_0x000104bd46a0();
    FUN_109696618(param_1);
  }
  __Unwind_Resume();
  if (*(long *)((long)pppuVar6[1] + 8) == 0) {
    return (undefined8 *)0x0;
  }
  return (undefined8 *)(ulong)(*(byte *)((long)pppuVar6[1] + 0x10) & 1);
}



/* Entry: 10969b3e4; end: 10969b43b;  */

byte FUN_10969b3e4(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 8) + 8) != 0) {
    return *(byte *)(*(long *)(param_1 + 8) + 0x10) & 1;
  }
  return 0;
}



/* Entry: 10969b43c; end: 10969b4d3;  */

void FUN_10969b43c(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  
  plVar3 = (long *)*param_1;
  if ((plVar3 != (long *)0x0) && ((*(byte *)(param_1 + 1) >> 2 & 1) != 0)) {
    _fclose();
    lVar4 = param_1[3];
    if (lVar4 != 0) {
      plVar3 = (long *)(lVar4 + 8);
      if (*(char *)(lVar4 + 0x1f) < '\0') {
        plVar3 = (long *)*plVar3;
      }
      _remove();
    }
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    func_0x000107c2acdc();
    if (param_1[3] != plVar3[1]) {
      func_0x000107c2acd4(param_1 + 2);
      lVar4 = *plVar3;
      param_1[3] = plVar3[1];
      param_1[2] = lVar4;
      if (param_1[3] != 0) {
        piVar5 = (int *)(param_1[3] + -8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = *piVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
  }
  return;
}



/* Entry: 10969b4d4; end: 10969b50b;  */

void FUN_10969b4d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fread_11034c308)
            (param_2,param_3,param_4,*(undefined8 *)(*(long *)(param_1 + 8) + 8));
  return;
}



/* Entry: 10969b50c; end: 10969b53f;  */

void FUN_10969b50c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10969b540; end: 10969b58f;  */

long FUN_10969b540(long param_1)

{
  FUN_10969b590(param_1 + 8);
  return param_1;
}


