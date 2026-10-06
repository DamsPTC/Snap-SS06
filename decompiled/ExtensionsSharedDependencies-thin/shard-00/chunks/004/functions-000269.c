/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0054a8a4; end: 0054a8bb;  */

long FUN_0054a8a4(long param_1)

{
  FUN_0054a8bc();
  return param_1 + -0xd;
}



/* Entry: 0054a8bc; end: 0054a8ff;  */

long FUN_0054a8bc(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 6;
  if (0xba < param_1) {
    uVar4 = 0xc;
  }
  iVar1 = -0xe80;
  if (0xba < param_1) {
    iVar1 = -0xb8000;
  }
  uVar2 = 3;
  if (0x42 < param_1) {
    uVar2 = uVar4;
  }
  iVar3 = -0x10;
  if (0x42 < param_1) {
    iVar3 = iVar1;
  }
  return (long)(int)((param_1 << (ulong)uVar2) + iVar3);
}



/* Entry: 0054a900; end: 0054a92b;  */

byte * FUN_0054a900(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    __ZdlPv(*(undefined8 *)param_1);
  }
  return param_1;
}



/* Entry: 0054a92c; end: 0054a967;  */

void FUN_0054a92c(byte *param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x0054aec4();
  if ((*param_1 & 1) != 0) {
    func_0x00557990();
  }
  uVar1 = *unaff_x20;
  unaff_x19[1] = unaff_x20[1];
  *unaff_x19 = uVar1;
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  return;
}



/* Entry: 0054a968; end: 0054a9ab;  */

undefined8 * FUN_0054a968(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1 = puVar1 + 2;
  }
  else {
    puVar1 = param_1;
    FUN_0054a9ac();
  }
  param_1[1] = puVar1;
  return puVar1 + -2;
}



/* Entry: 0054a9ac; end: 0054aa43;  */

long FUN_0054a9ac(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  func_0x0054aec4();
  FUN_0054aa44();
  FUN_0054ab14(auStack_48,param_1,unaff_x19[1] - *unaff_x19 >> 4,unaff_x19 + 2);
  uVar2 = *unaff_x20;
  puStack_38[1] = unaff_x20[1];
  *puStack_38 = uVar2;
  puStack_38 = puStack_38 + 2;
  FUN_0054aa84();
  lVar1 = unaff_x19[1];
  FUN_0054ab98(auStack_48);
  return lVar1;
}



/* Entry: 0054aa44; end: 0054aa83;  */

ulong FUN_0054aa44(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar3;
  
  if (param_2 >> 0x3c == 0) {
    uVar2 = param_1[2] - *param_1 >> 3;
    if (uVar2 <= param_2) {
      uVar2 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar2 = 0xfffffffffffffff;
    }
    return uVar2;
  }
  FUN_0054ab00();
  func_0x0054ae24();
  uVar3 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  uVar2 = uVar3;
  _memcpy(uVar3);
  unaff_x19[1] = uVar3;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return uVar2;
}



/* Entry: 0054aa84; end: 0054aaff;  */

void FUN_0054aa84(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x0054ae24();
  lVar2 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 0054ab00; end: 0054ab13;  */

long * FUN_0054ab00(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  char *pcVar2;
  
  pcVar2 = "vector";
  FUN_0040d774();
  *(long *)((long)pcVar2 + 0x18) = 0;
  *(long *)((long)pcVar2 + 0x20) = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0054ab5c();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *(long *)pcVar2 = param_4;
  *(long *)((long)pcVar2 + 8) = lVar1;
  *(long *)((long)pcVar2 + 0x10) = lVar1;
  *(long *)((long)pcVar2 + 0x18) = param_4 + param_2 * 0x10;
  return (long *)pcVar2;
}



/* Entry: 0054ab14; end: 0054ab7b;  */

long * FUN_0054ab14(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0054ab5c();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 0054ab7c; end: 0054ab97;  */

long * FUN_0054ab7c(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(plVar1);
    return plVar1;
  }
  FUN_0040cee8();
  FUN_0054abc4();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 0054ab98; end: 0054abc3;  */

long * FUN_0054ab98(long *param_1)

{
  FUN_0054abc4();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 0054abc4; end: 0054abe7;  */

void FUN_0054abc4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 0054abe8; end: 0054ac0f;  */

undefined8 * FUN_0054abe8(undefined8 *param_1)

{
  FUN_00567fe4(*param_1);
  return param_1;
}



/* Entry: 0054ac10; end: 0054ac4b;  */

undefined1  [16] FUN_0054ac10(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  
  FUN_0054ac4c(param_1,*param_2,param_2[1]);
  uVar1 = param_1[1];
  puVar2 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar2 = param_1;
  }
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = puVar2;
  return auVar3;
}



/* Entry: 0054ac4c; end: 0054ace7;  */

ulong FUN_0054ac4c(ulong param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  undefined1 uVar2;
  undefined2 *puVar3;
  long lVar4;
  ulong uVar5;
  long alStack_48 [2];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  FUN_0054ace8(param_2,alStack_48);
  uVar2 = param_2 == (param_3 & 0xff);
  if (param_2 < (param_3 & 0xff)) {
    lVar4 = (param_3 >> 8 & 0xff) * 0x101010101010101;
    lVar1 = -param_2;
    param_2 = param_3 & 0xff;
    *(long *)((long)alStack_48 + lVar1) = lVar4;
    *(long *)((long)alStack_48 + lVar1 + 8) = lVar4;
  }
  puVar3 = (undefined2 *)((long)&uStack_38 - param_2);
  FUN_00574800();
  FUN_0054ad7c(uStack_38);
  if ((bool)uVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  for (uVar5 = 0x38; uVar5 != 0xfffffffffffffff8; uVar5 = uVar5 - 8) {
    *puVar3 = *(undefined2 *)(&UNK_00814a9b + (param_1 >> (uVar5 & 0x3f) & 0xff) * 2);
    puVar3 = puVar3 + 1;
  }
  return (ulong)(0x10 - ((uint)LZCOUNT(param_1 | 1) >> 2));
}



/* Entry: 0054ace8; end: 0054ad27;  */

int FUN_0054ace8(ulong param_1,undefined2 *param_2)

{
  ulong uVar1;
  
  for (uVar1 = 0x38; uVar1 != 0xfffffffffffffff8; uVar1 = uVar1 - 8) {
    *param_2 = *(undefined2 *)(&UNK_00814a9b + (param_1 >> (uVar1 & 0x3f) & 0xff) * 2);
    param_2 = param_2 + 1;
  }
  return 0x10 - ((uint)LZCOUNT(param_1 | 1) >> 2);
}



/* Entry: 0054ad28; end: 0054ad7b;  */

long FUN_0054ad28(long param_1,undefined4 param_2,ulong param_3,long *param_4,undefined8 *param_5)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(ulong *)(param_1 + 0x48) = param_3 & 0xffffffff;
  *(undefined8 *)(param_1 + 0x50) = 0x7ff8000000000000;
  *(undefined4 *)(param_1 + 0x58) = param_2;
  *(undefined4 *)(param_1 + 0x5c) = 0x80000000;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  lVar1 = param_1;
  FUN_00538bac(param_1,*param_5,param_5[1]);
  *param_4 = lVar1;
  return param_1;
}



/* Entry: 0054ad7c; end: 0054aecf;  */

void FUN_0054ad7c(void)

{
  return;
}



/* Entry: 0054aed0; end: 0054af17;  */

void FUN_0054aed0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  uint extraout_w9;
  
  plVar1 = param_1;
  FUN_0054af18(param_1,0,0xffffffff);
  lVar2 = param_1[1];
  if (plVar1 == (long *)0x0) {
    *(undefined4 *)(param_1 + 10) = 1;
  }
  else {
    func_0x0054cdbc();
    lVar2 = extraout_x8 + (int)(extraout_w9 & (int)extraout_w9 >> 0x1f);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 0054af18; end: 0054b127;  */

undefined8 * FUN_0054af18(long param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  uint uStack_4c;
  undefined8 *puStack_48;
  
  puVar8 = *(undefined8 **)(param_1 + 0x10);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)(param_1 + 0x28);
    if (puVar8 == puVar2) {
      uVar9 = **(undefined8 **)(param_1 + 8);
      *(undefined8 *)(param_1 + 0x30) = (*(undefined8 **)(param_1 + 8))[1];
      *puVar2 = uVar9;
      if (*(int *)(param_1 + 0x54) < 1) {
LAB_0054b09c:
        if (*(long *)(param_1 + 0x48) == 2) {
          *(long *)(param_1 + 0x48) = *(long *)(param_1 + 8) - (long)puVar8;
        }
        *(long *)(param_1 + 8) = param_1 + 0x38;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        puVar8 = puVar2;
      }
      else {
        if (-1 < param_3) {
          puStack_48 = (undefined8 *)((long)puVar2 + (long)param_2);
          puVar3 = (undefined8 *)(param_1 + 0x38);
code_r0x0054afb0:
          if (((puVar3 <= puStack_48) || (FUN_00538a80(), puStack_48 == (undefined8 *)0x0)) ||
             (puVar3 < puStack_48)) goto LAB_0054b07c;
          if (uStack_4c == 0) goto LAB_0054b09c;
          switch(uStack_4c & 7) {
          case 0:
            FUN_00538888();
            if (puStack_48 == (undefined8 *)0x0) break;
            goto code_r0x0054afb0;
          case 1:
            puStack_48 = puStack_48 + 1;
            goto code_r0x0054afb0;
          case 2:
            iVar5 = (int)&puStack_48;
            FUN_00533034();
            if ((puStack_48 == (undefined8 *)0x0) || ((long)puVar3 - (long)puStack_48 < (long)iVar5)
               ) break;
            puStack_48 = (undefined8 *)((long)puStack_48 + (long)iVar5);
            goto code_r0x0054afb0;
          case 3:
            param_3 = param_3 + 1;
            goto code_r0x0054afb0;
          case 4:
            goto code_r0x0054b00c;
          case 5:
            puStack_48 = (undefined8 *)((long)puStack_48 + 4);
            goto code_r0x0054afb0;
          default:
            break;
          }
        }
LAB_0054b07c:
        do {
          plVar6 = *(long **)(param_1 + 0x20);
          (**(code **)(*plVar6 + 0x10))(plVar6,&puStack_48,param_1 + 0x18);
          if ((int)plVar6 == 0) {
            *(undefined4 *)(param_1 + 0x54) = 0;
            goto LAB_0054b09c;
          }
          uVar4 = *(uint *)(param_1 + 0x18);
          *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - uVar4;
          if (0x10 < (int)uVar4) {
            lVar7 = param_1 + 0x38;
            uVar9 = *puStack_48;
            *(undefined8 *)(param_1 + 0x40) = puStack_48[1];
            *(undefined8 *)(param_1 + 0x38) = uVar9;
            *(undefined8 **)(param_1 + 0x10) = puStack_48;
            goto LAB_0054b0f4;
          }
        } while ((int)uVar4 < 1);
        _memcpy(param_1 + 0x38,puStack_48,(ulong)uVar4);
        lVar7 = (long)puVar2 + (ulong)uVar4;
        *(undefined8 **)(param_1 + 0x10) = puVar2;
LAB_0054b0f4:
        *(long *)(param_1 + 8) = lVar7;
        puVar8 = puVar2;
        if (1 < *(ulong *)(param_1 + 0x48)) {
          *(undefined8 *)(param_1 + 0x48) = 1;
        }
      }
    }
    else {
      *(long *)(param_1 + 8) = (long)puVar8 + (long)*(int *)(param_1 + 0x18) + -0x10;
      *(undefined8 **)(param_1 + 0x10) = puVar2;
      if (*(long *)(param_1 + 0x48) == 1) {
        *(undefined8 *)(param_1 + 0x48) = 2;
      }
    }
  }
  return puVar8;
code_r0x0054b00c:
  bVar1 = param_3 < 1;
  param_3 = param_3 + -1;
  if (bVar1) goto LAB_0054b09c;
  goto code_r0x0054afb0;
}



/* Entry: 0054b128; end: 0054b30b;  */

undefined1  [16] FUN_0054b128(long *param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  uint extraout_w9;
  undefined1 auVar5 [16];
  
  if (*(int *)((long)param_1 + 0x1c) < (int)param_2) {
    return ZEXT816(1) << 0x40;
  }
  do {
    plVar2 = param_1;
    FUN_0054af18(param_1,param_2,param_3);
    if (plVar2 == (long *)0x0) {
      uVar4 = 1;
      if ((int)param_2 == 0) {
        lVar3 = param_1[1];
        *param_1 = lVar3;
        *(undefined4 *)(param_1 + 10) = 1;
      }
      else {
        lVar3 = 0;
      }
      goto LAB_0054b1a0;
    }
    func_0x0054cdbc(param_1[1]);
    lVar3 = (long)plVar2 + (long)(int)param_2;
    uVar1 = (int)lVar3 - (int)extraout_x8;
    param_2 = (ulong)uVar1;
  } while (-1 < (int)uVar1);
  uVar4 = 0;
  *param_1 = extraout_x8 + (int)(extraout_w9 & (int)extraout_w9 >> 0x1f);
LAB_0054b1a0:
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = lVar3;
  return auVar5;
}



/* Entry: 0054b30c; end: 0054b3db;  */

void FUN_0054b30c(long param_1,long param_2,int param_3,long param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if ((long)param_3 <= (lVar2 - param_2) + (long)*(int *)(param_1 + 0x1c)) {
    lVar2 = (long)*(char *)(param_4 + 0x17);
    if (lVar2 < 0) {
      lVar2 = *(long *)(param_4 + 8);
    }
    func_0x0054cd4c(lVar2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(param_4);
    lVar2 = *(long *)(param_1 + 8);
  }
  iVar1 = ((int)lVar2 - (int)param_2) + 0x10;
  do {
    if (*(long *)(param_1 + 0x10) == 0) {
      return;
    }
    func_0x0054bbe4(param_4,param_2,iVar1);
    if (*(int *)(param_1 + 0x1c) < 0x11) {
      return;
    }
    param_2 = param_1;
    FUN_0054aed0();
    if (param_2 == 0) {
      return;
    }
    param_3 = param_3 - iVar1;
    param_2 = param_2 + 0x10;
    iVar1 = (*(int *)(param_1 + 8) - (int)param_2) + 0x10;
  } while (iVar1 < param_3);
  func_0x0054bbe4(param_4,param_2,param_3);
  return;
}



/* Entry: 0054b3dc; end: 0054b5a7;  */

void FUN_0054b3dc(long *param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = (int)param_1[1] - (int)param_2;
  iVar5 = (int)param_3;
  if (param_1[4] == 0) {
    if (iVar5 <= iVar4 + 0x10) {
      func_0x0054cd70(param_1,param_2,(long)iVar5);
      return;
    }
    iVar4 = ((int)param_1[1] - (int)param_2) + 0x10;
    do {
      if (param_1[2] == 0) {
        return;
      }
      func_0x0054bbec(param_4,param_2,iVar4);
      if (*(int *)((long)param_1 + 0x1c) < 0x11) {
        return;
      }
      param_2 = param_1;
      FUN_0054aed0();
      if (param_2 == (long *)0x0) {
        return;
      }
      uVar2 = (int)param_3 - iVar4;
      param_3 = (ulong)uVar2;
      param_2 = param_2 + 2;
      iVar4 = ((int)param_1[1] - (int)param_2) + 0x10;
    } while (iVar4 < (int)uVar2);
    func_0x0054bbec(param_4,param_2,param_3);
    return;
  }
  iVar1 = *(int *)((long)param_1 + 0x1c) + iVar4;
  if (iVar1 < iVar5) {
    return;
  }
  iVar6 = iVar4 + 0x10;
  if ((iVar6 < 0x21) && (plVar3 = param_1 + 5, (ulong)((long)param_2 - (long)plVar3) < 0x21)) {
    if (((iVar4 == 0) && ((long *)param_1[2] != (long *)0x0)) && ((long *)param_1[2] != plVar3)) {
      FUN_00557c68(param_4);
      iVar6 = (int)param_1[3];
    }
    else {
      param_3 = (ulong)(uint)(iVar5 - iVar6);
      func_0x0054cd70(param_1,param_2,(long)iVar6);
      if ((long *)param_1[2] == plVar3) goto LAB_0054b504;
      if ((long *)param_1[2] == (long *)0x0) {
        *(undefined4 *)(param_1 + 10) = 1;
        return;
      }
      iVar6 = (int)param_1[3] + -0x10;
    }
  }
  else {
    FUN_00557c68(param_4);
  }
  FUN_0054a4f0(param_1,iVar6);
LAB_0054b504:
  if ((int)param_3 <= *(int *)((long)param_1 + 0x54)) {
    *(int *)((long)param_1 + 0x54) = *(int *)((long)param_1 + 0x54) - (int)param_3;
    plVar3 = (long *)param_1[4];
    (**(code **)(*plVar3 + 0x30))(plVar3,param_4,param_3);
    if ((int)plVar3 != 0) {
      plVar3 = param_1;
      FUN_0054b5a8(param_1,param_1[4]);
      uVar2 = (iVar1 - iVar5) + ((int)plVar3 - (int)param_1[1]);
      *(uint *)((long)param_1 + 0x1c) = uVar2;
      *param_1 = param_1[1] + (long)(int)(uVar2 & (int)uVar2 >> 0x1f);
    }
  }
  return;
}



/* Entry: 0054b5a8; end: 0054b7db;  */

long * FUN_0054b5a8(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  uint uStack_2c;
  long *plStack_28;
  
  param_1[4] = (long)param_2;
  *(undefined4 *)((long)param_1 + 0x1c) = 0x7fffffff;
  (**(code **)(*param_2 + 0x10))(param_2,&plStack_28,&uStack_2c);
  if ((int)param_2 == 0) {
    *(undefined4 *)((long)param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    plVar2 = param_1 + 5;
    param_1[1] = (long)plVar2;
    param_1[2] = 0;
    *param_1 = (long)plVar2;
  }
  else {
    *(uint *)((long)param_1 + 0x54) = *(int *)((long)param_1 + 0x54) - uStack_2c;
    if ((int)uStack_2c < 0x11) {
      *param_1 = (long)(param_1 + 7);
      param_1[1] = (long)(param_1 + 7);
      param_1[2] = (long)(param_1 + 5);
      plVar2 = (long *)((long)param_1 + (0x48 - (long)(int)uStack_2c));
      _memcpy(plVar2,plStack_28);
    }
    else {
      *(uint *)((long)param_1 + 0x1c) = (*(int *)((long)param_1 + 0x1c) - uStack_2c) + 0x10;
      lVar1 = (long)plStack_28 + ((ulong)uStack_2c - 0x10);
      *param_1 = lVar1;
      param_1[1] = lVar1;
      param_1[2] = (long)(param_1 + 5);
      plVar2 = plStack_28;
      if (param_1[9] == 1) {
        param_1[9] = 2;
      }
    }
  }
  return plVar2;
}



/* Entry: 0054b7dc; end: 0054b82f;  */

void FUN_0054b7dc(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0054b798(param_1 << 3 | 2,param_4);
  func_0x0054b798(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)
            (param_4,param_2,param_3);
  return;
}



/* Entry: 0054b830; end: 0054b90b;  */

undefined1  [16] FUN_0054b830(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  iVar1 = param_2 + (uint)*(byte *)(param_1 + 2) * 0x4000 + -0x4000;
  if ((char)*(byte *)(param_1 + 2) < '\0') {
    iVar1 = iVar1 + (uint)*(byte *)(param_1 + 3) * 0x200000 + -0x200000;
    if ((char)*(byte *)(param_1 + 3) < '\0') {
      if (*(char *)(param_1 + 4) < 0) {
        return ZEXT816(0);
      }
      iVar1 = iVar1 + *(char *)(param_1 + 4) * 0x10000000 + -0x10000000;
      lVar2 = 4;
    }
    else {
      lVar2 = 3;
    }
  }
  else {
    lVar2 = 2;
  }
  auVar3._8_4_ = iVar1;
  auVar3._0_8_ = param_1 + lVar2 + 1;
  auVar3._12_4_ = 0;
  return auVar3;
}



/* Entry: 0054b90c; end: 0054bac3;  */

void FUN_0054b90c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lStack_28;
  
  plVar1 = &lStack_28;
  lStack_28 = param_2;
  FUN_00533034(plVar1);
  if (lStack_28 != 0) {
    FUN_00533074(param_3,lStack_28,plVar1,param_1);
  }
  return;
}



/* Entry: 0054bac4; end: 0054baeb;  */

void FUN_0054bac4(undefined4 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_0054baec(param_1,&uStack_18);
  return;
}



/* Entry: 0054baec; end: 0054bbd7;  */

undefined8 * FUN_0054baec(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 auStack_40 [2];
  
  puVar1 = auStack_40;
  if ((int)((ulong)param_1 >> 3) == 0) {
LAB_0054bb58:
    param_1 = (undefined8 *)0x0;
  }
  else {
    switch((ulong)param_1 & 7) {
    case 0:
      FUN_00538888(param_3,auStack_40);
      param_1 = param_3;
      if (param_3 != (undefined8 *)0x0) {
        func_0x0054cd64();
        func_0x0054c778();
      }
      break;
    case 1:
      func_0x0054cd64(param_1,param_2,*param_3);
      func_0x0054c7b8();
      param_1 = param_3 + 1;
      break;
    case 2:
      func_0x0054cd64();
      FUN_0054c838();
      break;
    case 3:
      func_0x0054cd64();
      FUN_0054c8c8();
      break;
    case 4:
      FUN_0077670c(auStack_40,
                   "bazel-out/ios_arm64-opt-ios-arm64-min15.0-ST-d6543be58b10/bin/external/protobuf+/src/google/protobuf/_virtual_includes/protobuf_lite/google/protobuf/parse_context.h"
                   ,0x516);
      func_0x0054c980(auStack_40,"Can\'t happen");
      func_0x0054cc78();
      puVar1 = (undefined8 *)*puVar1;
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)
                (puVar1);
      return puVar1;
    case 5:
      func_0x0054cd64(param_1,param_2,*(undefined4 *)param_3);
      func_0x0054c9b8();
      param_1 = (undefined8 *)((long)param_3 + 4);
      break;
    default:
      goto LAB_0054bb58;
    }
  }
  return param_1;
}



/* Entry: 0054bbd8; end: 0054bbf7;  */

void FUN_0054bbd8(undefined8 *param_1,undefined8 param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)
            (*param_1,param_2,(long)param_3);
  return;
}



/* Entry: 0054bbf8; end: 0054bd3f;  */

undefined8 * FUN_0054bbf8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *unaff_x21;
  int iVar5;
  long lVar6;
  int in_stack_00000000;
  undefined4 in_stack_00000014;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined2 in_stack_00000038;
  undefined8 in_stack_00000048;
  undefined4 uStack_38;
  
  func_0x0054cdd0();
  in_stack_00000048 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  puVar1 = &stack0x00000018;
  in_stack_00000018 = param_2;
  FUN_00533034();
  func_0x0054cd00();
  puVar3 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    while( true ) {
      iVar5 = (int)param_1[1] - (int)puVar1;
      iVar4 = (int)unaff_x21;
      in_ZR = iVar4 == iVar5;
      if (iVar4 <= iVar5) break;
      func_0x0054cd84();
      puVar3 = (undefined8 *)0x0;
      in_stack_00000018 = puVar1;
      if (puVar1 == (undefined8 *)0x0) goto LAB_0054bcf8;
      puVar3 = (undefined8 *)param_1[1];
      lVar6 = (long)iVar4 - (long)iVar5;
      if ((int)lVar6 < 0x11) {
        in_stack_00000038 = 0;
        in_stack_00000030 = 0;
        in_stack_00000028 = puVar3[1];
        in_stack_00000020 = *puVar3;
        in_stack_00000014 = 0x10;
        puVar2 = (undefined1 *)register0x00000008;
        in_stack_00000000 = (int)lVar6;
        FUN_005389ec();
        if (puVar2 != (undefined1 *)0x0) goto LAB_0054bd18;
        unaff_x21 = (undefined8 *)((long)&stack0x00000020 + lVar6);
        puVar1 = (undefined8 *)((long)&stack0x00000020 + (long)((int)puVar1 - (int)puVar3));
        func_0x0054cd84(puVar1,unaff_x21);
        in_ZR = puVar1 == unaff_x21;
        if ((bool)in_ZR) {
          puVar3 = (undefined8 *)(param_1[1] + lVar6);
        }
        else {
LAB_0054bcf4:
          puVar3 = (undefined8 *)0x0;
        }
        goto LAB_0054bcf8;
      }
      in_ZR = *(int *)((long)param_1 + 0x1c) == 0x11;
      if (*(int *)((long)param_1 + 0x1c) < 0x11) goto LAB_0054bcf4;
      puVar3 = param_1;
      FUN_0054aed0();
      if (puVar3 == (undefined8 *)0x0) goto LAB_0054bcf8;
      func_0x0054cba0();
      puVar1 = puVar3;
    }
    param_1 = (undefined8 *)((long)puVar1 + (long)iVar4);
    func_0x0054cd84();
    in_ZR = param_1 == puVar1;
    puVar3 = puVar1;
    if (!(bool)in_ZR) {
      puVar3 = (undefined8 *)0x0;
    }
  }
LAB_0054bcf8:
  func_0x0054cb2c();
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
LAB_0054bd18:
  func_0x00533528();
  FUN_00776794();
  func_0x0054cc78();
  __Unwind_Resume();
  func_0x0054cc0c();
  while ((puVar1 = (undefined8 *)register0x00000008, param_1 < unaff_x21 &&
         (func_0x0054cbf0(), param_1 = puVar1, puVar1 != (undefined8 *)0x0))) {
    register0x00000008 = (BADSPACEBASE *)param_3;
    FUN_00533cb4(param_3,uStack_38);
  }
  return param_1;
}



/* Entry: 0054bd40; end: 0054bd87;  */

ulong FUN_0054bd40(ulong param_1)

{
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x0054cc0c();
  while ((unaff_x19 < unaff_x21 && (func_0x0054cbf0(), unaff_x19 = param_1, param_1 != 0))) {
    param_1 = unaff_x20;
    FUN_00533cb4();
  }
  return unaff_x19;
}



/* Entry: 0054bd88; end: 0054be33;  */

ulong FUN_0054bd88(ulong param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x0054cdd0();
  func_0x0054cab4();
  func_0x0054cd00();
  if (param_1 != 0) {
    while (func_0x0054cc2c(), !(bool)in_ZR && in_NG == in_OV) {
      FUN_0054be34();
      if (param_1 == 0) goto LAB_0054be0c;
      func_0x0054cb64();
      if ((bool)in_ZR || in_NG != in_OV) {
        func_0x0054ca84();
        if (param_1 != 0) goto LAB_0054be28;
        func_0x0054cb7c();
        FUN_0054be34();
        in_ZR = param_1 == unaff_x21;
        if ((bool)in_ZR) {
          func_0x0054cd1c();
        }
        else {
LAB_0054be08:
          param_1 = 0;
        }
        goto LAB_0054be0c;
      }
      func_0x0054cce8();
      if (in_NG != in_OV) goto LAB_0054be08;
      func_0x0054ccb0();
      if (param_1 == 0) goto LAB_0054be0c;
      func_0x0054cba0();
    }
    func_0x0054cc1c();
    FUN_0054be34();
    func_0x0054cd28();
  }
LAB_0054be0c:
  func_0x0054cb2c();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
LAB_0054be28:
  func_0x00533528();
  func_0x0054cad8();
  func_0x0054cc78();
  func_0x0054cc0c();
  while ((unaff_x19 < unaff_x21 && (func_0x0054cbf0(), unaff_x19 = param_1, param_1 != 0))) {
    param_1 = unaff_x20;
    FUN_00533eec();
  }
  return unaff_x19;
}



/* Entry: 0054be34; end: 0054be7b;  */

ulong FUN_0054be34(ulong param_1)

{
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x0054cc0c();
  while ((unaff_x19 < unaff_x21 && (func_0x0054cbf0(), unaff_x19 = param_1, param_1 != 0))) {
    param_1 = unaff_x20;
    FUN_00533eec();
  }
  return unaff_x19;
}



/* Entry: 0054be7c; end: 0054bf27;  */

ulong FUN_0054be7c(ulong param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x0054cdd0();
  func_0x0054cab4();
  func_0x0054cd00();
  if (param_1 != 0) {
    while (func_0x0054cc2c(), !(bool)in_ZR && in_NG == in_OV) {
      FUN_0054bf28();
      if (param_1 == 0) goto LAB_0054bf00;
      func_0x0054cb64();
      if ((bool)in_ZR || in_NG != in_OV) {
        func_0x0054ca84();
        if (param_1 != 0) goto LAB_0054bf1c;
        func_0x0054cb7c();
        FUN_0054bf28();
        in_ZR = param_1 == unaff_x21;
        if ((bool)in_ZR) {
          func_0x0054cd1c();
        }
        else {
LAB_0054befc:
          param_1 = 0;
        }
        goto LAB_0054bf00;
      }
      func_0x0054cce8();
      if (in_NG != in_OV) goto LAB_0054befc;
      func_0x0054ccb0();
      if (param_1 == 0) goto LAB_0054bf00;
      func_0x0054cba0();
    }
    func_0x0054cc1c();
    FUN_0054bf28();
    func_0x0054cd28();
  }
LAB_0054bf00:
  func_0x0054cb2c();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
LAB_0054bf1c:
  func_0x00533528();
  func_0x0054cad8();
  func_0x0054cc78();
  func_0x0054cc0c();
  while ((unaff_x19 < unaff_x21 && (func_0x0054cbf0(), unaff_x19 = param_1, param_1 != 0))) {
    param_1 = unaff_x20;
    FUN_00533dd0();
  }
  return unaff_x19;
}



/* Entry: 0054bf28; end: 0054bf6f;  */

ulong FUN_0054bf28(ulong param_1)

{
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x0054cc0c();
  while ((unaff_x19 < unaff_x21 && (func_0x0054cbf0(), unaff_x19 = param_1, param_1 != 0))) {
    param_1 = unaff_x20;
    FUN_00533dd0();
  }
  return unaff_x19;
}



/* Entry: 0054bf70; end: 0054c01b;  */

ulong FUN_0054bf70(ulong param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x0054cdd0();
  func_0x0054cab4();
  func_0x0054cd00();
  if (param_1 != 0) {
    while (func_0x0054cc2c(), !(bool)in_ZR && in_NG == in_OV) {
      FUN_0054c01c();
      if (param_1 == 0) goto LAB_0054bff4;
      func_0x0054cb64();
      if ((bool)in_ZR || in_NG != in_OV) {
        func_0x0054ca84();
        if (param_1 != 0) goto LAB_0054c010;
        func_0x0054cb7c();
        FUN_0054c01c();
        in_ZR = param_1 == unaff_x21;
        if ((bool)in_ZR) {
          func_0x0054cd1c();
        }
        else {
LAB_0054bff0:
          param_1 = 0;
        }
        goto LAB_0054bff4;
      }
      func_0x0054cce8();
      if (in_NG != in_OV) goto LAB_0054bff0;
      func_0x0054ccb0();
      if (param_1 == 0) goto LAB_0054bff4;
      func_0x0054cba0();
    }
    func_0x0054cc1c();
    FUN_0054c01c();
    func_0x0054cd28();
  }
LAB_0054bff4:
  func_0x0054cb2c();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
LAB_0054c010:
  func_0x00533528();
  func_0x0054cad8();
  func_0x0054cc78();
  func_0x0054cc0c();
  while ((unaff_x19 < unaff_x21 && (func_0x0054cbf0(), unaff_x19 = param_1, param_1 != 0))) {
    param_1 = unaff_x20;
    FUN_00534008();
  }
  return unaff_x19;
}



/* Entry: 0054c01c; end: 0054c063;  */

ulong FUN_0054c01c(ulong param_1)

{
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x0054cc0c();
  while ((unaff_x19 < unaff_x21 && (func_0x0054cbf0(), unaff_x19 = param_1, param_1 != 0))) {
    param_1 = unaff_x20;
    FUN_00534008();
  }
  return unaff_x19;
}



/* Entry: 0054c064; end: 0054c10f;  */

ulong FUN_0054c064(ulong param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x0054cdd0();
  func_0x0054cab4();
  func_0x0054cd00();
  if (param_1 != 0) {
    while (func_0x0054cc2c(), !(bool)in_ZR && in_NG == in_OV) {
      FUN_0054c110();
      if (param_1 == 0) goto LAB_0054c0e8;
      func_0x0054cb64();
      if ((bool)in_ZR || in_NG != in_OV) {
        func_0x0054ca84();
        if (param_1 != 0) goto LAB_0054c104;
        func_0x0054cb7c();
        FUN_0054c110();
        in_ZR = param_1 == unaff_x21;
        if ((bool)in_ZR) {
          func_0x0054cd1c();
        }
        else {
LAB_0054c0e4:
          param_1 = 0;
        }
        goto LAB_0054c0e8;
      }
      func_0x0054cce8();
      if (in_NG != in_OV) goto LAB_0054c0e4;
      func_0x0054ccb0();
      if (param_1 == 0) goto LAB_0054c0e8;
      func_0x0054cba0();
    }
    func_0x0054cc1c();
    FUN_0054c110();
    func_0x0054cd28();
  }
LAB_0054c0e8:
  func_0x0054cb2c();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
LAB_0054c104:
  func_0x00533528();
  func_0x0054cad8();
  func_0x0054cc78();
  func_0x0054cc0c();
  while ((unaff_x19 < unaff_x21 && (func_0x0054cbf0(), unaff_x19 = param_1, param_1 != 0))) {
    param_1 = unaff_x20;
    FUN_00533cb4();
  }
  return unaff_x19;
}



/* Entry: 0054c110; end: 0054c15f;  */

ulong FUN_0054c110(ulong param_1)

{
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x0054cc0c();
  while ((unaff_x19 < unaff_x21 && (func_0x0054cbf0(), unaff_x19 = param_1, param_1 != 0))) {
    param_1 = unaff_x20;
    FUN_00533cb4();
  }
  return unaff_x19;
}



/* Entry: 0054c160; end: 0054c20b;  */

ulong FUN_0054c160(ulong param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x0054cdd0();
  func_0x0054cab4();
  func_0x0054cd00();
  if (param_1 != 0) {
    while (func_0x0054cc2c(), !(bool)in_ZR && in_NG == in_OV) {
      FUN_0054c20c();
      if (param_1 == 0) goto LAB_0054c1e4;
      func_0x0054cb64();
      if ((bool)in_ZR || in_NG != in_OV) {
        func_0x0054ca84();
        if (param_1 != 0) goto LAB_0054c200;
        func_0x0054cb7c();
        FUN_0054c20c();
        in_ZR = param_1 == unaff_x21;
        if ((bool)in_ZR) {
          func_0x0054cd1c();
        }
        else {
LAB_0054c1e0:
          param_1 = 0;
        }
        goto LAB_0054c1e4;
      }
      func_0x0054cce8();
      if (in_NG != in_OV) goto LAB_0054c1e0;
      func_0x0054ccb0();
      if (param_1 == 0) goto LAB_0054c1e4;
      func_0x0054cba0();
    }
    func_0x0054cc1c();
    FUN_0054c20c();
    func_0x0054cd28();
  }
LAB_0054c1e4:
  func_0x0054cb2c();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
LAB_0054c200:
  func_0x00533528();
  func_0x0054cad8();
  func_0x0054cc78();
  func_0x0054cc0c();
  while ((unaff_x19 < unaff_x21 && (func_0x0054cbf0(), unaff_x19 = param_1, param_1 != 0))) {
    param_1 = unaff_x20;
    FUN_00533dd0();
  }
  return unaff_x19;
}



/* Entry: 0054c20c; end: 0054c25b;  */

ulong FUN_0054c20c(ulong param_1)

{
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x0054cc0c();
  while ((unaff_x19 < unaff_x21 && (func_0x0054cbf0(), unaff_x19 = param_1, param_1 != 0))) {
    param_1 = unaff_x20;
    FUN_00533dd0();
  }
  return unaff_x19;
}



/* Entry: 0054c25c; end: 0054c307;  */

ulong FUN_0054c25c(ulong param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x0054cdd0();
  func_0x0054cab4();
  func_0x0054cd00();
  if (param_1 != 0) {
    while (func_0x0054cc2c(), !(bool)in_ZR && in_NG == in_OV) {
      FUN_0054c308();
      if (param_1 == 0) goto LAB_0054c2e0;
      func_0x0054cb64();
      if ((bool)in_ZR || in_NG != in_OV) {
        func_0x0054ca84();
        if (param_1 != 0) goto LAB_0054c2fc;
        func_0x0054cb7c();
        FUN_0054c308();
        in_ZR = param_1 == unaff_x21;
        if ((bool)in_ZR) {
          func_0x0054cd1c();
        }
        else {
LAB_0054c2dc:
          param_1 = 0;
        }
        goto LAB_0054c2e0;
      }
      func_0x0054cce8();
      if (in_NG != in_OV) goto LAB_0054c2dc;
      func_0x0054ccb0();
      if (param_1 == 0) goto LAB_0054c2e0;
      func_0x0054cba0();
    }
    func_0x0054cc1c();
    FUN_0054c308();
    func_0x0054cd28();
  }
LAB_0054c2e0:
  func_0x0054cb2c();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
LAB_0054c2fc:
  func_0x00533528();
  func_0x0054cad8();
  func_0x0054cc78();
  func_0x0054cc0c();
  while ((unaff_x19 < unaff_x21 && (func_0x0054cbf0(), unaff_x19 = param_1, param_1 != 0))) {
    param_1 = unaff_x20;
    FUN_00534404();
  }
  return unaff_x19;
}



/* Entry: 0054c308; end: 0054c357;  */

ulong FUN_0054c308(ulong param_1)

{
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x0054cc0c();
  while ((unaff_x19 < unaff_x21 && (func_0x0054cbf0(), unaff_x19 = param_1, param_1 != 0))) {
    param_1 = unaff_x20;
    FUN_00534404();
  }
  return unaff_x19;
}



/* Entry: 0054c358; end: 0054c42b;  */

void FUN_0054c358(undefined8 param_1,long param_2)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w9;
  undefined4 extraout_w9_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  int *unaff_x19;
  uint unaff_w20;
  uint unaff_w23;
  undefined8 uStack_a8;
  
  if (param_2 != 0) {
    func_0x0054cc64();
    while (func_0x0054cc3c(), !(bool)in_ZR && in_NG == in_OV) {
      FUN_004907dc();
      func_0x0054ccf4();
      *unaff_x19 = extraout_w9 + ((int)unaff_w23 >> 2);
      lVar1 = extraout_x8 + CONCAT44(extraout_var,extraout_w9) * 4;
      func_0x0054cc80();
      func_0x0054cdb0();
      if (in_NG != in_OV) {
        return;
      }
      func_0x0054cd0c();
      if (lVar1 == 0) {
        return;
      }
      unaff_w20 = unaff_w20 - (unaff_w23 & 0xfffffffc);
      func_0x0054cda4(unaff_w23 & 3);
    }
    if (unaff_w20 < 4) {
      func_0x0054cd8c();
    }
    else {
      func_0x0054ccc8();
      FUN_004907dc();
      func_0x0054cc50();
      if (extraout_x8_00 == 0) {
        func_0x0054cb44();
        func_0x0054cd98();
        FUN_0054c42c();
        func_0x0054cbfc();
        func_0x0054cd34();
        func_0x0054cc78();
        func_0x0054cbb4();
        func_0x0054cc98(uStack_a8);
        func_0x0054ccc0();
        return;
      }
      func_0x0054ccb8(extraout_x8_00 + CONCAT44(extraout_var_00,extraout_w9_00) * 4);
      func_0x0054ccd8();
    }
  }
  return;
}



/* Entry: 0054c42c; end: 0054c45f;  */

void FUN_0054c42c(void)

{
  undefined8 uStack_58;
  
  func_0x0054cbb4();
  func_0x0054cc98(uStack_58);
  func_0x0054ccc0();
  return;
}



/* Entry: 0054c460; end: 0054c533;  */

void FUN_0054c460(undefined8 param_1,long param_2)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w9;
  undefined4 extraout_w9_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  int *unaff_x19;
  uint unaff_w20;
  uint unaff_w23;
  undefined8 uStack_a8;
  
  if (param_2 != 0) {
    func_0x0054cc64();
    while (func_0x0054cc3c(), !(bool)in_ZR && in_NG == in_OV) {
      FUN_0048bcd8();
      func_0x0054ccf4();
      *unaff_x19 = extraout_w9 + ((int)unaff_w23 >> 3);
      lVar1 = extraout_x8 + CONCAT44(extraout_var,extraout_w9) * 8;
      func_0x0054cc80();
      func_0x0054cdb0();
      if (in_NG != in_OV) {
        return;
      }
      func_0x0054cd0c();
      if (lVar1 == 0) {
        return;
      }
      unaff_w20 = unaff_w20 - (unaff_w23 & 0xfffffff8);
      func_0x0054cda4(unaff_w23 & 7);
    }
    if (unaff_w20 < 8) {
      func_0x0054cd8c();
    }
    else {
      func_0x0054ccc8();
      FUN_0048bcd8();
      func_0x0054cc50();
      if (extraout_x8_00 == 0) {
        func_0x0054cb44();
        func_0x0054cd98();
        FUN_0054c534();
        func_0x0054cbfc();
        func_0x0054cd34();
        func_0x0054cc78();
        func_0x0054cbb4();
        func_0x0054cc98(uStack_a8);
        func_0x0054ccc0();
        return;
      }
      func_0x0054ccb8(extraout_x8_00 + CONCAT44(extraout_var_00,extraout_w9_00) * 8);
      func_0x0054ccd8();
    }
  }
  return;
}



/* Entry: 0054c534; end: 0054c567;  */

void FUN_0054c534(void)

{
  undefined8 uStack_58;
  
  func_0x0054cbb4();
  func_0x0054cc98(uStack_58);
  func_0x0054ccc0();
  return;
}



/* Entry: 0054c568; end: 0054c63b;  */

void FUN_0054c568(undefined8 param_1,long param_2)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w9;
  undefined4 extraout_w9_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  int *unaff_x19;
  uint unaff_w20;
  uint unaff_w23;
  undefined8 uStack_a8;
  
  if (param_2 != 0) {
    func_0x0054cc64();
    while (func_0x0054cc3c(), !(bool)in_ZR && in_NG == in_OV) {
      func_0x005386f0();
      func_0x0054ccf4();
      *unaff_x19 = extraout_w9 + ((int)unaff_w23 >> 2);
      lVar1 = extraout_x8 + CONCAT44(extraout_var,extraout_w9) * 4;
      func_0x0054cc80();
      func_0x0054cdb0();
      if (in_NG != in_OV) {
        return;
      }
      func_0x0054cd0c();
      if (lVar1 == 0) {
        return;
      }
      unaff_w20 = unaff_w20 - (unaff_w23 & 0xfffffffc);
      func_0x0054cda4(unaff_w23 & 3);
    }
    if (unaff_w20 < 4) {
      func_0x0054cd8c();
    }
    else {
      func_0x0054ccc8();
      func_0x005386f0();
      func_0x0054cc50();
      if (extraout_x8_00 == 0) {
        func_0x0054cb44();
        func_0x0054cd98();
        FUN_0054c63c();
        func_0x0054cbfc();
        func_0x0054cd34();
        func_0x0054cc78();
        func_0x0054cbb4();
        func_0x0054cc98(uStack_a8);
        func_0x0054ccc0();
        return;
      }
      func_0x0054ccb8(extraout_x8_00 + CONCAT44(extraout_var_00,extraout_w9_00) * 4);
      func_0x0054ccd8();
    }
  }
  return;
}



/* Entry: 0054c63c; end: 0054c66f;  */

void FUN_0054c63c(void)

{
  undefined8 uStack_58;
  
  func_0x0054cbb4();
  func_0x0054cc98(uStack_58);
  func_0x0054ccc0();
  return;
}



/* Entry: 0054c670; end: 0054c743;  */

void FUN_0054c670(undefined8 param_1,long param_2)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w9;
  undefined4 extraout_w9_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  int *unaff_x19;
  uint unaff_w20;
  uint unaff_w23;
  undefined8 uStack_a8;
  
  if (param_2 != 0) {
    func_0x0054cc64();
    while (func_0x0054cc3c(), !(bool)in_ZR && in_NG == in_OV) {
      func_0x00538734();
      func_0x0054ccf4();
      *unaff_x19 = extraout_w9 + ((int)unaff_w23 >> 3);
      lVar1 = extraout_x8 + CONCAT44(extraout_var,extraout_w9) * 8;
      func_0x0054cc80();
      func_0x0054cdb0();
      if (in_NG != in_OV) {
        return;
      }
      func_0x0054cd0c();
      if (lVar1 == 0) {
        return;
      }
      unaff_w20 = unaff_w20 - (unaff_w23 & 0xfffffff8);
      func_0x0054cda4(unaff_w23 & 7);
    }
    if (unaff_w20 < 8) {
      func_0x0054cd8c();
    }
    else {
      func_0x0054ccc8();
      func_0x00538734();
      func_0x0054cc50();
      if (extraout_x8_00 == 0) {
        func_0x0054cb44();
        func_0x0054cd98();
        FUN_0054c744();
        func_0x0054cbfc();
        func_0x0054cd34();
        func_0x0054cc78();
        func_0x0054cbb4();
        func_0x0054cc98(uStack_a8);
        func_0x0054ccc0();
        return;
      }
      func_0x0054ccb8(extraout_x8_00 + CONCAT44(extraout_var_00,extraout_w9_00) * 8);
      func_0x0054ccd8();
    }
  }
  return;
}



/* Entry: 0054c744; end: 0054c777;  */

void FUN_0054c744(void)

{
  undefined8 uStack_58;
  
  func_0x0054cbb4();
  func_0x0054cc98(uStack_58);
  func_0x0054ccc0();
  return;
}



/* Entry: 0054c778; end: 0054c837;  */

/* WARNING: Possible PIC construction at 0x0054c79c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0054c7a0) */

void FUN_0054c778(long *param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    uVar1 = (ulong)(uint)(param_2 << 3);
    while( true ) {
      if (uVar1 < 0x80) break;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (lVar2,(int)(char)uVar1 | 0xffffff80);
      uVar1 = uVar1 >> 7;
    }
                    /* WARNING: Could not recover jumptable at 0x00779be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc_00998a00)
              (lVar2);
    return;
  }
  return;
}



/* Entry: 0054c838; end: 0054c8c7;  */

void FUN_0054c838(long *param_1,int param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lStack_38;
  
  plVar1 = &lStack_38;
  lStack_38 = param_3;
  FUN_00533034(plVar1);
  if (lStack_38 != 0) {
    if (*param_1 == 0) {
      FUN_0054ca0c(param_4,lStack_38,plVar1);
    }
    else {
      func_0x0054b798(param_2 << 3 | 2,*param_1);
      func_0x0054b798((long)(int)plVar1,*param_1);
      FUN_0054ca30(param_4,lStack_38,plVar1,*param_1);
    }
  }
  return;
}



/* Entry: 0054c8c8; end: 0054c97f;  */

long * FUN_0054c8c8(long *param_1,int param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  
  uVar3 = param_2 << 3;
  if (*param_1 != 0) {
    func_0x0054b798(uVar3 | 3);
  }
  iVar1 = *(int *)(param_4 + 0x58);
  *(int *)(param_4 + 0x58) = iVar1 + -1;
  if (0 < iVar1) {
    *(int *)(param_4 + 0x5c) = *(int *)(param_4 + 0x5c) + 1;
    plVar4 = param_1;
    func_0x0054ba30(param_1,param_3,param_4);
    *(ulong *)(param_4 + 0x58) =
         CONCAT44((int)((ulong)*(undefined8 *)(param_4 + 0x58) >> 0x20) + -1,
                  (int)*(undefined8 *)(param_4 + 0x58) + 1);
    uVar2 = *(uint *)(param_4 + 0x50);
    *(undefined4 *)(param_4 + 0x50) = 0;
    if (uVar2 == (uVar3 | 3) && plVar4 != (long *)0x0) {
      if (*param_1 == 0) {
        return plVar4;
      }
      func_0x0054b798(uVar3 | 4);
      return plVar4;
    }
  }
  return (long *)0x0;
}



/* Entry: 0054c980; end: 0054ca0b;  */

undefined8 FUN_0054c980(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  _strlen(param_2);
  FUN_00554ab4(param_1,param_2,uVar1);
  return param_1;
}



/* Entry: 0054ca0c; end: 0054ca2f;  */

long FUN_0054ca0c(long param_1,long param_2,int param_3)

{
  long lVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  
  lVar1 = (*(long *)(param_1 + 8) - param_2) + 0x10;
  lVar4 = (long)param_3;
  cVar2 = SBORROW8(lVar1,lVar4);
  cVar3 = lVar1 - lVar4 < 0;
  if (lVar4 <= lVar1) {
    return param_2 + param_3;
  }
  iVar5 = (*(int *)(param_1 + 8) - (int)param_2) + 0x10;
  lVar4 = param_1;
  do {
    if ((*(long *)(param_1 + 0x10) == 0) || (func_0x0054cce8(), cVar3 != cVar2)) {
      return 0;
    }
    func_0x0054ccb0();
    if (lVar4 == 0) {
      return 0;
    }
    param_3 = param_3 - iVar5;
    iVar5 = (*(int *)(param_1 + 8) - (int)(lVar4 + 0x10)) + 0x10;
    cVar2 = SBORROW4(param_3,iVar5);
    cVar3 = param_3 - iVar5 < 0;
  } while (iVar5 < param_3);
  return lVar4 + 0x10 + (long)param_3;
}



/* Entry: 0054ca30; end: 0054ca83;  */

long FUN_0054ca30(long param_1,long param_2,int param_3,long param_4)

{
  int iVar1;
  long lVar2;
  
  if ((long)param_3 <= (*(long *)(param_1 + 8) - param_2) + 0x10) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_4,param_2,(long)param_3);
    return param_2 + param_3;
  }
  lVar2 = *(long *)(param_1 + 8);
  if ((long)param_3 <= (lVar2 - param_2) + (long)*(int *)(param_1 + 0x1c)) {
    lVar2 = (long)*(char *)(param_4 + 0x17);
    if (lVar2 < 0) {
      lVar2 = *(long *)(param_4 + 8);
    }
    func_0x0054cd4c(lVar2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(param_4);
    lVar2 = *(long *)(param_1 + 8);
  }
  iVar1 = ((int)lVar2 - (int)param_2) + 0x10;
  do {
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (func_0x0054bbe4(param_4,param_2,iVar1), *(int *)(param_1 + 0x1c) < 0x11)) {
      return 0;
    }
    param_2 = param_1;
    FUN_0054aed0();
    if (param_2 == 0) {
      return 0;
    }
    param_3 = param_3 - iVar1;
    param_2 = param_2 + 0x10;
    iVar1 = (*(int *)(param_1 + 8) - (int)param_2) + 0x10;
  } while (iVar1 < param_3);
  func_0x0054bbe4(param_4,param_2,param_3);
  return param_2 + param_3;
}



/* Entry: 0054ca84; end: 0054cdef;  */

undefined *** FUN_0054ca84(undefined8 *param_1)

{
  char *pcVar1;
  undefined ***pppuVar2;
  int unaff_w24;
  undefined4 uStack0000000000000014;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined2 uStack0000000000000038;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined1 auStack_128 [56];
  undefined8 uStack_f0;
  char cStack_d9;
  undefined **appuStack_c8 [19];
  
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000028 = param_1[1];
  uStack0000000000000020 = *param_1;
  uStack0000000000000014 = 0x10;
  pcVar1 = "size - chunk_size <= kSlopBytes";
  if (unaff_w24 < 0x11) {
    return (undefined ***)0x0;
  }
  FUN_004799f4(&ppuStack_138);
  _strlen("size - chunk_size <= kSlopBytes");
  FUN_00462690(&ppuStack_138,"size - chunk_size <= kSlopBytes",pcVar1);
  FUN_00462690();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEx(&ppuStack_138,(long)unaff_w24);
  FUN_00462690(&ppuStack_138," vs. ",5);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEx(&ppuStack_138,0x10);
  pppuVar2 = &ppuStack_138;
  FUN_00554368(pppuVar2);
  appuStack_c8[0] = &PTR_FUN_009e7e18;
  ppuStack_138 = &PTR_FUN_009e7df0;
  ppuStack_130 = &PTR_FUN_009e5de0;
  if (cStack_d9 < '\0') {
    __ZdlPv(uStack_f0);
  }
  ppuStack_130 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_00998de8 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_128);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_138,&PTR_PTR_009e7e30);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_c8);
  return pppuVar2;
}



/* Entry: 0054cdf0; end: 0054cf77;  */

ulong * FUN_0054cdf0(ulong *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  uint *puVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong *unaff_x19;
  uint *unaff_x20;
  uint *unaff_x21;
  undefined8 unaff_x22;
  ulong uVar11;
  int *piVar12;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  puVar4 = (undefined1 *)register0x00000008;
  while( true ) {
    puVar5 = param_1;
    *(ulong *)(puVar4 + -0x40) = unaff_x24;
    *(ulong *)(puVar4 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
    *(uint **)(puVar4 + -0x28) = unaff_x21;
    *(uint **)(puVar4 + -0x20) = unaff_x20;
    *(ulong **)(puVar4 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
    *(code **)(puVar4 + -8) = unaff_x30;
    unaff_x29 = puVar4 + -0x10;
    uVar1 = *(int *)((long)puVar5 + 0xc) + 1;
    unaff_x24 = (ulong)uVar1;
    uVar2 = uVar1 + (int)param_2;
    unaff_x20 = (uint *)puVar5[2];
    unaff_x23 = 1;
    if (0 < (int)uVar2) {
      if ((int)uVar2 < (int)(uVar1 * 2 | 1)) {
        uVar2 = uVar1 * 2 + 1;
      }
      uVar3 = 0x7fffffff;
      if (*(int *)((long)puVar5 + 0xc) < 0x3ffffffb) {
        uVar3 = uVar2;
      }
      unaff_x23 = (ulong)uVar3;
    }
    unaff_x21 = (uint *)(unaff_x23 * 8 + 8);
    if (unaff_x20 == (uint *)0x0) break;
    *(uint **)(puVar4 + -0x58) = unaff_x21;
    *(undefined8 *)(puVar4 + -0x48) = 0xffffffffffffffff;
    puVar6 = (undefined8 *)(puVar4 + -0x58);
    func_0x0048b1cc(puVar6,puVar4 + -0x48,
                    "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
    if (puVar6 == (undefined8 *)0x0) {
      puVar7 = unaff_x20;
      func_0x0048b21c(unaff_x20,unaff_x21,1);
      unaff_x21 = puVar7;
      goto LAB_0054ceac;
    }
    lVar10 = (long)*(char *)((long)puVar6 + 0x17);
    puVar9 = puVar6;
    if (lVar10 < 0) {
      puVar9 = (undefined8 *)*puVar6;
      lVar10 = puVar6[1];
    }
    FUN_00776714(puVar4 + -0x58,
                 "bazel-out/ios_arm64-opt-ios-arm64-min15.0-ST-d6543be58b10/bin/external/protobuf+/src/google/protobuf/_virtual_includes/protobuf_lite/google/protobuf/arena.h"
                 ,0x10a,puVar9,lVar10);
    iVar8 = 0x8dc22f;
    func_0x0048b1e8(puVar4 + -0x58);
    param_1 = (ulong *)(puVar4 + -0x58);
    unaff_x30 = FUN_0054cf78;
    FUN_005558a0();
    uVar1 = iVar8 + ~*(uint *)((long)param_1 + 0xc);
    param_2 = (ulong)uVar1;
    puVar4 = puVar4 + -0x60;
    unaff_x19 = puVar5;
    if ((int)uVar1 < 1) {
      return param_1;
    }
  }
  FUN_0048b180();
  unaff_x23 = param_2 + 0x7fffffff8 >> 3;
LAB_0054ceac:
  uVar11 = *puVar5;
  if ((uVar11 & 1) == 0) {
    *unaff_x21 = (uint)(uVar11 != 0);
    *(ulong *)(unaff_x21 + 2) = uVar11;
  }
  else {
    piVar12 = (int *)(uVar11 - 1);
    _memcpy(unaff_x21,piVar12,(long)*piVar12 * 8 + 8);
    if (unaff_x20 == (uint *)0x0) {
      __ZdlPv(piVar12);
    }
    else {
      FUN_0048b264(unaff_x20,piVar12,
                   (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | unaff_x24 << 3) + 8);
    }
  }
  *puVar5 = (long)unaff_x21 + 1;
  *(int *)((long)puVar5 + 0xc) = (int)unaff_x23 + -1;
  return (ulong *)(unaff_x21 + (long)(int)puVar5[1] * 2 + 2);
}



/* Entry: 0054cf78; end: 0054cf93;  */

ulong * FUN_0054cf78(ulong *param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint *puVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong *unaff_x19;
  uint *unaff_x20;
  uint *unaff_x21;
  int *piVar10;
  undefined8 unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar6 = param_1;
    uVar2 = (int)param_2 + ~*(uint *)((long)puVar6 + 0xc);
    uVar7 = (ulong)uVar2;
    if ((int)uVar2 < 1) {
      return puVar6;
    }
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(uint **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(uint **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    uVar1 = *(int *)((long)puVar6 + 0xc) + 1;
    unaff_x24 = (ulong)uVar1;
    uVar2 = uVar1 + uVar2;
    unaff_x20 = (uint *)puVar6[2];
    unaff_x23 = 1;
    if (0 < (int)uVar2) {
      if ((int)uVar2 < (int)(uVar1 * 2 | 1)) {
        uVar2 = uVar1 * 2 + 1;
      }
      uVar3 = 0x7fffffff;
      if (*(int *)((long)puVar6 + 0xc) < 0x3ffffffb) {
        uVar3 = uVar2;
      }
      unaff_x23 = (ulong)uVar3;
    }
    unaff_x21 = (uint *)(unaff_x23 * 8 + 8);
    if (unaff_x20 == (uint *)0x0) break;
    *(uint **)((long)register0x00000008 + -0x58) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0xffffffffffffffff;
    puVar4 = (undefined8 *)((long)register0x00000008 + -0x58);
    func_0x0048b1cc(puVar4,(undefined1 *)((long)register0x00000008 + -0x48),
                    "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
    if (puVar4 == (undefined8 *)0x0) {
      puVar5 = unaff_x20;
      func_0x0048b21c(unaff_x20,unaff_x21,1);
      unaff_x21 = puVar5;
      goto LAB_0054ceac;
    }
    lVar9 = (long)*(char *)((long)puVar4 + 0x17);
    puVar8 = puVar4;
    if (lVar9 < 0) {
      puVar8 = (undefined8 *)*puVar4;
      lVar9 = puVar4[1];
    }
    FUN_00776714((undefined1 *)((long)register0x00000008 + -0x58),
                 "bazel-out/ios_arm64-opt-ios-arm64-min15.0-ST-d6543be58b10/bin/external/protobuf+/src/google/protobuf/_virtual_includes/protobuf_lite/google/protobuf/arena.h"
                 ,0x10a,puVar8,lVar9);
    param_2 = "Requested size is too large to fit into size_t.";
    func_0x0048b1e8((undefined1 *)((long)register0x00000008 + -0x58));
    param_1 = (ulong *)((long)register0x00000008 + -0x58);
    unaff_x30 = FUN_0054cf78;
    FUN_005558a0();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    unaff_x19 = puVar6;
  }
  FUN_0048b180();
  unaff_x23 = uVar7 + 0x7fffffff8 >> 3;
LAB_0054ceac:
  uVar7 = *puVar6;
  if ((uVar7 & 1) == 0) {
    *unaff_x21 = (uint)(uVar7 != 0);
    *(ulong *)(unaff_x21 + 2) = uVar7;
  }
  else {
    piVar10 = (int *)(uVar7 - 1);
    _memcpy(unaff_x21,piVar10,(long)*piVar10 * 8 + 8);
    if (unaff_x20 == (uint *)0x0) {
      __ZdlPv(piVar10);
    }
    else {
      FUN_0048b264(unaff_x20,piVar10,
                   (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | unaff_x24 << 3) + 8);
    }
  }
  *puVar6 = (long)unaff_x21 + 1;
  *(int *)((long)puVar6 + 0xc) = (int)unaff_x23 + -1;
  return (ulong *)(unaff_x21 + (long)(int)puVar6[1] * 2 + 2);
}



/* Entry: 0054cf94; end: 0054d20b;  */

void FUN_0054cf94(ulong *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (param_1[2] == 0) {
    puVar2 = param_1;
    FUN_0048cf58();
    puVar1 = param_1;
    if ((*param_1 & 1) != 0) {
      puVar1 = (ulong *)(*param_1 + 7);
    }
    for (uVar3 = (ulong)((uint)puVar2 & ((int)(uint)puVar2 >> 0x1f ^ 0xffffffffU)); uVar3 != 0;
        uVar3 = uVar3 - 1) {
      if ((long *)*puVar1 != (long *)0x0) {
        (**(code **)(*(long *)*puVar1 + 8))();
      }
      puVar1 = puVar1 + 1;
    }
    if ((*param_1 & 1) != 0) {
      __ZdlPv(*param_1 - 1);
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 0054d20c; end: 0054d323;  */

void FUN_0054d20c(dword *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  dword *pdVar4;
  dword *pdVar5;
  long *unaff_x19;
  int unaff_w20;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  long lStack_58;
  
  FUN_0054d5a8();
  puVar1 = param_2;
  if ((*param_2 & 1) != 0) {
    puVar1 = (ulong *)(*param_2 + 7);
  }
  uVar2 = param_2[1];
  pdVar4 = param_1;
  func_0x0054d6a8();
  iVar3 = (int)param_2[1];
  if ((int)pdVar4 <= (int)param_2[1]) {
    iVar3 = (int)pdVar4;
  }
  for (puVar7 = puVar1; puVar7 < puVar1 + iVar3; puVar7 = puVar7 + 1) {
    pdVar4 = *(dword **)param_1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(pdVar4,*puVar7);
    param_1 = param_1 + 2;
  }
  lVar6 = unaff_x19[2];
  if (lVar6 == 0) {
    lVar6 = 0;
    while( true ) {
      iVar3 = (int)pdVar4;
      if (puVar1 + (int)uVar2 <= (ulong *)((long)puVar7 + lVar6)) break;
      pdVar5 = &MACH_HEADER.flags;
      __Znwm();
      pdVar4 = pdVar5;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
      *(dword **)((long)param_1 + lVar6) = pdVar5;
      lVar6 = lVar6 + 8;
    }
  }
  else {
    lVar8 = 0;
    while( true ) {
      iVar3 = (int)pdVar4;
      if (puVar1 + (int)uVar2 <= (ulong *)((long)puVar7 + lVar8)) break;
      pdVar4 = (dword *)&lStack_58;
      lStack_58 = lVar6;
      FUN_0054d544(pdVar4,*(ulong *)((long)puVar7 + lVar8));
      *(dword **)((long)param_1 + lVar8) = pdVar4;
      lVar8 = lVar8 + 8;
    }
  }
  func_0x0054d60c();
  if (iVar3 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 0054d324; end: 0054d353;  */

ulong * FUN_0054d324(ulong *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  uint *puVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong *unaff_x19;
  uint *unaff_x20;
  uint *unaff_x21;
  int *piVar12;
  undefined8 unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  iVar8 = *(int *)((long)param_1 + 0xc) + 1;
  uVar3 = param_2 - iVar8;
  puVar4 = (undefined1 *)register0x00000008;
  if (uVar3 == 0 || param_2 < iVar8) {
    puVar5 = param_1;
    if ((*param_1 & 1) != 0) {
      puVar5 = (ulong *)(*param_1 + 7);
    }
    return puVar5 + (int)param_1[1];
  }
  while( true ) {
    puVar5 = param_1;
    uVar9 = (ulong)uVar3;
    *(ulong *)(puVar4 + -0x40) = unaff_x24;
    *(ulong *)(puVar4 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
    *(uint **)(puVar4 + -0x28) = unaff_x21;
    *(uint **)(puVar4 + -0x20) = unaff_x20;
    *(ulong **)(puVar4 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
    *(code **)(puVar4 + -8) = unaff_x30;
    unaff_x29 = puVar4 + -0x10;
    uVar1 = *(int *)((long)puVar5 + 0xc) + 1;
    unaff_x24 = (ulong)uVar1;
    uVar3 = uVar1 + uVar3;
    unaff_x20 = (uint *)puVar5[2];
    unaff_x23 = 1;
    if (0 < (int)uVar3) {
      if ((int)uVar3 < (int)(uVar1 * 2 | 1)) {
        uVar3 = uVar1 * 2 + 1;
      }
      uVar2 = 0x7fffffff;
      if (*(int *)((long)puVar5 + 0xc) < 0x3ffffffb) {
        uVar2 = uVar3;
      }
      unaff_x23 = (ulong)uVar2;
    }
    unaff_x21 = (uint *)(unaff_x23 * 8 + 8);
    if (unaff_x20 == (uint *)0x0) break;
    *(uint **)(puVar4 + -0x58) = unaff_x21;
    *(undefined8 *)(puVar4 + -0x48) = 0xffffffffffffffff;
    puVar6 = (undefined8 *)(puVar4 + -0x58);
    func_0x0048b1cc(puVar6,puVar4 + -0x48,
                    "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
    if (puVar6 == (undefined8 *)0x0) {
      puVar7 = unaff_x20;
      func_0x0048b21c(unaff_x20,unaff_x21,1);
      unaff_x21 = puVar7;
      goto LAB_0054ceac;
    }
    lVar11 = (long)*(char *)((long)puVar6 + 0x17);
    puVar10 = puVar6;
    if (lVar11 < 0) {
      puVar10 = (undefined8 *)*puVar6;
      lVar11 = puVar6[1];
    }
    FUN_00776714(puVar4 + -0x58,
                 "bazel-out/ios_arm64-opt-ios-arm64-min15.0-ST-d6543be58b10/bin/external/protobuf+/src/google/protobuf/_virtual_includes/protobuf_lite/google/protobuf/arena.h"
                 ,0x10a,puVar10,lVar11);
    iVar8 = 0x8dc22f;
    func_0x0048b1e8(puVar4 + -0x58);
    param_1 = (ulong *)(puVar4 + -0x58);
    unaff_x30 = FUN_0054cf78;
    FUN_005558a0();
    uVar3 = iVar8 + ~*(uint *)((long)param_1 + 0xc);
    puVar4 = puVar4 + -0x60;
    unaff_x19 = puVar5;
    if ((int)uVar3 < 1) {
      return param_1;
    }
  }
  FUN_0048b180();
  unaff_x23 = uVar9 + 0x7fffffff8 >> 3;
LAB_0054ceac:
  uVar9 = *puVar5;
  if ((uVar9 & 1) == 0) {
    *unaff_x21 = (uint)(uVar9 != 0);
    *(ulong *)(unaff_x21 + 2) = uVar9;
  }
  else {
    piVar12 = (int *)(uVar9 - 1);
    _memcpy(unaff_x21,piVar12,(long)*piVar12 * 8 + 8);
    if (unaff_x20 == (uint *)0x0) {
      __ZdlPv(piVar12);
    }
    else {
      FUN_0048b264(unaff_x20,piVar12,
                   (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | unaff_x24 << 3) + 8);
    }
  }
  *puVar5 = (long)unaff_x21 + 1;
  *(int *)((long)puVar5 + 0xc) = (int)unaff_x23 + -1;
  return (ulong *)(unaff_x21 + (long)(int)puVar5[1] * 2 + 2);
}



/* Entry: 0054d354; end: 0054d37b;  */

int FUN_0054d354(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_0048cf58();
  return (int)lVar1 - *(int *)(param_1 + 8);
}



/* Entry: 0054d37c; end: 0054d3f7;  */

uint FUN_0054d37c(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  uVar4 = param_1[1];
  puVar3 = param_2;
  if ((*param_2 & 1) != 0) {
    puVar3 = (ulong *)(*param_2 + 7);
  }
  FUN_0054d354();
  uVar1 = (uint)param_2[1];
  if ((int)(uint)param_1 <= (int)(uint)param_2[1]) {
    uVar1 = (uint)param_1;
  }
  puVar2 = puVar2 + (int)uVar4;
  for (uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar5 != 0; uVar5 = uVar5 - 1) {
    func_0x0054d694(*puVar2,*puVar3);
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return uVar1;
}



/* Entry: 0054d3f8; end: 0054d51f;  */

void FUN_0054d3f8(long *param_1,undefined8 param_2,code *param_3)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  FUN_0054d5a8();
  plVar2 = param_1;
  func_0x0054d67c();
  func_0x0054d6a8();
  puVar4 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x0054d6b0();
    param_1 = param_1 + (int)plVar2;
    puVar4 = unaff_x25 + (int)plVar2;
  }
  lVar3 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, puVar4 < unaff_x25 + unaff_x26; puVar4 = puVar4 + 1) {
    plVar2 = (long *)lVar3;
    (*param_3)(lVar3,*puVar4);
    *param_1 = (long)plVar2;
    param_1 = param_1 + 1;
  }
  func_0x0054d60c();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 0054d520; end: 0054d543;  */

void FUN_0054d520(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_00533294(&uStack_18);
  return;
}



/* Entry: 0054d544; end: 0054d5a7;  */

long FUN_0054d544(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lVar1 = 0x18;
    __Znwm(0x18);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  }
  else {
    FUN_0055108c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  }
  return lVar1;
}



/* Entry: 0054d5a8; end: 0054d6c3;  */

ulong * FUN_0054d5a8(ulong *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  uint *puVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong *puVar12;
  uint *puVar13;
  uint *unaff_x21;
  int *piVar14;
  undefined8 unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  uVar1 = *(int *)(param_2 + 8) + (int)param_1[1];
  puVar13 = (uint *)(ulong)uVar1;
  iVar8 = *(int *)((long)param_1 + 0xc) + 1;
  uVar3 = uVar1 - iVar8;
  puVar4 = (undefined1 *)register0x00000008;
  puVar12 = param_1;
  if (uVar3 == 0 || (int)uVar1 < iVar8) {
    if ((*param_1 & 1) != 0) {
      puVar12 = (ulong *)(*param_1 + 7);
    }
    return puVar12 + (int)param_1[1];
  }
  while( true ) {
    puVar5 = param_1;
    uVar9 = (ulong)uVar3;
    *(ulong *)(puVar4 + -0x40) = unaff_x24;
    *(ulong *)(puVar4 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
    *(uint **)(puVar4 + -0x28) = unaff_x21;
    *(uint **)(puVar4 + -0x20) = puVar13;
    *(ulong **)(puVar4 + -0x18) = puVar12;
    *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
    *(code **)(puVar4 + -8) = unaff_x30;
    unaff_x29 = puVar4 + -0x10;
    uVar1 = *(int *)((long)puVar5 + 0xc) + 1;
    unaff_x24 = (ulong)uVar1;
    uVar3 = uVar1 + uVar3;
    puVar13 = (uint *)puVar5[2];
    unaff_x23 = 1;
    if (0 < (int)uVar3) {
      if ((int)uVar3 < (int)(uVar1 * 2 | 1)) {
        uVar3 = uVar1 * 2 + 1;
      }
      uVar2 = 0x7fffffff;
      if (*(int *)((long)puVar5 + 0xc) < 0x3ffffffb) {
        uVar2 = uVar3;
      }
      unaff_x23 = (ulong)uVar2;
    }
    unaff_x21 = (uint *)(unaff_x23 * 8 + 8);
    if (puVar13 == (uint *)0x0) break;
    *(uint **)(puVar4 + -0x58) = unaff_x21;
    *(undefined8 *)(puVar4 + -0x48) = 0xffffffffffffffff;
    puVar6 = (undefined8 *)(puVar4 + -0x58);
    func_0x0048b1cc(puVar6,puVar4 + -0x48,
                    "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
    if (puVar6 == (undefined8 *)0x0) {
      puVar7 = puVar13;
      func_0x0048b21c(puVar13,unaff_x21,1);
      unaff_x21 = puVar7;
      goto LAB_0054ceac;
    }
    lVar11 = (long)*(char *)((long)puVar6 + 0x17);
    puVar10 = puVar6;
    if (lVar11 < 0) {
      puVar10 = (undefined8 *)*puVar6;
      lVar11 = puVar6[1];
    }
    FUN_00776714(puVar4 + -0x58,
                 "bazel-out/ios_arm64-opt-ios-arm64-min15.0-ST-d6543be58b10/bin/external/protobuf+/src/google/protobuf/_virtual_includes/protobuf_lite/google/protobuf/arena.h"
                 ,0x10a,puVar10,lVar11);
    iVar8 = 0x8dc22f;
    func_0x0048b1e8(puVar4 + -0x58);
    param_1 = (ulong *)(puVar4 + -0x58);
    unaff_x30 = FUN_0054cf78;
    FUN_005558a0();
    uVar3 = iVar8 + ~*(uint *)((long)param_1 + 0xc);
    puVar4 = puVar4 + -0x60;
    puVar12 = puVar5;
    if ((int)uVar3 < 1) {
      return param_1;
    }
  }
  FUN_0048b180();
  unaff_x23 = uVar9 + 0x7fffffff8 >> 3;
LAB_0054ceac:
  uVar9 = *puVar5;
  if ((uVar9 & 1) == 0) {
    *unaff_x21 = (uint)(uVar9 != 0);
    *(ulong *)(unaff_x21 + 2) = uVar9;
  }
  else {
    piVar14 = (int *)(uVar9 - 1);
    _memcpy(unaff_x21,piVar14,(long)*piVar14 * 8 + 8);
    if (puVar13 == (uint *)0x0) {
      __ZdlPv(piVar14);
    }
    else {
      FUN_0048b264(puVar13,piVar14,
                   (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | unaff_x24 << 3) + 8);
    }
  }
  *puVar5 = (long)unaff_x21 + 1;
  *(int *)((long)puVar5 + 0xc) = (int)unaff_x23 + -1;
  return (ulong *)(unaff_x21 + (long)(int)puVar5[1] * 2 + 2);
}



/* Entry: 0054d6c4; end: 0054d713;  */

uint FUN_0054d6c4(ulong *param_1,long *param_2)

{
  char *pcVar1;
  uint uVar2;
  long *plVar3;
  
  pcVar1 = (char *)*param_1;
  if ((pcVar1 < (char *)param_1[1]) && (-1 < (long)*pcVar1)) {
    *param_2 = (long)*pcVar1;
    *param_1 = (ulong)(pcVar1 + 1);
    uVar2 = 1;
  }
  else {
    plVar3 = param_2;
    func_0x0054e770();
    uVar2 = (uint)plVar3;
    *param_2 = (long)param_1;
  }
  return uVar2 & 1;
}



/* Entry: 0054d714; end: 0054d737;  */

undefined1  [16] FUN_0054d714(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte *extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long lStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar8 = *(undefined8 **)param_1;
  if (7 < *(int *)(param_1 + 8) - (int)puVar8) {
    *param_2 = *puVar8;
    *(undefined8 **)param_1 = puVar8 + 1;
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = 1;
    return auVar12;
  }
  puVar8 = &uStack_30;
  puVar10 = &uStack_30;
  puVar11 = &uStack_30;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  puVar9 = *(undefined8 **)param_1;
  iVar2 = *(int *)(param_1 + 8) - (int)puVar9;
  cVar3 = SBORROW4(iVar2,8);
  cVar4 = iVar2 + -8 < 0;
  uVar5 = iVar2 == 8;
  if (iVar2 < 8) {
    FUN_0054e37c(param_1,&uStack_30,8);
    if ((int)param_1 != 0) goto LAB_0054e74c;
  }
  else {
    *(undefined8 **)param_1 = puVar9 + 1;
    puVar8 = param_2;
    puVar10 = puVar9;
LAB_0054e74c:
    *param_2 = *puVar10;
    param_1 = (byte *)((long)&MACH_HEADER.magic + 1);
    puVar11 = puVar10;
  }
  func_0x0054f6d8(uStack_28);
  if ((bool)uVar5) {
    auVar14._8_8_ = puVar8;
    auVar14._0_8_ = param_1;
    return auVar14;
  }
  ___stack_chk_fail();
  uStack_38 = 0x54e770;
  puStack_50 = puVar11;
  puStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  func_0x0054f700();
  if (((bool)uVar5 || cVar4 != cVar3) && (extraout_x8 <= param_1)) {
    FUN_0054eb00(param_2,&lStack_58);
    uVar7 = (ulong)param_2 & 0xffffffff;
  }
  else {
    bVar1 = param_1[1];
    if ((long)(char)bVar1 < 0) {
      if ((char)param_1[2] < '\0') {
        if ((char)param_1[3] < '\0') {
          if ((char)param_1[4] < '\0') {
            if ((char)param_1[5] < '\0') {
              if ((char)param_1[6] < '\0') {
                if ((char)param_1[7] < '\0') {
                  if ((char)param_1[8] < '\0') {
                    if ((char)param_1[9] < '\0') {
                      lStack_58 = 0;
                      uVar7 = 0;
                      goto LAB_0054e7f0;
                    }
                    func_0x0054f234();
                    pbVar6 = param_1;
                  }
                  else {
                    func_0x0054f200();
                    pbVar6 = param_1;
                  }
                }
                else {
                  func_0x0054f1cc();
                  pbVar6 = param_1;
                }
              }
              else {
                func_0x0054f198();
                pbVar6 = param_1;
              }
            }
            else {
              func_0x0054f164();
              pbVar6 = param_1;
            }
          }
          else {
            func_0x0054f130();
            pbVar6 = param_1;
          }
        }
        else {
          FUN_0054f0fc();
          pbVar6 = param_1;
        }
      }
      else {
        pbVar6 = param_1 + 3;
        func_0x0054f6b0((ulong)bVar1 << 7);
        lStack_58 = extraout_x8_00;
      }
    }
    else {
      pbVar6 = param_1 + 2;
      lStack_58 = (ulong)*param_1 + (long)(char)bVar1 * 0x80 + -0x80;
    }
    *param_2 = pbVar6;
    uVar7 = 1;
  }
LAB_0054e7f0:
  auVar13._8_8_ = uVar7;
  auVar13._0_8_ = lStack_58;
  return auVar13;
}



/* Entry: 0054d738; end: 0054d793;  */

uint FUN_0054d738(ulong *param_1,uint *param_2)

{
  byte *pbVar1;
  uint uVar2;
  
  pbVar1 = (byte *)*param_1;
  if (pbVar1 < (byte *)param_1[1]) {
    uVar2 = (uint)*pbVar1;
    if (-1 < (char)*pbVar1) {
      *param_2 = uVar2;
      *param_1 = (ulong)(pbVar1 + 1);
      return 1;
    }
  }
  else {
    uVar2 = 0;
  }
  FUN_0054e898(param_1,uVar2);
  *param_2 = (uint)param_1;
  return (uint)((ulong)param_1 >> 0x3f) ^ 1;
}



/* Entry: 0054d794; end: 0054d7b7;  */

long * FUN_0054d794(long *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uStack_24;
  
  puVar1 = (undefined4 *)*param_1;
  if (3 < (int)param_1[1] - (int)puVar1) {
    *param_2 = *puVar1;
    *param_1 = (long)(puVar1 + 1);
    return (long *)((long)&MACH_HEADER.magic + 1);
  }
  puVar1 = (undefined4 *)*param_1;
  if ((int)param_1[1] - (int)puVar1 < 4) {
    puVar1 = &uStack_24;
    FUN_0054e37c(param_1,&uStack_24,4);
    if ((int)param_1 == 0) {
      return param_1;
    }
  }
  else {
    *param_1 = (long)(puVar1 + 1);
  }
  *param_2 = *puVar1;
  return (long *)((long)&MACH_HEADER.magic + 1);
}



/* Entry: 0054d7b8; end: 0054da67;  */

void FUN_0054d7b8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x0054df2c();
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  func_0x00487cbc(param_2,param_1);
  *(undefined8 *)(unaff_x20 + 0x40) = param_2;
  return;
}



/* Entry: 0054da68; end: 0054db4b;  */

/* WARNING: Possible PIC construction at 0x0054da9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0054daa0) */

void FUN_0054da68(int param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  uint uVar1;
  
  func_0x00487c24(param_4,param_3);
  for (uVar1 = param_1 << 3 | 3; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *param_4 = (byte)uVar1 | 0x80;
    param_4 = param_4 + 1;
  }
  *param_4 = (byte)uVar1;
  return;
}



/* Entry: 0054db4c; end: 0054dd57;  */

undefined8 *
FUN_0054db4c(undefined8 ***param_1,undefined8 *param_2,undefined8 ***param_3,undefined8 *param_4,
            undefined8 **param_5)

{
  undefined8 ****ppppuVar1;
  char *pcVar2;
  undefined8 ***pppuVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 ***pppuVar8;
  undefined8 **ppuVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 **ppuVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined8 *apuStack_180 [3];
  undefined8 ***pppuStack_168;
  ulong uStack_160;
  byte bStack_151;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 ***pppuStack_138;
  undefined8 **ppuStack_130;
  undefined8 **ppuStack_108;
  undefined8 **ppuStack_100;
  undefined8 ***pppuStack_d8;
  undefined8 **ppuStack_d0;
  undefined8 ***pppuStack_a8;
  undefined8 *puStack_a0;
  undefined8 ***pppuStack_78;
  undefined8 **ppuStack_70;
  undefined8 uStack_48;
  
  pppuVar8 = (undefined8 ***)apuStack_180;
  ppuVar9 = apuStack_180;
  pppuVar3 = (undefined8 ***)apuStack_180;
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  pcVar7 = "";
  ppppuVar1 = &pppuStack_168;
  puVar11 = param_4;
  ppuVar12 = param_5;
  FUN_00425cb4();
  if (param_4 != (undefined8 *)0x0) {
    if (param_2 == (undefined8 *)0x0) {
      func_0x0054df74();
      pppuStack_a8 = param_3;
      puStack_a0 = param_4;
      pppuStack_78 = ppppuVar1;
      ppuStack_70 = (undefined8 **)pcVar7;
      func_0x0054df9c();
      pppuStack_d8 = ppppuVar1;
      ppuStack_d0 = (undefined8 **)pcVar7;
      FUN_00575ddc(&ppuStack_108,&pppuStack_78,&pppuStack_a8,&pppuStack_d8);
      pcVar7 = (char *)&ppuStack_108;
      FUN_004575b8(&pppuStack_168);
      pppuVar3 = &ppuStack_108;
    }
    else {
      func_0x0054df74();
      pcVar2 = ".";
      pppuStack_a8 = param_1;
      puStack_a0 = param_2;
      pppuStack_78 = ppppuVar1;
      ppuStack_70 = (undefined8 **)pcVar7;
      FUN_00532c74();
      ppuStack_108 = param_3;
      ppuStack_100 = (undefined8 **)param_4;
      pppuStack_d8 = (undefined8 ***)pcVar2;
      ppuStack_d0 = (undefined8 **)pcVar7;
      func_0x0054df9c();
      pppuStack_138 = (undefined8 ***)pcVar2;
      ppuStack_130 = (undefined8 **)pcVar7;
      func_0x0054df40();
      FUN_0054dd58();
      FUN_004575b8(&pppuStack_168);
      pcVar7 = (char *)pppuVar8;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppuVar3);
  }
  pcVar2 = "String field";
  FUN_00532c74();
  puStack_a0 = (undefined8 *)uStack_160;
  pppuStack_a8 = pppuStack_168;
  if (-1 < (char)bStack_151) {
    puStack_a0 = (undefined8 *)(ulong)bStack_151;
    pppuStack_a8 = &pppuStack_168;
  }
  pcVar4 = " contains invalid UTF-8 data when ";
  pppuStack_78 = (undefined8 ***)pcVar2;
  ppuStack_70 = (undefined8 **)pcVar7;
  FUN_00532c74();
  pppuStack_d8 = (undefined8 ***)pcVar4;
  ppuStack_d0 = (undefined8 **)pcVar7;
  FUN_00532c74();
  pcVar2 = " a protocol buffer. Use the \'bytes\' type if you intend to send raw bytes. ";
  ppuStack_108 = param_5;
  ppuStack_100 = (undefined8 **)pcVar7;
  FUN_00532c74();
  pppuStack_138 = (undefined8 ***)pcVar2;
  ppuStack_130 = (undefined8 **)pcVar7;
  func_0x0054df40();
  FUN_0054a558();
  pcVar7 = section_00000248.segname + 3;
  func_0x007766a0(&pppuStack_78,"external/protobuf+/src/google/protobuf/wire_format_lite.cc");
  FUN_00555478();
  FUN_007766a8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_180);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_168);
  puVar5 = &uStack_150;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x0054df64(uStack_48);
  if (extraout_x9 != extraout_x8) {
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_168);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_150);
    __Unwind_Resume();
    puVar6 = &uStack_1f0;
    pcStack_188 = FUN_0054dd58;
    puStack_190 = &stack0xfffffffffffffff0;
    func_0x0054df64();
    uStack_1e8 = puVar5[1];
    uStack_1f0 = *puVar5;
    uStack_1d8 = ppuVar9[1];
    uStack_1e0 = *ppuVar9;
    uStack_1c8 = *(undefined8 *)(pcVar7 + 8);
    uStack_1d0 = *(undefined8 *)pcVar7;
    uStack_1b8 = puVar11[1];
    uStack_1c0 = *puVar11;
    uStack_1a8 = ppuVar12[1];
    uStack_1b0 = *ppuVar12;
    uStack_198 = extraout_x9_00;
    FUN_00575fc4(&uStack_1f0,5);
    iVar10 = (int)pcVar7;
    func_0x0054df64(uStack_198);
    if (extraout_x9_01 != extraout_x8_00) {
      ___stack_chk_fail();
      FUN_00553b28();
      if (((ulong)puVar6 & 1) == 0) {
        pcVar7 = "serializing";
        if (iVar10 != 1) {
          pcVar7 = (char *)0x0;
        }
        pcVar2 = "parsing";
        if (iVar10 != 0) {
          pcVar2 = pcVar7;
        }
        puVar5 = puVar11;
        _strlen(puVar11);
        FUN_0054db4c("",0,puVar11,puVar5,pcVar2);
      }
      return puVar6;
    }
    return puVar6;
  }
  return puVar5;
}



/* Entry: 0054dd58; end: 0054ddb7;  */

undefined8 *
FUN_0054dd58(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  long extraout_x8;
  undefined8 extraout_x9;
  long extraout_x9_00;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_18;
  
  puVar3 = &uStack_70;
  func_0x0054df64();
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_38 = param_4[1];
  uStack_40 = *param_4;
  uStack_28 = param_5[1];
  uStack_30 = *param_5;
  uStack_18 = extraout_x9;
  FUN_00575fc4(&uStack_70,5);
  iVar5 = (int)param_3;
  func_0x0054df64(uStack_18);
  if (extraout_x9_00 == extraout_x8) {
    return puVar3;
  }
  ___stack_chk_fail();
  FUN_00553b28();
  if (((ulong)puVar3 & 1) == 0) {
    pcVar1 = "serializing";
    if (iVar5 != 1) {
      pcVar1 = (char *)0x0;
    }
    pcVar2 = "parsing";
    if (iVar5 != 0) {
      pcVar2 = pcVar1;
    }
    puVar4 = param_4;
    _strlen(param_4);
    FUN_0054db4c("",0,param_4,puVar4,pcVar2);
  }
  return (undefined8 *)(undefined1 *)puVar3;
}



/* Entry: 0054ddb8; end: 0054de37;  */

ulong FUN_0054ddb8(ulong param_1,int param_2,int param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  FUN_00553b28(param_1,(long)param_2);
  if ((param_1 & 1) == 0) {
    pcVar1 = "serializing";
    if (param_3 != 1) {
      pcVar1 = (char *)0x0;
    }
    pcVar2 = "parsing";
    if (param_3 != 0) {
      pcVar2 = pcVar1;
    }
    uVar3 = param_4;
    _strlen(param_4);
    FUN_0054db4c("",0,param_4,uVar3,pcVar2);
  }
  return param_1;
}



/* Entry: 0054de38; end: 0054dff7;  */

void FUN_0054de38(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  undefined8 unaff_x30;
  
  func_0x0054dfdc();
  lVar1 = extraout_x8;
  lVar2 = extraout_x9;
  while (lVar2 != 0) {
    func_0x0054dfc0(lVar1 + 4,param_1,unaff_x30);
    lVar1 = extraout_x8_00;
    lVar2 = extraout_x9_00;
  }
  return;
}



/* Entry: 0054dff8; end: 0054e027;  */

long FUN_0054dff8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_0054e028(param_1);
  }
  return param_1;
}



/* Entry: 0054e028; end: 0054e097;  */

void FUN_0054e028(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (0 < param_1[7] + param_1[0xb] + (param_1[2] - *param_1)) {
    func_0x0054f668(*(undefined8 *)(param_1 + 4));
    iVar1 = param_1[2];
    iVar2 = param_1[0xb];
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)param_1;
    param_1[0xb] = 0;
    param_1[6] = (param_1[6] - iVar2) + ((int)*(undefined8 *)param_1 - iVar1);
    param_1[7] = 0;
  }
  return;
}



/* Entry: 0054e098; end: 0054e0db;  */

void FUN_0054e098(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  
  lVar1 = *(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x2c);
  *(long *)(param_1 + 8) = lVar1;
  iVar2 = *(int *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x28) <= *(int *)(param_1 + 0x30)) {
    iVar2 = *(int *)(param_1 + 0x28);
  }
  uVar3 = *(int *)(param_1 + 0x18) - iVar2;
  if (uVar3 == 0 || *(int *)(param_1 + 0x18) < iVar2) {
    uVar3 = 0;
  }
  else {
    *(ulong *)(param_1 + 8) = lVar1 - (ulong)uVar3;
  }
  *(uint *)(param_1 + 0x2c) = uVar3;
  return;
}



/* Entry: 0054e0dc; end: 0054e1db;  */

void FUN_0054e0dc(void)

{
  func_0x0054f5a0();
  func_0x0054f5cc();
  return;
}



/* Entry: 0054e1dc; end: 0054e37b;  */

void FUN_0054e1dc(int *param_1,undefined8 *param_2,int *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)param_1;
  if (param_1[2] == (int)uVar2) {
    piVar1 = param_1;
    func_0x0054e238();
    if ((int)piVar1 == 0) {
      return;
    }
    uVar2 = *(undefined8 *)param_1;
  }
  *param_2 = uVar2;
  *param_3 = param_1[2] - *param_1;
  return;
}



/* Entry: 0054e37c; end: 0054e3f7;  */

bool FUN_0054e37c(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  long *unaff_x19;
  ulong unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0054f5f4();
  do {
    iVar3 = param_3;
    lVar1 = *unaff_x19;
    iVar4 = (int)unaff_x19[1] - (int)lVar1;
    if (iVar3 - iVar4 == 0 || iVar3 < iVar4) {
      _memcpy(unaff_x20,lVar1,(long)iVar3);
      *unaff_x19 = *unaff_x19 + (long)iVar3;
      break;
    }
    uVar2 = unaff_x20;
    _memcpy(unaff_x20,lVar1,(long)iVar4);
    unaff_x20 = unaff_x20 + (long)iVar4;
    func_0x0054f674(*unaff_x19 + (long)iVar4);
    param_3 = iVar3 - iVar4;
  } while ((uVar2 & 1) != 0);
  return iVar3 <= iVar4;
}



/* Entry: 0054e3f8; end: 0054e487;  */

bool FUN_0054e3f8(int *param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  int extraout_w8;
  long lVar5;
  long *unaff_x19;
  long *unaff_x20;
  long lVar6;
  int iVar7;
  
  if ((int)param_3 < 0) {
    bVar1 = false;
  }
  else {
    func_0x0054f5f4();
    iVar4 = (int)param_3;
    if (param_1[2] - *param_1 < iVar4) {
      plVar2 = unaff_x19;
      plVar3 = unaff_x20;
      func_0x0054f5f4();
      lVar5 = (long)*(char *)((long)plVar3 + 0x17);
      if (lVar5 < 0) {
        lVar5 = unaff_x20[1];
      }
      if (lVar5 != 0) {
        plVar2 = unaff_x20;
        func_0x0048d000();
      }
      func_0x0054f6ec();
      if ((extraout_w8 != 0x7fffffff) &&
         (iVar7 = (extraout_w8 - (int)unaff_x19[3]) +
                  *(int *)((long)unaff_x19 + 0x2c) + ((int)unaff_x19[1] - (int)*unaff_x19),
         (iVar4 <= iVar7 && 0 < iVar4) && 0 < iVar7)) {
        plVar2 = unaff_x20;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
                  (unaff_x20,param_3 & 0xffffffff);
      }
      do {
        lVar5 = *unaff_x19;
        iVar7 = (int)unaff_x19[1] - (int)lVar5;
        iVar4 = (int)param_3;
        param_3 = (ulong)(uint)(iVar4 - iVar7);
        if (iVar4 - iVar7 == 0 || iVar4 < iVar7) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (unaff_x20,lVar5,(long)iVar4);
          *unaff_x19 = *unaff_x19 + (long)iVar4;
          break;
        }
        if (iVar7 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = (long)iVar7;
          plVar2 = unaff_x20;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (unaff_x20,lVar5,lVar6);
          lVar5 = *unaff_x19;
        }
        func_0x0054f674(lVar5 + lVar6);
      } while (((ulong)plVar2 & 1) != 0);
      return iVar4 <= iVar7;
    }
    FUN_0053316c();
    if (*(char *)((long)unaff_x20 + 0x17) < '\0') {
      unaff_x20 = (long *)*unaff_x20;
    }
    _memcpy(unaff_x20,*unaff_x19,param_3 & 0xffffffff);
    *unaff_x19 = *unaff_x19 + (param_3 & 0xffffffff);
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 0054e488; end: 0054e697;  */

bool FUN_0054e488(ulong param_1,long param_2,int param_3)

{
  int extraout_w8;
  long lVar1;
  long *unaff_x19;
  ulong unaff_x20;
  int iVar2;
  long lVar3;
  int iVar4;
  
  func_0x0054f5f4();
  lVar1 = (long)*(char *)(param_2 + 0x17);
  if (lVar1 < 0) {
    lVar1 = *(long *)(unaff_x20 + 8);
  }
  if (lVar1 != 0) {
    param_1 = unaff_x20;
    func_0x0048d000();
  }
  func_0x0054f6ec();
  if ((extraout_w8 != 0x7fffffff) &&
     (iVar2 = (extraout_w8 - (int)unaff_x19[3]) +
              *(int *)((long)unaff_x19 + 0x2c) + ((int)unaff_x19[1] - (int)*unaff_x19),
     (param_3 <= iVar2 && 0 < param_3) && 0 < iVar2)) {
    param_1 = unaff_x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm();
  }
  do {
    iVar2 = param_3;
    lVar1 = *unaff_x19;
    iVar4 = (int)unaff_x19[1] - (int)lVar1;
    if (iVar2 - iVar4 == 0 || iVar2 < iVar4) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
      *unaff_x19 = *unaff_x19 + (long)iVar2;
      break;
    }
    if (iVar4 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (long)iVar4;
      param_1 = unaff_x20;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
      lVar1 = *unaff_x19;
    }
    func_0x0054f674(lVar1 + lVar3);
    param_3 = iVar2 - iVar4;
  } while ((param_1 & 1) != 0);
  return iVar2 <= iVar4;
}



/* Entry: 0054e698; end: 0054e897;  */

void FUN_0054e698(long *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uStack_24;
  
  puVar1 = (undefined4 *)*param_1;
  if ((int)param_1[1] - (int)puVar1 < 4) {
    puVar1 = &uStack_24;
    FUN_0054e37c(param_1,&uStack_24,4);
    if ((int)param_1 == 0) {
      return;
    }
  }
  else {
    *param_1 = (long)(puVar1 + 1);
  }
  *param_2 = *puVar1;
  return;
}



/* Entry: 0054e898; end: 0054e96f;  */

ulong FUN_0054e898(ulong *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  ulong uVar3;
  
  uVar3 = *param_1;
  if (((int)param_1[1] - (int)uVar3 < 10) && (param_1[1] <= uVar3)) {
    func_0x0054e770();
    uVar3 = (ulong)param_1 & 0xffffffff;
    if ((param_2 & 1) == 0) {
      uVar3 = 0xffffffffffffffff;
    }
  }
  else {
    uVar2 = (param_2 + (uint)*(byte *)(uVar3 + 1) * 0x80) - 0x80;
    if ((char)*(byte *)(uVar3 + 1) < '\0') {
      uVar2 = (uVar2 + (uint)*(byte *)(uVar3 + 2) * 0x4000) - 0x4000;
      if ((char)*(byte *)(uVar3 + 2) < '\0') {
        uVar2 = (uVar2 + (uint)*(byte *)(uVar3 + 3) * 0x200000) - 0x200000;
        if ((char)*(byte *)(uVar3 + 3) < '\0') {
          pcVar5 = (char *)(uVar3 + 5);
          uVar2 = uVar2 + *(char *)(uVar3 + 4) * 0x10000000 + 0xf0000000;
          if (*(char *)(uVar3 + 4) < 0) {
            iVar6 = 5;
            pcVar4 = pcVar5;
            do {
              if (iVar6 == 0) {
                return 0xffffffffffffffff;
              }
              pcVar5 = pcVar4 + 1;
              cVar1 = *pcVar4;
              iVar6 = iVar6 + -1;
              pcVar4 = pcVar5;
            } while (cVar1 < '\0');
          }
        }
        else {
          pcVar5 = (char *)(uVar3 + 4);
        }
      }
      else {
        pcVar5 = (char *)(uVar3 + 3);
      }
    }
    else {
      pcVar5 = (char *)(uVar3 + 2);
    }
    uVar3 = (ulong)uVar2;
    *param_1 = (ulong)pcVar5;
  }
  return uVar3;
}



/* Entry: 0054e970; end: 0054e9f7;  */

undefined4 FUN_0054e970(long *param_1)

{
  bool bVar1;
  long *plVar2;
  undefined8 uStack_28;
  
  if ((*param_1 == param_1[1]) && (plVar2 = param_1, func_0x0054e238(), ((ulong)plVar2 & 1) == 0)) {
    if ((int)param_1[3] - *(int *)((long)param_1 + 0x2c) < (int)param_1[6]) {
      bVar1 = true;
    }
    else {
      bVar1 = (int)param_1[5] == (int)param_1[6];
    }
    uStack_28._0_4_ = 0;
    *(bool *)((long)param_1 + 0x24) = bVar1;
  }
  else {
    uStack_28 = 0;
    FUN_0054d6c4(param_1,&uStack_28);
    if ((int)param_1 == 0) {
      uStack_28._0_4_ = 0;
    }
  }
  return (undefined4)uStack_28;
}



/* Entry: 0054e9f8; end: 0054eaff;  */

int FUN_0054e9f8(long *param_1,int param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  undefined8 uStack_28;
  
  lVar1 = *param_1;
  iVar5 = (int)param_1[1] - (int)lVar1;
  if ((9 < iVar5) || (0 < iVar5)) {
    if (param_2 == 0) {
      iVar5 = 0;
      pcVar7 = (char *)(lVar1 + 1);
    }
    else {
      iVar5 = param_2 + (uint)*(byte *)(lVar1 + 1) * 0x80 + -0x80;
      if ((char)*(byte *)(lVar1 + 1) < '\0') {
        iVar5 = iVar5 + (uint)*(byte *)(lVar1 + 2) * 0x4000 + -0x4000;
        if ((char)*(byte *)(lVar1 + 2) < '\0') {
          iVar5 = iVar5 + (uint)*(byte *)(lVar1 + 3) * 0x200000 + -0x200000;
          if ((char)*(byte *)(lVar1 + 3) < '\0') {
            pcVar7 = (char *)(lVar1 + 5);
            iVar5 = iVar5 + *(char *)(lVar1 + 4) * 0x10000000 + -0x10000000;
            if (*(char *)(lVar1 + 4) < 0) {
              iVar8 = 5;
              pcVar6 = pcVar7;
              do {
                if (iVar8 == 0) {
                  return 0;
                }
                pcVar7 = pcVar6 + 1;
                cVar2 = *pcVar6;
                iVar8 = iVar8 + -1;
                pcVar6 = pcVar7;
              } while (cVar2 < '\0');
            }
          }
          else {
            pcVar7 = (char *)(lVar1 + 4);
          }
        }
        else {
          pcVar7 = (char *)(lVar1 + 3);
        }
      }
      else {
        pcVar7 = (char *)(lVar1 + 2);
      }
    }
    *param_1 = (long)pcVar7;
    return iVar5;
  }
  if ((int)param_1[1] == (int)lVar1) {
    if (((0 < *(int *)((long)param_1 + 0x2c)) || ((int)param_1[3] == (int)param_1[5])) &&
       ((int)param_1[3] - *(int *)((long)param_1 + 0x2c) < (int)param_1[6])) {
      *(undefined1 *)((long)param_1 + 0x24) = 1;
      return 0;
    }
  }
  if ((*param_1 == param_1[1]) && (plVar4 = param_1, func_0x0054e238(), ((ulong)plVar4 & 1) == 0)) {
    if ((int)param_1[3] - *(int *)((long)param_1 + 0x2c) < (int)param_1[6]) {
      bVar3 = true;
    }
    else {
      bVar3 = (int)param_1[5] == (int)param_1[6];
    }
    uStack_28._0_4_ = 0;
    *(bool *)((long)param_1 + 0x24) = bVar3;
  }
  else {
    uStack_28 = 0;
    FUN_0054d6c4(param_1,&uStack_28);
    if ((int)param_1 == 0) {
      uStack_28._0_4_ = 0;
    }
  }
  return (int)uStack_28;
}



/* Entry: 0054eb00; end: 0054eb93;  */

bool FUN_0054eb00(long *param_1,ulong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  long *plVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = 0;
  uVar5 = 0;
  do {
    bVar4 = lVar6 != 10;
    if (lVar6 == 10) {
      uVar5 = 0;
      break;
    }
    while (pbVar1 = (byte *)*param_1, pbVar1 == (byte *)param_1[1]) {
      plVar3 = param_1;
      func_0x0054e238();
      if (((ulong)plVar3 & 1) == 0) {
        uVar5 = 0;
        bVar4 = false;
        goto LAB_0054eb7c;
      }
    }
    bVar2 = *pbVar1;
    uVar5 = ((ulong)bVar2 & 0x7f) << (lVar6 * 7 & 0x3fU) | uVar5;
    *param_1 = (long)(pbVar1 + 1);
    lVar6 = lVar6 + 1;
  } while ((char)bVar2 < '\0');
LAB_0054eb7c:
  *param_2 = uVar5;
  return bVar4;
}



/* Entry: 0054eb94; end: 0054ebbf;  */

void FUN_0054eb94(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_2;
  uStack_14 = param_1;
  func_0x0054f268(&uStack_14,&uStack_18);
  return;
}



/* Entry: 0054ebc0; end: 0054ec3b;  */

long FUN_0054ebc0(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *unaff_x19;
  ulong unaff_x20;
  long lVar3;
  
  func_0x0054f5f4();
  while( true ) {
    uVar1 = *unaff_x19;
    if (unaff_x19[1] == 0) {
      unaff_x19[1] = unaff_x20;
      return (uVar1 - unaff_x20) + 0x10;
    }
    if (unaff_x20 <= uVar1) break;
    puVar2 = unaff_x19;
    FUN_0054ec3c();
    unaff_x20 = (long)puVar2 + (long)((int)unaff_x20 - (int)uVar1);
    if ((unaff_x19[7] & 1) != 0) {
      return 0;
    }
  }
  lVar3 = unaff_x20 - (long)(unaff_x19 + 2);
  _memcpy(unaff_x19[1],unaff_x19 + 2,lVar3);
  unaff_x19[1] = unaff_x19[1] + lVar3;
  return *unaff_x19 - unaff_x20;
}



/* Entry: 0054ec3c; end: 0054eda7;  */

long * FUN_0054ec3c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plStack_30;
  uint uStack_24;
  
  if (param_1[6] == 0) {
    *(undefined1 *)(param_1 + 7) = 1;
LAB_0054ecec:
    *param_1 = (long)(param_1 + 4);
  }
  else {
    plVar2 = param_1 + 2;
    plVar1 = (long *)*param_1;
    if (param_1[1] == 0) {
      lVar3 = *plVar1;
      param_1[3] = plVar1[1];
      *plVar2 = lVar3;
      plVar2 = param_1 + 4;
    }
    else {
      _memcpy(param_1[1],plVar2,(long)plVar1 - (long)plVar2);
      do {
        plVar1 = (long *)param_1[6];
        (**(code **)(*plVar1 + 0x10))(plVar1,&plStack_30,&uStack_24);
        if (((ulong)plVar1 & 1) == 0) {
          *(undefined1 *)(param_1 + 7) = 1;
          goto LAB_0054ecec;
        }
      } while (uStack_24 == 0);
      plVar1 = (long *)*param_1;
      if (0x10 < (int)uStack_24) {
        lVar3 = *plVar1;
        plStack_30[1] = plVar1[1];
        *plStack_30 = lVar3;
        *param_1 = (long)plStack_30 + ((ulong)uStack_24 - 0x10);
        param_1[1] = 0;
        return plStack_30;
      }
      lVar3 = *plVar1;
      param_1[3] = plVar1[1];
      *plVar2 = lVar3;
      plVar2 = (long *)((long)plVar2 + (long)(int)uStack_24);
      plVar1 = plStack_30;
    }
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar1;
  }
  return param_1 + 2;
}



/* Entry: 0054eda8; end: 0054ee23;  */

long FUN_0054eda8(undefined8 *param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  
  while( true ) {
    iVar2 = ((int)*param_1 - (int)param_4) + 0x10;
    if (param_3 - iVar2 == 0 || param_3 < iVar2) break;
    func_0x0054f690();
    lVar1 = (long)param_4 + (long)iVar2;
    param_4 = param_1;
    func_0x0054ed58(param_1,lVar1);
    param_3 = param_3 - iVar2;
  }
  func_0x0054f690();
  return (long)param_4 + (long)param_3;
}



/* Entry: 0054ee24; end: 0054ef63;  */

long * FUN_0054ee24(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)param_3;
  if ((*param_1 - (long)param_4) + 0x10 <= (long)iVar4) {
    plVar2 = param_1;
    func_0x0054ed18(param_1,param_4);
    plVar3 = (long *)param_1[6];
    (**(code **)(*plVar3 + 0x28))(plVar3,param_2,param_3);
    if (((ulong)plVar3 & 1) == 0) {
      func_0x0054f630();
    }
    return plVar2;
  }
  if (*param_1 - (long)param_4 < (long)iVar4) {
    while( true ) {
      iVar5 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar4 = (int)param_3;
      param_3 = (ulong)(uint)(iVar4 - iVar5);
      if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
      func_0x0054f690();
      lVar1 = (long)param_4 + (long)iVar5;
      param_4 = param_1;
      func_0x0054ed58(param_1,lVar1);
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar4);
  }
  _memcpy(param_4,param_2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)iVar4);
}



/* Entry: 0054ef64; end: 0054efdf;  */

long * FUN_0054ef64(long param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 in_ZR;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  undefined8 extraout_x8_00;
  uint extraout_w10;
  uint uVar6;
  uint extraout_w10_00;
  int iVar7;
  int iVar8;
  long lStack_c0;
  ulong uStack_b8;
  long lStack_a8;
  undefined8 uStack_28;
  
  plVar4 = &lStack_c0;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  FUN_0054f2b8(&lStack_c0,param_1);
  while (uVar2 = uStack_b8, lStack_a8 != 0) {
    param_1 = lStack_c0;
    param_3 = uStack_b8;
    _memcpy(param_2);
    param_2 = (long *)((long)param_2 + uVar2);
    plVar4 = &lStack_c0;
    func_0x0054f284();
  }
  func_0x0054f6d8(uStack_28);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x0054f58c();
  func_0x0054f618();
  uVar6 = extraout_w10;
  while (0x7f < uVar6) {
    func_0x0054f6c4();
    uVar6 = extraout_w10_00;
  }
  func_0x0054f600();
  uVar5 = extraout_x8;
  while (0x7f < (uint)uVar5) {
    func_0x0054f69c();
    uVar5 = extraout_x8_00;
  }
  func_0x0054f5b0();
  iVar7 = (int)param_3;
  if ((*(char *)((long)plVar4 + 0x39) == '\x01') &&
     ((*plVar4 - (long)param_4) + 0x10 <= (long)iVar7)) {
    plVar3 = plVar4;
    func_0x0054ed18(plVar4,param_4);
    plVar4 = (long *)plVar4[6];
    (**(code **)(*plVar4 + 0x28))(plVar4,param_1,param_3);
    if (((ulong)plVar4 & 1) == 0) {
      func_0x0054f630();
    }
    return plVar3;
  }
  if (*plVar4 - (long)param_4 < (long)iVar7) {
    while( true ) {
      iVar8 = ((int)*plVar4 - (int)param_4) + 0x10;
      iVar7 = (int)param_3;
      param_3 = (ulong)(uint)(iVar7 - iVar8);
      if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
      func_0x0054f690();
      puVar1 = (undefined1 *)((long)param_4 + (long)iVar8);
      param_4 = plVar4;
      func_0x0054ed58(plVar4,puVar1);
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar7);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)iVar7);
}


