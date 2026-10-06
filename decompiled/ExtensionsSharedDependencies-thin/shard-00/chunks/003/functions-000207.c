/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0048f1c0; end: 0048f2bb;  */

undefined8 FUN_0048f1c0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  
  func_0x00490b0c();
  uVar1 = (uint)*param_2;
  func_0x00490c64();
  uVar2 = *param_3;
  func_0x004278bc(uVar2,*unaff_x19);
  if ((uVar1 >> 7 & 1) == 0) {
    if (-1 < (char)uVar2) {
      return 0;
    }
    func_0x00490e0c();
    uVar1 = (uint)*unaff_x19;
    func_0x00490c64();
    if ((uVar1 >> 7 & 1) != 0) {
      uVar2 = *unaff_x21;
      *unaff_x21 = *unaff_x19;
      *unaff_x19 = uVar2;
    }
  }
  else {
    uVar3 = *unaff_x21;
    if ((char)uVar2 < '\0') {
      *unaff_x21 = *param_3;
      *param_3 = uVar3;
    }
    else {
      *unaff_x21 = *unaff_x19;
      *unaff_x19 = uVar3;
      uVar1 = (uint)*param_3;
      func_0x004278bc();
      if ((uVar1 >> 7 & 1) != 0) {
        func_0x00490e0c();
      }
    }
  }
  return 1;
}



/* Entry: 0048f2bc; end: 0048f44f;  */

void FUN_0048f2bc(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  
  func_0x00490b18();
  func_0x0048f270();
  func_0x00490d84();
  if ((param_1 >> 7 & 1) != 0) {
    uVar2 = *param_4;
    *param_4 = *param_5;
    *param_5 = uVar2;
    uVar1 = (uint)*param_4;
    func_0x00490c64();
    if ((((uVar1 >> 7 & 1) != 0) && (func_0x00490c2c(), (uVar1 >> 7 & 1) != 0)) &&
       (func_0x00490c48(), (uVar1 >> 7 & 1) != 0)) {
      func_0x00490df8();
    }
  }
  return;
}



/* Entry: 0048f450; end: 0048f463;  */

undefined8 *
FUN_0048f450(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == param_2) {
    return param_3;
  }
  if (param_1 != param_2) {
    puVar1 = param_1;
    func_0x0048f824(param_1,param_2,param_4);
    lVar2 = (long)param_2 - (long)param_1;
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      func_0x00490d84();
      if (((uint)puVar1 >> 7 & 1) != 0) {
        uVar3 = *param_2;
        *param_2 = *param_1;
        *param_1 = uVar3;
        puVar1 = param_1;
        FUN_0048f884(param_1,param_4,lVar2 >> 3,param_1);
      }
    }
    func_0x00490b68(param_1);
    FUN_0048f994();
    param_3 = param_2;
  }
  return param_3;
}



/* Entry: 0048f464; end: 0048f603;  */

undefined8 * FUN_0048f464(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar3 = *param_1;
  puVar1 = param_1;
  func_0x00490cc0(param_1,param_2[-1]);
  puVar4 = param_1;
  if (((uint)puVar1 >> 7 & 1) == 0) {
    do {
      puVar4 = puVar4 + 1;
      if (param_2 <= puVar4) break;
      func_0x00490cc0();
    } while (((uint)puVar1 >> 7 & 1) == 0);
  }
  else {
    do {
      puVar4 = puVar4 + 1;
      func_0x00490cc0();
    } while (((uint)puVar1 >> 7 & 1) == 0);
  }
  if (puVar4 < param_2) {
    do {
      param_2 = param_2 + -1;
      func_0x00490cc0();
    } while (((uint)puVar1 >> 7 & 1) != 0);
  }
  while (puVar4 < param_2) {
    uVar2 = *puVar4;
    *puVar4 = *param_2;
    *param_2 = uVar2;
    do {
      puVar4 = puVar4 + 1;
      func_0x00490cc0();
    } while (((uint)puVar1 >> 7 & 1) == 0);
    do {
      param_2 = param_2 + -1;
      func_0x00490cc0();
    } while (((uint)puVar1 >> 7 & 1) != 0);
  }
  if (param_1 != puVar4 + -1) {
    *param_1 = puVar4[-1];
  }
  puVar4[-1] = uVar3;
  return puVar4;
}



/* Entry: 0048f604; end: 0048f787;  */

bool FUN_0048f604(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  func_0x00490ad4();
  switch(param_2 - param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    uVar6 = unaff_x20[-1];
    func_0x004278bc(uVar6,*unaff_x19);
    if (((uint)uVar6 >> 7 & 1) != 0) {
      uVar6 = *unaff_x19;
      *unaff_x19 = unaff_x20[-1];
      unaff_x20[-1] = uVar6;
    }
    break;
  case 3:
    FUN_0048f1c0();
    break;
  case 4:
    func_0x0048f270();
    break;
  case 5:
    FUN_0048f2bc();
    break;
  default:
    FUN_0048f1c0();
    lVar7 = 0;
    iVar8 = 0;
    for (puVar4 = unaff_x19 + 3; puVar4 != unaff_x20; puVar4 = puVar4 + 1) {
      uVar2 = (uint)*puVar4;
      func_0x00490c64();
      if ((uVar2 >> 7 & 1) != 0) {
        uVar6 = *puVar4;
        lVar1 = lVar7;
        do {
          lVar9 = lVar1;
          *(undefined8 *)((long)unaff_x19 + lVar9 + 0x18) =
               *(undefined8 *)((long)unaff_x19 + lVar9 + 0x10);
          puVar5 = unaff_x19;
          if (lVar9 == -0x10) goto LAB_0048f724;
          uVar3 = uVar6;
          func_0x004278bc(uVar6,*(undefined8 *)((long)unaff_x19 + lVar9 + 8));
          lVar1 = lVar9 + -8;
        } while (((uint)uVar3 >> 7 & 1) != 0);
        puVar5 = (undefined8 *)((long)unaff_x19 + lVar9 + 0x10);
LAB_0048f724:
        *puVar5 = uVar6;
        iVar8 = iVar8 + 1;
        if (iVar8 == 8) {
          return puVar4 + 1 == unaff_x20;
        }
      }
      lVar7 = lVar7 + 8;
    }
  }
  return true;
}



/* Entry: 0048f788; end: 0048f883;  */

undefined8 *
FUN_0048f788(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    puVar1 = param_1;
    func_0x0048f824(param_1,param_2,param_4);
    lVar2 = (long)param_2 - (long)param_1;
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      func_0x00490d84();
      if (((uint)puVar1 >> 7 & 1) != 0) {
        uVar3 = *param_2;
        *param_2 = *param_1;
        *param_1 = uVar3;
        puVar1 = param_1;
        FUN_0048f884(param_1,param_4,lVar2 >> 3,param_1);
      }
    }
    func_0x00490b68(param_1);
    FUN_0048f994();
    param_3 = param_2;
  }
  return param_3;
}



/* Entry: 0048f884; end: 0048f993;  */

void FUN_0048f884(long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  if (1 < param_3) {
    uVar8 = param_3 - 2U >> 1;
    if ((long)param_4 - param_1 >> 3 <= (long)uVar8) {
      lVar7 = (long)param_4 - param_1 >> 2;
      uVar1 = lVar7 + 1;
      puVar9 = (undefined8 *)(param_1 + uVar1 * 8);
      uVar2 = lVar7 + 2;
      puVar10 = puVar9;
      uVar11 = uVar1;
      if ((long)uVar2 < param_3) {
        uVar5 = *puVar9;
        func_0x004278bc(uVar5,puVar9[1]);
        puVar10 = puVar9 + 1;
        uVar11 = uVar2;
        if (-1 < (char)uVar5) {
          puVar10 = puVar9;
          uVar11 = uVar1;
        }
      }
      uVar4 = (uint)*puVar10;
      func_0x00490c64();
      if ((uVar4 >> 7 & 1) == 0) {
        uVar5 = *param_4;
        do {
          puVar9 = puVar10;
          *param_4 = *puVar9;
          if ((long)uVar8 < (long)uVar11) break;
          uVar2 = uVar11 << 1 | 1;
          puVar3 = (undefined8 *)(param_1 + uVar2 * 8);
          uVar1 = uVar11 * 2 + 2;
          puVar10 = puVar3;
          uVar11 = uVar2;
          if ((long)uVar1 < param_3) {
            uVar6 = *puVar3;
            func_0x004278bc(uVar6,puVar3[1]);
            puVar10 = puVar3 + 1;
            uVar11 = uVar1;
            if (-1 < (char)uVar6) {
              puVar10 = puVar3;
              uVar11 = uVar2;
            }
          }
          uVar6 = *puVar10;
          func_0x004278bc(uVar6,uVar5);
          param_4 = puVar9;
        } while (((uint)uVar6 >> 7 & 1) == 0);
        *puVar9 = uVar5;
      }
    }
  }
  return;
}



/* Entry: 0048f994; end: 0048fa4b;  */

void FUN_0048f994(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00490984();
  lVar1 = param_2 - param_1 >> 3;
  while (lVar1 + -1 != 0 && 0 < lVar1) {
    func_0x00490b68();
    func_0x0048f9d8();
    lVar1 = lVar1 + -1;
  }
  return;
}



/* Entry: 0048fa4c; end: 0048fadf;  */

undefined8 * FUN_0048fa4c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  uVar4 = 0;
  do {
    uVar2 = uVar4 << 1 | 1;
    uVar1 = uVar4 * 2 + 2;
    uVar5 = uVar2;
    puVar6 = param_1 + uVar4 + 1;
    if ((long)uVar1 < param_3) {
      uVar3 = param_1[uVar4 + 1];
      func_0x004278bc(uVar3,param_1[uVar4 + 2]);
      uVar5 = uVar1;
      puVar6 = param_1 + uVar4 + 2;
      if (-1 < (char)uVar3) {
        uVar5 = uVar2;
        puVar6 = param_1 + uVar4 + 1;
      }
    }
    *param_1 = *puVar6;
    uVar4 = uVar5;
    param_1 = puVar6;
  } while ((long)uVar5 <= (param_3 + -2) / 2);
  return puVar6;
}



/* Entry: 0048fae0; end: 0048fb63;  */

void FUN_0048fae0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  if (1 < param_4) {
    func_0x00490ad4(param_4 + -2);
    uVar5 = extraout_x8 >> 1;
    puVar1 = (undefined8 *)(param_1 + uVar5 * 8);
    uVar2 = *puVar1;
    puVar4 = (undefined8 *)(unaff_x20 + -8);
    func_0x004278bc(uVar2,*puVar4);
    if (((uint)uVar2 >> 7 & 1) != 0) {
      uVar2 = *puVar4;
      do {
        puVar6 = puVar1;
        *puVar4 = *puVar6;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1 >> 1;
        puVar1 = (undefined8 *)(unaff_x19 + uVar5 * 8);
        uVar3 = *puVar1;
        func_0x004278bc(uVar3,uVar2);
        puVar4 = puVar6;
      } while (((uint)uVar3 >> 7 & 1) != 0);
      *puVar6 = uVar2;
    }
  }
  return;
}



/* Entry: 0048fb64; end: 0048fb8f;  */

int FUN_0048fb64(int param_1)

{
  int unaff_w20;
  
  FUN_0048910c();
  func_0x00490dd8();
  return unaff_w20 + param_1 + 2;
}



/* Entry: 0048fb90; end: 0048fc73;  */

long FUN_0048fb90(long *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  undefined8 extraout_x8_00;
  uint extraout_w10;
  uint uVar4;
  uint extraout_w10_00;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  
  plVar2 = param_1;
  func_0x00490dcc();
  lVar5 = (long)*(char *)((long)param_2 + 0x17);
  if ((-1 < lVar5) || (lVar5 = param_2[1], lVar5 < 0x80)) {
    lVar8 = *param_4;
    uVar4 = (int)param_1 << 3;
    uVar1 = uVar4;
    func_0x00487c84();
    if (lVar5 <= lVar8 + ~((long)plVar2 + (long)(int)uVar1) + 0x10) {
      lVar8 = (long)plVar2 + 2;
      for (uVar4 = uVar4 | 2; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
        *(byte *)(lVar8 + -2) = (byte)uVar4 | 0x80;
        lVar8 = lVar8 + 1;
      }
      *(byte *)(lVar8 + -2) = (byte)uVar4;
      *(char *)(lVar8 + -1) = (char)lVar5;
      plVar2 = (long *)*param_2;
      if (-1 < *(char *)((long)param_2 + 0x17)) {
        plVar2 = param_2;
      }
      _memcpy(lVar8,plVar2,lVar5);
      return lVar8 + lVar5;
    }
  }
  func_0x0054f58c(param_4,param_1);
  func_0x0054f618();
  uVar4 = extraout_w10;
  while (0x7f < uVar4) {
    func_0x0054f6c4();
    uVar4 = extraout_w10_00;
  }
  func_0x0054f600();
  uVar3 = extraout_x8;
  while (0x7f < (uint)uVar3) {
    func_0x0054f69c();
    uVar3 = extraout_x8_00;
  }
  func_0x0054f5b0();
  if (*param_4 - (long)plVar2 < (long)(int)param_2) {
    while( true ) {
      iVar7 = ((int)*param_4 - (int)plVar2) + 0x10;
      iVar6 = (int)param_2;
      param_2 = (long *)(ulong)(uint)(iVar6 - iVar7);
      if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
      func_0x0054f690();
      lVar5 = (long)plVar2 + (long)iVar7;
      plVar2 = param_4;
      func_0x0054ed58(param_4,lVar5);
    }
    func_0x0054f690();
    return (long)plVar2 + (long)iVar6;
  }
  _memcpy(plVar2);
  return (long)plVar2 + (long)(int)param_2;
}



/* Entry: 0048fc74; end: 0048fd27;  */

void FUN_0048fc74(ulong *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  
  param_1[1] = param_2;
  uVar1 = *(uint *)(param_2 + 0xc);
  if (uVar1 == *(uint *)(param_2 + 4)) {
    *(undefined4 *)(param_1 + 2) = 0;
    *param_1 = 0;
    return;
  }
  *(uint *)(param_1 + 2) = uVar1;
  uVar2 = *(ulong *)(*(long *)(param_2 + 0x10) + (ulong)uVar1 * 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(**(long **)(uVar2 - 1) + 0x20);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 0048fd28; end: 0048fd73;  */

void FUN_0048fd28(undefined8 param_1)

{
  undefined8 uStack_38;
  
  func_0x00490ae8();
  while (uStack_38 != 0) {
    FUN_0048fd74(param_1,uStack_38 + 8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    func_0x00490ae0();
  }
  return;
}



/* Entry: 0048fd74; end: 0048fd97;  */

long FUN_0048fd74(void)

{
  long alStack_30 [4];
  
  FUN_0048fd98(alStack_30);
  return alStack_30[0] + 0x20;
}



/* Entry: 0048fd98; end: 0048ff23;  */

void FUN_0048fd98(undefined8 *param_1,int *param_2,ulong param_3)

{
  int *piVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  
  uVar2 = param_3;
  FUN_00490da4(param_3);
  piVar1 = param_2;
  func_0x00490a2c();
  if (piVar1 == (int *)0x0) {
    uVar3 = (ulong)(*param_2 + 1);
    piVar1 = param_2;
    FUN_0048ff24();
    if ((int)piVar1 != 0) {
      FUN_00490da4(param_3);
      func_0x00490a2c(param_2);
      uVar2 = uVar3;
    }
    piVar1 = param_2;
    func_0x0048ffb4(param_2,0x38);
    FUN_0048ffe0(piVar1 + 2,*(undefined8 *)(param_2 + 6),param_3);
    FUN_00490014(piVar1 + 8,*(undefined8 *)(param_2 + 6));
    FUN_00490028(param_2,uVar2,piVar1);
    *param_2 = *param_2 + 1;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  *param_1 = piVar1;
  param_1[1] = param_2;
  *(int *)(param_1 + 2) = (int)uVar2;
  *(undefined1 *)(param_1 + 3) = uVar4;
  return;
}



/* Entry: 0048ff24; end: 0048ffdf;  */

undefined8 FUN_0048ff24(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar3 = ((ulong)uVar1 & 0xfffffffe) - ((ulong)(uVar1 >> 2) & 0x3ffffffc);
  if (uVar3 < param_2) {
    if (-1 < (int)uVar1) {
      uVar2 = uVar1 << 1;
LAB_0048ff9c:
      FUN_004902f0(param_1,uVar2);
      return 1;
    }
  }
  else if (2 < uVar1 && param_2 <= uVar3 >> 2) {
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
    } while ((param_2 * 5 >> 2) + 1 << (uVar4 & 0x3f) < uVar3);
    uVar2 = uVar1 >> (ulong)((uint)uVar4 & 0x1f);
    if (uVar2 < 3) {
      uVar2 = 2;
    }
    if (uVar2 != uVar1) goto LAB_0048ff9c;
  }
  return 0;
}



/* Entry: 0048ffe0; end: 00490013;  */

void FUN_0048ffe0(long param_1,long *param_2,undefined8 param_3)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar2;
  ulong extraout_x10;
  ulong extraout_x10_00;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1,param_3);
  if (param_2 == (long *)0x0) {
    return;
  }
  if (param_1 != 0) {
    FUN_00550458();
    lVar1 = param_2[1];
    if (0xf < (ulong)(lVar1 - *param_2)) {
      param_2[1] = lVar1 + -0x10;
      if (((lVar1 + -0x10) - param_2[3] < 0x181) && ((ulong)param_2[2] < (ulong)param_2[3])) {
        func_0x00551264();
        for (uVar2 = extraout_x9_00; extraout_x10_00 < uVar2; uVar2 = uVar2 - 0x40) {
          Hint_Prefetch(uVar2,2,0,0);
        }
        param_2[3] = uVar2;
        lVar1 = extraout_x8_00;
      }
      *(long *)(lVar1 + -0x10) = param_1;
      *(undefined8 *)(lVar1 + -8) = 0x4906e4;
      return;
    }
    func_0x005504b4();
    lVar1 = param_2[1];
    param_2[1] = lVar1 + -0x10;
    if (((lVar1 + -0x10) - param_2[3] < 0x181) && ((ulong)param_2[2] < (ulong)param_2[3])) {
      func_0x00551264();
      for (uVar2 = extraout_x9; extraout_x10 < uVar2; uVar2 = uVar2 - 0x40) {
        Hint_Prefetch(uVar2,2,0,0);
      }
      param_2[3] = uVar2;
      lVar1 = extraout_x8;
    }
    *(long *)(lVar1 + -0x10) = param_1;
    *(undefined8 *)(lVar1 + -8) = 0x4906e4;
    return;
  }
  return;
}



/* Entry: 00490014; end: 00490027;  */

void FUN_00490014(undefined8 *param_1,long *param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar2;
  ulong extraout_x10;
  ulong extraout_x10_00;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 == (long *)0x0) {
    return;
  }
  if (param_1 != (undefined8 *)0x0) {
    FUN_00550458();
    lVar1 = param_2[1];
    if (0xf < (ulong)(lVar1 - *param_2)) {
      param_2[1] = lVar1 + -0x10;
      if (((lVar1 + -0x10) - param_2[3] < 0x181) && ((ulong)param_2[2] < (ulong)param_2[3])) {
        func_0x00551264();
        for (uVar2 = extraout_x9_00; extraout_x10_00 < uVar2; uVar2 = uVar2 - 0x40) {
          Hint_Prefetch(uVar2,2,0,0);
        }
        param_2[3] = uVar2;
        lVar1 = extraout_x8_00;
      }
      *(undefined8 **)(lVar1 + -0x10) = param_1;
      *(undefined8 *)(lVar1 + -8) = 0x4906e4;
      return;
    }
    func_0x005504b4();
    lVar1 = param_2[1];
    param_2[1] = lVar1 + -0x10;
    if (((lVar1 + -0x10) - param_2[3] < 0x181) && ((ulong)param_2[2] < (ulong)param_2[3])) {
      func_0x00551264();
      for (uVar2 = extraout_x9; extraout_x10 < uVar2; uVar2 = uVar2 - 0x40) {
        Hint_Prefetch(uVar2,2,0,0);
      }
      param_2[3] = uVar2;
      lVar1 = extraout_x8;
    }
    *(undefined8 **)(lVar1 + -0x10) = param_1;
    *(undefined8 *)(lVar1 + -8) = 0x4906e4;
    return;
  }
  return;
}



/* Entry: 00490028; end: 004900bb;  */

void FUN_00490028(ulong param_1,ulong param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lStack_60;
  ulong uStack_58;
  undefined8 *puStack_48;
  
  lVar2 = *(long *)(param_1 + 0x10);
  uVar4 = *(ulong *)(lVar2 + (param_2 & 0xffffffff) * 8);
  if (uVar4 == 0) {
    *param_3 = 0;
    *(undefined8 **)(lVar2 + (param_2 & 0xffffffff) * 8) = param_3;
    uVar1 = (uint)param_2;
    if (*(uint *)(param_1 + 0xc) <= (uint)param_2) {
      uVar1 = *(uint *)(param_1 + 0xc);
    }
    *(uint *)(param_1 + 0xc) = uVar1;
  }
  else {
    if (((uVar4 & 1) != 0) || (uVar4 = param_1, func_0x004906e8(param_1,param_2), (uVar4 & 1) != 0))
    {
      uVar5 = *(ulong *)(*(long *)(param_1 + 0x10) + (param_2 & 0xffffffff) * 8);
      uVar4 = uVar5;
      puStack_48 = param_3;
      if ((uVar5 != 0) && ((uVar5 & 1) == 0)) {
        uVar4 = param_1;
        FUN_00547a54(param_1,uVar5,FUN_004904a0);
        *(ulong *)(*(long *)(param_1 + 0x10) + (param_2 & 0xffffffff) * 8) = uVar4;
      }
      FUN_004904a0();
      func_0x005497cc(&lStack_60);
      if (lStack_60 != **(long **)(uVar4 - 1) || (uStack_58 & 0xffffffff) != 0) {
        FUN_005478bc(lStack_60,uStack_58);
        func_0x00549700();
        **(undefined8 **)(extraout_x8 + 0x20) = puStack_48;
      }
      FUN_00547b48(lStack_60,uStack_58,1);
      if (*(long *)(uVar4 + 0xf) == lStack_60 &&
          (uint)uStack_58 == (uint)*(byte *)(*(long *)(uVar4 + 0xf) + 10)) {
        uVar3 = 0;
      }
      else {
        func_0x00549700();
        uVar3 = *(undefined8 *)(extraout_x8_00 + 0x20);
      }
      *puStack_48 = uVar3;
      return;
    }
    lVar2 = *(long *)(param_1 + 0x10);
    *param_3 = *(undefined8 *)(lVar2 + (param_2 & 0xffffffff) * 8);
    *(undefined8 **)(lVar2 + (param_2 & 0xffffffff) * 8) = param_3;
  }
  return;
}



/* Entry: 004900bc; end: 0049011f;  */

void FUN_004900bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_31;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_31;
  uStack_30 = param_2;
  uStack_28 = param_3;
  FUN_00490164(puVar1,&uStack_30);
  FUN_00490120(param_1,puVar1);
  return;
}



/* Entry: 00490120; end: 00490163;  */

uint FUN_00490120(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = (long)&PTR_LOOP_00a01490 + (param_2 ^ *(uint *)(param_1 + 8));
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  return *(int *)(param_1 + 4) - 1U &
         (SUB164(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ (int)uVar1 * -0x14c7d297);
}



/* Entry: 00490164; end: 00490187;  */

void FUN_00490164(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_2[1];
  uStack_20 = *param_2;
  func_0x00490290(&uStack_20);
  return;
}



/* Entry: 00490188; end: 0049025b;  */

ulong FUN_00490188(ulong param_1,ulong *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulong *puVar7;
  ulong uVar8;
  ulong extraout_x8;
  ulong uVar9;
  ulong uVar10;
  ulong extraout_x10;
  
  if (param_3 < 0x11) {
    if (8 < param_3) {
      uVar8 = (*param_2 >> 0x35 | *param_2 << 0xb) + param_1 + 0x9ddfea08eb382d69;
      uVar9 = *(ulong *)((long)param_2 + (param_3 - 8)) ^ param_1 + 0x9ddfea08eb382d69;
      uVar10 = uVar9 * uVar8;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar9;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar8;
      uVar8 = SUB168(auVar1 * auVar5,8);
      goto LAB_0049023c;
    }
    if (param_3 < 4) {
      if (param_3 == 0) {
        return param_1;
      }
      FUN_0049025c(param_2,param_3);
      param_2 = (ulong *)((ulong)param_2 & 0xffffffff);
    }
    else {
      param_2 = (ulong *)((ulong)*(uint *)((long)param_2 + (param_3 - 4)) <<
                          (param_3 * 8 - 0x20 & 0x3f) | (ulong)(uint)*param_2);
    }
  }
  else {
    if (0x400 < param_3) {
      for (; 0x3ff < param_3; param_3 = param_3 - 0x400) {
        puVar7 = param_2;
        FUN_005570b4(param_2,0x400,&PTR_LOOP_00a01490,&UNK_00811108);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = (long)puVar7 + param_1;
        param_1 = SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
                  ((long)puVar7 + param_1) * -0x622015f714c7d297;
        param_2 = param_2 + 0x80;
      }
      if (param_3 < 0x11) {
        if (8 < param_3) {
          uVar8 = (*param_2 >> 0x35 | *param_2 << 0xb) + param_1 + 0x9ddfea08eb382d69;
          uVar10 = *(ulong *)((long)param_2 + (param_3 - 8)) ^ param_1 + 0x9ddfea08eb382d69;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar10;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar8;
          return SUB168(auVar4 * auVar6,8) ^ uVar10 * uVar8;
        }
        if (param_3 < 4) {
          if (param_3 == 0) {
            return param_1;
          }
          param_2 = (ulong *)(ulong)((uint)*(byte *)((long)param_2 + (param_3 >> 1)) <<
                                     (ulong)((uint)((param_3 >> 1) << 3) & 0x1f) |
                                     (uint)(byte)*param_2 |
                                    (uint)*(byte *)((long)param_2 + (param_3 - 1)) <<
                                    (ulong)(((uint)(param_3 - 1) & 3) << 3));
        }
        else {
          param_2 = (ulong *)((ulong)*(uint *)((long)param_2 + (param_3 - 4)) <<
                              (param_3 * 8 - 0x20 & 0x3f) | (ulong)(uint)*param_2);
        }
      }
      else {
        FUN_005570b4(param_2,param_3,&PTR_LOOP_00a01490,&UNK_00811108);
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (long)param_2 + param_1;
      return SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^
             ((long)param_2 + param_1) * -0x622015f714c7d297;
    }
    FUN_005570a0(param_2,param_3);
  }
  func_0x00490bd8((long)param_2 + param_1);
  uVar8 = extraout_x8;
  uVar10 = extraout_x10;
LAB_0049023c:
  return uVar8 ^ uVar10;
}



/* Entry: 0049025c; end: 004902ab;  */

uint FUN_0049025c(byte *param_1,ulong param_2)

{
  return (uint)param_1[param_2 >> 1] << (ulong)((uint)((param_2 & 0x3ffffffe) << 2) & 0x1f) |
         (uint)*param_1 | (uint)param_1[param_2 - 1] << (ulong)(((uint)(param_2 - 1) & 3) << 3);
}



/* Entry: 004902ac; end: 004902d3;  */

ulong FUN_004902ac(long param_1,undefined8 param_2,long param_3)

{
  ulong extraout_x8;
  ulong extraout_x10;
  
  FUN_00490188();
  func_0x00490bd8(param_1 + param_3);
  return extraout_x8 ^ extraout_x10;
}



/* Entry: 004902d4; end: 004902ef;  */

undefined1  [16] FUN_004902d4(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  
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



/* Entry: 004902f0; end: 004903c3;  */

void FUN_004902f0(long param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 *extraout_x8;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 == 1) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 4) = 2;
    lVar7 = param_1;
    func_0x00490c04();
    FUN_004903c4();
    *(long *)(param_1 + 0x10) = lVar7;
    lVar7 = param_1;
    func_0x0049040c();
    *(int *)(param_1 + 8) = (int)lVar7;
    return;
  }
  puVar8 = *(undefined8 **)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 4) = param_2;
  lVar7 = param_1;
  FUN_004903c4();
  *(long *)(param_1 + 0x10) = lVar7;
  uVar2 = *(uint *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 4);
  for (uVar9 = (ulong)uVar2; uVar9 < uVar1; uVar9 = uVar9 + 1) {
    uVar6 = puVar8[uVar9];
    if ((uVar6 == 0) || ((uVar6 & 1) != 0)) {
      if ((uVar6 & 1) != 0) {
        FUN_00547b74(param_1,uVar6 - 1,FUN_004904a0);
      }
    }
    else {
      FUN_0049044c(param_1);
    }
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar9 = (ulong)uVar1 << 3;
    ppuVar4 = &PTR___tlv_bootstrap_00b2c348;
    (*(code *)PTR___tlv_bootstrap_00b2c348)(*(long *)(param_1 + 0x18));
    if (ppuVar4[1] == (undefined *)*extraout_x8) {
      puVar5 = ppuVar4[2];
      uVar6 = 0x3b - LZCOUNT(uVar9);
      bVar3 = puVar5[0x50];
      if (uVar6 < bVar3) {
        lVar7 = *(long *)(puVar5 + 0x58);
        *puVar8 = *(undefined8 *)(lVar7 + uVar6 * 8);
        *(undefined8 **)(lVar7 + uVar6 * 8) = puVar8;
      }
      else {
        if (bVar3 == 0) {
          lVar7 = 0;
        }
        else {
          _memmove(puVar8,*(undefined8 *)(puVar5 + 0x58),(ulong)bVar3 << 3);
          lVar7 = (ulong)(byte)puVar5[0x50] << 3;
        }
        uVar6 = uVar9 >> 3;
        if (0 < (long)((uVar9 & 0xfffffffffffffff8) - lVar7)) {
          _bzero((long)puVar8 + lVar7);
        }
        *(undefined8 **)(puVar5 + 0x58) = puVar8;
        if (0x3f < uVar6) {
          uVar6 = 0x40;
        }
        puVar5[0x50] = (char)uVar6;
      }
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(puVar8);
  return;
}



/* Entry: 004903c4; end: 0049044b;  */

undefined8 * FUN_004903c4(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = &uStack_28;
  FUN_004904e0(puVar1,param_2,0);
  _bzero();
  return puVar1;
}



/* Entry: 0049044c; end: 0049049f;  */

void FUN_0049044c(void)

{
  long *unaff_x20;
  
  func_0x00490ad4();
  do {
    unaff_x20 = (long *)*unaff_x20;
    FUN_004900bc();
    FUN_00490028();
  } while (unaff_x20 != (long *)0x0);
  return;
}



/* Entry: 004904a0; end: 004904c7;  */

void FUN_004904a0(long param_1)

{
  undefined1 uStack_11;
  
  func_0x0049063c(&uStack_11,param_1 + 8);
  return;
}



/* Entry: 004904c8; end: 004904df;  */

void FUN_004904c8(long param_1,undefined8 *param_2,ulong param_3)

{
  byte bVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *extraout_x8;
  long lVar6;
  
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_2);
    return;
  }
  uVar4 = (param_3 & 0xffffffff) << 3;
  ppuVar2 = &PTR___tlv_bootstrap_00b2c348;
  (*(code *)PTR___tlv_bootstrap_00b2c348)(*(long *)(param_1 + 0x18));
  if (ppuVar2[1] == (undefined *)*extraout_x8) {
    puVar3 = ppuVar2[2];
    uVar5 = 0x3b - LZCOUNT(uVar4);
    bVar1 = puVar3[0x50];
    if (uVar5 < bVar1) {
      lVar6 = *(long *)(puVar3 + 0x58);
      *param_2 = *(undefined8 *)(lVar6 + uVar5 * 8);
      *(undefined8 **)(lVar6 + uVar5 * 8) = param_2;
    }
    else {
      if (bVar1 == 0) {
        lVar6 = 0;
      }
      else {
        _memmove(param_2,*(undefined8 *)(puVar3 + 0x58),(ulong)bVar1 << 3);
        lVar6 = (ulong)(byte)puVar3[0x50] << 3;
      }
      uVar5 = uVar4 >> 3;
      if (0 < (long)((uVar4 & 0xfffffffffffffff8) - lVar6)) {
        _bzero((long)param_2 + lVar6);
      }
      *(undefined8 **)(puVar3 + 0x58) = param_2;
      if (0x3f < uVar5) {
        uVar5 = 0x40;
      }
      puVar3[0x50] = (char)uVar5;
    }
    return;
  }
  return;
}



/* Entry: 004904e0; end: 0049053f;  */

void FUN_004904e0(long *param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_38 [24];
  
  if (*param_1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(param_2 << 3);
    return;
  }
  func_0x00490bb8();
  if (param_1 == (long *)0x0) {
    func_0x00490d4c();
    return;
  }
  func_0x00490ce4();
  func_0x00490d3c();
  puVar1 = auStack_38;
  FUN_005558a0();
  pcStack_48 = FUN_00490540;
  puStack_68 = puVar1;
  lStack_60 = param_2;
  uStack_58 = param_3;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_00490564(&puStack_68);
  return;
}



/* Entry: 00490540; end: 00490563;  */

void FUN_00490540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_1;
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_00490564(&uStack_28);
  return;
}



/* Entry: 00490564; end: 004905a7;  */

void FUN_00490564(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong extraout_x8;
  ulong extraout_x10;
  
  uVar1 = param_1[1];
  func_0x00490bd8((long)&PTR_LOOP_00a01490 + *(long *)*param_1);
  FUN_004905cc(extraout_x8 ^ extraout_x10,uVar1);
  func_0x00490d2c();
  return;
}



/* Entry: 004905a8; end: 004905cb;  */

void FUN_004905a8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_004905cc();
  func_0x00490d2c(param_1,*param_3);
  return;
}



/* Entry: 004905cc; end: 004905db;  */

void FUN_004905cc(undefined8 param_1,undefined8 *param_2)

{
  func_0x00490d2c(param_1,*param_2);
  return;
}



/* Entry: 004905dc; end: 004905f3;  */

void FUN_004905dc(void)

{
  func_0x00490d2c();
  return;
}



/* Entry: 004905f4; end: 00490623;  */

ulong FUN_004905f4(long param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong extraout_x8;
  ulong extraout_x9;
  ulong extraout_x10;
  
  func_0x00490bd8(*param_2 + param_1);
  uVar1 = *param_3 + (extraout_x8 ^ extraout_x10);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = extraout_x9;
  return SUB168(auVar2 * auVar3,8) ^ uVar1 * extraout_x9;
}



/* Entry: 00490624; end: 00490663;  */

void FUN_00490624(void)

{
  func_0x00490d2c();
  return;
}



/* Entry: 00490664; end: 004906c3;  */

void FUN_00490664(long *param_1,long *param_2)

{
  undefined1 *puVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar3;
  ulong extraout_x10;
  ulong extraout_x10_00;
  undefined1 auStack_38 [24];
  
  if (*param_1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)((long)param_2 << 3);
    return;
  }
  func_0x00490bb8();
  if (param_1 == (long *)0x0) {
    func_0x00490d4c();
    return;
  }
  func_0x00490ce4();
  func_0x00490d3c();
  puVar1 = auStack_38;
  FUN_005558a0();
  if (puVar1 == (undefined1 *)0x0) {
    return;
  }
  FUN_00550458();
  lVar2 = param_2[1];
  if (0xf < (ulong)(lVar2 - *param_2)) {
    param_2[1] = lVar2 + -0x10;
    if (((lVar2 + -0x10) - param_2[3] < 0x181) && ((ulong)param_2[2] < (ulong)param_2[3])) {
      func_0x00551264();
      for (uVar3 = extraout_x9_00; extraout_x10_00 < uVar3; uVar3 = uVar3 - 0x40) {
        Hint_Prefetch(uVar3,2,0,0);
      }
      param_2[3] = uVar3;
      lVar2 = extraout_x8_00;
    }
    *(undefined1 **)(lVar2 + -0x10) = puVar1;
    *(undefined8 *)(lVar2 + -8) = 0x4906e4;
    return;
  }
  func_0x005504b4();
  lVar2 = param_2[1];
  param_2[1] = lVar2 + -0x10;
  if (((lVar2 + -0x10) - param_2[3] < 0x181) && ((ulong)param_2[2] < (ulong)param_2[3])) {
    func_0x00551264();
    for (uVar3 = extraout_x9; extraout_x10 < uVar3; uVar3 = uVar3 - 0x40) {
      Hint_Prefetch(uVar3,2,0,0);
    }
    param_2[3] = uVar3;
    lVar2 = extraout_x8;
  }
  *(undefined1 **)(lVar2 + -0x10) = puVar1;
  *(undefined8 *)(lVar2 + -8) = 0x4906e4;
  return;
}



/* Entry: 004906c4; end: 00490773;  */

void FUN_004906c4(long param_1,long *param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar2;
  ulong extraout_x10;
  ulong extraout_x10_00;
  
  if (param_1 == 0) {
    return;
  }
  FUN_00550458();
  lVar1 = param_2[1];
  if (0xf < (ulong)(lVar1 - *param_2)) {
    param_2[1] = lVar1 + -0x10;
    if (((lVar1 + -0x10) - param_2[3] < 0x181) && ((ulong)param_2[2] < (ulong)param_2[3])) {
      func_0x00551264();
      for (uVar2 = extraout_x9_00; extraout_x10_00 < uVar2; uVar2 = uVar2 - 0x40) {
        Hint_Prefetch(uVar2,2,0,0);
      }
      param_2[3] = uVar2;
      lVar1 = extraout_x8_00;
    }
    *(long *)(lVar1 + -0x10) = param_1;
    *(undefined8 *)(lVar1 + -8) = 0x4906e4;
    return;
  }
  func_0x005504b4();
  lVar1 = param_2[1];
  param_2[1] = lVar1 + -0x10;
  if (((lVar1 + -0x10) - param_2[3] < 0x181) && ((ulong)param_2[2] < (ulong)param_2[3])) {
    func_0x00551264();
    for (uVar2 = extraout_x9; extraout_x10 < uVar2; uVar2 = uVar2 - 0x40) {
      Hint_Prefetch(uVar2,2,0,0);
    }
    param_2[3] = uVar2;
    lVar1 = extraout_x8;
  }
  *(long *)(lVar1 + -0x10) = param_1;
  *(undefined8 *)(lVar1 + -8) = 0x4906e4;
  return;
}



/* Entry: 00490774; end: 004907db;  */

undefined8 * FUN_00490774(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *unaff_x19;
  
  func_0x00490b18();
  if (param_1 == 0) {
    func_0x00490af0();
  }
  else {
    func_0x00490ab0();
  }
  func_0x00490b68();
  lVar1 = param_3;
  func_0x00499c18();
  *(undefined8 *)(param_1 + 8) = param_2;
  *unaff_x19 = &PTR_FUN_009e9e08;
  if ((*(ulong *)(lVar1 + 8) & 1) != 0) {
    func_0x004999b4();
  }
  lVar1 = param_3 + 0x10;
  func_0x00499e18();
  unaff_x19[2] = lVar1;
  lVar1 = param_3 + 0x18;
  func_0x00499e18();
  unaff_x19[3] = lVar1;
  param_3 = param_3 + 0x20;
  func_0x00499e18();
  unaff_x19[4] = param_3;
  *(undefined4 *)(unaff_x19 + 5) = 0;
  return unaff_x19;
}



/* Entry: 004907dc; end: 00490da3;  */

void FUN_004907dc(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((int)param_2 <= (int)param_1[1]) {
    return;
  }
  uVar2 = *param_1;
  uVar1 = param_1[1];
  plVar4 = *(long **)(param_1 + 2);
  if (uVar1 == 0) {
    if ((int)param_2 < 2) goto LAB_00437980;
  }
  else {
    plVar4 = (long *)plVar4[-1];
    if ((int)param_2 < 2) {
LAB_00437980:
      uVar5 = 2;
      goto LAB_00437998;
    }
    if (0x3ffffffb < (int)uVar1) {
      uVar5 = 0x7fffffff;
      goto LAB_00437998;
    }
  }
  uVar1 = uVar1 * 2 + 2;
  if ((int)uVar1 <= (int)param_2) {
    uVar1 = param_2;
  }
  uVar5 = (ulong)uVar1;
LAB_00437998:
  if (plVar4 == (long *)0x0) {
    plVar3 = (long *)(uVar5 * 4 + 8);
    __Znwm();
  }
  else {
    plVar3 = plVar4;
    func_0x005510f0(plVar4,uVar5 * 4 + 0xf & 0x3fffffff8);
  }
  *plVar3 = (long)plVar4;
  if (0 < (int)param_1[1]) {
    if (0 < (int)uVar2) {
      _memcpy(plVar3 + 1,*(undefined8 *)(param_1 + 2),(ulong)uVar2 << 2);
    }
    FUN_00437a10(param_1);
  }
  param_1[1] = (uint)uVar5;
  *(long **)(param_1 + 2) = plVar3 + 1;
  return;
}



/* Entry: 00490da4; end: 00490dbb;  */

void FUN_00490da4(void)

{
  FUN_004902d4();
  return;
}



/* Entry: 00490dbc; end: 00490e1f;  */

void FUN_00490dbc(void)

{
  return;
}



/* Entry: 00490e20; end: 00490ea3;  */

undefined8 * FUN_00490e20(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009e98e0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00491658();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar1 = param_3 + 0x18;
  func_0x00487c6c(lVar1,param_2);
  param_1[3] = lVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_0049159c(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 0x28);
  return param_1;
}



/* Entry: 00490ea4; end: 00490ed3;  */

long FUN_00490ea4(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_00490ed4(param_1);
  return param_1;
}



/* Entry: 00490ed4; end: 00490f03;  */

void FUN_00490ed4(long param_1)

{
  func_0x00532f74(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_00491300();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00490f04; end: 00490f07;  */

long FUN_00490f04(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_00490ed4(param_1);
  return param_1;
}



/* Entry: 00490f08; end: 00490f1b;  */

void FUN_00490f08(void)

{
  FUN_00490ea4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00490f1c; end: 00490f27;  */

undefined ** FUN_00490f1c(void)

{
  return &PTR_DAT_009e9920;
}



/* Entry: 00490f28; end: 00490fb7;  */

void FUN_00490f28(long param_1)

{
  ulong *puVar1;
  
  FUN_00532fa8(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00490f78(*(undefined8 *)(param_1 + 0x20));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 00490fb8; end: 004910ab;  */

long * FUN_00490fb8(long param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  
  plVar7 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar7 = (long *)((long)&MACH_HEADER.magic + 1);
    func_0x0054dae0(1,*(long *)(param_1 + 0x20),*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x20),
                    param_2,param_3);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    plVar2 = param_3;
    func_0x00487c24(param_3,plVar7);
    plVar7 = (long *)(ulong)*(uint *)(param_1 + 0x28);
    uVar3 = 0x10;
    func_0x00487cbc(0x10,plVar2);
    func_0x00487ce8(plVar7,uVar3);
  }
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar9 + 0x17) < '\0') {
    if (puVar9[1] == 0) goto LAB_00491070;
    puVar9 = (undefined8 *)*puVar9;
  }
  else if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_00491070;
  func_0x00491638(puVar9);
  plVar7 = param_3;
  func_0x0049162c(param_3,3);
LAB_00491070:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar7;
  }
  uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
  if ((long)uVar5 < 0) {
    lVar4 = *(long *)(uVar6 + 8);
    uVar5 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    lVar4 = uVar6 + 8;
  }
  if (*param_3 - (long)plVar7 < (long)(int)uVar5) {
    while( true ) {
      iVar10 = ((int)*param_3 - (int)plVar7) + 0x10;
      iVar8 = (int)uVar5;
      uVar5 = (ulong)(uint)(iVar8 - iVar10);
      if (iVar8 - iVar10 == 0 || iVar8 < iVar10) break;
      func_0x0054f690();
      puVar1 = (undefined1 *)((long)plVar7 + (long)iVar10);
      plVar7 = param_3;
      func_0x0054ed58(param_3,puVar1);
    }
    func_0x0054f690();
    return (long *)((long)plVar7 + (long)iVar8);
  }
  _memcpy(plVar7,lVar4,uVar5 & 0xffffffff);
  return (long *)((long)plVar7 + (long)(int)uVar5);
}



/* Entry: 004910ac; end: 00491153;  */

long FUN_004910ac(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_004910e4;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_004910e4:
    lVar3 = 0;
    goto LAB_004910e8;
  }
  FUN_0048910c();
  lVar3 = uVar1 + 1;
LAB_004910e8:
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    FUN_00491154();
    lVar3 = lVar3 + lVar2 + 1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 00491154; end: 0049117f;  */

long FUN_00491154(long param_1)

{
  FUN_0049145c();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 00491180; end: 00491183;  */

void FUN_00491180(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      FUN_0049159c(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      FUN_00491264();
    }
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00491184; end: 00491263;  */

void FUN_00491184(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      FUN_0049159c(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      FUN_00491264();
    }
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00491264; end: 004912ff;  */

void FUN_00491264(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x10,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x18,uVar1,uVar2);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00491300; end: 0049132f;  */

long FUN_00491300(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_00491330(param_1);
  return param_1;
}



/* Entry: 00491330; end: 00491357;  */

/* WARNING: Possible PIC construction at 0x00491344: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00491348) */

void FUN_00491330(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10) ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(uVar1);
  return;
}



/* Entry: 00491358; end: 0049135b;  */

long FUN_00491358(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_00491330(param_1);
  return param_1;
}



/* Entry: 0049135c; end: 0049136f;  */

void FUN_0049135c(void)

{
  FUN_00491300();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00491370; end: 0049137b;  */

undefined ** FUN_00491370(void)

{
  return &PTR_DAT_009e9970;
}



/* Entry: 0049137c; end: 0049145b;  */

long * FUN_0049137c(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar1 = (long)*(char *)((long)puVar5 + 0x17);
  if (lVar1 < 0) {
    lVar1 = puVar5[1];
    if (lVar1 != 0) {
      puVar5 = (undefined8 *)*puVar5;
      goto LAB_004913c0;
    }
  }
  else if (*(char *)((long)puVar5 + 0x17) != '\0') {
LAB_004913c0:
    func_0x00491638(puVar5,lVar1,param_3,"snapchat.notification.SenderData.sender_user_id");
    param_2 = param_3;
    func_0x0049162c(param_3,1);
  }
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar5 + 0x17) < '\0') {
    if (puVar5[1] == 0) goto LAB_00491420;
    puVar5 = (undefined8 *)*puVar5;
  }
  else if (*(char *)((long)puVar5 + 0x17) == '\0') goto LAB_00491420;
  func_0x00491638(puVar5);
  param_2 = param_3;
  func_0x0049162c(param_3,2);
LAB_00491420:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar2 = (ulong)*(char *)(uVar3 + 0x1f);
  if ((long)uVar2 < 0) {
    lVar1 = *(long *)(uVar3 + 8);
    uVar2 = *(ulong *)(uVar3 + 0x10);
  }
  else {
    lVar1 = uVar3 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar2) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar4 = (int)uVar2;
      uVar2 = (ulong)(uint)(iVar4 - iVar6);
      if (iVar4 - iVar6 == 0 || iVar4 < iVar6) break;
      func_0x0054f690();
      lVar1 = (long)param_2 + (long)iVar6;
      param_2 = param_3;
      func_0x0054ed58(param_3,lVar1);
    }
    func_0x0054f690();
    return (long *)((long)param_2 + (long)iVar4);
  }
  _memcpy(param_2,lVar1,uVar2 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar2);
}



/* Entry: 0049145c; end: 004914eb;  */

long FUN_0049145c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_00491494;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_00491494:
    lVar3 = 0;
    goto LAB_00491498;
  }
  FUN_0048910c();
  lVar3 = uVar1 + 1;
LAB_00491498:
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    FUN_0048910c();
    lVar3 = lVar3 + uVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x20) = (int)lVar3;
  return lVar3;
}



/* Entry: 004914ec; end: 004914ff;  */

void FUN_004914ec(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x10,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x18,uVar1,uVar2);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00491500; end: 0049159b;  */

void FUN_00491500(char *param_1)

{
  char *pcVar1;
  
  if (param_1 == (char *)0x0) {
    pcVar1 = segment_command_00000020.segname;
    __Znwm();
  }
  else {
    pcVar1 = param_1;
    func_0x0049164c();
  }
  *(undefined ***)pcVar1 = &PTR_FUN_009e9890;
  *(char **)(pcVar1 + 8) = param_1;
  *(undefined **)(pcVar1 + 0x10) = &DAT_00b69408;
  *(undefined **)(pcVar1 + 0x18) = &DAT_00b69408;
  *(undefined4 *)(pcVar1 + 0x20) = 0;
  return;
}



/* Entry: 0049159c; end: 00491617;  */

char * FUN_0049159c(char *param_1,long param_2)

{
  char *pcVar1;
  qword qVar2;
  
  if (param_1 == (char *)0x0) {
    pcVar1 = segment_command_00000020.segname;
    __Znwm();
  }
  else {
    pcVar1 = param_1;
    func_0x0049164c();
  }
  *(char **)(pcVar1 + 8) = param_1;
  *(undefined ***)pcVar1 = &PTR_FUN_009e9890;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00491658();
  }
  qVar2 = param_2 + 0x10;
  func_0x00487c6c(qVar2,param_1);
  *(qword *)(pcVar1 + 0x10) = qVar2;
  qVar2 = param_2 + 0x18;
  func_0x00487c6c(qVar2,param_1);
  *(qword *)(pcVar1 + 0x18) = qVar2;
  *(undefined4 *)(pcVar1 + 0x20) = 0;
  return pcVar1;
}



/* Entry: 00491618; end: 0049166b;  */

void FUN_00491618(void)

{
  return;
}



/* Entry: 0049166c; end: 004916e3;  */

void FUN_0049166c(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *unaff_x19;
  
  lVar3 = param_3;
  func_0x00499c18();
  puVar2 = (undefined8 *)(param_1 + 8);
  *puVar2 = param_2;
  *unaff_x19 = &PTR_FUN_009ea6c8;
  if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
    func_0x004999b4();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(unaff_x19 + 2) = uVar1;
  *(undefined4 *)((long)unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x0049a094();
    func_0x0049863c();
  }
  unaff_x19[3] = puVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x0049a088();
    func_0x00498718();
  }
  unaff_x19[4] = puVar2;
  return;
}



/* Entry: 004916e4; end: 0049170f;  */

undefined8 FUN_004916e4(undefined8 param_1)

{
  func_0x00499bbc();
  FUN_00491710(param_1);
  return param_1;
}



/* Entry: 00491710; end: 00491743;  */

void FUN_00491710(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00491cec();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_00496920();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00491744; end: 00491747;  */

undefined8 FUN_00491744(undefined8 param_1)

{
  func_0x00499bbc();
  FUN_00491710(param_1);
  return param_1;
}



/* Entry: 00491748; end: 0049175b;  */

void FUN_00491748(void)

{
  FUN_004916e4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0049175c; end: 00491767;  */

undefined ** FUN_0049175c(void)

{
  return &PTR_DAT_009ea708;
}



/* Entry: 00491768; end: 0049183f;  */

void FUN_00491768(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  
  uVar1 = (uint)param_1[2];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x004917b8(param_1[3]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00491810(param_1[4]);
    }
  }
  func_0x00499d58();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 00491840; end: 0049192f;  */

long * FUN_00491840(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00499a00();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x14);
    func_0x00499af8();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x0049a07c();
    func_0x00499b9c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00499bf0();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 00491930; end: 00491967;  */

long FUN_00491930(long param_1)

{
  long extraout_x8;
  
  FUN_00491f54();
  func_0x00499948();
  return param_1 + extraout_x8;
}



/* Entry: 00491968; end: 0049196b;  */

void FUN_00491968(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00499980();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00499d74();
  }
  func_0x0049a064();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        FUN_0049863c();
        *(ulong **)(unaff_x21 + 0x18) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        func_0x004919f4();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00499ee8();
      if (param_1 == (ulong *)0x0) {
        func_0x00499f7c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00491b58();
      }
    }
  }
  func_0x004999c0();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x004999e0();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 0049196c; end: 00491c6b;  */

void FUN_0049196c(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00499980();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00499d74();
  }
  func_0x0049a064();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        FUN_0049863c();
        *(ulong **)(unaff_x21 + 0x18) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        func_0x004919f4();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00499ee8();
      if (param_1 == (ulong *)0x0) {
        func_0x00499f7c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00491b58();
      }
    }
  }
  func_0x004999c0();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x004999e0();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 00491c6c; end: 00491ceb;  */

void FUN_00491c6c(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  if (*(int *)(param_1 + 0x38) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00499c38();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_00491cc8;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_00492ef8();
    }
  }
  else {
    if (*(int *)(param_1 + 0x38) != 1) goto LAB_00491cc8;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00499c38();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_00491cc8;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_00492a28();
    }
  }
  __ZdlPv();
LAB_00491cc8:
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 00491cec; end: 00491d17;  */

undefined8 FUN_00491cec(undefined8 param_1)

{
  func_0x00499bbc();
  FUN_00491d18(param_1);
  return param_1;
}



/* Entry: 00491d18; end: 00491d67;  */

void FUN_00491d18(void)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  func_0x00499e0c();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_00492670();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_0049244c();
  }
  __ZdlPv();
  if (*(int *)(unaff_x19 + 0x38) == 0) {
    return;
  }
  if (*(int *)(unaff_x19 + 0x38) == 2) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00499c38();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_00491cc8;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_00492ef8();
    }
  }
  else {
    if (*(int *)(unaff_x19 + 0x38) != 1) goto LAB_00491cc8;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00499c38();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_00491cc8;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_00492a28();
    }
  }
  __ZdlPv();
LAB_00491cc8:
  *(undefined4 *)(unaff_x19 + 0x38) = 0;
  return;
}



/* Entry: 00491d68; end: 00491d6b;  */

undefined8 FUN_00491d68(undefined8 param_1)

{
  func_0x00499bbc();
  FUN_00491d18(param_1);
  return param_1;
}



/* Entry: 00491d6c; end: 00491d7f;  */

void FUN_00491d6c(void)

{
  FUN_00491cec();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00491d80; end: 00491d93;  */

undefined8 FUN_00491d80(undefined8 param_1)

{
  func_0x00499bbc();
  return param_1;
}



/* Entry: 00491d94; end: 00491e63;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00491d94(void)

{
  uint uVar1;
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x00499b04();
  func_0x00499f18();
  uVar1 = (uint)unaff_x19[2];
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_00492718(unaff_x19[5]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_0048cb48(unaff_x19[6]);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_0048cb48(unaff_x19[7]);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_00492718(unaff_x19[8]);
    }
  }
  func_0x00499d58();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_00538108();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (*(char *)((long)unaff_x19 + 0x17) < '\0') {
    *(undefined1 *)*unaff_x19 = 0;
    unaff_x19[1] = 0;
    return;
  }
  *(undefined1 *)unaff_x19 = 0;
  *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
  return;
}



/* Entry: 00491e64; end: 00491f53;  */

long * FUN_00491e64(long param_1,long param_2,ulong param_3,char *param_4)

{
  char *pcVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar5;
  long unaff_x22;
  int iVar6;
  
  func_0x00499b60();
  uVar2 = *(uint *)(param_1 + 0x38);
  plVar3 = (long *)(ulong)uVar2;
  if (uVar2 == 1) {
    lVar4 = 0x10;
LAB_00491e9c:
    param_2 = *(long *)(unaff_x21 + 0x30);
    param_3 = (ulong)*(uint *)(param_2 + lVar4);
    func_0x00499a68();
    unaff_x20 = plVar3;
  }
  else if (uVar2 == 2) {
    lVar4 = 0x14;
    goto LAB_00491e9c;
  }
  uVar2 = *(uint *)(unaff_x21 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x20);
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    plVar3 = (long *)((long)&MACH_HEADER.magic + 3);
    func_0x00499a68();
    unaff_x20 = plVar3;
  }
  func_0x00499c8c(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_00491f08;
  }
  else if ((int)param_2 == 0) goto LAB_00491f08;
  param_4 = "snapchat.notification.Display.color_resource";
  func_0x00499c10();
  func_0x00499a88();
  plVar3 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_00491f08:
  if ((uVar2 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x28) + 0x14);
    plVar3 = (long *)((long)&MACH_HEADER.cputype + 1);
    func_0x00499a68();
    unaff_x20 = plVar3;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00499bf0();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00499e38();
  if (*plVar3 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar6 = ((int)*plVar3 - (int)param_4) + 0x10;
      iVar5 = (int)param_3;
      param_3 = (ulong)(uint)(iVar5 - iVar6);
      if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
      func_0x0054f690();
      pcVar1 = (char *)((long)param_4 + (long)iVar6);
      param_4 = (char *)plVar3;
      func_0x0054ed58(plVar3,pcVar1);
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar5);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 00491f54; end: 00492007;  */

void FUN_00491f54(long param_1)

{
  uint uVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  
  func_0x00499a74();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    FUN_0048910c();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00492870(*(undefined8 *)(unaff_x19 + 0x20));
      func_0x00499924();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x004925c8(*(undefined8 *)(unaff_x19 + 0x28));
      func_0x00499924();
    }
  }
  if (*(int *)(unaff_x19 + 0x38) == 2) {
    FUN_00493470(*(undefined8 *)(unaff_x19 + 0x30));
  }
  else {
    if (*(int *)(unaff_x19 + 0x38) != 1) goto LAB_00491fe0;
    func_0x00492aac(*(undefined8 *)(unaff_x19 + 0x30));
  }
  func_0x00499924();
LAB_00491fe0:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00499ff8();
  }
  func_0x00499dc4();
  return;
}



/* Entry: 00492008; end: 0049200b;  */

void FUN_00492008(ulong *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined1 in_ZR;
  ulong *puVar3;
  ulong *puVar4;
  long extraout_x8;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x004999f0();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  puVar3 = puVar4;
  if (((ulong)puVar4 & 1) != 0) {
    func_0x00499e2c();
    puVar3 = unaff_x22;
  }
  func_0x00499b10();
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(param_2 + 8);
  }
  if (lVar5 != 0) {
    if (((ulong)puVar4 & 1) != 0) {
      func_0x00499c68();
    }
    func_0x00499d98();
  }
  func_0x0049a064();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00499ee8();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar3;
        func_0x004987a8();
        unaff_x21[4] = (ulong)param_1;
      }
      else {
        FUN_0049200c();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0049a010();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar3;
        func_0x00498874();
        unaff_x21[5] = (ulong)param_1;
      }
      else {
        func_0x00492138();
      }
    }
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | unaff_w23;
  iVar1 = *(int *)(unaff_x20 + 0x38);
  if (iVar1 == 0) goto LAB_00491b34;
  iVar2 = (int)unaff_x21[7];
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_00491c6c();
    }
    *(int *)(unaff_x21 + 7) = iVar1;
  }
  if (iVar1 == 2) {
    if (iVar2 == 2) {
      param_1 = (ulong *)unaff_x21[6];
      func_0x00499edc(*(undefined4 *)(unaff_x20 + 0x38));
      FUN_00492214();
      goto LAB_00491b34;
    }
    FUN_00498954();
  }
  else {
    if (iVar1 != 1) goto LAB_00491b34;
    if (iVar2 == 1) {
      param_1 = (ulong *)unaff_x21[6];
      func_0x00499e88(*(undefined4 *)(unaff_x20 + 0x38));
      FUN_00492208();
      goto LAB_00491b34;
    }
    FUN_00498904();
  }
  unaff_x21[6] = (ulong)puVar3;
  param_1 = puVar3;
LAB_00491b34:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x004999e0();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 0049200c; end: 00492207;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0049200c(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004999f0();
  uVar2 = *(ulong *)(unaff_x19 + 8);
  if ((uVar2 & 1) != 0) {
    func_0x00499e2c();
  }
  func_0x00499b10();
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((uVar2 & 1) != 0) {
      func_0x00499c68();
    }
    func_0x00499d98();
  }
  func_0x00499c74(*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00499c68();
    }
    func_0x00499fa4();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0049a010();
      if (param_1 == (ulong *)0x0) {
        func_0x00499f84();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_00492964();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        func_0x00499cac();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        FUN_0048ce68();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        func_0x00499cac();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        FUN_0048ce68();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      if (param_1 == (ulong *)0x0) {
        func_0x00499f84();
        *(ulong **)(unaff_x21 + 0x40) = param_1;
      }
      else {
        FUN_00492964();
      }
    }
  }
  func_0x004999c0();
  if ((extraout_x8_01 & 1) != 0) {
    func_0x004999e0();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00492208; end: 00492213;  */

void FUN_00492208(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00492214; end: 0049244b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00492214(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00499980();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00499d74();
  }
  puVar2 = (ulong *)(unaff_x21 + 0x18);
  lVar3 = unaff_x20 + 0x18;
  FUN_00493610();
  func_0x00499c74(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00499c68();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x30);
    func_0x00532e08();
  }
  func_0x00499c74(*(undefined8 *)(unaff_x20 + 0x38));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00499c68();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x38);
    func_0x00532e08();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x40);
      if (puVar2 == (ulong *)0x0) {
        func_0x00499f84();
        *(ulong **)(unaff_x21 + 0x40) = puVar2;
      }
      else {
        FUN_00492964();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x48);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x00498cb0();
        *(ulong **)(unaff_x21 + 0x48) = puVar2;
      }
      else {
        FUN_00493624();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x50);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x00498d14();
        *(ulong **)(unaff_x21 + 0x50) = puVar2;
      }
      else {
        func_0x00493684();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x58);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x00498d88();
        *(ulong **)(unaff_x21 + 0x58) = puVar2;
      }
      else {
        func_0x00493750();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x60);
      if (puVar2 == (ulong *)0x0) {
        func_0x00499cac();
        *(ulong **)(unaff_x21 + 0x60) = puVar2;
      }
      else {
        FUN_0048ce68();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x68);
      if (puVar2 == (ulong *)0x0) {
        func_0x00499cac();
        *(ulong **)(unaff_x21 + 0x68) = puVar2;
      }
      else {
        FUN_0048ce68();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x70);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x00498e2c();
        *(ulong **)(unaff_x21 + 0x70) = puVar2;
      }
      else {
        func_0x00493830();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x78);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_00498eb8();
        *(ulong **)(unaff_x21 + 0x78) = puVar2;
      }
      else {
        FUN_00493924();
      }
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x80);
    if (puVar2 == (ulong *)0x0) {
      FUN_00498f10();
      *(ulong **)(unaff_x21 + 0x80) = unaff_x22;
      puVar2 = unaff_x22;
    }
    else {
      FUN_00493944();
    }
  }
  if (*(char *)(unaff_x20 + 0x88) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x88) = 1;
  }
  if (*(int *)(unaff_x20 + 0x8c) != 0) {
    *(int *)(unaff_x21 + 0x8c) = *(int *)(unaff_x20 + 0x8c);
  }
  func_0x004999c0();
  if ((extraout_x8_01 & 1) == 0) {
    return;
  }
  func_0x004999e0();
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 0049244c; end: 00492477;  */

undefined8 FUN_0049244c(undefined8 param_1)

{
  func_0x00499bbc();
  FUN_00492478(param_1);
  return param_1;
}



/* Entry: 00492478; end: 004924af;  */

void FUN_00492478(void)

{
  long unaff_x19;
  
  func_0x00499e0c();
  func_0x00499ff0();
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_0048cac4();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_0048cac4();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004924b0; end: 004924b3;  */

undefined8 FUN_004924b0(undefined8 param_1)

{
  func_0x00499bbc();
  FUN_00492478(param_1);
  return param_1;
}



/* Entry: 004924b4; end: 004924c7;  */

void FUN_004924b4(void)

{
  FUN_0049244c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004924c8; end: 004924d3;  */

undefined ** FUN_004924c8(void)

{
  return &PTR_DAT_009ea798;
}



/* Entry: 004924d4; end: 0049266b;  */

long * FUN_004924d4(long *param_1,long param_2,ulong param_3,char *param_4)

{
  char *pcVar1;
  uint uVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long unaff_x22;
  int iVar4;
  
  func_0x00499a2c();
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_00492504;
  }
  else if ((int)param_2 != 0) {
LAB_00492504:
    param_4 = "snapchat.notification.LoggedOutDisplay.title";
    func_0x00499c10();
    param_2 = 3;
    param_1 = unaff_x19;
    func_0x00499a88();
    unaff_x20 = param_1;
  }
  func_0x00499c8c(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_00492560;
  }
  else if ((int)param_2 == 0) goto LAB_00492560;
  param_4 = "snapchat.notification.LoggedOutDisplay.body";
  func_0x00499c10();
  func_0x00499a88();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_00492560:
  uVar2 = *(uint *)(unaff_x21 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x28) + 0x38);
    param_1 = (long *)((long)&MACH_HEADER.cputype + 1);
    func_0x00499a68();
    unaff_x20 = param_1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x30) + 0x38);
    param_1 = (long *)((long)&MACH_HEADER.cputype + 2);
    func_0x00499a68();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00499bf0();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x00499e38();
    if (*param_1 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        param_3 = (ulong)(uint)(iVar3 - iVar4);
        if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
        func_0x0054f690();
        pcVar1 = (char *)((long)param_4 + (long)iVar4);
        param_4 = (char *)param_1;
        func_0x0054ed58(param_1,pcVar1);
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return unaff_x20;
}


