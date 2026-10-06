/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 006d38e0; end: 006d3913;  */

void FUN_006d38e0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x006d3c2c();
  if ((int)lVar1 != 0) {
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + param_3;
  }
  return;
}



/* Entry: 006d3914; end: 006d391b;  */

void FUN_006d3914(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_48;
  
  plVar1 = param_1;
  FUN_006d3748();
  if ((int)plVar1 != 0) {
    lVar2 = *param_1;
    lVar3 = *(long *)(lVar2 + 8);
    FUN_006d38e0(lVar2,&uStack_48,1);
    if ((int)lVar2 != 0) {
      func_0x006d35a4(uStack_48,1);
      param_2[1] = 0;
      *param_2 = 0;
      param_2[3] = 0;
      param_2[2] = 0;
      *param_2 = *param_1;
      param_1[1] = (long)param_2;
      param_2[2] = lVar3;
      *(undefined1 *)(param_2 + 3) = 1;
      *(undefined2 *)((long)param_2 + 0x19) = 0x100;
    }
  }
  return;
}



/* Entry: 006d391c; end: 006d39af;  */

void FUN_006d391c(long *param_1,long *param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_48;
  
  plVar1 = param_1;
  FUN_006d3748();
  if ((int)plVar1 != 0) {
    lVar2 = *param_1;
    lVar3 = *(long *)(lVar2 + 8);
    FUN_006d38e0(lVar2,&uStack_48,param_3);
    if ((int)lVar2 != 0) {
      func_0x006d35a4(uStack_48,param_3);
      param_2[1] = 0;
      *param_2 = 0;
      param_2[3] = 0;
      param_2[2] = 0;
      *param_2 = *param_1;
      param_1[1] = (long)param_2;
      param_2[2] = lVar3;
      *(char *)(param_2 + 3) = (char)param_3;
      *(undefined2 *)((long)param_2 + 0x19) = 0x100;
    }
  }
  return;
}



/* Entry: 006d39b0; end: 006d39bf;  */

void FUN_006d39b0(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_48;
  
  plVar1 = param_1;
  FUN_006d3748();
  if ((int)plVar1 != 0) {
    lVar2 = *param_1;
    lVar3 = *(long *)(lVar2 + 8);
    FUN_006d38e0(lVar2,&uStack_48,2);
    if ((int)lVar2 != 0) {
      func_0x006d35a4(uStack_48,2);
      param_2[1] = 0;
      *param_2 = 0;
      param_2[3] = 0;
      param_2[2] = 0;
      *param_2 = *param_1;
      param_1[1] = (long)param_2;
      param_2[2] = lVar3;
      *(undefined1 *)(param_2 + 3) = 2;
      *(undefined2 *)((long)param_2 + 0x19) = 0x100;
    }
  }
  return;
}



/* Entry: 006d39c0; end: 006d3a6f;  */

void FUN_006d39c0(long *param_1,long *param_2,uint param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = param_1;
  FUN_006d3748();
  iVar1 = (int)plVar2;
  if (iVar1 != 0) {
    if ((param_3 & 0x1fffffff) < 0x1f) {
      func_0x006d4114();
    }
    else {
      func_0x006d4114();
      if (iVar1 == 0) {
        return;
      }
      plVar2 = param_1;
      FUN_006d3a9c(param_1,param_3 & 0x1fffffff);
      iVar1 = (int)plVar2;
    }
    if (iVar1 != 0) {
      lVar3 = *(long *)(*param_1 + 8);
      plVar2 = param_1;
      FUN_006d3a70(param_1,0);
      if ((int)plVar2 != 0) {
        param_2[1] = 0;
        *param_2 = 0;
        param_2[3] = 0;
        param_2[2] = 0;
        *param_2 = *param_1;
        *(undefined1 *)((long)param_2 + 0x1a) = 1;
        param_1[1] = (long)param_2;
        param_2[2] = lVar3;
        *(undefined2 *)(param_2 + 3) = 0x101;
      }
    }
  }
  return;
}



/* Entry: 006d3a70; end: 006d3a9b;  */

void FUN_006d3a70(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uStack_38;
  
  func_0x006d40a4();
  if ((int)param_1 != 0) {
    func_0x006d413c();
    lVar1 = param_1;
    FUN_006d38e0();
    if ((int)lVar1 != 0) {
      lVar1 = 0;
      while (lVar1 == 0) {
        *uStack_38 = (char)param_2;
        param_2 = param_2 >> 8;
        lVar1 = -1;
      }
      if (param_2 != 0) {
        *(undefined1 *)(param_1 + 0x19) = 1;
      }
    }
    return;
  }
  return;
}



/* Entry: 006d3a9c; end: 006d3b2b;  */

bool FUN_006d3a9c(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  for (; param_2 != 0; param_2 = param_2 >> 7) {
    uVar2 = uVar2 + 1;
  }
  uVar1 = uVar2;
  if (uVar2 < 2) {
    uVar2 = 1;
    uVar1 = uVar2;
  }
  do {
    uVar2 = uVar2 - 1;
    if (uVar1 <= uVar2) break;
    func_0x006d4114();
  } while ((int)param_1 != 0);
  return uVar1 <= uVar2;
}



/* Entry: 006d3b2c; end: 006d3b77;  */

void FUN_006d3b2c(int param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uStack_38;
  
  func_0x006d40b0();
  if (param_1 != 0) {
    uVar1 = *unaff_x21;
    FUN_006d38e0(uVar1,&uStack_38);
    if (((int)uVar1 != 0) && (unaff_x19 != 0)) {
      func_0x006d4130(uStack_38);
      _memcpy();
    }
  }
  return;
}



/* Entry: 006d3b78; end: 006d3bbb;  */

void FUN_006d3b78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  FUN_006d3bbc(param_1,&uStack_28,param_2);
  if ((int)param_1 != 0) {
    func_0x006d35a4(uStack_28,param_2);
  }
  return;
}



/* Entry: 006d3bbc; end: 006d3cc7;  */

void FUN_006d3bbc(int param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *unaff_x21;
  
  func_0x006d40b0();
  if (param_1 != 0) {
    lVar2 = *unaff_x21;
    func_0x006d4130();
    lVar1 = lVar2;
    func_0x006d3c2c();
    if ((int)lVar1 != 0) {
      *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + param_3;
    }
    return;
  }
  return;
}



/* Entry: 006d3cc8; end: 006d3d03;  */

undefined8 FUN_006d3cc8(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  lVar2 = *param_1;
  uVar1 = *(ulong *)(lVar2 + 8) + param_2;
  if ((param_1[1] == 0) && (!CARRY8(*(ulong *)(lVar2 + 8),param_2))) {
    if (*(ulong *)(lVar2 + 0x10) < uVar1) {
      return 0;
    }
    *(ulong *)(lVar2 + 8) = uVar1;
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 006d3d04; end: 006d3d67;  */

void FUN_006d3d04(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lStack_38;
  
  lVar1 = param_1;
  FUN_006d38e0(param_1,&lStack_38);
  uVar2 = param_3;
  if ((int)lVar1 != 0) {
    while (uVar2 = uVar2 - 1, uVar2 < param_3) {
      *(char *)(lStack_38 + uVar2) = (char)param_2;
      param_2 = param_2 >> 8;
    }
    if (param_2 != 0) {
      *(undefined1 *)(param_1 + 0x19) = 1;
    }
  }
  return;
}



/* Entry: 006d3d68; end: 006d3deb;  */

void FUN_006d3d68(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uStack_38;
  
  func_0x006d40a4();
  if ((int)param_1 != 0) {
    func_0x006d413c();
    lVar1 = param_1;
    FUN_006d38e0();
    if ((int)lVar1 != 0) {
      for (uVar2 = 1; uVar2 < 2; uVar2 = uVar2 - 1) {
        *(char *)(uStack_38 + uVar2) = (char)param_2;
        param_2 = param_2 >> 8;
      }
      if (param_2 != 0) {
        *(undefined1 *)(param_1 + 0x19) = 1;
      }
    }
    return;
  }
  return;
}



/* Entry: 006d3dec; end: 006d3e0b;  */

void FUN_006d3dec(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(*param_1 + 8) = puVar1[2];
    *puVar1 = 0;
    param_1[1] = 0;
  }
  return;
}



/* Entry: 006d3e0c; end: 006d3eeb;  */

void FUN_006d3e0c(undefined1 *param_1,ulong param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 auStack_50 [32];
  
  FUN_006d39c0(param_1,auStack_50,2);
  if ((int)param_1 != 0) {
    bVar1 = false;
    for (uVar3 = 0x38; iVar2 = (int)param_1, uVar3 != 0xfffffffffffffff8; uVar3 = uVar3 - 8) {
      uVar5 = param_2 >> (uVar3 & 0x3f);
      uVar4 = (uint)uVar5;
      if (bVar1) {
LAB_006d3e50:
        param_1 = auStack_50;
        FUN_006d3a70(auStack_50,uVar4 & 0xff);
        if ((int)param_1 == 0) {
          return;
        }
        bVar1 = true;
      }
      else {
        if ((uVar5 & 0xff) != 0) {
          if (((uVar4 >> 7 & 1) != 0) && (func_0x006d4108(), iVar2 == 0)) {
            return;
          }
          goto LAB_006d3e50;
        }
        bVar1 = false;
      }
    }
    if ((bVar1) || (func_0x006d4108(), iVar2 != 0)) {
      func_0x006d4128();
    }
  }
  return;
}



/* Entry: 006d3eec; end: 006d3f3f;  */

void FUN_006d3eec(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [32];
  
  iVar1 = (int)auStack_40;
  FUN_006d39c0(param_1,auStack_40,1);
  if ((int)param_1 != 0) {
    uVar2 = 0xff;
    if (param_2 == 0) {
      uVar2 = 0;
    }
    FUN_006d3a70(auStack_40,uVar2);
    if (iVar1 != 0) {
      func_0x006d4128();
    }
  }
  return;
}



/* Entry: 006d3f40; end: 006d3fe3;  */

void FUN_006d3f40(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int unaff_w19;
  long unaff_x20;
  ulong uStack_50;
  ulong uStack_48;
  
  func_0x006d40c8();
  FUN_006d3748();
  if ((param_1 != 0) && (func_0x006d411c(), param_1 != 0)) {
    puVar2 = &stack0xffffffffffffffc0;
    func_0x006d3fe4(puVar2,&uStack_50);
    if (((int)puVar2 != 0) &&
       (((uStack_48 < 3 && (uStack_50 < 0x28 || uStack_48 == 2)) && (uStack_50 < 0xffffffffffffffb0)
        ))) {
      do {
        iVar1 = unaff_w19;
        FUN_006d3a9c();
        if (iVar1 == 0) {
          return;
        }
        if (unaff_x20 == 0) {
          return;
        }
        func_0x006d411c();
      } while (iVar1 != 0);
    }
  }
  return;
}



/* Entry: 006d3fe4; end: 006d4147;  */

byte FUN_006d3fe4(long *param_1,ulong *param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  
  uVar4 = 0;
  bVar2 = 0;
  lVar3 = param_1[1];
  while( true ) {
    lVar3 = lVar3 + -1;
    *param_2 = uVar4;
    if (lVar3 == -1) {
      return bVar2;
    }
    pbVar5 = (byte *)*param_1;
    *param_1 = (long)(pbVar5 + 1);
    param_1[1] = lVar3;
    bVar1 = *pbVar5;
    if (bVar1 == 0x2e) {
      if (lVar3 == 0) {
        return 0;
      }
      return bVar2;
    }
    if (bVar1 - 0x3a < 0xfffffff6) {
      return 0;
    }
    if ((bVar2 & uVar4 == 0) != 0) break;
    if (0x1999999999999999 < uVar4) {
      return 0;
    }
    uVar4 = uVar4 * 10;
    uVar6 = 0x2f - (ulong)bVar1;
    if (uVar6 <= uVar4 && uVar4 - uVar6 != 0) {
      return 0;
    }
    uVar4 = (bVar1 + uVar4) - 0x30;
    bVar2 = 1;
  }
  return 0;
}



/* Entry: 006d4148; end: 006d4183;  */

bool FUN_006d4148(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *unaff_x19;
  long *unaff_x20;
  
  func_0x006d4c64();
  if (*param_2 != 0) {
    func_0x00701ed0();
  }
  lVar1 = *unaff_x20;
  FUN_007020bc(lVar1,unaff_x20[1]);
  *unaff_x19 = lVar1;
  return lVar1 != 0;
}



/* Entry: 006d4184; end: 006d41ab;  */

bool FUN_006d4184(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_006d41ac(lVar1,0,param_1[1]);
  return lVar1 != 0;
}



/* Entry: 006d41ac; end: 006d41bb;  */

undefined8 FUN_006d41ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memchr_0099a3e8)();
    return param_1;
  }
  return 0;
}



/* Entry: 006d41bc; end: 006d41eb;  */

bool FUN_006d41bc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == param_1[1]) {
    uVar1 = *param_1;
    FUN_00701f80(uVar1);
    return (int)uVar1 == 0;
  }
  return false;
}



/* Entry: 006d41ec; end: 006d4223;  */

void FUN_006d41ec(undefined8 param_1,undefined2 *param_2)

{
  undefined2 auStack_28 [4];
  
  FUN_006d4224(param_1,auStack_28,2);
  if ((int)param_1 != 0) {
    *param_2 = auStack_28[0];
  }
  return;
}



/* Entry: 006d4224; end: 006d425f;  */

undefined8 FUN_006d4224(long *param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  byte *pbVar2;
  
  if (param_3 <= (ulong)param_1[1]) {
    uVar1 = 0;
    pbVar2 = (byte *)*param_1;
    *param_1 = (long)(pbVar2 + param_3);
    param_1[1] = param_1[1] - param_3;
    for (; param_3 != 0; param_3 = param_3 - 1) {
      uVar1 = (ulong)*pbVar2 | uVar1 << 8;
      pbVar2 = pbVar2 + 1;
    }
    *param_2 = uVar1;
    return 1;
  }
  return 0;
}



/* Entry: 006d4260; end: 006d42cf;  */

void FUN_006d4260(undefined8 param_1,undefined4 *param_2)

{
  undefined4 auStack_28 [2];
  
  FUN_006d4224(param_1,auStack_28,3);
  if ((int)param_1 != 0) {
    *param_2 = auStack_28[0];
  }
  return;
}



/* Entry: 006d42d0; end: 006d42d7;  */

void FUN_006d42d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  ulong uStack_28;
  
  func_0x006d4c64(param_1,param_2,1);
  iVar1 = (int)param_1;
  FUN_006d4224();
  if ((iVar1 != 0) && (uStack_28 <= (ulong)unaff_x20[1])) {
    lVar2 = *unaff_x20;
    *unaff_x20 = lVar2 + uStack_28;
    unaff_x20[1] = unaff_x20[1] - uStack_28;
    *unaff_x19 = lVar2;
    unaff_x19[1] = uStack_28;
  }
  return;
}



/* Entry: 006d42d8; end: 006d432b;  */

void FUN_006d42d8(int param_1)

{
  long lVar1;
  long *unaff_x19;
  long *unaff_x20;
  ulong uStack_28;
  
  func_0x006d4c64();
  FUN_006d4224();
  if ((param_1 != 0) && (uStack_28 <= (ulong)unaff_x20[1])) {
    lVar1 = *unaff_x20;
    *unaff_x20 = lVar1 + uStack_28;
    unaff_x20[1] = unaff_x20[1] - uStack_28;
    *unaff_x19 = lVar1;
    unaff_x19[1] = uStack_28;
  }
  return;
}



/* Entry: 006d432c; end: 006d433b;  */

void FUN_006d432c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  ulong uStack_28;
  
  func_0x006d4c64(param_1,param_2,2);
  iVar1 = (int)param_1;
  FUN_006d4224();
  if ((iVar1 != 0) && (uStack_28 <= (ulong)unaff_x20[1])) {
    lVar2 = *unaff_x20;
    *unaff_x20 = lVar2 + uStack_28;
    unaff_x20[1] = unaff_x20[1] - uStack_28;
    *unaff_x19 = lVar2;
    unaff_x19[1] = uStack_28;
  }
  return;
}



/* Entry: 006d433c; end: 006d4393;  */

void FUN_006d433c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *unaff_x19;
  long *unaff_x20;
  
  func_0x006d4c64();
  lVar1 = *param_1;
  uVar2 = param_1[1];
  lVar3 = lVar1;
  FUN_006d41ac(lVar1,param_3,uVar2);
  if (lVar3 != 0) {
    uVar4 = lVar3 - lVar1;
    if (uVar4 <= uVar2) {
      *unaff_x20 = lVar1 + uVar4;
      unaff_x20[1] = uVar2 - uVar4;
      *unaff_x19 = lVar1;
      unaff_x19[1] = uVar4;
    }
  }
  return;
}



/* Entry: 006d4394; end: 006d43a3;  */

/* WARNING: Removing unreachable block (ram,0x006d44f8) */
/* WARNING: Removing unreachable block (ram,0x006d4464) */
/* WARNING: Removing unreachable block (ram,0x006d4468) */
/* WARNING: Removing unreachable block (ram,0x006d4470) */
/* WARNING: Removing unreachable block (ram,0x006d4474) */
/* WARNING: Removing unreachable block (ram,0x006d447c) */
/* WARNING: Removing unreachable block (ram,0x006d4490) */
/* WARNING: Removing unreachable block (ram,0x006d44a0) */
/* WARNING: Removing unreachable block (ram,0x006d4514) */

void FUN_006d4394(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,ulong *param_4)

{
  byte bVar1;
  byte **ppbVar2;
  int iVar3;
  long lVar4;
  long *unaff_x19;
  long *unaff_x20;
  ulong uVar5;
  ulong uVar6;
  ulong uStack_70;
  undefined4 uStack_64;
  byte *pbStack_60;
  long lStack_58;
  
  iVar3 = 0;
  func_0x006d4c64();
  lStack_58 = param_1[1];
  pbStack_60 = (byte *)*param_1;
  if (iVar3 != 0) {
                    /* WARNING: Read-only address (ram,0x00000000) is written */
                    /* WARNING: Read-only address (ram,0x00000000) is written */
    MACH_HEADER.magic = 0;
  }
  func_0x006d4c50();
  if ((int)param_1 != 0) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = uStack_64;
    }
    if (lStack_58 != 0) {
      bVar1 = *pbStack_60;
      lStack_58 = lStack_58 + -1;
      uVar6 = unaff_x20[1] - lStack_58;
      if ((char)bVar1 < '\0') {
        uVar5 = (ulong)bVar1 & 0x7f;
        if ((int)uVar5 - 5U < 0xfffffffc) {
          return;
        }
        ppbVar2 = &pbStack_60;
        pbStack_60 = pbStack_60 + 1;
        FUN_006d4224(ppbVar2,&uStack_70,uVar5);
        if ((int)ppbVar2 == 0) {
          return;
        }
        if (uStack_70 < 0x80) {
          return;
        }
        if (uStack_70 >> (uVar5 * 8 - 8 & 0x3f) == 0) {
          return;
        }
        uVar6 = uVar6 + uVar5;
        if (CARRY8(uStack_70,uVar6)) {
          return;
        }
        uStack_70 = uStack_70 + uVar6;
        if (param_4 != (ulong *)0x0) {
          *param_4 = uVar6;
        }
      }
      else {
        uStack_70 = uVar6 + bVar1;
        if (param_4 != (ulong *)0x0) {
          *param_4 = uVar6;
        }
      }
      if (uStack_70 <= (ulong)unaff_x20[1]) {
        lVar4 = *unaff_x20;
        *unaff_x20 = lVar4 + uStack_70;
        unaff_x20[1] = unaff_x20[1] - uStack_70;
        if (unaff_x19 != (long *)0x0) {
          *unaff_x19 = lVar4;
          unaff_x19[1] = uStack_70;
        }
      }
    }
  }
                    /* WARNING: Read-only address (ram,0x00000000) is written */
  return;
}



/* Entry: 006d43a4; end: 006d4537;  */

void FUN_006d43a4(undefined8 *param_1,undefined8 param_2,uint *param_3,ulong *param_4,
                 undefined4 *param_5,undefined4 *param_6,int param_7)

{
  byte bVar1;
  byte **ppbVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x19;
  long *unaff_x20;
  ulong uVar6;
  ulong uVar7;
  ulong uStack_70;
  uint uStack_64;
  byte *pbStack_60;
  long lStack_58;
  
  iVar3 = param_7;
  func_0x006d4c64();
  lStack_58 = param_1[1];
  pbStack_60 = (byte *)*param_1;
  if (iVar3 != 0) {
    *param_5 = 0;
    *param_6 = 0;
  }
  func_0x006d4c50();
  if ((int)param_1 != 0) {
    if (param_3 != (uint *)0x0) {
      *param_3 = uStack_64;
    }
    if (lStack_58 != 0) {
      bVar1 = *pbStack_60;
      lStack_58 = lStack_58 + -1;
      uVar4 = unaff_x20[1];
      uVar7 = uVar4 - lStack_58;
      if ((char)bVar1 < '\0') {
        uVar6 = (ulong)bVar1 & 0x7f;
        if (((param_7 != 0) && ((int)uVar6 == 0)) && ((uStack_64 >> 0x1d & 1) != 0)) {
          if (param_4 != (ulong *)0x0) {
            *param_4 = uVar7;
            uVar4 = unaff_x20[1];
          }
          *param_5 = 1;
          *param_6 = 1;
          if (uVar4 < uVar7) {
            return;
          }
          lVar5 = *unaff_x20;
          *unaff_x20 = lVar5 + uVar7;
          unaff_x20[1] = uVar4 - uVar7;
          if (unaff_x19 == (long *)0x0) {
            return;
          }
          *unaff_x19 = lVar5;
          unaff_x19[1] = uVar7;
          return;
        }
        if ((int)uVar6 - 5U < 0xfffffffc) {
          return;
        }
        ppbVar2 = &pbStack_60;
        pbStack_60 = pbStack_60 + 1;
        FUN_006d4224(ppbVar2,&uStack_70,uVar6);
        if ((int)ppbVar2 == 0) {
          return;
        }
        if (uStack_70 < 0x80) {
          if (param_7 == 0) {
            return;
          }
          *param_5 = 1;
        }
        if (uStack_70 >> (uVar6 * 8 - 8 & 0x3f) == 0) {
          if (param_7 == 0) {
            return;
          }
          *param_5 = 1;
        }
        uVar7 = uVar7 + uVar6;
        if (CARRY8(uStack_70,uVar7)) {
          return;
        }
        uStack_70 = uStack_70 + uVar7;
        if (param_4 != (ulong *)0x0) {
          *param_4 = uVar7;
        }
      }
      else {
        uStack_70 = uVar7 + bVar1;
        if (param_4 != (ulong *)0x0) {
          *param_4 = uVar7;
        }
      }
      if (uStack_70 <= (ulong)unaff_x20[1]) {
        lVar5 = *unaff_x20;
        *unaff_x20 = lVar5 + uStack_70;
        unaff_x20[1] = unaff_x20[1] - uStack_70;
        if (unaff_x19 != (long *)0x0) {
          *unaff_x19 = lVar5;
          unaff_x19[1] = uStack_70;
        }
      }
    }
  }
  return;
}



/* Entry: 006d4538; end: 006d4563;  */

void FUN_006d4538(void)

{
  FUN_006d43a4();
  return;
}



/* Entry: 006d4564; end: 006d456b;  */

undefined8 FUN_006d4564(undefined8 param_1,long *param_2,int param_3)

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
  if ((int)param_1 != 0 && iStack_3c == param_3) {
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



/* Entry: 006d456c; end: 006d4603;  */

undefined8 FUN_006d456c(undefined8 param_1,long *param_2,int param_3,int param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long alStack_50 [2];
  int iStack_3c;
  ulong uStack_38;
  
  plVar1 = alStack_50;
  if (param_2 != (long *)0x0) {
    plVar1 = param_2;
  }
  FUN_006d4394(param_1,plVar1,&iStack_3c,&uStack_38);
  if ((int)param_1 == 0 || iStack_3c != param_3) {
LAB_006d45d8:
    uVar3 = 0;
  }
  else {
    if (param_4 != 0) {
      plVar2 = alStack_50;
      if (param_2 != (long *)0x0) {
        plVar2 = param_2;
      }
      uVar4 = plVar2[1];
      if (uVar4 < uStack_38) goto LAB_006d45d8;
      *plVar1 = *plVar1 + uStack_38;
      plVar2[1] = uVar4 - uStack_38;
    }
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 006d4604; end: 006d4743;  */

undefined4 FUN_006d4604(long param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  
  if (*(long *)(param_1 + 8) != 0) {
    func_0x006d4c50();
    uVar1 = 0;
    if (param_2 == uStack_34) {
      uVar1 = (undefined4)param_1;
    }
    return uVar1;
  }
  return 0;
}



/* Entry: 006d4744; end: 006d476f;  */

undefined4 FUN_006d4744(undefined8 param_1)

{
  undefined4 uVar1;
  int iStack_14;
  
  FUN_006d4770(param_1,&iStack_14);
  uVar1 = 0;
  if (iStack_14 == 0) {
    uVar1 = (undefined4)param_1;
  }
  return uVar1;
}



/* Entry: 006d4770; end: 006d47bb;  */

bool FUN_006d4770(undefined8 *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  
  lVar4 = param_1[1];
  if (lVar4 != 0) {
    pbVar3 = (byte *)*param_1;
    bVar1 = *pbVar3;
    if (param_2 != (uint *)0x0) {
      *param_2 = (uint)(bVar1 >> 7);
    }
    if (lVar4 == 1) {
      return true;
    }
    bVar2 = pbVar3[1];
    if ((bVar1 != 0) || ((char)bVar2 < '\0')) {
      return bVar1 != 0xff || (uint)(int)(char)bVar2 < 0x80000000;
    }
  }
  return false;
}



/* Entry: 006d47bc; end: 006d4897;  */

void FUN_006d47bc(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1;
  FUN_006d4604(param_1,param_4);
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_006d4564(param_1,param_2,param_4);
    if ((int)param_1 == 0) {
      return;
    }
    uVar2 = 1;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar2;
  }
  return;
}



/* Entry: 006d4898; end: 006d4987;  */

void FUN_006d4898(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iStack_34;
  undefined1 auStack_30 [16];
  
  func_0x006d4c5c(param_1,auStack_30,param_3,param_3);
  if ((int)param_1 != 0) {
    if (iStack_34 == 0) {
      *param_2 = param_4;
    }
    else {
      func_0x006d46c4(auStack_30,param_2);
      func_0x006d4c70();
    }
  }
  return;
}



/* Entry: 006d4988; end: 006d49cf;  */

bool FUN_006d4988(undefined8 *param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    bVar1 = *(byte *)*param_1;
    if (bVar1 < 8) {
      if (bVar1 == 0) {
        return true;
      }
      if (lVar2 != 1) {
        return ((uint)((byte *)*param_1)[lVar2 + -1] & (-1 << (ulong)(bVar1 & 0x1f) ^ 0xffffffffU))
               == 0;
      }
    }
  }
  return false;
}



/* Entry: 006d49d0; end: 006d4b27;  */

void FUN_006d49d0(void)

{
  FUN_006d4988();
  return;
}



/* Entry: 006d4b28; end: 006d4b7f;  */

undefined8 FUN_006d4b28(long *param_1,ulong *param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  byte *pbVar4;
  
  uVar3 = 0;
  lVar2 = param_1[1];
  while( true ) {
    lVar2 = lVar2 + -1;
    if (lVar2 == -1) {
      return 0;
    }
    pbVar4 = (byte *)*param_1;
    *param_1 = (long)(pbVar4 + 1);
    param_1[1] = lVar2;
    if (uVar3 >> 0x39 != 0) break;
    bVar1 = *pbVar4;
    if ((uVar3 == 0) && (bVar1 == 0x80)) {
      return 0;
    }
    uVar3 = (ulong)bVar1 & 0x7f | uVar3 << 7;
    if (-1 < (char)bVar1) {
      *param_2 = uVar3;
      return 1;
    }
  }
  return 0;
}



/* Entry: 006d4b80; end: 006d4bfb;  */

void FUN_006d4b80(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [24];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_00702090(auStack_40,0x18,&UNK_009162c3);
  puVar1 = auStack_40;
  _strlen(puVar1);
  FUN_006d3b2c(param_1,auStack_40,puVar1);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 006d4bfc; end: 006d4c7b;  */

void FUN_006d4bfc(void)

{
  return;
}



/* Entry: 006d4c7c; end: 006d4d83;  */

undefined8 FUN_006d4c7c(long *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar1 = param_1[1];
  if (lVar1 == 0) {
    return 0;
  }
  pbVar3 = (byte *)*param_1;
  *param_1 = (long)(pbVar3 + 1);
  param_1[1] = lVar1 + -1;
  uVar5 = (uint)*pbVar3;
  if ((char)*pbVar3 < '\0') {
    if ((uVar5 & 0xe0) == 0xc0) {
      uVar6 = 0x80;
      uVar4 = 0x1f;
      lVar2 = 1;
    }
    else if ((uVar5 & 0xf0) == 0xe0) {
      uVar6 = 0x800;
      uVar4 = 0xf;
      lVar2 = 2;
    }
    else {
      if ((uVar5 & 0xf8) != 0xf0) {
        return 0;
      }
      uVar6 = 0x10000;
      uVar4 = 7;
      lVar2 = 3;
    }
    uVar5 = uVar4 & uVar5;
    pbVar3 = pbVar3 + 2;
    lVar1 = lVar1 + -2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      if (lVar1 == -1) {
        return 0;
      }
      *param_1 = (long)pbVar3;
      param_1[1] = lVar1;
      if ((pbVar3[-1] & 0xc0) != 0x80) {
        return 0;
      }
      uVar5 = pbVar3[-1] & 0x3f | uVar5 << 6;
      pbVar3 = pbVar3 + 1;
      lVar1 = lVar1 + -1;
    }
    uVar4 = uVar5;
    FUN_006d4d84();
    if (uVar4 == 0) {
      return 0;
    }
    if (uVar5 < uVar6) {
      return 0;
    }
  }
  *param_2 = uVar5;
  return 1;
}



/* Entry: 006d4d84; end: 006d4de7;  */

bool FUN_006d4d84(uint param_1)

{
  return (param_1 & 0x1ff800) != 0xd800 &&
         (((param_1 ^ 0xffffffff) & 0xfffe) != 0 &&
         (param_1 < 0x110000 && param_1 - 0xfdf0 < 0xffffffe0));
}



/* Entry: 006d4de8; end: 006d4e5f;  */

void FUN_006d4de8(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  ushort uStack_22;
  
  FUN_006d41ec(param_1,&uStack_22);
  if ((int)param_1 != 0) {
    uVar1 = (uint)uStack_22;
    FUN_006d4d84();
    if (uVar1 != 0) {
      *param_2 = (uint)uStack_22;
    }
  }
  return;
}



/* Entry: 006d4e60; end: 006d4f4b;  */

long FUN_006d4e60(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puStack_38;
  
  uVar1 = param_2;
  FUN_006d4d84();
  if (uVar1 == 0) {
    return 0;
  }
  if (0x7f < param_2) {
    if (0x7ff < param_2) {
      if (param_2 >> 0x10 == 0) {
        func_0x006d4fd8();
      }
      else {
        if (0x10 < param_2 >> 0x10) {
          return 0;
        }
        func_0x006d4fd8();
        if (uVar1 == 0) {
          return 0;
        }
        func_0x006d4fd8();
      }
      if (uVar1 == 0) {
        return 0;
      }
    }
    func_0x006d4fd8();
    if (uVar1 == 0) {
      return 0;
    }
    param_2 = param_2 & 0x3f | 0xffffff80;
  }
  uVar2 = (ulong)(param_2 & 0xff);
  func_0x006d40a4();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x006d413c();
  lVar3 = param_1;
  FUN_006d38e0();
  if ((int)lVar3 != 0) {
    lVar3 = 0;
    while (lVar3 == 0) {
      *puStack_38 = (char)uVar2;
      uVar2 = uVar2 >> 8;
      lVar3 = -1;
    }
    lVar3 = 1;
    if (uVar2 != 0) {
      *(undefined1 *)(param_1 + 0x19) = 1;
      lVar3 = 0;
    }
  }
  return lVar3;
}



/* Entry: 006d4f4c; end: 006d4f5b;  */

long FUN_006d4f4c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uStack_38;
  
  if (0xff < (uint)param_2) {
    return 0;
  }
  func_0x006d40a4();
  if ((int)param_1 != 0) {
    func_0x006d413c();
    lVar1 = param_1;
    FUN_006d38e0();
    if ((int)lVar1 != 0) {
      lVar1 = 0;
      while (lVar1 == 0) {
        *uStack_38 = (char)param_2;
        param_2 = param_2 >> 8;
        lVar1 = -1;
      }
      lVar1 = 1;
      if (param_2 != 0) {
        *(undefined1 *)(param_1 + 0x19) = 1;
        lVar1 = 0;
      }
    }
    return lVar1;
  }
  return param_1;
}



/* Entry: 006d4f5c; end: 006d4fc7;  */

long FUN_006d4f5c(int param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong unaff_x19;
  long unaff_x20;
  undefined8 uStack_38;
  
  if (((param_2 & 0xffff0000) == 0) && (FUN_006d4fc8(), param_1 != 0)) {
    func_0x006d40a4();
    if ((int)unaff_x20 != 0) {
      func_0x006d413c();
      lVar1 = unaff_x20;
      FUN_006d38e0();
      if ((int)lVar1 != 0) {
        for (uVar2 = 1; uVar2 < 2; uVar2 = uVar2 - 1) {
          *(char *)(uStack_38 + uVar2) = (char)unaff_x19;
          unaff_x19 = unaff_x19 >> 8;
        }
        lVar1 = 1;
        if (unaff_x19 != 0) {
          *(undefined1 *)(unaff_x20 + 0x19) = 1;
          lVar1 = 0;
        }
      }
      return lVar1;
    }
    return unaff_x20;
  }
  return 0;
}



/* Entry: 006d4fc8; end: 006d4ffb;  */

bool FUN_006d4fc8(undefined8 param_1,uint param_2)

{
  return (param_2 & 0x1ff800) != 0xd800 &&
         (((param_2 ^ 0xffffffff) & 0xfffe) != 0 &&
         (param_2 < 0x110000 && param_2 - 0xfdf0 < 0xffffffe0));
}



/* Entry: 006d4ffc; end: 006d54eb;  */

/* WARNING: Possible PIC construction at 0x006d538c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006d5398: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006d53ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006d53ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006d53b0) */
/* WARNING: Removing unreachable block (ram,0x006d539c) */
/* WARNING: Removing unreachable block (ram,0x006d53bc) */
/* WARNING: Removing unreachable block (ram,0x006d53c4) */
/* WARNING: Removing unreachable block (ram,0x006d53ac) */
/* WARNING: Removing unreachable block (ram,0x006d5390) */
/* WARNING: Removing unreachable block (ram,0x006d53f0) */
/* WARNING: Removing unreachable block (ram,0x006d5400) */
/* WARNING: Removing unreachable block (ram,0x006d53d4) */
/* WARNING: Removing unreachable block (ram,0x006d5404) */
/* WARNING: Removing unreachable block (ram,0x006d5444) */
/* WARNING: Removing unreachable block (ram,0x006d5450) */
/* WARNING: Removing unreachable block (ram,0x006d5408) */
/* WARNING: Removing unreachable block (ram,0x006d5410) */
/* WARNING: Removing unreachable block (ram,0x006d5454) */
/* WARNING: Removing unreachable block (ram,0x006d541c) */
/* WARNING: Removing unreachable block (ram,0x006d5420) */
/* WARNING: Removing unreachable block (ram,0x006d5428) */
/* WARNING: Removing unreachable block (ram,0x006d5434) */
/* WARNING: Removing unreachable block (ram,0x006d545c) */
/* WARNING: Removing unreachable block (ram,0x006d5468) */
/* WARNING: Removing unreachable block (ram,0x006d5474) */
/* WARNING: Removing unreachable block (ram,0x006d5478) */
/* WARNING: Removing unreachable block (ram,0x006d5480) */
/* WARNING: Removing unreachable block (ram,0x006d5440) */
/* WARNING: Removing unreachable block (ram,0x006d548c) */
/* WARNING: Removing unreachable block (ram,0x006d5490) */
/* WARNING: Removing unreachable block (ram,0x006d5494) */
/* WARNING: Removing unreachable block (ram,0x006d53e0) */
/* WARNING: Removing unreachable block (ram,0x006d53e8) */
/* WARNING: Removing unreachable block (ram,0x006d5388) */

byte * FUN_006d4ffc(byte *param_1,byte *param_2,ulong param_3,ulong *param_4,ulong *param_5,
                   uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  ulong unaff_x19;
  byte *pbVar22;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  ulong uVar23;
  byte abStack_200 [104];
  long lStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined1 *puStack_140;
  undefined8 uStack_138;
  byte abStack_130 [64];
  ulong auStack_f0 [3];
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  uint uStack_c0;
  undefined4 uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_d8 = param_4[1];
  auStack_f0[2] = *param_4;
  uStack_c8 = param_4[3];
  uStack_d0 = param_4[2];
  auStack_f0[1] = 0x6b20657479622d32;
  auStack_f0[0] = 0x3320646e61707865;
  uStack_c0 = param_6;
  uVar23 = *param_5;
  uStack_bc = (undefined4)uVar23;
  uStack_b8 = (uint)(uVar23 >> 0x20);
  uVar17 = param_5[1];
  uStack_b4 = (uint)uVar17;
  for (; param_3 != 0; param_3 = param_3 - uVar5) {
    unaff_x25 = auStack_f0[2] & 0xffffffff;
    uStack_a0._4_4_ = (uint)(auStack_f0[2] >> 0x20);
    param_4 = (ulong *)(auStack_f0[0] & 0xffffffff);
    uStack_b0._4_4_ = (uint)(auStack_f0[0] >> 0x20);
    unaff_x19 = (ulong)uStack_c0;
    unaff_x21 = uVar23 & 0xffffffff;
    unaff_x23 = uStack_d0 & 0xffffffff;
    unaff_x24 = uStack_d0 >> 0x20;
    uStack_98._0_4_ = (uint)uStack_d8;
    uStack_98._4_4_ = (uint)(uStack_d8 >> 0x20);
    uVar18 = 0x79622d32;
    unaff_x20 = 0x6b206574;
    unaff_x22 = (ulong)uStack_b8;
    iVar20 = -0x14;
    uStack_88._0_4_ = (uint)uStack_c8;
    uStack_88._4_4_ = (uint)(uStack_c8 >> 0x20);
    uVar19 = (uint)uVar17;
    do {
      uVar1 = (uint)unaff_x25 + (int)param_4;
      uVar6 = uVar1 ^ (uint)unaff_x19;
      uVar2 = (uVar6 >> 0x10 | uVar6 << 0x10) + (int)unaff_x23;
      uVar7 = uVar2 ^ (uint)unaff_x25;
      uVar1 = (uVar7 >> 0x14 | uVar7 << 0xc) + uVar1;
      uVar8 = uVar1 ^ (uVar6 >> 0x10 | uVar6 << 0x10);
      uVar2 = (uVar8 >> 0x18 | uVar8 << 8) + uVar2;
      uVar9 = uVar2 ^ (uVar7 >> 0x14 | uVar7 << 0xc);
      uVar7 = uStack_a0._4_4_ + uStack_b0._4_4_ ^ (uint)unaff_x21;
      uVar3 = (uVar7 >> 0x10 | uVar7 << 0x10) + (int)unaff_x24;
      uVar10 = uVar3 ^ uStack_a0._4_4_;
      uVar6 = (uVar10 >> 0x14 | uVar10 << 0xc) + uStack_a0._4_4_ + uStack_b0._4_4_;
      uVar11 = uVar6 ^ (uVar7 >> 0x10 | uVar7 << 0x10);
      uVar3 = (uVar11 >> 0x18 | uVar11 << 8) + uVar3;
      uVar12 = uVar3 ^ (uVar10 >> 0x14 | uVar10 << 0xc);
      uVar10 = (uint)uStack_98 + uVar18 ^ (uint)unaff_x22;
      uStack_88._0_4_ = (uVar10 >> 0x10 | uVar10 << 0x10) + (uint)uStack_88;
      uVar13 = (uint)uStack_88 ^ (uint)uStack_98;
      uVar7 = (uVar13 >> 0x14 | uVar13 << 0xc) + (uint)uStack_98 + uVar18;
      uVar14 = uVar7 ^ (uVar10 >> 0x10 | uVar10 << 0x10);
      uStack_88._0_4_ = (uVar14 >> 0x18 | uVar14 << 8) + (uint)uStack_88;
      uVar18 = (uint)uStack_88 ^ (uVar13 >> 0x14 | uVar13 << 0xc);
      uStack_b0._4_4_ = uVar18 >> 0x19 | uVar18 << 7;
      unaff_x28 = (ulong)uStack_b0._4_4_;
      uVar10 = uStack_98._4_4_ + (int)unaff_x20;
      uVar19 = uVar10 ^ uVar19;
      uStack_88._4_4_ = (uVar19 >> 0x10 | uVar19 << 0x10) + uStack_88._4_4_;
      uStack_98._4_4_ = uStack_88._4_4_ ^ uStack_98._4_4_;
      uVar10 = (uStack_98._4_4_ >> 0x14 | uStack_98._4_4_ << 0xc) + uVar10;
      uVar19 = uVar10 ^ (uVar19 >> 0x10 | uVar19 << 0x10);
      uStack_88._4_4_ = (uVar19 >> 0x18 | uVar19 << 8) + uStack_88._4_4_;
      uVar13 = uStack_88._4_4_ ^ (uStack_98._4_4_ >> 0x14 | uStack_98._4_4_ << 0xc);
      uVar1 = (uVar12 >> 0x19 | uVar12 << 7) + uVar1;
      uVar19 = uVar1 ^ (uVar19 >> 0x18 | uVar19 << 8);
      uStack_88._0_4_ = (uVar19 >> 0x10 | uVar19 << 0x10) + (uint)uStack_88;
      uVar12 = (uint)uStack_88 ^ (uVar12 >> 0x19 | uVar12 << 7);
      uVar1 = (uVar12 >> 0x14 | uVar12 << 0xc) + uVar1;
      param_4 = (ulong *)(ulong)uVar1;
      uVar19 = uVar1 ^ (uVar19 >> 0x10 | uVar19 << 0x10);
      uVar19 = uVar19 >> 0x18 | uVar19 << 8;
      uStack_88._0_4_ = uVar19 + (uint)uStack_88;
      uVar12 = (uint)uStack_88 ^ (uVar12 >> 0x14 | uVar12 << 0xc);
      uStack_a0._4_4_ = uVar12 >> 0x19 | uVar12 << 7;
      uStack_b0._4_4_ = uStack_b0._4_4_ + uVar6;
      uVar6 = uStack_b0._4_4_ ^ (uVar8 >> 0x18 | uVar8 << 8);
      uStack_88._4_4_ = (uVar6 >> 0x10 | uVar6 << 0x10) + uStack_88._4_4_;
      uVar18 = uStack_88._4_4_ ^ (uVar18 >> 0x19 | uVar18 << 7);
      uStack_b0._4_4_ = (uVar18 >> 0x14 | uVar18 << 0xc) + uStack_b0._4_4_;
      uVar6 = uStack_b0._4_4_ ^ (uVar6 >> 0x10 | uVar6 << 0x10);
      uVar12 = uVar6 >> 0x18 | uVar6 << 8;
      unaff_x19 = (ulong)uVar12;
      uStack_88._4_4_ = uVar12 + uStack_88._4_4_;
      uVar18 = uStack_88._4_4_ ^ (uVar18 >> 0x14 | uVar18 << 0xc);
      uStack_98._0_4_ = uVar18 >> 0x19 | uVar18 << 7;
      uVar7 = (uVar13 >> 0x19 | uVar13 << 7) + uVar7;
      uVar6 = uVar7 ^ (uVar11 >> 0x18 | uVar11 << 8);
      uVar2 = uVar2 + (uVar6 >> 0x10 | uVar6 << 0x10);
      uVar8 = uVar2 ^ (uVar13 >> 0x19 | uVar13 << 7);
      uVar18 = uVar8 >> 0x14 | uVar8 << 0xc;
      unaff_x27 = (ulong)uVar18;
      uVar18 = uVar18 + uVar7;
      uVar6 = uVar18 ^ (uVar6 >> 0x10 | uVar6 << 0x10);
      uVar11 = uVar6 >> 0x18 | uVar6 << 8;
      unaff_x21 = (ulong)uVar11;
      uVar2 = uVar11 + uVar2;
      unaff_x23 = (ulong)uVar2;
      uVar6 = uVar2 ^ (uVar8 >> 0x14 | uVar8 << 0xc);
      uStack_98._4_4_ = uVar6 >> 0x19 | uVar6 << 7;
      uVar10 = (uVar9 >> 0x19 | uVar9 << 7) + uVar10;
      uVar7 = uVar10 ^ (uVar14 >> 0x18 | uVar14 << 8);
      uVar3 = (uVar7 >> 0x10 | uVar7 << 0x10) + uVar3;
      uVar8 = uVar3 ^ (uVar9 >> 0x19 | uVar9 << 7);
      uVar6 = uVar8 >> 0x14 | uVar8 << 0xc;
      unaff_x26 = (ulong)uVar6;
      uVar6 = uVar6 + uVar10;
      unaff_x20 = (ulong)uVar6;
      uVar7 = uVar6 ^ (uVar7 >> 0x10 | uVar7 << 0x10);
      uVar10 = uVar7 >> 0x18 | uVar7 << 8;
      unaff_x22 = (ulong)uVar10;
      uVar3 = uVar10 + uVar3;
      unaff_x24 = (ulong)uVar3;
      uVar7 = uVar3 ^ (uVar8 >> 0x14 | uVar8 << 0xc);
      iVar20 = iVar20 + 2;
      uVar7 = uVar7 >> 0x19 | uVar7 << 7;
      unaff_x25 = (ulong)uVar7;
    } while (iVar20 != 0);
    uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar7);
    uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar1);
    uStack_80 = CONCAT44(uVar11,uVar12);
    uStack_90 = CONCAT44(uVar3,uVar2);
    uStack_a8 = CONCAT44(uVar6,uVar18);
    uStack_78 = CONCAT44(uVar19,uVar10);
    for (lVar21 = 0; lVar21 != 0x40; lVar21 = lVar21 + 4) {
      *(int *)((long)&uStack_b0 + lVar21) =
           *(int *)((long)&uStack_b0 + lVar21) + *(int *)((long)auStack_f0 + lVar21);
    }
    for (lVar21 = 0; lVar21 != 0x40; lVar21 = lVar21 + 4) {
      *(undefined4 *)(abStack_130 + lVar21) = *(undefined4 *)((long)&uStack_b0 + lVar21);
    }
    uVar4 = param_3;
    pbVar22 = param_1;
    pbVar15 = param_2;
    pbVar16 = abStack_130;
    uVar5 = param_3;
    if (0x3f < param_3) {
      uVar4 = 0x40;
      pbVar16 = abStack_130;
      uVar5 = uVar4;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      param_4 = (ulong *)(ulong)*pbVar16;
      *pbVar22 = *pbVar16 ^ *pbVar15;
      pbVar22 = pbVar22 + 1;
      pbVar15 = pbVar15 + 1;
      pbVar16 = pbVar16 + 1;
    }
    param_1 = param_1 + uVar5;
    param_2 = param_2 + uVar5;
    uStack_c0 = uStack_c0 + 1;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  uStack_138 = 0x6d5310;
  lStack_198 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar22 = (byte *)(ulong)*(uint *)(param_1 + 8);
  uStack_190 = unaff_x28;
  uStack_188 = unaff_x27;
  uStack_180 = unaff_x26;
  uStack_178 = unaff_x25;
  uStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  uStack_160 = unaff_x22;
  uStack_158 = unaff_x21;
  uStack_150 = unaff_x20;
  uStack_148 = unaff_x19;
  puStack_140 = &stack0xfffffffffffffff0;
  if (param_4 != (ulong *)0x0) {
    abStack_200[8] = 0;
    abStack_200[9] = 0;
    abStack_200[10] = 0;
    abStack_200[0xb] = 0;
    abStack_200[0xc] = 0;
    abStack_200[0xd] = 0;
    abStack_200[0xe] = 0;
    abStack_200[0xf] = 0;
    abStack_200[0] = 0;
    abStack_200[1] = 0;
    abStack_200[2] = 0;
    abStack_200[3] = 0;
    abStack_200[4] = 0;
    abStack_200[5] = 0;
    abStack_200[6] = 0;
    abStack_200[7] = 0;
    abStack_200[0x18] = 0;
    abStack_200[0x19] = 0;
    abStack_200[0x1a] = 0;
    abStack_200[0x1b] = 0;
    abStack_200[0x1c] = 0;
    abStack_200[0x1d] = 0;
    abStack_200[0x1e] = 0;
    abStack_200[0x1f] = 0;
    abStack_200[0x10] = 0;
    abStack_200[0x11] = 0;
    abStack_200[0x12] = 0;
    abStack_200[0x13] = 0;
    abStack_200[0x14] = 0;
    abStack_200[0x15] = 0;
    abStack_200[0x16] = 0;
    abStack_200[0x17] = 0;
    func_0x006d54fc();
    if ((int)param_1 != 0) goto FUN_006d54ec;
    pbVar22 = (byte *)0x0;
    FUN_006ea7fc(abStack_200);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_198) {
    return pbVar22;
  }
  ___stack_chk_fail();
FUN_006d54ec:
  return abStack_200;
}



/* Entry: 006d54ec; end: 006d553b;  */

undefined1 * FUN_006d54ec(void)

{
  return &stack0x00000020;
}



/* Entry: 006d553c; end: 006d5597;  */

undefined8 FUN_006d553c(long param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = 0x10;
  if (param_4 != 0) {
    uVar1 = param_4;
  }
  if (0x10 < uVar1) {
    func_0x006d5a08();
    func_0x006d59e4();
    return 0;
  }
  if (param_3 == 0x20) {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    uVar4 = param_2[2];
    *(undefined8 *)(param_1 + 0x20) = param_2[3];
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(char *)(param_1 + 0x250) = (char)uVar1;
    return 1;
  }
  return 0;
}



/* Entry: 006d5598; end: 006d559b;  */

void FUN_006d5598(void)

{
  return;
}



/* Entry: 006d559c; end: 006d575b;  */

/* WARNING: Possible PIC construction at 0x006d56c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006d5834: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006d5944: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006d59b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006d57f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006d5734: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006d57f4) */
/* WARNING: Removing unreachable block (ram,0x006d59bc) */
/* WARNING: Removing unreachable block (ram,0x006d59cc) */
/* WARNING: Removing unreachable block (ram,0x006d59c0) */
/* WARNING: Removing unreachable block (ram,0x006d5948) */
/* WARNING: Removing unreachable block (ram,0x006d5968) */
/* WARNING: Removing unreachable block (ram,0x006d5990) */
/* WARNING: Removing unreachable block (ram,0x006d59a8) */
/* WARNING: Removing unreachable block (ram,0x006d5998) */
/* WARNING: Removing unreachable block (ram,0x006d594c) */
/* WARNING: Removing unreachable block (ram,0x006d5838) */
/* WARNING: Removing unreachable block (ram,0x006d585c) */
/* WARNING: Removing unreachable block (ram,0x006d583c) */
/* WARNING: Removing unreachable block (ram,0x006d56cc) */
/* WARNING: Removing unreachable block (ram,0x006d5758) */
/* WARNING: Removing unreachable block (ram,0x006d57b8) */
/* WARNING: Removing unreachable block (ram,0x006d5788) */
/* WARNING: Removing unreachable block (ram,0x006d5820) */
/* WARNING: Removing unreachable block (ram,0x006d579c) */
/* WARNING: Removing unreachable block (ram,0x006d57c4) */
/* WARNING: Removing unreachable block (ram,0x006d57ac) */
/* WARNING: Removing unreachable block (ram,0x006d5828) */
/* WARNING: Removing unreachable block (ram,0x006d5830) */
/* WARNING: Removing unreachable block (ram,0x006d56d0) */
/* WARNING: Removing unreachable block (ram,0x006d5738) */
/* WARNING: Removing unreachable block (ram,0x006d573c) */
/* WARNING: Removing unreachable block (ram,0x006d574c) */

void FUN_006d559c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5,
                 undefined8 param_6,long param_7,undefined8 param_8,ulong param_9,long param_10,
                 ulong param_11,undefined8 param_12,ulong param_13)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_370 [512];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  byte abStack_b0 [80];
  
  func_0x006d5a14();
  uVar3 = (ulong)*(byte *)(param_1 + 0x250);
  uVar4 = param_11 + uVar3;
  if (!CARRY8(param_11,uVar3)) {
    if (param_5 < uVar4) {
      func_0x006d5a08();
      goto LAB_006d56bc;
    }
    if (param_7 != 0xc) {
      func_0x006d5a08();
      goto LAB_006d56bc;
    }
    if (param_9 < 0x3fffffffc0) {
      uStack_b8 = param_12;
      if (param_11 != 0) {
        uStack_e8 = param_13;
        uVar2 = 0;
        uVar6 = param_9 >> 6;
        uStack_e0 = param_9;
        uVar5 = param_9 & 0x3f;
        uStack_d8 = param_8;
        uStack_d0 = param_2;
        uStack_c8 = uVar4;
        uStack_c0 = param_4;
        while (param_8 = uStack_d8, param_4 = uStack_c0, uVar4 = uStack_c8, param_2 = uStack_d0,
              param_13 = uStack_e8, param_9 = uStack_e0, uVar2 < param_11) {
          uVar6 = (ulong)((int)uVar6 + 1);
          abStack_b0[0x28] = 0;
          abStack_b0[0x29] = 0;
          abStack_b0[0x2a] = 0;
          abStack_b0[0x2b] = 0;
          abStack_b0[0x2c] = 0;
          abStack_b0[0x2d] = 0;
          abStack_b0[0x2e] = 0;
          abStack_b0[0x2f] = 0;
          abStack_b0[0x20] = 0;
          abStack_b0[0x21] = 0;
          abStack_b0[0x22] = 0;
          abStack_b0[0x23] = 0;
          abStack_b0[0x24] = 0;
          abStack_b0[0x25] = 0;
          abStack_b0[0x26] = 0;
          abStack_b0[0x27] = 0;
          abStack_b0[0x38] = 0;
          abStack_b0[0x39] = 0;
          abStack_b0[0x3a] = 0;
          abStack_b0[0x3b] = 0;
          abStack_b0[0x3c] = 0;
          abStack_b0[0x3d] = 0;
          abStack_b0[0x3e] = 0;
          abStack_b0[0x3f] = 0;
          abStack_b0[0x30] = 0;
          abStack_b0[0x31] = 0;
          abStack_b0[0x32] = 0;
          abStack_b0[0x33] = 0;
          abStack_b0[0x34] = 0;
          abStack_b0[0x35] = 0;
          abStack_b0[0x36] = 0;
          abStack_b0[0x37] = 0;
          abStack_b0[8] = 0;
          abStack_b0[9] = 0;
          abStack_b0[10] = 0;
          abStack_b0[0xb] = 0;
          abStack_b0[0xc] = 0;
          abStack_b0[0xd] = 0;
          abStack_b0[0xe] = 0;
          abStack_b0[0xf] = 0;
          abStack_b0[0] = 0;
          abStack_b0[1] = 0;
          abStack_b0[2] = 0;
          abStack_b0[3] = 0;
          abStack_b0[4] = 0;
          abStack_b0[5] = 0;
          abStack_b0[6] = 0;
          abStack_b0[7] = 0;
          abStack_b0[0x18] = 0;
          abStack_b0[0x19] = 0;
          abStack_b0[0x1a] = 0;
          abStack_b0[0x1b] = 0;
          abStack_b0[0x1c] = 0;
          abStack_b0[0x1d] = 0;
          abStack_b0[0x1e] = 0;
          abStack_b0[0x1f] = 0;
          abStack_b0[0x10] = 0;
          abStack_b0[0x11] = 0;
          abStack_b0[0x12] = 0;
          abStack_b0[0x13] = 0;
          abStack_b0[0x14] = 0;
          abStack_b0[0x15] = 0;
          abStack_b0[0x16] = 0;
          abStack_b0[0x17] = 0;
          FUN_006d4ffc(abStack_b0,abStack_b0,0x40,param_1 + 8,param_6,uVar6);
          for (; uVar5 < 0x40 && uVar2 < param_11; uVar5 = uVar5 + 1) {
            *(byte *)(param_3 + uVar2) = abStack_b0[uVar5] ^ *(byte *)(param_10 + uVar2);
            uVar2 = uVar2 + 1;
          }
          uVar5 = 0;
        }
      }
      func_0x006d5a24(param_2,param_8,param_9,param_1 + 8);
      uVar1 = uStack_b8;
      uStack_f0 = param_11;
      uStack_140 = param_11;
      uStack_f8 = 0x6d5738;
      uStack_138 = param_2;
      lStack_130 = param_1;
      uStack_128 = uVar4;
      uStack_120 = param_6;
      uStack_118 = uVar3;
      lStack_110 = param_3;
      uStack_108 = param_4;
      puStack_100 = &stack0xfffffffffffffff0;
      func_0x006d5a14();
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      FUN_006d4ffc(&uStack_170,&uStack_170,0x20);
      func_0x00705208(auStack_370,&uStack_170);
      FUN_00705288(auStack_370,uVar1,param_13);
      if ((param_13 & 0xf) != 0) {
        func_0x006d59f0(param_13 & 0xf);
      }
      FUN_00705288(auStack_370,param_2,param_9);
      FUN_00705288(auStack_370,param_3,param_11);
      uVar4 = param_11 + param_9 & 0xf;
      if (uVar4 != 0) {
        func_0x006d59f0(uVar4);
      }
      FUN_006d596c(auStack_370,param_13);
      FUN_006d596c(auStack_370,param_11 + param_9);
      FUN_00705588(auStack_370,abStack_b0);
      return;
    }
  }
  func_0x006d5a08();
LAB_006d56bc:
  func_0x006d59e4();
  return;
}



/* Entry: 006d575c; end: 006d596b;  */

/* WARNING: Possible PIC construction at 0x006d5834: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006d5944: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006d59b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006d57f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006d59bc) */
/* WARNING: Removing unreachable block (ram,0x006d59cc) */
/* WARNING: Removing unreachable block (ram,0x006d59c0) */
/* WARNING: Removing unreachable block (ram,0x006d5948) */
/* WARNING: Removing unreachable block (ram,0x006d5968) */
/* WARNING: Removing unreachable block (ram,0x006d5990) */
/* WARNING: Removing unreachable block (ram,0x006d59a8) */
/* WARNING: Removing unreachable block (ram,0x006d5998) */
/* WARNING: Removing unreachable block (ram,0x006d594c) */
/* WARNING: Removing unreachable block (ram,0x006d5838) */
/* WARNING: Removing unreachable block (ram,0x006d585c) */
/* WARNING: Removing unreachable block (ram,0x006d583c) */
/* WARNING: Removing unreachable block (ram,0x006d57f4) */

void FUN_006d575c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,ulong param_6,undefined8 param_7,ulong param_8,undefined8 param_9,ulong param_10)

{
  undefined1 auStack_320 [512];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_90 [64];
  
  func_0x006d5a14();
  if (param_4 == 0xc) {
    if (param_8 == *(byte *)(param_1 + 0x250)) {
      if (param_6 < 0x3fffffffc0) {
        func_0x006d5a14();
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        FUN_006d4ffc(&uStack_120,&uStack_120,0x20);
        func_0x00705208(auStack_320,&uStack_120);
        FUN_00705288(auStack_320,param_9,param_10);
        if ((param_10 & 0xf) != 0) {
          func_0x006d59f0(param_10 & 0xf);
        }
        FUN_00705288(auStack_320,param_5,param_6);
        FUN_00705288(auStack_320,0,0);
        if ((param_6 & 0xf) != 0) {
          func_0x006d59f0(param_6 & 0xf);
        }
        FUN_006d596c(auStack_320,param_10);
        FUN_006d596c(auStack_320,param_6);
        FUN_00705588(auStack_320,auStack_90);
        return;
      }
      func_0x006d5a08();
    }
    else {
      func_0x006d5a08();
    }
  }
  else {
    func_0x006d5a08();
  }
  func_0x006d59e4();
  return;
}



/* Entry: 006d596c; end: 006d59cf;  */

void FUN_006d596c(undefined8 param_1,ulong param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 auStack_20 [8];
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  for (lVar2 = 0; uVar1 = lVar2 == 8, !(bool)uVar1; lVar2 = lVar2 + 1) {
    auStack_20[lVar2] = (char)param_2;
    param_2 = param_2 >> 8;
  }
  FUN_00705288(param_1,auStack_20,8);
  FUN_006d59d0(uStack_18);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 006d59d0; end: 006d5a3b;  */

void FUN_006d59d0(void)

{
  return;
}



/* Entry: 006d5a3c; end: 006d5a8f;  */

undefined8 FUN_006d5a3c(long param_1,undefined8 param_2)

{
  func_0x006da8ac(param_2,*(undefined8 *)(param_1 + 0x10));
  return 1;
}



/* Entry: 006d5a90; end: 006d5ad7;  */

undefined8 FUN_006d5a90(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x006da8ac(param_2,lVar1);
  func_0x006da8ac(param_2 + 8,lVar1 + 0x80);
  func_0x006da8ac(param_2 + 0x10,lVar1 + 0x100);
  return 1;
}



/* Entry: 006d5ad8; end: 006d5b0f;  */

undefined8 FUN_006d5ad8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x006dcab8(param_3,param_2,param_4,lVar1,lVar1 + 0x80,lVar1 + 0x100,param_1 + 0x34,
                  *(undefined4 *)(param_1 + 0x1c));
  return 1;
}



/* Entry: 006d5b10; end: 006d5b17;  */

undefined8 FUN_006d5b10(void)

{
  return 1;
}



/* Entry: 006d5b18; end: 006d5b47;  */

undefined8 FUN_006d5b18(undefined8 param_1,long param_2,long param_3,long param_4)

{
  if ((param_3 != param_2) && (param_4 != 0)) {
    _memcpy(param_2,param_3,param_4);
  }
  return 1;
}



/* Entry: 006d5b48; end: 006d5c6f;  */

undefined * FUN_006d5b48(void)

{
  return &UNK_00a11750;
}



/* Entry: 006d5c70; end: 006d5ce3;  */

undefined8 FUN_006d5c70(void)

{
  ulong in_x3;
  
  while (0xffff < in_x3) {
    func_0x006d6264();
    FUN_006d5d10();
    in_x3 = in_x3 - 0x10000;
  }
  if (in_x3 != 0) {
    func_0x006d6264();
    FUN_006d5d10();
  }
  return 1;
}



/* Entry: 006d5ce4; end: 006d5d0f;  */

undefined8 FUN_006d5ce4(long param_1,int param_2,int param_3)

{
  if (param_2 != 3) {
    if (param_2 != 0) {
      return 0xffffffff;
    }
    param_3 = *(int *)(param_1 + 0x18) << 3;
  }
  **(int **)(param_1 + 0x10) = param_3;
  return 1;
}



/* Entry: 006d5d10; end: 006d6033;  */

/* WARNING: Possible PIC construction at 0x006d5d7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006d5fb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006d5d80) */
/* WARNING: Removing unreachable block (ram,0x006d5fb4) */

void FUN_006d5d10(uint *param_1,ushort *param_2,ulong param_3,undefined8 param_4,uint *param_5,
                 int param_6)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 extraout_w8;
  undefined4 extraout_w8_00;
  int iVar10;
  long lVar11;
  byte *pbVar12;
  undefined4 extraout_w9;
  uint uVar13;
  undefined8 extraout_x9;
  int iVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  ushort *puVar18;
  uint uVar19;
  uint uVar20;
  undefined1 *puVar21;
  uint *puVar22;
  
  lVar11 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar20 = *param_5;
  uVar19 = param_5[1];
  if (param_6 == 0) {
    puVar21 = (undefined1 *)((long)param_2 + (param_3 & 7));
    puVar22 = param_1 + 1;
    puVar18 = param_2;
    uVar16 = param_3;
    while (7 < uVar16) {
      uVar20 = puVar22[-1];
      uVar19 = *puVar22;
      func_0x006d627c();
      func_0x006d6144();
      func_0x006d6288(uVar20);
      *(char *)puVar18 = (char)extraout_w8;
      *(char *)((long)puVar18 + 1) = (char)((uint)extraout_w8 >> 8);
      *(char *)(puVar18 + 1) = (char)((uint)extraout_w8 >> 0x10);
      *(char *)((long)puVar18 + 3) = (char)((uint)extraout_w8 >> 0x18);
      *(char *)(puVar18 + 2) = (char)extraout_w9;
      *(char *)((long)puVar18 + 5) = (char)((uint)extraout_w9 >> 8);
      *(char *)(puVar18 + 3) = (char)((uint)extraout_w9 >> 0x10);
      *(char *)((long)puVar18 + 7) = (char)((uint)extraout_w9 >> 0x18);
      puVar18 = puVar18 + 4;
      puVar21 = puVar21 + 8;
      puVar22 = puVar22 + 2;
      uVar16 = uVar16 - 8;
    }
    if ((param_3 & 7) != 0) {
      uVar20 = puVar22[-1];
      uVar19 = *puVar22;
      func_0x006d627c();
      func_0x006d6144();
      func_0x006d6288(uVar20);
      lVar15 = 8;
      switch(param_3 & 7) {
      case 7:
        *(char *)((long)puVar18 + (uVar16 - 1)) = (char)((ulong)extraout_x9 >> 0x10);
        lVar15 = 7;
      case 6:
        puVar21 = (undefined1 *)((long)puVar18 + lVar15 + (uVar16 - 8) + -1);
        *puVar21 = (char)((ulong)extraout_x9 >> 8);
      case 5:
        puVar21 = puVar21 + -1;
        *puVar21 = (char)extraout_x9;
      case 4:
        puVar21 = puVar21 + -1;
        *puVar21 = (char)((uint)extraout_w8_00 >> 0x18);
      case 3:
        puVar21 = puVar21 + -1;
        *puVar21 = (char)((uint)extraout_w8_00 >> 0x10);
      case 2:
        puVar21 = puVar21 + -1;
        *puVar21 = (char)((uint)extraout_w8_00 >> 8);
      case 1:
        puVar21[-1] = (char)extraout_w8_00;
      }
    }
    *(char *)param_5 = (char)uVar20;
    *(char *)((long)param_5 + 1) = (char)(uVar20 >> 8);
    *(char *)((long)param_5 + 2) = (char)(uVar20 >> 0x10);
    *(char *)((long)param_5 + 3) = (char)(uVar20 >> 0x18);
    *(char *)(param_5 + 1) = (char)uVar19;
    *(char *)((long)param_5 + 5) = (char)(uVar19 >> 8);
    *(char *)((long)param_5 + 6) = (char)(uVar19 >> 0x10);
    *(char *)((long)param_5 + 7) = (char)(uVar19 >> 0x18);
LAB_006d5ff8:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar11) {
      return;
    }
    ___stack_chk_fail();
    goto FUN_006d6034;
  }
  if (7 < param_3) {
    func_0x006d6288(*param_1);
    func_0x006d627c();
    goto FUN_006d6034;
  }
  uVar16 = param_3 & 7;
  if (uVar16 == 0) {
    *(char *)param_5 = (char)uVar20;
    *(char *)((long)param_5 + 1) = (char)(uVar20 >> 8);
    *(char *)((long)param_5 + 2) = (char)(uVar20 >> 0x10);
    *(char *)((long)param_5 + 3) = (char)(uVar20 >> 0x18);
    *(char *)(param_5 + 1) = (char)uVar19;
    *(char *)((long)param_5 + 5) = (char)(uVar19 >> 8);
    *(char *)((long)param_5 + 6) = (char)(uVar19 >> 0x10);
    *(char *)((long)param_5 + 7) = (char)(uVar19 >> 0x18);
    goto LAB_006d5ff8;
  }
  pbVar12 = (byte *)((long)param_1 + uVar16);
  lVar11 = 8;
  switch(uVar16) {
  case 1:
    uVar20 = 0;
    goto code_r0x006d5f9c;
  case 2:
    uVar20 = 0;
    goto code_r0x006d5f94;
  case 3:
    uVar20 = 0;
    goto code_r0x006d5f8c;
  case 4:
    goto code_r0x006d5f84;
  case 5:
    break;
  case 7:
    lVar11 = 7;
  case 6:
    pbVar12 = (byte *)((long)param_1 + lVar11 + param_3 + -9);
  }
  pbVar12 = pbVar12 + -1;
code_r0x006d5f84:
  pbVar12 = pbVar12 + -1;
  uVar20 = (uint)*pbVar12 << 0x18;
code_r0x006d5f8c:
  pbVar12 = pbVar12 + -1;
  uVar20 = uVar20 | (uint)*pbVar12 << 0x10;
code_r0x006d5f94:
  pbVar12 = pbVar12 + -1;
  uVar20 = uVar20 | (uint)*pbVar12 << 8;
code_r0x006d5f9c:
  func_0x006d6288(uVar20 | pbVar12[-1]);
  func_0x006d627c();
FUN_006d6034:
  uVar20 = *param_1;
  uVar17 = param_1[1];
  uVar19 = uVar20 >> 0x10;
  uVar13 = uVar17 >> 0x10;
  iVar14 = 3;
  iVar10 = 5;
  puVar18 = param_2;
  while( true ) {
    do {
      uVar20 = (uint)*puVar18 + (uVar19 & (uVar13 ^ 0xffffffff)) + uVar20 + (uVar13 & uVar17);
      uVar3 = uVar20 >> 0xf & 1;
      uVar7 = (uVar20 & 0xffff) << 1;
      uVar20 = uVar3 | uVar7;
      uVar19 = (uint)puVar18[1] + (uVar20 & uVar13) + (uVar17 & (uVar20 ^ 0xffffffff)) + uVar19;
      uVar4 = uVar19 >> 0xe & 3;
      uVar8 = (uVar19 & 0xffff) << 2;
      uVar19 = uVar4 | uVar8;
      uVar17 = (uint)puVar18[2] + (uVar20 & uVar19) + (uVar13 & (uVar19 ^ 0xffffffff)) + uVar17;
      uVar5 = uVar17 >> 0xd & 7;
      uVar9 = (uVar17 & 0xffff) << 3;
      uVar17 = uVar5 | uVar9;
      puVar1 = puVar18 + 4;
      uVar13 = (uint)puVar18[3] + (uVar19 & uVar17) + (uVar20 & (uVar17 ^ 0xffffffff)) + uVar13;
      uVar6 = uVar13 >> 0xb & 0x1f;
      uVar2 = (uVar13 & 0xffff) << 5;
      uVar13 = uVar6 | uVar2;
      iVar10 = iVar10 + -1;
      puVar18 = puVar1;
    } while (iVar10 != 0);
    uVar20 = uVar3 | uVar7 & 0xffff;
    uVar17 = uVar5 | uVar9 & 0xffff;
    iVar14 = iVar14 + -1;
    if (iVar14 == 0) break;
    iVar10 = 5;
    if (iVar14 == 2) {
      iVar10 = 6;
    }
    uVar20 = uVar20 + param_2[uVar6 | uVar2 & 0x3f];
    uVar19 = (uVar4 | uVar8 & 0xffff) + (uint)param_2[uVar20 & 0x3f];
    uVar17 = uVar17 + param_2[uVar19 & 0x3f];
    uVar13 = uVar13 + param_2[uVar17 & 0x3f];
  }
  *param_1 = uVar20 | uVar19 << 0x10;
  param_1[1] = uVar17 | uVar13 << 0x10;
  return;
}



/* Entry: 006d6034; end: 006d629f;  */

void FUN_006d6034(uint *param_1,ushort *param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ushort *puVar16;
  
  uVar13 = *param_1;
  uVar15 = param_1[1];
  uVar14 = uVar13 >> 0x10;
  uVar11 = uVar15 >> 0x10;
  iVar12 = 3;
  iVar10 = 5;
  puVar16 = param_2;
  while( true ) {
    do {
      uVar13 = (uint)*puVar16 + (uVar14 & (uVar11 ^ 0xffffffff)) + uVar13 + (uVar11 & uVar15);
      uVar3 = uVar13 >> 0xf & 1;
      uVar7 = (uVar13 & 0xffff) << 1;
      uVar13 = uVar3 | uVar7;
      uVar14 = (uint)puVar16[1] + (uVar13 & uVar11) + (uVar15 & (uVar13 ^ 0xffffffff)) + uVar14;
      uVar4 = uVar14 >> 0xe & 3;
      uVar8 = (uVar14 & 0xffff) << 2;
      uVar14 = uVar4 | uVar8;
      uVar15 = (uint)puVar16[2] + (uVar13 & uVar14) + (uVar11 & (uVar14 ^ 0xffffffff)) + uVar15;
      uVar5 = uVar15 >> 0xd & 7;
      uVar9 = (uVar15 & 0xffff) << 3;
      uVar15 = uVar5 | uVar9;
      puVar1 = puVar16 + 4;
      uVar11 = (uint)puVar16[3] + (uVar14 & uVar15) + (uVar13 & (uVar15 ^ 0xffffffff)) + uVar11;
      uVar6 = uVar11 >> 0xb & 0x1f;
      uVar2 = (uVar11 & 0xffff) << 5;
      uVar11 = uVar6 | uVar2;
      iVar10 = iVar10 + -1;
      puVar16 = puVar1;
    } while (iVar10 != 0);
    uVar13 = uVar3 | uVar7 & 0xffff;
    uVar15 = uVar5 | uVar9 & 0xffff;
    iVar12 = iVar12 + -1;
    if (iVar12 == 0) break;
    iVar10 = 5;
    if (iVar12 == 2) {
      iVar10 = 6;
    }
    uVar13 = uVar13 + param_2[uVar6 | uVar2 & 0x3f];
    uVar14 = (uVar4 | uVar8 & 0xffff) + (uint)param_2[uVar13 & 0x3f];
    uVar15 = uVar15 + param_2[uVar14 & 0x3f];
    uVar11 = uVar11 + param_2[uVar15 & 0x3f];
  }
  *param_1 = uVar13 | uVar14 << 0x10;
  param_1[1] = uVar15 | uVar11 << 0x10;
  return;
}



/* Entry: 006d62a0; end: 006d62ef;  */

undefined8 FUN_006d62a0(long param_1,undefined8 param_2)

{
  func_0x007059f0(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),param_2);
  return 1;
}



/* Entry: 006d62f0; end: 006d6327;  */

/* WARNING: Removing unreachable block (ram,0x006d69b4) */

undefined8 FUN_006d62f0(undefined8 *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  func_0x006d6be4();
  FUN_006ea43c();
  func_0x006d6c34();
  puVar4 = param_1;
  func_0x006d6bcc();
  if ((param_4 == 0) || (param_4 == *(uint *)((long)puVar4 + 4))) {
    if (param_3 == *(byte *)*param_1) {
      uVar1 = *(undefined4 *)((long)puVar4 + 4);
      _bzero(param_1 + 1,0x90);
      puVar3 = param_1 + 0x13;
      *puVar3 = 0;
      param_1[0x19] = 0;
      param_1[0x18] = 0;
      param_1[0x1b] = 0;
      param_1[0x1a] = 0;
      param_1[0x1d] = 0;
      param_1[0x1c] = 0;
      param_1[0x1f] = 0;
      param_1[0x1e] = 0;
      param_1[0x15] = 0;
      param_1[0x14] = 0;
      param_1[0x17] = 0;
      param_1[0x16] = 0;
      FUN_006d6a44(param_1 + 0x20,param_2,uVar1);
      *(char *)(param_1 + 0x28) = (char)uVar1;
      *(undefined1 *)((long)param_1 + 0x141) = 0;
      iVar2 = (int)param_1 + 8;
      FUN_006e9d10();
      if ((iVar2 != 0) && (func_0x006d6c6c(puVar3,param_2,uVar1,puVar4), (int)puVar3 != 0)) {
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x800;
        return 1;
      }
      FUN_006d6328(param_1);
      return 0;
    }
    func_0x006d6c0c();
  }
  else {
    func_0x006d6c0c();
  }
  func_0x006d6c18();
  return 0;
}



/* Entry: 006d6328; end: 006d634f;  */

void FUN_006d6328(undefined8 param_1,long param_2)

{
  undefined8 in_register_00005008;
  
  func_0x006e9cd4(param_2 + 8);
  FUN_006ea7fc(param_2 + 0xc0);
  FUN_006ea7fc(param_2 + 0xe0);
  FUN_006ea7fc(param_2 + 0xa0);
  func_0x006fe580();
  *(undefined8 *)(param_2 + 0xc0) = in_register_00005008;
  *(undefined8 *)(param_2 + 0xb8) = param_1;
  *(undefined8 *)(param_2 + 0xd0) = in_register_00005008;
  *(undefined8 *)(param_2 + 200) = param_1;
  *(undefined8 *)(param_2 + 0xe0) = in_register_00005008;
  *(undefined8 *)(param_2 + 0xd8) = param_1;
  *(undefined8 *)(param_2 + 0xf0) = in_register_00005008;
  *(undefined8 *)(param_2 + 0xe8) = param_1;
  *(undefined8 *)(param_2 + 0xf8) = 0;
  return;
}



/* Entry: 006d6350; end: 006d68c7;  */

long * FUN_006d6350(long *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                   ulong param_6,char *param_7,char *param_8,undefined8 *param_9,long param_10)

{
  uint uVar1;
  uint uVar2;
  undefined1 in_ZR;
  int iVar3;
  long *plVar4;
  char *pcVar5;
  long *plVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  int extraout_w8;
  int extraout_w8_00;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  char *pcVar15;
  long lVar16;
  int *piVar17;
  ulong uVar18;
  undefined1 auStack_2d8 [4];
  int iStack_2d4;
  uint uStack_2d0;
  ushort uStack_2ca;
  long alStack_2c8 [32];
  long alStack_1c8 [9];
  uint uStack_120;
  undefined4 uStack_11c;
  char *pcStack_118;
  long lStack_110;
  char *pcStack_108;
  undefined4 uStack_100;
  int iStack_fc;
  uint auStack_f8 [16];
  char acStack_b8 [64];
  undefined7 uStack_78;
  undefined4 uStack_71;
  ushort uStack_6d;
  
  func_0x006d6c54();
  if (extraout_w8 != 0) {
    func_0x006d6c0c();
    pcVar15 = section_00000068.sectname + 8;
    pcVar7 = param_2;
    pcVar10 = param_7;
    pcVar11 = param_8;
    goto LAB_006d6404;
  }
  plVar6 = param_1 + 0x13;
  in_ZR = param_8 == (undefined1 *)(ulong)*(uint *)(*plVar6 + 4);
  pcVar7 = param_2;
  pcVar10 = param_7;
  pcVar11 = param_8;
  if (param_8 < (undefined1 *)(ulong)*(uint *)(*plVar6 + 4)) {
LAB_006d63a0:
    func_0x006d6c0c();
    pcVar15 = (char *)((long)&segment_command_00000020.flags + 1);
LAB_006d6404:
    func_0x006d6c18();
LAB_006d6408:
    plVar4 = (long *)0x0;
  }
  else {
    in_ZR = param_4 == param_8;
    if (param_4 < param_8) {
      func_0x006d6c0c();
      pcVar15 = (char *)((long)&segment_command_00000020.flags + 3);
      pcVar7 = param_2;
      pcVar10 = param_7;
      pcVar11 = param_8;
      goto LAB_006d6404;
    }
    in_ZR = param_6 == *(byte *)(*param_1 + 1);
    if (!(bool)in_ZR) {
      func_0x006d6c0c();
      pcVar15 = section_00000068.sectname + 7;
      pcVar7 = param_2;
      pcVar10 = param_7;
      pcVar11 = param_8;
      goto LAB_006d6404;
    }
    in_ZR = param_10 == 0xb;
    if (!(bool)in_ZR) {
      func_0x006d6c0c();
      pcVar15 = section_00000068.sectname + 5;
      pcVar7 = param_2;
      pcVar10 = param_7;
      pcVar11 = param_8;
      goto LAB_006d6404;
    }
    if ((ulong)param_8 >> 0x1f != 0) {
      func_0x006d6c0c();
      pcVar15 = section_00000068.sectname + 0xd;
      pcVar7 = param_2;
      pcVar10 = param_7;
      pcVar11 = param_8;
      goto LAB_006d6404;
    }
    pcVar15 = param_3;
    func_0x006d6c74();
    if ((!(bool)in_ZR) || (*(char *)((long)param_1 + 0x141) != '\0')) {
LAB_006d6460:
      plVar4 = param_1 + 1;
      pcVar15 = (char *)&iStack_fc;
      pcVar7 = param_2;
      FUN_006ea13c(plVar4,param_2,pcVar15);
      param_4 = param_7;
      param_5 = param_8;
      if ((int)plVar4 == 0) goto LAB_006d640c;
      lVar16 = (long)iStack_fc;
      plVar4 = param_1 + 1;
      pcVar7 = param_2 + lVar16;
      pcVar15 = (char *)&iStack_fc;
      FUN_006ea28c(plVar4,pcVar7,pcVar15);
      param_4 = param_7;
      param_5 = param_8;
      if ((int)plVar4 == 0) goto LAB_006d640c;
      pcVar8 = (char *)(iStack_fc + lVar16);
      uVar1 = *(uint *)(param_1[1] + 0x14) & 0x3f;
      in_ZR = uVar1 == 2;
      if ((bool)in_ZR) {
        param_5 = (char *)(ulong)*(uint *)(param_1[1] + 4);
        piVar17 = (int *)*plVar6;
        uVar18 = (ulong)(uint)piVar17[1];
        plVar4 = &lStack_110;
        pcVar7 = (char *)&pcStack_108;
        pcVar15 = param_2;
        param_4 = pcVar8;
        func_0x006d6c88(plVar4,pcVar7,param_2,pcVar8,param_5,uVar18);
        pcVar9 = pcStack_108;
        if ((int)plVar4 == 0) goto LAB_006d63a0;
      }
      else {
        lStack_110 = -1;
        piVar17 = (int *)*plVar6;
        uVar18 = (ulong)(uint)piVar17[1];
        pcVar9 = pcVar8;
      }
      lVar16 = (long)pcVar9 - uVar18;
      uStack_78 = (undefined7)*param_9;
      uStack_71 = *(undefined4 *)((long)param_9 + 7);
      uStack_6d = (ushort)((ulong)lVar16 >> 8) & 0xff | (ushort)(((uint)lVar16 & 0xff00ff) << 8);
      in_ZR = false;
      if ((uVar1 == 2) && (in_ZR = *piVar17 == 0x40, (bool)in_ZR)) {
        uStack_120 = (uint)*(byte *)(param_1 + 0x28);
        pcVar7 = acStack_b8;
        param_4 = (char *)&uStack_78;
        pcVar11 = (char *)(param_1 + 0x20);
        param_5 = param_2;
        pcVar10 = pcVar8;
        func_0x006d70ec(piVar17,pcVar7,&pcStack_118,param_4,param_2,lVar16,pcVar8,pcVar11);
        if ((int)piVar17 == 0) goto LAB_006d63a0;
        pcVar5 = (char *)auStack_f8;
        FUN_006d6d1c(auStack_f8,pcStack_118,param_2);
        param_4 = pcVar9;
        param_5 = pcVar8;
        pcVar15 = pcStack_118;
LAB_006d65e0:
        pcVar7 = acStack_b8;
        FUN_00701f80(pcVar5,pcVar7,pcVar15);
        if (((int)pcVar5 != 0) || (lStack_110 == 0)) goto LAB_006d63a0;
        *(long *)param_3 = lVar16;
        plVar4 = (long *)((long)&MACH_HEADER.magic + 1);
        goto LAB_006d640c;
      }
      plVar4 = plVar6;
      func_0x006d6c24();
      iVar3 = (int)plVar4;
      func_0x006d6c6c();
      if (iVar3 != 0) {
        param_1 = param_1 + 0x14;
        (**(code **)(*param_1 + 0x18))(param_1,&uStack_78,0xd);
        (**(code **)(*param_1 + 0x18))(param_1,param_2,lVar16);
        pcVar7 = acStack_b8;
        pcVar15 = (char *)auStack_f8;
        FUN_006ef950(plVar6,pcVar7,pcVar15);
        if ((int)plVar6 != 0) {
          pcVar15 = (char *)(ulong)auStack_f8[0];
          pcVar5 = param_2 + lVar16;
          goto LAB_006d65e0;
        }
      }
      goto LAB_006d6408;
    }
    plVar4 = param_1 + 1;
    func_0x006d6c24();
    func_0x006e9ef0();
    if ((int)plVar4 != 0) goto LAB_006d6460;
  }
LAB_006d640c:
  func_0x006d6c3c();
  if ((bool)in_ZR) {
    return plVar4;
  }
  ___stack_chk_fail();
  func_0x006d6c54();
  if (extraout_w8_00 == 0) {
    func_0x006d6c0c();
    pcVar8 = pcVar7;
  }
  else {
    pcVar9 = (char *)CONCAT44(uStack_11c,uStack_120);
    if ((ulong)pcVar9 >> 0x1f == 0) {
      plVar6 = plVar4;
      pcVar8 = pcVar9;
      FUN_006d68c8();
      in_ZR = (long *)param_5 == plVar6;
      if (param_5 < plVar6) {
        func_0x006d6c0c();
      }
      else {
        in_ZR = pcVar10 == (undefined1 *)(ulong)*(byte *)(*plVar4 + 1);
        if ((bool)in_ZR) {
          in_ZR = CONCAT44(iStack_fc,uStack_100) == 0xb;
          if ((bool)in_ZR) {
            uStack_2ca = (ushort)(uStack_120 >> 8) & 0xff | (ushort)((uStack_120 & 0xff00ff) << 8);
            plVar6 = plVar4 + 0x13;
            func_0x006d6c24();
            func_0x006d6c6c();
            if ((int)plVar6 != 0) {
              plVar6 = plVar4 + 0x14;
              (**(code **)(*plVar6 + 0x18))(plVar6,pcStack_108,0xb);
              (**(code **)(*plVar6 + 0x18))(plVar6,&uStack_2ca,2);
              (**(code **)(*plVar6 + 0x18))(plVar6,pcVar11,pcVar9);
              plVar6 = plVar4 + 0x13;
              pcVar8 = (char *)alStack_1c8;
              FUN_006ef950(plVar6,pcVar8,&uStack_2d0);
              if ((int)plVar6 != 0) {
                func_0x006d6c74();
                if (((bool)in_ZR) && (*(char *)((long)plVar4 + 0x141) == '\0')) {
                  plVar6 = plVar4 + 1;
                  func_0x006d6c24();
                  FUN_006e9ee8();
                  if ((int)plVar6 == 0) goto LAB_006d67f8;
                }
                plVar6 = plVar4 + 1;
                pcVar8 = pcVar7;
                FUN_006e9ef8(plVar6,pcVar7,&iStack_2d4,pcVar11,pcVar9);
                if ((int)plVar6 != 0) {
                  uVar1 = *(uint *)(plVar4[1] + 4);
                  uVar18 = (ulong)uVar1;
                  uVar2 = 0;
                  if (uVar1 != 0) {
                    uVar2 = uStack_120 / uVar1;
                  }
                  uVar12 = uVar18 - (uStack_120 - uVar2 * uVar1);
                  uVar14 = 0;
                  if (uVar18 != 0) {
                    uVar14 = uVar12 / uVar18;
                  }
                  lVar16 = uVar12 - uVar14 * uVar18;
                  if (lVar16 == 0) {
                    lVar13 = 0;
                  }
                  else {
                    plVar6 = plVar4 + 1;
                    pcVar8 = (char *)alStack_2c8;
                    FUN_006e9ef8(plVar6,pcVar8,auStack_2d8,alStack_1c8,lVar16);
                    if ((int)plVar6 == 0) goto LAB_006d67f8;
                    FUN_006d6a44(pcVar7 + iStack_2d4,alStack_2c8,uVar18 - lVar16);
                    FUN_006d6a44(pcVar15,(long)alStack_2c8 + (uVar18 - lVar16),lVar16);
                    lVar13 = lVar16;
                  }
                  plVar6 = plVar4 + 1;
                  pcVar8 = pcVar15 + lVar16;
                  FUN_006e9ef8(plVar6,pcVar8,&iStack_2d4,(long)alStack_1c8 + lVar16,
                               uStack_2d0 - (int)lVar13);
                  if ((int)plVar6 != 0) {
                    lVar16 = lVar16 + iStack_2d4;
                    in_ZR = uVar1 == 2;
                    if (1 < uVar1) {
                      iVar3 = 0;
                      if (uVar18 != 0) {
                        iVar3 = (int)((ulong)(pcVar9 + uStack_2d0) / uVar18);
                      }
                      iVar3 = uVar1 - ((int)(pcVar9 + uStack_2d0) - iVar3 * uVar1);
                      in_ZR = iVar3 == 0;
                      if (!(bool)in_ZR) {
                        ___memset_chk(alStack_2c8,iVar3 + -1,iVar3,0x100);
                      }
                      plVar6 = plVar4 + 1;
                      pcVar8 = pcVar15 + lVar16;
                      FUN_006e9ef8(plVar6,pcVar8,&iStack_2d4,alStack_2c8,iVar3);
                      if ((int)plVar6 == 0) goto LAB_006d67f8;
                      lVar16 = lVar16 + iStack_2d4;
                    }
                    plVar6 = plVar4 + 1;
                    pcVar8 = pcVar15 + lVar16;
                    FUN_006ea098(plVar6,pcVar8,&iStack_2d4);
                    if ((int)plVar6 != 0) {
                      *(long *)param_4 = lVar16;
                      plVar6 = (long *)((long)&MACH_HEADER.magic + 1);
                    }
                  }
                }
              }
            }
            goto LAB_006d67f8;
          }
          func_0x006d6c0c();
        }
        else {
          func_0x006d6c0c();
        }
      }
    }
    else {
      func_0x006d6c0c();
      pcVar8 = pcVar7;
    }
  }
  func_0x006d6c18();
  plVar6 = (long *)0x0;
LAB_006d67f8:
  func_0x006d6c3c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    plVar4 = (long *)(ulong)*(uint *)(plVar6[0x13] + 4);
    if ((*(uint *)(plVar6[1] + 0x14) & 0x3f) == 2) {
      uVar14 = (ulong)*(uint *)(plVar6[1] + 4);
      uVar18 = 0;
      if (uVar14 != 0) {
        uVar18 = (ulong)(pcVar8 + (long)plVar4) / uVar14;
      }
      plVar4 = (long *)((uVar18 * uVar14 - (long)pcVar8) + uVar14);
    }
    return plVar4;
  }
  return plVar6;
}



/* Entry: 006d68c8; end: 006d6903;  */

ulong FUN_006d68c8(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = (ulong)*(uint *)(*(long *)(param_1 + 0x98) + 4);
  if ((*(uint *)(*(long *)(param_1 + 8) + 0x14) & 0x3f) == 2) {
    uVar3 = (ulong)*(uint *)(*(long *)(param_1 + 8) + 4);
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = (param_2 + uVar2) / uVar3;
    }
    uVar2 = (uVar1 * uVar3 - param_2) + uVar3;
  }
  return uVar2;
}



/* Entry: 006d6904; end: 006d6a43;  */

undefined8
FUN_006d6904(undefined8 *param_1,long param_2,ulong param_3,ulong param_4,int param_5,long param_6,
            long param_7,int param_8)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  if ((param_4 == 0) || (param_4 == *(uint *)(param_7 + 4))) {
    if (param_3 == *(byte *)*param_1) {
      uVar2 = *(uint *)(param_7 + 4);
      uVar6 = (ulong)uVar2;
      uVar3 = *(uint *)(param_6 + 8);
      _bzero(param_1 + 1,0x90);
      puVar5 = param_1 + 0x13;
      *puVar5 = 0;
      param_1[0x19] = 0;
      param_1[0x18] = 0;
      param_1[0x1b] = 0;
      param_1[0x1a] = 0;
      param_1[0x1d] = 0;
      param_1[0x1c] = 0;
      param_1[0x1f] = 0;
      param_1[0x1e] = 0;
      param_1[0x15] = 0;
      param_1[0x14] = 0;
      param_1[0x17] = 0;
      param_1[0x16] = 0;
      FUN_006d6a44(param_1 + 0x20,param_2,uVar6);
      *(char *)(param_1 + 0x28) = (char)uVar2;
      *(char *)((long)param_1 + 0x141) = (char)param_8;
      lVar1 = 0;
      if (param_8 != 0) {
        lVar1 = param_2 + uVar6 + (ulong)uVar3;
      }
      puVar4 = param_1 + 1;
      FUN_006e9d10(puVar4,param_6,0,param_2 + uVar6,lVar1,param_5 == 1);
      if (((int)puVar4 != 0) && (func_0x006d6c6c(puVar5,param_2,uVar6,param_7), (int)puVar5 != 0)) {
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x800;
        return 1;
      }
      FUN_006d6328(param_1);
      return 0;
    }
    func_0x006d6c0c();
  }
  else {
    func_0x006d6c0c();
  }
  func_0x006d6c18();
  return 0;
}



/* Entry: 006d6a44; end: 006d6a4f;  */

void FUN_006d6a44(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_0099a3f8)();
    return;
  }
  return;
}



/* Entry: 006d6a50; end: 006d6a87;  */

undefined8 FUN_006d6a50(undefined8 *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  func_0x006d6be4();
  FUN_006ea43c();
  func_0x006d6c34();
  puVar4 = param_1;
  func_0x006d6bcc();
  if ((param_4 == 0) || (param_4 == *(uint *)((long)puVar4 + 4))) {
    if (param_3 == *(byte *)*param_1) {
      uVar1 = *(undefined4 *)((long)puVar4 + 4);
      _bzero(param_1 + 1,0x90);
      puVar3 = param_1 + 0x13;
      *puVar3 = 0;
      param_1[0x19] = 0;
      param_1[0x18] = 0;
      param_1[0x1b] = 0;
      param_1[0x1a] = 0;
      param_1[0x1d] = 0;
      param_1[0x1c] = 0;
      param_1[0x1f] = 0;
      param_1[0x1e] = 0;
      param_1[0x15] = 0;
      param_1[0x14] = 0;
      param_1[0x17] = 0;
      param_1[0x16] = 0;
      FUN_006d6a44(param_1 + 0x20,param_2,uVar1);
      *(char *)(param_1 + 0x28) = (char)uVar1;
      *(undefined1 *)((long)param_1 + 0x141) = 1;
      iVar2 = (int)param_1 + 8;
      FUN_006e9d10();
      if ((iVar2 != 0) && (func_0x006d6c6c(puVar3,param_2,uVar1,puVar4), (int)puVar3 != 0)) {
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x800;
        return 1;
      }
      FUN_006d6328(param_1);
      return 0;
    }
    func_0x006d6c0c();
  }
  else {
    func_0x006d6c0c();
  }
  func_0x006d6c18();
  return 0;
}



/* Entry: 006d6a88; end: 006d6ab3;  */

undefined8 FUN_006d6a88(long param_1,long *param_2,ulong *param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 8) + 0xc);
  if (uVar1 < 2) {
    return 0;
  }
  *param_2 = param_1 + 0x3c;
  *param_3 = (ulong)uVar1;
  return 1;
}



/* Entry: 006d6ab4; end: 006d6bcb;  */

/* WARNING: Removing unreachable block (ram,0x006d69b4) */

undefined8 FUN_006d6ab4(undefined8 *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  func_0x006d6be4();
  func_0x006ea494();
  func_0x006d6c34();
  puVar4 = param_1;
  func_0x006d6bcc();
  if ((param_4 == 0) || (param_4 == *(uint *)((long)puVar4 + 4))) {
    if (param_3 == *(byte *)*param_1) {
      uVar1 = *(undefined4 *)((long)puVar4 + 4);
      _bzero(param_1 + 1,0x90);
      puVar3 = param_1 + 0x13;
      *puVar3 = 0;
      param_1[0x19] = 0;
      param_1[0x18] = 0;
      param_1[0x1b] = 0;
      param_1[0x1a] = 0;
      param_1[0x1d] = 0;
      param_1[0x1c] = 0;
      param_1[0x1f] = 0;
      param_1[0x1e] = 0;
      param_1[0x15] = 0;
      param_1[0x14] = 0;
      param_1[0x17] = 0;
      param_1[0x16] = 0;
      FUN_006d6a44(param_1 + 0x20,param_2,uVar1);
      *(char *)(param_1 + 0x28) = (char)uVar1;
      *(undefined1 *)((long)param_1 + 0x141) = 0;
      iVar2 = (int)param_1 + 8;
      FUN_006e9d10();
      if ((iVar2 != 0) && (func_0x006d6c6c(puVar3,param_2,uVar1,puVar4), (int)puVar3 != 0)) {
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x800;
        return 1;
      }
      FUN_006d6328(param_1);
      return 0;
    }
    func_0x006d6c0c();
  }
  else {
    func_0x006d6c0c();
  }
  func_0x006d6c18();
  return 0;
}



/* Entry: 006d6bcc; end: 006d6d1b;  */

void FUN_006d6bcc(void)

{
  return;
}



/* Entry: 006d6d1c; end: 006d6e8b;  */

void FUN_006d6d1c(undefined8 param_1,ulong param_2,long param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte *pbVar4;
  bool bVar5;
  undefined1 uVar6;
  byte *pbVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  byte bVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  byte abStack_d8 [64];
  byte abStack_98 [64];
  undefined8 uStack_58;
  
  uVar10 = param_2;
  func_0x006d72ec();
  uVar10 = uVar10 + 0x100;
  uStack_58 = extraout_x8;
  FUN_006d6e8c(abStack_98);
  bVar9 = 0;
  uVar14 = 0;
  uVar8 = 0;
  uVar1 = param_5;
  uVar13 = 0;
  if (uVar10 <= param_5) {
    uVar1 = uVar10;
    uVar13 = param_5 - uVar10;
  }
  lVar11 = (param_5 - param_4) - uVar1;
  for (; uVar13 < param_5; uVar13 = uVar13 + 1) {
    uVar10 = 0;
    if (param_2 <= uVar14) {
      uVar10 = param_2;
    }
    uVar14 = uVar14 - uVar10;
    bVar5 = param_2 + lVar11 == 0;
    if (bVar5) {
      bVar9 = 0xff;
    }
    bVar3 = (byte)(uVar13 >> 0x38);
    abStack_98[uVar14] =
         *(byte *)(param_3 + uVar13) &
         (char)(((byte)((ulong)lVar11 >> 0x38) ^ bVar3 | bVar3 ^ (byte)((ulong)param_4 >> 0x38)) ^
               bVar3) >> 7 & bVar9 | abStack_98[uVar14];
    uVar10 = uVar14;
    if (!bVar5) {
      uVar10 = 0;
    }
    uVar8 = uVar10 | uVar8;
    uVar14 = uVar14 + 1;
    lVar11 = lVar11 + 1;
  }
  pbVar4 = abStack_98;
  pbVar12 = abStack_d8;
  for (uVar10 = 1; pbVar7 = pbVar4, uVar6 = uVar10 == param_2, uVar10 < param_2;
      uVar10 = uVar10 << 1) {
    uVar14 = uVar10;
    for (uVar13 = 0; param_2 != uVar13; uVar13 = uVar13 + 1) {
      uVar1 = 0;
      if (param_2 <= uVar14) {
        uVar1 = param_2;
      }
      uVar2 = uVar13;
      if ((uVar8 & 1) != 0) {
        uVar2 = uVar14 - uVar1;
      }
      pbVar12[uVar13] = pbVar7[uVar2];
      uVar14 = (uVar14 - uVar1) + 1;
    }
    uVar8 = uVar8 >> 1;
    pbVar4 = pbVar12;
    pbVar12 = pbVar7;
  }
  func_0x006d6e98(param_1,pbVar7,param_2);
  func_0x006d72c8(uStack_58);
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    if (pbVar7 == (byte *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0077a2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_0099a088)();
    return;
  }
  return;
}



/* Entry: 006d6e8c; end: 006d6ea3;  */

void FUN_006d6e8c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_0099a088)();
    return;
  }
  return;
}



/* Entry: 006d6ea4; end: 006d72c7;  */

/* WARNING: Possible PIC construction at 0x006d70c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006d729c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006d70c4) */
/* WARNING: Removing unreachable block (ram,0x006d70e8) */
/* WARNING: Removing unreachable block (ram,0x006d7138) */
/* WARNING: Removing unreachable block (ram,0x006d7124) */
/* WARNING: Removing unreachable block (ram,0x006d7144) */
/* WARNING: Removing unreachable block (ram,0x006d7184) */
/* WARNING: Removing unreachable block (ram,0x006d71a0) */
/* WARNING: Removing unreachable block (ram,0x006d71f4) */
/* WARNING: Removing unreachable block (ram,0x006d7224) */
/* WARNING: Removing unreachable block (ram,0x006d7250) */
/* WARNING: Removing unreachable block (ram,0x006d726c) */
/* WARNING: Removing unreachable block (ram,0x006d7258) */
/* WARNING: Removing unreachable block (ram,0x006d718c) */
/* WARNING: Removing unreachable block (ram,0x006d7130) */
/* WARNING: Removing unreachable block (ram,0x006d7298) */
/* WARNING: Removing unreachable block (ram,0x006d70c8) */
/* WARNING: Removing unreachable block (ram,0x006d72a0) */
/* WARNING: Removing unreachable block (ram,0x006d72c4) */
/* WARNING: Removing unreachable block (ram,0x006d72a4) */

void FUN_006d6ea4(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined8 extraout_x8;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  byte bVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uStack_cc;
  uint auStack_c8 [6];
  byte abStack_b0 [72];
  undefined8 uStack_68;
  
  func_0x006d72ec(0);
  uStack_68 = extraout_x8;
  if ((param_5 >> 0x3d == 0) && (*(int *)(param_1 + 0x18) == 0)) {
    uVar1 = *(uint *)(param_1 + 0x14);
    if ((!CARRY8((ulong)uVar1,param_5 * 8)) && ((ulong)uVar1 + param_5 * 8 >> 0x20 == 0)) {
      uVar11 = 0;
      uVar2 = *(uint *)(param_1 + 0x5c);
      uVar1 = uVar1 + (int)param_4 * 8;
      uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      uStack_cc = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar12 = (param_4 + (ulong)uVar2 + 0x48 >> 6) - 1;
      abStack_b0[0x28] = 0;
      abStack_b0[0x29] = 0;
      abStack_b0[0x2a] = 0;
      abStack_b0[0x2b] = 0;
      abStack_b0[0x2c] = 0;
      abStack_b0[0x2d] = 0;
      abStack_b0[0x2e] = 0;
      abStack_b0[0x2f] = 0;
      abStack_b0[0x20] = 0;
      abStack_b0[0x21] = 0;
      abStack_b0[0x22] = 0;
      abStack_b0[0x23] = 0;
      abStack_b0[0x24] = 0;
      abStack_b0[0x25] = 0;
      abStack_b0[0x26] = 0;
      abStack_b0[0x27] = 0;
      abStack_b0[0x38] = 0;
      abStack_b0[0x39] = 0;
      abStack_b0[0x3a] = 0;
      abStack_b0[0x3b] = 0;
      abStack_b0[0x3c] = 0;
      abStack_b0[0x3d] = 0;
      abStack_b0[0x3e] = 0;
      abStack_b0[0x3f] = 0;
      abStack_b0[0x30] = 0;
      abStack_b0[0x31] = 0;
      abStack_b0[0x32] = 0;
      abStack_b0[0x33] = 0;
      abStack_b0[0x34] = 0;
      abStack_b0[0x35] = 0;
      abStack_b0[0x36] = 0;
      abStack_b0[0x37] = 0;
      abStack_b0[8] = 0;
      abStack_b0[9] = 0;
      abStack_b0[10] = 0;
      abStack_b0[0xb] = 0;
      abStack_b0[0xc] = 0;
      abStack_b0[0xd] = 0;
      abStack_b0[0xe] = 0;
      abStack_b0[0xf] = 0;
      abStack_b0[0] = 0;
      abStack_b0[1] = 0;
      abStack_b0[2] = 0;
      abStack_b0[3] = 0;
      abStack_b0[4] = 0;
      abStack_b0[5] = 0;
      abStack_b0[6] = 0;
      abStack_b0[7] = 0;
      abStack_b0[0x18] = 0;
      abStack_b0[0x19] = 0;
      abStack_b0[0x1a] = 0;
      abStack_b0[0x1b] = 0;
      abStack_b0[0x1c] = 0;
      abStack_b0[0x1d] = 0;
      abStack_b0[0x1e] = 0;
      abStack_b0[0x1f] = 0;
      abStack_b0[0x10] = 0;
      abStack_b0[0x11] = 0;
      abStack_b0[0x12] = 0;
      abStack_b0[0x13] = 0;
      abStack_b0[0x14] = 0;
      abStack_b0[0x15] = 0;
      abStack_b0[0x16] = 0;
      abStack_b0[0x17] = 0;
      auStack_c8[0] = 0;
      auStack_c8[1] = 0;
      auStack_c8[2] = 0;
      auStack_c8[3] = 0;
      auStack_c8[4] = 0;
      for (uVar10 = 0; uVar10 != param_5 + uVar2 + 0x48 >> 6; uVar10 = uVar10 + 1) {
        if (uVar10 == 0) {
          uVar9 = (ulong)*(uint *)(param_1 + 0x5c);
          func_0x006d6e98(abStack_b0,param_1 + 0x1c,uVar9);
        }
        else {
          uVar9 = 0;
        }
        uVar7 = param_5 - uVar11;
        if (uVar11 <= param_5 && uVar7 != 0) {
          uVar5 = 0x40 - uVar9;
          if (uVar7 <= 0x40 - uVar9) {
            uVar5 = uVar7;
          }
          func_0x006d6e98(abStack_b0 + uVar9,param_3 + uVar11,uVar5);
        }
        lVar6 = uVar11 - param_4;
        uVar5 = uVar11;
        for (uVar7 = uVar9; uVar7 < 0x40; uVar7 = uVar7 + 1) {
          bVar3 = (byte)(uVar5 >> 0x38);
          bVar8 = 0x80;
          if (lVar6 != 0) {
            bVar8 = 0;
          }
          abStack_b0[uVar7] =
               abStack_b0[uVar7] &
               (char)(((byte)((ulong)lVar6 >> 0x38) ^ bVar3 | bVar3 ^ (byte)((ulong)param_4 >> 0x38)
                      ) ^ bVar3) >> 7 | bVar8;
          lVar6 = lVar6 + 1;
          uVar5 = uVar5 + 1;
        }
        puVar4 = &uStack_cc;
        for (lVar6 = 0x3c; lVar6 != 0x40; lVar6 = lVar6 + 1) {
          bVar8 = (byte)*puVar4;
          if (uVar10 != uVar12) {
            bVar8 = 0;
          }
          abStack_b0[lVar6] = bVar8 | abStack_b0[lVar6];
          puVar4 = (uint *)((long)puVar4 + 1);
        }
        FUN_006f48f4(param_1,abStack_b0);
        for (lVar6 = 0; lVar6 != 0x14; lVar6 = lVar6 + 4) {
          uVar1 = *(uint *)(param_1 + lVar6);
          if (uVar10 != uVar12) {
            uVar1 = 0;
          }
          *(uint *)((long)auStack_c8 + lVar6) = uVar1 | *(uint *)((long)auStack_c8 + lVar6);
        }
        uVar11 = (uVar11 - uVar9) + 0x40;
      }
      for (lVar6 = 0; lVar6 != 0x14; lVar6 = lVar6 + 4) {
        uVar1 = (*(uint *)((long)auStack_c8 + lVar6) & 0xff00ff00) >> 8 |
                (*(uint *)((long)auStack_c8 + lVar6) & 0xff00ff) << 8;
        *(uint *)(param_2 + lVar6) = uVar1 >> 0x10 | uVar1 << 0x10;
      }
    }
  }
  return;
}



/* Entry: 006d72c8; end: 006d72fb;  */

void FUN_006d72c8(void)

{
  return;
}



/* Entry: 006d72fc; end: 006d7343;  */

dword * FUN_006d72fc(void)

{
  dword *pdVar1;
  
  pdVar1 = &MACH_HEADER.flags;
  FUN_00701e90();
  if (pdVar1 == (dword *)0x0) {
    FUN_006d7448(0xd,0,0x41);
  }
  else {
    *(undefined8 *)pdVar1 = 0;
    *(undefined8 *)(pdVar1 + 2) = 0;
    *(undefined8 *)(pdVar1 + 4) = 0;
  }
  return pdVar1;
}



/* Entry: 006d7344; end: 006d7447;  */

void FUN_006d7344(byte *param_1,undefined8 param_2,int param_3,code *param_4,undefined8 param_5)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  
  if (param_1 == (byte *)0x0) {
    FUN_006d7448(0xd,0,100);
  }
  else {
    do {
      if (param_3 != 0) {
        while ((uVar1 = (uint)*param_1, *param_1 != 0 && (_isspace(), uVar1 != 0))) {
          param_1 = param_1 + 1;
        }
      }
      pbVar2 = param_1;
      _strchr(param_1,param_2);
      if ((pbVar2 == param_1) || (*param_1 == 0)) {
        param_1 = (byte *)0x0;
        iVar3 = 0;
      }
      else {
        if (pbVar2 == (byte *)0x0) {
          pbVar4 = param_1;
          _strlen();
          pbVar4 = param_1 + (long)pbVar4;
          if (param_3 == 0) goto LAB_006d73ec;
LAB_006d73dc:
          do {
            pbVar4 = pbVar4 + -1;
            uVar1 = (uint)*pbVar4;
            _isspace();
          } while (uVar1 != 0);
        }
        else {
          pbVar4 = pbVar2;
          if (param_3 != 0) goto LAB_006d73dc;
LAB_006d73ec:
          pbVar4 = pbVar4 + -1;
        }
        iVar3 = ((int)pbVar4 - (int)param_1) + 1;
      }
      (*param_4)(param_1,iVar3,param_5);
    } while ((0 < (int)param_1) && (param_1 = pbVar2 + 1, pbVar2 != (byte *)0x0));
  }
  return;
}



/* Entry: 006d7448; end: 006d746b;  */

void FUN_006d7448(uint *param_1,undefined8 param_2,uint param_3)

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



/* Entry: 006d746c; end: 006d748f;  */

void FUN_006d746c(undefined8 param_1)

{
  undefined1 auStack_40 [48];
  
  func_0x006da898();
  FUN_006d9f68(param_1,auStack_40);
  return;
}



/* Entry: 006d7490; end: 006d7647;  */

void FUN_006d7490(undefined1 *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  bool bVar8;
  
  uVar1 = (param_2[1] - (ulong)(byte)-(char)(uint)(*param_2 + 0xfff8000000000013U >> 0x33)) +
          0xfff8000000000001;
  uVar2 = (param_2[2] - (ulong)(byte)-(char)(uint)(uVar1 >> 0x33)) + 0xfff8000000000001;
  uVar3 = (param_2[3] - (ulong)(byte)-(char)(uint)(uVar2 >> 0x33)) + 0xfff8000000000001;
  uVar4 = (param_2[4] - (ulong)(byte)-(char)(uint)(uVar3 >> 0x33)) + 0xfff8000000000001;
  bVar8 = (uVar4 & 0x7f8000000000000) != 0;
  lVar6 = 0;
  if (bVar8) {
    lVar6 = 0x7ffffffffffed;
  }
  uVar5 = lVar6 + (*param_2 + 0xfff8000000000013U & 0x7ffffffffffff);
  lVar6 = 0;
  if (bVar8) {
    lVar6 = 0x7ffffffffffff;
  }
  param_1[1] = (char)(uVar5 >> 8);
  param_1[2] = (char)(uVar5 >> 0x10);
  param_1[3] = (char)(uVar5 >> 0x18);
  param_1[4] = (char)(uVar5 >> 0x20);
  param_1[5] = (char)(uVar5 >> 0x28);
  uVar1 = lVar6 + (uVar1 & 0x7ffffffffffff) + (uVar5 >> 0x33);
  *param_1 = (char)uVar5;
  param_1[6] = (byte)(uVar5 >> 0x30) & 7 | (byte)((int)uVar1 << 3);
  param_1[7] = (char)(uVar1 >> 5);
  param_1[8] = (char)(uVar1 >> 0xd);
  param_1[9] = (char)(uVar1 >> 0x15);
  param_1[10] = (char)(uVar1 >> 0x1d);
  uVar7 = (uint)(uVar1 >> 0x20);
  param_1[0xb] = (char)(uVar7 >> 5);
  uVar1 = lVar6 + (uVar2 & 0x7ffffffffffff) + (uVar1 >> 0x33);
  param_1[0xc] = (byte)(uVar7 >> 0xd) & 0x3f | (byte)((int)uVar1 << 6);
  param_1[0xd] = (char)(uVar1 >> 2);
  param_1[0xe] = (char)(uVar1 >> 10);
  param_1[0xf] = (char)(uVar1 >> 0x12);
  param_1[0x10] = (char)(uVar1 >> 0x1a);
  uVar7 = (uint)(uVar1 >> 0x20);
  param_1[0x11] = (char)(uVar7 >> 2);
  param_1[0x12] = (char)(uVar7 >> 10);
  uVar1 = lVar6 + (uVar3 & 0x7ffffffffffff) + (uVar1 >> 0x33);
  param_1[0x13] = (byte)(uVar7 >> 0x12) & 1 | (byte)((int)uVar1 << 1);
  param_1[0x14] = (char)(uVar1 >> 7);
  param_1[0x15] = (char)(uVar1 >> 0xf);
  param_1[0x16] = (char)(uVar1 >> 0x17);
  param_1[0x17] = (char)(uVar1 >> 0x1f);
  uVar7 = (uint)(uVar1 >> 0x20);
  param_1[0x18] = (char)(uVar7 >> 7);
  uVar1 = lVar6 + uVar4 + (uVar1 >> 0x33);
  param_1[0x19] = (byte)(uVar7 >> 0xf) & 0xf | (byte)((int)uVar1 << 4);
  param_1[0x1a] = (char)(uVar1 >> 4);
  param_1[0x1b] = (char)(uVar1 >> 0xc);
  param_1[0x1c] = (char)(uVar1 >> 0x14);
  param_1[0x1d] = (char)(uVar1 >> 0x1c);
  uVar7 = (uint)(uVar1 >> 0x20);
  param_1[0x1e] = (char)(uVar7 >> 4);
  param_1[0x1f] = (byte)(uVar7 >> 0xc) & 0x7f;
  return;
}



/* Entry: 006d7648; end: 006d7697;  */

ulong * FUN_006d7648(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  ulong *puVar18;
  long extraout_x8;
  byte abStack_38 [32];
  long lStack_18;
  
  func_0x006da5f4();
  puVar18 = (ulong *)abStack_38;
  lStack_18 = extraout_x8;
  FUN_006d7490();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return (ulong *)(ulong)(abStack_38[0] & 1);
  }
  ___stack_chk_fail();
  bVar4 = param_1[0x1b];
  bVar5 = param_1[0x15];
  bVar6 = param_1[0xe];
  bVar7 = param_1[10];
  bVar8 = param_1[8];
  bVar9 = param_1[6];
  bVar10 = param_1[7];
  bVar11 = param_1[9];
  bVar12 = param_1[0xb];
  bVar13 = param_1[0xc];
  uVar1 = *(uint *)(param_1 + 0x1c);
  bVar14 = param_1[0xd];
  bVar15 = param_1[0xf];
  uVar2 = *(uint *)(param_1 + 0x10);
  bVar16 = param_1[0x14];
  uVar3 = *(uint *)(param_1 + 0x16);
  bVar17 = param_1[0x1a];
  *puVar18 = (ulong)param_1[5] << 0x28 | ((ulong)bVar9 & 7) << 0x30 | (ulong)param_1[4] << 0x20 |
             (ulong)param_1[3] << 0x18 | (ulong)param_1[2] << 0x10 | (ulong)*param_1 |
             (ulong)param_1[1] << 8;
  puVar18[1] = (ulong)(bVar9 >> 3) | (ulong)bVar10 << 5 |
               (ulong)bVar8 << 0xd | (ulong)bVar11 << 0x15 |
               (ulong)bVar7 << 0x1d | (ulong)bVar12 << 0x25 | ((ulong)bVar13 & 0x3f) << 0x2d;
  puVar18[2] = (ulong)(bVar13 >> 6) | (ulong)bVar14 << 2 |
               (ulong)bVar6 << 10 | (ulong)bVar15 << 0x12 | ((ulong)uVar2 & 0x1ffffff) << 0x1a;
  puVar18[3] = (ulong)bVar5 << 0xf | ((ulong)uVar3 & 0xfffffff) << 0x17 |
               (ulong)(uVar2 >> 0x19) | (ulong)bVar16 << 7;
  puVar18[4] = (ulong)bVar4 << 0xc | ((ulong)uVar1 & 0x7fffffff) << 0x14 | (ulong)bVar17 << 4 |
               (ulong)(uVar3 >> 0x1c);
  return puVar18;
}



/* Entry: 006d7698; end: 006d7837;  */

void FUN_006d7698(ulong *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  
  bVar4 = param_2[0x1b];
  bVar5 = param_2[0x15];
  bVar6 = param_2[0xe];
  bVar7 = param_2[10];
  bVar8 = param_2[8];
  bVar9 = param_2[6];
  bVar10 = param_2[7];
  bVar11 = param_2[9];
  bVar12 = param_2[0xb];
  bVar13 = param_2[0xc];
  uVar1 = *(uint *)(param_2 + 0x1c);
  bVar14 = param_2[0xd];
  bVar15 = param_2[0xf];
  uVar2 = *(uint *)(param_2 + 0x10);
  bVar16 = param_2[0x14];
  uVar3 = *(uint *)(param_2 + 0x16);
  bVar17 = param_2[0x1a];
  *param_1 = (ulong)param_2[5] << 0x28 | ((ulong)bVar9 & 7) << 0x30 | (ulong)param_2[4] << 0x20 |
             (ulong)param_2[3] << 0x18 | (ulong)param_2[2] << 0x10 | (ulong)*param_2 |
             (ulong)param_2[1] << 8;
  param_1[1] = (ulong)(bVar9 >> 3) | (ulong)bVar10 << 5 |
               (ulong)bVar8 << 0xd | (ulong)bVar11 << 0x15 |
               (ulong)bVar7 << 0x1d | (ulong)bVar12 << 0x25 | ((ulong)bVar13 & 0x3f) << 0x2d;
  param_1[2] = (ulong)(bVar13 >> 6) | (ulong)bVar14 << 2 |
               (ulong)bVar6 << 10 | (ulong)bVar15 << 0x12 | ((ulong)uVar2 & 0x1ffffff) << 0x1a;
  param_1[3] = (ulong)bVar5 << 0xf | ((ulong)uVar3 & 0xfffffff) << 0x17 |
               (ulong)(uVar2 >> 0x19) | (ulong)bVar16 << 7;
  param_1[4] = (ulong)bVar4 << 0xc | ((ulong)uVar1 & 0x7fffffff) << 0x14 | (ulong)bVar17 << 4 |
               (ulong)(uVar3 >> 0x1c);
  return;
}



/* Entry: 006d7838; end: 006d7897;  */

void FUN_006d7838(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  bool bVar34;
  undefined1 *puVar35;
  ulong uVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  undefined8 extraout_x8;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined1 auStack_60 [40];
  undefined1 auStack_38 [32];
  undefined8 uStack_18;
  
  func_0x006da5f4(param_1,param_1);
  uStack_18 = extraout_x8;
  func_0x006d77bc(auStack_60);
  FUN_006d7490(auStack_38,auStack_60);
  puVar35 = auStack_38;
  func_0x006da83c(puVar35,&UNK_0082d5e0);
  bVar34 = (int)puVar35 == 0;
  func_0x006da5a8(uStack_18,!bVar34);
  if (bVar34) {
    return;
  }
  ___stack_chk_fail();
  func_0x006da6c0();
  func_0x006d7814();
  func_0x006d777c(unaff_x20 + 0x28,unaff_x19 + 0x28);
  uVar45 = *(undefined8 *)(unaff_x19 + 0x58);
  uVar44 = *(undefined8 *)(unaff_x19 + 0x50);
  uVar47 = *(undefined8 *)(unaff_x19 + 0x68);
  uVar46 = *(undefined8 *)(unaff_x19 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x70) = *(undefined8 *)(unaff_x19 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x58) = uVar45;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar44;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar47;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar46;
  uVar5 = *(ulong *)(unaff_x19 + 0x90);
  uVar7 = *(ulong *)(unaff_x19 + 0x98);
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar7;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar7;
  uVar42 = *(ulong *)(unaff_x19 + 0x88);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar5;
  uVar1 = uVar5 * 0x48621a40428616 + uVar7 * 0x3ef5f8c52e700e;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar42;
  uVar36 = uVar1 + uVar42 * 0x7a9372c9c903d5;
  uVar6 = *(ulong *)(unaff_x19 + 0x78);
  uVar8 = *(ulong *)(unaff_x19 + 0x80);
  uVar39 = uVar36 + uVar8 * 0x2ac822b5a729ed;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar8;
  uVar40 = uVar39 + uVar6 * 0x69b9426b2f159;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar6;
  uVar43 = uVar5 * 0x2ac822b5a729ed + uVar7 * 0x7a9372c9c903d5;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar5;
  uVar41 = uVar5 * 0x7a9372c9c903d5 + uVar7 * 0x48621a40428616;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar7;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar5;
  uVar2 = uVar41 + uVar42 * 0x2ac822b5a729ed;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar42;
  uVar3 = uVar2 + uVar8 * 0x69b9426b2f159;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar8;
  uVar4 = uVar3 + uVar6 * 0x35050762add7a;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar6;
  lVar38 = SUB168(auVar14 * ZEXT816(0x7a9372c9c903d5),8) +
           SUB168(ZEXT816(0x48621a40428616) * auVar28,8) +
           (ulong)CARRY8(uVar5 * 0x7a9372c9c903d5,uVar7 * 0x48621a40428616) +
           SUB168(auVar15 * ZEXT816(0x2ac822b5a729ed),8) +
           (ulong)CARRY8(uVar41,uVar42 * 0x2ac822b5a729ed) +
           SUB168(ZEXT816(0x69b9426b2f159) * auVar29,8) +
           (ulong)CARRY8(uVar2,uVar8 * 0x69b9426b2f159) +
           SUB168(auVar16 * ZEXT816(0x35050762add7a),8) +
           (ulong)CARRY8(uVar3,uVar6 * 0x35050762add7a);
  uVar36 = uVar40 >> 0x33 |
           (SUB168(auVar9 * ZEXT816(0x48621a40428616),8) +
            SUB168(ZEXT816(0x3ef5f8c52e700e) * auVar27,8) +
            (ulong)CARRY8(uVar5 * 0x48621a40428616,uVar7 * 0x3ef5f8c52e700e) +
            SUB168(auVar10 * ZEXT816(0x7a9372c9c903d5),8) +
            (ulong)CARRY8(uVar1,uVar42 * 0x7a9372c9c903d5) +
            SUB168(auVar11 * ZEXT816(0x2ac822b5a729ed),8) +
            (ulong)CARRY8(uVar36,uVar8 * 0x2ac822b5a729ed) +
            SUB168(auVar12 * ZEXT816(0x69b9426b2f159),8) +
           (ulong)CARRY8(uVar39,uVar6 * 0x69b9426b2f159)) * 0x2000;
  uVar1 = uVar4 + uVar36;
  if (CARRY8(uVar4,uVar36)) {
    lVar38 = lVar38 + 1;
  }
  uVar36 = uVar43 + uVar8 * 0x35050762add7a;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar8;
  uVar39 = uVar36 + uVar42 * 0x69b9426b2f159;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar42;
  uVar41 = uVar39 + uVar6 * 0x3cf44c0038052;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar6;
  lVar37 = SUB168(auVar13 * ZEXT816(0x2ac822b5a729ed),8) +
           SUB168(ZEXT816(0x7a9372c9c903d5) * auVar26,8) +
           (ulong)CARRY8(uVar5 * 0x2ac822b5a729ed,uVar7 * 0x7a9372c9c903d5) +
           SUB168(auVar17 * ZEXT816(0x35050762add7a),8) +
           (ulong)CARRY8(uVar43,uVar8 * 0x35050762add7a) +
           SUB168(ZEXT816(0x69b9426b2f159) * auVar30,8) +
           (ulong)CARRY8(uVar36,uVar42 * 0x69b9426b2f159) +
           SUB168(auVar18 * ZEXT816(0x3cf44c0038052),8) +
           (ulong)CARRY8(uVar39,uVar6 * 0x3cf44c0038052);
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar7;
  uVar39 = uVar1 >> 0x33 | lVar38 << 0xd;
  uVar36 = uVar41 + uVar39;
  if (CARRY8(uVar41,uVar39)) {
    lVar37 = lVar37 + 1;
  }
  uVar39 = uVar42 * 0x35050762add7a + uVar7 * 0x2ac822b5a729ed;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar42;
  uVar43 = uVar39 + uVar8 * 0x3cf44c0038052;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar8;
  uVar41 = uVar43 + uVar5 * 0x69b9426b2f159;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar5;
  uVar2 = uVar41 + uVar6 * 0x6738cc7407977;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar6;
  lVar38 = SUB168(auVar19 * ZEXT816(0x35050762add7a),8) +
           SUB168(ZEXT816(0x2ac822b5a729ed) * auVar31,8) +
           (ulong)CARRY8(uVar42 * 0x35050762add7a,uVar7 * 0x2ac822b5a729ed) +
           SUB168(auVar20 * ZEXT816(0x3cf44c0038052),8) +
           (ulong)CARRY8(uVar39,uVar8 * 0x3cf44c0038052) +
           SUB168(ZEXT816(0x69b9426b2f159) * auVar32,8) +
           (ulong)CARRY8(uVar43,uVar5 * 0x69b9426b2f159) +
           SUB168(auVar21 * ZEXT816(0x6738cc7407977),8) +
           (ulong)CARRY8(uVar41,uVar6 * 0x6738cc7407977);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar5;
  uVar43 = uVar36 >> 0x33 | lVar37 << 0xd;
  uVar39 = uVar2 + uVar43;
  if (CARRY8(uVar2,uVar43)) {
    lVar38 = lVar38 + 1;
  }
  uVar43 = uVar42 * 0x3cf44c0038052 + uVar5 * 0x35050762add7a;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar42;
  uVar41 = uVar43 + uVar8 * 0x6738cc7407977;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar8;
  uVar2 = uVar41 + uVar7 * 0x69b9426b2f159;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar7;
  uVar3 = uVar2 + uVar6 * 0x2406d9dc56dff;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar6;
  lVar37 = SUB168(auVar23 * ZEXT816(0x3cf44c0038052),8) +
           SUB168(auVar22 * ZEXT816(0x35050762add7a),8) +
           (ulong)CARRY8(uVar42 * 0x3cf44c0038052,uVar5 * 0x35050762add7a) +
           SUB168(auVar24 * ZEXT816(0x6738cc7407977),8) +
           (ulong)CARRY8(uVar43,uVar8 * 0x6738cc7407977) +
           SUB168(ZEXT816(0x69b9426b2f159) * auVar33,8) +
           (ulong)CARRY8(uVar41,uVar7 * 0x69b9426b2f159) +
           SUB168(auVar25 * ZEXT816(0x2406d9dc56dff),8) +
           (ulong)CARRY8(uVar2,uVar6 * 0x2406d9dc56dff);
  uVar41 = uVar39 >> 0x33 | lVar38 << 0xd;
  uVar43 = uVar3 + uVar41;
  if (CARRY8(uVar3,uVar41)) {
    lVar37 = lVar37 + 1;
  }
  uVar40 = (uVar40 & 0x7ffffffffffff) + (uVar43 >> 0x33 | lVar37 << 0xd) * 0x13;
  uVar1 = (uVar1 & 0x7ffffffffffff) + (uVar40 >> 0x33);
  *(ulong *)(unaff_x20 + 0x78) = uVar40 & 0x7ffffffffffff;
  *(ulong *)(unaff_x20 + 0x80) = uVar1 & 0x7ffffffffffff;
  *(ulong *)(unaff_x20 + 0x88) = (uVar36 & 0x7ffffffffffff) + (uVar1 >> 0x33);
  *(ulong *)(unaff_x20 + 0x90) = uVar39 & 0x7ffffffffffff;
  *(ulong *)(unaff_x20 + 0x98) = uVar43 & 0x7ffffffffffff;
  return;
}



/* Entry: 006d7898; end: 006d795b;  */

void FUN_006d7898(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  ulong uVar34;
  long lVar35;
  long lVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  
  func_0x006da6c0();
  func_0x006d7814();
  func_0x006d777c(unaff_x20 + 0x28,unaff_x19 + 0x28);
  uVar43 = *(undefined8 *)(unaff_x19 + 0x58);
  uVar42 = *(undefined8 *)(unaff_x19 + 0x50);
  uVar45 = *(undefined8 *)(unaff_x19 + 0x68);
  uVar44 = *(undefined8 *)(unaff_x19 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x70) = *(undefined8 *)(unaff_x19 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x58) = uVar43;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar42;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar45;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar44;
  uVar5 = *(ulong *)(unaff_x19 + 0x90);
  uVar7 = *(ulong *)(unaff_x19 + 0x98);
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar7;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar7;
  uVar40 = *(ulong *)(unaff_x19 + 0x88);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar5;
  uVar1 = uVar5 * 0x48621a40428616 + uVar7 * 0x3ef5f8c52e700e;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar40;
  uVar34 = uVar1 + uVar40 * 0x7a9372c9c903d5;
  uVar6 = *(ulong *)(unaff_x19 + 0x78);
  uVar8 = *(ulong *)(unaff_x19 + 0x80);
  uVar37 = uVar34 + uVar8 * 0x2ac822b5a729ed;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar8;
  uVar38 = uVar37 + uVar6 * 0x69b9426b2f159;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar6;
  uVar41 = uVar5 * 0x2ac822b5a729ed + uVar7 * 0x7a9372c9c903d5;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar5;
  uVar39 = uVar5 * 0x7a9372c9c903d5 + uVar7 * 0x48621a40428616;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar7;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar5;
  uVar2 = uVar39 + uVar40 * 0x2ac822b5a729ed;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar40;
  uVar3 = uVar2 + uVar8 * 0x69b9426b2f159;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar8;
  uVar4 = uVar3 + uVar6 * 0x35050762add7a;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar6;
  lVar36 = SUB168(auVar14 * ZEXT816(0x7a9372c9c903d5),8) +
           SUB168(ZEXT816(0x48621a40428616) * auVar28,8) +
           (ulong)CARRY8(uVar5 * 0x7a9372c9c903d5,uVar7 * 0x48621a40428616) +
           SUB168(auVar15 * ZEXT816(0x2ac822b5a729ed),8) +
           (ulong)CARRY8(uVar39,uVar40 * 0x2ac822b5a729ed) +
           SUB168(ZEXT816(0x69b9426b2f159) * auVar29,8) +
           (ulong)CARRY8(uVar2,uVar8 * 0x69b9426b2f159) +
           SUB168(auVar16 * ZEXT816(0x35050762add7a),8) +
           (ulong)CARRY8(uVar3,uVar6 * 0x35050762add7a);
  uVar34 = uVar38 >> 0x33 |
           (SUB168(auVar9 * ZEXT816(0x48621a40428616),8) +
            SUB168(ZEXT816(0x3ef5f8c52e700e) * auVar27,8) +
            (ulong)CARRY8(uVar5 * 0x48621a40428616,uVar7 * 0x3ef5f8c52e700e) +
            SUB168(auVar10 * ZEXT816(0x7a9372c9c903d5),8) +
            (ulong)CARRY8(uVar1,uVar40 * 0x7a9372c9c903d5) +
            SUB168(auVar11 * ZEXT816(0x2ac822b5a729ed),8) +
            (ulong)CARRY8(uVar34,uVar8 * 0x2ac822b5a729ed) +
            SUB168(auVar12 * ZEXT816(0x69b9426b2f159),8) +
           (ulong)CARRY8(uVar37,uVar6 * 0x69b9426b2f159)) * 0x2000;
  uVar1 = uVar4 + uVar34;
  if (CARRY8(uVar4,uVar34)) {
    lVar36 = lVar36 + 1;
  }
  uVar34 = uVar41 + uVar8 * 0x35050762add7a;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar8;
  uVar37 = uVar34 + uVar40 * 0x69b9426b2f159;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar40;
  uVar39 = uVar37 + uVar6 * 0x3cf44c0038052;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar6;
  lVar35 = SUB168(auVar13 * ZEXT816(0x2ac822b5a729ed),8) +
           SUB168(ZEXT816(0x7a9372c9c903d5) * auVar26,8) +
           (ulong)CARRY8(uVar5 * 0x2ac822b5a729ed,uVar7 * 0x7a9372c9c903d5) +
           SUB168(auVar17 * ZEXT816(0x35050762add7a),8) +
           (ulong)CARRY8(uVar41,uVar8 * 0x35050762add7a) +
           SUB168(ZEXT816(0x69b9426b2f159) * auVar30,8) +
           (ulong)CARRY8(uVar34,uVar40 * 0x69b9426b2f159) +
           SUB168(auVar18 * ZEXT816(0x3cf44c0038052),8) +
           (ulong)CARRY8(uVar37,uVar6 * 0x3cf44c0038052);
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar7;
  uVar37 = uVar1 >> 0x33 | lVar36 << 0xd;
  uVar34 = uVar39 + uVar37;
  if (CARRY8(uVar39,uVar37)) {
    lVar35 = lVar35 + 1;
  }
  uVar37 = uVar40 * 0x35050762add7a + uVar7 * 0x2ac822b5a729ed;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar40;
  uVar41 = uVar37 + uVar8 * 0x3cf44c0038052;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar8;
  uVar39 = uVar41 + uVar5 * 0x69b9426b2f159;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar5;
  uVar2 = uVar39 + uVar6 * 0x6738cc7407977;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar6;
  lVar36 = SUB168(auVar19 * ZEXT816(0x35050762add7a),8) +
           SUB168(ZEXT816(0x2ac822b5a729ed) * auVar31,8) +
           (ulong)CARRY8(uVar40 * 0x35050762add7a,uVar7 * 0x2ac822b5a729ed) +
           SUB168(auVar20 * ZEXT816(0x3cf44c0038052),8) +
           (ulong)CARRY8(uVar37,uVar8 * 0x3cf44c0038052) +
           SUB168(ZEXT816(0x69b9426b2f159) * auVar32,8) +
           (ulong)CARRY8(uVar41,uVar5 * 0x69b9426b2f159) +
           SUB168(auVar21 * ZEXT816(0x6738cc7407977),8) +
           (ulong)CARRY8(uVar39,uVar6 * 0x6738cc7407977);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar5;
  uVar41 = uVar34 >> 0x33 | lVar35 << 0xd;
  uVar37 = uVar2 + uVar41;
  if (CARRY8(uVar2,uVar41)) {
    lVar36 = lVar36 + 1;
  }
  uVar41 = uVar40 * 0x3cf44c0038052 + uVar5 * 0x35050762add7a;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar40;
  uVar39 = uVar41 + uVar8 * 0x6738cc7407977;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar8;
  uVar2 = uVar39 + uVar7 * 0x69b9426b2f159;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar7;
  uVar3 = uVar2 + uVar6 * 0x2406d9dc56dff;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar6;
  lVar35 = SUB168(auVar23 * ZEXT816(0x3cf44c0038052),8) +
           SUB168(auVar22 * ZEXT816(0x35050762add7a),8) +
           (ulong)CARRY8(uVar40 * 0x3cf44c0038052,uVar5 * 0x35050762add7a) +
           SUB168(auVar24 * ZEXT816(0x6738cc7407977),8) +
           (ulong)CARRY8(uVar41,uVar8 * 0x6738cc7407977) +
           SUB168(ZEXT816(0x69b9426b2f159) * auVar33,8) +
           (ulong)CARRY8(uVar39,uVar7 * 0x69b9426b2f159) +
           SUB168(auVar25 * ZEXT816(0x2406d9dc56dff),8) +
           (ulong)CARRY8(uVar2,uVar6 * 0x2406d9dc56dff);
  uVar39 = uVar37 >> 0x33 | lVar36 << 0xd;
  uVar41 = uVar3 + uVar39;
  if (CARRY8(uVar3,uVar39)) {
    lVar35 = lVar35 + 1;
  }
  uVar38 = (uVar38 & 0x7ffffffffffff) + (uVar41 >> 0x33 | lVar35 << 0xd) * 0x13;
  uVar1 = (uVar1 & 0x7ffffffffffff) + (uVar38 >> 0x33);
  *(ulong *)(unaff_x20 + 0x78) = uVar38 & 0x7ffffffffffff;
  *(ulong *)(unaff_x20 + 0x80) = uVar1 & 0x7ffffffffffff;
  *(ulong *)(unaff_x20 + 0x88) = (uVar34 & 0x7ffffffffffff) + (uVar1 >> 0x33);
  *(ulong *)(unaff_x20 + 0x90) = uVar37 & 0x7ffffffffffff;
  *(ulong *)(unaff_x20 + 0x98) = uVar41 & 0x7ffffffffffff;
  return;
}



/* Entry: 006d795c; end: 006d7aff;  */

void FUN_006d795c(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_d0 [40];
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [40];
  
  FUN_006da6d4();
  func_0x006da874(auStack_a8);
  func_0x006da81c(auStack_80);
  FUN_006da0f4(auStack_d0,unaff_x20 + 0x78,unaff_x21 + 0x78);
  FUN_006da0f4(auStack_58,unaff_x21 + 0x50,unaff_x20 + 0x50);
  func_0x006d7814(unaff_x19 + 0x78,auStack_58,auStack_58);
  func_0x006da834();
  func_0x006d7814(unaff_x19 + 0x28,auStack_a8,auStack_80);
  func_0x006d77bc(auStack_a8,unaff_x19 + 0x78);
  func_0x006d7814(unaff_x19 + 0x50,auStack_a8,auStack_d0);
  func_0x006d777c(unaff_x19 + 0x78,auStack_a8,auStack_d0);
  return;
}



/* Entry: 006d7b00; end: 006d7c73;  */

void FUN_006d7b00(undefined8 *param_1,byte *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  undefined8 auStack_128 [20];
  byte abStack_88 [64];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  for (lVar9 = 0; lVar9 != 0x40; lVar9 = lVar9 + 2) {
    bVar3 = *param_2;
    abStack_88[lVar9] = bVar3 & 0xf;
    abStack_88[lVar9 + 1] = bVar3 >> 4;
    param_2 = param_2 + 1;
  }
  iVar8 = 0;
  for (lVar9 = 0; lVar9 != 0x3f; lVar9 = lVar9 + 1) {
    iVar2 = (uint)abStack_88[lVar9] + iVar8;
    iVar1 = iVar2 + 8;
    iVar8 = iVar1 * 0x1000000 >> 0x1c;
    abStack_88[lVar9] = (char)iVar2 - ((byte)iVar1 & 0xf0);
  }
  abStack_88[0x3f] = abStack_88[0x3f] + (char)iVar8;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 1;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[10] = 1;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  for (uVar10 = 1; uVar10 < 0x40; uVar10 = uVar10 + 2) {
    func_0x006da764();
    func_0x006da754();
    func_0x006da680();
  }
  puVar6 = auStack_128;
  FUN_006d7de8(puVar6,param_1);
  func_0x006da674();
  func_0x006da68c();
  func_0x006da674();
  func_0x006da68c();
  func_0x006da674();
  func_0x006da68c();
  func_0x006da680();
  uVar10 = 0;
  while( true ) {
    uVar7 = (uint)param_3;
    bVar5 = uVar10 == 0x3f;
    if (0x3f < uVar10) break;
    func_0x006da764();
    func_0x006da754();
    func_0x006da680();
    uVar10 = uVar10 + 2;
  }
  func_0x006da5a8(uStack_48);
  if (bVar5) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = uVar7 + (uVar7 & (int)uVar7 >> 0x1f) * -2;
  puVar6[1] = 0;
  *puVar6 = 0;
  puVar6[3] = 0;
  puVar6[2] = 0;
  *puVar6 = 1;
  puVar6[6] = 0;
  puVar6[5] = 0;
  puVar6[8] = 0;
  puVar6[7] = 0;
  puVar6[9] = 0;
  puVar6[4] = 0;
  puVar6[5] = 1;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xe] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  func_0x006da5e4(uVar4 ^ 1);
  func_0x006d7a10();
  func_0x006da5e4(uVar4 ^ 2);
  func_0x006da66c();
  func_0x006da5e4(uVar4 ^ 3);
  func_0x006da66c();
  func_0x006da5e4(uVar4 ^ 4);
  func_0x006da66c();
  func_0x006da5e4(uVar4 ^ 5);
  func_0x006da66c();
  func_0x006da5e4(uVar4 ^ 6);
  func_0x006da66c();
  func_0x006da5e4(uVar4 ^ 7);
  func_0x006da66c();
  func_0x006da5e4(uVar4 ^ 8);
  func_0x006da66c();
  uStack_2d8 = puVar6[6];
  uStack_2e0 = puVar6[5];
  uStack_2c8 = puVar6[8];
  uStack_2d0 = puVar6[7];
  uStack_2c0 = puVar6[9];
  uStack_2b0 = puVar6[1];
  uStack_2b8 = *puVar6;
  uStack_2a0 = puVar6[3];
  uStack_2a8 = puVar6[2];
  uStack_298 = puVar6[4];
  func_0x006d77bc(&lStack_310,puVar6 + 10);
  lStack_270 = 0xffffffffffffe - lStack_2f0;
  lStack_290 = 0xfffffffffffda - lStack_310;
  lStack_288 = 0xffffffffffffe - lStack_308;
  lStack_280 = 0xffffffffffffe - lStack_300;
  lStack_278 = 0xffffffffffffe - lStack_2f8;
  func_0x006d7a10(puVar6,&uStack_2e0,uVar7 >> 7 & 1);
  return;
}



/* Entry: 006d7c74; end: 006d7de7;  */

void FUN_006d7c74(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  
  uVar1 = param_3 + (param_3 & (int)param_3 >> 0x1f) * -2;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = 1;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[4] = 0;
  param_1[5] = 1;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  func_0x006da5e4(uVar1 ^ 1);
  func_0x006d7a10();
  func_0x006da5e4(uVar1 ^ 2);
  func_0x006da66c();
  func_0x006da5e4(uVar1 ^ 3);
  func_0x006da66c();
  func_0x006da5e4(uVar1 ^ 4);
  func_0x006da66c();
  func_0x006da5e4(uVar1 ^ 5);
  func_0x006da66c();
  func_0x006da5e4(uVar1 ^ 6);
  func_0x006da66c();
  func_0x006da5e4(uVar1 ^ 7);
  func_0x006da66c();
  func_0x006da5e4(uVar1 ^ 8);
  func_0x006da66c();
  uStack_b8 = param_1[6];
  uStack_c0 = param_1[5];
  uStack_a8 = param_1[8];
  uStack_b0 = param_1[7];
  uStack_a0 = param_1[9];
  uStack_90 = param_1[1];
  uStack_98 = *param_1;
  uStack_80 = param_1[3];
  uStack_88 = param_1[2];
  uStack_78 = param_1[4];
  func_0x006d77bc(&lStack_f0,param_1 + 10);
  lStack_50 = 0xffffffffffffe - lStack_d0;
  lStack_70 = 0xfffffffffffda - lStack_f0;
  lStack_68 = 0xffffffffffffe - lStack_e8;
  lStack_60 = 0xffffffffffffe - lStack_e0;
  lStack_58 = 0xffffffffffffe - lStack_d8;
  func_0x006d7a10(param_1,&uStack_c0,param_3 >> 7 & 1);
  return;
}



/* Entry: 006d7de8; end: 006d7e33;  */

void FUN_006d7de8(undefined8 param_1,long param_2)

{
  undefined1 auStack_90 [40];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  func_0x006da898();
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_50 = *(undefined8 *)(param_2 + 0x40);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_48 = *(undefined8 *)(param_2 + 0x48);
  uStack_38 = *(undefined8 *)(param_2 + 0x58);
  uStack_40 = *(undefined8 *)(param_2 + 0x50);
  uStack_28 = *(undefined8 *)(param_2 + 0x68);
  uStack_30 = *(undefined8 *)(param_2 + 0x60);
  uStack_20 = *(undefined8 *)(param_2 + 0x70);
  FUN_006d7e34(param_1,auStack_90);
  return;
}



/* Entry: 006d7e34; end: 006d7f13;  */

void FUN_006d7e34(long param_1,long param_2)

{
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [40];
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  
  func_0x006da2f4(auStack_78);
  func_0x006da2f4(auStack_a0,param_2 + 0x28);
  func_0x006da2f4(&lStack_d0,param_2 + 0x50);
  lStack_30 = lStack_b0 << 1;
  lStack_50 = lStack_d0 * 2;
  lStack_48 = lStack_c8 * 2;
  lStack_40 = lStack_c0 * 2;
  lStack_38 = lStack_b8 * 2;
  func_0x006d77bc(&lStack_d0,&lStack_50);
  func_0x006d7814(param_1 + 0x28,param_2,param_2 + 0x28);
  func_0x006da2f4(&lStack_50,param_1 + 0x28);
  func_0x006d7814(param_1 + 0x28,auStack_a0,auStack_78);
  func_0x006d777c(param_1 + 0x50,auStack_a0,auStack_78);
  func_0x006d77bc(auStack_a0,param_1 + 0x28);
  func_0x006da834();
  func_0x006d77bc(auStack_a0,param_1 + 0x50);
  func_0x006d777c(param_1 + 0x78,&lStack_d0,auStack_a0);
  return;
}



/* Entry: 006d7f14; end: 006d852f;  */

void FUN_006d7f14(ushort *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  
  uVar29 = (ulong)((*(uint *)(param_1 + 0x16) >> 0x18 | (uint)(byte)param_1[0x18] << 8 |
                   (uint)*(byte *)((long)param_1 + 0x31) << 0x10) >> 2) & 0x1fffff;
  uVar31 = (ulong)(*(uint *)((long)param_1 + 0x31) >> 7) & 0x1fffff;
  uVar27 = (ulong)(*(uint *)(param_1 + 0x1a) >> 4) & 0x1fffff;
  uVar24 = (ulong)((*(uint *)(param_1 + 0x1a) >> 0x18 | (uint)(byte)param_1[0x1c] << 8 |
                   (uint)*(byte *)((long)param_1 + 0x39) << 0x10) >> 1) & 0x1fffff;
  lVar20 = ((ulong)(*(uint *)((long)param_1 + 0xf) >> 6) & 0x1fffff) + uVar29 * 0xa2c13;
  lVar32 = ((ulong)*(ushort *)((long)param_1 + 0x15) |
           ((ulong)*(byte *)((long)param_1 + 0x17) & 0x1f) << 0x10) + uVar31 * 0x72d18 +
           uVar27 * 0xa2c13 + uVar29 * 0x9fb67;
  uVar1 = lVar20 + 0x100000;
  lVar13 = (((ulong)(*(uint *)((long)param_1 + 0xf) >> 0x18) |
             (ulong)*(byte *)((long)param_1 + 0x13) << 8 | (ulong)(byte)param_1[10] << 0x10) >> 3) +
           uVar31 * 0xa2c13 + uVar29 * 0x72d18 + (uVar1 >> 0x15);
  uVar2 = lVar32 + 0x100000;
  lVar17 = ((ulong)(*(uint *)((long)param_1 + 0x17) >> 5) & 0x1fffff) + uVar31 * 0x9fb67 +
           uVar27 * 0x72d18 + (long)(int)uVar29 * -0xf39ad + uVar24 * 0xa2c13 + (uVar2 >> 0x15);
  uVar11 = *(uint *)(param_1 + 0x1e) >> 3;
  lVar14 = ((ulong)param_1[0x15] | ((ulong)(byte)param_1[0x16] & 0x1f) << 0x10) +
           (long)(int)uVar11 * -0xa6f7d;
  uVar28 = (ulong)(*(uint *)((long)param_1 + 0x39) >> 6) & 0x1fffff;
  lVar22 = ((ulong)(*(uint *)(param_1 + 0x12) >> 6) & 0x1fffff) + (long)(int)uVar11 * -0xf39ad +
           uVar28 * 0x215d1 + (long)(int)uVar24 * -0xa6f7d;
  lVar21 = ((ulong)(*(uint *)((long)param_1 + 0x1f) >> 4) & 0x1fffff) + (long)(int)uVar31 * -0xa6f7d
           + uVar27 * 0x215d1 + (ulong)uVar11 * 0x72d18 + uVar28 * 0x9fb67 +
           (long)(int)uVar24 * -0xf39ad;
  lVar30 = ((ulong)((*(uint *)((long)param_1 + 0x17) >> 0x18 |
                     (uint)*(byte *)((long)param_1 + 0x1b) << 8 | (uint)(byte)param_1[0xe] << 0x10)
                   >> 2) & 0x1fffff) + (long)(int)uVar31 * -0xf39ad + uVar27 * 0x9fb67 +
           uVar29 * 0x215d1 + uVar28 * 0xa2c13 + uVar24 * 0x72d18;
  uVar3 = lVar30 + 0x100000;
  lVar7 = ((ulong)(*(uint *)(param_1 + 0xe) >> 7) & 0x1fffff) + uVar31 * 0x215d1 +
          (long)(int)uVar27 * -0xf39ad + (long)(int)uVar29 * -0xa6f7d + (ulong)uVar11 * 0xa2c13 +
          uVar28 * 0x72d18 + uVar24 * 0x9fb67 + ((long)uVar3 >> 0x15);
  uVar29 = lVar21 + 0x100000;
  lVar16 = ((ulong)((*(uint *)((long)param_1 + 0x1f) >> 0x18 |
                     (uint)*(byte *)((long)param_1 + 0x23) << 8 | (uint)(byte)param_1[0x12] << 0x10)
                   >> 1) & 0x1fffff) + (long)(int)uVar27 * -0xa6f7d + (ulong)uVar11 * 0x9fb67 +
           (long)(int)uVar28 * -0xf39ad + uVar24 * 0x215d1 + ((long)uVar29 >> 0x15);
  uVar24 = lVar22 + 0x100000;
  lVar25 = (((ulong)(*(uint *)(param_1 + 0x12) >> 0x18) | (ulong)(byte)param_1[0x14] << 8 |
            (ulong)*(byte *)((long)param_1 + 0x29) << 0x10) >> 3) + (ulong)uVar11 * 0x215d1 +
           (long)(int)uVar28 * -0xa6f7d + ((long)uVar24 >> 0x15);
  uVar27 = lVar14 + 0x100000;
  lVar8 = ((ulong)(*(uint *)(param_1 + 0x16) >> 5) & 0x1fffff) + ((long)uVar27 >> 0x15);
  uVar28 = lVar13 + 0x100000;
  uVar31 = lVar7 + 0x100000;
  lVar21 = (lVar21 - (uVar29 & 0xffffffffffe00000)) + ((long)uVar31 >> 0x15);
  uVar29 = lVar16 + 0x100000;
  lVar22 = (lVar22 - (uVar24 & 0xffffffffffe00000)) + ((long)uVar29 >> 0x15);
  lVar16 = lVar16 - (uVar29 & 0xffffffffffe00000);
  uVar29 = lVar25 + 0x100000;
  lVar14 = (lVar14 - (uVar27 & 0xffffffffffe00000)) + ((long)uVar29 >> 0x15);
  lVar25 = lVar25 - (uVar29 & 0xffffffffffe00000);
  lVar18 = ((ulong)*param_1 | ((ulong)(byte)param_1[1] & 0x1f) << 0x10) + lVar21 * 0xa2c13;
  uVar29 = lVar18 + 0x100000;
  lVar9 = ((ulong)(*(uint *)(param_1 + 1) >> 5) & 0x1fffff) + lVar21 * 0x72d18 + lVar16 * 0xa2c13 +
          ((long)uVar29 >> 0x15);
  lVar23 = (lVar32 - (uVar2 & 0xfffffe00000)) + (uVar28 >> 0x15) + lVar8 * -0xf39ad +
           lVar14 * 0x215d1 + lVar25 * -0xa6f7d;
  uVar2 = lVar17 + 0x100000;
  lVar30 = (lVar30 - (uVar3 & 0xffffffffffe00000)) + lVar8 * -0xa6f7d + ((long)uVar2 >> 0x15);
  lVar12 = (lVar20 - (uVar1 & 0x7ffffe00000)) + lVar8 * 0x72d18 + lVar14 * 0x9fb67 +
           lVar25 * -0xf39ad + lVar22 * 0x215d1 + lVar16 * -0xa6f7d;
  lVar26 = ((ulong)((*(uint *)(param_1 + 1) >> 0x18 | (uint)(byte)param_1[3] << 8 |
                    (uint)*(byte *)((long)param_1 + 7) << 0x10) >> 2) & 0x1fffff) + lVar21 * 0x9fb67
           + lVar22 * 0xa2c13 + lVar16 * 0x72d18;
  lVar19 = ((ulong)(*(uint *)(param_1 + 5) >> 4) & 0x1fffff) + lVar21 * 0x215d1 + lVar14 * 0xa2c13 +
           lVar25 * 0x72d18 + lVar22 * 0x9fb67 + lVar16 * -0xf39ad;
  uVar1 = lVar12 + 0x100000;
  lVar13 = (lVar13 - (uVar28 & 0x7fffffffffe00000)) + lVar8 * 0x9fb67 + lVar14 * -0xf39ad +
           lVar25 * 0x215d1 + lVar22 * -0xa6f7d + ((long)uVar1 >> 0x15);
  uVar3 = lVar23 + 0x100000;
  lVar17 = ((lVar17 + lVar8 * 0x215d1) - (uVar2 & 0xffffffffffe00000)) + lVar14 * -0xa6f7d +
           ((long)uVar3 >> 0x15);
  uVar2 = lVar30 + 0x100000;
  lVar7 = (lVar7 - (uVar31 & 0xffffffffffe00000)) + ((long)uVar2 >> 0x15);
  uVar24 = lVar9 + 0x100000;
  uVar27 = lVar13 + 0x100000;
  uVar28 = lVar17 + 0x100000;
  uVar31 = lVar7 + 0x100000;
  lVar32 = (long)uVar31 >> 0x15;
  uVar4 = lVar26 + 0x100000;
  lVar20 = ((ulong)(*(uint *)((long)param_1 + 7) >> 7) & 0x1fffff) + lVar21 * -0xf39ad +
           lVar25 * 0xa2c13 + lVar22 * 0x72d18 + lVar16 * 0x9fb67 + ((long)uVar4 >> 0x15);
  uVar5 = lVar20 + 0x100000;
  uVar6 = lVar19 + 0x100000;
  lVar16 = ((ulong)((*(uint *)(param_1 + 5) >> 0x18 | (uint)(byte)param_1[7] << 8 |
                    (uint)*(byte *)((long)param_1 + 0xf) << 0x10) >> 1) & 0x1fffff) +
           lVar8 * 0xa2c13 + lVar21 * -0xa6f7d + lVar14 * 0x72d18 + lVar25 * 0x9fb67 +
           lVar22 * -0xf39ad + lVar16 * 0x215d1 + ((long)uVar6 >> 0x15);
  uVar15 = (lVar18 - (uVar29 & 0xffffffffffe00000)) + lVar32 * 0xa2c13;
  uVar29 = lVar16 + 0x100000;
  uVar10 = ((lVar9 + lVar32 * 0x72d18) - (uVar24 & 0xffffffffffe00000)) + ((long)uVar15 >> 0x15);
  uVar24 = ((lVar26 + lVar32 * 0x9fb67) - (uVar4 & 0xffffffffffe00000)) + ((long)uVar24 >> 0x15) +
           ((long)uVar10 >> 0x15);
  uVar4 = ((lVar20 + lVar32 * -0xf39ad) - (uVar5 & 0xffffffffffe00000)) + ((long)uVar24 >> 0x15);
  uVar5 = ((lVar19 + lVar32 * 0x215d1) - (uVar6 & 0xffffffffffe00000)) + ((long)uVar5 >> 0x15) +
          ((long)uVar4 >> 0x15);
  uVar6 = ((lVar16 + lVar32 * -0xa6f7d) - (uVar29 & 0xffffffffffe00000)) + ((long)uVar5 >> 0x15);
  uVar1 = (lVar12 - (uVar1 & 0xffffffffffe00000)) + ((long)uVar29 >> 0x15) + ((long)uVar6 >> 0x15);
  uVar29 = (lVar13 - (uVar27 & 0xffffffffffe00000)) + ((long)uVar1 >> 0x15);
  uVar3 = (lVar23 - (uVar3 & 0xffffffffffe00000)) + ((long)uVar27 >> 0x15) + ((long)uVar29 >> 0x15);
  uVar27 = (lVar17 - (uVar28 & 0xffffffffffe00000)) + ((long)uVar3 >> 0x15);
  uVar2 = (lVar30 - (uVar2 & 0xffffffffffe00000)) + ((long)uVar28 >> 0x15) + ((long)uVar27 >> 0x15);
  uVar28 = (lVar7 - (uVar31 & 0xffffffffffe00000)) + ((long)uVar2 >> 0x15);
  lVar13 = (long)uVar28 >> 0x15;
  lVar17 = (uVar15 & 0x1fffff) + lVar13 * 0xa2c13;
  *(char *)((long)param_1 + 1) = (char)((ulong)lVar17 >> 8);
  uVar31 = (uVar10 & 0x1fffff) + lVar13 * 0x72d18 + (lVar17 >> 0x15);
  *(char *)param_1 = (char)lVar17;
  *(byte *)(param_1 + 1) = (byte)((ulong)lVar17 >> 0x10) & 0x1f | (byte)((uint)uVar31 << 5);
  *(char *)((long)param_1 + 3) = (char)(uVar31 >> 3);
  *(char *)(param_1 + 2) = (char)(uVar31 >> 0xb);
  uVar24 = (uVar24 & 0x1fffff) + lVar13 * 0x9fb67 + ((long)uVar31 >> 0x15);
  *(byte *)((long)param_1 + 5) = (byte)((uint)uVar31 >> 0x13) & 3 | (byte)((uint)uVar24 << 2);
  *(char *)(param_1 + 3) = (char)(uVar24 >> 6);
  uVar31 = (uVar4 & 0x1fffff) + lVar13 * -0xf39ad + ((long)uVar24 >> 0x15);
  *(byte *)((long)param_1 + 7) = (byte)((uint)uVar24 >> 0xe) & 0x7f | (byte)((uint)uVar31 << 7);
  *(char *)(param_1 + 4) = (char)(uVar31 >> 1);
  *(char *)((long)param_1 + 9) = (char)(uVar31 >> 9);
  uVar24 = (uVar5 & 0x1fffff) + lVar13 * 0x215d1 + ((long)uVar31 >> 0x15);
  *(byte *)(param_1 + 5) = (byte)((uint)uVar31 >> 0x11) & 0xf | (byte)((uint)uVar24 << 4);
  *(char *)((long)param_1 + 0xb) = (char)(uVar24 >> 4);
  *(char *)(param_1 + 6) = (char)(uVar24 >> 0xc);
  uVar31 = (uVar6 & 0x1fffff) + lVar13 * -0xa6f7d + ((long)uVar24 >> 0x15);
  *(byte *)((long)param_1 + 0xd) = (byte)((uint)uVar24 >> 0x14) & 1 | (byte)((uint)uVar31 << 1);
  *(char *)(param_1 + 7) = (char)(uVar31 >> 7);
  uVar1 = (uVar1 & 0x1fffff) + ((long)uVar31 >> 0x15);
  *(byte *)((long)param_1 + 0xf) = (byte)((uint)uVar31 >> 0xf) & 0x3f | (byte)((uint)uVar1 << 6);
  *(char *)(param_1 + 8) = (char)(uVar1 >> 2);
  *(char *)((long)param_1 + 0x11) = (char)(uVar1 >> 10);
  uVar29 = (uVar29 & 0x1fffff) + ((long)uVar1 >> 0x15);
  *(byte *)(param_1 + 9) = (byte)((uint)uVar1 >> 0x12) & 7 | (byte)((int)uVar29 << 3);
  *(char *)((long)param_1 + 0x13) = (char)(uVar29 >> 5);
  lVar13 = (uVar3 & 0x1fffff) + ((long)uVar29 >> 0x15);
  *(char *)(param_1 + 10) = (char)(uVar29 >> 0xd);
  *(char *)(param_1 + 0xb) = (char)((ulong)lVar13 >> 8);
  uVar1 = (uVar27 & 0x1fffff) + (lVar13 >> 0x15);
  *(char *)((long)param_1 + 0x15) = (char)lVar13;
  *(byte *)((long)param_1 + 0x17) = (byte)((ulong)lVar13 >> 0x10) & 0x1f | (byte)((uint)uVar1 << 5);
  *(char *)(param_1 + 0xc) = (char)(uVar1 >> 3);
  *(char *)((long)param_1 + 0x19) = (char)(uVar1 >> 0xb);
  uVar2 = (uVar2 & 0x1fffff) + ((long)uVar1 >> 0x15);
  uVar3 = (uVar28 & 0x1fffff) + ((long)uVar2 >> 0x15);
  *(byte *)(param_1 + 0xd) = (byte)((uint)uVar1 >> 0x13) & 3 | (byte)((uint)uVar2 << 2);
  *(char *)((long)param_1 + 0x1b) = (char)(uVar2 >> 6);
  *(byte *)(param_1 + 0xe) = (byte)((uint)uVar2 >> 0xe) & 0x7f | (byte)((int)uVar3 << 7);
  *(char *)((long)param_1 + 0x1d) = (char)((uint)((int)((long)uVar2 >> 0x15) + (int)uVar28) >> 1);
  *(char *)(param_1 + 0xf) = (char)(uVar3 >> 9);
  *(char *)((long)param_1 + 0x1f) = (char)(uVar3 >> 0x11);
  return;
}



/* Entry: 006d8530; end: 006d8587;  */

undefined8 * FUN_006d8530(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 in_ZR;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long in_x3;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong uVar31;
  long lVar32;
  undefined1 extraout_w9;
  ulong uVar33;
  long lVar34;
  ulong uVar35;
  ulong uVar36;
  long lVar37;
  undefined8 *unaff_x19;
  long lVar38;
  undefined8 *unaff_x20;
  ulong uVar39;
  long lVar40;
  ulong uVar41;
  long lVar42;
  ulong uVar43;
  ulong uVar44;
  long lVar45;
  ulong uVar46;
  long lVar47;
  ulong uVar48;
  long lVar49;
  ulong uVar50;
  long lVar51;
  ulong uVar52;
  ulong uVar53;
  long lVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined1 auStack_558 [40];
  undefined8 auStack_530 [5];
  undefined1 auStack_508 [40];
  long lStack_4e0;
  ulong uStack_4d8;
  undefined8 **ppuStack_4d0;
  code *pcStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  ulong uStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  undefined8 uStack_478;
  long lStack_470;
  undefined8 uStack_468;
  long lStack_460;
  undefined8 uStack_458;
  undefined8 *puStack_448;
  long lStack_440;
  undefined8 uStack_438;
  undefined1 auStack_430 [160];
  ushort uStack_390;
  uint uStack_38e;
  byte bStack_38a;
  byte bStack_389;
  undefined2 uStack_388;
  uint uStack_386;
  byte bStack_382;
  uint uStack_381;
  byte bStack_37d;
  byte bStack_37c;
  ushort uStack_37b;
  uint uStack_379;
  byte bStack_375;
  uint uStack_374;
  ushort uStack_350;
  uint uStack_34e;
  byte bStack_34a;
  byte bStack_349;
  undefined2 uStack_348;
  uint uStack_346;
  byte bStack_342;
  uint uStack_341;
  byte bStack_33d;
  byte bStack_33c;
  ushort uStack_33b;
  uint uStack_339;
  byte bStack_335;
  uint uStack_334;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_240;
  byte bStack_238;
  byte bStack_237;
  uint uStack_236;
  byte bStack_232;
  byte bStack_231;
  undefined2 uStack_230;
  uint uStack_22e;
  byte bStack_22a;
  uint uStack_229;
  byte bStack_225;
  byte bStack_224;
  ushort uStack_223;
  uint uStack_221;
  byte bStack_21d;
  undefined4 uStack_21c;
  undefined1 auStack_218 [32];
  undefined8 uStack_1f8;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined1 auStack_168 [160];
  byte abStack_c8 [31];
  undefined1 uStack_a9;
  undefined8 uStack_88;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 auStack_48 [4];
  undefined8 uStack_28;
  
  func_0x006da6c0();
  func_0x006da5f4();
  uStack_28 = extraout_x8;
  FUN_006e92d4(auStack_48,0x20);
  puVar17 = auStack_48;
  FUN_006d8588();
  func_0x006da5a8(uStack_28);
  if ((bool)in_ZR) {
    return unaff_x20;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_006d8588;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x006da5f4();
  uStack_88 = extraout_x8_00;
  FUN_006eb00c(puVar17,0x20,abStack_c8);
  abStack_c8[0] = abStack_c8[0] & 0xf8;
  func_0x006da880(uStack_a9);
  FUN_006d7b00(auStack_168,abStack_c8);
  puVar14 = unaff_x20;
  FUN_006d92d0(unaff_x20,auStack_168);
  uVar55 = *puVar17;
  uVar57 = puVar17[3];
  uVar56 = puVar17[2];
  unaff_x19[1] = puVar17[1];
  *unaff_x19 = uVar55;
  unaff_x19[3] = uVar57;
  unaff_x19[2] = uVar56;
  uVar55 = *unaff_x20;
  uVar57 = unaff_x20[3];
  uVar56 = unaff_x20[2];
  unaff_x19[5] = unaff_x20[1];
  unaff_x19[4] = uVar55;
  unaff_x19[7] = uVar57;
  unaff_x19[6] = uVar56;
  func_0x006da5a8(uStack_88);
  if ((bool)in_ZR) {
    return puVar14;
  }
  ___stack_chk_fail();
  pcStack_178 = FUN_006d8624;
  lVar16 = in_x3;
  puStack_448 = puVar14;
  ppuStack_180 = &puStack_60;
  func_0x006da5f4();
  uStack_1f8 = extraout_x8_01;
  FUN_006eb00c(lVar16,0x20,&bStack_238);
  uVar31 = (ulong)bStack_238;
  bStack_238 = (byte)(uVar31 & 0xf8);
  func_0x006da880(uStack_21c._3_1_);
  uStack_21c = CONCAT13(extraout_w9,(undefined3)uStack_21c);
  uStack_438 = 0xbb67ae8584caa73b;
  lStack_440 = 0x6a09e667f3bcc908;
  uStack_458 = 0xa54ff53a5f1d36f1;
  lStack_460 = 0x3c6ef372fe94f82b;
  uStack_308 = 0xbb67ae8584caa73b;
  uStack_310 = 0x6a09e667f3bcc908;
  uStack_2f8 = 0xa54ff53a5f1d36f1;
  uStack_300 = 0x3c6ef372fe94f82b;
  uStack_468 = 0x9b05688c2b3e6c1f;
  lStack_470 = 0x510e527fade682d1;
  uStack_478 = 0x5be0cd19137e2179;
  lStack_480 = 0x1f83d9abfb41bd6b;
  uStack_2e8 = 0x9b05688c2b3e6c1f;
  uStack_2f0 = 0x510e527fade682d1;
  uStack_2d8 = 0x5be0cd19137e2179;
  uStack_2e0 = 0x1f83d9abfb41bd6b;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  uStack_240 = 0x4000000000;
  func_0x006da6cc(&uStack_310,auStack_218);
  func_0x006da7c8();
  FUN_006f67d0(&uStack_350,&uStack_310);
  FUN_006d7f14(&uStack_350);
  FUN_006d7b00(auStack_430,&uStack_350);
  FUN_006d92d0(puVar14,auStack_430);
  uStack_308 = uStack_438;
  uStack_310 = lStack_440;
  uStack_2f8 = uStack_458;
  uStack_300 = lStack_460;
  uStack_2e8 = uStack_468;
  uStack_2f0 = lStack_470;
  uStack_2d8 = uStack_478;
  uStack_2e0 = lStack_480;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  uStack_240 = 0x4000000000;
  func_0x006da6cc(&uStack_310,puVar14);
  func_0x006da6cc(&uStack_310,in_x3 + 0x20);
  func_0x006da7c8();
  FUN_006f67d0(&uStack_390,&uStack_310);
  FUN_006d7f14(&uStack_390);
  uVar11 = (ulong)uStack_390 | ((ulong)(byte)uStack_38e & 0x1f) << 0x10;
  uVar12 = (ulong)uStack_37b | ((ulong)(byte)uStack_379 & 0x1f) << 0x10;
  uVar13 = uVar31 & 0xf8 | (ulong)bStack_237 << 8 | ((ulong)(byte)uStack_236 & 0x1f) << 0x10;
  uVar28 = (ulong)uStack_223 | ((ulong)(byte)uStack_221 & 0x1f) << 0x10;
  uVar46 = (ulong)(uStack_38e >> 5) & 0x1fffff;
  uVar24 = (ulong)((uStack_38e >> 0x18 | (uint)bStack_38a << 8 | (uint)bStack_389 << 0x10) >> 2) &
           0x1fffff;
  uVar53 = (ulong)(uStack_236 >> 5) & 0x1fffff;
  uVar48 = (ulong)((uStack_236 >> 0x18 | (uint)bStack_232 << 8 | (uint)bStack_231 << 0x10) >> 2) &
           0x1fffff;
  lStack_440 = uVar53 * uVar46 + uVar13 * uVar24 + uVar48 * uVar11 +
               ((ulong)((uStack_34e >> 0x18 | (uint)bStack_34a << 8 | (uint)bStack_349 << 0x10) >> 2
                       ) & 0x1fffff);
  uVar43 = (ulong)(CONCAT13((undefined1)uStack_386,CONCAT21(uStack_388,bStack_389)) >> 7) & 0x1fffff
  ;
  uVar15 = (ulong)(uStack_386 >> 4) & 0x1fffff;
  uVar33 = (ulong)(CONCAT13((undefined1)uStack_22e,CONCAT21(uStack_230,bStack_231)) >> 7) & 0x1fffff
  ;
  uVar21 = (ulong)(uStack_22e >> 4) & 0x1fffff;
  lVar16 = uVar53 * uVar43 + uVar13 * uVar15 + uVar33 * uVar46 + uVar11 * uVar21 + uVar48 * uVar24 +
           ((ulong)(uStack_346 >> 4) & 0x1fffff);
  uVar20 = (ulong)((uStack_386 >> 0x18 | (uint)bStack_382 << 8 | (uStack_381 & 0xff) << 0x10) >> 1)
           & 0x1fffff;
  uVar18 = (ulong)(uStack_381 >> 6) & 0x1fffff;
  uVar22 = (ulong)(uStack_229 >> 6) & 0x1fffff;
  uVar29 = (ulong)((uStack_22e >> 0x18 | (uint)bStack_22a << 8 | (uStack_229 & 0xff) << 0x10) >> 1)
           & 0x1fffff;
  lStack_470 = uVar20 * uVar53 + uVar13 * uVar18 + uVar33 * uVar43 + uVar24 * uVar21 +
               uVar48 * uVar15 + uVar11 * uVar22 + uVar29 * uVar46 +
               ((ulong)(uStack_341 >> 6) & 0x1fffff);
  uVar25 = ((ulong)(uStack_381 >> 0x18) | (ulong)bStack_37d << 8 | (ulong)bStack_37c << 0x10) >> 3;
  uVar50 = ((ulong)(uStack_229 >> 0x18) | (ulong)bStack_225 << 8 | (ulong)bStack_224 << 0x10) >> 3;
  lStack_480 = uVar25 * uVar53 + uVar13 * uVar12 + uVar20 * uVar33 + uVar21 * uVar15 +
               uVar48 * uVar18 + uVar24 * uVar22 + uVar29 * uVar43 + uVar50 * uVar46 +
               uVar28 * uVar11 + (ulong)uStack_33b + ((ulong)(byte)uStack_339 & 0x1f) * 0x10000;
  uVar41 = (ulong)(uStack_379 >> 5) & 0x1fffff;
  uVar39 = (ulong)((uStack_379 >> 0x18 | (uint)bStack_375 << 8 | (uStack_374 & 0xff) << 0x10) >> 2)
           & 0x1fffff;
  uVar52 = (ulong)(uStack_221 >> 5) & 0x1fffff;
  uVar44 = (ulong)((uStack_221 >> 0x18 | (uint)bStack_21d << 8 | (uStack_21c & 0xff) << 0x10) >> 2)
           & 0x1fffff;
  lStack_488 = uVar53 * uVar41 + uVar13 * uVar39 + uVar25 * uVar33 + uVar21 * uVar18 +
               uVar48 * uVar12 + uVar22 * uVar15 + uVar29 * uVar20 + uVar50 * uVar43 +
               uVar52 * uVar46 + uVar28 * uVar24 + uVar44 * uVar11 +
               ((ulong)((uStack_339 >> 0x18 | (uint)bStack_335 << 8 | (uStack_334 & 0xff) << 0x10)
                       >> 2) & 0x1fffff);
  lStack_460 = ((ulong)uStack_350 | ((ulong)(byte)uStack_34e & 0x1f) << 0x10) + uVar13 * uVar11;
  uVar31 = lStack_460 + 0x100000;
  lStack_4b0 = uVar11 * uVar53 + uVar13 * uVar46 + ((ulong)(uStack_34e >> 5) & 0x1fffff) +
               (uVar31 >> 0x15);
  lStack_460 = lStack_460 - (uVar31 & 0xffffffffffe00000);
  uVar31 = lVar16 + 0x100000;
  lStack_498 = uVar53 * uVar15 + uVar13 * uVar20 + uVar24 * uVar33 + uVar21 * uVar46 +
               uVar48 * uVar43 + uVar29 * uVar11 + (uVar31 >> 0x15) +
               ((ulong)((uStack_346 >> 0x18 | (uint)bStack_342 << 8 | (uStack_341 & 0xff) << 0x10)
                       >> 1) & 0x1fffff);
  lStack_4c0 = uVar53 * uVar18 + uVar13 * uVar25 + uVar33 * uVar15 + uVar21 * uVar43 +
               uVar48 * uVar20 + uVar22 * uVar46 + uVar29 * uVar24 + uVar50 * uVar11 +
               (((ulong)(uStack_341 >> 0x18) | (ulong)bStack_33d << 8 | (ulong)bStack_33c << 0x10)
               >> 3);
  lStack_4b8 = uVar12 * uVar53 + uVar13 * uVar41 + uVar33 * uVar18 + uVar20 * uVar21 +
               uVar48 * uVar25 + uVar22 * uVar43 + uVar29 * uVar15 + uVar50 * uVar24 +
               uVar11 * uVar52 + uVar28 * uVar46 + ((ulong)(uStack_339 >> 5) & 0x1fffff);
  uVar35 = (ulong)(uStack_374 >> 7);
  uVar36 = (ulong)(uStack_21c >> 7);
  lVar49 = uVar53 * uVar35 + uVar33 * uVar41 + uVar12 * uVar21 + uVar48 * uVar39 + uVar22 * uVar18 +
           uVar29 * uVar25 + uVar50 * uVar20 + uVar52 * uVar43 + uVar28 * uVar15 + uVar36 * uVar46 +
           uVar44 * uVar24;
  lVar37 = uVar50 * uVar35 + uVar52 * uVar41 + uVar28 * uVar39 + uVar25 * uVar36 + uVar44 * uVar12;
  uVar1 = lVar37 + 0x100000;
  lVar45 = uVar39 * uVar52 + uVar28 * uVar35 + uVar12 * uVar36 + uVar44 * uVar41 + (uVar1 >> 0x15);
  lVar54 = uVar33 * uVar35 + uVar39 * uVar21 + uVar12 * uVar22 + uVar29 * uVar41 + uVar50 * uVar25 +
           uVar20 * uVar52 + uVar28 * uVar18 + uVar36 * uVar43 + uVar44 * uVar15;
  uStack_4a8 = lStack_440 + 0x100000;
  lStack_4a0 = uVar24 * uVar53 + uVar13 * uVar43 + uVar11 * uVar33 + uVar48 * uVar46 +
               ((ulong)(CONCAT13((undefined1)uStack_346,CONCAT21(uStack_348,bStack_349)) >> 7) &
               0x1fffff) + (uStack_4a8 >> 0x15);
  uVar19 = lVar49 + 0x100000;
  lVar23 = uVar39 * uVar33 + uVar21 * uVar41 + uVar48 * uVar35 + uVar25 * uVar22 + uVar29 * uVar12 +
           uVar50 * uVar18 + uVar52 * uVar15 + uVar28 * uVar20 + uVar24 * uVar36 + uVar44 * uVar43 +
           (uVar19 >> 0x15);
  lVar38 = uVar39 * uVar22 + uVar29 * uVar35 + uVar50 * uVar41 + uVar25 * uVar52 + uVar28 * uVar12 +
           uVar20 * uVar36 + uVar44 * uVar18;
  uVar2 = lVar54 + 0x100000;
  lVar27 = uVar21 * uVar35 + uVar22 * uVar41 + uVar29 * uVar39 + uVar50 * uVar12 + uVar52 * uVar18 +
           uVar28 * uVar25 + uVar36 * uVar15 + uVar44 * uVar20 + (uVar2 >> 0x15);
  uVar3 = lVar38 + 0x100000;
  lVar8 = uVar22 * uVar35 + uVar50 * uVar39 + uVar12 * uVar52 + uVar28 * uVar41 + uVar36 * uVar18 +
          uVar44 * uVar25 + (uVar3 >> 0x15);
  lVar32 = uVar52 * uVar35 + uVar36 * uVar41 + uVar44 * uVar39;
  uVar4 = lVar32 + 0x100000;
  lVar30 = uVar39 * uVar36 + uVar44 * uVar35 + (uVar4 >> 0x15);
  uVar5 = uVar36 * uVar35 + 0x100000;
  uVar26 = uVar5 >> 0x15;
  uVar6 = lStack_4b0 + 0x100000;
  lStack_4b0 = lStack_4b0 - (uVar6 & 0xffffffffffe00000);
  uVar7 = lStack_4a0 + 0x100000;
  lStack_490 = (lVar16 - (uVar31 & 0xffffffffffe00000)) + (uVar7 >> 0x15);
  lStack_4a0 = lStack_4a0 - (uVar7 & 0xffffffffffe00000);
  uVar31 = lVar8 + 0x100000;
  lVar16 = (lVar37 - (uVar1 & 0xffffffffffe00000)) + (uVar31 >> 0x15);
  uVar1 = lVar45 + 0x100000;
  lVar32 = (lVar32 - (uVar4 & 0x1ffffffe00000)) + (uVar1 >> 0x15);
  lVar45 = lVar45 - (uVar1 & 0xffffffffffe00000);
  uVar1 = lVar30 + 0x100000;
  lVar37 = (uVar36 * uVar35 - (uVar5 & 0x7ffffffe00000)) + (uVar1 >> 0x15);
  lVar30 = lVar30 - (uVar1 & 0x1ffffffe00000);
  lVar40 = lStack_4c0 + (lStack_470 + 0x100000U >> 0x15);
  lVar9 = lStack_4b8 + (lStack_480 + 0x100000U >> 0x15);
  uVar1 = lVar40 + 0x100000;
  lVar42 = (lVar32 * 0xa2c13 + lVar45 * 0x72d18 + lVar16 * 0x9fb67 + lStack_480 + (uVar1 >> 0x15)) -
           (lStack_480 + 0x100000U & 0xffffffffffe00000);
  uVar4 = lVar9 + 0x100000;
  lVar10 = uVar39 * uVar53 + uVar13 * uVar35 + uVar12 * uVar33 + uVar25 * uVar21 + uVar48 * uVar41 +
           uVar20 * uVar22 + uVar29 * uVar18 + uVar50 * uVar15 + uVar24 * uVar52 + uVar28 * uVar43 +
           uVar11 * uVar36 + uVar44 * uVar46 + (ulong)(uStack_334 >> 7) +
           (lStack_488 + 0x100000U >> 0x15);
  lVar47 = (lVar37 * 0xa2c13 + lVar30 * 0x72d18 + lVar32 * 0x9fb67 + lVar45 * -0xf39ad +
            lVar16 * 0x215d1 + (uVar4 >> 0x15) + lStack_488) -
           (lStack_488 + 0x100000U & 0xffffffffffe00000);
  uVar5 = lVar10 + 0x100000;
  lVar49 = ((lVar49 + uVar26 * 0x72d18) - (uVar19 & 0xffffffffffe00000)) + lVar37 * 0x9fb67 +
           lVar30 * -0xf39ad + lVar32 * 0x215d1 + lVar45 * -0xa6f7d + (uVar5 >> 0x15);
  uVar19 = lVar23 + 0x100000;
  uVar7 = lVar49 + 0x100000;
  lVar23 = ((lVar23 + uVar26 * 0x9fb67) - (uVar19 & 0xffffffffffe00000)) + lVar37 * -0xf39ad +
           lVar30 * 0x215d1 + lVar32 * -0xa6f7d + ((long)uVar7 >> 0x15);
  uVar11 = lVar27 + 0x100000;
  lVar38 = ((lVar38 + (long)(int)uVar26 * -0xa6f7d) - (uVar3 & 0xffffffffffe00000)) +
           (uVar11 >> 0x15);
  lVar34 = ((lStack_470 + lVar16 * 0xa2c13) - (lStack_470 + 0x100000U & 0xffffffffffe00000)) +
           (lStack_498 + 0x100000U >> 0x15);
  uVar3 = lVar42 + 0x100000;
  lVar9 = ((lVar30 * 0xa2c13 + lVar32 * 0x72d18 + lVar45 * 0x9fb67 + lVar16 * -0xf39ad + lVar9) -
          (uVar4 & 0xffffffffffe00000)) + ((long)uVar3 >> 0x15);
  lVar54 = ((lVar54 + (long)(int)uVar26 * -0xf39ad) - (uVar2 & 0xffffffffffe00000)) +
           (uVar19 >> 0x15) + lVar37 * 0x215d1 + lVar30 * -0xa6f7d;
  uVar19 = lVar47 + 0x100000;
  lVar30 = ((lVar37 * 0x72d18 + uVar26 * 0xa2c13 + lVar30 * 0x9fb67 + lVar32 * -0xf39ad +
             lVar45 * 0x215d1 + lVar16 * -0xa6f7d + lVar10) - (uVar5 & 0xffffffffffe00000)) +
           ((long)uVar19 >> 0x15);
  uVar2 = lVar54 + 0x100000;
  lVar27 = ((lVar27 + uVar26 * 0x215d1) - (uVar11 & 0xffffffffffe00000)) + lVar37 * -0xa6f7d +
           ((long)uVar2 >> 0x15);
  uVar4 = lVar38 + 0x100000;
  lVar8 = (lVar8 - (uVar31 & 0xffffffffffe00000)) + ((long)uVar4 >> 0x15);
  uVar31 = lVar30 + 0x100000;
  lVar32 = (lVar49 - (uVar7 & 0xffffffffffe00000)) + ((long)uVar31 >> 0x15);
  uVar5 = lVar23 + 0x100000;
  lVar37 = (lVar54 - (uVar2 & 0xffffffffffe00000)) + ((long)uVar5 >> 0x15);
  lVar23 = lVar23 - (uVar5 & 0xffffffffffe00000);
  uVar2 = lVar27 + 0x100000;
  lVar10 = (lVar38 - (uVar4 & 0xffffffffffe00000)) + ((long)uVar2 >> 0x15);
  lVar27 = lVar27 - (uVar2 & 0xffffffffffe00000);
  uVar2 = lVar9 + 0x100000;
  lVar54 = (lVar47 + lVar8 * -0xa6f7d + ((long)uVar2 >> 0x15)) - (uVar19 & 0xffffffffffe00000);
  uVar19 = lVar34 + 0x100000;
  lVar16 = ((lVar45 * 0xa2c13 + lVar16 * 0x72d18 + lVar40) - (uVar1 & 0xffffffffffe00000)) +
           ((long)uVar19 >> 0x15);
  uVar1 = lVar16 + 0x100000;
  lVar47 = (lVar8 * -0xf39ad + lVar10 * 0x215d1 + lVar27 * -0xa6f7d + lVar42 + ((long)uVar1 >> 0x15)
           ) - (uVar3 & 0xffffffffffe00000);
  lVar49 = lStack_460 + lVar32 * 0xa2c13;
  uVar3 = lVar49 + 0x100000;
  lVar45 = lStack_4b0 + lVar32 * 0x72d18 + lVar23 * 0xa2c13 + ((long)uVar3 >> 0x15);
  lVar38 = ((lVar34 + lVar8 * 0x72d18) - (uVar19 & 0xffffffffffe00000)) + lVar10 * 0x9fb67 +
           lVar27 * -0xf39ad + lVar37 * 0x215d1 + lVar23 * -0xa6f7d;
  uVar19 = lVar38 + 0x100000;
  lVar16 = ((lVar8 * 0x9fb67 + lVar10 * -0xf39ad + lVar27 * 0x215d1 + lVar16) -
           (uVar1 & 0xffffffffffe00000)) + lVar37 * -0xa6f7d + ((long)uVar19 >> 0x15);
  uVar1 = lVar47 + 0x100000;
  lVar40 = ((lVar8 * 0x215d1 + lVar10 * -0xa6f7d + lVar9) - (uVar2 & 0xffffffffffe00000)) +
           ((long)uVar1 >> 0x15);
  uVar2 = lVar54 + 0x100000;
  lVar30 = (lVar30 - (uVar31 & 0xffffffffffe00000)) + ((long)uVar2 >> 0x15);
  uVar31 = lVar45 + 0x100000;
  uVar4 = lVar16 + 0x100000;
  uVar5 = lVar40 + 0x100000;
  lVar40 = lVar40 - (uVar5 & 0xffffffffffe00000);
  uVar7 = lVar30 + 0x100000;
  lVar51 = (long)uVar7 >> 0x15;
  lVar34 = ((lStack_440 + (uVar6 >> 0x15)) - (uStack_4a8 & 0xffffffffffe00000)) + lVar32 * 0x9fb67 +
           lVar37 * 0xa2c13 + lVar23 * 0x72d18;
  uVar6 = lVar34 + 0x100000;
  lVar9 = lStack_4a0 + lVar27 * 0xa2c13 + lVar32 * -0xf39ad + lVar37 * 0x72d18 + lVar23 * 0x9fb67 +
          ((long)uVar6 >> 0x15);
  uVar11 = lVar9 + 0x100000;
  lVar42 = lStack_490 + lVar10 * 0xa2c13 + lVar27 * 0x72d18 + lVar32 * 0x215d1 + lVar37 * 0x9fb67 +
           lVar23 * -0xf39ad;
  uVar12 = lVar42 + 0x100000;
  lVar23 = ((lStack_498 + lVar8 * 0xa2c13) - (lStack_498 + 0x100000U & 0xffffffffffe00000)) +
           lVar10 * 0x72d18 + lVar27 * 0x9fb67 + lVar32 * -0xa6f7d + lVar37 * -0xf39ad +
           lVar23 * 0x215d1 + ((long)uVar12 >> 0x15);
  uVar13 = lVar23 + 0x100000;
  uVar28 = (lVar49 - (uVar3 & 0xffffffffffe00000)) + lVar51 * 0xa2c13;
  uVar3 = ((lVar45 + lVar51 * 0x72d18) - (uVar31 & 0xffffffffffe00000)) + ((long)uVar28 >> 0x15);
  uVar31 = ((lVar34 + lVar51 * 0x9fb67) - (uVar6 & 0xffffffffffe00000)) + ((long)uVar31 >> 0x15) +
           ((long)uVar3 >> 0x15);
  uVar6 = ((lVar9 + lVar51 * -0xf39ad) - (uVar11 & 0xffffffffffe00000)) + ((long)uVar31 >> 0x15);
  uVar11 = ((lVar42 + lVar51 * 0x215d1) - (uVar12 & 0xffffffffffe00000)) + ((long)uVar11 >> 0x15) +
           ((long)uVar6 >> 0x15);
  uVar12 = ((lVar23 + lVar51 * -0xa6f7d) - (uVar13 & 0xffffffffffe00000)) + ((long)uVar11 >> 0x15);
  uVar19 = (lVar38 - (uVar19 & 0xffffffffffe00000)) + ((long)uVar13 >> 0x15) +
           ((long)uVar12 >> 0x15);
  uVar13 = (lVar16 - (uVar4 & 0xffffffffffe00000)) + ((long)uVar19 >> 0x15);
  uVar1 = (lVar47 - (uVar1 & 0xffffffffffe00000)) + ((long)uVar4 >> 0x15) + ((long)uVar13 >> 0x15);
  uVar4 = lVar40 + ((long)uVar1 >> 0x15);
  uVar2 = ((lVar54 + ((long)uVar5 >> 0x15)) - (uVar2 & 0xffffffffffe00000)) + ((long)uVar4 >> 0x15);
  uVar5 = (lVar30 - (uVar7 & 0xffffffffffe00000)) + ((long)uVar2 >> 0x15);
  lVar45 = (long)uVar5 >> 0x15;
  lVar16 = (uVar28 & 0x1fffff) + lVar45 * 0xa2c13;
  *(char *)((long)puStack_448 + 0x21) = (char)((ulong)lVar16 >> 8);
  uVar3 = (uVar3 & 0x1fffff) + lVar45 * 0x72d18 + (lVar16 >> 0x15);
  *(char *)(puStack_448 + 4) = (char)lVar16;
  *(byte *)((long)puStack_448 + 0x22) =
       (byte)((ulong)lVar16 >> 0x10) & 0x1f | (byte)((uint)uVar3 << 5);
  *(char *)((long)puStack_448 + 0x23) = (char)(uVar3 >> 3);
  *(char *)((long)puStack_448 + 0x24) = (char)(uVar3 >> 0xb);
  uVar7 = (uVar31 & 0x1fffff) + lVar45 * 0x9fb67 + ((long)uVar3 >> 0x15);
  *(byte *)((long)puStack_448 + 0x25) = (byte)((uint)uVar3 >> 0x13) & 3 | (byte)((uint)uVar7 << 2);
  *(char *)((long)puStack_448 + 0x26) = (char)(uVar7 >> 6);
  uVar3 = (uVar6 & 0x1fffff) + lVar45 * -0xf39ad + ((long)uVar7 >> 0x15);
  *(byte *)((long)puStack_448 + 0x27) = (byte)((uint)uVar7 >> 0xe) & 0x7f | (byte)((uint)uVar3 << 7)
  ;
  *(char *)(puStack_448 + 5) = (char)(uVar3 >> 1);
  *(char *)((long)puStack_448 + 0x29) = (char)(uVar3 >> 9);
  uVar6 = (uVar11 & 0x1fffff) + lVar45 * 0x215d1 + ((long)uVar3 >> 0x15);
  *(byte *)((long)puStack_448 + 0x2a) = (byte)((uint)uVar3 >> 0x11) & 0xf | (byte)((uint)uVar6 << 4)
  ;
  *(char *)((long)puStack_448 + 0x2b) = (char)(uVar6 >> 4);
  *(char *)((long)puStack_448 + 0x2c) = (char)(uVar6 >> 0xc);
  uVar3 = (uVar12 & 0x1fffff) + lVar45 * -0xa6f7d + ((long)uVar6 >> 0x15);
  *(byte *)((long)puStack_448 + 0x2d) = (byte)((uint)uVar6 >> 0x14) & 1 | (byte)((uint)uVar3 << 1);
  *(char *)((long)puStack_448 + 0x2e) = (char)(uVar3 >> 7);
  uVar6 = (uVar19 & 0x1fffff) + ((long)uVar3 >> 0x15);
  *(byte *)((long)puStack_448 + 0x2f) = (byte)((uint)uVar3 >> 0xf) & 0x3f | (byte)((uint)uVar6 << 6)
  ;
  *(char *)(puStack_448 + 6) = (char)(uVar6 >> 2);
  *(char *)((long)puStack_448 + 0x31) = (char)(uVar6 >> 10);
  uVar3 = (uVar13 & 0x1fffff) + ((long)uVar6 >> 0x15);
  *(byte *)((long)puStack_448 + 0x32) = (byte)((uint)uVar6 >> 0x12) & 7 | (byte)((int)uVar3 << 3);
  *(char *)((long)puStack_448 + 0x33) = (char)(uVar3 >> 5);
  lVar16 = (uVar1 & 0x1fffff) + ((long)uVar3 >> 0x15);
  *(char *)((long)puStack_448 + 0x34) = (char)(uVar3 >> 0xd);
  *(char *)((long)puStack_448 + 0x36) = (char)((ulong)lVar16 >> 8);
  uVar1 = (uVar4 & 0x1fffff) + (lVar16 >> 0x15);
  *(char *)((long)puStack_448 + 0x35) = (char)lVar16;
  *(byte *)((long)puStack_448 + 0x37) =
       (byte)((ulong)lVar16 >> 0x10) & 0x1f | (byte)((uint)uVar1 << 5);
  *(char *)(puStack_448 + 7) = (char)(uVar1 >> 3);
  *(char *)((long)puStack_448 + 0x39) = (char)(uVar1 >> 0xb);
  uVar2 = (uVar2 & 0x1fffff) + ((long)uVar1 >> 0x15);
  uVar3 = (uVar5 & 0x1fffff) + ((long)uVar2 >> 0x15);
  *(byte *)((long)puStack_448 + 0x3a) = (byte)((uint)uVar1 >> 0x13) & 3 | (byte)((uint)uVar2 << 2);
  *(char *)((long)puStack_448 + 0x3b) = (char)(uVar2 >> 6);
  *(byte *)((long)puStack_448 + 0x3c) = (byte)((uint)uVar2 >> 0xe) & 0x7f | (byte)((int)uVar3 << 7);
  *(char *)((long)puStack_448 + 0x3d) = (char)((uint)((int)((long)uVar2 >> 0x15) + (int)uVar5) >> 1)
  ;
  *(char *)((long)puStack_448 + 0x3e) = (char)(uVar3 >> 9);
  *(char *)((long)puStack_448 + 0x3f) = (char)(uVar3 >> 0x11);
  func_0x006da5a8(uStack_1f8);
  if ((bool)in_ZR) {
    return (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  ___stack_chk_fail();
  pcStack_4c8 = FUN_006d92d0;
  lStack_4e0 = lVar40;
  uStack_4d8 = uVar31;
  ppuStack_4d0 = &ppuStack_180;
  func_0x006da6c0();
  FUN_006d746c(auStack_508,uVar19 + 0x50);
  FUN_006da0f4(auStack_530,uVar31,auStack_508);
  FUN_006da0f4(auStack_558,uVar31 + 0x28,auStack_508);
  FUN_006d7490(lVar40,auStack_558);
  puVar17 = auStack_530;
  FUN_006d7648();
  *(byte *)(lVar40 + 0x1f) = *(byte *)(lVar40 + 0x1f) ^ (byte)((int)puVar17 << 7);
  return puVar17;
}


