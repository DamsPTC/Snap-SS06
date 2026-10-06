/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109d78d88; end: 109d78e17;  */

void FUN_109d78d88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_1;
  uStack_50 = param_2;
  func_0x000109d74504(param_1,&uStack_50,param_3,param_4,*param_5);
  uStack_48 = uStack_50;
  uVar2 = param_1;
  FUN_109d78e18(param_1,&uStack_48,uVar1,param_4,*param_6);
  func_0x000109d78ef8(param_1,uStack_48,uVar2,param_4,param_7,param_8);
  return;
}



/* Entry: 109d78e18; end: 109d78f6f;  */

undefined4 *
FUN_109d78e18(undefined4 *param_1,long *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 param_5)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_34;
  
  puVar3 = param_3 + 1;
  if (param_4 < puVar3) {
    lVar4 = (long)param_4 - (long)param_3;
    uStack_34 = param_5;
    _memcpy(param_3,&uStack_34,lVar4);
    if (*param_2 == 0) {
      FUN_109d35128(&uStack_70,param_1,*(undefined8 *)(param_1 + 0x1e));
      *(undefined8 *)(param_1 + 0x12) = uStack_68;
      *(undefined8 *)(param_1 + 0x10) = uStack_70;
      *(undefined8 *)(param_1 + 0x16) = uStack_58;
      *(undefined8 *)(param_1 + 0x14) = uStack_60;
      *(undefined8 *)(param_1 + 0x1a) = uStack_48;
      *(undefined8 *)(param_1 + 0x18) = uStack_50;
      *(undefined8 *)(param_1 + 0x1c) = uStack_40;
      lVar2 = 0x40;
    }
    else {
      FUN_109d351b0(param_1 + 0x10,param_1);
      lVar2 = *param_2 + 0x40;
    }
    *param_2 = lVar2;
    puVar1 = (undefined4 *)((long)param_1 + (4 - lVar4));
    puVar3 = param_1;
    if (puVar1 <= param_4) {
      _memcpy(param_1,(long)&uStack_34 + lVar4);
      puVar3 = puVar1;
    }
  }
  else {
    *param_3 = param_5;
  }
  return puVar3;
}



/* Entry: 109d78f70; end: 109d79007;  */

bool FUN_109d78f70(ulong *param_1,long param_2)

{
  char cVar1;
  ulong *puVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_2 + -0x10);
  if (((uint)uVar3 >> 1 & 1) == 0) {
    puVar2 = (ulong *)(param_2 + -0x10) + -(uVar3 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  if ((*param_1 == *puVar2) && (param_1[1] == puVar2[1])) {
    cVar1 = (char)param_1[4];
    if (cVar1 == *(char *)(param_2 + 0x20) && cVar1 != '\0') {
      if (((int)param_1[2] == *(int *)(param_2 + 0x10)) &&
         (param_1[3] == *(ulong *)(param_2 + 0x18))) goto LAB_109d78ff4;
    }
    else if (cVar1 == *(char *)(param_2 + 0x20)) {
LAB_109d78ff4:
      return param_1[5] == *(ulong *)(param_2 + 0x28);
    }
  }
  return false;
}



/* Entry: 109d79008; end: 109d79157;  */

void FUN_109d79008(ulong *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  func_0x000109d79088(param_2,param_3,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d791b8(param_2,param_3,param_3);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d79158; end: 109d791b7;  */

void FUN_109d79158(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = (ulong *)(param_2 + -0x10);
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  *param_1 = *puVar2;
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar1 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar1 = *(ulong **)(param_2 + -0x20);
  }
  param_1[1] = puVar1[1];
  uVar4 = *(ulong *)(param_2 + 0x18);
  uVar3 = *(ulong *)(param_2 + 0x10);
  param_1[4] = *(ulong *)(param_2 + 0x20);
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = *(ulong *)(param_2 + 0x28);
  return;
}



/* Entry: 109d791b8; end: 109d7925f;  */

long * FUN_109d791b8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d79204;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d79260(param_1,uVar1);
  func_0x000109d79088(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d79204:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d79260; end: 109d793b7;  */

void FUN_109d79260(long *param_1,int param_2)

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
  puVar3 = (undefined8 *)((ulong)uVar4 << 3);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109d79318(param_1,lVar5,lVar5 + (ulong)uVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d793b8; end: 109d794a7;  */

undefined8 FUN_109d793b8(long *param_1,ulong param_2,long *param_3)

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
    uVar4 = param_2;
    FUN_109d79514();
    uVar2 = (int)lVar3 - 1;
    uVar10 = (uint)uVar4 & uVar2;
    plVar8 = (long *)(lVar9 + (ulong)uVar10 * 8);
    uVar4 = param_2;
    FUN_109d794a8(param_2,*plVar8);
    if ((uVar4 & 1) == 0) {
      plVar6 = (long *)0x0;
      iVar7 = 1;
      do {
        if (*plVar8 == -0x1000) {
          uVar5 = 0;
          if (plVar6 != (long *)0x0) {
            plVar8 = plVar6;
          }
          goto LAB_109d79418;
        }
        plVar1 = plVar8;
        if (*plVar8 != -0x2000 || plVar6 != (long *)0x0) {
          plVar1 = plVar6;
        }
        uVar10 = uVar10 + iVar7 & uVar2;
        plVar8 = (long *)(lVar9 + (ulong)uVar10 * 8);
        uVar4 = param_2;
        FUN_109d794a8(param_2,*plVar8);
        plVar6 = plVar1;
        iVar7 = iVar7 + 1;
      } while ((int)uVar4 == 0);
    }
    uVar5 = 1;
  }
LAB_109d79418:
  *param_3 = (long)plVar8;
  return uVar5;
}



/* Entry: 109d794a8; end: 109d79513;  */

bool FUN_109d794a8(ulong *param_1,char *param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong *puVar3;
  char *pcVar4;
  ulong *puVar5;
  ulong uVar6;
  
  if (((ulong)param_2 | 0x1000) == 0xfffffffffffff000) {
    return false;
  }
  uVar1 = (ulong)(*(uint *)((long)param_1 + 0x4c) >> 3 & 1);
  func_0x000109d79970(uVar1,*param_1,param_1[2],param_1[0xb],param_2);
  if ((uVar1 & 1) != 0) {
    return true;
  }
  puVar3 = (ulong *)(param_2 + -0x10);
  uVar1 = *puVar3;
  uVar2 = (uint)uVar1;
  if ((uVar2 >> 1 & 1) == 0) {
    puVar5 = puVar3 + -(uVar1 >> 2 & 0xf);
  }
  else {
    puVar5 = *(ulong **)(param_2 + -0x20);
  }
  if (*param_1 != puVar5[1]) {
    return false;
  }
  if (param_1[1] != puVar5[2]) {
    return false;
  }
  if (param_1[2] != puVar5[3]) {
    return false;
  }
  pcVar4 = param_2;
  if (*param_2 != '\x0f') {
    if ((uVar2 >> 1 & 1) == 0) {
      puVar5 = puVar3 + -(uVar1 >> 2 & 0xf);
    }
    else {
      puVar5 = *(ulong **)(param_2 + -0x20);
    }
    pcVar4 = (char *)*puVar5;
  }
  if ((char *)param_1[3] != pcVar4) {
    return false;
  }
  if ((int)param_1[4] != *(int *)(param_2 + 0x10)) {
    return false;
  }
  if ((uVar2 >> 1 & 1) == 0) {
    puVar5 = puVar3 + -(uVar1 >> 2 & 0xf);
  }
  else {
    puVar5 = *(ulong **)(param_2 + -0x20);
  }
  if (param_1[5] != puVar5[4]) {
    return false;
  }
  if ((int)param_1[6] != *(int *)(param_2 + 0x14)) {
    return false;
  }
  if ((uVar2 >> 1 & 1) == 0) {
    if (0x200 < (uVar1 & 0x3c0)) {
      puVar5 = puVar3 + -(uVar1 >> 2 & 0xf);
      goto LAB_109d797a0;
    }
LAB_109d797a8:
    uVar6 = 0;
  }
  else {
    if (*(uint *)(param_2 + -0x18) < 9) goto LAB_109d797a8;
    puVar5 = *(ulong **)(param_2 + -0x20);
LAB_109d797a0:
    uVar6 = puVar5[8];
  }
  if (param_1[7] != uVar6) {
    return false;
  }
  if ((int)param_1[8] != *(int *)(param_2 + 0x18)) {
    return false;
  }
  if (*(int *)((long)param_1 + 0x44) != *(int *)(param_2 + 0x1c)) {
    return false;
  }
  if ((int)param_1[9] != *(int *)(param_2 + 0x20)) {
    return false;
  }
  if (*(int *)((long)param_1 + 0x4c) != *(int *)(param_2 + 0x24)) {
    return false;
  }
  if ((uVar2 >> 1 & 1) == 0) {
    puVar3 = puVar3 + -(uVar1 >> 2 & 0xf);
    if (param_1[10] != puVar3[5]) {
      return false;
    }
    if ((uVar1 & 0x380) < 0x241) {
      if (param_1[0xb] != 0) {
        return false;
      }
    }
    else if (param_1[0xb] != puVar3[9]) {
      return false;
    }
    if (param_1[0xc] != puVar3[6]) {
      return false;
    }
    if (param_1[0xd] != puVar3[7]) {
      return false;
    }
    if ((uVar1 & 0x3c0) < 0x281) {
      if (param_1[0xe] != 0) {
        return false;
      }
    }
    else if (param_1[0xe] != puVar3[10]) {
      return false;
    }
    if ((~uVar2 & 0x300) == 0) {
      if (param_1[0xf] != puVar3[0xb]) {
        return false;
      }
    }
    else if (param_1[0xf] != 0) {
      return false;
    }
    uVar6 = param_1[0x10];
    if ((uVar1 & 0x3c0) < 0x301) {
LAB_109d7990c:
      uVar1 = 0;
      goto LAB_109d79964;
    }
LAB_109d79960:
    uVar1 = puVar3[0xc];
  }
  else {
    puVar3 = *(ulong **)(param_2 + -0x20);
    if (param_1[10] != puVar3[5]) {
      return false;
    }
    uVar2 = *(uint *)(param_2 + -0x18);
    if (uVar2 < 10) {
      if (param_1[0xb] != 0) {
        return false;
      }
    }
    else if (param_1[0xb] != puVar3[9]) {
      return false;
    }
    if (param_1[0xc] != puVar3[6]) {
      return false;
    }
    if (param_1[0xd] != puVar3[7]) {
      return false;
    }
    if (uVar2 < 0xb) {
      if (param_1[0xe] != 0) {
        return false;
      }
      uVar1 = param_1[0xf];
    }
    else {
      if (param_1[0xe] != puVar3[10]) {
        return false;
      }
      uVar1 = param_1[0xf];
      if (uVar2 != 0xb) {
        if (uVar1 != puVar3[0xb]) {
          return false;
        }
        uVar6 = param_1[0x10];
        if (uVar2 < 0xd) goto LAB_109d7990c;
        goto LAB_109d79960;
      }
    }
    if (uVar1 != 0) {
      return false;
    }
    uVar1 = 0;
    uVar6 = param_1[0x10];
  }
LAB_109d79964:
  return uVar6 == uVar1;
}



/* Entry: 109d79514; end: 109d7961b;  */

void FUN_109d79514(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *in_x6;
  undefined8 *in_x7;
  char *pcVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined8 uStack_108;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [56];
  undefined1 auStack_78 [64];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)((long)param_1 + 0x4c) >> 3 & 1) == 0) {
    if (((param_1[2] != 0) && (pcVar7 = (char *)*param_1, pcVar7 != (char *)0x0)) &&
       (*pcVar7 == '\r')) {
      uVar9 = *(ulong *)(pcVar7 + -0x10);
      if (((uint)uVar9 >> 1 & 1) == 0) {
        puVar8 = (ulong *)((long)(pcVar7 + -0x10) + -(uVar9 >> 2 & 0xf) * 8);
      }
      else {
        puVar8 = *(ulong **)(pcVar7 + -0x20);
      }
      if (puVar8[7] != 0) {
        FUN_109d2fb48(&uStack_b8);
        puVar1 = &uStack_b8;
        puVar5 = auStack_78;
        uVar4 = 0;
        func_0x000109d7735c(puVar1,0,&uStack_b8,puVar5);
        puVar6 = param_1;
        goto LAB_109d795ec;
      }
    }
  }
  FUN_109d2fb48(&uStack_b8);
  uStack_b8 = param_1[1];
  puVar1 = &uStack_b8;
  puVar5 = auStack_78;
  puVar6 = param_1 + 3;
  in_x6 = param_1 + 5;
  in_x7 = param_1 + 4;
  uVar4 = 0;
  FUN_109d7961c(puVar1,0,auStack_b0,puVar5,param_1,puVar6,in_x6,in_x7);
LAB_109d795ec:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  FUN_109d73d64();
  puVar3 = puVar1;
  uStack_108 = uVar4;
  FUN_109d73d64(puVar1,&uStack_108,puVar2,puVar5,*puVar6);
  FUN_109d77508(puVar1,uStack_108,puVar3,puVar5,in_x6,in_x7);
  return;
}



/* Entry: 109d7961c; end: 109d796ab;  */

void FUN_109d7961c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_1;
  uStack_50 = param_2;
  FUN_109d73d64(param_1,&uStack_50,param_3,param_4,*param_5);
  uStack_48 = uStack_50;
  uVar2 = param_1;
  FUN_109d73d64(param_1,&uStack_48,uVar1,param_4,*param_6);
  FUN_109d77508(param_1,uStack_48,uVar2,param_4,param_7,param_8);
  return;
}



/* Entry: 109d796ac; end: 109d79a9f;  */

bool FUN_109d796ac(ulong *param_1,char *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  char *pcVar4;
  ulong *puVar5;
  ulong uVar6;
  
  puVar3 = (ulong *)(param_2 + -0x10);
  uVar2 = *puVar3;
  uVar1 = (uint)uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar5 = puVar3 + -(uVar2 >> 2 & 0xf);
  }
  else {
    puVar5 = *(ulong **)(param_2 + -0x20);
  }
  if (*param_1 != puVar5[1]) {
    return false;
  }
  if (param_1[1] != puVar5[2]) {
    return false;
  }
  if (param_1[2] != puVar5[3]) {
    return false;
  }
  pcVar4 = param_2;
  if (*param_2 != '\x0f') {
    if ((uVar1 >> 1 & 1) == 0) {
      puVar5 = puVar3 + -(uVar2 >> 2 & 0xf);
    }
    else {
      puVar5 = *(ulong **)(param_2 + -0x20);
    }
    pcVar4 = (char *)*puVar5;
  }
  if ((char *)param_1[3] != pcVar4) {
    return false;
  }
  if ((int)param_1[4] != *(int *)(param_2 + 0x10)) {
    return false;
  }
  if ((uVar1 >> 1 & 1) == 0) {
    puVar5 = puVar3 + -(uVar2 >> 2 & 0xf);
  }
  else {
    puVar5 = *(ulong **)(param_2 + -0x20);
  }
  if (param_1[5] != puVar5[4]) {
    return false;
  }
  if ((int)param_1[6] != *(int *)(param_2 + 0x14)) {
    return false;
  }
  if ((uVar1 >> 1 & 1) == 0) {
    if (0x200 < (uVar2 & 0x3c0)) {
      puVar5 = puVar3 + -(uVar2 >> 2 & 0xf);
      goto LAB_109d797a0;
    }
LAB_109d797a8:
    uVar6 = 0;
  }
  else {
    if (*(uint *)(param_2 + -0x18) < 9) goto LAB_109d797a8;
    puVar5 = *(ulong **)(param_2 + -0x20);
LAB_109d797a0:
    uVar6 = puVar5[8];
  }
  if (param_1[7] != uVar6) {
    return false;
  }
  if ((int)param_1[8] != *(int *)(param_2 + 0x18)) {
    return false;
  }
  if (*(int *)((long)param_1 + 0x44) != *(int *)(param_2 + 0x1c)) {
    return false;
  }
  if ((int)param_1[9] != *(int *)(param_2 + 0x20)) {
    return false;
  }
  if (*(int *)((long)param_1 + 0x4c) != *(int *)(param_2 + 0x24)) {
    return false;
  }
  if ((uVar1 >> 1 & 1) == 0) {
    puVar3 = puVar3 + -(uVar2 >> 2 & 0xf);
    if (param_1[10] != puVar3[5]) {
      return false;
    }
    if ((uVar2 & 0x380) < 0x241) {
      if (param_1[0xb] != 0) {
        return false;
      }
    }
    else if (param_1[0xb] != puVar3[9]) {
      return false;
    }
    if (param_1[0xc] != puVar3[6]) {
      return false;
    }
    if (param_1[0xd] != puVar3[7]) {
      return false;
    }
    if ((uVar2 & 0x3c0) < 0x281) {
      if (param_1[0xe] != 0) {
        return false;
      }
    }
    else if (param_1[0xe] != puVar3[10]) {
      return false;
    }
    if ((~uVar1 & 0x300) == 0) {
      if (param_1[0xf] != puVar3[0xb]) {
        return false;
      }
    }
    else if (param_1[0xf] != 0) {
      return false;
    }
    uVar6 = param_1[0x10];
    if ((uVar2 & 0x3c0) < 0x301) {
LAB_109d7990c:
      uVar2 = 0;
      goto LAB_109d79964;
    }
LAB_109d79960:
    uVar2 = puVar3[0xc];
  }
  else {
    puVar3 = *(ulong **)(param_2 + -0x20);
    if (param_1[10] != puVar3[5]) {
      return false;
    }
    uVar1 = *(uint *)(param_2 + -0x18);
    if (uVar1 < 10) {
      if (param_1[0xb] != 0) {
        return false;
      }
    }
    else if (param_1[0xb] != puVar3[9]) {
      return false;
    }
    if (param_1[0xc] != puVar3[6]) {
      return false;
    }
    if (param_1[0xd] != puVar3[7]) {
      return false;
    }
    if (uVar1 < 0xb) {
      if (param_1[0xe] != 0) {
        return false;
      }
      uVar2 = param_1[0xf];
    }
    else {
      if (param_1[0xe] != puVar3[10]) {
        return false;
      }
      uVar2 = param_1[0xf];
      if (uVar1 != 0xb) {
        if (uVar2 != puVar3[0xb]) {
          return false;
        }
        uVar6 = param_1[0x10];
        if (uVar1 < 0xd) goto LAB_109d7990c;
        goto LAB_109d79960;
      }
    }
    if (uVar2 != 0) {
      return false;
    }
    uVar2 = 0;
    uVar6 = param_1[0x10];
  }
LAB_109d79964:
  return uVar6 == uVar2;
}



/* Entry: 109d79aa0; end: 109d79c3b;  */

void FUN_109d79aa0(ulong *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  func_0x000109d79b20(param_2,param_3,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d79eac(param_2,param_3,param_3);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d79c3c; end: 109d79eab;  */

void FUN_109d79c3c(ulong *param_1,char *param_2)

{
  ulong *puVar1;
  uint uVar2;
  char *pcVar3;
  ulong uVar4;
  ulong *puVar5;
  
  puVar1 = (ulong *)(param_2 + -0x10);
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar5 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar5 = *(ulong **)(param_2 + -0x20);
  }
  *param_1 = puVar5[1];
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar5 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar5 = *(ulong **)(param_2 + -0x20);
  }
  param_1[1] = puVar5[2];
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar5 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar5 = *(ulong **)(param_2 + -0x20);
  }
  param_1[2] = puVar5[3];
  pcVar3 = param_2;
  if (*param_2 != '\x0f') {
    if (((uint)*puVar1 >> 1 & 1) == 0) {
      puVar5 = puVar1 + -(*puVar1 >> 2 & 0xf);
    }
    else {
      puVar5 = *(ulong **)(param_2 + -0x20);
    }
    pcVar3 = (char *)*puVar5;
  }
  param_1[3] = (ulong)pcVar3;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x10);
  if (((uint)*(ulong *)(param_2 + -0x10) >> 1 & 1) == 0) {
    puVar5 = puVar1 + -(*(ulong *)(param_2 + -0x10) >> 2 & 0xf);
  }
  else {
    puVar5 = *(ulong **)(param_2 + -0x20);
  }
  param_1[5] = puVar5[4];
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(ulong *)(param_2 + -0x10);
  if (((uint)uVar4 >> 1 & 1) == 0) {
    if (0x200 < (uVar4 & 0x3c0)) {
      puVar5 = puVar1 + -(uVar4 >> 2 & 0xf);
      goto LAB_109d79d30;
    }
LAB_109d79d38:
    uVar4 = 0;
  }
  else {
    if (*(uint *)(param_2 + -0x18) < 9) goto LAB_109d79d38;
    puVar5 = *(ulong **)(param_2 + -0x20);
LAB_109d79d30:
    uVar4 = puVar5[8];
  }
  param_1[7] = uVar4;
  uVar4 = *(ulong *)(param_2 + 0x18);
  param_1[9] = *(ulong *)(param_2 + 0x20);
  param_1[8] = uVar4;
  if (((uint)*(ulong *)(param_2 + -0x10) >> 1 & 1) == 0) {
    puVar5 = puVar1 + -(*(ulong *)(param_2 + -0x10) >> 2 & 0xf);
  }
  else {
    puVar5 = *(ulong **)(param_2 + -0x20);
  }
  param_1[10] = puVar5[5];
  uVar4 = *puVar1;
  if (((uint)uVar4 >> 1 & 1) == 0) {
    if (0x240 < (uVar4 & 0x380)) {
      puVar5 = puVar1 + -(uVar4 >> 2 & 0xf);
      goto LAB_109d79d98;
    }
LAB_109d79da0:
    uVar4 = 0;
  }
  else {
    if (*(uint *)(param_2 + -0x18) < 10) goto LAB_109d79da0;
    puVar5 = *(ulong **)(param_2 + -0x20);
LAB_109d79d98:
    uVar4 = puVar5[9];
  }
  param_1[0xb] = uVar4;
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar5 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar5 = *(ulong **)(param_2 + -0x20);
  }
  param_1[0xc] = puVar5[6];
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar5 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar5 = *(ulong **)(param_2 + -0x20);
  }
  param_1[0xd] = puVar5[7];
  uVar4 = *puVar1;
  if (((uint)uVar4 >> 1 & 1) == 0) {
    if (0x280 < (uVar4 & 0x3c0)) {
      puVar5 = puVar1 + -(uVar4 >> 2 & 0xf);
      goto LAB_109d79e18;
    }
LAB_109d79e20:
    uVar4 = 0;
  }
  else {
    if (*(uint *)(param_2 + -0x18) < 0xb) goto LAB_109d79e20;
    puVar5 = *(ulong **)(param_2 + -0x20);
LAB_109d79e18:
    uVar4 = puVar5[10];
  }
  param_1[0xe] = uVar4;
  uVar2 = (uint)*puVar1;
  if ((uVar2 >> 1 & 1) == 0) {
    if ((~uVar2 & 0x300) == 0) {
      puVar5 = puVar1 + -(*puVar1 >> 2 & 0xf);
      goto LAB_109d79e58;
    }
LAB_109d79e60:
    uVar4 = 0;
  }
  else {
    if (*(uint *)(param_2 + -0x18) < 0xc) goto LAB_109d79e60;
    puVar5 = *(ulong **)(param_2 + -0x20);
LAB_109d79e58:
    uVar4 = puVar5[0xb];
  }
  param_1[0xf] = uVar4;
  uVar4 = *puVar1;
  if (((uint)uVar4 >> 1 & 1) == 0) {
    if ((uVar4 & 0x3c0) < 0x301) {
LAB_109d79ea0:
      uVar4 = 0;
      goto LAB_109d79ea4;
    }
    puVar1 = puVar1 + -(uVar4 >> 2 & 0xf);
  }
  else {
    if (*(uint *)(param_2 + -0x18) < 0xd) goto LAB_109d79ea0;
    puVar1 = *(ulong **)(param_2 + -0x20);
  }
  uVar4 = puVar1[0xc];
LAB_109d79ea4:
  param_1[0x10] = uVar4;
  return;
}



/* Entry: 109d79eac; end: 109d79f53;  */

long * FUN_109d79eac(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d79ef8;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d79f54(param_1,uVar1);
  func_0x000109d79b20(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d79ef8:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d79f54; end: 109d7a0ab;  */

void FUN_109d79f54(long *param_1,int param_2)

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
  puVar3 = (undefined8 *)((ulong)uVar4 << 3);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109d7a00c(param_1,lVar5,lVar5 + (ulong)uVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d7a0ac; end: 109d7a17f;  */

undefined8 FUN_109d7a0ac(long *param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  
  lVar2 = param_1[2];
  if ((int)lVar2 == 0) {
    uVar3 = 0;
    puVar7 = (ulong *)0x0;
  }
  else {
    lVar5 = *param_1;
    uVar4 = param_2;
    FUN_109d7a180();
    iVar8 = 1;
    puVar6 = (ulong *)0x0;
    while( true ) {
      uVar1 = (uint)uVar4 & (int)lVar2 - 1U;
      puVar7 = (ulong *)(lVar5 + (ulong)uVar1 * 8);
      uVar4 = *puVar7;
      if ((uVar4 | 0x1000) != 0xfffffffffffff000) {
        uVar4 = param_2;
        FUN_109d7a290();
        if ((uVar4 & 1) != 0) {
          uVar3 = 1;
          goto LAB_109d7a160;
        }
        uVar4 = *puVar7;
      }
      if (uVar4 == 0xfffffffffffff000) break;
      if (puVar6 != (ulong *)0x0 || uVar4 != 0xffffffffffffe000) {
        puVar7 = puVar6;
      }
      uVar4 = (ulong)(uVar1 + iVar8);
      iVar8 = iVar8 + 1;
      puVar6 = puVar7;
    }
    uVar3 = 0;
    if (puVar6 != (ulong *)0x0) {
      puVar7 = puVar6;
    }
  }
LAB_109d7a160:
  *param_3 = (long)puVar7;
  return uVar3;
}



/* Entry: 109d7a180; end: 109d7a1ff;  */

void FUN_109d7a180(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_f8;
  undefined1 auStack_a8 [64];
  undefined1 auStack_68 [64];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109d2fb48(auStack_a8);
  puVar1 = auStack_a8;
  puVar5 = auStack_68;
  puVar6 = (undefined8 *)(param_1 + 8);
  lVar7 = param_1 + 0x10;
  lVar8 = param_1 + 0x14;
  uVar4 = 0;
  FUN_109d7a200(puVar1,0,auStack_a8,puVar5,param_1,puVar6,lVar7,lVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  FUN_109d73d64();
  puVar3 = puVar1;
  uStack_f8 = uVar4;
  FUN_109d73d64(puVar1,&uStack_f8,puVar2,puVar5,*puVar6);
  func_0x000109d76634(puVar1,uStack_f8,puVar3,puVar5,lVar7,lVar8);
  return;
}



/* Entry: 109d7a200; end: 109d7a28f;  */

void FUN_109d7a200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_1;
  uStack_50 = param_2;
  FUN_109d73d64(param_1,&uStack_50,param_3,param_4,*param_5);
  uStack_48 = uStack_50;
  uVar2 = param_1;
  FUN_109d73d64(param_1,&uStack_48,uVar1,param_4,*param_6);
  func_0x000109d76634(param_1,uStack_48,uVar2,param_4,param_7,param_8);
  return;
}



/* Entry: 109d7a290; end: 109d7a31b;  */

bool FUN_109d7a290(ulong *param_1,char *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  char *pcVar4;
  
  puVar1 = (ulong *)(param_2 + -0x10);
  uVar2 = *puVar1;
  if (((uint)uVar2 >> 1 & 1) == 0) {
    puVar3 = puVar1 + -(uVar2 >> 2 & 0xf);
  }
  else {
    puVar3 = *(ulong **)(param_2 + -0x20);
  }
  if (*param_1 == puVar3[1]) {
    pcVar4 = param_2;
    if (*param_2 != '\x0f') {
      if (((uint)uVar2 >> 1 & 1) == 0) {
        puVar1 = puVar1 + -(uVar2 >> 2 & 0xf);
      }
      else {
        puVar1 = *(ulong **)(param_2 + -0x20);
      }
      pcVar4 = (char *)*puVar1;
    }
    if (((char *)param_1[1] == pcVar4) && ((int)param_1[2] == *(int *)(param_2 + 0x10))) {
      return *(uint *)((long)param_1 + 0x14) == (uint)*(ushort *)(param_2 + 0x14);
    }
  }
  return false;
}



/* Entry: 109d7a31c; end: 109d7a46b;  */

void FUN_109d7a31c(ulong *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  func_0x000109d7a39c(param_2,param_3,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d7a4d0(param_2,param_3,param_3);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d7a46c; end: 109d7a4cf;  */

void FUN_109d7a46c(ulong *param_1,char *param_2)

{
  ushort uVar1;
  ulong *puVar2;
  ulong *puVar3;
  char *pcVar4;
  
  puVar2 = (ulong *)(param_2 + -0x10);
  if (((uint)*puVar2 >> 1 & 1) == 0) {
    puVar3 = puVar2 + -(*puVar2 >> 2 & 0xf);
  }
  else {
    puVar3 = *(ulong **)(param_2 + -0x20);
  }
  *param_1 = puVar3[1];
  pcVar4 = param_2;
  if (*param_2 != '\x0f') {
    if (((uint)*puVar2 >> 1 & 1) == 0) {
      puVar2 = puVar2 + -(*puVar2 >> 2 & 0xf);
    }
    else {
      puVar2 = *(ulong **)(param_2 + -0x20);
    }
    pcVar4 = (char *)*puVar2;
  }
  param_1[1] = (ulong)pcVar4;
  uVar1 = *(ushort *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(uint *)((long)param_1 + 0x14) = (uint)uVar1;
  return;
}



/* Entry: 109d7a4d0; end: 109d7a577;  */

long * FUN_109d7a4d0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d7a51c;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d7a578(param_1,uVar1);
  func_0x000109d7a39c(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d7a51c:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d7a578; end: 109d7a6cf;  */

void FUN_109d7a578(long *param_1,int param_2)

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
  puVar3 = (undefined8 *)((ulong)uVar4 << 3);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109d7a630(param_1,lVar5,lVar5 + (ulong)uVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d7a6d0; end: 109d7a7a3;  */

undefined8 FUN_109d7a6d0(long *param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  
  lVar2 = param_1[2];
  if ((int)lVar2 == 0) {
    uVar3 = 0;
    puVar7 = (ulong *)0x0;
  }
  else {
    lVar5 = *param_1;
    uVar4 = param_2;
    FUN_109d7a7a4();
    iVar8 = 1;
    puVar6 = (ulong *)0x0;
    while( true ) {
      uVar1 = (uint)uVar4 & (int)lVar2 - 1U;
      puVar7 = (ulong *)(lVar5 + (ulong)uVar1 * 8);
      uVar4 = *puVar7;
      if ((uVar4 | 0x1000) != 0xfffffffffffff000) {
        uVar4 = param_2;
        FUN_109d7a824();
        if ((uVar4 & 1) != 0) {
          uVar3 = 1;
          goto LAB_109d7a784;
        }
        uVar4 = *puVar7;
      }
      if (uVar4 == 0xfffffffffffff000) break;
      if (puVar6 != (ulong *)0x0 || uVar4 != 0xffffffffffffe000) {
        puVar7 = puVar6;
      }
      uVar4 = (ulong)(uVar1 + iVar8);
      iVar8 = iVar8 + 1;
      puVar6 = puVar7;
    }
    uVar3 = 0;
    if (puVar6 != (ulong *)0x0) {
      puVar7 = puVar6;
    }
  }
LAB_109d7a784:
  *param_3 = (long)puVar7;
  return uVar3;
}



/* Entry: 109d7a7a4; end: 109d7a823;  */

ulong * FUN_109d7a7a4(ulong *param_1)

{
  ulong *puVar1;
  char *pcVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  char *pcVar6;
  ulong uStack_a8;
  undefined1 auStack_a0 [56];
  undefined1 auStack_68 [64];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109d2fb48(&uStack_a8);
  uStack_a8 = *param_1;
  puVar1 = &uStack_a8;
  pcVar2 = (char *)0x0;
  FUN_109d77508(puVar1,0,auStack_a0,auStack_68,param_1 + 1,param_1 + 2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar3 = (ulong *)(pcVar2 + -0x10);
  uVar4 = *puVar3;
  if (((uint)uVar4 >> 1 & 1) == 0) {
    puVar5 = puVar3 + -(uVar4 >> 2 & 0xf);
  }
  else {
    puVar5 = *(ulong **)(pcVar2 + -0x20);
  }
  if (*puVar1 == puVar5[1]) {
    pcVar6 = pcVar2;
    if (*pcVar2 != '\x0f') {
      if (((uint)uVar4 >> 1 & 1) == 0) {
        puVar3 = puVar3 + -(uVar4 >> 2 & 0xf);
      }
      else {
        puVar3 = *(ulong **)(pcVar2 + -0x20);
      }
      pcVar6 = (char *)*puVar3;
    }
    if ((char *)puVar1[1] == pcVar6) {
      return (ulong *)(ulong)((int)puVar1[2] == *(int *)(pcVar2 + 0x10));
    }
  }
  return (ulong *)0x0;
}



/* Entry: 109d7a824; end: 109d7a89f;  */

bool FUN_109d7a824(ulong *param_1,char *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  char *pcVar4;
  
  puVar1 = (ulong *)(param_2 + -0x10);
  uVar2 = *puVar1;
  if (((uint)uVar2 >> 1 & 1) == 0) {
    puVar3 = puVar1 + -(uVar2 >> 2 & 0xf);
  }
  else {
    puVar3 = *(ulong **)(param_2 + -0x20);
  }
  if (*param_1 == puVar3[1]) {
    pcVar4 = param_2;
    if (*param_2 != '\x0f') {
      if (((uint)uVar2 >> 1 & 1) == 0) {
        puVar1 = puVar1 + -(uVar2 >> 2 & 0xf);
      }
      else {
        puVar1 = *(ulong **)(param_2 + -0x20);
      }
      pcVar4 = (char *)*puVar1;
    }
    if ((char *)param_1[1] == pcVar4) {
      return (int)param_1[2] == *(int *)(param_2 + 0x10);
    }
  }
  return false;
}



/* Entry: 109d7a8a0; end: 109d7a9ef;  */

void FUN_109d7a8a0(ulong *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  func_0x000109d7a920(param_2,param_3,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d7aa50(param_2,param_3,param_3);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d7a9f0; end: 109d7aa4f;  */

void FUN_109d7a9f0(ulong *param_1,char *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  char *pcVar3;
  
  puVar1 = (ulong *)(param_2 + -0x10);
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  *param_1 = puVar2[1];
  pcVar3 = param_2;
  if (*param_2 != '\x0f') {
    if (((uint)*puVar1 >> 1 & 1) == 0) {
      puVar1 = puVar1 + -(*puVar1 >> 2 & 0xf);
    }
    else {
      puVar1 = *(ulong **)(param_2 + -0x20);
    }
    pcVar3 = (char *)*puVar1;
  }
  param_1[1] = (ulong)pcVar3;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  return;
}



/* Entry: 109d7aa50; end: 109d7aaf7;  */

long * FUN_109d7aa50(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d7aa9c;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d7aaf8(param_1,uVar1);
  func_0x000109d7a920(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d7aa9c:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d7aaf8; end: 109d7ac4f;  */

void FUN_109d7aaf8(long *param_1,int param_2)

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
  puVar3 = (undefined8 *)((ulong)uVar4 << 3);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109d7abb0(param_1,lVar5,lVar5 + (ulong)uVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d7ac50; end: 109d7ad7b;  */

void FUN_109d7ac50(long *param_1,ulong param_2,long *param_3,undefined1 *param_4,undefined8 param_5,
                  undefined8 *param_6)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  uint uVar8;
  ulong *puVar9;
  int iVar10;
  ulong uStack_128;
  ulong *puStack_120;
  long lStack_118;
  ulong uStack_110;
  long *plStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined1 auStack_e8 [64];
  undefined1 auStack_a8 [64];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1[2];
  if ((int)lVar1 == 0) {
    puVar9 = (ulong *)0x0;
    uVar4 = 0;
    uVar7 = param_2;
  }
  else {
    unaff_x21 = *param_1;
    FUN_109d2fb48(auStack_e8);
    puVar2 = auStack_e8;
    param_4 = auStack_a8;
    param_6 = (undefined8 *)(param_2 + 8);
    FUN_109d7ad7c(puVar2,0,auStack_e8,param_4);
    uVar8 = (uint)puVar2;
    iVar10 = 1;
    unaff_x22 = (ulong *)0x0;
    while( true ) {
      uVar8 = (int)lVar1 - 1U & uVar8;
      puVar9 = (ulong *)(unaff_x21 + (ulong)uVar8 * 8);
      uVar7 = *puVar9;
      unaff_x20 = param_2;
      if ((uVar7 | 0x1000) != 0xfffffffffffff000) {
        uVar3 = param_2;
        FUN_109d7adf4();
        if ((uVar3 & 1) != 0) {
          uVar4 = 1;
          goto LAB_109d7ad3c;
        }
        uVar7 = *puVar9;
      }
      if (uVar7 == 0xfffffffffffff000) break;
      if (unaff_x22 != (ulong *)0x0 || uVar7 != 0xffffffffffffe000) {
        puVar9 = unaff_x22;
      }
      uVar8 = uVar8 + iVar10;
      iVar10 = iVar10 + 1;
      unaff_x22 = puVar9;
    }
    uVar4 = 0;
    if (unaff_x22 != (ulong *)0x0) {
      puVar9 = unaff_x22;
    }
    uVar7 = 0xfffffffffffff000;
  }
LAB_109d7ad3c:
  *param_3 = (long)puVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail(uVar4);
  pcStack_f8 = FUN_109d7ad7c;
  uVar5 = uVar4;
  puStack_120 = unaff_x22;
  lStack_118 = unaff_x21;
  uStack_110 = unaff_x20;
  plStack_108 = param_3;
  puStack_100 = &stack0xfffffffffffffff0;
  FUN_109d73d64();
  uVar6 = uVar4;
  uStack_128 = uVar7;
  func_0x000109d74504(uVar4,&uStack_128,uVar5,param_4,*param_6);
  func_0x000109d353f8(uVar4,uStack_128,uVar6,param_4);
  return;
}



/* Entry: 109d7ad7c; end: 109d7adf3;  */

void FUN_109d7ad7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  uStack_40 = param_2;
  FUN_109d73d64(param_1,&uStack_40,param_3,param_4,*param_5);
  uStack_38 = uStack_40;
  uVar2 = param_1;
  func_0x000109d74504(param_1,&uStack_38,uVar1,param_4,*param_6);
  func_0x000109d353f8(param_1,uStack_38,uVar2,param_4);
  return;
}



/* Entry: 109d7adf4; end: 109d7ae4f;  */

bool FUN_109d7adf4(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_2 + -0x10);
  if (((uint)uVar2 >> 1 & 1) == 0) {
    puVar1 = (ulong *)(param_2 + -0x10) + -(uVar2 >> 2 & 0xf);
  }
  else {
    puVar1 = *(ulong **)(param_2 + -0x20);
  }
  if ((*param_1 == puVar1[1]) && (param_1[1] == puVar1[2])) {
    return (byte)param_1[2] == (*(byte *)(param_2 + 0x10) & 1);
  }
  return false;
}



/* Entry: 109d7ae50; end: 109d7af8b;  */

void FUN_109d7ae50(ulong *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  func_0x000109d7aed0(param_2,param_3,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d7b064(param_2,param_3,param_3);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d7af8c; end: 109d7b00f;  */

void FUN_109d7af8c(undefined8 param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [16];
  ulong auStack_a8 [8];
  undefined1 auStack_68 [64];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109d7b010(auStack_c0,param_1);
  FUN_109d2fb48(auStack_a8);
  puVar1 = auStack_a8;
  lVar2 = 0;
  FUN_109d7ad7c(puVar1,0,auStack_a8,auStack_68,auStack_c0,auStack_b8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = (ulong *)(lVar2 + -0x10);
  if (((uint)*puVar3 >> 1 & 1) == 0) {
    puVar4 = puVar3 + -(*puVar3 >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(lVar2 + -0x20);
  }
  *puVar1 = puVar4[1];
  if (((uint)*puVar3 >> 1 & 1) == 0) {
    puVar3 = puVar3 + -(*puVar3 >> 2 & 0xf);
  }
  else {
    puVar3 = *(ulong **)(lVar2 + -0x20);
  }
  puVar1[1] = puVar3[2];
  *(byte *)(puVar1 + 2) = *(byte *)(lVar2 + 0x10) & 1;
  return;
}



/* Entry: 109d7b010; end: 109d7b063;  */

void FUN_109d7b010(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  
  puVar1 = (ulong *)(param_2 + -0x10);
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  *param_1 = puVar2[1];
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar1 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar1 = *(ulong **)(param_2 + -0x20);
  }
  param_1[1] = puVar1[2];
  *(byte *)(param_1 + 2) = *(byte *)(param_2 + 0x10) & 1;
  return;
}



/* Entry: 109d7b064; end: 109d7b10b;  */

long * FUN_109d7b064(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d7b0b0;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d7b10c(param_1,uVar1);
  func_0x000109d7aed0(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d7b0b0:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d7b10c; end: 109d7b263;  */

void FUN_109d7b10c(long *param_1,int param_2)

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
  puVar3 = (undefined8 *)((ulong)uVar4 << 3);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109d7b1c4(param_1,lVar5,lVar5 + (ulong)uVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d7b264; end: 109d7b337;  */

undefined8 FUN_109d7b264(long *param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  
  lVar2 = param_1[2];
  if ((int)lVar2 == 0) {
    uVar3 = 0;
    puVar7 = (ulong *)0x0;
  }
  else {
    lVar5 = *param_1;
    uVar4 = param_2;
    FUN_109d7b338();
    iVar8 = 1;
    puVar6 = (ulong *)0x0;
    while( true ) {
      uVar1 = (uint)uVar4 & (int)lVar2 - 1U;
      puVar7 = (ulong *)(lVar5 + (ulong)uVar1 * 8);
      uVar4 = *puVar7;
      if ((uVar4 | 0x1000) != 0xfffffffffffff000) {
        uVar4 = param_2;
        FUN_109d7b450();
        if ((uVar4 & 1) != 0) {
          uVar3 = 1;
          goto LAB_109d7b318;
        }
        uVar4 = *puVar7;
      }
      if (uVar4 == 0xfffffffffffff000) break;
      if (puVar6 != (ulong *)0x0 || uVar4 != 0xffffffffffffe000) {
        puVar7 = puVar6;
      }
      uVar4 = (ulong)(uVar1 + iVar8);
      iVar8 = iVar8 + 1;
      puVar6 = puVar7;
    }
    uVar3 = 0;
    if (puVar6 != (ulong *)0x0) {
      puVar7 = puVar6;
    }
  }
LAB_109d7b318:
  *param_3 = (long)puVar7;
  return uVar3;
}



/* Entry: 109d7b338; end: 109d7b3bf;  */

void FUN_109d7b338(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uStack_f8;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [56];
  undefined1 auStack_68 [64];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109d2fb48(&uStack_a8);
  puVar8 = param_1 + 4;
  uStack_a8 = *param_1;
  puVar1 = &uStack_a8;
  puVar5 = auStack_68;
  puVar6 = param_1 + 2;
  puVar7 = param_1 + 3;
  uVar4 = 0;
  FUN_109d7b3c0(puVar1,0,auStack_a0,puVar5,param_1 + 1,puVar6,puVar7,puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  FUN_109d73d64();
  puVar3 = puVar1;
  uStack_f8 = uVar4;
  func_0x000109d74504(puVar1,&uStack_f8,puVar2,puVar5,*puVar6);
  FUN_109d77508(puVar1,uStack_f8,puVar3,puVar5,puVar7,puVar8);
  return;
}



/* Entry: 109d7b3c0; end: 109d7b44f;  */

void FUN_109d7b3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_1;
  uStack_50 = param_2;
  FUN_109d73d64(param_1,&uStack_50,param_3,param_4,*param_5);
  uStack_48 = uStack_50;
  uVar2 = param_1;
  func_0x000109d74504(param_1,&uStack_48,uVar1,param_4,*param_6);
  FUN_109d77508(param_1,uStack_48,uVar2,param_4,param_7,param_8);
  return;
}



/* Entry: 109d7b450; end: 109d7b4c7;  */

bool FUN_109d7b450(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_2 + -0x10);
  if (((uint)uVar2 >> 1 & 1) == 0) {
    puVar1 = (ulong *)(param_2 + -0x10) + -(uVar2 >> 2 & 0xf);
  }
  else {
    puVar1 = *(ulong **)(param_2 + -0x20);
  }
  if ((((*param_1 == *puVar1) && (param_1[1] == puVar1[1])) && (param_1[2] == puVar1[2])) &&
     (param_1[3] == puVar1[3])) {
    return (int)param_1[4] == *(int *)(param_2 + 0x10);
  }
  return false;
}



/* Entry: 109d7b4c8; end: 109d7b617;  */

void FUN_109d7b4c8(ulong *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  func_0x000109d7b548(param_2,param_3,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d7b6a8(param_2,param_3,param_3);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d7b618; end: 109d7b6a7;  */

void FUN_109d7b618(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  
  puVar1 = (ulong *)(param_2 + -0x10);
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  *param_1 = *puVar2;
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  param_1[1] = puVar2[1];
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  param_1[2] = puVar2[2];
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar1 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar1 = *(ulong **)(param_2 + -0x20);
  }
  param_1[3] = puVar1[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x10);
  return;
}



/* Entry: 109d7b6a8; end: 109d7b74f;  */

long * FUN_109d7b6a8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d7b6f4;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d7b750(param_1,uVar1);
  func_0x000109d7b548(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d7b6f4:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d7b750; end: 109d7b8a7;  */

void FUN_109d7b750(long *param_1,int param_2)

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
  puVar3 = (undefined8 *)((ulong)uVar4 << 3);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109d7b808(param_1,lVar5,lVar5 + (ulong)uVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d7b8a8; end: 109d7b97b;  */

undefined8 FUN_109d7b8a8(long *param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  
  lVar2 = param_1[2];
  if ((int)lVar2 == 0) {
    uVar3 = 0;
    puVar7 = (ulong *)0x0;
  }
  else {
    lVar5 = *param_1;
    uVar4 = param_2;
    FUN_109d7b97c();
    iVar8 = 1;
    puVar6 = (ulong *)0x0;
    while( true ) {
      uVar1 = (uint)uVar4 & (int)lVar2 - 1U;
      puVar7 = (ulong *)(lVar5 + (ulong)uVar1 * 8);
      uVar4 = *puVar7;
      if ((uVar4 | 0x1000) != 0xfffffffffffff000) {
        uVar4 = param_2;
        FUN_109d7ba8c();
        if ((uVar4 & 1) != 0) {
          uVar3 = 1;
          goto LAB_109d7b95c;
        }
        uVar4 = *puVar7;
      }
      if (uVar4 == 0xfffffffffffff000) break;
      if (puVar6 != (ulong *)0x0 || uVar4 != 0xffffffffffffe000) {
        puVar7 = puVar6;
      }
      uVar4 = (ulong)(uVar1 + iVar8);
      iVar8 = iVar8 + 1;
      puVar6 = puVar7;
    }
    uVar3 = 0;
    if (puVar6 != (ulong *)0x0) {
      puVar7 = puVar6;
    }
  }
LAB_109d7b95c:
  *param_3 = (long)puVar7;
  return uVar3;
}



/* Entry: 109d7b97c; end: 109d7b9fb;  */

void FUN_109d7b97c(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_f8;
  undefined1 auStack_a8 [64];
  undefined1 auStack_68 [64];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109d2fb48(auStack_a8);
  puVar1 = auStack_a8;
  puVar5 = auStack_68;
  puVar6 = (undefined8 *)(param_1 + 0x10);
  lVar7 = param_1 + 0x18;
  lVar8 = param_1 + 0x20;
  uVar4 = 0;
  FUN_109d7b9fc(puVar1,0,auStack_a8,puVar5,param_1 + 8,puVar6,lVar7,lVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  FUN_109d73d64();
  puVar3 = puVar1;
  uStack_f8 = uVar4;
  func_0x000109d74504(puVar1,&uStack_f8,puVar2,puVar5,*puVar6);
  func_0x000109d78ef8(puVar1,uStack_f8,puVar3,puVar5,lVar7,lVar8);
  return;
}



/* Entry: 109d7b9fc; end: 109d7ba8b;  */

void FUN_109d7b9fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_1;
  uStack_50 = param_2;
  FUN_109d73d64(param_1,&uStack_50,param_3,param_4,*param_5);
  uStack_48 = uStack_50;
  uVar2 = param_1;
  func_0x000109d74504(param_1,&uStack_48,uVar1,param_4,*param_6);
  func_0x000109d78ef8(param_1,uStack_48,uVar2,param_4,param_7,param_8);
  return;
}



/* Entry: 109d7ba8c; end: 109d7bb57;  */

bool FUN_109d7ba8c(undefined8 *param_1,char *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  char *pcVar4;
  
  puVar1 = (ulong *)(param_2 + -0x10);
  uVar2 = *puVar1;
  if (((uint)uVar2 >> 1 & 1) == 0) {
    puVar3 = puVar1 + -(uVar2 >> 2 & 0xf);
  }
  else {
    puVar3 = *(ulong **)(param_2 + -0x20);
  }
  if ((((param_1[1] == puVar3[1]) && (param_1[2] == puVar3[2])) && (param_1[3] == puVar3[3])) &&
     ((param_1[4] == puVar3[4] && (param_1[5] == puVar3[5])))) {
    pcVar4 = param_2;
    if (*param_2 != '\x0f') {
      if (((uint)uVar2 >> 1 & 1) == 0) {
        puVar1 = puVar1 + -(uVar2 >> 2 & 0xf);
      }
      else {
        puVar1 = *(ulong **)(param_2 + -0x20);
      }
      pcVar4 = (char *)*puVar1;
    }
    if (((char *)*param_1 == pcVar4) && (*(int *)(param_1 + 6) == *(int *)(param_2 + 0x10))) {
      return *(char *)((long)param_1 + 0x34) == param_2[0x14];
    }
  }
  return false;
}



/* Entry: 109d7bb58; end: 109d7bca7;  */

void FUN_109d7bb58(ulong *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  func_0x000109d7bbd8(param_2,param_3,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d7bd94(param_2,param_3,param_3);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d7bca8; end: 109d7bd93;  */

void FUN_109d7bca8(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  
  pcVar1 = param_2;
  if (*param_2 != '\x0f') {
    uVar3 = *(ulong *)(param_2 + -0x10);
    if (((uint)uVar3 >> 1 & 1) == 0) {
      puVar2 = (ulong *)((long)(param_2 + -0x10) + -(uVar3 >> 2 & 0xf) * 8);
    }
    else {
      puVar2 = *(ulong **)(param_2 + -0x20);
    }
    pcVar1 = (char *)*puVar2;
  }
  *param_1 = pcVar1;
  puVar2 = (ulong *)(param_2 + -0x10);
  if (((uint)*puVar2 >> 1 & 1) == 0) {
    puVar4 = puVar2 + -(*puVar2 >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(param_2 + -0x20);
  }
  param_1[1] = puVar4[1];
  if (((uint)*puVar2 >> 1 & 1) == 0) {
    puVar4 = puVar2 + -(*puVar2 >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(param_2 + -0x20);
  }
  param_1[2] = puVar4[2];
  if (((uint)*puVar2 >> 1 & 1) == 0) {
    puVar4 = puVar2 + -(*puVar2 >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(param_2 + -0x20);
  }
  param_1[3] = puVar4[3];
  if (((uint)*puVar2 >> 1 & 1) == 0) {
    puVar4 = puVar2 + -(*puVar2 >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(param_2 + -0x20);
  }
  param_1[4] = puVar4[4];
  if (((uint)*puVar2 >> 1 & 1) == 0) {
    puVar2 = puVar2 + -(*puVar2 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  param_1[5] = puVar2[5];
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x10);
  *(char *)((long)param_1 + 0x34) = param_2[0x14];
  return;
}



/* Entry: 109d7bd94; end: 109d7be3b;  */

long * FUN_109d7bd94(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d7bde0;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d7be3c(param_1,uVar1);
  func_0x000109d7bbd8(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d7bde0:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d7be3c; end: 109d7bf93;  */

void FUN_109d7be3c(long *param_1,int param_2)

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
  puVar3 = (undefined8 *)((ulong)uVar4 << 3);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109d7bef4(param_1,lVar5,lVar5 + (ulong)uVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d7bf94; end: 109d7c067;  */

undefined8 FUN_109d7bf94(long *param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  
  lVar2 = param_1[2];
  if ((int)lVar2 == 0) {
    uVar3 = 0;
    puVar7 = (ulong *)0x0;
  }
  else {
    lVar5 = *param_1;
    uVar4 = param_2;
    FUN_109d7c068();
    iVar8 = 1;
    puVar6 = (ulong *)0x0;
    while( true ) {
      uVar1 = (uint)uVar4 & (int)lVar2 - 1U;
      puVar7 = (ulong *)(lVar5 + (ulong)uVar1 * 8);
      uVar4 = *puVar7;
      if ((uVar4 | 0x1000) != 0xfffffffffffff000) {
        uVar4 = param_2;
        FUN_109d7c0e8();
        if ((uVar4 & 1) != 0) {
          uVar3 = 1;
          goto LAB_109d7c048;
        }
        uVar4 = *puVar7;
      }
      if (uVar4 == 0xfffffffffffff000) break;
      if (puVar6 != (ulong *)0x0 || uVar4 != 0xffffffffffffe000) {
        puVar7 = puVar6;
      }
      uVar4 = (ulong)(uVar1 + iVar8);
      iVar8 = iVar8 + 1;
      puVar6 = puVar7;
    }
    uVar3 = 0;
    if (puVar6 != (ulong *)0x0) {
      puVar7 = puVar6;
    }
  }
LAB_109d7c048:
  *param_3 = (long)puVar7;
  return uVar3;
}



/* Entry: 109d7c068; end: 109d7c0e7;  */

ulong * FUN_109d7c068(ulong *param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uStack_a8;
  undefined1 auStack_a0 [56];
  undefined1 auStack_68 [64];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109d2fb48(&uStack_a8);
  uStack_a8 = *param_1;
  puVar1 = &uStack_a8;
  lVar2 = 0;
  func_0x000109d73e44(puVar1,0,auStack_a0,auStack_68,param_1 + 1,param_1 + 2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar1;
  }
  ___stack_chk_fail();
  uVar4 = *(ulong *)(lVar2 + -0x10);
  if (((uint)uVar4 >> 1 & 1) == 0) {
    puVar3 = (ulong *)(lVar2 + -0x10) + -(uVar4 >> 2 & 0xf);
  }
  else {
    puVar3 = *(ulong **)(lVar2 + -0x20);
  }
  if ((*puVar1 == *puVar3) && (puVar1[1] == puVar3[1])) {
    return (ulong *)(ulong)((char)puVar1[2] == *(char *)(lVar2 + 0x10));
  }
  return (ulong *)0x0;
}



/* Entry: 109d7c0e8; end: 109d7c13f;  */

bool FUN_109d7c0e8(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_2 + -0x10);
  if (((uint)uVar2 >> 1 & 1) == 0) {
    puVar1 = (ulong *)(param_2 + -0x10) + -(uVar2 >> 2 & 0xf);
  }
  else {
    puVar1 = *(ulong **)(param_2 + -0x20);
  }
  if ((*param_1 == *puVar1) && (param_1[1] == puVar1[1])) {
    return (char)param_1[2] == *(char *)(param_2 + 0x10);
  }
  return false;
}



/* Entry: 109d7c140; end: 109d7c28f;  */

void FUN_109d7c140(ulong *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  func_0x000109d7c1c0(param_2,param_3,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d7c2e0(param_2,param_3,param_3);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d7c290; end: 109d7c2df;  */

void FUN_109d7c290(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  
  puVar1 = (ulong *)(param_2 + -0x10);
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  *param_1 = *puVar2;
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar1 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar1 = *(ulong **)(param_2 + -0x20);
  }
  param_1[1] = puVar1[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 0x10);
  return;
}



/* Entry: 109d7c2e0; end: 109d7c387;  */

long * FUN_109d7c2e0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d7c32c;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d7c388(param_1,uVar1);
  func_0x000109d7c1c0(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d7c32c:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d7c388; end: 109d7c4df;  */

void FUN_109d7c388(long *param_1,int param_2)

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
  puVar3 = (undefined8 *)((ulong)uVar4 << 3);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109d7c440(param_1,lVar5,lVar5 + (ulong)uVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d7c4e0; end: 109d7c5b3;  */

undefined8 FUN_109d7c4e0(long *param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  
  lVar2 = param_1[2];
  if ((int)lVar2 == 0) {
    uVar3 = 0;
    puVar7 = (ulong *)0x0;
  }
  else {
    lVar5 = *param_1;
    uVar4 = param_2;
    FUN_109d7c5b4();
    iVar8 = 1;
    puVar6 = (ulong *)0x0;
    while( true ) {
      uVar1 = (uint)uVar4 & (int)lVar2 - 1U;
      puVar7 = (ulong *)(lVar5 + (ulong)uVar1 * 8);
      uVar4 = *puVar7;
      if ((uVar4 | 0x1000) != 0xfffffffffffff000) {
        uVar4 = param_2;
        FUN_109d7c744();
        if ((uVar4 & 1) != 0) {
          uVar3 = 1;
          goto LAB_109d7c594;
        }
        uVar4 = *puVar7;
      }
      if (uVar4 == 0xfffffffffffff000) break;
      if (puVar6 != (ulong *)0x0 || uVar4 != 0xffffffffffffe000) {
        puVar7 = puVar6;
      }
      uVar4 = (ulong)(uVar1 + iVar8);
      iVar8 = iVar8 + 1;
      puVar6 = puVar7;
    }
    uVar3 = 0;
    if (puVar6 != (ulong *)0x0) {
      puVar7 = puVar6;
    }
  }
LAB_109d7c594:
  *param_3 = (long)puVar7;
  return uVar3;
}



/* Entry: 109d7c5b4; end: 109d7c63b;  */

void FUN_109d7c5b4(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uStack_f8;
  undefined4 auStack_a8 [16];
  undefined1 auStack_68 [64];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109d2fb48(auStack_a8);
  puVar8 = param_1 + 8;
  auStack_a8[0] = *param_1;
  puVar1 = auStack_a8;
  puVar5 = auStack_68;
  puVar6 = (undefined8 *)(param_1 + 4);
  puVar7 = param_1 + 6;
  uVar4 = 0;
  FUN_109d7c63c(puVar1,0,(ulong)auStack_a8 | 4,puVar5,param_1 + 2,puVar6,puVar7,puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  func_0x000109d74504();
  puVar3 = puVar1;
  uStack_f8 = uVar4;
  FUN_109d73d64(puVar1,&uStack_f8,puVar2,puVar5,*puVar6);
  FUN_109d7c6cc(puVar1,uStack_f8,puVar3,puVar5,puVar7,puVar8);
  return;
}



/* Entry: 109d7c63c; end: 109d7c6cb;  */

void FUN_109d7c63c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_1;
  uStack_50 = param_2;
  func_0x000109d74504(param_1,&uStack_50,param_3,param_4,*param_5);
  uStack_48 = uStack_50;
  uVar2 = param_1;
  FUN_109d73d64(param_1,&uStack_48,uVar1,param_4,*param_6);
  FUN_109d7c6cc(param_1,uStack_48,uVar2,param_4,param_7,param_8);
  return;
}



/* Entry: 109d7c6cc; end: 109d7c743;  */

void FUN_109d7c6cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  uStack_40 = param_2;
  FUN_109d35048(param_1,&uStack_40,param_3,param_4,*param_5);
  uStack_38 = uStack_40;
  uVar2 = param_1;
  FUN_109d73d64(param_1,&uStack_38,uVar1,param_4,*param_6);
  func_0x000109d353f8(param_1,uStack_38,uVar2,param_4);
  return;
}



/* Entry: 109d7c744; end: 109d7c7cf;  */

bool FUN_109d7c744(uint *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  
  if (*param_1 == (uint)*(ushort *)(param_2 + 2)) {
    puVar1 = (ulong *)(param_2 + -0x10);
    uVar2 = *puVar1;
    if (((uint)uVar2 >> 1 & 1) == 0) {
      puVar3 = puVar1 + -(uVar2 >> 2 & 0xf);
    }
    else {
      puVar3 = *(ulong **)(param_2 + -0x20);
    }
    if (((*(ulong *)(param_1 + 2) == *puVar3) && (*(ulong *)(param_1 + 4) == puVar3[1])) &&
       ((char)param_1[6] == *(char *)(param_2 + 0x10))) {
      if (((uint)uVar2 >> 1 & 1) == 0) {
        puVar1 = puVar1 + -(uVar2 >> 2 & 0xf);
      }
      else {
        puVar1 = *(ulong **)(param_2 + -0x20);
      }
      return *(ulong *)(param_1 + 8) == puVar1[2];
    }
  }
  return false;
}



/* Entry: 109d7c7d0; end: 109d7c91f;  */

void FUN_109d7c7d0(ulong *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  func_0x000109d7c850(param_2,param_3,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d7c998(param_2,param_3,param_3);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d7c920; end: 109d7c997;  */

void FUN_109d7c920(uint *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  
  *param_1 = (uint)*(ushort *)(param_2 + 2);
  puVar1 = (ulong *)(param_2 + -0x10);
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 2) = *puVar2;
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 4) = puVar2[1];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x10);
  if (((uint)*(ulong *)(param_2 + -0x10) >> 1 & 1) == 0) {
    puVar1 = puVar1 + -(*(ulong *)(param_2 + -0x10) >> 2 & 0xf);
  }
  else {
    puVar1 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 8) = puVar1[2];
  return;
}



/* Entry: 109d7c998; end: 109d7ca3f;  */

long * FUN_109d7c998(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d7c9e4;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d7ca40(param_1,uVar1);
  func_0x000109d7c850(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d7c9e4:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d7ca40; end: 109d7cb97;  */

void FUN_109d7ca40(long *param_1,int param_2)

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
  puVar3 = (undefined8 *)((ulong)uVar4 << 3);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109d7caf8(param_1,lVar5,lVar5 + (ulong)uVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d7cb98; end: 109d7cea7;  */

undefined8 FUN_109d7cb98(long *param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  
  lVar2 = param_1[2];
  if ((int)lVar2 == 0) {
    uVar3 = 0;
    puVar7 = (ulong *)0x0;
  }
  else {
    lVar5 = *param_1;
    uVar4 = param_2;
    func_0x000109d7cc6c();
    iVar8 = 1;
    puVar6 = (ulong *)0x0;
    while( true ) {
      uVar1 = (uint)uVar4 & (int)lVar2 - 1U;
      puVar7 = (ulong *)(lVar5 + (ulong)uVar1 * 8);
      uVar4 = *puVar7;
      if ((uVar4 | 0x1000) != 0xfffffffffffff000) {
        uVar4 = param_2;
        FUN_109d7cfdc();
        if ((uVar4 & 1) != 0) {
          uVar3 = 1;
          goto LAB_109d7cc4c;
        }
        uVar4 = *puVar7;
      }
      if (uVar4 == 0xfffffffffffff000) break;
      if (puVar6 != (ulong *)0x0 || uVar4 != 0xffffffffffffe000) {
        puVar7 = puVar6;
      }
      uVar4 = (ulong)(uVar1 + iVar8);
      iVar8 = iVar8 + 1;
      puVar6 = puVar7;
    }
    uVar3 = 0;
    if (puVar6 != (ulong *)0x0) {
      puVar7 = puVar6;
    }
  }
LAB_109d7cc4c:
  *param_3 = (long)puVar7;
  return uVar3;
}



/* Entry: 109d7cea8; end: 109d7cf4b;  */

void FUN_109d7cea8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = param_1;
  uStack_60 = param_2;
  FUN_109d35318(param_1,&uStack_60,param_3,param_4,*param_5);
  uStack_58 = uStack_60;
  uVar2 = param_1;
  FUN_109d73d64(param_1,&uStack_58,uVar1,param_4,*param_6);
  FUN_109d7cf4c(param_1,uStack_58,uVar2,param_4,param_7,param_8,param_9,param_10);
  return;
}



/* Entry: 109d7cf4c; end: 109d7cfdb;  */

void FUN_109d7cf4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5,undefined1 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_1;
  uStack_50 = param_2;
  FUN_109d35048(param_1,&uStack_50,param_3,param_4,*param_5);
  uStack_48 = uStack_50;
  uVar2 = param_1;
  FUN_109d35048(param_1,&uStack_48,uVar1,param_4,*param_6);
  func_0x000109d74e64(param_1,uStack_48,uVar2,param_4,param_7,param_8);
  return;
}



/* Entry: 109d7cfdc; end: 109d7d0ff;  */

bool FUN_109d7cfdc(ulong *param_1,long param_2)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  puVar1 = (ulong *)(param_2 + -0x10);
  uVar3 = *puVar1;
  uVar2 = (uint)uVar3;
  if ((uVar2 >> 1 & 1) == 0) {
    puVar4 = puVar1 + -(uVar3 >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(param_2 + -0x20);
  }
  if ((((*param_1 == *puVar4) && (param_1[1] == puVar4[1])) && (param_1[2] == puVar4[5])) &&
     ((param_1[3] == puVar4[2] && ((int)param_1[4] == *(int *)(param_2 + 0x10))))) {
    if ((uVar2 >> 1 & 1) == 0) {
      puVar4 = puVar1 + -(uVar3 >> 2 & 0xf);
    }
    else {
      puVar4 = *(ulong **)(param_2 + -0x20);
    }
    if (((param_1[5] == puVar4[3]) && ((char)param_1[6] == *(char *)(param_2 + 0x18))) &&
       (*(char *)((long)param_1 + 0x31) == *(char *)(param_2 + 0x19))) {
      if ((uVar2 >> 1 & 1) == 0) {
        puVar4 = puVar1 + -(uVar3 >> 2 & 0xf);
      }
      else {
        puVar4 = *(ulong **)(param_2 + -0x20);
      }
      if (((param_1[7] == puVar4[6]) && (param_1[8] == puVar4[7])) &&
         ((int)param_1[9] == *(int *)(param_2 + 0x14))) {
        if ((uVar2 >> 1 & 1) == 0) {
          puVar1 = puVar1 + -(uVar3 >> 2 & 0xf);
        }
        else {
          puVar1 = *(ulong **)(param_2 + -0x20);
        }
        return param_1[10] == puVar1[8];
      }
    }
  }
  return false;
}



/* Entry: 109d7d100; end: 109d7d24f;  */

void FUN_109d7d100(ulong *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  func_0x000109d7d180(param_2,param_3,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d7d370(param_2,param_3,param_3);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d7d250; end: 109d7d36f;  */

void FUN_109d7d250(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  
  puVar1 = (ulong *)(param_2 + -0x10);
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  *param_1 = *puVar2;
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  param_1[1] = puVar2[1];
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  param_1[2] = puVar2[5];
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  param_1[3] = puVar2[2];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x10);
  if (((uint)*(ulong *)(param_2 + -0x10) >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*(ulong *)(param_2 + -0x10) >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  param_1[5] = puVar2[3];
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 0x18);
  if (((uint)*(ulong *)(param_2 + -0x10) >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*(ulong *)(param_2 + -0x10) >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  param_1[7] = puVar2[6];
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  param_1[8] = puVar2[7];
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x14);
  if (((uint)*(ulong *)(param_2 + -0x10) >> 1 & 1) == 0) {
    puVar1 = puVar1 + -(*(ulong *)(param_2 + -0x10) >> 2 & 0xf);
  }
  else {
    puVar1 = *(ulong **)(param_2 + -0x20);
  }
  param_1[10] = puVar1[8];
  return;
}



/* Entry: 109d7d370; end: 109d7d417;  */

long * FUN_109d7d370(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d7d3bc;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d7d418(param_1,uVar1);
  func_0x000109d7d180(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d7d3bc:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d7d418; end: 109d7d56f;  */

void FUN_109d7d418(long *param_1,int param_2)

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
  puVar3 = (undefined8 *)((ulong)uVar4 << 3);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109d7d4d0(param_1,lVar5,lVar5 + (ulong)uVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d7d570; end: 109d7d643;  */

undefined8 FUN_109d7d570(long *param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  
  lVar2 = param_1[2];
  if ((int)lVar2 == 0) {
    uVar3 = 0;
    puVar7 = (ulong *)0x0;
  }
  else {
    lVar5 = *param_1;
    uVar4 = param_2;
    FUN_109d7d644();
    iVar8 = 1;
    puVar6 = (ulong *)0x0;
    while( true ) {
      uVar1 = (uint)uVar4 & (int)lVar2 - 1U;
      puVar7 = (ulong *)(lVar5 + (ulong)uVar1 * 8);
      uVar4 = *puVar7;
      if ((uVar4 | 0x1000) != 0xfffffffffffff000) {
        uVar4 = param_2;
        FUN_109d7d94c();
        if ((uVar4 & 1) != 0) {
          uVar3 = 1;
          goto LAB_109d7d624;
        }
        uVar4 = *puVar7;
      }
      if (uVar4 == 0xfffffffffffff000) break;
      if (puVar6 != (ulong *)0x0 || uVar4 != 0xffffffffffffe000) {
        puVar7 = puVar6;
      }
      uVar4 = (ulong)(uVar1 + iVar8);
      iVar8 = iVar8 + 1;
      puVar6 = puVar7;
    }
    uVar3 = 0;
    if (puVar6 != (ulong *)0x0) {
      puVar7 = puVar6;
    }
  }
LAB_109d7d624:
  *param_3 = (long)puVar7;
  return uVar3;
}



/* Entry: 109d7d644; end: 109d7d6eb;  */

void FUN_109d7d644(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_158;
  undefined1 auStack_c8 [64];
  undefined1 auStack_88 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109d2fb48(auStack_c8);
  puVar1 = auStack_c8;
  puVar5 = auStack_88;
  puVar6 = (undefined8 *)(param_1 + 8);
  lVar7 = param_1 + 0x10;
  lVar8 = param_1 + 0x18;
  uVar4 = 0;
  FUN_109d7d6ec(puVar1,0,auStack_c8,puVar5,param_1,puVar6,lVar7,lVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  FUN_109d73d64();
  puVar3 = puVar1;
  uStack_158 = uVar4;
  func_0x000109d74504(puVar1,&uStack_158,puVar2,puVar5,*puVar6);
  FUN_109d7d7a0(puVar1,uStack_158,puVar3,puVar5,lVar7,lVar8,param_1 + 0x20,param_1 + 0x28,
                param_1 + 0x2c,param_1 + 0x38);
  return;
}



/* Entry: 109d7d6ec; end: 109d7d79f;  */

void FUN_109d7d6ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = param_1;
  uStack_70 = param_2;
  FUN_109d73d64(param_1,&uStack_70,param_3,param_4,*param_5);
  uStack_68 = uStack_70;
  uVar2 = param_1;
  func_0x000109d74504(param_1,&uStack_68,uVar1,param_4,*param_6);
  FUN_109d7d7a0(param_1,uStack_68,uVar2,param_4,param_7,param_8,param_9,param_10,param_11,param_12);
  return;
}



/* Entry: 109d7d7a0; end: 109d7d843;  */

void FUN_109d7d7a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = param_1;
  uStack_60 = param_2;
  FUN_109d73d64(param_1,&uStack_60,param_3,param_4,*param_5);
  uStack_58 = uStack_60;
  uVar2 = param_1;
  FUN_109d35318(param_1,&uStack_58,uVar1,param_4,*param_6);
  FUN_109d7d844(param_1,uStack_58,uVar2,param_4,param_7,param_8,param_9,param_10);
  return;
}



/* Entry: 109d7d844; end: 109d7d8d3;  */

void FUN_109d7d844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_1;
  uStack_50 = param_2;
  FUN_109d73d64(param_1,&uStack_50,param_3,param_4,*param_5);
  uStack_48 = uStack_50;
  uVar2 = param_1;
  FUN_109d35318(param_1,&uStack_48,uVar1,param_4,*param_6);
  FUN_109d7d8d4(param_1,uStack_48,uVar2,param_4,param_7,param_8);
  return;
}



/* Entry: 109d7d8d4; end: 109d7d94b;  */

void FUN_109d7d8d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  uStack_40 = param_2;
  FUN_109d35318(param_1,&uStack_40,param_3,param_4,*param_5);
  uStack_38 = uStack_40;
  uVar2 = param_1;
  FUN_109d73d64(param_1,&uStack_38,uVar1,param_4,*param_6);
  func_0x000109d353f8(param_1,uStack_38,uVar2,param_4);
  return;
}



/* Entry: 109d7d94c; end: 109d7da2b;  */

bool FUN_109d7d94c(ulong *param_1,long param_2)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  puVar1 = (ulong *)(param_2 + -0x10);
  uVar3 = *puVar1;
  uVar2 = (uint)uVar3;
  if ((uVar2 >> 1 & 1) == 0) {
    puVar4 = puVar1 + -(uVar3 >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(param_2 + -0x20);
  }
  if ((((*param_1 == *puVar4) && (param_1[1] == puVar4[1])) && (param_1[2] == puVar4[2])) &&
     ((int)param_1[3] == *(int *)(param_2 + 0x10))) {
    if ((uVar2 >> 1 & 1) == 0) {
      puVar4 = puVar1 + -(uVar3 >> 2 & 0xf);
    }
    else {
      puVar4 = *(ulong **)(param_2 + -0x20);
    }
    if (((param_1[4] == puVar4[3]) && ((uint)param_1[5] == (uint)*(ushort *)(param_2 + 0x18))) &&
       ((*(int *)((long)param_1 + 0x2c) == *(int *)(param_2 + 0x1c) &&
        ((int)param_1[6] == *(int *)(param_2 + 0x14))))) {
      if ((uVar2 >> 1 & 1) == 0) {
        puVar1 = puVar1 + -(uVar3 >> 2 & 0xf);
      }
      else {
        puVar1 = *(ulong **)(param_2 + -0x20);
      }
      return param_1[7] == puVar1[4];
    }
  }
  return false;
}



/* Entry: 109d7da2c; end: 109d7db7b;  */

void FUN_109d7da2c(ulong *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  func_0x000109d7daac(param_2,param_3,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d7dc40(param_2,param_3,param_3);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d7db7c; end: 109d7dc3f;  */

void FUN_109d7db7c(ulong *param_1,long param_2)

{
  undefined4 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar2 = (ulong *)(param_2 + -0x10);
  if (((uint)*puVar2 >> 1 & 1) == 0) {
    puVar3 = puVar2 + -(*puVar2 >> 2 & 0xf);
  }
  else {
    puVar3 = *(ulong **)(param_2 + -0x20);
  }
  *param_1 = *puVar3;
  if (((uint)*puVar2 >> 1 & 1) == 0) {
    puVar3 = puVar2 + -(*puVar2 >> 2 & 0xf);
  }
  else {
    puVar3 = *(ulong **)(param_2 + -0x20);
  }
  param_1[1] = puVar3[1];
  if (((uint)*puVar2 >> 1 & 1) == 0) {
    puVar3 = puVar2 + -(*puVar2 >> 2 & 0xf);
  }
  else {
    puVar3 = *(ulong **)(param_2 + -0x20);
  }
  param_1[2] = puVar3[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x10);
  if (((uint)*(ulong *)(param_2 + -0x10) >> 1 & 1) == 0) {
    puVar3 = puVar2 + -(*(ulong *)(param_2 + -0x10) >> 2 & 0xf);
  }
  else {
    puVar3 = *(ulong **)(param_2 + -0x20);
  }
  param_1[4] = puVar3[3];
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  *(uint *)(param_1 + 5) = (uint)*(ushort *)(param_2 + 0x18);
  *(undefined4 *)((long)param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x14);
  if (((uint)*(ulong *)(param_2 + -0x10) >> 1 & 1) == 0) {
    puVar2 = puVar2 + -(*(ulong *)(param_2 + -0x10) >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  param_1[7] = puVar2[4];
  return;
}



/* Entry: 109d7dc40; end: 109d7dce7;  */

long * FUN_109d7dc40(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d7dc8c;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d7dce8(param_1,uVar1);
  func_0x000109d7daac(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d7dc8c:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d7dce8; end: 109d7de3f;  */

void FUN_109d7dce8(long *param_1,int param_2)

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
  puVar3 = (undefined8 *)((ulong)uVar4 << 3);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109d7dda0(param_1,lVar5,lVar5 + (ulong)uVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d7de40; end: 109d7df13;  */

undefined8 FUN_109d7de40(long *param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  
  lVar2 = param_1[2];
  if ((int)lVar2 == 0) {
    uVar3 = 0;
    puVar7 = (ulong *)0x0;
  }
  else {
    lVar5 = *param_1;
    uVar4 = param_2;
    FUN_109d7df14();
    iVar8 = 1;
    puVar6 = (ulong *)0x0;
    while( true ) {
      uVar1 = (uint)uVar4 & (int)lVar2 - 1U;
      puVar7 = (ulong *)(lVar5 + (ulong)uVar1 * 8);
      uVar4 = *puVar7;
      if ((uVar4 | 0x1000) != 0xfffffffffffff000) {
        uVar4 = param_2;
        FUN_109d7df94();
        if ((uVar4 & 1) != 0) {
          uVar3 = 1;
          goto LAB_109d7def4;
        }
        uVar4 = *puVar7;
      }
      if (uVar4 == 0xfffffffffffff000) break;
      if (puVar6 != (ulong *)0x0 || uVar4 != 0xffffffffffffe000) {
        puVar7 = puVar6;
      }
      uVar4 = (ulong)(uVar1 + iVar8);
      iVar8 = iVar8 + 1;
      puVar6 = puVar7;
    }
    uVar3 = 0;
    if (puVar6 != (ulong *)0x0) {
      puVar7 = puVar6;
    }
  }
LAB_109d7def4:
  *param_3 = (long)puVar7;
  return uVar3;
}



/* Entry: 109d7df14; end: 109d7df93;  */

ulong * FUN_109d7df14(ulong *param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uStack_a8;
  undefined1 auStack_a0 [56];
  undefined1 auStack_68 [64];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109d2fb48(&uStack_a8);
  uStack_a8 = *param_1;
  puVar1 = &uStack_a8;
  lVar2 = 0;
  FUN_109d76c10(puVar1,0,auStack_a0,auStack_68,param_1 + 1,param_1 + 3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar1;
  }
  ___stack_chk_fail();
  uVar4 = *(ulong *)(lVar2 + -0x10);
  if (((uint)uVar4 >> 1 & 1) == 0) {
    puVar3 = (ulong *)(lVar2 + -0x10) + -(uVar4 >> 2 & 0xf);
  }
  else {
    puVar3 = *(ulong **)(lVar2 + -0x20);
  }
  if (((*puVar1 == *puVar3) && (puVar1[1] == puVar3[1])) && (puVar1[2] == puVar3[2])) {
    return (ulong *)(ulong)((int)puVar1[3] == *(int *)(lVar2 + 0x10));
  }
  return (ulong *)0x0;
}



/* Entry: 109d7df94; end: 109d7dffb;  */

bool FUN_109d7df94(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_2 + -0x10);
  if (((uint)uVar2 >> 1 & 1) == 0) {
    puVar1 = (ulong *)(param_2 + -0x10) + -(uVar2 >> 2 & 0xf);
  }
  else {
    puVar1 = *(ulong **)(param_2 + -0x20);
  }
  if (((*param_1 == *puVar1) && (param_1[1] == puVar1[1])) && (param_1[2] == puVar1[2])) {
    return (int)param_1[3] == *(int *)(param_2 + 0x10);
  }
  return false;
}



/* Entry: 109d7dffc; end: 109d7e14b;  */

void FUN_109d7dffc(ulong *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  func_0x000109d7e07c(param_2,param_3,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d7e1bc(param_2,param_3,param_3);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d7e14c; end: 109d7e1bb;  */

void FUN_109d7e14c(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  
  puVar1 = (ulong *)(param_2 + -0x10);
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  *param_1 = *puVar2;
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  param_1[1] = puVar2[1];
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar1 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar1 = *(ulong **)(param_2 + -0x20);
  }
  param_1[2] = puVar1[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x10);
  return;
}



/* Entry: 109d7e1bc; end: 109d7e263;  */

long * FUN_109d7e1bc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d7e208;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d7e264(param_1,uVar1);
  func_0x000109d7e07c(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d7e208:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d7e264; end: 109d7e3bb;  */

void FUN_109d7e264(long *param_1,int param_2)

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
  puVar3 = (undefined8 *)((ulong)uVar4 << 3);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109d7e31c(param_1,lVar5,lVar5 + (ulong)uVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d7e3bc; end: 109d7e497;  */

undefined8 FUN_109d7e3bc(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  uint uVar8;
  ulong *puVar9;
  int iVar10;
  
  lVar1 = param_1[2];
  if ((int)lVar1 == 0) {
    uVar4 = 0;
    puVar9 = (ulong *)0x0;
  }
  else {
    lVar6 = *param_1;
    lVar2 = *param_2;
    FUN_109d7e498(lVar2,lVar2 + param_2[1] * 8);
    uVar8 = (uint)lVar2;
    iVar10 = 1;
    puVar7 = (ulong *)0x0;
    while( true ) {
      uVar8 = (int)lVar1 - 1U & uVar8;
      puVar9 = (ulong *)(lVar6 + (ulong)uVar8 * 8);
      uVar5 = *puVar9;
      if ((uVar5 | 0x1000) != 0xfffffffffffff000) {
        plVar3 = param_2;
        FUN_109d7e5a4();
        if (((ulong)plVar3 & 1) != 0) {
          uVar4 = 1;
          goto LAB_109d7e478;
        }
        uVar5 = *puVar9;
      }
      if (uVar5 == 0xfffffffffffff000) break;
      if (puVar7 != (ulong *)0x0 || uVar5 != 0xffffffffffffe000) {
        puVar9 = puVar7;
      }
      uVar8 = uVar8 + iVar10;
      iVar10 = iVar10 + 1;
      puVar7 = puVar9;
    }
    uVar4 = 0;
    if (puVar7 != (ulong *)0x0) {
      puVar9 = puVar7;
    }
  }
LAB_109d7e478:
  *param_3 = (long)puVar9;
  return uVar4;
}



/* Entry: 109d7e498; end: 109d7e5a3;  */

undefined1 * FUN_109d7e498(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_68 [56];
  
  if ((bRam00000001132fee88 & 1) == 0) {
    iVar6 = 0x132fee88;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      uRam00000001132fee80 = 0xff51afd7ed558ccd;
      if (uRam0000000113834578 != 0) {
        uRam00000001132fee80 = uRam0000000113834578;
      }
      ___cxa_guard_release(0x1132fee88);
    }
  }
  uVar12 = param_2 - (long)param_1;
  if (0x40 < uVar12) {
    uVar8 = uVar12 & 0xffffffffffffffc0;
    FUN_109d35128(auStack_68,param_1,uRam00000001132fee80);
    while (uVar8 = uVar8 - 0x40, uVar8 != 0) {
      param_1 = param_1 + 8;
      FUN_109d351b0(auStack_68,param_1);
    }
    if ((uVar12 & 0x3f) != 0) {
      FUN_109d351b0(auStack_68,param_2 + -0x40);
    }
    puVar7 = auStack_68;
    func_0x000109d356d0(puVar7,uVar12);
    return puVar7;
  }
  if (uVar12 - 4 < 5) {
    uVar8 = uRam00000001132fee80 ^ *(uint *)((long)param_1 + (uVar12 - 4));
    uVar12 = (uVar8 ^ uVar12 + (ulong)(uint)*param_1 * 8) * -0x622015f714c7d297;
    uVar12 = uVar8 ^ uVar12 >> 0x2f ^ uVar12;
  }
  else {
    if (uVar12 - 9 < 8) {
      uVar9 = *(ulong *)((long)param_1 + (uVar12 - 8));
      uVar8 = uVar9 + uVar12;
      uVar8 = uVar8 >> (uVar12 & 0x3f) | uVar8 << 0x40 - (uVar12 & 0x3f);
      uVar12 = (*param_1 ^ uRam00000001132fee80 ^ uVar8) * -0x622015f714c7d297;
      uVar12 = (uVar8 ^ uVar12 >> 0x2f ^ uVar12) * -0x622015f714c7d297;
      return (undefined1 *)((uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297 ^ uVar9);
    }
    if (0xf < uVar12 - 0x11) {
      if (uVar12 < 0x21) {
        if (uVar12 == 0) {
          return (undefined1 *)(uRam00000001132fee80 ^ 0x9ae16a3b2f90404f);
        }
        uVar12 = (ulong)CONCAT11(*(undefined1 *)((long)param_1 + (uVar12 >> 1)),(char)*param_1) *
                 -0x651e95c4d06fbfb1 ^
                 (uVar12 + (ulong)*(byte *)((long)param_1 + (uVar12 - 1)) * 4) * -0x36b62838af619aa9
                 ^ uRam00000001132fee80;
      }
      else {
        lVar3 = *(long *)((long)param_1 + (uVar12 - 0x10));
        lVar5 = *(long *)((long)param_1 + (uVar12 - 8));
        uVar10 = *param_1 + (lVar3 + uVar12) * -0x3c5a37a36834ced9;
        uVar8 = uVar10 + param_1[3];
        uVar9 = uVar10 + param_1[1];
        uVar11 = uVar9 + param_1[2];
        uVar1 = *(long *)((long)param_1 + (uVar12 - 0x20)) + param_1[2];
        uVar2 = uVar1 + lVar5;
        lVar4 = (uVar9 >> 7 | uVar9 << 0x39) + (uVar10 >> 0x25 | uVar10 * 0x8000000) +
                (uVar8 >> 0x34 | uVar8 * 0x1000) + (uVar11 >> 0x1f | uVar11 << 0x21);
        uVar12 = *(long *)((long)param_1 + (uVar12 - 0x18)) + uVar1;
        uVar8 = uVar12 + lVar3;
        uVar12 = (uVar8 + lVar5 + lVar4) * -0x3c5a37a36834ced9 +
                 (uVar11 + param_1[3] + (uVar1 >> 0x25 | uVar1 * 0x8000000) +
                           (uVar2 >> 0x34 | uVar2 * 0x1000) + (uVar12 >> 7 | uVar12 << 0x39) +
                           (uVar8 >> 0x1f | uVar8 << 0x21)) * -0x651e95c4d06fbfb1;
        uVar12 = ((uVar12 ^ uVar12 >> 0x2f) * -0x3c5a37a36834ced9 ^ uRam00000001132fee80) + lVar4;
      }
      return (undefined1 *)((uVar12 ^ uVar12 >> 0x2f) * -0x651e95c4d06fbfb1);
    }
    lVar4 = *(long *)((long)param_1 + (uVar12 - 8));
    uVar9 = *param_1 * -0x4b6d499041670d8d - param_1[1];
    uVar11 = lVar4 * -0x651e95c4d06fbfb1 ^ uRam00000001132fee80;
    uVar8 = param_1[1] ^ 0xc949d7c7509e6557;
    uVar8 = uRam00000001132fee80 + uVar12 + (uVar8 >> 0x14 | uVar8 << 0x2c) +
            *param_1 * -0x4b6d499041670d8d + lVar4 * 0x651e95c4d06fbfb1;
    uVar12 = ((uVar9 >> 0x2b | uVar9 * 0x200000) +
              *(long *)((long)param_1 + (uVar12 - 0x10)) * -0x3c5a37a36834ced9 +
              (uVar11 >> 0x1e | uVar11 << 0x22) ^ uVar8) * -0x622015f714c7d297;
    uVar12 = uVar8 ^ uVar12 >> 0x2f ^ uVar12;
  }
  return (undefined1 *)
         ((uVar12 * -0x622015f714c7d297 ^ uVar12 * -0x622015f714c7d297 >> 0x2f) *
         -0x622015f714c7d297);
}



/* Entry: 109d7e5a4; end: 109d7e5eb;  */

bool FUN_109d7e5a4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_1[1] == *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10) >> 3) {
    uVar1 = *param_1;
    _memcmp(uVar1,*(long *)(param_2 + 0x10),param_1[1] << 3);
    return (int)uVar1 == 0;
  }
  return false;
}


