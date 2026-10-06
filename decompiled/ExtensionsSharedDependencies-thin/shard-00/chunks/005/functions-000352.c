/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00701fd0; end: 00702023;  */

long FUN_00701fd0(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    _strlen();
    lVar2 = lVar1 + 1;
    FUN_00701e90();
    if (lVar2 != 0) {
      FUN_00702024(lVar2,param_1,lVar1 + 1);
    }
  }
  return lVar2;
}



/* Entry: 00702024; end: 0070208f;  */

void FUN_00702024(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_0099a3f8)();
    return;
  }
  return;
}



/* Entry: 00702090; end: 007020b7;  */

void FUN_00702090(void)

{
  FUN_007020b8();
  return;
}



/* Entry: 007020b8; end: 007020bb;  */

void FUN_007020b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__vsnprintf_0099a870)();
  return;
}



/* Entry: 007020bc; end: 00702123;  */

long FUN_007020bc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00701fa8();
  if (lVar1 == -1) {
    FUN_00702220();
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1 + 1;
    FUN_00701e90();
    if (lVar2 == 0) {
      FUN_00702220();
    }
    else {
      FUN_00702024(lVar2,param_1,lVar1);
      *(undefined1 *)(lVar2 + lVar1) = 0;
    }
  }
  return lVar2;
}



/* Entry: 00702124; end: 007021c7;  */

long FUN_00702124(char *param_1,char *param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = 0;
  for (uVar2 = param_3; 1 < uVar2; uVar2 = uVar2 - 1) {
    cVar1 = *param_2;
    if (cVar1 == '\0') goto LAB_00702160;
    param_2 = param_2 + 1;
    *param_1 = cVar1;
    lVar3 = lVar3 + -1;
    param_1 = param_1 + 1;
  }
  if (param_3 != 0) {
LAB_00702160:
    *param_1 = '\0';
  }
  _strlen(param_2);
  return (long)param_2 - lVar3;
}



/* Entry: 007021c8; end: 0070221f;  */

long FUN_007021c8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2;
    FUN_00701e90();
    if (lVar1 == 0) {
      FUN_00702220();
    }
    else {
      FUN_00702024(lVar1,param_1,param_2);
    }
  }
  return lVar1;
}



/* Entry: 00702220; end: 0070224b;  */

/* WARNING: Removing unreachable block (ram,0x006de91c) */
/* WARNING: Removing unreachable block (ram,0x006de920) */

void FUN_00702220(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = 0xe;
  FUN_006de604(0xe,0);
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0x180);
    uVar1 = iVar2 + 1U & 0xf;
    *(uint *)(lVar3 + 0x180) = uVar1;
    if (uVar1 == *(uint *)(lVar3 + 0x184)) {
      *(uint *)(lVar3 + 0x184) = iVar2 + 2U & 0xf;
    }
    puVar4 = (undefined8 *)(lVar3 + (ulong)uVar1 * 0x18);
    func_0x006de65c(puVar4);
    *puVar4 = 0;
    *(undefined2 *)((long)puVar4 + 0x14) = 0;
    *(undefined4 *)(puVar4 + 2) = 0xe000041;
  }
  return;
}



/* Entry: 0070224c; end: 0070234f;  */

long * FUN_0070224c(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    return param_1;
  }
  plVar2 = param_1;
  FUN_006cc958();
  if (plVar2 == (long *)0x0) {
    func_0x007027fc();
    func_0x007027b4();
    return (long *)0x0;
  }
  *plVar2 = 0;
  plVar2[1] = 0;
  lVar3 = (long)*(int *)((long)param_1 + 0x14);
  FUN_00701e90();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    iVar1 = *(int *)((long)param_1 + 0x14);
    if ((param_1[3] != 0) && (iVar1 != 0)) {
      _memcpy(lVar3,param_1[3],(long)iVar1);
    }
    plVar2[3] = lVar3;
    *(int *)(plVar2 + 2) = (int)param_1[2];
    *(int *)((long)plVar2 + 0x14) = iVar1;
    lVar3 = param_1[1];
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_00701fd0();
      if (lVar3 == 0) goto LAB_00702318;
    }
    lVar4 = *param_1;
    if ((lVar4 == 0) || (FUN_00701fd0(), lVar4 != 0)) {
      *plVar2 = lVar4;
      plVar2[1] = lVar3;
      *(uint *)(plVar2 + 4) = *(uint *)(param_1 + 4) | 0xd;
      return plVar2;
    }
  }
LAB_00702318:
  func_0x007027fc();
  func_0x007027b4();
  func_0x00701ed0(lVar3);
  func_0x00702818();
  func_0x00701ed0(plVar2);
  return (long *)0x0;
}



/* Entry: 00702350; end: 00702383;  */

ulong FUN_00702350(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_2 + 0x14);
  if (uVar1 != 0) {
    return (ulong)uVar1;
  }
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x14) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcmp_0099a3f0)(uVar2,*(undefined8 *)(param_2 + 0x18));
    return uVar2;
  }
  return 0;
}



/* Entry: 00702384; end: 007023db;  */

void FUN_00702384(long param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x10) == 0)) {
    func_0x007027dc();
    func_0x00702810();
    _bsearch(param_1,&UNK_00838b7a,0x371,2,FUN_007023dc);
    if (param_1 != 0) {
      func_0x007027c0();
    }
  }
  return;
}



/* Entry: 007023dc; end: 00702423;  */

undefined8 FUN_007023dc(long param_1,ushort *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 < *(int *)(&UNK_00a1231c + (ulong)*param_2 * 0x28)) {
    return 0xffffffff;
  }
  if (*(int *)(&UNK_00a1231c + (ulong)*param_2 * 0x28) < iVar1) {
    return 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcmp_0099a3f0)(uVar2,*(undefined8 *)(&UNK_00a12320 + (ulong)*param_2 * 0x28));
    return uVar2;
  }
  return 0;
}



/* Entry: 00702424; end: 0070245f;  */

void FUN_00702424(long param_1)

{
  func_0x007027dc();
  func_0x00702810();
  func_0x007027ec();
  if (param_1 != 0) {
    func_0x007027c0();
  }
  return;
}



/* Entry: 00702460; end: 0070247b;  */

void FUN_00702460(undefined8 param_1,ushort *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077b0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strcmp_0099a718)(param_1,(&PTR_DAT_00a12308)[(ulong)*param_2 * 5]);
  return;
}



/* Entry: 0070247c; end: 007024b7;  */

void FUN_0070247c(long param_1)

{
  func_0x007027dc();
  func_0x00702810();
  func_0x007027ec();
  if (param_1 != 0) {
    func_0x007027c0();
  }
  return;
}



/* Entry: 007024b8; end: 007024d3;  */

void FUN_007024b8(undefined8 param_1,ushort *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077b0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strcmp_0099a718)(param_1,(&PTR_DAT_00a12310)[(ulong)*param_2 * 5]);
  return;
}



/* Entry: 007024d4; end: 007025a3;  */

/* WARNING: Removing unreachable block (ram,0x00702644) */

undefined ** FUN_007024d4(undefined8 param_1,int param_2)

{
  int iVar1;
  uint uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  int iVar2;
  int iVar3;
  
  if (param_2 != 0) {
FUN_007025dc:
    iVar1 = (int)auStack_60;
    iVar2 = (int)auStack_60;
    iVar3 = (int)auStack_60;
    FUN_006d35b0(auStack_60,0x20);
    if (iVar1 != 0) {
      uVar5 = param_1;
      _strlen(param_1);
      FUN_006d3f40(auStack_60,param_1,uVar5);
      if ((iVar2 != 0) && (FUN_006d36d4(auStack_60,auStack_38,auStack_40), iVar3 != 0)) {
        ppuVar6 = (undefined **)0x0;
        FUN_006cca1c();
        func_0x00702818();
        return ppuVar6;
      }
    }
    func_0x007027fc();
    func_0x007027b4();
    func_0x006d3688(auStack_60);
    return (undefined **)0x0;
  }
  uVar5 = param_1;
  FUN_00702424();
  uVar4 = (uint)uVar5;
  if (uVar4 == 0) {
    uVar5 = param_1;
    FUN_0070247c();
    uVar4 = (uint)uVar5;
    if (uVar4 == 0) goto FUN_007025dc;
  }
  if (uVar4 < 0x3c3) {
    if (uVar4 == 0) {
      uVar7 = 0;
    }
    else {
      if (*(int *)(&UNK_00a12318 + (ulong)uVar4 * 0x28) == 0) goto LAB_00702578;
      uVar7 = (ulong)uVar4;
    }
    ppuVar6 = &PTR_DAT_00a12308 + uVar7 * 5;
  }
  else {
    func_0x007064d4(0xb29e20);
    func_0x0070650c(0xb29e20);
LAB_00702578:
    func_0x007027fc();
    func_0x007027b4();
    ppuVar6 = (undefined **)0x0;
  }
  return ppuVar6;
}



/* Entry: 007025a4; end: 007025db;  */

void FUN_007025a4(void)

{
  func_0x00702528();
  return;
}



/* Entry: 007025dc; end: 00702783;  */

undefined1 * FUN_007025dc(code *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  int iVar2;
  
  iVar1 = (int)auStack_60;
  iVar2 = (int)auStack_60;
  puVar4 = auStack_60;
  FUN_006d35b0(auStack_60,0x20);
  if (iVar1 != 0) {
    uVar3 = param_2;
    _strlen(param_2);
    FUN_006d3f40(auStack_60,param_2,uVar3);
    if ((iVar2 != 0) && (FUN_006d36d4(auStack_60,auStack_38,auStack_40), (int)puVar4 != 0)) {
      if (param_1 == (code *)0x0) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        (*param_1)();
      }
      FUN_006cca1c();
      func_0x00702818();
      return puVar4;
    }
  }
  func_0x007027fc();
  func_0x007027b4();
  func_0x006d3688(auStack_60);
  return (undefined1 *)0x0;
}



/* Entry: 00702784; end: 007027b3;  */

void FUN_00702784(ulong param_1,undefined8 param_2,uint param_3)

{
  FUN_00702124(param_1,param_2,param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU));
  if (param_1 >> 0x1f != 0) {
    func_0x007027fc();
    func_0x007027b4();
  }
  return;
}



/* Entry: 007027b4; end: 00702893;  */

void FUN_007027b4(uint *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = param_1;
  FUN_006de604();
  if (puVar3 != (uint *)0x0) {
    if (((int)param_1 == 2) && (param_3 == 0)) {
      puVar4 = puVar3;
      ___error();
      param_3 = *puVar4;
    }
    uVar2 = puVar3[0x60];
    uVar1 = uVar2 + 1 & 0xf;
    puVar3[0x60] = uVar1;
    if (uVar1 == puVar3[0x61]) {
      puVar3[0x61] = uVar2 + 2 & 0xf;
    }
    puVar3 = puVar3 + (ulong)uVar1 * 6;
    func_0x006de65c(puVar3);
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined2 *)(puVar3 + 5) = 0;
    puVar3[4] = param_3 & 0xfff | (int)param_1 << 0x18;
  }
  return;
}



/* Entry: 00702894; end: 00702bd3;  */

ulong * FUN_00702894(ulong *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined1 auStack_a0 [8];
  long *plStack_98;
  ulong *puStack_90;
  undefined8 uStack_88;
  ulong auStack_80 [3];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_90 = (ulong *)0x0;
  uStack_88 = 0;
  plStack_98 = (long *)0x0;
  puVar5 = param_1;
  puVar6 = param_2;
  if ((param_2 == (ulong *)0x0) && (FUN_00705ed8(), puVar6 = puVar5, puVar5 == (ulong *)0x0)) {
    plVar4 = (long *)((long)&MACH_HEADER.cpusubtype + 1);
    func_0x00702d4c(9,0,0x41);
    goto LAB_00702b94;
  }
  uVar7 = *puVar6;
  FUN_0070da28();
  if (puVar5 == (ulong *)0x0) {
LAB_00702b54:
    while (func_0x0070da80(puVar5), uVar7 < *puVar6) {
      puVar5 = puVar6;
      func_0x00706270();
    }
    if (puVar6 != param_2) {
      FUN_00705f10(puVar6);
    }
    puVar6 = (ulong *)0x0;
  }
  else {
    while (puVar1 = param_1, func_0x00703144(param_1,&uStack_88,&puStack_90,&plStack_98,auStack_a0),
          uVar3 = uStack_88, (int)puVar1 != 0) {
      uVar2 = uStack_88;
      _strcmp(uStack_88,&UNK_0091b96f);
      if ((((int)uVar2 == 0) || (uVar2 = uVar3, _strcmp(uVar3,&UNK_0091b97b), (int)uVar2 == 0)) ||
         ((uVar2 = uVar3, _strcmp(uVar3,&UNK_0091b98c), (int)uVar2 == 0 ||
          (uVar2 = uVar3, _strcmp(uVar3,&UNK_0091b9a0), (int)uVar2 == 0)))) {
LAB_007029c4:
        puVar1 = puStack_90;
        FUN_0070360c();
        if ((int)puVar1 == 0) goto LAB_00702b54;
        puVar1 = auStack_80;
        FUN_007037f8(puVar1,plStack_98,auStack_a0,param_3,param_4);
        if ((int)puVar1 == 0) goto LAB_00702b54;
        func_0x00702d2c();
        if ((int)puVar1 == 2) {
          FUN_00702d14();
          if ((puVar1 == (ulong *)0x0) || (FUN_0070da28(), puVar5 = puVar1, puVar1 == (ulong *)0x0))
          goto LAB_00702b54;
          func_0x00702d2c();
        }
        if ((int)puVar1 != 0) {
          func_0x00702d4c(9,0,0xc);
          goto LAB_00702b54;
        }
      }
      else {
        uVar2 = uVar3;
        _strcmp();
        if ((((int)uVar2 == 0) || (uVar2 = uVar3, _strcmp(), (int)uVar2 == 0)) ||
           (_strcmp(), (int)uVar3 == 0)) {
          puVar1 = puStack_90;
          _strlen();
          if (puVar1 < (ulong *)((long)&MACH_HEADER.cpusubtype + 3)) goto LAB_007029c4;
          if ((puVar5[2] != 0) &&
             ((FUN_00702d14(), puVar1 == (ulong *)0x0 ||
              (FUN_0070da28(), puVar5 = puVar1, puVar1 == (ulong *)0x0)))) goto LAB_00702b54;
          FUN_0070e304();
          puVar5[2] = (ulong)puVar1;
          if ((puVar1 == (ulong *)0x0) || (puVar1 = puStack_90, FUN_0070360c(), (int)puVar1 == 0))
          goto LAB_00702b54;
          puVar5[7] = (ulong)plStack_98;
          *(int *)(puVar5 + 6) = auStack_a0._0_4_;
          plStack_98 = (long *)0x0;
        }
      }
      func_0x00701ed0(uStack_88);
      func_0x00701ed0(puStack_90);
      func_0x00701ed0(plStack_98);
      puStack_90 = (ulong *)0x0;
      uStack_88 = 0;
      plStack_98 = (long *)0x0;
    }
    func_0x006de5a4();
    if (((uint)puVar1 & 0xff000fff) != 0x900006e) goto LAB_00702b54;
    FUN_006de5b0();
    if ((((*puVar5 != 0) || (puVar5[1] != 0)) || (puVar5[2] != 0)) || (puVar5[7] != 0)) {
      FUN_00702d14();
      if (puVar1 == (ulong *)0x0) goto LAB_00702b54;
      puVar5 = (ulong *)0x0;
    }
    func_0x0070da80(puVar5);
  }
  func_0x00701ed0(uStack_88);
  func_0x00701ed0(puStack_90);
  plVar4 = plStack_98;
  func_0x00701ed0();
  puVar5 = puVar6;
LAB_00702b94:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_68) {
    ___stack_chk_fail();
    if (*plVar4 == 0) {
      func_0x00702d3c();
      func_0x0070e560();
      *puVar5 = (ulong)plVar4;
      puVar5 = (ulong *)(ulong)(plVar4 == (long *)0x0);
    }
    else {
      puVar5 = (ulong *)((long)&MACH_HEADER.magic + 2);
    }
    return puVar5;
  }
  return puVar5;
}



/* Entry: 00702bd4; end: 00702c93;  */

undefined1 FUN_00702bd4(long *param_1)

{
  undefined1 uVar1;
  long *unaff_x19;
  
  if (*param_1 == 0) {
    func_0x00702d3c();
    func_0x0070e560();
    *unaff_x19 = (long)param_1;
    uVar1 = param_1 == (long *)0x0;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 00702c94; end: 00702d13;  */

undefined1 FUN_00702c94(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    lVar2 = param_1;
    uStack_38 = param_2;
    FUN_0070e304();
    *(long *)(param_1 + 0x10) = lVar2;
    if (lVar2 == 0) {
      uVar1 = 1;
    }
    else {
      FUN_006df844(param_4,0,&uStack_38,param_3);
      *(long *)(*(long *)(param_1 + 0x10) + 0x18) = param_4;
      uVar1 = param_4 == 0;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 00702d14; end: 00702d57;  */

void FUN_00702d14(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x19;
  undefined8 unaff_x21;
  ulong uVar5;
  
  uVar2 = *unaff_x19;
  if (unaff_x19 == (ulong *)0x0) {
    return;
  }
  uVar3 = unaff_x19[3];
  uVar4 = *unaff_x19;
  if (uVar4 + 1 < uVar3) {
    uVar3 = unaff_x19[1];
    goto LAB_00706034;
  }
  if ((long)uVar3 < 0) {
LAB_00705ffc:
    uVar4 = uVar3 + 1;
    lVar1 = uVar4 * 8;
    uVar5 = uVar4 & 0x1fffffffffffffff;
  }
  else {
    uVar4 = uVar3 * 2;
    lVar1 = uVar3 << 4;
    uVar5 = uVar4;
    if (uVar4 + (uVar3 & 0xfffffffffffffff) * -2 != 0) goto LAB_00705ffc;
  }
  if (uVar4 < uVar3 || uVar5 != uVar4) {
    return;
  }
  uVar3 = unaff_x19[1];
  FUN_00701f14(uVar3,lVar1);
  if (uVar3 == 0) {
    return;
  }
  unaff_x19[1] = uVar3;
  unaff_x19[3] = uVar5;
  uVar4 = *unaff_x19;
LAB_00706034:
  if (uVar4 < uVar2 || uVar4 - uVar2 == 0) {
    *(undefined8 *)(uVar3 + uVar4 * 8) = unaff_x21;
  }
  else {
    lVar1 = uVar3 + uVar2 * 8;
    FUN_00706078(lVar1 + 8,lVar1,(uVar4 - uVar2) * 8);
    uVar4 = *unaff_x19;
    *(undefined8 *)(unaff_x19[1] + uVar2 * 8) = unaff_x21;
  }
  *unaff_x19 = uVar4 + 1;
  *(undefined4 *)(unaff_x19 + 2) = 0;
  return;
}



/* Entry: 00702d58; end: 00702dd3;  */

char * FUN_00702d58(char *param_1,int param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  
  puVar3 = &UNK_0091b9e5;
  if (param_2 == 0x1e) {
    puVar3 = &UNK_0091b9d2;
  }
  puVar2 = &UNK_0091b9dc;
  if (param_2 != 0x14) {
    puVar2 = puVar3;
  }
  puVar3 = &UNK_0091b9c8;
  if (param_2 != 10) {
    puVar3 = puVar2;
  }
  func_0x00703fb0(param_1,&UNK_0091b9ee);
  func_0x00703fb0(param_1,puVar3);
  lVar5 = 0;
  pcVar1 = param_1 + 0x400;
  for (; (pcVar4 = pcVar1, lVar6 = 0x400, 0x400 - lVar5 != 0 &&
         (pcVar4 = param_1, lVar6 = lVar5, *param_1 != '\0')); param_1 = param_1 + 1) {
    lVar5 = lVar5 + 1;
  }
  FUN_00702124(pcVar4,"\n",0x400 - lVar5);
  return pcVar4 + lVar6;
}



/* Entry: 00702dd4; end: 00702e8b;  */

void FUN_00702dd4(long param_1,undefined8 param_2,uint param_3,byte *param_4)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x00703fb0(param_1,&UNK_0091ba0d);
  func_0x00703fb0(param_1,param_2);
  func_0x00703fb0(param_1,",");
  lVar2 = param_1;
  _strlen();
  if ((int)((int)lVar2 + param_3 * 2) < 0x400) {
    param_1 = param_1 + (int)lVar2;
    uVar3 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU));
    puVar1 = (undefined1 *)(param_1 + 1);
    for (uVar4 = uVar3; uVar4 != 0; uVar4 = uVar4 - 1) {
      puVar1[-1] = (&UNK_0091b9fc)[*param_4 >> 4];
      *puVar1 = (&UNK_0091b9fc)[(ulong)*param_4 & 0xf];
      puVar1 = puVar1 + 2;
      param_4 = param_4 + 1;
    }
    *(undefined2 *)(param_1 + uVar3 * 2) = 10;
  }
  return;
}



/* Entry: 00702e8c; end: 0070360b;  */

/* WARNING: Possible PIC construction at 0x00702f0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00702f10) */
/* WARNING: Removing unreachable block (ram,0x007030d4) */
/* WARNING: Removing unreachable block (ram,0x007030ec) */
/* WARNING: Removing unreachable block (ram,0x00703100) */
/* WARNING: Removing unreachable block (ram,0x00702f14) */
/* WARNING: Removing unreachable block (ram,0x00702f28) */
/* WARNING: Removing unreachable block (ram,0x00702fe0) */
/* WARNING: Removing unreachable block (ram,0x00702ff4) */
/* WARNING: Removing unreachable block (ram,0x00703008) */
/* WARNING: Removing unreachable block (ram,0x0070301c) */
/* WARNING: Removing unreachable block (ram,0x00703030) */
/* WARNING: Removing unreachable block (ram,0x00702f38) */
/* WARNING: Removing unreachable block (ram,0x00702f4c) */
/* WARNING: Removing unreachable block (ram,0x00702f5c) */
/* WARNING: Removing unreachable block (ram,0x00702f6c) */
/* WARNING: Removing unreachable block (ram,0x00702f80) */
/* WARNING: Removing unreachable block (ram,0x00702f94) */
/* WARNING: Removing unreachable block (ram,0x00702f9c) */
/* WARNING: Removing unreachable block (ram,0x00702fa0) */
/* WARNING: Removing unreachable block (ram,0x00702fa8) */
/* WARNING: Removing unreachable block (ram,0x00702fac) */
/* WARNING: Removing unreachable block (ram,0x00702fc0) */
/* WARNING: Removing unreachable block (ram,0x00702fd0) */
/* WARNING: Removing unreachable block (ram,0x0070303c) */
/* WARNING: Removing unreachable block (ram,0x0070305c) */
/* WARNING: Removing unreachable block (ram,0x00703070) */
/* WARNING: Removing unreachable block (ram,0x007030b4) */
/* WARNING: Removing unreachable block (ram,0x0070308c) */
/* WARNING: Removing unreachable block (ram,0x00703134) */
/* WARNING: Removing unreachable block (ram,0x007030bc) */
/* WARNING: Removing unreachable block (ram,0x007030a4) */
/* WARNING: Removing unreachable block (ram,0x007030c0) */
/* WARNING: Removing unreachable block (ram,0x007030c8) */
/* WARNING: Removing unreachable block (ram,0x00703104) */
/* WARNING: Removing unreachable block (ram,0x00703140) */
/* WARNING: Removing unreachable block (ram,0x00703110) */
/* WARNING: Removing unreachable block (ram,0x00703044) */

char * FUN_00702e8c(void)

{
  ulong uVar1;
  byte bVar2;
  bool bVar3;
  dword *pdVar4;
  undefined1 in_ZR;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  qword *pqVar13;
  char *in_x4;
  undefined8 extraout_x8;
  uint uVar14;
  uint uVar15;
  char *pcVar16;
  long lVar17;
  ulong uVar18;
  dword *pdVar19;
  byte *pbVar20;
  long lVar21;
  int iVar22;
  ulong uVar23;
  int iStack_294;
  char acStack_290 [9];
  undefined8 uStack_287;
  undefined1 uStack_192;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_140;
  undefined *puStack_138;
  qword aqStack_88 [5];
  
  func_0x00703f80();
  aqStack_88[0] = 0;
  pqVar13 = aqStack_88;
  puStack_140 = &UNK_0091bab1;
  puStack_138 = &UNK_0091ba4d;
  func_0x00703f80();
  iStack_294 = 0;
  uStack_158 = extraout_x8;
  FUN_006d33c4();
  pcVar9 = in_x4;
  FUN_006d33c4();
  pcVar7 = pcVar9;
  FUN_006d33c4();
  if (((in_x4 == (char *)0x0) || (pcVar9 == (char *)0x0)) || (pcVar7 == (char *)0x0)) {
    func_0x006d3400(in_x4);
    func_0x006d3400(pcVar9);
    func_0x006d3400(pcVar7);
    func_0x00703f90();
    func_0x00703f50();
LAB_00703544:
    pcVar9 = (char *)0x0;
  }
  else {
    uStack_192 = 0;
    pcVar8 = pcVar7;
    do {
      do {
        func_0x00703f70();
        uVar5 = (uint)pcVar8;
        in_ZR = uVar5 == 1;
        pcVar16 = pcVar7;
        iVar6 = iStack_294;
        if ((int)uVar5 < 1) goto LAB_00703520;
        while (-1 < (int)uVar5) {
          iVar6 = (int)pcVar8;
          in_ZR = acStack_290[(ulong)pcVar8 & 0xffffffff] == ' ';
          if (' ' < acStack_290[(ulong)pcVar8 & 0xffffffff]) goto LAB_007031f8;
          uVar5 = iVar6 - 1;
          pcVar8 = (char *)(ulong)uVar5;
        }
        iVar6 = -1;
LAB_007031f8:
        acStack_290[iVar6 + 1] = '\n';
        acStack_290[iVar6 + 2] = '\0';
        pcVar8 = acStack_290;
        pqVar13 = (qword *)&UNK_0091ba30;
        _memcmp(pcVar8,&UNK_0091ba30,0xb);
      } while ((int)pcVar8 != 0);
      lVar17 = (long)&uStack_287 + 2;
      _strlen();
      pcVar8 = acStack_290 + ((lVar17 << 0x20) + 0x500000000 >> 0x20);
      pqVar13 = (qword *)&UNK_0091ba3c;
      _strncmp(pcVar8,&UNK_0091ba3c,6);
    } while ((int)pcVar8 != 0);
    pqVar13 = (qword *)((lVar17 << 0x20) + 0x900000000 >> 0x20);
    pcVar8 = in_x4;
    func_0x006d34ac();
    iVar6 = iStack_294;
    if (pcVar8 == (char *)0x0) {
LAB_00703520:
      iStack_294 = iVar6;
      func_0x00703f90();
      func_0x00703f50();
LAB_0070352c:
      func_0x006d3400(in_x4);
      func_0x006d3400(pcVar9);
      func_0x006d3400(pcVar16);
      goto LAB_00703544;
    }
    lVar17 = (lVar17 << 0x20) + -0x600000000 >> 0x20;
    func_0x00703f44(*(undefined8 *)(in_x4 + 8),(long)&uStack_287 + 2,lVar17);
    *(undefined1 *)(*(long *)(in_x4 + 8) + lVar17) = 0;
    pqVar13 = (qword *)&section_000000b8.reserved2;
    pcVar8 = pcVar9;
    func_0x006d34ac();
    iVar6 = iStack_294;
    if (pcVar8 == (char *)0x0) goto LAB_00703520;
    **(undefined1 **)(pcVar9 + 8) = 0;
    uVar18 = 0;
    while( true ) {
      func_0x00703f70();
      uVar5 = (uint)pcVar8;
      in_ZR = uVar5 == 1;
      if ((int)uVar5 < 1) break;
      while (-1 < (int)uVar5) {
        iVar6 = (int)pcVar8;
        if (' ' < acStack_290[(ulong)pcVar8 & 0xffffffff]) goto LAB_007032d8;
        uVar5 = iVar6 - 1;
        pcVar8 = (char *)(ulong)uVar5;
      }
      iVar6 = -1;
LAB_007032d8:
      acStack_290[iVar6 + 1] = '\n';
      uVar23 = (ulong)(iVar6 + 2);
      acStack_290[uVar23] = '\0';
      in_ZR = acStack_290[0] == '\n';
      if ((bool)in_ZR) break;
      uVar1 = uVar23 + (uVar18 & 0xffffffff);
      pqVar13 = (qword *)(ulong)((int)uVar1 + 9);
      pcVar8 = pcVar9;
      func_0x006d34ac();
      iVar6 = iStack_294;
      if (pcVar8 == (char *)0x0) goto LAB_00703520;
      pcVar8 = acStack_290;
      func_0x00703ff8(pcVar8,&UNK_0091ba43);
      if ((int)pcVar8 == 0) {
        bVar3 = false;
        goto LAB_00703378;
      }
      pcVar8 = (char *)(*(long *)(pcVar9 + 8) + (uVar18 & 0xffffffff));
      func_0x00703f44(pcVar8,acStack_290,uVar23);
      *(undefined1 *)(*(long *)(pcVar9 + 8) + uVar1) = 0;
      uVar18 = uVar1;
    }
    bVar3 = true;
LAB_00703378:
    iStack_294 = 0;
    pqVar13 = &section_000003d8.size;
    pcVar8 = pcVar7;
    func_0x006d34ac();
    iVar6 = iStack_294;
    if (pcVar8 == (char *)0x0) goto LAB_00703520;
    **(undefined1 **)(pcVar7 + 8) = 0;
    if (bVar3) {
      uVar18 = 0;
      do {
        func_0x00703f70();
        uVar5 = (uint)pcVar8;
        in_ZR = uVar5 == 1;
        iVar6 = (int)uVar18;
        if ((int)uVar5 < 1) goto LAB_007034a8;
        while (-1 < (int)uVar5) {
          iVar22 = (int)pcVar8;
          if (' ' < acStack_290[(ulong)pcVar8 & 0xffffffff]) goto LAB_007033d8;
          uVar5 = iVar22 - 1;
          pcVar8 = (char *)(ulong)uVar5;
        }
        iVar22 = -1;
LAB_007033d8:
        acStack_290[iVar22 + 1] = '\n';
        uVar23 = (ulong)(iVar22 + 2U);
        acStack_290[uVar23] = '\0';
        pcVar8 = acStack_290;
        func_0x00703ff8(pcVar8,&UNK_0091ba43);
        in_ZR = iVar22 == 0x3f;
        if ((0x3f < iVar22) || ((int)pcVar8 == 0)) goto LAB_007034a8;
        pqVar13 = (qword *)(long)(iVar6 + iVar22 + 0xb);
        pcVar8 = pcVar7;
        func_0x006d34ac();
        if (pcVar8 == (char *)0x0) goto LAB_00703520;
        pcVar8 = (char *)(*(long *)(pcVar7 + 8) + (uVar18 & 0xffffffff));
        func_0x00703f44(pcVar8,acStack_290,uVar23);
        uVar18 = uVar23 + (uVar18 & 0xffffffff);
        *(undefined1 *)(*(long *)(pcVar7 + 8) + uVar18) = 0;
      } while (iVar22 + 2U == 0x41);
      iStack_294 = (int)uVar18;
      acStack_290[0] = '\0';
      func_0x00703f70();
      uVar5 = (uint)pcVar8;
      in_ZR = uVar5 == 1;
      iVar6 = iStack_294;
      if (0 < (int)uVar5) {
        while (-1 < (int)uVar5) {
          iVar6 = (int)pcVar8;
          in_ZR = acStack_290[(ulong)pcVar8 & 0xffffffff] == ' ';
          if (' ' < acStack_290[(ulong)pcVar8 & 0xffffffff]) goto LAB_00703474;
          uVar5 = iVar6 - 1;
          pcVar8 = (char *)(ulong)uVar5;
        }
        iVar6 = -1;
LAB_00703474:
        acStack_290[iVar6 + 1] = '\n';
        acStack_290[iVar6 + 2] = '\0';
        iVar6 = iStack_294;
      }
    }
    else {
      pcVar16 = pcVar9;
      pcVar9 = pcVar7;
      iVar6 = (int)uVar18;
    }
LAB_007034a8:
    iStack_294 = iVar6;
    pqVar13 = (qword *)&UNK_0091ba43;
    iVar22 = (int)acStack_290;
    func_0x00703ff8();
    iVar6 = iStack_294;
    if (iVar22 != 0) goto LAB_00703520;
    lVar21 = *(long *)(in_x4 + 8);
    lVar17 = lVar21;
    _strlen();
    pqVar13 = &uStack_287;
    _strncmp(lVar21,pqVar13,(long)(int)lVar17);
    iVar6 = iStack_294;
    if ((int)lVar21 != 0) goto LAB_00703520;
    pcVar7 = acStack_290 + ((lVar17 << 0x20) + 0x900000000 >> 0x20);
    pqVar13 = (qword *)&UNK_0091ba3c;
    _strncmp(pcVar7,&UNK_0091ba3c,6);
    iVar6 = iStack_294;
    if ((int)pcVar7 != 0) goto LAB_00703520;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    pqVar13 = *(qword **)(pcVar16 + 8);
    puVar10 = &uStack_190;
    FUN_006d13d8(puVar10,pqVar13,&iStack_294,pqVar13,uVar18 & 0xffffffff);
    iVar6 = iStack_294;
    if ((((int)puVar10 < 0) || (uStack_160._5_1_ != '\0')) || ((int)uStack_190 != 0))
    goto LAB_00703520;
    if (iStack_294 == 0) goto LAB_0070352c;
    aqStack_88[0] = *(qword *)(in_x4 + 8);
    func_0x00701ed0(in_x4);
    func_0x00703fdc();
    func_0x00703fe4();
    pcVar9 = (char *)((long)&MACH_HEADER.magic + 1);
  }
  func_0x00703f5c(uStack_158);
  if ((bool)in_ZR) {
    return pcVar9;
  }
  ___stack_chk_fail();
  *pqVar13 = 0;
  pdVar19 = (dword *)(pqVar13 + 1);
  *(undefined8 *)pdVar19 = 0;
  pqVar13[2] = 0;
  if ((pcVar9 == (char *)0x0) || (*pcVar9 == '\0' || *pcVar9 == '\n')) {
LAB_00703648:
    return (char *)((long)&MACH_HEADER.magic + 1);
  }
  pcVar7 = pcVar9;
  _strncmp(pcVar9,&UNK_0091ba24,0xb);
  if ((int)pcVar7 == 0) {
    if (pcVar9[0xb] != '4') {
      return (char *)0x0;
    }
    if (pcVar9[0xc] != ',') {
      return (char *)0x0;
    }
    pcVar7 = pcVar9 + 0xd;
    _strncmp(pcVar7,&UNK_0091b9c8,9);
    if ((int)pcVar7 == 0) {
      for (pbVar12 = (byte *)(pcVar9 + 0x18); pbVar12[-0xb] != 0; pbVar12 = pbVar12 + 1) {
        if (pbVar12[-0xb] == 10) {
          pbVar11 = pbVar12 + -10;
          _strncmp(pbVar11,&UNK_0091ba0d,10);
          pbVar20 = pbVar12;
          if ((int)pbVar11 == 0) goto LAB_00703714;
          break;
        }
      }
    }
  }
LAB_00703670:
  func_0x00703f90();
  func_0x00703f50();
  return (char *)0x0;
LAB_00703714:
  do {
    do {
      pbVar11 = pbVar20;
      pbVar20 = pbVar11 + 1;
      bVar2 = *pbVar11;
    } while (bVar2 - 0x30 < 10);
  } while (bVar2 == 0x2d || bVar2 - 0x41 < 0x1a);
  *pbVar11 = 0;
  FUN_00703bfc();
  *pqVar13 = (qword)pbVar12;
  *pbVar11 = bVar2;
  if ((pbVar12 != (byte *)0x0) && (uVar5 = *(uint *)(pbVar12 + 0xc), 7 < uVar5)) {
    pdVar4 = pdVar19;
    for (uVar18 = (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)); uVar18 != 0;
        uVar18 = uVar18 - 1) {
      *(undefined1 *)pdVar4 = 0;
      pdVar4 = (dword *)((long)pdVar4 + 1);
    }
    uVar14 = 0;
    for (lVar17 = 0; (uVar5 << 1 & ((int)(uVar5 << 1) >> 0x1f ^ 0xffffffffU)) != (uint)lVar17;
        lVar17 = lVar17 + 1) {
      bVar2 = pbVar20[lVar17];
      uVar15 = bVar2 - 0x30;
      if (uVar15 < 10) {
        uVar15 = uVar15 & 0xff;
      }
      else {
        uVar15 = (uint)bVar2;
        if (bVar2 - 0x41 < 6) {
          uVar15 = uVar15 - 0x37;
        }
        else {
          if (5 < uVar15 - 0x61) goto LAB_00703670;
          uVar15 = uVar15 - 0x57;
        }
      }
      uVar18 = (ulong)((uint)lVar17 >> 1);
      *(byte *)((long)pdVar19 + uVar18) =
           *(byte *)((long)pdVar19 + uVar18) | (byte)(uVar15 << (ulong)((uVar14 ^ 0xffffffff) & 4));
      uVar14 = uVar14 + 4;
    }
    goto LAB_00703648;
  }
  goto LAB_00703670;
}



/* Entry: 0070360c; end: 007037f7;  */

undefined8 FUN_0070360c(char *param_1,undefined8 *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined8 *puVar3;
  char *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  
  *param_2 = 0;
  puVar11 = param_2 + 1;
  *puVar11 = 0;
  param_2[2] = 0;
  if (param_1 == (char *)0x0) {
    return 1;
  }
  if (*param_1 == '\0' || *param_1 == '\n') {
    return 1;
  }
  pcVar4 = param_1;
  _strncmp(param_1,&UNK_0091ba24,0xb);
  if ((int)pcVar4 == 0) {
    if (param_1[0xb] != '4') {
      return 0;
    }
    if (param_1[0xc] != ',') {
      return 0;
    }
    pcVar4 = param_1 + 0xd;
    _strncmp(pcVar4,&UNK_0091b9c8,9);
    if ((int)pcVar4 == 0) {
      for (pbVar6 = (byte *)(param_1 + 0x18); pbVar6[-0xb] != 0; pbVar6 = pbVar6 + 1) {
        if (pbVar6[-0xb] == 10) {
          pbVar5 = pbVar6 + -10;
          _strncmp(pbVar5,&UNK_0091ba0d,10);
          pbVar12 = pbVar6;
          if ((int)pbVar5 == 0) goto LAB_00703714;
          break;
        }
      }
    }
  }
  goto LAB_00703670;
LAB_00703714:
  do {
    do {
      pbVar5 = pbVar12;
      pbVar12 = pbVar5 + 1;
      bVar2 = *pbVar5;
    } while (bVar2 - 0x30 < 10);
  } while (bVar2 == 0x2d || bVar2 - 0x41 < 0x1a);
  *pbVar5 = 0;
  FUN_00703bfc();
  *param_2 = pbVar6;
  *pbVar5 = bVar2;
  if ((pbVar6 != (byte *)0x0) && (uVar1 = *(uint *)(pbVar6 + 0xc), 7 < uVar1)) {
    puVar3 = puVar11;
    for (uVar7 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar7 != 0; uVar7 = uVar7 - 1)
    {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined8 *)((long)puVar3 + 1);
    }
    uVar9 = 0;
    lVar8 = 0;
    do {
      if ((uVar1 << 1 & ((int)(uVar1 << 1) >> 0x1f ^ 0xffffffffU)) == (uint)lVar8) {
        return 1;
      }
      bVar2 = pbVar12[lVar8];
      uVar10 = bVar2 - 0x30;
      if (uVar10 < 10) {
        uVar10 = uVar10 & 0xff;
      }
      else {
        uVar10 = (uint)bVar2;
        if (bVar2 - 0x41 < 6) {
          uVar10 = uVar10 - 0x37;
        }
        else {
          if (5 < uVar10 - 0x61) break;
          uVar10 = uVar10 - 0x57;
        }
      }
      uVar7 = (ulong)((uint)lVar8 >> 1);
      *(byte *)((long)puVar11 + uVar7) =
           *(byte *)((long)puVar11 + uVar7) | (byte)(uVar10 << (ulong)((uVar9 ^ 0xffffffff) & 4));
      uVar9 = uVar9 + 4;
      lVar8 = lVar8 + 1;
    } while( true );
  }
LAB_00703670:
  func_0x00703f90();
  func_0x00703f50();
  return 0;
}



/* Entry: 007037f8; end: 00703983;  */

code * FUN_007037f8(long *param_1,section *param_2,section *param_3,section *param_4,
                   section *param_5,section *param_6,int param_7,code *param_8)

{
  uint uVar1;
  dword dVar2;
  undefined1 in_ZR;
  int iVar3;
  section *psVar4;
  section *psVar5;
  dword *pdVar6;
  ulong uVar7;
  ulong uVar8;
  section *psVar9;
  section *psVar10;
  section *psVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  section *psVar12;
  long lVar13;
  code *pcVar14;
  section *psStack_aa0;
  int iStack_a98;
  int iStack_a94;
  section sStack_a90;
  section asStack_a40 [12];
  section sStack_640;
  undefined8 uStack_5b0;
  undefined8 uStack_540;
  undefined1 auStack_538 [1032];
  section asStack_130 [2];
  undefined8 uStack_58;
  
  func_0x00703f80();
  auStack_538._4_4_ = 0;
  psVar10 = param_3;
  psVar12 = param_5;
  uStack_58 = extraout_x8;
  if (*param_1 == 0) {
LAB_0070391c:
    pcVar14 = (code *)((long)&MACH_HEADER.magic + 1);
    psVar5 = param_2;
    param_5 = param_4;
    psVar11 = psVar12;
  }
  else {
    psVar12 = *(section **)param_3->sectname;
    psVar10 = (section *)FUN_00703ca8;
    if (param_4 != (section *)0x0) {
      psVar10 = param_4;
    }
    psVar4 = (section *)(auStack_538 + 8);
    psVar5 = (section *)&section_000003d8.size;
    psVar11 = param_5;
    (*(code *)psVar10)(psVar4,0x400,0);
    in_ZR = (int)psVar4 == 0;
    if ((int)psVar4 < 1) {
      func_0x00703f90();
      psVar10 = &section_00000068;
    }
    else {
      psVar9 = (section *)(param_1 + 1);
      pcVar14 = (code *)*param_1;
      psVar5 = psVar4;
      FUN_006eaa70();
      psVar11 = (section *)((ulong)psVar4 & 0xffffffff);
      param_5 = (section *)(auStack_538 + 8);
      param_7 = (int)asStack_130;
      psVar10 = psVar9;
      func_0x00703fec(pcVar14,psVar5);
      if ((int)pcVar14 == 0) goto LAB_00703958;
      _bzero(&asStack_130[0].reserved2,0x90);
      psVar10 = (section *)*param_1;
      pdVar6 = &asStack_130[0].reserved2;
      param_4 = asStack_130;
      func_0x006e9ef0(pdVar6,psVar10,0);
      if ((int)pdVar6 == 0) {
LAB_00703930:
        psVar12 = psVar9;
        param_2 = psVar10;
        func_0x006e9cd4(&asStack_130[0].reserved2);
        func_0x00703fd0();
      }
      else {
        pdVar6 = &asStack_130[0].reserved2;
        psVar10 = param_2;
        param_4 = param_2;
        FUN_006ea13c(pdVar6,param_2,auStack_538 + 4);
        psVar9 = psVar12;
        if ((int)pdVar6 == 0) goto LAB_00703930;
        lVar13 = (long)(int)auStack_538._4_4_;
        pdVar6 = &asStack_130[0].reserved2;
        param_2 = (section *)((long)param_2->sectname + lVar13);
        psVar10 = (section *)auStack_538;
        FUN_006ea28c(pdVar6,param_2);
        func_0x006e9cd4(&asStack_130[0].reserved2);
        func_0x00703fd0();
        asStack_130[0].size = 0;
        asStack_130[0].addr = 0;
        asStack_130[0].reloff = 0;
        asStack_130[0].nrelocs = 0;
        asStack_130[0].offset = 0;
        asStack_130[0].align = 0;
        asStack_130[0].sectname[8] = '\0';
        asStack_130[0].sectname[9] = '\0';
        asStack_130[0].sectname[10] = '\0';
        asStack_130[0].sectname[0xb] = '\0';
        asStack_130[0].sectname[0xc] = '\0';
        asStack_130[0].sectname[0xd] = '\0';
        asStack_130[0].sectname[0xe] = '\0';
        asStack_130[0].sectname[0xf] = '\0';
        asStack_130[0].sectname[0] = '\0';
        asStack_130[0].sectname[1] = '\0';
        asStack_130[0].sectname[2] = '\0';
        asStack_130[0].sectname[3] = '\0';
        asStack_130[0].sectname[4] = '\0';
        asStack_130[0].sectname[5] = '\0';
        asStack_130[0].sectname[6] = '\0';
        asStack_130[0].sectname[7] = '\0';
        asStack_130[0].segname[8] = '\0';
        asStack_130[0].segname[9] = '\0';
        asStack_130[0].segname[10] = '\0';
        asStack_130[0].segname[0xb] = '\0';
        asStack_130[0].segname[0xc] = '\0';
        asStack_130[0].segname[0xd] = '\0';
        asStack_130[0].segname[0xe] = '\0';
        asStack_130[0].segname[0xf] = '\0';
        asStack_130[0].segname[0] = '\0';
        asStack_130[0].segname[1] = '\0';
        asStack_130[0].segname[2] = '\0';
        asStack_130[0].segname[3] = '\0';
        asStack_130[0].segname[4] = '\0';
        asStack_130[0].segname[5] = '\0';
        asStack_130[0].segname[6] = '\0';
        asStack_130[0].segname[7] = '\0';
        if ((int)pdVar6 != 0) {
          *(long *)param_3->sectname = (int)auStack_538._0_4_ + lVar13;
          goto LAB_0070391c;
        }
      }
      asStack_130[0].reloff = 0;
      asStack_130[0].nrelocs = 0;
      asStack_130[0].offset = 0;
      asStack_130[0].align = 0;
      asStack_130[0].size = 0;
      asStack_130[0].addr = 0;
      asStack_130[0].segname[8] = '\0';
      asStack_130[0].segname[9] = '\0';
      asStack_130[0].segname[10] = '\0';
      asStack_130[0].segname[0xb] = '\0';
      asStack_130[0].segname[0xc] = '\0';
      asStack_130[0].segname[0xd] = '\0';
      asStack_130[0].segname[0xe] = '\0';
      asStack_130[0].segname[0xf] = '\0';
      asStack_130[0].segname[0] = '\0';
      asStack_130[0].segname[1] = '\0';
      asStack_130[0].segname[2] = '\0';
      asStack_130[0].segname[3] = '\0';
      asStack_130[0].segname[4] = '\0';
      asStack_130[0].segname[5] = '\0';
      asStack_130[0].segname[6] = '\0';
      asStack_130[0].segname[7] = '\0';
      asStack_130[0].sectname[8] = '\0';
      asStack_130[0].sectname[9] = '\0';
      asStack_130[0].sectname[10] = '\0';
      asStack_130[0].sectname[0xb] = '\0';
      asStack_130[0].sectname[0xc] = '\0';
      asStack_130[0].sectname[0xd] = '\0';
      asStack_130[0].sectname[0xe] = '\0';
      asStack_130[0].sectname[0xf] = '\0';
      asStack_130[0].sectname[0] = '\0';
      asStack_130[0].sectname[1] = '\0';
      asStack_130[0].sectname[2] = '\0';
      asStack_130[0].sectname[3] = '\0';
      asStack_130[0].sectname[4] = '\0';
      asStack_130[0].sectname[5] = '\0';
      asStack_130[0].sectname[6] = '\0';
      asStack_130[0].sectname[7] = '\0';
      func_0x00703f90();
      psVar10 = (section *)((long)&segment_command_00000020.flags + 1);
      psVar5 = param_2;
      param_5 = param_4;
      psVar11 = psVar12;
    }
    func_0x00703f50();
    pcVar14 = (code *)0x0;
  }
LAB_00703958:
  func_0x00703f5c(uStack_58);
  if ((bool)in_ZR) {
    return pcVar14;
  }
  ___stack_chk_fail();
  psVar12 = psVar11;
  func_0x00703f80();
  uStack_5b0 = extraout_x8_00;
  if (psVar12 == (section *)0x0) {
    uVar7 = 0;
LAB_00703a04:
    psVar12 = param_5;
    (*pcVar14)(param_5,0);
    iVar3 = (int)psVar12;
    if (-1 < iVar3) {
      psVar12 = (section *)(ulong)(iVar3 + 0x14);
      FUN_00701e90();
      if (psVar12 == (section *)0x0) {
        func_0x00703f90();
        psVar4 = psVar12;
LAB_00703b7c:
        func_0x00703f50();
      }
      else {
        psStack_aa0 = psVar12;
        (*pcVar14)(param_5,&psStack_aa0);
        iStack_a94 = (int)param_5;
        if (psVar11 == (section *)0x0) {
          asStack_a40[0].sectname[0] = '\0';
LAB_00703b8c:
          FUN_00703d14(psVar10,psVar5,asStack_a40,psVar12,(long)(int)param_5);
          iVar3 = (int)psVar10;
          in_ZR = iVar3 == 0;
          pcVar14 = (code *)(ulong)(0 < iVar3);
          goto LAB_00703bac;
        }
        dVar2 = *(dword *)((long)psVar11->sectname + 0xc);
        if (param_6 == (section *)0x0) {
          pcVar14 = FUN_00703ca8;
          if (param_8 != (code *)0x0) {
            pcVar14 = param_8;
          }
          param_6 = asStack_a40;
          psVar4 = asStack_a40;
          (*pcVar14)(psVar4,0x400,1,uStack_540);
          param_7 = (int)psVar4;
          in_ZR = param_7 == 0;
          if (param_7 < 1) {
            func_0x00703f90();
            goto LAB_00703b7c;
          }
        }
        psVar9 = &sStack_a90;
        FUN_006e92d4(psVar9,dVar2);
        psVar4 = psVar9;
        if ((int)psVar9 != 0) {
          FUN_006eaa70();
          psVar4 = psVar11;
          func_0x00703fec(psVar11,psVar9,&sStack_a90,param_6,(long)param_7);
          if ((int)psVar4 != 0) {
            in_ZR = param_6 == asStack_a40;
            if ((bool)in_ZR) {
              _bzero(asStack_a40[0].sectname + 1,0x3ff);
            }
            asStack_a40[0].sectname[0] = '\0';
            FUN_00702d58(asStack_a40,10);
            FUN_00702dd4(asStack_a40,uVar7,dVar2,&sStack_a90);
            _bzero(&sStack_640,0x90);
            psVar4 = &sStack_640;
            func_0x006e9ee8(psVar4,psVar11,0,sStack_a90.segname,&sStack_a90);
            if ((int)psVar4 != 0) {
              psVar4 = &sStack_640;
              FUN_006e9ef8(psVar4,psVar12,&iStack_a98,psVar12,param_5);
              if ((int)psVar4 != 0) {
                psVar4 = &sStack_640;
                FUN_006ea098(psVar4,(code *)((long)psVar12->sectname + (long)iStack_a98),&iStack_a94
                            );
                if ((int)psVar4 != 0) {
                  param_5 = (section *)(ulong)(uint)(iStack_a94 + iStack_a98);
                  func_0x006e9cd4(&sStack_640);
                  goto LAB_00703b8c;
                }
              }
            }
            psVar4 = &sStack_640;
            func_0x006e9cd4();
          }
        }
      }
      iVar3 = (int)psVar4;
      pcVar14 = (code *)0x0;
      goto LAB_00703bac;
    }
    func_0x00703f90();
  }
  else {
    uVar7 = (ulong)(uint)*(qword *)psVar11->sectname;
    FUN_007025a4();
    uVar8 = uVar7;
    if (((uVar7 != 0) && (FUN_00703bfc(), uVar8 != 0)) &&
       (uVar1 = *(dword *)((long)psVar11->sectname + 0xc), in_ZR = uVar1 == 7, 7 < uVar1))
    goto LAB_00703a04;
    iVar3 = (int)uVar8;
    func_0x00703f90();
  }
  func_0x00703f50();
  pcVar14 = (code *)0x0;
LAB_00703bac:
  func_0x00703fe4();
  func_0x00703f5c(uStack_5b0);
  if ((bool)in_ZR) {
    return pcVar14;
  }
  ___stack_chk_fail();
  _strcmp();
  if (iVar3 == 0) {
    pcVar14 = (code *)&UNK_00a11690;
  }
  else {
    func_0x00703fc8();
    if (iVar3 == 0) {
      pcVar14 = (code *)&UNK_00a116d0;
    }
    else {
      func_0x00703fc8();
      if (iVar3 == 0) {
        func_0x00706544(0xb299e8,FUN_006f85f8);
        return (code *)0xb6c8c0;
      }
      func_0x00703fc8();
      if (iVar3 == 0) {
        func_0x00706544(0xb29a08,FUN_006f8da8);
        return (code *)0xb6c940;
      }
      func_0x00703fc8();
      if (iVar3 == 0) {
        func_0x00706544(0xb29a18,0x6f8dd8);
        return (code *)0xb6c980;
      }
      pcVar14 = (code *)0x0;
    }
  }
  return pcVar14;
}



/* Entry: 00703984; end: 00703bfb;  */

/* WARNING: Type propagation algorithm not settling */

undefined *
FUN_00703984(code *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,uint *param_5,
            undefined1 *param_6,int param_7,code *param_8,undefined8 param_9)

{
  code *pcVar1;
  uint uVar2;
  undefined1 in_ZR;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  undefined8 extraout_x8;
  undefined *puVar9;
  uint *puStack_560;
  int iStack_558;
  int iStack_554;
  uint auStack_550 [4];
  undefined1 auStack_540 [64];
  undefined4 uStack_500;
  uint auStack_100 [36];
  undefined8 uStack_70;
  
  puVar6 = param_5;
  func_0x00703f80();
  uStack_70 = extraout_x8;
  if (puVar6 == (uint *)0x0) {
    uVar4 = 0;
LAB_00703a04:
    uVar5 = param_4;
    (*param_1)(param_4,0);
    iVar3 = (int)uVar5;
    if (-1 < iVar3) {
      puVar6 = (uint *)(ulong)(iVar3 + 0x14);
      FUN_00701e90();
      if (puVar6 == (uint *)0x0) {
        func_0x00703f90();
        puVar7 = puVar6;
LAB_00703b7c:
        func_0x00703f50();
      }
      else {
        puStack_560 = puVar6;
        (*param_1)(param_4,&puStack_560);
        iStack_554 = (int)param_4;
        if (param_5 == (uint *)0x0) {
          uStack_500._0_1_ = 0;
LAB_00703b8c:
          FUN_00703d14(param_3,param_2,&uStack_500,puVar6,(long)(int)param_4);
          iVar3 = (int)param_3;
          in_ZR = iVar3 == 0;
          puVar9 = (undefined *)(ulong)(0 < iVar3);
          goto LAB_00703bac;
        }
        uVar2 = param_5[3];
        if (param_6 == (undefined1 *)0x0) {
          pcVar1 = FUN_00703ca8;
          if (param_8 != (code *)0x0) {
            pcVar1 = param_8;
          }
          param_6 = (undefined1 *)&uStack_500;
          puVar7 = &uStack_500;
          (*pcVar1)(puVar7,0x400,1,param_9);
          param_7 = (int)puVar7;
          in_ZR = param_7 == 0;
          if (param_7 < 1) {
            func_0x00703f90();
            goto LAB_00703b7c;
          }
        }
        puVar8 = auStack_550;
        FUN_006e92d4(puVar8,uVar2);
        puVar7 = puVar8;
        if ((int)puVar8 != 0) {
          FUN_006eaa70();
          puVar7 = param_5;
          func_0x00703fec(param_5,puVar8,auStack_550,param_6,(long)param_7);
          if ((int)puVar7 != 0) {
            in_ZR = (undefined4 *)param_6 == &uStack_500;
            if ((bool)in_ZR) {
              _bzero((undefined1 *)((long)&uStack_500 + 1),0x3ff);
            }
            uStack_500._0_1_ = 0;
            FUN_00702d58(&uStack_500,10);
            FUN_00702dd4(&uStack_500,uVar4,uVar2,auStack_550);
            _bzero(auStack_100,0x90);
            puVar7 = auStack_100;
            FUN_006e9ee8(puVar7,param_5,0,auStack_540,auStack_550);
            if ((int)puVar7 != 0) {
              puVar7 = auStack_100;
              FUN_006e9ef8(puVar7,puVar6,&iStack_558,puVar6,param_4);
              if ((int)puVar7 != 0) {
                puVar7 = auStack_100;
                FUN_006ea098(puVar7,(long)puVar6 + (long)iStack_558,&iStack_554);
                if ((int)puVar7 != 0) {
                  param_4 = (ulong)(uint)(iStack_554 + iStack_558);
                  func_0x006e9cd4(auStack_100);
                  goto LAB_00703b8c;
                }
              }
            }
            puVar7 = auStack_100;
            func_0x006e9cd4();
          }
        }
      }
      iVar3 = (int)puVar7;
      puVar9 = (undefined *)0x0;
      goto LAB_00703bac;
    }
    func_0x00703f90();
  }
  else {
    uVar4 = (ulong)*param_5;
    FUN_007025a4();
    uVar5 = uVar4;
    if (((uVar4 != 0) && (FUN_00703bfc(), uVar5 != 0)) && (in_ZR = param_5[3] == 7, 7 < param_5[3]))
    goto LAB_00703a04;
    iVar3 = (int)uVar5;
    func_0x00703f90();
  }
  func_0x00703f50();
  puVar9 = (undefined *)0x0;
LAB_00703bac:
  func_0x00703fe4();
  func_0x00703f5c(uStack_70);
  if ((bool)in_ZR) {
    return puVar9;
  }
  ___stack_chk_fail();
  _strcmp();
  if (iVar3 == 0) {
    puVar9 = &UNK_00a11690;
  }
  else {
    func_0x00703fc8();
    if (iVar3 == 0) {
      puVar9 = &UNK_00a116d0;
    }
    else {
      func_0x00703fc8();
      if (iVar3 == 0) {
        func_0x00706544(0xb299e8,FUN_006f85f8);
        return (undefined *)0xb6c8c0;
      }
      func_0x00703fc8();
      if (iVar3 == 0) {
        func_0x00706544(0xb29a08,FUN_006f8da8);
        return (undefined *)0xb6c940;
      }
      func_0x00703fc8();
      if (iVar3 == 0) {
        func_0x00706544(0xb29a18,0x6f8dd8);
        return (undefined *)0xb6c980;
      }
      puVar9 = (undefined *)0x0;
    }
  }
  return puVar9;
}



/* Entry: 00703bfc; end: 00703ca7;  */

undefined * FUN_00703bfc(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  
  _strcmp(param_1,&UNK_0091bac5);
  iVar1 = (int)param_1;
  if (iVar1 == 0) {
    puVar2 = &UNK_00a11690;
  }
  else {
    func_0x00703fc8();
    if (iVar1 == 0) {
      puVar2 = &UNK_00a116d0;
    }
    else {
      func_0x00703fc8();
      if (iVar1 == 0) {
        func_0x00706544(0xb299e8,FUN_006f85f8);
        return (undefined *)0xb6c8c0;
      }
      func_0x00703fc8();
      if (iVar1 == 0) {
        func_0x00706544(0xb29a08,FUN_006f8da8);
        return (undefined *)0xb6c940;
      }
      func_0x00703fc8();
      if (iVar1 == 0) {
        func_0x00706544(0xb29a18,0x6f8dd8);
        return (undefined *)0xb6c980;
      }
      puVar2 = (undefined *)0x0;
    }
  }
  return puVar2;
}



/* Entry: 00703ca8; end: 00703d13;  */

ulong FUN_00703ca8(long param_1,uint param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (((-1 < (int)param_2) && (param_1 != 0)) && (param_4 != 0)) {
    uVar1 = param_4;
    _strlen();
    if (uVar1 < param_2) {
      FUN_00702124(param_1,param_4,param_2);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* Entry: 00703d14; end: 00703f43;  */

void FUN_00703d14(undefined8 param_1,long param_2,undefined8 param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 extraout_x8;
  int iVar9;
  long lVar10;
  int iStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar8 = param_2;
  func_0x00703f80();
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_68 = extraout_x8;
  _strlen();
  uVar5 = param_1;
  func_0x006d199c(param_1,&UNK_0091ba30,0xb);
  uVar2 = (int)uVar5 == 0xb;
  if ((bool)uVar2) {
    uVar5 = param_1;
    func_0x006d199c(param_1,param_2,lVar8);
    iVar3 = (int)uVar5;
    iVar9 = (int)lVar8;
    uVar2 = iVar3 == iVar9;
    if (!(bool)uVar2) goto LAB_00703f04;
    func_0x00703f9c();
    uVar2 = iVar3 == 6;
    if (!(bool)uVar2) goto LAB_00703f04;
    uVar5 = param_3;
    _strlen();
    iVar3 = (int)uVar5;
    uVar2 = iVar3 == 1;
    if (0 < iVar3) {
      uVar6 = param_1;
      func_0x006d199c(param_1,param_3,uVar5);
      uVar2 = 0;
      if ((int)uVar6 == iVar3) {
        uVar5 = param_1;
        func_0x006d199c(param_1,"\n",1);
        uVar2 = (int)uVar5 == 1;
        if ((bool)uVar2) goto LAB_00703df4;
      }
      goto LAB_00703f04;
    }
LAB_00703df4:
    lVar7 = 0x2000;
    FUN_00701e90();
    if (lVar7 != 0) {
      iVar3 = 0;
      lVar10 = 0;
      for (; 0 < (long)param_5; param_5 = param_5 - uVar1) {
        uVar1 = param_5;
        if (0x13ff < param_5) {
          uVar1 = 0x1400;
        }
        FUN_006d10d8(&uStack_a0,lVar7,&iStack_a4,param_4 + lVar10,uVar1);
        iVar4 = iStack_a4;
        if (iStack_a4 != 0) {
          uVar5 = param_1;
          func_0x006d199c(param_1,lVar7,iStack_a4);
          uVar2 = (int)uVar5 == iVar4;
          if (!(bool)uVar2) goto LAB_00703efc;
        }
        iVar3 = iVar4 + iVar3;
        lVar10 = lVar10 + uVar1;
      }
      FUN_006d132c(&uStack_a0,lVar7,&iStack_a4);
      if (0 < iStack_a4) {
        uVar5 = param_1;
        func_0x006d199c(param_1,lVar7,iStack_a4);
        uVar2 = (int)uVar5 == iStack_a4;
        if (!(bool)uVar2) {
LAB_00703efc:
          func_0x00701ed0(lVar7);
          goto LAB_00703f04;
        }
      }
      func_0x00701ed0(lVar7);
      uVar5 = param_1;
      func_0x006d199c(param_1,&UNK_0091ba43,9);
      uVar2 = 0;
      if ((int)uVar5 == 9) {
        func_0x006d199c(param_1,param_2);
        iVar4 = (int)param_1;
        uVar2 = 0;
        if (iVar4 == iVar9) {
          func_0x00703f9c();
          uVar2 = iVar4 == 6;
          if ((bool)uVar2) {
            iStack_a4 = iStack_a4 + iVar3;
            goto LAB_00703f14;
          }
        }
      }
      goto LAB_00703f04;
    }
    lVar8 = 0x41;
  }
  else {
LAB_00703f04:
    lVar8 = 7;
  }
  func_0x00703f90();
  func_0x00703f50();
  iStack_a4 = 0;
LAB_00703f14:
  func_0x00703f5c(uStack_68,iStack_a4);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_0099a3f8)();
    return;
  }
  return;
}



/* Entry: 00703f44; end: 00703fff;  */

void FUN_00703f44(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_0099a3f8)();
    return;
  }
  return;
}



/* Entry: 00704000; end: 00704097;  */

long FUN_00704000(code *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  puVar1 = &uStack_30;
  FUN_00702e8c(puVar1,&uStack_38,0,param_2,param_3,param_5,param_6);
  if ((int)puVar1 == 0) {
    param_4 = 0;
  }
  else {
    uStack_28 = uStack_30;
    (*param_1)(param_4,&uStack_28,uStack_38);
    if (param_4 == 0) {
      FUN_006de8e4(9,0,0xc,0,0);
    }
    func_0x00701ed0(uStack_30);
  }
  return param_4;
}



/* Entry: 00704098; end: 007042d3;  */

/* WARNING: Possible PIC construction at 0x00704268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x007042c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x007042c4) */
/* WARNING: Removing unreachable block (ram,0x0070426c) */

dword * FUN_00704098(undefined8 param_1,long *param_2,code *param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint ****ppppuVar5;
  uint ****ppppuVar6;
  uint ****ppppuVar7;
  dword *pdVar8;
  dword *pdVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 uStack_468;
  uint ***pppuStack_460;
  uint ***pppuStack_458;
  undefined8 uStack_450;
  undefined1 auStack_448 [1024];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_450 = 0;
  pppuStack_460 = (uint ***)0x0;
  ppppuVar7 = &pppuStack_460;
  puVar11 = &uStack_450;
  FUN_00702e8c(ppppuVar7,&uStack_468,puVar11,&UNK_0091ba4d,param_1,param_3,param_4);
  uVar4 = (uint)puVar11;
  if ((int)ppppuVar7 == 0) {
    pdVar9 = (dword *)0x0;
LAB_00704280:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return pdVar9;
    }
    ___stack_chk_fail();
  }
  else {
    pppuStack_458 = pppuStack_460;
    func_0x007042e0();
    iVar3 = (int)ppppuVar7;
    if (iVar3 == 0) {
      pdVar8 = (dword *)0x0;
      func_0x00704f88(0,&pppuStack_458);
      uVar4 = (uint)uStack_468;
      if (pdVar8 != (dword *)0x0) {
LAB_00704188:
        pdVar9 = pdVar8;
        FUN_00704fac();
        if (param_2 != (long *)0x0) {
          if (*param_2 != 0) {
            func_0x006df294();
          }
          *param_2 = (long)pdVar9;
        }
        func_0x00704fa0(pdVar8);
        goto LAB_00704258;
      }
    }
    else {
      func_0x007042e0();
      if (iVar3 == 0) {
        pdVar9 = (dword *)0x0;
        func_0x0070e53c(0,&pppuStack_458);
        uVar4 = (uint)uStack_468;
        if (pdVar9 != (dword *)0x0) {
          pcVar2 = FUN_00703ca8;
          if (param_3 != (code *)0x0) {
            pcVar2 = param_3;
          }
          puVar10 = auStack_448;
          (*pcVar2)(puVar10,0x400,0,param_4);
          uVar4 = (uint)puVar10;
          if ((int)uVar4 < 1) {
            ppppuVar7 = (uint ****)((long)&MACH_HEADER.cpusubtype + 1);
            uVar4 = 0x68;
            goto FUN_006de8e4;
          }
          pdVar8 = pdVar9;
          func_0x007050f8(pdVar9,auStack_448);
          func_0x0070e554(pdVar9);
          FUN_00701f08(auStack_448,(ulong)puVar10 & 0xffffffff);
          if (pdVar8 != (dword *)0x0) goto LAB_00704188;
        }
        pdVar9 = (dword *)0x0;
      }
      else {
        func_0x007042e0();
        if (iVar3 == 0) {
          pdVar9 = (dword *)((long)&MACH_HEADER.cputype + 2);
        }
        else {
          func_0x007042e0();
          if (iVar3 == 0) {
            pdVar9 = &section_00000158.flags;
          }
          else {
            func_0x007042e0();
            if (iVar3 != 0) goto LAB_0070425c;
            pdVar9 = (dword *)(section_00000068.sectname + 0xc);
          }
        }
        ppppuVar7 = &pppuStack_458;
        FUN_006df844(pdVar9,param_2,ppppuVar7,uStack_468);
        uVar4 = (uint)ppppuVar7;
      }
LAB_00704258:
      if (pdVar9 != (dword *)0x0) {
        func_0x00701ed0(uStack_450);
        ppppuVar7 = (uint ****)pppuStack_460;
        func_0x00701ed0();
        goto LAB_00704280;
      }
    }
LAB_0070425c:
    ppppuVar7 = (uint ****)((long)&MACH_HEADER.cpusubtype + 1);
    uVar4 = 0xc;
  }
FUN_006de8e4:
  ppppuVar5 = ppppuVar7;
  FUN_006de604();
  pdVar9 = (dword *)0x0;
  if (ppppuVar5 != (uint ****)0x0) {
    if (((int)ppppuVar7 == 2) && (uVar4 == 0)) {
      ppppuVar6 = ppppuVar5;
      ___error();
      uVar4 = *(uint *)ppppuVar6;
    }
    iVar3 = *(int *)(ppppuVar5 + 0x30);
    uVar1 = iVar3 + 1U & 0xf;
    *(uint *)(ppppuVar5 + 0x30) = uVar1;
    if (uVar1 == *(uint *)((long)ppppuVar5 + 0x184)) {
      *(uint *)((long)ppppuVar5 + 0x184) = iVar3 + 2U & 0xf;
    }
    pdVar8 = (dword *)(ppppuVar5 + (ulong)uVar1 * 3);
    pdVar9 = pdVar8;
    func_0x006de65c(pdVar8);
    *(uint ****)pdVar8 = (uint ***)0x0;
    *(undefined2 *)(pdVar8 + 5) = 0;
    pdVar8[4] = uVar4 & 0xfff | (int)ppppuVar7 << 0x18;
  }
  return pdVar9;
}



/* Entry: 007042d4; end: 0070430f;  */

void FUN_007042d4(uint *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = param_1;
  FUN_006de604();
  if (puVar3 != (uint *)0x0) {
    if (((int)param_1 == 2) && (param_3 == 0)) {
      puVar4 = puVar3;
      ___error();
      param_3 = *puVar4;
    }
    uVar2 = puVar3[0x60];
    uVar1 = uVar2 + 1 & 0xf;
    puVar3[0x60] = uVar1;
    if (uVar1 == puVar3[0x61]) {
      puVar3[0x61] = uVar2 + 2 & 0xf;
    }
    puVar3 = puVar3 + (ulong)uVar1 * 6;
    func_0x006de65c(puVar3);
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined2 *)(puVar3 + 5) = 0;
    puVar3[4] = param_3 & 0xfff | (int)param_1 << 0x18;
  }
  return;
}



/* Entry: 00704310; end: 00704357;  */

void FUN_00704310(undefined8 param_1,undefined8 param_2)

{
  FUN_00703984(FUN_00704358,&UNK_0091b96f,param_1,param_2,0,0,0,0,0);
  return;
}



/* Entry: 00704358; end: 00704383;  */

undefined8 * FUN_00704358(undefined8 param_1,ulong *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = param_1;
  if ((param_2 == (ulong *)0x0) || (*param_2 != 0)) {
    puVar3 = &uStack_38;
    FUN_006d01cc(puVar3,param_2,&UNK_00a1cc78);
  }
  else {
    puVar1 = &uStack_38;
    FUN_006d01cc(puVar1,0,&UNK_00a1cc78);
    puVar3 = puVar1;
    if (0 < (int)puVar1) {
      uVar2 = (ulong)puVar1 & 0xffffffff;
      FUN_00701e90();
      if (uVar2 == 0) {
        func_0x006d01f0();
        func_0x006d01d8();
        puVar3 = (undefined8 *)0xffffffff;
      }
      else {
        puVar3 = &uStack_38;
        uStack_40 = uVar2;
        FUN_006d01cc(puVar3,&uStack_40,&UNK_00a1cc78);
        if (0 < (int)puVar3) {
          *param_2 = uVar2;
          puVar3 = puVar1;
        }
      }
    }
  }
  return puVar3;
}



/* Entry: 00704384; end: 0070444b;  */

void FUN_00704384(undefined8 param_1,long param_2,undefined8 param_3,undefined1 *param_4,
                 undefined1 *param_5,long param_6,undefined8 param_7,undefined1 *param_8,
                 undefined1 *param_9,ulong param_10,undefined4 param_11)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong *puStack_160;
  undefined1 auStack_158 [8];
  long lStack_150;
  undefined1 auStack_148 [16];
  ulong uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  long lStack_108;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [8];
  long lStack_e8;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [8];
  long lStack_c8;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  undefined1 auStack_68 [64];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  uVar2 = param_10 == *(uint *)(param_2 + 0xc);
  if ((bool)uVar2) {
    puVar4 = param_4;
    FUN_006e266c(param_5,param_6,param_7,param_8,param_4,param_3,*(undefined4 *)(param_2 + 8),
                 auStack_68);
    param_4 = param_8;
    if ((int)param_5 != 0) {
      param_4 = auStack_68;
      param_7 = 0;
      FUN_006e9d10(param_1,param_2,0,param_4,param_9,param_11);
      uVar2 = (int)param_1 == 0;
      param_6 = param_2;
      puVar4 = param_9;
    }
  }
  else {
    func_0x0070471c();
    param_7 = 0x6b;
    func_0x00704710();
    param_6 = param_2;
    puVar4 = param_5;
  }
  func_0x0070473c(uStack_28);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = puVar4;
  func_0x00704704(puVar4,auStack_c0);
  if (((int)puVar3 != 0) && (*(long *)(puVar4 + 8) == 0)) {
    puVar4 = auStack_c0;
    func_0x00704704(puVar4,auStack_d0);
    if ((int)puVar4 != 0) {
      puVar4 = auStack_c0;
      func_0x00704704(puVar4,auStack_f0);
      if (((int)puVar4 != 0) && (lStack_b8 == 0)) {
        puVar4 = auStack_d0;
        func_0x00704734(puVar4,auStack_e0);
        if ((int)puVar4 != 0) {
          puVar4 = auStack_f0;
          func_0x00704734(puVar4,auStack_100);
          if ((int)puVar4 != 0) {
            puVar4 = auStack_e0;
            FUN_006d41bc(puVar4,&UNK_0083ba4c,9);
            if ((int)puVar4 == 0) {
              func_0x0070471c();
              goto LAB_00704494;
            }
            lVar7 = 6;
            puVar1 = &UNK_00a1b980;
            do {
              puVar6 = puVar1;
              lVar7 = lVar7 + -1;
              if (lVar7 == 0) goto LAB_007045b4;
              puVar4 = auStack_100;
              FUN_006d41bc(puVar4,puVar6,puVar6[9]);
              puVar1 = puVar6 + 0x18;
            } while ((int)puVar4 == 0);
            (**(code **)(puVar6 + 0x10))();
            if (puVar4 == (undefined1 *)0x0) {
LAB_007045b4:
              func_0x0070471c();
              goto LAB_00704494;
            }
            puVar3 = auStack_d0;
            func_0x00704704(puVar3,&uStack_110);
            if (((int)puVar3 != 0) && (lStack_c8 == 0)) {
              puVar5 = &uStack_110;
              FUN_006d4564(puVar5,&uStack_120,4);
              if ((int)puVar5 != 0) {
                puVar5 = &uStack_110;
                func_0x006d46c4(puVar5,&lStack_128);
                if ((int)puVar5 != 0) {
                  if (lStack_128 - 0x5f5e101U < 0xfffffffffa0a1f00) {
                    func_0x0070471c();
                    goto LAB_00704494;
                  }
                  puStack_160 = &uStack_110;
                  func_0x006d4604(puStack_160,2);
                  if ((int)puStack_160 == 0) {
LAB_007045fc:
                    FUN_006eaae0();
                    if (lStack_108 == 0) {
LAB_00704658:
                      puVar3 = auStack_f0;
                      FUN_006d4564(puVar3,&uStack_138,4);
                      if (((int)puVar3 != 0) && (lStack_e8 == 0)) {
                        FUN_00704384(param_6,puVar4,puStack_160,lStack_128,param_7,param_4,
                                     uStack_120,uStack_118,uStack_138,lStack_130,0);
                        return;
                      }
                      func_0x0070471c();
                      goto LAB_00704494;
                    }
                    puVar5 = &uStack_110;
                    func_0x00704704(puVar5,&uStack_138);
                    if ((int)puVar5 != 0) {
                      puStack_160 = &uStack_138;
                      func_0x00704734(puStack_160,auStack_148);
                      if (((int)puStack_160 != 0) && (lStack_108 == 0)) {
                        func_0x00704728();
                        if ((int)puStack_160 == 0) {
                          func_0x00704728();
                          if ((int)puStack_160 == 0) goto LAB_007046a8;
                          FUN_006eabc0();
                        }
                        else {
                          FUN_006eaae0();
                        }
                        puVar5 = &uStack_138;
                        FUN_006d4564(puVar5,auStack_158,5);
                        if ((((int)puVar5 == 0) || (lStack_150 != 0)) || (lStack_130 != 0))
                        goto LAB_0070448c;
                        goto LAB_00704658;
                      }
                    }
                  }
                  else {
                    puStack_160 = &uStack_110;
                    func_0x006d46c4(puStack_160,&uStack_138);
                    if (((int)puStack_160 != 0) && (uStack_138 == *(uint *)(puVar4 + 8)))
                    goto LAB_007045fc;
                  }
LAB_007046a8:
                  func_0x0070471c();
                  goto LAB_00704494;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0070448c:
  func_0x0070471c();
LAB_00704494:
  func_0x00704710();
  return;
}



/* Entry: 0070444c; end: 00704703;  */

void FUN_0070444c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong *puStack_f0;
  undefined1 auStack_e8 [8];
  long lStack_e0;
  undefined1 auStack_d8 [16];
  ulong uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [8];
  long lStack_58;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  lVar6 = param_5;
  FUN_00704704(param_5,auStack_50);
  if (((int)lVar6 != 0) && (*(long *)(param_5 + 8) == 0)) {
    puVar2 = auStack_50;
    FUN_00704704(puVar2,auStack_60);
    if ((int)puVar2 != 0) {
      puVar2 = auStack_50;
      FUN_00704704(puVar2,auStack_80);
      if (((int)puVar2 != 0) && (lStack_48 == 0)) {
        puVar2 = auStack_60;
        func_0x00704734(puVar2,auStack_70);
        if ((int)puVar2 != 0) {
          puVar2 = auStack_80;
          func_0x00704734(puVar2,auStack_90);
          if ((int)puVar2 != 0) {
            puVar2 = auStack_70;
            FUN_006d41bc(puVar2,&UNK_0083ba4c,9);
            if ((int)puVar2 == 0) {
              func_0x0070471c();
              goto LAB_00704494;
            }
            lVar6 = 6;
            puVar1 = &UNK_00a1b980;
            do {
              puVar5 = puVar1;
              lVar6 = lVar6 + -1;
              if (lVar6 == 0) goto LAB_007045b4;
              puVar2 = auStack_90;
              FUN_006d41bc(puVar2,puVar5,puVar5[9]);
              puVar1 = puVar5 + 0x18;
            } while ((int)puVar2 == 0);
            (**(code **)(puVar5 + 0x10))();
            if (puVar2 == (undefined1 *)0x0) {
LAB_007045b4:
              func_0x0070471c();
              goto LAB_00704494;
            }
            puVar3 = auStack_60;
            FUN_00704704(puVar3,&uStack_a0);
            if (((int)puVar3 != 0) && (lStack_58 == 0)) {
              puVar4 = &uStack_a0;
              FUN_006d4564(puVar4,&uStack_b0,4);
              if ((int)puVar4 != 0) {
                puVar4 = &uStack_a0;
                func_0x006d46c4(puVar4,&lStack_b8);
                if ((int)puVar4 != 0) {
                  if (lStack_b8 - 0x5f5e101U < 0xfffffffffa0a1f00) {
                    func_0x0070471c();
                    goto LAB_00704494;
                  }
                  puStack_f0 = &uStack_a0;
                  func_0x006d4604(puStack_f0,2);
                  if ((int)puStack_f0 == 0) {
LAB_007045fc:
                    FUN_006eaae0();
                    if (lStack_98 == 0) {
LAB_00704658:
                      puVar3 = auStack_80;
                      FUN_006d4564(puVar3,&uStack_c8,4);
                      if (((int)puVar3 != 0) && (lStack_78 == 0)) {
                        FUN_00704384(param_2,puVar2,puStack_f0,lStack_b8,param_3,param_4,uStack_b0,
                                     uStack_a8,uStack_c8,lStack_c0,0);
                        return;
                      }
                      func_0x0070471c();
                      goto LAB_00704494;
                    }
                    puVar4 = &uStack_a0;
                    FUN_00704704(puVar4,&uStack_c8);
                    if ((int)puVar4 != 0) {
                      puStack_f0 = &uStack_c8;
                      func_0x00704734(puStack_f0,auStack_d8);
                      if (((int)puStack_f0 != 0) && (lStack_98 == 0)) {
                        func_0x00704728();
                        if ((int)puStack_f0 == 0) {
                          func_0x00704728();
                          if ((int)puStack_f0 == 0) goto LAB_007046a8;
                          FUN_006eabc0();
                        }
                        else {
                          FUN_006eaae0();
                        }
                        puVar4 = &uStack_c8;
                        FUN_006d4564(puVar4,auStack_e8,5);
                        if ((((int)puVar4 == 0) || (lStack_e0 != 0)) || (lStack_c0 != 0))
                        goto LAB_0070448c;
                        goto LAB_00704658;
                      }
                    }
                  }
                  else {
                    puStack_f0 = &uStack_a0;
                    func_0x006d46c4(puStack_f0,&uStack_c8);
                    if (((int)puStack_f0 != 0) && (uStack_c8 == *(uint *)(puVar2 + 8)))
                    goto LAB_007045fc;
                  }
LAB_007046a8:
                  func_0x0070471c();
                  goto LAB_00704494;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0070448c:
  func_0x0070471c();
LAB_00704494:
  func_0x00704710();
  return;
}



/* Entry: 00704704; end: 0070474f;  */

undefined8 FUN_00704704(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long alStack_50 [2];
  int iStack_3c;
  ulong uStack_38;
  
  plVar1 = alStack_50;
  if (param_2 != (long *)0x0) {
    plVar1 = param_2;
  }
  FUN_006d4394(param_1,plVar1,&iStack_3c,&uStack_38);
  if ((int)param_1 != 0 && iStack_3c == 0x20000010) {
    plVar2 = alStack_50;
    if (param_2 != (long *)0x0) {
      plVar2 = param_2;
    }
    uVar3 = plVar2[1];
    if (uStack_38 <= uVar3) {
      *plVar1 = *plVar1 + uStack_38;
      plVar2[1] = uVar3 - uStack_38;
      return 1;
    }
  }
  return 0;
}



/* Entry: 00704750; end: 00704d67;  */

/* WARNING: Possible PIC construction at 0x00704dd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00704dd4) */
/* WARNING: Removing unreachable block (ram,0x00704dd8) */

section * FUN_00704750(section *param_1,section *param_2,section *param_3,section *param_4,
                      section *param_5,char *param_6,section *param_7,section *param_8,
                      section *param_9)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  section **ppsVar4;
  undefined1 in_ZR;
  int iVar5;
  section *psVar6;
  section *psVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  section *psVar11;
  section *psVar12;
  char *pcVar13;
  char *pcVar14;
  section *psVar15;
  section *psVar16;
  uint uVar17;
  section *psVar18;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long lVar19;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined *puVar20;
  section *psVar21;
  section *psVar22;
  uint uVar23;
  section *psVar24;
  section *unaff_x20;
  char *unaff_x21;
  section *unaff_x22;
  section *unaff_x23;
  section *psVar25;
  section *unaff_x24;
  section *unaff_x25;
  section *psVar26;
  section *unaff_x26;
  section *unaff_x27;
  section *unaff_x28;
  undefined1 **ppuVar27;
  undefined8 uVar28;
  section *psStack_2d0;
  undefined1 auStack_2c8 [80];
  undefined8 uStack_278;
  section *psStack_270;
  section *psStack_268;
  section *psStack_260;
  section *psStack_258;
  section *psStack_250;
  section *psStack_248;
  section *psStack_240;
  char *pcStack_238;
  section *psStack_230;
  section *psStack_228;
  undefined1 *puStack_220;
  undefined8 uStack_218;
  section *psStack_208;
  section *psStack_200;
  section *psStack_1f8;
  section *psStack_1f0;
  undefined1 auStack_1e8 [16];
  char acStack_1d8 [8];
  qword qStack_1d0;
  qword qStack_1c8;
  undefined1 auStack_1b4 [132];
  undefined1 auStack_130 [64];
  undefined1 auStack_f0 [128];
  undefined8 uStack_70;
  
  func_0x00704f34();
  uVar17 = (uint)param_6;
  uStack_70 = extraout_x8;
  if (uVar17 == 0) {
    func_0x00704f1c();
    psVar25 = (section *)(section_00000068.segname + 9);
    func_0x00704efc();
    psVar24 = (section *)0x0;
    pcVar8 = param_6;
    param_9 = unaff_x22;
  }
  else {
    acStack_1d8[0] = '\0';
    acStack_1d8[1] = '\0';
    acStack_1d8[2] = '\0';
    acStack_1d8[3] = '\0';
    acStack_1d8[4] = '\0';
    acStack_1d8[5] = '\0';
    acStack_1d8[6] = '\0';
    acStack_1d8[7] = '\0';
    auStack_1e8[8] = '\0';
    auStack_1e8[9] = '\0';
    auStack_1e8[10] = '\0';
    auStack_1e8[0xb] = '\0';
    auStack_1e8[0xc] = '\0';
    auStack_1e8[0xd] = '\0';
    auStack_1e8[0xe] = '\0';
    auStack_1e8[0xf] = '\0';
    qStack_1c8 = 0;
    qStack_1d0 = 0;
    psStack_1f0 = (section *)0x0;
    auStack_1e8._0_8_ = 0;
    psVar25 = param_3;
    psVar16 = param_4;
    psVar12 = param_5;
    pcVar8 = param_6;
    psVar18 = param_7;
    psVar6 = param_8;
    if (param_1 == (section *)0x0) {
LAB_00704810:
      uVar23 = (uint)param_9->size;
      unaff_x23 = (section *)(ulong)uVar23;
      psVar11 = param_2;
      if (uVar23 != 0) {
        psVar16 = (section *)(section_00000068.segname + 8);
        psVar25 = unaff_x23;
        ___memset_chk(auStack_f0);
        psVar11 = param_5;
      }
      psVar26 = psStack_1f0;
      psVar24 = (section *)(unaff_x23->sectname + (long)(param_4->sectname + -1));
      in_ZR = psVar24 == param_4;
      if (psVar24 < param_4) {
LAB_0070486c:
        func_0x00704f1c();
        psVar25 = (section *)((long)&segment_command_00000020.vmsize + 5);
        param_1 = unaff_x23;
LAB_007048ac:
        func_0x00704efc();
        unaff_x23 = param_1;
        psVar26 = unaff_x25;
        goto LAB_007048b0;
      }
      psVar7 = (section *)((long)&unaff_x23[-1].reserved3 + 3);
      in_ZR = psStack_1f0->sectname + (long)psVar7->sectname == (char *)0x0;
      unaff_x25 = psStack_1f0;
      if (CARRY8((ulong)psVar7,(ulong)psStack_1f0)) goto LAB_0070486c;
      psStack_200 = param_9;
      uVar3 = 0;
      if (unaff_x23 != (section *)0x0) {
        uVar3 = (ulong)psVar24 / (ulong)unaff_x23;
      }
      param_9 = (section *)(uVar3 * (long)unaff_x23);
      uVar3 = 0;
      if (unaff_x23 != (section *)0x0) {
        uVar3 = (ulong)(psStack_1f0->sectname + (long)psVar7->sectname) / (ulong)unaff_x23;
      }
      unaff_x28 = (section *)(uVar3 * (long)unaff_x23);
      unaff_x24 = (section *)(param_9->sectname + (long)unaff_x28->sectname);
      in_ZR = unaff_x24 == (section *)0x0;
      if (CARRY8((ulong)unaff_x28,(ulong)param_9)) goto LAB_0070486c;
      psStack_208 = psVar7;
      psStack_1f8 = unaff_x24;
      func_0x00701e90();
      psVar7 = psStack_200;
      if ((psStack_1f8 != (section *)0x0) && (unaff_x24 == (section *)0x0)) {
        func_0x00704f1c();
        psVar25 = (section *)((long)&segment_command_00000020.vmsize + 1);
        func_0x00704efc();
        psVar7 = unaff_x28;
        goto LAB_007048b4;
      }
      lVar19 = 0;
      for (psVar24 = (section *)0x0; psVar24 < param_9; psVar24 = (section *)(psVar24->sectname + 1)
          ) {
        psVar24->sectname[(long)unaff_x24->sectname] = param_3->sectname[lVar19];
        lVar2 = 0;
        if ((section *)(lVar19 + 1) != param_4) {
          lVar2 = lVar19 + 1;
        }
        lVar19 = lVar2;
      }
      lVar19 = 0;
      for (psVar24 = (section *)0x0; in_ZR = psVar24 == unaff_x28, psVar24 < unaff_x28;
          psVar24 = (section *)(psVar24->sectname + 1)) {
        psVar24->sectname[(long)(param_9->sectname + (long)unaff_x24->sectname)] =
             *(char *)(auStack_1e8._0_8_ + lVar19);
        lVar2 = 0;
        if ((section *)(lVar19 + 1) != psVar26) {
          lVar2 = lVar19 + 1;
        }
        lVar19 = lVar2;
      }
      param_3 = (section *)(auStack_1b4 + 4);
      psVar24 = unaff_x24;
      while (param_7 != (section *)0x0) {
        func_0x00704f54();
        if ((int)psVar24 == 0) goto LAB_007048b4;
        func_0x00704f64();
        (*extraout_x8_00)();
        func_0x00704f64();
        psVar11 = unaff_x24;
        psVar25 = psStack_1f8;
        (*extraout_x8_01)();
        func_0x00704f44();
        if ((int)psVar24 == 0) goto LAB_007048b4;
        param_9 = (section *)0x0;
        while( true ) {
          uVar23 = (int)param_9 + 1;
          param_9 = (section *)(ulong)uVar23;
          in_ZR = uVar23 == uVar17;
          if (uVar17 <= uVar23) break;
          func_0x00704f54();
          if ((int)psVar24 == 0) goto LAB_007048b4;
          psVar25 = (section *)(ulong)(uint)auStack_1b4._0_4_;
          func_0x00704f64();
          psVar11 = (section *)auStack_130;
          (*extraout_x8_02)();
          func_0x00704f44();
          if ((int)psVar24 == 0) goto LAB_007048b4;
        }
        psVar26 = (section *)(ulong)(uint)auStack_1b4._0_4_;
        param_4 = param_7;
        if (psVar26 <= param_7) {
          param_4 = psVar26;
        }
        if (auStack_1b4._0_4_ != 0) {
          psVar11 = (section *)auStack_130;
          psVar24 = param_8;
          psVar25 = param_4;
          _memcpy();
        }
        param_7 = (section *)((long)param_7 - (long)param_4);
        in_ZR = true;
        if (param_7 == (section *)0x0) break;
        param_8 = (section *)(param_4->sectname + (long)param_8->sectname);
        lVar19 = 0;
        for (psVar15 = (section *)0x0; unaff_x23 != psVar15;
            psVar15 = (section *)(psVar15->sectname + 1)) {
          psVar15->sectname[(long)param_3->sectname] = auStack_130[lVar19];
          lVar2 = 0;
          if ((section *)(lVar19 + 1) != psVar26) {
            lVar2 = lVar19 + 1;
          }
          lVar19 = lVar2;
        }
        psVar21 = unaff_x24;
        for (psVar15 = (section *)0x0; in_ZR = psVar15 == psStack_1f8, psVar15 < psStack_1f8;
            psVar15 = (section *)(unaff_x23->sectname + (long)psVar15->sectname)) {
          uVar23 = 1;
          for (psVar22 = psStack_208; psVar22 < unaff_x23;
              psVar22 = (section *)((long)&psVar22[-1].reserved3 + 3)) {
            uVar23 = uVar23 + (byte)psVar22->sectname[(long)psVar21->sectname] +
                     (uint)(byte)psVar22->sectname[(long)param_3->sectname];
            psVar22->sectname[(long)psVar21->sectname] = (char)uVar23;
            uVar23 = uVar23 >> 8;
          }
          psVar21 = (section *)(unaff_x23->sectname + (long)psVar21->sectname);
        }
      }
      psVar24 = (section *)((long)&MACH_HEADER.magic + 1);
      unaff_x20 = param_7;
      unaff_x26 = param_4;
    }
    else {
      psVar11 = (section *)((long)param_2 << 1);
      iVar5 = (int)auStack_1b4 + 4;
      FUN_006d35b0();
      psVar24 = param_1;
      psVar26 = param_2;
      if (iVar5 == 0) {
        func_0x00704f1c();
        psVar25 = (section *)((long)&segment_command_00000020.vmsize + 1);
        param_9 = param_2;
        goto LAB_007048ac;
      }
      do {
        psVar7 = psVar26;
        auStack_130._0_8_ = psVar24;
        auStack_130._8_8_ = psVar7;
        if (psVar7 == (section *)0x0) {
          iVar5 = (int)auStack_1b4 + 4;
          param_2 = (section *)0x0;
          FUN_006d4f5c();
          if (iVar5 == 0) goto LAB_00704898;
          iVar5 = (int)auStack_1b4 + 4;
          param_2 = (section *)auStack_1e8;
          psVar25 = (section *)&psStack_1f0;
          FUN_006d36d4();
          if (iVar5 == 0) goto LAB_00704898;
          goto LAB_00704810;
        }
        iVar5 = (int)auStack_130;
        param_2 = (section *)auStack_1b4;
        FUN_006d4c7c();
        if (iVar5 == 0) break;
        param_2 = (section *)(ulong)(uint)auStack_1b4._0_4_;
        iVar5 = (int)auStack_1b4 + 4;
        FUN_006d4f5c();
        psVar24 = (section *)auStack_130._0_8_;
        psVar26 = (section *)auStack_130._8_8_;
      } while (iVar5 != 0);
      func_0x00704f1c();
      psVar25 = (section *)(section_00000068.segname + 0xb);
      func_0x00704efc();
LAB_00704898:
      func_0x006d3688(auStack_1b4 + 4);
      psVar11 = param_2;
      param_9 = psVar7;
      unaff_x23 = param_1;
      psVar26 = unaff_x25;
LAB_007048b0:
      unaff_x24 = (section *)0x0;
      psVar7 = unaff_x28;
LAB_007048b4:
      psVar24 = (section *)0x0;
      unaff_x20 = param_7;
      unaff_x26 = param_4;
    }
    func_0x00701ed0(unaff_x24);
    func_0x00701ed0(auStack_1e8._0_8_);
    param_1 = (section *)(auStack_1e8 + 8);
    FUN_006ea7fc();
    param_2 = psVar11;
    param_4 = psVar16;
    param_5 = psVar12;
    param_7 = psVar18;
    param_8 = psVar6;
    unaff_x21 = param_6;
    unaff_x25 = psVar26;
    unaff_x27 = param_3;
    unaff_x28 = psVar7;
  }
  func_0x00704f08(uStack_70);
  if ((bool)in_ZR) {
    return psVar24;
  }
  ___stack_chk_fail();
  uStack_218 = 0x704abc;
  ppuVar27 = &puStack_220;
  psVar11 = param_1;
  psVar12 = param_2;
  psVar16 = param_4;
  psStack_270 = unaff_x28;
  psStack_268 = unaff_x27;
  psStack_260 = unaff_x26;
  psStack_258 = unaff_x25;
  psStack_250 = unaff_x24;
  psStack_248 = unaff_x23;
  psStack_240 = param_9;
  pcStack_238 = unaff_x21;
  psStack_230 = unaff_x20;
  psStack_228 = psVar24;
  puStack_220 = &stack0xfffffffffffffff0;
  func_0x00704f34();
  uStack_278 = extraout_x8_03;
  (**(code **)psVar11->segname)();
  psVar6 = psVar11;
  (**(code **)(param_1->segname + 8))();
  psVar18 = (section *)(ulong)*(uint *)(psVar11->sectname + 8);
  psVar24 = psVar6;
  psStack_2d0 = psVar6;
  func_0x00704f74();
  iVar5 = (int)psVar24;
  psVar24 = (section *)((long)&MACH_HEADER.magic + 1);
  psVar26 = psVar25;
  FUN_00704750();
  if (iVar5 != 0) {
    psVar18 = (section *)(ulong)*(uint *)(psVar11->sectname + 0xc);
    psStack_2d0 = psVar6;
    func_0x00704f74();
    psVar24 = (section *)((long)&MACH_HEADER.magic + 2);
    psVar26 = psVar25;
    FUN_00704750();
    if (iVar5 != 0) {
      psVar16 = (section *)(auStack_2c8 + 0x10);
      psVar24 = (section *)auStack_2c8;
      pcVar13 = (char *)0x0;
      psVar7 = param_2;
      psVar12 = psVar11;
      psVar26 = param_8;
      FUN_006e9d10();
      goto LAB_00704b8c;
    }
  }
  func_0x00704f1c();
  pcVar13 = section_00000068.sectname + 6;
  func_0x00704efc();
  psVar7 = (section *)0x0;
LAB_00704b8c:
  func_0x00704f08(uStack_278);
  if ((bool)in_ZR) {
    return psVar7;
  }
  uVar28 = 0x704bbc;
  ___stack_chk_fail();
  ppsVar4 = &psStack_2d0;
  do {
    psVar22 = psVar26;
    psVar21 = psVar16;
    pcVar14 = pcVar13;
    psVar15 = (section *)((long)ppsVar4 + -0x110);
    *(section **)((long)ppsVar4 + -0x60) = unaff_x28;
    *(section **)((long)ppsVar4 + -0x58) = psVar6;
    *(section **)((long)ppsVar4 + -0x50) = param_4;
    *(section **)((long)ppsVar4 + -0x48) = param_5;
    *(char **)((long)ppsVar4 + -0x40) = pcVar8;
    *(section **)((long)ppsVar4 + -0x38) = psVar25;
    *(section **)((long)ppsVar4 + -0x30) = param_7;
    *(section **)((long)ppsVar4 + -0x28) = psVar11;
    *(section **)((long)ppsVar4 + -0x20) = param_2;
    *(section **)((long)ppsVar4 + -0x18) = param_8;
    *(undefined1 ***)((long)ppsVar4 + -0x10) = ppuVar27;
    *(undefined8 *)((long)ppsVar4 + -8) = uVar28;
    func_0x00704f34();
    *(undefined8 *)((long)ppsVar4 + -0x68) = extraout_x8_04;
    _bzero((undefined1 *)((long)ppsVar4 + -0xf8),0x90);
    param_2 = (section *)((long)ppsVar4 + -0x108);
    pcVar8 = pcVar14;
    FUN_006d4564(pcVar14,param_2,6);
    if ((int)pcVar8 == 0) {
      func_0x00704f1c();
      psVar15 = &section_00000068;
LAB_00704cb8:
      func_0x00704efc();
      psVar24 = (section *)0x0;
LAB_00704cc0:
      psVar25 = (section *)0x0;
      psVar11 = psVar18;
    }
    else {
      psVar6 = (section *)((long)&MACH_HEADER.cputype + 1);
      puVar9 = &UNK_00a1b9d0;
      do {
        puVar20 = puVar9;
        psVar6 = (section *)((long)&psVar6[-1].reserved3 + 3);
        in_ZR = psVar6 == (section *)0x0;
        if ((bool)in_ZR) {
          func_0x00704f1c();
          psVar15 = (section *)(section_00000068.sectname + 0xf);
          goto LAB_00704cb8;
        }
        param_4 = (section *)(puVar20 + 0x28);
        puVar10 = (undefined1 *)((long)ppsVar4 + -0x108);
        param_2 = (section *)(puVar20 + 0x2c);
        FUN_006d41bc(puVar10,param_2,puVar20[0x36]);
        puVar9 = (undefined *)param_4;
      } while ((int)puVar10 == 0);
      param_2 = (section *)((long)ppsVar4 + -0xf8);
      (**(code **)(puVar20 + 0x48))(param_4,param_2,psVar21,psVar24,pcVar14);
      if ((int)puVar9 == 0) {
        func_0x00704f1c();
        psVar15 = (section *)(section_00000068.sectname + 5);
        goto LAB_00704cb8;
      }
      psVar25 = psVar18;
      func_0x00701e90();
      if (psVar25 != (section *)0x0) {
        if ((ulong)psVar18 >> 0x1f != 0) {
          func_0x00704f1c();
          psVar16 = (section *)((long)&segment_command_00000020.vmsize + 5);
          goto LAB_00704d0c;
        }
        iVar5 = (int)(undefined1 *)((long)ppsVar4 + -0xf8);
        psVar16 = (section *)((long)ppsVar4 + -0x10c);
        param_2 = psVar25;
        FUN_006ea13c();
        if (iVar5 == 0) goto LAB_00704d10;
        psVar18 = (section *)(long)*(int *)((long)ppsVar4 + -0x10c);
        iVar5 = (int)(undefined1 *)((long)ppsVar4 + -0xf8);
        param_2 = (section *)(psVar18->sectname + (long)psVar25->sectname);
        FUN_006ea28c();
        psVar16 = psVar15;
        if (iVar5 == 0) goto LAB_00704d10;
        *(section **)psVar7->sectname = psVar25;
        *(char **)psVar12->sectname = psVar18->sectname + *(int *)((long)ppsVar4 + -0x110);
        psVar24 = (section *)((long)&MACH_HEADER.magic + 1);
        goto LAB_00704cc0;
      }
      func_0x00704f1c();
      psVar16 = (section *)((long)&segment_command_00000020.vmsize + 1);
LAB_00704d0c:
      func_0x00704efc();
LAB_00704d10:
      psVar24 = (section *)0x0;
      psVar15 = psVar16;
      psVar11 = psVar18;
    }
    func_0x00701ed0(psVar25);
    iVar5 = (int)(undefined1 *)((long)ppsVar4 + -0xf8);
    func_0x006e9cd4();
    func_0x00704f08(*(undefined8 *)((long)ppsVar4 + -0x68));
    if ((bool)in_ZR) {
      return psVar24;
    }
    ___stack_chk_fail();
    *(section **)((long)ppsVar4 + -0x130) = psVar7;
    *(section **)((long)ppsVar4 + -0x128) = psVar24;
    *(undefined1 **)((long)ppsVar4 + -0x120) = (undefined1 *)((long)ppsVar4 + -0x10);
    *(code **)((long)ppsVar4 + -0x118) = FUN_00704d68;
    ppuVar27 = (undefined1 **)((long)ppsVar4 + -0x120);
    func_0x00704f28();
    if (iVar5 == 0) {
LAB_00704df8:
      func_0x00704f1c();
      func_0x00704efc();
      return (section *)0x0;
    }
    puVar10 = (undefined1 *)((long)ppsVar4 + -0x140);
    func_0x00704f28(puVar10,(undefined1 *)((long)ppsVar4 + -0x150));
    if ((int)puVar10 == 0) goto LAB_00704df8;
    puVar10 = (undefined1 *)((long)ppsVar4 + -0x140);
    FUN_006d4564(puVar10,(undefined1 *)((long)ppsVar4 + -0x160),4);
    if (((int)puVar10 == 0) || (*(long *)((long)ppsVar4 + -0x138) != 0)) goto LAB_00704df8;
    puVar1 = (undefined8 *)((long)ppsVar4 + -0x160);
    psVar18 = *(section **)((long)ppsVar4 + -0x158);
    psVar7 = (section *)((long)ppsVar4 + -0x168);
    psVar12 = (section *)((long)ppsVar4 + -0x170);
    pcVar13 = (char *)((long)ppsVar4 + -0x150);
    uVar28 = 0x704dd4;
    ppsVar4 = (section **)((long)ppsVar4 + -0x180);
    psVar16 = param_2;
    psVar24 = psVar15;
    psVar26 = (section *)*puVar1;
    param_8 = psVar15;
    param_7 = psVar22;
    pcVar8 = pcVar14;
    param_5 = psVar21;
  } while( true );
}



/* Entry: 00704d68; end: 00704e1b;  */

undefined1 * FUN_00704d68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [8];
  long lStack_28;
  
  puVar3 = &uStack_70;
  func_0x00704f28(param_1,auStack_30);
  if ((int)param_1 != 0) {
    puVar1 = auStack_30;
    func_0x00704f28(puVar1,auStack_40);
    if ((int)puVar1 != 0) {
      puVar1 = auStack_30;
      FUN_006d4564(puVar1,&uStack_50,4);
      if (((int)puVar1 != 0) && (lStack_28 == 0)) {
        puVar2 = &uStack_58;
        func_0x00704bbc(puVar2,&uStack_60,auStack_40,param_2,param_3,uStack_50,uStack_48);
        if ((int)puVar2 == 0) {
          return (undefined1 *)0x0;
        }
        uStack_70 = uStack_58;
        uStack_68 = uStack_60;
        FUN_006df744(&uStack_70);
        func_0x00701ed0(uStack_58);
        return (undefined1 *)puVar3;
      }
    }
  }
  func_0x00704f1c();
  func_0x00704efc();
  return (undefined1 *)0x0;
}



/* Entry: 00704e1c; end: 00704efb;  */

void FUN_00704e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  long lVar1;
  undefined1 *puVar2;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  lVar1 = param_5;
  func_0x00704f28(param_5,auStack_50);
  if ((int)lVar1 != 0) {
    puVar2 = auStack_50;
    FUN_006d4564(puVar2,&uStack_60,4);
    if ((int)puVar2 != 0) {
      puVar2 = auStack_50;
      func_0x006d46c4(puVar2,&lStack_68);
      if ((((int)puVar2 != 0) && (lStack_48 == 0)) && (*(long *)(param_5 + 8) == 0)) {
        if (0xfffffffffa0a1eff < lStack_68 - 0x5f5e101U) {
          func_0x00704abc(param_1,param_2,lStack_68,param_3,param_4,uStack_60,uStack_58,0);
          return;
        }
        func_0x00704f1c();
        goto LAB_00704e94;
      }
    }
  }
  func_0x00704f1c();
LAB_00704e94:
  func_0x00704efc();
  return;
}



/* Entry: 00704efc; end: 00704fab;  */

void FUN_00704efc(uint *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = param_1;
  FUN_006de604();
  if (puVar3 != (uint *)0x0) {
    if (((int)param_1 == 2) && (param_3 == 0)) {
      puVar4 = puVar3;
      ___error();
      param_3 = *puVar4;
    }
    uVar2 = puVar3[0x60];
    uVar1 = uVar2 + 1 & 0xf;
    puVar3[0x60] = uVar1;
    if (uVar1 == puVar3[0x61]) {
      puVar3[0x61] = uVar2 + 2 & 0xf;
    }
    puVar3 = puVar3 + (ulong)uVar1 * 6;
    func_0x006de65c(puVar3);
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined2 *)(puVar3 + 5) = 0;
    puVar3[4] = param_3 & 0xfff | (int)param_1 << 0x18;
  }
  return;
}



/* Entry: 00704fac; end: 0070501f;  */

long FUN_00704fac(long param_1)

{
  long lStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  func_0x00704f94(param_1,&uStack_28);
  if ((int)param_1 < 0) {
    param_1 = 0;
  }
  else {
    func_0x007051f4();
    FUN_006df744();
    if ((param_1 == 0) || (lStack_30 != 0)) {
      func_0x007051e0(0x13,0,0x68);
      func_0x007051ec();
      param_1 = 0;
    }
    func_0x00701ed0(uStack_28);
  }
  return param_1;
}



/* Entry: 00705020; end: 007051ab;  */

long FUN_00705020(undefined8 param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 auStack_50 [32];
  
  lStack_58 = 0;
  puVar1 = auStack_50;
  FUN_006d35b0(puVar1,0);
  if ((int)puVar1 == 0) {
LAB_007050b8:
    lVar4 = 0;
LAB_007050bc:
    func_0x006d3688(auStack_50);
    uVar3 = 0x69;
  }
  else {
    puVar1 = auStack_50;
    FUN_006df818(puVar1,param_1);
    if ((int)puVar1 == 0) goto LAB_007050b8;
    puVar1 = auStack_50;
    FUN_006d36d4(puVar1,&lStack_58,&lStack_60);
    lVar4 = lStack_58;
    if (((int)puVar1 == 0) || (lStack_60 < 0)) goto LAB_007050bc;
    lStack_68 = lStack_58;
    lVar2 = 0;
    func_0x00704f88(0,&lStack_68,lStack_60);
    if ((lVar2 != 0) && (lStack_68 == lVar4 + lStack_60)) goto LAB_007050d8;
    func_0x00704fa0(lVar2);
    uVar3 = 0x68;
  }
  FUN_007051e0(0x13,0,uVar3);
  lVar2 = 0;
LAB_007050d8:
  func_0x00701ed0(lVar4);
  return lVar2;
}



/* Entry: 007051ac; end: 007051df;  */

undefined8 FUN_007051ac(int param_1,long *param_2)

{
  int *piVar1;
  
  if ((param_1 == 2) && (piVar1 = *(int **)(*param_2 + 0x10), piVar1 != (int *)0x0)) {
    FUN_00701f08(*(undefined8 *)(piVar1 + 2),(long)*piVar1);
  }
  return 1;
}



/* Entry: 007051e0; end: 00705287;  */

void FUN_007051e0(uint *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = param_1;
  FUN_006de604();
  if (puVar3 != (uint *)0x0) {
    if (((int)param_1 == 2) && (param_3 == 0)) {
      puVar4 = puVar3;
      ___error();
      param_3 = *puVar4;
    }
    uVar2 = puVar3[0x60];
    uVar1 = uVar2 + 1 & 0xf;
    puVar3[0x60] = uVar1;
    if (uVar1 == puVar3[0x61]) {
      puVar3[0x61] = uVar2 + 2 & 0xf;
    }
    puVar3 = puVar3 + (ulong)uVar1 * 6;
    func_0x006de65c(puVar3);
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined2 *)(puVar3 + 5) = 0;
    puVar3[4] = param_3 & 0xfff | (int)param_1 << 0x18;
  }
  return;
}



/* Entry: 00705288; end: 00705587;  */

void FUN_00705288(long param_1,undefined1 *param_2,ulong param_3)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  param_1 = param_1 + ((ulong)(uint)-(int)param_1 & 0x3f);
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar3 = 0x10 - *(long *)(param_1 + 0x48);
    if (param_3 <= uVar3) {
      uVar3 = param_3;
    }
    lVar1 = param_1 + 0x38;
    puVar2 = param_2;
    for (uVar4 = uVar3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)(lVar1 + *(long *)(param_1 + 0x48)) = *puVar2;
      lVar1 = lVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    lVar1 = *(long *)(param_1 + 0x48) + uVar3;
    *(long *)(param_1 + 0x48) = lVar1;
    param_3 = param_3 - uVar3;
    param_2 = param_2 + uVar3;
    if (lVar1 == 0x10) {
      func_0x00705378(param_1,param_1 + 0x38,0x10);
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
  }
  if (0xf < param_3) {
    func_0x00705378(param_1,param_2,param_3 & 0xfffffffffffffff0);
    param_2 = param_2 + (param_3 & 0xfffffffffffffff0);
    param_3 = param_3 & 0xf;
  }
  if (param_3 != 0) {
    for (uVar3 = 0; param_3 != uVar3; uVar3 = uVar3 + 1) {
      *(undefined1 *)(param_1 + 0x38 + uVar3) = param_2[uVar3];
    }
    *(ulong *)(param_1 + 0x48) = param_3;
  }
  return;
}



/* Entry: 00705588; end: 007056b7;  */

void FUN_00705588(long param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  
  param_1 = param_1 + ((ulong)(uint)-(int)param_1 & 0x3f);
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00705378(param_1,param_1 + 0x38);
  }
  uVar2 = *(int *)(param_1 + 0x28) + (*(uint *)(param_1 + 0x24) >> 0x1a);
  uVar10 = uVar2 & 0x3ffffff;
  uVar2 = *(int *)(param_1 + 0x2c) + (uVar2 >> 0x1a);
  uVar11 = uVar2 & 0x3ffffff;
  uVar2 = *(int *)(param_1 + 0x30) + (uVar2 >> 0x1a);
  uVar12 = uVar2 & 0x3ffffff;
  uVar3 = *(int *)(param_1 + 0x34) + (uVar2 >> 0x1a);
  uVar4 = (uVar3 >> 0x1a) * 4 + (uVar3 >> 0x1a) + (*(uint *)(param_1 + 0x24) & 0x3ffffff);
  uVar1 = uVar4 + 5;
  uVar5 = uVar10 + (uVar1 >> 0x1a);
  uVar6 = uVar11 + (uVar5 >> 0x1a);
  uVar7 = uVar12 + (uVar6 >> 0x1a);
  uVar8 = (uVar3 | 0xfc000000) + (uVar7 >> 0x1a);
  uVar2 = (int)uVar8 >> 0x1f;
  uVar13 = 0xffffffff - uVar2 & 0x3ffffff;
  uVar15 = uVar13 & uVar1 | uVar4 & uVar2;
  uVar1 = uVar13 & uVar5 | uVar10 & uVar2;
  *(uint *)(param_1 + 0x24) = uVar15;
  *(uint *)(param_1 + 0x28) = uVar1;
  uVar4 = uVar13 & uVar6 | uVar11 & uVar2;
  uVar5 = uVar13 & uVar7 | uVar12 & uVar2;
  *(uint *)(param_1 + 0x2c) = uVar4;
  *(uint *)(param_1 + 0x30) = uVar5;
  uVar3 = 0xffffffff - uVar2 & uVar8 | uVar3 & uVar2 & 0x3ffffff;
  *(uint *)(param_1 + 0x34) = uVar3;
  uVar15 = uVar15 | uVar1 << 0x1a;
  uVar2 = *(uint *)(param_1 + 0x58);
  iVar14 = *(int *)(param_1 + 0x5c);
  uVar16 = (ulong)(uVar1 >> 6 | uVar4 << 0x14) + (ulong)*(uint *)(param_1 + 0x54) +
           (ulong)CARRY4(uVar15,*(uint *)(param_1 + 0x50));
  *param_2 = uVar15 + *(uint *)(param_1 + 0x50);
  param_2[1] = (int)uVar16;
  lVar9 = (ulong)(uVar4 >> 0xc | uVar5 << 0xe) + (ulong)uVar2 + (uVar16 >> 0x20);
  param_2[2] = (int)lVar9;
  param_2[3] = (uVar5 >> 0x12 | uVar3 << 8) + iVar14 + (int)((ulong)lVar9 >> 0x20);
  return;
}



/* Entry: 007056b8; end: 007056c3;  */

/* WARNING: Removing unreachable block (ram,0x00705768) */
/* WARNING: Removing unreachable block (ram,0x00705714) */
/* WARNING: Removing unreachable block (ram,0x00705718) */
/* WARNING: Removing unreachable block (ram,0x00705720) */
/* WARNING: Removing unreachable block (ram,0x007057a4) */
/* WARNING: Removing unreachable block (ram,0x007057a8) */

segment_command * FUN_007056b8(long param_1,long param_2,long *param_3)

{
  segment_command *psVar1;
  segment_command *psVar2;
  long lVar3;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  
  if (param_3 != (long *)0x0) {
    plStack_60 = param_3;
    lStack_58 = param_1;
    lStack_50 = param_2;
    func_0x00706464(param_3 + 1);
    psVar1 = (segment_command *)*param_3;
    FUN_00705938(psVar1,&plStack_60);
    if (psVar1 != (segment_command *)0x0) {
      FUN_00705a60(&psVar1->vmaddr);
    }
    func_0x0070649c(param_3 + 1);
    if (psVar1 != (segment_command *)0x0) {
      return psVar1;
    }
  }
  psVar2 = &segment_command_00000020;
  FUN_00701e90();
  psVar1 = psVar2;
  if (psVar2 != (segment_command *)0x0) {
    psVar2->segname[0] = '\0';
    psVar2->segname[1] = '\0';
    psVar2->segname[2] = '\0';
    psVar2->segname[3] = '\0';
    psVar2->segname[4] = '\0';
    psVar2->segname[5] = '\0';
    psVar2->segname[6] = '\0';
    psVar2->segname[7] = '\0';
    psVar2->cmd = 0;
    psVar2->cmdsize = 0;
    psVar2->vmaddr = 0;
    psVar2->segname[8] = '\0';
    psVar2->segname[9] = '\0';
    psVar2->segname[10] = '\0';
    psVar2->segname[0xb] = '\0';
    psVar2->segname[0xc] = '\0';
    psVar2->segname[0xd] = '\0';
    psVar2->segname[0xe] = '\0';
    psVar2->segname[0xf] = '\0';
    FUN_007021c8(param_1,param_2);
    *(long *)psVar2->segname = param_1;
    if ((param_2 == 0) || (param_1 != 0)) {
      *(long *)(psVar2->segname + 8) = param_2;
      *(undefined4 *)&psVar2->vmaddr = 1;
      if (param_3 != (long *)0x0) {
        *(long **)psVar2 = param_3;
        func_0x00706480(param_3 + 1);
        psVar1 = (segment_command *)*param_3;
        FUN_00705938(psVar1,psVar2);
        if (psVar1 == (segment_command *)0x0) {
          lVar3 = *param_3;
          func_0x00701c04(lVar3,&plStack_60,psVar2,0x70594c,0x705958);
          func_0x007064b8(param_3 + 1);
          if ((int)lVar3 != 0) {
            return psVar2;
          }
          psVar1 = (segment_command *)0x0;
        }
        else {
          FUN_00705a60(&psVar1->vmaddr);
          func_0x007064b8(param_3 + 1);
        }
        func_0x00705908(psVar2);
      }
    }
    else {
      func_0x00701ed0(psVar2);
      psVar1 = (segment_command *)0x0;
    }
  }
  return psVar1;
}



/* Entry: 007056c4; end: 0070584b;  */

segment_command * FUN_007056c4(long param_1,long param_2,int param_3,long *param_4)

{
  bool bVar1;
  segment_command *psVar2;
  segment_command *psVar3;
  long lVar4;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  
  if (param_4 != (long *)0x0) {
    plStack_60 = param_4;
    lStack_58 = param_1;
    lStack_50 = param_2;
    func_0x00706464(param_4 + 1);
    psVar2 = (segment_command *)*param_4;
    FUN_00705938(psVar2,&plStack_60);
    if ((param_3 == 0) || (psVar2 == (segment_command *)0x0)) {
      if (psVar2 == (segment_command *)0x0) goto LAB_0070573c;
LAB_0070572c:
      FUN_00705a60(&psVar2->vmaddr);
      bVar1 = false;
    }
    else {
      if (*(int *)((long)&psVar2->vmaddr + 4) != 0) goto LAB_0070572c;
      psVar2 = (segment_command *)0x0;
LAB_0070573c:
      bVar1 = true;
    }
    func_0x0070649c(param_4 + 1);
    if (!bVar1) {
      return psVar2;
    }
  }
  psVar2 = &segment_command_00000020;
  FUN_00701e90();
  if (psVar2 == (segment_command *)0x0) {
    return (segment_command *)0x0;
  }
  psVar2->segname[0] = '\0';
  psVar2->segname[1] = '\0';
  psVar2->segname[2] = '\0';
  psVar2->segname[3] = '\0';
  psVar2->segname[4] = '\0';
  psVar2->segname[5] = '\0';
  psVar2->segname[6] = '\0';
  psVar2->segname[7] = '\0';
  psVar2->cmd = 0;
  psVar2->cmdsize = 0;
  psVar2->vmaddr = 0;
  psVar2->segname[8] = '\0';
  psVar2->segname[9] = '\0';
  psVar2->segname[10] = '\0';
  psVar2->segname[0xb] = '\0';
  psVar2->segname[0xc] = '\0';
  psVar2->segname[0xd] = '\0';
  psVar2->segname[0xe] = '\0';
  psVar2->segname[0xf] = '\0';
  if (param_3 == 0) {
    FUN_007021c8(param_1,param_2);
    *(long *)psVar2->segname = param_1;
    if ((param_2 != 0) && (param_1 == 0)) {
      func_0x00701ed0(psVar2);
      return (segment_command *)0x0;
    }
  }
  else {
    *(long *)psVar2->segname = param_1;
    *(undefined4 *)((long)&psVar2->vmaddr + 4) = 1;
  }
  *(long *)(psVar2->segname + 8) = param_2;
  *(undefined4 *)&psVar2->vmaddr = 1;
  if (param_4 == (long *)0x0) {
    return psVar2;
  }
  *(long **)psVar2 = param_4;
  func_0x00706480(param_4 + 1);
  psVar3 = (segment_command *)*param_4;
  FUN_00705938(psVar3,psVar2);
  if ((param_3 == 0) || (psVar3 == (segment_command *)0x0)) {
    if (psVar3 == (segment_command *)0x0) goto LAB_007057b0;
  }
  else if (*(int *)((long)&psVar3->vmaddr + 4) == 0) {
LAB_007057b0:
    lVar4 = *param_4;
    func_0x00701c04(lVar4,&plStack_60,psVar2,0x70594c,0x705958);
    func_0x007064b8(param_4 + 1);
    if ((int)lVar4 != 0) {
      return psVar2;
    }
    psVar3 = (segment_command *)0x0;
    goto LAB_00705824;
  }
  FUN_00705a60(&psVar3->vmaddr);
  func_0x007064b8(param_4 + 1);
LAB_00705824:
  func_0x00705908(psVar2);
  return psVar3;
}



/* Entry: 0070584c; end: 0070585b;  */

/* WARNING: Removing unreachable block (ram,0x00705768) */
/* WARNING: Removing unreachable block (ram,0x00705714) */
/* WARNING: Removing unreachable block (ram,0x00705718) */
/* WARNING: Removing unreachable block (ram,0x00705720) */
/* WARNING: Removing unreachable block (ram,0x007057a4) */
/* WARNING: Removing unreachable block (ram,0x007057a8) */

segment_command * FUN_0070584c(long *param_1,long *param_2)

{
  long lVar1;
  segment_command *psVar2;
  segment_command *psVar3;
  long lVar4;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  
  lVar4 = *param_1;
  lVar1 = param_1[1];
  if (param_2 != (long *)0x0) {
    plStack_60 = param_2;
    lStack_58 = lVar4;
    lStack_50 = lVar1;
    func_0x00706464(param_2 + 1);
    psVar2 = (segment_command *)*param_2;
    FUN_00705938(psVar2,&plStack_60);
    if (psVar2 != (segment_command *)0x0) {
      FUN_00705a60(&psVar2->vmaddr);
    }
    func_0x0070649c(param_2 + 1);
    if (psVar2 != (segment_command *)0x0) {
      return psVar2;
    }
  }
  psVar3 = &segment_command_00000020;
  FUN_00701e90();
  psVar2 = psVar3;
  if (psVar3 != (segment_command *)0x0) {
    psVar3->segname[0] = '\0';
    psVar3->segname[1] = '\0';
    psVar3->segname[2] = '\0';
    psVar3->segname[3] = '\0';
    psVar3->segname[4] = '\0';
    psVar3->segname[5] = '\0';
    psVar3->segname[6] = '\0';
    psVar3->segname[7] = '\0';
    psVar3->cmd = 0;
    psVar3->cmdsize = 0;
    psVar3->vmaddr = 0;
    psVar3->segname[8] = '\0';
    psVar3->segname[9] = '\0';
    psVar3->segname[10] = '\0';
    psVar3->segname[0xb] = '\0';
    psVar3->segname[0xc] = '\0';
    psVar3->segname[0xd] = '\0';
    psVar3->segname[0xe] = '\0';
    psVar3->segname[0xf] = '\0';
    FUN_007021c8(lVar4,lVar1);
    *(long *)psVar3->segname = lVar4;
    if ((lVar1 == 0) || (lVar4 != 0)) {
      *(long *)(psVar3->segname + 8) = lVar1;
      *(undefined4 *)&psVar3->vmaddr = 1;
      if (param_2 != (long *)0x0) {
        *(long **)psVar3 = param_2;
        func_0x00706480(param_2 + 1);
        psVar2 = (segment_command *)*param_2;
        FUN_00705938(psVar2,psVar3);
        if (psVar2 == (segment_command *)0x0) {
          lVar4 = *param_2;
          func_0x00701c04(lVar4,&plStack_60,psVar3,0x70594c,0x705958);
          func_0x007064b8(param_2 + 1);
          if ((int)lVar4 != 0) {
            return psVar3;
          }
          psVar2 = (segment_command *)0x0;
        }
        else {
          FUN_00705a60(&psVar2->vmaddr);
          func_0x007064b8(param_2 + 1);
        }
        func_0x00705908(psVar3);
      }
    }
    else {
      func_0x00701ed0(psVar3);
      psVar2 = (segment_command *)0x0;
    }
  }
  return psVar2;
}



/* Entry: 0070585c; end: 00705937;  */

/* WARNING: Possible PIC construction at 0x007058c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x007058c8) */

void FUN_0070585c(undefined8 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar5;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (param_1 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*param_1;
    if (puVar5 != (undefined8 *)0x0) {
      func_0x00706480(puVar5 + 1);
      iVar2 = (int)param_1 + 0x18;
      func_0x00705a98();
      if (iVar2 == 0) {
        iVar2 = (int)*param_1;
      }
      else {
        puVar3 = (undefined8 *)*puVar5;
        FUN_00705938(puVar3,param_1);
        if (puVar3 == param_1) {
          FUN_00701ce0(*puVar5,param_1,0x70594c,0x705958);
        }
        iVar2 = (int)*param_1;
        unaff_x30 = 0x7058c8;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
        unaff_x19 = param_1;
        unaff_x20 = puVar5;
        unaff_x29 = puVar1;
      }
      iVar2 = iVar2 + 8;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      _pthread_rwlock_unlock();
      if (iVar2 == 0) {
        return;
      }
      _abort();
      *(undefined1 **)((long)register0x00000008 + -0x20) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -0x18) = 0x7064d4;
      _pthread_rwlock_rdlock();
      if (iVar2 == 0) {
        return;
      }
      _abort();
      *(undefined1 **)((long)register0x00000008 + -0x30) =
           (undefined1 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x28) = 0x7064f0;
      _pthread_rwlock_wrlock();
      if (iVar2 != 0) {
        _abort();
        *(undefined1 **)((long)register0x00000008 + -0x40) =
             (undefined1 *)((long)register0x00000008 + -0x30);
        *(undefined8 *)((long)register0x00000008 + -0x38) = 0x70650c;
        _pthread_rwlock_unlock();
        if (iVar2 == 0) {
          return;
        }
        _abort();
        *(undefined1 **)((long)register0x00000008 + -0x50) =
             (undefined1 *)((long)register0x00000008 + -0x40);
        *(undefined8 *)((long)register0x00000008 + -0x48) = 0x706528;
        _pthread_rwlock_unlock();
        if (iVar2 != 0) {
          _abort();
          *(undefined1 **)((long)register0x00000008 + -0x60) =
               (undefined1 *)((long)register0x00000008 + -0x50);
          *(undefined8 *)((long)register0x00000008 + -0x58) = 0x706544;
          _pthread_once();
          if (iVar2 != 0) {
            _abort();
            *(undefined8 **)((long)register0x00000008 + -0x80) = unaff_x20;
            *(undefined8 **)((long)register0x00000008 + -0x78) = unaff_x19;
            *(undefined1 **)((long)register0x00000008 + -0x70) =
                 (undefined1 *)((long)register0x00000008 + -0x60);
            *(code **)((long)register0x00000008 + -0x68) = FUN_00706560;
            FUN_0070673c();
            if (iRam0000000000b6cdd0 != 0) {
              _pthread_getspecific();
            }
            return;
          }
          return;
        }
        return;
      }
      return;
    }
    iVar2 = (int)param_1 + 0x18;
    func_0x00705a98();
    if (iVar2 != 0) {
      if (*(int *)((long)param_1 + 0x1c) == 0) {
        func_0x00701ed0(param_1[1]);
      }
      if (param_1 == (undefined8 *)0x0) {
        return;
      }
      plVar4 = param_1 + -1;
      FUN_00701f08(plVar4,*plVar4 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_0099a260)(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 00705938; end: 00705967;  */

undefined8 FUN_00705938(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_00701b1c(param_1,0,param_2,0x70594c,0x705958);
  if ((undefined8 *)*param_1 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)*param_1;
  }
  return uVar1;
}



/* Entry: 00705968; end: 0070599b;  */

undefined8 FUN_00705968(void)

{
  func_0x007064d4(0xb29ee8);
  func_0x0070650c(0xb29ee8);
  return 0;
}



/* Entry: 0070599c; end: 00705a5f;  */

void FUN_0070599c(uint *param_1,long param_2,byte *param_3,byte *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar1 = uVar1 + 1 & 0xff;
    uVar3 = param_1[(ulong)uVar1 + 2];
    uVar2 = uVar3 + uVar2 & 0xff;
    uVar4 = param_1[(ulong)uVar2 + 2];
    param_1[(ulong)uVar1 + 2] = uVar4;
    param_1[(ulong)uVar2 + 2] = uVar3;
    *param_4 = *param_3 ^ (byte)param_1[(ulong)(uVar4 + uVar3 & 0xff) + 2];
    param_4 = param_4 + 1;
    param_3 = param_3 + 1;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 00705a60; end: 00705aeb;  */

void FUN_00705a60(void)

{
  int iVar1;
  int *unaff_x19;
  
  FUN_00705aec();
  if (*unaff_x19 != -1) {
    *unaff_x19 = *unaff_x19 + 1;
  }
  iVar1 = 0xb29fb0;
  _pthread_rwlock_unlock();
  if (iVar1 != 0) {
    _abort();
    _pthread_once();
    if (iVar1 != 0) {
      _abort();
      FUN_0070673c();
      if (iRam0000000000b6cdd0 != 0) {
        _pthread_getspecific();
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 00705aec; end: 00705afb;  */

void FUN_00705aec(void)

{
  int iVar1;
  
  iVar1 = 0xb29fb0;
  _pthread_rwlock_wrlock();
  if (iVar1 == 0) {
    return;
  }
  _abort();
  _pthread_rwlock_unlock();
  if (iVar1 == 0) {
    return;
  }
  _abort();
  _pthread_rwlock_unlock();
  if (iVar1 == 0) {
    return;
  }
  _abort();
  _pthread_once();
  if (iVar1 != 0) {
    _abort();
    FUN_0070673c();
    if (iRam0000000000b6cdd0 != 0) {
      _pthread_getspecific();
    }
    return;
  }
  return;
}



/* Entry: 00705afc; end: 00705c23;  */

long FUN_00705afc(long param_1)

{
  int iVar1;
  long lVar3;
  undefined1 auStack_30 [8];
  long lStack_28;
  int iVar2;
  
  iVar1 = (int)auStack_30;
  iVar2 = (int)auStack_30;
  FUN_006f2524();
  if ((param_1 != 0) &&
     ((((lVar3 = param_1, func_0x00705e48(), (int)lVar3 == 0 ||
        (func_0x00705b88(auStack_30,param_1 + 8), iVar1 == 0)) ||
       (func_0x00705b88(auStack_30,param_1 + 0x10), iVar2 == 0)) ||
      ((lStack_28 != 0 || (lVar3 = param_1, FUN_006f3170(), (int)lVar3 == 0)))))) {
    func_0x00705e58();
    func_0x00705e10();
    func_0x00705e64();
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 00705c24; end: 00705c4b;  */

undefined8 FUN_00705c24(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_40 [32];
  int iVar2;
  
  if (param_2 == 0) {
    FUN_00705e10(4,0,0x90);
    return 0;
  }
  iVar1 = (int)auStack_40;
  iVar2 = (int)auStack_40;
  if (*(int *)(param_2 + 0x10) == 0) {
    uVar3 = param_1;
    FUN_006d39c0(param_1,auStack_40,2);
    if (((int)uVar3 != 0) &&
       ((uVar4 = param_2, FUN_006e3e84(), (uVar4 & 7) != 0 ||
        (FUN_006d3a70(auStack_40,0), iVar1 != 0)))) {
      uVar4 = param_2;
      FUN_006e3eb8(param_2);
      FUN_006d2e1c(auStack_40,uVar4 & 0xffffffff,param_2);
      if ((iVar2 != 0) && (FUN_006d3748(), (int)param_1 != 0)) {
        return 1;
      }
    }
    func_0x006d2e10();
  }
  else {
    func_0x006d2e10();
  }
  func_0x006d2e04();
  return 0;
}



/* Entry: 00705c4c; end: 00705e0f;  */

long FUN_00705c4c(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lStack_38;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  FUN_006f2524();
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = param_1;
  func_0x00705e48();
  if ((int)lVar1 != 0) {
    puVar2 = auStack_30;
    func_0x006d46c4(puVar2,&lStack_38);
    if (((int)puVar2 != 0) && (lStack_38 == 0)) {
      puVar2 = auStack_30;
      func_0x00705b88(puVar2,param_1 + 8);
      if ((int)puVar2 == 0) goto LAB_00705d2c;
      puVar2 = auStack_30;
      func_0x00705b88(puVar2,param_1 + 0x10);
      if ((int)puVar2 == 0) goto LAB_00705d2c;
      puVar2 = auStack_30;
      func_0x00705b88(puVar2,param_1 + 0x18);
      if ((int)puVar2 == 0) goto LAB_00705d2c;
      puVar2 = auStack_30;
      func_0x00705b88(puVar2,param_1 + 0x20);
      if ((int)puVar2 == 0) goto LAB_00705d2c;
      puVar2 = auStack_30;
      func_0x00705b88(puVar2,param_1 + 0x28);
      if ((int)puVar2 == 0) goto LAB_00705d2c;
      puVar2 = auStack_30;
      func_0x00705b88(puVar2,param_1 + 0x30);
      if ((int)puVar2 == 0) goto LAB_00705d2c;
      puVar2 = auStack_30;
      func_0x00705b88(puVar2,param_1 + 0x38);
      if ((int)puVar2 == 0) goto LAB_00705d2c;
      puVar2 = auStack_30;
      func_0x00705b88(puVar2,param_1 + 0x40);
      if ((int)puVar2 == 0) goto LAB_00705d2c;
      if ((lStack_28 == 0) && (lVar1 = param_1, FUN_006f3170(), (int)lVar1 != 0)) {
        return param_1;
      }
    }
  }
  func_0x00705e58();
  func_0x00705e10();
LAB_00705d2c:
  func_0x00705e64();
  return 0;
}



/* Entry: 00705e10; end: 00705e77;  */

void FUN_00705e10(uint *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = param_1;
  FUN_006de604();
  if (puVar3 != (uint *)0x0) {
    if (((int)param_1 == 2) && (param_3 == 0)) {
      puVar4 = puVar3;
      ___error();
      param_3 = *puVar4;
    }
    uVar2 = puVar3[0x60];
    uVar1 = uVar2 + 1 & 0xf;
    puVar3[0x60] = uVar1;
    if (uVar1 == puVar3[0x61]) {
      puVar3[0x61] = uVar2 + 2 & 0xf;
    }
    puVar3 = puVar3 + (ulong)uVar1 * 6;
    func_0x006de65c(puVar3);
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined2 *)(puVar3 + 5) = 0;
    puVar3[4] = param_3 & 0xfff | (int)param_1 << 0x18;
  }
  return;
}



/* Entry: 00705e78; end: 00705ed7;  */

undefined8 * FUN_00705e78(undefined8 *param_1)

{
  segment_command *psVar1;
  undefined8 unaff_x20;
  
  func_0x00706438();
  if (param_1 != (undefined8 *)0x0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    psVar1 = &segment_command_00000020;
    FUN_00701e90();
    param_1[1] = psVar1;
    if (psVar1 == (segment_command *)0x0) {
      func_0x00701ed0(param_1);
      param_1 = (undefined8 *)0x0;
    }
    else {
      psVar1->segname[0] = '\0';
      psVar1->segname[1] = '\0';
      psVar1->segname[2] = '\0';
      psVar1->segname[3] = '\0';
      psVar1->segname[4] = '\0';
      psVar1->segname[5] = '\0';
      psVar1->segname[6] = '\0';
      psVar1->segname[7] = '\0';
      psVar1->cmd = 0;
      psVar1->cmdsize = 0;
      psVar1->vmaddr = 0;
      psVar1->segname[8] = '\0';
      psVar1->segname[9] = '\0';
      psVar1->segname[10] = '\0';
      psVar1->segname[0xb] = '\0';
      psVar1->segname[0xc] = '\0';
      psVar1->segname[0xd] = '\0';
      psVar1->segname[0xe] = '\0';
      psVar1->segname[0xf] = '\0';
      param_1[3] = 4;
      param_1[4] = unaff_x20;
    }
  }
  return param_1;
}



/* Entry: 00705ed8; end: 00705f0f;  */

undefined8 * FUN_00705ed8(void)

{
  segment_command *psVar1;
  undefined8 *puVar2;
  undefined8 unaff_x20;
  
  puVar2 = (undefined8 *)0x0;
  func_0x00706438();
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    psVar1 = &segment_command_00000020;
    FUN_00701e90();
    puVar2[1] = psVar1;
    if (psVar1 == (segment_command *)0x0) {
      func_0x00701ed0(puVar2);
      puVar2 = (undefined8 *)0x0;
    }
    else {
      psVar1->segname[0] = '\0';
      psVar1->segname[1] = '\0';
      psVar1->segname[2] = '\0';
      psVar1->segname[3] = '\0';
      psVar1->segname[4] = '\0';
      psVar1->segname[5] = '\0';
      psVar1->segname[6] = '\0';
      psVar1->segname[7] = '\0';
      psVar1->cmd = 0;
      psVar1->cmdsize = 0;
      psVar1->vmaddr = 0;
      psVar1->segname[8] = '\0';
      psVar1->segname[9] = '\0';
      psVar1->segname[10] = '\0';
      psVar1->segname[0xb] = '\0';
      psVar1->segname[0xc] = '\0';
      psVar1->segname[0xd] = '\0';
      psVar1->segname[0xe] = '\0';
      psVar1->segname[0xf] = '\0';
      puVar2[3] = 4;
      puVar2[4] = unaff_x20;
    }
  }
  return puVar2;
}



/* Entry: 00705f10; end: 00705f3f;  */

/* WARNING: Possible PIC construction at 0x00705f28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00705f2c) */

void FUN_00705f10(long param_1)

{
  long *plVar1;
  
  if (param_1 == 0) {
    return;
  }
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 8) + -8);
    FUN_00701f08(plVar1,*plVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_0099a260)(plVar1);
    return;
  }
  return;
}



/* Entry: 00705f40; end: 00706077;  */

/* WARNING: Possible PIC construction at 0x00705f28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00705f2c) */

void FUN_00705f40(ulong *param_1,code *param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  
  if (param_1 == (ulong *)0x0) {
    return;
  }
  for (uVar2 = 0; uVar2 < *param_1; uVar2 = uVar2 + 1) {
    if (*(long *)(param_1[1] + uVar2 * 8) != 0) {
      (*param_2)(param_3);
    }
  }
  if (param_1 != (ulong *)0x0) {
    if (param_1[1] != 0) {
      plVar1 = (long *)(param_1[1] - 8);
      FUN_00701f08(plVar1,*plVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_0099a260)(plVar1);
      return;
    }
    return;
  }
  return;
}



/* Entry: 00706078; end: 00706083;  */

void FUN_00706078(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_0099a400)();
    return;
  }
  return;
}



/* Entry: 00706084; end: 007060ef;  */

undefined8 FUN_00706084(ulong *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((param_1 == (ulong *)0x0) || (uVar2 = *param_1, uVar2 <= param_2)) {
    uVar3 = 0;
  }
  else {
    puVar1 = (undefined8 *)(param_1[1] + param_2 * 8);
    uVar3 = *puVar1;
    if (param_2 != uVar2 - 1) {
      FUN_00706078(puVar1,puVar1 + 1,(uVar2 + ~param_2) * 8);
      param_2 = *param_1 - 1;
    }
    *param_1 = param_2;
  }
  return uVar3;
}



/* Entry: 007060f0; end: 00706127;  */

undefined8 FUN_007060f0(ulong *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_1 != (ulong *)0x0) {
    for (uVar3 = 0; *param_1 != uVar3; uVar3 = uVar3 + 1) {
      if (*(long *)(param_1[1] + uVar3 * 8) == param_2) {
        if ((param_1 == (ulong *)0x0) || (uVar2 = *param_1, uVar2 <= uVar3)) {
          uVar4 = 0;
        }
        else {
          puVar1 = (undefined8 *)(param_1[1] + uVar3 * 8);
          uVar4 = *puVar1;
          if (uVar3 != uVar2 - 1) {
            FUN_00706078(puVar1,puVar1 + 1,(uVar2 + ~uVar3) * 8);
            uVar3 = *param_1 - 1;
          }
          *param_1 = uVar3;
        }
        return uVar4;
      }
    }
  }
  return 0;
}



/* Entry: 00706128; end: 0070624f;  */

undefined8 FUN_00706128(ulong *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_1 != (ulong *)0x0) {
    if (param_1[4] == 0) {
      for (uVar4 = 0; *param_1 != uVar4; uVar4 = uVar4 + 1) {
        if (*(long *)(param_1[1] + uVar4 * 8) == param_3) {
          if (param_2 == (ulong *)0x0) {
            return 1;
          }
          *param_2 = uVar4;
          return 1;
        }
      }
    }
    else if (param_3 != 0) {
      if ((int)param_1[2] == 0) {
        puVar3 = param_1;
        for (uVar4 = 0; uVar4 < *param_1; uVar4 = uVar4 + 1) {
          FUN_00706414(*(undefined8 *)(param_1[1] + uVar4 * 8));
          if ((int)puVar3 == 0) {
            if (param_2 == (ulong *)0x0) {
              return 1;
            }
            *param_2 = uVar4;
            return 1;
          }
        }
      }
      else {
        uVar4 = 0;
        puVar3 = param_1;
        uVar5 = *param_1;
        while (lVar2 = uVar5 - uVar4, uVar4 <= uVar5 && lVar2 != 0) {
          uVar1 = uVar4 + (lVar2 - 1U >> 1);
          FUN_00706414(*(undefined8 *)(param_1[1] + uVar1 * 8));
          if ((int)puVar3 < 1) {
            uVar5 = uVar1;
            if (-1 < (int)puVar3) {
              if (lVar2 == 1) {
                if (param_2 != (ulong *)0x0) {
                  *param_2 = uVar1;
                }
                return 1;
              }
              uVar5 = uVar1 + 1;
            }
          }
          else {
            uVar4 = uVar1 + 1;
          }
        }
      }
    }
  }
  return 0;
}



/* Entry: 00706250; end: 00706287;  */

undefined8 FUN_00706250(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    lVar1 = 0;
    if ((param_1 == (long *)0x0) || (lVar2 = *param_1, lVar2 == 0)) {
      uVar4 = 0;
    }
    else {
      puVar3 = (undefined8 *)param_1[1];
      uVar4 = *puVar3;
      if (lVar2 != 1) {
        FUN_00706078(puVar3,puVar3 + 1,(lVar2 + -1) * 8);
        lVar1 = *param_1 + -1;
      }
      *param_1 = lVar1;
    }
    return uVar4;
  }
  return 0;
}



/* Entry: 00706288; end: 00706357;  */

ulong * FUN_00706288(ulong *param_1)

{
  ulong uVar1;
  ulong *unaff_x20;
  
  if (param_1 != (ulong *)0x0) {
    func_0x00706438();
    if (param_1 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    uVar1 = unaff_x20[3] << 3;
    FUN_00701e90();
    param_1[1] = uVar1;
    if (uVar1 != 0) {
      uVar1 = *unaff_x20;
      *param_1 = uVar1;
      if ((uVar1 & 0x1fffffffffffffff) != 0) {
        _memcpy();
      }
      *(int *)(param_1 + 2) = (int)unaff_x20[2];
      uVar1 = unaff_x20[4];
      param_1[3] = unaff_x20[3];
      param_1[4] = uVar1;
      return param_1;
    }
    FUN_00705f10(param_1);
  }
  return (ulong *)0x0;
}



/* Entry: 00706358; end: 00706413;  */

ulong * FUN_00706358(ulong *param_1,code *param_2,undefined8 param_3,code *param_4,
                    undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  FUN_00706288();
  if (param_1 != (ulong *)0x0) {
    for (uVar3 = 0; uVar3 < *param_1; uVar3 = uVar3 + 1) {
      if (*(long *)(param_1[1] + uVar3 * 8) != 0) {
        uVar1 = param_3;
        (*param_2)();
        *(undefined8 *)(param_1[1] + uVar3 * 8) = uVar1;
        if (*(long *)(param_1[1] + uVar3 * 8) == 0) {
          for (uVar2 = 0; uVar3 != uVar2; uVar2 = uVar2 + 1) {
            if (*(long *)(param_1[1] + uVar2 * 8) != 0) {
              (*param_4)(param_5);
            }
          }
          FUN_00705f10(param_1);
          return (ulong *)0x0;
        }
      }
    }
  }
  return param_1;
}



/* Entry: 00706414; end: 00706443;  */

void FUN_00706414(undefined8 param_1)

{
  long unaff_x20;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uStack0000000000000000;
  
  uStack0000000000000000 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00706424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(unaff_x20 + 0x20),&stack0x00000008);
  return;
}



/* Entry: 00706444; end: 0070655f;  */

void FUN_00706444(undefined8 param_1)

{
  int iVar1;
  
  _pthread_rwlock_init(param_1,0);
  iVar1 = (int)param_1;
  if (iVar1 == 0) {
    return;
  }
  _abort();
  _pthread_rwlock_rdlock();
  if (iVar1 == 0) {
    return;
  }
  _abort();
  _pthread_rwlock_wrlock();
  if (iVar1 == 0) {
    return;
  }
  _abort();
  _pthread_rwlock_unlock();
  if (iVar1 == 0) {
    return;
  }
  _abort();
  _pthread_rwlock_unlock();
  if (iVar1 == 0) {
    return;
  }
  _abort();
  _pthread_rwlock_rdlock();
  if (iVar1 == 0) {
    return;
  }
  _abort();
  _pthread_rwlock_wrlock();
  if (iVar1 == 0) {
    return;
  }
  _abort();
  _pthread_rwlock_unlock();
  if (iVar1 != 0) {
    _abort();
    _pthread_rwlock_unlock();
    if (iVar1 == 0) {
      return;
    }
    _abort();
    _pthread_once();
    if (iVar1 != 0) {
      _abort();
      FUN_0070673c();
      if (iRam0000000000b6cdd0 != 0) {
        _pthread_getspecific();
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 00706560; end: 007065a7;  */

void FUN_00706560(void)

{
  FUN_0070673c();
  if (iRam0000000000b6cdd0 != 0) {
    _pthread_getspecific();
  }
  return;
}



/* Entry: 007065a8; end: 007065db;  */

void FUN_007065a8(void)

{
  int iVar1;
  
  iVar1 = 0xb6cdd8;
  _pthread_key_create(0xb6cdd8,FUN_00706694);
  uRam0000000000b6cdd0 = (uint)(iVar1 == 0);
  return;
}



/* Entry: 007065dc; end: 00706693;  */

undefined8 FUN_007065dc(ulong param_1,undefined8 param_2,code *param_3)

{
  int iVar1;
  segment_command *psVar2;
  segment_command *psVar3;
  
  FUN_0070673c();
  if (iRam0000000000b6cdd0 == 0) goto LAB_00706674;
  psVar2 = psRam0000000000b6cdd8;
  _pthread_getspecific();
  psVar3 = psVar2;
  if (psVar2 == (segment_command *)0x0) {
    psVar3 = &segment_command_00000020;
    FUN_00701e90();
    if (psVar3 == (segment_command *)0x0) goto LAB_00706674;
    psVar3->segname[0] = '\0';
    psVar3->segname[1] = '\0';
    psVar3->segname[2] = '\0';
    psVar3->segname[3] = '\0';
    psVar3->segname[4] = '\0';
    psVar3->segname[5] = '\0';
    psVar3->segname[6] = '\0';
    psVar3->segname[7] = '\0';
    psVar3->cmd = 0;
    psVar3->cmdsize = 0;
    psVar3->vmaddr = 0;
    psVar3->segname[8] = '\0';
    psVar3->segname[9] = '\0';
    psVar3->segname[10] = '\0';
    psVar3->segname[0xb] = '\0';
    psVar3->segname[0xc] = '\0';
    psVar3->segname[0xd] = '\0';
    psVar3->segname[0xe] = '\0';
    psVar3->segname[0xf] = '\0';
    psVar2 = psRam0000000000b6cdd8;
    _pthread_setspecific(psRam0000000000b6cdd8,psVar3);
    if ((int)psVar2 != 0) {
      func_0x00701ed0(psVar3);
      goto LAB_00706674;
    }
  }
  iVar1 = (int)psVar2;
  func_0x0070675c();
  if (iVar1 == 0) {
    *(code **)((param_1 & 0xffffffff) * 8 + 0xb6cde0) = param_3;
    func_0x00706750();
    *(undefined8 *)(psVar3->segname + (param_1 & 0xffffffff) * 8 + -8) = param_2;
    return 1;
  }
LAB_00706674:
  (*param_3)(param_2);
  return 0;
}



/* Entry: 00706694; end: 0070673b;  */

/* WARNING: Possible PIC construction at 0x00706570: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00706574) */
/* WARNING: Removing unreachable block (ram,0x00706598) */
/* WARNING: Removing unreachable block (ram,0x00706580) */
/* WARNING: Removing unreachable block (ram,0x00706590) */
/* WARNING: Removing unreachable block (ram,0x0070659c) */

void FUN_00706694(long param_1)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 auStack_60 [5];
  long lStack_38;
  
  puVar3 = &stack0xfffffffffffffff0;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((param_1 != 0) && (lVar2 = param_1, func_0x0070675c(), unaff_x19 = param_1, (int)lVar2 == 0))
  {
    auStack_60[1] = uRam0000000000b6cde8;
    auStack_60[0] = uRam0000000000b6cde0;
    auStack_60[3] = uRam0000000000b6cdf8;
    auStack_60[2] = uRam0000000000b6cdf0;
    func_0x00706750();
    for (lVar2 = 0; lVar2 != 0x20; lVar2 = lVar2 + 8) {
      if (*(code **)((long)auStack_60 + lVar2) != (code *)0x0) {
        (**(code **)((long)auStack_60 + lVar2))(*(undefined8 *)(param_1 + lVar2));
      }
    }
    func_0x00701ed0(param_1);
    unaff_x20 = 0x20;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return;
  }
  uVar4 = 0x70673c;
  ___stack_chk_fail();
  puVar1 = auStack_60;
  while( true ) {
    lVar2 = 0xb2a078;
    *(undefined1 **)((long)puVar1 + -0x10) = puVar3;
    *(undefined8 *)((long)puVar1 + -8) = uVar4;
    _pthread_once(0xb2a078,FUN_007065a8);
    if ((int)lVar2 == 0) break;
    _abort();
    *(undefined8 *)((long)puVar1 + -0x30) = unaff_x20;
    *(long *)((long)puVar1 + -0x28) = unaff_x19;
    *(undefined1 **)((long)puVar1 + -0x20) = (undefined1 *)((long)puVar1 + -0x10);
    *(code **)((long)puVar1 + -0x18) = FUN_00706560;
    puVar3 = (undefined1 *)((long)puVar1 + -0x20);
    uVar4 = 0x706574;
    puVar1 = (undefined8 *)((long)puVar1 + -0x30);
    unaff_x19 = lVar2;
  }
  return;
}



/* Entry: 0070673c; end: 00706767;  */

void FUN_0070673c(void)

{
  int iVar1;
  
  iVar1 = 0xb2a078;
  _pthread_once(0xb2a078,FUN_007065a8);
  if (iVar1 != 0) {
    _abort();
    FUN_0070673c();
    if (iRam0000000000b6cdd0 != 0) {
      _pthread_getspecific();
    }
    return;
  }
  return;
}



/* Entry: 00706768; end: 007067ef;  */

long FUN_00706768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lStack_38;
  
  lStack_38 = 0;
  FUN_006cf704(param_3,&lStack_38,param_1);
  if (lStack_38 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lStack_38;
    FUN_006ea778(lStack_38,(long)(int)param_3,param_4,param_5,param_2,0);
    func_0x00701ed0(lStack_38);
  }
  return lVar1;
}



/* Entry: 007067f0; end: 0070691f;  */

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_007067f0(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4,long param_5)

{
  int *piVar1;
  long *plVar2;
  undefined8 uVar3;
  long alStack_78 [6];
  long lStack_48;
  
  if (param_5 == 0) {
    uVar3 = 0x43;
LAB_00706864:
    FUN_006de8e4(0xb,0,uVar3,0,0);
    return 0;
  }
  if (param_3[1] == 3) {
    piVar1 = param_3;
    FUN_006cb25c(param_3,&lStack_48);
    if ((int)piVar1 == 0) {
      uVar3 = 0x6d;
      goto LAB_00706864;
    }
  }
  else {
    lStack_48 = (long)*param_3;
  }
  alStack_78[0] = 0;
  alStack_78[2] = 0;
  alStack_78[1] = 0;
  alStack_78[4] = 0;
  alStack_78[3] = 0;
  plVar2 = alStack_78 + 1;
  FUN_00706920(plVar2,param_2,param_5);
  if ((int)plVar2 != 0) {
    FUN_006cf704(param_4,alStack_78,param_1);
    if (alStack_78[0] == 0) {
      uVar3 = 0x41;
    }
    else {
      plVar2 = alStack_78 + 1;
      func_0x006df118(plVar2,*(undefined8 *)(param_3 + 2),lStack_48,alStack_78[0],(long)(int)param_4
                     );
      if ((int)plVar2 != 0) {
        uVar3 = 1;
        goto LAB_007068f4;
      }
      uVar3 = 6;
    }
    FUN_006de8e4(0xb,0,uVar3,0,0);
  }
  uVar3 = 0;
LAB_007068f4:
  func_0x00701ed0(alStack_78[0]);
  FUN_006ea7fc(alStack_78 + 1);
  return uVar3;
}



/* Entry: 00706920; end: 00706a27;  */

void FUN_00706920(undefined8 param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iStack_38;
  uint uStack_34;
  
  iVar1 = (int)*param_2;
  FUN_00702384();
  iVar2 = iVar1;
  func_0x00702820();
  if (iVar2 != 0) {
    if (iStack_38 != *(int *)(param_3 + 4)) {
      func_0x00706a38();
      goto LAB_007069e4;
    }
    uVar3 = (ulong)uStack_34;
    if (uStack_34 != 0) {
      if (((int *)param_2[1] == (int *)0x0) || (*(int *)param_2[1] == 5)) {
        func_0x006dcef4();
        if (uVar3 != 0) {
LAB_0070699c:
          FUN_006deedc(param_1,0,uVar3,0,param_3);
          return;
        }
        func_0x00706a38();
      }
      goto LAB_007069e4;
    }
    if (iVar1 == 0x3b5) {
      if (param_2[1] == 0) {
        uVar3 = 0;
        goto LAB_0070699c;
      }
      goto LAB_007069e4;
    }
    if (iVar1 == 0x390) {
      FUN_00708628(param_1,param_2,param_3);
      return;
    }
  }
  func_0x00706a38();
LAB_007069e4:
  func_0x00706a44();
  return;
}



/* Entry: 00706a28; end: 00706a4f;  */

void FUN_00706a28(void)

{
  return;
}



/* Entry: 00706a50; end: 00706a97;  */

undefined8 FUN_00706a50(undefined8 param_1,undefined8 param_2)

{
  int iStack_24;
  
  iStack_24 = 0;
  FUN_00706a98(param_1,param_2,0,&iStack_24);
  if (iStack_24 != 0) {
    func_0x007075e8();
    func_0x007075dc();
  }
  return param_1;
}



/* Entry: 00706a98; end: 007073b3;  */

uint * FUN_00706a98(uint *param_1,ulong *param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  uint *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong *puVar13;
  char **ppcVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  undefined4 *puVar18;
  undefined1 auStack_290 [4];
  undefined1 auStack_28c [4];
  ulong uStack_288;
  undefined1 *puStack_280;
  undefined1 *puStack_278;
  long lStack_270;
  undefined8 uStack_268;
  uint uStack_260;
  int iStack_25c;
  char *apcStack_258 [3];
  undefined4 auStack_240 [116];
  uint uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  char *pcStack_58;
  
  lStack_270 = 0;
  uStack_288 = 0;
  uStack_268 = 0xffffffffffffffff;
  iStack_25c = 1;
  uStack_70 = 0;
  func_0x007075f4();
  iVar2 = iStack_25c;
  if ((int)param_1 != 0) {
    uVar9 = 0xb9;
    goto LAB_00706af8;
  }
  uVar11 = (ulong)uStack_260;
  if ((uStack_260 & 0xfffffffe) == 0x10) {
    if (param_2 == (ulong *)0x0) {
      uVar9 = 0xaa;
LAB_00706af8:
      *param_4 = uVar9;
      return (uint *)0x0;
    }
    if (0x31 < param_3) {
      uVar9 = 0x83;
      goto LAB_00706af8;
    }
    lStack_68 = 0;
    FUN_00705ed8();
    if (param_1 == (uint *)0x0) {
      puVar10 = (uint *)0x0;
      puVar13 = (ulong *)0x0;
      goto LAB_00706dac;
    }
    puVar13 = (ulong *)0x0;
    if (apcStack_258[0] == (char *)0x0) {
LAB_00706c44:
      puVar10 = param_1;
      if (uStack_260 == 0x11) {
        func_0x006d0ae8();
      }
      else {
        func_0x006d0adc(param_1,&lStack_68);
      }
      iVar2 = (int)puVar10;
      if (iVar2 < 0) goto LAB_00706da8;
      func_0x006d0ac4();
      if (puVar10 == (uint *)0x0) goto LAB_00706dac;
      func_0x006ce440();
      *(ulong *)(puVar10 + 2) = uVar11;
      if (uVar11 == 0) goto LAB_00706dac;
      *puVar10 = uStack_260;
      *(long *)(uVar11 + 8) = lStack_68;
      **(int **)(puVar10 + 2) = iVar2;
      lStack_68 = 0;
LAB_00706dbc:
      FUN_00705f40(param_1,FUN_00707538,0x6d0ad0);
    }
    else {
      puVar13 = param_2;
      FUN_00711070(param_2,apcStack_258[0]);
      if (puVar13 != (ulong *)0x0) {
        uVar17 = 0;
        do {
          if (*puVar13 <= uVar17) goto LAB_00706c44;
          lVar4 = *(long *)(*(long *)(puVar13[1] + uVar17 * 8) + 0x10);
          FUN_00706a98(lVar4,param_2,param_3 + 1,param_4);
          if (lVar4 == 0) break;
          puVar10 = param_1;
          func_0x00706268(param_1,lVar4);
          uVar17 = uVar17 + 1;
        } while (puVar10 != (uint *)0x0);
      }
LAB_00706da8:
      puVar10 = (uint *)0x0;
LAB_00706dac:
      if (lStack_68 != 0) {
        func_0x00701ed0();
      }
      if (param_1 != (uint *)0x0) goto LAB_00706dbc;
    }
    param_1 = puVar10;
    if ((puVar13 != (ulong *)0x0) && (*(code **)(param_2[5] + 0x18) != (code *)0x0)) {
      (**(code **)(param_2[5] + 0x18))(param_2[6],puVar13);
    }
    goto LAB_00706ef4;
  }
  func_0x006d0ac4();
  if (param_1 == (uint *)0x0) {
    func_0x007075e8();
    func_0x007075dc();
    goto LAB_00706ef4;
  }
  pcVar7 = "";
  if (apcStack_258[0] != (char *)0x0) {
    pcVar7 = apcStack_258[0];
  }
  switch(uStack_260) {
  case 1:
    if (iVar2 == 1) {
      lStack_68 = 0;
      uStack_60 = 0;
      plVar6 = &lStack_68;
      pcStack_58 = pcVar7;
      func_0x007156ec(plVar6,param_1 + 2);
      iVar2 = (int)plVar6;
joined_r0x00706d38:
      if (iVar2 != 0) goto code_r0x00706c84;
      goto LAB_00706d48;
    }
    func_0x007075e8();
    break;
  case 2:
  case 10:
    if (iVar2 == 1) {
      pcVar5 = (char *)0x0;
      FUN_0071557c(0,pcVar7);
      *(char **)(param_1 + 2) = pcVar5;
joined_r0x00706e54:
      if (pcVar5 != (char *)0x0) goto code_r0x00706c84;
      goto LAB_00706d48;
    }
    func_0x007075e8();
    break;
  case 3:
  case 4:
    puVar10 = param_1;
    FUN_006ce408();
    *(uint **)(param_1 + 2) = puVar10;
    if (puVar10 != (uint *)0x0) {
      if (iVar2 == 1) {
        func_0x00707608(puVar10);
      }
      else {
        if (iVar2 != 3) {
          if (uStack_260 == 3 && iVar2 == 4) {
            func_0x007075f4();
            iVar2 = (int)pcVar7;
            goto joined_r0x00706d38;
          }
          func_0x007075e8();
          break;
        }
        func_0x00715b04(pcVar7,&lStack_68);
        if (pcVar7 == (char *)0x0) goto LAB_00706d48;
        *(char **)(*(long *)(param_1 + 2) + 8) = pcVar7;
        **(undefined4 **)(param_1 + 2) = (int)lStack_68;
        *(uint *)(*(long *)(param_1 + 2) + 4) = uStack_260;
      }
      if (uStack_260 == 3) {
        *(ulong *)(*(long *)(param_1 + 2) + 0x10) =
             *(ulong *)(*(long *)(param_1 + 2) + 0x10) & 0xfffffffffffffff0;
        *(ulong *)(*(long *)(param_1 + 2) + 0x10) = *(ulong *)(*(long *)(param_1 + 2) + 0x10) | 8;
      }
code_r0x00706c84:
      *param_1 = uStack_260;
      goto LAB_00706ef4;
    }
    func_0x007075e8();
    break;
  case 5:
    if (*pcVar7 == '\0') goto code_r0x00706c84;
    func_0x007075e8();
    break;
  case 6:
    if (iVar2 == 1) {
      FUN_007024d4(pcVar7,0);
      *(char **)(param_1 + 2) = pcVar7;
      pcVar5 = pcVar7;
      goto joined_r0x00706e54;
    }
    func_0x007075e8();
    break;
  default:
    goto LAB_00706d48;
  case 0xc:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1e:
    if (iVar2 == 1) {
      uVar8 = 0x1001;
    }
    else {
      if (iVar2 != 2) {
        func_0x007075e8();
        break;
      }
      uVar8 = 0x1000;
    }
    puVar10 = param_1 + 2;
    func_0x006cc18c(puVar10,pcVar7,0xffffffff,uVar8,*(undefined8 *)(&UNK_0082d240 + uVar11 * 8));
    if (0 < (int)puVar10) goto code_r0x00706c84;
    goto LAB_00706d48;
  case 0x17:
  case 0x18:
    if (iVar2 == 1) {
      puVar10 = param_1;
      FUN_006ce408();
      *(uint **)(param_1 + 2) = puVar10;
      if ((puVar10 != (uint *)0x0) && (func_0x00707608(), (int)puVar10 != 0)) {
        *(uint *)(*(long *)(param_1 + 2) + 4) = uStack_260;
        iVar2 = (int)*(undefined8 *)(param_1 + 2);
        FUN_006cd668();
        goto joined_r0x00706d38;
      }
      goto LAB_00706d48;
    }
    func_0x007075e8();
  }
  FUN_006de8e4();
LAB_00706ee8:
  func_0x006d0ad0(param_1);
  param_1 = (uint *)0x0;
LAB_00706ef4:
  if (param_1 == (uint *)0x0) {
    return (uint *)0x0;
  }
  if (((uint)uStack_268 == -1) && (uStack_70 == 0)) {
    return param_1;
  }
  puVar10 = param_1;
  func_0x006d0ab8(param_1,&lStack_270);
  iVar2 = (int)puVar10;
  func_0x006d0ad0(param_1);
  lStack_68 = lStack_270;
  if ((uint)uStack_268 == -1) {
    uVar15 = 0;
    lVar4 = lStack_270;
  }
  else {
    plVar6 = &lStack_68;
    FUN_006ce03c(plVar6,&uStack_288,auStack_28c,auStack_290,(long)iVar2);
    lVar4 = lStack_68;
    if (0x7f < (uint)plVar6) {
      puVar10 = (uint *)0x0;
      puVar12 = (undefined1 *)0x0;
      goto LAB_0070709c;
    }
    iVar2 = iVar2 + ((int)lStack_270 - (int)lStack_68);
    uVar15 = (uint)plVar6 & 0x20;
    puVar10 = (uint *)0x0;
    func_0x006ce210(0,uStack_288 & 0xffffffff,uStack_268 & 0xffffffff);
  }
  iVar3 = (int)puVar10;
  ppcVar14 = apcStack_258 + (long)(int)uStack_70 * 3;
  for (uVar1 = uStack_70 & ((int)uStack_70 >> 0x1f ^ 0xffffffffU); uVar1 != 0; uVar1 = uVar1 - 1) {
    pcVar7 = (char *)((long)*(int *)((long)ppcVar14 + -4) + (long)(int)puVar10);
    *ppcVar14 = pcVar7;
    puVar10 = (uint *)0x0;
    func_0x006ce210(0,pcVar7,*(undefined4 *)(ppcVar14 + -2));
    iVar3 = (int)puVar10;
    ppcVar14 = ppcVar14 + -3;
  }
  puVar12 = (undefined1 *)(long)iVar3;
  func_0x00701e90();
  if (puVar12 == (undefined1 *)0x0) {
    puVar10 = (uint *)0x0;
  }
  else {
    puVar18 = auStack_240;
    puStack_278 = puVar12;
    for (iVar16 = 0; iVar16 < (int)uStack_70; iVar16 = iVar16 + 1) {
      func_0x006ce110(&puStack_278,puVar18[-2],*puVar18,puVar18[-4],puVar18[-3]);
      if (puVar18[-1] != 0) {
        *puStack_278 = 0;
        puStack_278 = puStack_278 + 1;
      }
      puVar18 = puVar18 + 6;
    }
    if ((uint)uStack_268 != 0xffffffff) {
      uVar1 = 0x20;
      if (uStack_268._4_4_ != 0 || ((uint)uStack_268 & 0xfffffffe) != 0x10) {
        uVar1 = uVar15;
      }
      func_0x006ce110(&puStack_278,uVar1,uStack_288 & 0xffffffff);
    }
    if (iVar2 != 0) {
      _memcpy(puStack_278,lVar4,(long)iVar2);
    }
    puVar10 = (uint *)0x0;
    puStack_280 = puVar12;
    func_0x006d0aac(0,&puStack_280,(undefined1 *)(long)iVar3);
  }
LAB_0070709c:
  if (lStack_270 != 0) {
    func_0x00701ed0();
  }
  if (puVar12 != (undefined1 *)0x0) {
    func_0x00701ed0(puVar12);
  }
  return puVar10;
LAB_00706d48:
  func_0x007075e8();
  func_0x007075dc();
  func_0x00707600();
  goto LAB_00706ee8;
}



/* Entry: 007073b4; end: 007074b7;  */

undefined8 FUN_007073b4(long param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  long lVar1;
  undefined4 uVar2;
  char *pcStack_40;
  char cStack_32;
  undefined1 uStack_31;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = param_1;
  _strtoul(param_1,&pcStack_40,10);
  if ((pcStack_40 != (char *)0x0) &&
     (*pcStack_40 != '\0' && (char *)(param_1 + param_2) < pcStack_40)) {
    return 0;
  }
  if (lVar1 < 0) {
    func_0x007075e8();
    func_0x007075dc();
    return 0;
  }
  *param_3 = (int)lVar1;
  if ((pcStack_40 != (char *)0x0) && (param_2 != (int)pcStack_40 - (int)param_1)) {
    cStack_32 = *pcStack_40;
    if (cStack_32 == 'A') {
      uVar2 = 0x40;
      goto LAB_0070744c;
    }
    if (cStack_32 != 'C') {
      if (cStack_32 != 'P') {
        if (cStack_32 == 'U') {
          *param_4 = 0;
          return 1;
        }
        uStack_31 = 0;
        func_0x007075e8();
        func_0x007075dc();
        func_0x00707600();
        return 0;
      }
      uVar2 = 0xc0;
      goto LAB_0070744c;
    }
  }
  uVar2 = 0x80;
LAB_0070744c:
  *param_4 = uVar2;
  return 1;
}



/* Entry: 007074b8; end: 00707537;  */

undefined8 FUN_007074b8(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if ((param_6 == 0) && (iVar1 != -1)) {
    func_0x007075e8();
  }
  else {
    iVar2 = param_1[0x7e];
    if (iVar2 != 0x14) {
      param_1[0x7e] = iVar2 + 1;
      if (iVar1 != -1) {
        param_3 = param_1[1];
        param_1[0] = -1;
        param_1[1] = -1;
        param_2 = iVar1;
      }
      param_1[(long)iVar2 * 6 + 6] = param_2;
      param_1[(long)iVar2 * 6 + 7] = param_3;
      param_1[(long)iVar2 * 6 + 8] = param_4;
      param_1[(long)iVar2 * 6 + 9] = param_5;
      return 1;
    }
    func_0x007075e8();
  }
  func_0x007075dc();
  return 0;
}



/* Entry: 00707538; end: 00707543;  */

void FUN_00707538(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00707540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Entry: 00707544; end: 007075db;  */

undefined8 FUN_00707544(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  char *pcStack_38;
  
  if ((param_1 != 0) &&
     ((lVar1 = param_1, _strtoul(param_1,&pcStack_38,10), pcStack_38 == (char *)0x0 ||
      (*pcStack_38 == '\0' || pcStack_38 == (char *)(param_1 + param_2))))) {
    if ((-1 < lVar1) && (FUN_006cb4b4(param_3,lVar1,1), (int)param_3 != 0)) {
      return 1;
    }
    func_0x007075e8();
    func_0x007075dc();
  }
  return 0;
}



/* Entry: 007075dc; end: 00707613;  */

void FUN_007075dc(uint *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = param_1;
  FUN_006de604();
  if (puVar3 != (uint *)0x0) {
    if (((int)param_1 == 2) && (param_3 == 0)) {
      puVar4 = puVar3;
      ___error();
      param_3 = *puVar4;
    }
    uVar2 = puVar3[0x60];
    uVar1 = uVar2 + 1 & 0xf;
    puVar3[0x60] = uVar1;
    if (uVar1 == puVar3[0x61]) {
      puVar3[0x61] = uVar2 + 2 & 0xf;
    }
    puVar3 = puVar3 + (ulong)uVar1 * 6;
    func_0x006de65c(puVar3);
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined2 *)(puVar3 + 5) = 0;
    puVar3[4] = param_3 & 0xfff | (int)param_1 << 0x18;
  }
  return;
}



/* Entry: 00707614; end: 00707737;  */

void FUN_00707614(long param_1)

{
  dword *pdVar1;
  dword *pdVar2;
  
  pdVar1 = &MACH_HEADER.ncmds;
  FUN_00701e90();
  if (pdVar1 != (dword *)0x0) {
    pdVar2 = pdVar1;
    FUN_006d33c4();
    *(dword **)pdVar1 = pdVar2;
    if (pdVar2 == (dword *)0x0) {
      func_0x00701ed0(pdVar1);
    }
    else {
      *(undefined8 *)(pdVar1 + 2) = 0;
      *(dword **)(param_1 + 0x10) = pdVar1;
    }
  }
  return;
}



/* Entry: 00707738; end: 00707aff;  */

/* WARNING: Possible PIC construction at 0x00707b18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00707af4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00707af8) */

dword * FUN_00707738(dword *param_1,int param_2,long param_3,undefined4 *param_4)

{
  dword **ppdVar1;
  int iVar2;
  dword *pdVar3;
  undefined8 uVar4;
  dword *pdVar5;
  long *plVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  dword *unaff_x19;
  dword *pdVar10;
  long lVar11;
  dword dVar12;
  ulong uVar13;
  char *pcVar14;
  undefined8 *puVar15;
  undefined8 *****pppppuVar16;
  code *pcVar17;
  dword *pdStack_390;
  dword *pdStack_388;
  undefined8 ****ppppuStack_380;
  code *pcStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long lStack_360;
  char *pcStack_358;
  ulong uStack_350;
  undefined4 *puStack_340;
  long lStack_338;
  long lStack_330;
  ulong uStack_328;
  undefined4 *puStack_320;
  undefined1 auStack_318 [144];
  long lStack_288;
  ulong uStack_278;
  int aiStack_270 [2];
  undefined1 **ppuStack_268;
  long alStack_260 [2];
  undefined1 *apuStack_250 [15];
  undefined1 auStack_1d8 [16];
  long alStack_1c8 [30];
  undefined1 auStack_d8 [40];
  long alStack_b0 [8];
  long lStack_70;
  
  ppdVar1 = (dword **)&uStack_370;
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_3 != 0) {
    aiStack_270[0] = param_2;
    if (param_2 == 1) {
      plVar6 = alStack_b0;
      apuStack_250[0] = auStack_d8;
      pcVar14 = "";
LAB_007077b8:
      *plVar6 = param_3;
      ppuStack_268 = apuStack_250;
      pdVar3 = param_1;
      FUN_006d33c4();
      if (pdVar3 != (dword *)0x0) {
        lStack_330 = *(long *)(param_1 + 4);
        lVar7 = param_3;
        puStack_340 = param_4;
        FUN_00708aac();
        alStack_260[0] = lVar7;
        func_0x00708b1c();
        alStack_260[1] = param_3;
        pdVar10 = (dword *)(segment_command_00000020.segname + 7);
        lVar7 = 0;
        while (lVar7 != 2) {
          uVar13 = 0;
          lVar11 = alStack_260[lVar7];
          lStack_338 = lVar7;
          while( true ) {
            puVar8 = *(ulong **)(lStack_330 + 8);
            if (puVar8 == (ulong *)0x0) {
              uVar9 = 0;
            }
            else {
              uVar9 = *puVar8;
            }
            if (uVar9 <= uVar13) break;
            puVar15 = *(undefined8 **)(puVar8[1] + uVar13 * 8);
            uVar4 = *puVar15;
            _strlen(uVar4);
            pdVar5 = pdVar3;
            func_0x006d34ac(pdVar3,(long)((int)uVar4 + 0x11));
            if (pdVar5 == (dword *)0x0) {
              func_0x00707d60();
              func_0x00707d04();
              goto LAB_00707a90;
            }
            uStack_328 = uVar13;
            if ((param_2 == 2) && (puVar15[2] != 0)) {
              iVar2 = 0xb2a118;
              lStack_288 = lVar11;
              func_0x007064d4();
              func_0x00707d50();
              if (iVar2 == 0) {
                uVar13 = 0;
                lVar7 = 0;
              }
              else {
                lVar7 = *(long *)(*(long *)(puVar15[2] + 8) + uStack_278 * 8);
                uVar13 = (ulong)*(uint *)(lVar7 + 8);
              }
              func_0x0070650c(0xb2a118);
            }
            else {
              uVar13 = 0;
              lVar7 = 0;
            }
            while( true ) {
              uStack_370 = *puVar15;
              uStack_368 = 0x2f;
              lStack_360 = lVar11;
              pcStack_358 = pcVar14;
              uStack_350 = uVar13;
              FUN_00702090(*(undefined8 *)(pdVar3 + 2),*(undefined8 *)(pdVar3 + 4),&UNK_0091bd15);
              uVar4 = *(undefined8 *)(pdVar3 + 2);
              _stat(uVar4,auStack_318);
              dVar12 = (dword)uVar13;
              if ((int)uVar4 < 0) break;
              if (param_2 == 1) {
                pdVar5 = param_1;
                FUN_00707d78(param_1,*(undefined8 *)(pdVar3 + 2),*(undefined4 *)(puVar15 + 1));
                iVar2 = (int)pdVar5;
joined_r0x0070792c:
                if (iVar2 == 0) break;
              }
              else if (param_2 == 2) {
                pdVar5 = param_1;
                func_0x00707e88(param_1,*(undefined8 *)(pdVar3 + 2),*(undefined4 *)(puVar15 + 1));
                iVar2 = (int)pdVar5;
                goto joined_r0x0070792c;
              }
              uVar13 = (ulong)(dVar12 + 1);
            }
            func_0x00706480(*(long *)(param_1 + 6) + 0x10);
            func_0x00706308(*(undefined8 *)(*(long *)(param_1 + 6) + 8));
            uVar4 = *(undefined8 *)(*(long *)(param_1 + 6) + 8);
            FUN_00706128(uVar4,&uStack_278,aiStack_270,0x707ce8);
            if ((((int)uVar4 == 0) ||
                (puVar8 = *(ulong **)(*(long *)(param_1 + 6) + 8), puVar8 == (ulong *)0x0)) ||
               (*puVar8 <= uStack_278)) {
              puStack_320 = (undefined4 *)0x0;
            }
            else {
              puStack_320 = *(undefined4 **)(puVar8[1] + uStack_278 * 8);
            }
            func_0x007064b8(*(long *)(param_1 + 6) + 0x10);
            if (param_2 == 2) {
              func_0x007064f0(0xb2a118);
              if (lVar7 == 0) {
                iVar2 = (int)puVar15[2];
                lStack_288 = lVar11;
                func_0x00706308();
                func_0x00707d50();
                if (((iVar2 != 0) && (puVar8 = (ulong *)puVar15[2], puVar8 != (ulong *)0x0)) &&
                   ((uStack_278 < *puVar8 &&
                    (lVar7 = *(long *)(puVar8[1] + uStack_278 * 8), lVar7 != 0))))
                goto LAB_007079c0;
                pdVar5 = &MACH_HEADER.ncmds;
                func_0x00701e90();
                if (pdVar5 == (dword *)0x0) {
                  func_0x00707d2c();
                  goto LAB_00707a90;
                }
                *(long *)pdVar5 = lVar11;
                pdVar5[2] = dVar12;
                lVar7 = puVar15[2];
                func_0x00706268(lVar7,pdVar5);
                if (lVar7 == 0) {
                  func_0x00707d2c();
                  pcVar17 = (code *)0x707af8;
                  pppppuVar16 = (undefined8 *****)&stack0xfffffffffffffff0;
                  goto SUB_00701ed0;
                }
                func_0x00706308(puVar15[2]);
              }
              else {
LAB_007079c0:
                if (*(int *)(lVar7 + 8) < (int)dVar12) {
                  *(dword *)(lVar7 + 8) = dVar12;
                }
              }
              func_0x00707d2c();
            }
            if (puStack_320 != (undefined4 *)0x0) {
              *puStack_340 = *puStack_320;
              *(undefined8 *)(puStack_340 + 2) = *(undefined8 *)(puStack_320 + 2);
              FUN_006de5b0();
              pdVar10 = (dword *)((long)&MACH_HEADER.magic + 1);
              goto LAB_00707ab4;
            }
            uVar13 = uStack_328 + 1;
          }
          lVar7 = lStack_338 + 1;
        }
LAB_00707a90:
        pdVar10 = (dword *)0x0;
LAB_00707ab4:
        param_1 = pdVar3;
        func_0x006d3400();
        unaff_x19 = pdVar3;
        goto LAB_00707abc;
      }
      func_0x00707d60();
      param_1 = pdVar3;
    }
    else {
      if (param_2 == 2) {
        apuStack_250[0] = auStack_1d8;
        plVar6 = alStack_1c8;
        pcVar14 = "r";
        goto LAB_007077b8;
      }
      func_0x00707d60();
    }
    func_0x00707d04();
  }
  pdVar10 = (dword *)0x0;
LAB_00707abc:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return pdVar10;
  }
  ___stack_chk_fail();
  ppdVar1 = &pdStack_390;
  pcStack_378 = FUN_00707b00;
  pdStack_390 = pdVar10;
  pdStack_388 = unaff_x19;
  ppppuStack_380 = (undefined8 ****)&stack0xfffffffffffffff0;
  if (*(dword **)param_1 == (dword *)0x0) {
    if (*(long *)(param_1 + 4) != 0) {
      FUN_00705f40(*(long *)(param_1 + 4),0x707b50,0x707b4c);
    }
    ppdVar1 = (dword **)&uStack_370;
    pdVar5 = param_1;
    pdVar3 = pdStack_388;
    pdVar10 = pdStack_390;
    pppppuVar16 = (undefined8 *****)ppppuStack_380;
    pcVar17 = pcStack_378;
  }
  else {
    pdVar5 = *(dword **)param_1;
    pdVar3 = param_1;
    pppppuVar16 = &ppppuStack_380;
    pcVar17 = (code *)0x707b1c;
  }
SUB_00701ed0:
  if (pdVar5 != (dword *)0x0) {
    *(dword **)((long)ppdVar1 + -0x20) = pdVar10;
    *(dword **)((long)ppdVar1 + -0x18) = pdVar3;
    *(undefined8 ******)((long)ppdVar1 + -0x10) = pppppuVar16;
    *(code **)((long)ppdVar1 + -8) = pcVar17;
    pdVar5 = pdVar5 + -2;
    FUN_00701f08(pdVar5,*(long *)pdVar5 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_0099a260)(pdVar5);
    return pdVar5;
  }
  return (dword *)0x0;
}



/* Entry: 00707b00; end: 00707b47;  */

/* WARNING: Possible PIC construction at 0x00707b18: Changing call to branch */

void FUN_00707b00(long *param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((long *)*param_1 == (long *)0x0) {
    plVar2 = param_1;
    if (param_1[2] != 0) {
      FUN_00705f40(param_1[2],0x707b50,0x707b4c);
    }
  }
  else {
    unaff_x30 = 0x707b1c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    plVar2 = (long *)*param_1;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  if (plVar2 == (long *)0x0) {
    return;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  plVar2 = plVar2 + -1;
  FUN_00701f08(plVar2,*plVar2 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(plVar2);
  return;
}



/* Entry: 00707b48; end: 00707b53;  */

void FUN_00707b48(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00707d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Entry: 00707b54; end: 00707c9f;  */

void FUN_00707b54(long param_1,char *param_2,undefined4 param_3)

{
  long lVar1;
  dword *pdVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  char cVar8;
  long *plVar9;
  long lVar10;
  
  if ((param_2 != (char *)0x0) &&
     (cVar8 = *param_2, lVar6 = param_1, pcVar7 = param_2, cVar8 != '\0')) {
    do {
      if ((cVar8 == ':') || (cVar8 == '\0')) {
        lVar4 = (long)pcVar7 - (long)param_2;
        if (lVar4 != 0) {
          plVar9 = *(long **)(param_1 + 8);
          if (plVar9 == (long *)0x0) {
            FUN_00705ed8();
            *(long *)(param_1 + 8) = lVar6;
            if (lVar6 == 0) {
              func_0x00707d60();
              goto LAB_00707c70;
            }
          }
          else {
            lVar5 = *plVar9;
            for (lVar10 = 0; lVar5 != lVar10; lVar10 = lVar10 + 1) {
              lVar6 = **(long **)(plVar9[1] + lVar10 * 8);
              lVar1 = lVar6;
              _strlen();
              if ((lVar1 == lVar4) && (_strncmp(lVar6,param_2,lVar4), (int)lVar6 == 0))
              goto LAB_00707c58;
            }
          }
          pdVar2 = &MACH_HEADER.flags;
          FUN_00701e90();
          if (pdVar2 == (dword *)0x0) {
            return;
          }
          pdVar2[2] = param_3;
          pcVar3 = FUN_00707ca0;
          FUN_00705e78();
          *(code **)(pdVar2 + 4) = pcVar3;
          lVar4 = lVar4 + 1;
          FUN_00701e90();
          *(long *)pdVar2 = lVar4;
          if ((lVar4 == 0) || (*(long *)(pdVar2 + 4) == 0)) {
LAB_00707c78:
            FUN_00707b00(pdVar2);
            return;
          }
          FUN_00702124();
          lVar6 = *(long *)(param_1 + 8);
          func_0x00706268(lVar6,pdVar2);
          if (lVar6 == 0) goto LAB_00707c78;
          cVar8 = *pcVar7;
        }
LAB_00707c58:
        if (cVar8 == '\0') {
          return;
        }
        param_2 = pcVar7 + 1;
      }
      cVar8 = pcVar7[1];
      pcVar7 = pcVar7 + 1;
    } while( true );
  }
  func_0x00707d60();
LAB_00707c70:
  func_0x00707d04();
  return;
}


