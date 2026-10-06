/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0054efe0; end: 0054f077;  */

long * FUN_0054efe0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  undefined8 extraout_x8_00;
  uint extraout_w10;
  uint uVar5;
  uint extraout_w10_00;
  int iVar6;
  int iVar7;
  
  func_0x0054f58c();
  func_0x0054f618();
  uVar5 = extraout_w10;
  while (0x7f < uVar5) {
    func_0x0054f6c4();
    uVar5 = extraout_w10_00;
  }
  func_0x0054f600();
  uVar4 = extraout_x8;
  while (0x7f < (uint)uVar4) {
    func_0x0054f69c();
    uVar4 = extraout_x8_00;
  }
  func_0x0054f5b0();
  iVar6 = (int)param_3;
  if ((*(char *)((long)param_1 + 0x39) == '\x01') &&
     ((*param_1 - (long)param_4) + 0x10 <= (long)iVar6)) {
    plVar2 = param_1;
    func_0x0054ed18(param_1,param_4);
    plVar3 = (long *)param_1[6];
    (**(code **)(*plVar3 + 0x28))(plVar3,param_2,param_3);
    if (((ulong)plVar3 & 1) == 0) {
      func_0x0054f630();
    }
    return plVar2;
  }
  if (*param_1 - (long)param_4 < (long)iVar6) {
    while( true ) {
      iVar7 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar6 = (int)param_3;
      param_3 = (ulong)(uint)(iVar6 - iVar7);
      if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
      func_0x0054f690();
      lVar1 = (long)param_4 + (long)iVar7;
      param_4 = param_1;
      func_0x0054ed58(param_1,lVar1);
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar6);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)iVar6);
}



/* Entry: 0054f078; end: 0054f0b3;  */

byte * FUN_0054f078(undefined8 *param_1,char *param_2,byte *param_3,byte *param_4)

{
  byte *pbVar1;
  undefined1 uVar2;
  byte *pbVar3;
  long *plVar4;
  byte *pbVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar8;
  undefined8 extraout_x10;
  undefined8 extraout_x10_00;
  byte *unaff_x19;
  long unaff_x20;
  byte *unaff_x21;
  byte *pbVar9;
  int iVar10;
  long lStack_c0;
  byte *pbStack_b8;
  long lStack_a8;
  
  if (((long)*param_2 & 1U) == 0) {
    uVar8 = (ulong)(long)*param_2 >> 1;
  }
  else {
    uVar8 = **(ulong **)(param_2 + 8);
  }
  while( true ) {
    pbVar3 = param_3 + 1;
    if ((uint)uVar8 < 0x80) break;
    *param_3 = (byte)uVar8 | 0x80;
    uVar8 = (ulong)((uint)uVar8 >> 7);
    param_3 = pbVar3;
  }
  *param_3 = (byte)uVar8;
  func_0x0054f5f4();
  iVar6 = ((int)*param_1 - (int)pbVar3) + 0x10;
  uVar8 = (ulong)*param_2;
  if (param_1[6] == 0) {
    if ((uVar8 & 1) == 0) {
      uVar8 = uVar8 >> 1;
    }
    else {
      uVar8 = **(ulong **)(unaff_x20 + 8);
    }
    uVar2 = uVar8 == (long)iVar6;
    if ((long)uVar8 <= (long)iVar6) goto LAB_0054ef4c;
  }
  else {
    if ((uVar8 & 1) == 0) {
      uVar8 = uVar8 >> 1;
    }
    else {
      uVar8 = **(ulong **)(unaff_x20 + 8);
    }
    if (((long)uVar8 <= (long)iVar6) && (uVar2 = uVar8 == 0x1ff, (long)uVar8 < 0x200)) {
LAB_0054ef4c:
      pbVar5 = (byte *)&lStack_c0;
      uVar7 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
      pbVar9 = pbVar3;
      FUN_0054f2b8();
      while (pbVar1 = pbStack_b8, lStack_a8 != 0) {
        unaff_x20 = lStack_c0;
        pbVar9 = pbStack_b8;
        _memcpy(pbVar3);
        pbVar3 = pbVar3 + (long)pbVar1;
        pbVar5 = (byte *)&lStack_c0;
        func_0x0054f284();
      }
      func_0x0054f6d8(uVar7);
      if ((bool)uVar2) {
        return pbVar3;
      }
      ___stack_chk_fail();
      func_0x0054f58c();
      func_0x0054f618();
      uVar7 = extraout_x10;
      while (0x7f < (uint)uVar7) {
        func_0x0054f6c4();
        uVar7 = extraout_x10_00;
      }
      func_0x0054f600();
      uVar7 = extraout_x8;
      while (0x7f < (uint)uVar7) {
        func_0x0054f69c();
        uVar7 = extraout_x8_00;
      }
      func_0x0054f5b0();
      iVar6 = (int)pbVar9;
      if ((pbVar5[0x39] == 1) && ((*(long *)pbVar5 - (long)param_4) + 0x10 <= (long)iVar6)) {
        pbVar3 = pbVar5;
        func_0x0054ed18(pbVar5,param_4);
        plVar4 = *(long **)(pbVar5 + 0x30);
        (**(code **)(*plVar4 + 0x28))(plVar4,unaff_x20,pbVar9);
        if (((ulong)plVar4 & 1) != 0) {
          return pbVar3;
        }
        func_0x0054f630();
        return pbVar3;
      }
      if ((long)iVar6 <= *(long *)pbVar5 - (long)param_4) {
        _memcpy(param_4);
        return param_4 + iVar6;
      }
      while( true ) {
        iVar10 = ((int)*(long *)pbVar5 - (int)param_4) + 0x10;
        iVar6 = (int)pbVar9;
        pbVar9 = (byte *)(ulong)(uint)(iVar6 - iVar10);
        if (iVar6 - iVar10 == 0 || iVar6 < iVar10) break;
        func_0x0054f690();
        pbVar3 = param_4 + iVar10;
        param_4 = pbVar5;
        func_0x0054ed58(pbVar5,pbVar3);
      }
      func_0x0054f690();
      return param_4 + iVar6;
    }
    unaff_x21 = unaff_x19;
    func_0x0054ed18();
    plVar4 = *(long **)(unaff_x19 + 0x30);
    (**(code **)(*plVar4 + 0x38))();
    if (((ulong)plVar4 & 1) != 0) {
      return unaff_x21;
    }
  }
  func_0x0054f630();
  return unaff_x21;
}



/* Entry: 0054f0b4; end: 0054f0d7;  */

undefined8 FUN_0054f0b4(undefined8 param_1)

{
  FUN_0054f0d8();
  return param_1;
}



/* Entry: 0054f0d8; end: 0054f0fb;  */

void FUN_0054f0d8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0054ed18(param_1,*(undefined8 *)(param_1 + 0x40));
  *(long *)(param_1 + 0x40) = lVar1;
  return;
}



/* Entry: 0054f0fc; end: 0054f2b7;  */

long FUN_0054f0fc(long param_1,long *param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x9;
  
  lVar1 = 0;
  lVar2 = (ulong)*(byte *)(param_1 + 3) << 0x15;
  while (lVar1 != 0x15) {
    func_0x0054f5dc();
    lVar1 = extraout_x8;
    lVar2 = extraout_x9;
  }
  *param_2 = lVar2;
  return param_1 + 4;
}



/* Entry: 0054f2b8; end: 0054f3bb;  */

undefined8 * FUN_0054f2b8(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  if ((((long)(char)*param_2 & 1U) == 0) ||
     (plVar2 = *(long **)(param_2 + 8), plVar2 == (long *)0x0)) {
    uVar3 = (ulong)(long)(char)*param_2 >> 1;
    param_1[3] = uVar3;
    pbVar1 = param_2 + 1;
    if ((*param_2 & 1) != 0) {
      pbVar1 = (byte *)0x0;
    }
    *param_1 = pbVar1;
    param_1[1] = uVar3;
  }
  else {
    lVar4 = *plVar2;
    param_1[3] = lVar4;
    if (lVar4 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      func_0x0054f334(param_1,plVar2);
    }
  }
  return param_1;
}



/* Entry: 0054f3bc; end: 0054f43f;  */

undefined1  [16] FUN_0054f3bc(undefined8 *param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = *param_1;
  bVar1 = *(byte *)((long)param_1 + 0xc);
  if (bVar1 == 1) {
    lVar2 = param_1[2];
    param_1 = (undefined8 *)param_1[3];
    bVar1 = *(byte *)((long)param_1 + 0xc);
  }
  else {
    lVar2 = 0;
  }
  if (bVar1 < 6) {
    lVar3 = param_1[2];
  }
  else {
    lVar3 = (long)param_1 + 0xd;
  }
  auVar4._0_8_ = lVar3 + lVar2;
  return auVar4;
}



/* Entry: 0054f440; end: 0054f4b3;  */

long * FUN_0054f440(long *param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = param_1 + 4;
  func_0x0054f468();
  *param_1 = (long)plVar1;
  param_1[1] = param_2;
  return param_1;
}



/* Entry: 0054f4b4; end: 0054f713;  */

undefined8 FUN_0054f4b4(uint *param_1)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  if ((ulong)*(byte *)(*(long *)(param_1 + 4) + 0xf) - 1 == (ulong)(byte)param_1[1]) {
    uVar4 = 0;
    do {
      uVar8 = uVar4;
      if ((*param_1 & ((int)*param_1 >> 0x1f ^ 0xffffffffU)) == uVar8) {
        return 0;
      }
      lVar5 = *(long *)(param_1 + uVar8 * 2 + 6);
      uVar6 = (ulong)*(byte *)((long)param_1 + uVar8 + 5) + 1;
      uVar4 = uVar8 + 1;
    } while (uVar6 == *(byte *)(lVar5 + 0xf));
    *(char *)((long)param_1 + uVar8 + 5) = (char)uVar6;
    lVar7 = (long)(int)(uVar8 + 1);
    do {
      lVar5 = *(long *)(lVar5 + uVar6 * 8 + 0x10);
      lVar3 = lVar7 + -1;
      *(long *)(param_1 + lVar3 * 2 + 4) = lVar5;
      uVar6 = (ulong)*(byte *)(lVar5 + 0xe);
      *(byte *)((long)param_1 + lVar7 + 3) = *(byte *)(lVar5 + 0xe);
      bVar1 = 0 < lVar7;
      lVar7 = lVar3;
    } while (lVar3 != 0 && bVar1);
    lVar5 = lVar5 + uVar6 * 8;
  }
  else {
    bVar2 = (byte)param_1[1] + 1;
    *(byte *)(param_1 + 1) = bVar2;
    lVar5 = *(long *)(param_1 + 4) + (ulong)bVar2 * 8;
  }
  return *(undefined8 *)(lVar5 + 0x10);
}



/* Entry: 0054f714; end: 0054f8cf;  */

undefined8 FUN_0054f714(long *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 **ppuVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  int *piStack_68;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  int iStack_3c;
  undefined8 uStack_38;
  int iStack_2c;
  undefined8 uStack_28;
  
  if (param_3 < 1) {
    uVar5 = 1;
  }
  else {
    iStack_3c = param_3;
    uStack_38 = param_2;
    FUN_0054a2e4(auStack_50,param_2,param_3,0x10);
    uVar4 = (ulong)iStack_3c;
    ppuVar2 = (undefined8 **)auStack_50;
    FUN_0054f8d0();
    puStack_78 = &uStack_38;
    piStack_68 = &iStack_3c;
    puStack_70 = (undefined8 *)auStack_50;
    ppuStack_60 = ppuVar2;
    uStack_58 = uVar4;
    do {
      plVar3 = param_1;
      (**(code **)(*param_1 + 0x10))(param_1,&uStack_28,&iStack_2c);
      if (((ulong)plVar3 & 1) == 0) {
LAB_0054f848:
        uStack_98 = uStack_48;
        auStack_50[0] = 1;
        func_0x0054a368(uStack_38,auStack_a0);
        func_0x0054fbcc();
        uVar5 = 0;
        goto LAB_0054f86c;
      }
      uVar4 = (ulong)(uint)(iStack_2c - iStack_3c);
      iVar1 = iStack_2c;
      if (iStack_2c - iStack_3c != 0 && iStack_3c <= iStack_2c) {
        (**(code **)(*param_1 + 0x18))(param_1);
        iVar1 = iStack_3c;
      }
      uVar6 = (ulong)iVar1;
      uStack_88 = uStack_28;
      uStack_80 = uVar6;
      if (iVar1 == 0) goto LAB_0054f848;
      if (uStack_58 == 0) {
        ppuVar2 = &puStack_78;
        FUN_0054f8f8();
        ppuStack_60 = ppuVar2;
        uStack_58 = uVar4;
      }
      while (uStack_58 < uVar6) {
        func_0x0054fbd4();
        FUN_0054f980();
        ppuVar2 = &puStack_78;
        FUN_0054f8f8();
        uVar6 = uStack_80;
        ppuStack_60 = ppuVar2;
        uStack_58 = uVar4;
      }
      func_0x0054fbd4();
      FUN_0054f980();
    } while (0 < iStack_3c);
    uStack_a8 = uStack_48;
    auStack_50[0] = 1;
    func_0x0054a368(uStack_38,auStack_b0);
    FUN_0054a900(auStack_b0);
    uVar5 = 1;
LAB_0054f86c:
    FUN_0054a900(auStack_50);
  }
  return uVar5;
}



/* Entry: 0054f8d0; end: 0054f8f7;  */

void FUN_0054f8d0(void)

{
  FUN_0054a344();
  return;
}



/* Entry: 0054f8f8; end: 0054f97f;  */

void FUN_0054f8f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)param_1[1];
  uVar2 = *(undefined8 *)*param_1;
  uStack_28 = puVar1[1];
  uStack_30 = *puVar1;
  *(undefined1 *)puVar1 = 1;
  func_0x0054a368(uVar2,&uStack_30);
  func_0x0054fbcc();
  FUN_0054a764(auStack_40,(long)*(int *)param_1[2]);
  func_0x0054fb48(param_1[1],auStack_40);
  FUN_0054a900(auStack_40);
  FUN_0054f8d0(param_1[1],(long)*(int *)param_1[2]);
  return;
}



/* Entry: 0054f980; end: 0054f9ff;  */

void FUN_0054f980(int *param_1,byte *param_2,long *param_3,long *param_4,long param_5)

{
  _memcpy(*param_3,*param_4,param_5);
  *param_3 = *param_3 + param_5;
  param_3[1] = param_3[1] - param_5;
  *param_4 = *param_4 + param_5;
  param_4[1] = param_4[1] - param_5;
  *param_1 = *param_1 - (int)param_5;
  if ((*param_2 & 1) == 0) {
    **(long **)param_2 = **(long **)param_2 + param_5;
    return;
  }
  *param_2 = *param_2 + (char)param_5 * '\x02';
  return;
}



/* Entry: 0054fa00; end: 0054fb17;  */

undefined8 FUN_0054fa00(long *param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  int iStack_dc;
  ulong uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  long lStack_b8;
  long lStack_38;
  ulong uVar2;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = param_2;
  func_0x0054a724();
  iVar1 = (int)uVar2;
  if ((uVar2 & 1) == 0) {
    iStack_dc = 0;
    func_0x0054fbb4();
    uVar3 = 0;
    if (iVar1 == 0) goto LAB_0054fad0;
    FUN_0054f2b8(&lStack_d0,param_2);
    while (uVar2 = uStack_c8, lVar5 = lStack_d0, lStack_b8 != 0) {
      while ((ulong)(long)iStack_dc < uVar2) {
        uVar4 = uStack_d8;
        _memcpy(uStack_d8,lVar5);
        func_0x0054fbb4();
        uVar2 = uVar2 - (long)iStack_dc;
        lVar5 = lVar5 + iStack_dc;
        if ((uVar4 & 1) == 0) {
          uVar3 = 0;
          goto LAB_0054fad0;
        }
      }
      _memcpy(uStack_d8,lVar5,uVar2);
      uStack_d8 = uStack_d8 + uVar2;
      iStack_dc = iStack_dc - (int)uVar2;
      func_0x0054f284(&lStack_d0);
    }
    (**(code **)(*param_1 + 0x18))(param_1,iStack_dc);
  }
  uVar3 = 1;
LAB_0054fad0:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_38) {
    ___stack_chk_fail(uVar3);
    FUN_00554ab4();
    return uVar3;
  }
  return uVar3;
}



/* Entry: 0054fb18; end: 0054fb8b;  */

undefined8 FUN_0054fb18(undefined8 param_1)

{
  FUN_00554ab4(param_1,
               "This ZeroCopyOutputStream doesn\'t support aliasing. Reaching here usually means a ZeroCopyOutputStream implementation bug."
               ,0x7a);
  return param_1;
}



/* Entry: 0054fb8c; end: 0054fc0f;  */

void FUN_0054fb8c(byte *param_1,long param_2)

{
  if ((*param_1 & 1) == 0) {
    **(long **)param_1 = **(long **)param_1 + param_2;
    return;
  }
  *param_1 = *param_1 + (char)param_2 * '\x02';
  return;
}



/* Entry: 0054fc10; end: 0054fccb;  */

long FUN_0054fc10(long param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_30 [16];
  
  if (*(int *)(param_1 + 0x1c) < 1) {
    FUN_00554520((long)*(int *)(param_1 + 0x1c),0,"last_returned_size_ > 0");
    func_0x005500a0();
    func_0x00550000();
    FUN_00776714();
    FUN_0054fccc(auStack_30,"BackUp() can only be called after a successful Next().");
  }
  else {
    lVar1 = param_1;
    func_0x00550090();
    if (lVar1 == 0) {
      lVar1 = param_2;
      func_0x00550074();
      if (lVar1 == 0) {
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (int)param_2;
        *(undefined4 *)(param_1 + 0x1c) = 0;
        return 0;
      }
      func_0x00533528();
      func_0x0054ffd4();
    }
    else {
      func_0x00533528();
      func_0x0054ffd4();
    }
    FUN_00776794();
  }
  func_0x0055007c();
  func_0x00550034();
  func_0x00550024();
  return param_2;
}



/* Entry: 0054fccc; end: 0054fceb;  */

void FUN_0054fccc(void)

{
  func_0x00550034();
  func_0x00550024();
  return;
}



/* Entry: 0054fcec; end: 0054fd0b;  */

void FUN_0054fcec(void)

{
  func_0x00550100();
  func_0x0054ff9c();
  return;
}



/* Entry: 0054fd0c; end: 0054fd67;  */

ulong FUN_0054fd0c(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = param_1;
  func_0x00550010();
  if (lVar3 == 0) {
    iVar2 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x18);
    iVar1 = *(int *)(param_1 + 0x18) + param_2;
    if (iVar2 < param_2) {
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x18) = iVar1;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return (ulong)(param_2 <= iVar2);
  }
  func_0x00533528();
  func_0x0054ffd4();
  FUN_00776794();
  func_0x0055007c();
  return (long)*(int *)(lVar3 + 0x18);
}



/* Entry: 0054fd68; end: 0054fd6f;  */

long FUN_0054fd68(long param_1)

{
  return (long)*(int *)(param_1 + 0x18);
}



/* Entry: 0054fd70; end: 0054fe4b;  */

long FUN_0054fd70(long param_1,long *param_2,int *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long alStack_90 [2];
  long alStack_80 [2];
  long lStack_70;
  undefined1 auStack_40 [16];
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    func_0x0055005c();
    iVar6 = (int)param_2;
    func_0x00550050();
    puVar3 = auStack_40;
    FUN_00776794();
    func_0x005500e0();
    puVar4 = puVar3;
    lStack_70 = param_1;
    func_0x00550010();
    if (puVar4 != (undefined1 *)0x0) goto LAB_0054fee0;
    lVar2 = *(long *)(puVar3 + 8);
    if (lVar2 == 0) {
      func_0x0055005c();
      func_0x00550050();
    }
    else {
      alStack_90[0] = (long)*(char *)(lVar2 + 0x17);
      if (alStack_90[0] < 0) {
        alStack_90[0] = *(long *)(lVar2 + 8);
      }
      plVar5 = alStack_80;
      alStack_80[0] = (long)iVar6;
      func_0x0048b1cc(plVar5,alStack_90,"static_cast<size_t>(count) <= target_->size()");
      if (plVar5 == (long *)0x0) {
        lVar2 = *(long *)(puVar3 + 8);
        lVar9 = (long)*(char *)(lVar2 + 0x17);
        if (lVar9 < 0) {
          lVar9 = *(long *)(lVar2 + 8);
        }
        FUN_004625e8(lVar2,lVar9 - iVar6);
        return lVar2;
      }
      func_0x00533528();
      func_0x0054ffec();
    }
    do {
      FUN_00776794(alStack_80);
      func_0x005500e0();
LAB_0054fee0:
      func_0x00533528();
      func_0x0054ffec();
    } while( true );
  }
  uVar10 = (ulong)(char)*(byte *)(lVar2 + 0x17);
  if ((long)uVar10 < 0) {
    uVar10 = *(ulong *)(lVar2 + 8);
    uVar7 = (*(ulong *)(lVar2 + 0x10) & 0x7fffffffffffffff) - 1;
    if (uVar10 < uVar7) goto LAB_0054fdc8;
  }
  else if (*(byte *)(lVar2 + 0x17) < 0x16) {
    uVar7 = 0x16;
    goto LAB_0054fdc8;
  }
  uVar7 = uVar10 << 1;
LAB_0054fdc8:
  uVar1 = uVar10 + 0x7fffffff;
  if (uVar7 <= uVar10 + 0x7fffffff) {
    uVar1 = uVar7;
  }
  if (uVar1 < 0x11) {
    uVar1 = 0x10;
  }
  FUN_0053316c(lVar2,uVar1);
  puVar8 = *(undefined8 **)(param_1 + 8);
  if (*(char *)((long)puVar8 + 0x17) < '\0') {
    puVar8 = (undefined8 *)*puVar8;
  }
  *param_2 = (long)puVar8 + uVar10;
  lVar2 = (long)*(char *)(*(long *)(param_1 + 8) + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 8) + 8);
  }
  *param_3 = (int)lVar2 - (int)uVar10;
  return 1;
}



/* Entry: 0054fe4c; end: 0054ff07;  */

void FUN_0054fe4c(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long alStack_40 [2];
  long alStack_30 [2];
  
  lVar2 = param_1;
  func_0x00550010();
  if (lVar2 != 0) goto LAB_0054fee0;
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    func_0x0055005c();
    func_0x00550050();
  }
  else {
    alStack_40[0] = (long)*(char *)(lVar2 + 0x17);
    if (alStack_40[0] < 0) {
      alStack_40[0] = *(long *)(lVar2 + 8);
    }
    plVar1 = alStack_30;
    alStack_30[0] = (long)param_2;
    func_0x0048b1cc(plVar1,alStack_40,"static_cast<size_t>(count) <= target_->size()");
    if (plVar1 == (long *)0x0) {
      lVar2 = *(long *)(param_1 + 8);
      lVar3 = (long)*(char *)(lVar2 + 0x17);
      if (lVar3 < 0) {
        lVar3 = *(long *)(lVar2 + 8);
      }
      FUN_004625e8(lVar2,lVar3 - param_2);
      return;
    }
    func_0x00533528();
    func_0x0054ffec();
  }
  do {
    FUN_00776794(alStack_30);
    func_0x005500e0();
LAB_0054fee0:
    func_0x00533528();
    func_0x0054ffec();
  } while( true );
}



/* Entry: 0054ff08; end: 0054ff4b;  */

long FUN_0054ff08(long param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_20 [16];
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    func_0x0055005c();
    func_0x00550050();
    FUN_00776794(auStack_20,param_2,0x9d);
    func_0x005500e0();
    func_0x00550034();
    func_0x00550024();
    return unaff_x20;
  }
  if (-1 < (long)*(char *)(lVar1 + 0x17)) {
    return (long)*(char *)(lVar1 + 0x17);
  }
  return *(long *)(lVar1 + 8);
}



/* Entry: 0054ff4c; end: 0054ff6b;  */

void FUN_0054ff4c(void)

{
  func_0x00550034();
  func_0x00550024();
  return;
}



/* Entry: 0054ff6c; end: 0054ff8b;  */

void FUN_0054ff6c(void)

{
  func_0x00550100();
  func_0x0054ffb8();
  return;
}



/* Entry: 0054ff8c; end: 00550113;  */

void FUN_0054ff8c(void)

{
  return;
}



/* Entry: 00550114; end: 00550137;  */

void FUN_00550114(int param_1)

{
  FUN_00550138();
  func_0x00551294();
  FUN_0055054c();
  if (param_1 == 0) {
    func_0x005512d0();
  }
  return;
}



/* Entry: 00550138; end: 00550393;  */

undefined8 * FUN_00550138(undefined8 *param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puStack_48;
  
  puVar7 = param_1;
  func_0x00551244();
  if (puVar7 == (undefined8 *)param_1[5]) {
    puVar16 = param_1 + 6;
    goto LAB_0055035c;
  }
  puVar16 = (undefined8 *)0x0;
  plVar12 = (long *)param_1[4];
LAB_00550174:
  plVar11 = plVar12;
  uVar2 = *(uint *)(plVar11 + 1);
  if (uVar2 != 0) {
    plVar12 = (long *)*plVar11;
    Hint_Prefetch(plVar12,0,0,0);
    uVar6 = 0;
    uVar3 = *(uint *)((long)plVar11 + 0xc);
    if (uVar2 <= *(uint *)((long)plVar11 + 0xc)) {
      uVar3 = uVar2;
    }
    do {
      uVar15 = uVar6;
      if (uVar3 == uVar15) goto LAB_00550174;
      uVar6 = uVar15 + 1;
    } while (puVar7 != (undefined8 *)plVar11[(ulong)uVar15 + 2]);
    puVar16 = (undefined8 *)plVar11[(ulong)uVar2 + (ulong)uVar15 + 2];
    goto LAB_00550174;
  }
  if (puVar16 != (undefined8 *)0x0) goto LAB_0055035c;
  puVar8 = (undefined8 *)(param_1[1] & 0xfffffffffffffff8);
  uVar10 = 0;
  FUN_00550ac8(puVar8,0,param_2 + 0x60);
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = uVar10;
  lVar17 = (long)puVar8 + (uVar10 & 0xfffffffffffffff8);
  puVar8[4] = lVar17;
  puVar8[5] = puVar8 + 0xf;
  puVar8[6] = lVar17;
  puVar8[7] = 0;
  puVar8[8] = 0;
  puVar8[9] = puVar8;
  puVar8[10] = 0;
  puVar8[0xb] = uVar10;
  puVar8[0xc] = param_1;
  *(undefined1 *)(puVar8 + 0xd) = 0;
  puVar8[0xe] = 0;
  puVar16 = puVar8 + 3;
  *puVar16 = puVar8 + 0xf;
  lVar17 = param_1[4];
  uVar2 = *(uint *)(lVar17 + 8);
  if (uVar2 != 0) {
    puVar1 = (uint *)(lVar17 + 0xc);
    do {
      uVar3 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (uVar3 < uVar2) {
      lVar17 = lVar17 + (ulong)uVar3 * 8;
      *(undefined8 **)(lVar17 + 0x10) = puVar7;
      *(undefined8 **)(lVar17 + (ulong)uVar2 * 8 + 0x10) = puVar16;
      goto LAB_0055035c;
    }
    *puVar1 = uVar2;
  }
  puStack_48 = param_1 + 3;
  FUN_00567528();
  iVar9 = (int)uVar10;
  lVar13 = param_1[4];
  if (lVar13 == lVar17) {
    uVar10 = (ulong)*(uint *)(lVar17 + 8);
    lVar13 = lVar17;
LAB_005502d0:
    uVar10 = uVar10 << 6;
    if (0xfbf < uVar10) {
      uVar10 = 0xfc0;
    }
    plVar12 = (long *)(uVar10 + 0x40);
    FUN_0048b180();
    uVar2 = iVar9 - 0x10U >> 4;
    uVar10 = (ulong)uVar2;
    *plVar12 = 0;
    *(uint *)(plVar12 + 1) = uVar2;
    *(undefined4 *)((long)plVar12 + 0xc) = 1;
    plVar12[2] = (long)puVar7;
    for (lVar17 = 3; lVar17 - 2U < uVar10; lVar17 = lVar17 + 1) {
      plVar12[lVar17] = 0;
    }
    plVar12[uVar10 + 2] = (long)puVar16;
    lVar17 = uVar10 * 8 + 0x18;
    for (uVar14 = 1; uVar14 < uVar10; uVar14 = uVar14 + 1) {
      *(undefined8 *)((long)plVar12 + lVar17) = 0;
      lVar17 = lVar17 + 8;
    }
    *plVar12 = lVar13;
    param_1[4] = plVar12;
  }
  else {
    puVar1 = (uint *)(lVar13 + 0xc);
    do {
      uVar2 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar3 = *(uint *)(lVar13 + 8);
    uVar10 = (ulong)uVar3;
    if (uVar3 <= uVar2) {
      *(uint *)(lVar13 + 0xc) = uVar3;
      goto LAB_005502d0;
    }
    lVar13 = lVar13 + (ulong)uVar2 * 8;
    *(undefined8 **)(lVar13 + 0x10) = puVar7;
    *(undefined8 **)(lVar13 + uVar10 * 8 + 0x10) = puVar16;
  }
  FUN_0054abe8(&puStack_48);
LAB_0055035c:
  puVar7[1] = *param_1;
  puVar7[2] = puVar16;
  return puVar16;
}



/* Entry: 00550394; end: 00550457;  */

void FUN_00550394(int param_1)

{
  func_0x00551294();
  FUN_0055054c();
  if (param_1 == 0) {
    func_0x005512d0();
  }
  return;
}



/* Entry: 00550458; end: 00550487;  */

undefined8 * FUN_00550458(long param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined1 in_ZR;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined8 *extraout_x8;
  ulong uVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined8 *puStack_48;
  
  FUN_005511d8();
  func_0x005511f8();
  if ((bool)in_ZR) {
    return *(undefined8 **)(param_1 + 0x10);
  }
  lVar11 = 0x10;
  puVar7 = extraout_x8;
  func_0x00551244(extraout_x8,0x10);
  if (puVar7 == (undefined8 *)extraout_x8[5]) {
    puVar17 = extraout_x8 + 6;
    goto LAB_0055035c;
  }
  puVar17 = (undefined8 *)0x0;
  plVar13 = (long *)extraout_x8[4];
LAB_00550174:
  plVar12 = plVar13;
  uVar2 = *(uint *)(plVar12 + 1);
  if (uVar2 != 0) {
    plVar13 = (long *)*plVar12;
    Hint_Prefetch(plVar13,0,0,0);
    uVar6 = 0;
    uVar3 = *(uint *)((long)plVar12 + 0xc);
    if (uVar2 <= *(uint *)((long)plVar12 + 0xc)) {
      uVar3 = uVar2;
    }
    do {
      uVar16 = uVar6;
      if (uVar3 == uVar16) goto LAB_00550174;
      uVar6 = uVar16 + 1;
    } while (puVar7 != (undefined8 *)plVar12[(ulong)uVar16 + 2]);
    puVar17 = (undefined8 *)plVar12[(ulong)uVar2 + (ulong)uVar16 + 2];
    goto LAB_00550174;
  }
  if (puVar17 != (undefined8 *)0x0) goto LAB_0055035c;
  puVar8 = (undefined8 *)(extraout_x8[1] & 0xfffffffffffffff8);
  uVar10 = 0;
  FUN_00550ac8(puVar8,0,lVar11 + 0x60);
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = uVar10;
  lVar11 = (long)puVar8 + (uVar10 & 0xfffffffffffffff8);
  puVar8[4] = lVar11;
  puVar8[5] = puVar8 + 0xf;
  puVar8[6] = lVar11;
  puVar8[7] = 0;
  puVar8[8] = 0;
  puVar8[9] = puVar8;
  puVar8[10] = 0;
  puVar8[0xb] = uVar10;
  puVar8[0xc] = extraout_x8;
  *(undefined1 *)(puVar8 + 0xd) = 0;
  puVar8[0xe] = 0;
  puVar17 = puVar8 + 3;
  *puVar17 = puVar8 + 0xf;
  lVar11 = extraout_x8[4];
  uVar2 = *(uint *)(lVar11 + 8);
  if (uVar2 != 0) {
    puVar1 = (uint *)(lVar11 + 0xc);
    do {
      uVar3 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (uVar3 < uVar2) {
      lVar11 = lVar11 + (ulong)uVar3 * 8;
      *(undefined8 **)(lVar11 + 0x10) = puVar7;
      *(undefined8 **)(lVar11 + (ulong)uVar2 * 8 + 0x10) = puVar17;
      goto LAB_0055035c;
    }
    *puVar1 = uVar2;
  }
  puStack_48 = extraout_x8 + 3;
  FUN_00567528();
  iVar9 = (int)uVar10;
  lVar14 = extraout_x8[4];
  if (lVar14 == lVar11) {
    uVar10 = (ulong)*(uint *)(lVar11 + 8);
    lVar14 = lVar11;
LAB_005502d0:
    uVar10 = uVar10 << 6;
    if (0xfbf < uVar10) {
      uVar10 = 0xfc0;
    }
    plVar13 = (long *)(uVar10 + 0x40);
    FUN_0048b180();
    uVar2 = iVar9 - 0x10U >> 4;
    uVar10 = (ulong)uVar2;
    *plVar13 = 0;
    *(uint *)(plVar13 + 1) = uVar2;
    *(undefined4 *)((long)plVar13 + 0xc) = 1;
    plVar13[2] = (long)puVar7;
    for (lVar11 = 3; lVar11 - 2U < uVar10; lVar11 = lVar11 + 1) {
      plVar13[lVar11] = 0;
    }
    plVar13[uVar10 + 2] = (long)puVar17;
    lVar11 = uVar10 * 8 + 0x18;
    for (uVar15 = 1; uVar15 < uVar10; uVar15 = uVar15 + 1) {
      *(undefined8 *)((long)plVar13 + lVar11) = 0;
      lVar11 = lVar11 + 8;
    }
    *plVar13 = lVar14;
    extraout_x8[4] = plVar13;
  }
  else {
    puVar1 = (uint *)(lVar14 + 0xc);
    do {
      uVar2 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar3 = *(uint *)(lVar14 + 8);
    uVar10 = (ulong)uVar3;
    if (uVar3 <= uVar2) {
      *(uint *)(lVar14 + 0xc) = uVar3;
      goto LAB_005502d0;
    }
    lVar14 = lVar14 + (ulong)uVar2 * 8;
    *(undefined8 **)(lVar14 + 0x10) = puVar7;
    *(undefined8 **)(lVar14 + uVar10 * 8 + 0x10) = puVar17;
  }
  FUN_0054abe8(&puStack_48);
LAB_0055035c:
  puVar7[1] = *extraout_x8;
  puVar7[2] = puVar17;
  return puVar17;
}



/* Entry: 00550488; end: 0055054b;  */

undefined8 FUN_00550488(void)

{
  func_0x00551294();
  func_0x005504b4();
  func_0x00551234();
  return 0;
}



/* Entry: 0055054c; end: 005505bf;  */

bool FUN_0055054c(ulong *param_1,long param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *param_1 + param_2;
  uVar3 = param_1[1];
  if (uVar1 <= uVar3) {
    *param_3 = *param_1;
    *param_1 = uVar1;
    uVar4 = param_1[2];
    if (((long)(uVar4 - uVar1) < 0x401) && (uVar5 = param_1[3], uVar4 < uVar5)) {
      if (uVar4 <= uVar1) {
        uVar4 = uVar1;
      }
      uVar2 = uVar4 + 0x400;
      if (uVar5 <= uVar4 + 0x400) {
        uVar2 = uVar5;
      }
      for (; uVar4 < uVar2; uVar4 = uVar4 + 0x40) {
        Hint_Prefetch(uVar4,2,0,0);
      }
      param_1[2] = uVar4;
    }
  }
  return uVar1 <= uVar3;
}



/* Entry: 005505c0; end: 00550713;  */

long FUN_005505c0(long param_1)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  ushort uVar4;
  long lVar5;
  long *plVar6;
  short sVar7;
  ulong uVar8;
  long lVar9;
  long *plStack_38;
  
  lVar9 = *(long *)(param_1 + 0x20);
  if (lVar9 == 0) {
    uVar8 = 0x100;
  }
  else {
    *(ulong *)(param_1 + 0x38) = (ulong)*(ushort *)(lVar9 + 8) + *(long *)(param_1 + 0x38) + -0x10;
    uVar8 = (ulong)*(ushort *)(lVar9 + 10);
  }
  lVar5 = param_1;
  FUN_0055054c(param_1,uVar8,&plStack_38);
  if ((int)lVar5 == 0) {
    if (lVar9 == 0) {
      sVar7 = 0x100;
      uVar8 = 0x100;
    }
    else {
      uVar4 = *(ushort *)(lVar9 + 10);
      uVar8 = (ulong)uVar4;
      sVar7 = uVar4 << 1;
      if ((uVar4 & 0x7000) != 0) {
        sVar7 = 0x2000;
      }
    }
    uVar1 = ((int)uVar8 - (int)(uVar8 - 0x10)) + (int)((uVar8 - 0x10) / 0x18) * 0x18;
    plVar6 = (long *)((ulong)uVar1 & 0xffff);
    __Znwm();
    *plVar6 = lVar9;
    uVar4 = (ushort)uVar1;
    *(ushort *)(plVar6 + 1) = uVar4;
    *(short *)((long)plVar6 + 10) = sVar7;
    *(undefined1 *)((long)plVar6 + 0xc) = 1;
    *(ulong *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + (ulong)uVar4;
  }
  else {
    *(ulong *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) - uVar8;
    uVar2 = (undefined2)(((uint)uVar8 & 0x7fff) << 1);
    if ((uVar8 & 0x7000) != 0) {
      uVar2 = 0x2000;
    }
    *plStack_38 = lVar9;
    *(short *)(plStack_38 + 1) =
         (short)uVar8 + ((short)((uVar8 - 0x10) / 0x18) * 0x18 - (short)(uVar8 - 0x10));
    uVar3 = 0x100;
    if (lVar9 != 0) {
      uVar3 = uVar2;
    }
    *(undefined2 *)((long)plStack_38 + 10) = uVar3;
    *(undefined1 *)((long)plStack_38 + 0xc) = 0;
    plVar6 = plStack_38;
  }
  *(long **)(param_1 + 0x20) = plVar6;
  uVar4 = *(ushort *)(plVar6 + 1);
  *(ulong *)(param_1 + 0x28) = (ulong)uVar4 - 0x28;
  return (long)plVar6 + ((ulong)uVar4 - 0x18);
}



/* Entry: 00550714; end: 0055084b;  */

void FUN_00550714(ulong *param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  do {
    uVar6 = param_2 + 7 & 0xfffffffffffffff8;
    uVar1 = uVar6;
    if (8 < param_3) {
      uVar1 = (param_3 - 8) + param_2;
    }
    func_0x005504b4(param_1,uVar1 + 0x10);
    uVar1 = (param_3 - 1) + *param_1 & -param_3;
    uVar2 = param_1[1];
    param_2 = uVar6;
  } while (uVar2 < uVar6 + uVar1 + 0x10);
  uVar6 = uVar1 + uVar6;
  *param_1 = uVar6;
  uVar3 = uVar2 - 0x10;
  param_1[1] = uVar3;
  uVar4 = param_1[3];
  if (((long)(uVar3 - uVar4) < 0x181) && (uVar5 = param_1[2], uVar5 < uVar4)) {
    if (uVar3 <= uVar4) {
      uVar4 = uVar3;
    }
    uVar3 = uVar4 - 0x180;
    if (uVar4 - 0x180 <= uVar5) {
      uVar3 = uVar5;
    }
    for (; uVar3 < uVar4; uVar4 = uVar4 - 0x40) {
      Hint_Prefetch(uVar4,2,0,0);
    }
    param_1[3] = uVar4;
  }
  *(ulong *)(uVar2 - 0x10) = uVar1;
  *(undefined8 *)(uVar2 - 8) = param_4;
  uVar1 = param_1[2];
  if (((long)(uVar1 - uVar6) < 0x401) && (uVar2 = param_1[3], uVar1 < uVar2)) {
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    uVar6 = uVar1 + 0x400;
    if (uVar2 <= uVar1 + 0x400) {
      uVar6 = uVar2;
    }
    for (; uVar1 < uVar6; uVar1 = uVar1 + 0x40) {
      Hint_Prefetch(uVar1,2,0,0);
    }
    param_1[2] = uVar1;
  }
  return;
}



/* Entry: 0055084c; end: 0055095f;  */

void FUN_0055084c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  ulong extraout_x9;
  ulong uVar2;
  ulong extraout_x10;
  
  func_0x005504b4(param_1,0x10);
  lVar1 = *(long *)(param_1 + 8);
  *(long *)(param_1 + 8) = lVar1 + -0x10;
  if (((long)((lVar1 + -0x10) - *(ulong *)(param_1 + 0x18)) < 0x181) &&
     (*(ulong *)(param_1 + 0x10) < *(ulong *)(param_1 + 0x18))) {
    func_0x00551264();
    for (uVar2 = extraout_x9; extraout_x10 < uVar2; uVar2 = uVar2 - 0x40) {
      Hint_Prefetch(uVar2,2,0,0);
    }
    *(ulong *)(param_1 + 0x18) = uVar2;
    lVar1 = extraout_x8;
  }
  *(undefined8 *)(lVar1 + -0x10) = param_2;
  *(undefined8 *)(lVar1 + -8) = param_3;
  return;
}



/* Entry: 00550960; end: 00550993;  */

undefined2 FUN_00550960(long param_1)

{
  undefined2 uVar1;
  
  if (*(char *)(param_1 + 0xc) == '\x01') {
    uVar1 = *(undefined2 *)(param_1 + 8);
    __ZdlPv();
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 00550994; end: 00550a2b;  */

void FUN_00550994(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  if (puVar3[2] != 0) {
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    do {
      puVar4 = (undefined8 *)puVar3[1];
      puVar1 = (undefined8 *)((long)puVar3 + (puVar3[2] & 0xfffffffffffffff8));
      puVar5 = puVar4;
      for (iVar2 = -7; (puVar5 < puVar1 && (iVar2 != 0)); iVar2 = iVar2 + 1) {
        Hint_Prefetch(*puVar5,0,0,1);
        puVar5 = puVar5 + 2;
      }
      while (puVar5 < puVar1) {
        (*(code *)puVar4[1])(*puVar4);
        Hint_Prefetch(*puVar5,0,0,1);
        puVar4 = puVar4 + 2;
        puVar5 = puVar5 + 2;
      }
      Hint_Prefetch(*puVar3,0,0,1);
      for (; puVar4 < puVar1; puVar4 = puVar4 + 2) {
        (*(code *)puVar4[1])(*puVar4);
      }
      puVar3 = (undefined8 *)*puVar3;
    } while (puVar3 != (undefined8 *)0x0);
  }
  return;
}



/* Entry: 00550a2c; end: 00550ac7;  */

undefined8 * FUN_00550a2c(undefined8 *param_1)

{
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0xc] = &DAT_00a01338;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = param_1;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  func_0x00550a78();
  return param_1;
}



/* Entry: 00550ac8; end: 00550ba7;  */

undefined1  [16] FUN_00550ac8(undefined8 *param_1,long param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong *puVar4;
  dword *pdVar5;
  dword *pdVar6;
  char *pcVar7;
  ulong uVar8;
  code *pcVar9;
  dword *pdVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulong auStack_58 [2];
  dword adStack_48 [2];
  
  if (param_1 == (undefined8 *)0x0) {
    pcVar9 = (code *)0x0;
    pdVar10 = (dword *)&UNK_00008000;
    pdVar5 = &section_000000b8.reserved2;
  }
  else {
    pdVar5 = (dword *)*param_1;
    pdVar10 = (dword *)param_1[1];
    pcVar9 = (code *)param_1[2];
  }
  adStack_48[0] = 0xffffffe7;
  adStack_48[1] = 0xffffffff;
  puVar4 = auStack_58;
  pdVar6 = adStack_48;
  auStack_58[0] = param_3;
  func_0x0048b1cc(puVar4,pdVar6,
                  "min_bytes <= std::numeric_limits<size_t>::max() - SerialArena::kBlockHeaderSize")
  ;
  if (puVar4 != (ulong *)0x0) {
    func_0x00533528();
    pcVar7 = "external/protobuf+/src/google/protobuf/arena.cc";
    FUN_00776794(auStack_58,"external/protobuf+/src/google/protobuf/arena.cc",0x4d,puVar4,pdVar6);
    puVar4 = auStack_58;
    FUN_005558a0();
    func_0x00551244();
    uVar8 = *puVar4;
    if ((uVar8 & 0xff) == 0) {
      do {
        lVar3 = lRam0000000000b69438;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0xb69438,0x10);
        if (bVar2) {
          cVar1 = ExclusiveMonitorsStatus();
          lRam0000000000b69438 = lRam0000000000b69438 + 1;
        }
      } while (cVar1 != '\0');
      uVar8 = lVar3 << 8;
    }
    *puVar4 = uVar8 + 1;
    auVar12._8_8_ = pcVar7;
    auVar12._0_8_ = uVar8;
    return auVar12;
  }
  if ((undefined *)(param_2 << 1) <= pdVar10) {
    pdVar10 = (dword *)(param_2 << 1);
  }
  if (param_2 != 0) {
    pdVar5 = pdVar10;
  }
  if (pdVar5 <= (dword *)(param_3 + 0x18)) {
    pdVar5 = (dword *)(param_3 + 0x18);
  }
  if (pcVar9 == (code *)0x0) {
    FUN_0048b180(pdVar5);
    pdVar10 = pdVar5;
  }
  else {
    pdVar10 = pdVar5;
    (*pcVar9)(pdVar5);
    pdVar6 = pdVar5;
  }
  auVar11._8_8_ = pdVar6;
  auVar11._0_8_ = pdVar10;
  return auVar11;
}



/* Entry: 00550ba8; end: 00550bf3;  */

ulong FUN_00550ba8(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  
  func_0x00551244();
  uVar4 = *param_1;
  if ((uVar4 & 0xff) == 0) {
    do {
      lVar3 = lRam0000000000b69438;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb69438,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        lRam0000000000b69438 = lRam0000000000b69438 + 1;
      }
    } while (cVar1 != '\0');
    uVar4 = lVar3 << 8;
  }
  *param_1 = uVar4 + 1;
  return uVar4;
}



/* Entry: 00550bf4; end: 00550c73;  */

long FUN_00550bf4(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_38;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  FUN_00550c74();
  uStack_28 = 0;
  puVar3 = &uStack_28;
  lVar2 = param_1;
  FUN_00550cd8(param_1);
  if (((*(ulong *)(param_1 + 8) & 1) == 0) && (puVar3 != (undefined8 *)0x0)) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffff8;
    uStack_38 = 0;
    if (uVar1 != 0) {
      uStack_38 = *(undefined8 *)(uVar1 + 0x18);
    }
    puStack_30 = &uStack_28;
    FUN_00550da4(&uStack_38,lVar2,puVar3);
  }
  FUN_00567000(param_1 + 0x18);
  return param_1;
}



/* Entry: 00550c74; end: 00550cd7;  */

void FUN_00550c74(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  plVar2 = (long *)*(long *)(param_1 + 0x20);
  while (*(int *)(plVar2 + 1) != 0) {
    lVar6 = *plVar2;
    Hint_Prefetch(lVar6,0,0,0);
    FUN_00551174();
    lVar7 = (long)plVar2 + -8;
    for (lVar9 = param_2 << 3; plVar2 = (long *)lVar6, lVar9 != 0; lVar9 = lVar9 + -8) {
      FUN_00550994(*(undefined8 *)(lVar7 + lVar9));
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  if (puVar4[2] != 0) {
    puVar4[1] = *(undefined8 *)(param_1 + 0x38);
    do {
      puVar5 = (undefined8 *)puVar4[1];
      puVar1 = (undefined8 *)((long)puVar4 + (puVar4[2] & 0xfffffffffffffff8));
      puVar8 = puVar5;
      for (iVar3 = -7; (puVar8 < puVar1 && (iVar3 != 0)); iVar3 = iVar3 + 1) {
        Hint_Prefetch(*puVar8,0,0,1);
        puVar8 = puVar8 + 2;
      }
      while (puVar8 < puVar1) {
        (*(code *)puVar5[1])(*puVar5);
        Hint_Prefetch(*puVar8,0,0,1);
        puVar5 = puVar5 + 2;
        puVar8 = puVar8 + 2;
      }
      Hint_Prefetch(*puVar4,0,0,1);
      for (; puVar5 < puVar1; puVar5 = puVar5 + 2) {
        (*(code *)puVar5[1])(*puVar5);
      }
      puVar4 = (undefined8 *)*puVar4;
    } while (puVar4 != (undefined8 *)0x0);
  }
  return;
}



/* Entry: 00550cd8; end: 00550da3;  */

/* WARNING: Possible PIC construction at 0x00550d48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00550d4c) */

undefined1  [16] FUN_00550cd8(long param_1,long param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *unaff_x19;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar8 [16];
  undefined8 uStack_60;
  
  puVar1 = &stack0xfffffffffffffff0;
  func_0x00551294();
  uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffff8;
  if (uVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(uVar2 + 0x18);
  }
  plVar4 = (long *)*(long *)(unaff_x20 + 0x20);
  uStack_60 = uVar6;
  do {
    if (*(int *)(plVar4 + 1) == 0) {
      lVar7 = unaff_x20 + 0x30;
SUB_00550df0:
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      *(undefined8 *)((long)register0x00000008 + -0x30) = uVar6;
      *(long **)((long)register0x00000008 + -0x28) = unaff_x19;
      lVar3 = lVar7;
      func_0x00551160();
      *unaff_x19 = *unaff_x19 + lVar3;
      plVar4 = *(long **)(lVar7 + 0x30);
      while( true ) {
        plVar5 = (long *)*plVar4;
        if (plVar5 == (long *)0x0) break;
        func_0x00550da4((undefined1 *)((long)register0x00000008 + -0x30));
        plVar4 = plVar5;
      }
      auVar8._8_8_ = plVar4[2];
      auVar8._0_8_ = plVar4;
      return auVar8;
    }
    lVar7 = *plVar4;
    Hint_Prefetch(lVar7,0,0,0);
    plVar5 = plVar4;
    FUN_00551174();
    if (param_2 * 8 != 0) {
      lVar7 = *(long *)((long)plVar5 + -8 + param_2 * 8);
      unaff_x30 = 0x550d4c;
      register0x00000008 = (BADSPACEBASE *)&uStack_60;
      unaff_x29 = puVar1;
      goto SUB_00550df0;
    }
    __ZdlPv(plVar4);
    plVar4 = (long *)lVar7;
  } while( true );
}



/* Entry: 00550da4; end: 00550e53;  */

void FUN_00550da4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  if ((code *)*param_1 == (code *)0x0) {
    __ZdlPv(param_2);
  }
  else {
    (*(code *)*param_1)(param_2,param_3);
  }
  *(long *)param_1[1] = *(long *)param_1[1] + param_3;
  return;
}



/* Entry: 00550e54; end: 00550f1f;  */

ulong FUN_00550e54(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong uVar4;
  long extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x9_02;
  long lVar5;
  long extraout_x9_03;
  ulong extraout_x9_04;
  ulong uVar6;
  long extraout_x10;
  long extraout_x10_00;
  ulong extraout_x10_01;
  long extraout_x10_02;
  long lVar7;
  long extraout_x10_03;
  ulong extraout_x10_04;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong uVar8;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong extraout_x12_01;
  ulong extraout_x12_02;
  ulong uVar9;
  
  FUN_005511d8();
  func_0x005511f8();
  if ((bool)in_ZR) {
    puVar2 = *(ulong **)(param_1 + 0x10);
    uVar3 = param_2 + 7U & 0xfffffffffffffff8;
    func_0x005512a0(param_3 + *puVar2 + -1);
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x00551214();
      uVar3 = extraout_x8_00;
      lVar5 = extraout_x9;
      lVar7 = extraout_x10;
      if (((bool)in_ZR || in_NG != in_OV) && (puVar2[2] < extraout_x12)) {
        func_0x0055127c();
        for (uVar3 = extraout_x11; extraout_x12_00 < uVar3; uVar3 = uVar3 - 0x40) {
          Hint_Prefetch(uVar3,2,0,0);
        }
        puVar2[3] = uVar3;
        uVar3 = extraout_x8_01;
        lVar5 = extraout_x9_00;
        lVar7 = extraout_x10_00;
      }
      *(ulong *)(lVar7 + -0x10) = uVar3;
      *(undefined8 *)(lVar7 + -8) = param_4;
      if (((long)(puVar2[2] - lVar5) < 0x401) && (puVar2[2] < puVar2[3])) {
        func_0x005512b8();
        for (uVar3 = extraout_x9_01; uVar3 < extraout_x10_01; uVar3 = uVar3 + 0x40) {
          Hint_Prefetch(uVar3,2,0,0);
        }
        puVar2[2] = uVar3;
        uVar3 = extraout_x8_02;
      }
      return uVar3;
    }
  }
  else {
    puVar2 = extraout_x8;
    FUN_00550138(extraout_x8,param_2 + 0x10);
    uVar3 = param_2 + 7U & 0xfffffffffffffff8;
    func_0x005512a0(param_3 + *puVar2 + -1);
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x00551214();
      uVar3 = extraout_x8_03;
      lVar5 = extraout_x9_02;
      lVar7 = extraout_x10_02;
      if (((bool)in_ZR || in_NG != in_OV) && (puVar2[2] < extraout_x12_01)) {
        func_0x0055127c();
        for (uVar3 = extraout_x11_00; extraout_x12_02 < uVar3; uVar3 = uVar3 - 0x40) {
          Hint_Prefetch(uVar3,2,0,0);
        }
        puVar2[3] = uVar3;
        uVar3 = extraout_x8_04;
        lVar5 = extraout_x9_03;
        lVar7 = extraout_x10_03;
      }
      *(ulong *)(lVar7 + -0x10) = uVar3;
      *(undefined8 *)(lVar7 + -8) = param_4;
      if (((long)(puVar2[2] - lVar5) < 0x401) && (puVar2[2] < puVar2[3])) {
        func_0x005512b8();
        for (uVar3 = extraout_x9_04; uVar3 < extraout_x10_04; uVar3 = uVar3 + 0x40) {
          Hint_Prefetch(uVar3,2,0,0);
        }
        puVar2[2] = uVar3;
        uVar3 = extraout_x8_05;
      }
      return uVar3;
    }
  }
  do {
    uVar9 = uVar3 + 7 & 0xfffffffffffffff8;
    uVar1 = uVar9;
    if (8 < param_3) {
      uVar1 = (param_3 - 8) + uVar3;
    }
    func_0x005504b4(puVar2,uVar1 + 0x10);
    uVar1 = (param_3 - 1) + *puVar2 & -param_3;
    uVar4 = puVar2[1];
    uVar3 = uVar9;
  } while (uVar4 < uVar9 + uVar1 + 0x10);
  uVar9 = uVar1 + uVar9;
  *puVar2 = uVar9;
  uVar6 = uVar4 - 0x10;
  puVar2[1] = uVar6;
  uVar3 = puVar2[3];
  if (((long)(uVar6 - uVar3) < 0x181) && (uVar8 = puVar2[2], uVar8 < uVar3)) {
    if (uVar6 <= uVar3) {
      uVar3 = uVar6;
    }
    uVar6 = uVar3 - 0x180;
    if (uVar3 - 0x180 <= uVar8) {
      uVar6 = uVar8;
    }
    for (; uVar6 < uVar3; uVar3 = uVar3 - 0x40) {
      Hint_Prefetch(uVar3,2,0,0);
    }
    puVar2[3] = uVar3;
  }
  *(ulong *)(uVar4 - 0x10) = uVar1;
  *(undefined8 *)(uVar4 - 8) = param_4;
  uVar3 = puVar2[2];
  if (((long)(uVar3 - uVar9) < 0x401) && (uVar4 = puVar2[3], uVar3 < uVar4)) {
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    uVar9 = uVar3 + 0x400;
    if (uVar4 <= uVar3 + 0x400) {
      uVar9 = uVar4;
    }
    for (; uVar3 < uVar9; uVar3 = uVar3 + 0x40) {
      Hint_Prefetch(uVar3,2,0,0);
    }
    puVar2[2] = uVar3;
  }
  return uVar1;
}



/* Entry: 00550f20; end: 00550ffb;  */

ulong FUN_00550f20(ulong *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  ulong uVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar3;
  long extraout_x9;
  long lVar4;
  long extraout_x9_00;
  ulong extraout_x9_01;
  ulong uVar5;
  long extraout_x10;
  long lVar6;
  long extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x11;
  ulong uVar7;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong uVar8;
  
  FUN_00550138(param_1,param_2 + 0x10);
  uVar2 = param_2 + 7U & 0xfffffffffffffff8;
  func_0x005512a0(param_3 + *param_1 + -1);
  if ((bool)in_CY && !(bool)in_ZR) {
    do {
      uVar8 = uVar2 + 7 & 0xfffffffffffffff8;
      uVar1 = uVar8;
      if (8 < param_3) {
        uVar1 = (param_3 - 8) + uVar2;
      }
      func_0x005504b4(param_1,uVar1 + 0x10);
      uVar1 = (param_3 - 1) + *param_1 & -param_3;
      uVar3 = param_1[1];
      uVar2 = uVar8;
    } while (uVar3 < uVar8 + uVar1 + 0x10);
    uVar8 = uVar1 + uVar8;
    *param_1 = uVar8;
    uVar5 = uVar3 - 0x10;
    param_1[1] = uVar5;
    uVar2 = param_1[3];
    if (((long)(uVar5 - uVar2) < 0x181) && (uVar7 = param_1[2], uVar7 < uVar2)) {
      if (uVar5 <= uVar2) {
        uVar2 = uVar5;
      }
      uVar5 = uVar2 - 0x180;
      if (uVar2 - 0x180 <= uVar7) {
        uVar5 = uVar7;
      }
      for (; uVar5 < uVar2; uVar2 = uVar2 - 0x40) {
        Hint_Prefetch(uVar2,2,0,0);
      }
      param_1[3] = uVar2;
    }
    *(ulong *)(uVar3 - 0x10) = uVar1;
    *(undefined8 *)(uVar3 - 8) = param_4;
    uVar2 = param_1[2];
    if (((long)(uVar2 - uVar8) < 0x401) && (uVar3 = param_1[3], uVar2 < uVar3)) {
      if (uVar2 <= uVar8) {
        uVar2 = uVar8;
      }
      uVar8 = uVar2 + 0x400;
      if (uVar3 <= uVar2 + 0x400) {
        uVar8 = uVar3;
      }
      for (; uVar2 < uVar8; uVar2 = uVar2 + 0x40) {
        Hint_Prefetch(uVar2,2,0,0);
      }
      param_1[2] = uVar2;
    }
    return uVar1;
  }
  func_0x00551214();
  uVar2 = extraout_x8;
  lVar4 = extraout_x9;
  lVar6 = extraout_x10;
  if (((bool)in_ZR || in_NG != in_OV) && (param_1[2] < extraout_x12)) {
    func_0x0055127c();
    for (uVar2 = extraout_x11; extraout_x12_00 < uVar2; uVar2 = uVar2 - 0x40) {
      Hint_Prefetch(uVar2,2,0,0);
    }
    param_1[3] = uVar2;
    uVar2 = extraout_x8_00;
    lVar4 = extraout_x9_00;
    lVar6 = extraout_x10_00;
  }
  *(ulong *)(lVar6 + -0x10) = uVar2;
  *(undefined8 *)(lVar6 + -8) = param_4;
  if (((long)(param_1[2] - lVar4) < 0x401) && (param_1[2] < param_1[3])) {
    func_0x005512b8();
    for (uVar2 = extraout_x9_01; uVar2 < extraout_x10_01; uVar2 = uVar2 + 0x40) {
      Hint_Prefetch(uVar2,2,0,0);
    }
    param_1[2] = uVar2;
    uVar2 = extraout_x8_01;
  }
  return uVar2;
}



/* Entry: 00550ffc; end: 0055108b;  */

void FUN_00550ffc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar2;
  ulong extraout_x10;
  ulong extraout_x10_00;
  
  FUN_00550458();
  lVar1 = param_1[1];
  if (0xf < (ulong)(lVar1 - *param_1)) {
    param_1[1] = lVar1 + -0x10;
    if (((lVar1 + -0x10) - param_1[3] < 0x181) && ((ulong)param_1[2] < (ulong)param_1[3])) {
      func_0x00551264();
      for (uVar2 = extraout_x9_00; extraout_x10_00 < uVar2; uVar2 = uVar2 - 0x40) {
        Hint_Prefetch(uVar2,2,0,0);
      }
      param_1[3] = uVar2;
      lVar1 = extraout_x8_00;
    }
    *(undefined8 *)(lVar1 + -0x10) = param_2;
    *(undefined8 *)(lVar1 + -8) = param_3;
    return;
  }
  func_0x005504b4();
  lVar1 = param_1[1];
  param_1[1] = lVar1 + -0x10;
  if (((lVar1 + -0x10) - param_1[3] < 0x181) && ((ulong)param_1[2] < (ulong)param_1[3])) {
    func_0x00551264();
    for (uVar2 = extraout_x9; extraout_x10 < uVar2; uVar2 = uVar2 - 0x40) {
      Hint_Prefetch(uVar2,2,0,0);
    }
    param_1[3] = uVar2;
    lVar1 = extraout_x8;
  }
  *(undefined8 *)(lVar1 + -0x10) = param_2;
  *(undefined8 *)(lVar1 + -8) = param_3;
  return;
}



/* Entry: 0055108c; end: 0055111b;  */

long FUN_0055108c(long param_1)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  ushort uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  short sVar8;
  ulong uVar9;
  long *plStack_38;
  
  FUN_00550458();
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar7 = *(long *)(param_1 + 0x28) + -0x18;
    *(long *)(param_1 + 0x28) = lVar7;
    return *(long *)(param_1 + 0x20) + lVar7 + 0x10;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  if (lVar7 == 0) {
    uVar9 = 0x100;
  }
  else {
    *(ulong *)(param_1 + 0x38) = (ulong)*(ushort *)(lVar7 + 8) + *(long *)(param_1 + 0x38) + -0x10;
    uVar9 = (ulong)*(ushort *)(lVar7 + 10);
  }
  lVar5 = param_1;
  FUN_0055054c(param_1,uVar9,&plStack_38);
  if ((int)lVar5 == 0) {
    if (lVar7 == 0) {
      sVar8 = 0x100;
      uVar9 = 0x100;
    }
    else {
      uVar4 = *(ushort *)(lVar7 + 10);
      uVar9 = (ulong)uVar4;
      sVar8 = uVar4 << 1;
      if ((uVar4 & 0x7000) != 0) {
        sVar8 = 0x2000;
      }
    }
    uVar1 = ((int)uVar9 - (int)(uVar9 - 0x10)) + (int)((uVar9 - 0x10) / 0x18) * 0x18;
    plVar6 = (long *)((ulong)uVar1 & 0xffff);
    __Znwm();
    *plVar6 = lVar7;
    uVar4 = (ushort)uVar1;
    *(ushort *)(plVar6 + 1) = uVar4;
    *(short *)((long)plVar6 + 10) = sVar8;
    *(undefined1 *)((long)plVar6 + 0xc) = 1;
    *(ulong *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + (ulong)uVar4;
  }
  else {
    *(ulong *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) - uVar9;
    uVar2 = (undefined2)(((uint)uVar9 & 0x7fff) << 1);
    if ((uVar9 & 0x7000) != 0) {
      uVar2 = 0x2000;
    }
    *plStack_38 = lVar7;
    *(short *)(plStack_38 + 1) =
         (short)uVar9 + ((short)((uVar9 - 0x10) / 0x18) * 0x18 - (short)(uVar9 - 0x10));
    uVar3 = 0x100;
    if (lVar7 != 0) {
      uVar3 = uVar2;
    }
    *(undefined2 *)((long)plStack_38 + 10) = uVar3;
    *(undefined1 *)((long)plStack_38 + 0xc) = 0;
    plVar6 = plStack_38;
  }
  *(long **)(param_1 + 0x20) = plVar6;
  uVar4 = *(ushort *)(plVar6 + 1);
  *(ulong *)(param_1 + 0x28) = (ulong)uVar4 - 0x28;
  return (long)plVar6 + ((ulong)uVar4 - 0x18);
}



/* Entry: 0055111c; end: 00551147;  */

undefined8 FUN_0055111c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_00551148(&uStack_28);
  return param_1;
}



/* Entry: 00551148; end: 00551173;  */

void FUN_00551148(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00551174; end: 005511d7;  */

void FUN_00551174(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lStack_20;
  ulong uStack_18;
  
  uVar2 = *(uint *)(param_1 + 8);
  uStack_18 = (ulong)uVar2;
  lStack_20 = param_1 + uStack_18 * 8 + 0x10;
  uVar1 = *(uint *)(param_1 + 0xc);
  if (uVar2 <= *(uint *)(param_1 + 0xc)) {
    uVar1 = uVar2;
  }
  func_0x005511b0(&lStack_20,uVar1);
  return;
}



/* Entry: 005511d8; end: 005512e7;  */

void FUN_005511d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005511e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___tlv_bootstrap_00b2c348)(param_1);
  return;
}



/* Entry: 005512e8; end: 0055130b;  */

void FUN_005512e8(void)

{
  func_0x005513b4();
  func_0x005513a4();
  return;
}



/* Entry: 0055130c; end: 0055137f;  */

long FUN_0055130c(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined1 auStack_98 [64];
  long lStack_58;
  
  FUN_005554b4(auStack_98,*(undefined8 *)(param_1 + 8));
  puVar1 = &UNK_0081107d;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  FUN_00461ffc(lStack_58 + 0x118,puVar1);
  FUN_005556e0(auStack_98);
  return param_1;
}



/* Entry: 00551380; end: 005513a3;  */

void FUN_00551380(void)

{
  func_0x005513b4();
  func_0x005513a4();
  return;
}



/* Entry: 005513a4; end: 005513c3;  */

void FUN_005513a4(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined1 uVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  undefined1 *puVar11;
  undefined1 *puStack_40;
  long lStack_38;
  
  uVar3 = *(ulong *)(&UNK_00003c58 + *(long *)(unaff_x20 + 8));
  puStack_40 = *(undefined1 **)(&UNK_00003c50 + *(long *)(unaff_x20 + 8));
  uVar7 = uVar3;
  if (param_1 + 0x14U <= uVar3) {
    uVar7 = param_1 + 0x14U;
  }
  uVar1 = 1;
  if (0x7f < uVar7) {
    do {
      uVar8 = uVar7 >> 0xe;
      uVar7 = uVar7 >> 7;
      uVar1 = uVar1 + 1;
    } while (uVar8 != 0);
  }
  if (uVar3 < uVar1 + 1) {
    lStack_38 = 0;
    uVar7 = 0;
    func_0x00555b78();
    if ((uVar7 & 1) == 0) goto LAB_00554c00;
    goto LAB_00554c54;
  }
  puVar11 = puStack_40 + 1;
  *puStack_40 = 0x3a;
  uVar3 = uVar3 - 1;
  uVar7 = uVar1;
  if (uVar3 <= uVar1) {
    uVar7 = uVar3;
  }
  uVar8 = uVar1 - 1;
  if (uVar8 == 0) {
    uVar9 = 0;
  }
  else {
    if (uVar1 < 0x21) {
      uVar10 = 0;
    }
    else {
      uVar9 = uVar8 & 0xffffffffffffffe0;
      *(undefined8 *)(puStack_40 + 9) = 0x8080808080808080;
      *(undefined8 *)(puStack_40 + 1) = 0x8080808080808080;
      *(undefined8 *)(puStack_40 + 0x19) = 0x8080808080808080;
      *(undefined8 *)(puStack_40 + 0x11) = 0x8080808080808080;
      if (uVar9 != 0x20) {
        *(undefined8 *)(puStack_40 + 0x29) = 0x8080808080808080;
        *(undefined8 *)(puStack_40 + 0x21) = 0x8080808080808080;
        *(undefined8 *)(puStack_40 + 0x39) = 0x8080808080808080;
        *(undefined8 *)(puStack_40 + 0x31) = 0x8080808080808080;
      }
      uVar10 = uVar9;
      if (uVar8 == uVar9) goto LAB_00554ba8;
    }
    do {
      uVar9 = uVar10 + 1;
      puVar11[uVar10] = 0x80;
      uVar10 = uVar9;
    } while (uVar8 != uVar9);
  }
LAB_00554ba8:
  uVar5 = 0;
  if (uVar9 + 1 != uVar1) {
    uVar5 = 0x80;
  }
  puVar11[uVar9] = uVar5;
  puStack_40 = puVar11 + uVar1;
  lStack_38 = uVar3 - uVar1;
  uVar3 = 0;
  func_0x00555b78();
  if ((uVar3 & 1) == 0) {
LAB_00554c00:
    *(undefined8 *)(&UNK_00003c58 + *(long *)(unaff_x20 + 8)) = 0;
    return;
  }
  if ((puVar11 <= puStack_40) && (uVar7 != 0)) {
    uVar3 = (long)puStack_40 - (long)(puVar11 + uVar7);
    if (uVar7 == 1) {
      lVar4 = 0;
    }
    else {
      lVar2 = 0;
      do {
        lVar4 = lVar2 + 1;
        puVar11[lVar2] = (byte)uVar3 | 0x80;
        uVar3 = uVar3 >> 7;
        lVar2 = lVar4;
      } while (uVar7 - 1 != lVar4);
    }
    bVar6 = 0;
    if (lVar4 + 1U != uVar7) {
      bVar6 = 0x80;
    }
    puVar11[lVar4] = bVar6 | (byte)uVar3 & 0x7f;
  }
LAB_00554c54:
  lVar2 = *(long *)(unaff_x20 + 8);
  *(long *)(&UNK_00003c58 + lVar2) = lStack_38;
  *(undefined1 **)(&UNK_00003c50 + lVar2) = puStack_40;
  return;
}



/* Entry: 005513c4; end: 0055142b;  */

undefined8 * FUN_005513c4(long param_1)

{
  if (*(int *)(param_1 + 0x10) != 0xdd) {
    FUN_005519f8((int *)(param_1 + 0x10),param_1);
  }
  if (-1 < *(char *)(param_1 + 0x2f)) {
    return (undefined8 *)(param_1 + 0x18);
  }
  return *(undefined8 **)(param_1 + 0x18);
}



/* Entry: 0055142c; end: 0055159b;  */

void FUN_0055142c(ulong *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  int *piVar6;
  long *plVar7;
  undefined4 uStack_38;
  undefined4 uStack_34;
  char *pcStack_30;
  char *pcStack_28;
  
  pcStack_30 = "external/abseil-cpp+/absl/status/statusor.cc";
  pcStack_28 = "An OK status is not a valid constructor argument to StatusOr<T>";
  uStack_38 = 0x4a;
  uStack_34 = 2;
  FUN_0055159c(&PTR_FUN_00b1e660,&uStack_34,&pcStack_30,&uStack_38,&pcStack_28);
  pcVar5 = pcStack_28;
  pcVar4 = pcStack_28;
  _strlen(pcStack_28);
  FUN_005529d0(&pcStack_30,0xd,pcVar5,pcVar4);
  pcVar4 = (char *)*param_1;
  pcVar5 = pcVar4;
  if (pcStack_30 != pcVar4) {
    *param_1 = (ulong)pcStack_30;
    pcStack_30 = "";
    if (((ulong)pcVar4 & 1) == 0) {
      return;
    }
    piVar6 = (int *)(pcVar4 + -1);
    if (*piVar6 != 1) {
      do {
        iVar1 = *piVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pcVar5 = pcStack_30;
      if (iVar1 + -1 != 0) goto LAB_00551520;
    }
    plVar7 = *(long **)(pcVar4 + 0x1f);
    pcVar4[0x1f] = '\0';
    pcVar4[0x20] = '\0';
    pcVar4[0x21] = '\0';
    pcVar4[0x22] = '\0';
    pcVar4[0x23] = '\0';
    pcVar4[0x24] = '\0';
    pcVar4[0x25] = '\0';
    pcVar4[0x26] = '\0';
    if (plVar7 != (long *)0x0) {
      if (*plVar7 != 0) {
        FUN_00553a40(plVar7);
      }
      __ZdlPv(plVar7);
    }
    if (pcVar4[0x1e] < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar4 + 7));
    }
    __ZdlPv(piVar6);
    pcVar5 = pcStack_30;
  }
LAB_00551520:
  if (((ulong)pcVar5 & 1) != 0) {
    piVar6 = (int *)(pcVar5 + -1);
    if (*piVar6 != 1) {
      do {
        iVar1 = *piVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 != 0) {
        return;
      }
    }
    plVar7 = *(long **)(pcVar5 + 0x1f);
    pcVar5[0x1f] = '\0';
    pcVar5[0x20] = '\0';
    pcVar5[0x21] = '\0';
    pcVar5[0x22] = '\0';
    pcVar5[0x23] = '\0';
    pcVar5[0x24] = '\0';
    pcVar5[0x25] = '\0';
    pcVar5[0x26] = '\0';
    if (plVar7 != (long *)0x0) {
      if (*plVar7 != 0) {
        FUN_00553a40(plVar7);
      }
      __ZdlPv(plVar7);
    }
    if (pcVar5[0x1e] < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar5 + 7));
    }
    __ZdlPv(piVar6);
  }
  return;
}



/* Entry: 0055159c; end: 0055169b;  */

void FUN_0055159c(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4,
                 undefined8 *param_5)

{
  undefined *puVar1;
  undefined2 *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  dword *pdVar6;
  bool bVar7;
  long *plVar8;
  undefined8 ****ppppuVar9;
  char ****ppppcVar10;
  uint uVar11;
  undefined8 uVar12;
  long *plVar13;
  code *pcVar14;
  undefined2 uStack_d8;
  undefined1 uStack_d6;
  undefined5 uStack_d5;
  undefined *puStack_d0;
  byte bStack_c1;
  char ***pppcStack_c0;
  undefined *puStack_b8;
  ulong uStack_b0;
  char acStack_a8 [8];
  undefined8 ***pppuStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  pcVar14 = (code *)*param_1;
  uVar4 = *param_2;
  uVar12 = *param_3;
  uVar5 = *param_4;
  plVar13 = (long *)*param_5;
  plVar8 = plVar13;
  _strlen();
  if (plVar8 < (long *)0x7ffffffffffffff7) {
    if ((long *)((long)&MACH_HEADER.sizeofcmds + 2) < plVar8) {
      pdVar6 = &MACH_HEADER.flags;
      if ((dword *)((ulong)plVar8 | 7) != (dword *)0x17) {
        pdVar6 = (dword *)((ulong)plVar8 | 7);
      }
      ppppuVar9 = (undefined8 ****)((long)pdVar6 + 1U);
      __Znwm();
      uStack_58 = (long)pdVar6 + 1U | 0x8000000000000000;
      pppuStack_68 = ppppuVar9;
      plStack_60 = plVar8;
    }
    else {
      uStack_58 = CONCAT17((char)plVar8,(undefined7)uStack_58);
      ppppuVar9 = &pppuStack_68;
      if (plVar8 == (long *)0x0) goto LAB_00551638;
    }
    _memmove(ppppuVar9,plVar13,plVar8);
LAB_00551638:
    *(undefined1 *)((long)ppppuVar9 + (long)plVar8) = 0;
    (*pcVar14)(uVar4,uVar12,uVar5,&pppuStack_68);
    if ((long)uStack_58 < 0) {
      __ZdlPv(pppuStack_68);
    }
    return;
  }
  FUN_0040d740();
  if ((long)uStack_58 < 0) {
    __ZdlPv(pppuStack_68);
  }
  __Unwind_Resume();
  if (*plVar8 == 0) {
    uVar11 = 2;
    bStack_c1 = 2;
    puStack_d0 = &UNK_00004b4f;
    uStack_d8 = 0x4b4f;
    uStack_d6 = 0;
  }
  else {
    FUN_00552ec8(&uStack_d8);
    uVar11 = (uint)bStack_c1;
  }
  bVar7 = -1 < (char)uVar11;
  puVar2 = (undefined2 *)CONCAT53(uStack_d5,CONCAT12(uStack_d6,uStack_d8));
  if (bVar7) {
    puVar2 = &uStack_d8;
  }
  puStack_b8 = (undefined *)0x0;
  uStack_b0 = 0;
  puVar3 = puStack_d0;
  if (bVar7) {
    puVar3 = (undefined *)(ulong)uVar11;
  }
  pppcStack_c0 = (char ***)0x0;
  puVar1 = puVar3 + 0x34;
  if (puVar1 == (undefined *)0x0) {
    puStack_b8 = (undefined *)0x6566206f7420676e;
    pppcStack_c0 = (char ***)0x6974706d65747441;
    builtin_strncpy(acStack_a8,"e instea",8);
    uStack_b0._0_1_ = 't';
    uStack_b0._1_1_ = 'c';
    uStack_b0._2_1_ = 'h';
    uStack_b0._3_1_ = ' ';
    uStack_b0._4_1_ = 'v';
    uStack_b0._5_1_ = 'a';
    uStack_b0._6_1_ = 'l';
    uStack_b0._7_1_ = 'u';
    ppppcVar10 = &pppcStack_c0;
  }
  else {
    if ((puVar1 < (undefined *)0x17) ||
       (__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                  (&pppcStack_c0,0x16,puVar3 + 0x1e,0,0,0,0), ppppcVar10 = (char ****)pppcStack_c0,
       puStack_b8 = puVar1, -1 < (long)uStack_b0)) {
      puStack_b8 = (undefined *)0x0;
      uStack_b0 = CONCAT17((char)puVar1,(undefined7)uStack_b0) & 0x7fffffffffffffff;
      ppppcVar10 = &pppcStack_c0;
    }
    *(char *)((long)ppppcVar10 + (long)puVar1) = '\0';
    ppppcVar10 = (char ****)pppcStack_c0;
    if (-1 < (long)uStack_b0) {
      ppppcVar10 = &pppcStack_c0;
    }
    *(undefined4 *)(ppppcVar10 + 6) = 0x20726f72;
    ppppcVar10[1] = (char ***)0x6566206f7420676e;
    *ppppcVar10 = (char ***)0x6974706d65747441;
    ppppcVar10[3] = (char ***)0x616574736e692065;
    ppppcVar10[2] = (char ***)0x756c617620686374;
    ppppcVar10[5] = (char ***)0x726520676e696c64;
    ppppcVar10[4] = (char ***)0x6e616820666f2064;
    if (puVar3 == (undefined *)0x0) goto LAB_005517dc;
  }
  _memcpy((char *)((long)ppppcVar10 + 0x34),puVar2);
LAB_005517dc:
  (*(code *)PTR_FUN_00b1e660)(3,"external/abseil-cpp+/absl/status/statusor.cc",0x56,&pppcStack_c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(&pppcStack_c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(&uStack_d8);
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x551814);
  (*pcVar14)();
}



/* Entry: 0055169c; end: 00551857;  */

void FUN_0055169c(long *param_1)

{
  undefined *puVar1;
  undefined2 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  char ****ppppcVar6;
  uint uVar7;
  undefined2 uStack_68;
  undefined1 uStack_66;
  undefined5 uStack_65;
  undefined *puStack_60;
  byte bStack_51;
  char ***pppcStack_50;
  undefined *puStack_48;
  ulong uStack_40;
  char acStack_38 [8];
  
  if (*param_1 == 0) {
    uVar7 = 2;
    bStack_51 = 2;
    puStack_60 = &UNK_00004b4f;
    uStack_68 = 0x4b4f;
    uStack_66 = 0;
  }
  else {
    FUN_00552ec8(&uStack_68,param_1,1);
    uVar7 = (uint)bStack_51;
  }
  bVar5 = -1 < (char)uVar7;
  puVar2 = (undefined2 *)CONCAT53(uStack_65,CONCAT12(uStack_66,uStack_68));
  if (bVar5) {
    puVar2 = &uStack_68;
  }
  puStack_48 = (undefined *)0x0;
  uStack_40 = 0;
  puVar3 = puStack_60;
  if (bVar5) {
    puVar3 = (undefined *)(ulong)uVar7;
  }
  pppcStack_50 = (char ***)0x0;
  puVar1 = puVar3 + 0x34;
  if (puVar1 == (undefined *)0x0) {
    puStack_48 = (undefined *)0x6566206f7420676e;
    pppcStack_50 = (char ***)0x6974706d65747441;
    builtin_strncpy(acStack_38,"e instea",8);
    uStack_40._0_1_ = 't';
    uStack_40._1_1_ = 'c';
    uStack_40._2_1_ = 'h';
    uStack_40._3_1_ = ' ';
    uStack_40._4_1_ = 'v';
    uStack_40._5_1_ = 'a';
    uStack_40._6_1_ = 'l';
    uStack_40._7_1_ = 'u';
    ppppcVar6 = &pppcStack_50;
  }
  else {
    if ((puVar1 < (undefined *)0x17) ||
       (__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                  (&pppcStack_50,0x16,puVar3 + 0x1e,0,0,0,0), ppppcVar6 = (char ****)pppcStack_50,
       puStack_48 = puVar1, -1 < (long)uStack_40)) {
      puStack_48 = (undefined *)0x0;
      uStack_40 = CONCAT17((char)puVar1,(undefined7)uStack_40) & 0x7fffffffffffffff;
      ppppcVar6 = &pppcStack_50;
    }
    *(char *)((long)ppppcVar6 + (long)puVar1) = '\0';
    ppppcVar6 = (char ****)pppcStack_50;
    if (-1 < (long)uStack_40) {
      ppppcVar6 = &pppcStack_50;
    }
    *(undefined4 *)(ppppcVar6 + 6) = 0x20726f72;
    ppppcVar6[1] = (char ***)0x6566206f7420676e;
    *ppppcVar6 = (char ***)0x6974706d65747441;
    ppppcVar6[3] = (char ***)0x616574736e692065;
    ppppcVar6[2] = (char ***)0x756c617620686374;
    ppppcVar6[5] = (char ***)0x726520676e696c64;
    ppppcVar6[4] = (char ***)0x6e616820666f2064;
    if (puVar3 == (undefined *)0x0) goto LAB_005517dc;
  }
  _memcpy((char *)((long)ppppcVar6 + 0x34),puVar2);
LAB_005517dc:
  (*(code *)PTR_FUN_00b1e660)(3,"external/abseil-cpp+/absl/status/statusor.cc",0x56,&pppcStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(&pppcStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(&uStack_68);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x551814);
  (*pcVar4)();
}



/* Entry: 00551858; end: 00551923;  */

void FUN_00551858(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  *param_1 = &PTR_FUN_00a01360;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
    uVar4 = param_1[1];
  }
  else {
    uVar4 = param_1[1];
  }
  if ((uVar4 & 1) != 0) {
    piVar5 = (int *)(uVar4 - 1);
    if (*piVar5 != 1) {
      do {
        iVar1 = *piVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 != 0) goto __ZNSt9exceptionD2Ev;
    }
    plVar6 = *(long **)(uVar4 + 0x1f);
    *(undefined8 *)(uVar4 + 0x1f) = 0;
    if (plVar6 != (long *)0x0) {
      if (*plVar6 != 0) {
        FUN_00553a40(plVar6);
      }
      __ZdlPv(plVar6);
    }
    if (*(char *)(uVar4 + 0x1e) < '\0') {
      __ZdlPv(*(undefined8 *)(uVar4 + 7));
    }
    __ZdlPv(piVar5);
  }
__ZNSt9exceptionD2Ev:
                    /* WARNING: Could not recover jumptable at 0x0077a018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_00998cf0)(param_1);
  return;
}



/* Entry: 00551924; end: 005519f7;  */

void FUN_00551924(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  *param_1 = &PTR_FUN_00a01360;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
    uVar4 = param_1[1];
  }
  else {
    uVar4 = param_1[1];
  }
  if ((uVar4 & 1) == 0) {
LAB_00551954:
    __ZNSt9exceptionD2Ev(param_1);
  }
  else {
    piVar5 = (int *)(uVar4 - 1);
    if (*piVar5 != 1) {
      do {
        iVar1 = *piVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 != 0) goto LAB_00551954;
    }
    plVar6 = *(long **)(uVar4 + 0x1f);
    *(undefined8 *)(uVar4 + 0x1f) = 0;
    if (plVar6 != (long *)0x0) {
      if (*plVar6 != 0) {
        FUN_00553a40(plVar6);
      }
      __ZdlPv(plVar6);
    }
    if (*(char *)(uVar4 + 0x1e) < '\0') {
      __ZdlPv(*(undefined8 *)(uVar4 + 7));
    }
    __ZdlPv(piVar5);
    __ZNSt9exceptionD2Ev(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005519f8; end: 00551ce3;  */

/* WARNING: Removing unreachable block (ram,0x00551aa4) */
/* WARNING: Removing unreachable block (ram,0x00551a8c) */

void FUN_005519f8(int *param_1,long param_2)

{
  undefined *puVar1;
  undefined2 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  char *******pppppppcVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined2 uStack_78;
  undefined1 uStack_76;
  undefined5 uStack_75;
  undefined *puStack_70;
  byte bStack_61;
  char ******ppppppcStack_60;
  undefined5 uStack_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  undefined2 uStack_4b;
  byte bStack_49;
  
  do {
    if (*param_1 != 0) {
      iVar10 = 0;
      ClearExclusiveLocal();
      goto LAB_00551a60;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar5) {
      *param_1 = 0x65c2937b;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  goto LAB_00551b10;
LAB_00551a60:
  do {
    iVar3 = *param_1;
    if (iVar3 == 0) {
      puVar6 = &UNK_00810fb0;
      iVar8 = 0x65c2937b;
LAB_00551abc:
      do {
        if (*param_1 != iVar3) {
          ClearExclusiveLocal();
          goto LAB_00551a60;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar5) {
          *param_1 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else {
      if (iVar3 != 0xdd) {
        if (iVar3 == 0x65c2937b) {
          puVar6 = &UNK_00810fbc;
          iVar8 = 0x5a308d2;
          goto LAB_00551abc;
        }
        iVar10 = iVar10 + 1;
        FUN_00576d44(param_1,iVar3,iVar10,1);
        goto LAB_00551a60;
      }
      puVar6 = &UNK_00810fc8;
    }
  } while (puVar6[8] != '\x01');
  if (iVar3 != 0) {
    return;
  }
LAB_00551b10:
  if (*(long *)(param_2 + 8) == 0) {
    uVar9 = 2;
    bStack_61 = 2;
    puStack_70 = &UNK_00004b4f;
    uStack_78 = 0x4b4f;
    uStack_76 = 0;
  }
  else {
    FUN_00552ec8(&uStack_78,(long *)(param_2 + 8),1);
    uVar9 = (uint)bStack_61;
  }
  bVar5 = -1 < (char)uVar9;
  puVar2 = (undefined2 *)CONCAT53(uStack_75,CONCAT12(uStack_76,uStack_78));
  if (bVar5) {
    puVar2 = &uStack_78;
  }
  uStack_58 = 0;
  uStack_53 = 0;
  uStack_50 = 0;
  uStack_4b = 0;
  bStack_49 = 0;
  puVar6 = puStack_70;
  if (bVar5) {
    puVar6 = (undefined *)(ulong)uVar9;
  }
  ppppppcStack_60 = (char ******)0x0;
  puVar1 = puVar6 + 0x15;
  if (puVar1 == (undefined *)0x0) {
    uStack_58 = 0x20724f7375;
    ppppppcStack_60 = (char ******)0x7461745320646142;
    uStack_53 = 0x636361;
    uStack_50 = 0x203a737365;
    pppppppcVar7 = &ppppppcStack_60;
  }
  else {
    if ((puVar1 < (undefined *)0x17) ||
       (__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                  (&ppppppcStack_60,0x16,puVar6 + -1,0,0,0,0), -1 < (char)bStack_49)) {
      uStack_53 = 0;
      uStack_58 = 0;
      bStack_49 = (byte)puVar1 & 0x7f;
      pppppppcVar7 = &ppppppcStack_60;
    }
    else {
      uStack_58 = SUB85(puVar1,0);
      uStack_53 = (undefined3)((ulong)puVar1 >> 0x28);
      pppppppcVar7 = (char *******)ppppppcStack_60;
    }
    *(char *)((long)pppppppcVar7 + (long)puVar1) = '\0';
    pppppppcVar7 = (char *******)ppppppcStack_60;
    if (-1 < (char)bStack_49) {
      pppppppcVar7 = &ppppppcStack_60;
    }
    pppppppcVar7[1] = (char ******)0x63636120724f7375;
    *pppppppcVar7 = (char ******)0x7461745320646142;
    builtin_strncpy((char *)((long)pppppppcVar7 + 0xd),"access: ",8);
    if (puVar6 == (undefined *)0x0) {
      cVar4 = *(char *)(param_2 + 0x2f);
      goto joined_r0x00551c8c;
    }
  }
  _memcpy((char *)((long)pppppppcVar7 + 0x15),puVar2,puVar6);
  cVar4 = *(char *)(param_2 + 0x2f);
joined_r0x00551c8c:
  if (cVar4 < '\0') {
    __ZdlPv(*(undefined8 *)(param_2 + 0x18));
  }
  *(ulong *)(param_2 + 0x20) = CONCAT35(uStack_53,uStack_58);
  *(char *******)(param_2 + 0x18) = ppppppcStack_60;
  *(ulong *)(param_2 + 0x28) = CONCAT17(bStack_49,CONCAT25(uStack_4b,uStack_50));
  bStack_49 = 0;
  ppppppcStack_60 = (char ******)((ulong)ppppppcStack_60 & 0xffffffffffffff00);
  if ((char)bStack_61 < '\0') {
    __ZdlPv(CONCAT53(uStack_75,CONCAT12(uStack_76,uStack_78)));
  }
  do {
    iVar10 = *param_1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar5) {
      *param_1 = 0xdd;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar10 != 0x5a308d2) {
    return;
  }
  FUN_00576e00(param_1,1);
  return;
}



/* Entry: 00551ce4; end: 00551f97;  */

void FUN_00551ce4(char *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    param_1[0x17] = '\x02';
    param_1[0] = 'O';
    param_1[1] = 'K';
    param_1[2] = '\0';
    return;
  case 1:
    param_1[0x17] = '\t';
    builtin_strncpy(param_1,"CANCELLED",10);
    return;
  case 2:
    param_1[0x17] = '\a';
    builtin_strncpy(param_1,"UNKNOWN",8);
    return;
  case 3:
    param_1[0x17] = '\x10';
    builtin_strncpy(param_1,"INVALID_ARGUMENT",0x11);
    return;
  case 4:
    param_1[0x17] = '\x11';
    builtin_strncpy(param_1,"DEADLINE_EXCEEDED",0x12);
    return;
  case 5:
    param_1[0x17] = '\t';
    builtin_strncpy(param_1,"NOT_FOUND",10);
    return;
  case 6:
    param_1[0x17] = '\x0e';
    builtin_strncpy(param_1,"ALREADY_EXISTS",0xf);
    return;
  case 7:
    param_1[0x17] = '\x11';
    builtin_strncpy(param_1,"PERMISSION_DENIED",0x12);
    return;
  case 8:
    param_1[0x17] = '\x12';
    builtin_strncpy(param_1,"RESOURCE_EXHAUSTED",0x13);
    return;
  case 9:
    param_1[0x17] = '\x13';
    builtin_strncpy(param_1,"FAILED_PRECONDITION",0x14);
    return;
  case 10:
    param_1[0x17] = '\a';
    builtin_strncpy(param_1,"ABORTED",8);
    return;
  case 0xb:
    param_1[0x17] = '\f';
    builtin_strncpy(param_1,"OUT_OF_RANGE",0xd);
    return;
  case 0xc:
    param_1[0x17] = '\r';
    builtin_strncpy(param_1,"UNIMPLEMENTED",0xe);
    return;
  case 0xd:
    param_1[0x17] = '\b';
    builtin_strncpy(param_1,"INTERNAL",9);
    return;
  case 0xe:
    param_1[0x17] = '\v';
    builtin_strncpy(param_1,"UNAVAILABLE",0xc);
    return;
  case 0xf:
    param_1[0x17] = '\t';
    builtin_strncpy(param_1,"DATA_LOSS",10);
    return;
  case 0x10:
    param_1[0x17] = '\x0f';
    builtin_strncpy(param_1,"UNAUTHENTICATED",0x10);
    return;
  default:
    param_1[0x17] = '\0';
    *param_1 = '\0';
    return;
  }
}



/* Entry: 00551f98; end: 0055203f;  */

ulong * FUN_00551f98(ulong *param_1,ulong *param_2,ulong param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  dword *pdVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined1 uVar9;
  ulong *extraout_x8;
  ulong *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  
  puVar6 = param_2;
  puVar7 = param_2;
  _strlen();
  if ((ulong *)0x7ffffffffffffff6 < puVar6) {
    FUN_0040d740();
    if ((((*puVar6 & 1) != 0) && (puVar10 = *(ulong **)(*puVar6 + 0x1f), puVar10 != (ulong *)0x0))
       && (uVar13 = *puVar10, 1 < uVar13)) {
      puVar12 = puVar10 + 1;
      uVar14 = 0;
      if ((uVar13 & 1) == 0) {
        puVar10 = puVar10 + 2;
        do {
          uVar11 = (ulong)*(char *)((long)puVar10 + 0xf);
          if ((long)uVar11 < 0) {
            puVar8 = (ulong *)puVar10[-1];
            uVar11 = *puVar10;
          }
          else {
            puVar8 = puVar10 + -1;
          }
          if ((param_3 == uVar11) &&
             (puVar6 = puVar7, _memcmp(puVar7,puVar8,param_3), (int)puVar6 == 0)) goto LAB_00552150;
          uVar14 = uVar14 + 1;
          puVar10 = puVar10 + 5;
        } while (uVar13 >> 1 != uVar14);
      }
      else {
        puVar15 = (undefined8 *)*puVar12;
        do {
          uVar11 = (ulong)*(char *)((long)puVar15 + 0x17);
          puVar4 = puVar15;
          if ((long)uVar11 < 0) {
            uVar11 = puVar15[1];
            puVar4 = (undefined8 *)*puVar15;
          }
          if ((param_3 == uVar11) &&
             (puVar6 = puVar7, _memcmp(puVar7,puVar4,param_3), (int)puVar6 == 0)) goto LAB_00552150;
          uVar14 = uVar14 + 1;
          puVar15 = puVar15 + 5;
        } while (uVar13 >> 1 != uVar14);
      }
    }
    uVar9 = 0;
    *(undefined1 *)extraout_x8 = 0;
    goto LAB_00552080;
  }
  if ((ulong *)((long)&MACH_HEADER.sizeofcmds + 2) < puVar6) {
    pdVar5 = &MACH_HEADER.flags;
    if ((dword *)((ulong)puVar6 | 7) != (dword *)0x17) {
      pdVar5 = (dword *)((ulong)puVar6 | 7);
    }
    puVar7 = (ulong *)((long)pdVar5 + 1);
    __Znwm();
    param_1[1] = (ulong)puVar6;
    param_1[2] = (ulong)((long)pdVar5 + 1) | 0x8000000000000000;
    *param_1 = (ulong)puVar7;
  }
  else {
    *(char *)((long)param_1 + 0x17) = (char)puVar6;
    puVar7 = param_1;
    if (puVar6 == (ulong *)0x0) goto LAB_00552020;
  }
  _memmove(puVar7,param_2,puVar6);
LAB_00552020:
  *(undefined1 *)((long)puVar7 + (long)puVar6) = 0;
  return param_1;
LAB_00552150:
  if ((uVar13 & 1) != 0) {
    puVar12 = (ulong *)*puVar12;
  }
  puVar7 = puVar12 + uVar14 * 5 + 3;
  if (((*puVar7 & 1) == 0) || (uVar13 = puVar12[uVar14 * 5 + 4], uVar13 == 0)) {
    uVar13 = *puVar7;
    extraout_x8[1] = puVar12[uVar14 * 5 + 4];
    *extraout_x8 = uVar13;
  }
  else {
    piVar1 = (int *)(uVar13 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar9 = 1;
    *extraout_x8 = 1;
    extraout_x8[1] = uVar13;
    if (*puVar7 < 2) goto LAB_00552080;
    puVar6 = extraout_x8;
    FUN_0055ae58(extraout_x8,puVar7,8);
  }
  uVar9 = 1;
LAB_00552080:
  *(undefined1 *)(extraout_x8 + 2) = uVar9;
  return puVar6;
}



/* Entry: 00552040; end: 005521b7;  */

void FUN_00552040(ulong *param_1,ulong *param_2,undefined8 param_3,ulong param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  undefined1 uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  
  if ((((*param_2 & 1) != 0) && (puVar8 = *(ulong **)(*param_2 + 0x1f), puVar8 != (ulong *)0x0)) &&
     (uVar11 = *puVar8, 1 < uVar11)) {
    puVar10 = puVar8 + 1;
    uVar12 = 0;
    if ((uVar11 & 1) == 0) {
      puVar8 = puVar8 + 2;
      do {
        uVar9 = (ulong)*(char *)((long)puVar8 + 0xf);
        if ((long)uVar9 < 0) {
          puVar6 = (ulong *)puVar8[-1];
          uVar9 = *puVar8;
        }
        else {
          puVar6 = puVar8 + -1;
        }
        if ((param_4 == uVar9) &&
           (uVar5 = param_3, _memcmp(param_3,puVar6,param_4), (int)uVar5 == 0)) goto LAB_00552150;
        uVar12 = uVar12 + 1;
        puVar8 = puVar8 + 5;
      } while (uVar11 >> 1 != uVar12);
    }
    else {
      puVar13 = (undefined8 *)*puVar10;
      do {
        uVar9 = (ulong)*(char *)((long)puVar13 + 0x17);
        puVar4 = puVar13;
        if ((long)uVar9 < 0) {
          uVar9 = puVar13[1];
          puVar4 = (undefined8 *)*puVar13;
        }
        if ((param_4 == uVar9) &&
           (uVar5 = param_3, _memcmp(param_3,puVar4,param_4), (int)uVar5 == 0)) goto LAB_00552150;
        uVar12 = uVar12 + 1;
        puVar13 = puVar13 + 5;
      } while (uVar11 >> 1 != uVar12);
    }
  }
  uVar7 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00552080:
  *(undefined1 *)(param_1 + 2) = uVar7;
  return;
LAB_00552150:
  if ((uVar11 & 1) != 0) {
    puVar10 = (ulong *)*puVar10;
  }
  puVar8 = puVar10 + uVar12 * 5 + 3;
  if (((*puVar8 & 1) == 0) || (uVar11 = puVar10[uVar12 * 5 + 4], uVar11 == 0)) {
    uVar11 = *puVar8;
    param_1[1] = puVar10[uVar12 * 5 + 4];
    *param_1 = uVar11;
  }
  else {
    piVar1 = (int *)(uVar11 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar7 = 1;
    *param_1 = 1;
    param_1[1] = uVar11;
    if (*puVar8 < 2) goto LAB_00552080;
    FUN_0055ae58(param_1,puVar8,8);
  }
  uVar7 = 1;
  goto LAB_00552080;
}



/* Entry: 005521b8; end: 0055271f;  */

void FUN_005521b8(char *param_1,char *param_2,ulong param_3,qword *param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  dword *pdVar8;
  code *pcVar9;
  char *pcVar10;
  char *pcVar11;
  qword qVar12;
  ulong uVar13;
  ulong uVar14;
  char *pcVar15;
  ulong uVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  ulong *puVar20;
  long lVar21;
  long *plVar22;
  char *unaff_x26;
  ulong uVar23;
  qword *pqVar24;
  undefined8 *puVar25;
  char *pcStack_90;
  qword qStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  qword qStack_70;
  char *pcStack_68;
  
  pcVar11 = (char *)&pcStack_90;
  pcVar19 = (char *)&pcStack_90;
  uVar16 = *(ulong *)param_1;
  if (uVar16 == 0) {
    return;
  }
  if ((uVar16 & 1) == 0) {
    pcVar17 = segment_command_00000020.segname;
    __Znwm();
    pcVar17[0] = '\x01';
    pcVar17[1] = '\0';
    pcVar17[2] = '\0';
    pcVar17[3] = '\0';
    *(int *)(pcVar17 + 4) = (int)(uVar16 >> 2);
    pcVar17[0x1f] = 0;
    pcVar17[8] = '\0';
    *(qword *)(pcVar17 + 0x20) = 0;
    *(char **)param_1 = pcVar17 + 1;
  }
  else {
    pcVar15 = (char *)(uVar16 - 1);
    pcVar17 = param_1;
    if (*(int *)pcVar15 != 1) {
      pcStack_90 = (char *)0x0;
      puVar20 = *(ulong **)(uVar16 + 0x1f);
      pcVar17 = pcStack_90;
      if (puVar20 != (ulong *)0x0) {
        pcVar17 = segment_command_00000020.segname + 8;
        __Znwm();
        pcVar17[0] = '\0';
        pcVar17[1] = '\0';
        pcVar17[2] = '\0';
        pcVar17[3] = '\0';
        pcVar17[4] = '\0';
        pcVar17[5] = '\0';
        pcVar17[6] = '\0';
        pcVar17[7] = '\0';
        if (1 < *puVar20) {
          FUN_0055387c(pcVar17,puVar20);
        }
      }
      pcStack_90 = pcVar17;
      pcVar17 = pcStack_90;
      pcVar10 = segment_command_00000020.segname;
      __Znwm();
      uVar4 = *(undefined4 *)(uVar16 + 3);
      uVar13 = *(ulong *)param_1;
      pcStack_68 = pcVar17;
      if ((uVar13 & 1) == 0) {
        uVar14 = -(uVar13 >> 1 & 1);
        uVar23 = uVar14 & 0x810ff6;
        uVar14 = uVar14 & 0x1b;
LAB_005522b0:
        pcVar10[0] = '\x01';
        pcVar10[1] = '\0';
        pcVar10[2] = '\0';
        pcVar10[3] = '\0';
        *(undefined4 *)(pcVar10 + 4) = uVar4;
      }
      else {
        uVar14 = (ulong)*(char *)(uVar13 + 0x1e);
        if (-1 < (long)uVar14) {
          uVar23 = uVar13 + 7;
          goto LAB_005522b0;
        }
        uVar23 = *(ulong *)(uVar13 + 7);
        uVar14 = *(ulong *)(uVar13 + 0xf);
        pcStack_90 = (char *)0x0;
        pcVar10[0] = '\x01';
        pcVar10[1] = '\0';
        pcVar10[2] = '\0';
        pcVar10[3] = '\0';
        *(undefined4 *)(pcVar10 + 4) = uVar4;
        if (0x7ffffffffffffff6 < uVar14) {
          FUN_0040d740();
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x55265c);
          (*pcVar9)();
        }
      }
      pcStack_90 = (char *)0x0;
      if (uVar14 < 0x17) {
        unaff_x26 = pcVar10 + 8;
        pcVar10[0x1f] = (char)uVar14;
        pcVar17 = pcVar10;
        if (uVar14 != 0) goto LAB_00552300;
      }
      else {
        pdVar8 = &MACH_HEADER.flags;
        if ((dword *)(uVar14 | 7) != (dword *)0x17) {
          pdVar8 = (dword *)(uVar14 | 7);
        }
        unaff_x26 = (char *)((long)pdVar8 + 1);
        __Znwm();
        *(ulong *)(pcVar10 + 0x10) = uVar14;
        *(ulong *)(pcVar10 + 0x18) = (ulong)((long)pdVar8 + 1) | 0x8000000000000000;
        *(char **)(pcVar10 + 8) = unaff_x26;
LAB_00552300:
        pcVar17 = unaff_x26;
        _memmove(unaff_x26,uVar23,uVar14);
      }
      unaff_x26[uVar14] = '\0';
      *(char **)(pcVar10 + 0x20) = pcStack_68;
      *(char **)param_1 = pcVar10 + 1;
      if (*(int *)pcVar15 == 1) {
LAB_00552344:
        plVar22 = *(long **)(uVar16 + 0x1f);
        *(undefined8 *)(uVar16 + 0x1f) = 0;
        if (plVar22 != (long *)0x0) {
          if (*plVar22 != 0) {
            FUN_00553a40(plVar22);
          }
          __ZdlPv(plVar22);
        }
        if (*(char *)(uVar16 + 0x1e) < '\0') {
          __ZdlPv(*(undefined8 *)(uVar16 + 7));
        }
        __ZdlPv();
        pcVar17 = pcVar15;
      }
      else {
        do {
          iVar2 = *(int *)pcVar15;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pcVar15,0x10);
          if (bVar6) {
            *(int *)pcVar15 = iVar2 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar2 + -1 == 0) goto LAB_00552344;
      }
      pcVar15 = pcStack_90;
      if (pcStack_90 != (char *)0x0) {
        if (*(long *)pcStack_90 != 0) {
          FUN_00553a40(pcStack_90);
        }
        __ZdlPv();
        pcVar17 = pcVar15;
      }
    }
  }
  lVar21 = *(long *)param_1;
  pcVar15 = *(char **)(lVar21 + 0x1f);
  if (pcVar15 == (char *)0x0) {
    pcVar15 = segment_command_00000020.segname + 8;
    __Znwm();
    pcVar15[0] = '\0';
    pcVar15[1] = '\0';
    pcVar15[2] = '\0';
    pcVar15[3] = '\0';
    pcVar15[4] = '\0';
    pcVar15[5] = '\0';
    pcVar15[6] = '\0';
    pcVar15[7] = '\0';
    pcVar17 = *(char **)(lVar21 + 0x1f);
    *(char **)(lVar21 + 0x1f) = pcVar15;
    pcVar10 = pcVar15;
    if (pcVar17 != (char *)0x0) {
      if (*(long *)pcVar17 != 0) {
        FUN_00553a40(pcVar17);
      }
      __ZdlPv();
      pcVar15 = *(char **)(lVar21 + 0x1f);
      pcVar10 = pcVar17;
      if (pcVar15 != (char *)0x0) goto LAB_005523ac;
    }
  }
  else {
LAB_005523ac:
    uVar16 = *(ulong *)pcVar15;
    pcVar10 = pcVar17;
    if (1 < uVar16) {
      unaff_x26 = (char *)(uVar16 >> 1);
      pcVar18 = pcVar15 + 8;
      plVar22 = (long *)0x0;
      if ((uVar16 & 1) == 0) {
        pqVar24 = (qword *)(pcVar15 + 0x10);
        do {
          qVar12 = (qword)*(char *)((long)pqVar24 + 0xf);
          if ((long)qVar12 < 0) {
            pcVar10 = (char *)pqVar24[-1];
            qVar12 = *pqVar24;
          }
          else {
            pcVar10 = (char *)(pqVar24 + -1);
          }
          if ((param_3 == qVar12) &&
             (pcVar17 = param_2, _memcmp(param_2,pcVar10,param_3), (int)pcVar17 == 0)) {
LAB_005524a0:
            if ((uVar16 & 1) != 0) {
              pcVar18 = *(char **)pcVar18;
            }
            pcVar11 = pcVar18 + ((long)plVar22 * 5 + 3) * 8;
            if ((*pcVar11 & 1U) != 0) {
              if ((*(qword *)pcVar11 - 1 == 0) ||
                 (FUN_0055abd0(*(qword *)pcVar11 - 1), (*pcVar11 & 1U) != 0)) {
                lVar21 = *(long *)(pcVar18 + ((long)plVar22 * 5 + 4) * 8);
              }
              else {
                lVar21 = 0;
              }
              puVar1 = (uint *)(lVar21 + 8);
              do {
                uVar3 = *puVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar6) {
                  *puVar1 = uVar3 - 4;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if ((uVar3 & 0xfffffff9) == 0) {
                func_0x0055b598();
              }
            }
            qVar12 = *param_4;
            *(qword *)(pcVar18 + ((long)plVar22 * 5 + 4) * 8) = param_4[1];
            *(qword *)pcVar11 = qVar12;
            *param_4 = 0;
            param_4[1] = 0;
            return;
          }
          plVar22 = (long *)((long)plVar22 + 1);
          pqVar24 = pqVar24 + 5;
          pcVar10 = pcVar17;
        } while ((long *)unaff_x26 != plVar22);
      }
      else {
        puVar25 = *(undefined8 **)pcVar18;
        do {
          uVar13 = (ulong)*(char *)((long)puVar25 + 0x17);
          puVar7 = puVar25;
          if ((long)uVar13 < 0) {
            uVar13 = puVar25[1];
            puVar7 = (undefined8 *)*puVar25;
          }
          if ((param_3 == uVar13) &&
             (pcVar17 = param_2, _memcmp(param_2,puVar7,param_3), (int)pcVar17 == 0))
          goto LAB_005524a0;
          plVar22 = (long *)((long)plVar22 + 1);
          puVar25 = puVar25 + 5;
          pcVar10 = pcVar17;
        } while ((long *)unaff_x26 != plVar22);
      }
    }
  }
  if (0x7ffffffffffffff6 < param_3) {
    FUN_0040d740();
    func_0x0040cf10();
    func_0x0040cf10();
    FUN_00552768(&pcStack_90);
    __Unwind_Resume();
    func_0x0040cf10();
    FUN_00553a10(unaff_x26);
    __ZdlPv();
    FUN_00552720(&pcStack_90);
    __Unwind_Resume();
    FUN_00552720(&pcStack_90);
    __Unwind_Resume();
    plVar22 = *(long **)pcVar10;
    pcVar10[0] = '\0';
    pcVar10[1] = '\0';
    pcVar10[2] = '\0';
    pcVar10[3] = '\0';
    pcVar10[4] = '\0';
    pcVar10[5] = '\0';
    pcVar10[6] = '\0';
    pcVar10[7] = '\0';
    if (plVar22 != (long *)0x0) {
      if (*plVar22 != 0) {
        FUN_00553a40(plVar22);
      }
      __ZdlPv(plVar22);
    }
    return;
  }
  if (param_3 < 0x17) {
    uStack_80 = CONCAT17((char)param_3,(undefined7)uStack_80);
    if (param_3 == 0) goto LAB_00552558;
  }
  else {
    pdVar8 = &MACH_HEADER.flags;
    if ((dword *)(param_3 | 7) != (dword *)0x17) {
      pdVar8 = (dword *)(param_3 | 7);
    }
    pcVar11 = (char *)((long)pdVar8 + 1);
    __Znwm();
    uStack_80 = (ulong)((long)pdVar8 + 1) | 0x8000000000000000;
    pcStack_90 = pcVar11;
    qStack_88 = param_3;
  }
  _memmove(pcVar11,param_2,param_3);
  pcVar19 = pcVar11;
LAB_00552558:
  pcVar19[param_3] = '\0';
  qStack_70 = param_4[1];
  uStack_78 = *param_4;
  *param_4 = 0;
  param_4[1] = 0;
  pcVar11 = pcVar15 + 8;
  if ((*(ulong *)pcVar15 & 1) == 0) {
    qVar12 = 1;
  }
  else {
    pcVar11 = *(char **)(pcVar15 + 8);
    qVar12 = *(qword *)(pcVar15 + 0x10);
  }
  uVar16 = *(ulong *)pcVar15 >> 1;
  if (uVar16 == qVar12) {
    FUN_0055364c(pcVar15,&pcStack_90);
  }
  else {
    pcVar11 = pcVar11 + uVar16 * 0x28;
    *(ulong *)(pcVar11 + 0x10) = uStack_80;
    *(qword *)(pcVar11 + 8) = qStack_88;
    *(char **)pcVar11 = pcStack_90;
    qStack_88 = 0;
    uStack_80 = 0;
    pcStack_90 = (char *)0x0;
    *(qword *)(pcVar11 + 0x20) = qStack_70;
    *(ulong *)(pcVar11 + 0x18) = uStack_78;
    uStack_78 = 0;
    qStack_70 = 0;
    *(long *)pcVar15 = *(long *)pcVar15 + 2;
  }
  if ((uStack_78 & 1) != 0) {
    if (uStack_78 - 1 != 0) {
      FUN_0055abd0(uStack_78 - 1);
    }
    puVar1 = (uint *)(qStack_70 + 8);
    do {
      uVar3 = *puVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar3 - 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((uVar3 & 0xfffffff9) == 0) {
      func_0x0055b598();
    }
  }
  if ((long)uStack_80 < 0) {
    __ZdlPv(pcStack_90);
  }
  return;
}



/* Entry: 00552720; end: 00552767;  */

undefined8 * FUN_00552720(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
    if (*plVar1 != 0) {
      FUN_00553a40(plVar1);
    }
    __ZdlPv(plVar1);
  }
  return param_1;
}



/* Entry: 00552768; end: 005527ef;  */

undefined8 * FUN_00552768(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    if (param_1[3] + -1 != 0) {
      FUN_0055abd0(param_1[3] + -1);
    }
    puVar1 = (uint *)(param_1[4] + 8);
    do {
      uVar2 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar2 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar2 & 0xfffffff9) == 0) {
      func_0x0055b598();
    }
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return param_1;
  }
  __ZdlPv(*param_1);
  return param_1;
}



/* Entry: 005527f0; end: 0055293b;  */

void FUN_005527f0(ulong *param_1,undefined8 param_2,code *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  
  if (((*param_1 & 1) != 0) && (puVar7 = *(ulong **)(*param_1 + 0x1f), puVar7 != (ulong *)0x0)) {
    uVar4 = *puVar7;
    if (uVar4 < 4) {
      if (uVar4 < 2) {
        return;
      }
    }
    else if (6 < (ulong)puVar7 % 0xd) {
      lVar8 = 0;
      uVar9 = 0;
      uVar5 = uVar4 >> 1;
      do {
        puVar6 = puVar7 + 1;
        if ((uVar4 & 1) != 0) {
          puVar6 = (ulong *)puVar7[1];
        }
        lVar3 = lVar8 + uVar5 * 0x28;
        plVar1 = (long *)((long)puVar6 + lVar3 + -0x28);
        lVar2 = (long)*(char *)((long)puVar6 + lVar3 + -0x11);
        if (lVar2 < 0) {
          plVar1 = (long *)*plVar1;
          lVar2 = *(long *)((long)puVar6 + lVar3 + -0x20);
        }
        (*param_3)(param_2,plVar1,lVar2,(long)puVar6 + lVar3 + -0x10);
        uVar9 = uVar9 + 1;
        uVar4 = *puVar7;
        uVar5 = uVar4 >> 1;
        lVar8 = lVar8 + -0x28;
      } while (uVar9 < uVar5);
      return;
    }
    lVar8 = 0;
    uVar9 = 0;
    do {
      puVar6 = puVar7 + 1;
      if ((uVar4 & 1) != 0) {
        puVar6 = (ulong *)puVar7[1];
      }
      plVar1 = (long *)((long)puVar6 + lVar8);
      lVar3 = (long)*(char *)((long)plVar1 + 0x17);
      if (lVar3 < 0) {
        lVar3 = plVar1[1];
        plVar1 = (long *)*plVar1;
      }
      (*param_3)(param_2,plVar1,lVar3,(long)puVar6 + lVar8 + 0x18);
      uVar9 = uVar9 + 1;
      uVar4 = *puVar7;
      lVar8 = lVar8 + 0x28;
    } while (uVar9 < uVar4 >> 1);
  }
  return;
}



/* Entry: 0055293c; end: 005529cf;  */

void FUN_0055293c(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  long *plVar5;
  
  piVar4 = (int *)(param_1 + -1);
  if (*piVar4 != 1) {
    do {
      iVar1 = *piVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 != 0) {
      return;
    }
  }
  plVar5 = *(long **)(param_1 + 0x1f);
  *(undefined8 *)(param_1 + 0x1f) = 0;
  if (plVar5 != (long *)0x0) {
    if (*plVar5 != 0) {
      FUN_00553a40(plVar5);
    }
    __ZdlPv(plVar5);
  }
  if (*(char *)(param_1 + 0x1e) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 7));
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(piVar4);
  return;
}



/* Entry: 005529d0; end: 00552acb;  */

ulong * FUN_005529d0(ulong *param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  dword *pdVar1;
  code *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  *param_1 = -(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2;
  if (((int)param_2 != 0) && (param_4 != 0)) {
    pcVar3 = segment_command_00000020.segname;
    __Znwm();
    pcVar3[0] = '\x01';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    *(int *)(pcVar3 + 4) = (int)param_2;
    if (0x7ffffffffffffff6 < param_4) {
      FUN_0040d740();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x552ab0);
      (*pcVar2)();
    }
    if (param_4 < 0x17) {
      pcVar4 = pcVar3 + 8;
      pcVar3[0x1f] = (char)param_4;
    }
    else {
      pdVar1 = &MACH_HEADER.flags;
      if ((dword *)(param_4 | 7) != (dword *)0x17) {
        pdVar1 = (dword *)(param_4 | 7);
      }
      pcVar4 = (char *)((long)pdVar1 + 1);
      __Znwm();
      *(ulong *)(pcVar3 + 0x10) = param_4;
      *(ulong *)(pcVar3 + 0x18) = (ulong)((long)pdVar1 + 1) | 0x8000000000000000;
      *(char **)(pcVar3 + 8) = pcVar4;
    }
    _memmove(pcVar4,param_3,param_4);
    pcVar4[param_4] = '\0';
    *(qword *)(pcVar3 + 0x20) = 0;
    *param_1 = (ulong)(pcVar3 + 1);
  }
  return param_1;
}



/* Entry: 00552acc; end: 00552aff;  */

ulong * FUN_00552acc(ulong *param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  dword *pdVar1;
  code *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  *param_1 = -(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2;
  if (((int)param_2 != 0) && (param_4 != 0)) {
    pcVar3 = segment_command_00000020.segname;
    __Znwm();
    pcVar3[0] = '\x01';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    *(int *)(pcVar3 + 4) = (int)param_2;
    if (0x7ffffffffffffff6 < param_4) {
      FUN_0040d740();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x552ab0);
      (*pcVar2)();
    }
    if (param_4 < 0x17) {
      pcVar4 = pcVar3 + 8;
      pcVar3[0x1f] = (char)param_4;
    }
    else {
      pdVar1 = &MACH_HEADER.flags;
      if ((dword *)(param_4 | 7) != (dword *)0x17) {
        pdVar1 = (dword *)(param_4 | 7);
      }
      pcVar4 = (char *)((long)pdVar1 + 1);
      __Znwm();
      *(ulong *)(pcVar3 + 0x10) = param_4;
      *(ulong *)(pcVar3 + 0x18) = (ulong)((long)pdVar1 + 1) | 0x8000000000000000;
      *(char **)(pcVar3 + 8) = pcVar4;
    }
    _memmove(pcVar4,param_3,param_4);
    pcVar4[param_4] = '\0';
    *(qword *)(pcVar3 + 0x20) = 0;
    *param_1 = (ulong)(pcVar3 + 1);
  }
  return param_1;
}



/* Entry: 00552b00; end: 00552e97;  */

ulong * FUN_00552b00(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong auStack_88 [6];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar14 = *param_1;
  uVar12 = *param_2;
  if (((uVar14 & 1) == 0) != ((uVar12 & 1) == 0)) goto LAB_00552bd8;
  if ((uVar14 & 1) == 0) {
    uVar8 = -(uVar14 >> 1 & 1);
    param_1 = (ulong *)(uVar8 & 0x810ff6);
    uVar8 = uVar8 & 0x1b;
joined_r0x00552bb8:
    if ((uVar12 & 1) == 0) goto LAB_00552b6c;
LAB_00552b98:
    if (-1 < (long)*(char *)(uVar12 + 0x1e)) {
      param_2 = (ulong *)(uVar12 + 7);
      if (uVar8 != (long)*(char *)(uVar12 + 0x1e)) goto LAB_00552bd8;
      goto LAB_00552bd0;
    }
    param_2 = *(ulong **)(uVar12 + 7);
    if (uVar8 == *(ulong *)(uVar12 + 0xf)) goto LAB_00552bd0;
  }
  else {
    uVar8 = (ulong)*(char *)(uVar14 + 0x1e);
    if ((long)uVar8 < 0) {
      param_1 = *(ulong **)(uVar14 + 7);
      uVar8 = *(ulong *)(uVar14 + 0xf);
      goto joined_r0x00552bb8;
    }
    param_1 = (ulong *)(uVar14 + 7);
    if ((uVar12 & 1) != 0) goto LAB_00552b98;
LAB_00552b6c:
    uVar9 = -(uVar12 >> 1 & 1);
    param_2 = (ulong *)(uVar9 & 0x810ff6);
    if (uVar8 == (uVar9 & 0x1b)) {
LAB_00552bd0:
      _memcmp();
      iVar5 = (int)param_2;
      if ((int)param_1 == 0) {
        if ((uVar14 & 1) == 0) {
          iVar6 = (int)(uVar14 >> 2);
          if ((uVar12 & 1) != 0) goto LAB_00552c20;
LAB_00552c38:
          if (iVar6 != (int)(uVar12 >> 2)) goto LAB_00552bd8;
        }
        else {
          iVar6 = *(int *)(uVar14 + 3);
          if ((uVar12 & 1) == 0) goto LAB_00552c38;
LAB_00552c20:
          if (iVar6 != *(int *)(uVar12 + 3)) goto LAB_00552bd8;
        }
        if ((uVar14 & 1) == 0) {
          lVar7 = 0;
          if ((uVar12 & 1) != 0) goto LAB_00552c50;
LAB_00552c60:
          lVar10 = 0;
        }
        else {
          lVar7 = *(long *)(uVar14 + 0x1f);
          if ((uVar12 & 1) == 0) goto LAB_00552c60;
LAB_00552c50:
          lVar10 = *(long *)(uVar12 + 0x1f);
        }
        if (lVar7 == lVar10) {
          puVar15 = (ulong *)((long)&MACH_HEADER.magic + 1);
        }
        else {
          auStack_88[0] = 0;
          puVar15 = auStack_88;
          if (((uVar14 & 1) != 0) && (*(ulong **)(uVar14 + 0x1f) != (ulong *)0x0)) {
            puVar15 = *(ulong **)(uVar14 + 0x1f);
          }
          if (((uVar12 & 1) == 0) || (puVar11 = *(ulong **)(uVar12 + 0x1f), puVar11 == (ulong *)0x0)
             ) {
            uVar12 = 0;
            puVar11 = auStack_88;
          }
          else {
            uVar12 = *puVar11 >> 1;
          }
          uVar14 = *puVar15 >> 1;
          puVar1 = puVar15;
          puVar13 = puVar11;
          if (uVar12 <= uVar14) {
            puVar1 = puVar11;
            puVar13 = puVar15;
          }
          uVar8 = *puVar13;
          if ((uVar8 >> 1) - (*puVar1 >> 1) < 2) {
            puVar13 = puVar11 + 1;
            if (uVar12 <= uVar14) {
              puVar13 = puVar15 + 1;
            }
            if ((uVar8 & 1) != 0) {
              puVar13 = (ulong *)*puVar13;
            }
            if (1 < uVar8) {
              puVar16 = puVar13 + (uVar8 >> 1) * 5;
              puVar2 = puVar15 + 1;
              if (uVar12 <= uVar14) {
                puVar2 = puVar11 + 1;
              }
LAB_00552d28:
              uVar12 = *puVar1;
              puVar15 = puVar2;
              if ((uVar12 & 1) != 0) {
                puVar15 = (ulong *)*puVar2;
              }
              if (1 < uVar12) {
                lVar7 = (uVar12 >> 1) * 0x28;
                bVar3 = *(byte *)((long)puVar13 + 0x17);
                uVar12 = puVar13[1];
                if (-1 < (char)bVar3) {
                  do {
                    bVar4 = *(byte *)((long)puVar15 + 0x17);
                    uVar12 = puVar15[1];
                    if (-1 < (char)bVar4) {
                      uVar12 = (ulong)bVar4;
                    }
                    if (bVar3 == uVar12) {
                      param_2 = (ulong *)*puVar15;
                      if (-1 < (char)bVar4) {
                        param_2 = puVar15;
                      }
                      param_1 = puVar13;
                      _memcmp(puVar13,param_2,(ulong)bVar3);
                      if ((int)param_1 == 0) goto LAB_00552df8;
                    }
                    puVar15 = puVar15 + 5;
                    lVar7 = lVar7 + -0x28;
                    if (lVar7 == 0) goto LAB_00552cd0;
                  } while( true );
                }
                do {
                  bVar3 = *(byte *)((long)puVar15 + 0x17);
                  uVar14 = puVar15[1];
                  if (-1 < (char)bVar3) {
                    uVar14 = (ulong)bVar3;
                  }
                  if (uVar12 == uVar14) {
                    param_1 = (ulong *)*puVar13;
                    param_2 = (ulong *)*puVar15;
                    if (-1 < (char)bVar3) {
                      param_2 = puVar15;
                    }
                    _memcmp(param_1,param_2,uVar12);
                    if ((int)param_1 == 0) goto LAB_00552df8;
                  }
                  puVar15 = puVar15 + 5;
                  lVar7 = lVar7 + -0x28;
                  if (lVar7 == 0) break;
                } while( true );
              }
              goto LAB_00552cd0;
            }
            puVar15 = (ulong *)((long)&MACH_HEADER.magic + 1);
          }
          else {
LAB_00552cd0:
            iVar5 = (int)param_2;
            puVar15 = (ulong *)0x0;
          }
LAB_00552d04:
          if (auStack_88[0] != 0) {
            param_1 = auStack_88;
            FUN_00553a40();
          }
        }
        goto LAB_00552bdc;
      }
    }
  }
LAB_00552bd8:
  iVar5 = (int)param_2;
  puVar15 = (ulong *)0x0;
LAB_00552bdc:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return puVar15;
  }
  ___stack_chk_fail();
  FUN_00552e98(auStack_88);
  __Unwind_Resume();
  if (iVar5 == 0) {
    __Unwind_Resume(param_1);
  }
  func_0x0040cf10();
  if (*param_1 != 0) {
    FUN_00553a40();
  }
  return param_1;
LAB_00552df8:
  param_1 = puVar13 + 3;
  param_2 = puVar15 + 3;
  if (*param_1 != *param_2 || puVar13[4] != puVar15[4]) {
    if (((long)(char)*param_2 & 1U) == 0) {
      uVar12 = (ulong)(long)(char)*param_2 >> 1;
    }
    else {
      uVar12 = *(ulong *)puVar15[4];
    }
    if (((long)(char)*param_1 & 1U) == 0) {
      uVar14 = (ulong)(long)(char)*param_1 >> 1;
    }
    else {
      uVar14 = *(ulong *)puVar13[4];
    }
    if ((uVar14 != uVar12) || (FUN_005594bc(), ((ulong)param_1 & 1) == 0)) goto LAB_00552cd0;
  }
  iVar5 = (int)param_2;
  puVar13 = puVar13 + 5;
  puVar15 = (ulong *)((long)&MACH_HEADER.magic + 1);
  if (puVar13 == puVar16) goto LAB_00552d04;
  goto LAB_00552d28;
}



/* Entry: 00552e98; end: 00552ec7;  */

long * FUN_00552e98(long *param_1)

{
  if (*param_1 != 0) {
    FUN_00553a40();
  }
  return param_1;
}



/* Entry: 00552ec8; end: 005535ab;  */

/* WARNING: Removing unreachable block (ram,0x005532a0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00552ec8(undefined8 *param_1,ulong *param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *******pppppppuVar4;
  undefined1 *puVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *******pppppppuStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  ulong uStack_78;
  byte bStack_69;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar6 = *param_2;
  if ((uVar6 & 1) == 0) {
    uVar7 = (uint)(uVar6 >> 2);
    if (0x10 < uVar7) {
      uVar7 = 2;
    }
  }
  else {
    uVar7 = *(uint *)(uVar6 + 3);
    if (0x10 < uVar7) {
      uVar7 = 2;
    }
  }
  if (uVar7 < 0x11) {
                    /* WARNING: Could not recover jumptable at 0x00552f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_00810fe5)[uVar7] * 4 + 0x552f34))();
    return;
  }
  bStack_69 = 0;
  uStack_80 = 0;
  if ((uVar6 & 1) == 0) {
    uVar13 = -(uVar6 >> 1 & 1);
    uVar18 = uVar13 & 0x810ff6;
    uVar13 = uVar13 & 0x1b;
  }
  else {
    uVar13 = (ulong)*(char *)(uVar6 + 0x1e);
    if ((long)uVar13 < 0) {
      uVar18 = *(ulong *)(uVar6 + 7);
      uVar13 = *(ulong *)(uVar6 + 0xf);
    }
    else {
      uVar18 = uVar6 + 7;
    }
  }
  if (uVar13 == 0xfffffffffffffffe) {
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    *(undefined1 *)param_1 = 0;
    puVar9 = (undefined8 *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      puVar9 = param_1;
    }
  }
  else {
    func_0x005763ec(param_1);
    puVar9 = (undefined8 *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      puVar9 = param_1;
    }
  }
  *(undefined2 *)puVar9 = 0x203a;
  if (uVar13 != 0) {
    _memcpy((long)puVar9 + 2,uVar18,uVar13);
  }
  if ((((param_3 & 1) != 0) && ((*param_2 & 1) != 0)) &&
     (puVar16 = *(ulong **)(*param_2 + 0x1f), puVar16 != (ulong *)0x0)) {
    uVar6 = *puVar16;
    if (uVar6 < 4) {
      if (uVar6 < 2) {
        return;
      }
      bVar1 = false;
    }
    else {
      bVar1 = 6 < (ulong)puVar16 % 0xd;
    }
    uVar18 = 0;
    uVar13 = uVar6 >> 1;
    lVar17 = -1;
    do {
      uVar13 = uVar13 + lVar17;
      if (!bVar1) {
        uVar13 = uVar18;
      }
      puVar10 = puVar16 + 1;
      if ((uVar6 & 1) != 0) {
        puVar10 = (ulong *)puVar16[1];
      }
      puVar10 = puVar10 + uVar13 * 5;
      uVar6 = (ulong)*(char *)((long)puVar10 + 0x17);
      puVar12 = puVar10;
      if ((long)uVar6 < 0) {
        uVar6 = puVar10[1];
        puVar12 = (ulong *)*puVar10;
      }
      pppppppuStack_98 = (undefined8 *******)0x0;
      uStack_90 = 0;
      uStack_88 = 0;
      FUN_00559ebc(puVar10 + 3,&pppppppuStack_98);
      uVar13 = uStack_90;
      pppppppuVar4 = pppppppuStack_98;
      if (-1 < (long)uStack_88) {
        uVar13 = uStack_88 >> 0x38;
        pppppppuVar4 = &pppppppuStack_98;
      }
      FUN_00572ab4(&uStack_80,pppppppuVar4,uVar13,1,0);
      uVar13 = uStack_78;
      puVar5 = (undefined1 *)CONCAT71(uStack_7f,uStack_80);
      if (-1 < (char)bStack_69) {
        uVar13 = (ulong)bStack_69;
        puVar5 = &uStack_80;
      }
      uVar11 = (ulong)*(char *)((long)param_1 + 0x17);
      uVar8 = param_1[1];
      uVar3 = uVar8;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        uVar3 = uVar11;
      }
      uVar2 = uVar3 + uVar13 + uVar6 + 6;
      if ((long)uVar11 < 0) {
        if (uVar2 <= uVar8) {
          puVar9 = (undefined8 *)*param_1;
          param_1[1] = uVar2;
          goto LAB_00553498;
        }
LAB_00553480:
        func_0x005763ec(param_1,uVar2 - uVar8);
      }
      else {
        uVar8 = uVar11;
        if (uVar11 < uVar2) goto LAB_00553480;
        *(char *)((long)param_1 + 0x17) = (char)uVar2;
        puVar9 = param_1;
LAB_00553498:
        *(undefined1 *)((long)puVar9 + uVar2) = 0;
      }
      puVar9 = (undefined8 *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        puVar9 = param_1;
      }
      puVar14 = (undefined2 *)((long)puVar9 + uVar3) + 1;
      *(undefined2 *)((long)puVar9 + uVar3) = 0x5b20;
      if (uVar6 != 0) {
        _memcpy(puVar14,puVar12,uVar6);
        puVar14 = (undefined2 *)((long)puVar14 + uVar6);
      }
      puVar15 = puVar14 + 1;
      *puVar14 = 0x273d;
      if (uVar13 != 0) {
        _memcpy(puVar15,puVar5,uVar13);
        puVar15 = (undefined2 *)((long)puVar15 + uVar13);
      }
      *puVar15 = 0x5d27;
      if ((char)bStack_69 < '\0') {
        __ZdlPv(CONCAT71(uStack_7f,uStack_80));
      }
      if ((long)uStack_88 < 0) {
        __ZdlPv(pppppppuStack_98);
      }
      uVar18 = uVar18 + 1;
      uVar6 = *puVar16;
      uVar13 = uVar6 >> 1;
      lVar17 = lVar17 + -1;
    } while (uVar18 < uVar13);
  }
  return;
}



/* Entry: 005535ac; end: 0055364b;  */

long * FUN_005535ac(long *param_1,undefined8 param_2,ulong param_3)

{
  dword *pdVar1;
  code *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  *param_1 = 4;
  if (param_3 != 0) {
    pcVar3 = segment_command_00000020.segname;
    __Znwm();
    pcVar3[0] = '\x01';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3[4] = '\x01';
    pcVar3[5] = '\0';
    pcVar3[6] = '\0';
    pcVar3[7] = '\0';
    if (0x7ffffffffffffff6 < param_3) {
      FUN_0040d740();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x552ab0);
      (*pcVar2)();
    }
    if (param_3 < 0x17) {
      pcVar4 = pcVar3 + 8;
      pcVar3[0x1f] = (char)param_3;
    }
    else {
      pdVar1 = &MACH_HEADER.flags;
      if ((dword *)(param_3 | 7) != (dword *)0x17) {
        pdVar1 = (dword *)(param_3 | 7);
      }
      pcVar4 = (char *)((long)pdVar1 + 1);
      __Znwm();
      *(ulong *)(pcVar3 + 0x10) = param_3;
      *(ulong *)(pcVar3 + 0x18) = (ulong)((long)pdVar1 + 1) | 0x8000000000000000;
      *(char **)(pcVar3 + 8) = pcVar4;
    }
    _memmove(pcVar4,param_2,param_3);
    pcVar4[param_3] = '\0';
    *(qword *)(pcVar3 + 0x20) = 0;
    *param_1 = (long)(pcVar3 + 1);
  }
  return param_1;
}



/* Entry: 0055364c; end: 005537db;  */

void FUN_0055364c(ulong *param_1,ulong *param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  puVar9 = param_1 + 1;
  uVar11 = *param_1;
  if ((uVar11 & 1) == 0) {
    uVar8 = 2;
  }
  else {
    uVar8 = param_1[2] << 1;
    if (0x666666666666666 < uVar8) {
      FUN_0040cee8();
      func_0x0040cf10();
      do {
        if (param_2 == (ulong *)0x0) {
          return;
        }
        while( true ) {
          param_2 = (ulong *)((long)param_2 + -1);
          puVar9 = param_1 + (long)param_2 * 5;
          if ((puVar9[3] & 1) != 0) {
            if (puVar9[3] - 1 != 0) {
              FUN_0055abd0(puVar9[3] - 1);
            }
            puVar1 = (uint *)(puVar9[4] + 8);
            do {
              uVar2 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar2 - 4;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((uVar2 & 0xfffffff9) == 0) {
              func_0x0055b598();
            }
          }
          if (*(char *)((long)puVar9 + 0x17) < '\0') break;
          if (param_2 == (ulong *)0x0) {
            return;
          }
        }
        __ZdlPv(*puVar9);
      } while( true );
    }
    puVar9 = (ulong *)param_1[1];
  }
  uVar10 = uVar11 >> 1;
  puVar5 = (ulong *)(uVar8 * 0x28);
  __Znwm();
  uVar12 = *param_2;
  puVar6 = puVar5 + uVar10 * 5;
  puVar6[1] = param_2[1];
  *puVar6 = uVar12;
  puVar6[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  uVar12 = param_2[3];
  puVar6[4] = param_2[4];
  puVar6[3] = uVar12;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  puVar6 = puVar5;
  uVar12 = uVar10;
  puVar7 = puVar9;
  if (1 < uVar11) {
    do {
      uVar13 = puVar7[1];
      uVar11 = *puVar7;
      puVar6[2] = puVar7[2];
      puVar6[1] = uVar13;
      *puVar6 = uVar11;
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      uVar11 = puVar7[3];
      puVar6[4] = puVar7[4];
      puVar6[3] = uVar11;
      puVar7[3] = 0;
      puVar7[4] = 0;
      uVar12 = uVar12 - 1;
      puVar6 = puVar6 + 5;
      puVar7 = puVar7 + 5;
    } while (uVar12 != 0);
    do {
      while( true ) {
        uVar10 = uVar10 - 1;
        puVar6 = puVar9 + uVar10 * 5;
        if ((puVar6[3] & 1) != 0) {
          if (puVar6[3] - 1 != 0) {
            FUN_0055abd0(puVar6[3] - 1);
          }
          puVar1 = (uint *)(puVar6[4] + 8);
          do {
            uVar2 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar2 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar2 & 0xfffffff9) == 0) {
            func_0x0055b598();
          }
        }
        if (*(char *)((long)puVar6 + 0x17) < '\0') break;
        if (uVar10 == 0) goto LAB_005536e8;
      }
      __ZdlPv(*puVar6);
    } while (uVar10 != 0);
  }
LAB_005536e8:
  uVar11 = *param_1;
  if ((uVar11 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar11 = *param_1;
  }
  param_1[1] = (ulong)puVar5;
  param_1[2] = uVar8;
  *param_1 = (uVar11 | 1) + 2;
  return;
}



/* Entry: 005537dc; end: 0055387b;  */

void FUN_005537dc(long param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  
  do {
    if (param_2 == 0) {
      return;
    }
    while( true ) {
      param_2 = param_2 + -1;
      puVar5 = (undefined8 *)(param_1 + param_2 * 0x28);
      if ((*(byte *)(puVar5 + 3) & 1) != 0) {
        if (puVar5[3] + -1 != 0) {
          FUN_0055abd0(puVar5[3] + -1);
        }
        puVar1 = (uint *)(puVar5[4] + 8);
        do {
          uVar2 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar2 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar2 & 0xfffffff9) == 0) {
          func_0x0055b598();
        }
      }
      if (*(char *)((long)puVar5 + 0x17) < '\0') break;
      if (param_2 == 0) {
        return;
      }
    }
    __ZdlPv(*puVar5);
  } while( true );
}



/* Entry: 0055387c; end: 00553a0f;  */

void FUN_0055387c(ulong *param_1,ulong *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *unaff_x23;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  
  uVar8 = *param_2;
  uVar10 = uVar8 >> 1;
  if ((uVar8 & 1) == 0) {
    puVar5 = param_1 + 1;
    puVar11 = param_2 + 1;
  }
  else {
    if (0xccccccccccccccd < uVar8) {
      FUN_0040cee8();
      if (*(char *)((long)unaff_x23 + 0x17) < '\0') {
        __ZdlPv(*unaff_x23);
      }
      ___cxa_begin_catch(param_1);
      FUN_005537dc();
      ___cxa_rethrow();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x5539fc);
      (*pcVar4)();
    }
    uVar7 = uVar10;
    if (uVar10 < 3) {
      uVar7 = 2;
    }
    puVar5 = (ulong *)(uVar7 * 0x28);
    __Znwm();
    param_1[1] = (ulong)puVar5;
    param_1[2] = uVar7;
    puVar11 = (ulong *)param_2[1];
  }
  if (1 < uVar8) {
    uVar8 = 0;
    do {
      puVar9 = puVar5 + uVar8 * 5;
      if (*(char *)((long)puVar11 + 0x17) < '\0') {
        FUN_002971d4(puVar9,*puVar11,puVar11[1]);
      }
      else {
        uVar12 = puVar11[1];
        uVar7 = *puVar11;
        puVar9[2] = puVar11[2];
        puVar9[1] = uVar12;
        *puVar9 = uVar7;
      }
      puVar6 = puVar11 + 3;
      if (((*puVar6 & 1) == 0) || (uVar7 = puVar11[4], uVar7 == 0)) {
        uVar7 = *puVar6;
        puVar9[4] = puVar11[4];
        puVar9[3] = uVar7;
      }
      else {
        piVar1 = (int *)(uVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        puVar9[3] = 1;
        puVar9[4] = uVar7;
        if (1 < *puVar6) {
          FUN_0055ae58(puVar9 + 3,puVar6,8);
        }
      }
      puVar11 = puVar11 + 5;
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar10);
  }
  *param_1 = *param_2;
  return;
}



/* Entry: 00553a10; end: 00553a3f;  */

long * FUN_00553a10(long *param_1)

{
  if (*param_1 != 0) {
    FUN_00553a40();
  }
  return param_1;
}



/* Entry: 00553a40; end: 00553b27;  */

void FUN_00553a40(ulong *param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  
  puVar6 = param_1 + 1;
  uVar5 = *param_1;
  puVar7 = puVar6;
  if ((uVar5 & 1) != 0) {
    puVar7 = (ulong *)*puVar6;
  }
  if (1 < uVar5) {
    uVar5 = uVar5 >> 1;
    do {
      while( true ) {
        uVar5 = uVar5 - 1;
        puVar8 = puVar7 + uVar5 * 5;
        if ((puVar8[3] & 1) != 0) {
          if (puVar8[3] - 1 != 0) {
            FUN_0055abd0(puVar8[3] - 1);
          }
          puVar1 = (uint *)(puVar8[4] + 8);
          do {
            uVar2 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar2 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar2 & 0xfffffff9) == 0) {
            func_0x0055b598();
          }
        }
        if (*(char *)((long)puVar8 + 0x17) < '\0') break;
        if (uVar5 == 0) goto LAB_00553aec;
      }
      __ZdlPv(*puVar8);
    } while (uVar5 != 0);
LAB_00553aec:
    uVar5 = *param_1;
  }
  if ((uVar5 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(*puVar6);
  return;
}



/* Entry: 00553b28; end: 00553b3b;  */

void FUN_00553b28(void)

{
  FUN_00553b40();
  return;
}



/* Entry: 00553b3c; end: 00553b3f;  */

long FUN_00553b3c(long param_1,long param_2)

{
  long unaff_x20;
  long lVar1;
  
  if (param_2 != 0) {
    func_0x00553d2c();
    lVar1 = param_1 - unaff_x20;
    func_0x00553bfc();
    return lVar1 + param_1;
  }
  return 0;
}



/* Entry: 00553b40; end: 00553b7b;  */

bool FUN_00553b40(long param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00553d2c();
    func_0x00553bfc();
    return param_1 != 0;
  }
  return true;
}



/* Entry: 00553b7c; end: 00553bbf;  */

long FUN_00553b7c(long param_1,long param_2)

{
  long unaff_x20;
  long lVar1;
  
  if (param_2 != 0) {
    func_0x00553d2c();
    lVar1 = param_1 - unaff_x20;
    func_0x00553bfc();
    return lVar1 + param_1;
  }
  return 0;
}



/* Entry: 00553bc0; end: 00553d9b;  */

void FUN_00553bc0(ulong *param_1,ulong *param_2)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1;
  for (; (7 < lVar1 && ((*param_1 & 0x8080808080808080) == 0)); param_1 = param_1 + 1) {
    lVar1 = lVar1 + -8;
  }
  for (; (param_1 < param_2 && (-1 < (char)*param_1)); param_1 = (ulong *)((long)param_1 + 1)) {
  }
  return;
}



/* Entry: 00553d9c; end: 00554063;  */

void FUN_00553d9c(ulong *param_1,long *param_2,undefined8 param_3)

{
  code *pcVar1;
  code *pcVar2;
  char cVar3;
  byte bVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong uVar20;
  
  uVar16 = param_1[2];
  puVar15 = (ulong *)*param_1;
  puVar5 = (ulong *)((long)puVar15 + uVar16);
  if (uVar16 == 0) {
    uVar16 = *puVar15;
    *(undefined4 *)((long)puVar5 + 4) = *(undefined4 *)((long)puVar15 + 3);
    *(int *)((long)puVar5 + 1) = (int)uVar16;
    *(undefined1 *)puVar5 = 0xff;
    goto LAB_00554024;
  }
  uVar17 = param_1[1];
  puVar11 = (ulong *)(uVar16 + (long)puVar15);
  if ((ulong *)(uVar16 + (long)puVar15) <= puVar15 + 1) {
    puVar11 = puVar15 + 1;
  }
  puVar7 = puVar15;
  if ((undefined1 *)((long)puVar11 + ~(ulong)puVar15) < &MACH_HEADER.flags) {
LAB_00553e60:
    do {
      puVar11 = puVar7 + 1;
      *puVar7 = (*puVar7 >> 6 & 0x202020202020202) + 0x7e7e7e7e7e7e7e7e | 0x8080808080808080;
      puVar7 = puVar11;
    } while (puVar11 < puVar5);
  }
  else {
    uVar18 = ((long)puVar11 + ~(ulong)puVar15 >> 3) + 1;
    uVar10 = uVar18 & 0x3ffffffffffffffc;
    puVar7 = puVar15 + uVar10;
    puVar11 = puVar15 + 2;
    uVar13 = uVar10;
    do {
      uVar8 = puVar11[-1];
      uVar6 = puVar11[-2];
      uVar20 = puVar11[1];
      uVar9 = *puVar11;
      puVar11[-1] = (CONCAT17((byte)(uVar8 >> 0x3e),
                              CONCAT16((char)(ushort)(uVar8 >> 0x36),
                                       CONCAT15((char)(uint3)(uVar8 >> 0x2e),
                                                CONCAT14((char)(uint)(uVar8 >> 0x26),
                                                         CONCAT13((char)(uint5)(uVar8 >> 0x1e),
                                                                  CONCAT12((char)(uint6)(uVar8 >> 
                                                  0x16),CONCAT11((char)(uint7)(uVar8 >> 0xe),
                                                                 (char)(uVar8 >> 6)))))))) &
                    0x202020202020202) + 0x7e7e7e7e7e7e7e7e | 0x8080808080808080;
      puVar11[-2] = (CONCAT17((byte)(uVar6 >> 0x3e),
                              CONCAT16((char)(ushort)(uVar6 >> 0x36),
                                       CONCAT15((char)(uint3)(uVar6 >> 0x2e),
                                                CONCAT14((char)(uint)(uVar6 >> 0x26),
                                                         CONCAT13((char)(uint5)(uVar6 >> 0x1e),
                                                                  CONCAT12((char)(uint6)(uVar6 >> 
                                                  0x16),CONCAT11((char)(uint7)(uVar6 >> 0xe),
                                                                 (char)(uVar6 >> 6)))))))) &
                    0x202020202020202) + 0x7e7e7e7e7e7e7e7e | 0x8080808080808080;
      puVar11[1] = (CONCAT17((byte)(uVar20 >> 0x3e),
                             CONCAT16((char)(ushort)(uVar20 >> 0x36),
                                      CONCAT15((char)(uint3)(uVar20 >> 0x2e),
                                               CONCAT14((char)(uint)(uVar20 >> 0x26),
                                                        CONCAT13((char)(uint5)(uVar20 >> 0x1e),
                                                                 CONCAT12((char)(uint6)(uVar20 >>
                                                                                       0x16),
                                                                          CONCAT11((char)(uint7)(
                                                  uVar20 >> 0xe),(char)(uVar20 >> 6)))))))) &
                   0x202020202020202) + 0x7e7e7e7e7e7e7e7e | 0x8080808080808080;
      *puVar11 = (CONCAT17((byte)(uVar9 >> 0x3e),
                           CONCAT16((char)(ushort)(uVar9 >> 0x36),
                                    CONCAT15((char)(uint3)(uVar9 >> 0x2e),
                                             CONCAT14((char)(uint)(uVar9 >> 0x26),
                                                      CONCAT13((char)(uint5)(uVar9 >> 0x1e),
                                                               CONCAT12((char)(uint6)(uVar9 >> 0x16)
                                                                        ,CONCAT11((char)(uint7)(
                                                  uVar9 >> 0xe),(char)(uVar9 >> 6)))))))) &
                 0x202020202020202) + 0x7e7e7e7e7e7e7e7e | 0x8080808080808080;
      puVar11 = puVar11 + 4;
      uVar13 = uVar13 - 4;
    } while (uVar13 != 0);
    if (uVar18 != uVar10) goto LAB_00553e60;
  }
  uVar18 = 0;
  uVar13 = *puVar15;
  *(undefined4 *)((long)puVar5 + 4) = *(undefined4 *)((long)puVar15 + 3);
  *(int *)((long)puVar5 + 1) = (int)uVar13;
  *(undefined1 *)puVar5 = 0xff;
  pcVar1 = (code *)param_2[1];
  pcVar2 = (code *)param_2[2];
  lVar14 = *param_2;
  uVar13 = uVar17;
  do {
    if (*(char *)((long)puVar15 + uVar18) == -2) {
      puVar5 = param_1;
      (*pcVar1)(param_1,uVar13);
      uVar6 = *param_1;
      uVar8 = param_1[2];
      uVar9 = (uVar6 >> 0xc ^ (ulong)puVar5 >> 7) & uVar8;
      uVar19 = *(undefined8 *)(uVar6 + uVar9);
      uVar20 = CONCAT17(-((char)((ulong)uVar19 >> 0x38) < -1),
                        CONCAT16(-((char)((ulong)uVar19 >> 0x30) < -1),
                                 CONCAT15(-((char)((ulong)uVar19 >> 0x28) < -1),
                                          CONCAT14(-((char)((ulong)uVar19 >> 0x20) < -1),
                                                   CONCAT13(-((char)((ulong)uVar19 >> 0x18) < -1),
                                                            CONCAT12(-((char)((ulong)uVar19 >> 0x10)
                                                                      < -1),CONCAT11(-((char)((ulong
                                                  )uVar19 >> 8) < -1),-((char)uVar19 < -1))))))));
      uVar10 = uVar9;
      if (uVar20 == 0) {
        lVar12 = 8;
        do {
          uVar10 = uVar10 + lVar12 & uVar8;
          uVar19 = *(undefined8 *)(uVar6 + uVar10);
          uVar20 = CONCAT17(-((char)((ulong)uVar19 >> 0x38) < -1),
                            CONCAT16(-((char)((ulong)uVar19 >> 0x30) < -1),
                                     CONCAT15(-((char)((ulong)uVar19 >> 0x28) < -1),
                                              CONCAT14(-((char)((ulong)uVar19 >> 0x20) < -1),
                                                       CONCAT13(-((char)((ulong)uVar19 >> 0x18) < -1
                                                                 ),CONCAT12(-((char)((ulong)uVar19
                                                                                    >> 0x10) < -1),
                                                                            CONCAT11(-((char)((ulong
                                                  )uVar19 >> 8) < -1),-((char)uVar19 < -1))))))));
          lVar12 = lVar12 + 8;
        } while (uVar20 == 0);
      }
      uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
      uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
      uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3) & uVar8;
      if (((uVar10 - uVar9 ^ uVar18 - uVar9) & uVar16) < 8) {
        bVar4 = (byte)puVar5 & 0x7f;
        *(byte *)(uVar6 + uVar18) = bVar4;
        *(byte *)(uVar6 + (uVar8 & uVar18 - 7) + (uVar8 & 7)) = bVar4;
      }
      else {
        lVar12 = uVar17 + uVar10 * lVar14;
        cVar3 = *(char *)((long)puVar15 + uVar10);
        bVar4 = (byte)puVar5 & 0x7f;
        *(byte *)(uVar6 + uVar10) = bVar4;
        *(byte *)(uVar6 + (uVar10 - 7 & uVar8) + (uVar8 & 7)) = bVar4;
        if (cVar3 == -0x80) {
          (*pcVar2)(param_1,lVar12,uVar13);
          uVar10 = param_1[2];
          uVar6 = *param_1;
          *(undefined1 *)(uVar6 + uVar18) = 0x80;
          *(undefined1 *)(uVar6 + (uVar10 & uVar18 - 7) + (uVar10 & 7)) = 0x80;
        }
        else {
          (*pcVar2)(param_1,param_3,lVar12);
          (*pcVar2)(param_1,lVar12,uVar13);
          (*pcVar2)(param_1,uVar13,param_3);
          uVar18 = uVar18 - 1;
          uVar13 = uVar13 - lVar14;
        }
      }
    }
    uVar18 = uVar18 + 1;
    uVar13 = lVar14 + uVar13;
  } while (uVar18 != uVar16);
LAB_00554024:
  uVar16 = param_1[2];
  lVar14 = 6;
  if (uVar16 != 7) {
    lVar14 = uVar16 - (uVar16 >> 3);
  }
  *(ulong *)(*param_1 - 8) = lVar14 - param_1[3];
  return;
}



/* Entry: 00554064; end: 00554103;  */

void FUN_00554064(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar1 = param_1[2];
  param_1[3] = param_1[3] + -1;
  lVar3 = *param_1;
  uVar6 = *param_2;
  uVar4 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  uVar6 = *(undefined8 *)(lVar3 + ((ulong)((long)param_2 + (-8 - lVar3)) & uVar1));
  lVar7 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  if (lVar7 == 0 || uVar4 == 0) {
    uVar4 = 0;
    uVar5 = 0xfe;
  }
  else {
    uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    bVar2 = ((ulong)LZCOUNT(lVar7) >> 3) + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) < 8;
    uVar4 = (ulong)bVar2;
    uVar5 = 0x80;
    if (!bVar2) {
      uVar5 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar5;
  *(undefined1 *)(lVar3 + ((ulong)((long)param_2 + (-7 - lVar3)) & uVar1) + (uVar1 & 7)) = uVar5;
  *(ulong *)(lVar3 + -8) = *(long *)(lVar3 + -8) + uVar4;
  return;
}



/* Entry: 00554104; end: 0055419b;  */

void FUN_00554104(long *param_1,long param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  param_1[3] = 0;
  if (param_3 != 0) {
    lVar3 = param_1[2];
    lVar2 = *param_1;
    _memset(lVar2,0x80,lVar3 + 8);
    *(undefined1 *)(lVar2 + lVar3) = 0xff;
    uVar1 = param_1[2];
    lVar2 = 6;
    if (uVar1 != 7) {
      lVar2 = uVar1 - (uVar1 >> 3);
    }
    *(long *)(*param_1 + -8) = lVar2 - param_1[3];
    return;
  }
  (**(code **)(param_2 + 0x18))(param_1);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (long)&UNK_00811030;
  return;
}



/* Entry: 0055419c; end: 005542d3;  */

undefined *** FUN_0055419c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined ***pppuVar2;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined1 auStack_128 [56];
  undefined8 uStack_f0;
  char cStack_d9;
  undefined **appuStack_c8 [19];
  
  FUN_004799f4(&ppuStack_138);
  uVar1 = param_3;
  _strlen(param_3);
  FUN_00462690(&ppuStack_138,param_3,uVar1);
  FUN_00462690();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb(&ppuStack_138,param_1);
  FUN_00462690(&ppuStack_138," vs. ",5);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb(&ppuStack_138,param_2);
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



/* Entry: 005542d4; end: 00554337;  */

undefined8 FUN_005542d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_004799f4();
  uVar1 = param_2;
  _strlen(param_2);
  FUN_00462690(param_1,param_2,uVar1);
  FUN_00462690();
  return param_1;
}



/* Entry: 00554338; end: 00554367;  */

undefined8 FUN_00554338(undefined8 param_1)

{
  FUN_00462690(param_1," vs. ",5);
  return param_1;
}



/* Entry: 00554368; end: 00554493;  */

dword * FUN_00554368(long param_1)

{
  dword *pdVar1;
  code *pcVar2;
  dword *pdVar3;
  dword *pdVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  FUN_00462690(param_1,")",1);
  pdVar3 = &MACH_HEADER.flags;
  __Znwm();
  pdVar4 = pdVar3;
  if ((*(uint *)(param_1 + 0x68) >> 4 & 1) == 0) {
    if ((*(uint *)(param_1 + 0x68) >> 3 & 1) == 0) {
      uVar6 = 0;
      *(undefined1 *)((long)pdVar3 + 0x17) = 0;
      goto LAB_0055443c;
    }
    lVar7 = *(long *)(param_1 + 0x18);
    uVar6 = *(long *)(param_1 + 0x28) - lVar7;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x38);
    uVar6 = *(ulong *)(param_1 + 0x60);
    if (*(ulong *)(param_1 + 0x60) < uVar5) {
      *(ulong *)(param_1 + 0x60) = uVar5;
      uVar6 = uVar5;
    }
    lVar7 = *(long *)(param_1 + 0x30);
    uVar6 = uVar6 - lVar7;
  }
  if (0x7ffffffffffffff6 < uVar6) {
    FUN_0040d740();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x554480);
    (*pcVar2)();
  }
  if (uVar6 < 0x17) {
    *(char *)((long)pdVar3 + 0x17) = (char)uVar6;
    if (uVar6 == 0) goto LAB_0055443c;
  }
  else {
    pdVar1 = &MACH_HEADER.flags;
    if ((dword *)(uVar6 | 7) != (dword *)0x17) {
      pdVar1 = (dword *)(uVar6 | 7);
    }
    pdVar4 = (dword *)((long)pdVar1 + 1);
    __Znwm();
    *(ulong *)(pdVar3 + 2) = uVar6;
    *(ulong *)(pdVar3 + 4) = (ulong)((long)pdVar1 + 1) | 0x8000000000000000;
    *(dword **)pdVar3 = pdVar4;
  }
  _memmove(pdVar4,lVar7,uVar6);
LAB_0055443c:
  *(undefined1 *)((long)pdVar4 + uVar6) = 0;
  return pdVar3;
}



/* Entry: 00554494; end: 0055451f;  */

undefined8 * FUN_00554494(undefined8 *param_1)

{
  param_1[0xe] = &PTR_FUN_009e7e18;
  *param_1 = &PTR_FUN_009e7df0;
  param_1[1] = &PTR_FUN_009e5de0;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  param_1[1] = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_00998de8 + 0x10;
  __ZNSt3__16localeD1Ev(param_1 + 2);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(param_1,&PTR_PTR_009e7e30);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(param_1 + 0xe);
  return param_1;
}



/* Entry: 00554520; end: 00554657;  */

undefined *** FUN_00554520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined ***pppuVar2;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined1 auStack_128 [56];
  undefined8 uStack_f0;
  char cStack_d9;
  undefined **appuStack_c8 [19];
  
  FUN_004799f4(&ppuStack_138);
  uVar1 = param_3;
  _strlen(param_3);
  FUN_00462690(&ppuStack_138,param_3,uVar1);
  FUN_00462690();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEx(&ppuStack_138,param_1);
  FUN_00462690(&ppuStack_138," vs. ",5);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEx(&ppuStack_138,param_2);
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



/* Entry: 00554658; end: 0055478f;  */

undefined *** FUN_00554658(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined ***pppuVar2;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined1 auStack_128 [56];
  undefined8 uStack_f0;
  char cStack_d9;
  undefined **appuStack_c8 [19];
  
  FUN_004799f4(&ppuStack_138);
  uVar1 = param_3;
  _strlen(param_3);
  FUN_00462690(&ppuStack_138,param_3,uVar1);
  FUN_00462690();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEy(&ppuStack_138,param_1);
  FUN_00462690(&ppuStack_138," vs. ",5);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEy(&ppuStack_138,param_2);
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



/* Entry: 00554790; end: 00554813;  */

void FUN_00554790(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_21;
  
  if ((int)param_2 - 0x20U < 0x5f) {
    FUN_00462690(param_1,"\'",1);
    uStack_21 = (undefined1)param_2;
    FUN_00462690(param_1,&uStack_21,1);
    FUN_00462690(param_1,"\'",1);
    return;
  }
  FUN_00462690(param_1,"unsigned char value ",0x14);
                    /* WARNING: Could not recover jumptable at 0x00779cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi_00998aa8)(param_1,param_2);
  return;
}



/* Entry: 00554814; end: 00554983;  */

undefined *** FUN_00554814(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined ***pppuVar2;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined1 auStack_128 [56];
  undefined8 uStack_f0;
  char cStack_d9;
  undefined **appuStack_c8 [19];
  
  FUN_004799f4(&ppuStack_138);
  uVar1 = param_3;
  _strlen(param_3);
  FUN_00462690(&ppuStack_138,param_3,uVar1);
  FUN_00462690();
  if (param_1 == 0) {
    FUN_00462690(&ppuStack_138,"(null)",6);
  }
  else {
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv(&ppuStack_138,param_1);
  }
  FUN_00462690(&ppuStack_138," vs. ",5);
  if (param_2 == 0) {
    FUN_00462690(&ppuStack_138,"(null)",6);
  }
  else {
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv(&ppuStack_138,param_2);
  }
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


