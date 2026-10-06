/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109d33ac8; end: 109d33b23;  */

void FUN_109d33ac8(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110b40378;
  plVar1 = (long *)param_1[0x17];
  if (plVar1 == param_1 + 0x14) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_109d33b10;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_109d33b10:
  func_0x000109d2f664(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d33b24; end: 109d33b3f;  */

long FUN_109d33b24(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 7;
  if (*(long *)(param_1 + 0x18) != 1) {
    lVar3 = *(long *)(param_1 + 0x18) + 7;
  }
  lVar2 = param_1;
  (**(code **)(*(long *)(param_1 + 0x98) + 0x10))();
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



/* Entry: 109d33b40; end: 109d33bb7;  */

void FUN_109d33b40(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined **ppuStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  if (param_3 == 0) {
    if ((*(char *)(param_1 + 0x94) != '\x01') ||
       (iVar1 = **(int **)(param_1 + 0x80), *(int *)(param_1 + 0x90) == iVar1)) {
      return;
    }
  }
  else {
    iVar1 = **(int **)(param_1 + 0x80);
  }
  uStack_18 = *(undefined4 *)(param_1 + 0x90);
  uStack_14 = *(undefined1 *)(param_1 + 0x94);
  ppuStack_20 = &PTR_FUN_110b3fc50;
  FUN_109df4bbc(param_1 + 0x98,param_1,iVar1,&ppuStack_20,param_2);
  return;
}



/* Entry: 109d33bb8; end: 109d33bdf;  */

void FUN_109d33bb8(long param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x94) == '\x01') {
    uVar1 = *(undefined4 *)(param_1 + 0x90);
  }
  else {
    uVar1 = 0;
  }
  **(undefined4 **)(param_1 + 0x80) = uVar1;
  return;
}



/* Entry: 109d33be0; end: 109d33c13;  */

long * FUN_109d33be0(long *param_1)

{
  if (*param_1 != 0) {
    FUN_109d94730(param_1);
  }
  return param_1;
}



/* Entry: 109d33c14; end: 109d33c1b;  */

void FUN_109d33c14(void)

{
  return;
}



/* Entry: 109d33c1c; end: 109d33c3f;  */

void FUN_109d33c1c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110b40428;
  return;
}



/* Entry: 109d33c40; end: 109d33c5b;  */

void FUN_109d33c40(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110b40428;
  return;
}



/* Entry: 109d33c5c; end: 109d33c97;  */

long FUN_109d33c5c(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b40488);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109d33c98; end: 109d33ca3;  */

undefined ** FUN_109d33c98(void)

{
  return &PTR_DAT_110b40488;
}



/* Entry: 109d33ca4; end: 109d33d6f;  */

void FUN_109d33ca4(long *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(uint *)(param_1 + 1);
  if (param_2 != uVar1) {
    if (uVar1 <= param_2) {
      if (*(uint *)((long)param_1 + 0xc) < param_2) {
        func_0x000107c2b01c(param_1,param_1 + 2,param_2,4);
        uVar1 = (ulong)*(uint *)(param_1 + 1);
      }
      if (param_2 - uVar1 != 0) {
        _bzero(*param_1 + uVar1 * 4,(param_2 - uVar1) * 4);
      }
    }
    *(int *)(param_1 + 1) = (int)param_2;
  }
  return;
}



/* Entry: 109d33d70; end: 109d33e07;  */

void FUN_109d33d70(long *param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (*(uint *)(param_1 + 9) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 9) << 4;
    puVar3 = (undefined8 *)param_1[8];
    do {
      __ZdlPvSt11align_val_t(*puVar3,8);
      lVar4 = lVar4 + -0x10;
      puVar3 = puVar3 + 2;
    } while (lVar4 != 0);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  uVar1 = *(uint *)(param_1 + 3);
  if (uVar1 != 0) {
    param_1[10] = 0;
    plVar2 = (long *)param_1[2];
    lVar4 = *plVar2;
    *param_1 = lVar4;
    param_1[1] = lVar4 + 0x1000;
    if (uVar1 != 1) {
      lVar4 = (ulong)uVar1 * 8 + -8;
      do {
        plVar2 = plVar2 + 1;
        __ZdlPvSt11align_val_t(*plVar2,8);
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
    *(undefined4 *)(param_1 + 3) = 1;
  }
  return;
}



/* Entry: 109d33e08; end: 109d33ebb;  */

undefined8 * FUN_109d33e08(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110b404a8;
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



/* Entry: 109d33ebc; end: 109d33f37;  */

ulong FUN_109d33ebc(long param_1,undefined2 param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined1 uStack_31;
  
  uStack_31 = 0;
  uVar1 = param_1 + 0x98;
  FUN_109df32ac(uVar1,param_1);
  if ((uVar1 & 1) == 0) {
    **(undefined1 **)(param_1 + 0x80) = uStack_31;
    *(undefined2 *)(param_1 + 0xc) = param_2;
    plVar2 = *(long **)(param_1 + 0xb8);
    if (plVar2 == (long *)0x0) {
      func_0x000104c501e4();
      return 1;
    }
    (**(code **)(*plVar2 + 0x30))(plVar2,&uStack_31);
  }
  return uVar1;
}



/* Entry: 109d33f38; end: 109d33f3f;  */

undefined8 FUN_109d33f38(void)

{
  return 1;
}



/* Entry: 109d33f40; end: 109d33f9b;  */

void FUN_109d33f40(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110b404a8;
  plVar1 = (long *)param_1[0x17];
  if (plVar1 == param_1 + 0x14) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_109d33f88;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_109d33f88:
  func_0x000109d2f664(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d33f9c; end: 109d33fb7;  */

long FUN_109d33f9c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 7;
  if (*(long *)(param_1 + 0x18) != 1) {
    lVar3 = *(long *)(param_1 + 0x18) + 7;
  }
  lVar2 = param_1;
  (**(code **)(*(long *)(param_1 + 0x98) + 0x10))();
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



/* Entry: 109d33fb8; end: 109d3402b;  */

void FUN_109d33fb8(long param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  undefined **ppuStack_20;
  undefined2 uStack_18;
  
  if (param_3 == 0) {
    if ((*(char *)(param_1 + 0x91) != '\x01') ||
       (bVar1 = **(byte **)(param_1 + 0x80), *(byte *)(param_1 + 0x90) == bVar1)) {
      return;
    }
  }
  else {
    bVar1 = **(byte **)(param_1 + 0x80);
  }
  uStack_18 = *(undefined2 *)(param_1 + 0x90);
  ppuStack_20 = &PTR_FUN_110b3fac8;
  FUN_109df46e4(param_1 + 0x98,param_1,bVar1 & 1,&ppuStack_20,param_2);
  return;
}



/* Entry: 109d3402c; end: 109d34053;  */

void FUN_109d3402c(long param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0x91) == '\x01') {
    uVar1 = *(undefined1 *)(param_1 + 0x90);
  }
  else {
    uVar1 = 0;
  }
  **(undefined1 **)(param_1 + 0x80) = uVar1;
  return;
}



/* Entry: 109d34054; end: 109d340ab;  */

long * FUN_109d34054(long *param_1,long *param_2)

{
  long lVar1;
  
  if (param_2 != param_1) {
    if (*param_1 != 0) {
      FUN_109d94730(param_1);
    }
    lVar1 = *param_2;
    *param_1 = lVar1;
    if (lVar1 != 0) {
      FUN_109d947e4(param_2,lVar1,param_1);
      *param_2 = 0;
    }
  }
  return param_1;
}



/* Entry: 109d340ac; end: 109d34147;  */

long FUN_109d340ac(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x18) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x18) << 3;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    do {
      __ZdlPvSt11align_val_t(*puVar1,8);
      lVar2 = lVar2 + -8;
      puVar1 = puVar1 + 1;
    } while (lVar2 != 0);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (*(uint *)(param_1 + 0x48) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x48) << 4;
    do {
      __ZdlPvSt11align_val_t(*puVar1,8);
      lVar2 = lVar2 + -0x10;
      puVar1 = puVar1 + 2;
    } while (lVar2 != 0);
    puVar1 = *(undefined8 **)(param_1 + 0x40);
  }
  if (puVar1 != (undefined8 *)(param_1 + 0x50)) {
    _free(puVar1);
  }
  if (*(long *)(param_1 + 0x10) != param_1 + 0x20) {
    _free();
  }
  return param_1;
}



/* Entry: 109d34148; end: 109d34213;  */

ulong FUN_109d34148(long *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  param_1[10] = param_1[10] + param_2;
  lVar4 = 1L << (param_3 & 0x3f);
  lVar5 = lVar4 + -1;
  lVar2 = *param_1;
  uVar6 = -lVar4;
  lVar4 = (lVar5 + lVar2 & uVar6) - lVar2;
  if (lVar2 == 0 || (ulong)(param_1[1] - lVar2) < (ulong)(lVar4 + param_2)) {
    uVar1 = lVar5 + param_2;
    if (0x1000 < uVar1) {
      uVar3 = uVar1;
      __ZnwmSt11align_val_t(uVar1,8);
      FUN_109d34214(param_1 + 8,uVar3,uVar1);
      return lVar5 + uVar3 & uVar6;
    }
    func_0x000109d34280(param_1);
    uVar6 = lVar5 + *param_1 & uVar6;
  }
  else {
    uVar6 = lVar2 + lVar4;
  }
  *param_1 = uVar6 + param_2;
  return uVar6;
}



/* Entry: 109d34214; end: 109d342e3;  */

void FUN_109d34214(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(uint *)(param_1 + 1);
  if (*(uint *)((long)param_1 + 0xc) <= *(uint *)(param_1 + 1)) {
    func_0x000107c2b01c(param_1,param_1 + 2,uVar2 + 1,0x10);
    uVar2 = (ulong)*(uint *)(param_1 + 1);
  }
  puVar1 = (undefined8 *)(*param_1 + uVar2 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}



/* Entry: 109d342e4; end: 109d3433f;  */

void FUN_109d342e4(long *param_1,undefined8 param_2)

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



/* Entry: 109d34340; end: 109d34347;  */

void FUN_109d34340(void)

{
  return;
}



/* Entry: 109d34348; end: 109d3436b;  */

void FUN_109d34348(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110b40558;
  return;
}



/* Entry: 109d3436c; end: 109d34373;  */

void FUN_109d3436c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d34374; end: 109d343af;  */

long FUN_109d34374(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b405b8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109d343b0; end: 109d343bb;  */

undefined ** FUN_109d343b0(void)

{
  return &PTR_DAT_110b405b8;
}



/* Entry: 109d343bc; end: 109d34437;  */

void FUN_109d343bc(long param_1,long param_2)

{
  long lVar1;
  long lStack_28;
  
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x28);
  *(long *)(param_1 + 0x38) = param_2 + 0x18;
  lStack_28 = *(long *)(param_2 + 0x30);
  if (lStack_28 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_109d9464c(&lStack_28,lStack_28,2);
    lVar1 = lStack_28;
  }
  FUN_109d346c0(param_1,0,lVar1);
  FUN_109d33be0(&lStack_28);
  return;
}



/* Entry: 109d34438; end: 109d34583;  */

void FUN_109d34438(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,int param_6)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 auStack_58 [24];
  
  plVar2 = *(long **)(param_1 + 0x48);
  (**(code **)(*plVar2 + 0x20))(plVar2,0xf,param_2,param_3);
  if (plVar2 != (long *)0x0) {
    return;
  }
  uVar1 = 0xf;
  FUN_109d8c8c0(0xf,param_2,param_3,auStack_58,0);
  func_0x000109d33940(param_1,uVar1,param_4);
  if (param_5 != 0) {
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 2;
  }
  if (param_6 != 0) {
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 4;
  }
  return;
}



/* Entry: 109d34584; end: 109d346bf;  */

void FUN_109d34584(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_58 [32];
  undefined2 uStack_38;
  
  uStack_38 = 0x101;
  FUN_109d34a98(param_2,param_3,auStack_58,0);
  lVar2 = param_2;
  FUN_109d32e0c();
  if ((int)lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x60);
    if (*(long *)(param_1 + 0x58) != 0) {
      FUN_109d97c40(param_2,3);
    }
    *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | (byte)(iVar1 << 1);
  }
  FUN_109d34b1c(param_1,param_2,param_4);
  return;
}



/* Entry: 109d346c0; end: 109d347c7;  */

void FUN_109d346c0(long *param_1,int param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lStack_30;
  int iStack_24;
  
  lStack_30 = param_3;
  iStack_24 = param_2;
  if (param_3 == 0) {
    lVar2 = *param_1;
    FUN_109d347c8(lVar2,lVar2 + (ulong)*(uint *)(param_1 + 1) * 0x10,param_2);
    *(int *)(param_1 + 1) = (int)((ulong)(lVar2 - *param_1) >> 4);
  }
  else {
    if (*(uint *)(param_1 + 1) != 0) {
      plVar1 = (long *)(*param_1 + 8);
      lVar2 = (ulong)*(uint *)(param_1 + 1) << 4;
      do {
        if ((int)plVar1[-1] == param_2) {
          *plVar1 = param_3;
          return;
        }
        plVar1 = plVar1 + 2;
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0);
    }
    func_0x000109d3475c(param_1,&iStack_24,&lStack_30);
  }
  return;
}



/* Entry: 109d347c8; end: 109d3481f;  */

void FUN_109d347c8(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  
  for (; (param_1 != param_2 && (*param_1 != param_3)); param_1 = param_1 + 4) {
  }
  piVar2 = param_1;
  if (param_1 != param_2) {
    while (piVar1 = piVar2, piVar2 = piVar1 + 4, piVar2 != param_2) {
      if (*piVar2 != param_3) {
        *param_1 = *piVar2;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(piVar1 + 6);
        param_1 = param_1 + 4;
      }
    }
  }
  return;
}



/* Entry: 109d34820; end: 109d3488b;  */

void FUN_109d34820(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(uint *)(param_1 + 1);
  if (*(uint *)((long)param_1 + 0xc) <= *(uint *)(param_1 + 1)) {
    func_0x000107c2b01c(param_1,param_1 + 2,uVar2 + 1,0x10);
    uVar2 = (ulong)*(uint *)(param_1 + 1);
  }
  puVar1 = (undefined8 *)(*param_1 + uVar2 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}



/* Entry: 109d3488c; end: 109d3496b;  */

void FUN_109d3488c(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined2 uStack_48;
  
  plVar2 = *(long **)(param_1 + 0x48);
  (**(code **)(*plVar2 + 0x38))();
  if (plVar2 == (long *)0x0) {
    puVar3 = (undefined8 *)0x80;
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
    uStack_48 = 0x101;
    uVar4 = *param_3;
    FUN_109d31fa8(uVar4);
    FUN_109d8cfe4(puVar1,uVar4,0x35,param_2,param_3,param_4,auStack_68,0,0);
    FUN_109d3496c(param_1,puVar1,param_5);
  }
  return;
}



/* Entry: 109d3496c; end: 109d349d7;  */

undefined8 FUN_109d3496c(undefined8 *param_1,undefined8 param_2)

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



/* Entry: 109d349d8; end: 109d34a97;  */

long * FUN_109d349d8(long *param_1,undefined8 param_2,long *param_3,long param_4,undefined8 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [24];
  
  if (*param_3 != param_4) {
    if (*(byte *)(param_3 + 2) < 0x15) {
      param_3 = (long *)param_1[9];
      (**(code **)(*param_3 + 0x78))();
      if (param_3 != (long *)0x0 && 0x1b < *(byte *)(param_3 + 2)) {
        (**(code **)(*(long *)param_1[10] + 0x10))
                  ((long *)param_1[10],param_3,param_5,param_1[6],param_1[7]);
        if (*(uint *)(param_1 + 1) != 0) {
          puVar2 = (undefined4 *)*param_1;
          puVar1 = puVar2 + (ulong)*(uint *)(param_1 + 1) * 4;
          do {
            FUN_109d97dec(param_3,*puVar2,*(undefined8 *)(puVar2 + 2));
            puVar2 = puVar2 + 4;
          } while (puVar2 != puVar1);
        }
        return param_3;
      }
    }
    else {
      FUN_109d8cd3c(param_2,param_3,param_4,auStack_48,0);
      FUN_109d337dc(param_1,param_2,param_5);
      param_3 = param_1;
    }
  }
  return param_3;
}



/* Entry: 109d34a98; end: 109d34b1b;  */

undefined8 *
FUN_109d34a98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  *(uint *)((long)puVar1 + 0x1c) = *(uint *)((long)puVar1 + 0x1c) & 0x38000000 | 0x40000000;
  *puVar1 = 0;
  FUN_109d34b88(puVar1 + 1,param_1,param_2,param_3,param_4);
  return puVar1 + 1;
}



/* Entry: 109d34b1c; end: 109d34b87;  */

undefined8 FUN_109d34b1c(undefined8 *param_1,undefined8 param_2)

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



/* Entry: 109d34b88; end: 109d34c1b;  */

long FUN_109d34b88(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = param_1;
  FUN_109d8b0bc(param_1,param_2,0x37,0,0,param_5);
  *(undefined4 *)(lVar3 + 0x3c) = param_3;
  FUN_109da2b08();
  uVar2 = *(uint *)(param_1 + 0x3c);
  puVar4 = (undefined8 *)((ulong)uVar2 * 0x28);
  __Znwm();
  *(undefined8 **)(param_1 + -8) = puVar4;
  if (uVar2 != 0) {
    puVar1 = puVar4 + (ulong)uVar2 * 4;
    do {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = param_1;
      puVar4 = puVar4 + 4;
    } while (puVar4 != puVar1);
  }
  return param_1;
}



/* Entry: 109d34c1c; end: 109d34c7f;  */

void FUN_109d34c1c(long param_1,uint param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if ((*(uint *)(param_1 + 0x14) >> 0x1e & 1) == 0) {
    param_1 = param_1 + ((ulong)*(uint *)(param_1 + 0x14) & 0x7ffffff) * -0x20;
  }
  else {
    param_1 = *(long *)(param_1 + -8);
  }
  plVar1 = (long *)(param_1 + (ulong)param_2 * 0x20);
  if (*plVar1 != 0) {
    lVar3 = plVar1[1];
    *(long *)plVar1[2] = lVar3;
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = plVar1[2];
    }
  }
  *plVar1 = param_3;
  if (param_3 != 0) {
    plVar2 = (long *)(param_3 + 8);
    lVar3 = *plVar2;
    plVar1[1] = lVar3;
    if (lVar3 != 0) {
      *(long **)(lVar3 + 0x10) = plVar1 + 1;
    }
    plVar1[2] = (long)plVar2;
    *plVar2 = (long)plVar1;
  }
  return;
}



/* Entry: 109d34c80; end: 109d34cd7;  */

undefined8 * FUN_109d34c80(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_LAB_110b405d8;
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



/* Entry: 109d34cd8; end: 109d34e17;  */

long * FUN_109d34cd8(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  float fStack_6c;
  double dStack_68;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar9 = puVar2 + 1;
    *puVar2 = *param_2;
    plVar4 = param_1;
  }
  else {
    lVar8 = (long)puVar2 - *param_1;
    uVar1 = (lVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      func_0x00010985da54();
      plVar5 = param_1;
      FUN_109df3c68();
      if ((int)plVar5 == 0) {
        fStack_6c = (float)dStack_68;
        *(float *)(param_1 + 0x10) = fStack_6c;
        *(short *)((long)param_1 + 0xc) = (short)param_2;
        plVar4 = (long *)param_1[0x17];
        if (plVar4 == (long *)0x0) {
          func_0x000104c501e4();
          return (long *)0x2;
        }
        (**(code **)(*plVar4 + 0x30))(plVar4,&fStack_6c);
      }
      return plVar5;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    plVar5 = param_1;
    func_0x00010985da68();
    lVar3 = *param_1;
    puVar2 = (undefined8 *)((long)plVar5 + lVar8);
    lVar8 = (long)puVar2 - (param_1[1] - lVar3);
    puVar9 = puVar2 + 1;
    *puVar2 = *param_2;
    _memcpy(lVar8,lVar3);
    plVar4 = (long *)*param_1;
    *param_1 = lVar8;
    param_1[1] = (long)puVar9;
    param_1[2] = (long)(plVar5 + uVar7);
    if (plVar4 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar9;
  return plVar4;
}



/* Entry: 109d34e18; end: 109d34e1f;  */

undefined8 FUN_109d34e18(void)

{
  return 2;
}



/* Entry: 109d34e20; end: 109d34e7b;  */

void FUN_109d34e20(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_LAB_110b405d8;
  plVar1 = (long *)param_1[0x17];
  if (plVar1 == param_1 + 0x14) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_109d34e68;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_109d34e68:
  func_0x000109d2f664(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d34e7c; end: 109d34e97;  */

long FUN_109d34e7c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 7;
  if (*(long *)(param_1 + 0x18) != 1) {
    lVar3 = *(long *)(param_1 + 0x18) + 7;
  }
  lVar2 = param_1;
  (**(code **)(*(long *)(param_1 + 0x98) + 0x10))();
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



/* Entry: 109d34e98; end: 109d34f07;  */

void FUN_109d34e98(long param_1,undefined8 param_2,int param_3)

{
  float fVar1;
  undefined **ppuStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  if (param_3 == 0) {
    if (*(char *)(param_1 + 0x94) != '\x01') {
      return;
    }
    fVar1 = *(float *)(param_1 + 0x80);
    if (*(float *)(param_1 + 0x90) == fVar1) {
      return;
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0x80);
  }
  uStack_18 = *(undefined4 *)(param_1 + 0x90);
  uStack_14 = *(undefined1 *)(param_1 + 0x94);
  ppuStack_20 = &PTR_DAT_110b40688;
  FUN_109df5320(fVar1,param_1 + 0x98,param_1,&ppuStack_20,param_2);
  return;
}



/* Entry: 109d34f08; end: 109d34f63;  */

void FUN_109d34f08(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x94) == '\x01') {
    uVar1 = *(undefined4 *)(param_1 + 0x90);
  }
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  return;
}



/* Entry: 109d34f64; end: 109d34f87;  */

void FUN_109d34f64(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110b406f0;
  return;
}



/* Entry: 109d34f88; end: 109d34fa3;  */

void FUN_109d34f88(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110b406f0;
  return;
}



/* Entry: 109d34fa4; end: 109d34fdf;  */

long FUN_109d34fa4(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b40750);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109d34fe0; end: 109d35047;  */

undefined ** FUN_109d34fe0(void)

{
  return &PTR_DAT_110b40750;
}



/* Entry: 109d35048; end: 109d35127;  */

undefined1 *
FUN_109d35048(undefined1 *param_1,long *param_2,undefined1 *param_3,undefined1 *param_4,
             undefined1 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  puVar2 = param_3 + 1;
  if (param_4 < puVar2) {
    lVar3 = (long)param_4 - (long)param_3;
    uStack_31 = param_5;
    _memcpy(param_3,&uStack_31,lVar3);
    if (*param_2 == 0) {
      FUN_109d35128(&uStack_70,param_1,*(undefined8 *)(param_1 + 0x78));
      *(undefined8 *)(param_1 + 0x48) = uStack_68;
      *(undefined8 *)(param_1 + 0x40) = uStack_70;
      *(undefined8 *)(param_1 + 0x58) = uStack_58;
      *(undefined8 *)(param_1 + 0x50) = uStack_60;
      *(undefined8 *)(param_1 + 0x68) = uStack_48;
      *(undefined8 *)(param_1 + 0x60) = uStack_50;
      *(undefined8 *)(param_1 + 0x70) = uStack_40;
      lVar1 = 0x40;
    }
    else {
      FUN_109d351b0(param_1 + 0x40,param_1);
      lVar1 = *param_2 + 0x40;
    }
    *param_2 = lVar1;
    puVar2 = param_1;
    if (param_1 + (1 - lVar3) <= param_4) {
      _memcpy(param_1,&uStack_31 + lVar3);
      puVar2 = param_1 + (1 - lVar3);
    }
  }
  else {
    *param_3 = param_5;
  }
  return puVar2;
}



/* Entry: 109d35128; end: 109d351af;  */

void FUN_109d35128(ulong *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  
  *param_1 = 0;
  param_1[1] = param_3;
  uVar2 = param_3 ^ 0xb492b66fbe98f273;
  uVar4 = (uVar2 * -0x622015f714c7d297 ^ uVar2 * -0x622015f714c7d297 >> 0x2f ^ 0xb492b66fbe98f273) *
          -0x622015f714c7d297;
  param_1[2] = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
  param_1[3] = uVar2 >> 0x31 | uVar2 << 0xf;
  uVar2 = param_3 ^ param_3 >> 0x2f;
  param_1[4] = param_3 * -0x4b6d499041670d8d;
  param_1[5] = uVar2;
  uVar2 = (uVar2 ^ param_3 * -0x4b6d499041670d8d) * -0x622015f714c7d297;
  uVar2 = (param_3 ^ (uVar2 ^ param_3) >> 0x2f ^ uVar2) * -0x622015f714c7d297;
  param_1[6] = (uVar2 ^ uVar2 >> 0x2f) * -0x622015f714c7d297;
  uVar3 = param_1[3];
  uVar2 = param_1[1] + *param_1 + uVar3 + *(long *)(param_2 + 8);
  uVar4 = (uVar2 >> 0x25 | uVar2 * 0x8000000) * -0x4b6d499041670d8d;
  uVar5 = param_1[4];
  *param_1 = uVar4;
  uVar2 = uVar5 + param_1[1] + *(long *)(param_2 + 0x30);
  uVar1 = (uVar2 >> 0x2a | uVar2 * 0x400000) * -0x4b6d499041670d8d;
  puVar6 = param_1 + 6;
  uVar4 = *puVar6 ^ uVar4;
  *param_1 = uVar4;
  param_1[1] = uVar1;
  puVar7 = param_1 + 5;
  uVar2 = *puVar7 + param_1[2];
  param_1[1] = uVar1 + uVar3 + *(long *)(param_2 + 0x28);
  param_1[2] = (uVar2 >> 0x21 | uVar2 * 0x80000000) * -0x4b6d499041670d8d;
  param_1[3] = uVar5 * -0x4b6d499041670d8d;
  param_1[4] = *puVar7 + uVar4;
  FUN_109d352b8(param_2);
  *puVar7 = *puVar6 + param_1[2];
  *puVar6 = *(long *)(param_2 + 0x10) + param_1[1];
  FUN_109d352b8(param_2 + 0x20,puVar7,puVar6);
  uVar2 = param_1[2];
  param_1[2] = *param_1;
  *param_1 = uVar2;
  return;
}



/* Entry: 109d351b0; end: 109d352b7;  */

void FUN_109d351b0(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  
  uVar4 = param_1[3];
  uVar2 = param_1[1] + *param_1 + uVar4 + *(long *)(param_2 + 8);
  uVar1 = (uVar2 >> 0x25 | uVar2 * 0x8000000) * -0x4b6d499041670d8d;
  uVar5 = param_1[4];
  *param_1 = uVar1;
  uVar2 = uVar5 + param_1[1] + *(long *)(param_2 + 0x30);
  uVar3 = (uVar2 >> 0x2a | uVar2 * 0x400000) * -0x4b6d499041670d8d;
  puVar6 = param_1 + 6;
  uVar1 = *puVar6 ^ uVar1;
  *param_1 = uVar1;
  param_1[1] = uVar3;
  puVar7 = param_1 + 5;
  uVar2 = *puVar7 + param_1[2];
  param_1[1] = uVar3 + uVar4 + *(long *)(param_2 + 0x28);
  param_1[2] = (uVar2 >> 0x21 | uVar2 * 0x80000000) * -0x4b6d499041670d8d;
  param_1[3] = uVar5 * -0x4b6d499041670d8d;
  param_1[4] = *puVar7 + uVar1;
  FUN_109d352b8(param_2);
  *puVar7 = *puVar6 + param_1[2];
  *puVar6 = *(long *)(param_2 + 0x10) + param_1[1];
  FUN_109d352b8(param_2 + 0x20,puVar7,puVar6);
  uVar2 = param_1[2];
  param_1[2] = *param_1;
  *param_1 = uVar2;
  return;
}



/* Entry: 109d352b8; end: 109d35317;  */

void FUN_109d352b8(long *param_1,ulong *param_2,ulong *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar1 = *param_1;
  uVar3 = *param_2;
  *param_2 = uVar3 + lVar1;
  lVar4 = param_1[3];
  uVar3 = lVar4 + *param_3 + uVar3 + lVar1;
  *param_3 = uVar3 >> 0x15 | uVar3 << 0x2b;
  uVar2 = *param_2;
  uVar3 = param_1[1] + uVar2 + param_1[2];
  *param_2 = uVar3;
  *param_3 = *param_3 + uVar2 + (uVar3 >> 0x2c | uVar3 * 0x100000);
  *param_2 = *param_2 + lVar4;
  return;
}



/* Entry: 109d35318; end: 109d3546b;  */

undefined4 *
FUN_109d35318(undefined4 *param_1,long *param_2,undefined4 *param_3,undefined4 *param_4,
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



/* Entry: 109d3546c; end: 109d35767;  */

ulong FUN_109d3546c(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_2 - 4 < 5) {
    param_3 = param_3 ^ *(uint *)((long)param_1 + (param_2 - 4));
    uVar5 = (param_3 ^ param_2 + (ulong)(uint)*param_1 * 8) * -0x622015f714c7d297;
    uVar5 = param_3 ^ uVar5 >> 0x2f ^ uVar5;
  }
  else {
    if (param_2 - 9 < 8) {
      uVar6 = *(ulong *)((long)param_1 + (param_2 - 8));
      uVar5 = uVar6 + param_2;
      uVar7 = uVar5 >> (param_2 & 0x3f) | uVar5 << 0x40 - (param_2 & 0x3f);
      uVar5 = (*param_1 ^ param_3 ^ uVar7) * -0x622015f714c7d297;
      uVar5 = (uVar7 ^ uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297;
      return (uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297 ^ uVar6;
    }
    if (0xf < param_2 - 0x11) {
      if (param_2 < 0x21) {
        if (param_2 == 0) {
          return param_3 ^ 0x9ae16a3b2f90404f;
        }
        uVar5 = (ulong)CONCAT11(*(undefined1 *)((long)param_1 + (param_2 >> 1)),(char)*param_1) *
                -0x651e95c4d06fbfb1 ^
                (param_2 + (ulong)*(byte *)((long)param_1 + (param_2 - 1)) * 4) *
                -0x36b62838af619aa9 ^ param_3;
      }
      else {
        lVar2 = *(long *)((long)param_1 + (param_2 - 0x10));
        lVar4 = *(long *)((long)param_1 + (param_2 - 8));
        uVar8 = *param_1 + (lVar2 + param_2) * -0x3c5a37a36834ced9;
        uVar5 = uVar8 + param_1[3];
        uVar6 = uVar8 + param_1[1];
        uVar7 = uVar6 + param_1[2];
        uVar9 = *(long *)((long)param_1 + (param_2 - 0x20)) + param_1[2];
        uVar1 = uVar9 + lVar4;
        lVar3 = (uVar6 >> 7 | uVar6 << 0x39) + (uVar8 >> 0x25 | uVar8 * 0x8000000) +
                (uVar5 >> 0x34 | uVar5 * 0x1000) + (uVar7 >> 0x1f | uVar7 << 0x21);
        uVar5 = *(long *)((long)param_1 + (param_2 - 0x18)) + uVar9;
        uVar6 = uVar5 + lVar2;
        uVar5 = (uVar6 + lVar4 + lVar3) * -0x3c5a37a36834ced9 +
                (uVar7 + param_1[3] + (uVar9 >> 0x25 | uVar9 * 0x8000000) +
                         (uVar1 >> 0x34 | uVar1 * 0x1000) + (uVar5 >> 7 | uVar5 << 0x39) +
                         (uVar6 >> 0x1f | uVar6 << 0x21)) * -0x651e95c4d06fbfb1;
        uVar5 = ((uVar5 ^ uVar5 >> 0x2f) * -0x3c5a37a36834ced9 ^ param_3) + lVar3;
      }
      return (uVar5 ^ uVar5 >> 0x2f) * -0x651e95c4d06fbfb1;
    }
    lVar3 = *(long *)((long)param_1 + (param_2 - 8));
    uVar7 = *param_1 * -0x4b6d499041670d8d - param_1[1];
    uVar9 = lVar3 * -0x651e95c4d06fbfb1 ^ param_3;
    uVar5 = param_1[1] ^ 0xc949d7c7509e6557;
    uVar6 = param_3 + param_2 + (uVar5 >> 0x14 | uVar5 << 0x2c) + *param_1 * -0x4b6d499041670d8d +
            lVar3 * 0x651e95c4d06fbfb1;
    uVar5 = ((uVar7 >> 0x2b | uVar7 * 0x200000) +
             *(long *)((long)param_1 + (param_2 - 0x10)) * -0x3c5a37a36834ced9 +
             (uVar9 >> 0x1e | uVar9 << 0x22) ^ uVar6) * -0x622015f714c7d297;
    uVar5 = uVar6 ^ uVar5 >> 0x2f ^ uVar5;
  }
  return (uVar5 * -0x622015f714c7d297 ^ uVar5 * -0x622015f714c7d297 >> 0x2f) * -0x622015f714c7d297;
}



/* Entry: 109d35768; end: 109d3582b;  */

undefined1  [16] FUN_109d35768(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  
  puVar2 = param_3;
  if ((param_1 != param_2) && (puVar2 = param_1, param_2 != param_3)) {
    if (param_1 + 1 == param_2) {
      uVar1 = *param_1;
      _memmove(param_1,param_1 + 1,(long)param_3 - (long)param_2);
      param_1[(long)param_3 - (long)param_2] = uVar1;
      puVar2 = param_1 + ((long)param_3 - (long)param_2);
    }
    else if (param_2 + 1 == param_3) {
      puVar2 = param_3 + -1;
      uVar1 = *puVar2;
      if ((long)puVar2 - (long)param_1 != 0) {
        _memmove(param_3 + -((long)puVar2 - (long)param_1),param_1,(long)puVar2 - (long)param_1);
      }
      *param_1 = uVar1;
      puVar2 = param_3 + -((long)puVar2 - (long)param_1);
    }
    else {
      FUN_109d3582c(param_1,param_2,param_3);
      puVar2 = param_1;
    }
  }
  auVar3._8_8_ = param_3;
  auVar3._0_8_ = puVar2;
  return auVar3;
}



/* Entry: 109d3582c; end: 109d358ef;  */

undefined1 * FUN_109d3582c(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  
  lVar4 = (long)param_2 - (long)param_1;
  lVar3 = (long)param_3 - (long)param_2;
  lVar5 = lVar4;
  lVar8 = lVar3;
  puVar6 = param_2;
  if (lVar4 == lVar3) {
    for (; (param_1 != param_2 && (puVar6 != param_3)); puVar6 = puVar6 + 1) {
      uVar2 = *param_1;
      *param_1 = *puVar6;
      *puVar6 = uVar2;
      param_1 = param_1 + 1;
    }
  }
  else {
    do {
      lVar7 = lVar8;
      lVar8 = 0;
      if (lVar7 != 0) {
        lVar8 = lVar5 / lVar7;
      }
      lVar8 = lVar5 - lVar8 * lVar7;
      lVar5 = lVar7;
    } while (lVar8 != 0);
    puVar6 = param_1 + lVar7;
    do {
      puVar6 = puVar6 + -1;
      uVar2 = *puVar6;
      puVar9 = puVar6;
      puVar1 = puVar6 + lVar4;
      do {
        puVar10 = puVar1;
        *puVar9 = *puVar10;
        puVar1 = puVar10 + lVar4;
        if ((long)param_3 - (long)puVar10 <= lVar4) {
          puVar1 = param_1 + (lVar4 - ((long)param_3 - (long)puVar10));
        }
        puVar9 = puVar10;
      } while (puVar1 != puVar6);
      *puVar10 = uVar2;
    } while (puVar6 != param_1);
    param_2 = param_1 + lVar3;
  }
  return param_2;
}



/* Entry: 109d358f0; end: 109d359cf;  */

undefined8 *
FUN_109d358f0(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = param_3 + 1;
  if (param_4 < puVar3) {
    lVar4 = (long)param_4 - (long)param_3;
    uStack_38 = param_5;
    _memcpy(param_3,&uStack_38,lVar4);
    if (*param_2 == 0) {
      FUN_109d35128(&uStack_70,param_1,param_1[0xf]);
      param_1[9] = uStack_68;
      param_1[8] = uStack_70;
      param_1[0xb] = uStack_58;
      param_1[10] = uStack_60;
      param_1[0xd] = uStack_48;
      param_1[0xc] = uStack_50;
      param_1[0xe] = uStack_40;
      lVar2 = 0x40;
    }
    else {
      FUN_109d351b0(param_1 + 8,param_1);
      lVar2 = *param_2 + 0x40;
    }
    *param_2 = lVar2;
    puVar1 = (undefined8 *)((long)param_1 + (8 - lVar4));
    puVar3 = param_1;
    if (puVar1 <= param_4) {
      _memcpy(param_1,(long)&uStack_38 + lVar4);
      puVar3 = puVar1;
    }
  }
  else {
    *param_3 = param_5;
  }
  return puVar3;
}



/* Entry: 109d359d0; end: 109d35ab3;  */

undefined8 * FUN_109d359d0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110b40770;
  plVar1 = (long *)param_1[0x4a];
  if (plVar1 == param_1 + 0x47) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_109d35a18;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_109d35a18:
  param_1[0x13] = &PTR_FUN_110b40820;
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



/* Entry: 109d35ab4; end: 109d35b2f;  */

undefined8 *** FUN_109d35ab4(void)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuStack_38;
  long lStack_30;
  char cStack_21;
  
  FUN_109d89040(&ppuStack_38);
  pppuVar1 = (undefined8 ***)ppuStack_38;
  if (-1 < (long)cStack_21) {
    pppuVar1 = &ppuStack_38;
  }
  if (-1 < cStack_21) {
    lStack_30 = (long)cStack_21;
  }
  FUN_109d35f70(pppuVar1,lStack_30);
  if (cStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  return pppuVar1;
}



/* Entry: 109d35b30; end: 109d35bbf;  */

void FUN_109d35b30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  cVar3 = *(char *)(param_2 + 4);
  if ((cVar3 != '\0') && (cVar4 = *(char *)(param_3 + 4), cVar4 != '\0')) {
    if (cVar3 == '\x01') {
      uVar5 = *param_3;
      uVar7 = param_3[3];
      uVar6 = param_3[2];
      param_1[1] = param_3[1];
      *param_1 = uVar5;
      param_1[3] = uVar7;
      param_1[2] = uVar6;
      uVar5 = param_3[4];
    }
    else {
      if (cVar4 != '\x01') {
        uVar5 = param_2[1];
        puVar1 = (undefined8 *)*param_2;
        if (*(char *)((long)param_2 + 0x21) != '\x01') {
          puVar1 = param_2;
          cVar3 = '\x02';
        }
        uVar6 = param_3[1];
        puVar2 = (undefined8 *)*param_3;
        if (*(char *)((long)param_3 + 0x21) != '\x01') {
          cVar4 = '\x02';
          puVar2 = param_3;
        }
        *param_1 = puVar1;
        param_1[1] = uVar5;
        param_1[2] = puVar2;
        param_1[3] = uVar6;
        *(char *)(param_1 + 4) = cVar3;
        *(char *)((long)param_1 + 0x21) = cVar4;
        return;
      }
      uVar5 = *param_2;
      uVar7 = param_2[3];
      uVar6 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar5;
      param_1[3] = uVar7;
      param_1[2] = uVar6;
      uVar5 = param_2[4];
    }
    param_1[4] = uVar5;
    return;
  }
  *(undefined2 *)(param_1 + 4) = 0x100;
  return;
}



/* Entry: 109d35bc0; end: 109d35bff;  */

undefined8 * FUN_109d35bc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b40820;
  if ((undefined8 *)param_1[2] != param_1 + 4) {
    _free();
  }
  return param_1;
}



/* Entry: 109d35c00; end: 109d35d23;  */

undefined4
FUN_109d35c00(ulong param_1,undefined2 param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
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
          if ((int)uVar1 != 0) goto LAB_109d35c68;
        }
        uStack_94 = (undefined4)puVar5[5];
        uVar3 = uStack_94;
        goto LAB_109d35ce0;
      }
LAB_109d35c68:
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
LAB_109d35ce0:
    **(undefined4 **)(param_1 + 0x80) = uVar3;
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



/* Entry: 109d35d24; end: 109d35d3b;  */

undefined4 FUN_109d35d24(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (*(long *)(*(long *)(param_1 + 0xa0) + 0x18) == 0) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 109d35d3c; end: 109d35db7;  */

void FUN_109d35d3c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110b40770;
  plVar1 = (long *)param_1[0x4a];
  if (plVar1 == param_1 + 0x47) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_109d35d84;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_109d35d84:
  param_1[0x13] = &PTR_FUN_110b40820;
  if ((undefined8 *)param_1[0x15] != param_1 + 0x17) {
    _free();
  }
  func_0x000109d2f664(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d35db8; end: 109d35dd3;  */

ulong FUN_109d35db8(long *param_1)

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



/* Entry: 109d35dd4; end: 109d35e4b;  */

void FUN_109d35dd4(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuStack_20;
  int iStack_18;
  undefined1 uStack_14;
  
  if (param_3 == 0) {
    if ((*(char *)(param_1 + 0x94) != '\x01') ||
       (iStack_18 = **(int **)(param_1 + 0x80), *(int *)(param_1 + 0x90) == iStack_18)) {
      return;
    }
  }
  else {
    iStack_18 = **(int **)(param_1 + 0x80);
  }
  ppuStack_20 = &PTR_DAT_110b40888;
  uStack_14 = 1;
  FUN_109df4440(param_1 + 0x98,param_1,&ppuStack_20,param_1 + 0x88,param_2);
  return;
}



/* Entry: 109d35e4c; end: 109d35e77;  */

void FUN_109d35e4c(long param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x94) == '\x01') {
    uVar1 = *(undefined4 *)(param_1 + 0x90);
  }
  else {
    uVar1 = 0;
  }
  **(undefined4 **)(param_1 + 0x80) = uVar1;
  return;
}



/* Entry: 109d35e78; end: 109d35eb7;  */

void FUN_109d35e78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b40820;
  if ((undefined8 *)param_1[2] != param_1 + 4) {
    _free();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109d35eb8; end: 109d35f2f;  */

undefined4 FUN_109d35eb8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 109d35f30; end: 109d35f6f;  */

void FUN_109d35f30(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_109d35f30(param_1,*param_2);
    FUN_109d35f30(param_1,param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 109d35f70; end: 109d35fe3;  */

void FUN_109d35f70(undefined8 param_1,undefined8 param_2)

{
  undefined8 *apuStack_c0 [2];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a8 = 0x1032547698badcfe;
  uStack_b0 = 0xefcdab8967452301;
  uStack_a0 = 0;
  FUN_109df9048(&uStack_b0,param_1,param_2);
  func_0x000109df9114(&uStack_b0,apuStack_c0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)*apuStack_c0[0] != 0) {
    FUN_109d36024();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*apuStack_c0[0]);
    return;
  }
  return;
}



/* Entry: 109d35fe4; end: 109d36023;  */

void FUN_109d35fe4(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_109d36024();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 109d36024; end: 109d36073;  */

void FUN_109d36024(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x48) {
    if (lVar2 + -0x30 != *(long *)(lVar2 + -0x40)) {
      _free();
    }
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 109d36074; end: 109d3615f;  */

void FUN_109d36074(long *param_1)

{
  long *plStack_28;
  
  plStack_28 = param_1 + 8;
  FUN_109d35fe4(&plStack_28);
  if ((long *)*param_1 != param_1 + 3) {
    _free();
  }
  return;
}



/* Entry: 109d36160; end: 109d361df;  */

void FUN_109d36160(long *param_1,long param_2,long param_3)

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



/* Entry: 109d361e0; end: 109d36243;  */

void FUN_109d361e0(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x28;
  FUN_109d36244(&lStack_28);
  if ((0x40 < *(uint *)(param_1 + 0x20)) && (*(long *)(param_1 + 0x18) != 0)) {
    __ZdaPv();
  }
  if ((0x40 < *(uint *)(param_1 + 0x10)) && (*(long *)(param_1 + 8) != 0)) {
    __ZdaPv();
  }
  return;
}



/* Entry: 109d36244; end: 109d362b3;  */

void FUN_109d36244(long *param_1)

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
        lVar2 = lVar2 + -0x30;
        FUN_109d362b4(lVar2);
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



/* Entry: 109d362b4; end: 109d3665f;  */

void FUN_109d362b4(long param_1)

{
  if ((0x40 < *(uint *)(param_1 + 0x28)) && (*(long *)(param_1 + 0x20) != 0)) {
    __ZdaPv();
  }
  if ((0x40 < *(uint *)(param_1 + 0x18)) && (*(long *)(param_1 + 0x10) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 109d36660; end: 109d366ab;  */

void FUN_109d36660(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x28) {
    if (*(long *)(lVar2 + -0x18) != 0) {
      *(long *)(lVar2 + -0x10) = *(long *)(lVar2 + -0x18);
      __ZdlPv();
    }
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 109d366ac; end: 109d366ff;  */

void FUN_109d366ac(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c27d40(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 109d36700; end: 109d36757;  */

ulong FUN_109d36700(long param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  
  plVar2 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar2;
  plVar4 = plVar2;
  if (plVar5 != (long *)0x0) {
    do {
      lVar1 = 8;
      if (param_2 <= (ulong)plVar5[4]) {
        lVar1 = 0;
        plVar4 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar1);
    } while (plVar5 != (long *)0x0);
    if (plVar4 != plVar2) {
      uVar3 = 0;
      if ((ulong)plVar4[4] <= param_2) {
        uVar3 = (ulong)(plVar4 + 4) & 0xfffffffffffffff8;
      }
      goto LAB_109d3674c;
    }
  }
  uVar3 = 0;
LAB_109d3674c:
  return uVar3 | *(byte *)(param_1 + 0x7e);
}



/* Entry: 109d36758; end: 109d36797;  */

void FUN_109d36758(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_109d36758(param_1,*param_2);
    FUN_109d36758(param_1,param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 109d36798; end: 109d3679f;  */

void FUN_109d36798(void)

{
  return;
}



/* Entry: 109d367a0; end: 109d367c3;  */

void FUN_109d367a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110b40910;
  return;
}



/* Entry: 109d367c4; end: 109d367df;  */

void FUN_109d367c4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110b40910;
  return;
}



/* Entry: 109d367e0; end: 109d3681b;  */

long FUN_109d367e0(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b40980);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109d3681c; end: 109d36827;  */

undefined ** FUN_109d3681c(void)

{
  return &PTR_DAT_110b40980;
}



/* Entry: 109d36828; end: 109d368f3;  */

void FUN_109d36828(undefined8 param_1)

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
  
  puVar2 = (undefined8 *)0x1137e3d90;
  FUN_109dffb24(0x1137e3d90,0x1137e3da0,param_1,0x30,auStack_38);
  if (uRam00000001137e3d98 != 0) {
    puVar4 = puRam00000001137e3d90 + (ulong)uRam00000001137e3d98 * 6;
    puVar3 = puRam00000001137e3d90;
    puVar5 = puVar2;
    do {
      uVar6 = *puVar3;
      uVar8 = puVar3[3];
      uVar7 = puVar3[2];
      puVar5[1] = puVar3[1];
      *puVar5 = uVar6;
      puVar5[3] = uVar8;
      puVar5[2] = uVar7;
      puVar5[4] = &PTR_DAT_110b408f0;
      uVar1 = *(undefined4 *)(puVar3 + 5);
      *(undefined1 *)((long)puVar5 + 0x2c) = *(undefined1 *)((long)puVar3 + 0x2c);
      *(undefined4 *)(puVar5 + 5) = uVar1;
      puVar5[4] = &PTR_DAT_110b40888;
      puVar5 = puVar5 + 6;
      puVar3 = puVar3 + 6;
    } while (puVar3 != puVar4);
  }
  if (puRam00000001137e3d90 != (undefined8 *)0x1137e3da0) {
    _free();
  }
  puRam00000001137e3d90 = puVar2;
  uRam00000001137e3d9c = auStack_38[0];
  return;
}



/* Entry: 109d368f4; end: 109d369f7;  */

long FUN_109d368f4(long param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  uVar4 = (ulong)((int)param_4 + 1);
  lVar1 = 0x50;
  FUN_109da2290(0x50,uVar4);
  lVar2 = param_1;
  FUN_109d369f8(param_1,param_2,param_3,param_4);
  FUN_109d8b0bc(lVar1,lVar2,0x22,lVar1 + uVar4 * -0x20,uVar4,param_6);
  *(long *)(lVar1 + 0x40) = param_1;
  if (param_4 != 0) {
    lVar2 = param_4 * 8;
    puVar3 = param_3;
    do {
      lVar2 = lVar2 + -8;
      puVar3 = puVar3 + 1;
      if (lVar2 == 0) break;
      func_0x000109d8bf3c(param_1,*puVar3);
    } while (param_1 != 0);
  }
  *(long *)(lVar1 + 0x48) = param_1;
  func_0x000109d8be98(lVar1,param_2,param_3,param_4,param_5);
  return lVar1;
}



/* Entry: 109d369f8; end: 109d36b0f;  */

void FUN_109d369f8(undefined8 *param_1,long *param_2,undefined8 *param_3,long param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = (long *)*param_2;
  uVar3 = *(uint *)(plVar6 + 1);
  if ((uVar3 & 0xfe) == 0x12) {
    plVar6 = *(long **)plVar6[2];
    uVar3 = *(uint *)(plVar6 + 1);
  }
  if (param_4 != 0) {
    lVar4 = param_4 * 8;
    do {
      lVar4 = lVar4 + -8;
      if (lVar4 == 0) break;
      func_0x000109d8bf3c();
    } while (param_1 != (undefined8 *)0x0);
  }
  if (plVar6[3] == 0) {
    param_1 = (undefined8 *)*plVar6;
    func_0x000109da0270(param_1,uVar3 >> 8);
  }
  else {
    func_0x000109da017c();
  }
  lVar4 = *param_2;
  if ((lVar4 != 0) && (uVar3 = *(uint *)(lVar4 + 8), (uVar3 & 0xfe) == 0x12)) {
LAB_109d36a9c:
    uVar1 = *(undefined4 *)(lVar4 + 0x20);
    if (((uVar3 ^ 0xffffffff) & 0x13) == 0) {
      lVar5 = *(long *)*param_1;
      lVar4 = lVar5 + 0x900;
      FUN_109da1690(lVar4,&stack0xffffffffffffffc0);
      if (*(long *)(lVar4 + 0x10) == 0) {
        puVar2 = (undefined8 *)(lVar5 + 0x7e8);
        FUN_109d34148(puVar2,0x28,3);
        *puVar2 = *param_1;
        puVar2[3] = param_1;
        *(undefined4 *)(puVar2 + 4) = uVar1;
        puVar2[2] = puVar2 + 3;
        puVar2[1] = 0x100000013;
        *(undefined8 **)(lVar4 + 0x10) = puVar2;
      }
      return;
    }
    lVar5 = *(long *)*param_1;
    lVar4 = lVar5 + 0x900;
    FUN_109da1690(lVar4,&stack0xffffffffffffffc0);
    if (*(long *)(lVar4 + 0x10) == 0) {
      puVar2 = (undefined8 *)(lVar5 + 0x7e8);
      FUN_109d34148(puVar2,0x28,3);
      *puVar2 = *param_1;
      puVar2[3] = param_1;
      *(undefined4 *)(puVar2 + 4) = uVar1;
      puVar2[2] = puVar2 + 3;
      puVar2[1] = 0x100000012;
      *(undefined8 **)(lVar4 + 0x10) = puVar2;
    }
    return;
  }
  if (param_4 != 0) {
    param_4 = param_4 << 3;
    do {
      lVar4 = *(long *)*param_3;
      uVar3 = *(uint *)(lVar4 + 8);
      if (lVar4 != 0 && (uVar3 & 0xfe) == 0x12) goto LAB_109d36a9c;
      param_4 = param_4 + -8;
      param_3 = param_3 + 1;
    } while (param_4 != 0);
  }
  return;
}



/* Entry: 109d36b10; end: 109d36b23;  */

undefined1  [16] FUN_109d36b10(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong *puVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_98 [56];
  
  puVar5 = (ulong *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3d == 0) {
    lVar6 = param_2 << 3;
    __Znwm(lVar6);
    auVar18._8_8_ = param_2;
    auVar18._0_8_ = lVar6;
    return auVar18;
  }
  func_0x000104c4f740();
  if ((bRam00000001132fee88 & 1) == 0) {
    iVar4 = 0x132fee88;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      uRam00000001132fee80 = 0xff51afd7ed558ccd;
      if (uRam0000000113834578 != 0) {
        uRam00000001132fee80 = uRam0000000113834578;
      }
      ___cxa_guard_release(0x1132fee88);
    }
  }
  uVar13 = param_2 - (long)puVar5;
  if (0x40 < uVar13) {
    uVar8 = uVar13 & 0xffffffffffffffc0;
    FUN_109d35128(auStack_98,puVar5,uRam00000001132fee80);
    while (uVar8 = uVar8 - 0x40, uVar8 != 0) {
      puVar5 = puVar5 + 8;
      FUN_109d351b0(auStack_98,puVar5);
    }
    if ((uVar13 & 0x3f) != 0) {
      FUN_109d351b0(auStack_98,param_2 - 0x40);
    }
    puVar7 = auStack_98;
    func_0x000109d356d0(puVar7,uVar13);
    auVar19._8_8_ = uVar13;
    auVar19._0_8_ = puVar7;
    return auVar19;
  }
  if (uVar13 - 4 < 5) {
    uVar9 = uRam00000001132fee80 ^ *(uint *)((long)puVar5 + (uVar13 - 4));
    uVar8 = (uVar9 ^ uVar13 + (ulong)(uint)*puVar5 * 8) * -0x622015f714c7d297;
    uVar8 = uVar9 ^ uVar8 >> 0x2f ^ uVar8;
  }
  else {
    if (uVar13 - 9 < 8) {
      uVar9 = *(ulong *)((long)puVar5 + (uVar13 - 8));
      uVar8 = uVar9 + uVar13;
      uVar10 = uVar8 >> (uVar13 & 0x3f) | uVar8 << 0x40 - (uVar13 & 0x3f);
      uVar8 = (*puVar5 ^ uRam00000001132fee80 ^ uVar10) * -0x622015f714c7d297;
      uVar8 = (uVar10 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
      auVar15._0_8_ = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297 ^ uVar9;
      auVar15._8_8_ = uVar13;
      return auVar15;
    }
    if (0xf < uVar13 - 0x11) {
      if (uVar13 < 0x21) {
        if (uVar13 == 0) {
          auVar17._0_8_ = uRam00000001132fee80 ^ 0x9ae16a3b2f90404f;
          auVar17._8_8_ = 0;
          return auVar17;
        }
        uVar8 = (ulong)CONCAT11(*(undefined *)((long)puVar5 + (uVar13 >> 1)),(char)*puVar5) *
                -0x651e95c4d06fbfb1 ^
                (uVar13 + (ulong)*(byte *)((long)puVar5 + (uVar13 - 1)) * 4) * -0x36b62838af619aa9 ^
                uRam00000001132fee80;
      }
      else {
        lVar2 = *(long *)((long)puVar5 + (uVar13 - 0x10));
        lVar3 = *(long *)((long)puVar5 + (uVar13 - 8));
        uVar11 = *puVar5 + (lVar2 + uVar13) * -0x3c5a37a36834ced9;
        uVar8 = uVar11 + puVar5[3];
        uVar9 = uVar11 + puVar5[1];
        uVar10 = uVar9 + puVar5[2];
        uVar12 = *(long *)((long)puVar5 + (uVar13 - 0x20)) + puVar5[2];
        uVar1 = uVar12 + lVar3;
        lVar6 = (uVar9 >> 7 | uVar9 << 0x39) + (uVar11 >> 0x25 | uVar11 * 0x8000000) +
                (uVar8 >> 0x34 | uVar8 * 0x1000) + (uVar10 >> 0x1f | uVar10 << 0x21);
        uVar8 = *(long *)((long)puVar5 + (uVar13 - 0x18)) + uVar12;
        uVar9 = uVar8 + lVar2;
        uVar8 = (uVar9 + lVar3 + lVar6) * -0x3c5a37a36834ced9 +
                (uVar10 + puVar5[3] + (uVar12 >> 0x25 | uVar12 * 0x8000000) +
                          (uVar1 >> 0x34 | uVar1 * 0x1000) + (uVar8 >> 7 | uVar8 << 0x39) +
                          (uVar9 >> 0x1f | uVar9 << 0x21)) * -0x651e95c4d06fbfb1;
        uVar8 = ((uVar8 ^ uVar8 >> 0x2f) * -0x3c5a37a36834ced9 ^ uRam00000001132fee80) + lVar6;
      }
      auVar16._0_8_ = (uVar8 ^ uVar8 >> 0x2f) * -0x651e95c4d06fbfb1;
      auVar16._8_8_ = uVar13;
      return auVar16;
    }
    lVar6 = *(long *)((long)puVar5 + (uVar13 - 8));
    uVar10 = *puVar5 * -0x4b6d499041670d8d - puVar5[1];
    uVar12 = lVar6 * -0x651e95c4d06fbfb1 ^ uRam00000001132fee80;
    uVar8 = puVar5[1] ^ 0xc949d7c7509e6557;
    uVar9 = uRam00000001132fee80 + uVar13 + (uVar8 >> 0x14 | uVar8 << 0x2c) +
            *puVar5 * -0x4b6d499041670d8d + lVar6 * 0x651e95c4d06fbfb1;
    uVar8 = ((uVar10 >> 0x2b | uVar10 * 0x200000) +
             *(long *)((long)puVar5 + (uVar13 - 0x10)) * -0x3c5a37a36834ced9 +
             (uVar12 >> 0x1e | uVar12 << 0x22) ^ uVar9) * -0x622015f714c7d297;
    uVar8 = uVar9 ^ uVar8 >> 0x2f ^ uVar8;
  }
  auVar14._0_8_ =
       (uVar8 * -0x622015f714c7d297 ^ uVar8 * -0x622015f714c7d297 >> 0x2f) * -0x622015f714c7d297;
  auVar14._8_8_ = uVar13;
  return auVar14;
}



/* Entry: 109d36b24; end: 109d36b57;  */

undefined1  [16] FUN_109d36b24(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_88 [56];
  
  if (param_2 >> 0x3d == 0) {
    lVar5 = param_2 << 3;
    __Znwm(lVar5);
    auVar17._8_8_ = param_2;
    auVar17._0_8_ = lVar5;
    return auVar17;
  }
  func_0x000104c4f740();
  if ((bRam00000001132fee88 & 1) == 0) {
    iVar4 = 0x132fee88;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      uRam00000001132fee80 = 0xff51afd7ed558ccd;
      if (uRam0000000113834578 != 0) {
        uRam00000001132fee80 = uRam0000000113834578;
      }
      ___cxa_guard_release(0x1132fee88);
    }
  }
  uVar12 = param_2 - (long)param_1;
  if (0x40 < uVar12) {
    uVar7 = uVar12 & 0xffffffffffffffc0;
    FUN_109d35128(auStack_88,param_1,uRam00000001132fee80);
    while (uVar7 = uVar7 - 0x40, uVar7 != 0) {
      param_1 = param_1 + 8;
      FUN_109d351b0(auStack_88,param_1);
    }
    if ((uVar12 & 0x3f) != 0) {
      FUN_109d351b0(auStack_88,param_2 - 0x40);
    }
    puVar6 = auStack_88;
    func_0x000109d356d0(puVar6,uVar12);
    auVar18._8_8_ = uVar12;
    auVar18._0_8_ = puVar6;
    return auVar18;
  }
  if (uVar12 - 4 < 5) {
    uVar8 = uRam00000001132fee80 ^ *(uint *)((long)param_1 + (uVar12 - 4));
    uVar7 = (uVar8 ^ uVar12 + (ulong)(uint)*param_1 * 8) * -0x622015f714c7d297;
    uVar7 = uVar8 ^ uVar7 >> 0x2f ^ uVar7;
  }
  else {
    if (uVar12 - 9 < 8) {
      uVar8 = *(ulong *)((long)param_1 + (uVar12 - 8));
      uVar7 = uVar8 + uVar12;
      uVar9 = uVar7 >> (uVar12 & 0x3f) | uVar7 << 0x40 - (uVar12 & 0x3f);
      uVar7 = (*param_1 ^ uRam00000001132fee80 ^ uVar9) * -0x622015f714c7d297;
      uVar7 = (uVar9 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
      auVar14._0_8_ = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297 ^ uVar8;
      auVar14._8_8_ = uVar12;
      return auVar14;
    }
    if (0xf < uVar12 - 0x11) {
      if (uVar12 < 0x21) {
        if (uVar12 == 0) {
          auVar16._0_8_ = uRam00000001132fee80 ^ 0x9ae16a3b2f90404f;
          auVar16._8_8_ = 0;
          return auVar16;
        }
        uVar7 = (ulong)CONCAT11(*(undefined1 *)((long)param_1 + (uVar12 >> 1)),(char)*param_1) *
                -0x651e95c4d06fbfb1 ^
                (uVar12 + (ulong)*(byte *)((long)param_1 + (uVar12 - 1)) * 4) * -0x36b62838af619aa9
                ^ uRam00000001132fee80;
      }
      else {
        lVar2 = *(long *)((long)param_1 + (uVar12 - 0x10));
        lVar3 = *(long *)((long)param_1 + (uVar12 - 8));
        uVar10 = *param_1 + (lVar2 + uVar12) * -0x3c5a37a36834ced9;
        uVar7 = uVar10 + param_1[3];
        uVar8 = uVar10 + param_1[1];
        uVar9 = uVar8 + param_1[2];
        uVar11 = *(long *)((long)param_1 + (uVar12 - 0x20)) + param_1[2];
        uVar1 = uVar11 + lVar3;
        lVar5 = (uVar8 >> 7 | uVar8 << 0x39) + (uVar10 >> 0x25 | uVar10 * 0x8000000) +
                (uVar7 >> 0x34 | uVar7 * 0x1000) + (uVar9 >> 0x1f | uVar9 << 0x21);
        uVar7 = *(long *)((long)param_1 + (uVar12 - 0x18)) + uVar11;
        uVar8 = uVar7 + lVar2;
        uVar7 = (uVar8 + lVar3 + lVar5) * -0x3c5a37a36834ced9 +
                (uVar9 + param_1[3] + (uVar11 >> 0x25 | uVar11 * 0x8000000) +
                         (uVar1 >> 0x34 | uVar1 * 0x1000) + (uVar7 >> 7 | uVar7 << 0x39) +
                         (uVar8 >> 0x1f | uVar8 << 0x21)) * -0x651e95c4d06fbfb1;
        uVar7 = ((uVar7 ^ uVar7 >> 0x2f) * -0x3c5a37a36834ced9 ^ uRam00000001132fee80) + lVar5;
      }
      auVar15._0_8_ = (uVar7 ^ uVar7 >> 0x2f) * -0x651e95c4d06fbfb1;
      auVar15._8_8_ = uVar12;
      return auVar15;
    }
    lVar5 = *(long *)((long)param_1 + (uVar12 - 8));
    uVar9 = *param_1 * -0x4b6d499041670d8d - param_1[1];
    uVar11 = lVar5 * -0x651e95c4d06fbfb1 ^ uRam00000001132fee80;
    uVar7 = param_1[1] ^ 0xc949d7c7509e6557;
    uVar8 = uRam00000001132fee80 + uVar12 + (uVar7 >> 0x14 | uVar7 << 0x2c) +
            *param_1 * -0x4b6d499041670d8d + lVar5 * 0x651e95c4d06fbfb1;
    uVar7 = ((uVar9 >> 0x2b | uVar9 * 0x200000) +
             *(long *)((long)param_1 + (uVar12 - 0x10)) * -0x3c5a37a36834ced9 +
             (uVar11 >> 0x1e | uVar11 << 0x22) ^ uVar8) * -0x622015f714c7d297;
    uVar7 = uVar8 ^ uVar7 >> 0x2f ^ uVar7;
  }
  auVar13._0_8_ =
       (uVar7 * -0x622015f714c7d297 ^ uVar7 * -0x622015f714c7d297 >> 0x2f) * -0x622015f714c7d297;
  auVar13._8_8_ = uVar12;
  return auVar13;
}



/* Entry: 109d36b58; end: 109d36c63;  */

undefined1 * FUN_109d36b58(ulong *param_1,long param_2)

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



/* Entry: 109d36c64; end: 109d36d1f;  */

undefined8 * FUN_109d36c64(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110b5bca8;
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



/* Entry: 109d36d20; end: 109d36d5b;  */

bool FUN_109d36d20(long param_1,long param_2)

{
  if ((*(char *)(param_2 + 0xc) == '\x01') && (*(char *)(param_1 + 0xc) == '\x01')) {
    return *(int *)(param_1 + 8) != *(int *)(param_2 + 8);
  }
  return false;
}


