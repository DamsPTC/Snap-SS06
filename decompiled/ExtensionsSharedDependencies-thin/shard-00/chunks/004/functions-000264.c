/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0052f8b8; end: 0052f8eb;  */

void FUN_0052f8b8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x60;
  __Znwm();
  FUN_00528f74();
  *param_1 = uVar1;
  return;
}



/* Entry: 0052f8ec; end: 0052f967;  */

undefined4 FUN_0052f8ec(int param_1)

{
  if (param_1 - 2U < 7) {
    return *(undefined4 *)(&UNK_00810a30 + (ulong)(param_1 - 2U) * 4);
  }
  return 10000;
}



/* Entry: 0052f968; end: 0052f99b;  */

long * FUN_0052f968(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_005313e4();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 0052f99c; end: 0052f9ef;  */

void FUN_0052f99c(void)

{
  return;
}



/* Entry: 0052f9f0; end: 0052fbd3;  */

byte * FUN_0052f9f0(byte *param_1,uint param_2,int param_3,byte param_4)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  byte bVar7;
  byte *pbVar8;
  ulong uVar9;
  byte bVar10;
  uint unaff_w21;
  ulong uVar11;
  
  uVar11 = *(ulong *)(param_1 + 8);
  pbVar8 = *(byte **)param_1;
  if (-1 < (char)param_1[0x17]) {
    uVar11 = (ulong)param_1[0x17];
    pbVar8 = param_1;
  }
  pbVar3 = param_1;
  if (param_3 == 0) {
    for (; uVar11 != 0; uVar11 = uVar11 - 1) {
      FUN_0052fcdc();
      bVar10 = param_4;
      if (unaff_w21 == 0x5f || (int)pbVar3 != 0) {
        pbVar3 = (byte *)(ulong)*pbVar8;
        FUN_0052fbd4();
        if ((int)pbVar3 == 0) {
          pbVar3 = (byte *)(long)(char)*pbVar8;
          ___tolower();
          bVar10 = (byte)pbVar3;
          goto LAB_0052fab4;
        }
      }
      else {
LAB_0052fab4:
        *pbVar8 = bVar10;
      }
      pbVar8 = pbVar8 + 1;
    }
  }
  else {
    for (; uVar11 != 0; uVar11 = uVar11 - 1) {
      FUN_0052fcdc();
      if ((((int)pbVar3 == 0) && ((unaff_w21 & 0xff) != 0x5f)) &&
         (bVar10 = param_4, (unaff_w21 & 0xff) != 0x2e)) {
LAB_0052fa74:
        *pbVar8 = bVar10;
      }
      else {
        pbVar3 = (byte *)(ulong)*pbVar8;
        FUN_0052fbd4();
        if ((int)pbVar3 == 0) {
          pbVar3 = (byte *)(long)(char)*pbVar8;
          ___tolower();
          bVar10 = (byte)pbVar3;
          goto LAB_0052fa74;
        }
      }
      pbVar8 = pbVar8 + 1;
    }
  }
  bVar10 = param_1[0x17];
  uVar6 = (ulong)bVar10;
  pbVar3 = *(byte **)param_1;
  uVar9 = *(ulong *)(param_1 + 8);
  uVar11 = uVar9;
  pbVar8 = pbVar3;
  if (-1 < (char)bVar10) {
    uVar11 = uVar6;
    pbVar8 = param_1;
  }
  pbVar5 = pbVar8 + uVar11;
  bVar7 = param_4;
  for (; uVar11 != 0; uVar11 = uVar11 - 1) {
    bVar1 = *pbVar8;
    pbVar4 = pbVar8;
    if (bVar1 == param_4 && bVar7 == bVar1) goto LAB_0052fb18;
    pbVar8 = pbVar8 + 1;
    bVar7 = bVar1;
  }
LAB_0052fb4c:
  if (-1 < (char)bVar10) {
    uVar9 = uVar6;
    pbVar3 = param_1;
  }
  pbVar8 = param_1;
  FUN_0052fbdc(param_1,pbVar5,pbVar3 + uVar9);
  bVar10 = param_1[0x17];
  if ((char)bVar10 < 0) {
    uVar11 = *(ulong *)(param_1 + 8);
    if (uVar11 <= param_2) {
      return pbVar8;
    }
    pbVar8 = *(byte **)param_1;
  }
  else {
    if ((uint)(int)(char)bVar10 <= param_2) {
      return pbVar8;
    }
    uVar11 = (ulong)(int)(char)bVar10;
    pbVar8 = param_1;
  }
  pbVar3 = pbVar8 + param_2;
  pbVar5 = param_1;
  if ((char)param_1[0x17] < '\0') {
    pbVar5 = *(byte **)param_1;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
            (param_1,(long)pbVar3 - (long)pbVar5,pbVar8 + (uVar11 - (long)pbVar3));
  return pbVar3;
LAB_0052fb18:
  while (pbVar8 = pbVar8 + 1, pbVar8 != pbVar5) {
    bVar10 = *pbVar8;
    bVar2 = bVar7 != param_4;
    bVar7 = bVar10;
    if (bVar2 || bVar10 != param_4) {
      *pbVar4 = bVar10;
      pbVar4 = pbVar4 + 1;
    }
  }
  bVar10 = param_1[0x17];
  uVar6 = (ulong)bVar10;
  pbVar3 = *(byte **)param_1;
  uVar9 = *(ulong *)(param_1 + 8);
  pbVar5 = pbVar4;
  goto LAB_0052fb4c;
}



/* Entry: 0052fbd4; end: 0052fbdb;  */

bool FUN_0052fbd4(uint param_1)

{
  if (0x7f < param_1) {
    ___maskrune();
    return param_1 != 0;
  }
  return (*(uint *)(PTR___DefaultRuneLocale_00999f28 + (ulong)param_1 * 4 + 0x3c) & 0x1000) != 0;
}



/* Entry: 0052fbdc; end: 0052fc17;  */

long FUN_0052fbdc(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    puVar1 = (undefined8 *)*param_1;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
            (param_1,param_2 - (long)puVar1,param_3 - param_2);
  return param_2;
}



/* Entry: 0052fc18; end: 0052fc1f;  */

bool FUN_0052fc18(uint param_1)

{
  if (0x7f < param_1) {
    ___maskrune();
    return param_1 != 0;
  }
  return (*(uint *)(PTR___DefaultRuneLocale_00999f28 + (ulong)param_1 * 4 + 0x3c) & 0x500) != 0;
}



/* Entry: 0052fc20; end: 0052fc5f;  */

bool FUN_0052fc20(uint param_1,uint param_2)

{
  if (0x7f < param_1) {
    ___maskrune();
    return param_1 != 0;
  }
  return (param_2 & *(uint *)(PTR___DefaultRuneLocale_00999f28 + (ulong)param_1 * 4 + 0x3c)) != 0;
}



/* Entry: 0052fc60; end: 0052fcdb;  */

void FUN_0052fc60(undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  if (param_3 != 0) {
    uVar2 = (ulong)*(char *)((long)param_1 + 0x17);
    puVar5 = param_1;
    uVar6 = uVar2;
    if ((long)uVar2 < 0) {
      puVar5 = (undefined8 *)*param_1;
      uVar6 = param_1[1];
    }
    uVar3 = uVar6 - param_2;
    uVar1 = uVar3;
    if (param_3 <= uVar3) {
      uVar1 = param_3;
    }
    if (param_3 < uVar3) {
      _memmove((long)puVar5 + param_2,(long)puVar5 + param_2 + uVar1,uVar3 - uVar1);
      uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
    }
    lVar4 = uVar6 - uVar1;
    if (((uint)uVar2 >> 7 & 1) == 0) {
      *(byte *)((long)param_1 + 0x17) = (byte)lVar4 & 0x7f;
    }
    else {
      param_1[1] = lVar4;
    }
    *(undefined1 *)((long)puVar5 + lVar4) = 0;
  }
  return;
}



/* Entry: 0052fcdc; end: 0052fce7;  */

bool FUN_0052fcdc(void)

{
  byte bVar1;
  int iVar2;
  byte *unaff_x24;
  
  bVar1 = *unaff_x24;
  iVar2 = (int)(char)bVar1;
  if (0x7f < bVar1) {
    ___maskrune();
    return iVar2 != 0;
  }
  return (*(uint *)(PTR___DefaultRuneLocale_00999f28 + ((long)(char)bVar1 & 0xffffffffU) * 4 + 0x3c)
         & 0x500) != 0;
}



/* Entry: 0052fce8; end: 0052fd1b;  */

void FUN_0052fce8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 0052fd1c; end: 0052fd23;  */

void FUN_0052fd1c(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  
  uVar1 = param_3 - param_2;
  if (uVar1 < 0x7ffffffffffffff7) {
    uVar2 = uVar1;
    func_0x0052fe38();
    if (uVar2 < 0x17) {
      *(char *)(unaff_x19 + 0x17) = (char)uVar1;
    }
    else {
      func_0x0052fe68(uVar1 | 7);
      FUN_0040d754();
      func_0x0052fe54();
    }
    if (param_3 - unaff_x20 != 0) {
      func_0x0052fe44();
    }
    *(undefined1 *)(unaff_x19 + (param_3 - unaff_x20)) = 0;
  }
  else {
    FUN_0040d740();
    func_0x0052fe24();
    uVar1 = param_3 - param_2;
    if (uVar1 < 0x7ffffffffffffff7) {
      uVar2 = uVar1;
      func_0x0052fe38();
      if (uVar2 < 0x17) {
        *(char *)(unaff_x19 + 0x17) = (char)uVar1;
      }
      else {
        func_0x0052fe68(uVar1 | 7);
        FUN_0040d754();
        func_0x0052fe54();
      }
      if (param_3 - unaff_x20 != 0) {
        func_0x0052fe44();
      }
      *(undefined1 *)(unaff_x19 + (param_3 - unaff_x20)) = 0;
    }
    else {
      FUN_0040d740();
    }
  }
  return;
}



/* Entry: 0052fd24; end: 0052fd93;  */

void FUN_0052fd24(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  
  if (param_4 < 0x7ffffffffffffff7) {
    uVar1 = param_4;
    func_0x0052fe38();
    if (uVar1 < 0x17) {
      *(char *)(unaff_x19 + 0x17) = (char)param_4;
    }
    else {
      func_0x0052fe68(param_4 | 7);
      FUN_0040d754();
      func_0x0052fe54();
    }
    if (param_3 - unaff_x20 != 0) {
      func_0x0052fe44();
    }
    *(undefined1 *)(unaff_x19 + (param_3 - unaff_x20)) = 0;
  }
  else {
    FUN_0040d740();
    func_0x0052fe24();
    uVar1 = param_3 - param_2;
    if (uVar1 < 0x7ffffffffffffff7) {
      uVar2 = uVar1;
      func_0x0052fe38();
      if (uVar2 < 0x17) {
        *(char *)(unaff_x19 + 0x17) = (char)uVar1;
      }
      else {
        func_0x0052fe68(uVar1 | 7);
        FUN_0040d754();
        func_0x0052fe54();
      }
      if (param_3 - unaff_x20 != 0) {
        func_0x0052fe44();
      }
      *(undefined1 *)(unaff_x19 + (param_3 - unaff_x20)) = 0;
    }
    else {
      FUN_0040d740();
    }
  }
  return;
}



/* Entry: 0052fd94; end: 0052fd9f;  */

void FUN_0052fd94(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0052fe24();
  uVar1 = param_3 - param_2;
  if (uVar1 < 0x7ffffffffffffff7) {
    uVar2 = uVar1;
    func_0x0052fe38();
    if (uVar2 < 0x17) {
      *(char *)(unaff_x19 + 0x17) = (char)uVar1;
    }
    else {
      func_0x0052fe68(uVar1 | 7);
      FUN_0040d754();
      func_0x0052fe54();
    }
    if (param_3 - unaff_x20 != 0) {
      func_0x0052fe44();
    }
    *(undefined1 *)(unaff_x19 + (param_3 - unaff_x20)) = 0;
  }
  else {
    FUN_0040d740();
  }
  return;
}



/* Entry: 0052fda0; end: 0052fda7;  */

void FUN_0052fda0(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  
  uVar1 = param_3 - param_2;
  if (uVar1 < 0x7ffffffffffffff7) {
    uVar2 = uVar1;
    func_0x0052fe38();
    if (uVar2 < 0x17) {
      *(char *)(unaff_x19 + 0x17) = (char)uVar1;
    }
    else {
      func_0x0052fe68(uVar1 | 7);
      FUN_0040d754();
      func_0x0052fe54();
    }
    if (param_3 - unaff_x20 != 0) {
      func_0x0052fe44();
    }
    *(undefined1 *)(unaff_x19 + (param_3 - unaff_x20)) = 0;
  }
  else {
    FUN_0040d740();
  }
  return;
}



/* Entry: 0052fda8; end: 0052fe17;  */

void FUN_0052fda8(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (param_4 < 0x7ffffffffffffff7) {
    uVar1 = param_4;
    func_0x0052fe38();
    if (uVar1 < 0x17) {
      *(char *)(unaff_x19 + 0x17) = (char)param_4;
    }
    else {
      func_0x0052fe68(param_4 | 7);
      FUN_0040d754();
      func_0x0052fe54();
    }
    if (param_3 - unaff_x20 != 0) {
      func_0x0052fe44();
    }
    *(undefined1 *)(unaff_x19 + (param_3 - unaff_x20)) = 0;
  }
  else {
    FUN_0040d740();
  }
  return;
}



/* Entry: 0052fe18; end: 0052febf;  */

void FUN_0052fe18(void)

{
  return;
}



/* Entry: 0052fec0; end: 0052fee3;  */

undefined8 FUN_0052fec0(undefined8 param_1)

{
  func_0x00531358();
  return param_1;
}



/* Entry: 0052fee4; end: 0052fee7;  */

undefined8 FUN_0052fee4(undefined8 param_1)

{
  func_0x00531358();
  return param_1;
}



/* Entry: 0052fee8; end: 0052fefb;  */

void FUN_0052fee8(void)

{
  FUN_0052fec0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0052fefc; end: 0052ff1b;  */

undefined ** FUN_0052fefc(void)

{
  return &PTR_DAT_00a00b38;
}



/* Entry: 0052ff1c; end: 0052ffbb;  */

long * FUN_0052ff1c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  int iVar3;
  long *plVar4;
  int iVar5;
  
  plVar1 = param_1;
  plVar4 = param_3;
  if ((int)param_1[2] != 0) {
    func_0x005313b8();
    func_0x004971e4();
    param_2 = plVar1;
  }
  if (*(int *)((long)param_1 + 0x14) != 0) {
    func_0x005313b8();
    FUN_0048c628();
    param_2 = plVar1;
  }
  if ((int)param_1[3] != 0) {
    func_0x005313b8();
    func_0x0048c654();
    param_2 = plVar1;
  }
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    func_0x005313b8();
    FUN_004d92e0();
    param_2 = plVar1;
  }
  if ((param_1[1] & 1U) != 0) {
    func_0x005313d8();
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
  return param_2;
}



/* Entry: 0052ffbc; end: 00530063;  */

ulong FUN_0052ffbc(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x20) = (int)uVar1;
  return uVar1;
}



/* Entry: 00530064; end: 0053008f;  */

undefined8 FUN_00530064(undefined8 param_1)

{
  func_0x00531358();
  FUN_00530090(param_1);
  return param_1;
}



/* Entry: 00530090; end: 005300c7;  */

void FUN_00530090(long param_1)

{
  func_0x00532f74(param_1 + 0x18);
  func_0x00532f74(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_0052fec0();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005300c8; end: 005300cb;  */

undefined8 FUN_005300c8(undefined8 param_1)

{
  func_0x00531358();
  FUN_00530090(param_1);
  return param_1;
}



/* Entry: 005300cc; end: 005300df;  */

void FUN_005300cc(void)

{
  FUN_00530064();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005300e0; end: 005300eb;  */

undefined ** FUN_005300e0(void)

{
  return &PTR_DAT_00a00b78;
}



/* Entry: 005300ec; end: 0053013b;  */

void FUN_005300ec(long param_1)

{
  ulong *puVar1;
  
  FUN_00532fa8(param_1 + 0x18);
  FUN_00532fa8(param_1 + 0x20);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x0052ff08(*(undefined8 *)(param_1 + 0x28));
  }
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 0053013c; end: 00530237;  */

long * FUN_0053013c(long param_1,long param_2,long *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar4;
  long unaff_x22;
  int iVar5;
  
  plVar3 = param_3;
  func_0x005313ac();
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x28);
    plVar3 = (long *)(ulong)*(uint *)(param_2 + 0x20);
    unaff_x20 = (long *)((long)&MACH_HEADER.magic + 1);
    func_0x0054dae0();
  }
  func_0x00531360(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_0053019c;
  }
  else if ((int)param_2 != 0) {
LAB_0053019c:
    func_0x005312d4();
    param_2 = 2;
    unaff_x20 = param_3;
    func_0x00531284();
  }
  func_0x00531360(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_005301f8;
  }
  else if ((int)param_2 == 0) goto LAB_005301f8;
  func_0x005312d4();
  unaff_x20 = param_3;
  func_0x00531284(param_3,3);
LAB_005301f8:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x005313d8();
  if ((long)plVar3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar3 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)unaff_x20 < (long)(int)plVar3) {
    while( true ) {
      iVar5 = ((int)*param_3 - (int)unaff_x20) + 0x10;
      iVar4 = (int)plVar3;
      plVar3 = (long *)(ulong)(uint)(iVar4 - iVar5);
      if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
      func_0x0054f690();
      puVar1 = (undefined1 *)((long)unaff_x20 + (long)iVar5);
      unaff_x20 = param_3;
      func_0x0054ed58(param_3,puVar1);
    }
    func_0x0054f690();
    return (long *)((long)unaff_x20 + (long)iVar4);
  }
  _memcpy(unaff_x20,lVar2,(ulong)plVar3 & 0xffffffff);
  return (long *)((long)unaff_x20 + (long)(int)plVar3);
}



/* Entry: 00530238; end: 005302db;  */

long FUN_00530238(long param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  ulong uVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00531300(*(undefined8 *)(param_1 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar1 + 8);
  }
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    FUN_0048910c();
    lVar4 = lVar1 + 1;
  }
  func_0x00531300(*(undefined8 *)(param_1 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    FUN_0048910c();
    func_0x005312f4();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    FUN_0052ffbc();
    func_0x0053129c();
    lVar4 = lVar4 + lVar1 + extraout_x8_01 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar1 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 005302dc; end: 005302df;  */

void FUN_005302dc(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  
  func_0x005313ac();
  uVar2 = *(ulong *)(param_1 + 8);
  uVar1 = uVar2;
  if ((uVar2 & 1) != 0) {
    uVar1 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  func_0x005312e8(*(undefined8 *)(unaff_x20 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((uVar2 & 1) != 0) {
      func_0x005312dc();
    }
    func_0x00532e08(unaff_x21 + 0x18);
  }
  func_0x005312e8(*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x005312dc();
    }
    func_0x00532e08(unaff_x21 + 0x20);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x28) == 0) {
      FUN_0053111c(uVar1,*(undefined8 *)(unaff_x20 + 0x28));
      *(ulong *)(unaff_x21 + 0x28) = uVar1;
    }
    else {
      func_0x0052fe74();
    }
  }
  func_0x005313c4();
  if ((extraout_x8_01 & 1) != 0) {
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



/* Entry: 005302e0; end: 005303ab;  */

void FUN_005302e0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  
  func_0x005313ac();
  uVar2 = *(ulong *)(param_1 + 8);
  uVar1 = uVar2;
  if ((uVar2 & 1) != 0) {
    uVar1 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  func_0x005312e8(*(undefined8 *)(unaff_x20 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((uVar2 & 1) != 0) {
      func_0x005312dc();
    }
    func_0x00532e08(unaff_x21 + 0x18);
  }
  func_0x005312e8(*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x005312dc();
    }
    func_0x00532e08(unaff_x21 + 0x20);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x28) == 0) {
      FUN_0053111c(uVar1,*(undefined8 *)(unaff_x20 + 0x28));
      *(ulong *)(unaff_x21 + 0x28) = uVar1;
    }
    else {
      func_0x0052fe74();
    }
  }
  func_0x005313c4();
  if ((extraout_x8_01 & 1) != 0) {
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



/* Entry: 005303ac; end: 005303d7;  */

undefined8 * FUN_005303ac(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00a00a58;
  param_1[1] = param_2;
  FUN_005303d8();
  return param_1;
}



/* Entry: 005303d8; end: 0053040b;  */

void FUN_005303d8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0x100000000;
  *(undefined8 *)(param_1 + 0x10) = 0x100000000;
  *(undefined **)(param_1 + 0x20) = &DAT_00810d88;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined **)(param_1 + 0x48) = &DAT_00b69408;
  *(undefined **)(param_1 + 0x50) = &DAT_00b69408;
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}



/* Entry: 0053040c; end: 0053044f;  */

long FUN_0053040c(long param_1)

{
  func_0x00531358();
  func_0x00532f74(param_1 + 0x48);
  func_0x00532f74(param_1 + 0x50);
  FUN_0048b2d0(param_1 + 0x30);
  FUN_0048ec70(param_1 + 0x10);
  return param_1;
}



/* Entry: 00530450; end: 00530453;  */

long FUN_00530450(long param_1)

{
  func_0x00531358();
  func_0x00532f74(param_1 + 0x48);
  func_0x00532f74(param_1 + 0x50);
  FUN_0048b2d0(param_1 + 0x30);
  FUN_0048ec70(param_1 + 0x10);
  return param_1;
}



/* Entry: 00530454; end: 00530467;  */

void FUN_00530454(void)

{
  FUN_0053040c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00530468; end: 00530473;  */

undefined ** FUN_00530468(void)

{
  return &PTR_DAT_00a00ba8;
}



/* Entry: 00530474; end: 005304bb;  */

void FUN_00530474(long param_1)

{
  ulong *puVar1;
  
  FUN_0048ee14(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_00532fa8(param_1 + 0x48);
  FUN_00532fa8(param_1 + 0x50);
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 005304bc; end: 00530733;  */

undefined8 ** FUN_005304bc(undefined8 **param_1,long param_2,undefined8 **param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  long lVar6;
  undefined8 **ppuVar7;
  ulong uVar8;
  long extraout_x8;
  undefined8 **unaff_x20;
  byte *pbVar9;
  long unaff_x21;
  uint uVar10;
  long unaff_x22;
  ulong *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puStack_78;
  undefined8 *apuStack_70 [2];
  
  ppuVar7 = param_3;
  func_0x005313ac();
  func_0x00531360(param_1[9]);
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_00530508;
  }
  else if ((int)param_2 != 0) {
LAB_00530508:
    func_0x005312d4();
    param_2 = 1;
    param_1 = param_3;
    func_0x00531284();
    unaff_x20 = param_1;
  }
  func_0x00531360(*(undefined8 *)(unaff_x21 + 0x50));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_00530564;
  }
  else if ((int)param_2 == 0) goto LAB_00530564;
  func_0x005312d4();
  param_1 = param_3;
  func_0x00531284(param_3,2);
  unaff_x20 = param_1;
LAB_00530564:
  if (*(int *)(unaff_x21 + 0x10) != 0) {
    if ((*(int *)(unaff_x21 + 0x10) == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      ppuVar5 = &puStack_78;
      FUN_0048fc74();
      while (param_1 = ppuVar5, puVar2 = puStack_78, puStack_78 != (undefined8 *)0x0) {
        puVar4 = puStack_78 + 1;
        puVar12 = puStack_78 + 4;
        func_0x005312bc();
        lVar13 = (long)*(char *)((long)puVar2 + 0x1f);
        if (lVar13 < 0) {
          puVar4 = (undefined8 *)puVar2[1];
          lVar13 = puVar2[2];
        }
        func_0x00531290(puVar4,lVar13);
        lVar13 = (long)*(char *)((long)puVar2 + 0x37);
        if (lVar13 < 0) {
          puVar12 = (undefined8 *)puVar2[4];
          lVar13 = puVar2[5];
        }
        func_0x00531290(puVar12,lVar13);
        ppuVar5 = &puStack_78;
        func_0x0048fcb8();
        unaff_x20 = param_1;
      }
    }
    else {
      ppuVar5 = &puStack_78;
      FUN_0048ee38(ppuVar5);
      puVar2 = apuStack_70[0];
      for (lVar13 = (long)puStack_78 << 3; ppuVar3 = ppuVar5, lVar13 != 0; lVar13 = lVar13 + -8) {
        puVar12 = (undefined8 *)*puVar2;
        ppuVar5 = (undefined8 **)(puVar12 + 3);
        func_0x005312bc();
        lVar6 = (long)*(char *)((long)puVar12 + 0x17);
        puVar4 = puVar12;
        if (lVar6 < 0) {
          lVar6 = puVar12[1];
          puVar4 = (undefined8 *)*puVar12;
        }
        func_0x00531290(puVar4,lVar6);
        lVar6 = (long)*(char *)((long)puVar12 + 0x2f);
        if (lVar6 < 0) {
          ppuVar5 = (undefined8 **)puVar12[3];
          lVar6 = puVar12[4];
        }
        func_0x00531290(ppuVar5,lVar6);
        puVar2 = puVar2 + 1;
        unaff_x20 = ppuVar3;
      }
      param_1 = apuStack_70;
      FUN_0048eca8();
    }
  }
  uVar10 = *(uint *)(unaff_x21 + 0x40);
  if (0 < (int)uVar10) {
    func_0x005313a0();
    pbVar9 = (byte *)((long)param_1 + 2);
    *(byte *)param_1 = 0x22;
    for (; 0x7f < uVar10; uVar10 = uVar10 >> 7) {
      pbVar9[-1] = (byte)uVar10 | 0x80;
      pbVar9 = pbVar9 + 1;
    }
    pbVar9[-1] = (byte)uVar10;
    puVar11 = *(ulong **)(unaff_x21 + 0x38);
    puVar1 = puVar11 + *(int *)(unaff_x21 + 0x30);
    do {
      func_0x005313a0();
      uVar8 = *puVar11;
      ppuVar5 = param_1;
      while( true ) {
        unaff_x20 = (undefined8 **)((long)ppuVar5 + 1);
        if (uVar8 < 0x80) break;
        *(byte *)ppuVar5 = (byte)uVar8 | 0x80;
        uVar8 = uVar8 >> 7;
        ppuVar5 = unaff_x20;
      }
      puVar11 = puVar11 + 1;
      *(byte *)ppuVar5 = (byte)uVar8;
    } while (puVar11 < puVar1);
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x005313d8();
    if ((long)ppuVar7 < 0) {
      lVar13 = *(long *)(extraout_x8 + 8);
    }
    else {
      lVar13 = extraout_x8 + 8;
    }
    FUN_00487760(param_3,lVar13);
    unaff_x20 = param_3;
  }
  return unaff_x20;
}



/* Entry: 00530734; end: 005308f3;  */

long FUN_00530734(long param_1)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long alStack_38 [3];
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x10);
  FUN_0048fc74(alStack_38);
  while (alStack_38[0] != 0) {
    lVar2 = alStack_38[0] + 8;
    FUN_0048dd80(lVar2,alStack_38[0] + 0x20);
    uVar4 = lVar2 + uVar4;
    func_0x0048fcb8(alStack_38);
  }
  lVar2 = param_1 + 0x30;
  func_0x0054dea0();
  *(int *)(param_1 + 0x40) = (int)lVar2;
  lVar5 = 0;
  if (lVar2 != 0) {
    lVar5 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
  }
  uVar1 = *(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  lVar5 = lVar2 + uVar4 + lVar5;
  if (lVar3 != 0) {
    FUN_0048910c();
    func_0x005312f4();
  }
  func_0x00531300(*(undefined8 *)(param_1 + 0x50));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    FUN_0048910c();
    func_0x005312f4();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar4 + 0x10);
    }
    lVar5 = lVar2 + lVar5;
  }
  *(int *)(param_1 + 0x58) = (int)lVar5;
  return lVar5;
}



/* Entry: 005308f4; end: 00530927;  */

void FUN_005308f4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined **)(param_1 + 0x60) = &DAT_00b69408;
  *(undefined **)(param_1 + 0x68) = &DAT_00b69408;
  *(undefined **)(param_1 + 0x70) = &DAT_00b69408;
  *(undefined **)(param_1 + 0x78) = &DAT_00b69408;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return;
}



/* Entry: 00530928; end: 00530953;  */

undefined8 FUN_00530928(undefined8 param_1)

{
  func_0x00531358();
  FUN_00530954(param_1);
  return param_1;
}



/* Entry: 00530954; end: 005309a3;  */

long FUN_00530954(long param_1)

{
  func_0x00532f74(param_1 + 0x60);
  func_0x00532f74(param_1 + 0x68);
  func_0x00532f74(param_1 + 0x70);
  func_0x00532f74(param_1 + 0x78);
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_00530064();
  }
  __ZdlPv();
  FUN_00531068(param_1 + 0x48);
  FUN_00531068(param_1 + 0x30);
  FUN_00531068(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 005309a4; end: 005309a7;  */

undefined8 FUN_005309a4(undefined8 param_1)

{
  func_0x00531358();
  FUN_00530954(param_1);
  return param_1;
}



/* Entry: 005309a8; end: 005309bb;  */

void FUN_005309a8(void)

{
  FUN_00530928();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005309bc; end: 005309c7;  */

undefined ** FUN_005309bc(void)

{
  return &PTR_DAT_00a00bd0;
}



/* Entry: 005309c8; end: 00530a4b;  */

void FUN_005309c8(long param_1)

{
  ulong *puVar1;
  
  FUN_00531108(param_1 + 0x18);
  FUN_00531108(param_1 + 0x30);
  FUN_00531108(param_1 + 0x48);
  FUN_00532fa8(param_1 + 0x60);
  FUN_00532fa8(param_1 + 0x68);
  FUN_00532fa8(param_1 + 0x70);
  FUN_00532fa8(param_1 + 0x78);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_005300ec(*(undefined8 *)(param_1 + 0x80));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
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



/* Entry: 00530a4c; end: 00530cf7;  */

segment_command *
FUN_00530a4c(segment_command *param_1,segment_command *param_2,segment_command *param_3)

{
  dword dVar1;
  uint uVar2;
  qword *pqVar3;
  qword qVar4;
  uint *puVar5;
  undefined8 *puVar6;
  segment_command *psVar7;
  ulong uVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  long extraout_x8;
  segment_command *psVar12;
  segment_command *psVar13;
  dword dVar14;
  int iVar15;
  undefined8 *puVar16;
  int iVar17;
  
  qVar4 = param_1->vmsize;
  psVar13 = param_1;
  psVar7 = param_2;
  for (iVar15 = 0; (int)qVar4 != iVar15; iVar15 = iVar15 + 1) {
    FUN_00531240();
    psVar13 = (segment_command *)((long)&MACH_HEADER.magic + 1);
    func_0x0053126c();
    psVar7 = psVar13;
  }
  dVar1 = param_1->maxprot;
  for (dVar14 = 0; dVar1 != dVar14; dVar14 = dVar14 + 1) {
    FUN_00531240();
    psVar13 = (segment_command *)((long)&MACH_HEADER.magic + 2);
    func_0x0053126c();
    psVar7 = psVar13;
  }
  iVar15 = *(int *)param_1[1].segname;
  for (puVar16 = (undefined8 *)0x0; iVar15 != (int)puVar16;
      puVar16 = (undefined8 *)(ulong)((int)puVar16 + 1)) {
    FUN_00531240();
    psVar13 = (segment_command *)((long)&MACH_HEADER.magic + 3);
    func_0x0053126c();
    psVar7 = psVar13;
  }
  psVar12 = psVar13;
  if (*(int *)param_1[2].segname != 0) {
    func_0x00531260();
    psVar12 = (segment_command *)(ulong)*(uint *)param_1[2].segname;
    param_2 = &segment_command_00000020;
    func_0x00487cbc(0x20,psVar13);
    func_0x00487cbc();
    psVar7 = psVar12;
  }
  lVar11._0_4_ = param_1[1].nsects;
  lVar11._4_4_ = param_1[1].flags;
  psVar13 = psVar12;
  if (lVar11 != 0) {
    func_0x00531260();
    psVar13 = (segment_command *)segment_command_00000020.segname;
    func_0x00487cbc();
    func_0x00531394();
    param_2 = psVar12;
    psVar7 = psVar13;
  }
  lVar10._0_4_ = param_1[2].cmd;
  lVar10._4_4_ = param_1[2].cmdsize;
  psVar12 = psVar13;
  if (lVar10 != 0) {
    func_0x00531260();
    psVar12 = (segment_command *)(segment_command_00000020.segname + 8);
    func_0x00487cbc();
    func_0x00531394();
    param_2 = psVar13;
    psVar7 = psVar12;
  }
  if ((*(qword *)((long)param_1->segname + 8) & 1) != 0) {
    param_2 = *(segment_command **)&param_1[1].maxprot;
    psVar12 = (segment_command *)((long)&MACH_HEADER.cputype + 3);
    func_0x0053126c(7,param_2,*(undefined4 *)((long)param_2->segname + 0xc));
    psVar7 = psVar12;
  }
  psVar13 = psVar12;
  if (*(int *)(param_1[2].segname + 4) != 0) {
    func_0x00531260();
    psVar13 = (segment_command *)(ulong)*(uint *)(param_1[2].segname + 4);
    param_2 = (segment_command *)&segment_command_00000020.vmsize;
    func_0x00487cbc(0x40,psVar12);
    func_0x00487ce8();
    psVar7 = psVar13;
  }
  func_0x00531360(param_1[1].vmaddr);
  if ((long)param_2 < 0) {
    param_2 = (segment_command *)0x0;
    if (puVar16[1] != 0) {
      puVar6 = (undefined8 *)*puVar16;
      goto LAB_00530bd0;
    }
  }
  else {
    puVar6 = puVar16;
    if ((int)param_2 != 0) {
LAB_00530bd0:
      func_0x005312d4(puVar6);
      param_2 = (segment_command *)((long)&MACH_HEADER.cpusubtype + 1);
      psVar13 = param_3;
      func_0x00531328(param_3,9,puVar16);
      psVar7 = psVar13;
    }
  }
  if (*(int *)(param_1[2].segname + 8) != 0) {
    func_0x00531260();
    uVar2 = *(uint *)(param_1[2].segname + 8);
    puVar16 = (undefined8 *)(ulong)uVar2;
    puVar5 = (uint *)((long)&segment_command_00000020.filesize + 5);
    func_0x00487cbc();
    psVar7 = (segment_command *)(puVar5 + 1);
    *puVar5 = uVar2;
    param_2 = psVar13;
  }
  func_0x00531360(param_1[1].vmsize);
  if ((long)param_2 < 0) {
    if (puVar16[1] == 0) goto LAB_00530c58;
    puVar6 = (undefined8 *)*puVar16;
  }
  else {
    puVar6 = puVar16;
    if ((int)param_2 == 0) goto LAB_00530c58;
  }
  func_0x005312d4(puVar6);
  psVar7 = param_3;
  func_0x00531328(param_3,0xb,puVar16);
LAB_00530c58:
  uVar8 = param_1[1].fileoff & 0xfffffffffffffffc;
  lVar11 = (long)*(char *)(uVar8 + 0x17);
  if (lVar11 < 0) {
    lVar11 = *(long *)(uVar8 + 8);
  }
  if (lVar11 != 0) {
    psVar7 = param_3;
    func_0x00531328(param_3,0xc);
  }
  uVar8 = param_1[1].filesize & 0xfffffffffffffffc;
  lVar11 = (long)*(char *)(uVar8 + 0x17);
  if (lVar11 < 0) {
    lVar11 = *(long *)(uVar8 + 8);
  }
  if (lVar11 != 0) {
    psVar7 = param_3;
    func_0x00531328(param_3,0xe);
  }
  if ((*(ulong *)param_1->segname & 1) != 0) {
    func_0x005313d8();
    if ((long)uVar8 < 0) {
      lVar11 = *(long *)(extraout_x8 + 8);
      uVar8 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar11 = extraout_x8 + 8;
    }
    if ((long)(*(qword *)param_3 - (long)psVar7) < (long)(int)uVar8) {
      while( true ) {
        uVar9 = param_3->cmd;
        iVar17 = (uVar9 - (int)psVar7) + 0x10;
        iVar15 = (int)uVar8;
        uVar8 = (ulong)(uint)(iVar15 - iVar17);
        if (iVar15 - iVar17 == 0 || iVar15 < iVar17) break;
        func_0x0054f690();
        pqVar3 = (qword *)psVar7->segname;
        psVar7 = param_3;
        func_0x0054ed58(param_3,(undefined1 *)((long)pqVar3 + (long)iVar17 + -8));
      }
      func_0x0054f690();
      return (segment_command *)((long)psVar7->segname + (long)iVar15 + -8);
    }
    _memcpy(psVar7,lVar11,uVar8 & 0xffffffff);
    return (segment_command *)((long)psVar7->segname + (long)(int)uVar8 + -8);
  }
  return psVar7;
}



/* Entry: 00530cf8; end: 00530ea3;  */

void FUN_00530cf8(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = (long)*(int *)(param_1 + 0x20);
  lVar3 = param_1;
  for (lVar6 = lVar5 << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
    func_0x00531384();
    lVar5 = lVar3 + lVar5;
  }
  func_0x0053130c();
  for (lVar6 = 0; lVar6 != 0; lVar6 = lVar6 + -8) {
    func_0x00531384();
    lVar5 = lVar3 + lVar5;
  }
  iVar2 = (int)lVar5;
  func_0x0053130c();
  for (lVar6 = 0; lVar6 != 0; lVar6 = lVar6 + -8) {
    func_0x00531384();
    lVar5 = lVar3 + lVar5;
    iVar2 = (int)lVar5;
  }
  func_0x00531300(*(undefined8 *)(param_1 + 0x60));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    FUN_0048910c();
    func_0x005312f4();
  }
  func_0x00531300(*(undefined8 *)(param_1 + 0x68));
  lVar5 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    FUN_0048910c();
    func_0x005312f4();
  }
  func_0x00531300(*(undefined8 *)(param_1 + 0x70));
  lVar5 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    func_0x00487c3c();
    func_0x005312f4();
  }
  func_0x00531300(*(undefined8 *)(param_1 + 0x78));
  lVar5 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    func_0x00487c3c();
    func_0x005312f4();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x80);
    FUN_00530238();
    func_0x0053129c();
    iVar2 = iVar2 + iVar1 + extraout_w8 + 1;
  }
  iVar1 = -9;
  if (*(long *)(param_1 + 0x88) != 0) {
    func_0x0053136c();
    iVar1 = extraout_w8_00;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    func_0x0053136c();
    iVar1 = extraout_w8_01;
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    iVar2 = iVar2 + ((int)LZCOUNT(*(int *)(param_1 + 0x98)) * -9 + 0x1a0U >> 6);
  }
  if (*(int *)(param_1 + 0x9c) != 0) {
    iVar2 = iVar2 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x9c)) * iVar1 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    iVar2 = iVar2 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar4 + 0x10);
    }
    iVar2 = (int)lVar5 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 00530ea4; end: 00530ebf;  */

long FUN_00530ea4(long param_1)

{
  long extraout_x8;
  
  FUN_00530734();
  func_0x0053129c();
  return param_1 + extraout_x8;
}



/* Entry: 00530ec0; end: 00531037;  */

void FUN_00530ec0(long param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  long unaff_x20;
  long unaff_x21;
  ulong uVar3;
  
  func_0x005313ac();
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  FUN_00531038(unaff_x21 + 0x18,unaff_x20 + 0x18);
  FUN_00531038(unaff_x21 + 0x30,unaff_x20 + 0x30);
  lVar1 = unaff_x20 + 0x48;
  FUN_00531038(unaff_x21 + 0x48);
  func_0x005312e8(*(undefined8 *)(unaff_x20 + 0x60));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x005312dc();
    }
    func_0x00532e08(unaff_x21 + 0x60);
  }
  func_0x005312e8(*(undefined8 *)(unaff_x20 + 0x68));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x005312dc();
    }
    func_0x00532e08(unaff_x21 + 0x68);
  }
  func_0x005312e8(*(undefined8 *)(unaff_x20 + 0x70));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x005312dc();
    }
    func_0x00532e08(unaff_x21 + 0x70);
  }
  func_0x005312e8(*(undefined8 *)(unaff_x20 + 0x78));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x005312dc();
    }
    func_0x00532e08(unaff_x21 + 0x78);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x80) == 0) {
      FUN_00531190(uVar3,*(undefined8 *)(unaff_x20 + 0x80));
      *(ulong *)(unaff_x21 + 0x80) = uVar3;
    }
    else {
      FUN_005302e0();
    }
  }
  if (*(long *)(unaff_x20 + 0x88) != 0) {
    *(long *)(unaff_x21 + 0x88) = *(long *)(unaff_x20 + 0x88);
  }
  if (*(long *)(unaff_x20 + 0x90) != 0) {
    *(long *)(unaff_x21 + 0x90) = *(long *)(unaff_x20 + 0x90);
  }
  if (*(int *)(unaff_x20 + 0x98) != 0) {
    *(int *)(unaff_x21 + 0x98) = *(int *)(unaff_x20 + 0x98);
  }
  if (*(int *)(unaff_x20 + 0x9c) != 0) {
    *(int *)(unaff_x21 + 0x9c) = *(int *)(unaff_x20 + 0x9c);
  }
  if (*(int *)(unaff_x20 + 0xa0) != 0) {
    *(int *)(unaff_x21 + 0xa0) = *(int *)(unaff_x20 + 0xa0);
  }
  func_0x005313c4();
  if ((extraout_x8_03 & 1) != 0) {
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



/* Entry: 00531038; end: 00531067;  */

void FUN_00531038(long *param_1,long param_2)

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



/* Entry: 00531068; end: 00531097;  */

long * FUN_00531068(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0054cf94(param_1);
  }
  return param_1;
}



/* Entry: 00531098; end: 00531107;  */

long FUN_00531098(long param_1)

{
  FUN_00531068(param_1 + 0x38);
  FUN_00531068(param_1 + 0x20);
  FUN_00531068(param_1 + 8);
  return param_1;
}



/* Entry: 00531108; end: 0053111b;  */

void FUN_00531108(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (0 < (int)param_1[1]) {
    uVar1 = (uint)param_1[1];
    puVar2 = param_1;
    if ((*param_1 & 1) != 0) {
      puVar2 = (ulong *)(*param_1 + 7);
    }
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
    uVar3 = (ulong)uVar1;
    do {
      (**(code **)(*(long *)*puVar2 + 0x18))();
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != 0);
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  return;
}



/* Entry: 0053111c; end: 0053118f;  */

char * FUN_0053111c(char *param_1)

{
  char *pcVar1;
  
  if (param_1 == (char *)0x0) {
    pcVar1 = segment_command_00000020.segname;
    __Znwm();
  }
  else {
    pcVar1 = param_1;
    func_0x005510c4(param_1,0x28);
  }
  *(undefined ***)pcVar1 = &PTR_FUN_00a00a08;
  *(char **)(pcVar1 + 8) = param_1;
  *(qword *)(pcVar1 + 0x10) = 0;
  *(qword *)(pcVar1 + 0x18) = 0;
  *(undefined4 *)(pcVar1 + 0x20) = 0;
  func_0x0052fe74();
  return pcVar1;
}



/* Entry: 00531190; end: 0053123f;  */

char * FUN_00531190(char *param_1,long param_2)

{
  char *pcVar1;
  qword qVar2;
  
  if (param_1 == (char *)0x0) {
    pcVar1 = segment_command_00000020.segname + 8;
    __Znwm();
  }
  else {
    pcVar1 = param_1;
    func_0x005510c4(param_1,0x30);
  }
  *(char **)(pcVar1 + 8) = param_1;
  *(undefined ***)pcVar1 = &PTR_FUN_00a00aa8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_0054a3dc(pcVar1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(pcVar1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(pcVar1 + 0x14) = 0;
  qVar2 = param_2 + 0x18;
  func_0x00487c6c(qVar2,param_1);
  *(qword *)(pcVar1 + 0x18) = qVar2;
  qVar2 = param_2 + 0x20;
  func_0x00487c6c(qVar2,param_1);
  *(qword *)(pcVar1 + 0x20) = qVar2;
  if ((*(qword *)(pcVar1 + 0x10) & 1) == 0) {
    param_1 = (char *)0x0;
  }
  else {
    FUN_0053111c(param_1,*(undefined8 *)(param_2 + 0x28));
  }
  *(char **)(pcVar1 + 0x28) = param_1;
  return pcVar1;
}



/* Entry: 00531240; end: 005313e3;  */

void FUN_00531240(void)

{
  return;
}



/* Entry: 005313e4; end: 0053140f;  */

undefined8 FUN_005313e4(undefined8 param_1)

{
  func_0x00532a00();
  FUN_00531410(param_1);
  return param_1;
}



/* Entry: 00531410; end: 00531447;  */

void FUN_00531410(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0053189c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_00532328();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00531448; end: 0053144b;  */

undefined8 FUN_00531448(undefined8 param_1)

{
  func_0x00532a00();
  FUN_00531410(param_1);
  return param_1;
}



/* Entry: 0053144c; end: 0053145f;  */

void FUN_0053144c(void)

{
  FUN_005313e4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00531460; end: 0053146b;  */

undefined ** FUN_00531460(void)

{
  return &PTR_DAT_00a00e90;
}



/* Entry: 0053146c; end: 005314eb;  */

void FUN_0053146c(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  
  uVar1 = (uint)param_1[2];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x005314bc(param_1[3]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_005314ec(param_1[4]);
    }
  }
  func_0x00532ac4();
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



/* Entry: 005314ec; end: 005314ff;  */

void FUN_005314ec(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 00531500; end: 0053160f;  */

long * FUN_00531500(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x005329b0();
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    param_4 = (long *)((long)&MACH_HEADER.magic + 1);
    func_0x005329f0();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x14);
    param_4 = (long *)((long)&MACH_HEADER.magic + 2);
    func_0x005329f0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00532a54();
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



/* Entry: 00531610; end: 005317b7;  */

void FUN_00531610(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x005329c0();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00532aac();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_00532620();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x005316a4();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_005326c8();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_005317b8();
      }
    }
  }
  func_0x00532a38();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x005329e0();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 005317b8; end: 005317df;  */

void FUN_005317b8(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
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



/* Entry: 005317e0; end: 0053189b;  */

void FUN_005317e0(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 3) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 != 0) goto LAB_00531860;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_00532124();
    }
  }
  else if (iVar1 == 2) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 != 0) goto LAB_00531860;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_00531f80();
    }
  }
  else {
    if (iVar1 != 1) goto LAB_00531860;
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 != 0) goto LAB_00531860;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_00531e2c();
    }
  }
  __ZdlPv();
LAB_00531860:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 0053189c; end: 005318c7;  */

undefined8 FUN_0053189c(undefined8 param_1)

{
  func_0x00532a00();
  FUN_005318c8(param_1);
  return param_1;
}



/* Entry: 005318c8; end: 005318db;  */

void FUN_005318c8(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 3) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 != 0) goto LAB_00531860;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_00532124();
    }
  }
  else if (iVar1 == 2) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 != 0) goto LAB_00531860;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_00531f80();
    }
  }
  else {
    if (iVar1 != 1) goto LAB_00531860;
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 != 0) goto LAB_00531860;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_00531e2c();
    }
  }
  __ZdlPv();
LAB_00531860:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 005318dc; end: 005318ef;  */

void FUN_005318dc(void)

{
  FUN_0053189c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005318f0; end: 00531907;  */

long FUN_005318f0(long param_1)

{
  func_0x00532a00();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00531bd0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00531908; end: 005319f7;  */

long * FUN_00531908(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x005329b0();
  plVar2 = (long *)(ulong)*(uint *)(param_1 + 0x1c);
  if (*(uint *)(param_1 + 0x1c) - 1 < 3) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x10) + 0x14);
    func_0x005329f0();
    param_4 = plVar2;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00532a54();
  if ((long)param_3 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar4 = (int)param_3;
      uVar1 = iVar4 - iVar5;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar4 < iVar5) break;
      func_0x0054f690();
      param_4 = unaff_x19;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar4);
  }
  _memcpy(param_4,lVar3,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 005319f8; end: 005319fb;  */

void FUN_005319f8(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x005329c0();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00532aac();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_0053179c;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_005317e0();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 == 3) {
      func_0x00532a6c();
      func_0x00531b14();
      goto LAB_0053179c;
    }
    func_0x00532828();
    param_1 = unaff_x22;
  }
  else if (iVar1 == 2) {
    if (iVar2 == 2) {
      func_0x00532a6c();
      FUN_00531a88();
      goto LAB_0053179c;
    }
    func_0x005327a4();
    param_1 = unaff_x22;
  }
  else {
    if (iVar1 != 1) goto LAB_0053179c;
    if (iVar2 == 1) {
      func_0x00532a6c();
      FUN_005319fc();
      goto LAB_0053179c;
    }
    FUN_00532738();
    param_1 = unaff_x22;
  }
  unaff_x21[2] = (ulong)param_1;
LAB_0053179c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x005329e0();
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



/* Entry: 005319fc; end: 00531a87;  */

void FUN_005319fc(long param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar2 = *(ulong **)(param_1 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(param_1 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      func_0x005328c8();
      *(ulong **)(param_1 + 0x18) = puVar2;
    }
    else {
      FUN_00531db8();
      puVar2 = puVar3;
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x005329e0();
    if ((*puVar2 & 1) == 0) {
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



/* Entry: 00531a88; end: 00531bcf;  */

void FUN_00531a88(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x005329c0();
  if ((unaff_x22 & 1) != 0) {
    func_0x00532aac();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x00532a4c();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_00531db8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x00532a4c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_00531db8();
      }
    }
  }
  func_0x00532a38();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x005329e0();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 00531bd0; end: 00531bfb;  */

long FUN_00531bd0(long param_1)

{
  func_0x00532a00();
  func_0x00532f74(param_1 + 0x10);
  return param_1;
}



/* Entry: 00531bfc; end: 00531bff;  */

long FUN_00531bfc(long param_1)

{
  func_0x00532a00();
  func_0x00532f74(param_1 + 0x10);
  return param_1;
}



/* Entry: 00531c00; end: 00531c13;  */

void FUN_00531c00(void)

{
  FUN_00531bd0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00531c14; end: 00531c1f;  */

undefined ** FUN_00531c14(void)

{
  return &PTR_DAT_00a00f18;
}



/* Entry: 00531c20; end: 00531c57;  */

void FUN_00531c20(long param_1)

{
  ulong *puVar1;
  
  FUN_00532fa8(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x18) = 0;
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



/* Entry: 00531c58; end: 00531d2f;  */

long * FUN_00531c58(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  int iVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  
  plVar5 = (long *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)plVar5 + 0x17);
  plVar6 = param_3;
  if (lVar3 < 0) {
    lVar3 = plVar5[1];
    if (lVar3 == 0) goto LAB_00531cc4;
    plVar1 = (long *)*plVar5;
  }
  else {
    plVar1 = plVar5;
    if (*(char *)((long)plVar5 + 0x17) == '\0') goto LAB_00531cc4;
  }
  FUN_0054ddb8(plVar1,lVar3,1,"snapchat.graphene.Identifier.name");
  plVar1 = param_3;
  FUN_00435e9c(param_3,1,plVar5,param_2);
  plVar6 = plVar5;
  param_2 = plVar1;
LAB_00531cc4:
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar5 = param_3;
    func_0x00487c24(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x18);
    uVar2 = 0x10;
    func_0x00487cbc(0x10,plVar5);
    func_0x00487cbc(param_2,uVar2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00532a54();
  if ((long)plVar6 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    plVar6 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar6) {
    while( true ) {
      iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar4 = (int)plVar6;
      plVar6 = (long *)(ulong)(uint)(iVar4 - iVar7);
      if (iVar4 - iVar7 == 0 || iVar4 < iVar7) break;
      func_0x0054f690();
      lVar3 = (long)param_2 + (long)iVar7;
      param_2 = param_3;
      func_0x0054ed58(param_3,lVar3);
    }
    func_0x0054f690();
    return (long *)((long)param_2 + (long)iVar4);
  }
  _memcpy(param_2,lVar3,(ulong)plVar6 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar6);
}



/* Entry: 00531d30; end: 00531db3;  */

void FUN_00531d30(long param_1)

{
  int iVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_00531d68;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_00531d68:
    iVar1 = 0;
    goto LAB_00531d6c;
  }
  FUN_0048910c();
  iVar1 = (int)uVar2 + 1;
LAB_00531d6c:
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x18)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00532a60();
    lVar3 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  return;
}



/* Entry: 00531db4; end: 00531db7;  */

void FUN_00531db4(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00532ab8();
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x00532e08(unaff_x19 + 0x10,uVar1,uVar2);
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
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



/* Entry: 00531db8; end: 00531e2b;  */

void FUN_00531db8(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00532ab8();
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x00532e08(unaff_x19 + 0x10,uVar1,uVar2);
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
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



/* Entry: 00531e2c; end: 00531e5f;  */

long FUN_00531e2c(long param_1)

{
  func_0x00532a00();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00531bd0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00531e60; end: 00531e73;  */

void FUN_00531e60(void)

{
  FUN_00531e2c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00531e74; end: 00531e7f;  */

undefined ** FUN_00531e74(void)

{
  return &PTR_DAT_00a00f58;
}



/* Entry: 00531e80; end: 00531f5f;  */

void FUN_00531e80(ulong *param_1)

{
  ulong extraout_x8;
  
  if ((param_1[2] & 1) != 0) {
    func_0x00532a8c();
  }
  func_0x00532ac4();
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



/* Entry: 00531f60; end: 00531f7b;  */

long FUN_00531f60(long param_1)

{
  long extraout_x8;
  
  FUN_00531d30();
  func_0x00532944();
  return param_1 + extraout_x8;
}



/* Entry: 00531f7c; end: 00531f7f;  */

void FUN_00531f7c(long param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar2 = *(ulong **)(param_1 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(param_1 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      func_0x005328c8();
      *(ulong **)(param_1 + 0x18) = puVar2;
    }
    else {
      FUN_00531db8();
      puVar2 = puVar3;
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x005329e0();
    if ((*puVar2 & 1) == 0) {
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



/* Entry: 00531f80; end: 00531fc3;  */

long FUN_00531f80(long param_1)

{
  func_0x00532a00();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00531bd0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_00531bd0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00531fc4; end: 00531fd7;  */

void FUN_00531fc4(void)

{
  FUN_00531f80();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00531fd8; end: 00531fe3;  */

undefined ** FUN_00531fd8(void)

{
  return &PTR_DAT_00a00f98;
}



/* Entry: 00531fe4; end: 0053202f;  */

void FUN_00531fe4(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  
  uVar1 = (uint)param_1[2];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00532a8c();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_00531c20(param_1[4]);
    }
  }
  func_0x00532ac4();
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



/* Entry: 00532030; end: 0053211f;  */

long * FUN_00532030(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x005329b0();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x0053297c();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x1c);
    param_4 = (long *)((long)&MACH_HEADER.magic + 2);
    func_0x005329f0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00532a54();
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


