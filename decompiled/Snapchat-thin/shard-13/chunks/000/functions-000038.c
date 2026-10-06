/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109df030c; end: 109df0363;  */

long * FUN_109df030c(long *param_1)

{
  long lStack_30;
  undefined4 uStack_28;
  
  FUN_109df01ac(&lStack_30);
  if ((0x40 < *(uint *)(param_1 + 1)) && (*param_1 != 0)) {
    __ZdaPv();
  }
  *param_1 = lStack_30;
  *(undefined4 *)(param_1 + 1) = uStack_28;
  return param_1;
}



/* Entry: 109df0364; end: 109df0637;  */

undefined8
FUN_109df0364(ulong *param_1,ulong *param_2,ulong param_3,ulong param_4,uint param_5,uint param_6,
             int param_7)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar2 = (uint)(param_3 >> 0x20);
  uVar1 = param_5;
  if (param_6 <= param_5) {
    uVar1 = param_6;
  }
  uVar4 = (ulong)uVar1;
  puVar6 = param_2;
  puVar8 = param_1;
  if (uVar1 != 0) {
    do {
      uVar10 = *puVar6;
      uVar3 = param_4;
      uVar9 = 0;
      if ((param_3 != 0) && (uVar10 != 0)) {
        uVar9 = (uVar10 & 0xffffffff) * (param_3 & 0xffffffff);
        uVar13 = (uVar10 & 0xffffffff) * (ulong)uVar2;
        uVar12 = (uVar10 >> 0x20) * (param_3 & 0xffffffff);
        uVar11 = ((ulong)(uint)((int)uVar13 + (int)uVar12) << 0x20) +
                 (uVar10 & 0xffffffff) * (param_3 & 0xffffffff);
        uVar3 = uVar11 + param_4;
        uVar9 = (uVar13 >> 0x20) + (uVar10 >> 0x20) * (ulong)uVar2 + (uVar12 >> 0x20) +
                (ulong)CARRY8(uVar9,uVar13 << 0x20) + (ulong)(uVar11 < uVar9 + (uVar13 << 0x20)) +
                (ulong)CARRY8(uVar11,param_4);
      }
      param_4 = uVar9;
      if (param_7 != 0) {
        if (CARRY8(uVar3,*puVar8)) {
          param_4 = param_4 + 1;
        }
        uVar3 = *puVar8 + uVar3;
      }
      *puVar8 = uVar3;
      uVar4 = uVar4 - 1;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar4 != 0);
  }
  if (param_5 < param_6) {
    uVar5 = 0;
    param_1[param_5] = param_4;
  }
  else if (param_4 == 0) {
    uVar5 = 0;
    if ((param_3 != 0) && (param_6 < param_5)) {
      lVar7 = (ulong)param_5 - (ulong)param_6;
      puVar6 = param_2 + param_6;
      do {
        if (*puVar6 != 0) goto LAB_109df0410;
        lVar7 = lVar7 + -1;
        puVar6 = puVar6 + 1;
      } while (lVar7 != 0);
      uVar5 = 0;
    }
  }
  else {
LAB_109df0410:
    uVar5 = 1;
  }
  return uVar5;
}



/* Entry: 109df0638; end: 109df070f;  */

ulong * FUN_109df0638(ulong *param_1,ulong *param_2,uint param_3)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_3 < 0x41) {
    uVar3 = *param_2;
    *(uint *)(param_1 + 1) = param_3;
    if (param_3 < 0x41) {
      *param_1 = uVar3;
      FUN_109d301fc(param_1);
    }
    else {
      FUN_109defdd8(param_1,uVar3,0);
    }
    return param_1;
  }
  uVar1 = (uint)param_2[1];
  if (uVar1 == param_3) {
    uVar1 = (uint)param_2[1];
    *(uint *)(param_1 + 1) = uVar1;
    if (uVar1 < 0x41) {
      *param_1 = *param_2;
    }
    else {
      uVar3 = (ulong)uVar1 + 0x3f >> 3 & 0x3ffffff8;
      __Znam();
      *param_1 = uVar3;
      _memcpy();
    }
    return param_1;
  }
  uVar5 = (ulong)param_3 + 0x3f >> 6;
  uVar3 = uVar5 << 3;
  __Znam();
  *(uint *)(param_1 + 1) = param_3;
  *param_1 = uVar3;
  if (0x40 < uVar1) {
    param_2 = (ulong *)*param_2;
  }
  uVar4 = (ulong)uVar1 + 0x3f >> 6;
  _memcpy(uVar3,param_2,uVar4 << 3);
  puVar2 = (ulong *)(uVar3 + uVar4 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)(puVar2,((int)uVar5 - (int)uVar4) * 8);
  return puVar2;
}



/* Entry: 109df0710; end: 109df07e7;  */

long * FUN_109df0710(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  uint *puVar4;
  long lStack_c0;
  long alStack_b8 [8];
  undefined1 auStack_78 [64];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (uint *)(param_1 + 1);
  if (*puVar4 < 0x41) {
    FUN_109d2fb48(alStack_b8);
    plVar1 = alStack_b8;
    plVar3 = (long *)0x0;
    func_0x000109df25d4(plVar1,0,alStack_b8,auStack_78,puVar4,param_1);
  }
  else {
    lVar2 = *param_1;
    func_0x000109df264c(lVar2,lVar2 + ((ulong)*puVar4 + 0x3f >> 3 & 0x3ffffff8));
    lStack_c0 = lVar2;
    FUN_109d2fb48(alStack_b8);
    plVar1 = alStack_b8;
    plVar3 = (long *)0x0;
    func_0x000109df2758(plVar1,0,alStack_b8,auStack_78,puVar4,&lStack_c0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar1;
  }
  ___stack_chk_fail();
  if (*(uint *)(plVar1 + 1) < 0x41) {
    return (long *)(ulong)(*plVar1 == *plVar3);
  }
  lVar2 = *plVar1;
  _memcmp(lVar2,*plVar3,(ulong)*(uint *)(plVar1 + 1) + 0x3f >> 3 & 0x3ffffff8);
  return (long *)(ulong)((int)lVar2 == 0);
}



/* Entry: 109df07e8; end: 109df0837;  */

bool FUN_109df07e8(long *param_1,long *param_2)

{
  long lVar1;
  
  if (*(uint *)(param_1 + 1) < 0x41) {
    return *param_1 == *param_2;
  }
  lVar1 = *param_1;
  _memcmp(lVar1,*param_2,(ulong)*(uint *)(param_1 + 1) + 0x3f >> 3 & 0x3ffffff8);
  return (int)lVar1 == 0;
}



/* Entry: 109df0838; end: 109df088f;  */

void FUN_109df0838(undefined8 param_1,long param_2)

{
  FUN_109d32ad0(*(undefined4 *)(param_2 + 8));
  FUN_109df0890(param_1,param_2);
  return;
}



/* Entry: 109df0890; end: 109df0a7b;  */

void FUN_109df0890(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if ((uint)param_1[1] < 0x41) {
    *param_1 = *param_1 & *param_2;
    return;
  }
  uVar3 = (ulong)(uint)param_1[1] + 0x3f >> 6;
  puVar1 = (ulong *)*param_1;
  puVar2 = (ulong *)*param_2;
  do {
    *puVar1 = *puVar1 & *puVar2;
    uVar3 = uVar3 - 1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (uVar3 != 0);
  return;
}



/* Entry: 109df0a7c; end: 109df0ba7;  */

/* WARNING: Possible PIC construction at 0x000109df0b1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109df0b20) */
/* WARNING: Removing unreachable block (ram,0x000109df0b28) */
/* WARNING: Removing unreachable block (ram,0x000109df0b38) */
/* WARNING: Removing unreachable block (ram,0x000109df0b5c) */
/* WARNING: Removing unreachable block (ram,0x000109df0b68) */
/* WARNING: Removing unreachable block (ram,0x000109df0b78) */

ulong * FUN_109df0a7c(ulong *param_1,ulong *param_2)

{
  undefined1 *puVar1;
  ulong *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 uVar5;
  ulong *unaff_x19;
  ulong *unaff_x20;
  undefined1 *puVar6;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xffffffffffffffe0;
  puVar6 = &stack0xfffffffffffffff0;
  uVar3 = (uint)param_2[1];
  if (uVar3 == 0x20) {
    uVar3 = ((uint)*param_2 & 0xff00ff00) >> 8 | ((uint)*param_2 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar5 = 0x20;
  }
  else {
    if (uVar3 != 0x10) {
      if (uVar3 < 0x41) {
        uVar4 = (*param_2 & 0xff00ff00ff00ff00) >> 8 | (*param_2 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        uVar4 = (uVar4 >> 0x20 | uVar4 << 0x20) >> (-(ulong)uVar3 & 0x3f);
        puVar1 = (undefined1 *)register0x00000008;
        param_2 = unaff_x20;
        puVar6 = unaff_x29;
      }
      else {
        uVar3 = uVar3 + 0x3f & 0xffffffc0;
        uVar4 = 0;
        unaff_x30 = 0x109df0b20;
        unaff_x19 = param_1;
      }
      *(ulong **)(puVar1 + -0x20) = param_2;
      *(ulong **)(puVar1 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar1 + -0x10) = puVar6;
      *(undefined8 *)(puVar1 + -8) = unaff_x30;
      *(uint *)(param_1 + 1) = uVar3;
      if (uVar3 < 0x41) {
        *param_1 = uVar4;
        FUN_109d301fc(param_1);
      }
      else {
        FUN_109defdd8(param_1,uVar4,0);
      }
      return param_1;
    }
    uVar3 = (uint)(ushort)((ushort)*param_2 >> 8) | ((ushort)*param_2 & 0xff00ff) << 8;
    uVar5 = 0x10;
  }
  *(undefined4 *)(param_1 + 1) = uVar5;
  *param_1 = (ulong)uVar3;
  puVar2 = param_1;
  uVar3 = (uint)param_1[1];
  if (uVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0xffffffffffffffff >> ((ulong)-uVar3 & 0x3f);
    if (0x40 < uVar3) {
      param_1 = (ulong *)(*param_1 + (ulong)((int)((ulong)uVar3 + 0x3f >> 6) - 1) * 8);
    }
  }
  *param_1 = *param_1 & uVar4;
  return puVar2;
}



/* Entry: 109df0ba8; end: 109df0c97;  */

ulong * FUN_109df0ba8(ulong *param_1,ulong *param_2,uint param_3)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_3 < 0x41) {
    if (0x40 < (uint)param_2[1]) {
      param_2 = (ulong *)*param_2;
    }
    uVar3 = *param_2;
    *(uint *)(param_1 + 1) = param_3;
    if (param_3 < 0x41) {
      *param_1 = uVar3;
      FUN_109d301fc(param_1);
    }
    else {
      FUN_109defdd8(param_1,uVar3,0);
    }
    return param_1;
  }
  if ((uint)param_2[1] == param_3) {
    uVar1 = (uint)param_2[1];
    *(uint *)(param_1 + 1) = uVar1;
    if (uVar1 < 0x41) {
      *param_1 = *param_2;
    }
    else {
      uVar3 = (ulong)uVar1 + 0x3f >> 3 & 0x3ffffff8;
      __Znam();
      *param_1 = uVar3;
      _memcpy();
    }
    return param_1;
  }
  puVar2 = (ulong *)((ulong)param_3 + 0x3f >> 3 & 0x3ffffff8);
  __Znam();
  lVar4 = 0;
  *(uint *)(param_1 + 1) = param_3;
  *param_1 = (ulong)puVar2;
  uVar3 = (ulong)(param_3 >> 6);
  do {
    *(undefined8 *)(*param_1 + lVar4) = *(undefined8 *)(*param_2 + lVar4);
    lVar4 = lVar4 + 8;
  } while (uVar3 << 3 != lVar4);
  if ((-param_3 & 0x3f) != 0) {
    *(ulong *)(*param_1 + uVar3 * 8) =
         *(ulong *)(*param_2 + uVar3 * 8) & 0xffffffffffffffffU >> (-param_3 & 0x3f);
  }
  return puVar2;
}



/* Entry: 109df0c98; end: 109df0def;  */

ulong * FUN_109df0c98(ulong *param_1,ulong *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_3 < 0x41) {
    uVar5 = (long)(*param_2 << ((ulong)(uint)-(int)param_2[1] & 0x3f)) >>
            ((ulong)(uint)-(int)param_2[1] & 0x3f);
    *(uint *)(param_1 + 1) = param_3;
    if (param_3 < 0x41) {
      *param_1 = uVar5;
      FUN_109d301fc(param_1);
    }
    else {
      FUN_109defdd8(param_1,uVar5,0);
    }
    return param_1;
  }
  uVar1 = (uint)param_2[1];
  if (uVar1 == param_3) {
    uVar1 = (uint)param_2[1];
    *(uint *)(param_1 + 1) = uVar1;
    if (uVar1 < 0x41) {
      *param_1 = *param_2;
    }
    else {
      uVar5 = (ulong)uVar1 + 0x3f >> 3 & 0x3ffffff8;
      __Znam();
      *param_1 = uVar5;
      _memcpy();
    }
    return param_1;
  }
  uVar7 = (ulong)param_3 + 0x3f >> 6;
  uVar5 = uVar7 << 3;
  __Znam();
  *(uint *)(param_1 + 1) = param_3;
  *param_1 = uVar5;
  puVar4 = param_2;
  if (0x40 < uVar1) {
    puVar4 = (ulong *)*param_2;
  }
  uVar6 = (ulong)uVar1 + 0x3f >> 6;
  _memcpy(uVar5,puVar4,uVar6 << 3);
  uVar2 = (int)uVar6 - 1;
  uVar3 = uVar1 - 1;
  *(long *)(uVar5 + (ulong)uVar2 * 8) =
       (*(long *)(uVar5 + (ulong)uVar2 * 8) << ((ulong)~uVar3 & 0x3f)) >> ((ulong)~uVar3 & 0x3f);
  if (0x40 < uVar1) {
    param_2 = (ulong *)(*param_2 + (ulong)(uVar3 >> 6) * 8);
  }
  _memset(uVar5 + uVar6 * 8,-(uint)((*param_2 >> ((ulong)uVar3 & 0x3f) & 1) != 0),
          ((int)uVar7 - (int)uVar6) * 8);
  FUN_109d301fc(param_1);
  return param_1;
}



/* Entry: 109df0df0; end: 109df0fe3;  */

void FUN_109df0df0(ulong *param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  
  if (param_2 != 0) {
    uVar2 = (uint)param_1[1];
    puVar7 = param_1;
    if (0x40 < uVar2) {
      puVar7 = (ulong *)(*param_1 + (ulong)(uVar2 - 1 >> 6) * 8);
    }
    uVar8 = *puVar7;
    uVar3 = param_2 >> 6;
    iVar5 = (int)((ulong)uVar2 + 0x3f >> 6);
    uVar4 = iVar5 - (param_2 >> 6);
    if (uVar4 != 0) {
      uVar6 = (ulong)(iVar5 - 1);
      *(long *)(*param_1 + uVar6 * 8) =
           (*(long *)(*param_1 + uVar6 * 8) << ((ulong)-uVar2 & 0x3f)) >> ((ulong)-uVar2 & 0x3f);
      param_2 = param_2 & 0x3f;
      if (param_2 == 0) {
        _memmove(*param_1,*param_1 + (ulong)uVar3 * 8,uVar4 * 8);
      }
      else {
        uVar9 = (ulong)(uVar4 - 1);
        if (uVar4 - 1 == 0) {
          uVar9 = 0;
        }
        else {
          lVar10 = 0;
          uVar11 = uVar3;
          do {
            uVar12 = *param_1;
            uVar1 = (ulong)uVar11;
            uVar11 = uVar11 + 1;
            *(ulong *)(uVar12 + lVar10) =
                 *(long *)(uVar12 + (ulong)uVar11 * 8) << ((ulong)(0x40 - param_2) & 0x3f) |
                 *(ulong *)(uVar12 + uVar1 * 8) >> param_2;
            lVar10 = lVar10 + 8;
          } while (uVar9 << 3 != lVar10);
        }
        *(ulong *)(*param_1 + uVar9 * 8) = *(ulong *)(*param_1 + uVar6 * 8) >> param_2;
        *(long *)(*param_1 + uVar9 * 8) = (*(long *)(*param_1 + uVar9 * 8) << param_2) >> param_2;
      }
    }
    _memset(*param_1 + (ulong)uVar4 * 8,-(uint)((uVar8 & 1L << ((ulong)(uVar2 - 1) & 0x3f)) != 0),
            uVar3 << 3);
    uVar2 = (uint)param_1[1];
    if (uVar2 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0xffffffffffffffff >> ((ulong)-uVar2 & 0x3f);
      if (0x40 < uVar2) {
        param_1 = (ulong *)(*param_1 + (ulong)((int)((ulong)uVar2 + 0x3f >> 6) - 1) * 8);
      }
    }
    *param_1 = *param_1 & uVar8;
    return;
  }
  return;
}



/* Entry: 109df0fe4; end: 109df10bb;  */

void FUN_109df0fe4(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  uint uVar6;
  ulong *puVar7;
  
  if (param_3 == 0) {
    return;
  }
  uVar6 = param_3 >> 6;
  uVar1 = uVar6;
  if (param_2 <= uVar6) {
    uVar1 = param_2;
  }
  param_3 = param_3 & 0x3f;
  if (param_3 == 0) {
    _memmove(param_1 + (ulong)uVar1 * 8,param_1,(param_2 - uVar1) * 8);
  }
  else if (uVar6 < param_2) {
    uVar2 = (ulong)param_2 - 1;
    uVar6 = (uint)uVar2 - uVar1;
    uVar3 = *(long *)(param_1 + (ulong)uVar6 * 8) << param_3;
    puVar4 = (ulong *)(param_1 + uVar2 * 8);
    *puVar4 = uVar3;
    if (uVar1 <= (uint)uVar2 && uVar6 != 0) {
      uVar6 = (param_2 - 2) - uVar1;
      puVar5 = (ulong *)((ulong)param_2 * 8 + (long)(int)-uVar1 * 8 + param_1 + -0x10);
      puVar7 = (ulong *)(param_1 + (ulong)(param_2 - 2) * 8);
      do {
        *puVar4 = *puVar5 >> ((ulong)(0x40 - param_3) & 0x3f) | uVar3;
        uVar2 = uVar2 - 1;
        uVar3 = *(long *)(param_1 + (ulong)uVar6 * 8) << param_3;
        puVar4 = (ulong *)(param_1 + (uVar2 & 0xffffffff) * 8);
        *puVar7 = uVar3;
        uVar6 = uVar6 - 1;
        puVar5 = puVar5 + -1;
        puVar7 = puVar7 + -1;
      } while (uVar1 < (uint)uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)(param_1,uVar1 << 3);
  return;
}



/* Entry: 109df10bc; end: 109df1287;  */

/* WARNING: Possible PIC construction at 0x000109df1230: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109df1234) */

ulong * FUN_109df10bc(ulong *param_1,ulong *param_2,ulong *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  ulong *puVar4;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *unaff_x19;
  ulong *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  ulong *puVar5;
  
  puVar1 = &stack0xfffffffffffffff0;
  uVar6 = (uint)param_2[1];
  if (uVar6 < 0x41) {
    uVar7 = 0;
    if (*param_3 != 0) {
      uVar7 = *param_2 / *param_3;
    }
  }
  else {
    puVar4 = param_2;
    func_0x000109df08dc();
    uVar2 = (uint)param_3[1];
    if (uVar2 < 0x41) {
      iVar3 = uVar2 + (int)LZCOUNT(*param_3) + -0x40;
    }
    else {
      puVar5 = param_3;
      func_0x000109df08dc();
      iVar3 = (int)puVar5;
    }
    if (uVar6 != (uint)puVar4) {
      if (uVar2 - iVar3 == 1) {
        uVar6 = (uint)param_2[1];
        *(uint *)(param_1 + 1) = uVar6;
        if (uVar6 < 0x41) {
          *param_1 = *param_2;
        }
        else {
          uVar7 = (ulong)uVar6 + 0x3f >> 3 & 0x3ffffff8;
          __Znam();
          *param_1 = uVar7;
          _memcpy();
        }
        return param_1;
      }
      uVar7 = (ulong)(uVar6 - (uint)puVar4) + 0x3f >> 6;
      if ((ulong)(uVar2 - iVar3) + 0x3f >> 6 <= uVar7) {
        uVar8 = (ulong)uVar6 + 0x3f >> 3 & 0x3ffffff8;
        do {
          if (uVar8 == 0) goto LAB_109df11dc;
          uVar9 = *(ulong *)((*param_2 - 8) + uVar8);
          uVar10 = *(ulong *)((*param_3 - 8) + uVar8);
          uVar8 = uVar8 - 8;
        } while (uVar9 == uVar10);
        if (uVar10 < uVar9) {
LAB_109df11dc:
          puVar4 = param_2;
          FUN_109df07e8(param_2,param_3);
          if ((int)puVar4 == 0) {
            uVar6 = (uint)param_2[1];
            if (uVar7 == 1) {
              uVar7 = 0;
              if (*(ulong *)*param_3 != 0) {
                uVar7 = *(ulong *)*param_2 / *(ulong *)*param_3;
              }
            }
            else {
              uVar7 = 0;
              unaff_x30 = 0x109df1234;
              register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
              unaff_x19 = param_1;
              unaff_x20 = param_3;
              unaff_x29 = puVar1;
            }
          }
          else {
            uVar6 = (uint)param_2[1];
            uVar7 = 1;
          }
          goto SUB_109d301b0;
        }
      }
    }
    uVar7 = 0;
  }
SUB_109d301b0:
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(uint *)(param_1 + 1) = uVar6;
  if (uVar6 < 0x41) {
    *param_1 = uVar7;
    FUN_109d301fc(param_1);
  }
  else {
    FUN_109defdd8(param_1,uVar7,0);
  }
  return param_1;
}



/* Entry: 109df1288; end: 109df1803;  */

/* WARNING: Possible PIC construction at 0x000109df1230: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109df1234) */
/* WARNING: Type propagation algorithm not settling */

ulong *******
FUN_109df1288(undefined8 *param_1,ulong param_2,undefined8 *param_3,ulong param_4,
             undefined8 *param_5,ulong *******param_6)

{
  bool bVar1;
  uint uVar2;
  ulong *******pppppppuVar3;
  ulong *******pppppppuVar4;
  ulong uVar5;
  ulong *******pppppppuVar6;
  ulong ******ppppppuVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  ulong *******extraout_x8;
  uint uVar14;
  long lVar15;
  undefined8 uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong *******pppppppuVar25;
  int iVar26;
  ulong *puVar27;
  undefined8 *puVar28;
  ulong *******pppppppuVar29;
  ulong ******ppppppuVar30;
  ulong uVar31;
  undefined8 *******pppppppuVar32;
  code *pcVar33;
  ulong *******pppppppuStack_350;
  uint uStack_348;
  ulong ******ppppppuStack_340;
  undefined4 uStack_338;
  ulong *******pppppppuStack_330;
  uint uStack_328;
  ulong ******ppppppuStack_320;
  undefined4 uStack_318;
  ulong *******pppppppuStack_310;
  uint uStack_308;
  ulong *******pppppppuStack_300;
  uint uStack_2f8;
  ulong *******pppppppuStack_2f0;
  uint uStack_2e8;
  ulong *******pppppppuStack_2e0;
  uint uStack_2d8;
  ulong *******pppppppuStack_2d0;
  ulong ******ppppppuStack_2c8;
  undefined8 *puStack_2c0;
  ulong *******pppppppuStack_2b8;
  ulong *puStack_2b0;
  ulong *******pppppppuStack_2a8;
  undefined8 *******pppppppuStack_2a0;
  code *pcStack_298;
  ulong ******ppppppuStack_290;
  uint uStack_284;
  ulong uStack_280;
  ulong uStack_278;
  ulong ******appppppuStack_270 [64];
  long lStack_70;
  
  pppppppuVar32 = (undefined8 *******)&stack0xfffffffffffffff0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = (int)param_4 * 2;
  uVar31 = (ulong)uVar12;
  uVar22 = (int)param_2 * 2;
  puVar27 = (ulong *)(ulong)uVar22;
  uStack_284 = uVar22 + (int)param_4 * -2;
  iVar11 = 3;
  if (param_6 != (ulong *******)0x0) {
    iVar11 = 4;
  }
  uVar14 = (int)param_2 << 1 | 1;
  ppppppuVar7 = (ulong ******)((ulong)uVar14 << 2);
  uStack_280 = param_2;
  uStack_278 = param_4;
  if ((iVar11 * uVar12 + uStack_284 * 2 | 1) < 0x81) {
    ppppppuVar30 = (ulong ******)appppppuStack_270;
    pppppppuVar3 = (ulong *******)((long)ppppppuVar30 + (ulong)uVar14 * 4);
    pppppppuVar6 = (ulong *******)((long)ppppppuVar30 + (ulong)(uVar12 + uVar14) * 4);
    pppppppuVar4 = (ulong *******)0x0;
    if (param_6 != (ulong *******)0x0) {
      pppppppuVar4 = (ulong *******)((long)ppppppuVar30 + (ulong)(uVar12 + uVar14 + uVar22) * 4);
    }
  }
  else {
    ppppppuStack_290 = ppppppuVar7;
    __Znam();
    pppppppuVar4 = (ulong *******)(uVar31 << 2);
    pppppppuVar3 = pppppppuVar4;
    __Znam();
    pppppppuVar6 = (ulong *******)((long)puVar27 << 2);
    __Znam();
    ppppppuVar30 = ppppppuVar7;
    if (param_6 == (ulong *******)0x0) {
      ppppppuVar7 = ppppppuStack_290;
      pppppppuVar4 = (ulong *******)0x0;
    }
    else {
      __Znam();
      ppppppuVar7 = ppppppuStack_290;
    }
  }
  _bzero(ppppppuVar30,ppppppuVar7);
  if ((int)uStack_280 != 0) {
    uVar13 = 0;
    do {
      uVar16 = *param_1;
      *(uint *)((long)ppppppuVar30 + (uVar13 & 0xffffffff) * 4) = (uint)uVar16;
      *(uint *)((long)ppppppuVar30 + (ulong)((int)uVar13 + 1) * 4) = (uint)((ulong)uVar16 >> 0x20);
      uVar13 = uVar13 + 2;
      param_1 = param_1 + 1;
    } while ((uStack_280 & 0xffffffff) << 1 != uVar13);
  }
  *(uint *)((long)ppppppuVar30 + (long)puVar27 * 4) = 0;
  puVar9 = (ulong *)(uVar31 << 2);
  _bzero(pppppppuVar3,puVar9);
  if ((int)uStack_278 != 0) {
    uVar13 = 0;
    do {
      uVar16 = *param_3;
      *(uint *)((long)pppppppuVar3 + (uVar13 & 0xffffffff) * 4) = (uint)uVar16;
      *(uint *)((long)pppppppuVar3 + (ulong)((int)uVar13 + 1) * 4) = (uint)((ulong)uVar16 >> 0x20);
      uVar13 = uVar13 + 2;
      param_3 = param_3 + 1;
    } while ((uStack_278 & 0xffffffff) << 1 != uVar13);
  }
  puVar8 = (ulong *)((long)puVar27 << 2);
  pppppppuVar29 = pppppppuVar6;
  _bzero();
  if (param_6 != (ulong *******)0x0) {
    pppppppuVar29 = pppppppuVar4;
    _bzero();
    puVar8 = puVar9;
  }
  if (uVar12 == 0) {
    puVar27 = (ulong *)(ulong)uStack_284;
  }
  else {
    do {
      if (*(int *)((long)pppppppuVar3 + uVar31 * 4 + -4) != 0) {
        puVar27 = (ulong *)(ulong)(uVar22 - (int)uVar31);
        break;
      }
      uVar31 = uVar31 - 1;
    } while (uVar31 != 0);
  }
  iVar11 = (int)uVar31;
  uVar12 = iVar11 + (int)puVar27;
  puVar9 = puVar27;
  if (uVar12 != 0) {
    lVar15 = (ulong)uVar12 << 2;
    do {
      puVar9 = puVar27;
      if (*(int *)((long)ppppppuVar30 + lVar15 + -4) != 0) break;
      puVar27 = (ulong *)(ulong)((int)puVar27 - 1);
      lVar15 = lVar15 + -4;
      puVar9 = (ulong *)(ulong)(uint)-iVar11;
    } while (lVar15 != 0);
  }
  uVar12 = iVar11 - 1;
  uVar13 = (ulong)uVar12;
  iVar26 = (int)puVar9;
  if (uVar12 == 0) {
    uVar31 = 0;
    uVar12 = 0;
    if (-1 < iVar26) {
      uVar22 = *(uint *)pppppppuVar3;
      uVar13 = (ulong)uVar22;
      puVar27 = puVar9;
      do {
        uVar12 = *(uint *)((long)ppppppuVar30 + (long)puVar27 * 4);
        uVar19 = (ulong)uVar12 | uVar31 << 0x20;
        if (uVar19 == 0) {
          uVar31 = 0;
LAB_109df14ac:
          *(uint *)((long)pppppppuVar6 + (long)puVar27 * 4) = 0;
        }
        else {
          uVar31 = (ulong)uVar12;
          if (uVar19 < uVar13) goto LAB_109df14ac;
          if (uVar19 == uVar13) {
            uVar31 = 0;
            *(uint *)((long)pppppppuVar6 + (long)puVar27 * 4) = 1;
          }
          else {
            uVar14 = 0;
            if (uVar13 != 0) {
              uVar14 = (uint)(uVar19 / uVar13);
            }
            *(uint *)((long)pppppppuVar6 + (long)puVar27 * 4) = uVar14;
            uVar31 = (ulong)(uVar12 - uVar22 * uVar14);
          }
        }
        uVar12 = (uint)uVar31;
        bVar1 = 0 < (long)puVar27;
        puVar27 = (ulong *)((long)puVar27 + -1);
      } while (bVar1);
    }
    if (pppppppuVar4 != (ulong *******)0x0) {
      *(uint *)pppppppuVar4 = uVar12;
    }
  }
  else {
    uVar22 = iVar26 + iVar11;
    uVar14 = (uint)LZCOUNT(*(uint *)((long)pppppppuVar3 + uVar13 * 4));
    if (uVar14 == 0) {
      uVar17 = 0;
    }
    else {
      if (uVar22 == 0) {
        uVar17 = 0;
      }
      else {
        ppppppuVar7 = ppppppuVar30;
        uVar19 = (ulong)uVar22;
        uVar21 = 0;
        do {
          uVar17 = *(uint *)ppppppuVar7 >> (ulong)(0x20 - uVar14 & 0x1f);
          *(uint *)ppppppuVar7 = *(uint *)ppppppuVar7 << (ulong)(uVar14 & 0x1f) | uVar21;
          uVar19 = uVar19 - 1;
          ppppppuVar7 = (ulong ******)((long)ppppppuVar7 + 4);
          uVar21 = uVar17;
        } while (uVar19 != 0);
      }
      if (iVar11 != 0) {
        uVar21 = 0;
        uVar19 = uVar31 & 0xffffffff;
        pppppppuVar29 = pppppppuVar3;
        do {
          uVar2 = *(uint *)pppppppuVar29 << (ulong)(uVar14 & 0x1f) | uVar21;
          uVar21 = *(uint *)pppppppuVar29 >> (ulong)(0x20 - uVar14 & 0x1f);
          *(uint *)pppppppuVar29 = uVar2;
          uVar19 = uVar19 - 1;
          pppppppuVar29 = (ulong *******)((long)pppppppuVar29 + 4);
        } while (uVar19 != 0);
      }
    }
    *(uint *)((long)ppppppuVar30 + (ulong)uVar22 * 4) = uVar17;
    uVar19 = (long)iVar26;
    do {
      uVar22 = iVar11 + (int)uVar19;
      uVar20 = (ulong)uVar22;
      uVar23 = CONCAT44(*(uint *)((long)ppppppuVar30 + (ulong)uVar22 * 4),
                        *(uint *)((long)ppppppuVar30 + (ulong)(uVar22 - 1) * 4));
      uVar18 = (ulong)*(uint *)((long)pppppppuVar3 + uVar13 * 4);
      uVar5 = 0;
      if (uVar18 != 0) {
        uVar5 = uVar23 / uVar18;
      }
      pppppppuVar29 = (ulong *******)(uVar23 - uVar5 * uVar18);
      if ((uVar5 == 0x100000000) ||
         (puVar8 = (ulong *)(uVar5 * *(uint *)((long)pppppppuVar3 + (ulong)(iVar11 - 2U) * 4)),
         puVar27 = (ulong *)((ulong)*(uint *)((long)ppppppuVar30 + (ulong)(uVar22 - 2) * 4) |
                            (long)pppppppuVar29 << 0x20), uVar23 = uVar5,
         puVar27 <= puVar8 && (long)puVar8 - (long)puVar27 != 0)) {
        uVar23 = uVar5 - 1;
        uVar18 = (long)pppppppuVar29 + uVar18;
        pppppppuVar29 = (ulong *******)(uVar18 >> 0x20);
        if (pppppppuVar29 == (ulong *******)0x0) {
          if (uVar23 != 0x100000000) {
            pppppppuVar29 =
                 (ulong *******)(uVar23 * *(uint *)((long)pppppppuVar3 + (ulong)(iVar11 - 2U) * 4));
            puVar8 = (ulong *)(ulong)*(uint *)((long)ppppppuVar30 + (ulong)(uVar22 - 2) * 4);
            pppppppuVar25 = (ulong *******)((ulong)puVar8 | uVar18 << 0x20);
            if (pppppppuVar29 < pppppppuVar25 || (long)pppppppuVar29 - (long)pppppppuVar25 == 0)
            goto LAB_109df1604;
          }
          uVar23 = uVar5 - 2;
        }
      }
LAB_109df1604:
      uVar22 = (uint)uVar23;
      if (iVar11 == 0) {
        *(uint *)((long)pppppppuVar6 + uVar19 * 4) = uVar22;
      }
      else {
        uVar24 = 0;
        uVar18 = uVar19;
        uVar5 = uVar31 & 0xffffffff;
        pppppppuVar29 = pppppppuVar3;
        do {
          uVar17 = *(uint *)pppppppuVar29;
          uVar24 = (ulong)*(uint *)((long)ppppppuVar30 + (uVar18 & 0xffffffff) * 4) -
                   (uVar24 + (uVar23 * uVar17 & 0xffffffff));
          *(uint *)((long)ppppppuVar30 + (uVar18 & 0xffffffff) * 4) = (uint)uVar24;
          uVar10 = (uVar23 * uVar17 >> 0x20) - (uVar24 >> 0x20);
          uVar24 = uVar10 & 0xffffffff;
          uVar18 = uVar18 + 1;
          uVar5 = uVar5 - 1;
          pppppppuVar29 = (ulong *******)((long)pppppppuVar29 + 4);
        } while (uVar5 != 0);
        uVar17 = *(uint *)((long)ppppppuVar30 + uVar20 * 4);
        uVar21 = uVar17 - (int)uVar10;
        pppppppuVar29 = (ulong *******)(ulong)uVar21;
        *(uint *)((long)ppppppuVar30 + uVar20 * 4) = uVar21;
        *(uint *)((long)pppppppuVar6 + uVar19 * 4) = uVar22;
        puVar8 = (ulong *)0x0;
        if (uVar17 < uVar24) {
          uVar17 = 0;
          *(uint *)((long)pppppppuVar6 + uVar19 * 4) = uVar22 - 1;
          uVar5 = uVar31 & 0xffffffff;
          uVar18 = uVar19;
          pppppppuVar29 = pppppppuVar3;
          do {
            uVar2 = *(uint *)pppppppuVar29;
            uVar22 = *(uint *)((long)ppppppuVar30 + (uVar18 & 0xffffffff) * 4);
            uVar21 = uVar2;
            if (uVar22 <= uVar2) {
              uVar21 = uVar22;
            }
            uVar22 = uVar2 + uVar17 + uVar22;
            puVar8 = (ulong *)(ulong)uVar22;
            *(uint *)((long)ppppppuVar30 + (uVar18 & 0xffffffff) * 4) = uVar22;
            if (uVar22 < uVar21) {
              uVar17 = 1;
            }
            else {
              puVar8 = (ulong *)(ulong)(uVar22 == uVar21);
              uVar17 = uVar17 & uVar22 == uVar21;
            }
            uVar18 = uVar18 + 1;
            uVar5 = uVar5 - 1;
            pppppppuVar29 = (ulong *******)((long)pppppppuVar29 + 4);
          } while (uVar5 != 0);
          *(uint *)((long)ppppppuVar30 + uVar20 * 4) =
               *(uint *)((long)ppppppuVar30 + uVar20 * 4) + uVar17;
          pppppppuVar29 = (ulong *******)0x0;
        }
      }
      bVar1 = 0 < (long)uVar19;
      uVar19 = uVar19 - 1;
    } while (bVar1);
    if (pppppppuVar4 != (ulong *******)0x0) {
      if (uVar14 == 0) {
        if (-1 < (int)uVar12) {
          do {
            *(uint *)((long)pppppppuVar4 + uVar13 * 4) = *(uint *)((long)ppppppuVar30 + uVar13 * 4);
            bVar1 = 0 < (long)uVar13;
            uVar13 = uVar13 - 1;
          } while (bVar1);
        }
      }
      else if (-1 < (int)uVar12) {
        uVar12 = 0;
        do {
          uVar22 = *(uint *)((long)ppppppuVar30 + uVar13 * 4);
          *(uint *)((long)pppppppuVar4 + uVar13 * 4) = uVar22 >> (ulong)(uVar14 & 0x1f) | uVar12;
          uVar12 = uVar22 << (ulong)(0x20 - uVar14 & 0x1f);
          bVar1 = 0 < (long)uVar13;
          uVar13 = uVar13 - 1;
        } while (bVar1);
      }
    }
  }
  if (((int)uStack_280 != 0) && (param_5 != (undefined8 *)0x0)) {
    uVar31 = 0;
    puVar28 = param_5;
    do {
      param_5 = puVar28 + 1;
      *puVar28 = CONCAT44(*(uint *)((long)pppppppuVar6 + (ulong)((int)uVar31 + 1) * 4),
                          *(uint *)((long)pppppppuVar6 + (uVar31 & 0xffffffff) * 4));
      uVar31 = uVar31 + 2;
      puVar28 = param_5;
    } while ((uStack_280 & 0xffffffff) << 1 != uVar31);
  }
  if (((int)uStack_278 != 0) && (param_6 != (ulong *******)0x0)) {
    uVar31 = 0;
    pppppppuVar25 = param_6;
    do {
      param_6 = pppppppuVar25 + 1;
      *pppppppuVar25 =
           (ulong ******)
           CONCAT44(*(uint *)((long)pppppppuVar4 + (ulong)((int)uVar31 + 1) * 4),
                    *(uint *)((long)pppppppuVar4 + (uVar31 & 0xffffffff) * 4));
      uVar31 = uVar31 + 2;
      pppppppuVar25 = param_6;
    } while ((uStack_278 & 0xffffffff) << 1 != uVar31);
  }
  if ((ulong *******)ppppppuVar30 != appppppuStack_270) {
    __ZdaPv(ppppppuVar30);
    __ZdaPv(pppppppuVar3);
    pppppppuVar29 = pppppppuVar6;
    __ZdaPv();
    if (pppppppuVar4 != (ulong *******)0x0) {
      __ZdaPv();
      pppppppuVar29 = pppppppuVar4;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pppppppuVar29;
  }
  ___stack_chk_fail();
  pcStack_298 = FUN_109df1804;
  uVar12 = *(uint *)(pppppppuVar29 + 1);
  pppppppuVar4 = pppppppuVar29;
  if (0x40 < uVar12) {
    pppppppuVar4 = (ulong *******)(*pppppppuVar29 + (uVar12 - 1 >> 6));
  }
  uVar22 = (uint)puVar8[1];
  uVar14 = uVar22 - 1;
  uVar31 = (ulong)uVar14;
  pppppppuStack_2d0 = pppppppuVar6;
  ppppppuStack_2c8 = ppppppuVar30;
  puStack_2c0 = param_5;
  pppppppuStack_2b8 = pppppppuVar3;
  puStack_2b0 = puVar9;
  pppppppuStack_2a8 = param_6;
  pppppppuStack_2a0 = pppppppuVar32;
  if (((ulong)*pppppppuVar4 >> ((ulong)(uVar12 - 1) & 0x3f) & 1) != 0) {
    puVar27 = puVar8;
    if (0x40 < uVar22) {
      puVar27 = (ulong *)(*puVar8 + (ulong)(uVar14 >> 6) * 8);
    }
    if ((*puVar27 >> (uVar31 & 0x3f) & 1) == 0) {
      uStack_328 = uVar12;
      if (uVar12 < 0x41) {
        pppppppuVar29 = (ulong *******)*pppppppuVar29;
      }
      else {
        pppppppuVar29 = (ulong *******)((ulong)uVar12 + 0x3f >> 3 & 0x3ffffff8);
        __Znam();
        _memcpy();
      }
      pppppppuStack_330 = pppppppuVar29;
      func_0x000109d30524(&pppppppuStack_330);
      FUN_109deffd0(&pppppppuStack_330);
      uStack_2d8 = uStack_328;
      pppppppuStack_2e0 = pppppppuStack_330;
      uStack_328 = 0;
      FUN_109df10bc(&ppppppuStack_320,&pppppppuStack_2e0,puVar8);
      func_0x000109d30524(&ppppppuStack_320);
      pppppppuVar6 = &ppppppuStack_320;
      FUN_109deffd0(pppppppuVar6);
      *(undefined4 *)(extraout_x8 + 1) = uStack_318;
      *extraout_x8 = ppppppuStack_320;
      uStack_318 = 0;
      pppppppuVar3 = pppppppuStack_330;
      uVar12 = uStack_328;
      if ((0x40 < uStack_2d8) &&
         (pppppppuVar6 = pppppppuStack_2e0, pppppppuStack_2e0 != (ulong *******)0x0)) {
        __ZdaPv();
        pppppppuVar3 = pppppppuStack_330;
        uVar12 = uStack_328;
      }
    }
    else {
      if (uVar12 < 0x41) {
        pppppppuVar29 = (ulong *******)*pppppppuVar29;
        uStack_2e8 = uVar12;
      }
      else {
        pppppppuVar29 = (ulong *******)((ulong)uVar12 + 0x3f >> 3 & 0x3ffffff8);
        uStack_2e8 = uVar12;
        __Znam();
        _memcpy();
      }
      pppppppuStack_2f0 = pppppppuVar29;
      func_0x000109d30524(&pppppppuStack_2f0);
      FUN_109deffd0(&pppppppuStack_2f0);
      uStack_2d8 = uStack_2e8;
      pppppppuStack_2e0 = pppppppuStack_2f0;
      uStack_2e8 = 0;
      uStack_308 = (uint)puVar8[1];
      if (uStack_308 < 0x41) {
        pppppppuStack_310 = (ulong *******)*puVar8;
      }
      else {
        pppppppuVar6 = (ulong *******)((ulong)uStack_308 + 0x3f >> 3 & 0x3ffffff8);
        __Znam();
        pppppppuStack_310 = pppppppuVar6;
        _memcpy();
      }
      func_0x000109d30524(&pppppppuStack_310);
      FUN_109deffd0(&pppppppuStack_310);
      uStack_2f8 = uStack_308;
      pppppppuStack_300 = pppppppuStack_310;
      uStack_308 = 0;
      pppppppuVar6 = (ulong *******)&pppppppuStack_2e0;
      FUN_109df10bc(extraout_x8,pppppppuVar6,&pppppppuStack_300);
      if ((0x40 < uStack_2f8) &&
         (pppppppuVar6 = pppppppuStack_300, pppppppuStack_300 != (ulong *******)0x0)) {
        __ZdaPv();
      }
      if ((0x40 < uStack_308) &&
         (pppppppuVar6 = pppppppuStack_310, pppppppuStack_310 != (ulong *******)0x0)) {
        __ZdaPv();
      }
      pppppppuVar3 = pppppppuStack_2f0;
      uVar12 = uStack_2e8;
      if ((0x40 < uStack_2d8) &&
         (pppppppuVar6 = pppppppuStack_2e0, pppppppuStack_2e0 != (ulong *******)0x0)) {
        __ZdaPv();
        pppppppuVar3 = pppppppuStack_2f0;
        uVar12 = uStack_2e8;
      }
    }
    goto joined_r0x000109df1a8c;
  }
  uStack_348 = uVar22;
  if (uVar22 < 0x41) {
    pppppppuStack_350 = (ulong *******)*puVar8;
    if (((ulong)pppppppuStack_350 >> (uVar31 & 0x3f) & 1) == 0) {
code_r0x000109df10bc:
      uVar12 = *(uint *)(pppppppuVar29 + 1);
      if (uVar12 < 0x41) {
        ppppppuVar7 = (ulong ******)0x0;
        pppppppuVar6 = &ppppppuStack_290;
        pcVar33 = pcStack_298;
        if (*puVar8 != 0) {
          ppppppuVar7 = (ulong ******)((ulong)*pppppppuVar29 / *puVar8);
          pppppppuVar6 = &ppppppuStack_290;
        }
      }
      else {
        pppppppuVar6 = pppppppuVar29;
        func_0x000109df08dc();
        uVar22 = (uint)puVar8[1];
        if (uVar22 < 0x41) {
          iVar11 = uVar22 + (int)LZCOUNT(*puVar8) + -0x40;
        }
        else {
          puVar27 = puVar8;
          func_0x000109df08dc();
          iVar11 = (int)puVar27;
        }
        if (uVar12 != (uint)pppppppuVar6) {
          if (uVar22 - iVar11 == 1) {
            uVar12 = *(uint *)(pppppppuVar29 + 1);
            *(uint *)(extraout_x8 + 1) = uVar12;
            if (uVar12 < 0x41) {
              *extraout_x8 = *pppppppuVar29;
            }
            else {
              ppppppuVar7 = (ulong ******)((ulong)uVar12 + 0x3f >> 3 & 0x3ffffff8);
              __Znam();
              *extraout_x8 = ppppppuVar7;
              _memcpy();
            }
            return extraout_x8;
          }
          uVar31 = (ulong)(uVar12 - (uint)pppppppuVar6) + 0x3f >> 6;
          if ((ulong)(uVar22 - iVar11) + 0x3f >> 6 <= uVar31) {
            uVar13 = (ulong)uVar12 + 0x3f >> 3 & 0x3ffffff8;
            do {
              if (uVar13 == 0) goto LAB_109df11dc;
              uVar19 = *(ulong *)((long)*pppppppuVar29 + (uVar13 - 8));
              uVar18 = *(ulong *)((*puVar8 - 8) + uVar13);
              uVar13 = uVar13 - 8;
            } while (uVar19 == uVar18);
            if (uVar18 < uVar19) {
LAB_109df11dc:
              pppppppuVar6 = pppppppuVar29;
              FUN_109df07e8(pppppppuVar29,puVar8);
              param_6 = pppppppuStack_2a8;
              puVar9 = puStack_2b0;
              pppppppuVar32 = pppppppuStack_2a0;
              pcVar33 = pcStack_298;
              if ((int)pppppppuVar6 == 0) {
                uVar12 = *(uint *)(pppppppuVar29 + 1);
                if (uVar31 == 1) {
                  ppppppuVar7 = (ulong ******)0x0;
                  pppppppuVar6 = &ppppppuStack_290;
                  if (*(ulong *)*puVar8 != 0) {
                    ppppppuVar7 = (ulong ******)((ulong)**pppppppuVar29 / *(ulong *)*puVar8);
                    pppppppuVar6 = &ppppppuStack_290;
                  }
                }
                else {
                  ppppppuVar7 = (ulong ******)0x0;
                  pppppppuVar6 = (ulong *******)&pppppppuStack_2d0;
                  param_6 = extraout_x8;
                  puVar9 = puVar8;
                  pppppppuVar32 = &pppppppuStack_2a0;
                  pcVar33 = (code *)0x109df1234;
                }
              }
              else {
                uVar12 = *(uint *)(pppppppuVar29 + 1);
                ppppppuVar7 = (ulong ******)0x1;
                pppppppuVar6 = &ppppppuStack_290;
              }
              goto SUB_109d301b0;
            }
          }
        }
        ppppppuVar7 = (ulong ******)0x0;
        pppppppuVar6 = &ppppppuStack_290;
        param_6 = pppppppuStack_2a8;
        puVar9 = puStack_2b0;
        pppppppuVar32 = pppppppuStack_2a0;
        pcVar33 = pcStack_298;
      }
SUB_109d301b0:
      *(ulong **)((long)pppppppuVar6 + -0x20) = puVar9;
      *(ulong ********)((long)pppppppuVar6 + -0x18) = param_6;
      *(undefined8 ********)((long)pppppppuVar6 + -0x10) = pppppppuVar32;
      *(code **)((long)pppppppuVar6 + -8) = pcVar33;
      *(uint *)(extraout_x8 + 1) = uVar12;
      if (uVar12 < 0x41) {
        *extraout_x8 = ppppppuVar7;
        FUN_109d301fc(extraout_x8);
      }
      else {
        FUN_109defdd8(extraout_x8,ppppppuVar7,0);
      }
      return extraout_x8;
    }
  }
  else {
    if ((*(ulong *)(*puVar8 + (ulong)(uVar14 >> 6) * 8) >> (uVar31 & 0x3f) & 1) == 0)
    goto code_r0x000109df10bc;
    pppppppuVar6 = (ulong *******)((ulong)uVar22 + 0x3f >> 3 & 0x3ffffff8);
    __Znam();
    pppppppuStack_350 = pppppppuVar6;
    _memcpy();
  }
  func_0x000109d30524(&pppppppuStack_350);
  FUN_109deffd0(&pppppppuStack_350);
  uStack_2d8 = uStack_348;
  pppppppuStack_2e0 = pppppppuStack_350;
  uStack_348 = 0;
  FUN_109df10bc(&ppppppuStack_340,pppppppuVar29,&pppppppuStack_2e0);
  func_0x000109d30524(&ppppppuStack_340);
  pppppppuVar6 = &ppppppuStack_340;
  FUN_109deffd0(pppppppuVar6);
  *(undefined4 *)(extraout_x8 + 1) = uStack_338;
  *extraout_x8 = ppppppuStack_340;
  uStack_338 = 0;
  pppppppuVar3 = pppppppuStack_350;
  uVar12 = uStack_348;
  if ((0x40 < uStack_2d8) &&
     (pppppppuVar6 = pppppppuStack_2e0, pppppppuStack_2e0 != (ulong *******)0x0)) {
    __ZdaPv();
    pppppppuVar3 = pppppppuStack_350;
    uVar12 = uStack_348;
  }
joined_r0x000109df1a8c:
  if ((0x40 < uVar12) && (pppppppuVar6 = pppppppuVar3, pppppppuVar3 != (ulong *******)0x0)) {
    __ZdaPv();
    pppppppuVar6 = pppppppuVar3;
  }
  return pppppppuVar6;
}



/* Entry: 109df1804; end: 109df1cbf;  */

/* WARNING: Possible PIC construction at 0x000109df1230: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109df1234) */
/* WARNING: Type propagation algorithm not settling */

ulong ******* FUN_109df1804(ulong *******param_1,ulong *param_2,ulong *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong *puVar5;
  ulong *******pppppppuVar7;
  uint uVar8;
  ulong ******ppppppuVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *******unaff_x19;
  ulong *unaff_x20;
  ulong *******pppppppuVar14;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  ulong *******pppppppuStack_c0;
  uint uStack_b8;
  ulong ******ppppppuStack_b0;
  undefined4 uStack_a8;
  ulong *******pppppppuStack_a0;
  uint uStack_98;
  ulong ******ppppppuStack_90;
  undefined4 uStack_88;
  ulong *******pppppppuStack_80;
  uint uStack_78;
  ulong *******pppppppuStack_70;
  uint uStack_68;
  ulong *******pppppppuStack_60;
  uint uStack_58;
  ulong *******pppppppuStack_50;
  uint uStack_48;
  ulong *puVar6;
  
  uVar8 = (uint)param_2[1];
  puVar5 = param_2;
  if (0x40 < uVar8) {
    puVar5 = (ulong *)(*param_2 + (ulong)(uVar8 - 1 >> 6) * 8);
  }
  uVar2 = (uint)param_3[1];
  uVar3 = uVar2 - 1;
  uVar11 = (ulong)uVar3;
  if ((*puVar5 >> ((ulong)(uVar8 - 1) & 0x3f) & 1) != 0) {
    puVar5 = param_3;
    if (0x40 < uVar2) {
      puVar5 = (ulong *)(*param_3 + (ulong)(uVar3 >> 6) * 8);
    }
    if ((*puVar5 >> (uVar11 & 0x3f) & 1) == 0) {
      uStack_98 = uVar8;
      if (uVar8 < 0x41) {
        pppppppuVar14 = (ulong *******)*param_2;
      }
      else {
        pppppppuVar14 = (ulong *******)((ulong)uVar8 + 0x3f >> 3 & 0x3ffffff8);
        __Znam();
        _memcpy();
      }
      pppppppuStack_a0 = pppppppuVar14;
      func_0x000109d30524(&pppppppuStack_a0);
      FUN_109deffd0(&pppppppuStack_a0);
      uStack_48 = uStack_98;
      pppppppuStack_50 = pppppppuStack_a0;
      uStack_98 = 0;
      FUN_109df10bc(&ppppppuStack_90,&pppppppuStack_50,param_3);
      func_0x000109d30524(&ppppppuStack_90);
      pppppppuVar14 = &ppppppuStack_90;
      FUN_109deffd0(pppppppuVar14);
      *(undefined4 *)(param_1 + 1) = uStack_88;
      *param_1 = ppppppuStack_90;
      uStack_88 = 0;
      pppppppuVar7 = pppppppuStack_a0;
      uVar8 = uStack_98;
      if ((0x40 < uStack_48) &&
         (pppppppuVar14 = pppppppuStack_50, pppppppuStack_50 != (ulong *******)0x0)) {
        __ZdaPv();
        pppppppuVar7 = pppppppuStack_a0;
        uVar8 = uStack_98;
      }
    }
    else {
      if (uVar8 < 0x41) {
        pppppppuVar14 = (ulong *******)*param_2;
        uStack_58 = uVar8;
      }
      else {
        pppppppuVar14 = (ulong *******)((ulong)uVar8 + 0x3f >> 3 & 0x3ffffff8);
        uStack_58 = uVar8;
        __Znam();
        _memcpy();
      }
      pppppppuStack_60 = pppppppuVar14;
      func_0x000109d30524(&pppppppuStack_60);
      FUN_109deffd0(&pppppppuStack_60);
      uStack_48 = uStack_58;
      pppppppuStack_50 = pppppppuStack_60;
      uStack_58 = 0;
      uStack_78 = (uint)param_3[1];
      if (uStack_78 < 0x41) {
        pppppppuStack_80 = (ulong *******)*param_3;
      }
      else {
        pppppppuVar14 = (ulong *******)((ulong)uStack_78 + 0x3f >> 3 & 0x3ffffff8);
        __Znam();
        pppppppuStack_80 = pppppppuVar14;
        _memcpy();
      }
      func_0x000109d30524(&pppppppuStack_80);
      FUN_109deffd0(&pppppppuStack_80);
      uStack_68 = uStack_78;
      pppppppuStack_70 = pppppppuStack_80;
      uStack_78 = 0;
      pppppppuVar14 = (ulong *******)&pppppppuStack_50;
      FUN_109df10bc(param_1,pppppppuVar14,&pppppppuStack_70);
      if ((0x40 < uStack_68) &&
         (pppppppuVar14 = pppppppuStack_70, pppppppuStack_70 != (ulong *******)0x0)) {
        __ZdaPv();
      }
      if ((0x40 < uStack_78) &&
         (pppppppuVar14 = pppppppuStack_80, pppppppuStack_80 != (ulong *******)0x0)) {
        __ZdaPv();
      }
      pppppppuVar7 = pppppppuStack_60;
      uVar8 = uStack_58;
      if ((0x40 < uStack_48) &&
         (pppppppuVar14 = pppppppuStack_50, pppppppuStack_50 != (ulong *******)0x0)) {
        __ZdaPv();
        pppppppuVar7 = pppppppuStack_60;
        uVar8 = uStack_58;
      }
    }
    goto joined_r0x000109df1a8c;
  }
  uStack_b8 = uVar2;
  if (uVar2 < 0x41) {
    pppppppuStack_c0 = (ulong *******)*param_3;
    if (((ulong)pppppppuStack_c0 >> (uVar11 & 0x3f) & 1) == 0) {
code_r0x000109df10bc:
      puVar1 = &stack0xfffffffffffffff0;
      uVar8 = (uint)param_2[1];
      if (uVar8 < 0x41) {
        ppppppuVar9 = (ulong ******)0x0;
        if (*param_3 != 0) {
          ppppppuVar9 = (ulong ******)(*param_2 / *param_3);
        }
      }
      else {
        puVar5 = param_2;
        func_0x000109df08dc();
        uVar2 = (uint)param_3[1];
        if (uVar2 < 0x41) {
          iVar4 = uVar2 + (int)LZCOUNT(*param_3) + -0x40;
        }
        else {
          puVar6 = param_3;
          func_0x000109df08dc();
          iVar4 = (int)puVar6;
        }
        if (uVar8 != (uint)puVar5) {
          if (uVar2 - iVar4 == 1) {
            uVar8 = (uint)param_2[1];
            *(uint *)(param_1 + 1) = uVar8;
            if (uVar8 < 0x41) {
              *param_1 = (ulong ******)*param_2;
            }
            else {
              ppppppuVar9 = (ulong ******)((ulong)uVar8 + 0x3f >> 3 & 0x3ffffff8);
              __Znam();
              *param_1 = ppppppuVar9;
              _memcpy();
            }
            return param_1;
          }
          uVar11 = (ulong)(uVar8 - (uint)puVar5) + 0x3f >> 6;
          if ((ulong)(uVar2 - iVar4) + 0x3f >> 6 <= uVar11) {
            uVar10 = (ulong)uVar8 + 0x3f >> 3 & 0x3ffffff8;
            do {
              if (uVar10 == 0) goto LAB_109df11dc;
              uVar12 = *(ulong *)((*param_2 - 8) + uVar10);
              uVar13 = *(ulong *)((*param_3 - 8) + uVar10);
              uVar10 = uVar10 - 8;
            } while (uVar12 == uVar13);
            if (uVar13 < uVar12) {
LAB_109df11dc:
              puVar5 = param_2;
              FUN_109df07e8(param_2,param_3);
              if ((int)puVar5 == 0) {
                uVar8 = (uint)param_2[1];
                if (uVar11 == 1) {
                  ppppppuVar9 = (ulong ******)0x0;
                  if (*(ulong *)*param_3 != 0) {
                    ppppppuVar9 = (ulong ******)(*(ulong *)*param_2 / *(ulong *)*param_3);
                  }
                }
                else {
                  ppppppuVar9 = (ulong ******)0x0;
                  unaff_x30 = 0x109df1234;
                  register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
                  unaff_x19 = param_1;
                  unaff_x20 = param_3;
                  unaff_x29 = puVar1;
                }
              }
              else {
                uVar8 = (uint)param_2[1];
                ppppppuVar9 = (ulong ******)0x1;
              }
              goto SUB_109d301b0;
            }
          }
        }
        ppppppuVar9 = (ulong ******)0x0;
      }
SUB_109d301b0:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong ********)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      *(uint *)(param_1 + 1) = uVar8;
      if (uVar8 < 0x41) {
        *param_1 = ppppppuVar9;
        FUN_109d301fc(param_1);
      }
      else {
        FUN_109defdd8(param_1,ppppppuVar9,0);
      }
      return param_1;
    }
  }
  else {
    if ((*(ulong *)(*param_3 + (ulong)(uVar3 >> 6) * 8) >> (uVar11 & 0x3f) & 1) == 0)
    goto code_r0x000109df10bc;
    pppppppuVar14 = (ulong *******)((ulong)uVar2 + 0x3f >> 3 & 0x3ffffff8);
    __Znam();
    pppppppuStack_c0 = pppppppuVar14;
    _memcpy();
  }
  func_0x000109d30524(&pppppppuStack_c0);
  FUN_109deffd0(&pppppppuStack_c0);
  uStack_48 = uStack_b8;
  pppppppuStack_50 = pppppppuStack_c0;
  uStack_b8 = 0;
  FUN_109df10bc(&ppppppuStack_b0,param_2,&pppppppuStack_50);
  func_0x000109d30524(&ppppppuStack_b0);
  pppppppuVar14 = &ppppppuStack_b0;
  FUN_109deffd0(pppppppuVar14);
  *(undefined4 *)(param_1 + 1) = uStack_a8;
  *param_1 = ppppppuStack_b0;
  uStack_a8 = 0;
  pppppppuVar7 = pppppppuStack_c0;
  uVar8 = uStack_b8;
  if ((0x40 < uStack_48) &&
     (pppppppuVar14 = pppppppuStack_50, pppppppuStack_50 != (ulong *******)0x0)) {
    __ZdaPv();
    pppppppuVar7 = pppppppuStack_c0;
    uVar8 = uStack_b8;
  }
joined_r0x000109df1a8c:
  if ((0x40 < uVar8) && (pppppppuVar14 = pppppppuVar7, pppppppuVar7 != (ulong *******)0x0)) {
    __ZdaPv();
    pppppppuVar14 = pppppppuVar7;
  }
  return pppppppuVar14;
}



/* Entry: 109df1cc0; end: 109df1e8f;  */

/* WARNING: Possible PIC construction at 0x000109df1e38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109df1e3c) */

ulong * FUN_109df1cc0(ulong *param_1,ulong *param_2,ulong *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  ulong *puVar4;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *unaff_x19;
  ulong *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  ulong *puVar5;
  
  puVar1 = &stack0xfffffffffffffff0;
  uVar6 = (uint)param_2[1];
  if (uVar6 < 0x41) {
    uVar8 = *param_3;
    uVar7 = 0;
    if (uVar8 != 0) {
      uVar7 = *param_2 / uVar8;
    }
    uVar7 = *param_2 - uVar7 * uVar8;
  }
  else {
    puVar4 = param_2;
    func_0x000109df08dc();
    uVar2 = (uint)param_3[1];
    if (uVar2 < 0x41) {
      iVar3 = uVar2 + (int)LZCOUNT(*param_3) + -0x40;
    }
    else {
      puVar5 = param_3;
      func_0x000109df08dc();
      iVar3 = (int)puVar5;
    }
    if ((uVar6 != (uint)puVar4) && (uVar2 - iVar3 != 1)) {
      uVar7 = (ulong)(uVar6 - (uint)puVar4) + 0x3f >> 6;
      if (uVar7 < (ulong)(uVar2 - iVar3) + 0x3f >> 6) {
FUN_109df256c:
        uVar6 = (uint)param_2[1];
        *(uint *)(param_1 + 1) = uVar6;
        if (uVar6 < 0x41) {
          *param_1 = *param_2;
        }
        else {
          uVar7 = (ulong)uVar6 + 0x3f >> 3 & 0x3ffffff8;
          __Znam();
          *param_1 = uVar7;
          _memcpy();
        }
        return param_1;
      }
      uVar8 = (ulong)uVar6 + 0x3f >> 3 & 0x3ffffff8;
      do {
        if (uVar8 == 0) goto LAB_109df1de4;
        uVar9 = *(ulong *)((*param_2 - 8) + uVar8);
        uVar10 = *(ulong *)((*param_3 - 8) + uVar8);
        uVar8 = uVar8 - 8;
      } while (uVar9 == uVar10);
      if (uVar9 <= uVar10) goto FUN_109df256c;
LAB_109df1de4:
      puVar4 = param_2;
      FUN_109df07e8(param_2,param_3);
      if ((int)puVar4 == 0) {
        uVar6 = (uint)param_2[1];
        if (uVar7 == 1) {
          uVar8 = *(ulong *)*param_3;
          uVar7 = 0;
          if (uVar8 != 0) {
            uVar7 = *(ulong *)*param_2 / uVar8;
          }
          uVar7 = *(ulong *)*param_2 - uVar7 * uVar8;
        }
        else {
          uVar7 = 0;
          unaff_x30 = 0x109df1e3c;
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
          unaff_x19 = param_1;
          unaff_x20 = param_3;
          unaff_x29 = puVar1;
        }
        goto SUB_109d301b0;
      }
      uVar6 = (uint)param_2[1];
    }
    uVar7 = 0;
  }
SUB_109d301b0:
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(uint *)(param_1 + 1) = uVar6;
  if (uVar6 < 0x41) {
    *param_1 = uVar7;
    FUN_109d301fc(param_1);
  }
  else {
    FUN_109defdd8(param_1,uVar7,0);
  }
  return param_1;
}



/* Entry: 109df1e90; end: 109df234b;  */

/* WARNING: Possible PIC construction at 0x000109df1e38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109df1e3c) */

ulong * FUN_109df1e90(ulong *param_1,ulong *param_2,ulong *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *unaff_x19;
  ulong *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  ulong *puStack_c0;
  uint uStack_b8;
  ulong *puStack_b0;
  uint uStack_a8;
  ulong uStack_a0;
  undefined4 uStack_98;
  ulong *puStack_90;
  uint uStack_88;
  ulong *puStack_80;
  uint uStack_78;
  ulong *puStack_70;
  uint uStack_68;
  ulong *puStack_60;
  uint uStack_58;
  ulong uStack_50;
  undefined4 uStack_48;
  ulong *puVar5;
  
  uVar7 = (uint)param_2[1];
  puVar6 = param_2;
  if (0x40 < uVar7) {
    puVar6 = (ulong *)(*param_2 + (ulong)(uVar7 - 1 >> 6) * 8);
  }
  uVar2 = (uint)param_3[1];
  uVar3 = uVar2 - 1;
  uVar9 = (ulong)uVar3;
  if ((*puVar6 >> ((ulong)(uVar7 - 1) & 0x3f) & 1) != 0) {
    puVar6 = param_3;
    if (0x40 < uVar2) {
      puVar6 = (ulong *)(*param_3 + (ulong)(uVar3 >> 6) * 8);
    }
    if ((*puVar6 >> (uVar9 & 0x3f) & 1) == 0) {
      uStack_a8 = uVar7;
      if (uVar7 < 0x41) {
        param_2 = (ulong *)*param_2;
      }
      else {
        param_2 = (ulong *)((ulong)uVar7 + 0x3f >> 3 & 0x3ffffff8);
        __Znam();
        _memcpy();
      }
      puStack_b0 = param_2;
      func_0x000109d30524(&puStack_b0);
      FUN_109deffd0(&puStack_b0);
      uStack_58 = uStack_a8;
      puStack_60 = puStack_b0;
      uStack_a8 = 0;
      FUN_109df1cc0(&uStack_a0,&puStack_60,param_3);
      func_0x000109d30524(&uStack_a0);
      puVar6 = &uStack_a0;
      FUN_109deffd0(puVar6);
      *(undefined4 *)(param_1 + 1) = uStack_98;
      *param_1 = uStack_a0;
      uStack_98 = 0;
      puVar5 = puStack_b0;
      uVar7 = uStack_a8;
      if ((0x40 < uStack_58) && (puVar6 = puStack_60, puStack_60 != (ulong *)0x0)) {
        __ZdaPv();
        puVar5 = puStack_b0;
        uVar7 = uStack_a8;
      }
    }
    else {
      if (uVar7 < 0x41) {
        param_2 = (ulong *)*param_2;
        uStack_68 = uVar7;
      }
      else {
        param_2 = (ulong *)((ulong)uVar7 + 0x3f >> 3 & 0x3ffffff8);
        uStack_68 = uVar7;
        __Znam();
        _memcpy();
      }
      puStack_70 = param_2;
      func_0x000109d30524(&puStack_70);
      FUN_109deffd0(&puStack_70);
      uStack_58 = uStack_68;
      puStack_60 = puStack_70;
      uStack_68 = 0;
      uStack_88 = (uint)param_3[1];
      if (uStack_88 < 0x41) {
        puStack_90 = (ulong *)*param_3;
      }
      else {
        puVar6 = (ulong *)((ulong)uStack_88 + 0x3f >> 3 & 0x3ffffff8);
        __Znam();
        puStack_90 = puVar6;
        _memcpy();
      }
      func_0x000109d30524(&puStack_90);
      FUN_109deffd0(&puStack_90);
      uStack_78 = uStack_88;
      puStack_80 = puStack_90;
      uStack_88 = 0;
      FUN_109df1cc0(&uStack_50,&puStack_60,&puStack_80);
      func_0x000109d30524(&uStack_50);
      puVar6 = &uStack_50;
      FUN_109deffd0(puVar6);
      *(undefined4 *)(param_1 + 1) = uStack_48;
      *param_1 = uStack_50;
      uStack_48 = 0;
      if ((0x40 < uStack_78) && (puVar6 = puStack_80, puStack_80 != (ulong *)0x0)) {
        __ZdaPv();
      }
      if ((0x40 < uStack_88) && (puVar6 = puStack_90, puStack_90 != (ulong *)0x0)) {
        __ZdaPv();
      }
      puVar5 = puStack_70;
      uVar7 = uStack_68;
      if ((0x40 < uStack_58) && (puVar6 = puStack_60, puStack_60 != (ulong *)0x0)) {
        __ZdaPv();
        puVar5 = puStack_70;
        uVar7 = uStack_68;
      }
    }
    goto joined_r0x000109df2118;
  }
  uStack_b8 = uVar2;
  if (uVar2 < 0x41) {
    puStack_c0 = (ulong *)*param_3;
    if (((ulong)puStack_c0 >> (uVar9 & 0x3f) & 1) == 0) {
code_r0x000109df1cc0:
      puVar1 = &stack0xfffffffffffffff0;
      uVar7 = (uint)param_2[1];
      if (uVar7 < 0x41) {
        uVar8 = *param_3;
        uVar9 = 0;
        if (uVar8 != 0) {
          uVar9 = *param_2 / uVar8;
        }
        uVar9 = *param_2 - uVar9 * uVar8;
      }
      else {
        puVar6 = param_2;
        func_0x000109df08dc();
        uVar2 = (uint)param_3[1];
        if (uVar2 < 0x41) {
          iVar4 = uVar2 + (int)LZCOUNT(*param_3) + -0x40;
        }
        else {
          puVar5 = param_3;
          func_0x000109df08dc();
          iVar4 = (int)puVar5;
        }
        if ((uVar7 != (uint)puVar6) && (uVar2 - iVar4 != 1)) {
          uVar9 = (ulong)(uVar7 - (uint)puVar6) + 0x3f >> 6;
          if (uVar9 < (ulong)(uVar2 - iVar4) + 0x3f >> 6) {
FUN_109df256c:
            uVar7 = (uint)param_2[1];
            *(uint *)(param_1 + 1) = uVar7;
            if (uVar7 < 0x41) {
              *param_1 = *param_2;
            }
            else {
              uVar9 = (ulong)uVar7 + 0x3f >> 3 & 0x3ffffff8;
              __Znam();
              *param_1 = uVar9;
              _memcpy();
            }
            return param_1;
          }
          uVar8 = (ulong)uVar7 + 0x3f >> 3 & 0x3ffffff8;
          do {
            if (uVar8 == 0) goto LAB_109df1de4;
            uVar10 = *(ulong *)((*param_2 - 8) + uVar8);
            uVar11 = *(ulong *)((*param_3 - 8) + uVar8);
            uVar8 = uVar8 - 8;
          } while (uVar10 == uVar11);
          if (uVar10 <= uVar11) goto FUN_109df256c;
LAB_109df1de4:
          puVar6 = param_2;
          FUN_109df07e8(param_2,param_3);
          if ((int)puVar6 == 0) {
            uVar7 = (uint)param_2[1];
            if (uVar9 == 1) {
              uVar8 = *(ulong *)*param_3;
              uVar9 = 0;
              if (uVar8 != 0) {
                uVar9 = *(ulong *)*param_2 / uVar8;
              }
              uVar9 = *(ulong *)*param_2 - uVar9 * uVar8;
            }
            else {
              uVar9 = 0;
              unaff_x30 = 0x109df1e3c;
              register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
              unaff_x19 = param_1;
              unaff_x20 = param_3;
              unaff_x29 = puVar1;
            }
            goto SUB_109d301b0;
          }
          uVar7 = (uint)param_2[1];
        }
        uVar9 = 0;
      }
SUB_109d301b0:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      *(uint *)(param_1 + 1) = uVar7;
      if (uVar7 < 0x41) {
        *param_1 = uVar9;
        FUN_109d301fc(param_1);
      }
      else {
        FUN_109defdd8(param_1,uVar9,0);
      }
      return param_1;
    }
  }
  else {
    if ((*(ulong *)(*param_3 + (ulong)(uVar3 >> 6) * 8) >> (uVar9 & 0x3f) & 1) == 0)
    goto code_r0x000109df1cc0;
    puVar6 = (ulong *)((ulong)uVar2 + 0x3f >> 3 & 0x3ffffff8);
    __Znam();
    puStack_c0 = puVar6;
    _memcpy();
  }
  func_0x000109d30524(&puStack_c0);
  FUN_109deffd0(&puStack_c0);
  uStack_58 = uStack_b8;
  puStack_60 = puStack_c0;
  uStack_b8 = 0;
  FUN_109df1cc0(param_1,param_2,&puStack_60);
  puVar6 = param_2;
  puVar5 = puStack_c0;
  uVar7 = uStack_b8;
  if ((0x40 < uStack_58) && (puVar6 = puStack_60, puStack_60 != (ulong *)0x0)) {
    __ZdaPv();
    puVar5 = puStack_c0;
    uVar7 = uStack_b8;
  }
joined_r0x000109df2118:
  if ((0x40 < uVar7) && (puVar6 = puVar5, puVar5 != (ulong *)0x0)) {
    __ZdaPv();
    puVar6 = puVar5;
  }
  return puVar6;
}



/* Entry: 109df234c; end: 109df246b;  */

void FUN_109df234c(undefined8 *param_1,uint param_2,long param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  uVar1 = param_4 + 0x3f;
  uVar2 = uVar1 >> 6;
  if (0x3f < uVar1) {
    puVar4 = (undefined8 *)(param_3 + (ulong)(param_5 >> 6) * 8);
    puVar6 = param_1;
    uVar5 = (ulong)uVar2;
    do {
      *puVar6 = *puVar4;
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar5 != 0);
  }
  func_0x000109df0f28(param_1,(ulong)uVar2,param_5 & 0x3f);
  uVar3 = (uVar1 & 0xffffffc0) - (param_5 & 0x3f);
  if (uVar3 < param_4) {
    uVar5 = (*(ulong *)(param_3 + (ulong)((param_5 >> 6) + uVar2) * 8) &
            0xffffffffffffffffU >> ((ulong)(uVar3 - param_4) & 0x3f)) << ((ulong)uVar3 & 0x3f) |
            param_1[uVar2 - 1];
  }
  else {
    if ((uVar3 - param_4 == 0) || ((param_4 & 0x3f) == 0)) goto LAB_109df2418;
    uVar5 = param_1[uVar2 - 1] & 0xffffffffffffffffU >> ((ulong)-(param_4 & 0x3f) & 0x3f);
  }
  param_1[uVar2 - 1] = uVar5;
LAB_109df2418:
  if (uVar2 < param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_11034bf90)
              ((long)param_1 + (ulong)(uVar1 >> 3 & 0x1ffffff8),(ulong)(param_2 + ~uVar2) * 8 + 8);
    return;
  }
  return;
}



/* Entry: 109df246c; end: 109df24c7;  */

void FUN_109df246c(ulong *param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_2 != 0) {
    lVar1 = 0;
    uVar3 = (ulong)param_2;
    do {
      *(ulong *)((long)param_1 + lVar1) = ~*(ulong *)((long)param_1 + lVar1);
      lVar1 = lVar1 + 8;
    } while ((ulong)param_2 << 3 != lVar1);
    uVar2 = *param_1;
    *param_1 = uVar2 + 1;
    if (uVar2 == 0xffffffffffffffff) {
      do {
        uVar3 = uVar3 - 1;
        param_1 = param_1 + 1;
        if (uVar3 == 0) {
          return;
        }
        uVar2 = *param_1;
        *param_1 = uVar2 + 1;
      } while (0xfffffffffffffffe < uVar2);
    }
  }
  return;
}



/* Entry: 109df24c8; end: 109df256b;  */

void FUN_109df24c8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,
                  ulong param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  
  do {
    uVar3 = param_5;
    puVar1 = param_3;
    param_5 = param_4;
    param_3 = param_2;
    uVar2 = (uint)uVar3;
    param_2 = puVar1;
    param_4 = uVar3;
  } while (uVar2 < (uint)param_5);
  *param_1 = 0;
  if (1 < uVar2) {
    _bzero(param_1 + 1,(ulong)(uVar2 - 1) << 3);
  }
  if ((uint)param_5 != 0) {
    param_5 = param_5 & 0xffffffff;
    do {
      FUN_109df0364(param_1,puVar1,*param_3,0,uVar3,uVar2 + 1,1);
      param_1 = param_1 + 1;
      param_5 = param_5 - 1;
      param_3 = param_3 + 1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109df256c; end: 109df2843;  */

ulong * FUN_109df256c(ulong *param_1,ulong *param_2)

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
  return param_1;
}



/* Entry: 109df2844; end: 109df290f;  */

undefined8
FUN_109df2844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5,long param_6,undefined4 *param_7)

{
  undefined1 **ppuVar1;
  undefined8 uVar2;
  undefined *apuStack_90 [2];
  undefined1 *puStack_80;
  long lStack_78;
  undefined2 uStack_70;
  undefined1 *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined2 uStack_48;
  
  ppuVar1 = &puStack_68;
  puStack_68 = param_5;
  lStack_60 = param_6;
  FUN_109e03e50(ppuVar1,0,apuStack_90);
  if (((((ulong)ppuVar1 & 1) == 0) && (lStack_60 == 0)) && ((ulong)apuStack_90[0] >> 0x20 == 0)) {
    uVar2 = 0;
    *param_7 = (int)apuStack_90[0];
  }
  else {
    uStack_70 = 0x503;
    apuStack_90[0] = &UNK_10f601ea7;
    puStack_58 = &UNK_10f601f2f;
    uStack_48 = 0x302;
    puStack_80 = param_5;
    lStack_78 = param_6;
    puStack_68 = (undefined1 *)apuStack_90;
    func_0x000107c2b034();
    FUN_109df35b4(param_2,&puStack_68,0,0,ppuVar1);
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 109df2910; end: 109df2927;  */

undefined8 FUN_109df2910(void)

{
  return 2;
}



/* Entry: 109df2928; end: 109df2993;  */

long FUN_109df2928(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 7;
  if (*(long *)(param_2 + 0x18) != 1) {
    lVar3 = *(long *)(param_2 + 0x18) + 7;
  }
  lVar2 = param_2;
  (**(code **)(*param_1 + 0x10))();
  if (lVar2 != 0) {
    lVar1 = 3;
    if ((*(ushort *)(param_2 + 10) & 0x400) != 0) {
      lVar1 = 6;
    }
    if (*(long *)(param_2 + 0x38) != 0) {
      lVar2 = *(long *)(param_2 + 0x38);
    }
    lVar3 = lVar1 + lVar3 + lVar2;
  }
  return lVar3;
}



/* Entry: 109df2994; end: 109df29a3;  */

void FUN_109df2994(long *param_1)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  ushort uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 uStack_41;
  
  plVar6 = param_1 + 0x13;
  plVar8 = &lStack_60;
  FUN_109e060c8();
  lStack_58 = param_1[3];
  lStack_60 = param_1[2];
  lStack_50 = 2;
  FUN_109df3754();
  plVar5 = plVar6;
  (**(code **)(*plVar6 + 0x10))();
  if (plVar8 == (long *)0x0) goto LAB_109df2bd0;
  if ((*(ushort *)((long)param_1 + 10) >> 10 & 1) == 0) {
    uVar4 = *(ushort *)((long)param_1 + 10) >> 3;
    plVar8 = (long *)(ulong)(uVar4 & 3);
    if ((uVar4 & 3) == 0) {
      plVar5 = param_1;
      (**(code **)(*param_1 + 8))();
      plVar8 = plVar5;
    }
    FUN_109e060c8();
    if ((int)plVar8 != 1) {
      puVar1 = (undefined2 *)&UNK_10f601ec3;
      if (param_1[3] != 1) {
        puVar1 = (undefined2 *)&UNK_10f601ed2;
      }
      if ((ulong)(plVar5[3] - plVar5[4]) < 2) {
        FUN_109e0560c();
      }
      else {
        *(undefined2 *)plVar5[4] = *puVar1;
        plVar5[4] = plVar5[4] + 2;
      }
      FUN_109d2f728();
      puVar2 = (undefined1 *)plVar5[4];
      if (puVar2 < (undefined1 *)plVar5[3]) {
        plVar5[4] = (long)(puVar2 + 1);
        *puVar2 = 0x3e;
      }
      else {
        FUN_109e05570();
      }
      goto LAB_109df2bd0;
    }
    puVar1 = (undefined2 *)plVar5[4];
    if ((ulong)(plVar5[3] - (long)puVar1) < 3) {
      FUN_109e0560c();
    }
    else {
      *(undefined1 *)(puVar1 + 1) = 0x3c;
      *puVar1 = 0x3d5b;
      plVar5[4] = plVar5[4] + 3;
    }
    FUN_109d2f728();
    if (1 < (ulong)(plVar5[3] - plVar5[4])) {
      *(undefined2 *)plVar5[4] = 0x5d3e;
      lVar9 = plVar5[4] + 2;
      goto LAB_109df2bc0;
    }
  }
  else {
    FUN_109e060c8();
    if ((ulong)(plVar5[3] - plVar5[4]) < 2) {
      FUN_109e0560c();
    }
    else {
      *(undefined2 *)plVar5[4] = 0x3c20;
      plVar5[4] = plVar5[4] + 2;
    }
    FUN_109d2f728();
    if (3 < (ulong)(plVar5[3] - plVar5[4])) {
      *(undefined4 *)plVar5[4] = 0x2e2e2e3e;
      lVar9 = plVar5[4] + 4;
LAB_109df2bc0:
      plVar5[4] = lVar9;
      goto LAB_109df2bd0;
    }
  }
  FUN_109e0560c();
LAB_109df2bd0:
  lVar9 = param_1[4];
  lVar3 = param_1[5];
  FUN_109df2928(plVar6,param_1);
  uStack_a0 = 10;
  plVar6 = &lStack_58;
  lStack_58 = lVar9;
  lStack_50 = lVar3;
  func_0x000109d39ec8(&uStack_80,plVar6,&uStack_a0,1);
  FUN_109e060c8();
  FUN_109e05b10();
  puVar1 = (undefined2 *)plVar6[4];
  if ((ulong)(plVar6[3] - (long)puVar1) < 3) {
    FUN_109e0560c();
  }
  else {
    *(undefined1 *)(puVar1 + 1) = 0x20;
    *puVar1 = 0x2d20;
    plVar6[4] = plVar6[4] + 3;
  }
  FUN_109d2f728();
  if ((undefined1 *)plVar6[3] == (undefined1 *)plVar6[4]) {
    FUN_109e0560c();
  }
  else {
    *(undefined1 *)plVar6[4] = 10;
    plVar6[4] = plVar6[4] + 1;
  }
  while (lStack_68 != 0) {
    uStack_41 = 10;
    puVar7 = &uStack_70;
    func_0x000109d39ec8(&uStack_a0,puVar7,&uStack_41,1);
    uStack_80 = CONCAT71(uStack_9f,uStack_a0);
    uStack_78 = uStack_98;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    FUN_109e060c8();
    FUN_109e05b10();
    FUN_109d2f728();
    if ((undefined1 *)puVar7[3] == (undefined1 *)puVar7[4]) {
      FUN_109e0560c();
    }
    else {
      *(undefined1 *)puVar7[4] = 10;
      puVar7[4] = puVar7[4] + 1;
    }
  }
  return;
}



/* Entry: 109df29a4; end: 109df2c07;  */

void FUN_109df29a4(long *param_1,long *param_2)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  ushort uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 uStack_41;
  
  plVar7 = &lStack_60;
  FUN_109e060c8();
  lStack_58 = param_2[3];
  lStack_60 = param_2[2];
  lStack_50 = 2;
  FUN_109df3754();
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x10))();
  if (plVar7 == (long *)0x0) goto LAB_109df2bd0;
  if ((*(ushort *)((long)param_2 + 10) >> 10 & 1) == 0) {
    uVar4 = *(ushort *)((long)param_2 + 10) >> 3;
    plVar7 = (long *)(ulong)(uVar4 & 3);
    if ((uVar4 & 3) == 0) {
      plVar5 = param_2;
      (**(code **)(*param_2 + 8))();
      plVar7 = plVar5;
    }
    FUN_109e060c8();
    if ((int)plVar7 != 1) {
      puVar1 = (undefined2 *)&UNK_10f601ec3;
      if (param_2[3] != 1) {
        puVar1 = (undefined2 *)&UNK_10f601ed2;
      }
      if ((ulong)(plVar5[3] - plVar5[4]) < 2) {
        FUN_109e0560c();
      }
      else {
        *(undefined2 *)plVar5[4] = *puVar1;
        plVar5[4] = plVar5[4] + 2;
      }
      FUN_109d2f728();
      puVar2 = (undefined1 *)plVar5[4];
      if (puVar2 < (undefined1 *)plVar5[3]) {
        plVar5[4] = (long)(puVar2 + 1);
        *puVar2 = 0x3e;
      }
      else {
        FUN_109e05570();
      }
      goto LAB_109df2bd0;
    }
    puVar1 = (undefined2 *)plVar5[4];
    if ((ulong)(plVar5[3] - (long)puVar1) < 3) {
      FUN_109e0560c();
    }
    else {
      *(undefined1 *)(puVar1 + 1) = 0x3c;
      *puVar1 = 0x3d5b;
      plVar5[4] = plVar5[4] + 3;
    }
    FUN_109d2f728();
    if (1 < (ulong)(plVar5[3] - plVar5[4])) {
      *(undefined2 *)plVar5[4] = 0x5d3e;
      lVar8 = plVar5[4] + 2;
      goto LAB_109df2bc0;
    }
  }
  else {
    FUN_109e060c8();
    if ((ulong)(plVar5[3] - plVar5[4]) < 2) {
      FUN_109e0560c();
    }
    else {
      *(undefined2 *)plVar5[4] = 0x3c20;
      plVar5[4] = plVar5[4] + 2;
    }
    FUN_109d2f728();
    if (3 < (ulong)(plVar5[3] - plVar5[4])) {
      *(undefined4 *)plVar5[4] = 0x2e2e2e3e;
      lVar8 = plVar5[4] + 4;
LAB_109df2bc0:
      plVar5[4] = lVar8;
      goto LAB_109df2bd0;
    }
  }
  FUN_109e0560c();
LAB_109df2bd0:
  lVar8 = param_2[4];
  lVar3 = param_2[5];
  FUN_109df2928(param_1,param_2);
  uStack_a0 = 10;
  plVar5 = &lStack_58;
  lStack_58 = lVar8;
  lStack_50 = lVar3;
  func_0x000109d39ec8(&uStack_80,plVar5,&uStack_a0,1);
  FUN_109e060c8();
  FUN_109e05b10();
  puVar1 = (undefined2 *)plVar5[4];
  if ((ulong)(plVar5[3] - (long)puVar1) < 3) {
    FUN_109e0560c();
  }
  else {
    *(undefined1 *)(puVar1 + 1) = 0x20;
    *puVar1 = 0x2d20;
    plVar5[4] = plVar5[4] + 3;
  }
  FUN_109d2f728();
  if ((undefined1 *)plVar5[3] == (undefined1 *)plVar5[4]) {
    FUN_109e0560c();
  }
  else {
    *(undefined1 *)plVar5[4] = 10;
    plVar5[4] = plVar5[4] + 1;
  }
  while (lStack_68 != 0) {
    uStack_41 = 10;
    puVar6 = &uStack_70;
    func_0x000109d39ec8(&uStack_a0,puVar6,&uStack_41,1);
    uStack_80 = CONCAT71(uStack_9f,uStack_a0);
    uStack_78 = uStack_98;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    FUN_109e060c8();
    FUN_109e05b10();
    FUN_109d2f728();
    if ((undefined1 *)puVar6[3] == (undefined1 *)puVar6[4]) {
      FUN_109e0560c();
    }
    else {
      *(undefined1 *)puVar6[4] = 10;
      puVar6[4] = puVar6[4] + 1;
    }
  }
  return;
}



/* Entry: 109df2c08; end: 109df2c73;  */

void FUN_109df2c08(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined **ppuStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  if (param_3 == 0) {
    if ((*(char *)(param_1 + 0x94) != '\x01') ||
       (iVar1 = *(int *)(param_1 + 0x80), *(int *)(param_1 + 0x90) == iVar1)) {
      return;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x80);
  }
  uStack_18 = *(undefined4 *)(param_1 + 0x90);
  uStack_14 = *(undefined1 *)(param_1 + 0x94);
  ppuStack_20 = &PTR_FUN_110b3fc50;
  FUN_109df4bbc(param_1,param_1,iVar1,&ppuStack_20,param_2);
  return;
}



/* Entry: 109df2c74; end: 109df2c93;  */

void FUN_109df2c74(long param_1)

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



/* Entry: 109df2c94; end: 109df2d83;  */

undefined8
FUN_109df2c94(long param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5,long param_6)

{
  undefined1 **ppuVar1;
  long *plVar2;
  int iVar3;
  undefined *apuStack_90 [2];
  undefined1 *puStack_80;
  long lStack_78;
  undefined2 uStack_70;
  undefined1 *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined2 uStack_48;
  
  ppuVar1 = &puStack_68;
  puStack_68 = param_5;
  lStack_60 = param_6;
  FUN_109e03ff4(ppuVar1,0,apuStack_90);
  if (((((ulong)ppuVar1 & 1) == 0) && (lStack_60 == 0)) &&
     (iVar3 = (int)apuStack_90[0], apuStack_90[0] == (undefined *)(long)iVar3)) {
    puStack_68 = (undefined1 *)CONCAT44(puStack_68._4_4_,iVar3);
    *(int *)(param_1 + 0x80) = iVar3;
    *(undefined2 *)(param_1 + 0xc) = param_2;
    plVar2 = *(long **)(param_1 + 0xb8);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&puStack_68);
      return 0;
    }
    func_0x000104c501e4();
    return 2;
  }
  uStack_70 = 0x503;
  apuStack_90[0] = &UNK_10f601ea7;
  puStack_58 = &UNK_10f601f09;
  uStack_48 = 0x302;
  puStack_80 = param_5;
  lStack_78 = param_6;
  puStack_68 = (undefined1 *)apuStack_90;
  func_0x000107c2b034();
  FUN_109df35b4(param_1,&puStack_68,0,0,ppuVar1);
  return 1;
}



/* Entry: 109df2d84; end: 109df2dab;  */

undefined8 FUN_109df2d84(void)

{
  return 2;
}



/* Entry: 109df2dac; end: 109df304b;  */

/* WARNING: Removing unreachable block (ram,0x000109df2fe0) */

void FUN_109df2dac(long param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined ***pppuVar2;
  int iVar3;
  byte bVar4;
  undefined **appuStack_90 [2];
  undefined1 *puStack_80;
  int iStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pppuVar2 = appuStack_90;
  if (param_3 == 0) {
    if (*(char *)(param_1 + 0x94) != '\x01') {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x80);
    if (*(int *)(param_1 + 0x90) == iVar3) {
      return;
    }
    bVar4 = 1;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x80);
    bVar4 = *(byte *)(param_1 + 0x94);
  }
  FUN_109df39f0(param_1,param_1,param_2);
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_109d31714(appuStack_90,&uStack_48);
  FUN_109df9ee0(appuStack_90,(long)iVar3,0,0);
  appuStack_90[0] = &PTR_DAT_110b5c4a0;
  if ((iStack_58 == 1) && (pppuVar2 = (undefined ***)puStack_80, puStack_80 != (undefined1 *)0x0)) {
    __ZdaPv();
    pppuVar2 = (undefined ***)puStack_80;
  }
  FUN_109e060c8();
  if ((ulong)(*(long *)((long)pppuVar2 + 0x18) - (long)*(undefined2 **)((long)pppuVar2 + 0x20)) < 2)
  {
    FUN_109e0560c();
  }
  else {
    **(undefined2 **)((long)pppuVar2 + 0x20) = 0x203d;
    *(long *)((long)pppuVar2 + 0x20) = *(long *)((long)pppuVar2 + 0x20) + 2;
  }
  FUN_109e0560c();
  FUN_109e060c8();
  FUN_109e05b10();
  puVar1 = *(undefined8 **)((long)pppuVar2 + 0x20);
  if ((ulong)(*(long *)((long)pppuVar2 + 0x18) - (long)puVar1) < 0xb) {
    FUN_109e0560c();
  }
  else {
    *(undefined4 *)((long)puVar1 + 7) = 0x203a746c;
    *puVar1 = 0x6c75616665642820;
    *(long *)((long)pppuVar2 + 0x20) = *(long *)((long)pppuVar2 + 0x20) + 0xb;
  }
  if ((bVar4 & 1) == 0) {
    FUN_109e060c8();
    puVar1 = *(undefined8 **)((long)pppuVar2 + 0x20);
    if ((ulong)(*(long *)((long)pppuVar2 + 0x18) - (long)puVar1) < 0xc) {
      FUN_109e0560c();
    }
    else {
      *(undefined4 *)(puVar1 + 1) = 0x2a746c75;
      *puVar1 = 0x61666564206f6e2a;
      *(long *)((long)pppuVar2 + 0x20) = *(long *)((long)pppuVar2 + 0x20) + 0xc;
    }
  }
  else {
    FUN_109e060c8();
    FUN_109df9ee0();
  }
  FUN_109e060c8();
  if ((ulong)(*(long *)((long)pppuVar2 + 0x18) - (long)*(undefined2 **)((long)pppuVar2 + 0x20)) < 2)
  {
    FUN_109e0560c();
  }
  else {
    **(undefined2 **)((long)pppuVar2 + 0x20) = 0xa29;
    *(long *)((long)pppuVar2 + 0x20) = *(long *)((long)pppuVar2 + 0x20) + 2;
  }
  return;
}



/* Entry: 109df304c; end: 109df306b;  */

void FUN_109df304c(long param_1)

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



/* Entry: 109df306c; end: 109df311b;  */

ulong FUN_109df306c(long param_1,undefined2 param_2)

{
  code *pcVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  uVar2 = param_1 + 0xc0;
  FUN_109d81368(uVar2,param_1);
  if ((uVar2 & 1) == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_1 + 0x80,&uStack_48);
    *(undefined2 *)(param_1 + 0xc) = param_2;
    plVar3 = *(long **)(param_1 + 0xe0);
    if (plVar3 == (long *)0x0) {
      func_0x000104c501e4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x109df3100);
      (*pcVar1)();
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,&uStack_48);
  }
  if (lStack_38 < 0) {
    __ZdlPv(uStack_48);
  }
  return uVar2;
}



/* Entry: 109df311c; end: 109df3143;  */

undefined8 FUN_109df311c(void)

{
  return 2;
}



/* Entry: 109df3144; end: 109df31af;  */

long * FUN_109df3144(long *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  plVar2 = param_1;
  if ((param_3 & 1) == 0) {
    plVar2 = param_1 + 0x13;
    FUN_109d30bd4(plVar2,param_1 + 0x10);
    if ((int)plVar2 == 0) {
      return plVar2;
    }
  }
  FUN_109df39f0();
  FUN_109e060c8();
  if ((ulong)(plVar2[3] - plVar2[4]) < 2) {
    FUN_109e0560c();
  }
  else {
    *(undefined2 *)plVar2[4] = 0x203d;
    plVar2[4] = plVar2[4] + 2;
  }
  FUN_109d2f728();
  FUN_109e060c8();
  FUN_109e05b10();
  puVar1 = (undefined8 *)plVar2[4];
  if ((ulong)(plVar2[3] - (long)puVar1) < 0xb) {
    FUN_109e0560c();
  }
  else {
    *(undefined4 *)((long)puVar1 + 7) = 0x203a746c;
    *puVar1 = 0x6c75616665642820;
    plVar2[4] = plVar2[4] + 0xb;
  }
  lVar4 = param_1[0x17];
  FUN_109e060c8();
  if (((char)lVar4 == '\x01') ||
     (puVar1 = (undefined8 *)plVar2[4], (ulong)(plVar2[3] - (long)puVar1) < 0xc)) {
    FUN_109e0560c();
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x2a746c75;
    *puVar1 = 0x61666564206f6e2a;
    plVar2[4] = plVar2[4] + 0xc;
  }
  FUN_109e060c8();
  if (1 < (ulong)(plVar2[3] - plVar2[4])) {
    *(undefined2 *)plVar2[4] = 0xa29;
    plVar2[4] = plVar2[4] + 2;
    return plVar2;
  }
  puVar3 = &UNK_10f601f86;
  uVar6 = 2;
  lVar4 = plVar2[4];
  uVar7 = plVar2[3] - lVar4;
  if ((ulong)(plVar2[3] - lVar4) < 2) {
    do {
      while (plVar2[2] != 0) {
        if (lVar4 == plVar2[2]) {
          if (plVar2[6] != 0) {
            FUN_109e057dc();
          }
          uVar5 = 0;
          if (uVar7 != 0) {
            uVar5 = uVar6 / uVar7;
          }
          uVar7 = uVar5 * uVar7;
          uVar6 = uVar6 - uVar7;
          (**(code **)(*plVar2 + 0x48))(plVar2,puVar3,uVar7);
          lVar4 = plVar2[4];
          uVar5 = plVar2[3] - lVar4;
          if (uVar6 <= uVar5) {
            puVar3 = puVar3 + uVar7;
            goto LAB_109e05640;
          }
        }
        else {
          FUN_109e05740(plVar2,puVar3,uVar7);
          FUN_109e05520(plVar2);
          uVar6 = uVar6 - uVar7;
          lVar4 = plVar2[4];
          uVar5 = plVar2[3] - lVar4;
        }
        puVar3 = puVar3 + uVar7;
        uVar7 = uVar5;
        if (uVar6 <= uVar5) goto LAB_109e05640;
      }
      if ((int)plVar2[7] == 0) {
        if (plVar2[6] != 0) {
          FUN_109e057dc();
        }
        (**(code **)(*plVar2 + 0x48))(plVar2,puVar3,uVar6);
        return plVar2;
      }
      FUN_109e0538c(plVar2);
      lVar4 = plVar2[4];
      uVar7 = plVar2[3] - lVar4;
    } while (uVar7 < uVar6);
  }
LAB_109e05640:
  FUN_109e05740(plVar2,puVar3,uVar6);
  return plVar2;
}



/* Entry: 109df31b0; end: 109df3237;  */

void FUN_109df31b0(long param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if (*(char *)(param_1 + 0xb8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350
    )(param_1 + 0x80,param_1 + 0xa0);
    return;
  }
  uStack_38 = 0;
  uStack_30 = 0;
  lStack_28 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x80,&uStack_38);
  if (lStack_28 < 0) {
    __ZdlPv(uStack_38);
  }
  return;
}



/* Entry: 109df3238; end: 109df32ab;  */

ulong FUN_109df3238(ulong param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4,
                   int *param_5,long param_6)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined *apuStack_b0 [2];
  int *piStack_a0;
  long lStack_98;
  undefined2 uStack_90;
  undefined1 *apuStack_88 [2];
  undefined *puStack_78;
  undefined2 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 uStack_31;
  
  uStack_31 = 0;
  puVar4 = &uStack_31;
  uVar1 = param_1;
  uVar3 = param_1;
  FUN_109df32ac(param_1,param_1);
  if ((uVar1 & 1) != 0) {
    return uVar1;
  }
  *(undefined1 *)(param_1 + 0x80) = uStack_31;
  *(undefined2 *)(param_1 + 0xc) = param_2;
  plVar2 = *(long **)(param_1 + 0xb8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&uStack_31);
    return uVar1;
  }
  func_0x000104c501e4();
  apuStack_88[0] = (undefined1 *)apuStack_b0;
  pcStack_48 = FUN_109df32ac;
  if (param_6 < 4) {
    if (param_6 == 0) {
LAB_109df3334:
      *puVar4 = 1;
      return 0;
    }
    if (param_6 == 1) {
      if ((char)*param_5 == '0') goto LAB_109df33f8;
      if ((char)*param_5 == '1') goto LAB_109df3334;
    }
  }
  else if (param_6 == 5) {
    if (((*param_5 == 0x736c6166 && (char)param_5[1] == 'e') ||
        (*param_5 == 0x534c4146 && (char)param_5[1] == 'E')) ||
       (*param_5 == 0x736c6146 && (char)param_5[1] == 'e')) {
LAB_109df33f8:
      *puVar4 = 0;
      return 0;
    }
  }
  else if ((param_6 == 4) &&
          (((*param_5 == 0x65757274 || (*param_5 == 0x45555254)) || (*param_5 == 0x65757254))))
  goto LAB_109df3334;
  uStack_90 = 0x503;
  apuStack_b0[0] = &UNK_10f601ea7;
  puStack_78 = &UNK_10f601ed5;
  uStack_68 = 0x302;
  piStack_a0 = param_5;
  lStack_98 = param_6;
  uStack_60 = param_1;
  uStack_58 = uVar1;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x000107c2b034();
  FUN_109df35b4(uVar3,apuStack_88,0,0,plVar2);
  return 1;
}



/* Entry: 109df32ac; end: 109df340f;  */

undefined8
FUN_109df32ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int *param_5,long param_6,undefined1 *param_7)

{
  undefined *apuStack_70 [2];
  int *piStack_60;
  long lStack_58;
  undefined2 uStack_50;
  undefined1 *apuStack_48 [2];
  undefined *puStack_38;
  undefined2 uStack_28;
  
  apuStack_48[0] = (undefined1 *)apuStack_70;
  if (param_6 < 4) {
    if (param_6 == 0) {
LAB_109df3334:
      *param_7 = 1;
      return 0;
    }
    if (param_6 == 1) {
      if ((char)*param_5 == '0') goto LAB_109df33f8;
      if ((char)*param_5 == '1') goto LAB_109df3334;
    }
  }
  else if (param_6 == 5) {
    if (((*param_5 == 0x736c6166 && (char)param_5[1] == 'e') ||
        (*param_5 == 0x534c4146 && (char)param_5[1] == 'E')) ||
       (*param_5 == 0x736c6146 && (char)param_5[1] == 'e')) {
LAB_109df33f8:
      *param_7 = 0;
      return 0;
    }
  }
  else if ((param_6 == 4) &&
          (((*param_5 == 0x65757274 || (*param_5 == 0x45555254)) || (*param_5 == 0x65757254))))
  goto LAB_109df3334;
  uStack_50 = 0x503;
  apuStack_70[0] = &UNK_10f601ea7;
  puStack_38 = &UNK_10f601ed5;
  uStack_28 = 0x302;
  piStack_60 = param_5;
  lStack_58 = param_6;
  func_0x000107c2b034();
  FUN_109df35b4(param_2,apuStack_48,0,0,param_1);
  return 1;
}



/* Entry: 109df3410; end: 109df3437;  */

undefined8 FUN_109df3410(void)

{
  return 1;
}



/* Entry: 109df3438; end: 109df349f;  */

void FUN_109df3438(long param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  undefined **ppuStack_20;
  undefined2 uStack_18;
  
  if (param_3 == 0) {
    if ((*(char *)(param_1 + 0x91) != '\x01') ||
       (bVar1 = *(byte *)(param_1 + 0x80), *(byte *)(param_1 + 0x90) == bVar1)) {
      return;
    }
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x80);
  }
  uStack_18 = *(undefined2 *)(param_1 + 0x90);
  ppuStack_20 = &PTR_FUN_110b3fac8;
  FUN_109df46e4(param_1,param_1,bVar1 & 1,&ppuStack_20,param_2);
  return;
}



/* Entry: 109df34a0; end: 109df34ef;  */

void FUN_109df34a0(long param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0x91) == '\x01') {
    uVar1 = *(undefined1 *)(param_1 + 0x90);
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x80) = uVar1;
  return;
}



/* Entry: 109df34f0; end: 109df3597;  */

void FUN_109df34f0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar5 = param_1;
  func_0x000107c2afe0();
  if ((param_2 != lVar5) &&
     (lVar7 = **(long **)(param_1 + 0x40), func_0x000107c2afe0(), lVar7 == lVar5)) {
    **(long **)(param_1 + 0x40) = param_2;
    return;
  }
  plVar6 = (long *)(param_1 + 0x40);
  plVar3 = (long *)*plVar6;
  uVar1 = *(uint *)(param_1 + 0x48);
  plVar4 = plVar3;
  if (uVar1 == 0) {
LAB_109df355c:
    if (plVar4 != plVar3 + uVar1) {
      return;
    }
  }
  else {
    lVar5 = (ulong)uVar1 << 3;
    do {
      if (*plVar4 == param_2) goto LAB_109df355c;
      plVar4 = plVar4 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  uVar2 = (ulong)*(uint *)(param_1 + 0x48);
  if (*(uint *)(param_1 + 0x4c) <= *(uint *)(param_1 + 0x48)) {
    func_0x00010004e450(plVar6,param_1 + 0x50,uVar2 + 1,8);
    uVar2 = (ulong)*(uint *)(param_1 + 0x48);
  }
  *(long *)(*plVar6 + uVar2 * 8) = param_2;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  return;
}



/* Entry: 109df3598; end: 109df35b3;  */

long * FUN_109df3598(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2[1];
  plVar1 = (long *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar4 = (ulong)*(byte *)((long)param_2 + 0x17);
    plVar1 = param_2;
  }
  lVar2 = param_1[4];
  uVar5 = param_1[3] - lVar2;
  if ((ulong)(param_1[3] - lVar2) < uVar4) {
    do {
      while (param_1[2] == 0) {
        if ((int)param_1[7] == 0) {
          if (param_1[6] != 0) {
            FUN_109e057dc();
          }
          (**(code **)(*param_1 + 0x48))(param_1,plVar1,uVar4);
          return param_1;
        }
        FUN_109e0538c(param_1);
        lVar2 = param_1[4];
        uVar5 = param_1[3] - lVar2;
        if (uVar4 <= uVar5) goto LAB_109e05640;
      }
      if (lVar2 == param_1[2]) {
        if (param_1[6] != 0) {
          FUN_109e057dc();
        }
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = uVar4 / uVar5;
        }
        uVar5 = uVar3 * uVar5;
        uVar4 = uVar4 - uVar5;
        (**(code **)(*param_1 + 0x48))(param_1,plVar1,uVar5);
        lVar2 = param_1[4];
        uVar3 = param_1[3] - lVar2;
        if (uVar4 <= uVar3) {
          plVar1 = (long *)((long)plVar1 + uVar5);
          break;
        }
      }
      else {
        FUN_109e05740(param_1,plVar1,uVar5);
        FUN_109e05520(param_1);
        uVar4 = uVar4 - uVar5;
        lVar2 = param_1[4];
        uVar3 = param_1[3] - lVar2;
      }
      plVar1 = (long *)((long)plVar1 + uVar5);
      uVar5 = uVar3;
    } while (uVar3 < uVar4);
  }
LAB_109e05640:
  FUN_109e05740(param_1,plVar1,uVar4);
  return param_1;
}



/* Entry: 109df35b4; end: 109df3753;  */

undefined8 FUN_109df35b4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if (param_3 == 0) {
    param_3 = *(long *)(param_1 + 0x10);
    param_4 = *(long *)(param_1 + 0x18);
  }
  if (param_4 == 0) {
    FUN_109d2f728(param_5,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  }
  else {
    if (puRam0000000113834348 == (undefined8 *)0x0) {
      func_0x000107c2b010(0x113834348,&UNK_100046388,FUN_109df5b74);
    }
    uVar1 = puRam0000000113834348[1];
    puVar2 = (undefined8 *)*puRam0000000113834348;
    if (-1 < (char)*(byte *)((long)puRam0000000113834348 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)puRam0000000113834348 + 0x17);
      puVar2 = puRam0000000113834348;
    }
    FUN_109e0560c(param_5,puVar2,uVar1);
    puVar2 = *(undefined8 **)(param_5 + 0x20);
    if ((ulong)(*(long *)(param_5 + 0x18) - (long)puVar2) < 10) {
      FUN_109e0560c(param_5,&UNK_10f601ea9,10);
    }
    else {
      *(undefined2 *)(puVar2 + 1) = 0x2065;
      *puVar2 = 0x687420726f66203a;
      *(long *)(param_5 + 0x20) = *(long *)(param_5 + 0x20) + 10;
    }
    uStack_38 = 0;
    lStack_48 = param_3;
    lStack_40 = param_4;
    FUN_109df3754(param_5,&lStack_48);
  }
  puVar2 = *(undefined8 **)(param_5 + 0x20);
  if ((ulong)(*(long *)(param_5 + 0x18) - (long)puVar2) < 9) {
    FUN_109e0560c(param_5,&UNK_10f601eb4,9);
  }
  else {
    *(undefined1 *)(puVar2 + 1) = 0x20;
    *puVar2 = 0x3a6e6f6974706f20;
    *(long *)(param_5 + 0x20) = *(long *)(param_5 + 0x20) + 9;
  }
  FUN_109e046a0(param_2,param_5);
  if (*(undefined1 **)(param_5 + 0x18) == *(undefined1 **)(param_5 + 0x20)) {
    FUN_109e0560c(param_5,&UNK_10f601ebe,1);
  }
  else {
    **(undefined1 **)(param_5 + 0x20) = 10;
    *(long *)(param_5 + 0x20) = *(long *)(param_5 + 0x20) + 1;
  }
  return 1;
}



/* Entry: 109df3754; end: 109df3867;  */

undefined8 * FUN_109df3754(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong in_x6;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_2[1];
  lVar3 = param_2[2];
  uStack_58 = 8;
  uStack_60 = 0;
  puStack_68 = &uStack_50;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    func_0x000109d3acdc(&puStack_68,0x20);
  }
  puVar1 = &UNK_10f602086;
  if (uVar2 < 2) {
    puVar1 = &UNK_10f602089;
  }
  lVar3 = 1;
  if (1 < uVar2) {
    lVar3 = 2;
  }
  FUN_109d3a7bc(&puStack_68,puVar1,puVar1 + lVar3);
  FUN_109e0560c(param_1,puStack_68,uStack_60);
  FUN_109d2f728(param_1,*param_2,param_2[1]);
  puVar4 = puStack_68;
  if (puStack_68 != &uStack_50) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if (puStack_68 != &uStack_50) {
      _free();
    }
    __Unwind_Resume();
    if ((in_x6 & 1) == 0) {
      *(short *)(puVar4 + 1) = *(short *)(puVar4 + 1) + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x000109df3880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)();
    return puVar4;
  }
  return param_1;
}



/* Entry: 109df3868; end: 109df3883;  */

void FUN_109df3868(undefined8 *param_1)

{
  ulong in_x6;
  
  if ((in_x6 & 1) == 0) {
    *(short *)(param_1 + 1) = *(short *)(param_1 + 1) + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000109df3880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}



/* Entry: 109df3884; end: 109df39ef;  */

void FUN_109df3884(undefined8 param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_41;
  
  uStack_a0 = 10;
  puVar2 = &uStack_58;
  uStack_58 = param_1;
  uStack_50 = param_2;
  func_0x000109d39ec8(&uStack_80,puVar2,&uStack_a0,1);
  FUN_109e060c8();
  FUN_109e05b10();
  puVar1 = (undefined2 *)puVar2[4];
  if ((ulong)(puVar2[3] - (long)puVar1) < 3) {
    FUN_109e0560c();
  }
  else {
    *(undefined1 *)(puVar1 + 1) = 0x20;
    *puVar1 = 0x2d20;
    puVar2[4] = puVar2[4] + 3;
  }
  FUN_109d2f728();
  if ((undefined1 *)puVar2[3] == (undefined1 *)puVar2[4]) {
    FUN_109e0560c();
  }
  else {
    *(undefined1 *)puVar2[4] = 10;
    puVar2[4] = puVar2[4] + 1;
  }
  while (lStack_68 != 0) {
    uStack_41 = 10;
    puVar2 = &uStack_70;
    func_0x000109d39ec8(&uStack_a0,puVar2,&uStack_41,1);
    uStack_80 = CONCAT71(uStack_9f,uStack_a0);
    uStack_78 = uStack_98;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    FUN_109e060c8();
    FUN_109e05b10();
    FUN_109d2f728();
    if ((undefined1 *)puVar2[3] == (undefined1 *)puVar2[4]) {
      FUN_109e0560c();
    }
    else {
      *(undefined1 *)puVar2[4] = 10;
      puVar2[4] = puVar2[4] + 1;
    }
  }
  return;
}



/* Entry: 109df39f0; end: 109df3ba3;  */

void FUN_109df39f0(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_109e060c8();
  uStack_38 = *(undefined8 *)(param_2 + 0x18);
  uStack_40 = *(undefined8 *)(param_2 + 0x10);
  FUN_109df3754(param_1,&uStack_40);
  FUN_109e060c8();
  uVar1 = param_3 - *(int *)(param_2 + 0x18);
  if (uVar1 < 0x50) {
    FUN_109e0560c(param_1,&UNK_10e05bb24,uVar1);
  }
  else {
    do {
      uVar2 = uVar1;
      if (0x4e < uVar1) {
        uVar2 = 0x4f;
      }
      FUN_109e0560c(param_1,&UNK_10e05bb24,uVar2);
      uVar1 = uVar1 - uVar2;
    } while (uVar1 != 0);
  }
  return;
}



/* Entry: 109df3ba4; end: 109df3c67;  */

uint FUN_109df3ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5,long param_6,undefined8 *param_7)

{
  uint uVar1;
  undefined1 **ppuVar2;
  undefined *apuStack_90 [2];
  undefined1 *puStack_80;
  long lStack_78;
  undefined2 uStack_70;
  undefined1 *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined2 uStack_48;
  
  ppuVar2 = &puStack_68;
  puStack_68 = param_5;
  lStack_60 = param_6;
  FUN_109e03e50(ppuVar2,0,apuStack_90);
  uVar1 = (uint)ppuVar2;
  if (lStack_60 != 0) {
    uVar1 = 1;
  }
  if ((uVar1 & 1) == 0) {
    *param_7 = apuStack_90[0];
  }
  else {
    uStack_70 = 0x503;
    apuStack_90[0] = &UNK_10f601ea7;
    puStack_58 = &UNK_10f601f52;
    uStack_48 = 0x302;
    puStack_80 = param_5;
    lStack_78 = param_6;
    puStack_68 = (undefined1 *)apuStack_90;
    func_0x000107c2b034();
    FUN_109df35b4(param_2,&puStack_68,0,0,ppuVar2);
  }
  return uVar1;
}



/* Entry: 109df3c68; end: 109df3daf;  */

long * FUN_109df3c68(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar7;
  char **ppcVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined2 uStack_90;
  char *pcStack_88;
  char *pcStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  char acStack_68 [8];
  undefined2 uStack_60;
  long lStack_48;
  char **ppcVar6;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_90 = 0x105;
  uVar14 = 0;
  puStack_70 = (undefined *)0x20;
  uStack_78 = 0;
  puStack_b0 = param_2;
  uStack_a8 = param_3;
  pcStack_80 = acStack_68;
  func_0x000109e046d8(&puStack_b0,&pcStack_80);
  ppcVar8 = &pcStack_88;
  _strtod();
  cVar2 = *pcStack_88;
  if (cVar2 == '\0') {
    *param_4 = uVar14;
  }
  pcVar11 = pcStack_80;
  if (pcStack_80 != acStack_68) {
    _free();
  }
  if (cVar2 != '\0') {
    uStack_90 = 0x503;
    puStack_b0 = &UNK_10f601ea7;
    puStack_70 = &UNK_10f60208f;
    uStack_60 = 0x302;
    puStack_a0 = param_2;
    uStack_98 = param_3;
    pcStack_80 = (char *)&puStack_b0;
    func_0x000107c2b034();
    ppcVar8 = &pcStack_80;
    FUN_109df35b4(param_1,ppcVar8,0,0,pcVar11);
  }
  plVar5 = (long *)(ulong)(cVar2 != '\0');
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar5;
  }
  ___stack_chk_fail();
  if (pcStack_80 != acStack_68) {
    _free();
  }
  __Unwind_Resume();
  pcVar11 = ppcVar8[3];
  if (pcVar11 == (char *)0x0) {
    plVar7 = plVar5;
    (**(code **)(*plVar5 + 0x10))();
    if ((uint)plVar7 == 0) {
      plVar12 = (long *)0x0;
    }
    else {
      uVar13 = 0;
      plVar12 = (long *)0x0;
      do {
        uVar10 = uVar13;
        (**(code **)(*plVar5 + 0x18))(plVar5);
        if (plVar12 <= (long *)(uVar10 + 8)) {
          plVar12 = (long *)(uVar10 + 8);
        }
        uVar4 = (int)uVar13 + 1;
        uVar13 = (ulong)uVar4;
      } while ((uint)plVar7 != uVar4);
    }
  }
  else {
    plVar12 = (long *)0xf;
    if (pcVar11 != (char *)0x1) {
      plVar12 = (long *)(pcVar11 + 0xf);
    }
    plVar7 = plVar5;
    (**(code **)(*plVar5 + 0x10))();
    if ((uint)plVar7 != 0) {
      uVar13 = 0;
      do {
        uVar10 = uVar13;
        (**(code **)(*plVar5 + 0x18))(plVar5);
        uVar9 = uVar13;
        (**(code **)(*plVar5 + 0x20))(plVar5);
        uVar3 = *(ushort *)((long)ppcVar8 + 10) >> 3;
        uVar4 = uVar3 & 3;
        if ((uVar3 & 3) == 0) {
          ppcVar6 = ppcVar8;
          (**(code **)(*ppcVar8 + 8))();
          uVar4 = (uint)ppcVar6;
        }
        if ((uVar4 != 1 || uVar10 != 0) || uVar9 != 0) {
          plVar1 = (long *)0xf;
          if (uVar10 != 0) {
            plVar1 = (long *)(uVar10 + 8);
          }
          if (plVar12 <= plVar1) {
            plVar12 = plVar1;
          }
        }
        uVar4 = (int)uVar13 + 1;
        uVar13 = (ulong)uVar4;
      } while ((uint)plVar7 != uVar4);
    }
  }
  return plVar12;
}



/* Entry: 109df3db0; end: 109df3ef7;  */

ulong FUN_109df3db0(long *param_1,long *param_2)

{
  ushort uVar1;
  uint uVar2;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar3;
  
  lVar7 = param_2[3];
  if (lVar7 == 0) {
    plVar4 = param_1;
    (**(code **)(*param_1 + 0x10))();
    if ((uint)plVar4 == 0) {
      uVar8 = 0;
    }
    else {
      uVar9 = 0;
      uVar8 = 0;
      do {
        uVar6 = uVar9;
        (**(code **)(*param_1 + 0x18))(param_1);
        if (uVar8 <= uVar6 + 8) {
          uVar8 = uVar6 + 8;
        }
        uVar2 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar2;
      } while ((uint)plVar4 != uVar2);
    }
  }
  else {
    uVar8 = 0xf;
    if (lVar7 != 1) {
      uVar8 = lVar7 + 0xf;
    }
    plVar4 = param_1;
    (**(code **)(*param_1 + 0x10))();
    if ((uint)plVar4 != 0) {
      uVar9 = 0;
      do {
        uVar6 = uVar9;
        (**(code **)(*param_1 + 0x18))(param_1);
        uVar5 = uVar9;
        (**(code **)(*param_1 + 0x20))(param_1);
        uVar1 = *(ushort *)((long)param_2 + 10) >> 3;
        uVar2 = uVar1 & 3;
        if ((uVar1 & 3) == 0) {
          plVar3 = param_2;
          (**(code **)(*param_2 + 8))();
          uVar2 = (uint)plVar3;
        }
        if ((uVar2 != 1 || uVar6 != 0) || uVar5 != 0) {
          uVar5 = 0xf;
          if (uVar6 != 0) {
            uVar5 = uVar6 + 8;
          }
          if (uVar8 <= uVar5) {
            uVar8 = uVar5;
          }
        }
        uVar2 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar2;
      } while ((uint)plVar4 != uVar2);
    }
  }
  return uVar8;
}



/* Entry: 109df3ef8; end: 109df443f;  */

void FUN_109df3ef8(long *param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  ushort uVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long **pplVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  long lStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long *plStack_a0;
  ulong uStack_98;
  long *plStack_90;
  long lStack_88;
  long *plStack_78;
  ulong uStack_70;
  undefined1 uStack_61;
  
  if (param_2[3] == 0) {
    if (param_2[5] != 0) {
      plVar7 = param_1;
      FUN_109e060c8();
      if ((ulong)(plVar7[3] - plVar7[4]) < 2) {
        FUN_109e0560c();
      }
      else {
        *(undefined2 *)plVar7[4] = 0x2020;
        plVar7[4] = plVar7[4] + 2;
      }
      FUN_109d2f728();
      puVar4 = (undefined1 *)plVar7[4];
      if (puVar4 < (undefined1 *)plVar7[3]) {
        plVar7[4] = (long)(puVar4 + 1);
        *puVar4 = 10;
      }
      else {
        FUN_109e05570();
      }
    }
    plVar7 = param_1;
    (**(code **)(*param_1 + 0x10))();
    if ((uint)plVar7 != 0) {
      uVar13 = 0;
      do {
        plVar9 = param_1;
        uVar11 = uVar13;
        (**(code **)(*param_1 + 0x18))();
        plVar8 = plVar9;
        FUN_109e060c8();
        if ((ulong)(plVar8[3] - plVar8[4]) < 4) {
          FUN_109e0560c();
        }
        else {
          *(undefined4 *)plVar8[4] = 0x20202020;
          plVar8[4] = plVar8[4] + 4;
        }
        plStack_90 = (long *)0x2;
        plStack_a0 = plVar9;
        uStack_98 = uVar11;
        FUN_109df3754();
        (**(code **)(*param_1 + 0x20))(param_1,uVar13);
        FUN_109df3884();
        uVar6 = (int)uVar13 + 1;
        uVar13 = (ulong)uVar6;
      } while ((uint)plVar7 != uVar6);
    }
  }
  else {
    uVar5 = *(ushort *)((long)param_2 + 10) >> 3;
    plVar7 = (long *)(ulong)(uVar5 & 3);
    if ((uVar5 & 3) == 0) {
      plVar7 = param_2;
      (**(code **)(*param_2 + 8))();
    }
    if ((int)plVar7 == 1) {
      plVar7 = param_1;
      (**(code **)(*param_1 + 0x10))();
      uVar6 = (uint)plVar7;
      if (uVar6 != 0) {
        uVar13 = 0;
        do {
          plVar7 = param_1;
          uVar11 = uVar13;
          (**(code **)(*param_1 + 0x18))();
          if (uVar11 == 0) {
            FUN_109e060c8();
            uStack_98 = param_2[3];
            plStack_a0 = (long *)param_2[2];
            plStack_90 = (long *)0x2;
            FUN_109df3754();
            plVar7 = (long *)param_2[4];
            lVar2 = 7;
            if (param_2[3] != 1) {
              lVar2 = param_2[3] + 7;
            }
            FUN_109df3884(plVar7,param_2[5],param_3,lVar2);
            break;
          }
          uVar1 = (int)uVar13 + 1;
          uVar13 = (ulong)uVar1;
        } while (uVar6 != uVar1);
      }
    }
    FUN_109e060c8();
    uStack_98 = param_2[3];
    plStack_a0 = (long *)param_2[2];
    plStack_90 = (long *)0x2;
    FUN_109df3754();
    if ((ulong)(plVar7[3] - plVar7[4]) < 8) {
      FUN_109e0560c();
    }
    else {
      *(undefined8 *)plVar7[4] = 0x3e65756c61763c3d;
      plVar7[4] = plVar7[4] + 8;
    }
    lVar2 = 0xf;
    if (param_2[3] != 1) {
      lVar2 = param_2[3] + 0xf;
    }
    FUN_109df3884(param_2[4],param_2[5],param_3,lVar2);
    plVar7 = param_1;
    (**(code **)(*param_1 + 0x10))();
    if ((uint)plVar7 != 0) {
      uVar13 = 0;
      do {
        uVar11 = uVar13;
        (**(code **)(*param_1 + 0x18))(param_1);
        plVar8 = param_1;
        uVar12 = uVar13;
        (**(code **)(*param_1 + 0x20))();
        uVar5 = *(ushort *)((long)param_2 + 10) >> 3;
        plVar9 = (long *)(ulong)(uVar5 & 3);
        if ((uVar5 & 3) == 0) {
          plVar9 = param_2;
          (**(code **)(*param_2 + 8))();
        }
        if (((int)plVar9 != 1 || uVar11 != 0) || uVar12 != 0) {
          FUN_109e060c8();
          puVar3 = (undefined4 *)plVar9[4];
          if ((ulong)(plVar9[3] - (long)puVar3) < 5) {
            FUN_109e0560c();
          }
          else {
            *(undefined1 *)(puVar3 + 1) = 0x3d;
            *puVar3 = 0x20202020;
            plVar9[4] = plVar9[4] + 5;
          }
          FUN_109d2f728();
          if (uVar11 == 0) {
            FUN_109e060c8();
            puVar3 = (undefined4 *)plVar9[4];
            if ((ulong)(plVar9[3] - (long)puVar3) < 7) {
              FUN_109e0560c();
            }
            else {
              *(undefined4 *)((long)puVar3 + 3) = 0x3e797470;
              *puVar3 = 0x706d653c;
              plVar9[4] = plVar9[4] + 7;
            }
          }
          if (uVar12 == 0) {
            FUN_109e060c8();
            puVar4 = (undefined1 *)plVar9[4];
            if (puVar4 < (undefined1 *)plVar9[3]) {
              plVar9[4] = (long)(puVar4 + 1);
              *puVar4 = 10;
            }
            else {
              FUN_109e05570();
            }
          }
          else {
            uStack_c0 = 10;
            pplVar10 = &plStack_78;
            plStack_78 = plVar8;
            uStack_70 = uVar12;
            func_0x000109d39ec8(&plStack_a0,pplVar10,&uStack_c0,1);
            FUN_109e060c8();
            FUN_109e05b10();
            plVar9 = pplVar10[4];
            if ((ulong)((long)pplVar10[3] - (long)plVar9) < 3) {
              FUN_109e0560c();
              plVar9 = pplVar10[4];
            }
            else {
              *(undefined1 *)((long)plVar9 + 2) = 0x20;
              *(undefined2 *)plVar9 = 0x2d20;
              plVar9 = (long *)((long)pplVar10[4] + 3);
              pplVar10[4] = plVar9;
            }
            if ((ulong)((long)pplVar10[3] - (long)plVar9) < 2) {
              FUN_109e0560c();
            }
            else {
              *(undefined2 *)plVar9 = 0x2020;
              pplVar10[4] = (long *)((long)pplVar10[4] + 2);
            }
            while( true ) {
              FUN_109d2f728();
              if (pplVar10[3] == pplVar10[4]) {
                FUN_109e0560c();
              }
              else {
                *(undefined1 *)pplVar10[4] = 10;
                pplVar10[4] = (long *)((long)pplVar10[4] + 1);
              }
              if (lStack_88 == 0) break;
              uStack_61 = 10;
              pplVar10 = &plStack_90;
              func_0x000109d39ec8(&uStack_c0,pplVar10,&uStack_61,1);
              plStack_a0 = (long *)CONCAT71(uStack_bf,uStack_c0);
              uStack_98 = lStack_b8;
              lStack_88 = lStack_a8;
              plStack_90 = plStack_b0;
              FUN_109e060c8();
              FUN_109e05b10();
            }
          }
        }
        uVar6 = (int)uVar13 + 1;
        uVar13 = (ulong)uVar6;
      } while (uVar6 != (uint)plVar7);
    }
  }
  return;
}



/* Entry: 109df4440; end: 109df46e3;  */

long * FUN_109df4440(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  plVar4 = param_1;
  FUN_109e060c8();
  if ((ulong)(plVar4[3] - plVar4[4]) < 2) {
    FUN_109e0560c();
  }
  else {
    *(undefined2 *)plVar4[4] = 0x2020;
    plVar4[4] = plVar4[4] + 2;
  }
  FUN_109df3754();
  FUN_109e060c8();
  FUN_109e05b10();
  plVar4 = param_1;
  (**(code **)(*param_1 + 0x10))();
  uVar3 = (uint)plVar4;
  if (uVar3 == 0) {
    puVar6 = &UNK_10f601f89;
    uVar7 = 0x19;
  }
  else {
    uVar8 = 0;
    puVar6 = &UNK_10f601f89;
    uVar7 = 0x19;
    do {
      plVar5 = param_1;
      (**(code **)(*param_1 + 0x30))(param_1,uVar8);
      plVar4 = param_3;
      (**(code **)*param_3)(param_3,plVar5);
      if (((ulong)plVar4 & 1) == 0) {
        FUN_109e060c8();
        if ((ulong)(plVar4[3] - plVar4[4]) < 2) {
          FUN_109e0560c(plVar4,&UNK_10f601f77,2);
        }
        else {
          *(undefined2 *)plVar4[4] = 0x203d;
          plVar4[4] = plVar4[4] + 2;
        }
        plVar5 = param_1;
        (**(code **)(*param_1 + 0x18))(param_1,uVar8);
        FUN_109d2f728(plVar4,plVar5,uVar8);
        plVar4 = param_1;
        (**(code **)(*param_1 + 0x18))();
        FUN_109e060c8();
        FUN_109e05b10();
        puVar2 = (undefined8 *)plVar4[4];
        if ((ulong)(plVar4[3] - (long)puVar2) < 0xb) {
          FUN_109e0560c();
        }
        else {
          *(undefined4 *)((long)puVar2 + 7) = 0x203a746c;
          *puVar2 = 0x6c75616665642820;
          plVar4[4] = plVar4[4] + 0xb;
        }
        uVar8 = 0;
        puVar6 = &UNK_10f601f86;
        uVar7 = 2;
        goto LAB_109df4640;
      }
      uVar1 = (int)uVar8 + 1;
      uVar8 = (ulong)uVar1;
    } while (uVar3 != uVar1);
  }
  goto LAB_109df46bc;
  while (uVar1 = (int)uVar8 + 1, uVar8 = (ulong)uVar1, uVar3 != uVar1) {
LAB_109df4640:
    plVar5 = param_1;
    (**(code **)(*param_1 + 0x30))(param_1,uVar8);
    plVar4 = param_4;
    (**(code **)*param_4)(param_4,plVar5);
    if (((ulong)plVar4 & 1) == 0) {
      FUN_109e060c8();
      (**(code **)(*param_1 + 0x18))(param_1,uVar8);
      FUN_109d2f728(plVar4,param_1,uVar8);
      puVar6 = &UNK_10f601f86;
      uVar7 = 2;
      break;
    }
  }
LAB_109df46bc:
  FUN_109e060c8();
  if ((ulong)(plVar4[3] - plVar4[4]) < uVar7) {
    FUN_109e0560c(plVar4,puVar6,uVar7);
  }
  else if (uVar7 != 0) {
    _memcpy(plVar4[4],puVar6,uVar7);
    plVar4[4] = plVar4[4] + uVar7;
  }
  return plVar4;
}



/* Entry: 109df46e4; end: 109df494f;  */

/* WARNING: Removing unreachable block (ram,0x000109df48e8) */

void FUN_109df46e4(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined ***pppuVar2;
  undefined **appuStack_80 [2];
  undefined1 *puStack_70;
  int iStack_48;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  pppuVar2 = appuStack_80;
  FUN_109df39f0(param_1,param_2,param_5);
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_109d31714(appuStack_80,&uStack_38);
  FUN_109df9ee0(appuStack_80,param_3,0,0);
  appuStack_80[0] = &PTR_DAT_110b5c4a0;
  if ((iStack_48 == 1) && (pppuVar2 = (undefined ***)puStack_70, puStack_70 != (undefined1 *)0x0)) {
    __ZdaPv();
    pppuVar2 = (undefined ***)puStack_70;
  }
  FUN_109e060c8();
  if ((ulong)(*(long *)((long)pppuVar2 + 0x18) - (long)*(undefined2 **)((long)pppuVar2 + 0x20)) < 2)
  {
    FUN_109e0560c();
  }
  else {
    **(undefined2 **)((long)pppuVar2 + 0x20) = 0x203d;
    *(long *)((long)pppuVar2 + 0x20) = *(long *)((long)pppuVar2 + 0x20) + 2;
  }
  FUN_109e0560c();
  FUN_109e060c8();
  FUN_109e05b10();
  puVar1 = *(undefined8 **)((long)pppuVar2 + 0x20);
  if ((ulong)(*(long *)((long)pppuVar2 + 0x18) - (long)puVar1) < 0xb) {
    FUN_109e0560c();
  }
  else {
    *(undefined4 *)((long)puVar1 + 7) = 0x203a746c;
    *puVar1 = 0x6c75616665642820;
    *(long *)((long)pppuVar2 + 0x20) = *(long *)((long)pppuVar2 + 0x20) + 0xb;
  }
  if (*(char *)(param_4 + 9) == '\x01') {
    FUN_109e060c8();
    FUN_109df9ee0();
  }
  else {
    FUN_109e060c8();
    puVar1 = *(undefined8 **)((long)pppuVar2 + 0x20);
    if ((ulong)(*(long *)((long)pppuVar2 + 0x18) - (long)puVar1) < 0xc) {
      FUN_109e0560c();
    }
    else {
      *(undefined4 *)(puVar1 + 1) = 0x2a746c75;
      *puVar1 = 0x61666564206f6e2a;
      *(long *)((long)pppuVar2 + 0x20) = *(long *)((long)pppuVar2 + 0x20) + 0xc;
    }
  }
  FUN_109e060c8();
  if ((ulong)(*(long *)((long)pppuVar2 + 0x18) - (long)*(undefined2 **)((long)pppuVar2 + 0x20)) < 2)
  {
    FUN_109e0560c();
  }
  else {
    **(undefined2 **)((long)pppuVar2 + 0x20) = 0xa29;
    *(long *)((long)pppuVar2 + 0x20) = *(long *)((long)pppuVar2 + 0x20) + 2;
  }
  return;
}



/* Entry: 109df4950; end: 109df4bbb;  */

/* WARNING: Removing unreachable block (ram,0x000109df4b54) */

void FUN_109df4950(undefined8 param_1,undefined8 param_2,int param_3,long param_4,undefined8 param_5
                  )

{
  undefined8 *puVar1;
  undefined ***pppuVar2;
  undefined **appuStack_80 [2];
  undefined1 *puStack_70;
  int iStack_48;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  pppuVar2 = appuStack_80;
  FUN_109df39f0(param_1,param_2,param_5);
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_109d31714(appuStack_80,&uStack_38);
  FUN_109df9ee0(appuStack_80,(long)param_3,0,0);
  appuStack_80[0] = &PTR_DAT_110b5c4a0;
  if ((iStack_48 == 1) && (pppuVar2 = (undefined ***)puStack_70, puStack_70 != (undefined1 *)0x0)) {
    __ZdaPv();
    pppuVar2 = (undefined ***)puStack_70;
  }
  FUN_109e060c8();
  if ((ulong)(*(long *)((long)pppuVar2 + 0x18) - (long)*(undefined2 **)((long)pppuVar2 + 0x20)) < 2)
  {
    FUN_109e0560c();
  }
  else {
    **(undefined2 **)((long)pppuVar2 + 0x20) = 0x203d;
    *(long *)((long)pppuVar2 + 0x20) = *(long *)((long)pppuVar2 + 0x20) + 2;
  }
  FUN_109e0560c();
  FUN_109e060c8();
  FUN_109e05b10();
  puVar1 = *(undefined8 **)((long)pppuVar2 + 0x20);
  if ((ulong)(*(long *)((long)pppuVar2 + 0x18) - (long)puVar1) < 0xb) {
    FUN_109e0560c();
  }
  else {
    *(undefined4 *)((long)puVar1 + 7) = 0x203a746c;
    *puVar1 = 0x6c75616665642820;
    *(long *)((long)pppuVar2 + 0x20) = *(long *)((long)pppuVar2 + 0x20) + 0xb;
  }
  if (*(char *)(param_4 + 0xc) == '\x01') {
    FUN_109e060c8();
    FUN_109df9ee0();
  }
  else {
    FUN_109e060c8();
    puVar1 = *(undefined8 **)((long)pppuVar2 + 0x20);
    if ((ulong)(*(long *)((long)pppuVar2 + 0x18) - (long)puVar1) < 0xc) {
      FUN_109e0560c();
    }
    else {
      *(undefined4 *)(puVar1 + 1) = 0x2a746c75;
      *puVar1 = 0x61666564206f6e2a;
      *(long *)((long)pppuVar2 + 0x20) = *(long *)((long)pppuVar2 + 0x20) + 0xc;
    }
  }
  FUN_109e060c8();
  if ((ulong)(*(long *)((long)pppuVar2 + 0x18) - (long)*(undefined2 **)((long)pppuVar2 + 0x20)) < 2)
  {
    FUN_109e0560c();
  }
  else {
    **(undefined2 **)((long)pppuVar2 + 0x20) = 0xa29;
    *(long *)((long)pppuVar2 + 0x20) = *(long *)((long)pppuVar2 + 0x20) + 2;
  }
  return;
}



/* Entry: 109df4bbc; end: 109df4e2f;  */

/* WARNING: Removing unreachable block (ram,0x000109df4dc8) */

void FUN_109df4bbc(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined ***pppuVar2;
  undefined **appuStack_80 [2];
  undefined1 *puStack_70;
  int iStack_48;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  pppuVar2 = appuStack_80;
  FUN_109df39f0(param_1,param_2,param_5);
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_109d31714(appuStack_80,&uStack_38);
  FUN_109df9d4c(appuStack_80,param_3,0,0,0);
  appuStack_80[0] = &PTR_DAT_110b5c4a0;
  if ((iStack_48 == 1) && (pppuVar2 = (undefined ***)puStack_70, puStack_70 != (undefined1 *)0x0)) {
    __ZdaPv();
    pppuVar2 = (undefined ***)puStack_70;
  }
  FUN_109e060c8();
  if ((ulong)(*(long *)((long)pppuVar2 + 0x18) - (long)*(undefined2 **)((long)pppuVar2 + 0x20)) < 2)
  {
    FUN_109e0560c();
  }
  else {
    **(undefined2 **)((long)pppuVar2 + 0x20) = 0x203d;
    *(long *)((long)pppuVar2 + 0x20) = *(long *)((long)pppuVar2 + 0x20) + 2;
  }
  FUN_109e0560c();
  FUN_109e060c8();
  FUN_109e05b10();
  puVar1 = *(undefined8 **)((long)pppuVar2 + 0x20);
  if ((ulong)(*(long *)((long)pppuVar2 + 0x18) - (long)puVar1) < 0xb) {
    FUN_109e0560c();
  }
  else {
    *(undefined4 *)((long)puVar1 + 7) = 0x203a746c;
    *puVar1 = 0x6c75616665642820;
    *(long *)((long)pppuVar2 + 0x20) = *(long *)((long)pppuVar2 + 0x20) + 0xb;
  }
  if (*(char *)(param_4 + 0xc) == '\x01') {
    FUN_109e060c8();
    FUN_109df9d4c();
  }
  else {
    FUN_109e060c8();
    puVar1 = *(undefined8 **)((long)pppuVar2 + 0x20);
    if ((ulong)(*(long *)((long)pppuVar2 + 0x18) - (long)puVar1) < 0xc) {
      FUN_109e0560c();
    }
    else {
      *(undefined4 *)(puVar1 + 1) = 0x2a746c75;
      *puVar1 = 0x61666564206f6e2a;
      *(long *)((long)pppuVar2 + 0x20) = *(long *)((long)pppuVar2 + 0x20) + 0xc;
    }
  }
  FUN_109e060c8();
  if ((ulong)(*(long *)((long)pppuVar2 + 0x18) - (long)*(undefined2 **)((long)pppuVar2 + 0x20)) < 2)
  {
    FUN_109e0560c();
  }
  else {
    **(undefined2 **)((long)pppuVar2 + 0x20) = 0xa29;
    *(long *)((long)pppuVar2 + 0x20) = *(long *)((long)pppuVar2 + 0x20) + 2;
  }
  return;
}



/* Entry: 109df4e30; end: 109df50a3;  */

/* WARNING: Removing unreachable block (ram,0x000109df503c) */

void FUN_109df4e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined ***pppuVar2;
  undefined **appuStack_80 [2];
  undefined1 *puStack_70;
  int iStack_48;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  pppuVar2 = appuStack_80;
  FUN_109df39f0(param_1,param_2,param_5);
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_109d31714(appuStack_80,&uStack_38);
  FUN_109df9d4c(appuStack_80,param_3,0,0,0);
  appuStack_80[0] = &PTR_DAT_110b5c4a0;
  if ((iStack_48 == 1) && (pppuVar2 = (undefined ***)puStack_70, puStack_70 != (undefined1 *)0x0)) {
    __ZdaPv();
    pppuVar2 = (undefined ***)puStack_70;
  }
  FUN_109e060c8();
  if ((ulong)(*(long *)((long)pppuVar2 + 0x18) - (long)*(undefined2 **)((long)pppuVar2 + 0x20)) < 2)
  {
    FUN_109e0560c();
  }
  else {
    **(undefined2 **)((long)pppuVar2 + 0x20) = 0x203d;
    *(long *)((long)pppuVar2 + 0x20) = *(long *)((long)pppuVar2 + 0x20) + 2;
  }
  FUN_109e0560c();
  FUN_109e060c8();
  FUN_109e05b10();
  puVar1 = *(undefined8 **)((long)pppuVar2 + 0x20);
  if ((ulong)(*(long *)((long)pppuVar2 + 0x18) - (long)puVar1) < 0xb) {
    FUN_109e0560c();
  }
  else {
    *(undefined4 *)((long)puVar1 + 7) = 0x203a746c;
    *puVar1 = 0x6c75616665642820;
    *(long *)((long)pppuVar2 + 0x20) = *(long *)((long)pppuVar2 + 0x20) + 0xb;
  }
  if (*(char *)(param_4 + 0x10) == '\x01') {
    FUN_109e060c8();
    FUN_109df9d4c();
  }
  else {
    FUN_109e060c8();
    puVar1 = *(undefined8 **)((long)pppuVar2 + 0x20);
    if ((ulong)(*(long *)((long)pppuVar2 + 0x18) - (long)puVar1) < 0xc) {
      FUN_109e0560c();
    }
    else {
      *(undefined4 *)(puVar1 + 1) = 0x2a746c75;
      *puVar1 = 0x61666564206f6e2a;
      *(long *)((long)pppuVar2 + 0x20) = *(long *)((long)pppuVar2 + 0x20) + 0xc;
    }
  }
  FUN_109e060c8();
  if ((ulong)(*(long *)((long)pppuVar2 + 0x18) - (long)*(undefined2 **)((long)pppuVar2 + 0x20)) < 2)
  {
    FUN_109e0560c();
  }
  else {
    **(undefined2 **)((long)pppuVar2 + 0x20) = 0xa29;
    *(long *)((long)pppuVar2 + 0x20) = *(long *)((long)pppuVar2 + 0x20) + 2;
  }
  return;
}



/* Entry: 109df50a4; end: 109df531f;  */

/* WARNING: Removing unreachable block (ram,0x000109df52b4) */

void FUN_109df50a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined ***pppuVar2;
  undefined **appuStack_90 [2];
  undefined1 *puStack_80;
  int iStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pppuVar2 = appuStack_90;
  FUN_109df39f0(param_2,param_3,param_5);
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_109d31714(appuStack_90,&uStack_48);
  FUN_109df9ff4(param_1,appuStack_90,0,0,0);
  appuStack_90[0] = &PTR_DAT_110b5c4a0;
  if ((iStack_58 == 1) && (pppuVar2 = (undefined ***)puStack_80, puStack_80 != (undefined1 *)0x0)) {
    __ZdaPv();
    pppuVar2 = (undefined ***)puStack_80;
  }
  FUN_109e060c8();
  if ((ulong)(*(long *)((long)pppuVar2 + 0x18) - (long)*(undefined2 **)((long)pppuVar2 + 0x20)) < 2)
  {
    FUN_109e0560c();
  }
  else {
    **(undefined2 **)((long)pppuVar2 + 0x20) = 0x203d;
    *(long *)((long)pppuVar2 + 0x20) = *(long *)((long)pppuVar2 + 0x20) + 2;
  }
  FUN_109e0560c();
  FUN_109e060c8();
  FUN_109e05b10();
  puVar1 = *(undefined8 **)((long)pppuVar2 + 0x20);
  if ((ulong)(*(long *)((long)pppuVar2 + 0x18) - (long)puVar1) < 0xb) {
    FUN_109e0560c();
  }
  else {
    *(undefined4 *)((long)puVar1 + 7) = 0x203a746c;
    *puVar1 = 0x6c75616665642820;
    *(long *)((long)pppuVar2 + 0x20) = *(long *)((long)pppuVar2 + 0x20) + 0xb;
  }
  if (*(char *)(param_4 + 0x10) == '\x01') {
    FUN_109e060c8();
    FUN_109df9ff4(*(undefined8 *)(param_4 + 8));
  }
  else {
    FUN_109e060c8();
    puVar1 = *(undefined8 **)((long)pppuVar2 + 0x20);
    if ((ulong)(*(long *)((long)pppuVar2 + 0x18) - (long)puVar1) < 0xc) {
      FUN_109e0560c();
    }
    else {
      *(undefined4 *)(puVar1 + 1) = 0x2a746c75;
      *puVar1 = 0x61666564206f6e2a;
      *(long *)((long)pppuVar2 + 0x20) = *(long *)((long)pppuVar2 + 0x20) + 0xc;
    }
  }
  FUN_109e060c8();
  if ((ulong)(*(long *)((long)pppuVar2 + 0x18) - (long)*(undefined2 **)((long)pppuVar2 + 0x20)) < 2)
  {
    FUN_109e0560c();
  }
  else {
    **(undefined2 **)((long)pppuVar2 + 0x20) = 0xa29;
    *(long *)((long)pppuVar2 + 0x20) = *(long *)((long)pppuVar2 + 0x20) + 2;
  }
  return;
}



/* Entry: 109df5320; end: 109df559f;  */

/* WARNING: Removing unreachable block (ram,0x000109df5534) */

void FUN_109df5320(float param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined ***pppuVar2;
  undefined **appuStack_90 [2];
  undefined1 *puStack_80;
  int iStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pppuVar2 = appuStack_90;
  FUN_109df39f0(param_2,param_3,param_5);
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_109d31714(appuStack_90,&uStack_48);
  FUN_109df9ff4((double)param_1,appuStack_90,0,0,0);
  appuStack_90[0] = &PTR_DAT_110b5c4a0;
  if ((iStack_58 == 1) && (pppuVar2 = (undefined ***)puStack_80, puStack_80 != (undefined1 *)0x0)) {
    __ZdaPv();
    pppuVar2 = (undefined ***)puStack_80;
  }
  FUN_109e060c8();
  if ((ulong)(*(long *)((long)pppuVar2 + 0x18) - (long)*(undefined2 **)((long)pppuVar2 + 0x20)) < 2)
  {
    FUN_109e0560c();
  }
  else {
    **(undefined2 **)((long)pppuVar2 + 0x20) = 0x203d;
    *(long *)((long)pppuVar2 + 0x20) = *(long *)((long)pppuVar2 + 0x20) + 2;
  }
  FUN_109e0560c();
  FUN_109e060c8();
  FUN_109e05b10();
  puVar1 = *(undefined8 **)((long)pppuVar2 + 0x20);
  if ((ulong)(*(long *)((long)pppuVar2 + 0x18) - (long)puVar1) < 0xb) {
    FUN_109e0560c();
  }
  else {
    *(undefined4 *)((long)puVar1 + 7) = 0x203a746c;
    *puVar1 = 0x6c75616665642820;
    *(long *)((long)pppuVar2 + 0x20) = *(long *)((long)pppuVar2 + 0x20) + 0xb;
  }
  if (*(char *)(param_4 + 0xc) == '\x01') {
    FUN_109e060c8();
    FUN_109df9ff4((double)*(float *)(param_4 + 8));
  }
  else {
    FUN_109e060c8();
    puVar1 = *(undefined8 **)((long)pppuVar2 + 0x20);
    if ((ulong)(*(long *)((long)pppuVar2 + 0x18) - (long)puVar1) < 0xc) {
      FUN_109e0560c();
    }
    else {
      *(undefined4 *)(puVar1 + 1) = 0x2a746c75;
      *puVar1 = 0x61666564206f6e2a;
      *(long *)((long)pppuVar2 + 0x20) = *(long *)((long)pppuVar2 + 0x20) + 0xc;
    }
  }
  FUN_109e060c8();
  if ((ulong)(*(long *)((long)pppuVar2 + 0x18) - (long)*(undefined2 **)((long)pppuVar2 + 0x20)) < 2)
  {
    FUN_109e0560c();
  }
  else {
    **(undefined2 **)((long)pppuVar2 + 0x20) = 0xa29;
    *(long *)((long)pppuVar2 + 0x20) = *(long *)((long)pppuVar2 + 0x20) + 2;
  }
  return;
}



/* Entry: 109df55a0; end: 109df5743;  */

long * FUN_109df55a0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  char cVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  FUN_109df39f0(param_1,param_2,param_6);
  FUN_109e060c8();
  if ((ulong)(param_1[3] - param_1[4]) < 2) {
    FUN_109e0560c();
  }
  else {
    *(undefined2 *)param_1[4] = 0x203d;
    param_1[4] = param_1[4] + 2;
  }
  FUN_109d2f728();
  FUN_109e060c8();
  FUN_109e05b10();
  puVar1 = (undefined8 *)param_1[4];
  if ((ulong)(param_1[3] - (long)puVar1) < 0xb) {
    FUN_109e0560c();
  }
  else {
    *(undefined4 *)((long)puVar1 + 7) = 0x203a746c;
    *puVar1 = 0x6c75616665642820;
    param_1[4] = param_1[4] + 0xb;
  }
  cVar2 = *(char *)(param_5 + 0x20);
  FUN_109e060c8();
  if ((cVar2 == '\x01') ||
     (puVar1 = (undefined8 *)param_1[4], (ulong)(param_1[3] - (long)puVar1) < 0xc)) {
    FUN_109e0560c();
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x2a746c75;
    *puVar1 = 0x61666564206f6e2a;
    param_1[4] = param_1[4] + 0xc;
  }
  FUN_109e060c8();
  if (1 < (ulong)(param_1[3] - param_1[4])) {
    *(undefined2 *)param_1[4] = 0xa29;
    param_1[4] = param_1[4] + 2;
    return param_1;
  }
  puVar3 = &UNK_10f601f86;
  uVar6 = 2;
  lVar4 = param_1[4];
  uVar7 = param_1[3] - lVar4;
  if ((ulong)(param_1[3] - lVar4) < 2) {
    do {
      while (param_1[2] == 0) {
        if ((int)param_1[7] == 0) {
          if (param_1[6] != 0) {
            FUN_109e057dc();
          }
          (**(code **)(*param_1 + 0x48))(param_1,puVar3,uVar6);
          return param_1;
        }
        FUN_109e0538c(param_1);
        lVar4 = param_1[4];
        uVar7 = param_1[3] - lVar4;
        if (uVar6 <= uVar7) goto LAB_109e05640;
      }
      if (lVar4 == param_1[2]) {
        if (param_1[6] != 0) {
          FUN_109e057dc();
        }
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar6 / uVar7;
        }
        uVar7 = uVar5 * uVar7;
        uVar6 = uVar6 - uVar7;
        (**(code **)(*param_1 + 0x48))(param_1,puVar3,uVar7);
        lVar4 = param_1[4];
        uVar5 = param_1[3] - lVar4;
        if (uVar6 <= uVar5) {
          puVar3 = puVar3 + uVar7;
          break;
        }
      }
      else {
        FUN_109e05740(param_1,puVar3,uVar7);
        FUN_109e05520(param_1);
        uVar6 = uVar6 - uVar7;
        lVar4 = param_1[4];
        uVar5 = param_1[3] - lVar4;
      }
      puVar3 = puVar3 + uVar7;
      uVar7 = uVar5;
    } while (uVar5 < uVar6);
  }
LAB_109e05640:
  FUN_109e05740(param_1,puVar3,uVar6);
  return param_1;
}



/* Entry: 109df5744; end: 109df57a3;  */

long * FUN_109df5744(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  FUN_109df39f0();
  FUN_109e060c8();
  puVar1 = (undefined8 *)param_1[4];
  if (0x1d < (ulong)(param_1[3] - (long)puVar1)) {
    puVar1[1] = 0x20746e6972702074;
    *puVar1 = 0x6f6e6e61632a203d;
    *(undefined8 *)((long)puVar1 + 0x16) = 0xa2a65756c617620;
    *(undefined8 *)((long)puVar1 + 0xe) = 0x6e6f6974706f2074;
    param_1[4] = param_1[4] + 0x1e;
    return param_1;
  }
  puVar2 = &UNK_10f601fb0;
  uVar5 = 0x1e;
  lVar3 = param_1[4];
  uVar6 = param_1[3] - lVar3;
  if ((ulong)(param_1[3] - lVar3) < 0x1e) {
    do {
      while (param_1[2] != 0) {
        if (lVar3 == param_1[2]) {
          if (param_1[6] != 0) {
            FUN_109e057dc();
          }
          uVar4 = 0;
          if (uVar6 != 0) {
            uVar4 = uVar5 / uVar6;
          }
          uVar6 = uVar4 * uVar6;
          uVar5 = uVar5 - uVar6;
          (**(code **)(*param_1 + 0x48))(param_1,puVar2,uVar6);
          lVar3 = param_1[4];
          uVar4 = param_1[3] - lVar3;
          if (uVar5 <= uVar4) {
            puVar2 = puVar2 + uVar6;
            goto LAB_109e05640;
          }
        }
        else {
          FUN_109e05740(param_1,puVar2,uVar6);
          FUN_109e05520(param_1);
          uVar5 = uVar5 - uVar6;
          lVar3 = param_1[4];
          uVar4 = param_1[3] - lVar3;
        }
        puVar2 = puVar2 + uVar6;
        uVar6 = uVar4;
        if (uVar5 <= uVar4) goto LAB_109e05640;
      }
      if ((int)param_1[7] == 0) {
        if (param_1[6] != 0) {
          FUN_109e057dc();
        }
        (**(code **)(*param_1 + 0x48))(param_1,puVar2,uVar5);
        return param_1;
      }
      FUN_109e0538c(param_1);
      lVar3 = param_1[4];
      uVar6 = param_1[3] - lVar3;
    } while (uVar6 < uVar5);
  }
LAB_109e05640:
  FUN_109e05740(param_1,puVar2,uVar5);
  return param_1;
}



/* Entry: 109df57a4; end: 109df58a3;  */

undefined8 FUN_109df57a4(void)

{
  return 1;
}



/* Entry: 109df58a4; end: 109df5a9b;  */

void FUN_109df58a4(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_DAT_110b5bec0;
  plVar1 = (long *)param_1[0x17];
  if (plVar1 == param_1 + 0x14) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_109df58ec;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_109df58ec:
  func_0x000109d2f664(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109df5a9c; end: 109df5b73;  */

void FUN_109df5a9c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = param_5 + 0x80;
  func_0x000107c2aff0(uVar2,param_3,param_4,param_2);
  if ((uVar2 & 1) == 0) {
    func_0x000107c2b034();
    FUN_109df3598();
    func_0x000109d33a04();
    FUN_109d2f728();
    func_0x000109d33a04();
    puVar4 = (undefined8 *)&UNK_10f60201b;
    FUN_109df7828(&UNK_10f60201b,1);
    if (puVar4 != (undefined8 *)0x0) {
      if (puVar4[0x23] != puVar4[0x22]) {
        _free();
      }
      if (puVar4[0xf] != puVar4[0xe]) {
        _free();
      }
      if ((undefined8 *)puVar4[8] != puVar4 + 10) {
        _free();
      }
      if (puVar4[5] != 0) {
        puVar4[6] = puVar4[5];
        __ZdlPv();
      }
      if (*(char *)((long)puVar4 + 0x17) < '\0') {
        __ZdlPv(*puVar4);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar4);
      return;
    }
    return;
  }
  lVar3 = param_5 + 0x80;
  FUN_109e03610(lVar3,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  iVar1 = (int)lVar3;
  if ((iVar1 != -1) && ((long)iVar1 != (ulong)*(uint *)(param_5 + 0x88))) {
    puVar4 = *(undefined8 **)(*(long *)(param_5 + 0x80) + (long)iVar1 * 8);
    FUN_109e03714(param_5 + 0x80,(long)puVar4 + (ulong)*(uint *)(param_5 + 0x94),*puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar4,8);
    return;
  }
  return;
}



/* Entry: 109df5b74; end: 109df5bf3;  */

void FUN_109df5b74(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if (param_1[0x23] != param_1[0x22]) {
      _free();
    }
    if (param_1[0xf] != param_1[0xe]) {
      _free();
    }
    if ((undefined8 *)param_1[8] != param_1 + 10) {
      _free();
    }
    if (param_1[5] != 0) {
      param_1[6] = param_1[5];
      __ZdlPv();
    }
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 109df5bf4; end: 109df5c93;  */

void FUN_109df5bf4(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0x8c) != 0) && (uVar1 = *(uint *)(param_1 + 0x88), uVar1 != 0)) {
      lVar3 = 0;
      do {
        lVar2 = *(long *)(*(long *)(param_1 + 0x80) + lVar3);
        if (lVar2 != -8 && lVar2 != 0) {
          __ZdlPvSt11align_val_t(lVar2,8);
        }
        lVar3 = lVar3 + 8;
      } while ((ulong)uVar1 * 8 - lVar3 != 0);
    }
    _free(*(undefined8 *)(param_1 + 0x80));
    if (*(long *)(param_1 + 0x50) != param_1 + 0x60) {
      _free();
    }
    if (*(long *)(param_1 + 0x20) != param_1 + 0x30) {
      _free();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 109df5c94; end: 109df5d7f;  */

void FUN_109df5c94(long param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  *(undefined ***)(param_1 + 0x138) = &PTR_FUN_110b5be10;
  plVar1 = *(long **)(param_1 + 0x1f0);
  if (plVar1 == (long *)(param_1 + 0x1d8)) {
    lVar2 = 0x20;
LAB_109df5cd4:
    (**(code **)(*plVar1 + lVar2))();
  }
  else if (plVar1 != (long *)0x0) {
    lVar2 = 0x28;
    goto LAB_109df5cd4;
  }
  func_0x000109d2f664(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x50) = &PTR_FUN_110b5c098;
  plVar1 = *(long **)(param_1 + 0x130);
  if (plVar1 == (long *)(param_1 + 0x118)) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_109df5d24;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_109df5d24:
  if (*(long *)(param_1 + 0xf8) != 0) {
    *(long *)(param_1 + 0x100) = *(long *)(param_1 + 0xf8);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0xd8;
  FUN_109d9ef90(&lStack_28);
  func_0x000109d2f664((undefined8 *)(param_1 + 0x50));
  lStack_28 = param_1 + 0x30;
  func_0x000104c607c8(&lStack_28);
  FUN_109d4882c(param_1 + 0x18,*(undefined8 *)(param_1 + 0x20));
  FUN_109df69c4(param_1);
  return;
}



/* Entry: 109df5d80; end: 109df625f;  */

void FUN_109df5d80(long param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined1 **ppuVar4;
  undefined1 **ppuVar5;
  undefined1 **ppuVar6;
  undefined1 **ppuVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  undefined1 **ppuVar13;
  undefined1 **ppuVar14;
  undefined8 *puStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  ulong uStack_60;
  undefined1 *puStack_58;
  ulong uStack_50;
  int iStack_48;
  undefined4 uStack_44;
  
  ppuVar4 = &puStack_80;
  ppuVar5 = &puStack_80;
  ppuVar6 = &puStack_80;
  ppuVar13 = &puStack_80;
  ppuVar7 = &puStack_80;
  ppuVar14 = &puStack_80;
  bVar2 = *(byte *)((long)param_2 + 0x17);
  uStack_78 = param_2[1];
  if (-1 < (char)bVar2) {
    uStack_78 = (ulong)bVar2;
  }
  if (uStack_78 == 0) {
    return;
  }
  puStack_80 = (undefined1 *)*param_2;
  if (-1 < (char)bVar2) {
    puStack_80 = (undefined1 *)param_2;
  }
  iStack_48 = CONCAT31(iStack_48._1_3_,0x3d);
  func_0x000109d39ec8(&lStack_68,&puStack_80,&iStack_48,1);
  if (uStack_50 == 0) {
    func_0x000107c2b034();
    puVar8 = (undefined8 *)ppuVar4[4];
    if ((ulong)((long)ppuVar4[3] - (long)puVar8) < 0x14) {
      FUN_109e0560c();
      ppuVar5 = ppuVar4;
    }
    else {
      *(undefined4 *)(puVar8 + 2) = 0x203a726f;
      puVar8[1] = 0x727245207265746e;
      *puVar8 = 0x756f436775626544;
      ppuVar4[4] = (undefined1 *)((long)ppuVar4[4] + 0x14);
      ppuVar5 = ppuVar4;
    }
    FUN_109e0560c();
    puVar8 = (undefined8 *)ppuVar5[4];
    if ((ulong)((long)ppuVar5[3] - (long)puVar8) < 0x1a) goto LAB_109df6030;
    puVar8[1] = 0x6120657661682074;
    *puVar8 = 0x6f6e2073656f6420;
    *(undefined8 *)((long)puVar8 + 0x12) = 0xa7469206e69203d;
    *(undefined8 *)((long)puVar8 + 10) = 0x206e612065766168;
    lVar10 = (long)ppuVar5[4] + 0x1a;
    goto LAB_109df605c;
  }
  puStack_80 = puStack_58;
  uStack_78 = uStack_50;
  FUN_109e03ff4(&puStack_80,0,&iStack_48);
  if ((((ulong)ppuVar5 & 1) != 0) || (uStack_78 != 0)) {
    func_0x000107c2b034();
    puVar8 = (undefined8 *)ppuVar5[4];
    if ((ulong)((long)ppuVar5[3] - (long)puVar8) < 0x14) {
      FUN_109e0560c();
    }
    else {
      *(undefined4 *)(puVar8 + 2) = 0x203a726f;
      puVar8[1] = 0x727245207265746e;
      *puVar8 = 0x756f436775626544;
      ppuVar5[4] = (undefined1 *)((long)ppuVar5[4] + 0x14);
    }
    FUN_109d2f728();
    puVar8 = (undefined8 *)ppuVar5[4];
    if (0x10 < (ulong)((long)ppuVar5[3] - (long)puVar8)) {
      *(undefined1 *)(puVar8 + 2) = 10;
      puVar8[1] = 0x7265626d756e2061;
      *puVar8 = 0x20746f6e20736920;
      lVar10 = (long)ppuVar5[4] + 0x11;
      goto LAB_109df605c;
    }
    goto LAB_109df6030;
  }
  uVar11 = uStack_60 - 5;
  if (uStack_60 < 5) {
LAB_109df5e70:
    func_0x000107c2b034();
    puVar8 = (undefined8 *)ppuVar5[4];
    if ((ulong)((long)ppuVar5[3] - (long)puVar8) < 0x14) {
      FUN_109e0560c();
    }
    else {
      *(undefined4 *)(puVar8 + 2) = 0x203a726f;
      puVar8[1] = 0x727245207265746e;
      *puVar8 = 0x756f436775626544;
      ppuVar5[4] = (undefined1 *)((long)ppuVar5[4] + 0x14);
    }
    FUN_109d2f728();
    puVar8 = (undefined8 *)ppuVar5[4];
    if ((ulong)((long)ppuVar5[3] - (long)puVar8) < 0x23) {
LAB_109df6030:
      FUN_109e0560c();
      return;
    }
    *(undefined4 *)((long)puVar8 + 0x1f) = 0xa746e75;
    puVar8[1] = 0x697720646e652074;
    *puVar8 = 0x6f6e2073656f6420;
    puVar8[3] = 0x756f632d20726f20;
    puVar8[2] = 0x70696b732d206874;
    lVar10 = (long)ppuVar5[4] + 0x23;
LAB_109df605c:
    ppuVar5[4] = (undefined1 *)lVar10;
    return;
  }
  uVar3 = CONCAT44(uStack_44,iStack_48);
  lVar10 = lStack_68 + uStack_60;
  if (*(int *)(lVar10 + -5) != 0x696b732d || *(char *)(lVar10 + -1) != 'p') {
    if ((uStack_60 == 5) ||
       (*(int *)(lVar10 + -6) != 0x756f632d || *(short *)(lVar10 + -2) != 0x746e))
    goto LAB_109df5e70;
    uVar11 = uStack_60 - 6;
    if (0x7ffffffffffffff7 < uVar11) goto LAB_109df623c;
    if (uVar11 < 0x17) {
      uStack_70 = CONCAT17((char)uVar11,(undefined7)uStack_70);
      if (uVar11 != 0) goto LAB_109df6190;
    }
    else {
      puVar1 = (undefined1 *)0x19;
      if ((uVar11 | 7) != 0x17) {
        puVar1 = (undefined1 *)((uVar11 | 7) + 1);
      }
      ppuVar7 = (undefined1 **)puVar1;
      __Znwm();
      uStack_70 = (ulong)puVar1 | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar7;
      uStack_78 = uVar11;
LAB_109df6190:
      _memmove(ppuVar7,lStack_68,uVar11);
      ppuVar14 = ppuVar7;
    }
    *(undefined1 *)((long)ppuVar14 + uVar11) = 0;
    lVar10 = param_1 + 0x18;
    func_0x000109df6a34(lVar10,&puStack_80);
    if (param_1 + 0x20 == lVar10) {
      iVar12 = 0;
    }
    else {
      iVar12 = *(int *)(lVar10 + 0x38);
    }
    if ((long)uStack_70 < 0) {
      __ZdlPv(puStack_80);
    }
    iStack_48 = iVar12;
    if (iVar12 == 0) goto LAB_109df6208;
    func_0x000107c2affc();
    uRam00000001138343a8 = 1;
    func_0x000107c2af6c(param_1,&iStack_48);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    goto LAB_109df6200;
  }
  if (0x7ffffffffffffff7 < uVar11) {
LAB_109df623c:
    func_0x000104c4f6b8();
    if ((long)uStack_70 < 0) {
      __ZdlPv(puStack_80);
    }
    puVar8 = ppuVar5;
    __Unwind_Resume();
    lStack_a0 = lStack_68;
    pcStack_88 = FUN_109df6260;
    puStack_98 = ppuVar5;
    puStack_90 = &stack0xfffffffffffffff0;
    *puVar8 = &PTR_FUN_110b5c098;
    plVar9 = (long *)puVar8[0x1c];
    if (plVar9 == puVar8 + 0x19) {
      lVar10 = 0x20;
    }
    else {
      if (plVar9 == (long *)0x0) goto LAB_109df62ac;
      lVar10 = 0x28;
    }
    (**(code **)(*plVar9 + lVar10))();
LAB_109df62ac:
    if (puVar8[0x15] != 0) {
      puVar8[0x16] = puVar8[0x15];
      __ZdlPv();
    }
    puStack_a8 = puVar8 + 0x11;
    FUN_109d9ef90(&puStack_a8);
    func_0x000109d2f664(puVar8);
    return;
  }
  if (uVar11 < 0x17) {
    uStack_70 = CONCAT17((char)uVar11,(undefined7)uStack_70);
    if (uVar11 != 0) goto LAB_109df60c8;
  }
  else {
    puVar1 = (undefined1 *)0x19;
    if ((uVar11 | 7) != 0x17) {
      puVar1 = (undefined1 *)((uVar11 | 7) + 1);
    }
    ppuVar6 = (undefined1 **)puVar1;
    __Znwm();
    uStack_70 = (ulong)puVar1 | 0x8000000000000000;
    puStack_80 = (undefined1 *)ppuVar6;
    uStack_78 = uVar11;
LAB_109df60c8:
    _memmove(ppuVar6,lStack_68,uVar11);
    ppuVar13 = ppuVar6;
  }
  *(undefined1 *)((long)ppuVar13 + uVar11) = 0;
  lVar10 = param_1 + 0x18;
  func_0x000109df6a34(lVar10,&puStack_80);
  if (param_1 + 0x20 == lVar10) {
    iVar12 = 0;
  }
  else {
    iVar12 = *(int *)(lVar10 + 0x38);
  }
  if ((long)uStack_70 < 0) {
    __ZdlPv(puStack_80);
  }
  iStack_48 = iVar12;
  if (iVar12 == 0) {
LAB_109df6208:
    func_0x000107c2b034();
    FUN_109d2f728();
    FUN_109d2f728();
    FUN_109d2f728();
    return;
  }
  func_0x000107c2affc();
  uRam00000001138343a8 = 1;
  func_0x000107c2af6c(param_1,&iStack_48);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
LAB_109df6200:
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 109df6260; end: 109df632f;  */

void FUN_109df6260(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110b5c098;
  plVar1 = (long *)param_1[0x1c];
  if (plVar1 == param_1 + 0x19) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_109df62ac;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_109df62ac:
  if (param_1[0x15] != 0) {
    param_1[0x16] = param_1[0x15];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0x11;
  FUN_109d9ef90(&puStack_28);
  func_0x000109d2f664(param_1);
  return;
}



/* Entry: 109df6330; end: 109df6407;  */

ulong FUN_109df6330(long param_1,undefined4 param_2)

{
  code *pcVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined4 uStack_34;
  
  uStack_50 = 0;
  uStack_48 = 0;
  lStack_40 = 0;
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0xa8);
    *(undefined1 *)(param_1 + 0xa0) = 0;
  }
  uVar2 = param_1 + 0xc0;
  uStack_34 = param_2;
  FUN_109d81368(uVar2,param_1);
  if ((uVar2 & 1) == 0) {
    FUN_109df5d80(*(undefined8 *)(param_1 + 0x80),&uStack_50);
    *(short *)(param_1 + 0xc) = (short)param_2;
    func_0x000109231afc(param_1 + 0xa8,&uStack_34);
    plVar3 = *(long **)(param_1 + 0xe0);
    if (plVar3 == (long *)0x0) {
      func_0x000104c501e4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x109df63ec);
      (*pcVar1)();
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,&uStack_50);
  }
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  return uVar2;
}



/* Entry: 109df6408; end: 109df640f;  */

undefined8 FUN_109df6408(void)

{
  return 2;
}



/* Entry: 109df6410; end: 109df6497;  */

void FUN_109df6410(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110b5c098;
  plVar1 = (long *)param_1[0x1c];
  if (plVar1 == param_1 + 0x19) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_109df645c;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_109df645c:
  if (param_1[0x15] != 0) {
    param_1[0x16] = param_1[0x15];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0x11;
  FUN_109d9ef90(&puStack_28);
  func_0x000109d2f664(param_1);
  __ZdlPv();
  return;
}



/* Entry: 109df6498; end: 109df64a3;  */

long FUN_109df6498(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 7;
  if (*(long *)(param_1 + 0x18) != 1) {
    lVar3 = *(long *)(param_1 + 0x18) + 7;
  }
  lVar2 = param_1;
  (**(code **)(*(long *)(param_1 + 0xc0) + 0x10))();
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



/* Entry: 109df64a4; end: 109df67bf;  */

void FUN_109df64a4(long param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  int iStack_6c;
  long lStack_68;
  
  lVar5 = param_1;
  FUN_109e060c8();
  puVar1 = *(undefined2 **)(lVar5 + 0x20);
  if ((ulong)(*(long *)(lVar5 + 0x18) - (long)puVar1) < 3) {
    FUN_109e0560c();
  }
  else {
    *(undefined1 *)(puVar1 + 1) = 0x2d;
    *puVar1 = 0x2020;
    *(long *)(lVar5 + 0x20) = *(long *)(lVar5 + 0x20) + 3;
  }
  FUN_109d2f728();
  FUN_109df3884(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),param_2,
                *(long *)(param_1 + 0x18) + 6);
  func_0x000107c2affc();
  lVar5 = lRam0000000113834398;
  if (lRam0000000113834390 != lRam0000000113834398) {
    lVar9 = lRam0000000113834390;
    do {
      lVar6 = 0x113834378;
      func_0x000109df6a34(0x113834378,lVar9);
      lVar4 = lRam0000000113834390;
      if (lVar6 == 0x113834380) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(lVar6 + 0x38);
      }
      puVar7 = (undefined8 *)0x113834360;
      iStack_6c = iVar10;
      func_0x000107c2af70(0x113834360,&iStack_6c,&lStack_68);
      if ((int)puVar7 == 0) {
        uStack_a8 = 0;
        uStack_a7 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_97 = 0;
        uStack_a0 = 0xff;
        uStack_9f = 0xffffffffffffff;
        uStack_88 = 0;
        lStack_80 = 0;
        uStack_90 = 0;
      }
      else {
        uStack_b0 = *(undefined8 *)(lStack_68 + 8);
        uStack_a8 = (undefined1)*(undefined8 *)(lStack_68 + 0x10);
        uStack_9f = (undefined7)*(undefined8 *)(lStack_68 + 0x19);
        uStack_98 = (undefined1)((ulong)*(undefined8 *)(lStack_68 + 0x19) >> 0x38);
        uStack_a7 = (undefined7)*(undefined8 *)(lStack_68 + 0x11);
        uStack_a0 = (undefined1)((ulong)*(undefined8 *)(lStack_68 + 0x11) >> 0x38);
        if (*(char *)(lStack_68 + 0x3f) < '\0') {
          puVar7 = &uStack_90;
          func_0x000107c3192c(puVar7,*(undefined8 *)(lStack_68 + 0x28),
                              *(undefined8 *)(lStack_68 + 0x30));
        }
        else {
          uStack_88 = *(undefined8 *)(lStack_68 + 0x30);
          uStack_90 = *(undefined8 *)(lStack_68 + 0x28);
          lStack_80 = *(long *)(lStack_68 + 0x38);
        }
      }
      puVar8 = (undefined8 *)(lVar4 + (ulong)(iVar10 - 1) * 0x18);
      if (*(char *)((long)puVar8 + 0x17) < '\0') {
        puVar7 = &uStack_e0;
        func_0x000107c3192c(&uStack_e0,*puVar8,puVar8[1]);
      }
      else {
        uStack_d8 = puVar8[1];
        uStack_e0 = *puVar8;
        lStack_d0 = puVar8[2];
      }
      uStack_c0 = uStack_88;
      uStack_c8 = uStack_90;
      lStack_b8 = lStack_80;
      FUN_109e060c8();
      puVar2 = (undefined4 *)puVar7[4];
      if ((ulong)(puVar7[3] - (long)puVar2) < 5) {
        FUN_109e0560c();
      }
      else {
        *(undefined1 *)(puVar2 + 1) = 0x3d;
        *puVar2 = 0x20202020;
        puVar7[4] = puVar7[4] + 5;
      }
      FUN_109e0560c();
      FUN_109e060c8();
      FUN_109e05b10();
      puVar2 = (undefined4 *)puVar7[4];
      if ((ulong)(puVar7[3] - (long)puVar2) < 5) {
        FUN_109e0560c();
      }
      else {
        *(undefined1 *)(puVar2 + 1) = 0x20;
        *puVar2 = 0x20202d20;
        puVar7[4] = puVar7[4] + 5;
      }
      FUN_109e0560c();
      puVar3 = (undefined1 *)puVar7[4];
      if (puVar3 < (undefined1 *)puVar7[3]) {
        puVar7[4] = puVar3 + 1;
        *puVar3 = 10;
      }
      else {
        FUN_109e05570();
      }
      if (lStack_b8 < 0) {
        __ZdlPv(uStack_c8);
      }
      if (lStack_d0 < 0) {
        __ZdlPv(uStack_e0);
      }
      lVar9 = lVar9 + 0x18;
    } while (lVar9 != lVar5);
  }
  return;
}



/* Entry: 109df67c0; end: 109df67c3;  */

void FUN_109df67c0(void)

{
  return;
}



/* Entry: 109df67c4; end: 109df6813;  */

void FUN_109df67c4(long param_1)

{
  long lVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0xa8);
  lVar2 = *(long *)(param_1 + 0x90);
  for (lVar1 = *(long *)(param_1 + 0x88); lVar1 != lVar2; lVar1 = lVar1 + 0x28) {
    FUN_109df5d80(*(undefined8 *)(param_1 + 0x80),lVar1 + 8);
  }
  return;
}



/* Entry: 109df6814; end: 109df6817;  */

void FUN_109df6814(void)

{
  return;
}



/* Entry: 109df6818; end: 109df6923;  */

void FUN_109df6818(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110b5c098;
  plVar1 = (long *)param_1[0x1c];
  if (plVar1 == param_1 + 0x19) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_109df6864;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_109df6864:
  if (param_1[0x15] != 0) {
    param_1[0x16] = param_1[0x15];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0x11;
  FUN_109d9ef90(&puStack_28);
  func_0x000109d2f664(param_1);
  return;
}



/* Entry: 109df6924; end: 109df693b;  */

void FUN_109df6924(long *param_1)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  ushort uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 uStack_41;
  
  plVar6 = param_1 + 0x18;
  plVar8 = &lStack_60;
  FUN_109e060c8();
  lStack_58 = param_1[3];
  lStack_60 = param_1[2];
  lStack_50 = 2;
  FUN_109df3754();
  plVar5 = plVar6;
  (**(code **)(*plVar6 + 0x10))();
  if (plVar8 == (long *)0x0) goto LAB_109df2bd0;
  if ((*(ushort *)((long)param_1 + 10) >> 10 & 1) == 0) {
    uVar4 = *(ushort *)((long)param_1 + 10) >> 3;
    plVar8 = (long *)(ulong)(uVar4 & 3);
    if ((uVar4 & 3) == 0) {
      plVar5 = param_1;
      (**(code **)(*param_1 + 8))();
      plVar8 = plVar5;
    }
    FUN_109e060c8();
    if ((int)plVar8 != 1) {
      puVar1 = (undefined2 *)&UNK_10f601ec3;
      if (param_1[3] != 1) {
        puVar1 = (undefined2 *)&UNK_10f601ed2;
      }
      if ((ulong)(plVar5[3] - plVar5[4]) < 2) {
        FUN_109e0560c();
      }
      else {
        *(undefined2 *)plVar5[4] = *puVar1;
        plVar5[4] = plVar5[4] + 2;
      }
      FUN_109d2f728();
      puVar2 = (undefined1 *)plVar5[4];
      if (puVar2 < (undefined1 *)plVar5[3]) {
        plVar5[4] = (long)(puVar2 + 1);
        *puVar2 = 0x3e;
      }
      else {
        FUN_109e05570();
      }
      goto LAB_109df2bd0;
    }
    puVar1 = (undefined2 *)plVar5[4];
    if ((ulong)(plVar5[3] - (long)puVar1) < 3) {
      FUN_109e0560c();
    }
    else {
      *(undefined1 *)(puVar1 + 1) = 0x3c;
      *puVar1 = 0x3d5b;
      plVar5[4] = plVar5[4] + 3;
    }
    FUN_109d2f728();
    if (1 < (ulong)(plVar5[3] - plVar5[4])) {
      *(undefined2 *)plVar5[4] = 0x5d3e;
      lVar9 = plVar5[4] + 2;
      goto LAB_109df2bc0;
    }
  }
  else {
    FUN_109e060c8();
    if ((ulong)(plVar5[3] - plVar5[4]) < 2) {
      FUN_109e0560c();
    }
    else {
      *(undefined2 *)plVar5[4] = 0x3c20;
      plVar5[4] = plVar5[4] + 2;
    }
    FUN_109d2f728();
    if (3 < (ulong)(plVar5[3] - plVar5[4])) {
      *(undefined4 *)plVar5[4] = 0x2e2e2e3e;
      lVar9 = plVar5[4] + 4;
LAB_109df2bc0:
      plVar5[4] = lVar9;
      goto LAB_109df2bd0;
    }
  }
  FUN_109e0560c();
LAB_109df2bd0:
  lVar9 = param_1[4];
  lVar3 = param_1[5];
  FUN_109df2928(plVar6,param_1);
  uStack_a0 = 10;
  plVar6 = &lStack_58;
  lStack_58 = lVar9;
  lStack_50 = lVar3;
  func_0x000109d39ec8(&uStack_80,plVar6,&uStack_a0,1);
  FUN_109e060c8();
  FUN_109e05b10();
  puVar1 = (undefined2 *)plVar6[4];
  if ((ulong)(plVar6[3] - (long)puVar1) < 3) {
    FUN_109e0560c();
  }
  else {
    *(undefined1 *)(puVar1 + 1) = 0x20;
    *puVar1 = 0x2d20;
    plVar6[4] = plVar6[4] + 3;
  }
  FUN_109d2f728();
  if ((undefined1 *)plVar6[3] == (undefined1 *)plVar6[4]) {
    FUN_109e0560c();
  }
  else {
    *(undefined1 *)plVar6[4] = 10;
    plVar6[4] = plVar6[4] + 1;
  }
  while (lStack_68 != 0) {
    uStack_41 = 10;
    puVar7 = &uStack_70;
    func_0x000109d39ec8(&uStack_a0,puVar7,&uStack_41,1);
    uStack_80 = CONCAT71(uStack_9f,uStack_a0);
    uStack_78 = uStack_98;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    FUN_109e060c8();
    FUN_109e05b10();
    FUN_109d2f728();
    if ((undefined1 *)puVar7[3] == (undefined1 *)puVar7[4]) {
      FUN_109e0560c();
    }
    else {
      *(undefined1 *)puVar7[4] = 10;
      puVar7[4] = puVar7[4] + 1;
    }
  }
  return;
}



/* Entry: 109df693c; end: 109df695f;  */

void FUN_109df693c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110b5c100;
  return;
}



/* Entry: 109df6960; end: 109df697b;  */

void FUN_109df6960(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110b5c100;
  return;
}



/* Entry: 109df697c; end: 109df69b7;  */

long FUN_109df697c(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b5c160);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109df69b8; end: 109df69c3;  */

undefined ** FUN_109df69b8(void)

{
  return &PTR_DAT_110b5c160;
}



/* Entry: 109df69c4; end: 109df6b7f;  */

long * FUN_109df69c4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *param_1;
  if (*(uint *)(param_1 + 2) != 0) {
    puVar2 = (undefined8 *)(lVar1 + 0x28);
    lVar1 = (ulong)*(uint *)(param_1 + 2) << 6;
    do {
      if ((*(uint *)(puVar2 + -5) < 0xfffffffe) && (*(char *)((long)puVar2 + 0x17) < '\0')) {
        __ZdlPv(*puVar2);
      }
      puVar2 = puVar2 + 8;
      lVar1 = lVar1 + -0x40;
    } while (lVar1 != 0);
    lVar1 = *param_1;
  }
  __ZdlPvSt11align_val_t(lVar1,8);
  return param_1;
}



/* Entry: 109df6b80; end: 109df6cbb;  */

void FUN_109df6b80(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      uVar4 = plVar6[1];
      uVar5 = param_2 - 1;
      if ((param_2 & uVar5) == 0) {
        uVar4 = uVar4 & uVar5;
      }
      else if (param_2 <= uVar4) {
        uVar9 = 0;
        if (param_2 != 0) {
          uVar9 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar9 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar6;
      while (plVar7 != (long *)0x0) {
        uVar9 = plVar7[1];
        if ((param_2 & uVar5) == 0) {
          uVar9 = uVar9 & uVar5;
        }
        else if (param_2 <= uVar9) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar1 * param_2;
        }
        plVar8 = plVar7;
        if (uVar9 != uVar4) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar9 * 8) == 0) {
            *(long **)(lVar2 + uVar9 * 8) = plVar6;
            uVar4 = uVar9;
          }
          else {
            *plVar6 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar2 + uVar9 * 8);
            **(long **)(lVar2 + uVar9 * 8) = (long)plVar7;
            plVar8 = plVar6;
          }
        }
        plVar6 = plVar8;
        plVar7 = (long *)*plVar8;
      }
    }
  }
  return;
}



/* Entry: 109df6cbc; end: 109df6cc3;  */

void FUN_109df6cbc(void)

{
  return;
}



/* Entry: 109df6cc4; end: 109df6e93;  */

void FUN_109df6cc4(long *param_1,undefined8 param_2,undefined8 param_3)

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
  
  if (*param_1 != 0) {
    FUN_109e046a0(param_3);
    plVar4 = (long *)*param_1;
    *param_1 = 0;
    if (plVar4 != (long *)0x0) {
      plVar6 = plVar4;
      (**(code **)(*plVar4 + 0x30))(plVar4,0x113834570);
      if ((int)plVar6 == 0) {
        plStack_48 = plVar4;
        FUN_109df76a8(&plStack_68,&plStack_48,param_2);
        if (plStack_48 == (long *)0x0) {
          return;
        }
        pcVar3 = *(code **)(*plStack_48 + 8);
        plVar4 = plStack_48;
      }
      else {
        puVar5 = (undefined8 *)plVar4[1];
        puVar1 = (undefined8 *)plVar4[2];
        if (puVar5 == puVar1) {
          plVar6 = (long *)0x0;
        }
        else {
          plVar6 = (long *)0x0;
          do {
            plStack_60 = (long *)*puVar5;
            *puVar5 = 0;
            plStack_50 = plVar6;
            FUN_109df76a8(&plStack_58,&plStack_60,param_2);
            FUN_109d39358(&plStack_48,&plStack_50,&plStack_58);
            plVar6 = plStack_48;
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
        plStack_68 = plVar6;
      }
      (*pcVar3)(plVar4);
    }
  }
  return;
}



/* Entry: 109df6e94; end: 109df6f0f;  */

undefined1  [16] FUN_109df6e94(void)

{
  undefined1 auVar1 [16];
  
  func_0x000109df6eb4();
  auVar1._8_8_ = &PTR_PTR_1132fef20;
  auVar1._0_8_ = 1;
  return auVar1;
}



/* Entry: 109df6f10; end: 109df6f13;  */

void FUN_109df6f10(void)

{
  return;
}



/* Entry: 109df6f14; end: 109df7133;  */

undefined8 FUN_109df6f14(undefined **param_1)

{
  long **pplVar1;
  long *plVar2;
  undefined **ppuVar3;
  code *pcVar4;
  long ***ppplVar5;
  long **pplVar6;
  long ***ppplVar7;
  long **applStack_98 [3];
  long ***appplStack_80 [4];
  undefined2 uStack_60;
  int iStack_58;
  undefined4 uStack_54;
  undefined **ppuStack_50;
  long **pplStack_48;
  long *plStack_40;
  long *plStack_38;
  
  iStack_58 = 0;
  ppuVar3 = param_1;
  __ZNSt3__115system_categoryEv();
  ppplVar5 = (long ***)*param_1;
  *param_1 = (undefined *)0x0;
  ppuStack_50 = ppuVar3;
  if (ppplVar5 == (long ***)0x0) {
    pplStack_48 = (long **)0x0;
  }
  else {
    ppplVar7 = ppplVar5;
    (*(code *)(*ppplVar5)[6])(ppplVar5,0x113834570);
    if ((int)ppplVar7 == 0) {
      appplStack_80[0] = ppplVar5;
      FUN_109df7784(&pplStack_48,appplStack_80,&iStack_58);
      if (appplStack_80[0] == (long ***)0x0) goto LAB_109df7040;
      pcVar4 = (code *)(*appplStack_80[0])[1];
      ppplVar5 = appplStack_80[0];
    }
    else {
      pplVar6 = ppplVar5[1];
      pplVar1 = ppplVar5[2];
      if (pplVar6 == pplVar1) {
        ppplVar7 = (long ***)0x0;
      }
      else {
        ppplVar7 = (long ***)0x0;
        do {
          plStack_40 = *pplVar6;
          *pplVar6 = (long *)0x0;
          applStack_98[0] = (long **)ppplVar7;
          FUN_109df7784(&plStack_38,&plStack_40,&iStack_58);
          FUN_109d39358(appplStack_80,applStack_98,&plStack_38);
          ppplVar7 = appplStack_80[0];
          appplStack_80[0] = (long ***)0x0;
          if (plStack_38 != (long *)0x0) {
            (**(code **)(*plStack_38 + 8))();
          }
          plVar2 = plStack_40;
          plStack_40 = (long *)0x0;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
          if ((long ***)applStack_98[0] != (long ***)0x0) {
            (*(code *)(*applStack_98[0])[1])();
          }
          pplVar6 = pplVar6 + 1;
        } while (pplVar6 != pplVar1);
      }
      pcVar4 = (code *)(*ppplVar5)[1];
      pplStack_48 = (long **)ppplVar7;
    }
    (*pcVar4)(ppplVar5);
  }
LAB_109df7040:
  func_0x000109df6eb4();
  if (ppuStack_50 != &PTR_PTR_1132fef20 || iStack_58 != 3) {
    return CONCAT44(uStack_54,iStack_58);
  }
  __ZNKSt3__110error_code7messageEv(applStack_98,&iStack_58);
  uStack_60 = 0x104;
  appplStack_80[0] = applStack_98;
  FUN_109df7858(appplStack_80,1);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109df70a4);
  (*pcVar4)();
}



/* Entry: 109df7134; end: 109df7263;  */

long ******* FUN_109df7134(long param_1,long *******param_2)

{
  long *******ppppppplVar1;
  long *******ppppppplVar2;
  long *plVar3;
  long ******pppppplVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long ******pppppplStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  if (*(char *)(param_1 + 0x30) != '\x01') {
    __ZNKSt3__110error_code7messageEv(&pppppplStack_48,param_1 + 0x20);
    uVar6 = uStack_40;
    ppppppplVar1 = (long *******)pppppplStack_48;
    if (-1 < (char)bStack_31) {
      uVar6 = (ulong)bStack_31;
      ppppppplVar1 = &pppppplStack_48;
    }
    ppppppplVar2 = param_2;
    FUN_109e0560c(param_2,ppppppplVar1,uVar6);
    if ((char)bStack_31 < '\0') {
      ppppppplVar2 = (long *******)pppppplStack_48;
      __ZdlPv(pppppplStack_48);
    }
    if (*(char *)(param_1 + 0x1f) < '\0') {
      if (*(long *)(param_1 + 0x10) == 0) {
        return ppppppplVar2;
      }
    }
    else if (*(char *)(param_1 + 0x1f) == '\0') {
      return ppppppplVar2;
    }
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&pppppplStack_48," ",param_1 + 8);
    ppppppplVar1 = (long *******)pppppplStack_48;
    if (-1 < (char)bStack_31) {
      uStack_40 = (ulong)bStack_31;
      ppppppplVar1 = &pppppplStack_48;
    }
    FUN_109e0560c(param_2,ppppppplVar1,uStack_40);
    if ((char)bStack_31 < '\0') {
      __ZdlPv(pppppplStack_48);
      param_2 = (long *******)pppppplStack_48;
    }
    return param_2;
  }
  uVar6 = *(ulong *)(param_1 + 0x10);
  plVar3 = *(long **)(param_1 + 8);
  if (-1 < (char)*(byte *)(param_1 + 0x1f)) {
    uVar6 = (ulong)*(byte *)(param_1 + 0x1f);
    plVar3 = (long *)(param_1 + 8);
  }
  pppppplVar4 = param_2[4];
  uVar7 = (long)param_2[3] - (long)pppppplVar4;
  if ((ulong)((long)param_2[3] - (long)pppppplVar4) < uVar6) {
    do {
      while (param_2[2] == (long ******)0x0) {
        if (*(int *)(param_2 + 7) == 0) {
          if (param_2[6] != (long ******)0x0) {
            FUN_109e057dc();
          }
          (*(code *)(*param_2)[9])(param_2,plVar3,uVar6);
          return param_2;
        }
        FUN_109e0538c(param_2);
        pppppplVar4 = param_2[4];
        uVar7 = (long)param_2[3] - (long)pppppplVar4;
        if (uVar6 <= uVar7) goto LAB_109e05640;
      }
      if (pppppplVar4 == param_2[2]) {
        if (param_2[6] != (long ******)0x0) {
          FUN_109e057dc();
        }
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar6 / uVar7;
        }
        uVar7 = uVar5 * uVar7;
        uVar6 = uVar6 - uVar7;
        (*(code *)(*param_2)[9])(param_2,plVar3,uVar7);
        pppppplVar4 = param_2[4];
        uVar5 = (long)param_2[3] - (long)pppppplVar4;
        if (uVar6 <= uVar5) {
          plVar3 = (long *)((long)plVar3 + uVar7);
          break;
        }
      }
      else {
        FUN_109e05740(param_2,plVar3,uVar7);
        FUN_109e05520(param_2);
        uVar6 = uVar6 - uVar7;
        pppppplVar4 = param_2[4];
        uVar5 = (long)param_2[3] - (long)pppppplVar4;
      }
      plVar3 = (long *)((long)plVar3 + uVar7);
      uVar7 = uVar5;
    } while (uVar5 < uVar6);
  }
LAB_109e05640:
  FUN_109e05740(param_2,plVar3,uVar6);
  return param_2;
}



/* Entry: 109df7264; end: 109df726f;  */

undefined1  [16] FUN_109df7264(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x20);
}



/* Entry: 109df7270; end: 109df730f;  */

void FUN_109df7270(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  char *apcStack_58 [4];
  undefined1 uStack_38;
  undefined1 uStack_37;
  
  puVar3 = (undefined8 *)0x38;
  __Znwm();
  uStack_38 = 1;
  uStack_37 = 1;
  if (*(char *)*param_2 != '\0') {
    uStack_38 = 3;
    apcStack_58[0] = (char *)*param_2;
  }
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *puVar3 = &PTR_FUN_110b5c180;
  FUN_109e04498(puVar3 + 1,apcStack_58);
  puVar3[4] = uVar1;
  puVar3[5] = uVar2;
  *(undefined1 *)(puVar3 + 6) = 1;
  *param_1 = puVar3;
  return;
}



/* Entry: 109df7310; end: 109df7413;  */

void FUN_109df7310(undefined8 *param_1)

{
  code *pcVar1;
  undefined1 auStack_b0 [32];
  undefined2 uStack_90;
  long *plStack_88;
  undefined **appuStack_80 [2];
  long lStack_70;
  undefined2 uStack_60;
  int iStack_48;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_38 = (undefined *)0x0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_109d31714(appuStack_80,&puStack_38);
  plStack_88 = (long *)*param_1;
  *param_1 = 0;
  uStack_90 = 0x101;
  FUN_109df6cc4(&plStack_88,appuStack_80,auStack_b0);
  if (plStack_88 != (long *)0x0) {
    (**(code **)(*plStack_88 + 8))();
  }
  appuStack_80[0] = &PTR_DAT_110b5c4a0;
  if ((iStack_48 == 1) && (lStack_70 != 0)) {
    __ZdaPv();
  }
  uStack_60 = 0x104;
  appuStack_80[0] = &puStack_38;
  FUN_109df7858(appuStack_80,1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109df73b4);
  (*pcVar1)();
}



/* Entry: 109df7414; end: 109df7487;  */

long FUN_109df7414(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 8;
  FUN_109d39bc0(&lStack_28);
  return param_1;
}



/* Entry: 109df7488; end: 109df756b;  */

void FUN_109df7488(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  if ((ulong)(*(long *)(param_2 + 0x18) - (long)puVar1) < 0x11) {
    FUN_109e0560c(param_2,&UNK_10f602295,0x11);
  }
  else {
    *(undefined1 *)(puVar1 + 2) = 10;
    puVar1[1] = 0x3a73726f72726520;
    *puVar1 = 0x656c7069746c754d;
    *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 0x11;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (puVar1 = *(undefined8 **)(param_1 + 8); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,param_2);
    if (*(undefined1 **)(param_2 + 0x18) == *(undefined1 **)(param_2 + 0x20)) {
      FUN_109e0560c(param_2,&DAT_10f68f57e,1);
    }
    else {
      **(undefined1 **)(param_2 + 0x20) = 10;
      *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 1;
    }
  }
  return;
}



/* Entry: 109df756c; end: 109df75c7;  */

undefined8 FUN_109df756c(void)

{
  return 0x113834570;
}



/* Entry: 109df75c8; end: 109df763f;  */

undefined8 * FUN_109df75c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b5c180;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 109df7640; end: 109df766f;  */

undefined8 FUN_109df7640(void)

{
  return 0x1137e7c50;
}



/* Entry: 109df7670; end: 109df7683;  */

void FUN_109df7670(void)

{
  __ZNSt3__114error_categoryD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


