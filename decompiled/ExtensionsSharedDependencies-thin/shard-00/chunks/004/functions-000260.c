/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0051f724; end: 0051f743;  */

long FUN_0051f724(long param_1)

{
  func_0x0052325c();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0051f2e8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 0051f744; end: 0051f783;  */

void FUN_0051f744(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x005234d0();
  FUN_00532fa8(unaff_x19 + 0x18);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  FUN_0051f4cc();
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 0051f784; end: 0051f8a3;  */

qword * FUN_0051f784(long param_1,qword *param_2,qword *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  qword *pqVar3;
  qword *pqVar4;
  ulong uVar5;
  long lVar6;
  long extraout_x8;
  int iVar7;
  ulong unaff_x22;
  int iVar8;
  
  uVar2 = *(uint *)(param_1 + 0x34);
  pqVar3 = (qword *)(ulong)uVar2;
  pqVar4 = param_2;
  if (uVar2 < 7 && (1 << (ulong)(uVar2 & 0x1f) & 0x5eU) != 0) {
    pqVar4 = *(qword **)(param_1 + 0x28);
    func_0x0052322c(pqVar3,pqVar4,*(undefined4 *)((long)pqVar4 + 0x14),param_2);
    param_2 = pqVar3;
  }
  uVar5 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar5 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar5 + 8);
  }
  if (lVar6 != 0) {
    pqVar4 = (qword *)((long)&MACH_HEADER.cputype + 3);
    pqVar3 = param_3;
    func_0x00523428();
    param_2 = pqVar3;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    func_0x00523458();
    param_2 = (qword *)(ulong)*(uint *)(param_1 + 0x20);
    pqVar4 = &segment_command_00000020.vmsize;
    func_0x00487cbc(0x40,pqVar3);
    func_0x00487cbc();
  }
  func_0x005232f4(*(undefined8 *)(param_1 + 0x18));
  if ((long)pqVar4 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_0051f86c;
  }
  else if ((int)pqVar4 == 0) goto LAB_0051f86c;
  func_0x0052326c();
  param_2 = param_3;
  func_0x00523428(param_3,9);
  uVar5 = unaff_x22;
LAB_0051f86c:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x005232bc();
  if ((long)uVar5 < 0) {
    lVar6 = *(long *)(extraout_x8 + 8);
    uVar5 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar6 = extraout_x8 + 8;
  }
  if ((long)(int)uVar5 <= (long)(*param_3 - (long)param_2)) {
    _memcpy(param_2,lVar6,uVar5 & 0xffffffff);
    return (qword *)((long)param_2 + (long)(int)uVar5);
  }
  while( true ) {
    iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
    iVar7 = (int)uVar5;
    uVar5 = (ulong)(uint)(iVar7 - iVar8);
    if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
    func_0x0054f690();
    puVar1 = (undefined1 *)((long)param_2 + (long)iVar8);
    param_2 = param_3;
    func_0x0054ed58(param_3,puVar1);
  }
  func_0x0054f690();
  return (qword *)((long)param_2 + (long)iVar7);
}



/* Entry: 0051f8a4; end: 0051f9ab;  */

long FUN_0051f8a4(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long lVar2;
  long extraout_x9;
  long lVar3;
  
  lVar2 = param_1;
  func_0x005232d0(*(undefined8 *)(param_1 + 0x10));
  if (extraout_x8 < 0) {
    if (*(long *)(lVar2 + 8) != 0) goto LAB_0051f8c4;
LAB_0051f8d8:
    lVar3 = 0;
  }
  else {
    if (extraout_x8 == 0) goto LAB_0051f8d8;
LAB_0051f8c4:
    func_0x00487c3c();
    lVar3 = lVar2 + 1;
  }
  func_0x005232d0(*(undefined8 *)(param_1 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    FUN_0048910c();
    func_0x005232a8();
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x20)) * -9 + 0x1a0U >> 6);
  }
  switch(*(undefined4 *)(param_1 + 0x34)) {
  case 1:
    FUN_005200f4(*(undefined8 *)(param_1 + 0x28));
    break;
  case 2:
    func_0x005202b8(*(undefined8 *)(param_1 + 0x28));
    break;
  case 3:
    FUN_005207b4(*(undefined8 *)(param_1 + 0x28));
    break;
  case 4:
    FUN_00520cc0(*(undefined8 *)(param_1 + 0x28));
    break;
  default:
    goto LAB_0051f980;
  case 6:
    func_0x00520ea0(*(undefined8 *)(param_1 + 0x28));
  }
  func_0x00523118();
LAB_0051f980:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x005232e8();
    lVar2 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x30) = (int)lVar3;
  return lVar3;
}



/* Entry: 0051f9ac; end: 0051f9af;  */

void FUN_0051f9ac(ulong *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x005231f8();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  func_0x0052329c(*(undefined8 *)(unaff_x20 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00523290();
    }
    param_1 = unaff_x21 + 2;
    func_0x00532e08();
  }
  func_0x0052329c(*(undefined8 *)(unaff_x20 + 0x18));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00523290();
    }
    func_0x00523484();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 4) = *(int *)(unaff_x20 + 0x20);
  }
  iVar1 = *(int *)(unaff_x20 + 0x34);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x34);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_0051f4cc();
      }
      *(int *)((long)unaff_x21 + 0x34) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x00523280();
        FUN_0051fb88();
        goto LAB_0051fb60;
      }
      func_0x005233a4();
      func_0x005229c0();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x00523280();
        func_0x0051fbfc();
        goto LAB_0051fb60;
      }
      func_0x005233a4();
      func_0x00522a3c();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x00523280();
        func_0x0051fc8c();
        goto LAB_0051fb60;
      }
      func_0x005233a4();
      FUN_00522ac8();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x00523280();
        func_0x0051fdfc();
        goto LAB_0051fb60;
      }
      func_0x005233a4();
      func_0x00522c34();
      break;
    default:
      goto LAB_0051fb60;
    case 6:
      if (iVar2 == iVar1) {
        func_0x00523280();
        func_0x0051fec4();
        goto LAB_0051fb60;
      }
      func_0x005233a4();
      func_0x00522ce8();
    }
    unaff_x21[5] = (ulong)param_1;
  }
LAB_0051fb60:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00523208();
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



/* Entry: 0051f9b0; end: 0051fb87;  */

void FUN_0051f9b0(ulong *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x005231f8();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  func_0x0052329c(*(undefined8 *)(unaff_x20 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00523290();
    }
    param_1 = unaff_x21 + 2;
    func_0x00532e08();
  }
  func_0x0052329c(*(undefined8 *)(unaff_x20 + 0x18));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00523290();
    }
    func_0x00523484();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 4) = *(int *)(unaff_x20 + 0x20);
  }
  iVar1 = *(int *)(unaff_x20 + 0x34);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x34);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_0051f4cc();
      }
      *(int *)((long)unaff_x21 + 0x34) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x00523280();
        FUN_0051fb88();
        goto LAB_0051fb60;
      }
      func_0x005233a4();
      func_0x005229c0();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x00523280();
        func_0x0051fbfc();
        goto LAB_0051fb60;
      }
      func_0x005233a4();
      func_0x00522a3c();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x00523280();
        func_0x0051fc8c();
        goto LAB_0051fb60;
      }
      func_0x005233a4();
      FUN_00522ac8();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x00523280();
        func_0x0051fdfc();
        goto LAB_0051fb60;
      }
      func_0x005233a4();
      func_0x00522c34();
      break;
    default:
      goto LAB_0051fb60;
    case 6:
      if (iVar2 == iVar1) {
        func_0x00523280();
        func_0x0051fec4();
        goto LAB_0051fb60;
      }
      func_0x005233a4();
      func_0x00522ce8();
    }
    unaff_x21[5] = (ulong)param_1;
  }
LAB_0051fb60:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00523208();
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



/* Entry: 0051fb88; end: 0051fbfb;  */

void FUN_0051fb88(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x005231f8();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      FUN_00522d70();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x0051f2c0();
      puVar1 = puVar2;
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x00523508();
  if ((extraout_x8 & 1) != 0) {
    func_0x00523208();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 0051fbfc; end: 0051ff4f;  */

void FUN_0051fbfc(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x005231f8();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x00523410();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x00523324();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00523534();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x005234fc();
      if (param_1 == (ulong *)0x0) {
        FUN_00522d70();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x0051f2c0();
      }
    }
  }
  func_0x00523190();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00523208();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 0051ff50; end: 0051ff83;  */

void FUN_0051ff50(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x8_00;
  long unaff_x19;
  ulong *unaff_x20;
  ulong *unaff_x21;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x005232dc();
  FUN_0051f744();
  puVar3 = unaff_x20;
  lVar4 = unaff_x19;
  func_0x005231f8();
  uVar5 = *(ulong *)(unaff_x19 + 8);
  func_0x0052329c(unaff_x20[2]);
  lVar6 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar6 = *(long *)(lVar4 + 8);
  }
  if (lVar6 != 0) {
    if ((uVar5 & 1) != 0) {
      func_0x00523290();
    }
    puVar3 = unaff_x21 + 2;
    func_0x00532e08();
  }
  func_0x0052329c(unaff_x20[3]);
  lVar6 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar6 = *(long *)(lVar4 + 8);
  }
  if (lVar6 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00523290();
    }
    func_0x00523484();
  }
  if ((int)unaff_x20[4] != 0) {
    *(int *)(unaff_x21 + 4) = (int)unaff_x20[4];
  }
  iVar1 = *(int *)((long)unaff_x20 + 0x34);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x34);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        puVar3 = unaff_x21;
        FUN_0051f4cc();
      }
      *(int *)((long)unaff_x21 + 0x34) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x00523280();
        FUN_0051fb88();
        goto LAB_0051fb60;
      }
      func_0x005233a4();
      func_0x005229c0();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x00523280();
        func_0x0051fbfc();
        goto LAB_0051fb60;
      }
      func_0x005233a4();
      func_0x00522a3c();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x00523280();
        func_0x0051fc8c();
        goto LAB_0051fb60;
      }
      func_0x005233a4();
      FUN_00522ac8();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x00523280();
        func_0x0051fdfc();
        goto LAB_0051fb60;
      }
      func_0x005233a4();
      func_0x00522c34();
      break;
    default:
      goto LAB_0051fb60;
    case 6:
      if (iVar2 == iVar1) {
        func_0x00523280();
        func_0x0051fec4();
        goto LAB_0051fb60;
      }
      func_0x005233a4();
      func_0x00522ce8();
    }
    unaff_x21[5] = (ulong)puVar3;
  }
LAB_0051fb60:
  if ((unaff_x20[1] & 1) != 0) {
    func_0x00523208();
    if ((*puVar3 & 1) == 0) {
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



/* Entry: 0051ff84; end: 0051ffdb;  */

void FUN_0051ff84(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 8) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_2 + 0x20) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_2 + 0x34) = uVar1;
  return;
}



/* Entry: 0051ffdc; end: 0052000f;  */

long FUN_0051ffdc(long param_1)

{
  func_0x0052325c();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0051f2e8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00520010; end: 00520023;  */

void FUN_00520010(void)

{
  FUN_0051ffdc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00520024; end: 0052002f;  */

undefined ** FUN_00520024(void)

{
  return &PTR_DAT_00a001f0;
}



/* Entry: 00520030; end: 0052006f;  */

void FUN_00520030(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0052351c();
  if ((extraout_x8 & 1) != 0) {
    func_0x0051f37c(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
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



/* Entry: 00520070; end: 005200f3;  */

long * FUN_00520070(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00523234();
  if ((int)param_1[4] != 0) {
    func_0x005231bc();
    func_0x00523350();
    func_0x00523300();
    param_4 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x14);
    param_4 = (long *)((long)&MACH_HEADER.magic + 2);
    func_0x0052322c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x005232bc();
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



/* Entry: 005200f4; end: 00520163;  */

void FUN_005200f4(void)

{
  int iVar1;
  int extraout_w8;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0052351c();
  if ((extraout_x8 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    FUN_00520164();
    iVar1 = iVar1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x00523274((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x20)) * 9);
    iVar1 = iVar1 + extraout_w8 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x005232e8();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 00520164; end: 0052017f;  */

long FUN_00520164(long param_1)

{
  long extraout_x8;
  
  FUN_0051f428();
  func_0x0052313c();
  return param_1 + extraout_x8;
}



/* Entry: 00520180; end: 00520183;  */

void FUN_00520180(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x005231f8();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      FUN_00522d70();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x0051f2c0();
      puVar1 = puVar2;
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x00523508();
  if ((extraout_x8 & 1) != 0) {
    func_0x00523208();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 00520184; end: 005201c7;  */

long FUN_00520184(long param_1)

{
  func_0x0052325c();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00523568();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_0051f2e8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 005201c8; end: 005201db;  */

void FUN_005201c8(void)

{
  FUN_00520184();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005201dc; end: 005201e7;  */

undefined ** FUN_005201dc(void)

{
  return &PTR_DAT_00a00238;
}



/* Entry: 005201e8; end: 0052023b;  */

void FUN_005201e8(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00523600(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0051f37c(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 0052023c; end: 00520333;  */

long * FUN_0052023c(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00523234();
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x20);
    param_4 = (long *)((long)&MACH_HEADER.magic + 1);
    func_0x0052322c();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x14);
    param_4 = (long *)((long)&MACH_HEADER.magic + 2);
    func_0x0052322c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x005232bc();
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



/* Entry: 00520334; end: 00520337;  */

void FUN_00520334(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x005231f8();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x00523410();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x00523324();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00523534();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x005234fc();
      if (param_1 == (ulong *)0x0) {
        FUN_00522d70();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x0051f2c0();
      }
    }
  }
  func_0x00523190();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00523208();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 00520338; end: 005203c3;  */

long FUN_00520338(long param_1)

{
  func_0x0052325c();
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_00521fc4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_00522114();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_00523568();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_0051dda4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_0051c98c();
  }
  __ZdlPv();
  FUN_0048ed64(param_1 + 0x48);
  FUN_005225f8(param_1 + 0x30);
  FUN_0048ed64(param_1 + 0x18);
  return param_1;
}



/* Entry: 005203c4; end: 005203d7;  */

void FUN_005203c4(void)

{
  FUN_00520338();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005203d8; end: 005203e3;  */

undefined ** FUN_005203d8(void)

{
  return &PTR_DAT_00a00288;
}



/* Entry: 005203e4; end: 0052052b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_005203e4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    FUN_00437de0(param_1 + 0x30);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00520494(*(undefined8 *)(param_1 + 0x60));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x005204c0(*(undefined8 *)(param_1 + 0x68));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00523600(*(undefined8 *)(param_1 + 0x70));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_0051ddf8(*(undefined8 *)(param_1 + 0x78));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_0051ca4c(*(undefined8 *)(param_1 + 0x80));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined2 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 0052052c; end: 00520787;  */

dword * FUN_0052052c(dword *param_1,undefined8 param_2,dword *param_3,dword *param_4)

{
  int *piVar1;
  ulong *puVar2;
  dword *pdVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  dword *unaff_x19;
  long unaff_x20;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  func_0x00523234();
  uVar7 = param_1[10];
  if (uVar7 != 0) {
    func_0x005231bc();
    puVar5 = (undefined1 *)((long)param_1 + 2);
    *(undefined1 *)param_1 = 10;
    for (; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
      puVar5[-1] = (byte)uVar7 | 0x80;
      puVar5 = puVar5 + 1;
    }
    puVar5[-1] = (byte)uVar7;
    piVar8 = *(int **)(unaff_x20 + 0x20);
    piVar1 = piVar8 + *(int *)(unaff_x20 + 0x18);
    do {
      func_0x005231bc();
      uVar6 = (ulong)*piVar8;
      param_4 = (dword *)((long)param_1 + 1);
      while (0x7f < uVar6) {
        func_0x005234dc();
        uVar6 = extraout_x8;
      }
      piVar8 = piVar8 + 1;
      *(char *)((long)param_4 + -1) = (char)uVar6;
    } while (piVar8 < piVar1);
  }
  if (*(char *)(unaff_x20 + 0x90) == '\x01') {
    func_0x005231bc();
    func_0x00523430();
    func_0x005231c8();
    param_4 = param_1;
  }
  iVar11 = *(int *)(unaff_x20 + 0x38);
  for (iVar10 = 0; iVar11 != iVar10; iVar10 = iVar10 + 1) {
    uVar6 = *(ulong *)(unaff_x20 + 0x30);
    puVar2 = (ulong *)(unaff_x20 + 0x30);
    if ((uVar6 & 1) != 0) {
      puVar2 = (ulong *)(uVar6 + (long)iVar10 * 8 + 7);
    }
    param_3 = (dword *)(ulong)*(uint *)(*puVar2 + 0x14);
    param_1 = (dword *)((long)&MACH_HEADER.magic + 3);
    func_0x0052322c();
    param_4 = param_1;
  }
  uVar7 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar7 & 1) != 0) {
    param_3 = (dword *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x60) + 0x18);
    param_1 = &MACH_HEADER.cputype;
    func_0x0052322c();
    param_4 = param_1;
  }
  if ((uVar7 >> 1 & 1) != 0) {
    param_3 = (dword *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x68) + 0x14);
    param_1 = (dword *)((long)&MACH_HEADER.cputype + 1);
    func_0x0052322c();
    param_4 = param_1;
  }
  if ((uVar7 >> 2 & 1) != 0) {
    param_3 = (dword *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x70) + 0x20);
    param_1 = (dword *)((long)&MACH_HEADER.cputype + 3);
    func_0x0052322c();
    param_4 = param_1;
  }
  uVar9 = *(uint *)(unaff_x20 + 0x58);
  if (uVar9 != 0) {
    func_0x005231bc();
    puVar5 = (undefined1 *)((long)param_1 + 2);
    *(undefined1 *)param_1 = 0x42;
    for (; 0x7f < uVar9; uVar9 = uVar9 >> 7) {
      puVar5[-1] = (byte)uVar9 | 0x80;
      puVar5 = puVar5 + 1;
    }
    puVar5[-1] = (byte)uVar9;
    piVar8 = *(int **)(unaff_x20 + 0x50);
    piVar1 = piVar8 + *(int *)(unaff_x20 + 0x48);
    do {
      func_0x005231bc();
      uVar6 = (ulong)*piVar8;
      param_4 = (dword *)((long)param_1 + 1);
      while (0x7f < uVar6) {
        func_0x005234dc();
        uVar6 = extraout_x8_00;
      }
      piVar8 = piVar8 + 1;
      *(char *)((long)param_4 + -1) = (char)uVar6;
    } while (piVar8 < piVar1);
  }
  if ((uVar7 >> 3 & 1) != 0) {
    param_3 = (dword *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x78) + 0x24);
    param_1 = (dword *)((long)&MACH_HEADER.cpusubtype + 1);
    func_0x0052322c();
    param_4 = param_1;
  }
  if ((uVar7 >> 4 & 1) != 0) {
    param_3 = (dword *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x80) + 0x14);
    param_1 = (dword *)((long)&MACH_HEADER.cpusubtype + 2);
    func_0x0052322c();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x91) == '\x01') {
    func_0x005231bc();
    param_4 = &segment_command_00000020.maxprot;
    func_0x00487cbc(0x58,param_1);
    func_0x005231c8();
  }
  pdVar3 = param_4;
  if (*(long *)(unaff_x20 + 0x88) != 0) {
    pdVar3 = unaff_x19;
    FUN_00520788();
    param_3 = param_4;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return pdVar3;
  }
  func_0x005232bc();
  if ((long)param_3 < 0) {
    lVar4 = *(long *)(extraout_x8_01 + 8);
    param_3 = *(dword **)(extraout_x8_01 + 0x10);
  }
  else {
    lVar4 = extraout_x8_01 + 8;
  }
  if ((long)(int)param_3 <= *(long *)unaff_x19 - (long)pdVar3) {
    _memcpy(pdVar3,lVar4,(ulong)param_3 & 0xffffffff);
    return (dword *)((long)pdVar3 + (long)(int)param_3);
  }
  while( true ) {
    iVar11 = ((int)*(undefined8 *)unaff_x19 - (int)pdVar3) + 0x10;
    iVar10 = (int)param_3;
    uVar7 = iVar10 - iVar11;
    param_3 = (dword *)(ulong)uVar7;
    if (uVar7 == 0 || iVar10 < iVar11) break;
    func_0x0054f690();
    pdVar3 = unaff_x19;
    func_0x0054ed58();
  }
  func_0x0054f690();
  return (dword *)((long)pdVar3 + (long)iVar10);
}



/* Entry: 00520788; end: 005207b3;  */

void FUN_00520788(undefined8 param_1)

{
  dword *pdVar1;
  ulong unaff_x19;
  
  func_0x0052330c();
  pdVar1 = &segment_command_00000020.nsects;
  func_0x00487cbc(0x60,param_1);
  for (; 0x7f < unaff_x19; unaff_x19 = unaff_x19 >> 7) {
    *(byte *)pdVar1 = (byte)unaff_x19 | 0x80;
    pdVar1 = (dword *)((long)pdVar1 + 1);
  }
  *(byte *)pdVar1 = (byte)unaff_x19;
  return;
}



/* Entry: 005207b4; end: 0052096b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_005207b4(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_w8;
  undefined4 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  int extraout_w9;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x10;
  ulong uVar7;
  long extraout_x10_00;
  long lVar8;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    do {
      func_0x0052332c();
    } while (extraout_x10 != 0);
  }
  func_0x005233ec();
  lVar6 = 0;
  if (extraout_x8 != 0) {
    lVar6 = extraout_x8 + extraout_x9 + 1;
  }
  *(int *)(param_1 + 0x28) = (int)extraout_x8;
  uVar7 = *(ulong *)(param_1 + 0x30);
  lVar6 = lVar6 + *(int *)(param_1 + 0x38);
  puVar1 = (ulong *)(param_1 + 0x30);
  if ((uVar7 & 1) != 0) {
    puVar1 = (ulong *)(uVar7 + 7);
  }
  for (lVar8 = (long)*(int *)(param_1 + 0x38) << 3; lVar8 != 0; lVar8 = lVar8 + -8) {
    uVar7 = *puVar1;
    FUN_0051ebd8();
    lVar6 = uVar7 + lVar6 + (ulong)((int)LZCOUNT((int)uVar7) * -9 + 0x160U >> 6);
    puVar1 = puVar1 + 1;
  }
  lVar8 = 0;
  if (*(int *)(param_1 + 0x48) != 0) {
    do {
      func_0x0052332c();
      lVar8 = extraout_x8_00;
    } while (extraout_x10_00 != 0);
  }
  iVar3 = (int)lVar8 + (int)lVar6;
  uVar5 = 0;
  if (lVar8 != 0) {
    func_0x005233ec();
    iVar3 = iVar3 + extraout_w9 + 1;
    uVar5 = extraout_w8;
  }
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 0x1f) != 0) {
    if ((uVar2 & 1) != 0) {
      FUN_005220b0(*(undefined8 *)(param_1 + 0x60));
      func_0x0052313c();
      func_0x00523394();
    }
    if ((uVar2 >> 1 & 1) != 0) {
      FUN_0052246c(*(undefined8 *)(param_1 + 0x68));
      func_0x0052313c();
      func_0x00523394();
    }
    if ((uVar2 >> 2 & 1) != 0) {
      iVar4 = (int)*(undefined8 *)(param_1 + 0x70);
      FUN_0051ec84();
      iVar3 = iVar3 + iVar4 + 1;
    }
    if ((uVar2 >> 3 & 1) != 0) {
      iVar4 = (int)*(undefined8 *)(param_1 + 0x78);
      FUN_004d90ec();
      iVar3 = iVar3 + iVar4 + 1;
    }
    if ((uVar2 >> 4 & 1) != 0) {
      FUN_0051d00c(*(undefined8 *)(param_1 + 0x80));
      func_0x0052313c();
      func_0x00523394();
    }
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    iVar3 = ((int)LZCOUNT(*(long *)(param_1 + 0x88)) * -9 + 0x2c0U >> 6) + iVar3;
  }
  iVar3 = iVar3 + (uint)*(byte *)(param_1 + 0x90) * 2 + (uint)*(byte *)(param_1 + 0x91) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x005232e8();
    lVar6 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar6 = *(long *)(extraout_x9_00 + 0x10);
    }
    iVar3 = (int)lVar6 + iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return;
}



/* Entry: 0052096c; end: 0052097f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0052096c(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar3;
  
  func_0x005231f8();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    func_0x00523410();
  }
  FUN_0048ebf4(unaff_x21 + 0x18,unaff_x20 + 0x18);
  FUN_0052096c(unaff_x21 + 0x30,unaff_x20 + 0x30);
  puVar2 = (ulong *)(unaff_x21 + 0x48);
  FUN_0048ebf4();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x60);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_00522da4();
        *(ulong **)(unaff_x21 + 0x60) = puVar2;
      }
      else {
        FUN_00520980();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x68);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_00522e0c();
        *(ulong **)(unaff_x21 + 0x68) = puVar2;
      }
      else {
        FUN_005209e0();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x70);
      if (puVar2 == (ulong *)0x0) {
        func_0x00523324();
        *(ulong **)(unaff_x21 + 0x70) = puVar2;
      }
      else {
        func_0x00523534();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x78);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x004d927c();
        *(ulong **)(unaff_x21 + 0x78) = puVar2;
      }
      else {
        FUN_0051dfe4();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x80);
      if (puVar2 == (ulong *)0x0) {
        FUN_00522eec();
        *(ulong **)(unaff_x21 + 0x80) = puVar3;
        puVar2 = puVar3;
      }
      else {
        FUN_0051d2a8();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x88) != 0) {
    *(long *)(unaff_x21 + 0x88) = *(long *)(unaff_x20 + 0x88);
  }
  if (*(char *)(unaff_x20 + 0x90) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x90) = 1;
  }
  if (*(char *)(unaff_x20 + 0x91) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x91) = 1;
  }
  func_0x00523190();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00523208();
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 00520980; end: 005209df;  */

void FUN_00520980(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x005233c8();
  func_0x0052329c(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00523290();
    }
    func_0x00532e08(unaff_x19 + 0x10);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 005209e0; end: 00520aff;  */

void FUN_005209e0(void)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar4;
  
  func_0x005231f8();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar4 & 1) != 0) {
    func_0x00523410();
  }
  puVar1 = (ulong *)(unaff_x21 + 0x18);
  lVar2 = unaff_x20 + 0x18;
  FUN_0048cf14();
  func_0x0052329c(*(undefined8 *)(unaff_x20 + 0x30));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00523290();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x30);
    func_0x00532e08();
  }
  func_0x0052329c(*(undefined8 *)(unaff_x20 + 0x38));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00523290();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x38);
    func_0x00532e08();
  }
  func_0x0052329c(*(undefined8 *)(unaff_x20 + 0x40));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00523290();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x40);
    func_0x00532e08();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x48);
    if (puVar1 == (ulong *)0x0) {
      func_0x005230dc();
      *(ulong **)(unaff_x21 + 0x48) = puVar4;
      puVar1 = puVar4;
    }
    else {
      func_0x0051e0d8();
    }
  }
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    *(long *)(unaff_x21 + 0x50) = *(long *)(unaff_x20 + 0x50);
  }
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    *(long *)(unaff_x21 + 0x58) = *(long *)(unaff_x20 + 0x58);
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    *(long *)(unaff_x21 + 0x60) = *(long *)(unaff_x20 + 0x60);
  }
  if (*(char *)(unaff_x20 + 0x68) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x68) = 1;
  }
  func_0x00523190();
  if ((extraout_x8_02 & 1) != 0) {
    func_0x00523208();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 00520b00; end: 00520b47;  */

long FUN_00520b00(long param_1)

{
  func_0x0052325c();
  func_0x00523438();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_00523568();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_0051f2e8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00520b48; end: 00520b5b;  */

void FUN_00520b48(void)

{
  FUN_00520b00();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00520b5c; end: 00520b67;  */

undefined ** FUN_00520b5c(void)

{
  return &PTR_DAT_00a002d8;
}



/* Entry: 00520b68; end: 00520bbb;  */

void FUN_00520b68(void)

{
  uint uVar1;
  long unaff_x19;
  ulong *puVar2;
  
  func_0x005234c4();
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x005234b4();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0051f37c(*(undefined8 *)(unaff_x19 + 0x28));
    }
  }
  puVar2 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 00520bbc; end: 00520cbf;  */

long * FUN_00520bbc(long *param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long extraout_x8;
  long *plVar7;
  int iVar8;
  long *unaff_x22;
  int iVar9;
  
  uVar2 = *(uint *)(param_1 + 2);
  plVar3 = param_1;
  plVar6 = param_3;
  plVar7 = param_2;
  if ((uVar2 & 1) != 0) {
    param_2 = (long *)param_1[4];
    plVar6 = (long *)(ulong)*(uint *)(param_2 + 4);
    plVar3 = (long *)((long)&MACH_HEADER.magic + 1);
    func_0x0052322c();
    plVar7 = plVar3;
  }
  func_0x005232f4(param_1[3]);
  if ((long)param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_00520c40;
  }
  else if ((int)param_2 == 0) goto LAB_00520c40;
  func_0x0052326c();
  plVar3 = param_3;
  func_0x00523428(param_3,2);
  plVar6 = unaff_x22;
  plVar7 = plVar3;
LAB_00520c40:
  if ((uVar2 >> 1 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(param_1[5] + 0x14);
    plVar3 = (long *)((long)&MACH_HEADER.magic + 3);
    func_0x0052322c();
    plVar7 = plVar3;
  }
  if ((int)param_1[6] != 0) {
    func_0x00523458();
    plVar7 = (long *)(ulong)*(uint *)(param_1 + 6);
    uVar4 = 0x20;
    func_0x00487cbc(0x20,plVar3);
    func_0x00487ce8(plVar7,uVar4);
  }
  if ((param_1[1] & 1U) == 0) {
    return plVar7;
  }
  func_0x005232bc();
  if ((long)plVar6 < 0) {
    lVar5 = *(long *)(extraout_x8 + 8);
    plVar6 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar5 = extraout_x8 + 8;
  }
  if (*param_3 - (long)plVar7 < (long)(int)plVar6) {
    while( true ) {
      iVar9 = ((int)*param_3 - (int)plVar7) + 0x10;
      iVar8 = (int)plVar6;
      plVar6 = (long *)(ulong)(uint)(iVar8 - iVar9);
      if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
      func_0x0054f690();
      puVar1 = (undefined1 *)((long)plVar7 + (long)iVar9);
      plVar7 = param_3;
      func_0x0054ed58(param_3,puVar1);
    }
    func_0x0054f690();
    return (long *)((long)plVar7 + (long)iVar8);
  }
  _memcpy(plVar7,lVar5,(ulong)plVar6 & 0xffffffff);
  return (long *)((long)plVar7 + (long)(int)plVar6);
}



/* Entry: 00520cc0; end: 00520d6b;  */

void FUN_00520cc0(long param_1)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  
  lVar2 = param_1;
  func_0x005232d0(*(undefined8 *)(param_1 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    FUN_0048910c();
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x005234bc();
      func_0x005232a8();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_00520164(*(undefined8 *)(param_1 + 0x28));
      func_0x005232a8();
    }
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    func_0x00523274((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * 9);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x005232e8();
  }
  func_0x005234f0();
  return;
}



/* Entry: 00520d6c; end: 00520d6f;  */

void FUN_00520d6c(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x005231f8();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  func_0x0052329c(*(undefined8 *)(unaff_x20 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      func_0x00523290();
    }
    func_0x00523484();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x005234fc();
      if (param_1 == (ulong *)0x0) {
        func_0x00523324();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00523534();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        FUN_00522d70();
        *(ulong **)(unaff_x21 + 0x28) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x0051f2c0();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x21 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  func_0x00523190();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x00523208();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 00520d70; end: 00520db3;  */

long FUN_00520d70(long param_1)

{
  func_0x0052325c();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00523568();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_00523568();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00520db4; end: 00520dc7;  */

void FUN_00520db4(void)

{
  FUN_00520d70();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00520dc8; end: 00520dd3;  */

undefined ** FUN_00520dc8(void)

{
  return &PTR_DAT_00a00328;
}



/* Entry: 00520dd4; end: 00520e23;  */

void FUN_00520dd4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00523600(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x005234b4();
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 00520e24; end: 00520f17;  */

long * FUN_00520e24(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00523234();
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x20);
    param_4 = (long *)((long)&MACH_HEADER.magic + 1);
    func_0x0052322c();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x20);
    param_4 = (long *)((long)&MACH_HEADER.magic + 2);
    func_0x0052322c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x005232bc();
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



/* Entry: 00520f18; end: 00520f1b;  */

void FUN_00520f18(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x005231f8();
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00523410();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x00523324();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00523534();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x005234fc();
      if (param_1 == (ulong *)0x0) {
        func_0x00523324();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00523534();
      }
    }
  }
  func_0x00523190();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00523208();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 00520f1c; end: 00521093;  */

undefined8 * FUN_00520f1c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_00a00160;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x005231a4();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = param_2;
  FUN_005219f8(param_1 + 3,param_3 + 0x18);
  FUN_00500fec(param_1 + 6,param_2,param_3 + 0x30);
  lVar2 = param_3 + 0x48;
  func_0x005232c8();
  param_1[9] = lVar2;
  lVar2 = param_3 + 0x50;
  func_0x005232c8();
  param_1[10] = lVar2;
  lVar2 = param_3 + 0x58;
  func_0x005232c8();
  param_1[0xb] = lVar2;
  lVar2 = param_3 + 0x60;
  func_0x005232c8();
  param_1[0xc] = lVar2;
  lVar2 = param_3 + 0x68;
  func_0x005232c8();
  param_1[0xd] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_00522f28(param_2,*(undefined8 *)(param_3 + 0x70));
  }
  param_1[0xe] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_00522fa4(param_2,*(undefined8 *)(param_3 + 0x78));
  }
  param_1[0xf] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00523010(param_2,*(undefined8 *)(param_3 + 0x80));
  }
  param_1[0x10] = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00523040(param_2,*(undefined8 *)(param_3 + 0x88));
  }
  param_1[0x11] = uVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x0052307c(param_2,*(undefined8 *)(param_3 + 0x90));
  }
  param_1[0x12] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x98);
  *(undefined8 *)((long)param_1 + 0x9e) = *(undefined8 *)(param_3 + 0x9e);
  param_1[0x13] = uVar3;
  return param_1;
}



/* Entry: 00521094; end: 005210bf;  */

undefined8 FUN_00521094(undefined8 param_1)

{
  func_0x0052325c();
  FUN_005210c0(param_1);
  return param_1;
}



/* Entry: 005210c0; end: 00521157;  */

long FUN_005210c0(long param_1)

{
  func_0x00532f74(param_1 + 0x48);
  func_0x00532f74(param_1 + 0x50);
  func_0x00532f74(param_1 + 0x58);
  func_0x00532f74(param_1 + 0x60);
  func_0x00532f74(param_1 + 0x68);
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_00521d80();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_00521ed8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_005237dc();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_0051da38();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_0051e42c();
  }
  __ZdlPv();
  FUN_00501018(param_1 + 0x30);
  FUN_00522628(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 00521158; end: 0052115b;  */

undefined8 FUN_00521158(undefined8 param_1)

{
  func_0x0052325c();
  FUN_005210c0(param_1);
  return param_1;
}



/* Entry: 0052115c; end: 0052116f;  */

void FUN_0052115c(void)

{
  FUN_00521094();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00521170; end: 0052117b;  */

undefined ** FUN_00521170(void)

{
  return &PTR_DAT_00a00378;
}



/* Entry: 0052117c; end: 00521293;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0052117c(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    FUN_00437de0(param_1 + 0x18);
  }
  FUN_00501ba8(param_1 + 0x30);
  FUN_00532fa8(param_1 + 0x48);
  FUN_00532fa8(param_1 + 0x50);
  FUN_00532fa8(param_1 + 0x58);
  FUN_00532fa8(param_1 + 0x60);
  FUN_00532fa8(param_1 + 0x68);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00521254(*(undefined8 *)(param_1 + 0x70));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_00521294(*(undefined8 *)(param_1 + 0x78));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00523878(*(undefined8 *)(param_1 + 0x80));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x0051dad4(*(undefined8 *)(param_1 + 0x88));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_0051e4c0(*(undefined8 *)(param_1 + 0x90));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x9e) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 00521294; end: 005212a7;  */

void FUN_00521294(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x10) = 0;
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



/* Entry: 005212a8; end: 0052158b;  */

dword * FUN_005212a8(dword *param_1,dword *param_2)

{
  uint uVar1;
  dword *pdVar2;
  dword *pdVar3;
  dword *pdVar4;
  dword *pdVar5;
  long lVar6;
  long extraout_x8;
  dword *unaff_x19;
  long unaff_x20;
  dword *unaff_x21;
  int iVar7;
  long unaff_x22;
  undefined8 *puVar8;
  int iVar9;
  
  func_0x00523384();
  func_0x005232f4(*(undefined8 *)(param_1 + 0x12));
  if ((long)param_2 < 0) {
    param_2 = (dword *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_005212e4;
  }
  else if ((int)param_2 != 0) {
LAB_005212e4:
    func_0x0052326c();
    param_2 = (dword *)((long)&MACH_HEADER.magic + 1);
    param_1 = unaff_x19;
    func_0x005231ec();
    unaff_x21 = param_1;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = *(dword **)(unaff_x20 + 0x70);
    param_1 = (dword *)((long)&MACH_HEADER.magic + 3);
    func_0x005231b0(3,param_2,param_2[5]);
    unaff_x21 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = *(dword **)(unaff_x20 + 0x78);
    param_1 = &MACH_HEADER.cputype;
    func_0x005231b0(4,param_2,param_2[5]);
    unaff_x21 = param_1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_2 = *(dword **)(unaff_x20 + 0x80);
    param_1 = (dword *)((long)&MACH_HEADER.cputype + 1);
    func_0x005231b0(5,param_2,param_2[0xe]);
    unaff_x21 = param_1;
  }
  pdVar5 = (dword *)(*(ulong *)(unaff_x20 + 0x50) & 0xfffffffffffffffc);
  lVar6 = (long)*(char *)((long)pdVar5 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(pdVar5 + 2);
  }
  if (lVar6 != 0) {
    param_2 = (dword *)((long)&MACH_HEADER.cputype + 2);
    param_1 = unaff_x19;
    FUN_00435e9c();
    unaff_x21 = param_1;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_2 = *(dword **)(unaff_x20 + 0x88);
    pdVar5 = (dword *)(ulong)param_2[10];
    param_1 = (dword *)((long)&MACH_HEADER.cputype + 3);
    func_0x005231b0();
    unaff_x21 = param_1;
  }
  func_0x005232f4(*(undefined8 *)(unaff_x20 + 0x58));
  if ((long)param_2 < 0) {
    param_2 = (dword *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_005213c0;
  }
  else if ((int)param_2 != 0) {
LAB_005213c0:
    func_0x0052326c();
    param_2 = &MACH_HEADER.cpusubtype;
    param_1 = unaff_x19;
    func_0x005231ec();
    unaff_x21 = param_1;
  }
  if ((uVar1 >> 4 & 1) != 0) {
    param_2 = *(dword **)(unaff_x20 + 0x90);
    pdVar5 = (dword *)(ulong)param_2[0xe];
    param_1 = (dword *)((long)&MACH_HEADER.cpusubtype + 1);
    func_0x005231b0();
    unaff_x21 = param_1;
  }
  pdVar2 = param_1;
  if (*(int *)(unaff_x20 + 0xa0) != 0) {
    func_0x005231e0();
    pdVar2 = &segment_command_00000020.maxprot;
    func_0x00487cbc();
    func_0x00523300();
    param_2 = param_1;
    unaff_x21 = pdVar2;
  }
  func_0x005232f4(*(undefined8 *)(unaff_x20 + 0x60));
  if ((long)param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_0052143c;
  }
  else if ((int)param_2 != 0) {
LAB_0052143c:
    func_0x0052326c();
    pdVar2 = unaff_x19;
    func_0x005231ec();
    unaff_x21 = pdVar2;
  }
  pdVar4 = *(dword **)(unaff_x20 + 0x98);
  if (pdVar4 != (dword *)0x0) {
    pdVar2 = unaff_x19;
    FUN_0052158c();
    pdVar5 = unaff_x21;
    unaff_x21 = pdVar2;
  }
  pdVar3 = pdVar2;
  if (*(char *)(unaff_x20 + 0xa4) == '\x01') {
    func_0x005231e0();
    pdVar3 = (dword *)section_00000068.segname;
    func_0x00487cbc();
    func_0x005231c8();
    pdVar4 = pdVar2;
    unaff_x21 = pdVar3;
  }
  iVar9 = *(int *)(unaff_x20 + 0x20);
  for (iVar7 = 0; iVar9 != iVar7; iVar7 = iVar7 + 1) {
    func_0x00523358();
    pdVar3 = (dword *)((long)&MACH_HEADER.ncmds + 1);
    func_0x005231b0();
    unaff_x21 = pdVar3;
  }
  iVar7 = *(int *)(unaff_x20 + 0x38);
  for (puVar8 = (undefined8 *)0x0; iVar7 != (int)puVar8;
      puVar8 = (undefined8 *)(ulong)((int)puVar8 + 1)) {
    func_0x00523358();
    pdVar3 = (dword *)((long)&MACH_HEADER.ncmds + 2);
    func_0x005231b0();
    unaff_x21 = pdVar3;
  }
  if ((*(byte *)(unaff_x20 + 0xa5) & 1) != 0) {
    func_0x005231e0();
    unaff_x21 = &section_00000068.offset;
    func_0x00487cbc();
    func_0x005231c8();
    pdVar4 = pdVar3;
  }
  func_0x005232f4(*(undefined8 *)(unaff_x20 + 0x68));
  if ((long)pdVar4 < 0) {
    if (puVar8[1] == 0) goto LAB_00521554;
    puVar8 = (undefined8 *)*puVar8;
  }
  else if ((int)pdVar4 == 0) goto LAB_00521554;
  func_0x0052326c(puVar8);
  unaff_x21 = unaff_x19;
  func_0x005231ec();
LAB_00521554:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x005232bc();
  if ((long)pdVar5 < 0) {
    lVar6 = *(long *)(extraout_x8 + 8);
    pdVar5 = *(dword **)(extraout_x8 + 0x10);
  }
  else {
    lVar6 = extraout_x8 + 8;
  }
  if (*(long *)unaff_x19 - (long)unaff_x21 < (long)(int)pdVar5) {
    while( true ) {
      iVar9 = ((int)*(undefined8 *)unaff_x19 - (int)unaff_x21) + 0x10;
      iVar7 = (int)pdVar5;
      uVar1 = iVar7 - iVar9;
      pdVar5 = (dword *)(ulong)uVar1;
      if (uVar1 == 0 || iVar7 < iVar9) break;
      func_0x0054f690();
      unaff_x21 = unaff_x19;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (dword *)((long)unaff_x21 + (long)iVar7);
  }
  _memcpy(unaff_x21,lVar6,(ulong)pdVar5 & 0xffffffff);
  return (dword *)((long)unaff_x21 + (long)(int)pdVar5);
}



/* Entry: 0052158c; end: 005215b7;  */

void FUN_0052158c(undefined8 param_1)

{
  char *pcVar1;
  ulong unaff_x19;
  
  func_0x0052330c();
  pcVar1 = section_00000068.sectname + 8;
  func_0x00487cbc(0x70,param_1);
  for (; 0x7f < unaff_x19; unaff_x19 = unaff_x19 >> 7) {
    *pcVar1 = (byte)unaff_x19 | 0x80;
    pcVar1 = pcVar1 + 1;
  }
  *pcVar1 = (byte)unaff_x19;
  return;
}



/* Entry: 005215b8; end: 005217b7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_005215b8(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar4;
  long extraout_x9;
  int iVar5;
  long lVar6;
  long lVar7;
  
  uVar4 = *(ulong *)(param_1 + 0x18);
  lVar6 = (long)*(int *)(param_1 + 0x20) << 1;
  puVar1 = (ulong *)(param_1 + 0x18);
  if ((uVar4 & 1) != 0) {
    puVar1 = (ulong *)(uVar4 + 7);
  }
  for (lVar7 = (long)*(int *)(param_1 + 0x20) << 3; lVar7 != 0; lVar7 = lVar7 + -8) {
    uVar4 = *puVar1;
    FUN_00521c30();
    lVar6 = uVar4 + lVar6 + (ulong)((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6);
    puVar1 = puVar1 + 1;
  }
  uVar4 = *(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar4 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar4 + 8);
  }
  iVar5 = *(int *)(param_1 + 0x38) * 3 + (int)lVar6;
  if (lVar7 != 0) {
    FUN_0048910c();
    func_0x005232a8();
  }
  func_0x005232d0(*(undefined8 *)(param_1 + 0x50));
  lVar6 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar6 = *(long *)(uVar4 + 8);
  }
  if (lVar6 != 0) {
    func_0x00487c3c();
    func_0x005232a8();
  }
  func_0x005232d0(*(undefined8 *)(param_1 + 0x58));
  lVar6 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar6 = *(long *)(uVar4 + 8);
  }
  if (lVar6 != 0) {
    FUN_0048910c();
    func_0x005232a8();
  }
  func_0x005232d0(*(undefined8 *)(param_1 + 0x60));
  lVar6 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar6 = *(long *)(uVar4 + 8);
  }
  if (lVar6 != 0) {
    FUN_0048910c();
    func_0x005232a8();
  }
  func_0x005232d0(*(undefined8 *)(param_1 + 0x68));
  lVar6 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar6 = *(long *)(uVar4 + 8);
  }
  if (lVar6 != 0) {
    FUN_0048910c();
    iVar5 = iVar5 + (int)uVar4 + 2;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 0x1f) != 0) {
    if ((uVar2 & 1) != 0) {
      FUN_00521e74(*(undefined8 *)(param_1 + 0x70));
      func_0x00523118();
    }
    if ((uVar2 >> 1 & 1) != 0) {
      FUN_00521f8c(*(undefined8 *)(param_1 + 0x78));
      func_0x00523118();
    }
    if ((uVar2 >> 2 & 1) != 0) {
      FUN_0052399c(*(undefined8 *)(param_1 + 0x80));
      func_0x00523118();
    }
    if ((uVar2 >> 3 & 1) != 0) {
      FUN_0051dc2c(*(undefined8 *)(param_1 + 0x88));
      func_0x00523118();
    }
    if ((uVar2 >> 4 & 1) != 0) {
      FUN_0051e6b4(*(undefined8 *)(param_1 + 0x90));
      func_0x00523118();
    }
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    iVar5 = ((int)LZCOUNT(*(long *)(param_1 + 0x98)) * -9 + 0x2c0U >> 6) + iVar5;
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    iVar5 = iVar5 + ((int)LZCOUNT((long)*(int *)(param_1 + 0xa0)) * -9 + 0x280U >> 6) + 1;
  }
  iVar5 = iVar5 + (uint)*(byte *)(param_1 + 0xa4) * 2;
  iVar3 = iVar5 + 3;
  if (*(char *)(param_1 + 0xa5) == '\0') {
    iVar3 = iVar5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x005232e8();
    lVar6 = extraout_x8_03;
    if (extraout_x8_03 < 0) {
      lVar6 = *(long *)(extraout_x9 + 0x10);
    }
    iVar3 = (int)lVar6 + iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return;
}



/* Entry: 005217b8; end: 005217bb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_005217b8(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar5;
  
  func_0x005231f8();
  puVar5 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar5 & 1) != 0) {
    func_0x00523410();
  }
  FUN_005219f8(unaff_x21 + 0x18,unaff_x20 + 0x18);
  puVar2 = (ulong *)(unaff_x21 + 0x30);
  lVar3 = unaff_x20 + 0x30;
  func_0x00500db8();
  func_0x0052329c(*(undefined8 *)(unaff_x20 + 0x48));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00523290();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x48);
    func_0x00532e08();
  }
  func_0x0052329c(*(undefined8 *)(unaff_x20 + 0x50));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00523290();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x50);
    func_0x00532e08();
  }
  func_0x0052329c(*(undefined8 *)(unaff_x20 + 0x58));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00523290();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x58);
    func_0x00532e08();
  }
  func_0x0052329c(*(undefined8 *)(unaff_x20 + 0x60));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00523290();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x60);
    func_0x00532e08();
  }
  func_0x0052329c(*(undefined8 *)(unaff_x20 + 0x68));
  lVar4 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00523290();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x68);
    func_0x00532e08();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x70);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        FUN_00522f28();
        *(ulong **)(unaff_x21 + 0x70) = puVar2;
      }
      else {
        FUN_00521a08();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x78);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        FUN_00522fa4();
        *(ulong **)(unaff_x21 + 0x78) = puVar2;
      }
      else {
        FUN_00521a80();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x80);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        func_0x00523010();
        *(ulong **)(unaff_x21 + 0x80) = puVar2;
      }
      else {
        func_0x00523770();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x88);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        func_0x00523040();
        *(ulong **)(unaff_x21 + 0x88) = puVar2;
      }
      else {
        func_0x0051d9c0();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x90);
      if (puVar2 == (ulong *)0x0) {
        func_0x0052307c();
        *(ulong **)(unaff_x21 + 0x90) = puVar5;
        puVar2 = puVar5;
      }
      else {
        FUN_0051e790();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x98) != 0) {
    *(long *)(unaff_x21 + 0x98) = *(long *)(unaff_x20 + 0x98);
  }
  if (*(int *)(unaff_x20 + 0xa0) != 0) {
    *(int *)(unaff_x21 + 0xa0) = *(int *)(unaff_x20 + 0xa0);
  }
  if (*(char *)(unaff_x20 + 0xa4) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xa4) = 1;
  }
  if (*(char *)(unaff_x20 + 0xa5) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xa5) = 1;
  }
  func_0x00523190();
  if ((extraout_x8_04 & 1) == 0) {
    return;
  }
  func_0x00523208();
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 005217bc; end: 005219f7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_005217bc(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar5;
  
  func_0x005231f8();
  puVar5 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar5 & 1) != 0) {
    func_0x00523410();
  }
  FUN_005219f8(unaff_x21 + 0x18,unaff_x20 + 0x18);
  puVar2 = (ulong *)(unaff_x21 + 0x30);
  lVar3 = unaff_x20 + 0x30;
  func_0x00500db8();
  func_0x0052329c(*(undefined8 *)(unaff_x20 + 0x48));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00523290();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x48);
    func_0x00532e08();
  }
  func_0x0052329c(*(undefined8 *)(unaff_x20 + 0x50));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00523290();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x50);
    func_0x00532e08();
  }
  func_0x0052329c(*(undefined8 *)(unaff_x20 + 0x58));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00523290();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x58);
    func_0x00532e08();
  }
  func_0x0052329c(*(undefined8 *)(unaff_x20 + 0x60));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00523290();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x60);
    func_0x00532e08();
  }
  func_0x0052329c(*(undefined8 *)(unaff_x20 + 0x68));
  lVar4 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00523290();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x68);
    func_0x00532e08();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x70);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        FUN_00522f28();
        *(ulong **)(unaff_x21 + 0x70) = puVar2;
      }
      else {
        FUN_00521a08();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x78);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        FUN_00522fa4();
        *(ulong **)(unaff_x21 + 0x78) = puVar2;
      }
      else {
        FUN_00521a80();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x80);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        func_0x00523010();
        *(ulong **)(unaff_x21 + 0x80) = puVar2;
      }
      else {
        func_0x00523770();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x88);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        func_0x00523040();
        *(ulong **)(unaff_x21 + 0x88) = puVar2;
      }
      else {
        func_0x0051d9c0();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x90);
      if (puVar2 == (ulong *)0x0) {
        func_0x0052307c();
        *(ulong **)(unaff_x21 + 0x90) = puVar5;
        puVar2 = puVar5;
      }
      else {
        FUN_0051e790();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x98) != 0) {
    *(long *)(unaff_x21 + 0x98) = *(long *)(unaff_x20 + 0x98);
  }
  if (*(int *)(unaff_x20 + 0xa0) != 0) {
    *(int *)(unaff_x21 + 0xa0) = *(int *)(unaff_x20 + 0xa0);
  }
  if (*(char *)(unaff_x20 + 0xa4) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xa4) = 1;
  }
  if (*(char *)(unaff_x20 + 0xa5) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xa5) = 1;
  }
  func_0x00523190();
  if ((extraout_x8_04 & 1) == 0) {
    return;
  }
  func_0x00523208();
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 005219f8; end: 00521a07;  */

void FUN_005219f8(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  FUN_0054d5a8();
  plVar2 = param_1;
  func_0x0054d67c();
  plVar3 = (long *)*unaff_x25;
  func_0x0054d6a8();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x0054d6b0();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x0054d694();
    param_1 = param_1 + 1;
  }
  func_0x0054d60c();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 00521a08; end: 00521a7f;  */

void FUN_00521a08(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x005231f8();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x005230ac();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_0051f1ac();
      puVar1 = puVar2;
    }
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x20) = 1;
  }
  func_0x00523508();
  if ((extraout_x8 & 1) != 0) {
    func_0x00523208();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 00521a80; end: 00521aab;  */

void FUN_00521a80(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
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



/* Entry: 00521aac; end: 00521ae3;  */

long FUN_00521aac(long param_1)

{
  func_0x0052325c();
  func_0x00523438();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_00523568();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00521ae4; end: 00521ae7;  */

long FUN_00521ae4(long param_1)

{
  func_0x0052325c();
  func_0x00523438();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_00523568();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00521ae8; end: 00521afb;  */

void FUN_00521ae8(void)

{
  FUN_00521aac();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00521afc; end: 00521b07;  */

undefined ** FUN_00521afc(void)

{
  return &PTR_DAT_00a003b8;
}



/* Entry: 00521b08; end: 00521b47;  */

void FUN_00521b08(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x005234c4();
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x005234b4();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
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



/* Entry: 00521b48; end: 00521c2f;  */

long * FUN_00521b48(long *param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar3;
  long unaff_x22;
  int iVar4;
  
  func_0x00523384();
  if ((int)param_1[5] != 0) {
    func_0x005231e0();
    param_2 = param_1;
    func_0x00523350();
    func_0x00523300();
    unaff_x21 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    func_0x005231e0();
    param_2 = param_1;
    func_0x00523430();
    func_0x005231c8();
    unaff_x21 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x20);
    param_3 = (ulong)*(uint *)(param_2 + 4);
    unaff_x21 = (long *)((long)&MACH_HEADER.magic + 3);
    func_0x005231b0();
  }
  func_0x005232f4(*(undefined8 *)(unaff_x20 + 0x18));
  if ((long)param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_00521bf8;
  }
  else if ((int)param_2 == 0) goto LAB_00521bf8;
  func_0x0052326c();
  unaff_x21 = unaff_x19;
  func_0x005231ec();
LAB_00521bf8:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x005232bc();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)unaff_x21 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)unaff_x21) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x0054f690();
      unaff_x21 = unaff_x19;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (long *)((long)unaff_x21 + (long)iVar3);
  }
  _memcpy(unaff_x21,lVar2,param_3 & 0xffffffff);
  return (long *)((long)unaff_x21 + (long)(int)param_3);
}



/* Entry: 00521c30; end: 00521cdb;  */

void FUN_00521c30(long param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = param_1;
  func_0x005232d0(*(undefined8 *)(param_1 + 0x18));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    FUN_0048910c();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x005234bc();
    func_0x005232a8();
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    func_0x00523274((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * 9);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    func_0x00523274((int)LZCOUNT(*(int *)(param_1 + 0x2c)) * 9);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x005232e8();
  }
  func_0x005234f0();
  return;
}



/* Entry: 00521cdc; end: 00521d7f;  */

void FUN_00521cdc(ulong *param_1,long param_2)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x005231f8();
  uVar1 = *(ulong *)(unaff_x19 + 8);
  func_0x0052329c(*(undefined8 *)(unaff_x20 + 0x18));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00523290();
    }
    func_0x00523484();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x005234fc();
    if (param_1 == (ulong *)0x0) {
      func_0x00523324();
      *(ulong **)(unaff_x21 + 0x20) = param_1;
    }
    else {
      func_0x00523534();
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    *(int *)(unaff_x21 + 0x2c) = *(int *)(unaff_x20 + 0x2c);
  }
  func_0x00523190();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00523208();
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



/* Entry: 00521d80; end: 00521dab;  */

undefined8 FUN_00521d80(undefined8 param_1)

{
  func_0x0052325c();
  FUN_00521dac(param_1);
  return param_1;
}



/* Entry: 00521dac; end: 00521dc7;  */

void FUN_00521dac(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0051eec8();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00521dc8; end: 00521dcb;  */

undefined8 FUN_00521dc8(undefined8 param_1)

{
  func_0x0052325c();
  FUN_00521dac(param_1);
  return param_1;
}



/* Entry: 00521dcc; end: 00521ddf;  */

void FUN_00521dcc(void)

{
  FUN_00521d80();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00521de0; end: 00521deb;  */

undefined ** FUN_00521de0(void)

{
  return &PTR_DAT_00a003f0;
}



/* Entry: 00521dec; end: 00521e73;  */

long * FUN_00521dec(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00523234();
  if ((char)param_1[4] == '\x01') {
    func_0x005231bc();
    func_0x00523350();
    func_0x005231c8();
    param_4 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x3c);
    param_4 = (long *)((long)&MACH_HEADER.magic + 2);
    func_0x0052322c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x005232bc();
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



/* Entry: 00521e74; end: 00521ed3;  */

void FUN_00521e74(void)

{
  int iVar1;
  int extraout_w8;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0052351c();
  if ((extraout_x8 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    FUN_0051f0cc();
    func_0x0052313c();
    iVar1 = iVar1 + extraout_w8 + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(unaff_x19 + 0x20) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x005232e8();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 00521ed4; end: 00521ed7;  */

void FUN_00521ed4(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x005231f8();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x005230ac();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_0051f1ac();
      puVar1 = puVar2;
    }
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x20) = 1;
  }
  func_0x00523508();
  if ((extraout_x8 & 1) != 0) {
    func_0x00523208();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 00521ed8; end: 00521efb;  */

undefined8 FUN_00521ed8(undefined8 param_1)

{
  func_0x0052325c();
  return param_1;
}



/* Entry: 00521efc; end: 00521eff;  */

undefined8 FUN_00521efc(undefined8 param_1)

{
  func_0x0052325c();
  return param_1;
}



/* Entry: 00521f00; end: 00521f13;  */

void FUN_00521f00(void)

{
  FUN_00521ed8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00521f14; end: 00521f1f;  */

undefined ** FUN_00521f14(void)

{
  return &PTR_DAT_00a00430;
}



/* Entry: 00521f20; end: 00521f8b;  */

long * FUN_00521f20(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00523234();
  if ((char)param_1[2] == '\x01') {
    func_0x005231bc();
    func_0x00523350();
    func_0x005231c8();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x005232bc();
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



/* Entry: 00521f8c; end: 00521fc3;  */

long FUN_00521f8c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = (ulong)*(byte *)(param_1 + 0x10) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 00521fc4; end: 00521fef;  */

long FUN_00521fc4(long param_1)

{
  func_0x0052325c();
  func_0x00532f74(param_1 + 0x10);
  return param_1;
}



/* Entry: 00521ff0; end: 00521ff3;  */

long FUN_00521ff0(long param_1)

{
  func_0x0052325c();
  func_0x00532f74(param_1 + 0x10);
  return param_1;
}



/* Entry: 00521ff4; end: 00522007;  */

void FUN_00521ff4(void)

{
  FUN_00521fc4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00522008; end: 00522013;  */

undefined ** FUN_00522008(void)

{
  return &PTR_DAT_00a00478;
}



/* Entry: 00522014; end: 005220af;  */

long * FUN_00522014(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  int iVar3;
  long *unaff_x22;
  long *plVar4;
  int iVar5;
  
  plVar1 = param_2;
  plVar4 = param_3;
  func_0x005232f4(*(undefined8 *)(param_1 + 0x10));
  if ((long)plVar1 < 0) {
    if (unaff_x22[1] == 0) goto LAB_00522078;
  }
  else if ((int)plVar1 == 0) goto LAB_00522078;
  func_0x0052326c();
  param_2 = param_3;
  FUN_00435e9c(param_3,1);
  plVar4 = unaff_x22;
LAB_00522078:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x005232bc();
  if ((long)plVar4 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar4) {
    while( true ) {
      iVar5 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar3 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar3 - iVar5);
      if (iVar3 - iVar5 == 0 || iVar3 < iVar5) break;
      func_0x0054f690();
      lVar2 = (long)param_2 + (long)iVar5;
      param_2 = param_3;
      func_0x0054ed58(param_3,lVar2);
    }
    func_0x0054f690();
    return (long *)((long)param_2 + (long)iVar3);
  }
  _memcpy(param_2,lVar2,(ulong)plVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar4);
}



/* Entry: 005220b0; end: 0052210f;  */

void FUN_005220b0(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long lVar3;
  long extraout_x9;
  
  lVar3 = param_1;
  func_0x005232d0(*(undefined8 *)(param_1 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_0048910c();
    iVar1 = (int)lVar3 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x005232e8();
    lVar3 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  return;
}



/* Entry: 00522110; end: 00522113;  */

void FUN_00522110(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x005233c8();
  func_0x0052329c(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00523290();
    }
    func_0x00532e08(unaff_x19 + 0x10);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 00522114; end: 00522167;  */

long FUN_00522114(long param_1)

{
  func_0x0052325c();
  func_0x00532f74(param_1 + 0x30);
  func_0x00532f74(param_1 + 0x38);
  func_0x00532f74(param_1 + 0x40);
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_0051e154();
  }
  __ZdlPv();
  FUN_00437b14(param_1 + 0x18);
  return param_1;
}



/* Entry: 00522168; end: 0052216b;  */

long FUN_00522168(long param_1)

{
  func_0x0052325c();
  func_0x00532f74(param_1 + 0x30);
  func_0x00532f74(param_1 + 0x38);
  func_0x00532f74(param_1 + 0x40);
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_0051e154();
  }
  __ZdlPv();
  FUN_00437b14(param_1 + 0x18);
  return param_1;
}



/* Entry: 0052216c; end: 0052217f;  */

void FUN_0052216c(void)

{
  FUN_00522114();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00522180; end: 0052218b;  */

undefined ** FUN_00522180(void)

{
  return &PTR_DAT_00a004b8;
}



/* Entry: 0052218c; end: 0052243f;  */

dword * FUN_0052218c(dword *param_1,dword *param_2,dword *param_3)

{
  ulong *puVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x8;
  dword *unaff_x19;
  long unaff_x20;
  dword *unaff_x21;
  int iVar7;
  long unaff_x22;
  int iVar8;
  dword *pdVar9;
  ulong uVar10;
  long lVar11;
  
  func_0x00523384();
  if (*(char *)(param_1 + 0x1a) == '\x01') {
    func_0x005231e0();
    param_2 = param_1;
    func_0x00523350();
    func_0x005231c8();
    unaff_x21 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    func_0x005231e0();
    param_2 = param_1;
    func_0x00523430();
    func_0x0052341c();
    unaff_x21 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    func_0x005231e0();
    unaff_x21 = &MACH_HEADER.flags;
    func_0x00487cbc();
    func_0x0052341c();
    param_2 = param_1;
  }
  func_0x005232f4(*(undefined8 *)(unaff_x20 + 0x30));
  if ((long)param_2 < 0) {
    param_2 = (dword *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_00522238;
  }
  else if ((int)param_2 != 0) {
LAB_00522238:
    func_0x0052326c();
    param_2 = &MACH_HEADER.cputype;
    unaff_x21 = unaff_x19;
    func_0x005231ec();
  }
  lVar11 = 8;
  pcVar4 = "ranking.core.PlaceTagsMetadata.places_listed";
  for (uVar10 = (ulong)(*(uint *)(unaff_x20 + 0x20) &
                       ((int)*(uint *)(unaff_x20 + 0x20) >> 0x1f ^ 0xffffffffU)); uVar10 != 0;
      uVar10 = uVar10 - 1) {
    uVar6 = *(ulong *)(unaff_x20 + 0x18);
    puVar1 = (ulong *)(unaff_x20 + 0x18);
    if ((uVar6 & 1) != 0) {
      puVar1 = (ulong *)(uVar6 + lVar11 + -1);
    }
    param_3 = (dword *)*puVar1;
    lVar5 = (long)*(char *)((long)param_3 + 0x17);
    pdVar9 = param_3;
    if (lVar5 < 0) {
      lVar5 = *(long *)(param_3 + 2);
      pdVar9 = *(dword **)param_3;
    }
    FUN_0054ddb8(pdVar9,lVar5,1,"ranking.core.PlaceTagsMetadata.places_listed");
    pdVar9 = (dword *)(long)*(char *)((long)param_3 + 0x17);
    if ((((long)pdVar9 < 0) && (pdVar9 = *(dword **)(param_3 + 2), 0x7f < (long)pdVar9)) ||
       ((*(long *)unaff_x19 - (long)unaff_x21) + 0xe < (long)pdVar9)) {
      param_2 = (dword *)((long)&MACH_HEADER.cputype + 1);
      unaff_x21 = unaff_x19;
      func_0x0054f030();
    }
    else {
      *(undefined1 *)unaff_x21 = 0x2a;
      *(char *)((long)unaff_x21 + 1) = (char)pdVar9;
      param_2 = param_3;
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        param_2 = *(dword **)param_3;
      }
      param_3 = pdVar9;
      _memcpy((undefined1 *)((long)unaff_x21 + 2));
      unaff_x21 = (dword *)((undefined1 *)((long)unaff_x21 + 2) + (long)pdVar9);
    }
    lVar11 = lVar11 + 8;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_2 = *(dword **)(unaff_x20 + 0x48);
    param_3 = (dword *)(ulong)param_2[0x10];
    unaff_x21 = (dword *)((long)&MACH_HEADER.cputype + 2);
    func_0x005231b0();
  }
  func_0x005232f4(*(undefined8 *)(unaff_x20 + 0x38));
  if ((long)param_2 < 0) {
    pcVar3 = (char *)0x2e676e696b6e6172;
LAB_0052236c:
    func_0x0052326c(pcVar3);
    param_2 = (dword *)((long)&MACH_HEADER.cputype + 3);
    unaff_x21 = unaff_x19;
    func_0x005231ec();
  }
  else {
    pcVar3 = pcVar4;
    if ((int)param_2 != 0) goto LAB_0052236c;
  }
  func_0x005232f4(*(undefined8 *)(unaff_x20 + 0x40));
  if ((long)param_2 < 0) {
    pcVar4 = (char *)0x2e676e696b6e6172;
  }
  else if ((int)param_2 == 0) goto LAB_005223c8;
  func_0x0052326c(pcVar4);
  unaff_x21 = unaff_x19;
  func_0x005231ec();
LAB_005223c8:
  pdVar9 = unaff_x21;
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    pdVar9 = unaff_x19;
    FUN_00522440();
    param_3 = unaff_x21;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x005232bc();
    if ((long)param_3 < 0) {
      lVar11 = *(long *)(extraout_x8 + 8);
      param_3 = *(dword **)(extraout_x8 + 0x10);
    }
    else {
      lVar11 = extraout_x8 + 8;
    }
    if (*(long *)unaff_x19 - (long)pdVar9 < (long)(int)param_3) {
      while( true ) {
        iVar8 = ((int)*(undefined8 *)unaff_x19 - (int)pdVar9) + 0x10;
        iVar7 = (int)param_3;
        uVar2 = iVar7 - iVar8;
        param_3 = (dword *)(ulong)uVar2;
        if (uVar2 == 0 || iVar7 < iVar8) break;
        func_0x0054f690();
        pdVar9 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (dword *)((long)pdVar9 + (long)iVar7);
    }
    _memcpy(pdVar9,lVar11,(ulong)param_3 & 0xffffffff);
    return (dword *)((long)pdVar9 + (long)(int)param_3);
  }
  return pdVar9;
}



/* Entry: 00522440; end: 0052246b;  */

void FUN_00522440(undefined8 param_1)

{
  qword *pqVar1;
  ulong unaff_x19;
  
  func_0x0052330c();
  pqVar1 = &segment_command_00000020.fileoff;
  func_0x00487cbc(0x48,param_1);
  for (; 0x7f < unaff_x19; unaff_x19 = unaff_x19 >> 7) {
    *(byte *)pqVar1 = (byte)unaff_x19 | 0x80;
    pqVar1 = (qword *)((long)pqVar1 + 1);
  }
  *(byte *)pqVar1 = (byte)unaff_x19;
  return;
}



/* Entry: 0052246c; end: 00522593;  */

void FUN_0052246c(ulong param_1)

{
  ulong *puVar1;
  int extraout_w8;
  int extraout_w8_00;
  int iVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar4 = *(uint *)(param_1 + 0x20);
  uVar5 = (ulong)uVar4;
  lVar7 = 8;
  uVar3 = param_1;
  for (uVar6 = (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)); uVar6 != 0; uVar6 = uVar6 - 1) {
    uVar3 = *(ulong *)(param_1 + 0x18);
    puVar1 = (ulong *)(param_1 + 0x18);
    if ((uVar3 & 1) != 0) {
      puVar1 = (ulong *)(uVar3 + lVar7 + -1);
    }
    uVar3 = *puVar1;
    FUN_0048910c();
    uVar5 = uVar3 + uVar5;
    uVar4 = (uint)uVar5;
    lVar7 = lVar7 + 8;
  }
  func_0x005232d0(*(undefined8 *)(param_1 + 0x30));
  lVar7 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar7 = *(long *)(uVar3 + 8);
  }
  if (lVar7 != 0) {
    FUN_0048910c();
    func_0x005232a8();
  }
  func_0x005232d0(*(undefined8 *)(param_1 + 0x38));
  lVar7 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar7 = *(long *)(uVar3 + 8);
  }
  if (lVar7 != 0) {
    FUN_0048910c();
    func_0x005232a8();
  }
  func_0x005232d0(*(undefined8 *)(param_1 + 0x40));
  lVar7 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar7 = *(long *)(uVar3 + 8);
  }
  if (lVar7 != 0) {
    FUN_0048910c();
    func_0x005232a8();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_0051e31c(*(undefined8 *)(param_1 + 0x48));
    func_0x00523118();
  }
  iVar2 = -9;
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x005233d4();
    iVar2 = extraout_w8;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x005233d4();
    iVar2 = extraout_w8_00;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar4 = ((int)LZCOUNT(*(long *)(param_1 + 0x60)) * iVar2 + 0x2c0U >> 6) + uVar4;
  }
  iVar2 = uVar4 + (uint)*(byte *)(param_1 + 0x68) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x005232e8();
    lVar7 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar7 = *(long *)(extraout_x9 + 0x10);
    }
    iVar2 = (int)lVar7 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 00522594; end: 005225f7;  */

void FUN_00522594(void)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar4;
  
  func_0x005231f8();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar4 & 1) != 0) {
    func_0x00523410();
  }
  puVar1 = (ulong *)(unaff_x21 + 0x18);
  lVar2 = unaff_x20 + 0x18;
  FUN_0048cf14();
  func_0x0052329c(*(undefined8 *)(unaff_x20 + 0x30));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00523290();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x30);
    func_0x00532e08();
  }
  func_0x0052329c(*(undefined8 *)(unaff_x20 + 0x38));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00523290();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x38);
    func_0x00532e08();
  }
  func_0x0052329c(*(undefined8 *)(unaff_x20 + 0x40));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00523290();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x40);
    func_0x00532e08();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x48);
    if (puVar1 == (ulong *)0x0) {
      func_0x005230dc();
      *(ulong **)(unaff_x21 + 0x48) = puVar4;
      puVar1 = puVar4;
    }
    else {
      func_0x0051e0d8();
    }
  }
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    *(long *)(unaff_x21 + 0x50) = *(long *)(unaff_x20 + 0x50);
  }
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    *(long *)(unaff_x21 + 0x58) = *(long *)(unaff_x20 + 0x58);
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    *(long *)(unaff_x21 + 0x60) = *(long *)(unaff_x20 + 0x60);
  }
  if (*(char *)(unaff_x20 + 0x68) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x68) = 1;
  }
  func_0x00523190();
  if ((extraout_x8_02 & 1) != 0) {
    func_0x00523208();
    if ((*puVar1 & 1) == 0) {
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


