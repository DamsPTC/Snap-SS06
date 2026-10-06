/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0056fbf8; end: 005700ab;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 *******
FUN_0056fbf8(undefined8 param_1,ulong param_2,long *param_3,ulong param_4,long *param_5,
            undefined8 *******param_6)

{
  undefined8 ******ppppppuVar1;
  char cVar2;
  undefined8 *******pppppppuVar3;
  dword *pdVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  code *pcVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  undefined8 *******pppppppuVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined **ppuVar15;
  undefined8 uStack_c0;
  undefined8 *******pppppppuStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 *******pppppppuStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 *******pppppppuStack_78;
  undefined8 ******ppppppuStack_70;
  undefined8 ******ppppppuStack_68;
  
  puVar7 = PTR___DefaultRuneLocale_00999f28;
  uVar13 = uRam0000000000b6b6a0;
  if ((bRam0000000000b6b6a8 & 1) == 0) {
    iVar10 = 0xb6b6a8;
    ___cxa_guard_acquire();
    puVar7 = PTR___DefaultRuneLocale_00999f28;
    uVar13 = uRam0000000000b6b6a0;
    if (iVar10 != 0) {
      uVar13 = 0x20;
      __Znwm();
      FUN_0057cad4();
      uRam0000000000b6b6a0 = uVar13;
      ___cxa_guard_release(0xb6b6a8);
      puVar7 = PTR___DefaultRuneLocale_00999f28;
      uVar13 = uRam0000000000b6b6a0;
    }
  }
  for (; uVar6 = uRam0000000000b6b6a0, puVar5 = PTR___DefaultRuneLocale_00999f28,
      uRam0000000000b6b6a0 = uVar13, param_4 != 0; param_4 = param_4 - 1) {
    cVar2 = (char)*param_3;
    lVar11 = (long)cVar2;
    if (cVar2 < 0) {
      PTR___DefaultRuneLocale_00999f28 = puVar7;
      ___maskrune(lVar11,0x4000);
      uVar9 = (uint)lVar11;
    }
    else {
      uVar9 = *(uint *)(PTR___DefaultRuneLocale_00999f28 + (ulong)(uint)(int)cVar2 * 4 + 0x3c) &
              0x4000;
      PTR___DefaultRuneLocale_00999f28 = puVar7;
    }
    if (uVar9 == 0) {
      if (param_4 < 0xf) goto LAB_0056fca4;
      if (*param_3 != 0x6574696e69666e69 || *(long *)((long)param_3 + 7) != 0x6572757475662d65)
      goto LAB_0056fcd4;
      if (param_4 == 0xf) goto LAB_0056ff6c;
      uVar14 = 0xf;
      goto LAB_0056ff38;
    }
    param_3 = (long *)((long)param_3 + 1);
    puVar7 = PTR___DefaultRuneLocale_00999f28;
    uVar13 = uRam0000000000b6b6a0;
    uRam0000000000b6b6a0 = uVar6;
    PTR___DefaultRuneLocale_00999f28 = puVar5;
  }
LAB_0056fcf8:
  PTR___DefaultRuneLocale_00999f28 = puVar7;
  pppppppuStack_78 = (undefined8 *******)0x0;
  ppppppuStack_70 = (undefined8 ******)0x0;
  ppppppuStack_68 = (undefined8 ******)0x0;
  lStack_88 = 0;
  if (0x7ffffffffffffff6 < param_2) {
    FUN_0040d740();
    goto LAB_00570008;
  }
  if (param_2 < 0x17) {
    uStack_90 = CONCAT17((char)param_2,(undefined7)uStack_90);
    pppppppuVar12 = &pppppppuStack_a0;
    if (param_2 != 0) goto LAB_0056fd54;
  }
  else {
    pdVar4 = &MACH_HEADER.flags;
    if ((dword *)(param_2 | 7) != (dword *)0x17) {
      pdVar4 = (dword *)(param_2 | 7);
    }
    pppppppuVar12 = (undefined8 *******)((long)pdVar4 + 1U);
    __Znwm();
    uStack_90 = (long)pdVar4 + 1U | 0x8000000000000000;
    pppppppuStack_a0 = pppppppuVar12;
    uStack_98 = param_2;
LAB_0056fd54:
    _memmove(pppppppuVar12,param_1,param_2);
  }
  *(undefined1 *)((long)pppppppuVar12 + param_2) = 0;
  if (0x7ffffffffffffff6 < param_4) {
    FUN_0040d740();
LAB_00570008:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x57000c);
    (*pcVar8)();
  }
  if (param_4 < 0x17) {
    uStack_a8 = CONCAT17((char)param_4,(undefined7)uStack_a8);
    pppppppuVar12 = &pppppppuStack_b8;
    if (param_4 == 0) goto LAB_0056fdc0;
  }
  else {
    pdVar4 = &MACH_HEADER.flags;
    if ((dword *)(param_4 | 7) != (dword *)0x17) {
      pdVar4 = (dword *)(param_4 | 7);
    }
    pppppppuVar12 = (undefined8 *******)((long)pdVar4 + 1U);
    __Znwm();
    uStack_a8 = (long)pdVar4 + 1U | 0x8000000000000000;
    pppppppuStack_b8 = pppppppuVar12;
    uStack_b0 = param_4;
  }
  _memmove(pppppppuVar12,param_3,param_4);
LAB_0056fdc0:
  *(undefined1 *)((long)pppppppuVar12 + param_4) = 0;
  uStack_c0 = uVar6;
  pppppppuVar12 = &pppppppuStack_a0;
  FUN_0057987c(pppppppuVar12,&pppppppuStack_b8,&uStack_c0,&lStack_88,&lStack_80,&pppppppuStack_78);
  if ((long)uStack_a8 < 0) {
    __ZdlPv(pppppppuStack_b8);
  }
  if ((long)uStack_90 < 0) {
    __ZdlPv(pppppppuStack_a0);
  }
  if ((int)pppppppuVar12 == 0) {
    if ((param_6 != (undefined8 *******)0x0) && ((undefined8 ********)param_6 != &pppppppuStack_78))
    {
      if (*(char *)((long)param_6 + 0x17) < '\0') {
        ppppppuVar1 = ppppppuStack_70;
        pppppppuVar3 = pppppppuStack_78;
        if (-1 < (long)ppppppuStack_68) {
          ppppppuVar1 = (undefined8 ******)((ulong)ppppppuStack_68 >> 0x38);
          pppppppuVar3 = &pppppppuStack_78;
        }
        FUN_0042be6c(param_6,pppppppuVar3,ppppppuVar1);
      }
      else if ((long)ppppppuStack_68 < 0) {
        FUN_0042bef0(param_6,pppppppuStack_78,ppppppuStack_70);
      }
      else {
        param_6[1] = ppppppuStack_70;
        *param_6 = pppppppuStack_78;
        param_6[2] = ppppppuStack_68;
      }
    }
  }
  else {
    lVar11 = 0;
    __ZNSt3__16chrono12system_clock11from_time_tEl();
    lVar11 = SUB168(SEXT816(lVar11) * SEXT816(-0x431bde82d7b634db),8);
    *param_5 = ((lVar11 >> 0x12) - (lVar11 >> 0x3f)) + lStack_88;
    *(int *)(param_5 + 1) =
         SUB164(SEXT816(lStack_80) * SEXT816(0x431bde82d7b634db),10) -
         (SUB164(SEXT816(lStack_80) * SEXT816(0x431bde82d7b634db),0xc) >> 0x1f);
  }
  if ((long)ppppppuStack_68 < 0) {
    __ZdlPv(pppppppuStack_78);
  }
  return pppppppuVar12;
LAB_0056fca4:
  puVar7 = PTR___DefaultRuneLocale_00999f28;
  if (0xc < param_4) {
LAB_0056fcd4:
    puVar7 = PTR___DefaultRuneLocale_00999f28;
    if (*param_3 == 0x6574696e69666e69 && *(long *)((long)param_3 + 5) == 0x747361702d657469) {
      if (param_4 == 0xd) {
        ppuVar15 = &PTR_DAT_00a01e80;
      }
      else {
        uVar14 = 0xd;
        ppuVar15 = &PTR_DAT_00a01e80;
        do {
          cVar2 = *(char *)((long)param_3 + uVar14);
          lVar11 = (long)cVar2;
          if (cVar2 < 0) {
            ___maskrune(lVar11,0x4000);
            uVar9 = (uint)lVar11;
          }
          else {
            uVar9 = *(uint *)(puVar5 + (ulong)(uint)(int)cVar2 * 4 + 0x3c) & 0x4000;
          }
          puVar7 = PTR___DefaultRuneLocale_00999f28;
          if (uVar9 == 0) goto LAB_0056fcf8;
          uVar14 = uVar14 + 1;
        } while (param_4 != uVar14);
      }
      goto LAB_0056ff90;
    }
  }
  goto LAB_0056fcf8;
  while (uVar14 = uVar14 + 1, param_4 != uVar14) {
LAB_0056ff38:
    cVar2 = *(char *)((long)param_3 + uVar14);
    lVar11 = (long)cVar2;
    if (cVar2 < 0) {
      ___maskrune(lVar11,0x4000);
      uVar9 = (uint)lVar11;
    }
    else {
      uVar9 = *(uint *)(puVar5 + (ulong)(uint)(int)cVar2 * 4 + 0x3c) & 0x4000;
    }
    if (uVar9 == 0) goto LAB_0056fca4;
  }
LAB_0056ff6c:
  ppuVar15 = &PTR_DAT_00a01e60;
LAB_0056ff90:
  *param_5 = (long)ppuVar15[2];
  *(undefined4 *)(param_5 + 1) = *(undefined4 *)(ppuVar15 + 3);
  return (undefined8 *******)((long)&MACH_HEADER.magic + 1);
}



/* Entry: 005700ac; end: 005700e7;  */

undefined1  [16] FUN_005700ac(ulong param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  uVar2 = 999999999;
  uVar3 = 0x7fffffffffffffff;
  if (param_1 != 0) {
    uVar2 = ~(uint)((long)param_1 >> 0x3f) & 999999999;
    uVar3 = (long)param_1 >> 0x3f ^ 0x7fffffffffffffff;
  }
  uVar1 = (ulong)uVar2;
  if ((int)param_2 != -1) {
    uVar1 = param_2 >> 2 & 0x3fffffff;
    uVar3 = param_1;
  }
  auVar4._8_8_ = uVar1;
  auVar4._0_8_ = uVar3;
  return auVar4;
}



/* Entry: 005700e8; end: 0057044b;  */

void FUN_005700e8(long param_1,long param_2,long param_3,ulong param_4,ulong param_5,ulong param_6)

{
  char cVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  
  if (param_6 < 0x3c) {
    if (param_5 < 0x3c) {
      if (param_4 < 0x18) {
        if ((param_2 - 1U < 0xc) && (param_3 - 1U < 0x1c)) {
          return;
        }
        if (param_2 != 0xc) {
          param_1 = param_2 / 0xc + param_1;
          param_2 = param_2 % 0xc;
          if (param_2 < 1) {
            param_1 = param_1 + -1;
            param_2 = param_2 + 0xc;
          }
        }
        lVar7 = 0;
        iVar8 = (int)(char)param_4;
      }
      else {
        lVar12 = (long)param_4 % 0x18;
        lVar7 = param_2 / 0xc + param_1;
        lVar10 = param_2 % 0xc;
        if (lVar10 < 1) {
          lVar7 = lVar7 + -1;
          lVar10 = lVar10 + 0xc;
        }
        bVar6 = param_2 != 0xc;
        param_2 = 0xc;
        if (bVar6) {
          param_1 = lVar7;
          param_2 = lVar10;
        }
        lVar7 = (long)param_4 / 0x18 + (lVar12 >> 0x3f);
        iVar8 = (int)lVar12 + 0x18;
        if (-1 < lVar12) {
          iVar8 = (int)lVar12;
        }
      }
      iVar9 = (int)(char)param_5;
      iVar11 = (int)(char)param_6;
    }
    else {
      lVar12 = (long)param_5 % 0x3c;
      lVar7 = param_2 / 0xc + param_1;
      lVar10 = param_2 % 0xc;
      if (lVar10 < 1) {
        lVar7 = lVar7 + -1;
        lVar10 = lVar10 + 0xc;
      }
      bVar6 = param_2 != 0xc;
      param_2 = 0xc;
      if (bVar6) {
        param_1 = lVar7;
        param_2 = lVar10;
      }
      lVar7 = (long)param_5 / 0x3c + (lVar12 >> 0x3f);
      lVar10 = lVar7 % 0x18 + (long)param_4 % 0x18;
      iVar9 = (int)(char)lVar10 / 0x18;
      uVar2 = (int)lVar10 + iVar9 * -0x18;
      cVar5 = (char)uVar2;
      cVar1 = cVar5 + '\x18';
      if (-1 < cVar5) {
        cVar1 = cVar5;
      }
      lVar7 = lVar7 / 0x18 + (long)param_4 / 0x18 + (long)iVar9 + (long)(int)-(uVar2 >> 7 & 1);
      iVar8 = (int)cVar1;
      iVar9 = (int)lVar12 + 0x3c;
      if (-1 < lVar12) {
        iVar9 = (int)lVar12;
      }
      iVar11 = (int)(char)param_6;
    }
  }
  else {
    lVar12 = (long)param_6 % 0x3c;
    lVar7 = (long)param_6 / 0x3c + (lVar12 >> 0x3f);
    lVar10 = lVar7 % 0x3c + (long)param_5 % 0x3c;
    cVar1 = (char)lVar12 + '<';
    if (-1 < lVar12) {
      cVar1 = (char)lVar12;
    }
    lVar12 = param_2 / 0xc + param_1;
    lVar13 = param_2 % 0xc;
    if (lVar13 < 1) {
      lVar12 = lVar12 + -1;
      lVar13 = lVar13 + 0xc;
    }
    bVar6 = param_2 != 0xc;
    param_2 = 0xc;
    if (bVar6) {
      param_1 = lVar12;
      param_2 = lVar13;
    }
    iVar11 = (int)lVar10;
    uVar2 = iVar11 + ((uint)((char)lVar10 * -0x77) >> 8);
    iVar9 = ((int)(uVar2 * 0x1000000) >> 0x1d) + ((uVar2 & 0x80) >> 7);
    uVar2 = iVar11 + iVar9 * -0x3c;
    cVar3 = (char)uVar2;
    cVar5 = cVar3 + '<';
    if (-1 < cVar3) {
      cVar5 = cVar3;
    }
    lVar7 = lVar7 / 0x3c + (long)param_5 / 0x3c + (long)iVar9 + (long)(int)-(uVar2 >> 7 & 1);
    lVar10 = lVar7 / 0x18;
    iVar9 = (int)lVar7 + (int)lVar10 * -0x18 + (int)param_4 + (int)((long)param_4 / 0x18) * -0x18;
    iVar11 = (int)(char)iVar9 / 0x18;
    uVar2 = iVar9 + iVar11 * -0x18;
    cVar4 = (char)uVar2;
    lVar7 = lVar10 + (long)param_4 / 0x18 + (long)iVar11 + (long)(int)-(uVar2 >> 7 & 1);
    cVar3 = cVar4 + '\x18';
    if (-1 < cVar4) {
      cVar3 = cVar4;
    }
    iVar8 = (int)cVar3;
    iVar9 = (int)cVar5;
    iVar11 = (int)cVar1;
  }
  FUN_0057044c(param_1,param_2,param_3,lVar7,iVar8,iVar9,iVar11);
  return;
}



/* Entry: 0057044c; end: 00570a63;  */

/* WARNING: Type propagation algorithm not settling */

undefined1  [16]
FUN_0057044c(long param_1,ulong param_2,long param_3,long param_4,ulong param_5,int param_6,
            undefined4 param_7)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  
  lVar13 = param_1 % 400 + (param_4 / 0x23ab1) * 400;
  param_4 = param_4 % 0x23ab1;
  lVar1 = param_4 + 0x23ab1;
  lVar14 = lVar13 + -400;
  if (-1 < param_4) {
    lVar1 = param_4;
    lVar14 = lVar13;
  }
  uVar12 = lVar14 + (param_3 / 0x23ab1) * 400;
  puVar9 = (undefined *)(lVar1 + param_3 % 0x23ab1);
  iVar5 = (int)param_2;
  if ((long)puVar9 < 1) {
    if ((long)puVar9 < -0x16c) {
      uVar8 = uVar12 - 400;
      puVar9 = puVar9 + 0x23ab1;
      goto joined_r0x00570534;
    }
    uVar8 = uVar12 - 1;
    uVar3 = uVar8;
    if (2 < iVar5) {
      uVar3 = uVar12;
    }
    if ((uVar3 & 3) == 0) {
      lVar14 = uVar3 * -0x70a3d70a3d70a3d7;
      lVar1 = 0x16d;
      if ((lVar14 + 0x51eb851eb851eb0U >> 4 | lVar14 << 0x3c) < 0xa3d70a3d70a3d7 ||
          0x28f5c28f5c28f5c < (lVar14 + 0x51eb851eb851eb8U >> 2 | lVar14 << 0x3e)) {
        lVar1 = 0x16e;
      }
      puVar9 = puVar9 + lVar1;
    }
    else {
      puVar9 = puVar9 + 0x16d;
    }
    if (puVar9 < section_00000158.segname + 6) goto LAB_00570750;
  }
  else {
    uVar8 = uVar12;
    if ((undefined *)0x23ab1 < puVar9) {
      uVar8 = uVar12 + 400;
      puVar9 = puVar9 + -0x23ab1;
    }
joined_r0x00570534:
    if (puVar9 < section_00000158.segname + 6) goto LAB_00570750;
  }
  uVar12 = uVar8;
  if (2 < iVar5) {
    uVar12 = uVar8 + 1;
  }
  iVar10 = (int)((long)uVar12 % 400);
  iVar11 = iVar10 + 400;
  if (-1 < (long)uVar12 % 400) {
    iVar11 = iVar10;
  }
  puVar6 = &UNK_00008eac;
  if (300 < iVar11 || iVar11 == 0) {
    puVar6 = &UNK_00008ead;
  }
  if (puVar6 < puVar9) {
    do {
      puVar9 = puVar9 + -(long)puVar6;
      uVar8 = uVar8 + 100;
      iVar10 = -300;
      if (iVar11 < 300) {
        iVar10 = 100;
      }
      iVar11 = iVar10 + iVar11;
      puVar6 = &UNK_00008eac;
      if (300 < iVar11 || iVar11 == 0) {
        puVar6 = &UNK_00008ead;
      }
    } while (puVar6 < puVar9);
  }
  while( true ) {
    puVar6 = (undefined *)((long)&section_00000568.reserved3 + 1);
    if (((iVar11 != 0) && (puVar6 = (undefined *)0x5b5, iVar11 < 0x12d)) &&
       (puVar6 = (undefined *)0x5b4, (iVar11 + -1) % 100 < 0x60)) {
      puVar6 = (undefined *)0x5b5;
    }
    uVar12 = uVar8;
    puVar4 = puVar9;
    if (puVar9 < puVar6 || puVar9 + -(long)puVar6 == (undefined *)0x0) break;
    uVar8 = uVar8 + 4;
    iVar10 = -0x18c;
    if (iVar11 < 0x18c) {
      iVar10 = 4;
    }
    iVar11 = iVar10 + iVar11;
    puVar9 = puVar9 + -(long)puVar6;
  }
  do {
    while (puVar9 = puVar4, uVar8 = uVar12, uVar12 = (2 < iVar5) + uVar8, (uVar12 & 3) == 0) {
      lVar14 = uVar12 * -0x70a3d70a3d70a3d7;
      lVar1 = 0x16d;
      if ((lVar14 + 0x51eb851eb851eb0U >> 4 | lVar14 << 0x3c) < 0xa3d70a3d70a3d7 ||
          0x28f5c28f5c28f5c < (lVar14 + 0x51eb851eb851eb8U >> 2 | lVar14 << 0x3e)) {
        lVar1 = 0x16e;
      }
      uVar12 = uVar8 + 1;
      puVar4 = puVar9 + -lVar1;
      if (puVar9 + -lVar1 == (undefined *)0x0 || (long)puVar9 < lVar1) goto LAB_00570750;
    }
    uVar12 = uVar8 + 1;
    puVar4 = puVar9 + -0x16d;
  } while (puVar9 + -0x16d != (undefined *)0x0 && 0x16c < (long)puVar9);
LAB_00570750:
  if (0x1c < (long)puVar9) {
    if ((uVar8 & 3) != 0) goto LAB_00570800;
    while( true ) {
      uVar7 = 1;
      if ((uVar8 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb8 >> 2 |
          uVar8 * -0x70a3d70a3d70a3d7 << 0x3e) < 0x28f5c28f5c28f5d) {
        uVar7 = (uint)((uVar8 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb0 >> 4 |
                       uVar8 * -0x70a3d70a3d70a3d7 << 0x3c) < 0xa3d70a3d70a3d7);
      }
      uVar2 = 0;
      if (((uint)param_2 & 0xff) == 2) {
        uVar2 = uVar7;
      }
      puVar6 = puVar9 + -((long)*(int *)(&UNK_0081143c + (long)(char)param_2 * 4) + (ulong)uVar2);
      if (puVar6 == (undefined *)0x0 ||
          (long)puVar9 <
          (long)((long)*(int *)(&UNK_0081143c + (long)(char)param_2 * 4) + (ulong)uVar2)) break;
      while( true ) {
        if ((char)((char)param_2 + '\x01') < '\r') {
          uVar7 = (int)param_2 + 1;
        }
        else {
          uVar8 = uVar8 + 1;
          uVar7 = 1;
        }
        param_2 = (ulong)uVar7;
        puVar9 = puVar6;
        if ((uVar8 & 3) == 0) break;
LAB_00570800:
        puVar6 = puVar9 + -(long)*(int *)(&UNK_0081143c + (long)(char)param_2 * 4);
        if (puVar6 == (undefined *)0x0 ||
            (long)puVar9 < (long)*(int *)(&UNK_0081143c + (long)(char)param_2 * 4))
        goto LAB_0057083c;
      }
    }
  }
LAB_0057083c:
  auVar15._8_8_ =
       CONCAT44(param_7,param_6 << 0x18) & 0xffffffffff | (param_5 & 0xff) << 0x10 |
       ((ulong)puVar9 & 0xff) << 8 | param_2 & 0xff;
  auVar15._0_8_ = (param_1 - param_1 % 400) + uVar8;
  return auVar15;
}



/* Entry: 00570a64; end: 005712c3;  */

/* WARNING: Type propagation algorithm not settling */

char * FUN_00570a64(char *param_1,ulong *param_2,undefined8 *param_3,char *param_4)

{
  qword *pqVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
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
  double dVar25;
  double dVar26;
  int iVar27;
  dword *pdVar28;
  undefined7 uVar29;
  undefined7 uVar30;
  bool bVar31;
  bool bVar32;
  qword *pqVar33;
  long *plVar34;
  undefined8 *puVar35;
  long *plVar36;
  long *plVar37;
  char *pcVar38;
  uint *puVar39;
  char *pcVar40;
  uint *puVar41;
  char *pcVar42;
  char *extraout_x8;
  char *pcVar43;
  uint uVar44;
  int iVar45;
  ulong uVar46;
  byte *pbVar47;
  char *pcVar48;
  ulong uVar49;
  ulong uVar50;
  char *pcVar51;
  uint *puVar52;
  byte *pbVar53;
  int iVar54;
  uint uVar55;
  uint uVar56;
  ulong uVar57;
  ulong uVar58;
  qword *pqVar59;
  byte *pbVar60;
  long lVar61;
  long lVar62;
  qword *pqVar63;
  ulong uVar64;
  ulong uVar65;
  long lVar66;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 uVar67;
  undefined1 in_register_00005002;
  undefined1 uVar68;
  undefined1 in_register_00005003;
  undefined1 uVar69;
  undefined1 in_register_00005004;
  undefined1 uVar70;
  undefined1 in_register_00005005;
  undefined1 uVar71;
  undefined1 in_register_00005006;
  undefined1 uVar72;
  undefined1 in_register_00005007;
  undefined1 uVar73;
  undefined1 uVar74;
  byte bVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined8 uStack_510;
  undefined7 uStack_508;
  undefined1 uStack_501;
  undefined8 uStack_500;
  undefined8 uStack_4e0;
  undefined7 uStack_4d8;
  undefined1 uStack_4d1;
  undefined7 uStack_4d0;
  byte bStack_4c9;
  undefined7 uStack_4b0;
  undefined1 uStack_4a9;
  undefined7 uStack_4a8;
  undefined1 uStack_4a1;
  undefined8 uStack_4a0;
  long lStack_498;
  uint auStack_424 [85];
  uint auStack_2d0 [88];
  int iStack_170;
  undefined4 uStack_16c;
  long lStack_168;
  ulong uStack_108;
  uint uStack_100;
  int iStack_f8;
  long lStack_f0;
  long lStack_e8;
  char *pcStack_e0;
  ulong uStack_d8;
  int iStack_d0;
  int iStack_c8;
  char *pcStack_b0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar56 = (uint)param_4;
  pcVar40 = param_1;
  pcVar38 = param_4;
  if ((ulong *)param_1 == param_2) {
    bVar31 = false;
    if ((uVar56 >> 2 & 1) == 0) goto LAB_00570acc;
LAB_00570b58:
    if ((uVar56 >> 2 & 1) == 0) {
LAB_00570b5c:
      FUN_00573a04(&uStack_108);
      if (pcStack_e0 == (char *)0x0) {
LAB_00570cdc:
        iVar45 = 0x16;
        pcStack_e0 = param_1;
        goto LAB_00571260;
      }
      if (iStack_f8 == 1) {
LAB_00570c10:
        iVar45 = 0;
        uVar73 = 0xff;
        if (!bVar31) {
          uVar73 = 0x7f;
        }
        uVar67 = 0;
        uVar68 = 0;
        uVar69 = 0;
        uVar70 = 0;
        uVar71 = 0;
        uVar72 = 0;
        uVar74 = 0xf0;
      }
      else if (iStack_f8 == 2) {
        pcVar40 = pcStack_e0;
        if (lStack_f0 == 0) goto LAB_00570bf0;
LAB_00570b8c:
        pcVar42 = (char *)(lStack_e8 - lStack_f0);
        if (0x7e < (long)pcVar42) {
          pcVar42 = section_00000068.segname + 7;
        }
        if (lStack_e8 != lStack_f0) {
          param_4 = pcVar42;
          _memcpy(&uStack_d8);
        }
        *(byte *)((long)&uStack_d8 + (long)pcVar42) = 0;
        pcStack_e0 = pcVar40;
LAB_00570bf4:
        pcVar40 = (char *)&uStack_d8;
        _nan();
        iVar45 = 0;
        dVar25 = -(double)CONCAT17(in_register_00005007,
                                   CONCAT16(in_register_00005006,
                                            CONCAT15(in_register_00005005,
                                                     CONCAT14(in_register_00005004,
                                                              CONCAT13(in_register_00005003,
                                                                       CONCAT12(in_register_00005002
                                                                                ,CONCAT11(
                                                  in_register_00005001,in_b0)))))));
        uVar67 = SUB81(dVar25,0);
        uVar68 = (char)((ulong)dVar25 >> 8);
        uVar69 = (char)((ulong)dVar25 >> 0x10);
        uVar70 = (char)((ulong)dVar25 >> 0x18);
        uVar71 = (char)((ulong)dVar25 >> 0x20);
        uVar72 = (char)((ulong)dVar25 >> 0x28);
        uVar74 = (char)((ulong)dVar25 >> 0x30);
        uVar73 = (char)((ulong)dVar25 >> 0x38);
        if (!bVar31) {
          uVar67 = in_b0;
          uVar68 = in_register_00005001;
          uVar69 = in_register_00005002;
          uVar70 = in_register_00005003;
          uVar71 = in_register_00005004;
          uVar72 = in_register_00005005;
          uVar74 = in_register_00005006;
          uVar73 = in_register_00005007;
        }
      }
      else if (uStack_108 == 0) {
LAB_00570d28:
        iVar45 = 0;
        uVar73 = 0x80;
        if (!bVar31) {
          uVar73 = 0;
        }
        uVar67 = 0;
        uVar68 = 0;
        uVar69 = 0;
        uVar70 = 0;
        uVar71 = 0;
        uVar72 = 0;
        uVar74 = 0;
      }
      else {
        pcVar42 = pcStack_e0;
        if (lStack_f0 == 0) {
          if ((int)uStack_100 < -0x156) {
            uVar74 = 0x80;
            if (!bVar31) {
              uVar74 = 0;
            }
            uVar73 = 0;
            uVar71 = 0;
            uVar70 = 0;
            uVar69 = 0;
            uVar68 = 0;
            uVar67 = 0;
            uVar72 = 0;
          }
          else {
            if ((int)uStack_100 < 0x135) {
              uVar50 = uStack_108 << (LZCOUNT(uStack_108) & 0x3fU);
              iVar45 = (int)(uStack_100 * 0x3526a) >> 0x10;
              uVar49 = *(ulong *)(&UNK_00811770 + (ulong)(uStack_100 + 0x156) * 8);
              uVar46 = uVar49 * uVar50;
              auVar76._8_8_ = 0;
              auVar76._0_8_ = uVar49;
              auVar80._8_8_ = 0;
              auVar80._0_8_ = uVar50;
              uVar65 = SUB168(auVar76 * auVar80,8);
              if ((~SUB164(auVar76 * auVar80,8) & 0x1ff) == 0 && CARRY8(uVar46,uVar50)) {
                auVar12._8_8_ = 0;
                auVar12._0_8_ = *(ulong *)(&UNK_00812bc8 + (ulong)(uStack_100 + 0x156) * 8);
                auVar15._8_8_ = 0;
                auVar15._0_8_ = uVar50;
                uVar57 = SUB168(auVar12 * auVar15,8);
                bVar32 = CARRY8(uVar57,uVar46);
                uVar46 = uVar57 + uVar46;
                if (bVar32) {
                  uVar65 = uVar65 + 1;
                }
                if ((!CARRY8(*(ulong *)(&UNK_00812bc8 + (ulong)(uStack_100 + 0x156) * 8) * uVar50,
                             uVar50)) || ((uVar65 & 0x1ff) != 0x1ff || uVar46 != 0xffffffffffffffff)
                   ) goto LAB_00570f8c;
              }
              else {
LAB_00570f8c:
                uVar50 = uVar65 >> -((long)uVar65 >> 0x3f) + 9U;
                if ((uVar46 != 0) || (((uVar65 & 0x1ff) != 0 || ((uVar50 & 3) != 1)))) {
                  lVar62 = (long)((iVar45 - (int)LZCOUNT(uStack_108)) + 0x43f) -
                           (-((long)uVar65 >> 0x3f) ^ 1U);
                  uVar50 = (uVar50 & 1) + uVar50;
                  if ((uVar50 & 0x1c0000000000000) != 0) {
                    lVar62 = lVar62 + 1;
                  }
                  if (0xfffffffffffff801 < lVar62 - 0x7ffU) {
                    uVar46 = uVar50 >> 1 & 0xfffffffffffff | 0x10000000000000;
                    pcVar40 = (char *)(ulong)((int)lVar62 - 0x433);
                    goto LAB_005712a0;
                  }
                }
              }
              uVar65 = uVar49 * uStack_108;
              auVar13._8_8_ = 0;
              auVar13._0_8_ = uVar49;
              auVar16._8_8_ = 0;
              auVar16._0_8_ = uStack_108;
              uVar49 = SUB168(auVar13 * auVar16,8);
              iVar45 = iVar45 + -0x3f;
              iVar54 = 0x40 - (int)LZCOUNT(uVar65);
              if (uVar49 != 0) {
                iVar54 = 0x80 - (int)LZCOUNT(uVar49);
              }
              uVar56 = iVar54 - 0x35;
              uVar55 = iVar54 - 0x3f;
              uVar50 = uVar49 >> ((ulong)uVar55 & 0x3f);
              bVar32 = (uVar55 & 0x40) == 0;
              uVar46 = uVar50;
              if (bVar32) {
                uVar46 = (uVar49 << 1) << ((ulong)~uVar55 & 0x3f) | uVar65 >> ((ulong)uVar55 & 0x3f)
                ;
              }
              uVar57 = 0;
              if (bVar32) {
                uVar57 = uVar50;
              }
              bVar32 = uStack_100 < 0x1c;
              if (!bVar32) {
                uVar56 = 10;
                uVar49 = uVar57;
                uVar65 = uVar46;
              }
              uVar44 = (uint)bVar32;
              if (!bVar32) {
                iVar45 = uVar55 + iVar45;
              }
              goto LAB_00571118;
            }
            uVar74 = 0xff;
            uVar73 = 0xff;
            uVar67 = 0xff;
            uVar68 = 0xff;
            uVar69 = 0xff;
            uVar70 = 0xff;
            uVar71 = 0xff;
            uVar72 = 0xef;
            if (!bVar31) {
              uVar73 = 0xff;
              uVar67 = 0xff;
              uVar68 = 0xff;
              uVar69 = 0xff;
              uVar70 = 0xff;
              uVar71 = 0xff;
              uVar72 = 0xef;
              uVar74 = 0x7f;
            }
          }
          *param_3 = CONCAT17(uVar74,CONCAT16(uVar72,CONCAT15(uVar71,CONCAT14(uVar70,CONCAT13(uVar69
                                                  ,CONCAT12(uVar68,CONCAT11(uVar67,uVar73)))))));
          iVar45 = 0x22;
          goto LAB_00571260;
        }
        if (-0x157 < (int)uStack_100) {
          if (0x134 < (int)uStack_100) goto LAB_00571240;
          uVar44 = 0;
          uVar49 = *(ulong *)(&UNK_00811770 + (ulong)(uStack_100 + 0x156) * 8) * uStack_108;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = *(ulong *)(&UNK_00811770 + (ulong)(uStack_100 + 0x156) * 8);
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uStack_108;
          uVar46 = SUB168(auVar11 * auVar14,8);
          iVar45 = 0x40 - (int)LZCOUNT(uVar49);
          if (uVar46 != 0) {
            iVar45 = 0x80 - (int)LZCOUNT(uVar46);
          }
          uVar55 = iVar45 - 0x3a;
          uVar50 = uVar46 >> ((ulong)uVar55 & 0x3f);
          bVar32 = (uVar55 & 0x40) == 0;
          uVar65 = uVar50;
          if (bVar32) {
            uVar65 = (uVar46 << 1) << ((ulong)~uVar55 & 0x3f) | uVar49 >> ((ulong)uVar55 & 0x3f);
          }
          uVar49 = 0;
          if (bVar32) {
            uVar49 = uVar50;
          }
          uVar56 = 5;
          iVar45 = uVar55 + ((int)(uStack_100 * 0x3526a) >> 0x10) + -0x3f;
LAB_00571118:
          if ((int)uVar56 <= (int)(-iVar45 - 0x432U)) {
            uVar56 = -iVar45 - 0x432U;
          }
          uVar50 = (ulong)uVar56;
          uVar55 = uVar56 + iVar45;
          if ((int)uVar56 < 1) {
            uVar46 = 0;
            if ((-uVar56 & 0x40) == 0) {
              uVar46 = uVar65 << ((ulong)-uVar56 & 0x3f);
            }
joined_r0x00571154:
            if (uVar44 == 0) {
              param_4 = (char *)&uStack_108;
              uVar65 = uVar46;
              FUN_005712c4(uVar46,uVar55);
              uVar46 = uVar46 + (uVar65 & 0xffffffff);
            }
          }
          else if (uVar56 < 0x80) {
            uVar58 = -1L << (uVar50 & 0x3f);
            uVar46 = 1L << ((ulong)(uVar56 - 1) & 0x3f);
            bVar32 = (uVar56 - 1 & 0x40) == 0;
            uVar57 = uVar46;
            if (bVar32) {
              uVar57 = 0;
            }
            uVar5 = 0;
            if (bVar32) {
              uVar5 = uVar46;
            }
            bVar32 = (uVar56 & 0x40) == 0;
            uVar46 = uVar58;
            if (bVar32) {
              uVar46 = uVar58 | 0x7fffffffffffffffU >> ((ulong)~uVar56 & 0x3f);
            }
            uVar64 = 0;
            if (bVar32) {
              uVar64 = uVar58;
            }
            uVar58 = uVar49 & (uVar46 ^ 0xffffffffffffffff);
            uVar64 = uVar65 & (uVar64 ^ 0xffffffffffffffff);
            uVar46 = uVar49 >> (uVar50 & 0x3f);
            if (bVar32) {
              uVar46 = (uVar49 << 1) << ((ulong)~uVar56 & 0x3f) | uVar65 >> (uVar50 & 0x3f);
            }
            if (CARRY8(uVar57,~uVar58) || CARRY8(uVar57 + ~uVar58,(ulong)(uVar64 <= uVar5))) {
              if (uVar58 != uVar57 || uVar64 != uVar5) {
                if (uVar64 != uVar5 - 1 || uVar58 != (uVar57 - 1) + (ulong)(uVar5 != 0)) {
                  uVar44 = 1;
                }
                goto joined_r0x00571154;
              }
              uVar46 = ((ulong)((uint)uVar46 | uVar44 ^ 0xffffffff) & 1) + uVar46;
            }
            else {
              uVar46 = uVar46 + 1;
            }
          }
          else {
            uVar46 = 0;
          }
          if (uVar46 == 0x20000000000000) {
            uVar55 = uVar55 + 1;
            uVar46 = 0x10000000000000;
          }
          uVar56 = 0xfffe7961;
          if (uVar46 != 0) {
            uVar56 = uVar55;
          }
          pcVar40 = (char *)(ulong)uVar56;
          if (0x3cb < (int)uVar55) goto LAB_00571240;
          if (uVar56 != 0xfffe7961) goto LAB_005712a0;
        }
LAB_00571038:
        uVar73 = 0x80;
        if (!bVar31) {
          uVar73 = 0;
        }
        uVar67 = 0;
        uVar72 = 0;
        uVar71 = 0;
        uVar70 = 0;
        uVar69 = 0;
        uVar68 = 0;
        uVar74 = 0;
LAB_00571258:
        iVar45 = 0x22;
      }
    }
    else {
      FUN_0057426c(&uStack_108);
      if (pcStack_e0 == (char *)0x0) goto LAB_00570cdc;
      if (iStack_f8 == 1) goto LAB_00570c10;
      if (iStack_f8 == 2) {
        pcVar40 = pcStack_e0;
        if (lStack_f0 != 0) goto LAB_00570b8c;
LAB_00570bf0:
        uStack_d8._0_1_ = '\0';
        goto LAB_00570bf4;
      }
      if (uStack_108 == 0) goto LAB_00570d28;
      uVar56 = 0xb - (int)LZCOUNT(uStack_108);
      if ((int)uVar56 <= (int)(-uStack_100 - 0x432)) {
        uVar56 = -uStack_100 - 0x432;
      }
      if ((int)uVar56 < 1) {
        uVar46 = 0;
        if ((-uVar56 & 0x40) == 0) {
          uVar46 = uStack_108 << ((ulong)-uVar56 & 0x3f);
        }
      }
      else if (uVar56 < 0x80) {
        uVar46 = 1L << ((ulong)(uVar56 - 1) & 0x3f);
        bVar32 = (uVar56 - 1 & 0x40) == 0;
        uVar65 = uVar46;
        if (bVar32) {
          uVar65 = 0;
        }
        uVar49 = 0;
        if (bVar32) {
          uVar49 = uVar46;
        }
        bVar32 = (uVar56 & 0x40) == 0;
        uVar46 = 0;
        if (bVar32) {
          uVar46 = -1L << ((ulong)uVar56 & 0x3f);
        }
        uVar50 = uStack_108 & (uVar46 ^ 0xffffffffffffffff);
        uVar46 = 0;
        if (bVar32) {
          uVar46 = uStack_108 >> ((ulong)uVar56 & 0x3f);
        }
        if (uVar65 != 0 || CARRY8(uVar65 - 1,(ulong)(uVar50 <= uVar49))) {
          if (uVar50 == uVar49 && uVar65 == 0) {
            uVar46 = (uVar46 & 1) + uVar46;
          }
        }
        else {
          uVar46 = uVar46 + 1;
        }
      }
      else {
        uVar46 = 0;
      }
      uVar56 = uVar56 + uStack_100;
      if (uVar46 == 0x20000000000000) {
        uVar56 = uVar56 + 1;
        uVar46 = 0x10000000000000;
      }
      uVar55 = 0xfffe7961;
      if (uVar46 != 0) {
        uVar55 = uVar56;
      }
      pcVar40 = (char *)(ulong)uVar55;
      if ((0x3cb < (int)uVar56) || (uVar55 == 99999)) {
LAB_00571240:
        uVar73 = 0xff;
        uVar67 = 0xff;
        uVar68 = 0xff;
        uVar69 = 0xff;
        uVar70 = 0xff;
        uVar71 = 0xff;
        uVar72 = 0xff;
        uVar74 = 0xef;
        if (!bVar31) {
          uVar67 = 0xff;
          uVar68 = 0xff;
          uVar69 = 0xff;
          uVar70 = 0xff;
          uVar71 = 0xff;
          uVar72 = 0xff;
          uVar74 = 0xef;
          uVar73 = 0x7f;
        }
        goto LAB_00571258;
      }
      pcVar42 = pcStack_e0;
      if (uVar55 == 0xfffe7961) goto LAB_00571038;
LAB_005712a0:
      dVar25 = (double)uVar46;
      dVar26 = -dVar25;
      uVar67 = SUB81(dVar26,0);
      uVar73 = (undefined1)((ulong)dVar26 >> 0x38);
      uVar68 = (undefined1)((ulong)dVar26 >> 8);
      uVar69 = (undefined1)((ulong)dVar26 >> 0x10);
      uVar70 = (undefined1)((ulong)dVar26 >> 0x18);
      uVar71 = (undefined1)((ulong)dVar26 >> 0x20);
      uVar72 = (undefined1)((ulong)dVar26 >> 0x28);
      uVar74 = (undefined1)((ulong)dVar26 >> 0x30);
      if (!bVar31) {
        uVar67 = SUB81(dVar25,0);
        uVar68 = (undefined1)((ulong)dVar25 >> 8);
        uVar69 = (undefined1)((ulong)dVar25 >> 0x10);
        uVar70 = (undefined1)((ulong)dVar25 >> 0x18);
        uVar71 = (undefined1)((ulong)dVar25 >> 0x20);
        uVar72 = (undefined1)((ulong)dVar25 >> 0x28);
        uVar74 = (undefined1)((ulong)dVar25 >> 0x30);
        uVar73 = (undefined1)((ulong)dVar25 >> 0x38);
      }
      _ldexp();
      iVar45 = 0;
      pcStack_e0 = pcVar42;
    }
    *param_3 = CONCAT17(uVar73,CONCAT16(uVar74,CONCAT15(uVar72,CONCAT14(uVar71,CONCAT13(uVar70,
                                                  CONCAT12(uVar69,CONCAT11(uVar68,uVar67)))))));
  }
  else {
    bVar31 = *param_1 == 0x2d;
    if (bVar31) {
      pcVar40 = param_1 + 1;
    }
    if ((uVar56 >> 2 & 1) != 0) goto LAB_00570b58;
LAB_00570acc:
    if ((long)param_2 - (long)pcVar40 < 2) goto LAB_00570b58;
    if ((*pcVar40 != 0x30) || (pcVar42 = pcVar40 + 1, (byte)(*pcVar42 | 0x20U) != 0x78))
    goto LAB_00570b5c;
    pcVar40 = pcVar40 + 2;
    FUN_0057426c(&uStack_d8);
    if ((pcStack_b0 == (char *)0x0) || (iStack_c8 != 0)) {
      if (uVar56 != 1) {
        iVar45 = 0;
        uVar73 = 0x80;
        if (!bVar31) {
          uVar73 = 0;
        }
        uVar67 = 0;
        uVar72 = 0;
        uVar71 = 0;
        uVar70 = 0;
        uVar69 = 0;
        uVar68 = 0;
        uVar74 = 0;
        pcStack_e0 = pcVar42;
        goto LAB_00570f34;
      }
      goto LAB_00570cdc;
    }
    uVar46 = CONCAT71(uStack_d8._1_7_,(char)uStack_d8);
    if (uVar46 == 0) {
      iVar45 = 0;
      uVar73 = 0x80;
      if (!bVar31) {
        uVar73 = 0;
      }
      uVar67 = 0;
      uVar72 = 0;
      uVar71 = 0;
      uVar70 = 0;
      uVar69 = 0;
      uVar68 = 0;
      uVar74 = 0;
      pcStack_e0 = pcStack_b0;
    }
    else {
      uVar56 = 0xb - (int)LZCOUNT(uVar46);
      if ((int)uVar56 <= (int)(-iStack_d0 - 0x432U)) {
        uVar56 = -iStack_d0 - 0x432U;
      }
      if ((int)uVar56 < 1) {
        uVar65 = 0;
        if ((-uVar56 & 0x40) == 0) {
          uVar65 = uVar46 << ((ulong)-uVar56 & 0x3f);
        }
      }
      else if (uVar56 < 0x80) {
        uVar65 = 1L << ((ulong)(uVar56 - 1) & 0x3f);
        bVar32 = (uVar56 - 1 & 0x40) == 0;
        uVar49 = uVar65;
        if (bVar32) {
          uVar49 = 0;
        }
        uVar50 = 0;
        if (bVar32) {
          uVar50 = uVar65;
        }
        bVar32 = (uVar56 & 0x40) == 0;
        uVar65 = 0;
        if (bVar32) {
          uVar65 = -1L << ((ulong)uVar56 & 0x3f);
        }
        uVar57 = uVar46 & (uVar65 ^ 0xffffffffffffffff);
        uVar65 = 0;
        if (bVar32) {
          uVar65 = uVar46 >> ((ulong)uVar56 & 0x3f);
        }
        if (uVar49 != 0 || CARRY8(uVar49 - 1,(ulong)(uVar57 <= uVar50))) {
          if (uVar57 == uVar50 && uVar49 == 0) {
            uVar65 = (uVar65 & 1) + uVar65;
          }
        }
        else {
          uVar65 = uVar65 + 1;
        }
      }
      else {
        uVar65 = 0;
      }
      uVar56 = uVar56 + iStack_d0;
      if (uVar65 == 0x20000000000000) {
        uVar56 = uVar56 + 1;
        uVar65 = 0x10000000000000;
      }
      uVar55 = 0xfffe7961;
      if (uVar65 != 0) {
        uVar55 = uVar56;
      }
      pcVar40 = (char *)(ulong)uVar55;
      if (((int)uVar56 < 0x3cc) && (uVar55 != 99999)) {
        if (uVar55 == 0xfffe7961) {
          uVar73 = 0x80;
          if (!bVar31) {
            uVar73 = 0;
          }
          uVar67 = 0;
          uVar72 = 0;
          uVar71 = 0;
          uVar70 = 0;
          uVar69 = 0;
          uVar68 = 0;
          uVar74 = 0;
          iVar45 = 0x22;
          pcStack_e0 = pcStack_b0;
        }
        else {
          dVar25 = (double)uVar65;
          dVar26 = -dVar25;
          uVar67 = SUB81(dVar26,0);
          uVar73 = (undefined1)((ulong)dVar26 >> 0x38);
          uVar68 = (undefined1)((ulong)dVar26 >> 8);
          uVar69 = (undefined1)((ulong)dVar26 >> 0x10);
          uVar70 = (undefined1)((ulong)dVar26 >> 0x18);
          uVar71 = (undefined1)((ulong)dVar26 >> 0x20);
          uVar72 = (undefined1)((ulong)dVar26 >> 0x28);
          uVar74 = (undefined1)((ulong)dVar26 >> 0x30);
          if (!bVar31) {
            uVar67 = SUB81(dVar25,0);
            uVar68 = (undefined1)((ulong)dVar25 >> 8);
            uVar69 = (undefined1)((ulong)dVar25 >> 0x10);
            uVar70 = (undefined1)((ulong)dVar25 >> 0x18);
            uVar71 = (undefined1)((ulong)dVar25 >> 0x20);
            uVar72 = (undefined1)((ulong)dVar25 >> 0x28);
            uVar74 = (undefined1)((ulong)dVar25 >> 0x30);
            uVar73 = (undefined1)((ulong)dVar25 >> 0x38);
          }
          _ldexp();
          iVar45 = 0;
          pcStack_e0 = pcStack_b0;
        }
      }
      else {
        uVar73 = 0xff;
        if (!bVar31) {
          uVar73 = 0x7f;
        }
        uVar69 = 0xff;
        uVar68 = 0xff;
        uVar67 = 0xff;
        uVar70 = 0xff;
        uVar71 = 0xff;
        uVar72 = 0xff;
        uVar74 = 0xef;
        iVar45 = 0x22;
        pcStack_e0 = pcStack_b0;
      }
    }
LAB_00570f34:
    *param_3 = CONCAT17(uVar73,CONCAT16(uVar74,CONCAT15(uVar72,CONCAT14(uVar71,CONCAT13(uVar70,
                                                  CONCAT12(uVar69,CONCAT11(uVar68,uVar67)))))));
  }
LAB_00571260:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return pcStack_e0;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_168 = *(long *)PTR____stack_chk_guard_00999f88;
  auStack_2d0[0x54] = 0;
  auStack_2d0[0x4e] = 0;
  auStack_2d0[0x4f] = 0;
  auStack_2d0[0x4c] = 0;
  auStack_2d0[0x4d] = 0;
  auStack_2d0[0x52] = 0;
  auStack_2d0[0x53] = 0;
  auStack_2d0[0x50] = 0;
  auStack_2d0[0x51] = 0;
  auStack_2d0[0x46] = 0;
  auStack_2d0[0x47] = 0;
  auStack_2d0[0x44] = 0;
  auStack_2d0[0x45] = 0;
  auStack_2d0[0x4a] = 0;
  auStack_2d0[0x4b] = 0;
  auStack_2d0[0x48] = 0;
  auStack_2d0[0x49] = 0;
  auStack_2d0[0x3e] = 0;
  auStack_2d0[0x3f] = 0;
  auStack_2d0[0x3c] = 0;
  auStack_2d0[0x3d] = 0;
  auStack_2d0[0x42] = 0;
  auStack_2d0[0x43] = 0;
  auStack_2d0[0x40] = 0;
  auStack_2d0[0x41] = 0;
  auStack_2d0[0x36] = 0;
  auStack_2d0[0x37] = 0;
  auStack_2d0[0x34] = 0;
  auStack_2d0[0x35] = 0;
  auStack_2d0[0x3a] = 0;
  auStack_2d0[0x3b] = 0;
  auStack_2d0[0x38] = 0;
  auStack_2d0[0x39] = 0;
  auStack_2d0[0x2e] = 0;
  auStack_2d0[0x2f] = 0;
  auStack_2d0[0x2c] = 0;
  auStack_2d0[0x2d] = 0;
  auStack_2d0[0x32] = 0;
  auStack_2d0[0x33] = 0;
  auStack_2d0[0x30] = 0;
  auStack_2d0[0x31] = 0;
  auStack_2d0[0x26] = 0;
  auStack_2d0[0x27] = 0;
  auStack_2d0[0x24] = 0;
  auStack_2d0[0x25] = 0;
  auStack_2d0[0x2a] = 0;
  auStack_2d0[0x2b] = 0;
  auStack_2d0[0x28] = 0;
  auStack_2d0[0x29] = 0;
  auStack_2d0[0x1e] = 0;
  auStack_2d0[0x1f] = 0;
  auStack_2d0[0x1c] = 0;
  auStack_2d0[0x1d] = 0;
  auStack_2d0[0x22] = 0;
  auStack_2d0[0x23] = 0;
  auStack_2d0[0x20] = 0;
  auStack_2d0[0x21] = 0;
  auStack_2d0[0x16] = 0;
  auStack_2d0[0x17] = 0;
  auStack_2d0[0x14] = 0;
  auStack_2d0[0x15] = 0;
  auStack_2d0[0x1a] = 0;
  auStack_2d0[0x1b] = 0;
  auStack_2d0[0x18] = 0;
  auStack_2d0[0x19] = 0;
  auStack_2d0[0xe] = 0;
  auStack_2d0[0xf] = 0;
  auStack_2d0[0xc] = 0;
  auStack_2d0[0xd] = 0;
  auStack_2d0[0x12] = 0;
  auStack_2d0[0x13] = 0;
  auStack_2d0[0x10] = 0;
  auStack_2d0[0x11] = 0;
  auStack_2d0[6] = 0;
  auStack_2d0[7] = 0;
  auStack_2d0[4] = 0;
  auStack_2d0[5] = 0;
  auStack_2d0[10] = 0;
  auStack_2d0[0xb] = 0;
  auStack_2d0[8] = 0;
  auStack_2d0[9] = 0;
  auStack_2d0[2] = 0;
  auStack_2d0[3] = 0;
  auStack_2d0[0] = 0;
  auStack_2d0[1] = 0;
  puVar39 = *(uint **)(param_4 + 0x18);
  if (puVar39 == (uint *)0x0) {
    uVar46 = *(ulong *)param_4;
    auStack_2d0[1] = (uint)uVar46;
    auStack_2d0[2] = (uint)(uVar46 >> 0x20);
    if (uVar46 >> 0x20 == 0) {
      if (auStack_2d0[1] != 0) {
        auStack_2d0[0] = 1;
        goto LAB_0057154c;
      }
    }
    else {
      auStack_2d0[0] = 2;
LAB_0057154c:
    }
    uVar56 = *(uint *)(param_4 + 8);
    uVar46 = (long)pcVar40 << 1 | 1;
    if ((int)uVar56 < 0) goto LAB_00571568;
LAB_00571368:
    uVar65 = (ulong)uVar56;
    if (0xc < uVar56) {
      uVar49 = (ulong)auStack_2d0[0];
      do {
        if (0 < (int)uVar49) {
          uVar57 = 0;
          lVar62 = 4;
          uVar50 = uVar49;
          do {
            uVar58 = uVar57 + (ulong)*(uint *)((long)auStack_2d0 + lVar62) * 0x48c27395;
            *(int *)((long)auStack_2d0 + lVar62) = (int)uVar58;
            uVar57 = uVar58 >> 0x20;
            lVar62 = lVar62 + 4;
            uVar50 = uVar50 - 1;
          } while (uVar50 != 0);
          if ((uVar49 < 0x54) && (uVar57 != 0)) {
            *(int *)(((ulong)auStack_2d0 | 4) + uVar49 * 4) = (int)(uVar58 >> 0x20);
            uVar49 = uVar49 + 1;
            auStack_2d0[0] = (uint)uVar49;
          }
        }
        iVar54 = (int)uVar65;
        uVar65 = (ulong)(iVar54 - 0xd);
      } while (0x19 < iVar54);
    }
    if (((0 < (int)uVar65) && (auStack_2d0[0] != 0)) && (0 < (int)auStack_2d0[0])) {
      uVar49 = 0;
      uVar55 = *(uint *)(&UNK_008141d0 + uVar65 * 4);
      lVar62 = 4;
      uVar65 = (ulong)auStack_2d0[0];
      do {
        uVar50 = uVar49 + (ulong)*(uint *)((long)auStack_2d0 + lVar62) * (ulong)uVar55;
        *(int *)((long)auStack_2d0 + lVar62) = (int)uVar50;
        uVar49 = uVar50 >> 0x20;
        lVar62 = lVar62 + 4;
        uVar65 = uVar65 - 1;
      } while (uVar65 != 0);
      if ((auStack_2d0[0] < 0x54) && (uVar49 != 0)) {
        *(int *)(((ulong)auStack_2d0 | 4) + (ulong)auStack_2d0[0] * 4) = (int)(uVar50 >> 0x20);
        auStack_2d0[0] = auStack_2d0[0] + 1;
      }
    }
    auStack_424[0x45] = 0;
    auStack_424[0x46] = 0;
    auStack_424[0x43] = 0;
    auStack_424[0x44] = 0;
    auStack_424[0x49] = 0;
    auStack_424[0x4a] = 0;
    auStack_424[0x47] = 0;
    auStack_424[0x48] = 0;
    uVar55 = 1;
    if (((ulong)pcVar40 & 0x7fffffffffffffff) >> 0x1f != 0) {
      uVar55 = 2;
    }
    auStack_424[0x4d] = 0;
    auStack_424[0x4e] = 0;
    auStack_424[0x4b] = 0;
    auStack_424[0x4c] = 0;
    auStack_424[0x51] = 0;
    auStack_424[0x52] = 0;
    auStack_424[0x4f] = 0;
    auStack_424[0x50] = 0;
    auStack_424[0x53] = 0;
    auStack_424[0x54] = 0;
    auStack_424[5] = 0;
    auStack_424[6] = 0;
    auStack_424[3] = 0;
    auStack_424[4] = 0;
    auStack_424[9] = 0;
    auStack_424[10] = 0;
    auStack_424[7] = 0;
    auStack_424[8] = 0;
    auStack_424[0xd] = 0;
    auStack_424[0xe] = 0;
    auStack_424[0xb] = 0;
    auStack_424[0xc] = 0;
    auStack_424[0x11] = 0;
    auStack_424[0x12] = 0;
    auStack_424[0xf] = 0;
    auStack_424[0x10] = 0;
    auStack_424[0x15] = 0;
    auStack_424[0x16] = 0;
    auStack_424[0x13] = 0;
    auStack_424[0x14] = 0;
    auStack_424[0x19] = 0;
    auStack_424[0x1a] = 0;
    auStack_424[0x17] = 0;
    auStack_424[0x18] = 0;
    auStack_424[0x1d] = 0;
    auStack_424[0x1e] = 0;
    auStack_424[0x1b] = 0;
    auStack_424[0x1c] = 0;
    auStack_424[0x21] = 0;
    auStack_424[0x22] = 0;
    auStack_424[0x1f] = 0;
    auStack_424[0x20] = 0;
    auStack_424[0x25] = 0;
    auStack_424[0x26] = 0;
    auStack_424[0x23] = 0;
    auStack_424[0x24] = 0;
    auStack_424[0x29] = 0;
    auStack_424[0x2a] = 0;
    auStack_424[0x27] = 0;
    auStack_424[0x28] = 0;
    auStack_424[0x2d] = 0;
    auStack_424[0x2e] = 0;
    auStack_424[0x2b] = 0;
    auStack_424[0x2c] = 0;
    auStack_424[0x31] = 0;
    auStack_424[0x32] = 0;
    auStack_424[0x2f] = 0;
    auStack_424[0x30] = 0;
    auStack_424[0x35] = 0;
    auStack_424[0x36] = 0;
    auStack_424[0x33] = 0;
    auStack_424[0x34] = 0;
    auStack_424[0x39] = 0;
    auStack_424[0x3a] = 0;
    auStack_424[0x37] = 0;
    auStack_424[0x38] = 0;
    auStack_424[0x3d] = 0;
    auStack_424[0x3e] = 0;
    auStack_424[0x3b] = 0;
    auStack_424[0x3c] = 0;
    auStack_424[0x41] = 0;
    auStack_424[0x42] = 0;
    auStack_424[0x3f] = 0;
    auStack_424[0x40] = 0;
    auStack_424[0] = uVar55;
    auStack_424[1] = (uint)uVar46;
    auStack_424[2] = (int)((ulong)((long)pcVar40 << 1) >> 0x20);
    if ((int)uVar56 < iVar45) {
      uVar56 = (iVar45 + -1) - uVar56;
      uVar55 = auStack_424[0];
      if (0 < (int)uVar56) {
        puVar52 = auStack_424 + 1;
        if (uVar56 < 0xa80) {
          uVar10 = uVar56 >> 5;
          uVar46 = (ulong)uVar10;
          uVar55 = uVar10 + uVar55;
          uVar44 = uVar55;
          if (0x53 < uVar55) {
            uVar44 = 0x54;
          }
          auStack_424[0] = uVar44;
          if ((uVar56 & 0x1f) == 0) {
            if (uVar10 != 0x54) {
              lVar62 = (ulong)uVar44 - (ulong)uVar10;
              param_4 = (char *)(lVar62 * 4);
              puVar39 = puVar52;
              _memmove(puVar52 + ((ulong)uVar44 - lVar62));
            }
          }
          else {
            if (uVar56 < 0xa60) {
              uVar4 = uVar55;
              if (0x52 < uVar55) {
                uVar4 = 0x53;
              }
              uVar49 = (ulong)uVar4;
              uVar65 = uVar46;
              if (uVar49 - 1 <= uVar46) {
                uVar65 = uVar49 - 1;
              }
              uVar65 = uVar49 - uVar65;
              if (3 < uVar65) {
                uVar57 = uVar65 & 0xfffffffffffffffc;
                bVar75 = (byte)uVar56;
                puVar41 = auStack_424 + uVar49;
                iVar45 = -(uint)(~bVar75 & 0x1f);
                iVar54 = -(uint)(~bVar75 & 0x1f);
                iVar27 = -(uint)(~bVar75 & 0x1f);
                uVar50 = uVar57;
                do {
                  puVar2 = puVar41 + -uVar46;
                  auVar17._5_3_ = 0;
                  auVar17._0_5_ = CONCAT14(bVar75,(uint)(bVar75 & 0x1f)) & 0x1fffffffff;
                  auVar17[8] = bVar75 & 0x1f;
                  auVar17._9_3_ = 0;
                  auVar17[0xc] = bVar75 & 0x1f;
                  auVar17._13_3_ = 0;
                  auVar76 = NEON_ushl(*(undefined1 (*) [16])(puVar2 + -2),auVar17,4);
                  auVar79._0_4_ = puVar2[-3] >> 1;
                  auVar79._4_4_ = puVar2[-2] >> 1;
                  auVar79._8_4_ = puVar2[-1] >> 1;
                  auVar79._12_4_ = *puVar2 >> 1;
                  auVar21[4] = (char)iVar45;
                  auVar21._0_4_ = -(uint)(~bVar75 & 0x1f);
                  auVar21[5] = (char)((uint)iVar45 >> 8);
                  auVar21[6] = (char)((uint)iVar45 >> 0x10);
                  auVar21[7] = (char)((uint)iVar45 >> 0x18);
                  auVar21[8] = (char)iVar54;
                  auVar21[9] = (char)((uint)iVar54 >> 8);
                  auVar21[10] = (char)((uint)iVar54 >> 0x10);
                  auVar21[0xb] = (char)((uint)iVar54 >> 0x18);
                  auVar21[0xc] = (char)iVar27;
                  auVar21[0xd] = (char)((uint)iVar27 >> 8);
                  auVar21[0xe] = (char)((uint)iVar27 >> 0x10);
                  auVar21[0xf] = (char)((uint)iVar27 >> 0x18);
                  auVar80 = NEON_ushl(auVar79,auVar21,4);
                  *(byte *)puVar41 = auVar76[8] | auVar80[8];
                  *(byte *)((long)puVar41 + 1) = auVar76[9] | auVar80[9];
                  *(byte *)((long)puVar41 + 2) = auVar76[10] | auVar80[10];
                  *(byte *)((long)puVar41 + 3) = auVar76[0xb] | auVar80[0xb];
                  *(byte *)(puVar41 + 1) = auVar76[0xc] | auVar80[0xc];
                  *(byte *)((long)puVar41 + 5) = auVar76[0xd] | auVar80[0xd];
                  *(byte *)((long)puVar41 + 6) = auVar76[0xe] | auVar80[0xe];
                  *(byte *)((long)puVar41 + 7) = auVar76[0xf] | auVar80[0xf];
                  *(byte *)(puVar41 + -2) = auVar76[0] | auVar80[0];
                  *(byte *)((long)puVar41 + -7) = auVar76[1] | auVar80[1];
                  *(byte *)((long)puVar41 + -6) = auVar76[2] | auVar80[2];
                  *(byte *)((long)puVar41 + -5) = auVar76[3] | auVar80[3];
                  *(byte *)(puVar41 + -1) = auVar76[4] | auVar80[4];
                  *(byte *)((long)puVar41 + -3) = auVar76[5] | auVar80[5];
                  *(byte *)((long)puVar41 + -2) = auVar76[6] | auVar80[6];
                  *(byte *)((long)puVar41 + -1) = auVar76[7] | auVar80[7];
                  puVar41 = puVar41 + -4;
                  uVar50 = uVar50 - 4;
                } while (uVar50 != 0);
                uVar49 = uVar49 - uVar57;
                if (uVar65 == uVar57) goto LAB_00571ad4;
              }
              lVar62 = uVar49 * 4 + uVar46 * -4;
              do {
                puVar52[uVar49] =
                     *(int *)((long)puVar52 + lVar62) << (ulong)(uVar56 & 0x1f) |
                     (*(uint *)((long)auStack_424 + lVar62) >> 1) >> (ulong)(~uVar56 & 0x1f);
                uVar49 = uVar49 - 1;
                lVar62 = lVar62 + -4;
              } while (uVar46 < uVar49);
            }
LAB_00571ad4:
            puVar52[uVar46] = auStack_424[1] << (ulong)(uVar56 & 0x1f);
            if ((uVar55 < 0x54) && (puVar52[uVar44] != 0)) {
              auStack_424[0] = uVar44 + 1;
            }
          }
          uVar55 = auStack_424[0];
          if (0x1f < uVar56) {
            puVar39 = (uint *)((ulong)(uVar10 - 1) * 4 + 4);
            _bzero(puVar52);
            uVar55 = auStack_424[0];
          }
        }
        else {
          puVar39 = (uint *)(ulong)(uVar55 << 2);
          _bzero();
          auStack_424[0] = 0;
          uVar55 = auStack_424[0];
        }
      }
    }
    else {
      uVar56 = uVar56 - (iVar45 + -1);
      if (uVar56 < 0xa80) {
        uVar4 = uVar56 >> 5;
        uVar46 = (ulong)uVar4;
        uVar44 = auStack_2d0[0] + uVar4;
        uVar10 = uVar44;
        if (0x53 < (int)uVar44) {
          uVar10 = 0x54;
        }
        auStack_2d0[0] = uVar10;
        if ((uVar56 & 0x1f) == 0) {
          if (uVar10 != uVar4) {
            puVar39 = (uint *)((ulong)auStack_2d0 | 4);
            param_4 = (char *)(((long)(int)uVar10 - (ulong)uVar4) * 4);
            _memmove(puVar39 + ((long)(int)uVar10 - ((long)(int)uVar10 - (ulong)uVar4)));
          }
        }
        else {
          uVar3 = uVar44;
          if (0x52 < (int)uVar44) {
            uVar3 = 0x53;
          }
          uVar65 = (ulong)uVar3;
          if ((int)uVar4 < (int)uVar3) {
            uVar49 = uVar46;
            if (uVar65 - 1 <= uVar46) {
              uVar49 = uVar65 - 1;
            }
            uVar49 = uVar65 - uVar49;
            if (3 < uVar49) {
              uVar57 = uVar49 & 0xfffffffffffffffc;
              bVar75 = (byte)uVar56;
              pbVar47 = (byte *)((long)auStack_2d0 + uVar65 * 4);
              iVar45 = -(uint)(~bVar75 & 0x1f);
              iVar54 = -(uint)(~bVar75 & 0x1f);
              iVar27 = -(uint)(~bVar75 & 0x1f);
              uVar50 = uVar57;
              do {
                puVar52 = (uint *)(pbVar47 + uVar46 * 0xfffffffffffffffc);
                auVar18._5_3_ = 0;
                auVar18._0_5_ = CONCAT14(bVar75,(uint)(bVar75 & 0x1f)) & 0x1fffffffff;
                auVar18[8] = bVar75 & 0x1f;
                auVar18._9_3_ = 0;
                auVar18[0xc] = bVar75 & 0x1f;
                auVar18._13_3_ = 0;
                auVar76 = NEON_ushl(*(undefined1 (*) [16])(puVar52 + -2),auVar18,4);
                auVar78._0_4_ = puVar52[-3] >> 1;
                auVar78._4_4_ = puVar52[-2] >> 1;
                auVar78._8_4_ = puVar52[-1] >> 1;
                auVar78._12_4_ = *puVar52 >> 1;
                auVar22[4] = (char)iVar45;
                auVar22._0_4_ = -(uint)(~bVar75 & 0x1f);
                auVar22[5] = (char)((uint)iVar45 >> 8);
                auVar22[6] = (char)((uint)iVar45 >> 0x10);
                auVar22[7] = (char)((uint)iVar45 >> 0x18);
                auVar22[8] = (char)iVar54;
                auVar22[9] = (char)((uint)iVar54 >> 8);
                auVar22[10] = (char)((uint)iVar54 >> 0x10);
                auVar22[0xb] = (char)((uint)iVar54 >> 0x18);
                auVar22[0xc] = (char)iVar27;
                auVar22[0xd] = (char)((uint)iVar27 >> 8);
                auVar22[0xe] = (char)((uint)iVar27 >> 0x10);
                auVar22[0xf] = (char)((uint)iVar27 >> 0x18);
                auVar80 = NEON_ushl(auVar78,auVar22,4);
                *pbVar47 = auVar76[8] | auVar80[8];
                pbVar47[1] = auVar76[9] | auVar80[9];
                pbVar47[2] = auVar76[10] | auVar80[10];
                pbVar47[3] = auVar76[0xb] | auVar80[0xb];
                pbVar47[4] = auVar76[0xc] | auVar80[0xc];
                pbVar47[5] = auVar76[0xd] | auVar80[0xd];
                pbVar47[6] = auVar76[0xe] | auVar80[0xe];
                pbVar47[7] = auVar76[0xf] | auVar80[0xf];
                pbVar47[0xfffffffffffffff8] = auVar76[0] | auVar80[0];
                pbVar47[-7] = auVar76[1] | auVar80[1];
                pbVar47[-6] = auVar76[2] | auVar80[2];
                pbVar47[-5] = auVar76[3] | auVar80[3];
                pbVar47[0xfffffffffffffffc] = auVar76[4] | auVar80[4];
                pbVar47[-3] = auVar76[5] | auVar80[5];
                pbVar47[-2] = auVar76[6] | auVar80[6];
                pbVar47[-1] = auVar76[7] | auVar80[7];
                pbVar47 = pbVar47 + 0xfffffffffffffff0;
                uVar50 = uVar50 - 4;
              } while (uVar50 != 0);
              uVar65 = uVar65 - uVar57;
              if (uVar49 == uVar57) goto LAB_005719b8;
            }
            uVar49 = (ulong)auStack_2d0 | 4;
            lVar62 = uVar65 * 4 + uVar46 * -4;
            do {
              *(uint *)(uVar49 + uVar65 * 4) =
                   *(int *)(uVar49 + lVar62) << (ulong)(uVar56 & 0x1f) |
                   (*(uint *)((long)auStack_2d0 + lVar62) >> 1) >> (ulong)(~uVar56 & 0x1f);
              uVar65 = uVar65 - 1;
              lVar62 = lVar62 + -4;
            } while (uVar46 < uVar65);
          }
LAB_005719b8:
          *(uint *)(((ulong)auStack_2d0 | 4) + uVar46 * 4) =
               auStack_2d0[1] << (ulong)(uVar56 & 0x1f);
          if (((int)uVar44 < 0x54) &&
             (*(int *)(((ulong)auStack_2d0 | 4) + (long)(int)uVar10 * 4) != 0)) {
            auStack_2d0[0] = uVar10 + 1;
          }
        }
        if (0x1f < uVar56) {
          puVar39 = (uint *)((ulong)(uVar4 - 1) * 4 + 4);
          _bzero((ulong)auStack_2d0 | 4);
        }
      }
      else {
        if (0 < (int)auStack_2d0[0]) {
          puVar39 = (uint *)((ulong)auStack_2d0[0] << 2);
          _bzero((ulong)auStack_2d0 | 4);
        }
        auStack_2d0[0] = 0;
      }
    }
    uVar56 = auStack_2d0[0];
    if ((int)auStack_2d0[0] <= (int)uVar55) {
      uVar56 = uVar55;
    }
    uVar46 = (ulong)uVar56;
    do {
      iVar45 = (int)uVar46;
      if (iVar45 < 1) goto LAB_00571cd4;
      if ((int)auStack_2d0[0] < iVar45) {
        uVar56 = 0;
        if ((int)uVar55 < iVar45) goto LAB_00571b28;
LAB_00571b6c:
        uVar44 = auStack_424[uVar46];
        if (uVar56 < uVar44) goto LAB_00571ccc;
      }
      else {
        uVar56 = auStack_424[uVar46 + 0x55];
        if (iVar45 <= (int)uVar55) goto LAB_00571b6c;
LAB_00571b28:
        uVar44 = 0;
      }
      uVar46 = uVar46 - 1;
    } while (uVar56 <= uVar44);
  }
  else {
    pcVar42 = *(char **)(param_4 + 0x20);
    iVar54 = (int)auStack_424 + 0x154;
    pcVar38 = section_000002e8.segname + 8;
    FUN_00573140();
    uVar56 = *(int *)(param_4 + 0xc) + iVar54;
    uVar46 = (long)pcVar40 << 1 | 1;
    param_4 = pcVar42;
    if (-1 < (int)uVar56) goto LAB_00571368;
LAB_00571568:
    FUN_00573528(auStack_424,-uVar56);
    uVar65 = ((ulong)pcVar40 & 0x7fffffffffffffff) >> 0x1f;
    iStack_170 = (int)uVar46;
    uStack_16c = (int)uVar65;
    puVar52 = (uint *)(ulong)auStack_424[0];
    if (uVar65 == 0) {
      if (((int)uVar46 != 1) && (0 < (int)auStack_424[0])) {
        uVar65 = 0;
        lVar62 = 4;
        puVar41 = puVar52;
        do {
          uVar49 = uVar65 + uVar46 * *(uint *)((long)auStack_424 + lVar62);
          *(int *)((long)auStack_424 + lVar62) = (int)uVar49;
          uVar65 = uVar49 >> 0x20;
          lVar62 = lVar62 + 4;
          puVar41 = (uint *)((long)puVar41 + -1);
        } while (puVar41 != (uint *)0x0);
        if ((auStack_424[0] < 0x54) && (uVar65 != 0)) {
          auStack_424[(long)puVar52 + 1] = (int)(uVar49 >> 0x20);
          auStack_424[0] = auStack_424[0] + 1;
        }
      }
    }
    else if (-1 < (int)auStack_424[0]) {
      uVar55 = auStack_424[0];
      if (0x52 < auStack_424[0]) {
        uVar55 = 0x53;
      }
      do {
        param_4 = (char *)&iStack_170;
        pcVar38 = (char *)((long)&MACH_HEADER.magic + 2);
        puVar39 = puVar52;
        FUN_005738b0(auStack_424);
        uVar55 = uVar55 - 1;
      } while (uVar55 != 0xffffffff);
    }
    if ((int)uVar56 < iVar45) {
      uVar56 = (iVar45 + -1) - uVar56;
      if (0 < (int)uVar56) {
        if (uVar56 < 0xa80) {
          uVar10 = uVar56 >> 5;
          uVar46 = (ulong)uVar10;
          uVar55 = auStack_424[0] + uVar10;
          uVar44 = uVar55;
          if (0x53 < (int)uVar55) {
            uVar44 = 0x54;
          }
          auStack_424[0] = uVar44;
          if ((uVar56 & 0x1f) == 0) {
            if (uVar44 != uVar10) {
              puVar39 = auStack_424 + 1;
              param_4 = (char *)(((long)(int)uVar44 - (ulong)uVar10) * 4);
              _memmove(puVar39 + ((long)(int)uVar44 - ((long)(int)uVar44 - (ulong)uVar10)));
            }
          }
          else {
            uVar4 = uVar55;
            if (0x52 < (int)uVar55) {
              uVar4 = 0x53;
            }
            uVar65 = (ulong)uVar4;
            if ((int)uVar10 < (int)uVar4) {
              uVar49 = uVar46;
              if (uVar65 - 1 <= uVar46) {
                uVar49 = uVar65 - 1;
              }
              uVar49 = uVar65 - uVar49;
              if (3 < uVar49) {
                uVar57 = uVar49 & 0xfffffffffffffffc;
                bVar75 = (byte)uVar56;
                puVar52 = auStack_424 + uVar65;
                iVar45 = -(uint)(~bVar75 & 0x1f);
                iVar54 = -(uint)(~bVar75 & 0x1f);
                iVar27 = -(uint)(~bVar75 & 0x1f);
                uVar50 = uVar57;
                do {
                  puVar41 = puVar52 + -uVar46;
                  auVar19._5_3_ = 0;
                  auVar19._0_5_ = CONCAT14(bVar75,(uint)(bVar75 & 0x1f)) & 0x1fffffffff;
                  auVar19[8] = bVar75 & 0x1f;
                  auVar19._9_3_ = 0;
                  auVar19[0xc] = bVar75 & 0x1f;
                  auVar19._13_3_ = 0;
                  auVar76 = NEON_ushl(*(undefined1 (*) [16])(puVar41 + -2),auVar19,4);
                  auVar81._0_4_ = puVar41[-3] >> 1;
                  auVar81._4_4_ = puVar41[-2] >> 1;
                  auVar81._8_4_ = puVar41[-1] >> 1;
                  auVar81._12_4_ = *puVar41 >> 1;
                  auVar23[4] = (char)iVar45;
                  auVar23._0_4_ = -(uint)(~bVar75 & 0x1f);
                  auVar23[5] = (char)((uint)iVar45 >> 8);
                  auVar23[6] = (char)((uint)iVar45 >> 0x10);
                  auVar23[7] = (char)((uint)iVar45 >> 0x18);
                  auVar23[8] = (char)iVar54;
                  auVar23[9] = (char)((uint)iVar54 >> 8);
                  auVar23[10] = (char)((uint)iVar54 >> 0x10);
                  auVar23[0xb] = (char)((uint)iVar54 >> 0x18);
                  auVar23[0xc] = (char)iVar27;
                  auVar23[0xd] = (char)((uint)iVar27 >> 8);
                  auVar23[0xe] = (char)((uint)iVar27 >> 0x10);
                  auVar23[0xf] = (char)((uint)iVar27 >> 0x18);
                  auVar80 = NEON_ushl(auVar81,auVar23,4);
                  *(byte *)puVar52 = auVar76[8] | auVar80[8];
                  *(byte *)((long)puVar52 + 1) = auVar76[9] | auVar80[9];
                  *(byte *)((long)puVar52 + 2) = auVar76[10] | auVar80[10];
                  *(byte *)((long)puVar52 + 3) = auVar76[0xb] | auVar80[0xb];
                  *(byte *)(puVar52 + 1) = auVar76[0xc] | auVar80[0xc];
                  *(byte *)((long)puVar52 + 5) = auVar76[0xd] | auVar80[0xd];
                  *(byte *)((long)puVar52 + 6) = auVar76[0xe] | auVar80[0xe];
                  *(byte *)((long)puVar52 + 7) = auVar76[0xf] | auVar80[0xf];
                  *(byte *)(puVar52 + -2) = auVar76[0] | auVar80[0];
                  *(byte *)((long)puVar52 + -7) = auVar76[1] | auVar80[1];
                  *(byte *)((long)puVar52 + -6) = auVar76[2] | auVar80[2];
                  *(byte *)((long)puVar52 + -5) = auVar76[3] | auVar80[3];
                  *(byte *)(puVar52 + -1) = auVar76[4] | auVar80[4];
                  *(byte *)((long)puVar52 + -3) = auVar76[5] | auVar80[5];
                  *(byte *)((long)puVar52 + -2) = auVar76[6] | auVar80[6];
                  *(byte *)((long)puVar52 + -1) = auVar76[7] | auVar80[7];
                  puVar52 = puVar52 + -4;
                  uVar50 = uVar50 - 4;
                } while (uVar50 != 0);
                uVar65 = uVar65 - uVar57;
                if (uVar49 == uVar57) goto LAB_00571c14;
              }
              lVar62 = uVar65 * 4 + uVar46 * -4;
              do {
                auStack_424[uVar65 + 1] =
                     *(int *)((long)auStack_424 + lVar62 + 4U) << (ulong)(uVar56 & 0x1f) |
                     (*(uint *)((long)auStack_424 + lVar62) >> 1) >> (ulong)(~uVar56 & 0x1f);
                uVar65 = uVar65 - 1;
                lVar62 = lVar62 + -4;
              } while (uVar46 < uVar65);
            }
LAB_00571c14:
            auStack_424[uVar46 + 1] = auStack_424[1] << (ulong)(uVar56 & 0x1f);
            if (((int)uVar55 < 0x54) && (auStack_424[(long)(int)uVar44 + 1] != 0)) {
              auStack_424[0] = uVar44 + 1;
            }
          }
          if (0x1f < uVar56) {
            puVar52 = auStack_424 + 1;
            goto LAB_00571c58;
          }
        }
        else {
          if (0 < (int)auStack_424[0]) {
            puVar39 = (uint *)((ulong)auStack_424[0] << 2);
            _bzero(auStack_424 + 1);
          }
          auStack_424[0] = 0;
        }
      }
    }
    else {
      uVar56 = uVar56 - (iVar45 + -1);
      uVar10 = uVar56 >> 5;
      uVar46 = (ulong)uVar10;
      uVar55 = auStack_2d0[0] + uVar10;
      uVar44 = uVar55;
      if (0x53 < (int)uVar55) {
        uVar44 = 0x54;
      }
      auStack_2d0[0] = uVar44;
      if ((uVar56 & 0x1f) == 0) {
        if (uVar44 != uVar10) {
          puVar39 = (uint *)((ulong)auStack_2d0 | 4);
          param_4 = (char *)(((long)(int)uVar44 - uVar46) * 4);
          _memmove(puVar39 + ((long)(int)uVar44 - ((long)(int)uVar44 - uVar46)));
        }
      }
      else {
        uVar4 = uVar55;
        if (0x52 < (int)uVar55) {
          uVar4 = 0x53;
        }
        uVar65 = (ulong)uVar4;
        if ((int)uVar10 < (int)uVar4) {
          uVar49 = uVar46;
          if (uVar65 - 1 <= uVar46) {
            uVar49 = uVar65 - 1;
          }
          uVar49 = uVar65 - uVar49;
          if (3 < uVar49) {
            uVar57 = uVar49 & 0xfffffffffffffffc;
            bVar75 = (byte)uVar56;
            pbVar47 = (byte *)((long)auStack_2d0 + uVar65 * 4);
            iVar45 = -(uint)(~bVar75 & 0x1f);
            iVar54 = -(uint)(~bVar75 & 0x1f);
            iVar27 = -(uint)(~bVar75 & 0x1f);
            uVar50 = uVar57;
            do {
              puVar52 = (uint *)(pbVar47 + uVar46 * 0xfffffffffffffffc);
              auVar20._5_3_ = 0;
              auVar20._0_5_ = CONCAT14(bVar75,(uint)(bVar75 & 0x1f)) & 0x1fffffffff;
              auVar20[8] = bVar75 & 0x1f;
              auVar20._9_3_ = 0;
              auVar20[0xc] = bVar75 & 0x1f;
              auVar20._13_3_ = 0;
              auVar76 = NEON_ushl(*(undefined1 (*) [16])(puVar52 + -2),auVar20,4);
              auVar77._0_4_ = puVar52[-3] >> 1;
              auVar77._4_4_ = puVar52[-2] >> 1;
              auVar77._8_4_ = puVar52[-1] >> 1;
              auVar77._12_4_ = *puVar52 >> 1;
              auVar24[4] = (char)iVar45;
              auVar24._0_4_ = -(uint)(~bVar75 & 0x1f);
              auVar24[5] = (char)((uint)iVar45 >> 8);
              auVar24[6] = (char)((uint)iVar45 >> 0x10);
              auVar24[7] = (char)((uint)iVar45 >> 0x18);
              auVar24[8] = (char)iVar54;
              auVar24[9] = (char)((uint)iVar54 >> 8);
              auVar24[10] = (char)((uint)iVar54 >> 0x10);
              auVar24[0xb] = (char)((uint)iVar54 >> 0x18);
              auVar24[0xc] = (char)iVar27;
              auVar24[0xd] = (char)((uint)iVar27 >> 8);
              auVar24[0xe] = (char)((uint)iVar27 >> 0x10);
              auVar24[0xf] = (char)((uint)iVar27 >> 0x18);
              auVar80 = NEON_ushl(auVar77,auVar24,4);
              *pbVar47 = auVar76[8] | auVar80[8];
              pbVar47[1] = auVar76[9] | auVar80[9];
              pbVar47[2] = auVar76[10] | auVar80[10];
              pbVar47[3] = auVar76[0xb] | auVar80[0xb];
              pbVar47[4] = auVar76[0xc] | auVar80[0xc];
              pbVar47[5] = auVar76[0xd] | auVar80[0xd];
              pbVar47[6] = auVar76[0xe] | auVar80[0xe];
              pbVar47[7] = auVar76[0xf] | auVar80[0xf];
              pbVar47[0xfffffffffffffff8] = auVar76[0] | auVar80[0];
              pbVar47[-7] = auVar76[1] | auVar80[1];
              pbVar47[-6] = auVar76[2] | auVar80[2];
              pbVar47[-5] = auVar76[3] | auVar80[3];
              pbVar47[0xfffffffffffffffc] = auVar76[4] | auVar80[4];
              pbVar47[-3] = auVar76[5] | auVar80[5];
              pbVar47[-2] = auVar76[6] | auVar80[6];
              pbVar47[-1] = auVar76[7] | auVar80[7];
              pbVar47 = pbVar47 + 0xfffffffffffffff0;
              uVar50 = uVar50 - 4;
            } while (uVar50 != 0);
            uVar65 = uVar65 - uVar57;
            if (uVar49 == uVar57) goto LAB_005718d8;
          }
          uVar49 = (ulong)auStack_2d0 | 4;
          lVar62 = uVar65 * 4 + uVar46 * -4;
          do {
            *(uint *)(uVar49 + uVar65 * 4) =
                 *(int *)(uVar49 + lVar62) << (ulong)(uVar56 & 0x1f) |
                 (*(uint *)((long)auStack_2d0 + lVar62) >> 1) >> (ulong)(~uVar56 & 0x1f);
            uVar65 = uVar65 - 1;
            lVar62 = lVar62 + -4;
          } while (uVar46 < uVar65);
        }
LAB_005718d8:
        *(uint *)(((ulong)auStack_2d0 | 4) + uVar46 * 4) = auStack_2d0[1] << (ulong)(uVar56 & 0x1f);
        if (((int)uVar55 < 0x54) &&
           (*(int *)(((ulong)auStack_2d0 | 4) + (long)(int)uVar44 * 4) != 0)) {
          auStack_2d0[0] = uVar44 + 1;
        }
      }
      if (0x1f < uVar56) {
        puVar52 = (uint *)((ulong)auStack_2d0 | 4);
LAB_00571c58:
        puVar39 = (uint *)((ulong)(uVar10 - 1) * 4 + 4);
        _bzero(puVar52);
      }
    }
    uVar56 = auStack_2d0[0];
    if ((int)auStack_2d0[0] <= (int)auStack_424[0]) {
      uVar56 = auStack_424[0];
    }
    uVar46 = (ulong)uVar56;
    do {
      iVar45 = (int)uVar46;
      if (iVar45 < 1) goto LAB_00571cd4;
      if ((int)auStack_2d0[0] < iVar45) {
        uVar56 = 0;
        if ((int)auStack_424[0] < iVar45) goto LAB_00571c7c;
LAB_00571cc0:
        uVar55 = auStack_424[uVar46];
        if (uVar56 < uVar55) goto LAB_00571ccc;
      }
      else {
        uVar56 = auStack_424[uVar46 + 0x55];
        if (iVar45 <= (int)auStack_424[0]) goto LAB_00571cc0;
LAB_00571c7c:
        uVar55 = 0;
      }
      uVar46 = uVar46 - 1;
    } while (uVar56 <= uVar55);
  }
  uVar56 = 1;
  goto LAB_00571ce0;
LAB_00571cd4:
  uVar56 = 0;
  goto LAB_00571ce0;
LAB_00571ccc:
  uVar56 = 0xffffffff;
LAB_00571ce0:
  uVar55 = 1;
  if (uVar56 == 0) {
    uVar55 = (uint)pcVar40 & 1;
  }
  uVar44 = 0;
  if ((uVar56 & 0x80000000) == 0) {
    uVar44 = uVar55;
  }
  pqVar33 = (qword *)(ulong)uVar44;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_168) {
    return (char *)pqVar33;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar34 = &uStack_510;
  puVar41 = (uint *)&uStack_510;
  plVar36 = &uStack_510;
  puVar52 = (uint *)&uStack_510;
  puVar35 = &uStack_510;
  plVar37 = &uStack_510;
  lStack_498 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar42 = param_4;
  pcVar40 = (char *)puVar39;
  FUN_0053316c();
  uVar73 = uStack_510._7_1_;
  uVar29 = (undefined7)uStack_510;
  bVar75 = param_4[0x17];
  pcVar48 = param_4;
  if ((char)bVar75 < 0) {
    pcVar48 = *(char **)param_4;
  }
  pcVar43 = pcVar48;
  pqVar59 = pqVar33;
  if ((puVar39 != (uint *)0x0) && ((qword *)pcVar48 == pqVar33)) {
    do {
      if ((byte)*pqVar59 == 0x5c) {
        if (pqVar59 < (byte *)((long)pqVar33 + (long)puVar39)) goto LAB_00571df4;
        goto LAB_005722cc;
      }
      pqVar63 = (qword *)((long)pqVar59 + 1);
      pcVar51 = pcVar43 + 1;
      bVar31 = pqVar59 == (qword *)pcVar43;
      pcVar43 = pcVar51;
      pqVar59 = pqVar63;
    } while ((bVar31) && (pqVar63 < (byte *)((long)pqVar33 + (long)puVar39)));
  }
  if ((byte *)((long)pqVar33 + (long)puVar39) <= pqVar59) {
LAB_005722cc:
    uVar46 = (long)pcVar43 - (long)pcVar48;
    if (((uint)(int)(char)bVar75 >> 7 & 1) == 0) {
LAB_005722d4:
      uStack_510._0_7_ = uVar29;
      uStack_510._7_1_ = uVar73;
      if (uVar46 <= bVar75) {
        param_4[0x17] = (byte)uVar46;
        puVar52 = (uint *)pcVar40;
        goto LAB_00572304;
      }
    }
    else {
LAB_005722f0:
      uStack_510._0_7_ = uVar29;
      uStack_510._7_1_ = uVar73;
      if (uVar46 <= *(ulong *)(param_4 + 8)) {
        *(ulong *)(param_4 + 8) = uVar46;
        param_4 = *(char **)param_4;
        puVar52 = (uint *)pcVar40;
LAB_00572304:
        param_4[uVar46] = 0;
        pcVar42 = (char *)((long)&MACH_HEADER.magic + 1);
        uStack_510._0_7_ = uVar29;
        uStack_510._7_1_ = uVar73;
LAB_005727dc:
        if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_498) {
          return pcVar42;
        }
        ___stack_chk_fail();
        pcVar40 = (char *)puVar52;
      }
    }
    FUN_00461b78();
code_r0x00572844:
    FUN_0040d740();
    if ((char)bStack_4c9 < '\0') {
      __ZdlPv(uStack_4e0);
    }
    __Unwind_Resume();
    extraout_x8[0] = '\0';
    extraout_x8[1] = '\0';
    extraout_x8[2] = '\0';
    extraout_x8[3] = '\0';
    extraout_x8[4] = '\0';
    extraout_x8[5] = '\0';
    extraout_x8[6] = '\0';
    extraout_x8[7] = '\0';
    *(undefined8 *)(extraout_x8 + 8) = 0;
    pbVar47 = (byte *)(extraout_x8 + 0x10);
    pbVar47[0] = 0;
    pbVar47[1] = 0;
    pbVar47[2] = 0;
    pbVar47[3] = 0;
    pbVar47[4] = 0;
    pbVar47[5] = 0;
    pbVar47[6] = 0;
    pbVar47[7] = 0;
    puVar39 = (uint *)0x0;
    if ((uint *)pcVar40 != (uint *)0x0) {
      if ((uint *)pcVar40 == (uint *)((long)&MACH_HEADER.magic + 1)) {
        puVar39 = (uint *)0x0;
        pcVar38 = pcVar42;
      }
      else {
        lVar62 = 0;
        lVar66 = 0;
        puVar52 = (uint *)((ulong)pcVar40 & 0xfffffffffffffffe);
        pcVar38 = pcVar42 + (long)puVar52;
        pcVar48 = pcVar42 + 1;
        puVar39 = puVar52;
        do {
          lVar62 = lVar62 + (ulong)(byte)(&UNK_008140ce)[(byte)pcVar48[-1]];
          lVar66 = lVar66 + (ulong)(byte)(&UNK_008140ce)[(byte)*pcVar48];
          puVar39 = (uint *)((long)puVar39 + -2);
          pcVar48 = pcVar48 + 2;
        } while (puVar39 != (uint *)0x0);
        puVar39 = (uint *)(lVar66 + lVar62);
        if ((uint *)pcVar40 == puVar52) goto LAB_0057295c;
      }
      do {
        pcVar48 = pcVar38 + 1;
        puVar39 = (uint *)((long)puVar39 + (ulong)(byte)(&UNK_008140ce)[(byte)*pcVar38]);
        pcVar38 = pcVar48;
      } while (pcVar48 != pcVar42 + (long)pcVar40);
    }
LAB_0057295c:
    pcVar38 = extraout_x8;
    if (puVar39 == (uint *)pcVar40) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (extraout_x8,pcVar42,pcVar40);
    }
    else {
      FUN_0053316c(extraout_x8);
      if ((uint *)pcVar40 != (uint *)0x0) {
        pcVar48 = *(char **)extraout_x8;
        if (-1 < extraout_x8[0x17]) {
          pcVar48 = extraout_x8;
        }
        do {
          bVar75 = *pcVar42;
          bVar9 = (&UNK_008140ce)[bVar75];
          pcVar38 = (char *)(ulong)bVar9;
          if (bVar9 == 2) {
            pcVar43 = pcVar48;
            if (bVar75 < 0x22) {
              if (bVar75 == 9) {
                pcVar48[0] = '\\';
                pcVar48[1] = 't';
                pcVar43 = pcVar48 + 2;
              }
              else if (bVar75 == 10) {
                pcVar48[0] = '\\';
                pcVar48[1] = 'n';
                pcVar43 = pcVar48 + 2;
              }
              else if (bVar75 == 0xd) {
                pcVar48[0] = '\\';
                pcVar48[1] = 'r';
                pcVar43 = pcVar48 + 2;
              }
            }
            else if (bVar75 == 0x22) {
              pcVar43 = pcVar48 + 2;
              pcVar48[0] = '\\';
              pcVar48[1] = '\"';
            }
            else if (bVar75 == 0x27) {
              pcVar43 = pcVar48 + 2;
              pcVar48[0] = '\\';
              pcVar48[1] = '\'';
            }
            else if (bVar75 == 0x5c) {
              pcVar43 = pcVar48 + 2;
              pcVar48[0] = '\\';
              pcVar48[1] = '\\';
            }
          }
          else if (bVar9 == 1) {
            *pcVar48 = bVar75;
            pcVar43 = pcVar48 + 1;
          }
          else {
            *pcVar48 = 0x5c;
            pcVar48[1] = bVar75 >> 6 | 0x30;
            pcVar48[2] = bVar75 >> 3 & 7 | 0x30;
            uVar56 = bVar75 & 7 | 0x30;
            pcVar38 = (char *)(ulong)uVar56;
            pcVar48[3] = (byte)uVar56;
            pcVar43 = pcVar48 + 4;
          }
          pcVar42 = pcVar42 + 1;
          pcVar40 = (char *)((long)pcVar40 + -1);
          pcVar48 = pcVar43;
        } while ((uint *)pcVar40 != (uint *)0x0);
      }
    }
    return pcVar38;
  }
LAB_00571df4:
  pbVar47 = (byte *)((long)pqVar33 + (long)puVar39);
  pbVar53 = pbVar47 + -1;
  lVar62 = 1;
  lVar66 = 7;
LAB_00571e4c:
  pcVar40 = (char *)((long)&segment_command_00000020.cmd + 2);
  if ((byte)*pqVar59 != 0x5c) {
    pcVar51 = pcVar43 + 1;
    *pcVar43 = (byte)*pqVar59;
    pqVar63 = pqVar59;
    goto code_r0x00571e40;
  }
  pqVar1 = (qword *)((long)pqVar59 + 1);
  if (pbVar53 < pqVar1) {
    uStack_510._0_7_ = uVar29;
    uStack_510._7_1_ = uVar73;
    if (pcVar38 != (char *)0x0) {
      pcVar40 = "String cannot end with \\";
      goto code_r0x0057231c;
    }
    goto LAB_005727d8;
  }
  uVar56 = (uint)*(byte *)pqVar1;
  if (0x56 < uVar56 - 0x22) {
LAB_005723e8:
    uStack_510._0_7_ = uVar29;
    uStack_510._7_1_ = uVar73;
    if (pcVar38 == (char *)0x0) goto LAB_005727d8;
    FUN_00551f98(&uStack_4e0,"Unknown escape sequence: \\");
    pcVar40 = (char *)(long)(char)*(byte *)pqVar1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(&uStack_4e0);
    bVar75 = bStack_4c9;
    uVar30 = uStack_4d0;
    uVar73 = uStack_4d1;
    uVar29 = uStack_4d8;
    pcVar42 = uStack_4e0;
    uStack_510._0_7_ = uStack_4d8;
    uStack_510._7_1_ = uStack_4d1;
    uStack_508 = uStack_4d0;
    uStack_4d8 = 0;
    uStack_4d1 = 0;
    uStack_4d0 = 0;
    bStack_4c9 = 0;
    uStack_4e0 = (char *)0x0;
    if (-1 < pcVar38[0x17]) {
      *(char **)pcVar38 = pcVar42;
      *(ulong *)(pcVar38 + 8) = CONCAT17(uVar73,uVar29);
      *(ulong *)(pcVar38 + 0xf) = CONCAT71(uVar30,uVar73);
      pcVar38[0x17] = bVar75;
      pcVar42 = (char *)0x0;
      puVar52 = (uint *)pcVar40;
      goto LAB_005727dc;
    }
    __ZdlPv(*(undefined8 *)pcVar38);
    *(char **)pcVar38 = pcVar42;
    *(ulong *)(pcVar38 + 8) = CONCAT17(uStack_510._7_1_,(undefined7)uStack_510);
    *(ulong *)(pcVar38 + 0xf) = CONCAT71(uStack_508,uStack_510._7_1_);
    pcVar38[0x17] = bVar75;
    if ((char)bStack_4c9 < '\0') goto LAB_00572630;
    goto LAB_005727d8;
  }
  pcVar42 = (char *)(ulong)*(ushort *)(&UNK_00814020 + (ulong)(uVar56 - 0x22) * 2);
  uStack_510._7_1_ = (undefined1)((ulong)pqVar1 >> 0x38);
  uStack_510._0_7_ = SUB87(pqVar1,0);
  switch(uVar56) {
  case 0x22:
    *pcVar43 = 0x22;
    break;
  default:
    goto LAB_005723e8;
  case 0x27:
    *pcVar43 = 0x27;
    break;
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
    uVar56 = uVar56 - 0x30;
    if (pqVar1 < pbVar53) {
      bVar31 = ((byte)*(char *)((long)pqVar59 + 2) & 0xf8) == 0x30;
      if (bVar31) {
        uVar56 = ((uint)(byte)*(char *)((long)pqVar59 + 2) + uVar56 * 8) - 0x30;
      }
      lVar61 = 1;
      if (bVar31) {
        lVar61 = 2;
      }
      pqVar59 = (qword *)((long)pqVar59 + lVar61);
    }
    else {
      lVar61 = 1;
      pqVar59 = (qword *)((long)pqVar59 + 1);
    }
    if (pqVar59 < pbVar53) {
      pqVar63 = (qword *)((long)pqVar59 + 1);
      uVar55 = *(byte *)pqVar63 & 0xf8;
      pcVar42 = (char *)(ulong)uVar55;
      if (uVar55 == 0x30) {
        uVar56 = ((uint)*(byte *)pqVar63 + uVar56 * 8) - 0x30;
        if (uVar56 < 0x100) {
          pcVar51 = pcVar43 + 1;
          *pcVar43 = (byte)uVar56;
          goto code_r0x00571e40;
        }
        uStack_510._0_7_ = uVar29;
        uStack_510._7_1_ = uVar73;
        if (pcVar38 == (char *)0x0) goto LAB_005727d8;
        uVar46 = lVar61 + 1;
        uStack_500 = CONCAT17((char)uVar46,(undefined7)uStack_500);
        _memmove(&uStack_510,pqVar1,uVar46);
        *(undefined1 *)((ulong)&uStack_510 | uVar46) = 0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (&uStack_510,0,"Value of \\",10);
        uStack_4e0 = (char *)*plVar34;
        uStack_4d0 = (undefined7)plVar34[2];
        bStack_4c9 = (byte)((ulong)plVar34[2] >> 0x38);
        uStack_4d8 = (undefined7)plVar34[1];
        uStack_4d1 = (undefined1)((ulong)plVar34[1] >> 0x38);
        plVar34[1] = 0;
        plVar34[2] = 0;
        *plVar34 = 0;
        pcVar40 = " exceeds 0xff";
        puVar35 = &uStack_4e0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar35," exceeds 0xff",0xd);
code_r0x00572778:
        uVar6 = *puVar35;
        uStack_4b0 = (undefined7)puVar35[1];
        uStack_4a9 = (undefined1)((ulong)puVar35[1] >> 0x38);
        uStack_4a9 = (undefined1)*(undefined8 *)((long)puVar35 + 0xf);
        uStack_4a8 = (undefined7)((ulong)*(undefined8 *)((long)puVar35 + 0xf) >> 8);
        bVar75 = *(byte *)((long)puVar35 + 0x17);
        puVar35[1] = 0;
        puVar35[2] = 0;
        *puVar35 = 0;
        if (pcVar38[0x17] < '\0') {
          __ZdlPv(*(undefined8 *)pcVar38);
        }
        *(undefined8 *)pcVar38 = uVar6;
        *(ulong *)(pcVar38 + 8) = CONCAT17(uStack_4a9,uStack_4b0);
        *(ulong *)(pcVar38 + 0xf) = CONCAT71(uStack_4a8,uStack_4a9);
        pcVar38[0x17] = bVar75;
        if ((char)bStack_4c9 < '\0') {
          __ZdlPv(uStack_4e0);
        }
        if ((long)uStack_500 < 0) {
          __ZdlPv(CONCAT17(uStack_510._7_1_,(undefined7)uStack_510));
        }
        goto LAB_005727d8;
      }
    }
code_r0x00571f60:
    pcVar51 = pcVar43 + 1;
    *pcVar43 = (byte)uVar56;
    pqVar63 = pqVar59;
    goto code_r0x00571e40;
  case 0x3f:
    *pcVar43 = 0x3f;
    break;
  case 0x55:
    pqVar63 = (qword *)((long)pqVar59 + 9);
    if (pqVar63 < pbVar47) {
      bVar75 = *(char *)((long)pqVar59 + 2);
      if ((char)(&UNK_00811470)[bVar75] < '\0') {
        bVar9 = *(char *)((long)pqVar59 + 3);
        if ((char)(&UNK_00811470)[bVar9] < '\0') {
          uVar56 = bVar9 + 9;
          if (bVar9 < 0x3a) {
            uVar56 = (uint)bVar9;
          }
          uVar44 = (uint)bVar75 * 0x10;
          uVar55 = uVar44 + 0x90;
          if (bVar75 < 0x3a) {
            uVar55 = uVar44;
          }
          bVar75 = *(char *)((long)pqVar59 + 4);
          if ((char)(&UNK_00811470)[bVar75] < '\0') {
            bVar9 = *(char *)((long)pqVar59 + 5);
            if ((char)(&UNK_00811470)[bVar9] < '\0') {
              uVar44 = bVar9 + 9;
              if (bVar9 < 0x3a) {
                uVar44 = (uint)bVar9;
              }
              uVar4 = (uint)bVar75 * 0x10;
              uVar10 = uVar4 + 0x90;
              if (bVar75 < 0x3a) {
                uVar10 = uVar4;
              }
              bVar75 = *(char *)((long)pqVar59 + 6);
              if ((char)(&UNK_00811470)[bVar75] < '\0') {
                bVar9 = *(char *)((long)pqVar59 + 7);
                pcVar40 = (char *)(ulong)bVar9;
                if ((char)*(uint *)((long)pcVar40 + 0x811470) < '\0') {
                  uVar56 = uVar55 & 0xf0 | uVar56 & 0xf;
                  if (uVar56 < 0x11) {
                    uVar55 = bVar9 + 9;
                    if (bVar9 < 0x3a) {
                      uVar55 = (uint)bVar9;
                    }
                    uVar3 = (uint)bVar75 * 0x10;
                    uVar4 = uVar3 + 0x90;
                    if (bVar75 < 0x3a) {
                      uVar4 = uVar3;
                    }
                    bVar75 = (byte)pqVar59[1];
                    pcVar40 = (char *)(long)(char)(&UNK_00811470)[bVar75];
                    if (-1 < (char)(&UNK_00811470)[bVar75]) {
                      lVar62 = 7;
                      goto code_r0x005725b0;
                    }
                    uVar44 = uVar10 & 0xf0 | uVar44 & 0xf;
                    uVar56 = uVar56 << 0x10 | uVar44 << 8;
                    if (uVar56 >> 0xc < 0x11) {
                      bVar9 = *(byte *)pqVar63;
                      if (-1 < (char)(&UNK_00811470)[bVar9]) {
                        lVar62 = 8;
                        goto code_r0x005725b0;
                      }
                      if (uVar56 >> 8 < 0x11) {
                        uVar55 = uVar4 & 0xf0 | uVar55 & 0xf | uVar56;
                        bVar7 = bVar9 + 9;
                        if (bVar9 < 0x3a) {
                          bVar7 = bVar9;
                        }
                        uVar4 = (uint)bVar75 * 0x10;
                        uVar10 = uVar4 + 0x90;
                        pcVar42 = (char *)(ulong)uVar10;
                        if (bVar75 < 0x3a) {
                          uVar10 = uVar4;
                        }
                        if ((pcVar38 != (char *)0x0) && ((uVar55 & 0x1ff8) == 0xd8)) {
                          uStack_4e0 = "invalid surrogate character (0xD800-DFFF): \\";
                          uStack_4d8 = 0x2c;
                          uStack_4d1 = 0;
                          uStack_508 = 9;
                          uStack_501 = 0;
                          FUN_00575d30(&uStack_4b0,&uStack_4e0);
                          goto code_r0x005726d0;
                        }
                        uStack_510._0_7_ = uVar29;
                        uStack_510._7_1_ = uVar73;
                        if ((uVar55 & 0x1ff8) != 0xd8) {
                          uVar4 = uVar10 & 0xf0 | uVar55 << 8;
                          bVar7 = bVar7 & 0xf;
                          bVar9 = (byte)(uVar10 & 0xf0);
                          bVar75 = bVar9 | bVar7;
                          if (uVar4 < 0x80) {
                            lVar61 = 1;
                          }
                          else if (uVar55 < 8) {
                            pcVar43[1] = bVar9 & 0x3f | bVar7 | 0x80;
                            bVar75 = (byte)(uVar4 >> 6) | 0xc0;
                            lVar61 = 2;
                          }
                          else {
                            bVar75 = bVar9 & 0x3f | bVar7 | 0x80;
                            bVar9 = (byte)(uVar4 >> 6) & 0x3f | 0x80;
                            if (uVar56 == 0) {
                              pcVar43[2] = bVar75;
                              pcVar43[1] = bVar9;
                              bVar75 = (byte)(uVar55 >> 4) | 0xe0;
                              lVar61 = 3;
                            }
                            else {
                              pcVar43[3] = bVar75;
                              pcVar43[2] = bVar9;
                              pcVar43[1] = (byte)(uVar55 >> 4) & 0x3f | 0x80;
                              bVar75 = (byte)(uVar44 >> 2) | 0xf0;
                              lVar61 = 4;
                            }
                          }
                          *pcVar43 = bVar75;
                          pcVar51 = pcVar43 + lVar61;
                          goto code_r0x00571e40;
                        }
                        goto LAB_005727d8;
                      }
                      lVar66 = 9;
                    }
                    else {
                      lVar66 = 8;
                    }
                  }
                  uStack_510._0_7_ = uVar29;
                  uStack_510._7_1_ = uVar73;
                  if (pcVar38 != (char *)0x0) {
                    uStack_500 = CONCAT17((char)lVar66,(undefined7)uStack_500);
                    _memmove(&uStack_510,pqVar1,lVar66);
                    *(undefined1 *)((long)&uStack_510 + lVar66) = 0;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                              (&uStack_510,0,"Value of \\",10);
                    uStack_4e0 = (char *)*plVar36;
                    uStack_4d0 = (undefined7)plVar36[2];
                    bStack_4c9 = (byte)((ulong)plVar36[2] >> 0x38);
                    uStack_4d8 = (undefined7)plVar36[1];
                    uStack_4d1 = (undefined1)((ulong)plVar36[1] >> 0x38);
                    plVar36[1] = 0;
                    plVar36[2] = 0;
                    *plVar36 = 0;
                    pcVar40 = " exceeds Unicode limit (0x10FFFF)";
                    puVar35 = &uStack_4e0;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (puVar35," exceeds Unicode limit (0x10FFFF)",0x21);
                    goto code_r0x00572778;
                  }
                  goto LAB_005727d8;
                }
                lVar62 = 6;
              }
              else {
                lVar62 = 5;
              }
            }
            else {
              lVar62 = 4;
            }
          }
          else {
            lVar62 = 3;
          }
        }
        else {
          lVar62 = 2;
        }
      }
code_r0x005725b0:
      uStack_510._0_7_ = uVar29;
      uStack_510._7_1_ = uVar73;
      if (pcVar38 != (char *)0x0) {
        bStack_4c9 = (byte)lVar62;
        _memmove(&uStack_4e0,pqVar1,lVar62);
        *(undefined1 *)((long)&uStack_4e0 + lVar62) = 0;
        puVar35 = &uStack_4e0;
        pcVar40 = (char *)0x0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (puVar35,0,"\\U must be followed by 8 hex digits: \\",0x26);
        goto code_r0x005725e8;
      }
    }
    else {
      uStack_510._0_7_ = uVar29;
      uStack_510._7_1_ = uVar73;
      if (pcVar38 != (char *)0x0) {
        bStack_4c9 = 1;
        uStack_4e0._0_2_ = (ushort)*(byte *)pqVar1;
        puVar35 = &uStack_4e0;
        pcVar40 = (char *)0x0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (puVar35,0,"\\U must be followed by 8 hex digits: \\",0x26);
        goto code_r0x005725e8;
      }
    }
    goto LAB_005727d8;
  case 0x58:
  case 0x78:
    if (pqVar1 < pbVar53) {
      if (-1 < (char)(&UNK_00811470)[(byte)*(char *)((long)pqVar59 + 2)]) {
        uStack_510._0_7_ = uVar29;
        uStack_510._7_1_ = uVar73;
        if (pcVar38 != (char *)0x0) {
          pcVar40 = "\\x cannot be followed by a non-hex digit";
          goto code_r0x0057231c;
        }
        goto LAB_005727d8;
      }
      uVar56 = 0;
      pbVar60 = (byte *)((long)puVar39 + (long)pqVar33) + (-2 - (long)pqVar59);
      pqVar63 = pqVar1;
      do {
        bVar75 = *(byte *)((long)pqVar63 + 1);
        pcVar42 = (char *)(long)(char)(&UNK_00811470)[bVar75];
        pqVar59 = pqVar63;
        if (-1 < (char)(&UNK_00811470)[bVar75]) break;
        uVar55 = bVar75 + 9;
        pcVar42 = (char *)(ulong)uVar55;
        if (bVar75 < 0x3a) {
          uVar55 = (uint)bVar75;
        }
        uVar56 = uVar55 & 0xf | uVar56 << 4;
        pbVar60 = pbVar60 + -1;
        pqVar63 = (qword *)((long)pqVar63 + 1);
        pqVar59 = (qword *)((char *)((long)pqVar33 + (long)puVar39) + -1);
      } while (pbVar60 != (byte *)0x0);
      if (uVar56 < 0x100) goto code_r0x00571f60;
      uStack_510._0_7_ = uVar29;
      uStack_510._7_1_ = uVar73;
      if (pcVar38 != (char *)0x0) {
        pbVar47 = (byte *)((long)pqVar59 + (1 - (long)pqVar1));
        if (pbVar47 < (byte *)0x7ffffffffffffff7) {
          if (pbVar47 < (byte *)0x17) {
            uStack_500 = CONCAT17((char)pbVar47,(undefined7)uStack_500);
          }
          else {
            pdVar28 = &MACH_HEADER.flags;
            if ((dword *)((ulong)pbVar47 | 7) != (dword *)0x17) {
              pdVar28 = (dword *)((ulong)pbVar47 | 7);
            }
            puVar35 = (undefined8 *)((long)pdVar28 + 1);
            __Znwm();
            uStack_500 = (ulong)((long)pdVar28 + 1) | 0x8000000000000000;
            uStack_508 = SUB87(pbVar47,0);
            uStack_501 = (undefined1)((ulong)pbVar47 >> 0x38);
            uStack_510._0_7_ = SUB87(puVar35,0);
            uStack_510._7_1_ = (undefined1)((ulong)puVar35 >> 0x38);
          }
          _memmove(puVar35,pqVar1,pbVar47);
          *(undefined1 *)((long)puVar35 + (long)pbVar47) = 0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (&uStack_510,0,"Value of \\",10);
          uStack_4e0 = (char *)*plVar37;
          uStack_4d0 = (undefined7)plVar37[2];
          bStack_4c9 = (byte)((ulong)plVar37[2] >> 0x38);
          uStack_4d8 = (undefined7)plVar37[1];
          uStack_4d1 = (undefined1)((ulong)plVar37[1] >> 0x38);
          plVar37[1] = 0;
          plVar37[2] = 0;
          *plVar37 = 0;
          pcVar40 = " exceeds 0xff";
          puVar35 = &uStack_4e0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar35," exceeds 0xff",0xd);
          goto code_r0x00572778;
        }
        goto code_r0x00572844;
      }
    }
    else {
      uStack_510._0_7_ = uVar29;
      uStack_510._7_1_ = uVar73;
      if (pcVar38 != (char *)0x0) {
        pcVar40 = "String cannot end with \\x";
code_r0x0057231c:
        uStack_510._0_7_ = uVar29;
        uStack_510._7_1_ = uVar73;
        FUN_00460cc0(pcVar38);
      }
    }
    goto LAB_005727d8;
  case 0x5c:
    *pcVar43 = 0x5c;
    break;
  case 0x61:
    *pcVar43 = 7;
    break;
  case 0x62:
    *pcVar43 = 8;
    break;
  case 0x66:
    *pcVar43 = 0xc;
    break;
  case 0x6e:
    *pcVar43 = 10;
    break;
  case 0x72:
    *pcVar43 = 0xd;
    break;
  case 0x74:
    *pcVar43 = 9;
    break;
  case 0x75:
    pqVar63 = (qword *)((long)pqVar59 + 5);
    if (pbVar47 <= pqVar63) {
      uStack_510._0_7_ = uVar29;
      uStack_510._7_1_ = uVar73;
      if (pcVar38 != (char *)0x0) {
        bStack_4c9 = 1;
        uStack_4e0._0_2_ = (ushort)*(byte *)pqVar1;
        puVar35 = &uStack_4e0;
        pcVar40 = (char *)0x0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (puVar35,0,"\\u must be followed by 4 hex digits: \\",0x26);
        goto code_r0x005725e8;
      }
      goto LAB_005727d8;
    }
    bVar75 = *(char *)((long)pqVar59 + 2);
    if ((char)(&UNK_00811470)[bVar75] < '\0') {
      bVar9 = *(char *)((long)pqVar59 + 3);
      if ((char)(&UNK_00811470)[bVar9] < '\0') {
        bVar7 = *(char *)((long)pqVar59 + 4);
        if ((char)(&UNK_00811470)[bVar7] < '\0') {
          bVar8 = *(byte *)pqVar63;
          pcVar42 = (char *)(long)(char)(&UNK_00811470)[bVar8];
          if ((char)(&UNK_00811470)[bVar8] < '\0') {
            uVar56 = bVar9 + 9;
            if (bVar9 < 0x3a) {
              uVar56 = (uint)bVar9;
            }
            uVar44 = (uint)bVar75 * 0x10;
            uVar55 = uVar44 + 0x90;
            if (bVar75 < 0x3a) {
              uVar55 = uVar44;
            }
            uVar55 = uVar55 & 0xf0;
            uVar10 = uVar55 | uVar56 & 0xf;
            uVar4 = (uint)bVar7 * 0x10;
            uVar44 = uVar4 + 0x90;
            pcVar40 = (char *)(ulong)uVar44;
            if (bVar7 < 0x3a) {
              uVar44 = uVar4;
            }
            uVar4 = bVar8 + 9;
            if (bVar8 < 0x3a) {
              uVar4 = (uint)bVar8;
            }
            pcVar42 = (char *)(ulong)uVar4;
            uVar56 = uVar55 | uVar56 & 8;
            if ((pcVar38 == (char *)0x0) || (uVar56 != 0xd8)) {
              uStack_510._0_7_ = uVar29;
              uStack_510._7_1_ = uVar73;
              if (uVar56 != 0xd8) {
                uVar56 = uVar44 & 0xf0 | uVar10 << 8;
                bVar75 = (byte)(uVar44 & 0xf0) | (byte)(uVar4 & 0xf);
                if (uVar56 < 0x80) {
                  lVar61 = 1;
                }
                else {
                  uVar44 = uVar44 & 0x30 | uVar4 & 0xf | 0xffffff80;
                  pcVar42 = (char *)(ulong)uVar44;
                  bVar75 = (byte)uVar44;
                  if (uVar10 < 8) {
                    pcVar43[1] = bVar75;
                    bVar75 = (byte)(uVar56 >> 6) | 0xc0;
                    lVar61 = 2;
                  }
                  else {
                    pcVar43[2] = bVar75;
                    pcVar43[1] = (byte)(uVar56 >> 6) & 0x3f | 0x80;
                    bVar75 = (byte)(uVar55 >> 4) | 0xe0;
                    lVar61 = 3;
                  }
                }
                *pcVar43 = bVar75;
                pcVar51 = pcVar43 + lVar61;
                goto code_r0x00571e40;
              }
              goto LAB_005727d8;
            }
            uStack_4e0 = "invalid surrogate character (0xD800-DFFF): \\";
            uStack_4d8 = 0x2c;
            uStack_4d1 = 0;
            uStack_508 = 5;
            uStack_501 = 0;
            FUN_00575d30(&uStack_4b0,&uStack_4e0);
            puVar52 = puVar41;
code_r0x005726d0:
            if (pcVar38[0x17] < '\0') {
              __ZdlPv(*(undefined8 *)pcVar38);
            }
            pcVar42 = (char *)0x0;
            *(ulong *)(pcVar38 + 8) = CONCAT17(uStack_4a1,uStack_4a8);
            *(ulong *)pcVar38 = CONCAT17(uStack_4a9,uStack_4b0);
            *(undefined8 *)(pcVar38 + 0x10) = uStack_4a0;
            goto LAB_005727dc;
          }
        }
        else {
          pqVar63 = (qword *)((long)pqVar59 + 4);
        }
      }
      else {
        pqVar63 = (qword *)((long)pqVar59 + 3);
      }
    }
    else {
      pqVar63 = (qword *)((long)pqVar59 + 2);
    }
    uStack_510._0_7_ = uVar29;
    uStack_510._7_1_ = uVar73;
    if (pcVar38 == (char *)0x0) goto LAB_005727d8;
    uVar46 = (long)pqVar63 - (long)pqVar1;
    if (0x7ffffffffffffff6 < uVar46) goto code_r0x00572844;
    if (uVar46 < 0x17) {
      bStack_4c9 = (byte)uVar46;
      pcVar40 = (char *)&uStack_4e0;
    }
    else {
      pdVar28 = &MACH_HEADER.flags;
      if ((dword *)(uVar46 | 7) != (dword *)0x17) {
        pdVar28 = (dword *)(uVar46 | 7);
      }
      pcVar42 = (char *)((long)pdVar28 + 1);
      pcVar40 = pcVar42;
      __Znwm();
      bStack_4c9 = (byte)((ulong)pcVar42 >> 0x38) | 0x80;
      uStack_4d8 = (undefined7)uVar46;
      uStack_4d1 = (undefined1)(uVar46 >> 0x38);
      uStack_4d0 = SUB87(pcVar42,0);
      uStack_4e0 = pcVar40;
    }
    _memmove(pcVar40,pqVar1,uVar46);
    pcVar40[uVar46] = '\0';
    puVar35 = &uStack_4e0;
    pcVar40 = (char *)0x0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar35,0,"\\u must be followed by 4 hex digits: \\",0x26);
code_r0x005725e8:
    uVar6 = *puVar35;
    uStack_510._0_7_ = (undefined7)puVar35[1];
    uStack_510._7_1_ = (undefined1)*(undefined8 *)((long)puVar35 + 0xf);
    uStack_508 = (undefined7)((ulong)*(undefined8 *)((long)puVar35 + 0xf) >> 8);
    bVar75 = *(byte *)((long)puVar35 + 0x17);
    puVar35[1] = 0;
    puVar35[2] = 0;
    *puVar35 = 0;
    if (pcVar38[0x17] < '\0') {
      __ZdlPv(*(undefined8 *)pcVar38);
    }
    *(undefined8 *)pcVar38 = uVar6;
    *(ulong *)(pcVar38 + 8) = CONCAT17(uStack_510._7_1_,(undefined7)uStack_510);
    *(ulong *)(pcVar38 + 0xf) = CONCAT71(uStack_508,uStack_510._7_1_);
    pcVar38[0x17] = bVar75;
    if (-1 < (char)bStack_4c9) goto LAB_005727d8;
LAB_00572630:
    __ZdlPv(uStack_4e0);
LAB_005727d8:
    pcVar42 = (char *)0x0;
    puVar52 = (uint *)pcVar40;
    goto LAB_005727dc;
  case 0x76:
    *pcVar43 = 0xb;
  }
  pcVar51 = pcVar43 + 1;
  pqVar63 = pqVar1;
code_r0x00571e40:
  pcVar40 = (char *)((long)&segment_command_00000020.cmd + 2);
  pqVar59 = (qword *)((long)pqVar63 + 1);
  pcVar43 = pcVar51;
  if (pbVar47 <= pqVar59) goto LAB_005722e4;
  goto LAB_00571e4c;
LAB_005722e4:
  bVar75 = param_4[0x17];
  uVar46 = (long)pcVar51 - (long)pcVar48;
  if (-1 < (char)bVar75) goto LAB_005722d4;
  goto LAB_005722f0;
}



/* Entry: 005712c4; end: 00571d33;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_005712c4(ulong param_1,int param_2,ulong *param_3,char *param_4)

{
  ulong *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iVar17;
  int iVar18;
  dword *pdVar19;
  undefined7 uVar20;
  undefined7 uVar21;
  bool bVar22;
  ulong *puVar23;
  long *plVar24;
  long *plVar25;
  undefined8 *puVar26;
  long *plVar27;
  uint *puVar28;
  char *pcVar29;
  uint *puVar30;
  ulong *puVar31;
  byte *extraout_x8;
  byte *pbVar32;
  byte *pbVar33;
  int iVar34;
  ulong uVar35;
  ulong *puVar36;
  ulong *puVar37;
  ulong uVar38;
  ulong uVar39;
  ulong *puVar40;
  ulong *puVar41;
  uint *puVar42;
  ulong *puVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong *puVar49;
  long lVar50;
  long lVar51;
  ulong *puVar52;
  ulong uVar53;
  long lVar54;
  byte bVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined8 uStack_400;
  undefined7 uStack_3f8;
  undefined1 uStack_3f1;
  undefined8 uStack_3f0;
  undefined8 uStack_3d0;
  undefined7 uStack_3c8;
  undefined1 uStack_3c1;
  undefined7 uStack_3c0;
  byte bStack_3b9;
  undefined7 uStack_3a0;
  undefined1 uStack_399;
  undefined7 uStack_398;
  undefined1 uStack_391;
  qword qStack_390;
  long lStack_388;
  uint auStack_314 [85];
  uint auStack_1c0 [88];
  int iStack_60;
  undefined4 uStack_5c;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  auStack_1c0[0x54] = 0;
  auStack_1c0[0x4e] = 0;
  auStack_1c0[0x4f] = 0;
  auStack_1c0[0x4c] = 0;
  auStack_1c0[0x4d] = 0;
  auStack_1c0[0x52] = 0;
  auStack_1c0[0x53] = 0;
  auStack_1c0[0x50] = 0;
  auStack_1c0[0x51] = 0;
  auStack_1c0[0x46] = 0;
  auStack_1c0[0x47] = 0;
  auStack_1c0[0x44] = 0;
  auStack_1c0[0x45] = 0;
  auStack_1c0[0x4a] = 0;
  auStack_1c0[0x4b] = 0;
  auStack_1c0[0x48] = 0;
  auStack_1c0[0x49] = 0;
  auStack_1c0[0x3e] = 0;
  auStack_1c0[0x3f] = 0;
  auStack_1c0[0x3c] = 0;
  auStack_1c0[0x3d] = 0;
  auStack_1c0[0x42] = 0;
  auStack_1c0[0x43] = 0;
  auStack_1c0[0x40] = 0;
  auStack_1c0[0x41] = 0;
  auStack_1c0[0x36] = 0;
  auStack_1c0[0x37] = 0;
  auStack_1c0[0x34] = 0;
  auStack_1c0[0x35] = 0;
  auStack_1c0[0x3a] = 0;
  auStack_1c0[0x3b] = 0;
  auStack_1c0[0x38] = 0;
  auStack_1c0[0x39] = 0;
  auStack_1c0[0x2e] = 0;
  auStack_1c0[0x2f] = 0;
  auStack_1c0[0x2c] = 0;
  auStack_1c0[0x2d] = 0;
  auStack_1c0[0x32] = 0;
  auStack_1c0[0x33] = 0;
  auStack_1c0[0x30] = 0;
  auStack_1c0[0x31] = 0;
  auStack_1c0[0x26] = 0;
  auStack_1c0[0x27] = 0;
  auStack_1c0[0x24] = 0;
  auStack_1c0[0x25] = 0;
  auStack_1c0[0x2a] = 0;
  auStack_1c0[0x2b] = 0;
  auStack_1c0[0x28] = 0;
  auStack_1c0[0x29] = 0;
  auStack_1c0[0x1e] = 0;
  auStack_1c0[0x1f] = 0;
  auStack_1c0[0x1c] = 0;
  auStack_1c0[0x1d] = 0;
  auStack_1c0[0x22] = 0;
  auStack_1c0[0x23] = 0;
  auStack_1c0[0x20] = 0;
  auStack_1c0[0x21] = 0;
  auStack_1c0[0x16] = 0;
  auStack_1c0[0x17] = 0;
  auStack_1c0[0x14] = 0;
  auStack_1c0[0x15] = 0;
  auStack_1c0[0x1a] = 0;
  auStack_1c0[0x1b] = 0;
  auStack_1c0[0x18] = 0;
  auStack_1c0[0x19] = 0;
  auStack_1c0[0xe] = 0;
  auStack_1c0[0xf] = 0;
  auStack_1c0[0xc] = 0;
  auStack_1c0[0xd] = 0;
  auStack_1c0[0x12] = 0;
  auStack_1c0[0x13] = 0;
  auStack_1c0[0x10] = 0;
  auStack_1c0[0x11] = 0;
  auStack_1c0[6] = 0;
  auStack_1c0[7] = 0;
  auStack_1c0[4] = 0;
  auStack_1c0[5] = 0;
  auStack_1c0[10] = 0;
  auStack_1c0[0xb] = 0;
  auStack_1c0[8] = 0;
  auStack_1c0[9] = 0;
  auStack_1c0[2] = 0;
  auStack_1c0[3] = 0;
  auStack_1c0[0] = 0;
  auStack_1c0[1] = 0;
  puVar28 = (uint *)param_3[3];
  if (puVar28 == (uint *)0x0) {
    uVar35 = *param_3;
    auStack_1c0[1] = (uint)uVar35;
    auStack_1c0[2] = (uint)(uVar35 >> 0x20);
    if (uVar35 >> 0x20 == 0) {
      if (auStack_1c0[1] != 0) {
        auStack_1c0[0] = 1;
        goto LAB_0057154c;
      }
    }
    else {
      auStack_1c0[0] = 2;
LAB_0057154c:
    }
    uVar46 = (uint)param_3[1];
    uVar35 = param_1 << 1 | 1;
    if (-1 < (int)uVar46) goto LAB_00571368;
LAB_00571568:
    FUN_00573528(auStack_314,-uVar46);
    uVar53 = (param_1 & 0x7fffffffffffffff) >> 0x1f;
    iStack_60 = (int)uVar35;
    uStack_5c = (int)uVar53;
    puVar42 = (uint *)(ulong)auStack_314[0];
    if (uVar53 == 0) {
      if (((int)uVar35 != 1) && (0 < (int)auStack_314[0])) {
        uVar53 = 0;
        lVar51 = 4;
        puVar30 = puVar42;
        do {
          uVar38 = uVar53 + uVar35 * *(uint *)((long)auStack_314 + lVar51);
          *(int *)((long)auStack_314 + lVar51) = (int)uVar38;
          uVar53 = uVar38 >> 0x20;
          lVar51 = lVar51 + 4;
          puVar30 = (uint *)((long)puVar30 + -1);
        } while (puVar30 != (uint *)0x0);
        if ((auStack_314[0] < 0x54) && (uVar53 != 0)) {
          auStack_314[(long)puVar42 + 1] = (int)(uVar38 >> 0x20);
          auStack_314[0] = auStack_314[0] + 1;
        }
      }
    }
    else if (-1 < (int)auStack_314[0]) {
      uVar44 = auStack_314[0];
      if (0x52 < auStack_314[0]) {
        uVar44 = 0x53;
      }
      do {
        param_3 = (ulong *)&iStack_60;
        param_4 = (char *)((long)&MACH_HEADER.magic + 2);
        puVar28 = puVar42;
        FUN_005738b0(auStack_314);
        uVar44 = uVar44 - 1;
      } while (uVar44 != 0xffffffff);
    }
    if ((int)uVar46 < param_2) {
      uVar46 = (param_2 + -1) - uVar46;
      if (0 < (int)uVar46) {
        if (uVar46 < 0xa80) {
          uVar10 = uVar46 >> 5;
          uVar35 = (ulong)uVar10;
          uVar44 = auStack_314[0] + uVar10;
          uVar45 = uVar44;
          if (0x53 < (int)uVar44) {
            uVar45 = 0x54;
          }
          auStack_314[0] = uVar45;
          if ((uVar46 & 0x1f) == 0) {
            if (uVar45 != uVar10) {
              puVar28 = auStack_314 + 1;
              param_3 = (ulong *)(((long)(int)uVar45 - (ulong)uVar10) * 4);
              _memmove(puVar28 + ((long)(int)uVar45 - ((long)(int)uVar45 - (ulong)uVar10)));
            }
          }
          else {
            uVar4 = uVar44;
            if (0x52 < (int)uVar44) {
              uVar4 = 0x53;
            }
            uVar53 = (ulong)uVar4;
            if ((int)uVar10 < (int)uVar4) {
              uVar38 = uVar35;
              if (uVar53 - 1 <= uVar35) {
                uVar38 = uVar53 - 1;
              }
              uVar38 = uVar53 - uVar38;
              if (3 < uVar38) {
                uVar47 = uVar38 & 0xfffffffffffffffc;
                bVar55 = (byte)uVar46;
                puVar42 = auStack_314 + uVar53;
                iVar34 = -(uint)(~bVar55 & 0x1f);
                iVar17 = -(uint)(~bVar55 & 0x1f);
                iVar18 = -(uint)(~bVar55 & 0x1f);
                uVar39 = uVar47;
                do {
                  puVar30 = puVar42 + -uVar35;
                  auVar12._5_3_ = 0;
                  auVar12._0_5_ = CONCAT14(bVar55,(uint)(bVar55 & 0x1f)) & 0x1fffffffff;
                  auVar12[8] = bVar55 & 0x1f;
                  auVar12._9_3_ = 0;
                  auVar12[0xc] = bVar55 & 0x1f;
                  auVar12._13_3_ = 0;
                  auVar56 = NEON_ushl(*(undefined1 (*) [16])(puVar30 + -2),auVar12,4);
                  auVar61._0_4_ = puVar30[-3] >> 1;
                  auVar61._4_4_ = puVar30[-2] >> 1;
                  auVar61._8_4_ = puVar30[-1] >> 1;
                  auVar61._12_4_ = *puVar30 >> 1;
                  auVar15[4] = (char)iVar34;
                  auVar15._0_4_ = -(uint)(~bVar55 & 0x1f);
                  auVar15[5] = (char)((uint)iVar34 >> 8);
                  auVar15[6] = (char)((uint)iVar34 >> 0x10);
                  auVar15[7] = (char)((uint)iVar34 >> 0x18);
                  auVar15[8] = (char)iVar17;
                  auVar15[9] = (char)((uint)iVar17 >> 8);
                  auVar15[10] = (char)((uint)iVar17 >> 0x10);
                  auVar15[0xb] = (char)((uint)iVar17 >> 0x18);
                  auVar15[0xc] = (char)iVar18;
                  auVar15[0xd] = (char)((uint)iVar18 >> 8);
                  auVar15[0xe] = (char)((uint)iVar18 >> 0x10);
                  auVar15[0xf] = (char)((uint)iVar18 >> 0x18);
                  auVar60 = NEON_ushl(auVar61,auVar15,4);
                  *(byte *)puVar42 = auVar56[8] | auVar60[8];
                  *(byte *)((long)puVar42 + 1) = auVar56[9] | auVar60[9];
                  *(byte *)((long)puVar42 + 2) = auVar56[10] | auVar60[10];
                  *(byte *)((long)puVar42 + 3) = auVar56[0xb] | auVar60[0xb];
                  *(byte *)(puVar42 + 1) = auVar56[0xc] | auVar60[0xc];
                  *(byte *)((long)puVar42 + 5) = auVar56[0xd] | auVar60[0xd];
                  *(byte *)((long)puVar42 + 6) = auVar56[0xe] | auVar60[0xe];
                  *(byte *)((long)puVar42 + 7) = auVar56[0xf] | auVar60[0xf];
                  *(byte *)(puVar42 + -2) = auVar56[0] | auVar60[0];
                  *(byte *)((long)puVar42 + -7) = auVar56[1] | auVar60[1];
                  *(byte *)((long)puVar42 + -6) = auVar56[2] | auVar60[2];
                  *(byte *)((long)puVar42 + -5) = auVar56[3] | auVar60[3];
                  *(byte *)(puVar42 + -1) = auVar56[4] | auVar60[4];
                  *(byte *)((long)puVar42 + -3) = auVar56[5] | auVar60[5];
                  *(byte *)((long)puVar42 + -2) = auVar56[6] | auVar60[6];
                  *(byte *)((long)puVar42 + -1) = auVar56[7] | auVar60[7];
                  puVar42 = puVar42 + -4;
                  uVar39 = uVar39 - 4;
                } while (uVar39 != 0);
                uVar53 = uVar53 - uVar47;
                if (uVar38 == uVar47) goto LAB_00571c14;
              }
              lVar51 = uVar53 * 4 + uVar35 * -4;
              do {
                auStack_314[uVar53 + 1] =
                     *(int *)((long)auStack_314 + lVar51 + 4U) << (ulong)(uVar46 & 0x1f) |
                     (*(uint *)((long)auStack_314 + lVar51) >> 1) >> (ulong)(~uVar46 & 0x1f);
                uVar53 = uVar53 - 1;
                lVar51 = lVar51 + -4;
              } while (uVar35 < uVar53);
            }
LAB_00571c14:
            auStack_314[uVar35 + 1] = auStack_314[1] << (ulong)(uVar46 & 0x1f);
            if (((int)uVar44 < 0x54) && (auStack_314[(long)(int)uVar45 + 1] != 0)) {
              auStack_314[0] = uVar45 + 1;
            }
          }
          if (0x1f < uVar46) {
            puVar42 = auStack_314 + 1;
            goto LAB_00571c58;
          }
        }
        else {
          if (0 < (int)auStack_314[0]) {
            puVar28 = (uint *)((ulong)auStack_314[0] << 2);
            _bzero(auStack_314 + 1);
          }
          auStack_314[0] = 0;
        }
      }
    }
    else {
      uVar46 = uVar46 - (param_2 + -1);
      uVar10 = uVar46 >> 5;
      uVar35 = (ulong)uVar10;
      uVar44 = auStack_1c0[0] + uVar10;
      uVar45 = uVar44;
      if (0x53 < (int)uVar44) {
        uVar45 = 0x54;
      }
      auStack_1c0[0] = uVar45;
      if ((uVar46 & 0x1f) == 0) {
        if (uVar45 != uVar10) {
          puVar28 = (uint *)((ulong)auStack_1c0 | 4);
          param_3 = (ulong *)(((long)(int)uVar45 - uVar35) * 4);
          _memmove(puVar28 + ((long)(int)uVar45 - ((long)(int)uVar45 - uVar35)));
        }
      }
      else {
        uVar4 = uVar44;
        if (0x52 < (int)uVar44) {
          uVar4 = 0x53;
        }
        uVar53 = (ulong)uVar4;
        if ((int)uVar10 < (int)uVar4) {
          uVar38 = uVar35;
          if (uVar53 - 1 <= uVar35) {
            uVar38 = uVar53 - 1;
          }
          uVar38 = uVar53 - uVar38;
          if (3 < uVar38) {
            uVar47 = uVar38 & 0xfffffffffffffffc;
            bVar55 = (byte)uVar46;
            pbVar32 = (byte *)((long)auStack_1c0 + uVar53 * 4);
            iVar34 = -(uint)(~bVar55 & 0x1f);
            iVar17 = -(uint)(~bVar55 & 0x1f);
            iVar18 = -(uint)(~bVar55 & 0x1f);
            uVar39 = uVar47;
            do {
              puVar42 = (uint *)(pbVar32 + uVar35 * 0xfffffffffffffffc);
              auVar13._5_3_ = 0;
              auVar13._0_5_ = CONCAT14(bVar55,(uint)(bVar55 & 0x1f)) & 0x1fffffffff;
              auVar13[8] = bVar55 & 0x1f;
              auVar13._9_3_ = 0;
              auVar13[0xc] = bVar55 & 0x1f;
              auVar13._13_3_ = 0;
              auVar56 = NEON_ushl(*(undefined1 (*) [16])(puVar42 + -2),auVar13,4);
              auVar57._0_4_ = puVar42[-3] >> 1;
              auVar57._4_4_ = puVar42[-2] >> 1;
              auVar57._8_4_ = puVar42[-1] >> 1;
              auVar57._12_4_ = *puVar42 >> 1;
              auVar16[4] = (char)iVar34;
              auVar16._0_4_ = -(uint)(~bVar55 & 0x1f);
              auVar16[5] = (char)((uint)iVar34 >> 8);
              auVar16[6] = (char)((uint)iVar34 >> 0x10);
              auVar16[7] = (char)((uint)iVar34 >> 0x18);
              auVar16[8] = (char)iVar17;
              auVar16[9] = (char)((uint)iVar17 >> 8);
              auVar16[10] = (char)((uint)iVar17 >> 0x10);
              auVar16[0xb] = (char)((uint)iVar17 >> 0x18);
              auVar16[0xc] = (char)iVar18;
              auVar16[0xd] = (char)((uint)iVar18 >> 8);
              auVar16[0xe] = (char)((uint)iVar18 >> 0x10);
              auVar16[0xf] = (char)((uint)iVar18 >> 0x18);
              auVar60 = NEON_ushl(auVar57,auVar16,4);
              *pbVar32 = auVar56[8] | auVar60[8];
              pbVar32[1] = auVar56[9] | auVar60[9];
              pbVar32[2] = auVar56[10] | auVar60[10];
              pbVar32[3] = auVar56[0xb] | auVar60[0xb];
              pbVar32[4] = auVar56[0xc] | auVar60[0xc];
              pbVar32[5] = auVar56[0xd] | auVar60[0xd];
              pbVar32[6] = auVar56[0xe] | auVar60[0xe];
              pbVar32[7] = auVar56[0xf] | auVar60[0xf];
              pbVar32[0xfffffffffffffff8] = auVar56[0] | auVar60[0];
              pbVar32[-7] = auVar56[1] | auVar60[1];
              pbVar32[-6] = auVar56[2] | auVar60[2];
              pbVar32[-5] = auVar56[3] | auVar60[3];
              pbVar32[0xfffffffffffffffc] = auVar56[4] | auVar60[4];
              pbVar32[-3] = auVar56[5] | auVar60[5];
              pbVar32[-2] = auVar56[6] | auVar60[6];
              pbVar32[-1] = auVar56[7] | auVar60[7];
              pbVar32 = pbVar32 + 0xfffffffffffffff0;
              uVar39 = uVar39 - 4;
            } while (uVar39 != 0);
            uVar53 = uVar53 - uVar47;
            if (uVar38 == uVar47) goto LAB_005718d8;
          }
          uVar38 = (ulong)auStack_1c0 | 4;
          lVar51 = uVar53 * 4 + uVar35 * -4;
          do {
            *(uint *)(uVar38 + uVar53 * 4) =
                 *(int *)(uVar38 + lVar51) << (ulong)(uVar46 & 0x1f) |
                 (*(uint *)((long)auStack_1c0 + lVar51) >> 1) >> (ulong)(~uVar46 & 0x1f);
            uVar53 = uVar53 - 1;
            lVar51 = lVar51 + -4;
          } while (uVar35 < uVar53);
        }
LAB_005718d8:
        *(uint *)(((ulong)auStack_1c0 | 4) + uVar35 * 4) = auStack_1c0[1] << (ulong)(uVar46 & 0x1f);
        if (((int)uVar44 < 0x54) &&
           (*(int *)(((ulong)auStack_1c0 | 4) + (long)(int)uVar45 * 4) != 0)) {
          auStack_1c0[0] = uVar45 + 1;
        }
      }
      if (0x1f < uVar46) {
        puVar42 = (uint *)((ulong)auStack_1c0 | 4);
LAB_00571c58:
        puVar28 = (uint *)((ulong)(uVar10 - 1) * 4 + 4);
        _bzero(puVar42);
      }
    }
    uVar46 = auStack_1c0[0];
    if ((int)auStack_1c0[0] <= (int)auStack_314[0]) {
      uVar46 = auStack_314[0];
    }
    uVar35 = (ulong)uVar46;
    do {
      iVar34 = (int)uVar35;
      if (iVar34 < 1) goto LAB_00571cd4;
      if ((int)auStack_1c0[0] < iVar34) {
        uVar46 = 0;
        if (iVar34 <= (int)auStack_314[0]) goto LAB_00571cc0;
LAB_00571c7c:
        uVar44 = 0;
      }
      else {
        uVar46 = auStack_314[uVar35 + 0x55];
        if ((int)auStack_314[0] < iVar34) goto LAB_00571c7c;
LAB_00571cc0:
        uVar44 = auStack_314[uVar35];
        if (uVar46 < uVar44) goto LAB_00571ccc;
      }
      uVar35 = uVar35 - 1;
    } while (uVar46 <= uVar44);
  }
  else {
    puVar31 = (ulong *)param_3[4];
    iVar34 = (int)auStack_314 + 0x154;
    param_4 = section_000002e8.segname + 8;
    FUN_00573140();
    uVar46 = *(int *)((long)param_3 + 0xc) + iVar34;
    uVar35 = param_1 << 1 | 1;
    param_3 = puVar31;
    if ((int)uVar46 < 0) goto LAB_00571568;
LAB_00571368:
    uVar53 = (ulong)uVar46;
    if (0xc < uVar46) {
      uVar38 = (ulong)auStack_1c0[0];
      do {
        if (0 < (int)uVar38) {
          uVar47 = 0;
          lVar51 = 4;
          uVar39 = uVar38;
          do {
            uVar48 = uVar47 + (ulong)*(uint *)((long)auStack_1c0 + lVar51) * 0x48c27395;
            *(int *)((long)auStack_1c0 + lVar51) = (int)uVar48;
            uVar47 = uVar48 >> 0x20;
            lVar51 = lVar51 + 4;
            uVar39 = uVar39 - 1;
          } while (uVar39 != 0);
          if ((uVar38 < 0x54) && (uVar47 != 0)) {
            *(int *)(((ulong)auStack_1c0 | 4) + uVar38 * 4) = (int)(uVar48 >> 0x20);
            uVar38 = uVar38 + 1;
            auStack_1c0[0] = (uint)uVar38;
          }
        }
        iVar34 = (int)uVar53;
        uVar53 = (ulong)(iVar34 - 0xd);
      } while (0x19 < iVar34);
    }
    if (((0 < (int)uVar53) && (auStack_1c0[0] != 0)) && (0 < (int)auStack_1c0[0])) {
      uVar38 = 0;
      uVar44 = *(uint *)(&UNK_008141d0 + uVar53 * 4);
      lVar51 = 4;
      uVar53 = (ulong)auStack_1c0[0];
      do {
        uVar39 = uVar38 + (ulong)*(uint *)((long)auStack_1c0 + lVar51) * (ulong)uVar44;
        *(int *)((long)auStack_1c0 + lVar51) = (int)uVar39;
        uVar38 = uVar39 >> 0x20;
        lVar51 = lVar51 + 4;
        uVar53 = uVar53 - 1;
      } while (uVar53 != 0);
      if ((auStack_1c0[0] < 0x54) && (uVar38 != 0)) {
        *(int *)(((ulong)auStack_1c0 | 4) + (ulong)auStack_1c0[0] * 4) = (int)(uVar39 >> 0x20);
        auStack_1c0[0] = auStack_1c0[0] + 1;
      }
    }
    auStack_314[0x45] = 0;
    auStack_314[0x46] = 0;
    auStack_314[0x43] = 0;
    auStack_314[0x44] = 0;
    auStack_314[0x49] = 0;
    auStack_314[0x4a] = 0;
    auStack_314[0x47] = 0;
    auStack_314[0x48] = 0;
    uVar44 = 1;
    if ((param_1 & 0x7fffffffffffffff) >> 0x1f != 0) {
      uVar44 = 2;
    }
    auStack_314[0x4d] = 0;
    auStack_314[0x4e] = 0;
    auStack_314[0x4b] = 0;
    auStack_314[0x4c] = 0;
    auStack_314[0x51] = 0;
    auStack_314[0x52] = 0;
    auStack_314[0x4f] = 0;
    auStack_314[0x50] = 0;
    auStack_314[0x53] = 0;
    auStack_314[0x54] = 0;
    auStack_314[5] = 0;
    auStack_314[6] = 0;
    auStack_314[3] = 0;
    auStack_314[4] = 0;
    auStack_314[9] = 0;
    auStack_314[10] = 0;
    auStack_314[7] = 0;
    auStack_314[8] = 0;
    auStack_314[0xd] = 0;
    auStack_314[0xe] = 0;
    auStack_314[0xb] = 0;
    auStack_314[0xc] = 0;
    auStack_314[0x11] = 0;
    auStack_314[0x12] = 0;
    auStack_314[0xf] = 0;
    auStack_314[0x10] = 0;
    auStack_314[0x15] = 0;
    auStack_314[0x16] = 0;
    auStack_314[0x13] = 0;
    auStack_314[0x14] = 0;
    auStack_314[0x19] = 0;
    auStack_314[0x1a] = 0;
    auStack_314[0x17] = 0;
    auStack_314[0x18] = 0;
    auStack_314[0x1d] = 0;
    auStack_314[0x1e] = 0;
    auStack_314[0x1b] = 0;
    auStack_314[0x1c] = 0;
    auStack_314[0x21] = 0;
    auStack_314[0x22] = 0;
    auStack_314[0x1f] = 0;
    auStack_314[0x20] = 0;
    auStack_314[0x25] = 0;
    auStack_314[0x26] = 0;
    auStack_314[0x23] = 0;
    auStack_314[0x24] = 0;
    auStack_314[0x29] = 0;
    auStack_314[0x2a] = 0;
    auStack_314[0x27] = 0;
    auStack_314[0x28] = 0;
    auStack_314[0x2d] = 0;
    auStack_314[0x2e] = 0;
    auStack_314[0x2b] = 0;
    auStack_314[0x2c] = 0;
    auStack_314[0x31] = 0;
    auStack_314[0x32] = 0;
    auStack_314[0x2f] = 0;
    auStack_314[0x30] = 0;
    auStack_314[0x35] = 0;
    auStack_314[0x36] = 0;
    auStack_314[0x33] = 0;
    auStack_314[0x34] = 0;
    auStack_314[0x39] = 0;
    auStack_314[0x3a] = 0;
    auStack_314[0x37] = 0;
    auStack_314[0x38] = 0;
    auStack_314[0x3d] = 0;
    auStack_314[0x3e] = 0;
    auStack_314[0x3b] = 0;
    auStack_314[0x3c] = 0;
    auStack_314[0x41] = 0;
    auStack_314[0x42] = 0;
    auStack_314[0x3f] = 0;
    auStack_314[0x40] = 0;
    auStack_314[0] = uVar44;
    auStack_314[1] = (uint)uVar35;
    auStack_314[2] = (int)((param_1 << 1) >> 0x20);
    if ((int)uVar46 < param_2) {
      uVar46 = (param_2 + -1) - uVar46;
      uVar44 = auStack_314[0];
      if (0 < (int)uVar46) {
        puVar42 = auStack_314 + 1;
        if (uVar46 < 0xa80) {
          uVar10 = uVar46 >> 5;
          uVar35 = (ulong)uVar10;
          uVar44 = uVar10 + uVar44;
          uVar45 = uVar44;
          if (0x53 < uVar44) {
            uVar45 = 0x54;
          }
          auStack_314[0] = uVar45;
          if ((uVar46 & 0x1f) == 0) {
            if (uVar10 != 0x54) {
              lVar51 = (ulong)uVar45 - (ulong)uVar10;
              param_3 = (ulong *)(lVar51 * 4);
              puVar28 = puVar42;
              _memmove(puVar42 + ((ulong)uVar45 - lVar51));
            }
          }
          else {
            if (uVar46 < 0xa60) {
              uVar4 = uVar44;
              if (0x52 < uVar44) {
                uVar4 = 0x53;
              }
              uVar38 = (ulong)uVar4;
              uVar53 = uVar35;
              if (uVar38 - 1 <= uVar35) {
                uVar53 = uVar38 - 1;
              }
              uVar53 = uVar38 - uVar53;
              if (3 < uVar53) {
                uVar47 = uVar53 & 0xfffffffffffffffc;
                bVar55 = (byte)uVar46;
                puVar30 = auStack_314 + uVar38;
                iVar34 = -(uint)(~bVar55 & 0x1f);
                iVar17 = -(uint)(~bVar55 & 0x1f);
                iVar18 = -(uint)(~bVar55 & 0x1f);
                uVar39 = uVar47;
                do {
                  puVar2 = puVar30 + -uVar35;
                  auVar11._5_3_ = 0;
                  auVar11._0_5_ = CONCAT14(bVar55,(uint)(bVar55 & 0x1f)) & 0x1fffffffff;
                  auVar11[8] = bVar55 & 0x1f;
                  auVar11._9_3_ = 0;
                  auVar11[0xc] = bVar55 & 0x1f;
                  auVar11._13_3_ = 0;
                  auVar56 = NEON_ushl(*(undefined1 (*) [16])(puVar2 + -2),auVar11,4);
                  auVar59._0_4_ = puVar2[-3] >> 1;
                  auVar59._4_4_ = puVar2[-2] >> 1;
                  auVar59._8_4_ = puVar2[-1] >> 1;
                  auVar59._12_4_ = *puVar2 >> 1;
                  auVar14[4] = (char)iVar34;
                  auVar14._0_4_ = -(uint)(~bVar55 & 0x1f);
                  auVar14[5] = (char)((uint)iVar34 >> 8);
                  auVar14[6] = (char)((uint)iVar34 >> 0x10);
                  auVar14[7] = (char)((uint)iVar34 >> 0x18);
                  auVar14[8] = (char)iVar17;
                  auVar14[9] = (char)((uint)iVar17 >> 8);
                  auVar14[10] = (char)((uint)iVar17 >> 0x10);
                  auVar14[0xb] = (char)((uint)iVar17 >> 0x18);
                  auVar14[0xc] = (char)iVar18;
                  auVar14[0xd] = (char)((uint)iVar18 >> 8);
                  auVar14[0xe] = (char)((uint)iVar18 >> 0x10);
                  auVar14[0xf] = (char)((uint)iVar18 >> 0x18);
                  auVar60 = NEON_ushl(auVar59,auVar14,4);
                  *(byte *)puVar30 = auVar56[8] | auVar60[8];
                  *(byte *)((long)puVar30 + 1) = auVar56[9] | auVar60[9];
                  *(byte *)((long)puVar30 + 2) = auVar56[10] | auVar60[10];
                  *(byte *)((long)puVar30 + 3) = auVar56[0xb] | auVar60[0xb];
                  *(byte *)(puVar30 + 1) = auVar56[0xc] | auVar60[0xc];
                  *(byte *)((long)puVar30 + 5) = auVar56[0xd] | auVar60[0xd];
                  *(byte *)((long)puVar30 + 6) = auVar56[0xe] | auVar60[0xe];
                  *(byte *)((long)puVar30 + 7) = auVar56[0xf] | auVar60[0xf];
                  *(byte *)(puVar30 + -2) = auVar56[0] | auVar60[0];
                  *(byte *)((long)puVar30 + -7) = auVar56[1] | auVar60[1];
                  *(byte *)((long)puVar30 + -6) = auVar56[2] | auVar60[2];
                  *(byte *)((long)puVar30 + -5) = auVar56[3] | auVar60[3];
                  *(byte *)(puVar30 + -1) = auVar56[4] | auVar60[4];
                  *(byte *)((long)puVar30 + -3) = auVar56[5] | auVar60[5];
                  *(byte *)((long)puVar30 + -2) = auVar56[6] | auVar60[6];
                  *(byte *)((long)puVar30 + -1) = auVar56[7] | auVar60[7];
                  puVar30 = puVar30 + -4;
                  uVar39 = uVar39 - 4;
                } while (uVar39 != 0);
                uVar38 = uVar38 - uVar47;
                if (uVar53 == uVar47) goto LAB_00571ad4;
              }
              lVar51 = uVar38 * 4 + uVar35 * -4;
              do {
                puVar42[uVar38] =
                     *(int *)((long)puVar42 + lVar51) << (ulong)(uVar46 & 0x1f) |
                     (*(uint *)((long)auStack_314 + lVar51) >> 1) >> (ulong)(~uVar46 & 0x1f);
                uVar38 = uVar38 - 1;
                lVar51 = lVar51 + -4;
              } while (uVar35 < uVar38);
            }
LAB_00571ad4:
            puVar42[uVar35] = auStack_314[1] << (ulong)(uVar46 & 0x1f);
            if ((uVar44 < 0x54) && (puVar42[uVar45] != 0)) {
              auStack_314[0] = uVar45 + 1;
            }
          }
          uVar44 = auStack_314[0];
          if (0x1f < uVar46) {
            puVar28 = (uint *)((ulong)(uVar10 - 1) * 4 + 4);
            _bzero(puVar42);
            uVar44 = auStack_314[0];
          }
        }
        else {
          puVar28 = (uint *)(ulong)(uVar44 << 2);
          _bzero();
          auStack_314[0] = 0;
          uVar44 = auStack_314[0];
        }
      }
    }
    else {
      uVar46 = uVar46 - (param_2 + -1);
      if (uVar46 < 0xa80) {
        uVar4 = uVar46 >> 5;
        uVar35 = (ulong)uVar4;
        uVar45 = auStack_1c0[0] + uVar4;
        uVar10 = uVar45;
        if (0x53 < (int)uVar45) {
          uVar10 = 0x54;
        }
        auStack_1c0[0] = uVar10;
        if ((uVar46 & 0x1f) == 0) {
          if (uVar10 != uVar4) {
            puVar28 = (uint *)((ulong)auStack_1c0 | 4);
            param_3 = (ulong *)(((long)(int)uVar10 - (ulong)uVar4) * 4);
            _memmove(puVar28 + ((long)(int)uVar10 - ((long)(int)uVar10 - (ulong)uVar4)));
          }
        }
        else {
          uVar3 = uVar45;
          if (0x52 < (int)uVar45) {
            uVar3 = 0x53;
          }
          uVar53 = (ulong)uVar3;
          if ((int)uVar4 < (int)uVar3) {
            uVar38 = uVar35;
            if (uVar53 - 1 <= uVar35) {
              uVar38 = uVar53 - 1;
            }
            uVar38 = uVar53 - uVar38;
            if (3 < uVar38) {
              uVar47 = uVar38 & 0xfffffffffffffffc;
              bVar55 = (byte)uVar46;
              pbVar32 = (byte *)((long)auStack_1c0 + uVar53 * 4);
              iVar34 = -(uint)(~bVar55 & 0x1f);
              iVar17 = -(uint)(~bVar55 & 0x1f);
              iVar18 = -(uint)(~bVar55 & 0x1f);
              uVar39 = uVar47;
              do {
                puVar42 = (uint *)(pbVar32 + uVar35 * 0xfffffffffffffffc);
                auVar56._5_3_ = 0;
                auVar56._0_5_ = CONCAT14(bVar55,(uint)(bVar55 & 0x1f)) & 0x1fffffffff;
                auVar56[8] = bVar55 & 0x1f;
                auVar56._9_3_ = 0;
                auVar56[0xc] = bVar55 & 0x1f;
                auVar56._13_3_ = 0;
                auVar56 = NEON_ushl(*(undefined1 (*) [16])(puVar42 + -2),auVar56,4);
                auVar58._0_4_ = puVar42[-3] >> 1;
                auVar58._4_4_ = puVar42[-2] >> 1;
                auVar58._8_4_ = puVar42[-1] >> 1;
                auVar58._12_4_ = *puVar42 >> 1;
                auVar60[4] = (char)iVar34;
                auVar60._0_4_ = -(uint)(~bVar55 & 0x1f);
                auVar60[5] = (char)((uint)iVar34 >> 8);
                auVar60[6] = (char)((uint)iVar34 >> 0x10);
                auVar60[7] = (char)((uint)iVar34 >> 0x18);
                auVar60[8] = (char)iVar17;
                auVar60[9] = (char)((uint)iVar17 >> 8);
                auVar60[10] = (char)((uint)iVar17 >> 0x10);
                auVar60[0xb] = (char)((uint)iVar17 >> 0x18);
                auVar60[0xc] = (char)iVar18;
                auVar60[0xd] = (char)((uint)iVar18 >> 8);
                auVar60[0xe] = (char)((uint)iVar18 >> 0x10);
                auVar60[0xf] = (char)((uint)iVar18 >> 0x18);
                auVar60 = NEON_ushl(auVar58,auVar60,4);
                *pbVar32 = auVar56[8] | auVar60[8];
                pbVar32[1] = auVar56[9] | auVar60[9];
                pbVar32[2] = auVar56[10] | auVar60[10];
                pbVar32[3] = auVar56[0xb] | auVar60[0xb];
                pbVar32[4] = auVar56[0xc] | auVar60[0xc];
                pbVar32[5] = auVar56[0xd] | auVar60[0xd];
                pbVar32[6] = auVar56[0xe] | auVar60[0xe];
                pbVar32[7] = auVar56[0xf] | auVar60[0xf];
                pbVar32[0xfffffffffffffff8] = auVar56[0] | auVar60[0];
                pbVar32[-7] = auVar56[1] | auVar60[1];
                pbVar32[-6] = auVar56[2] | auVar60[2];
                pbVar32[-5] = auVar56[3] | auVar60[3];
                pbVar32[0xfffffffffffffffc] = auVar56[4] | auVar60[4];
                pbVar32[-3] = auVar56[5] | auVar60[5];
                pbVar32[-2] = auVar56[6] | auVar60[6];
                pbVar32[-1] = auVar56[7] | auVar60[7];
                pbVar32 = pbVar32 + 0xfffffffffffffff0;
                uVar39 = uVar39 - 4;
              } while (uVar39 != 0);
              uVar53 = uVar53 - uVar47;
              if (uVar38 == uVar47) goto LAB_005719b8;
            }
            uVar38 = (ulong)auStack_1c0 | 4;
            lVar51 = uVar53 * 4 + uVar35 * -4;
            do {
              *(uint *)(uVar38 + uVar53 * 4) =
                   *(int *)(uVar38 + lVar51) << (ulong)(uVar46 & 0x1f) |
                   (*(uint *)((long)auStack_1c0 + lVar51) >> 1) >> (ulong)(~uVar46 & 0x1f);
              uVar53 = uVar53 - 1;
              lVar51 = lVar51 + -4;
            } while (uVar35 < uVar53);
          }
LAB_005719b8:
          *(uint *)(((ulong)auStack_1c0 | 4) + uVar35 * 4) =
               auStack_1c0[1] << (ulong)(uVar46 & 0x1f);
          if (((int)uVar45 < 0x54) &&
             (*(int *)(((ulong)auStack_1c0 | 4) + (long)(int)uVar10 * 4) != 0)) {
            auStack_1c0[0] = uVar10 + 1;
          }
        }
        if (0x1f < uVar46) {
          puVar28 = (uint *)((ulong)(uVar4 - 1) * 4 + 4);
          _bzero((ulong)auStack_1c0 | 4);
        }
      }
      else {
        if (0 < (int)auStack_1c0[0]) {
          puVar28 = (uint *)((ulong)auStack_1c0[0] << 2);
          _bzero((ulong)auStack_1c0 | 4);
        }
        auStack_1c0[0] = 0;
      }
    }
    uVar46 = auStack_1c0[0];
    if ((int)auStack_1c0[0] <= (int)uVar44) {
      uVar46 = uVar44;
    }
    uVar35 = (ulong)uVar46;
    do {
      iVar34 = (int)uVar35;
      if (iVar34 < 1) goto LAB_00571cd4;
      if ((int)auStack_1c0[0] < iVar34) {
        uVar46 = 0;
        if (iVar34 <= (int)uVar44) goto LAB_00571b6c;
LAB_00571b28:
        uVar45 = 0;
      }
      else {
        uVar46 = auStack_314[uVar35 + 0x55];
        if ((int)uVar44 < iVar34) goto LAB_00571b28;
LAB_00571b6c:
        uVar45 = auStack_314[uVar35];
        if (uVar46 < uVar45) goto LAB_00571ccc;
      }
      uVar35 = uVar35 - 1;
    } while (uVar46 <= uVar45);
  }
  uVar46 = 1;
  goto LAB_00571ce0;
LAB_00571cd4:
  uVar46 = 0;
  goto LAB_00571ce0;
LAB_00571ccc:
  uVar46 = 0xffffffff;
LAB_00571ce0:
  uVar44 = 1;
  if (uVar46 == 0) {
    uVar44 = (uint)param_1 & 1;
  }
  uVar45 = 0;
  if ((uVar46 & 0x80000000) == 0) {
    uVar45 = uVar44;
  }
  puVar31 = (ulong *)(ulong)uVar45;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar24 = &uStack_400;
  puVar30 = (uint *)&uStack_400;
  plVar25 = &uStack_400;
  puVar42 = (uint *)&uStack_400;
  puVar26 = &uStack_400;
  plVar27 = &uStack_400;
  lStack_388 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar23 = param_3;
  pcVar29 = (char *)puVar28;
  FUN_0053316c();
  uVar9 = uStack_400._7_1_;
  uVar20 = (undefined7)uStack_400;
  bVar55 = *(byte *)((long)param_3 + 0x17);
  puVar37 = param_3;
  if ((char)bVar55 < 0) {
    puVar37 = (ulong *)*param_3;
  }
  puVar41 = puVar37;
  puVar49 = puVar31;
  if ((puVar28 != (uint *)0x0) && (puVar37 == puVar31)) {
    do {
      if ((byte)*puVar49 == 0x5c) {
        if ((ulong *)((long)puVar31 + (long)puVar28) <= puVar49) goto LAB_005722cc;
        goto LAB_00571df4;
      }
      puVar36 = (ulong *)((long)puVar49 + 1);
      puVar43 = (ulong *)((long)puVar41 + 1);
      bVar22 = puVar49 == puVar41;
      puVar41 = puVar43;
      puVar49 = puVar36;
    } while ((bVar22) && (puVar36 < (ulong *)((long)puVar31 + (long)puVar28)));
  }
  if ((ulong *)((long)puVar31 + (long)puVar28) <= puVar49) {
LAB_005722cc:
    uVar35 = (long)puVar41 - (long)puVar37;
    if (((uint)(int)(char)bVar55 >> 7 & 1) == 0) {
LAB_005722d4:
      uStack_400._0_7_ = uVar20;
      uStack_400._7_1_ = uVar9;
      if (uVar35 <= bVar55) {
        *(byte *)((long)param_3 + 0x17) = (byte)uVar35;
        puVar42 = (uint *)pcVar29;
        goto LAB_00572304;
      }
    }
    else {
LAB_005722f0:
      uStack_400._0_7_ = uVar20;
      uStack_400._7_1_ = uVar9;
      if (uVar35 <= param_3[1]) {
        param_3[1] = uVar35;
        param_3 = (ulong *)*param_3;
        puVar42 = (uint *)pcVar29;
LAB_00572304:
        *(byte *)((long)param_3 + uVar35) = 0;
        puVar23 = (ulong *)((long)&MACH_HEADER.magic + 1);
        uStack_400._0_7_ = uVar20;
        uStack_400._7_1_ = uVar9;
LAB_005727dc:
        if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_388) {
          return;
        }
        ___stack_chk_fail();
        pcVar29 = (char *)puVar42;
      }
    }
    FUN_00461b78();
code_r0x00572844:
    FUN_0040d740();
    if ((char)bStack_3b9 < '\0') {
      __ZdlPv(uStack_3d0);
    }
    __Unwind_Resume();
    extraout_x8[0] = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    extraout_x8[3] = 0;
    extraout_x8[4] = 0;
    extraout_x8[5] = 0;
    extraout_x8[6] = 0;
    extraout_x8[7] = 0;
    extraout_x8[8] = 0;
    extraout_x8[9] = 0;
    extraout_x8[10] = 0;
    extraout_x8[0xb] = 0;
    extraout_x8[0xc] = 0;
    extraout_x8[0xd] = 0;
    extraout_x8[0xe] = 0;
    extraout_x8[0xf] = 0;
    extraout_x8[0x10] = 0;
    extraout_x8[0x11] = 0;
    extraout_x8[0x12] = 0;
    extraout_x8[0x13] = 0;
    extraout_x8[0x14] = 0;
    extraout_x8[0x15] = 0;
    extraout_x8[0x16] = 0;
    extraout_x8[0x17] = 0;
    puVar28 = (uint *)0x0;
    if ((uint *)pcVar29 != (uint *)0x0) {
      if ((uint *)pcVar29 == (uint *)((long)&MACH_HEADER.magic + 1)) {
        puVar28 = (uint *)0x0;
        puVar31 = puVar23;
      }
      else {
        lVar51 = 0;
        lVar54 = 0;
        puVar42 = (uint *)((ulong)pcVar29 & 0xfffffffffffffffe);
        puVar31 = (ulong *)((long)puVar23 + (long)puVar42);
        pbVar32 = (byte *)((long)puVar23 + 1);
        puVar28 = puVar42;
        do {
          lVar51 = lVar51 + (ulong)(byte)(&UNK_008140ce)[pbVar32[-1]];
          lVar54 = lVar54 + (ulong)(byte)(&UNK_008140ce)[*pbVar32];
          puVar28 = (uint *)((long)puVar28 + -2);
          pbVar32 = pbVar32 + 2;
        } while (puVar28 != (uint *)0x0);
        puVar28 = (uint *)(lVar54 + lVar51);
        if ((uint *)pcVar29 == puVar42) goto LAB_0057295c;
      }
      do {
        puVar37 = (ulong *)((long)puVar31 + 1);
        puVar28 = (uint *)((long)puVar28 + (ulong)(byte)(&UNK_008140ce)[(byte)*puVar31]);
        puVar31 = puVar37;
      } while (puVar37 != (ulong *)((long)puVar23 + (long)pcVar29));
    }
LAB_0057295c:
    if (puVar28 == (uint *)pcVar29) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (extraout_x8,puVar23,pcVar29);
    }
    else {
      FUN_0053316c(extraout_x8);
      if ((uint *)pcVar29 != (uint *)0x0) {
        pbVar32 = *(byte **)extraout_x8;
        if (-1 < (char)extraout_x8[0x17]) {
          pbVar32 = extraout_x8;
        }
        do {
          bVar55 = (byte)*puVar23;
          if ((&UNK_008140ce)[bVar55] == '\x02') {
            pbVar33 = pbVar32;
            if (bVar55 < 0x22) {
              if (bVar55 == 9) {
                pbVar32[0] = 0x5c;
                pbVar32[1] = 0x74;
                pbVar33 = pbVar32 + 2;
              }
              else if (bVar55 == 10) {
                pbVar32[0] = 0x5c;
                pbVar32[1] = 0x6e;
                pbVar33 = pbVar32 + 2;
              }
              else if (bVar55 == 0xd) {
                pbVar32[0] = 0x5c;
                pbVar32[1] = 0x72;
                pbVar33 = pbVar32 + 2;
              }
            }
            else if (bVar55 == 0x22) {
              pbVar33 = pbVar32 + 2;
              pbVar32[0] = 0x5c;
              pbVar32[1] = 0x22;
            }
            else if (bVar55 == 0x27) {
              pbVar33 = pbVar32 + 2;
              pbVar32[0] = 0x5c;
              pbVar32[1] = 0x27;
            }
            else if (bVar55 == 0x5c) {
              pbVar33 = pbVar32 + 2;
              pbVar32[0] = 0x5c;
              pbVar32[1] = 0x5c;
            }
          }
          else if ((&UNK_008140ce)[bVar55] == '\x01') {
            *pbVar32 = bVar55;
            pbVar33 = pbVar32 + 1;
          }
          else {
            *pbVar32 = 0x5c;
            pbVar32[1] = bVar55 >> 6 | 0x30;
            pbVar32[2] = bVar55 >> 3 & 7 | 0x30;
            pbVar32[3] = bVar55 & 7 | 0x30;
            pbVar33 = pbVar32 + 4;
          }
          puVar23 = (ulong *)((long)puVar23 + 1);
          pcVar29 = (char *)((long)pcVar29 + -1);
          pbVar32 = pbVar33;
        } while ((uint *)pcVar29 != (uint *)0x0);
      }
    }
    return;
  }
LAB_00571df4:
  puVar36 = (ulong *)((long)puVar31 + (long)puVar28);
  puVar43 = (ulong *)((long)puVar36 + -1);
  lVar51 = 1;
  lVar54 = 7;
LAB_00571e4c:
  pcVar29 = (char *)((long)&segment_command_00000020.cmd + 2);
  if ((byte)*puVar49 != 0x5c) {
    puVar40 = (ulong *)((long)puVar41 + 1);
    *(byte *)puVar41 = (byte)*puVar49;
    puVar52 = puVar49;
    goto code_r0x00571e40;
  }
  puVar1 = (ulong *)((long)puVar49 + 1);
  if (puVar43 < puVar1) {
    uStack_400._0_7_ = uVar20;
    uStack_400._7_1_ = uVar9;
    if (param_4 != (char *)0x0) {
      pcVar29 = "String cannot end with \\";
      goto code_r0x0057231c;
    }
    goto LAB_005727d8;
  }
  uVar46 = (uint)*(byte *)puVar1;
  if (0x56 < uVar46 - 0x22) {
LAB_005723e8:
    uStack_400._0_7_ = uVar20;
    uStack_400._7_1_ = uVar9;
    if (param_4 != (char *)0x0) {
      FUN_00551f98(&uStack_3d0,"Unknown escape sequence: \\");
      pcVar29 = (char *)(long)(char)*(byte *)puVar1;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(&uStack_3d0);
      bVar55 = bStack_3b9;
      uVar21 = uStack_3c0;
      uVar9 = uStack_3c1;
      uVar20 = uStack_3c8;
      pcVar5 = uStack_3d0;
      uStack_400._0_7_ = uStack_3c8;
      uStack_400._7_1_ = uStack_3c1;
      uStack_3f8 = uStack_3c0;
      uStack_3c8 = 0;
      uStack_3c1 = 0;
      uStack_3c0 = 0;
      bStack_3b9 = 0;
      uStack_3d0 = (char *)0x0;
      if (param_4[0x17] < '\0') {
        __ZdlPv(*(long *)param_4);
        *(char **)param_4 = pcVar5;
        *(qword *)(param_4 + 8) = CONCAT17(uStack_400._7_1_,(undefined7)uStack_400);
        *(ulong *)(param_4 + 0xf) = CONCAT71(uStack_3f8,uStack_400._7_1_);
        param_4[0x17] = bVar55;
        if ((char)bStack_3b9 < '\0') goto LAB_00572630;
        goto LAB_005727d8;
      }
      *(char **)param_4 = pcVar5;
      *(qword *)(param_4 + 8) = CONCAT17(uVar9,uVar20);
      *(ulong *)(param_4 + 0xf) = CONCAT71(uVar21,uVar9);
      param_4[0x17] = bVar55;
      puVar23 = (ulong *)0x0;
      puVar42 = (uint *)pcVar29;
      goto LAB_005727dc;
    }
    goto LAB_005727d8;
  }
  puVar23 = (ulong *)(ulong)*(ushort *)(&UNK_00814020 + (ulong)(uVar46 - 0x22) * 2);
  uStack_400._7_1_ = (undefined1)((ulong)puVar1 >> 0x38);
  uStack_400._0_7_ = SUB87(puVar1,0);
  switch(uVar46) {
  case 0x22:
    *(byte *)puVar41 = 0x22;
    break;
  default:
    goto LAB_005723e8;
  case 0x27:
    *(byte *)puVar41 = 0x27;
    break;
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
    uVar46 = uVar46 - 0x30;
    if (puVar1 < puVar43) {
      bVar22 = (*(byte *)((long)puVar49 + 2) & 0xf8) == 0x30;
      if (bVar22) {
        uVar46 = ((uint)*(byte *)((long)puVar49 + 2) + uVar46 * 8) - 0x30;
      }
      lVar50 = 1;
      if (bVar22) {
        lVar50 = 2;
      }
      puVar49 = (ulong *)((long)puVar49 + lVar50);
    }
    else {
      lVar50 = 1;
      puVar49 = (ulong *)((long)puVar49 + 1);
    }
    if (puVar49 < puVar43) {
      puVar52 = (ulong *)((long)puVar49 + 1);
      uVar44 = *(byte *)puVar52 & 0xf8;
      puVar23 = (ulong *)(ulong)uVar44;
      if (uVar44 == 0x30) {
        uVar46 = ((uint)*(byte *)puVar52 + uVar46 * 8) - 0x30;
        if (uVar46 < 0x100) {
          puVar40 = (ulong *)((long)puVar41 + 1);
          *(byte *)puVar41 = (byte)uVar46;
          goto code_r0x00571e40;
        }
        uStack_400._0_7_ = uVar20;
        uStack_400._7_1_ = uVar9;
        if (param_4 == (char *)0x0) goto LAB_005727d8;
        uVar35 = lVar50 + 1;
        uStack_3f0 = CONCAT17((char)uVar35,(undefined7)uStack_3f0);
        _memmove(&uStack_400,puVar1,uVar35);
        *(undefined1 *)((ulong)&uStack_400 | uVar35) = 0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (&uStack_400,0,"Value of \\",10);
        uStack_3d0 = (char *)*plVar24;
        uStack_3c0 = (undefined7)plVar24[2];
        bStack_3b9 = (byte)((ulong)plVar24[2] >> 0x38);
        uStack_3c8 = (undefined7)plVar24[1];
        uStack_3c1 = (undefined1)((ulong)plVar24[1] >> 0x38);
        plVar24[1] = 0;
        plVar24[2] = 0;
        *plVar24 = 0;
        pcVar29 = " exceeds 0xff";
        plVar24 = &uStack_3d0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (plVar24," exceeds 0xff",0xd);
code_r0x00572778:
        lVar51 = *plVar24;
        uStack_3a0 = (undefined7)plVar24[1];
        uStack_399 = (undefined1)((ulong)plVar24[1] >> 0x38);
        uStack_399 = (undefined1)*(undefined8 *)((long)plVar24 + 0xf);
        uStack_398 = (undefined7)((ulong)*(undefined8 *)((long)plVar24 + 0xf) >> 8);
        uVar9 = *(undefined1 *)((long)plVar24 + 0x17);
        plVar24[1] = 0;
        plVar24[2] = 0;
        *plVar24 = 0;
        if (param_4[0x17] < '\0') {
          __ZdlPv(*(long *)param_4);
        }
        *(long *)param_4 = lVar51;
        *(qword *)(param_4 + 8) = CONCAT17(uStack_399,uStack_3a0);
        *(ulong *)(param_4 + 0xf) = CONCAT71(uStack_398,uStack_399);
        param_4[0x17] = uVar9;
        if ((char)bStack_3b9 < '\0') {
          __ZdlPv(uStack_3d0);
        }
        if ((long)uStack_3f0 < 0) {
          __ZdlPv(CONCAT17(uStack_400._7_1_,(undefined7)uStack_400));
        }
        goto LAB_005727d8;
      }
    }
code_r0x00571f60:
    puVar40 = (ulong *)((long)puVar41 + 1);
    *(byte *)puVar41 = (byte)uVar46;
    puVar52 = puVar49;
    goto code_r0x00571e40;
  case 0x3f:
    *(byte *)puVar41 = 0x3f;
    break;
  case 0x55:
    puVar52 = (ulong *)((long)puVar49 + 9);
    if (puVar52 < puVar36) {
      bVar55 = *(byte *)((long)puVar49 + 2);
      if ((char)(&UNK_00811470)[bVar55] < '\0') {
        bVar6 = *(byte *)((long)puVar49 + 3);
        if ((char)(&UNK_00811470)[bVar6] < '\0') {
          uVar46 = bVar6 + 9;
          if (bVar6 < 0x3a) {
            uVar46 = (uint)bVar6;
          }
          uVar45 = (uint)bVar55 * 0x10;
          uVar44 = uVar45 + 0x90;
          if (bVar55 < 0x3a) {
            uVar44 = uVar45;
          }
          bVar55 = *(byte *)((long)puVar49 + 4);
          if ((char)(&UNK_00811470)[bVar55] < '\0') {
            bVar6 = *(byte *)((long)puVar49 + 5);
            if ((char)(&UNK_00811470)[bVar6] < '\0') {
              uVar45 = bVar6 + 9;
              if (bVar6 < 0x3a) {
                uVar45 = (uint)bVar6;
              }
              uVar4 = (uint)bVar55 * 0x10;
              uVar10 = uVar4 + 0x90;
              if (bVar55 < 0x3a) {
                uVar10 = uVar4;
              }
              bVar55 = *(byte *)((long)puVar49 + 6);
              if ((char)(&UNK_00811470)[bVar55] < '\0') {
                bVar6 = *(byte *)((long)puVar49 + 7);
                pcVar29 = (char *)(ulong)bVar6;
                if ((char)*(uint *)((long)pcVar29 + 0x811470) < '\0') {
                  uVar46 = uVar44 & 0xf0 | uVar46 & 0xf;
                  if (uVar46 < 0x11) {
                    uVar44 = bVar6 + 9;
                    if (bVar6 < 0x3a) {
                      uVar44 = (uint)bVar6;
                    }
                    uVar3 = (uint)bVar55 * 0x10;
                    uVar4 = uVar3 + 0x90;
                    if (bVar55 < 0x3a) {
                      uVar4 = uVar3;
                    }
                    bVar55 = (byte)puVar49[1];
                    pcVar29 = (char *)(long)(char)(&UNK_00811470)[bVar55];
                    if (-1 < (char)(&UNK_00811470)[bVar55]) {
                      lVar51 = 7;
                      goto code_r0x005725b0;
                    }
                    uVar45 = uVar10 & 0xf0 | uVar45 & 0xf;
                    uVar46 = uVar46 << 0x10 | uVar45 << 8;
                    if (uVar46 >> 0xc < 0x11) {
                      bVar6 = *(byte *)puVar52;
                      if (-1 < (char)(&UNK_00811470)[bVar6]) {
                        lVar51 = 8;
                        goto code_r0x005725b0;
                      }
                      if (uVar46 >> 8 < 0x11) {
                        uVar44 = uVar4 & 0xf0 | uVar44 & 0xf | uVar46;
                        bVar7 = bVar6 + 9;
                        if (bVar6 < 0x3a) {
                          bVar7 = bVar6;
                        }
                        uVar4 = (uint)bVar55 * 0x10;
                        uVar10 = uVar4 + 0x90;
                        puVar23 = (ulong *)(ulong)uVar10;
                        if (bVar55 < 0x3a) {
                          uVar10 = uVar4;
                        }
                        if ((param_4 != (char *)0x0) && ((uVar44 & 0x1ff8) == 0xd8)) {
                          uStack_3d0 = "invalid surrogate character (0xD800-DFFF): \\";
                          uStack_3c8 = 0x2c;
                          uStack_3c1 = 0;
                          uStack_3f8 = 9;
                          uStack_3f1 = 0;
                          FUN_00575d30(&uStack_3a0,&uStack_3d0);
                          goto code_r0x005726d0;
                        }
                        uStack_400._0_7_ = uVar20;
                        uStack_400._7_1_ = uVar9;
                        if ((uVar44 & 0x1ff8) != 0xd8) {
                          uVar4 = uVar10 & 0xf0 | uVar44 << 8;
                          bVar7 = bVar7 & 0xf;
                          bVar6 = (byte)(uVar10 & 0xf0);
                          bVar55 = bVar6 | bVar7;
                          if (uVar4 < 0x80) {
                            lVar50 = 1;
                          }
                          else if (uVar44 < 8) {
                            *(byte *)((long)puVar41 + 1) = bVar6 & 0x3f | bVar7 | 0x80;
                            bVar55 = (byte)(uVar4 >> 6) | 0xc0;
                            lVar50 = 2;
                          }
                          else {
                            bVar55 = bVar6 & 0x3f | bVar7 | 0x80;
                            bVar6 = (byte)(uVar4 >> 6) & 0x3f | 0x80;
                            if (uVar46 == 0) {
                              *(byte *)((long)puVar41 + 2) = bVar55;
                              *(byte *)((long)puVar41 + 1) = bVar6;
                              bVar55 = (byte)(uVar44 >> 4) | 0xe0;
                              lVar50 = 3;
                            }
                            else {
                              *(byte *)((long)puVar41 + 3) = bVar55;
                              *(byte *)((long)puVar41 + 2) = bVar6;
                              *(byte *)((long)puVar41 + 1) = (byte)(uVar44 >> 4) & 0x3f | 0x80;
                              bVar55 = (byte)(uVar45 >> 2) | 0xf0;
                              lVar50 = 4;
                            }
                          }
                          *(byte *)puVar41 = bVar55;
                          puVar40 = (ulong *)((long)puVar41 + lVar50);
                          goto code_r0x00571e40;
                        }
                        goto LAB_005727d8;
                      }
                      lVar54 = 9;
                    }
                    else {
                      lVar54 = 8;
                    }
                  }
                  uStack_400._0_7_ = uVar20;
                  uStack_400._7_1_ = uVar9;
                  if (param_4 != (char *)0x0) {
                    uStack_3f0 = CONCAT17((char)lVar54,(undefined7)uStack_3f0);
                    _memmove(&uStack_400,puVar1,lVar54);
                    *(undefined1 *)((long)&uStack_400 + lVar54) = 0;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                              (&uStack_400,0,"Value of \\",10);
                    uStack_3d0 = (char *)*plVar25;
                    uStack_3c0 = (undefined7)plVar25[2];
                    bStack_3b9 = (byte)((ulong)plVar25[2] >> 0x38);
                    uStack_3c8 = (undefined7)plVar25[1];
                    uStack_3c1 = (undefined1)((ulong)plVar25[1] >> 0x38);
                    plVar25[1] = 0;
                    plVar25[2] = 0;
                    *plVar25 = 0;
                    pcVar29 = " exceeds Unicode limit (0x10FFFF)";
                    plVar24 = &uStack_3d0;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (plVar24," exceeds Unicode limit (0x10FFFF)",0x21);
                    goto code_r0x00572778;
                  }
                  goto LAB_005727d8;
                }
                lVar51 = 6;
              }
              else {
                lVar51 = 5;
              }
            }
            else {
              lVar51 = 4;
            }
          }
          else {
            lVar51 = 3;
          }
        }
        else {
          lVar51 = 2;
        }
      }
code_r0x005725b0:
      uStack_400._0_7_ = uVar20;
      uStack_400._7_1_ = uVar9;
      if (param_4 != (char *)0x0) {
        bStack_3b9 = (byte)lVar51;
        _memmove(&uStack_3d0,puVar1,lVar51);
        *(undefined1 *)((long)&uStack_3d0 + lVar51) = 0;
        plVar24 = &uStack_3d0;
        pcVar29 = (char *)0x0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar24,0,"\\U must be followed by 8 hex digits: \\",0x26);
        goto code_r0x005725e8;
      }
    }
    else {
      uStack_400._0_7_ = uVar20;
      uStack_400._7_1_ = uVar9;
      if (param_4 != (char *)0x0) {
        bStack_3b9 = 1;
        uStack_3d0._0_2_ = (ushort)*(byte *)puVar1;
        plVar24 = &uStack_3d0;
        pcVar29 = (char *)0x0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar24,0,"\\U must be followed by 8 hex digits: \\",0x26);
        goto code_r0x005725e8;
      }
    }
    goto LAB_005727d8;
  case 0x58:
  case 0x78:
    if (puVar1 < puVar43) {
      if ((char)(&UNK_00811470)[*(byte *)((long)puVar49 + 2)] < '\0') {
        uVar46 = 0;
        pbVar32 = (byte *)((long)puVar28 + (long)puVar31) + (-2 - (long)puVar49);
        puVar52 = puVar1;
        do {
          bVar55 = *(byte *)((long)puVar52 + 1);
          puVar23 = (ulong *)(long)(char)(&UNK_00811470)[bVar55];
          puVar49 = puVar52;
          if (-1 < (char)(&UNK_00811470)[bVar55]) break;
          uVar44 = bVar55 + 9;
          puVar23 = (ulong *)(ulong)uVar44;
          if (bVar55 < 0x3a) {
            uVar44 = (uint)bVar55;
          }
          uVar46 = uVar44 & 0xf | uVar46 << 4;
          pbVar32 = pbVar32 + -1;
          puVar52 = (ulong *)((long)puVar52 + 1);
          puVar49 = (ulong *)((byte *)((long)puVar31 + (long)puVar28) + -1);
        } while (pbVar32 != (byte *)0x0);
        if (uVar46 < 0x100) goto code_r0x00571f60;
        uStack_400._0_7_ = uVar20;
        uStack_400._7_1_ = uVar9;
        if (param_4 == (char *)0x0) goto LAB_005727d8;
        pbVar32 = (byte *)((long)puVar49 + (1 - (long)puVar1));
        if (pbVar32 < (byte *)0x7ffffffffffffff7) {
          if (pbVar32 < (byte *)0x17) {
            uStack_3f0 = CONCAT17((char)pbVar32,(undefined7)uStack_3f0);
          }
          else {
            pdVar19 = &MACH_HEADER.flags;
            if ((dword *)((ulong)pbVar32 | 7) != (dword *)0x17) {
              pdVar19 = (dword *)((ulong)pbVar32 | 7);
            }
            puVar26 = (undefined8 *)((long)pdVar19 + 1);
            __Znwm();
            uStack_3f0 = (ulong)((long)pdVar19 + 1) | 0x8000000000000000;
            uStack_3f8 = SUB87(pbVar32,0);
            uStack_3f1 = (undefined1)((ulong)pbVar32 >> 0x38);
            uStack_400._0_7_ = SUB87(puVar26,0);
            uStack_400._7_1_ = (undefined1)((ulong)puVar26 >> 0x38);
          }
          _memmove(puVar26,puVar1,pbVar32);
          *(undefined1 *)((long)puVar26 + (long)pbVar32) = 0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (&uStack_400,0,"Value of \\",10);
          uStack_3d0 = (char *)*plVar27;
          uStack_3c0 = (undefined7)plVar27[2];
          bStack_3b9 = (byte)((ulong)plVar27[2] >> 0x38);
          uStack_3c8 = (undefined7)plVar27[1];
          uStack_3c1 = (undefined1)((ulong)plVar27[1] >> 0x38);
          plVar27[1] = 0;
          plVar27[2] = 0;
          *plVar27 = 0;
          pcVar29 = " exceeds 0xff";
          plVar24 = &uStack_3d0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (plVar24," exceeds 0xff",0xd);
          goto code_r0x00572778;
        }
        goto code_r0x00572844;
      }
      uStack_400._0_7_ = uVar20;
      uStack_400._7_1_ = uVar9;
      if (param_4 != (char *)0x0) {
        pcVar29 = "\\x cannot be followed by a non-hex digit";
        goto code_r0x0057231c;
      }
    }
    else {
      uStack_400._0_7_ = uVar20;
      uStack_400._7_1_ = uVar9;
      if (param_4 != (char *)0x0) {
        pcVar29 = "String cannot end with \\x";
code_r0x0057231c:
        uStack_400._0_7_ = uVar20;
        uStack_400._7_1_ = uVar9;
        FUN_00460cc0(param_4);
      }
    }
    goto LAB_005727d8;
  case 0x5c:
    *(byte *)puVar41 = 0x5c;
    break;
  case 0x61:
    *(byte *)puVar41 = 7;
    break;
  case 0x62:
    *(byte *)puVar41 = 8;
    break;
  case 0x66:
    *(byte *)puVar41 = 0xc;
    break;
  case 0x6e:
    *(byte *)puVar41 = 10;
    break;
  case 0x72:
    *(byte *)puVar41 = 0xd;
    break;
  case 0x74:
    *(byte *)puVar41 = 9;
    break;
  case 0x75:
    puVar52 = (ulong *)((long)puVar49 + 5);
    if (puVar36 <= puVar52) {
      uStack_400._0_7_ = uVar20;
      uStack_400._7_1_ = uVar9;
      if (param_4 != (char *)0x0) {
        bStack_3b9 = 1;
        uStack_3d0._0_2_ = (ushort)*(byte *)puVar1;
        plVar24 = &uStack_3d0;
        pcVar29 = (char *)0x0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar24,0,"\\u must be followed by 4 hex digits: \\",0x26);
        goto code_r0x005725e8;
      }
      goto LAB_005727d8;
    }
    bVar55 = *(byte *)((long)puVar49 + 2);
    if ((char)(&UNK_00811470)[bVar55] < '\0') {
      bVar6 = *(byte *)((long)puVar49 + 3);
      if ((char)(&UNK_00811470)[bVar6] < '\0') {
        bVar7 = *(byte *)((long)puVar49 + 4);
        if ((char)(&UNK_00811470)[bVar7] < '\0') {
          bVar8 = *(byte *)puVar52;
          puVar23 = (ulong *)(long)(char)(&UNK_00811470)[bVar8];
          if ((char)(&UNK_00811470)[bVar8] < '\0') {
            uVar46 = bVar6 + 9;
            if (bVar6 < 0x3a) {
              uVar46 = (uint)bVar6;
            }
            uVar45 = (uint)bVar55 * 0x10;
            uVar44 = uVar45 + 0x90;
            if (bVar55 < 0x3a) {
              uVar44 = uVar45;
            }
            uVar44 = uVar44 & 0xf0;
            uVar10 = uVar44 | uVar46 & 0xf;
            uVar4 = (uint)bVar7 * 0x10;
            uVar45 = uVar4 + 0x90;
            pcVar29 = (char *)(ulong)uVar45;
            if (bVar7 < 0x3a) {
              uVar45 = uVar4;
            }
            uVar4 = bVar8 + 9;
            if (bVar8 < 0x3a) {
              uVar4 = (uint)bVar8;
            }
            puVar23 = (ulong *)(ulong)uVar4;
            uVar46 = uVar44 | uVar46 & 8;
            if ((param_4 == (char *)0x0) || (uVar46 != 0xd8)) {
              uStack_400._0_7_ = uVar20;
              uStack_400._7_1_ = uVar9;
              if (uVar46 != 0xd8) {
                uVar46 = uVar45 & 0xf0 | uVar10 << 8;
                bVar55 = (byte)(uVar45 & 0xf0) | (byte)(uVar4 & 0xf);
                if (uVar46 < 0x80) {
                  lVar50 = 1;
                }
                else {
                  uVar45 = uVar45 & 0x30 | uVar4 & 0xf | 0xffffff80;
                  puVar23 = (ulong *)(ulong)uVar45;
                  bVar55 = (byte)uVar45;
                  if (uVar10 < 8) {
                    *(byte *)((long)puVar41 + 1) = bVar55;
                    bVar55 = (byte)(uVar46 >> 6) | 0xc0;
                    lVar50 = 2;
                  }
                  else {
                    *(byte *)((long)puVar41 + 2) = bVar55;
                    *(byte *)((long)puVar41 + 1) = (byte)(uVar46 >> 6) & 0x3f | 0x80;
                    bVar55 = (byte)(uVar44 >> 4) | 0xe0;
                    lVar50 = 3;
                  }
                }
                *(byte *)puVar41 = bVar55;
                puVar40 = (ulong *)((long)puVar41 + lVar50);
                goto code_r0x00571e40;
              }
              goto LAB_005727d8;
            }
            uStack_3d0 = "invalid surrogate character (0xD800-DFFF): \\";
            uStack_3c8 = 0x2c;
            uStack_3c1 = 0;
            uStack_3f8 = 5;
            uStack_3f1 = 0;
            FUN_00575d30(&uStack_3a0,&uStack_3d0);
            puVar42 = puVar30;
code_r0x005726d0:
            if (param_4[0x17] < '\0') {
              __ZdlPv(*(long *)param_4);
            }
            puVar23 = (ulong *)0x0;
            *(qword *)(param_4 + 8) = CONCAT17(uStack_391,uStack_398);
            *(long *)param_4 = CONCAT17(uStack_399,uStack_3a0);
            *(qword *)(param_4 + 0x10) = qStack_390;
            goto LAB_005727dc;
          }
        }
        else {
          puVar52 = (ulong *)((long)puVar49 + 4);
        }
      }
      else {
        puVar52 = (ulong *)((long)puVar49 + 3);
      }
    }
    else {
      puVar52 = (ulong *)((long)puVar49 + 2);
    }
    uStack_400._0_7_ = uVar20;
    uStack_400._7_1_ = uVar9;
    if (param_4 == (char *)0x0) goto LAB_005727d8;
    uVar35 = (long)puVar52 - (long)puVar1;
    if (0x7ffffffffffffff6 < uVar35) goto code_r0x00572844;
    if (uVar35 < 0x17) {
      bStack_3b9 = (byte)uVar35;
      pcVar29 = (char *)&uStack_3d0;
    }
    else {
      pdVar19 = &MACH_HEADER.flags;
      if ((dword *)(uVar35 | 7) != (dword *)0x17) {
        pdVar19 = (dword *)(uVar35 | 7);
      }
      pcVar5 = (char *)((long)pdVar19 + 1);
      pcVar29 = pcVar5;
      __Znwm();
      bStack_3b9 = (byte)((ulong)pcVar5 >> 0x38) | 0x80;
      uStack_3c8 = (undefined7)uVar35;
      uStack_3c1 = (undefined1)(uVar35 >> 0x38);
      uStack_3c0 = SUB87(pcVar5,0);
      uStack_3d0 = pcVar29;
    }
    _memmove(pcVar29,puVar1,uVar35);
    pcVar29[uVar35] = '\0';
    plVar24 = &uStack_3d0;
    pcVar29 = (char *)0x0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (plVar24,0,"\\u must be followed by 4 hex digits: \\",0x26);
code_r0x005725e8:
    lVar51 = *plVar24;
    uStack_400._0_7_ = (undefined7)plVar24[1];
    uStack_400._7_1_ = (undefined1)*(undefined8 *)((long)plVar24 + 0xf);
    uStack_3f8 = (undefined7)((ulong)*(undefined8 *)((long)plVar24 + 0xf) >> 8);
    uVar9 = *(undefined1 *)((long)plVar24 + 0x17);
    plVar24[1] = 0;
    plVar24[2] = 0;
    *plVar24 = 0;
    if (param_4[0x17] < '\0') {
      __ZdlPv(*(long *)param_4);
    }
    *(long *)param_4 = lVar51;
    *(qword *)(param_4 + 8) = CONCAT17(uStack_400._7_1_,(undefined7)uStack_400);
    *(ulong *)(param_4 + 0xf) = CONCAT71(uStack_3f8,uStack_400._7_1_);
    param_4[0x17] = uVar9;
    if (-1 < (char)bStack_3b9) goto LAB_005727d8;
LAB_00572630:
    __ZdlPv(uStack_3d0);
LAB_005727d8:
    puVar23 = (ulong *)0x0;
    puVar42 = (uint *)pcVar29;
    goto LAB_005727dc;
  case 0x76:
    *(byte *)puVar41 = 0xb;
  }
  puVar40 = (ulong *)((long)puVar41 + 1);
  puVar52 = puVar1;
code_r0x00571e40:
  pcVar29 = (char *)((long)&segment_command_00000020.cmd + 2);
  puVar49 = (ulong *)((long)puVar52 + 1);
  puVar41 = puVar40;
  if (puVar36 <= puVar49) goto LAB_005722e4;
  goto LAB_00571e4c;
LAB_005722e4:
  bVar55 = *(byte *)((long)param_3 + 0x17);
  uVar35 = (long)puVar40 - (long)puVar37;
  if (-1 < (char)bVar55) goto LAB_005722d4;
  goto LAB_005722f0;
}



/* Entry: 00571d34; end: 005728bb;  */

void FUN_00571d34(byte *param_1,char *param_2,byte *param_3,long *param_4)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  dword *pdVar11;
  undefined7 uVar12;
  undefined7 uVar13;
  bool bVar14;
  byte *pbVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  long *plVar19;
  char *pcVar20;
  char *pcVar21;
  ulong uVar22;
  byte *extraout_x8;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  char *pcVar28;
  byte bVar29;
  byte *pbVar30;
  uint uVar31;
  char *pcVar32;
  long lVar33;
  byte *pbVar34;
  long lVar35;
  long lVar36;
  undefined8 uStack_e0;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  undefined8 uStack_d0;
  undefined8 uStack_b0;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  byte bStack_99;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  undefined1 uStack_71;
  long lStack_70;
  long lStack_68;
  
  plVar16 = &uStack_e0;
  pcVar28 = (char *)&uStack_e0;
  plVar17 = &uStack_e0;
  pcVar21 = (char *)&uStack_e0;
  puVar18 = &uStack_e0;
  plVar19 = &uStack_e0;
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar15 = param_3;
  pcVar20 = param_2;
  FUN_0053316c();
  uVar7 = uStack_e0._7_1_;
  uVar12 = (undefined7)uStack_e0;
  bVar29 = param_3[0x17];
  pbVar23 = param_3;
  if ((char)bVar29 < 0) {
    pbVar23 = *(byte **)param_3;
  }
  pbVar27 = pbVar23;
  pbVar25 = param_1;
  if ((param_2 != (char *)0x0) && (pbVar23 == param_1)) {
    do {
      if (*pbVar25 == 0x5c) {
        if (pbVar25 < param_1 + (long)param_2) goto LAB_00571df4;
        goto LAB_005722cc;
      }
      pbVar24 = pbVar25 + 1;
      pbVar30 = pbVar27 + 1;
      bVar14 = pbVar25 == pbVar27;
      pbVar27 = pbVar30;
      pbVar25 = pbVar24;
    } while ((bVar14) && (pbVar24 < param_1 + (long)param_2));
  }
  if (param_1 + (long)param_2 <= pbVar25) {
LAB_005722cc:
    uVar22 = (long)pbVar27 - (long)pbVar23;
    if (((uint)(int)(char)bVar29 >> 7 & 1) == 0) goto LAB_005722d4;
    goto LAB_005722f0;
  }
LAB_00571df4:
  pbVar24 = param_1 + (long)param_2;
  pbVar30 = pbVar24 + -1;
  lVar35 = 1;
  lVar36 = 7;
LAB_00571e4c:
  pcVar20 = (char *)((long)&segment_command_00000020.cmd + 2);
  if (*pbVar25 != 0x5c) {
    pbVar26 = pbVar27 + 1;
    *pbVar27 = *pbVar25;
    pbVar34 = pbVar25;
    goto code_r0x00571e40;
  }
  pbVar2 = pbVar25 + 1;
  if (pbVar30 < pbVar2) {
    uStack_e0._0_7_ = uVar12;
    uStack_e0._7_1_ = uVar7;
    if (param_4 != (long *)0x0) {
      pcVar20 = "String cannot end with \\";
      goto code_r0x0057231c;
    }
    goto LAB_005727d8;
  }
  uVar31 = (uint)*pbVar2;
  if (0x56 < uVar31 - 0x22) {
LAB_005723e8:
    uStack_e0._0_7_ = uVar12;
    uStack_e0._7_1_ = uVar7;
    if (param_4 == (long *)0x0) goto LAB_005727d8;
    FUN_00551f98(&uStack_b0,"Unknown escape sequence: \\");
    pcVar20 = (char *)(long)(char)*pbVar2;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(&uStack_b0);
    bVar29 = bStack_99;
    uVar13 = uStack_a0;
    uVar7 = uStack_a1;
    uVar12 = uStack_a8;
    pcVar21 = uStack_b0;
    uStack_e0._0_7_ = uStack_a8;
    uStack_e0._7_1_ = uStack_a1;
    uStack_d8 = uStack_a0;
    uStack_a8 = 0;
    uStack_a1 = 0;
    uStack_a0 = 0;
    bStack_99 = 0;
    uStack_b0 = (char *)0x0;
    if (-1 < *(char *)((long)param_4 + 0x17)) {
      *param_4 = (long)pcVar21;
      param_4[1] = CONCAT17(uVar7,uVar12);
      *(ulong *)((long)param_4 + 0xf) = CONCAT71(uVar13,uVar7);
      *(byte *)((long)param_4 + 0x17) = bVar29;
      pbVar15 = (byte *)0x0;
      pcVar21 = pcVar20;
      goto LAB_005727dc;
    }
    __ZdlPv(*param_4);
    *param_4 = (long)pcVar21;
    param_4[1] = CONCAT17(uStack_e0._7_1_,(undefined7)uStack_e0);
    *(ulong *)((long)param_4 + 0xf) = CONCAT71(uStack_d8,uStack_e0._7_1_);
    *(byte *)((long)param_4 + 0x17) = bVar29;
    if ((char)bStack_99 < '\0') goto LAB_00572630;
    goto LAB_005727d8;
  }
  pbVar15 = (byte *)(ulong)*(ushort *)(&UNK_00814020 + (ulong)(uVar31 - 0x22) * 2);
  uStack_e0._7_1_ = (undefined1)((ulong)pbVar2 >> 0x38);
  uStack_e0._0_7_ = SUB87(pbVar2,0);
  switch(uVar31) {
  case 0x22:
    *pbVar27 = 0x22;
    break;
  default:
    goto LAB_005723e8;
  case 0x27:
    *pbVar27 = 0x27;
    break;
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
    uVar31 = uVar31 - 0x30;
    if (pbVar2 < pbVar30) {
      bVar14 = (pbVar25[2] & 0xf8) == 0x30;
      if (bVar14) {
        uVar31 = ((uint)pbVar25[2] + uVar31 * 8) - 0x30;
      }
      lVar33 = 1;
      if (bVar14) {
        lVar33 = 2;
      }
      pbVar25 = pbVar25 + lVar33;
    }
    else {
      lVar33 = 1;
      pbVar25 = pbVar25 + 1;
    }
    if (pbVar25 < pbVar30) {
      pbVar34 = pbVar25 + 1;
      uVar1 = *pbVar34 & 0xf8;
      pbVar15 = (byte *)(ulong)uVar1;
      if (uVar1 == 0x30) {
        uVar31 = ((uint)*pbVar34 + uVar31 * 8) - 0x30;
        if (uVar31 < 0x100) {
          pbVar26 = pbVar27 + 1;
          *pbVar27 = (byte)uVar31;
          goto code_r0x00571e40;
        }
        uStack_e0._0_7_ = uVar12;
        uStack_e0._7_1_ = uVar7;
        if (param_4 == (long *)0x0) goto LAB_005727d8;
        uVar22 = lVar33 + 1;
        uStack_d0 = CONCAT17((char)uVar22,(undefined7)uStack_d0);
        _memmove(&uStack_e0,pbVar2,uVar22);
        *(undefined1 *)((ulong)&uStack_e0 | uVar22) = 0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (&uStack_e0,0,"Value of \\",10);
        uStack_b0 = (char *)*plVar16;
        uStack_a0 = (undefined7)plVar16[2];
        bStack_99 = (byte)((ulong)plVar16[2] >> 0x38);
        uStack_a8 = (undefined7)plVar16[1];
        uStack_a1 = (undefined1)((ulong)plVar16[1] >> 0x38);
        plVar16[1] = 0;
        plVar16[2] = 0;
        *plVar16 = 0;
        pcVar20 = " exceeds 0xff";
        plVar16 = &uStack_b0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (plVar16," exceeds 0xff",0xd);
code_r0x00572778:
        lVar35 = *plVar16;
        uStack_80 = (undefined7)plVar16[1];
        uStack_79 = (undefined1)((ulong)plVar16[1] >> 0x38);
        uStack_79 = (undefined1)*(undefined8 *)((long)plVar16 + 0xf);
        uStack_78 = (undefined7)((ulong)*(undefined8 *)((long)plVar16 + 0xf) >> 8);
        uVar7 = *(undefined1 *)((long)plVar16 + 0x17);
        plVar16[1] = 0;
        plVar16[2] = 0;
        *plVar16 = 0;
        if (*(char *)((long)param_4 + 0x17) < '\0') {
          __ZdlPv(*param_4);
        }
        *param_4 = lVar35;
        param_4[1] = CONCAT17(uStack_79,uStack_80);
        *(ulong *)((long)param_4 + 0xf) = CONCAT71(uStack_78,uStack_79);
        *(undefined1 *)((long)param_4 + 0x17) = uVar7;
        if ((char)bStack_99 < '\0') {
          __ZdlPv(uStack_b0);
        }
        if ((long)uStack_d0 < 0) {
          __ZdlPv(CONCAT17(uStack_e0._7_1_,(undefined7)uStack_e0));
        }
        goto LAB_005727d8;
      }
    }
code_r0x00571f60:
    pbVar26 = pbVar27 + 1;
    *pbVar27 = (byte)uVar31;
    pbVar34 = pbVar25;
    goto code_r0x00571e40;
  case 0x3f:
    *pbVar27 = 0x3f;
    break;
  case 0x55:
    pbVar34 = pbVar25 + 9;
    if (pbVar34 < pbVar24) {
      bVar29 = pbVar25[2];
      if ((char)(&UNK_00811470)[bVar29] < '\0') {
        bVar4 = pbVar25[3];
        if ((char)(&UNK_00811470)[bVar4] < '\0') {
          uVar31 = bVar4 + 9;
          if (bVar4 < 0x3a) {
            uVar31 = (uint)bVar4;
          }
          uVar8 = (uint)bVar29 * 0x10;
          uVar1 = uVar8 + 0x90;
          if (bVar29 < 0x3a) {
            uVar1 = uVar8;
          }
          bVar29 = pbVar25[4];
          if ((char)(&UNK_00811470)[bVar29] < '\0') {
            bVar4 = pbVar25[5];
            if ((char)(&UNK_00811470)[bVar4] < '\0') {
              uVar8 = bVar4 + 9;
              if (bVar4 < 0x3a) {
                uVar8 = (uint)bVar4;
              }
              uVar9 = (uint)bVar29 * 0x10;
              uVar3 = uVar9 + 0x90;
              if (bVar29 < 0x3a) {
                uVar3 = uVar9;
              }
              bVar29 = pbVar25[6];
              if ((char)(&UNK_00811470)[bVar29] < '\0') {
                bVar4 = pbVar25[7];
                pcVar20 = (char *)(ulong)bVar4;
                if (pcVar20[0x811470] < '\0') {
                  uVar31 = uVar1 & 0xf0 | uVar31 & 0xf;
                  if (uVar31 < 0x11) {
                    uVar1 = bVar4 + 9;
                    if (bVar4 < 0x3a) {
                      uVar1 = (uint)bVar4;
                    }
                    uVar10 = (uint)bVar29 * 0x10;
                    uVar9 = uVar10 + 0x90;
                    if (bVar29 < 0x3a) {
                      uVar9 = uVar10;
                    }
                    bVar29 = pbVar25[8];
                    pcVar20 = (char *)(long)(char)(&UNK_00811470)[bVar29];
                    if (-1 < (char)(&UNK_00811470)[bVar29]) {
                      lVar35 = 7;
                      goto code_r0x005725b0;
                    }
                    uVar8 = uVar3 & 0xf0 | uVar8 & 0xf;
                    uVar31 = uVar31 << 0x10 | uVar8 << 8;
                    if (uVar31 >> 0xc < 0x11) {
                      bVar4 = *pbVar34;
                      if (-1 < (char)(&UNK_00811470)[bVar4]) {
                        lVar35 = 8;
                        goto code_r0x005725b0;
                      }
                      if (uVar31 >> 8 < 0x11) {
                        uVar1 = uVar9 & 0xf0 | uVar1 & 0xf | uVar31;
                        bVar5 = bVar4 + 9;
                        if (bVar4 < 0x3a) {
                          bVar5 = bVar4;
                        }
                        uVar9 = (uint)bVar29 * 0x10;
                        uVar3 = uVar9 + 0x90;
                        pbVar15 = (byte *)(ulong)uVar3;
                        if (bVar29 < 0x3a) {
                          uVar3 = uVar9;
                        }
                        if ((param_4 != (long *)0x0) && ((uVar1 & 0x1ff8) == 0xd8)) {
                          uStack_b0 = "invalid surrogate character (0xD800-DFFF): \\";
                          uStack_a8 = 0x2c;
                          uStack_a1 = 0;
                          uStack_d8 = 9;
                          uStack_d1 = 0;
                          FUN_00575d30(&uStack_80,&uStack_b0);
                          goto code_r0x005726d0;
                        }
                        uStack_e0._0_7_ = uVar12;
                        uStack_e0._7_1_ = uVar7;
                        if ((uVar1 & 0x1ff8) != 0xd8) {
                          uVar9 = uVar3 & 0xf0 | uVar1 << 8;
                          bVar5 = bVar5 & 0xf;
                          bVar4 = (byte)(uVar3 & 0xf0);
                          bVar29 = bVar4 | bVar5;
                          if (uVar9 < 0x80) {
                            lVar33 = 1;
                          }
                          else if (uVar1 < 8) {
                            pbVar27[1] = bVar4 & 0x3f | bVar5 | 0x80;
                            bVar29 = (byte)(uVar9 >> 6) | 0xc0;
                            lVar33 = 2;
                          }
                          else {
                            bVar29 = bVar4 & 0x3f | bVar5 | 0x80;
                            bVar4 = (byte)(uVar9 >> 6) & 0x3f | 0x80;
                            if (uVar31 == 0) {
                              pbVar27[2] = bVar29;
                              pbVar27[1] = bVar4;
                              bVar29 = (byte)(uVar1 >> 4) | 0xe0;
                              lVar33 = 3;
                            }
                            else {
                              pbVar27[3] = bVar29;
                              pbVar27[2] = bVar4;
                              pbVar27[1] = (byte)(uVar1 >> 4) & 0x3f | 0x80;
                              bVar29 = (byte)(uVar8 >> 2) | 0xf0;
                              lVar33 = 4;
                            }
                          }
                          *pbVar27 = bVar29;
                          pbVar26 = pbVar27 + lVar33;
                          goto code_r0x00571e40;
                        }
                        goto LAB_005727d8;
                      }
                      lVar36 = 9;
                    }
                    else {
                      lVar36 = 8;
                    }
                  }
                  uStack_e0._0_7_ = uVar12;
                  uStack_e0._7_1_ = uVar7;
                  if (param_4 != (long *)0x0) {
                    uStack_d0 = CONCAT17((char)lVar36,(undefined7)uStack_d0);
                    _memmove(&uStack_e0,pbVar2,lVar36);
                    *(undefined1 *)((long)&uStack_e0 + lVar36) = 0;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                              (&uStack_e0,0,"Value of \\",10);
                    uStack_b0 = (char *)*plVar17;
                    uStack_a0 = (undefined7)plVar17[2];
                    bStack_99 = (byte)((ulong)plVar17[2] >> 0x38);
                    uStack_a8 = (undefined7)plVar17[1];
                    uStack_a1 = (undefined1)((ulong)plVar17[1] >> 0x38);
                    plVar17[1] = 0;
                    plVar17[2] = 0;
                    *plVar17 = 0;
                    pcVar20 = " exceeds Unicode limit (0x10FFFF)";
                    plVar16 = &uStack_b0;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (plVar16," exceeds Unicode limit (0x10FFFF)",0x21);
                    goto code_r0x00572778;
                  }
                  goto LAB_005727d8;
                }
                lVar35 = 6;
              }
              else {
                lVar35 = 5;
              }
            }
            else {
              lVar35 = 4;
            }
          }
          else {
            lVar35 = 3;
          }
        }
        else {
          lVar35 = 2;
        }
      }
code_r0x005725b0:
      uStack_e0._0_7_ = uVar12;
      uStack_e0._7_1_ = uVar7;
      if (param_4 != (long *)0x0) {
        bStack_99 = (byte)lVar35;
        _memmove(&uStack_b0,pbVar2,lVar35);
        *(undefined1 *)((long)&uStack_b0 + lVar35) = 0;
        plVar16 = &uStack_b0;
        pcVar20 = (char *)0x0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar16,0,"\\U must be followed by 8 hex digits: \\",0x26);
        goto code_r0x005725e8;
      }
    }
    else {
      uStack_e0._0_7_ = uVar12;
      uStack_e0._7_1_ = uVar7;
      if (param_4 != (long *)0x0) {
        bStack_99 = 1;
        uStack_b0._0_2_ = (ushort)*pbVar2;
        plVar16 = &uStack_b0;
        pcVar20 = (char *)0x0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar16,0,"\\U must be followed by 8 hex digits: \\",0x26);
        goto code_r0x005725e8;
      }
    }
    goto LAB_005727d8;
  case 0x58:
  case 0x78:
    if (pbVar2 < pbVar30) {
      if (-1 < (char)(&UNK_00811470)[pbVar25[2]]) {
        uStack_e0._0_7_ = uVar12;
        uStack_e0._7_1_ = uVar7;
        if (param_4 != (long *)0x0) {
          pcVar20 = "\\x cannot be followed by a non-hex digit";
          goto code_r0x0057231c;
        }
        goto LAB_005727d8;
      }
      uVar31 = 0;
      pcVar32 = param_2 + (long)param_1 + (-2 - (long)pbVar25);
      pbVar34 = pbVar2;
      do {
        bVar29 = pbVar34[1];
        pbVar15 = (byte *)(long)(char)(&UNK_00811470)[bVar29];
        pbVar25 = pbVar34;
        if (-1 < (char)(&UNK_00811470)[bVar29]) break;
        uVar1 = bVar29 + 9;
        pbVar15 = (byte *)(ulong)uVar1;
        if (bVar29 < 0x3a) {
          uVar1 = (uint)bVar29;
        }
        uVar31 = uVar1 & 0xf | uVar31 << 4;
        pcVar32 = pcVar32 + -1;
        pbVar34 = pbVar34 + 1;
        pbVar25 = param_1 + (long)param_2 + -1;
      } while (pcVar32 != (char *)0x0);
      if (uVar31 < 0x100) goto code_r0x00571f60;
      uStack_e0._0_7_ = uVar12;
      uStack_e0._7_1_ = uVar7;
      if (param_4 != (long *)0x0) {
        pbVar25 = pbVar25 + (1 - (long)pbVar2);
        if (pbVar25 < (byte *)0x7ffffffffffffff7) {
          if (pbVar25 < (byte *)0x17) {
            uStack_d0 = CONCAT17((char)pbVar25,(undefined7)uStack_d0);
          }
          else {
            pdVar11 = &MACH_HEADER.flags;
            if ((dword *)((ulong)pbVar25 | 7) != (dword *)0x17) {
              pdVar11 = (dword *)((ulong)pbVar25 | 7);
            }
            puVar18 = (undefined8 *)((long)pdVar11 + 1);
            __Znwm();
            uStack_d0 = (ulong)((long)pdVar11 + 1) | 0x8000000000000000;
            uStack_d8 = SUB87(pbVar25,0);
            uStack_d1 = (undefined1)((ulong)pbVar25 >> 0x38);
            uStack_e0._0_7_ = SUB87(puVar18,0);
            uStack_e0._7_1_ = (undefined1)((ulong)puVar18 >> 0x38);
          }
          _memmove(puVar18,pbVar2,pbVar25);
          *(undefined1 *)((long)puVar18 + (long)pbVar25) = 0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (&uStack_e0,0,"Value of \\",10);
          uStack_b0 = (char *)*plVar19;
          uStack_a0 = (undefined7)plVar19[2];
          bStack_99 = (byte)((ulong)plVar19[2] >> 0x38);
          uStack_a8 = (undefined7)plVar19[1];
          uStack_a1 = (undefined1)((ulong)plVar19[1] >> 0x38);
          plVar19[1] = 0;
          plVar19[2] = 0;
          *plVar19 = 0;
          pcVar20 = " exceeds 0xff";
          plVar16 = &uStack_b0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (plVar16," exceeds 0xff",0xd);
          goto code_r0x00572778;
        }
        goto code_r0x00572844;
      }
    }
    else {
      uStack_e0._0_7_ = uVar12;
      uStack_e0._7_1_ = uVar7;
      if (param_4 != (long *)0x0) {
        pcVar20 = "String cannot end with \\x";
code_r0x0057231c:
        uStack_e0._0_7_ = uVar12;
        uStack_e0._7_1_ = uVar7;
        FUN_00460cc0(param_4);
      }
    }
    goto LAB_005727d8;
  case 0x5c:
    *pbVar27 = 0x5c;
    break;
  case 0x61:
    *pbVar27 = 7;
    break;
  case 0x62:
    *pbVar27 = 8;
    break;
  case 0x66:
    *pbVar27 = 0xc;
    break;
  case 0x6e:
    *pbVar27 = 10;
    break;
  case 0x72:
    *pbVar27 = 0xd;
    break;
  case 0x74:
    *pbVar27 = 9;
    break;
  case 0x75:
    pbVar34 = pbVar25 + 5;
    if (pbVar24 <= pbVar34) {
      uStack_e0._0_7_ = uVar12;
      uStack_e0._7_1_ = uVar7;
      if (param_4 != (long *)0x0) {
        bStack_99 = 1;
        uStack_b0._0_2_ = (ushort)*pbVar2;
        plVar16 = &uStack_b0;
        pcVar20 = (char *)0x0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar16,0,"\\u must be followed by 4 hex digits: \\",0x26);
        goto code_r0x005725e8;
      }
      goto LAB_005727d8;
    }
    bVar29 = pbVar25[2];
    if ((char)(&UNK_00811470)[bVar29] < '\0') {
      bVar4 = pbVar25[3];
      if ((char)(&UNK_00811470)[bVar4] < '\0') {
        bVar5 = pbVar25[4];
        if ((char)(&UNK_00811470)[bVar5] < '\0') {
          bVar6 = *pbVar34;
          pbVar15 = (byte *)(long)(char)(&UNK_00811470)[bVar6];
          if ((char)(&UNK_00811470)[bVar6] < '\0') {
            uVar31 = bVar4 + 9;
            if (bVar4 < 0x3a) {
              uVar31 = (uint)bVar4;
            }
            uVar8 = (uint)bVar29 * 0x10;
            uVar1 = uVar8 + 0x90;
            if (bVar29 < 0x3a) {
              uVar1 = uVar8;
            }
            uVar1 = uVar1 & 0xf0;
            uVar3 = uVar1 | uVar31 & 0xf;
            uVar9 = (uint)bVar5 * 0x10;
            uVar8 = uVar9 + 0x90;
            pcVar20 = (char *)(ulong)uVar8;
            if (bVar5 < 0x3a) {
              uVar8 = uVar9;
            }
            uVar9 = bVar6 + 9;
            if (bVar6 < 0x3a) {
              uVar9 = (uint)bVar6;
            }
            pbVar15 = (byte *)(ulong)uVar9;
            uVar31 = uVar1 | uVar31 & 8;
            if ((param_4 == (long *)0x0) || (uVar31 != 0xd8)) {
              uStack_e0._0_7_ = uVar12;
              uStack_e0._7_1_ = uVar7;
              if (uVar31 != 0xd8) {
                uVar31 = uVar8 & 0xf0 | uVar3 << 8;
                bVar29 = (byte)(uVar8 & 0xf0) | (byte)(uVar9 & 0xf);
                if (uVar31 < 0x80) {
                  lVar33 = 1;
                }
                else {
                  uVar8 = uVar8 & 0x30 | uVar9 & 0xf | 0xffffff80;
                  pbVar15 = (byte *)(ulong)uVar8;
                  bVar29 = (byte)uVar8;
                  if (uVar3 < 8) {
                    pbVar27[1] = bVar29;
                    bVar29 = (byte)(uVar31 >> 6) | 0xc0;
                    lVar33 = 2;
                  }
                  else {
                    pbVar27[2] = bVar29;
                    pbVar27[1] = (byte)(uVar31 >> 6) & 0x3f | 0x80;
                    bVar29 = (byte)(uVar1 >> 4) | 0xe0;
                    lVar33 = 3;
                  }
                }
                *pbVar27 = bVar29;
                pbVar26 = pbVar27 + lVar33;
                goto code_r0x00571e40;
              }
              goto LAB_005727d8;
            }
            uStack_b0 = "invalid surrogate character (0xD800-DFFF): \\";
            uStack_a8 = 0x2c;
            uStack_a1 = 0;
            uStack_d8 = 5;
            uStack_d1 = 0;
            FUN_00575d30(&uStack_80,&uStack_b0);
            pcVar21 = pcVar28;
code_r0x005726d0:
            if (*(char *)((long)param_4 + 0x17) < '\0') {
              __ZdlPv(*param_4);
            }
            pbVar15 = (byte *)0x0;
            param_4[1] = CONCAT17(uStack_71,uStack_78);
            *param_4 = CONCAT17(uStack_79,uStack_80);
            param_4[2] = lStack_70;
            goto LAB_005727dc;
          }
        }
        else {
          pbVar34 = pbVar25 + 4;
        }
      }
      else {
        pbVar34 = pbVar25 + 3;
      }
    }
    else {
      pbVar34 = pbVar25 + 2;
    }
    uStack_e0._0_7_ = uVar12;
    uStack_e0._7_1_ = uVar7;
    if (param_4 == (long *)0x0) goto LAB_005727d8;
    uVar22 = (long)pbVar34 - (long)pbVar2;
    if (0x7ffffffffffffff6 < uVar22) goto code_r0x00572844;
    if (uVar22 < 0x17) {
      bStack_99 = (byte)uVar22;
      pcVar20 = (char *)&uStack_b0;
    }
    else {
      pdVar11 = &MACH_HEADER.flags;
      if ((dword *)(uVar22 | 7) != (dword *)0x17) {
        pdVar11 = (dword *)(uVar22 | 7);
      }
      pcVar21 = (char *)((long)pdVar11 + 1);
      pcVar20 = pcVar21;
      __Znwm();
      bStack_99 = (byte)((ulong)pcVar21 >> 0x38) | 0x80;
      uStack_a8 = (undefined7)uVar22;
      uStack_a1 = (undefined1)(uVar22 >> 0x38);
      uStack_a0 = SUB87(pcVar21,0);
      uStack_b0 = pcVar20;
    }
    _memmove(pcVar20,pbVar2,uVar22);
    pcVar20[uVar22] = '\0';
    plVar16 = &uStack_b0;
    pcVar20 = (char *)0x0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (plVar16,0,"\\u must be followed by 4 hex digits: \\",0x26);
code_r0x005725e8:
    lVar35 = *plVar16;
    uStack_e0._0_7_ = (undefined7)plVar16[1];
    uStack_e0._7_1_ = (undefined1)*(undefined8 *)((long)plVar16 + 0xf);
    uStack_d8 = (undefined7)((ulong)*(undefined8 *)((long)plVar16 + 0xf) >> 8);
    uVar7 = *(undefined1 *)((long)plVar16 + 0x17);
    plVar16[1] = 0;
    plVar16[2] = 0;
    *plVar16 = 0;
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      __ZdlPv(*param_4);
    }
    *param_4 = lVar35;
    param_4[1] = CONCAT17(uStack_e0._7_1_,(undefined7)uStack_e0);
    *(ulong *)((long)param_4 + 0xf) = CONCAT71(uStack_d8,uStack_e0._7_1_);
    *(undefined1 *)((long)param_4 + 0x17) = uVar7;
    if (-1 < (char)bStack_99) goto LAB_005727d8;
LAB_00572630:
    __ZdlPv(uStack_b0);
LAB_005727d8:
    pbVar15 = (byte *)0x0;
    pcVar21 = pcVar20;
    goto LAB_005727dc;
  case 0x76:
    *pbVar27 = 0xb;
  }
  pbVar26 = pbVar27 + 1;
  pbVar34 = pbVar2;
code_r0x00571e40:
  pcVar20 = (char *)((long)&segment_command_00000020.cmd + 2);
  pbVar25 = pbVar34 + 1;
  pbVar27 = pbVar26;
  if (pbVar24 <= pbVar25) goto LAB_005722e4;
  goto LAB_00571e4c;
LAB_005722e4:
  bVar29 = param_3[0x17];
  uVar22 = (long)pbVar26 - (long)pbVar23;
  if ((char)bVar29 < '\0') {
LAB_005722f0:
    uStack_e0._0_7_ = uVar12;
    uStack_e0._7_1_ = uVar7;
    if (uVar22 <= *(ulong *)(param_3 + 8)) {
      *(ulong *)(param_3 + 8) = uVar22;
      param_3 = *(byte **)param_3;
      pcVar21 = pcVar20;
LAB_00572304:
      param_3[uVar22] = 0;
      pbVar15 = (byte *)((long)&MACH_HEADER.magic + 1);
      uStack_e0._0_7_ = uVar12;
      uStack_e0._7_1_ = uVar7;
LAB_005727dc:
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
        return;
      }
      ___stack_chk_fail();
      pcVar20 = pcVar21;
    }
  }
  else {
LAB_005722d4:
    uStack_e0._0_7_ = uVar12;
    uStack_e0._7_1_ = uVar7;
    if (uVar22 <= bVar29) {
      param_3[0x17] = (byte)uVar22;
      pcVar21 = pcVar20;
      goto LAB_00572304;
    }
  }
  FUN_00461b78();
code_r0x00572844:
  FUN_0040d740();
  if ((char)bStack_99 < '\0') {
    __ZdlPv(uStack_b0);
  }
  __Unwind_Resume();
  extraout_x8[0] = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  extraout_x8[3] = 0;
  extraout_x8[4] = 0;
  extraout_x8[5] = 0;
  extraout_x8[6] = 0;
  extraout_x8[7] = 0;
  extraout_x8[8] = 0;
  extraout_x8[9] = 0;
  extraout_x8[10] = 0;
  extraout_x8[0xb] = 0;
  extraout_x8[0xc] = 0;
  extraout_x8[0xd] = 0;
  extraout_x8[0xe] = 0;
  extraout_x8[0xf] = 0;
  extraout_x8[0x10] = 0;
  extraout_x8[0x11] = 0;
  extraout_x8[0x12] = 0;
  extraout_x8[0x13] = 0;
  extraout_x8[0x14] = 0;
  extraout_x8[0x15] = 0;
  extraout_x8[0x16] = 0;
  extraout_x8[0x17] = 0;
  pcVar21 = (char *)0x0;
  if (pcVar20 != (char *)0x0) {
    if (pcVar20 == (char *)((long)&MACH_HEADER.magic + 1)) {
      pcVar21 = (char *)0x0;
      pbVar23 = pbVar15;
    }
    else {
      lVar35 = 0;
      lVar36 = 0;
      pcVar28 = (char *)((ulong)pcVar20 & 0xfffffffffffffffe);
      pbVar23 = pbVar15 + (long)pcVar28;
      pbVar25 = pbVar15 + 1;
      pcVar21 = pcVar28;
      do {
        lVar35 = lVar35 + (ulong)(byte)(&UNK_008140ce)[pbVar25[-1]];
        lVar36 = lVar36 + (ulong)(byte)(&UNK_008140ce)[*pbVar25];
        pcVar21 = pcVar21 + -2;
        pbVar25 = pbVar25 + 2;
      } while (pcVar21 != (char *)0x0);
      pcVar21 = (char *)(lVar36 + lVar35);
      if (pcVar20 == pcVar28) goto LAB_0057295c;
    }
    do {
      pbVar25 = pbVar23 + 1;
      pcVar21 = pcVar21 + (byte)(&UNK_008140ce)[*pbVar23];
      pbVar23 = pbVar25;
    } while (pbVar25 != pbVar15 + (long)pcVar20);
  }
LAB_0057295c:
  if (pcVar21 == pcVar20) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (extraout_x8,pbVar15,pcVar20);
  }
  else {
    FUN_0053316c(extraout_x8);
    if (pcVar20 != (char *)0x0) {
      pbVar23 = *(byte **)extraout_x8;
      if (-1 < (char)extraout_x8[0x17]) {
        pbVar23 = extraout_x8;
      }
      do {
        bVar29 = *pbVar15;
        if ((&UNK_008140ce)[bVar29] == '\x02') {
          pbVar25 = pbVar23;
          if (bVar29 < 0x22) {
            if (bVar29 == 9) {
              pbVar23[0] = 0x5c;
              pbVar23[1] = 0x74;
              pbVar25 = pbVar23 + 2;
            }
            else if (bVar29 == 10) {
              pbVar23[0] = 0x5c;
              pbVar23[1] = 0x6e;
              pbVar25 = pbVar23 + 2;
            }
            else if (bVar29 == 0xd) {
              pbVar23[0] = 0x5c;
              pbVar23[1] = 0x72;
              pbVar25 = pbVar23 + 2;
            }
          }
          else if (bVar29 == 0x22) {
            pbVar25 = pbVar23 + 2;
            pbVar23[0] = 0x5c;
            pbVar23[1] = 0x22;
          }
          else if (bVar29 == 0x27) {
            pbVar25 = pbVar23 + 2;
            pbVar23[0] = 0x5c;
            pbVar23[1] = 0x27;
          }
          else if (bVar29 == 0x5c) {
            pbVar25 = pbVar23 + 2;
            pbVar23[0] = 0x5c;
            pbVar23[1] = 0x5c;
          }
        }
        else if ((&UNK_008140ce)[bVar29] == '\x01') {
          *pbVar23 = bVar29;
          pbVar25 = pbVar23 + 1;
        }
        else {
          *pbVar23 = 0x5c;
          pbVar23[1] = bVar29 >> 6 | 0x30;
          pbVar23[2] = bVar29 >> 3 & 7 | 0x30;
          pbVar23[3] = bVar29 & 7 | 0x30;
          pbVar25 = pbVar23 + 4;
        }
        pbVar15 = pbVar15 + 1;
        pcVar20 = pcVar20 + -1;
        pbVar23 = pbVar25;
      } while (pcVar20 != (char *)0x0);
    }
  }
  return;
}



/* Entry: 005728bc; end: 00572aa7;  */

void FUN_005728bc(byte *param_1,byte *param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  uVar2 = 0;
  if (param_3 != 0) {
    if (param_3 == 1) {
      uVar2 = 0;
      pbVar3 = param_2;
    }
    else {
      lVar6 = 0;
      lVar7 = 0;
      uVar5 = param_3 & 0xfffffffffffffffe;
      pbVar3 = param_2 + uVar5;
      pbVar4 = param_2 + 1;
      uVar2 = uVar5;
      do {
        lVar6 = lVar6 + (ulong)(byte)(&UNK_008140ce)[pbVar4[-1]];
        lVar7 = lVar7 + (ulong)(byte)(&UNK_008140ce)[*pbVar4];
        uVar2 = uVar2 - 2;
        pbVar4 = pbVar4 + 2;
      } while (uVar2 != 0);
      uVar2 = lVar7 + lVar6;
      if (param_3 == uVar5) goto LAB_0057295c;
    }
    do {
      pbVar4 = pbVar3 + 1;
      uVar2 = uVar2 + (byte)(&UNK_008140ce)[*pbVar3];
      pbVar3 = pbVar4;
    } while (pbVar4 != param_2 + param_3);
  }
LAB_0057295c:
  if (uVar2 == param_3) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,param_2,param_3);
  }
  else {
    FUN_0053316c(param_1);
    if (param_3 != 0) {
      pbVar3 = *(byte **)param_1;
      if (-1 < (char)param_1[0x17]) {
        pbVar3 = param_1;
      }
      do {
        bVar1 = *param_2;
        if ((&UNK_008140ce)[bVar1] == '\x02') {
          pbVar4 = pbVar3;
          if (bVar1 < 0x22) {
            if (bVar1 == 9) {
              pbVar3[0] = 0x5c;
              pbVar3[1] = 0x74;
              pbVar4 = pbVar3 + 2;
            }
            else if (bVar1 == 10) {
              pbVar3[0] = 0x5c;
              pbVar3[1] = 0x6e;
              pbVar4 = pbVar3 + 2;
            }
            else if (bVar1 == 0xd) {
              pbVar3[0] = 0x5c;
              pbVar3[1] = 0x72;
              pbVar4 = pbVar3 + 2;
            }
          }
          else if (bVar1 == 0x22) {
            pbVar4 = pbVar3 + 2;
            pbVar3[0] = 0x5c;
            pbVar3[1] = 0x22;
          }
          else if (bVar1 == 0x27) {
            pbVar4 = pbVar3 + 2;
            pbVar3[0] = 0x5c;
            pbVar3[1] = 0x27;
          }
          else if (bVar1 == 0x5c) {
            pbVar4 = pbVar3 + 2;
            pbVar3[0] = 0x5c;
            pbVar3[1] = 0x5c;
          }
        }
        else if ((&UNK_008140ce)[bVar1] == '\x01') {
          *pbVar3 = bVar1;
          pbVar4 = pbVar3 + 1;
        }
        else {
          *pbVar3 = 0x5c;
          pbVar3[1] = bVar1 >> 6 | 0x30;
          pbVar3[2] = bVar1 >> 3 & 7 | 0x30;
          pbVar3[3] = bVar1 & 7 | 0x30;
          pbVar4 = pbVar3 + 4;
        }
        param_2 = param_2 + 1;
        param_3 = param_3 - 1;
        pbVar3 = pbVar4;
      } while (param_3 != 0);
    }
  }
  return;
}



/* Entry: 00572aa8; end: 00572ab3;  */

/* WARNING: Removing unreachable block (ram,0x00572c90) */
/* WARNING: Removing unreachable block (ram,0x00572cbc) */
/* WARNING: Removing unreachable block (ram,0x00572c74) */
/* WARNING: Removing unreachable block (ram,0x00572cc4) */
/* WARNING: Removing unreachable block (ram,0x00572d54) */
/* WARNING: Removing unreachable block (ram,0x00572ccc) */
/* WARNING: Removing unreachable block (ram,0x00572cd4) */
/* WARNING: Removing unreachable block (ram,0x00572c9c) */
/* WARNING: Removing unreachable block (ram,0x00572cdc) */
/* WARNING: Removing unreachable block (ram,0x00572ca4) */
/* WARNING: Removing unreachable block (ram,0x00572d4c) */
/* WARNING: Removing unreachable block (ram,0x00572cac) */
/* WARNING: Removing unreachable block (ram,0x00572c78) */
/* WARNING: Removing unreachable block (ram,0x00572cb8) */
/* WARNING: Removing unreachable block (ram,0x00572ce8) */
/* WARNING: Removing unreachable block (ram,0x00572cf0) */
/* WARNING: Removing unreachable block (ram,0x00572d00) */
/* WARNING: Removing unreachable block (ram,0x00572d3c) */
/* WARNING: Removing unreachable block (ram,0x00572c84) */
/* WARNING: Removing unreachable block (ram,0x00572afc) */
/* WARNING: Removing unreachable block (ram,0x00572b24) */
/* WARNING: Removing unreachable block (ram,0x00572b30) */
/* WARNING: Removing unreachable block (ram,0x00572b70) */
/* WARNING: Removing unreachable block (ram,0x00572b38) */
/* WARNING: Removing unreachable block (ram,0x00572bb8) */
/* WARNING: Removing unreachable block (ram,0x00572b40) */
/* WARNING: Removing unreachable block (ram,0x00572b4c) */
/* WARNING: Removing unreachable block (ram,0x00572b50) */
/* WARNING: Removing unreachable block (ram,0x00572b78) */
/* WARNING: Removing unreachable block (ram,0x00572b58) */
/* WARNING: Removing unreachable block (ram,0x00572bc0) */
/* WARNING: Removing unreachable block (ram,0x00572b60) */
/* WARNING: Removing unreachable block (ram,0x00572b80) */
/* WARNING: Removing unreachable block (ram,0x00572b84) */
/* WARNING: Removing unreachable block (ram,0x00572b94) */
/* WARNING: Removing unreachable block (ram,0x00572b98) */
/* WARNING: Removing unreachable block (ram,0x00572ba8) */
/* WARNING: Removing unreachable block (ram,0x00572be4) */
/* WARNING: Removing unreachable block (ram,0x00572c38) */
/* WARNING: Removing unreachable block (ram,0x00572b68) */
/* WARNING: Removing unreachable block (ram,0x00572bc4) */
/* WARNING: Removing unreachable block (ram,0x00572bd0) */
/* WARNING: Removing unreachable block (ram,0x00572be0) */
/* WARNING: Removing unreachable block (ram,0x00572c3c) */
/* WARNING: Removing unreachable block (ram,0x00572c70) */
/* WARNING: Removing unreachable block (ram,0x00572d78) */
/* WARNING: Removing unreachable block (ram,0x00572da4) */
/* WARNING: Removing unreachable block (ram,0x00572d5c) */
/* WARNING: Removing unreachable block (ram,0x00572dac) */
/* WARNING: Removing unreachable block (ram,0x00572e30) */
/* WARNING: Removing unreachable block (ram,0x00572db4) */
/* WARNING: Removing unreachable block (ram,0x00572dbc) */
/* WARNING: Removing unreachable block (ram,0x00572d84) */
/* WARNING: Removing unreachable block (ram,0x00572dc4) */
/* WARNING: Removing unreachable block (ram,0x00572d8c) */
/* WARNING: Removing unreachable block (ram,0x00572e28) */
/* WARNING: Removing unreachable block (ram,0x00572d94) */
/* WARNING: Removing unreachable block (ram,0x00572d60) */
/* WARNING: Removing unreachable block (ram,0x00572da0) */
/* WARNING: Removing unreachable block (ram,0x00572dd0) */
/* WARNING: Removing unreachable block (ram,0x00572ddc) */
/* WARNING: Removing unreachable block (ram,0x00572e18) */
/* WARNING: Removing unreachable block (ram,0x00572d6c) */

void FUN_00572aa8(undefined8 *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  char *pcVar2;
  bool bVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    bVar3 = false;
    do {
      while( true ) {
        bVar1 = *param_2;
        if (bVar1 < 0x22) break;
        if (bVar1 == 0x22) {
          pcVar2 = "\\\"";
        }
        else if (bVar1 == 0x27) {
          pcVar2 = "\\\'";
        }
        else {
          if (bVar1 != 0x5c) goto LAB_00572ec0;
          pcVar2 = "\\\\";
        }
LAB_00572f00:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_1,pcVar2,2);
LAB_00572f0c:
        bVar3 = false;
        param_2 = param_2 + 1;
        param_3 = param_3 + -1;
        if (param_3 == 0) {
          return;
        }
      }
      if (bVar1 == 9) {
        pcVar2 = "\\t";
        goto LAB_00572f00;
      }
      pcVar2 = "\\n";
      if ((bVar1 == 10) || (pcVar2 = "\\r", bVar1 == 0xd)) goto LAB_00572f00;
LAB_00572ec0:
      if (((byte)(bVar1 - 0x20) < 0x5f) && ((!bVar3 || (-1 < (char)(&UNK_00811470)[bVar1])))) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (param_1,(int)(char)bVar1);
        goto LAB_00572f0c;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_1,"\\x",2);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_1,(long)(char)(&UNK_00814a8a)[bVar1 >> 4]);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_1,(long)(char)(&UNK_00814a8a)[(ulong)bVar1 & 0xf]);
      bVar3 = true;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 00572ab4; end: 00572fb7;  */

void FUN_00572ab4(undefined8 *param_1,byte *param_2,long param_3,int param_4,uint param_5)

{
  char *pcVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    if (param_4 == 0) {
      if ((param_5 & 1) == 0) {
        do {
          bVar3 = *param_2;
          uVar4 = (uint)bVar3;
          if (bVar3 < 0x22) {
            if (uVar4 == 9) {
              pcVar1 = "\\t";
              goto LAB_00572d60;
            }
            pcVar1 = "\\n";
            if ((bVar3 == 10) || (pcVar1 = "\\r", bVar3 == 0xd)) goto LAB_00572d60;
LAB_00572dd0:
            if (0x5e < uVar4 - 0x20) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (param_1,"\\",1);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (param_1,(long)(char)(&UNK_00814a8a)[bVar3 >> 6]);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (param_1,(long)(char)(&UNK_00814a8a)[(ulong)(bVar3 >> 3) & 7]);
              bVar3 = (&UNK_00814a8a)[(ulong)bVar3 & 7];
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (param_1,(int)(char)bVar3);
          }
          else {
            if (bVar3 == 0x22) {
              pcVar1 = "\\\"";
            }
            else if (bVar3 == 0x27) {
              pcVar1 = "\\\'";
            }
            else {
              if (uVar4 != 0x5c) goto LAB_00572dd0;
              pcVar1 = "\\\\";
            }
LAB_00572d60:
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (param_1,pcVar1,2);
          }
          param_2 = param_2 + 1;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
      else {
        do {
          bVar3 = *param_2;
          if (bVar3 < 0x22) {
            if (bVar3 == 9) {
              pcVar1 = "\\t";
              goto LAB_00572c78;
            }
            pcVar1 = "\\n";
            if ((bVar3 == 10) || (pcVar1 = "\\r", bVar3 == 0xd)) goto LAB_00572c78;
LAB_00572ce8:
            if ((-1 < (char)bVar3) && (0x5e < ((int)(char)bVar3 - 0x20U & 0xff))) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (param_1,"\\",1);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (param_1,(long)(char)(&UNK_00814a8a)[bVar3 >> 6]);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (param_1,(long)(char)(&UNK_00814a8a)[(ulong)(bVar3 >> 3) & 7]);
              bVar3 = (&UNK_00814a8a)[(ulong)bVar3 & 7];
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (param_1,(int)(char)bVar3);
          }
          else {
            if (bVar3 == 0x22) {
              pcVar1 = "\\\"";
            }
            else if (bVar3 == 0x27) {
              pcVar1 = "\\\'";
            }
            else {
              if (bVar3 != 0x5c) goto LAB_00572ce8;
              pcVar1 = "\\\\";
            }
LAB_00572c78:
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (param_1,pcVar1,2);
          }
          param_2 = param_2 + 1;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
    }
    else {
      bVar2 = false;
      if ((param_5 & 1) == 0) {
        do {
          while( true ) {
            bVar3 = *param_2;
            if (bVar3 < 0x22) break;
            if (bVar3 == 0x22) {
              pcVar1 = "\\\"";
            }
            else if (bVar3 == 0x27) {
              pcVar1 = "\\\'";
            }
            else {
              if (bVar3 != 0x5c) goto LAB_00572ec0;
              pcVar1 = "\\\\";
            }
LAB_00572f00:
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (param_1,pcVar1,2);
LAB_00572f0c:
            bVar2 = false;
            param_2 = param_2 + 1;
            param_3 = param_3 + -1;
            if (param_3 == 0) {
              return;
            }
          }
          if (bVar3 == 9) {
            pcVar1 = "\\t";
            goto LAB_00572f00;
          }
          pcVar1 = "\\n";
          if ((bVar3 == 10) || (pcVar1 = "\\r", bVar3 == 0xd)) goto LAB_00572f00;
LAB_00572ec0:
          if (((byte)(bVar3 - 0x20) < 0x5f) && ((!bVar2 || (-1 < (char)(&UNK_00811470)[bVar3])))) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (param_1,(int)(char)bVar3);
            goto LAB_00572f0c;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (param_1,"\\x",2);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (param_1,(long)(char)(&UNK_00814a8a)[bVar3 >> 4]);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (param_1,(long)(char)(&UNK_00814a8a)[(ulong)bVar3 & 0xf]);
          bVar2 = true;
          param_2 = param_2 + 1;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
      else {
        do {
          while( true ) {
            bVar3 = *param_2;
            if (bVar3 < 0x22) break;
            if (bVar3 == 0x22) {
              pcVar1 = "\\\"";
            }
            else if (bVar3 == 0x27) {
              pcVar1 = "\\\'";
            }
            else {
              if (bVar3 != 0x5c) goto LAB_00572b80;
              pcVar1 = "\\\\";
            }
LAB_00572bc4:
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (param_1,pcVar1,2);
LAB_00572bd0:
            bVar2 = false;
            param_2 = param_2 + 1;
            param_3 = param_3 + -1;
            if (param_3 == 0) {
              return;
            }
          }
          if (bVar3 == 9) {
            pcVar1 = "\\t";
            goto LAB_00572bc4;
          }
          pcVar1 = "\\n";
          if ((bVar3 == 10) || (pcVar1 = "\\r", bVar3 == 0xd)) goto LAB_00572bc4;
LAB_00572b80:
          if (((char)bVar3 < '\0') ||
             (((byte)(bVar3 - 0x20) < 0x5f && ((!bVar2 || (-1 < (char)(&UNK_00811470)[bVar3])))))) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (param_1,(int)(char)bVar3);
            goto LAB_00572bd0;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (param_1,"\\x",2);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (param_1,(long)(char)(&UNK_00814a8a)[bVar3 >> 4]);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (param_1,(long)(char)(&UNK_00814a8a)[(ulong)bVar3 & 0xf]);
          bVar2 = true;
          param_2 = param_2 + 1;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
    }
  }
  return;
}



/* Entry: 00572fb8; end: 005730b3;  */

void FUN_00572fb8(long *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar4 = (param_3 / 3) * 4;
  if (param_3 % 3 != 0) {
    lVar4 = lVar4 + 4;
  }
  FUN_0053316c(param_3 % 3,param_1,lVar4);
  uVar1 = param_1[1];
  plVar2 = (long *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    plVar2 = param_1;
  }
  FUN_0057679c(param_2,param_3,plVar2,uVar1,&UNK_008151dc,1);
  if ((long)*(char *)((long)param_1 + 0x17) < 0) {
    if (param_2 <= (ulong)param_1[1]) {
      param_1[1] = param_2;
      *(undefined1 *)(*param_1 + param_2) = 0;
      return;
    }
  }
  else if (param_2 <= (ulong)(long)*(char *)((long)param_1 + 0x17)) {
    *(char *)((long)param_1 + 0x17) = (char)param_2;
    *(undefined1 *)((long)param_1 + param_2) = 0;
    return;
  }
  FUN_00461b78();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x573098);
  (*pcVar3)();
}



/* Entry: 005730b4; end: 0057313f;  */

void FUN_005730b4(undefined8 *param_1,byte *param_2,long param_3)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_0053316c(param_1,param_3 << 1);
  if (param_3 != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      puVar1 = param_1;
    }
    do {
      *(undefined2 *)puVar1 = *(undefined2 *)(&UNK_00814a9b + (ulong)*param_2 * 2);
      param_3 = param_3 + -1;
      puVar1 = (undefined8 *)((long)puVar1 + 2);
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 00573140; end: 00573527;  */

ulong FUN_00573140(uint *param_1,char *param_2,char *param_3,int param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  char cVar13;
  char *pcVar14;
  char *pcVar15;
  uint uVar16;
  
  if (0 < (int)*param_1) {
    _bzero(param_1 + 1,(ulong)*param_1 << 2);
  }
  *param_1 = 0;
  uVar5 = (long)param_2 - (long)param_3;
  iVar3 = (int)param_3;
  pcVar14 = param_2;
  if (param_2 < param_3) {
    uVar16 = iVar3 - (int)param_2;
    uVar10 = (ulong)uVar16 & 3;
    if ((uVar16 & 3) != 0) {
      do {
        pcVar14 = param_2;
        if (*param_2 != '0') goto LAB_005731b8;
        param_2 = param_2 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    pcVar14 = param_3;
    if (uVar5 < 0xfffffffffffffffd) {
      param_2 = param_2 + 3;
      while( true ) {
        if (param_2[-3] != '0') {
          pcVar14 = param_2 + -3;
          goto LAB_005731b8;
        }
        if (param_2[-2] != '0') break;
        if (param_2[-1] != '0') {
          pcVar14 = param_2 + -1;
          goto LAB_005731b8;
        }
        pcVar14 = param_2;
        if ((*param_2 != '0') ||
           (pcVar15 = param_2 + 1, param_2 = param_2 + 4, pcVar14 = param_3, pcVar15 == param_3))
        goto LAB_005731b8;
      }
      pcVar14 = param_2 + -2;
    }
  }
LAB_005731b8:
  if (pcVar14 < param_3) {
    uVar5 = 0;
    uVar16 = iVar3 - (uint)pcVar14;
    pcVar15 = param_3;
    do {
      param_3 = pcVar15 + -1;
      if (*param_3 != '0') {
        if (*param_3 != '.') {
          if ((int)uVar5 != 0) goto LAB_005732b0;
          goto joined_r0x00573240;
        }
        if (param_3 <= pcVar14) goto LAB_00573248;
        uVar8 = 0;
        uVar10 = (~(uint)pcVar14 + iVar3) - uVar5;
        goto LAB_00573214;
      }
      uVar5 = uVar5 + 1;
      pcVar15 = param_3;
    } while (pcVar14 < param_3);
    pcVar15 = pcVar14;
    uVar5 = (ulong)uVar16;
    if (uVar16 == 0) {
      uVar5 = 0;
    }
    else {
LAB_005732b0:
      pcVar4 = pcVar14;
      _memchr(pcVar14,0x2e,(long)pcVar15 - (long)pcVar14);
      uVar16 = (uint)uVar5;
      if (pcVar4 != pcVar15 && pcVar4 != (char *)0x0) {
        uVar16 = 0;
      }
      uVar5 = (ulong)uVar16;
    }
  }
  else {
LAB_00573248:
    uVar5 = 0;
    pcVar15 = param_3;
  }
  goto joined_r0x00573240;
  while( true ) {
    uVar8 = (ulong)((int)uVar8 + 1);
    param_3 = param_3 + -1;
    uVar5 = uVar10;
    pcVar15 = pcVar14;
    if (param_3 <= pcVar14) break;
LAB_00573214:
    uVar5 = uVar8;
    pcVar15 = param_3;
    if (param_3[-1] != '0') break;
  }
joined_r0x00573240:
  iVar3 = 0;
  if ((0 < param_4) && (iVar3 = 0, pcVar14 != pcVar15)) {
    uVar6 = 0;
    iVar11 = 0;
    uVar16 = 0;
    iVar3 = 0;
    do {
      pcVar4 = pcVar14;
      cVar2 = *pcVar4;
      if (cVar2 == '.') {
        iVar3 = 1;
      }
      else {
        cVar13 = cVar2 + -0x30;
        param_4 = param_4 + -1;
        if (((param_4 == 0) && (pcVar4 + 1 != pcVar15)) && ((cVar2 == '5' || (cVar2 == '0')))) {
          cVar13 = cVar2 + -0x2f;
        }
        uVar5 = (ulong)(uint)((int)uVar5 - iVar3);
        uVar16 = uVar16 * 10 + (int)cVar13;
        iVar11 = iVar11 + 1;
        if (iVar11 == 9) {
          if ((int)uVar6 < 1) {
            uVar6 = 0;
          }
          else {
            uVar8 = 0;
            lVar12 = 4;
            uVar10 = (ulong)uVar6;
            do {
              uVar9 = uVar8 + (ulong)*(uint *)((long)param_1 + lVar12) * 1000000000;
              *(int *)((long)param_1 + lVar12) = (int)uVar9;
              uVar8 = uVar9 >> 0x20;
              lVar12 = lVar12 + 4;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
            if ((uVar6 < 0x54) && (uVar8 != 0)) {
              param_1[(ulong)uVar6 + 1] = (uint)(uVar9 >> 0x20);
              uVar6 = uVar6 + 1;
              *param_1 = uVar6;
            }
          }
          if (uVar16 == 0) {
            iVar11 = 0;
          }
          else {
            uVar10 = 0;
            do {
              uVar1 = param_1[uVar10 + 1];
              param_1[uVar10 + 1] = uVar1 + uVar16;
              uVar7 = (uint)uVar10;
              if (CARRY4(uVar1,uVar16)) {
                uVar7 = uVar7 + 1;
              }
              uVar10 = (ulong)uVar7;
            } while ((CARRY4(uVar1,uVar16)) && (uVar16 = 1, uVar7 < 0x54));
            uVar16 = 0;
            iVar11 = 0;
            if (uVar6 < uVar7 + 1) {
              uVar6 = uVar7 + 1;
            }
            if (0x53 < uVar6) {
              uVar6 = 0x54;
            }
            *param_1 = uVar6;
          }
        }
      }
    } while ((pcVar4 + 1 != pcVar15) && (pcVar14 = pcVar4 + 1, 0 < param_4));
    pcVar14 = pcVar4 + 1;
    if (iVar11 != 0) {
      if (uVar6 != 0) {
        uVar8 = 0;
        uVar7 = *(uint *)(&UNK_00814208 + (long)iVar11 * 4);
        lVar12 = 4;
        uVar10 = (ulong)uVar6;
        do {
          uVar9 = uVar8 + (ulong)*(uint *)((long)param_1 + lVar12) * (ulong)uVar7;
          *(int *)((long)param_1 + lVar12) = (int)uVar9;
          uVar8 = uVar9 >> 0x20;
          lVar12 = lVar12 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        if ((uVar6 < 0x54) && (uVar8 != 0)) {
          param_1[(ulong)uVar6 + 1] = (uint)(uVar9 >> 0x20);
          uVar6 = uVar6 + 1;
          *param_1 = uVar6;
        }
      }
      if (uVar16 != 0) {
        uVar10 = 0;
        do {
          uVar1 = param_1[uVar10 + 1];
          param_1[uVar10 + 1] = uVar1 + uVar16;
          uVar7 = (uint)uVar10;
          if (CARRY4(uVar1,uVar16)) {
            uVar7 = uVar7 + 1;
          }
          uVar10 = (ulong)uVar7;
        } while ((CARRY4(uVar1,uVar16)) && (uVar16 = 1, uVar7 < 0x54));
        if ((int)uVar6 < (int)(uVar7 + 1)) {
          uVar6 = uVar7 + 1;
        }
        if (0x53 < uVar6) {
          uVar6 = 0x54;
        }
        *param_1 = uVar6;
      }
    }
  }
  if ((pcVar14 < pcVar15) && (iVar3 == 0)) {
    pcVar4 = pcVar14;
    _memchr(pcVar14,0x2e,(long)pcVar15 - (long)pcVar14);
    iVar3 = (int)pcVar15;
    if (pcVar4 != (char *)0x0) {
      iVar3 = (int)pcVar4;
    }
    uVar5 = (ulong)(uint)((int)uVar5 + (iVar3 - (int)pcVar14));
  }
  return uVar5;
}



/* Entry: 00573528; end: 005738af;  */

void FUN_00573528(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  puVar1 = param_1 + 1;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0] = 1;
  param_1[1] = 1;
  param_1[2] = 0;
  if (0x1a < (int)param_2) {
    bVar5 = true;
    do {
      uVar18 = param_2 / 0x1b;
      if (0x13 < uVar18) {
        uVar18 = 0x14;
      }
      uVar3 = uVar18 * 2;
      if (bVar5) {
        _memcpy(puVar1,&UNK_00814230 + (ulong)((uVar18 - 1) * uVar18) * 4,uVar18 << 3);
        *param_1 = uVar3;
      }
      else {
        uVar12 = *param_1 + uVar3;
        if (1 < (int)uVar12) {
          uVar4 = *param_1 - 1;
          if (0x54 < uVar12) {
            uVar12 = 0x55;
          }
          uVar6 = uVar12 - 2;
          lVar8 = (ulong)uVar12 - 2;
          do {
            while( true ) {
              uVar12 = uVar6;
              if ((int)uVar4 <= (int)uVar6) {
                uVar12 = uVar4;
              }
              uVar7 = (uint)lVar8;
              uVar2 = uVar7;
              if ((int)uVar4 <= (int)uVar7) {
                uVar2 = uVar4;
              }
              if (((int)uVar2 < 0) || ((int)uVar3 <= (int)(uVar7 - uVar2))) break;
              uVar13 = 0;
              uVar9 = 0;
              lVar15 = (long)(int)(uVar6 - uVar12);
              lVar17 = (ulong)uVar12 << 2;
              puVar10 = (uint *)(&UNK_00814230 +
                                (long)(int)(uVar6 - uVar12) * 4 + (ulong)((uVar18 - 1) * uVar18) * 4
                                );
              do {
                lVar15 = lVar15 + 1;
                uVar11 = uVar9 + (ulong)*puVar10 * (ulong)*(uint *)((long)param_1 + lVar17 + 4);
                uVar13 = uVar13 + (uVar11 >> 0x20);
                uVar9 = uVar11 & 0xffffffff;
                if (lVar17 == 0) break;
                lVar17 = lVar17 + -4;
                puVar10 = puVar10 + 1;
              } while (lVar15 < (long)(ulong)uVar3);
              lVar17 = lVar8 + 1;
              if ((lVar8 < 0x53) && (uVar13 != 0)) {
                uVar16 = uVar13 >> 0x20;
                uVar12 = puVar1[lVar17];
                puVar1[lVar17] = uVar12 + (uint)uVar13;
                if (CARRY4(uVar12,(uint)uVar13)) {
                  iVar14 = (int)(uVar13 >> 0x20);
                  uVar16 = (ulong)(iVar14 + 1);
                  if (iVar14 == -1) {
                    iVar14 = uVar7 + 3;
                    if (lVar8 < 0x51) {
                      do {
                        uVar12 = puVar1[iVar14];
                        puVar1[iVar14] = uVar12 + 1;
                        if (uVar12 != 0xffffffff) break;
                        iVar14 = iVar14 + 1;
                      } while (iVar14 < 0x54);
                    }
                  }
                  else {
LAB_00573748:
                    if (0x51 < lVar8) {
                      uVar7 = 0x55;
                      goto LAB_00573780;
                    }
                    iVar14 = uVar7 + 2;
                    do {
                      uVar12 = puVar1[iVar14];
                      puVar1[iVar14] = uVar12 + (uint)uVar16;
                      if (!CARRY4(uVar12,(uint)uVar16)) break;
                      iVar14 = iVar14 + 1;
                      uVar16 = 1;
                    } while (iVar14 < 0x54);
                  }
                  uVar7 = iVar14 + 1;
                }
                else {
                  if (uVar16 != 0) goto LAB_00573748;
                  uVar7 = uVar7 + 2;
                }
LAB_00573780:
                if ((int)uVar7 <= (int)*param_1) {
                  uVar7 = *param_1;
                }
                if (0x53 < (int)uVar7) {
                  uVar7 = 0x54;
                }
                *param_1 = uVar7;
              }
              puVar1[lVar8] = (uint)uVar11;
              uVar12 = *param_1;
              if ((int)uVar12 <= lVar8 && uVar9 != 0) {
                uVar12 = (uint)lVar17;
              }
              *param_1 = uVar12;
              uVar6 = uVar6 - 1;
              bVar5 = lVar8 == 0;
              lVar8 = lVar8 + -1;
              if (bVar5) goto LAB_005735f4;
            }
            puVar1[lVar8] = 0;
            uVar6 = uVar6 - 1;
            bVar5 = lVar8 != 0;
            lVar8 = lVar8 + -1;
          } while (bVar5);
        }
      }
LAB_005735f4:
      bVar5 = false;
      param_2 = param_2 + uVar18 * -0x1b;
    } while (0x1a < (int)param_2);
  }
  if (0xc < (int)param_2) {
    uVar13 = (ulong)*param_1;
    uVar18 = param_2;
    do {
      if (0 < (int)uVar13) {
        uVar11 = 0;
        puVar10 = puVar1;
        uVar9 = uVar13;
        do {
          uVar16 = uVar11 + (ulong)*puVar10 * 0x48c27395;
          *puVar10 = (uint)uVar16;
          uVar11 = uVar16 >> 0x20;
          uVar9 = uVar9 - 1;
          puVar10 = puVar10 + 1;
        } while (uVar9 != 0);
        if ((uVar13 < 0x54) && (uVar11 != 0)) {
          puVar1[uVar13] = (uint)(uVar16 >> 0x20);
          uVar13 = uVar13 + 1;
        }
      }
      param_2 = uVar18 - 0xd;
      bVar5 = 0x19 < (int)uVar18;
      uVar18 = param_2;
    } while (bVar5);
    *param_1 = (uint)uVar13;
  }
  if (0 < (int)param_2) {
    uVar18 = *param_1;
    if ((uVar18 != 0) && (0 < (int)uVar18)) {
      uVar9 = 0;
      uVar3 = *(uint *)(&UNK_008141d0 + (ulong)param_2 * 4);
      lVar8 = 4;
      uVar13 = (ulong)uVar18;
      do {
        uVar11 = uVar9 + (ulong)*(uint *)((long)param_1 + lVar8) * (ulong)uVar3;
        *(int *)((long)param_1 + lVar8) = (int)uVar11;
        uVar9 = uVar11 >> 0x20;
        lVar8 = lVar8 + 4;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
      if ((uVar18 < 0x54) && (uVar9 != 0)) {
        puVar1[uVar18] = (uint)(uVar11 >> 0x20);
        *param_1 = uVar18 + 1;
      }
    }
  }
  return;
}



/* Entry: 005738b0; end: 00573a03;  */

void FUN_005738b0(int *param_1,int param_2,long param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  
  uVar1 = param_5;
  if ((int)(param_2 - 1U) <= (int)param_5) {
    uVar1 = param_2 - 1U;
  }
  if (((int)uVar1 < 0) || (iVar6 = param_5 - uVar1, param_4 <= iVar6)) {
    param_1[(long)(int)param_5 + 1] = 0;
    return;
  }
  uVar5 = 0;
  uVar3 = 0;
  lVar7 = (long)iVar6;
  lVar9 = (ulong)uVar1 << 2;
  puVar10 = (uint *)(param_3 + (long)iVar6 * 4);
  do {
    lVar7 = lVar7 + 1;
    uVar4 = uVar3 + (ulong)*puVar10 * (ulong)*(uint *)((long)param_1 + lVar9 + 4);
    uVar5 = uVar5 + (uVar4 >> 0x20);
    uVar3 = uVar4 & 0xffffffff;
    if (lVar9 == 0) break;
    lVar9 = lVar9 + -4;
    puVar10 = puVar10 + 1;
  } while (lVar7 < param_4);
  if ((0x52 < (int)param_5) || (uVar5 == 0)) goto LAB_005739e4;
  uVar8 = uVar5 >> 0x20;
  uVar1 = param_1[(long)(int)param_5 + 2];
  param_1[(long)(int)param_5 + 2] = uVar1 + (uint)uVar5;
  if (CARRY4(uVar1,(uint)uVar5)) {
    iVar6 = (int)(uVar5 >> 0x20);
    uVar8 = (ulong)(iVar6 + 1);
    if (iVar6 == -1) {
      iVar6 = param_5 + 3;
      if ((int)param_5 < 0x51) {
        do {
          iVar2 = param_1[(long)iVar6 + 1];
          param_1[(long)iVar6 + 1] = iVar2 + 1;
          if (iVar2 != -1) break;
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x54);
      }
    }
    else {
LAB_00573990:
      if (0x51 < (int)param_5) {
        iVar6 = 0x55;
        goto LAB_005739c8;
      }
      iVar6 = param_5 + 2;
      do {
        uVar1 = param_1[(long)iVar6 + 1];
        param_1[(long)iVar6 + 1] = uVar1 + (uint)uVar8;
        if (!CARRY4(uVar1,(uint)uVar8)) break;
        iVar6 = iVar6 + 1;
        uVar8 = 1;
      } while (iVar6 < 0x54);
    }
    iVar6 = iVar6 + 1;
  }
  else {
    if (uVar8 != 0) goto LAB_00573990;
    iVar6 = param_5 + 2;
  }
LAB_005739c8:
  if (iVar6 <= *param_1) {
    iVar6 = *param_1;
  }
  if (0x53 < iVar6) {
    iVar6 = 0x54;
  }
  *param_1 = iVar6;
LAB_005739e4:
  param_1[(long)(int)param_5 + 1] = (int)uVar4;
  if ((uVar3 != 0) && (*param_1 <= (int)param_5)) {
    *param_1 = param_5 + 1;
    return;
  }
  return;
}



/* Entry: 00573a04; end: 00573f9f;  */

void FUN_00573a04(long *param_1,byte *param_2,byte *param_3,uint param_4)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  long lVar14;
  int *piVar15;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  if (param_2 == param_3) {
    return;
  }
  pbVar6 = param_2;
  FUN_00573fa0(param_2,param_3,param_1);
  if (((ulong)pbVar6 & 1) != 0) {
    return;
  }
  pbVar6 = param_2;
  if (param_2 < param_3) {
    uVar2 = (int)param_3 - (int)param_2;
    uVar9 = (ulong)uVar2 & 3;
    pbVar11 = param_2;
    if ((uVar2 & 3) != 0) {
      do {
        if (*pbVar6 != 0x30) goto LAB_00573a94;
        pbVar11 = pbVar6 + 1;
        uVar9 = uVar9 - 1;
        pbVar6 = pbVar11;
      } while (uVar9 != 0);
    }
    pbVar6 = param_3;
    if ((ulong)((long)param_2 - (long)param_3) < 0xfffffffffffffffd) {
      pbVar11 = pbVar11 + 3;
      while( true ) {
        if (pbVar11[-3] != 0x30) {
          pbVar6 = pbVar11 + -3;
          goto LAB_00573a94;
        }
        if (pbVar11[-2] != 0x30) break;
        if (pbVar11[-1] != 0x30) {
          pbVar6 = pbVar11 + -1;
          goto LAB_00573a94;
        }
        pbVar6 = pbVar11;
        if ((*pbVar11 != 0x30) ||
           (pbVar7 = pbVar11 + 1, pbVar11 = pbVar11 + 4, pbVar6 = param_3, pbVar7 == param_3))
        goto LAB_00573a94;
      }
      pbVar6 = pbVar11 + -2;
    }
  }
LAB_00573a94:
  uVar9 = (long)param_3 - (long)pbVar6;
  pbVar11 = pbVar6;
  if (uVar9 != 0) {
    pbVar7 = pbVar6;
    for (uVar1 = uVar9 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      pbVar11 = pbVar7;
      if (*pbVar7 != 0x30) goto LAB_00573adc;
      pbVar7 = pbVar7 + 1;
    }
    pbVar11 = param_3;
    if (3 < uVar9) {
      pbVar7 = pbVar7 + 3;
      while( true ) {
        if (pbVar7[-3] != 0x30) {
          pbVar11 = pbVar7 + -3;
          goto LAB_00573adc;
        }
        if (pbVar7[-2] != 0x30) break;
        if (pbVar7[-1] != 0x30) {
          pbVar11 = pbVar7 + -1;
          goto LAB_00573adc;
        }
        pbVar11 = pbVar7;
        if ((*pbVar7 != 0x30) ||
           (pbVar12 = pbVar7 + 1, pbVar7 = pbVar7 + 4, pbVar11 = param_3, pbVar12 == param_3))
        goto LAB_00573adc;
      }
      pbVar11 = pbVar7 + -2;
    }
  }
LAB_00573adc:
  pbVar7 = pbVar11 + 0x13;
  if ((long)param_3 - (long)pbVar11 < 0x14) {
    pbVar7 = param_3;
  }
  if (pbVar11 < pbVar7) {
    lVar8 = 0;
    pbVar12 = pbVar11;
    do {
      pbVar11 = pbVar12;
      if (9 < *pbVar12 - 0x30) break;
      lVar8 = ((ulong)*pbVar12 & 0xf) + lVar8 * 10;
      pbVar12 = pbVar12 + 1;
      pbVar11 = pbVar7;
    } while (pbVar12 != pbVar7);
    if (pbVar11 < param_3) goto LAB_00573b34;
LAB_00573b7c:
    bVar4 = false;
    pbVar7 = pbVar11;
  }
  else {
    lVar8 = 0;
    if (param_3 <= pbVar11) goto LAB_00573b7c;
LAB_00573b34:
    bVar4 = false;
    lVar14 = (long)param_3 - (long)pbVar11;
    pbVar12 = pbVar11 + lVar14;
    do {
      pbVar7 = pbVar11;
      if (9 < *pbVar11 - 0x30) break;
      bVar4 = (bool)(bVar4 | *pbVar11 != 0x30);
      pbVar11 = pbVar11 + 1;
      lVar14 = lVar14 + -1;
      pbVar7 = pbVar12;
    } while (lVar14 != 0);
  }
  iVar13 = (int)pbVar7 - (int)pbVar6;
  if (49999999 < iVar13) {
    return;
  }
  lVar14 = (long)iVar13;
  pbVar11 = pbVar6 + lVar14;
  uVar2 = 0;
  if (iVar13 < 0x14) {
    uVar2 = 0x13 - iVar13;
  }
  if (iVar13 < 0x14) {
    iVar13 = 0x13;
  }
  iVar13 = iVar13 + -0x13;
  if ((pbVar11 < param_3) && (*pbVar11 == 0x2e)) {
    pbVar11 = pbVar11 + 1;
    pbVar7 = pbVar11;
    if (lVar8 == 0) {
      if (pbVar11 < param_3) {
        pbVar12 = pbVar11;
        for (uVar9 = (ulong)(param_3 + (~(ulong)pbVar6 - lVar14)) & 3; uVar9 != 0; uVar9 = uVar9 - 1
            ) {
          pbVar7 = pbVar12;
          if (*pbVar12 != 0x30) goto LAB_00573de8;
          pbVar12 = pbVar12 + 1;
        }
        pbVar7 = param_3;
        if ((byte *)0x2 < param_3 + (~(ulong)pbVar6 - lVar14) + -1) {
          pbVar12 = pbVar12 + 3;
          while( true ) {
            if (pbVar12[-3] != 0x30) {
              pbVar7 = pbVar12 + -3;
              goto LAB_00573de8;
            }
            if (pbVar12[-2] != 0x30) break;
            if (pbVar12[-1] != 0x30) {
              pbVar7 = pbVar12 + -1;
              goto LAB_00573de8;
            }
            pbVar7 = pbVar12;
            if ((*pbVar12 != 0x30) ||
               (pbVar6 = pbVar12 + 1, pbVar12 = pbVar12 + 4, pbVar7 = param_3, param_3 <= pbVar6))
            goto LAB_00573de8;
          }
          pbVar7 = pbVar12 + -2;
        }
      }
LAB_00573de8:
      iVar5 = (int)pbVar7 - (int)pbVar11;
      if (49999999 < iVar5) {
        return;
      }
      iVar13 = iVar13 - iVar5;
      uVar9 = (long)param_3 - (long)pbVar7;
      pbVar11 = pbVar7;
      if (uVar9 != 0) {
        pbVar6 = pbVar7;
        for (uVar1 = uVar9 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
          pbVar11 = pbVar6;
          if (*pbVar6 != 0x30) goto LAB_00573bd8;
          pbVar6 = pbVar6 + 1;
        }
        pbVar11 = param_3;
        if (3 < uVar9) {
          pbVar6 = pbVar6 + 3;
          while( true ) {
            if (pbVar6[-3] != 0x30) {
              pbVar11 = pbVar6 + -3;
              goto LAB_00573bd8;
            }
            if (pbVar6[-2] != 0x30) break;
            if (pbVar6[-1] != 0x30) {
              pbVar11 = pbVar6 + -1;
              goto LAB_00573bd8;
            }
            pbVar11 = pbVar6;
            if ((*pbVar6 != 0x30) ||
               (pbVar12 = pbVar6 + 1, pbVar6 = pbVar6 + 4, pbVar11 = param_3, pbVar12 == param_3))
            goto LAB_00573bd8;
          }
          pbVar11 = pbVar6 + -2;
        }
      }
    }
LAB_00573bd8:
    pbVar6 = pbVar11 + uVar2;
    if ((long)param_3 - (long)pbVar11 <= (long)(ulong)uVar2) {
      pbVar6 = param_3;
    }
    pbVar12 = pbVar11;
    if (pbVar11 < pbVar6) {
      do {
        pbVar12 = pbVar11;
        if (9 < *pbVar11 - 0x30) break;
        lVar8 = ((ulong)*pbVar11 & 0xf) + lVar8 * 10;
        pbVar11 = pbVar11 + 1;
        pbVar12 = pbVar6;
      } while (pbVar11 != pbVar6);
    }
    if (pbVar12 < param_3) {
      bVar3 = 0;
      lVar14 = (long)param_3 - (long)pbVar12;
      pbVar11 = pbVar12 + lVar14;
      pbVar6 = pbVar12;
      do {
        pbVar12 = pbVar6;
        if (9 < *pbVar6 - 0x30) break;
        bVar3 = bVar3 | *pbVar6 != 0x30;
        pbVar6 = pbVar6 + 1;
        lVar14 = lVar14 + -1;
        pbVar12 = pbVar11;
      } while (lVar14 != 0);
      bVar4 = (bool)(bVar3 | bVar4);
    }
    uVar10 = (int)pbVar12 - (int)pbVar7;
    if ((int)uVar10 <= (int)uVar2) {
      uVar2 = uVar10;
    }
    if (49999999 < (int)uVar10) {
      return;
    }
    pbVar11 = pbVar7 + (int)uVar10;
    iVar13 = iVar13 - uVar2;
  }
  if (param_2 == pbVar11) {
    return;
  }
  if (((long)pbVar11 - (long)param_2 == 1) && (*param_2 == 0x2e)) {
    return;
  }
  if (bVar4) {
    param_1[3] = (long)param_2;
    param_1[4] = (long)pbVar11;
  }
  *param_1 = lVar8;
  piVar15 = (int *)((long)param_1 + 0xc);
  *piVar15 = 0;
  if ((((param_4 & 3) != 2) && (pbVar11 < param_3)) && ((*pbVar11 & 0xdf) == 0x45)) {
    pbVar6 = pbVar11 + 1;
    if (pbVar6 < param_3) {
      pbVar7 = pbVar11 + 2;
      if (*pbVar6 != 0x2b) {
        pbVar7 = pbVar6;
      }
      bVar4 = *pbVar6 != 0x2d;
      pbVar6 = pbVar7;
      if (!bVar4) {
        pbVar6 = pbVar11 + 2;
      }
    }
    else {
      bVar4 = true;
    }
    pbVar7 = pbVar6;
    func_0x00574134(pbVar6,param_3,piVar15);
    iVar5 = (int)pbVar7;
    pbVar7 = pbVar6 + iVar5;
    if ((!bVar4) && (iVar5 != 0)) {
      *piVar15 = -*piVar15;
      goto LAB_00573ea8;
    }
    if (iVar5 != 0) goto LAB_00573ea8;
  }
  pbVar7 = pbVar11;
  if ((param_4 & 3) == 1) {
    return;
  }
LAB_00573ea8:
  *(undefined4 *)(param_1 + 2) = 0;
  iVar5 = 0;
  if (*param_1 != 0) {
    iVar5 = *(int *)((long)param_1 + 0xc) + iVar13;
  }
  *(int *)(param_1 + 1) = iVar5;
  param_1[5] = (long)pbVar7;
  return;
}



/* Entry: 00573fa0; end: 0057426b;  */

undefined8 FUN_00573fa0(byte *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  byte *pbVar2;
  
  if ((long)param_2 - (long)param_1 < 3) {
    return 0;
  }
  bVar1 = *param_1;
  if (bVar1 < 0x69) {
    if (bVar1 == 0x49) {
LAB_00573fec:
      if ((param_1[1] & 0xdf) != 0x4e) {
        return 0;
      }
      if ((param_1[2] & 0xdf) != 0x46) {
        return 0;
      }
      *(undefined4 *)(param_3 + 0x10) = 1;
      if (((((7 < (ulong)((long)param_2 - (long)param_1)) && ((param_1[3] & 0xdf) == 0x49)) &&
           ((param_1[4] & 0xdf) == 0x4e)) &&
          (((param_1[5] & 0xdf) == 0x49 && ((param_1[6] & 0xdf) == 0x54)))) &&
         ((param_1[7] & 0xdf) == 0x59)) {
        *(byte **)(param_3 + 0x28) = param_1 + 8;
        return 1;
      }
      *(byte **)(param_3 + 0x28) = param_1 + 3;
      return 1;
    }
    if (bVar1 != 0x4e) {
      return 0;
    }
  }
  else if (bVar1 != 0x6e) {
    if (bVar1 != 0x69) {
      return 0;
    }
    goto LAB_00573fec;
  }
  if (((param_1[1] & 0xdf) != 0x41) || ((param_1[2] & 0xdf) != 0x4e)) {
    return 0;
  }
  *(undefined4 *)(param_3 + 0x10) = 2;
  pbVar2 = param_1 + 3;
  *(byte **)(param_3 + 0x28) = pbVar2;
  if ((pbVar2 < param_2) &&
     ((*pbVar2 == 0x28 && (param_1 = param_1 + 4, pbVar2 = param_1, param_1 < param_2)))) {
    while( true ) {
      bVar1 = *pbVar2;
      if ((0x19 < (bVar1 & 0xffffffdf) - 0x41) && (bVar1 != 0x5f && 9 < bVar1 - 0x30)) break;
      pbVar2 = pbVar2 + 1;
      if (pbVar2 == param_2) {
        return 1;
      }
    }
    if (bVar1 == 0x29) {
      *(byte **)(param_3 + 0x18) = param_1;
      *(byte **)(param_3 + 0x20) = pbVar2;
      *(byte **)(param_3 + 0x28) = pbVar2 + 1;
      return 1;
    }
    return 1;
  }
  return 1;
}



/* Entry: 0057426c; end: 005747ff;  */

void FUN_0057426c(ulong *param_1,byte *param_2,byte *param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  long lVar13;
  int *piVar14;
  bool bVar15;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  if (param_2 == param_3) {
    return;
  }
  pbVar5 = param_2;
  FUN_00573fa0(param_2,param_3,param_1);
  if (((ulong)pbVar5 & 1) != 0) {
    return;
  }
  pbVar5 = param_2;
  if (param_2 < param_3) {
    uVar3 = (int)param_3 - (int)param_2;
    uVar6 = (ulong)uVar3 & 3;
    pbVar9 = param_2;
    if ((uVar3 & 3) != 0) {
      do {
        if (*pbVar5 != 0x30) goto LAB_005742fc;
        pbVar9 = pbVar5 + 1;
        uVar6 = uVar6 - 1;
        pbVar5 = pbVar9;
      } while (uVar6 != 0);
    }
    pbVar5 = param_3;
    if ((ulong)((long)param_2 - (long)param_3) < 0xfffffffffffffffd) {
      pbVar9 = pbVar9 + 3;
      while( true ) {
        if (pbVar9[-3] != 0x30) {
          pbVar5 = pbVar9 + -3;
          goto LAB_005742fc;
        }
        if (pbVar9[-2] != 0x30) break;
        if (pbVar9[-1] != 0x30) {
          pbVar5 = pbVar9 + -1;
          goto LAB_005742fc;
        }
        pbVar5 = pbVar9;
        if ((*pbVar9 != 0x30) ||
           (pbVar11 = pbVar9 + 1, pbVar9 = pbVar9 + 4, pbVar5 = param_3, pbVar11 == param_3))
        goto LAB_005742fc;
      }
      pbVar5 = pbVar9 + -2;
    }
  }
LAB_005742fc:
  uVar6 = (long)param_3 - (long)pbVar5;
  pbVar9 = pbVar5;
  if (uVar6 != 0) {
    pbVar11 = pbVar5;
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      pbVar9 = pbVar11;
      if (*pbVar11 != 0x30) goto LAB_00574344;
      pbVar11 = pbVar11 + 1;
    }
    pbVar9 = param_3;
    if (3 < uVar6) {
      pbVar11 = pbVar11 + 3;
      while( true ) {
        if (pbVar11[-3] != 0x30) {
          pbVar9 = pbVar11 + -3;
          goto LAB_00574344;
        }
        if (pbVar11[-2] != 0x30) break;
        if (pbVar11[-1] != 0x30) {
          pbVar9 = pbVar11 + -1;
          goto LAB_00574344;
        }
        pbVar9 = pbVar11;
        if ((*pbVar11 != 0x30) ||
           (pbVar10 = pbVar11 + 1, pbVar11 = pbVar11 + 4, pbVar9 = param_3, pbVar10 == param_3))
        goto LAB_00574344;
      }
      pbVar9 = pbVar11 + -2;
    }
  }
LAB_00574344:
  pbVar11 = pbVar9 + 0xf;
  if ((long)param_3 - (long)pbVar9 < 0x10) {
    pbVar11 = param_3;
  }
  if (pbVar9 < pbVar11) {
    uVar6 = 0;
    pbVar10 = pbVar9;
    do {
      pbVar9 = pbVar10;
      if ((long)(char)(&UNK_008148c0)[*pbVar10] < 0) break;
      uVar6 = (long)(char)(&UNK_008148c0)[*pbVar10] + uVar6 * 0x10;
      pbVar10 = pbVar10 + 1;
      pbVar9 = pbVar11;
    } while (pbVar10 != pbVar11);
    if (param_3 <= pbVar9) goto LAB_005743e4;
LAB_00574398:
    uVar7 = 0;
    lVar13 = (long)param_3 - (long)pbVar9;
    pbVar11 = pbVar9 + lVar13;
    do {
      pbVar10 = pbVar9;
      if ((char)(&UNK_008148c0)[*pbVar9] < '\0') break;
      uVar7 = (ulong)((uint)uVar7 | (uint)(*pbVar9 != 0x30));
      pbVar9 = pbVar9 + 1;
      lVar13 = lVar13 + -1;
      pbVar10 = pbVar11;
    } while (lVar13 != 0);
  }
  else {
    uVar6 = 0;
    if (pbVar9 < param_3) goto LAB_00574398;
LAB_005743e4:
    uVar7 = 0;
    pbVar10 = pbVar9;
  }
  iVar12 = (int)pbVar10 - (int)pbVar5;
  if (12499999 < iVar12) {
    return;
  }
  lVar13 = (long)iVar12;
  pbVar9 = pbVar5 + lVar13;
  uVar3 = 0;
  if (iVar12 < 0x10) {
    uVar3 = 0xf - iVar12;
  }
  if (iVar12 < 0x10) {
    iVar12 = 0xf;
  }
  iVar12 = iVar12 + -0xf;
  if ((pbVar9 < param_3) && (*pbVar9 == 0x2e)) {
    pbVar9 = pbVar9 + 1;
    pbVar11 = pbVar9;
    if (uVar6 == 0) {
      if (pbVar9 < param_3) {
        pbVar10 = pbVar9;
        for (uVar1 = (ulong)(param_3 + (~(ulong)pbVar5 - lVar13)) & 3; uVar1 != 0; uVar1 = uVar1 - 1
            ) {
          pbVar11 = pbVar10;
          if (*pbVar10 != 0x30) goto LAB_0057463c;
          pbVar10 = pbVar10 + 1;
        }
        pbVar11 = param_3;
        if ((byte *)0x2 < param_3 + (~(ulong)pbVar5 - lVar13) + -1) {
          pbVar10 = pbVar10 + 3;
          while( true ) {
            if (pbVar10[-3] != 0x30) {
              pbVar11 = pbVar10 + -3;
              goto LAB_0057463c;
            }
            if (pbVar10[-2] != 0x30) break;
            if (pbVar10[-1] != 0x30) {
              pbVar11 = pbVar10 + -1;
              goto LAB_0057463c;
            }
            pbVar11 = pbVar10;
            if ((*pbVar10 != 0x30) ||
               (pbVar5 = pbVar10 + 1, pbVar10 = pbVar10 + 4, pbVar11 = param_3, param_3 <= pbVar5))
            goto LAB_0057463c;
          }
          pbVar11 = pbVar10 + -2;
        }
      }
LAB_0057463c:
      iVar4 = (int)pbVar11 - (int)pbVar9;
      if (12499999 < iVar4) {
        return;
      }
      iVar12 = iVar12 - iVar4;
      uVar1 = (long)param_3 - (long)pbVar11;
      pbVar9 = pbVar11;
      if (uVar1 != 0) {
        pbVar5 = pbVar11;
        for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          pbVar9 = pbVar5;
          if (*pbVar5 != 0x30) goto LAB_00574440;
          pbVar5 = pbVar5 + 1;
        }
        pbVar9 = param_3;
        if (3 < uVar1) {
          pbVar5 = pbVar5 + 3;
          while( true ) {
            if (pbVar5[-3] != 0x30) {
              pbVar9 = pbVar5 + -3;
              goto LAB_00574440;
            }
            if (pbVar5[-2] != 0x30) break;
            if (pbVar5[-1] != 0x30) {
              pbVar9 = pbVar5 + -1;
              goto LAB_00574440;
            }
            pbVar9 = pbVar5;
            if ((*pbVar5 != 0x30) ||
               (pbVar10 = pbVar5 + 1, pbVar5 = pbVar5 + 4, pbVar9 = param_3, pbVar10 == param_3))
            goto LAB_00574440;
          }
          pbVar9 = pbVar5 + -2;
        }
      }
    }
LAB_00574440:
    pbVar5 = pbVar9 + uVar3;
    if ((long)param_3 - (long)pbVar9 <= (long)(ulong)uVar3) {
      pbVar5 = param_3;
    }
    pbVar10 = pbVar9;
    if (pbVar9 < pbVar5) {
      do {
        pbVar10 = pbVar9;
        if ((long)(char)(&UNK_008148c0)[*pbVar9] < 0) break;
        uVar6 = (long)(char)(&UNK_008148c0)[*pbVar9] + uVar6 * 0x10;
        pbVar9 = pbVar9 + 1;
        pbVar10 = pbVar5;
      } while (pbVar9 != pbVar5);
    }
    if (pbVar10 < param_3) {
      uVar8 = 0;
      lVar13 = (long)param_3 - (long)pbVar10;
      pbVar9 = pbVar10 + lVar13;
      pbVar5 = pbVar10;
      do {
        pbVar10 = pbVar5;
        if ((char)(&UNK_008148c0)[*pbVar5] < '\0') break;
        uVar8 = uVar8 | *pbVar5 != 0x30;
        pbVar5 = pbVar5 + 1;
        lVar13 = lVar13 + -1;
        pbVar10 = pbVar9;
      } while (lVar13 != 0);
      uVar7 = (ulong)(uVar8 | (uint)uVar7);
    }
    uVar8 = (int)pbVar10 - (int)pbVar11;
    if ((int)uVar8 <= (int)uVar3) {
      uVar3 = uVar8;
    }
    if (12499999 < (int)uVar8) {
      return;
    }
    pbVar9 = pbVar11 + (int)uVar8;
    iVar12 = iVar12 - uVar3;
  }
  if (param_2 == pbVar9) {
    return;
  }
  if (((long)pbVar9 - (long)param_2 == 1) && (*param_2 == 0x2e)) {
    return;
  }
  *param_1 = uVar6 | uVar7;
  piVar14 = (int *)((long)param_1 + 0xc);
  *piVar14 = 0;
  if ((((param_4 & 3) != 2) && (pbVar9 < param_3)) && ((*pbVar9 & 0xdf) == 0x50)) {
    pbVar5 = pbVar9 + 1;
    pbVar11 = pbVar5;
    if (pbVar5 < param_3) {
      if (*pbVar5 != 0x2d) {
        pbVar11 = pbVar9 + 2;
        if (*pbVar5 != 0x2b) {
          pbVar11 = pbVar5;
        }
        goto LAB_005746c8;
      }
      bVar15 = false;
      pbVar11 = pbVar9 + 2;
    }
    else {
LAB_005746c8:
      bVar15 = true;
    }
    pbVar5 = pbVar11;
    func_0x00574134(pbVar11,param_3,piVar14);
    iVar4 = (int)pbVar5;
    pbVar5 = pbVar11 + iVar4;
    if ((!bVar15) && (iVar4 != 0)) {
      *piVar14 = -*piVar14;
      goto LAB_00574708;
    }
    if (iVar4 != 0) goto LAB_00574708;
  }
  pbVar5 = pbVar9;
  if ((param_4 & 3) == 1) {
    return;
  }
LAB_00574708:
  *(undefined4 *)(param_1 + 2) = 0;
  iVar4 = 0;
  if (*param_1 != 0) {
    iVar4 = *(int *)((long)param_1 + 0xc) + iVar12 * 4;
  }
  *(int *)(param_1 + 1) = iVar4;
  param_1[5] = (ulong)pbVar5;
  return;
}



/* Entry: 00574800; end: 00574d57;  */

void FUN_00574800(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 00574d58; end: 0057553f;  */

undefined1 * FUN_00574d58(double param_1,undefined4 *param_2)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  ushort uVar9;
  undefined2 uVar10;
  double dVar11;
  ulong uVar12;
  undefined1 *puVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  undefined4 *puVar19;
  uint uVar20;
  undefined4 *puVar21;
  short *psVar22;
  undefined1 uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  double dVar28;
  double dVar29;
  undefined1 auStack_44 [4];
  
  if (NAN(param_1)) {
    *param_2 = 0x6e616e;
    return (undefined1 *)0x3;
  }
  if (param_1 == 0.0) {
    puVar17 = param_2;
    if ((long)param_1 < 0) {
      puVar17 = (undefined4 *)((long)param_2 + 1);
      *(undefined1 *)param_2 = 0x2d;
    }
    *(undefined2 *)puVar17 = 0x30;
    return (undefined1 *)((long)puVar17 + (1 - (long)param_2));
  }
  puVar17 = param_2;
  if (param_1 < 0.0) {
    *(undefined1 *)param_2 = 0x2d;
    param_1 = -param_1;
    puVar17 = (undefined4 *)((long)param_2 + 1);
  }
  if (1.79769313486232e+308 < param_1) {
    *puVar17 = 0x666e69;
    return (undefined1 *)((long)puVar17 + (3 - (long)param_2));
  }
  if (999999.5 <= param_1) {
    dVar28 = param_1;
    if (1e+261 <= param_1) {
      dVar28 = param_1 * 1e-256;
    }
    uVar20 = 5;
    if (1e+261 <= param_1) {
      uVar20 = 0x105;
    }
    if (1e+133 <= dVar28) {
      uVar20 = uVar20 | 0x80;
      dVar28 = dVar28 * 1e-128;
    }
    if (1e+69 <= dVar28) {
      uVar20 = uVar20 | 0x40;
      dVar28 = dVar28 * 1e-64;
    }
    if (1e+37 <= dVar28) {
      uVar20 = uVar20 | 0x20;
      dVar28 = dVar28 * 1e-32;
    }
    if (1e+21 <= dVar28) {
      uVar20 = uVar20 + 0x10;
      dVar28 = dVar28 * 1e-16;
    }
    if (10000000000000.0 <= dVar28) {
      uVar20 = uVar20 + 8;
      dVar28 = dVar28 * 1e-08;
    }
    if (1000000000.0 <= dVar28) {
      uVar20 = uVar20 + 4;
      dVar28 = dVar28 * 0.0001;
    }
    if (10000000.0 <= dVar28) {
      uVar20 = uVar20 + 2;
      dVar28 = dVar28 * 0.01;
    }
    if (1000000.0 <= dVar28) {
      uVar20 = uVar20 + 1;
      dVar29 = 0.1;
      goto LAB_005750bc;
    }
  }
  else {
    dVar28 = param_1 * 1e+256;
    if (1e-250 <= param_1) {
      dVar28 = param_1;
    }
    uVar20 = 0xffffff05;
    if (1e-250 <= param_1) {
      uVar20 = 5;
    }
    uVar16 = uVar20 - 0x80;
    dVar29 = dVar28 * 1e+128;
    if (1e-122 <= dVar28) {
      uVar16 = uVar20;
      dVar29 = dVar28;
    }
    uVar20 = uVar16 - 0x40;
    dVar28 = dVar29 * 1e+64;
    if (1e-58 <= dVar29) {
      uVar20 = uVar16;
      dVar28 = dVar29;
    }
    uVar16 = uVar20 - 0x20;
    dVar29 = dVar28 * 1e+32;
    if (1e-26 <= dVar28) {
      uVar16 = uVar20;
      dVar29 = dVar28;
    }
    uVar20 = uVar16 - 0x10;
    dVar28 = dVar29 * 1e+16;
    if (1e-10 <= dVar29) {
      uVar20 = uVar16;
      dVar28 = dVar29;
    }
    uVar16 = uVar20 - 8;
    dVar29 = dVar28 * 100000000.0;
    if (0.01 <= dVar28) {
      uVar16 = uVar20;
      dVar29 = dVar28;
    }
    uVar27 = uVar16 - 4;
    dVar11 = dVar29 * 10000.0;
    if (100.0 <= dVar29) {
      uVar27 = uVar16;
      dVar11 = dVar29;
    }
    uVar20 = uVar27 - 2;
    dVar28 = dVar11 * 100.0;
    if (10000.0 <= dVar11) {
      uVar20 = uVar27;
      dVar28 = dVar11;
    }
    if (dVar28 < 100000.0) {
      uVar20 = uVar20 - 1;
      dVar29 = 10.0;
LAB_005750bc:
      dVar28 = dVar28 * dVar29;
    }
  }
  uVar26 = (ulong)(dVar28 * 65536.0);
  if ((uVar26 & 0xffff) - 0x7fff < 2) {
    _frexp(auStack_44);
    uVar25 = (long)(param_1 * -9.223372036854776e+18) << 1;
    uVar12 = uVar26 >> 0xf & 0xfffffffe | 1;
    if ((int)uVar20 < 6) {
      uVar12 = uVar12 << (LZCOUNT(uVar12) & 0x3fU);
      uVar15 = (ulong)(5 - uVar20);
      func_0x00575bf8();
      uVar14 = 0;
    }
    else {
      uVar14 = (ulong)(uVar20 - 5);
      func_0x00575bf8();
      uVar15 = 0;
    }
    bVar1 = uVar12 < uVar25;
    if (uVar25 == uVar12) {
      bVar1 = uVar14 < uVar15;
    }
    uVar27 = (uint)(uVar26 >> 0x10);
    uVar16 = uVar27;
    if (uVar25 == uVar12 && uVar15 == uVar14) {
      uVar16 = (uVar27 & 1) + uVar27;
    }
    if (bVar1) {
      uVar16 = uVar27 + 1;
    }
  }
  else {
    uVar16 = (uint)(uVar26 + 0x8000 >> 0x10);
  }
  if (uVar16 == 1000000) {
    uVar20 = uVar20 + 1;
    uVar16 = 100000;
  }
  uVar6 = uVar16 % 10000;
  uVar5 = (uVar16 / 10000) * 0x67 >> 10;
  uVar24 = (uVar6 % 100) / 10;
  uVar27 = uVar24 + 0x3030;
  uVar24 = uVar27 + (uVar6 % 100 + uVar24 * 0xf6) * 0x100;
  uVar6 = (uVar6 / 100) * 0x100 + (int)((ulong)(uVar6 / 100) * 0x67 >> 10) * 0xf601 + 0x3030;
  iVar3 = uVar5 + 0x3030;
  uVar16 = iVar3 + (uVar16 / 10000 + uVar5 * 0xf6) * 0x100 & 0xff00;
  uVar9 = (ushort)(uVar16 >> 8) | (ushort)(((ulong)uVar6 << 0x30) >> 0x28);
  *(undefined2 *)puVar17 = 0x2e30;
  uVar23 = (undefined1)iVar3;
  uVar10 = (undefined2)uVar24;
  uVar7 = (undefined1)(uVar6 >> 8);
  if (9 < uVar20 + 4) {
    *(undefined1 *)puVar17 = uVar23;
    *(ushort *)((long)puVar17 + 2) = uVar9;
    *(undefined1 *)(puVar17 + 1) = uVar7;
    *(undefined2 *)((long)puVar17 + 5) = uVar10;
    puVar17 = puVar17 + 2;
    do {
      puVar21 = puVar17;
      puVar17 = (undefined4 *)((long)puVar21 + -1);
    } while (*(char *)((long)puVar21 + -2) == '0');
    if (*(char *)((long)puVar21 + -2) == '.') {
      puVar17 = (undefined4 *)((long)puVar21 + -2);
    }
    *(undefined1 *)puVar17 = 0x65;
    uVar23 = 0x2b;
    if ((int)uVar20 < 1) {
      uVar23 = 0x2d;
    }
    uVar16 = -uVar20;
    if (-1 < (int)uVar20) {
      uVar16 = uVar20;
    }
    *(undefined1 *)((long)puVar17 + 1) = uVar23;
    if (uVar16 < 100) {
      psVar22 = (short *)((long)puVar17 + 2);
    }
    else {
      uVar20 = (uVar16 >> 2 & 0x3fff) / 0x19;
      uVar16 = uVar16 + uVar20 * -100;
      psVar22 = (short *)((long)puVar17 + 3);
      *(char *)((long)puVar17 + 2) = (char)uVar20 + '0';
    }
    *psVar22 = (short)uVar16 * 0x100 + (short)((ulong)uVar16 * 0x67 >> 10) * -0x9ff + 0x3030;
    psVar22 = psVar22 + 1;
    *(undefined1 *)psVar22 = 0;
LAB_00575510:
    return (undefined1 *)((long)psVar22 - (long)param_2);
  }
  uVar24 = uVar24 & 0xffff;
  uVar8 = (undefined1)(uVar24 >> 8);
  switch(uVar20) {
  case 0:
    *(undefined1 *)puVar17 = uVar23;
    *(ushort *)((long)puVar17 + 2) = uVar9;
    *(undefined1 *)(puVar17 + 1) = uVar7;
    *(undefined2 *)((long)puVar17 + 5) = uVar10;
    puVar17 = puVar17 + 2;
    do {
      puVar19 = puVar17;
      puVar17 = (undefined4 *)((long)puVar19 + -1);
    } while (*(char *)((long)puVar19 + -2) == '0');
    puVar21 = (undefined4 *)((long)puVar19 + -1);
    if (*(char *)((long)puVar19 + -2) == '.') {
      puVar21 = (undefined4 *)((long)puVar19 + -2);
    }
    goto code_r0x005753d0;
  case 1:
    *(undefined1 *)puVar17 = uVar23;
    *(char *)((long)puVar17 + 1) = (char)(uVar16 >> 8);
    *(undefined1 *)((long)puVar17 + 2) = 0x2e;
    *(short *)((long)puVar17 + 3) = (short)uVar6;
    puVar21 = puVar17 + 2;
    *(undefined2 *)((long)puVar17 + 5) = uVar10;
    do {
      cVar4 = *(char *)((long)puVar21 + -2);
      puVar21 = (undefined4 *)((long)puVar21 + -1);
    } while (cVar4 == '0');
    break;
  case 2:
    *(undefined1 *)puVar17 = uVar23;
    *(ushort *)((long)puVar17 + 1) = uVar9;
    *(undefined1 *)((long)puVar17 + 3) = 0x2e;
    *(undefined1 *)(puVar17 + 1) = uVar7;
    puVar21 = puVar17 + 2;
    *(undefined2 *)((long)puVar17 + 5) = uVar10;
    do {
      cVar4 = *(char *)((long)puVar21 + -2);
      puVar21 = (undefined4 *)((long)puVar21 + -1);
    } while (cVar4 == '0');
    break;
  case 3:
    *(undefined1 *)puVar17 = uVar23;
    *(ushort *)((long)puVar17 + 1) = uVar9;
    *(undefined1 *)((long)puVar17 + 3) = uVar7;
    if ((uVar24 >> 8 | uVar27 & 0xff) == 0x30) {
      psVar22 = (short *)(puVar17 + 1);
    }
    else {
      *(undefined1 *)(puVar17 + 1) = 0x2e;
      *(char *)((long)puVar17 + 5) = (char)uVar27;
      if (uVar24 >> 8 == 0x30) {
        psVar22 = (short *)((long)puVar17 + 6);
      }
      else {
        psVar22 = (short *)((long)puVar17 + 7);
        *(undefined1 *)((long)puVar17 + 6) = uVar8;
      }
    }
    *(undefined1 *)psVar22 = 0;
    goto LAB_00575510;
  case 4:
    *(undefined1 *)puVar17 = uVar23;
    *(ushort *)((long)puVar17 + 1) = uVar9;
    *(undefined1 *)((long)puVar17 + 3) = uVar7;
    *(char *)(puVar17 + 1) = (char)uVar27;
    if (uVar24 >> 8 == 0x30) {
      puVar21 = (undefined4 *)((long)puVar17 + 5);
    }
    else {
      *(undefined1 *)((long)puVar17 + 5) = 0x2e;
      *(undefined1 *)((long)puVar17 + 6) = uVar8;
      puVar21 = (undefined4 *)((long)puVar17 + 7);
    }
    goto code_r0x005753d0;
  case 5:
    *(undefined1 *)puVar17 = uVar23;
    *(ushort *)((long)puVar17 + 1) = uVar9;
    *(undefined1 *)((long)puVar17 + 3) = uVar7;
    *(undefined2 *)(puVar17 + 1) = uVar10;
    *(undefined1 *)((long)puVar17 + 6) = 0;
    return (undefined1 *)((long)((long)puVar17 + 6) - (long)param_2);
  case 0xfffffffc:
    *(undefined1 *)((long)puVar17 + 2) = 0x30;
    puVar17 = (undefined4 *)((long)puVar17 + 1);
  case 0xfffffffd:
    *(undefined1 *)((long)puVar17 + 2) = 0x30;
    puVar17 = (undefined4 *)((long)puVar17 + 1);
  case 0xfffffffe:
    *(undefined1 *)((long)puVar17 + 2) = 0x30;
    puVar17 = (undefined4 *)((long)puVar17 + 1);
  case 0xffffffff:
    *(undefined1 *)((long)puVar17 + 2) = uVar23;
    *(ushort *)((long)puVar17 + 3) = uVar9;
    *(undefined1 *)((long)puVar17 + 5) = uVar7;
    *(undefined2 *)((long)puVar17 + 6) = uVar10;
    puVar18 = (undefined1 *)((long)puVar17 + 9);
    puVar13 = puVar18 + -(long)param_2;
    do {
      pcVar2 = puVar18 + -2;
      puVar13 = puVar13 + -1;
      puVar18 = puVar18 + -1;
    } while (*pcVar2 == '0');
    *puVar18 = 0;
    return puVar13;
  }
  if (cVar4 == '.') {
    puVar21 = (undefined4 *)((long)puVar21 + -1);
  }
code_r0x005753d0:
  *(undefined1 *)puVar21 = 0;
  return (undefined1 *)((long)puVar21 - (long)param_2);
}



/* Entry: 00575540; end: 00575d2f;  */

undefined8 FUN_00575540(byte *param_1,long param_2,int *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  
  *param_3 = 0;
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  pbVar6 = param_1;
  if (param_2 != 0) {
    do {
      if (((byte)(&UNK_00811470)[*pbVar6] >> 3 & 1) == 0) break;
      pbVar6 = pbVar6 + 1;
    } while (pbVar6 < param_1 + param_2);
  }
  do {
    lVar5 = param_2;
    if (param_1 + lVar5 <= pbVar6) {
      return 0;
    }
    param_2 = lVar5 + -1;
  } while (((byte)(&UNK_00811470)[(param_1 + lVar5)[-1]] >> 3 & 1) != 0);
  bVar2 = *pbVar6;
  if (((bVar2 == 0x2d) || (bVar2 == 0x2b)) && (pbVar6 = pbVar6 + 1, param_1 + lVar5 <= pbVar6)) {
    return 0;
  }
  if (param_4 == 0x10) {
    if (((1 < (long)(param_1 + (param_2 - (long)pbVar6) + 1)) && (*pbVar6 == 0x30)) &&
       ((pbVar6[1] | 0x20) == 0x78)) {
joined_r0x00575650:
      pbVar6 = pbVar6 + 2;
      if (param_1 + lVar5 <= pbVar6) {
        return 0;
      }
    }
    param_4 = 0x10;
  }
  else if (param_4 == 0) {
    if ((long)(param_1 + (param_2 - (long)pbVar6) + 1) < 2) {
      param_4 = 10;
      if (param_1 + (param_2 - (long)pbVar6) == (byte *)0x0) {
        bVar1 = *pbVar6;
        if (bVar1 == 0x30) {
          pbVar6 = pbVar6 + 1;
        }
        param_4 = 8;
        if (bVar1 != 0x30) {
          param_4 = 10;
        }
      }
    }
    else if (*pbVar6 == 0x30) {
      if ((pbVar6[1] | 0x20) == 0x78) goto joined_r0x00575650;
      param_4 = 8;
      pbVar6 = pbVar6 + 1;
    }
    else {
      param_4 = 10;
    }
  }
  else if (0x22 < param_4 - 2) {
    return 0;
  }
  param_1 = param_1 + lVar5;
  if (bVar2 == 0x2d) {
    if (param_1 == pbVar6) {
LAB_00575720:
      iVar8 = 0;
    }
    else {
      iVar8 = 0;
      do {
        pbVar7 = pbVar6 + 1;
        cVar3 = (&UNK_00814cd0)[*pbVar6];
        if ((int)param_4 <= (int)cVar3) goto LAB_00575780;
        if (iVar8 < *(int *)(&UNK_00814e64 + (ulong)param_4 * 4)) {
LAB_00575788:
          uVar4 = 0;
          iVar8 = -0x80000000;
          goto LAB_00575728;
        }
        if ((int)(iVar8 * param_4) < (int)((int)cVar3 | 0x80000000U)) goto LAB_00575788;
        iVar8 = iVar8 * param_4 - (int)cVar3;
        pbVar6 = pbVar7;
      } while (pbVar7 < param_1);
    }
  }
  else {
    if (param_1 == pbVar6) goto LAB_00575720;
    iVar8 = 0;
    do {
      pbVar7 = pbVar6 + 1;
      cVar3 = (&UNK_00814cd0)[*pbVar6];
      if ((int)param_4 <= (int)cVar3) goto LAB_00575780;
      if (*(int *)(&UNK_00814dd0 + (ulong)param_4 * 4) < iVar8) {
LAB_00575794:
        uVar4 = 0;
        iVar8 = 0x7fffffff;
        goto LAB_00575728;
      }
      if ((int)((int)cVar3 ^ 0x7fffffffU) < (int)(iVar8 * param_4)) goto LAB_00575794;
      iVar8 = iVar8 * param_4 + (int)cVar3;
      pbVar6 = pbVar7;
    } while (pbVar7 < param_1);
  }
  uVar4 = 1;
LAB_00575728:
  *param_3 = iVar8;
  return uVar4;
LAB_00575780:
  uVar4 = 0;
  goto LAB_00575728;
}



/* Entry: 00575d30; end: 00575ddb;  */

void FUN_00575d30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_0053316c(param_1,param_3[1] + param_2[1]);
  puVar1 = (undefined8 *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    puVar1 = param_1;
  }
  lVar2 = param_2[1];
  if (lVar2 != 0) {
    _memcpy(puVar1,*param_2,lVar2);
  }
  if (param_3[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_0099a3f8)((long)puVar1 + lVar2,*param_3);
    return;
  }
  return;
}



/* Entry: 00575ddc; end: 00575ebb;  */

void FUN_00575ddc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_0053316c(param_1,param_3[1] + param_2[1] + param_4[1]);
  puVar1 = (undefined8 *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    puVar1 = param_1;
  }
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    _memcpy(puVar1,*param_2,lVar3);
  }
  lVar2 = param_3[1];
  if (lVar2 != 0) {
    _memcpy((long)puVar1 + lVar3,*param_3,lVar2);
  }
  if (param_4[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_0099a3f8)((long)puVar1 + lVar3 + lVar2,*param_4);
    return;
  }
  return;
}



/* Entry: 00575ebc; end: 00575fc3;  */

void FUN_00575ebc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_0053316c(param_1,param_3[1] + param_2[1] + param_4[1] + param_5[1]);
  puVar1 = (undefined8 *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    puVar1 = param_1;
  }
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    _memcpy(puVar1,*param_2,lVar3);
  }
  lVar2 = param_3[1];
  if (lVar2 != 0) {
    _memcpy((long)puVar1 + lVar3,*param_3,lVar2);
  }
  lVar2 = (long)puVar1 + lVar3 + lVar2;
  lVar3 = param_4[1];
  if (lVar3 != 0) {
    _memcpy(lVar2,*param_4,lVar3);
  }
  if (param_5[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_0099a3f8)(lVar2 + lVar3,*param_5);
    return;
  }
  return;
}



/* Entry: 00575fc4; end: 005760ef;  */

void FUN_00575fc4(undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar8 = param_3 * 0x10;
  lVar4 = 0;
  if (param_3 != 0) {
    if (lVar8 - 0x10U < 0x40) {
      lVar4 = 0;
      lVar5 = param_2;
    }
    else {
      uVar1 = (lVar8 - 0x10U >> 4) + 1;
      uVar2 = uVar1 & 3;
      uVar3 = 4;
      if (uVar2 != 0) {
        uVar3 = uVar2;
      }
      lVar4 = uVar1 - uVar3;
      lVar5 = param_2 + lVar4 * 0x10;
      plVar6 = (long *)(param_2 + 0x28);
      lVar9 = 0;
      lVar10 = 0;
      lVar11 = 0;
      lVar12 = 0;
      do {
        lVar9 = plVar6[-4] + lVar9;
        lVar10 = plVar6[-2] + lVar10;
        lVar11 = *plVar6 + lVar11;
        lVar12 = plVar6[2] + lVar12;
        plVar6 = plVar6 + 8;
        lVar4 = lVar4 + -4;
      } while (lVar4 != 0);
      lVar4 = lVar11 + lVar9 + lVar12 + lVar10;
    }
    do {
      lVar4 = *(long *)(lVar5 + 8) + lVar4;
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != param_2 + lVar8);
  }
  FUN_0053316c(param_1,lVar4);
  if (param_3 != 0) {
    puVar7 = (undefined8 *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      puVar7 = param_1;
    }
    plVar6 = (long *)(param_2 + 8);
    do {
      lVar4 = *plVar6;
      if (lVar4 != 0) {
        _memcpy(puVar7,plVar6[-1],lVar4);
        puVar7 = (undefined8 *)((long)puVar7 + lVar4);
      }
      plVar6 = plVar6 + 2;
      lVar8 = lVar8 + -0x10;
    } while (lVar8 != 0);
  }
  return;
}



/* Entry: 005760f0; end: 005761af;  */

void FUN_005760f0(long *param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  
  uVar5 = (ulong)*(char *)((long)param_1 + 0x17);
  if ((long)uVar5 < 0) {
    uVar5 = param_1[1];
    uVar3 = param_2[1] + uVar5;
    if (uVar3 <= uVar5) {
      plVar4 = (long *)*param_1;
      param_1[1] = uVar3;
      goto LAB_00576168;
    }
  }
  else {
    uVar3 = param_2[1] + uVar5;
    if (uVar3 <= uVar5) {
      *(char *)((long)param_1 + 0x17) = (char)uVar3;
      plVar4 = param_1;
LAB_00576168:
      *(undefined1 *)((long)plVar4 + uVar3) = 0;
      cVar1 = *(char *)((long)param_1 + 0x17);
      goto joined_r0x00576158;
    }
  }
  func_0x005763ec(param_1,uVar3 - uVar5);
  cVar1 = *(char *)((long)param_1 + 0x17);
joined_r0x00576158:
  if (cVar1 < '\0') {
    param_1 = (long *)*param_1;
    lVar2 = param_2[1];
  }
  else {
    lVar2 = param_2[1];
  }
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_0099a3f8)((long)param_1 + uVar5,*param_2);
    return;
  }
  return;
}



/* Entry: 005761b0; end: 005762ab;  */

void FUN_005761b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = (ulong)*(char *)((long)param_1 + 0x17);
  if ((long)uVar4 < 0) {
    uVar4 = param_1[1];
    uVar2 = param_2[1] + uVar4 + param_3[1];
    if (uVar4 < uVar2) goto LAB_00576228;
    puVar3 = (undefined8 *)*param_1;
    param_1[1] = uVar2;
  }
  else {
    uVar2 = param_2[1] + uVar4 + param_3[1];
    if (uVar4 < uVar2) {
LAB_00576228:
      func_0x005763ec(param_1,uVar2 - uVar4);
      cVar1 = *(char *)((long)param_1 + 0x17);
      goto joined_r0x00576250;
    }
    *(char *)((long)param_1 + 0x17) = (char)uVar2;
    puVar3 = param_1;
  }
  *(undefined1 *)((long)puVar3 + uVar2) = 0;
  cVar1 = *(char *)((long)param_1 + 0x17);
joined_r0x00576250:
  if (cVar1 < '\0') {
    param_1 = (undefined8 *)*param_1;
  }
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    _memcpy((long)param_1 + uVar4,*param_2,lVar5);
  }
  if (param_3[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_0099a3f8)((long)param_1 + uVar4 + lVar5,*param_3);
    return;
  }
  return;
}



/* Entry: 005762ac; end: 00576577;  */

void FUN_005762ac(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = (ulong)*(char *)((long)param_1 + 0x17);
  if ((long)uVar5 < 0) {
    uVar5 = param_1[1];
    uVar2 = param_2[1] + uVar5 + param_3[1] + param_4[1];
    if (uVar5 < uVar2) goto LAB_00576344;
    puVar3 = (undefined8 *)*param_1;
    param_1[1] = uVar2;
  }
  else {
    uVar2 = param_2[1] + uVar5 + param_3[1] + param_4[1];
    if (uVar5 < uVar2) {
LAB_00576344:
      func_0x005763ec(param_1,uVar2 - uVar5);
      cVar1 = *(char *)((long)param_1 + 0x17);
      goto joined_r0x0057636c;
    }
    *(char *)((long)param_1 + 0x17) = (char)uVar2;
    puVar3 = param_1;
  }
  *(undefined1 *)((long)puVar3 + uVar2) = 0;
  cVar1 = *(char *)((long)param_1 + 0x17);
joined_r0x0057636c:
  if (cVar1 < '\0') {
    param_1 = (undefined8 *)*param_1;
  }
  lVar6 = param_2[1];
  if (lVar6 != 0) {
    _memcpy((long)param_1 + uVar5,*param_2,lVar6);
  }
  lVar6 = (long)param_1 + uVar5 + lVar6;
  lVar4 = param_3[1];
  if (lVar4 != 0) {
    _memcpy(lVar6,*param_3,lVar4);
  }
  if (param_4[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_0099a3f8)(lVar6 + lVar4,*param_4);
    return;
  }
  return;
}



/* Entry: 00576578; end: 00576603;  */

undefined1  [16] FUN_00576578(char *param_1,long param_2,ulong param_3,ulong param_4,ulong param_5)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  uVar6 = param_3 - param_4;
  if (param_3 < param_4) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = param_2 + param_3;
    return auVar13;
  }
  lVar4 = (long)*param_1;
  lVar5 = param_2 + param_4;
  _memchr();
  uVar7 = lVar5 - param_2;
  if (lVar5 == 0 || uVar7 == 0xffffffffffffffff) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = param_2 + param_3;
    return auVar14;
  }
  if (uVar7 <= param_3) {
    auVar15[8] = param_3 != uVar7;
    auVar15._0_8_ = param_2 + uVar7;
    auVar15._9_7_ = 0;
    return auVar15;
  }
  pcVar3 = "string_view::substr";
  FUN_00435534();
  lVar5 = lVar4;
  if (uVar6 == 0) goto LAB_00576798;
  lVar8 = 0;
  uVar7 = 0;
LAB_00576650:
  do {
    uVar9 = uVar7;
    if (*(char *)(lVar4 + uVar7) == '$') {
      uVar9 = uVar7 + 1;
      if (uVar6 <= uVar9) goto LAB_00576798;
      bVar1 = *(byte *)(lVar4 + uVar9);
      if (bVar1 - 0x30 < 10) {
        if (param_5 <= (ulong)bVar1 - 0x30) goto LAB_00576798;
        lVar8 = *(long *)(param_4 + ((ulong)bVar1 - 0x30) * 0x10 + 8) + lVar8;
        uVar7 = uVar7 + 2;
        if (uVar6 <= uVar7) break;
        goto LAB_00576650;
      }
      if (bVar1 != 0x24) goto LAB_00576798;
    }
    lVar8 = lVar8 + 1;
    uVar7 = uVar9 + 1;
  } while (uVar7 < uVar6);
  if (lVar8 == 0) goto LAB_00576798;
  uVar7 = (ulong)pcVar3[0x17];
  if ((long)uVar7 < 0) {
    uVar7 = *(ulong *)(pcVar3 + 8);
    uVar9 = uVar7 + lVar8;
    if (uVar7 < uVar9) goto LAB_005766d0;
    pcVar10 = *(char **)pcVar3;
    *(ulong *)(pcVar3 + 8) = uVar9;
LAB_005766f4:
    pcVar10[uVar9] = '\0';
    cVar2 = pcVar3[0x17];
  }
  else {
    uVar9 = lVar8 + uVar7;
    if (uVar9 <= uVar7) {
      pcVar3[0x17] = (char)uVar9;
      pcVar10 = pcVar3;
      goto LAB_005766f4;
    }
LAB_005766d0:
    lVar5 = uVar9 - uVar7;
    func_0x005763ec();
    cVar2 = pcVar3[0x17];
  }
  if (cVar2 < '\0') {
    pcVar3 = *(char **)pcVar3;
  }
  uVar9 = 0;
  pcVar10 = pcVar3 + uVar7;
  do {
    if (*(char *)(lVar4 + uVar9) == '$') {
      uVar7 = uVar9 + 1;
      bVar1 = *(byte *)(lVar4 + uVar7);
      if (bVar1 - 0x30 < 10) {
        lVar8 = param_4 + (ulong)bVar1 * 0x10;
        lVar12 = *(long *)(lVar8 + -0x2f8);
        if (lVar12 != 0) {
          lVar5 = *(long *)(lVar8 + -0x300);
          pcVar3 = pcVar10;
          _memmove(pcVar10,lVar5,lVar12);
        }
        pcVar11 = pcVar10 + lVar12;
        uVar9 = uVar7;
      }
      else {
        pcVar11 = pcVar10;
        if (bVar1 == 0x24) {
          *pcVar10 = '$';
          pcVar11 = pcVar10 + 1;
          uVar9 = uVar7;
        }
      }
    }
    else {
      pcVar11 = pcVar10 + 1;
      *pcVar10 = *(char *)(lVar4 + uVar9);
    }
    uVar9 = uVar9 + 1;
    pcVar10 = pcVar11;
  } while (uVar9 < uVar6);
LAB_00576798:
  auVar16._8_8_ = lVar5;
  auVar16._0_8_ = pcVar3;
  return auVar16;
}



/* Entry: 00576604; end: 0057679b;  */

void FUN_00576604(undefined8 *param_1,long param_2,ulong param_3,long param_4,ulong param_5)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  
  if (param_3 == 0) {
    return;
  }
  lVar3 = 0;
  uVar5 = 0;
  do {
    while (uVar4 = uVar5, *(char *)(param_2 + uVar5) != '$') {
LAB_00576640:
      lVar3 = lVar3 + 1;
      uVar5 = uVar4 + 1;
      if (param_3 <= uVar5) goto LAB_0057669c;
    }
    uVar4 = uVar5 + 1;
    if (param_3 <= uVar4) {
      return;
    }
    bVar1 = *(byte *)(param_2 + uVar4);
    if (9 < bVar1 - 0x30) {
      if (bVar1 != 0x24) {
        return;
      }
      goto LAB_00576640;
    }
    if (param_5 <= (ulong)bVar1 - 0x30) {
      return;
    }
    lVar3 = *(long *)(param_4 + ((ulong)bVar1 - 0x30) * 0x10 + 8) + lVar3;
    uVar5 = uVar5 + 2;
  } while (uVar5 < param_3);
LAB_0057669c:
  if (lVar3 == 0) {
    return;
  }
  uVar5 = (ulong)*(char *)((long)param_1 + 0x17);
  if ((long)uVar5 < 0) {
    uVar5 = param_1[1];
    uVar4 = uVar5 + lVar3;
    if (uVar4 <= uVar5) {
      puVar6 = (undefined8 *)*param_1;
      param_1[1] = uVar4;
      goto LAB_005766f4;
    }
  }
  else {
    uVar4 = lVar3 + uVar5;
    if (uVar4 <= uVar5) {
      *(char *)((long)param_1 + 0x17) = (char)uVar4;
      puVar6 = param_1;
LAB_005766f4:
      *(undefined1 *)((long)puVar6 + uVar4) = 0;
      cVar2 = *(char *)((long)param_1 + 0x17);
      goto joined_r0x005766fc;
    }
  }
  func_0x005763ec(param_1,uVar4 - uVar5);
  cVar2 = *(char *)((long)param_1 + 0x17);
joined_r0x005766fc:
  if (cVar2 < '\0') {
    param_1 = (undefined8 *)*param_1;
  }
  uVar4 = 0;
  pcVar8 = (char *)((long)param_1 + uVar5);
  do {
    if (*(char *)(param_2 + uVar4) == '$') {
      uVar5 = uVar4 + 1;
      bVar1 = *(byte *)(param_2 + uVar5);
      if (bVar1 - 0x30 < 10) {
        lVar3 = param_4 + (ulong)bVar1 * 0x10;
        lVar9 = *(long *)(lVar3 + -0x2f8);
        if (lVar9 != 0) {
          _memmove(pcVar8,*(undefined8 *)(lVar3 + -0x300),lVar9);
        }
        pcVar7 = pcVar8 + lVar9;
        uVar4 = uVar5;
      }
      else {
        pcVar7 = pcVar8;
        if (bVar1 == 0x24) {
          *pcVar8 = '$';
          pcVar7 = pcVar8 + 1;
          uVar4 = uVar5;
        }
      }
    }
    else {
      pcVar7 = pcVar8 + 1;
      *pcVar8 = *(char *)(param_2 + uVar4);
    }
    uVar4 = uVar4 + 1;
    pcVar8 = pcVar7;
  } while (uVar4 < param_3);
  return;
}



/* Entry: 0057679c; end: 005769bf;  */

undefined1 *
FUN_0057679c(uint *param_1,ulong param_2,undefined1 *param_3,undefined1 *param_4,long param_5,
            int param_6)

{
  ushort uVar1;
  uint uVar2;
  code *pcVar4;
  uint *puVar5;
  undefined1 *puVar7;
  undefined1 uVar8;
  uint uVar3;
  uint *puVar6;
  
  if ((ulong)((long)param_4 * 3) < param_2 << 2) {
    return (undefined1 *)0x0;
  }
  puVar7 = param_3;
  if ((param_2 < 3) || ((long)param_2 < 4)) {
    if ((long)param_2 < 2) goto LAB_00576838;
LAB_00576898:
    if (param_2 == 2) {
      if (param_4 < (undefined1 *)0x3) {
        return (undefined1 *)0x0;
      }
      uVar3 = (ushort)*param_1 & 0xff00ff;
      uVar2 = (uint)(ushort)((ushort)*param_1 >> 8) | uVar3 << 8;
      *puVar7 = *(undefined1 *)(param_5 + (ulong)(uVar3 >> 2));
      puVar7[1] = *(undefined1 *)(param_5 + ((ulong)(uVar2 >> 4) & 0x3f));
      puVar7[2] = *(undefined1 *)(param_5 + ((ulong)(uVar2 << 2) & 0x3c));
      if (param_6 == 0) {
        return puVar7 + (3 - (long)param_3);
      }
      if (param_4 == (undefined1 *)0x3) {
        return (undefined1 *)0x0;
      }
      uVar8 = 0x3d;
    }
    else {
      if (param_2 != 3) {
LAB_0057699c:
        FUN_00584c60(3,"escaping.cc",0xc6,"Logic problem? szsrc = %zu");
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x5769c0);
        (*pcVar4)();
      }
      if (param_4 < (undefined1 *)0x4) {
        return (undefined1 *)0x0;
      }
      uVar3 = *param_1;
      uVar1 = *(ushort *)((long)param_1 + 1);
      uVar2 = (uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8;
      *puVar7 = *(undefined1 *)(param_5 + (ulong)(byte)((byte)uVar3 >> 2));
      puVar7[1] = *(undefined1 *)
                   (param_5 +
                   (ulong)(((uint3)(CONCAT14((byte)uVar3,uVar2 << 0x10) >> 0x10) & 0x3f000) >> 0xc))
      ;
      puVar7[2] = *(undefined1 *)(param_5 + ((ulong)(uVar2 >> 6) & 0x3f));
      uVar8 = *(undefined1 *)(param_5 + ((ulong)(uVar1 >> 8) & 0x3f));
    }
    puVar7[3] = uVar8;
  }
  else {
    puVar6 = param_1;
    do {
      puVar5 = (uint *)((long)puVar6 + 3);
      uVar2 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
      uVar3 = uVar2 >> 0x10 | uVar2 << 0x10;
      *puVar7 = *(undefined1 *)(param_5 + (ulong)((uVar2 & 0xffff) >> 10));
      puVar7[1] = *(undefined1 *)(param_5 + ((ulong)((uVar2 & 0xffff) >> 4) & 0x3f));
      puVar7[2] = *(undefined1 *)(param_5 + ((ulong)(uVar3 >> 0xe) & 0x3f));
      puVar7[3] = *(undefined1 *)(param_5 + ((ulong)(uVar3 >> 8) & 0x3f));
      puVar7 = puVar7 + 4;
      puVar6 = puVar5;
    } while (puVar5 < (uint *)((long)param_1 + (param_2 - 3)));
    param_4 = param_3 + ((long)param_4 - (long)puVar7);
    param_2 = (long)param_1 + (param_2 - (long)puVar5);
    param_1 = puVar5;
    if (1 < (long)param_2) goto LAB_00576898;
LAB_00576838:
    if (param_2 == 0) goto LAB_00576964;
    if (param_2 != 1) goto LAB_0057699c;
    if (param_4 < (undefined1 *)0x2) {
      return (undefined1 *)0x0;
    }
    uVar2 = *param_1;
    *puVar7 = *(undefined1 *)(param_5 + (ulong)(byte)((byte)uVar2 >> 2));
    puVar7[1] = *(undefined1 *)(param_5 + ((ulong)(byte)uVar2 & 3) * 0x10);
    if (param_6 == 0) {
      return puVar7 + (2 - (long)param_3);
    }
    if (((ulong)param_4 & 0xfffffffffffffffe) == 2) {
      return (undefined1 *)0x0;
    }
    *(undefined2 *)(puVar7 + 2) = 0x3d3d;
  }
  puVar7 = puVar7 + 4;
LAB_00576964:
  return puVar7 + -(long)param_3;
}



/* Entry: 005769c0; end: 00576a23;  */

uint FUN_005769c0(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = iRam0000000000b6b690;
  if (iRam0000000000b6b68c != 0xdd) {
    FUN_00576a24(0xb6b68c);
    iVar4 = iRam0000000000b6b690;
  }
  do {
    uVar2 = *param_1;
    iVar3 = iVar4 + -1;
    if ((uVar2 & 1) == 0) {
      return uVar2;
    }
    bVar1 = 0 < iVar4;
    iVar4 = iVar3;
  } while (iVar3 != 0 && bVar1);
  return uVar2;
}



/* Entry: 00576a24; end: 00576d07;  */

/* WARNING: Removing unreachable block (ram,0x00576ac4) */
/* WARNING: Removing unreachable block (ram,0x00576aac) */

void FUN_00576a24(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  
  do {
    if (*param_1 != 0) {
      iVar6 = 0;
      ClearExclusiveLocal();
      goto LAB_00576a80;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 0x65c2937b;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_00576b1c;
LAB_00576a80:
  do {
    iVar1 = *param_1;
    if (iVar1 == 0) {
      puVar4 = &UNK_00815220;
      iVar5 = 0x65c2937b;
LAB_00576adc:
      do {
        if (*param_1 != iVar1) {
          ClearExclusiveLocal();
          goto LAB_00576a80;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar3) {
          *param_1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      if (iVar1 != 0xdd) {
        if (iVar1 == 0x65c2937b) {
          puVar4 = &UNK_0081522c;
          iVar5 = 0x5a308d2;
          goto LAB_00576adc;
        }
        iVar6 = iVar6 + 1;
        FUN_00576d44(param_1,iVar1,iVar6,0);
        goto LAB_00576a80;
      }
      puVar4 = &UNK_00815238;
    }
  } while (puVar4[8] != '\x01');
  if (iVar1 != 0) {
    return;
  }
LAB_00576b1c:
  if (iRam0000000000b6b698 != 0xdd) {
    func_0x00576bb4(0xb6b698);
  }
  uRam0000000000b6b690 = 1000;
  if (iRam0000000000b6b694 < 2) {
    uRam0000000000b6b690 = 1;
  }
  do {
    iVar6 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 0xdd;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar6 != 0x5a308d2) {
    return;
  }
  return;
}



/* Entry: 00576d08; end: 00576d43;  */

long * FUN_00576d08(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    (*(code *)param_1[1])(lVar1);
  }
  return param_1;
}



/* Entry: 00576d44; end: 00576dff;  */

void FUN_00576d44(undefined4 *param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uStack_30;
  ulong uStack_28;
  
  puVar3 = &uStack_30;
  ___error();
  uVar1 = *param_1;
  if (param_3 != 0) {
    if (param_3 == 1) {
      _sched_yield();
    }
    else {
      lRam0000000000b62918 = lRam0000000000b62918 * 0x5deece66d + 0xb;
      if (0x1f < param_3) {
        param_3 = 0x20;
      }
      uVar2 = 0x20000 << (ulong)(param_3 >> 3 & 0x1f);
      uStack_28 = (ulong)(uVar2 - 1 & (uint)lRam0000000000b62918 | uVar2);
      uStack_30 = 0;
      _nanosleep(&uStack_30,0);
      param_1 = (undefined4 *)puVar3;
    }
  }
  ___error();
  *param_1 = uVar1;
  return;
}



/* Entry: 00576e00; end: 00576e03;  */

void FUN_00576e00(void)

{
  return;
}



/* Entry: 00576e04; end: 0057709f;  */

int FUN_00576e04(int *param_1,uint param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  char *pcVar5;
  ulong uVar6;
  int iVar7;
  
  if (param_2 == 0) {
    iVar7 = 1;
    do {
      FUN_00576d44(param_1,*param_1,iVar7,param_4);
      iVar7 = iVar7 + 1;
    } while( true );
  }
  iVar7 = 0;
LAB_00576e40:
  do {
    iVar1 = *param_1;
    pcVar5 = (char *)(param_3 + 8);
    uVar6 = (ulong)param_2;
    do {
      if (iVar1 == *(int *)(pcVar5 + -8)) {
        iVar2 = *(int *)(pcVar5 + -4);
        if (iVar2 == iVar1) goto LAB_00576e34;
        goto LAB_00576e88;
      }
      pcVar5 = pcVar5 + 0xc;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    iVar7 = iVar7 + 1;
    FUN_00576d44(param_1,iVar1,iVar7,param_4);
  } while( true );
  while( true ) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = iVar2;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') break;
LAB_00576e88:
    if (*param_1 != iVar1) {
      ClearExclusiveLocal();
      goto LAB_00576e40;
    }
  }
LAB_00576e34:
  if (*pcVar5 == '\x01') {
    return iVar1;
  }
  goto LAB_00576e40;
}



/* Entry: 005770a0; end: 0057711b;  */

int FUN_005770a0(char *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = &UNK_00815272;
  _memchr(&UNK_00815272,(long)*param_1,0xb);
  if (puVar2 != (undefined *)0x0) {
    puVar3 = &UNK_00815272;
    _memchr(&UNK_00815272,(long)param_1[1],0xb);
    iVar1 = (int)puVar2 * 10 + -0x58e8ae6 + (int)puVar3;
    if (puVar3 == (undefined *)0x0) {
      iVar1 = -1;
    }
    return iVar1;
  }
  return -1;
}



/* Entry: 0057711c; end: 00577373;  */

void FUN_0057711c(undefined8 *param_1,ulong *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  dword *pdVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *extraout_x8;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  long lStack_38;
  
  puVar9 = &uStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar11 = *param_2;
  if ((uVar11 == 0) || (uVar11 - 0x15181 < 0xfffffffffffd5cff)) {
    *(undefined1 *)((long)param_1 + 0x17) = 3;
    *(undefined4 *)param_1 = 0x435455;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
      return;
    }
LAB_0057736c:
    ___stack_chk_fail();
  }
  else {
    uStack_47 = 0x2d;
    if (-1 < (long)uVar11) {
      uStack_47 = 0x2b;
    }
    iVar6 = (int)uVar11 / 0x3c;
    iVar4 = (int)uVar11 % 0x3c;
    bVar1 = 0 < iVar4;
    iVar3 = iVar4 + -0x3c;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    if ((uVar11 & 0x8000000000000000) != 0) {
      iVar4 = -iVar3;
      iVar6 = -iVar6 - (uint)bVar1;
    }
    uVar2 = iVar6 + ((uint)((short)iVar6 * -0x7777) >> 0x10);
    iVar3 = ((int)(uVar2 * 0x10000) >> 0x15) + ((uVar2 & 0x8000) >> 0xf);
    iVar5 = iVar6 + iVar3 * -0x3c;
    uStack_48 = 0x43;
    uStack_50 = 0x54552f6465786946;
    uVar2 = iVar6 + ((uint)(iVar6 * -0x258b) >> 0x10);
    uStack_46 = (&UNK_00815272)[(int)(((int)(uVar2 * 0x10000) >> 0x19) + ((uVar2 & 0x8000) >> 0xf))]
    ;
    uStack_45 = (&UNK_00815272)
                [(char)((char)iVar3 +
                       (((byte)((uint)(iVar3 * 0x67) >> 0xf) & 1) +
                       (char)((uint)(iVar3 * 0x670000 >> 0x18) >> 2)) * -10)];
    uStack_44 = 0x3a;
    iVar3 = (int)(short)iVar5;
    iVar3 = ((uint)(iVar3 * 0x67) >> 0xf & 1) + (iVar3 * 0x670000 >> 0x1a);
    uStack_43 = (&UNK_00815272)[iVar3];
    uStack_42 = (&UNK_00815272)[(char)((char)iVar5 + (char)iVar3 * -10)];
    uStack_41 = 0x3a;
    iVar3 = (int)(char)iVar4 / 10;
    uStack_40 = (&UNK_00815272)[iVar3];
    uStack_3f = (&UNK_00815272)[(char)((char)iVar4 + (char)iVar3 * -10)];
    uStack_3e = 0;
    _strlen();
    if (puVar9 < (undefined1 *)0x7ffffffffffffff7) {
      if ((undefined1 *)((long)&MACH_HEADER.sizeofcmds + 2) < puVar9) {
        pdVar7 = &MACH_HEADER.flags;
        if ((dword *)((ulong)puVar9 | 7) != (dword *)0x17) {
          pdVar7 = (dword *)((ulong)puVar9 | 7);
        }
        puVar10 = (undefined8 *)((long)pdVar7 + 1);
        __Znwm();
        param_1[1] = puVar9;
        param_1[2] = (ulong)((long)pdVar7 + 1) | 0x8000000000000000;
        *param_1 = puVar10;
LAB_00577340:
        _memcpy(puVar10,&uStack_50,puVar9);
        param_1 = puVar10;
      }
      else {
        *(char *)((long)param_1 + 0x17) = (char)puVar9;
        puVar10 = param_1;
        if (puVar9 != (undefined8 *)0x0) goto LAB_00577340;
      }
      *(undefined1 *)((long)param_1 + (long)puVar9) = 0;
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
        return;
      }
      goto LAB_0057736c;
    }
  }
  FUN_0040d740();
  FUN_0057711c();
  if (*(char *)((long)extraout_x8 + 0x17) < '\0') {
    if (extraout_x8[1] != 0x12) {
      return;
    }
  }
  else if (*(char *)((long)extraout_x8 + 0x17) != '\x12') {
    return;
  }
  FUN_0052fc60(extraout_x8,0,9);
  uVar11 = extraout_x8[1];
  if (-1 < (char)*(byte *)((long)extraout_x8 + 0x17)) {
    uVar11 = (ulong)*(byte *)((long)extraout_x8 + 0x17);
  }
  if (5 < uVar11) {
    FUN_0052fc60(extraout_x8,6,1);
    uVar11 = extraout_x8[1];
    if (-1 < (char)*(byte *)((long)extraout_x8 + 0x17)) {
      uVar11 = (ulong)*(byte *)((long)extraout_x8 + 0x17);
    }
    if (2 < uVar11) {
      FUN_0052fc60(extraout_x8,3,1);
      if ((char)*(byte *)((long)extraout_x8 + 0x17) < '\0') {
        if (*(char *)(*extraout_x8 + 5) != '0') {
          return;
        }
        if (*(char *)(*extraout_x8 + 6) != '0') {
          return;
        }
        if ((ulong)extraout_x8[1] < 5) goto LAB_005774d8;
      }
      else {
        if (*(char *)((long)extraout_x8 + 5) != '0') {
          return;
        }
        if (*(char *)((long)extraout_x8 + 6) != '0') {
          return;
        }
        if (*(byte *)((long)extraout_x8 + 0x17) < 5) goto LAB_005774d8;
      }
      FUN_0052fc60(extraout_x8,5,2);
      if ((char)*(byte *)((long)extraout_x8 + 0x17) < '\0') {
        if (*(char *)(*extraout_x8 + 3) != '0') {
          return;
        }
        if (*(char *)(*extraout_x8 + 4) != '0') {
          return;
        }
        if ((ulong)extraout_x8[1] < 3) goto LAB_005774d8;
      }
      else {
        if (*(char *)((long)extraout_x8 + 3) != '0') {
          return;
        }
        if (*(char *)((long)extraout_x8 + 4) != '0') {
          return;
        }
        if (*(byte *)((long)extraout_x8 + 0x17) < 3) goto LAB_005774d8;
      }
      FUN_0052fc60(extraout_x8,3,2);
      return;
    }
  }
LAB_005774d8:
  FUN_00461b78();
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x5774e0);
  (*pcVar8)();
}



/* Entry: 00577374; end: 00577507;  */

void FUN_00577374(long *param_1)

{
  ulong uVar1;
  code *pcVar2;
  
  FUN_0057711c();
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    if (param_1[1] != 0x12) {
      return;
    }
  }
  else if (*(char *)((long)param_1 + 0x17) != '\x12') {
    return;
  }
  FUN_0052fc60(param_1,0,9);
  uVar1 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (5 < uVar1) {
    FUN_0052fc60(param_1,6,1);
    uVar1 = param_1[1];
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    }
    if (2 < uVar1) {
      FUN_0052fc60(param_1,3,1);
      if ((char)*(byte *)((long)param_1 + 0x17) < '\0') {
        if (*(char *)(*param_1 + 5) != '0') {
          return;
        }
        if (*(char *)(*param_1 + 6) != '0') {
          return;
        }
        if ((ulong)param_1[1] < 5) goto LAB_005774d8;
      }
      else {
        if (*(char *)((long)param_1 + 5) != '0') {
          return;
        }
        if (*(char *)((long)param_1 + 6) != '0') {
          return;
        }
        if (*(byte *)((long)param_1 + 0x17) < 5) goto LAB_005774d8;
      }
      FUN_0052fc60(param_1,5,2);
      if ((char)*(byte *)((long)param_1 + 0x17) < '\0') {
        if (*(char *)(*param_1 + 3) != '0') {
          return;
        }
        if (*(char *)(*param_1 + 4) != '0') {
          return;
        }
        if ((ulong)param_1[1] < 3) goto LAB_005774d8;
      }
      else {
        if (*(char *)((long)param_1 + 3) != '0') {
          return;
        }
        if (*(char *)((long)param_1 + 4) != '0') {
          return;
        }
        if (*(byte *)((long)param_1 + 0x17) < 3) goto LAB_005774d8;
      }
      FUN_0052fc60(param_1,3,2);
      return;
    }
  }
LAB_005774d8:
  FUN_00461b78();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x5774e0);
  (*pcVar2)();
}



/* Entry: 00577508; end: 0057924f;  */

void FUN_00577508(undefined8 *param_1,byte *param_2,undefined8 param_3,ulong *param_4,
                 undefined8 param_5)

{
  bool bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  byte bVar5;
  undefined1 uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  dword *pdVar11;
  code *pcVar12;
  char *pcVar13;
  undefined *puVar14;
  undefined8 *******pppppppuVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  byte *pbVar19;
  undefined1 *puVar20;
  undefined1 uVar21;
  undefined1 *puVar22;
  uint uVar23;
  long lVar24;
  uint uVar25;
  ulong uVar26;
  byte *pbVar27;
  byte *pbVar28;
  undefined1 *puVar29;
  undefined8 *puVar30;
  byte *pbVar31;
  byte *pbVar32;
  undefined1 auVar33 [16];
  undefined8 ******ppppppuStack_f8;
  byte *pbStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  byte bStack_a0;
  undefined4 uStack_9f;
  uint uStack_98;
  byte bStack_94;
  undefined1 uStack_79;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar18 = (ulong)(char)param_2[0x17];
  if (((long)uVar18 < 0) && (uVar18 = *(ulong *)(param_2 + 8), 0x7ffffffffffffff6 < uVar18)) {
    FUN_0040d740();
    goto LAB_00579160;
  }
  if (0x16 < uVar18) {
    pdVar11 = &MACH_HEADER.flags;
    if ((dword *)(uVar18 | 7) != (dword *)0x17) {
      pdVar11 = (dword *)(uVar18 | 7);
    }
    puVar16 = (undefined1 *)((long)pdVar11 + 1);
    __Znwm();
    *puVar16 = 0;
    param_1[1] = 0;
    param_1[2] = (ulong)((long)pdVar11 + 1) | 0x8000000000000000;
    *param_1 = puVar16;
  }
  FUN_00583e50(&uStack_a8,param_5,param_3);
  uStack_b8 = 0;
  uStack_b0 = 0;
  auVar33._0_4_ = (int)(short)(char)uStack_9f;
  auVar33._4_4_ = (int)(short)(char)(uStack_9f >> 8);
  auVar33._8_4_ = (int)(short)(char)(uStack_9f >> 0x10);
  auVar33._12_4_ = (int)(short)(char)(uStack_9f >> 0x18);
  auVar33 = NEON_rev64(auVar33,4);
  auVar33 = NEON_ext(auVar33,auVar33,8,1);
  uStack_d8 = auVar33._8_8_;
  uStack_e0 = auVar33._0_8_;
  uVar23 = (uint)bStack_a0;
  iStack_d0 = uVar23 - 1;
  if ((long)uStack_a8 < -0x7ffff894) {
    iStack_cc = -0x80000000;
  }
  else if ((long)uStack_a8 < 0x8000076c) {
    iStack_cc = (int)uStack_a8 + -0x76c;
  }
  else {
    iStack_cc = 0x7fffffff;
  }
  uVar25 = 0;
  lVar24 = 0x95f;
  if (2 < uVar23) {
    lVar24 = 0x960;
  }
  uVar18 = (long)uStack_a8 % 400 + lVar24;
  lVar24 = (long)(((uVar18 + (uVar18 >> 2)) - (ulong)(((uint)uVar18 >> 2 & 0x3fff) / 0x19)) +
                 (ulong)(((uint)uVar18 >> 4 & 0xfff) / 0x19) +
                 (long)*(int *)(&UNK_008154a4 + (long)(int)uVar23 * 4) +
                 (long)(int)(uStack_9f & 0xff)) % 7;
  iStack_c8 = 0;
  if (lVar24 != 0) {
    iStack_c8 = *(int *)(&UNK_00815488 + lVar24 * 4) + 1;
  }
  if ((2 < uVar23) && ((uStack_a8 & 3) == 0)) {
    if ((uStack_a8 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb8 >> 2 |
        uStack_a8 * -0x70a3d70a3d70a3d7 << 0x3e) < 0x28f5c28f5c28f5d) {
      uVar25 = (uint)((long)uStack_a8 % 400 == 0);
    }
    else {
      uVar25 = 1;
    }
  }
  iStack_c4 = (uStack_9f & 0xff) + uVar25 + *(int *)(&UNK_008154d8 + (long)(int)uVar23 * 4) + -1;
  uStack_c0 = (ulong)bStack_94;
  uVar18 = *(ulong *)(param_2 + 8);
  pbVar19 = *(byte **)param_2;
  if (-1 < (char)param_2[0x17]) {
    uVar18 = (ulong)param_2[0x17];
    pbVar19 = param_2;
  }
  pbVar2 = pbVar19 + uVar18;
  pbVar28 = pbVar19;
  if (uVar18 != 0) {
    pbVar3 = pbVar19 + uVar18;
LAB_00577810:
    pbVar27 = pbVar19;
    for (uVar18 = (long)pbVar3 - (long)pbVar19 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
      pbVar31 = pbVar27;
      if (*pbVar27 == 0x25) goto LAB_00577850;
      pbVar27 = pbVar27 + 1;
    }
    pbVar31 = pbVar3;
    if (2 < ((long)pbVar3 - (long)pbVar19) - 1U) {
      pbVar27 = pbVar27 + 3;
      while( true ) {
        if (pbVar27[-3] == 0x25) {
          pbVar31 = pbVar27 + -3;
          goto LAB_00577850;
        }
        if (pbVar27[-2] == 0x25) break;
        if (pbVar27[-1] == 0x25) {
          pbVar31 = pbVar27 + -1;
          goto LAB_00577850;
        }
        pbVar31 = pbVar27;
        if ((*pbVar27 == 0x25) ||
           (pbVar32 = pbVar27 + 1, pbVar27 = pbVar27 + 4, pbVar31 = pbVar3, pbVar32 == pbVar2))
        goto LAB_00577850;
      }
      pbVar31 = pbVar27 + -2;
    }
LAB_00577850:
    if (((long)pbVar31 - (long)pbVar19 != 0) && (pbVar28 == pbVar19)) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,pbVar28,(long)pbVar31 - (long)pbVar19);
      pbVar19 = pbVar31;
      pbVar28 = pbVar31;
    }
    pbVar27 = pbVar31;
    if (pbVar31 == pbVar2) {
      bVar1 = true;
    }
    else {
      for (uVar18 = (long)pbVar3 - (long)pbVar31 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        if (*pbVar27 != 0x25) goto LAB_00577964;
        pbVar27 = pbVar27 + 1;
      }
      if (2 < ((long)pbVar3 - (long)pbVar31) - 1U) {
        pbVar27 = pbVar27 + 3;
        do {
          if (pbVar27[-3] != 0x25) {
            bVar1 = false;
            pbVar27 = pbVar27 + -3;
            goto LAB_00577968;
          }
          if (pbVar27[-2] != 0x25) {
            bVar1 = false;
            pbVar27 = pbVar27 + -2;
            goto LAB_00577968;
          }
          if (pbVar27[-1] != 0x25) {
            bVar1 = false;
            pbVar27 = pbVar27 + -1;
            goto LAB_00577968;
          }
          if (*pbVar27 != 0x25) goto LAB_00577964;
          pbVar32 = pbVar27 + 1;
          pbVar27 = pbVar27 + 4;
        } while (pbVar32 != pbVar2);
      }
      bVar1 = true;
      pbVar27 = pbVar3;
    }
    goto LAB_00577968;
  }
LAB_005777cc:
  pbVar2 = pbVar2 + -(long)pbVar28;
  if (pbVar2 == (byte *)0x0) {
LAB_005790d0:
    if (*(long *)PTR____stack_chk_guard_00999f88 == uStack_70) {
      return;
    }
    ___stack_chk_fail();
  }
  else if (pbVar2 < (byte *)0x7ffffffffffffff7) {
    if (pbVar2 < (byte *)0x17) {
      uStack_e8 = CONCAT17((char)pbVar2,(undefined7)uStack_e8);
      pppppppuVar15 = &ppppppuStack_f8;
    }
    else {
      pdVar11 = &MACH_HEADER.flags;
      if ((dword *)((ulong)pbVar2 | 7) != (dword *)0x17) {
        pdVar11 = (dword *)((ulong)pbVar2 | 7);
      }
      pppppppuVar15 = (undefined8 *******)((long)pdVar11 + 1U);
      __Znwm();
      uStack_e8 = (long)pdVar11 + 1U | 0x8000000000000000;
      ppppppuStack_f8 = pppppppuVar15;
      pbStack_f0 = pbVar2;
    }
    _memmove(pppppppuVar15,pbVar28,pbVar2);
    *(byte *)((long)pppppppuVar15 + (long)pbVar2) = 0;
    FUN_00579250(param_1,&ppppppuStack_f8,&uStack_e0);
    if ((long)uStack_e8 < 0) {
      __ZdlPv(ppppppuStack_f8);
    }
    goto LAB_005790d0;
  }
  FUN_0040d740();
LAB_00579160:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x579164);
  (*pcVar12)();
LAB_00577964:
  bVar1 = false;
LAB_00577968:
  if ((pbVar27 != pbVar19) && (pbVar28 == pbVar19)) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pbVar28,(ulong)((long)pbVar27 - (long)pbVar28) >> 1);
    pbVar19 = pbVar28 + ((long)pbVar27 - (long)pbVar28 & 0xfffffffffffffffe);
    bVar4 = (bool)(bVar1 ^ 1);
    if (pbVar19 == pbVar27) {
      bVar4 = true;
    }
    pbVar28 = pbVar19;
    if (!bVar4) {
      pbVar28 = pbVar19 + 1;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_1,(long)(char)*pbVar19);
    }
  }
  pbVar19 = pbVar27;
  if ((bVar1) || (((int)pbVar27 - (int)pbVar31 & 1U) == 0)) goto LAB_00577804;
  uVar23 = (uint)*pbVar27;
  pcVar13 = "YmdeUuWwHMSzZs%";
  _memchr("YmdeUuWwHMSzZs%",(long)(char)*pbVar27,0x10);
  if (pcVar13 != (char *)0x0) {
    pbVar19 = pbVar27 + (-1 - (long)pbVar28);
    if (pbVar19 != (byte *)0x0) {
      if ((byte *)0x7ffffffffffffff6 < pbVar19) {
        FUN_0040d740();
        goto LAB_00579160;
      }
      if (pbVar19 < (byte *)0x17) {
        uStack_e8 = CONCAT17((char)pbVar19,(undefined7)uStack_e8);
        pppppppuVar15 = &ppppppuStack_f8;
      }
      else {
        pdVar11 = &MACH_HEADER.flags;
        if ((dword *)((ulong)pbVar19 | 7) != (dword *)0x17) {
          pdVar11 = (dword *)((ulong)pbVar19 | 7);
        }
        pppppppuVar15 = (undefined8 *******)((long)pdVar11 + 1U);
        __Znwm();
        uStack_e8 = (long)pdVar11 + 1U | 0x8000000000000000;
        ppppppuStack_f8 = pppppppuVar15;
        pbStack_f0 = pbVar19;
      }
      _memmove(pppppppuVar15,pbVar28,pbVar19);
      *(byte *)((long)pppppppuVar15 + (long)pbVar19) = 0;
      FUN_00579250(param_1,&ppppppuStack_f8,&uStack_e0);
      if ((long)uStack_e8 < 0) {
        __ZdlPv(ppppppuStack_f8);
      }
      uVar23 = (uint)*pbVar27;
    }
    if (uVar23 - 0x25 < 0x56) {
                    /* WARNING: Could not recover jumptable at 0x00577b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)*(ushort *)(&UNK_00815280 + (ulong)(uVar23 - 0x25) * 2) * 4 + 0x577b34))();
      return;
    }
    pbVar19 = pbVar27 + 1;
    pbVar28 = pbVar19;
    goto LAB_00577804;
  }
  if (uVar23 != 0x45) {
    if ((uVar23 != 0x3a) || (pbVar27 + 1 == pbVar2)) goto LAB_00577804;
    bVar5 = pbVar27[1];
    if (bVar5 != 0x3a) {
      if (bVar5 != 0x7a) goto LAB_00577804;
      pbVar19 = pbVar27 + (-1 - (long)pbVar28);
      if (pbVar19 != (byte *)0x0) {
        if ((byte *)0x7ffffffffffffff6 < pbVar19) {
          FUN_0040d740();
          goto LAB_00579160;
        }
        if (pbVar19 < (byte *)0x17) {
          uStack_e8 = CONCAT17((char)pbVar19,(undefined7)uStack_e8);
          pppppppuVar15 = &ppppppuStack_f8;
        }
        else {
          pdVar11 = &MACH_HEADER.flags;
          if ((dword *)((ulong)pbVar19 | 7) != (dword *)0x17) {
            pdVar11 = (dword *)((ulong)pbVar19 | 7);
          }
          pppppppuVar15 = (undefined8 *******)((long)pdVar11 + 1U);
          __Znwm();
          uStack_e8 = (long)pdVar11 + 1U | 0x8000000000000000;
          ppppppuStack_f8 = pppppppuVar15;
          pbStack_f0 = pbVar19;
        }
        _memmove(pppppppuVar15,pbVar28,pbVar19);
        *(byte *)((long)pppppppuVar15 + (long)pbVar19) = 0;
        FUN_00579250(param_1,&ppppppuStack_f8,&uStack_e0);
        if ((long)uStack_e8 < 0) {
          __ZdlPv(ppppppuStack_f8);
        }
      }
      uVar6 = 0x2d;
      if (-1 < (int)uStack_98) {
        uVar6 = 0x2b;
      }
      uVar23 = -uStack_98;
      if (-1 < (int)uStack_98) {
        uVar23 = uStack_98;
      }
      uVar8 = uVar23 / 0x3c + (uVar23 / 0xe10) * -0x3c;
      uVar25 = (uVar8 & 0xff) / 10;
      uStack_71 = (&UNK_0081550c)[(ulong)(uVar8 + uVar25 * -10) & 0xff];
      uStack_72 = (&UNK_0081550c)[uVar25];
      uStack_73 = 0x3a;
      uStack_74 = (&UNK_0081550c)[uVar23 / 0xe10 + (uVar23 / 36000) * -10];
      uStack_75 = (&UNK_0081550c)
                  [(ulong)(uVar23 / 36000 + ((uVar23 / 36000) * 0xcccd >> 0x13) * -10) & 0xffff];
      uStack_76 = 0x2b;
      if (uVar8 != 0 || 0xe0f < uVar23) {
        uStack_76 = uVar6;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,&uStack_76,6);
LAB_005786bc:
      pbVar19 = pbVar27 + 2;
      pbVar28 = pbVar19;
      goto LAB_00577804;
    }
    if (pbVar27 + 2 == pbVar2) goto LAB_00577804;
    bVar5 = pbVar27[2];
    if (bVar5 != 0x3a) {
      if (bVar5 != 0x7a) goto LAB_00577804;
      pbVar19 = pbVar27 + (-1 - (long)pbVar28);
      if (pbVar19 != (byte *)0x0) {
        if ((byte *)0x7ffffffffffffff6 < pbVar19) {
          FUN_0040d740();
          goto LAB_00579160;
        }
        if (pbVar19 < (byte *)0x17) {
          uStack_e8 = CONCAT17((char)pbVar19,(undefined7)uStack_e8);
          pppppppuVar15 = &ppppppuStack_f8;
        }
        else {
          pdVar11 = &MACH_HEADER.flags;
          if ((dword *)((ulong)pbVar19 | 7) != (dword *)0x17) {
            pdVar11 = (dword *)((ulong)pbVar19 | 7);
          }
          pppppppuVar15 = (undefined8 *******)((long)pdVar11 + 1U);
          __Znwm();
          uStack_e8 = (long)pdVar11 + 1U | 0x8000000000000000;
          ppppppuStack_f8 = pppppppuVar15;
          pbStack_f0 = pbVar19;
        }
        _memmove(pppppppuVar15,pbVar28,pbVar19);
        *(byte *)((long)pppppppuVar15 + (long)pbVar19) = 0;
        FUN_00579250(param_1,&ppppppuStack_f8,&uStack_e0);
        if ((long)uStack_e8 < 0) {
          __ZdlPv(ppppppuStack_f8);
        }
      }
      uVar23 = -uStack_98;
      if (-1 < (int)uStack_98) {
        uVar23 = uStack_98;
      }
      iVar9 = uVar23 / 0x3c + (uVar23 / 0xe10) * -0x3c;
      uStack_71 = (&UNK_0081550c)[(uVar23 % 0x3c) % 10];
      uStack_72 = (&UNK_0081550c)[(uVar23 % 0x3c) / 10];
      uStack_73 = 0x3a;
      uVar25 = (uint)(iVar9 * 0x1a) >> 8;
      uStack_74 = (&UNK_0081550c)[(ulong)(iVar9 + uVar25 * -10) & 0xff];
      uStack_75 = (&UNK_0081550c)[uVar25];
      uStack_76 = 0x3a;
      uStack_77 = (&UNK_0081550c)[uVar23 / 0xe10 + (uVar23 / 36000) * -10];
      uStack_78 = (&UNK_0081550c)
                  [(ulong)(uVar23 / 36000 + ((uVar23 / 36000) * 0xcccd >> 0x13) * -10) & 0xffff];
      uStack_79 = 0x2d;
      if (-1 < (int)uStack_98) {
        uStack_79 = 0x2b;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,&uStack_79,9);
      goto LAB_00578da8;
    }
    if ((pbVar27 + 3 == pbVar2) || (pbVar27[3] != 0x7a)) goto LAB_00577804;
    if (pbVar27 + -1 != pbVar28) {
      FUN_0057944c(&ppppppuStack_f8,pbVar28);
      FUN_00579250(param_1,&ppppppuStack_f8,&uStack_e0);
      if ((long)uStack_e8 < 0) {
        __ZdlPv(ppppppuStack_f8);
      }
    }
    uVar6 = 0x2d;
    if (-1 < (int)uStack_98) {
      uVar6 = 0x2b;
    }
    uVar23 = -uStack_98;
    if (-1 < (int)uStack_98) {
      uVar23 = uStack_98;
    }
    uVar25 = uVar23 % 0x3c;
    iVar9 = uVar23 / 0x3c + (uVar23 / 0xe10) * -0x3c;
    if (uVar25 == 0) {
      uVar21 = 0x2b;
      if (iVar9 != 0 || 0xe0f < uVar23) {
        uVar21 = uVar6;
      }
      puVar17 = &uStack_70;
      if (iVar9 != 0) goto LAB_00578e74;
    }
    else {
      uStack_71 = (&UNK_0081550c)[uVar25 % 10];
      uStack_72 = (&UNK_0081550c)[uVar25 / 10];
      uStack_73 = 0x3a;
      puVar17 = (undefined8 *)&uStack_73;
LAB_00578e74:
      uVar21 = (&UNK_0081550c)[(ulong)(iVar9 + ((uint)(iVar9 * 0xcd) >> 0xb & 0x1f) * -10) & 0xff];
      *(undefined1 *)((long)puVar17 + -3) = 0x3a;
      *(undefined1 *)((long)puVar17 + -1) = uVar21;
      *(undefined *)((long)puVar17 + -2) =
           (&UNK_0081550c)[(ulong)((uint)(iVar9 * 0xcd) >> 0xb) & 0x1f];
      puVar17 = (undefined8 *)((long)puVar17 + -3);
      uVar21 = uVar6;
    }
    uVar6 = (&UNK_0081550c)[uVar23 / 0xe10 + (uVar23 / 36000) * -10];
    puVar16 = (undefined1 *)((long)puVar17 + -3);
    *puVar16 = uVar21;
    *(undefined1 *)((long)puVar17 + -1) = uVar6;
    *(undefined *)((long)puVar17 + -2) =
         (&UNK_0081550c)
         [(ulong)(uVar23 / 36000 + ((uVar23 / 36000) * 0xcccd >> 0x13) * -10) & 0xffff];
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,puVar16,(long)&uStack_70 - (long)puVar16);
    pbVar19 = pbVar27 + 4;
    pbVar28 = pbVar19;
    goto LAB_00577804;
  }
  pbVar19 = pbVar27 + 1;
  if (pbVar19 == pbVar2) goto LAB_00577804;
  bVar5 = *pbVar19;
  if (bVar5 < 0x54) {
    if (bVar5 == 0x2a) {
      pbVar31 = pbVar27 + 2;
      if (pbVar31 != pbVar2) {
        bVar7 = *pbVar31;
        if ((bVar7 == 0x53) || (bVar7 == 0x66)) {
          pbVar19 = pbVar27 + (-1 - (long)pbVar28);
          if (pbVar19 != (byte *)0x0) {
            if ((byte *)0x7ffffffffffffff6 < pbVar19) {
              FUN_0040d740();
              goto LAB_00579160;
            }
            if (pbVar19 < (byte *)0x17) {
              uStack_e8 = CONCAT17((char)pbVar19,(undefined7)uStack_e8);
              pppppppuVar15 = &ppppppuStack_f8;
            }
            else {
              pdVar11 = &MACH_HEADER.flags;
              if ((dword *)((ulong)pbVar19 | 7) != (dword *)0x17) {
                pdVar11 = (dword *)((ulong)pbVar19 | 7);
              }
              pppppppuVar15 = (undefined8 *******)((long)pdVar11 + 1U);
              __Znwm();
              uStack_e8 = (long)pdVar11 + 1U | 0x8000000000000000;
              ppppppuStack_f8 = pppppppuVar15;
              pbStack_f0 = pbVar19;
            }
            _memmove(pppppppuVar15,pbVar28,pbVar19);
            *(byte *)((long)pppppppuVar15 + (long)pbVar19) = 0;
            FUN_00579250(param_1,&ppppppuStack_f8,&uStack_e0);
            if ((long)uStack_e8 < 0) {
              __ZdlPv(ppppppuStack_f8);
            }
          }
          uVar18 = *param_4;
          puVar17 = &uStack_70;
          if ((long)uVar18 < 0) {
            if (uVar18 == 0x8000000000000000) {
              uStack_71 = 0x38;
              uVar23 = 0xd;
              puVar17 = (undefined8 *)&uStack_71;
              uVar26 = 0xf333333333333334;
            }
            else {
              uVar23 = 0xe;
              uVar26 = uVar18;
            }
            uVar26 = -uVar26;
          }
          else {
            uVar23 = 0xf;
            uVar26 = uVar18;
          }
          lVar24 = 0;
          uVar25 = uVar23 - 1;
          do {
            *(undefined *)((long)puVar17 + lVar24 + -1) = (&UNK_0081550c)[uVar26 % 10];
            lVar24 = lVar24 + -1;
            uVar25 = uVar25 - 1;
            bVar1 = 9 < uVar26;
            uVar26 = uVar26 / 10;
          } while (bVar1);
          if ((int)(lVar24 + (ulong)uVar23) + 1 < 2) {
            puVar16 = (undefined1 *)((long)puVar17 + lVar24);
          }
          else {
            puVar16 = (undefined1 *)((long)puVar17 + (lVar24 - (ulong)uVar25) + -1);
            _memset(puVar16,0x30,lVar24 + (ulong)uVar23 & 0xffffffff);
          }
          puVar29 = (undefined1 *)((long)&uStack_70 + 1);
          if ((long)uVar18 < 0) {
            puVar16 = puVar16 + -1;
            *puVar16 = 0x2d;
          }
          do {
            puVar22 = puVar29 + -1;
            puVar20 = puVar16;
            if (puVar22 == puVar16) break;
            pcVar13 = puVar29 + -2;
            puVar20 = puVar22;
            puVar29 = puVar22;
          } while (*pcVar13 == '0');
          if (*pbVar31 == 0x66) {
            if (puVar22 == puVar16) {
              puVar16 = puVar16 + -1;
              *puVar16 = 0x30;
            }
          }
          else if (*pbVar31 == 0x53) {
            puVar29 = puVar16;
            if (puVar22 != puVar16) {
              puVar29 = puVar16 + -1;
              *puVar29 = 0x2e;
            }
            cVar10 = (char)((int)uStack_9f._3_1_ / 10);
            uVar6 = (&UNK_0081550c)[(char)(uStack_9f._3_1_ + cVar10 * -10)];
            uVar23 = ((int)uStack_9f._3_1_ / 10) * 0x67;
            puVar16 = puVar29 + -2;
            *puVar16 = (&UNK_0081550c)
                       [(char)(cVar10 + ((char)(uVar23 >> 10) - (char)((int)uVar23 >> 0x1f)) * -10)]
            ;
            puVar29[-1] = uVar6;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (param_1,puVar16,(long)puVar20 - (long)puVar16);
        }
        else {
          if (bVar7 != 0x7a) goto LAB_00578078;
          pbVar19 = pbVar27 + (-1 - (long)pbVar28);
          if (pbVar19 != (byte *)0x0) {
            if ((byte *)0x7ffffffffffffff6 < pbVar19) {
              FUN_0040d740();
              goto LAB_00579160;
            }
            if (pbVar19 < (byte *)0x17) {
              uStack_e8 = CONCAT17((char)pbVar19,(undefined7)uStack_e8);
              pppppppuVar15 = &ppppppuStack_f8;
            }
            else {
              pdVar11 = &MACH_HEADER.flags;
              if ((dword *)((ulong)pbVar19 | 7) != (dword *)0x17) {
                pdVar11 = (dword *)((ulong)pbVar19 | 7);
              }
              pppppppuVar15 = (undefined8 *******)((long)pdVar11 + 1U);
              __Znwm();
              uStack_e8 = (long)pdVar11 + 1U | 0x8000000000000000;
              ppppppuStack_f8 = pppppppuVar15;
              pbStack_f0 = pbVar19;
            }
            _memmove(pppppppuVar15,pbVar28,pbVar19);
            *(byte *)((long)pppppppuVar15 + (long)pbVar19) = 0;
            FUN_00579250(param_1,&ppppppuStack_f8,&uStack_e0);
            if ((long)uStack_e8 < 0) {
              __ZdlPv(ppppppuStack_f8);
            }
          }
          uVar23 = -uStack_98;
          if (-1 < (int)uStack_98) {
            uVar23 = uStack_98;
          }
          iVar9 = uVar23 / 0x3c + (uVar23 / 0xe10) * -0x3c;
          uStack_71 = (&UNK_0081550c)[(uVar23 % 0x3c) % 10];
          uStack_72 = (&UNK_0081550c)[(uVar23 % 0x3c) / 10];
          uStack_73 = 0x3a;
          uVar25 = (uint)(iVar9 * 0x1a) >> 8;
          uStack_74 = (&UNK_0081550c)[(ulong)(iVar9 + uVar25 * -10) & 0xff];
          uStack_75 = (&UNK_0081550c)[uVar25];
          uStack_76 = 0x3a;
          uStack_77 = (&UNK_0081550c)[uVar23 / 0xe10 + (uVar23 / 36000) * -10];
          uStack_78 = (&UNK_0081550c)
                      [(ulong)(uVar23 / 36000 + ((uVar23 / 36000) * 0xcccd >> 0x13) * -10) & 0xffff]
          ;
          uStack_79 = 0x2d;
          if (-1 < (int)uStack_98) {
            uStack_79 = 0x2b;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (param_1,&uStack_79,9);
        }
LAB_00578da8:
        pbVar19 = pbVar27 + 3;
        pbVar28 = pbVar19;
        goto LAB_00577804;
      }
    }
    else {
      if (bVar5 != 0x34) goto LAB_00578014;
      if ((pbVar27 + 2 != pbVar2) && (pbVar27[2] == 0x59)) {
        pbVar19 = pbVar27 + (-1 - (long)pbVar28);
        if (pbVar19 != (byte *)0x0) {
          if ((byte *)0x7ffffffffffffff6 < pbVar19) {
            FUN_0040d740();
            goto LAB_00579160;
          }
          if (pbVar19 < (byte *)0x17) {
            uStack_e8 = CONCAT17((char)pbVar19,(undefined7)uStack_e8);
            pppppppuVar15 = &ppppppuStack_f8;
          }
          else {
            pdVar11 = &MACH_HEADER.flags;
            if ((dword *)((ulong)pbVar19 | 7) != (dword *)0x17) {
              pdVar11 = (dword *)((ulong)pbVar19 | 7);
            }
            pppppppuVar15 = (undefined8 *******)((long)pdVar11 + 1U);
            __Znwm();
            uStack_e8 = (long)pdVar11 + 1U | 0x8000000000000000;
            ppppppuStack_f8 = pppppppuVar15;
            pbStack_f0 = pbVar19;
          }
          _memmove(pppppppuVar15,pbVar28,pbVar19);
          *(byte *)((long)pppppppuVar15 + (long)pbVar19) = 0;
          FUN_00579250(param_1,&ppppppuStack_f8,&uStack_e0);
          if ((long)uStack_e8 < 0) {
            __ZdlPv(ppppppuStack_f8);
          }
        }
        uVar18 = uStack_a8;
        puVar17 = &uStack_70;
        if ((long)uStack_a8 < 0) {
          if (uStack_a8 == 0x8000000000000000) {
            uStack_71 = 0x38;
            uVar23 = 2;
            puVar17 = (undefined8 *)&uStack_71;
            uVar26 = 0xf333333333333334;
          }
          else {
            uVar23 = 3;
            uVar26 = uStack_a8;
          }
          uVar26 = -uVar26;
        }
        else {
          uVar23 = 4;
          uVar26 = uStack_a8;
        }
        lVar24 = 0;
        uVar25 = uVar23 - 1;
        do {
          *(undefined *)((long)puVar17 + lVar24 + -1) = (&UNK_0081550c)[uVar26 % 10];
          lVar24 = lVar24 + -1;
          uVar25 = uVar25 - 1;
          bVar1 = 9 < uVar26;
          uVar26 = uVar26 / 10;
        } while (bVar1);
        if ((int)(lVar24 + (ulong)uVar23) + 1 < 2) {
          puVar16 = (undefined1 *)((long)puVar17 + lVar24);
        }
        else {
          puVar16 = (undefined1 *)((long)puVar17 + (lVar24 - (ulong)uVar25) + -1);
          _memset(puVar16,0x30,lVar24 + (ulong)uVar23 & 0xffffffff);
        }
        if ((long)uVar18 < 0) {
          puVar16 = puVar16 + -1;
          *puVar16 = 0x2d;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_1,puVar16,(long)&uStack_70 - (long)puVar16);
        goto LAB_00578da8;
      }
    }
  }
  else {
    if (bVar5 == 0x7a) {
      pbVar19 = pbVar27 + (-1 - (long)pbVar28);
      if (pbVar19 != (byte *)0x0) {
        if ((byte *)0x7ffffffffffffff6 < pbVar19) {
          FUN_0040d740();
          goto LAB_00579160;
        }
        if (pbVar19 < (byte *)0x17) {
          uStack_e8 = CONCAT17((char)pbVar19,(undefined7)uStack_e8);
          pppppppuVar15 = &ppppppuStack_f8;
        }
        else {
          pdVar11 = &MACH_HEADER.flags;
          if ((dword *)((ulong)pbVar19 | 7) != (dword *)0x17) {
            pdVar11 = (dword *)((ulong)pbVar19 | 7);
          }
          pppppppuVar15 = (undefined8 *******)((long)pdVar11 + 1U);
          __Znwm();
          uStack_e8 = (long)pdVar11 + 1U | 0x8000000000000000;
          ppppppuStack_f8 = pppppppuVar15;
          pbStack_f0 = pbVar19;
        }
        _memmove(pppppppuVar15,pbVar28,pbVar19);
        *(byte *)((long)pppppppuVar15 + (long)pbVar19) = 0;
        FUN_00579250(param_1,&ppppppuStack_f8,&uStack_e0);
        if ((long)uStack_e8 < 0) {
          __ZdlPv(ppppppuStack_f8);
        }
      }
      uVar6 = 0x2d;
      if (-1 < (int)uStack_98) {
        uVar6 = 0x2b;
      }
      uVar23 = -uStack_98;
      if (-1 < (int)uStack_98) {
        uVar23 = uStack_98;
      }
      uVar8 = uVar23 / 0x3c + (uVar23 / 0xe10) * -0x3c;
      uVar25 = (uVar8 & 0xff) / 10;
      uStack_71 = (&UNK_0081550c)[(ulong)(uVar8 + uVar25 * -10) & 0xff];
      uStack_72 = (&UNK_0081550c)[uVar25];
      uStack_73 = 0x3a;
      uStack_74 = (&UNK_0081550c)[uVar23 / 0xe10 + (uVar23 / 36000) * -10];
      uStack_75 = (&UNK_0081550c)
                  [(ulong)(uVar23 / 36000 + ((uVar23 / 36000) * 0xcccd >> 0x13) * -10) & 0xffff];
      uStack_76 = 0x2b;
      if (uVar8 != 0 || 0xe0f < uVar23) {
        uStack_76 = uVar6;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,&uStack_76,6);
      goto LAB_005786bc;
    }
    if (bVar5 == 0x54) {
      pbVar19 = pbVar27 + (-1 - (long)pbVar28);
      if (pbVar19 != (byte *)0x0) {
        if ((byte *)0x7ffffffffffffff6 < pbVar19) {
          FUN_0040d740();
          goto LAB_00579160;
        }
        if (pbVar19 < (byte *)0x17) {
          uStack_e8 = CONCAT17((char)pbVar19,(undefined7)uStack_e8);
          pppppppuVar15 = &ppppppuStack_f8;
        }
        else {
          pdVar11 = &MACH_HEADER.flags;
          if ((dword *)((ulong)pbVar19 | 7) != (dword *)0x17) {
            pdVar11 = (dword *)((ulong)pbVar19 | 7);
          }
          pppppppuVar15 = (undefined8 *******)((long)pdVar11 + 1U);
          __Znwm();
          uStack_e8 = (long)pdVar11 + 1U | 0x8000000000000000;
          ppppppuStack_f8 = pppppppuVar15;
          pbStack_f0 = pbVar19;
        }
        _memmove(pppppppuVar15,pbVar28,pbVar19);
        *(byte *)((long)pppppppuVar15 + (long)pbVar19) = 0;
        FUN_00579250(param_1,&ppppppuStack_f8,&uStack_e0);
        if ((long)uStack_e8 < 0) {
          __ZdlPv(ppppppuStack_f8);
        }
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_1,"T",1);
      pbVar19 = pbVar27 + 2;
      pbVar28 = pbVar19;
      goto LAB_00577804;
    }
LAB_00578014:
    if ((char)bVar5 < '\0') goto LAB_00577804;
  }
LAB_00578078:
  if ((*(uint *)(PTR___DefaultRuneLocale_00999f28 + (ulong)bVar5 * 4 + 0x3c) >> 10 & 1) == 0)
  goto LAB_00577804;
  bVar1 = true;
  lVar24 = 1;
  pbVar31 = pbVar19;
  if (bVar5 == 0x2d) {
    lVar24 = 2;
    pbVar31 = pbVar27 + 2;
  }
  bVar7 = pbVar27[lVar24];
  puVar14 = &UNK_0081550c;
  _memchr(&UNK_0081550c,(long)(char)bVar7,0xb);
  uVar23 = 0;
  pbVar32 = pbVar31;
  if ((puVar14 != (undefined *)0x0) && (uVar25 = (int)puVar14 - 0x81550c, (int)uVar25 < 10)) {
    uVar23 = 0;
    while( true ) {
      if ((int)uVar23 < -0xccccccc) {
        bVar1 = false;
        goto LAB_005786d8;
      }
      if ((int)(uVar23 * 10) < (int)(uVar25 | 0x80000000)) break;
      uVar23 = uVar23 * 10 - uVar25;
      pbVar32 = pbVar32 + 1;
      bVar7 = *pbVar32;
      puVar14 = &UNK_0081550c;
      _memchr(&UNK_0081550c,(long)(char)bVar7,0xb);
      bVar1 = true;
      if ((puVar14 == (undefined *)0x0) || (uVar25 = (int)puVar14 - 0x81550c, 9 < (int)uVar25))
      goto LAB_005786d8;
    }
    bVar1 = false;
    uVar23 = 0x80000008;
  }
LAB_005786d8:
  if ((pbVar32 == pbVar31) ||
     (((!bVar1 || (uVar23 == 0x80000000 && bVar5 != 0x2d)) || (uVar23 == 0 && bVar5 == 0x2d))))
  goto LAB_00577804;
  uVar25 = -uVar23;
  if (bVar5 == 0x2d) {
    uVar25 = uVar23;
  }
  if ((0x400 < uVar25) || ((bVar7 != 0x66 && (bVar7 != 0x53)))) goto LAB_00577804;
  pbVar27 = pbVar27 + (-1 - (long)pbVar28);
  if (pbVar27 != (byte *)0x0) {
    if ((byte *)0x7ffffffffffffff6 < pbVar27) {
      FUN_0040d740();
      goto LAB_00579160;
    }
    if (pbVar27 < (byte *)0x17) {
      uStack_e8 = CONCAT17((char)pbVar27,(undefined7)uStack_e8);
      pppppppuVar15 = &ppppppuStack_f8;
    }
    else {
      pdVar11 = &MACH_HEADER.flags;
      if ((dword *)((ulong)pbVar27 | 7) != (dword *)0x17) {
        pdVar11 = (dword *)((ulong)pbVar27 | 7);
      }
      pppppppuVar15 = (undefined8 *******)((long)pdVar11 + 1U);
      __Znwm();
      uStack_e8 = (long)pdVar11 + 1U | 0x8000000000000000;
      ppppppuStack_f8 = pppppppuVar15;
      pbStack_f0 = pbVar27;
    }
    _memmove(pppppppuVar15,pbVar28,pbVar27);
    *(byte *)((long)pppppppuVar15 + (long)pbVar27) = 0;
    FUN_00579250(param_1,&ppppppuStack_f8,&uStack_e0);
    if ((long)uStack_e8 < 0) {
      __ZdlPv(ppppppuStack_f8);
    }
  }
  puVar17 = &uStack_70;
  if (uVar23 == 0) {
LAB_00579000:
    puVar30 = puVar17;
    if (*pbVar32 == 0x53) {
      cVar10 = (char)((int)uStack_9f._3_1_ / 10);
      uVar6 = (&UNK_0081550c)[(char)(uStack_9f._3_1_ + cVar10 * -10)];
      uVar23 = ((int)uStack_9f._3_1_ / 10) * 0x67;
      puVar30 = (undefined8 *)((long)puVar17 + -2);
      *(undefined *)puVar30 =
           (&UNK_0081550c)
           [(char)(cVar10 + ((char)(uVar23 >> 10) - (char)((int)uVar23 >> 0x1f)) * -10)];
      *(undefined1 *)((long)puVar17 + -1) = uVar6;
    }
  }
  else {
    if (uVar25 < 0x13) {
      if (0xf < uVar25) goto LAB_00578e3c;
      uVar18 = 0;
      if (*(long *)(&UNK_008153d8 + (ulong)(0xf - uVar25) * 8) != 0) {
        uVar18 = (long)*param_4 / *(long *)(&UNK_008153d8 + (ulong)(0xf - uVar25) * 8);
      }
    }
    else {
      uVar25 = 0x12;
LAB_00578e3c:
      uVar18 = *(long *)(&UNK_008153d8 + (ulong)(uVar25 - 0xf) * 8) * *param_4;
    }
    puVar30 = &uStack_70;
    uVar26 = uVar18;
    if ((long)uVar18 < 0) {
      if (uVar18 == 0x8000000000000000) {
        uVar25 = uVar25 - 2;
        uStack_71 = 0x38;
        puVar30 = (undefined8 *)&uStack_71;
        uVar26 = 0xf333333333333334;
      }
      else {
        uVar25 = uVar25 - 1;
      }
      uVar26 = -uVar26;
    }
    lVar24 = 0;
    uVar23 = uVar25 - 1;
    do {
      *(undefined *)((long)puVar30 + lVar24 + -1) = (&UNK_0081550c)[uVar26 % 10];
      lVar24 = lVar24 + -1;
      uVar23 = uVar23 - 1;
      bVar1 = 9 < uVar26;
      uVar26 = uVar26 / 10;
    } while (bVar1);
    if ((int)(lVar24 + (ulong)uVar25) + 1 < 2) {
      puVar30 = (undefined8 *)((long)puVar30 + lVar24);
    }
    else {
      puVar30 = (undefined8 *)((long)puVar30 + (lVar24 - (ulong)uVar23) + -1);
      _memset(puVar30,0x30,lVar24 + (ulong)uVar25 & 0xffffffff);
    }
    if ((long)uVar18 < 0) {
      puVar30 = (undefined8 *)((long)puVar30 + -1);
      *(undefined1 *)puVar30 = 0x2d;
    }
    if (*pbVar32 == 0x53) {
      puVar17 = (undefined8 *)((long)puVar30 + -1);
      *(undefined1 *)puVar17 = 0x2e;
      goto LAB_00579000;
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,puVar30,(long)&uStack_70 - (long)puVar30);
  pbVar19 = pbVar32 + 1;
  pbVar28 = pbVar19;
LAB_00577804:
  if (pbVar19 == pbVar2) goto LAB_005777cc;
  goto LAB_00577810;
}



/* Entry: 00579250; end: 0057944b;  */

ulong * FUN_00579250(ulong *param_1,ulong *param_2,ulong *param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  dword *pdVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  char cVar10;
  int iVar11;
  ulong *puVar12;
  ulong uVar13;
  undefined8 in_x7;
  int *piVar14;
  int *piVar15;
  ulong uVar16;
  char cVar17;
  ulong *unaff_x22;
  ulong *puVar18;
  ulong *puVar19;
  ulong *puVar20;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  iVar11 = (int)(char)*(byte *)((long)param_2 + 0x17);
  uVar16 = param_2[1];
  if (-1 < iVar11) {
    uVar16 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  puVar18 = (ulong *)(uVar16 << 1);
  if (puVar18 == (ulong *)0x0) {
    unaff_x22 = (ulong *)0x0;
  }
  else {
    puVar7 = param_1;
    puVar12 = param_2;
    puVar6 = param_3;
    if ((uVar16 & 0x7fffffffffffffff) >> 0x3e != 0) goto LAB_00579420;
    unaff_x22 = puVar18;
    __Znwm();
    _bzero();
  }
  puVar7 = (ulong *)*param_2;
  if (-1 < iVar11) {
    puVar7 = param_2;
  }
  puVar6 = unaff_x22;
  _strftime(unaff_x22,puVar18,puVar7,param_3);
  if (puVar6 == (ulong *)0x0) {
    puVar7 = unaff_x22;
    __ZdlPv();
    iVar11 = (int)(char)*(byte *)((long)param_2 + 0x17);
    uVar16 = param_2[1];
    if (-1 < iVar11) {
      uVar16 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    puVar19 = (ulong *)(uVar16 << 2);
    if (puVar19 == (ulong *)0x0) {
      unaff_x22 = (ulong *)0x0;
    }
    else {
      puVar12 = puVar18;
      puVar18 = puVar19;
      if ((uVar16 & 0x3fffffffffffffff) >> 0x3d != 0) goto LAB_00579420;
      unaff_x22 = puVar19;
      __Znwm();
      _bzero();
    }
    puVar18 = (ulong *)*param_2;
    if (-1 < iVar11) {
      puVar18 = param_2;
    }
    puVar6 = unaff_x22;
    _strftime(unaff_x22,puVar19,puVar18,param_3);
    if (puVar6 == (ulong *)0x0) {
      puVar7 = unaff_x22;
      __ZdlPv();
      iVar11 = (int)(char)*(byte *)((long)param_2 + 0x17);
      uVar16 = param_2[1];
      if (-1 < iVar11) {
        uVar16 = (ulong)*(byte *)((long)param_2 + 0x17);
      }
      puVar20 = (ulong *)(uVar16 << 3);
      if (puVar20 == (ulong *)0x0) {
        unaff_x22 = (ulong *)0x0;
      }
      else {
        puVar12 = puVar19;
        puVar18 = puVar20;
        if ((uVar16 & 0x1fffffffffffffff) >> 0x3c != 0) goto LAB_00579420;
        unaff_x22 = puVar20;
        __Znwm();
        _bzero();
      }
      puVar18 = (ulong *)*param_2;
      if (-1 < iVar11) {
        puVar18 = param_2;
      }
      puVar6 = unaff_x22;
      _strftime(unaff_x22,puVar20,puVar18,param_3);
      if (puVar6 == (ulong *)0x0) {
        puVar7 = unaff_x22;
        __ZdlPv();
        iVar11 = (int)(char)*(byte *)((long)param_2 + 0x17);
        uVar16 = param_2[1];
        if (-1 < iVar11) {
          uVar16 = (ulong)*(byte *)((long)param_2 + 0x17);
        }
        puVar18 = (ulong *)(uVar16 << 4);
        puVar12 = puVar20;
        if ((uVar16 & 0xfffffffffffffff) >> 0x3b != 0) {
LAB_00579420:
          FUN_0052fd94();
          __ZdlPv(unaff_x22);
          __Unwind_Resume();
          __ZdlPv(unaff_x22);
          puVar19 = puVar7;
          __Unwind_Resume();
          pcStack_48 = FUN_0057944c;
          uVar16 = (long)puVar6 - (long)puVar12;
          puStack_50 = &stack0xfffffffffffffff0;
          if (uVar16 < 0x7ffffffffffffff7) {
            if (uVar16 < 0x17) {
              *(char *)((long)puVar19 + 0x17) = (char)uVar16;
              puVar18 = puVar19;
            }
            else {
              pdVar5 = &MACH_HEADER.flags;
              if ((dword *)(uVar16 | 7) != (dword *)0x17) {
                pdVar5 = (dword *)(uVar16 | 7);
              }
              puVar18 = (ulong *)((long)pdVar5 + 1);
              __Znwm();
              puVar19[1] = uVar16;
              puVar19[2] = (ulong)((long)pdVar5 + 1) | 0x8000000000000000;
              *puVar19 = (ulong)puVar18;
            }
            if (puVar6 != puVar12) {
              _memmove(puVar18);
            }
            *(undefined1 *)((long)puVar18 + uVar16) = 0;
            return puVar19;
          }
          FUN_0040d740();
          lVar8 = (long)*puVar19 % 400;
          cVar10 = (char)puVar19[1];
          cVar17 = *(char *)((long)puVar19 + 9);
          if (0xb < (long)cVar10 - 1U || 0x1b < (long)cVar17 - 1U) {
            lVar9 = lVar8 + (int)cVar10 / 0xc;
            cVar3 = cVar10 + (char)((int)cVar10 / 0xc) * -0xc;
            if (cVar3 < '\x01') {
              lVar9 = lVar9 + -1;
              cVar3 = cVar3 + '\f';
            }
            cVar4 = '\f';
            if (cVar10 != '\f') {
              lVar8 = lVar9;
              cVar4 = cVar3;
            }
            uVar13 = (ulong)(uint)(int)cVar4;
            FUN_0057044c(lVar8,uVar13,(long)cVar17,0,0,0,0,in_x7,iVar11,puVar18,unaff_x22,param_2,
                         uVar16,puVar7,&puStack_50,0x5794fc);
            cVar10 = (char)uVar13;
            cVar17 = (char)(uVar13 >> 8);
          }
          uVar1 = (int)lVar8 +
                  (SUB164(SEXT816(lVar8) * ZEXT816(0xa3d70a3d70a3d70b),9) -
                  (SUB164(SEXT816(lVar8) * ZEXT816(0xa3d70a3d70a3d70b),0xc) >> 0x1f)) * -400 + 0x95f
          ;
          uVar1 = ((uVar1 + (uVar1 >> 2)) - (uVar1 >> 2 & 0x3fff) / 0x19) +
                  (uVar1 >> 4 & 0xfff) / 0x19 + 1;
          uVar2 = (uVar1 & 0xffff) * 0x2493 >> 0x10;
          piVar14 = (int *)&UNK_00815518;
          do {
            piVar15 = piVar14 + 1;
            iVar11 = *piVar14;
            piVar14 = piVar15;
          } while (*(int *)(&UNK_00815470 +
                           ((ulong)(uVar1 + (uVar2 + ((uVar1 - uVar2 & 0xfffe) >> 1) >> 2) * -7 + 6)
                           & 0xffff) * 4) != iVar11);
          do {
            iVar11 = *piVar15;
            piVar15 = piVar15 + 1;
          } while ((int)puVar12 != iVar11);
          iVar11 = 1;
          lVar9 = lVar8;
          FUN_0057044c();
          func_0x0057bb14(lVar8,(int)cVar10,(int)cVar17,lVar9,(int)(char)iVar11,
                          (iVar11 << 0x10) >> 0x18);
          return (ulong *)(ulong)(uint)((int)(SUB168(SEXT816(lVar8) * SEXT816(0x4924924924924925),8)
                                             >> 1) -
                                       (SUB164(SEXT816(lVar8) * SEXT816(0x4924924924924925),0xc) >>
                                       0x1f));
        }
        unaff_x22 = puVar18;
        __Znwm();
        _bzero();
        puVar7 = (ulong *)*param_2;
        if (-1 < iVar11) {
          puVar7 = param_2;
        }
        puVar6 = unaff_x22;
        _strftime(unaff_x22,puVar18,puVar7,param_3);
        if (puVar6 == (ulong *)0x0) goto LAB_00579408;
      }
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,unaff_x22,puVar6);
LAB_00579408:
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(unaff_x22);
  return unaff_x22;
}



/* Entry: 0057944c; end: 005796eb;  */

ulong * FUN_0057944c(ulong *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  dword *pdVar5;
  ulong *puVar6;
  long lVar7;
  long lVar8;
  char cVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  ulong uVar13;
  char cVar14;
  
  uVar13 = param_3 - param_2;
  if (uVar13 < 0x7ffffffffffffff7) {
    if (uVar13 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar13;
      puVar6 = param_1;
    }
    else {
      pdVar5 = &MACH_HEADER.flags;
      if ((dword *)(uVar13 | 7) != (dword *)0x17) {
        pdVar5 = (dword *)(uVar13 | 7);
      }
      puVar6 = (ulong *)((long)pdVar5 + 1);
      __Znwm();
      param_1[1] = uVar13;
      param_1[2] = (ulong)((long)pdVar5 + 1) | 0x8000000000000000;
      *param_1 = (ulong)puVar6;
    }
    if (param_3 != param_2) {
      _memmove(puVar6,param_2,uVar13);
    }
    *(undefined1 *)((long)puVar6 + uVar13) = 0;
    return param_1;
  }
  FUN_0040d740();
  lVar7 = (long)*param_1 % 400;
  cVar9 = (char)param_1[1];
  cVar14 = *(char *)((long)param_1 + 9);
  if (0xb < (long)cVar9 - 1U || 0x1b < (long)cVar14 - 1U) {
    lVar8 = lVar7 + (int)cVar9 / 0xc;
    cVar3 = cVar9 + (char)((int)cVar9 / 0xc) * -0xc;
    if (cVar3 < '\x01') {
      lVar8 = lVar8 + -1;
      cVar3 = cVar3 + '\f';
    }
    cVar4 = '\f';
    if (cVar9 != '\f') {
      lVar7 = lVar8;
      cVar4 = cVar3;
    }
    uVar13 = (ulong)(uint)(int)cVar4;
    FUN_0057044c(lVar7,uVar13,(long)cVar14,0,0,0,0);
    cVar9 = (char)uVar13;
    cVar14 = (char)(uVar13 >> 8);
  }
  uVar1 = (int)lVar7 +
          (SUB164(SEXT816(lVar7) * ZEXT816(0xa3d70a3d70a3d70b),9) -
          (SUB164(SEXT816(lVar7) * ZEXT816(0xa3d70a3d70a3d70b),0xc) >> 0x1f)) * -400 + 0x95f;
  uVar1 = ((uVar1 + (uVar1 >> 2)) - (uVar1 >> 2 & 0x3fff) / 0x19) + (uVar1 >> 4 & 0xfff) / 0x19 + 1;
  uVar2 = (uVar1 & 0xffff) * 0x2493 >> 0x10;
  piVar11 = (int *)&UNK_00815518;
  do {
    piVar12 = piVar11 + 1;
    iVar10 = *piVar11;
    piVar11 = piVar12;
  } while (*(int *)(&UNK_00815470 +
                   ((ulong)(uVar1 + (uVar2 + ((uVar1 - uVar2 & 0xfffe) >> 1) >> 2) * -7 + 6) &
                   0xffff) * 4) != iVar10);
  do {
    iVar10 = *piVar12;
    piVar12 = piVar12 + 1;
  } while ((int)param_2 != iVar10);
  iVar10 = 1;
  lVar8 = lVar7;
  FUN_0057044c();
  func_0x0057bb14(lVar7,(int)cVar9,(int)cVar14,lVar8,(int)(char)iVar10,(iVar10 << 0x10) >> 0x18);
  return (ulong *)(ulong)(uint)((int)(SUB168(SEXT816(lVar7) * SEXT816(0x4924924924924925),8) >> 1) -
                               (SUB164(SEXT816(lVar7) * SEXT816(0x4924924924924925),0xc) >> 0x1f));
}



/* Entry: 005796ec; end: 0057987b;  */

char * FUN_005796ec(char *param_1,int param_2,uint param_3,uint *param_4)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  undefined *puVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  cVar1 = *param_1;
  cVar4 = cVar1;
  if (cVar1 == '-') {
    if (param_2 != 0) {
      if (param_2 == 1) {
        return (char *)0x0;
      }
      param_2 = 1;
    }
    param_1 = param_1 + 1;
    cVar4 = *param_1;
  }
  puVar5 = &UNK_0081550c;
  _memchr(&UNK_0081550c,(int)cVar4,0xb);
  uVar6 = 0;
  pcVar8 = param_1;
  if (puVar5 == (undefined *)0x0) {
    bVar3 = true;
  }
  else {
    pcVar9 = param_1;
    do {
      pcVar7 = pcVar9;
      pcVar9 = pcVar7 + 1;
      uVar2 = (int)puVar5 - 0x81550c;
      if (9 < (int)uVar2) break;
      if ((int)uVar6 < -0xccccccc) {
        bVar3 = false;
        goto LAB_0057980c;
      }
      if ((int)(uVar6 * 10) < (int)(uVar2 | 0x80000000)) {
        bVar3 = false;
        uVar6 = 0x80000008;
        goto LAB_0057980c;
      }
      uVar6 = uVar6 * 10 - uVar2;
      if (param_2 != 0) {
        if (param_2 == 1) {
          bVar3 = true;
          pcVar8 = pcVar9;
          goto LAB_0057980c;
        }
        param_2 = 1;
      }
      pcVar8 = pcVar8 + 1;
      puVar5 = &UNK_0081550c;
      _memchr(&UNK_0081550c,(long)*pcVar9,0xb);
      pcVar7 = pcVar8;
    } while (puVar5 != (undefined *)0x0);
    bVar3 = true;
    pcVar8 = pcVar7;
  }
LAB_0057980c:
  if (!bVar3) {
    return (char *)0x0;
  }
  if (pcVar8 == param_1) {
    return (char *)0x0;
  }
  if (uVar6 == 0x80000000 && cVar1 != '-') {
    return (char *)0x0;
  }
  if (uVar6 != 0 || cVar1 != '-') {
    uVar2 = -uVar6;
    if (cVar1 == '-') {
      uVar2 = uVar6;
    }
    if (param_3 < uVar2) {
      return (char *)0x0;
    }
    *param_4 = uVar2;
    return pcVar8;
  }
  return (char *)0x0;
}



/* Entry: 0057987c; end: 0057b2bf;  */

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_0057987c(byte *param_1,long *param_2,undefined8 *param_3,long *param_4,undefined8 *param_5,
            char *param_6)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  dword *pdVar7;
  undefined *puVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  byte *pbVar15;
  undefined *puVar16;
  char *pcVar17;
  byte *pbVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 *******pppppppuVar22;
  char **ppcVar23;
  char cVar24;
  int iVar25;
  dword *pdVar26;
  int *piVar27;
  int *piVar28;
  uint *puVar29;
  uint *puVar30;
  int iVar31;
  char *pcVar32;
  int iVar33;
  byte *pbVar34;
  char *pcVar35;
  byte *pbVar36;
  byte *pbStack_190;
  long lStack_178;
  uint uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  char *pcStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *******pppppppuStack_108;
  ulong uStack_100;
  char cStack_f1;
  char *pcStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  char *pcStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  uint uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  uint uStack_a8;
  int iStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  char *apcStack_78 [3];
  
  puVar8 = PTR___DefaultRuneLocale_00999f28;
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  lVar19 = (long)plVar1 + -1;
  do {
    while( true ) {
      lVar21 = lVar19;
      cVar24 = *(char *)(lVar21 + 1);
      lVar12 = (long)cVar24;
      if (cVar24 < 0) break;
      lVar19 = lVar21 + 1;
      if ((*(uint *)(puVar8 + (ulong)(uint)(int)cVar24 * 4 + 0x3c) & 0x4000) == 0)
      goto LAB_005798fc;
    }
    ___maskrune(lVar12,0x4000);
    lVar19 = lVar21 + 1;
  } while ((int)lVar12 != 0);
LAB_005798fc:
  bVar6 = false;
  bVar5 = false;
  uStack_150 = 0;
  bVar4 = false;
  lStack_178 = 0;
  uStack_80 = 0;
  apcStack_78[0] = section_00000798.segname + 10;
  uStack_90 = 0;
  uStack_88 = 0;
  pbVar36 = *(byte **)param_1;
  if (-1 < (char)param_1[0x17]) {
    pbVar36 = param_1;
  }
  uStack_158 = 0xffffffff;
  iVar31 = 6;
  uStack_a8 = 0;
  iStack_a4 = 1;
  uStack_b0 = 0;
  uStack_98 = 4;
  uStack_a0 = 0x4600000000;
  uStack_b8 = 0;
  uStack_bc = 0;
  uStack_c8 = CONCAT17(3,(undefined7)uStack_c8);
  pcStack_d8 = (char *)CONCAT44(pcStack_d8._4_4_,0x435455);
  pbVar15 = (byte *)(lVar21 + 1);
LAB_00579974:
  do {
    bVar2 = *pbVar36;
    if (bVar2 == 0) {
      if (((uStack_150._4_4_ & (uint)uStack_150) != 0) && ((int)uStack_a8 < 0xc)) {
        uStack_a8 = uStack_a8 + 0xc;
      }
      while( true ) {
        bVar2 = *pbVar15;
        lVar19 = (long)(char)bVar2;
        if ((char)bVar2 < 0) {
          ___maskrune(lVar19,0x4000);
          uVar11 = (uint)lVar19;
        }
        else {
          uVar11 = *(uint *)(puVar8 + (ulong)(uint)(int)(char)bVar2 * 4 + 0x3c) & 0x4000;
        }
        if (uVar11 == 0) break;
        pbVar15 = pbVar15 + 1;
      }
      if (*pbVar15 != 0) {
        if (param_6 != (char *)0x0) {
          FUN_00460cc0(param_6,"Illegal trailing data in input string");
        }
        goto LAB_0057ac00;
      }
      if (bVar4) {
        lVar19 = 0;
        __ZNSt3__16chrono12system_clock11from_time_tEl();
        *param_4 = lVar19 / 1000000 + lStack_178;
        *param_5 = 0;
LAB_0057ac50:
        uVar20 = 1;
        goto joined_r0x0057ac58;
      }
      if (bVar5) {
        if ((bRam0000000000b6b6a8 & 1) == 0) {
          iVar25 = 0xb6b6a8;
          ___cxa_guard_acquire();
          if (iVar25 != 0) {
            uVar20 = 0x20;
            __Znwm();
            FUN_0057cad4();
            uRam0000000000b6b6a0 = uVar20;
            ___cxa_guard_release(0xb6b6a8);
            uStack_148 = uRam0000000000b6b6a0;
            iVar25 = (int)uStack_b0;
            uVar20 = uStack_a0;
            goto joined_r0x0057b204;
          }
        }
        uStack_148 = uRam0000000000b6b6a0;
        iVar25 = (int)uStack_b0;
        uVar20 = uStack_a0;
      }
      else {
        uStack_148 = *param_3;
        iVar25 = (int)uStack_b0;
        uVar20 = uStack_a0;
      }
joined_r0x0057b204:
      if (iVar25 == 0x3c) {
        iVar25 = 0x3b;
        uStack_b0._4_4_ = (int)((ulong)uStack_b0 >> 0x20);
        uStack_b0 = CONCAT44(uStack_b0._4_4_,0x3b);
        uStack_bc = uStack_bc - 1;
        uStack_b8 = 0;
      }
      uStack_a0 = uVar20;
      if (!bVar6) {
        uStack_a0._4_4_ = (int)((ulong)uVar20 >> 0x20);
        apcStack_78[0] = (char *)((long)uStack_a0._4_4_ + 0x76c);
        if (uStack_158 != 0xffffffff) goto LAB_0057acdc;
LAB_0057af2c:
        uStack_a0._0_4_ = (int)uVar20;
        iVar31 = (int)uStack_a0 + 1;
        pcVar35 = apcStack_78[0];
LAB_0057afcc:
        lVar19 = (long)iVar31;
        FUN_005700e8(pcVar35,lVar19,(long)iStack_a4,(long)(int)uStack_a8,(long)uStack_b0._4_4_,
                     (long)iVar25);
        uStack_e8._0_5_ = (undefined5)lVar19;
        pcStack_f0 = pcVar35;
        if ((iVar31 != (char)lVar19) || (iStack_a4 != ((int)lVar19 << 0x10) >> 0x18))
        goto LAB_0057b060;
        lVar12 = (long)(int)uStack_bc;
        if ((int)uStack_bc < 0) {
          func_0x0057ba58();
          func_0x0057b9fc();
          ppcVar23 = &pcStack_f0;
          pcStack_140 = pcVar35;
          lStack_138 = lVar19;
          FUN_0057b974(ppcVar23,&pcStack_140);
joined_r0x0057b0cc:
          if (((ulong)ppcVar23 & 1) != 0) goto LAB_0057b060;
        }
        else if (uStack_bc != 0) {
          pppppppuVar22 = (undefined8 *******)0x8000000000000000;
          uVar13 = 1;
          FUN_005700e8(0x8000000000000000,1,1,0,(ulong)uStack_bc / 0x3c,uStack_bc % 0x3c);
          uStack_100 = uVar13 & 0xffffffffff;
          ppcVar23 = &pcStack_f0;
          pppppppuStack_108 = pppppppuVar22;
          FUN_0057ba8c(ppcVar23,&pppppppuStack_108);
          goto joined_r0x0057b0cc;
        }
        FUN_0057bce8(pcStack_f0,uStack_e8,lVar12);
        FUN_00583f18(&pcStack_140,&uStack_148,&pcStack_f0);
        lVar19 = lStack_138;
        if (lStack_138 != -0x8000000000000000) {
          if (lStack_138 == 0x7fffffffffffffff) {
            pppppppuStack_108 = (undefined8 *******)0x7fffffffffffffff;
            FUN_00583e50(&pcStack_140,&uStack_148,&pppppppuStack_108);
            ppcVar23 = &pcStack_f0;
            FUN_0057b974(ppcVar23,&pcStack_140);
            if ((int)ppcVar23 != 0) {
              if (param_6 != (char *)0x0) {
                cVar24 = param_6[0x17];
                goto joined_r0x0057b138;
              }
              goto LAB_0057ac00;
            }
          }
LAB_0057b1a4:
          *param_4 = lVar19;
          *param_5 = uStack_b8;
          goto LAB_0057ac50;
        }
        pppppppuStack_108 = (undefined8 *******)0x8000000000000000;
        FUN_00583e50(&pcStack_140,&uStack_148,&pppppppuStack_108);
        ppcVar23 = &pcStack_f0;
        FUN_0057ba8c(ppcVar23,&pcStack_140);
        if ((int)ppcVar23 == 0) goto LAB_0057b1a4;
        if (param_6 != (char *)0x0) {
          cVar24 = param_6[0x17];
joined_r0x0057b138:
          if (cVar24 < '\0') {
            param_6[8] = '\x12';
            param_6[9] = '\0';
            param_6[10] = '\0';
            param_6[0xb] = '\0';
            param_6[0xc] = '\0';
            param_6[0xd] = '\0';
            param_6[0xe] = '\0';
            param_6[0xf] = '\0';
            param_6 = *(char **)param_6;
          }
          else {
            param_6[0x17] = '\x12';
          }
          builtin_strncpy(param_6,"Out-of-range field",0x13);
        }
        goto LAB_0057ac00;
      }
      if (uStack_158 == 0xffffffff) goto LAB_0057af2c;
LAB_0057acdc:
      pcVar35 = apcStack_78[0];
      lVar19 = (long)apcStack_78[0] % 400;
      uVar11 = (int)lVar19 + 0x95f;
      uVar11 = ((uVar11 + (uVar11 >> 2)) - (uVar11 >> 2 & 0x3fff) / 0x19) +
               (uVar11 >> 4 & 0xfff) / 0x19 + 1;
      uVar3 = (uVar11 & 0xffff) * 0x2493 >> 0x10;
      piVar27 = (int *)&UNK_00815518;
      do {
        piVar28 = piVar27 + 1;
        iVar25 = *piVar27;
        piVar27 = piVar28;
      } while (*(int *)(&UNK_00815470 +
                       ((ulong)(uVar11 + (uVar3 + ((uVar11 - uVar3 & 0xfffe) >> 1) >> 2) * -7 + 6) &
                       0xffff) * 4) != iVar25);
      lVar12 = 0;
      do {
        iVar25 = *piVar28;
        lVar12 = lVar12 + 0x100000000;
        piVar28 = piVar28 + 1;
      } while (iVar31 != iVar25);
      cVar24 = '\x01';
      lVar21 = lVar19;
      FUN_0057044c(lVar19,1,1,-(lVar12 >> 0x20),0,0,0);
      iVar31 = (int)cVar24;
      FUN_0057044c();
      uVar11 = (int)uStack_98 - 1;
      if (5 < uVar11) {
        uVar11 = 6;
      }
      cVar24 = (char)iVar31;
      uVar13 = (lVar21 % 400 - (ulong)(cVar24 < '\x03')) + 0x960;
      lVar12 = ((uVar13 + (uVar13 >> 2)) - (ulong)(((uint)uVar13 >> 2 & 0x3fff) / 0x19)) +
               (ulong)(((uint)uVar13 >> 4 & 0xfff) / 0x19) +
               (long)*(int *)(&UNK_008154a4 + (long)cVar24 * 4) + (long)((iVar31 << 0x10) >> 0x18);
      uVar13 = SUB168(SEXT816(lVar12) * SEXT816(0x4924924924924925),8);
      puVar29 = (uint *)&UNK_00815550;
      do {
        puVar30 = puVar29 + 1;
        uVar3 = *puVar29;
        puVar29 = puVar30;
      } while (*(uint *)(&UNK_00815488 +
                        (lVar12 + ((uVar13 >> 1) - ((long)uVar13 >> 0x3f)) * -7) * 4) != uVar3);
      do {
        uVar3 = *puVar30;
        puVar30 = puVar30 + 1;
      } while (uVar11 != uVar3);
      FUN_0057044c();
      iVar25 = (int)cVar24;
      FUN_0057044c();
      uVar13 = lVar21 - lVar19;
      if (uVar13 == 0) {
LAB_0057afb8:
        iVar31 = (int)(char)iVar25;
        iStack_a4 = (iVar25 << 0x10) >> 0x18;
        uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar31 + -1);
        iVar25 = (int)uStack_b0;
        goto LAB_0057afcc;
      }
      if ((long)uVar13 < 1) {
        if ((long)(-0x8000000000000000 - uVar13) <= (long)pcVar35) goto LAB_0057afb4;
      }
      else if ((long)pcVar35 <= (long)(uVar13 ^ 0x7fffffffffffffff)) {
LAB_0057afb4:
        pcVar35 = pcVar35 + uVar13;
        goto LAB_0057afb8;
      }
LAB_0057b060:
      if (param_6 == (char *)0x0) goto LAB_0057ac00;
      if (param_6[0x17] < '\0') {
        param_6[8] = '\x12';
        param_6[9] = '\0';
        param_6[10] = '\0';
        param_6[0xb] = '\0';
        param_6[0xc] = '\0';
        param_6[0xd] = '\0';
        param_6[0xe] = '\0';
        param_6[0xf] = '\0';
        param_6 = *(char **)param_6;
      }
      else {
        param_6[0x17] = '\x12';
      }
      builtin_strncpy(param_6,"Out-of-range field",0x13);
      goto joined_r0x0057b0a8;
    }
    uVar13 = (ulong)(uint)(int)(char)bVar2;
    if ((char)bVar2 < '\0') {
      ___maskrune(uVar13,0x4000);
      uVar11 = (uint)uVar13;
    }
    else {
      uVar11 = *(uint *)(puVar8 + uVar13 * 4 + 0x3c) & 0x4000;
    }
    if (uVar11 != 0) {
      uVar13 = (ulong)(char)*pbVar15;
      if ((char)*pbVar15 < '\0') goto LAB_005799b8;
      do {
        uVar13 = (ulong)(*(uint *)(puVar8 + (uVar13 & 0xffffffff) * 4 + 0x3c) & 0x4000);
        while( true ) {
          if ((int)uVar13 == 0) goto LAB_005799e4;
          pbVar15 = pbVar15 + 1;
          uVar13 = (ulong)(char)*pbVar15;
          if (-1 < (char)*pbVar15) break;
LAB_005799b8:
          ___maskrune(uVar13,0x4000);
        }
      } while( true );
    }
    if (*pbVar36 != 0x25) {
      if (*pbVar15 != *pbVar36) goto LAB_0057ab5c;
      pbVar15 = pbVar15 + 1;
      pbVar36 = pbVar36 + 1;
      goto LAB_00579974;
    }
    if (pbVar36[1] == 0) goto LAB_0057ab5c;
    pbStack_190 = pbVar36 + 2;
    pbVar34 = pbVar15;
    switch(pbVar36[1]) {
    case 0x25:
      pbVar34 = pbVar15 + 1;
      if (*pbVar15 != 0x25) goto LAB_0057ab5c;
      break;
    default:
      goto LAB_00579f7c;
    case 0x3a:
      if ((*pbStack_190 != 0x7a) &&
         ((*pbStack_190 != 0x3a ||
          ((pbVar36[3] != 0x7a && ((pbVar36[3] != 0x3a || (pbVar36[4] != 0x7a))))))))
      goto LAB_00579f7c;
      func_0x0057b44c(pbVar15,0x3a,&uStack_bc);
      if (*pbStack_190 == 0x7a) {
        lVar19 = 1;
      }
      else {
        lVar19 = 2;
        if (pbVar36[3] != 0x7a) {
          lVar19 = 3;
        }
      }
      bVar5 = (bool)(pbVar15 != (byte *)0x0 | bVar5);
      pbStack_190 = pbStack_190 + lVar19;
      pbVar34 = pbVar15;
      break;
    case 0x45:
      bVar2 = *pbStack_190;
      uVar13 = (ulong)bVar2;
      if (bVar2 < 0x54) {
        if (bVar2 == 0x2a) {
          bVar2 = pbVar36[3];
          if (bVar2 != 0x53) {
            if (bVar2 == 0x66) {
              if ((-1 < (long)(char)*pbVar15) &&
                 ((*(uint *)(puVar8 + (long)(char)*pbVar15 * 4 + 0x3c) >> 10 & 1) != 0)) {
                FUN_0057b8a4(pbVar15,&uStack_b8);
              }
              pbStack_190 = pbVar36 + 4;
              pbVar34 = pbVar15;
              break;
            }
            if (bVar2 == 0x7a) goto code_r0x0057a584;
code_r0x0057a5cc:
            if ((*(uint *)(puVar8 + uVar13 * 4 + 0x3c) >> 10 & 1) == 0) goto code_r0x0057a8a0;
            pcStack_140 = (char *)((ulong)pcStack_140 & 0xffffffff00000000);
            pbVar18 = pbStack_190;
            FUN_005796ec(pbStack_190,0,0x400,&pcStack_140);
            if (pbVar18 == (byte *)0x0) {
code_r0x0057a898:
              uVar13 = (ulong)*pbStack_190;
              goto code_r0x0057a8a0;
            }
            if (*pbVar18 == 0x66) {
              if ((-1 < (long)(char)*pbVar15) &&
                 ((*(uint *)(puVar8 + (long)(char)*pbVar15 * 4 + 0x3c) >> 10 & 1) != 0)) {
code_r0x0057a9c8:
                FUN_0057b8a4(pbVar15,&uStack_b8);
              }
            }
            else {
              if (*pbVar18 != 0x53) goto code_r0x0057a898;
              FUN_005796ec(pbVar15,2,0x3c,&uStack_b0);
              if ((pbVar15 != (byte *)0x0) && (*pbVar15 == 0x2e)) {
                pbVar15 = pbVar15 + 1;
                goto code_r0x0057a9c8;
              }
            }
            pbStack_190 = pbVar18 + 1;
            pbVar34 = pbVar15;
            break;
          }
          FUN_005796ec(pbVar15,2,0x3c,&uStack_b0);
          pbVar34 = pbVar15;
          if ((pbVar15 != (byte *)0x0) && (*pbVar15 == 0x2e)) {
            pbVar34 = pbVar15 + 1;
            FUN_0057b8a4(pbVar34,&uStack_b8);
          }
        }
        else {
          if (bVar2 != 0x34) goto code_r0x0057a560;
          if (pbVar36[3] != 0x59) goto code_r0x0057a5cc;
          func_0x0057b2c0(pbVar15,apcStack_78);
          if (pbVar34 == (byte *)0x0) {
            pbVar34 = (byte *)0x0;
          }
          else {
            bVar10 = (long)pbVar34 - (long)pbVar15 == 4;
            bVar6 = (bool)(bVar10 | bVar6);
            if (!bVar10) {
              pbVar34 = (byte *)0x0;
            }
          }
        }
        pbStack_190 = pbVar36 + 4;
      }
      else if (bVar2 == 0x7a) {
code_r0x0057a584:
        func_0x0057b44c(pbVar15,0x3a,&uStack_bc);
        bVar5 = (bool)(pbVar15 != (byte *)0x0 | bVar5);
        lVar19 = 1;
        if (*pbStack_190 != 0x7a) {
          lVar19 = 2;
        }
        pbStack_190 = pbStack_190 + lVar19;
        pbVar34 = pbVar15;
      }
      else {
        if (bVar2 != 0x54) {
code_r0x0057a560:
          if (-1 < (char)bVar2) goto code_r0x0057a5cc;
code_r0x0057a8a0:
          iVar25 = (int)uVar13;
          uStack_150 = CONCAT44((iVar25 != 0x58 && iVar25 != 99) & uStack_150._4_4_,(uint)uStack_150
                               );
          if (iVar25 != 0) {
            pbStack_190 = pbVar36 + 3;
          }
          uVar13 = (long)pbStack_190 - (long)pbVar36;
          goto joined_r0x0057a8dc;
        }
        if ((*pbVar15 | 0x20) != 0x74) goto LAB_0057ab5c;
        pbStack_190 = pbVar36 + 3;
        pbVar34 = pbVar15 + 1;
      }
      break;
    case 0x48:
      bVar2 = *pbVar15;
      if (bVar2 == 0x2d) {
        pbVar15 = pbVar15 + 1;
      }
      puVar14 = &UNK_0081550c;
      puVar16 = puVar14;
      _memchr(&UNK_0081550c,(long)(char)*pbVar15,0xb);
      if ((puVar16 == (undefined *)0x0) || (iVar25 = (int)puVar16 + -0x81550c, 9 < iVar25)) {
        uVar11 = 0;
        bVar10 = true;
        pbVar34 = pbVar15;
      }
      else {
        uVar11 = -iVar25;
        pbVar34 = pbVar15 + 1;
        if (((bVar2 != 0x2d) &&
            (_memchr(&UNK_0081550c,(long)(char)*pbVar34,0xb), puVar14 != (undefined *)0x0)) &&
           (uVar3 = (int)puVar14 - 0x81550c, (int)uVar3 < 10)) {
          if (iVar25 * -10 < (int)(uVar3 | 0x80000000)) {
            bVar10 = false;
            uVar11 = 0x80000008;
            goto code_r0x0057aa50;
          }
          uVar11 = iVar25 * -10 - uVar3;
          pbVar34 = pbVar15 + 2;
        }
        bVar10 = true;
      }
code_r0x0057aa50:
      if (((!bVar10) || (pbVar34 == pbVar15)) ||
         ((uVar11 == 0x80000000 && bVar2 != 0x2d || (uVar11 == 0 && bVar2 == 0x2d))))
      goto LAB_0057ab80;
      uVar3 = -uVar11;
      if (bVar2 == 0x2d) {
        uVar3 = uVar11;
      }
      if (0x17 < uVar3) goto LAB_0057ab80;
      uStack_150 = uStack_150 & 0xffffffff;
      uStack_a8 = uVar3;
      break;
    case 0x49:
    case 0x6c:
    case 0x72:
      uStack_150._4_4_ = 1;
      goto code_r0x00579f78;
    case 0x4d:
      bVar2 = *pbVar15;
      if (bVar2 == 0x2d) {
        pbVar15 = pbVar15 + 1;
      }
      puVar14 = &UNK_0081550c;
      puVar16 = puVar14;
      _memchr(&UNK_0081550c,(long)(char)*pbVar15,0xb);
      if ((puVar16 == (undefined *)0x0) || (iVar25 = (int)puVar16 + -0x81550c, 9 < iVar25)) {
        uVar11 = 0;
        bVar10 = true;
        pbVar34 = pbVar15;
      }
      else {
        uVar11 = -iVar25;
        pbVar34 = pbVar15 + 1;
        if (((bVar2 != 0x2d) &&
            (_memchr(&UNK_0081550c,(long)(char)*pbVar34,0xb), puVar14 != (undefined *)0x0)) &&
           (uVar3 = (int)puVar14 - 0x81550c, (int)uVar3 < 10)) {
          if (iVar25 * -10 < (int)(uVar3 | 0x80000000)) {
            bVar10 = false;
            uVar11 = 0x80000008;
            goto code_r0x0057aaa8;
          }
          uVar11 = iVar25 * -10 - uVar3;
          pbVar34 = pbVar15 + 2;
        }
        bVar10 = true;
      }
code_r0x0057aaa8:
      if (((!bVar10) || (pbVar34 == pbVar15)) ||
         ((uVar11 == 0x80000000 && bVar2 != 0x2d || (uVar11 == 0 && bVar2 == 0x2d))))
      goto LAB_0057ab5c;
      uVar3 = -uVar11;
      if (bVar2 == 0x2d) {
        uVar3 = uVar11;
      }
      if (0x3b < uVar3) goto LAB_0057ab5c;
      uStack_b0 = CONCAT44(uVar3,(int)uStack_b0);
      break;
    case 0x4f:
      bVar2 = pbVar36[2];
      if (bVar2 != 0) {
        pbStack_190 = pbVar36 + 3;
      }
      uStack_150._4_4_ = bVar2 != 0x48 & uStack_150._4_4_;
      if (bVar2 == 0x49) {
        uStack_150._4_4_ = 1;
      }
code_r0x00579f78:
LAB_00579f7c:
      uVar13 = (long)pbStack_190 - (long)pbVar36;
joined_r0x0057a8dc:
      if (0x7ffffffffffffff6 < uVar13) {
        FUN_0040d740();
LAB_0057b210:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x57b214);
        (*pcVar9)();
      }
      if (uVar13 < 0x17) {
        uStack_e0 = CONCAT17((char)uVar13,(undefined7)uStack_e0);
        pcVar35 = (char *)&pcStack_f0;
      }
      else {
        pdVar7 = &MACH_HEADER.flags;
        if ((dword *)(uVar13 | 7) != (dword *)0x17) {
          pdVar7 = (dword *)(uVar13 | 7);
        }
        pcVar35 = (char *)((long)pdVar7 + 1U);
        __Znwm();
        uStack_e0 = (long)pdVar7 + 1U | 0x8000000000000000;
        pcStack_f0 = pcVar35;
        uStack_e8 = uVar13;
      }
      _memmove(pcVar35,pbVar36,uVar13);
      pcVar35[uVar13] = '\0';
      pcVar35 = pcStack_f0;
      if (-1 < (long)uStack_e0) {
        pcVar35 = (char *)&pcStack_f0;
      }
      _strptime(pbVar15,pcVar35,&uStack_b0);
      uVar11 = (uint)uStack_e0._7_1_;
      if ((long)uStack_e0 < 0) {
        pcVar35 = pcStack_f0;
        if (uStack_e8 == 2) goto LAB_0057a028;
      }
      else {
        if (uStack_e0._7_1_ != '\x02') break;
        pcVar35 = (char *)&pcStack_f0;
LAB_0057a028:
        if ((*(short *)pcVar35 == 0x7025) && (pbVar34 != (byte *)0x0)) {
          cStack_f1 = '\x01';
          pppppppuStack_108 = (undefined8 *******)CONCAT62(pppppppuStack_108._2_6_,0x31);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppppppuStack_108,pbVar15,(long)pbVar34 - (long)pbVar15);
          uStack_150._4_4_ = (uint)(uStack_150 >> 0x20);
          if (cStack_f1 < '\0') {
            uStack_110 = 0;
            uStack_128 = 0;
            uStack_130 = 0;
            uStack_118 = 0;
            uStack_120 = 0;
            lStack_138 = 0;
            pcStack_140 = (char *)0x0;
            pppppppuVar22 = pppppppuStack_108;
            if (pppppppuStack_108 != (undefined8 *******)0x0) goto LAB_0057a164;
            uStack_150 = (ulong)uStack_150._4_4_ << 0x20;
LAB_0057a3d0:
            __ZdlPv(pppppppuStack_108);
          }
          else {
            pppppppuVar22 = &pppppppuStack_108;
LAB_0057a164:
            uStack_110 = 0;
            uStack_118 = 0;
            uStack_120 = 0;
            uStack_128 = 0;
            uStack_130 = 0;
            lStack_138 = 0;
            pcStack_140 = (char *)0x0;
            _strptime(pppppppuVar22,"%I%p",&pcStack_140);
            uStack_150 = CONCAT44(uStack_150._4_4_,(uint)((int)lStack_138 == 0xd));
            if (cStack_f1 < '\0') goto LAB_0057a3d0;
          }
          uVar11 = (uint)(byte)(uStack_e0 >> 0x38);
        }
        if ((uVar11 >> 7 & 1) == 0) break;
      }
      __ZdlPv(pcStack_f0);
      break;
    case 0x52:
    case 0x54:
    case 0x58:
    case 99:
      uStack_150 = uStack_150 & 0xffffffff;
      uVar13 = (long)pbStack_190 - (long)pbVar36;
      goto joined_r0x0057a8dc;
    case 0x53:
      bVar2 = *pbVar15;
      if (bVar2 == 0x2d) {
        pbVar15 = pbVar15 + 1;
      }
      puVar14 = &UNK_0081550c;
      puVar16 = puVar14;
      _memchr(&UNK_0081550c,(long)(char)*pbVar15,0xb);
      if ((puVar16 == (undefined *)0x0) || (iVar25 = (int)puVar16 + -0x81550c, 9 < iVar25)) {
        uVar11 = 0;
        bVar10 = true;
        pbVar34 = pbVar15;
      }
      else {
        uVar11 = -iVar25;
        pbVar34 = pbVar15 + 1;
        if (((bVar2 != 0x2d) &&
            (_memchr(&UNK_0081550c,(long)(char)*pbVar34,0xb), puVar14 != (undefined *)0x0)) &&
           (uVar3 = (int)puVar14 - 0x81550c, (int)uVar3 < 10)) {
          if (iVar25 * -10 < (int)(uVar3 | 0x80000000)) {
            bVar10 = false;
            uVar11 = 0x80000008;
            goto code_r0x0057a9fc;
          }
          uVar11 = iVar25 * -10 - uVar3;
          pbVar34 = pbVar15 + 2;
        }
        bVar10 = true;
      }
code_r0x0057a9fc:
      if (((!bVar10) || (pbVar34 == pbVar15)) ||
         ((uVar11 == 0x80000000 && bVar2 != 0x2d || (uVar11 == 0 && bVar2 == 0x2d))))
      goto LAB_0057ab5c;
      uVar3 = -uVar11;
      if (bVar2 == 0x2d) {
        uVar3 = uVar11;
      }
      if (0x3c < uVar3) goto LAB_0057ab5c;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar3);
      break;
    case 0x55:
      bVar2 = *pbVar15;
      if (bVar2 == 0x2d) {
        pbVar15 = pbVar15 + 1;
      }
      puVar14 = &UNK_0081550c;
      _memchr(&UNK_0081550c,(long)(char)*pbVar15,0xb);
      uVar11 = 0;
      pbVar34 = pbVar15;
      if (puVar14 == (undefined *)0x0) {
        bVar10 = true;
      }
      else {
        do {
          uVar3 = (int)puVar14 - 0x81550c;
          if (9 < (int)uVar3) break;
          if ((int)uVar11 < -0xccccccc) {
            bVar10 = false;
            goto code_r0x0057a788;
          }
          if ((int)(uVar11 * 10) < (int)(uVar3 | 0x80000000)) {
            bVar10 = false;
            uVar11 = 0x80000008;
            goto code_r0x0057a788;
          }
          uVar11 = uVar11 * 10 - uVar3;
          pbVar34 = pbVar34 + 1;
          puVar14 = &UNK_0081550c;
          _memchr(&UNK_0081550c,(long)(char)*pbVar34,0xb);
        } while (puVar14 != (undefined *)0x0);
        bVar10 = true;
      }
code_r0x0057a788:
      if (((pbVar34 == pbVar15) || (!bVar10)) ||
         ((uVar11 == 0x80000000 && bVar2 != 0x2d || (uVar11 == 0 && bVar2 == 0x2d))))
      goto LAB_0057ab5c;
      uStack_158 = -uVar11;
      if (bVar2 == 0x2d) {
        uStack_158 = uVar11;
      }
      if (0x35 < uStack_158) goto LAB_0057ab5c;
      iVar31 = 6;
      break;
    case 0x57:
      bVar2 = *pbVar15;
      if (bVar2 == 0x2d) {
        pbVar15 = pbVar15 + 1;
      }
      puVar14 = &UNK_0081550c;
      _memchr(&UNK_0081550c,(long)(char)*pbVar15,0xb);
      uVar11 = 0;
      pbVar34 = pbVar15;
      if (puVar14 == (undefined *)0x0) {
        bVar10 = true;
      }
      else {
        do {
          uVar3 = (int)puVar14 - 0x81550c;
          if (9 < (int)uVar3) break;
          if ((int)uVar11 < -0xccccccc) {
            bVar10 = false;
            goto code_r0x0057a7e0;
          }
          if ((int)(uVar11 * 10) < (int)(uVar3 | 0x80000000)) {
            bVar10 = false;
            uVar11 = 0x80000008;
            goto code_r0x0057a7e0;
          }
          uVar11 = uVar11 * 10 - uVar3;
          pbVar34 = pbVar34 + 1;
          puVar14 = &UNK_0081550c;
          _memchr(&UNK_0081550c,(long)(char)*pbVar34,0xb);
        } while (puVar14 != (undefined *)0x0);
        bVar10 = true;
      }
code_r0x0057a7e0:
      if ((((pbVar34 == pbVar15) || (!bVar10)) || (uVar11 == 0x80000000 && bVar2 != 0x2d)) ||
         (uVar11 == 0 && bVar2 == 0x2d)) goto LAB_0057ab5c;
      uStack_158 = -uVar11;
      if (bVar2 == 0x2d) {
        uStack_158 = uVar11;
      }
      if (0x35 < uStack_158) goto LAB_0057ab5c;
      iVar31 = 0;
      break;
    case 0x59:
      bVar2 = *pbVar15;
      if (bVar2 == 0x2d) {
        pbVar15 = pbVar15 + 1;
      }
      puVar14 = &UNK_0081550c;
      _memchr(&UNK_0081550c,(long)(char)*pbVar15,0xb);
      pcVar35 = (char *)0x0;
      pbVar36 = pbVar15;
      if (puVar14 == (undefined *)0x0) {
        bVar10 = true;
      }
      else {
        do {
          iVar25 = (int)puVar14 + -0x81550c;
          if (9 < iVar25) break;
          if ((long)pcVar35 < -0xccccccccccccccc) {
            bVar10 = false;
            goto code_r0x0057a83c;
          }
          if ((long)pcVar35 * 10 < (long)((long)iVar25 | 0x8000000000000000U)) {
            bVar10 = false;
            pcVar35 = (char *)0x8000000000000008;
            goto code_r0x0057a83c;
          }
          pbVar36 = pbVar36 + 1;
          pcVar35 = (char *)((long)pcVar35 * 10 - (long)iVar25);
          puVar14 = &UNK_0081550c;
          _memchr(&UNK_0081550c,(long)(char)*pbVar36,0xb);
        } while (puVar14 != (undefined *)0x0);
        bVar10 = true;
      }
code_r0x0057a83c:
      pbVar34 = (byte *)0x0;
      if (((pbVar36 != pbVar15) && (bVar10)) &&
         ((pcVar35 != (char *)0x8000000000000000 || bVar2 == 0x2d &&
          ((pcVar35 != (char *)0x0 || bVar2 != 0x2d &&
           (pbVar34 = pbVar36, apcStack_78[0] = (char *)-(long)pcVar35, bVar2 == 0x2d)))))) {
        apcStack_78[0] = pcVar35;
      }
      bVar6 = (bool)(pbVar34 != (byte *)0x0 | bVar6);
      break;
    case 0x5a:
      if ((long)uStack_c8 < 0) {
        *pcStack_d8 = '\0';
        uStack_d0 = 0;
      }
      else {
        pcStack_d8 = (char *)((ulong)pcStack_d8 & 0xffffffffffffff00);
        uStack_c8 = uStack_c8 & 0xffffffffffffff;
      }
      while (bVar2 = *pbVar15, bVar2 != 0) {
        uVar13 = (ulong)(uint)(int)(char)bVar2;
        if ((char)bVar2 < '\0') {
          ___maskrune(uVar13,0x4000);
          uVar11 = (uint)uVar13;
        }
        else {
          uVar11 = *(uint *)(puVar8 + uVar13 * 4 + 0x3c) & 0x4000;
        }
        if (uVar11 != 0) break;
        bVar2 = *pbVar15;
        if ((long)uStack_c8 < 0) {
          uVar13 = (uStack_c8 & 0x7fffffffffffffff) - 1;
          if (uStack_d0 == uVar13) {
            if ((uStack_c8 & 0x7fffffffffffffff) != 0x7ffffffffffffff7) {
              pcVar35 = pcStack_d8;
              if (uVar13 < 0x3ffffffffffffff3) {
                if (uVar13 == 0) {
                  pcVar32 = (char *)((long)&MACH_HEADER.sizeofcmds + 3);
                }
                else {
                  pdVar26 = (dword *)(uVar13 * 2 | 7);
                  pdVar7 = &MACH_HEADER.flags;
                  if (pdVar26 != (dword *)0x17) {
                    pdVar7 = pdVar26;
                  }
                  pcVar32 = (char *)((long)&MACH_HEADER.sizeofcmds + 3);
                  if (0xb < uVar13) {
                    pcVar32 = (char *)((long)pdVar7 + 1);
                  }
                }
                goto code_r0x0057a2d0;
              }
              bVar10 = false;
              pcVar32 = (char *)0x7ffffffffffffff7;
              goto code_r0x0057a2d8;
            }
            FUN_0040d740();
            goto LAB_0057b210;
          }
code_r0x0057a37c:
          pcVar35 = pcStack_d8;
          uVar13 = uStack_d0;
          uStack_d0 = uStack_d0 + 1;
        }
        else {
          if (uStack_c8._7_1_ == 0x16) {
            uVar13 = 0x16;
            pcVar32 = segment_command_00000020.segname + 8;
            pcVar35 = (char *)&pcStack_d8;
code_r0x0057a2d0:
            bVar10 = uVar13 == 0x16;
code_r0x0057a2d8:
            pcVar17 = pcVar32;
            __Znwm();
            if (uVar13 != 0) {
              _memmove(pcVar17,pcVar35,uVar13);
            }
            if (!bVar10) {
              __ZdlPv(pcVar35);
            }
            uStack_c8 = (ulong)pcVar32 | 0x8000000000000000;
            uStack_d0 = uVar13;
            pcStack_d8 = pcVar17;
            goto code_r0x0057a37c;
          }
          uVar13 = (ulong)uStack_c8._7_1_;
          uStack_c8 = CONCAT17(uStack_c8._7_1_ + 1,(undefined7)uStack_c8) & 0x7fffffffffffffff;
          pcVar35 = (char *)&pcStack_d8;
        }
        pcVar35[uVar13] = bVar2;
        (pcVar35 + uVar13)[1] = 0;
        pbVar15 = pbVar15 + 1;
      }
      uVar13 = uStack_d0;
      if (-1 < (long)uStack_c8) {
        uVar13 = uStack_c8 >> 0x38;
      }
      pbVar34 = pbVar15;
      if (uVar13 == 0) goto LAB_0057ab5c;
      break;
    case 100:
    case 0x65:
      bVar2 = *pbVar15;
      if (bVar2 == 0x2d) {
        pbVar15 = pbVar15 + 1;
      }
      puVar14 = &UNK_0081550c;
      puVar16 = puVar14;
      _memchr(&UNK_0081550c,(long)(char)*pbVar15,0xb);
      if ((puVar16 == (undefined *)0x0) || (iVar25 = (int)puVar16 + -0x81550c, 9 < iVar25)) {
        iVar33 = 0;
        bVar10 = true;
        pbVar34 = pbVar15;
      }
      else {
        iVar33 = -iVar25;
        pbVar34 = pbVar15 + 1;
        if (((bVar2 != 0x2d) &&
            (_memchr(&UNK_0081550c,(long)(char)*pbVar34,0xb), puVar14 != (undefined *)0x0)) &&
           (uVar11 = (int)puVar14 - 0x81550c, (int)uVar11 < 10)) {
          if (iVar25 * -10 < (int)(uVar11 | 0x80000000)) {
            bVar10 = false;
            iVar33 = -0x7ffffff8;
            goto code_r0x0057a958;
          }
          iVar33 = iVar25 * -10 - uVar11;
          pbVar34 = pbVar15 + 2;
        }
        bVar10 = true;
      }
code_r0x0057a958:
      if (((bVar10) && (pbVar34 != pbVar15)) &&
         ((iVar33 != -0x80000000 || bVar2 == 0x2d && (iVar33 != 0 || bVar2 != 0x2d)))) {
        iVar25 = -iVar33;
        if (bVar2 == 0x2d) {
          iVar25 = iVar33;
        }
        if (0xffffffe0 < iVar25 - 0x20U) goto code_r0x0057ab48;
      }
      goto LAB_0057ab5c;
    case 0x6d:
      bVar2 = *pbVar15;
      if (bVar2 == 0x2d) {
        pbVar15 = pbVar15 + 1;
      }
      puVar14 = &UNK_0081550c;
      puVar16 = puVar14;
      _memchr(&UNK_0081550c,(long)(char)*pbVar15,0xb);
      if ((puVar16 == (undefined *)0x0) || (iVar25 = (int)puVar16 + -0x81550c, 9 < iVar25)) {
        iVar33 = 0;
        bVar10 = true;
        pbVar34 = pbVar15;
      }
      else {
        iVar33 = -iVar25;
        pbVar34 = pbVar15 + 1;
        if (((bVar2 != 0x2d) &&
            (_memchr(&UNK_0081550c,(long)(char)*pbVar34,0xb), puVar14 != (undefined *)0x0)) &&
           (uVar11 = (int)puVar14 - 0x81550c, (int)uVar11 < 10)) {
          if (iVar25 * -10 < (int)(uVar11 | 0x80000000)) {
            bVar10 = false;
            iVar33 = -0x7ffffff8;
            goto code_r0x0057aafc;
          }
          iVar33 = iVar25 * -10 - uVar11;
          pbVar34 = pbVar15 + 2;
        }
        bVar10 = true;
      }
code_r0x0057aafc:
      if (((!bVar10) || (pbVar34 == pbVar15)) ||
         ((iVar33 == -0x80000000 && bVar2 != 0x2d || (iVar33 == 0 && bVar2 == 0x2d))))
      goto LAB_0057ab5c;
      iVar25 = -iVar33;
      if (bVar2 == 0x2d) {
        iVar25 = iVar33;
      }
      if (iVar25 - 0xdU < 0xfffffff4) goto LAB_0057ab5c;
      uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar25 + -1);
      iVar25 = iStack_a4;
code_r0x0057ab48:
      iStack_a4 = iVar25;
      uStack_158 = 0xffffffff;
      break;
    case 0x73:
      bVar2 = *pbVar15;
      if (bVar2 == 0x2d) {
        pbVar15 = pbVar15 + 1;
      }
      puVar14 = &UNK_0081550c;
      _memchr(&UNK_0081550c,(long)(char)*pbVar15,0xb);
      lVar19 = 0;
      pbVar34 = pbVar15;
      if (puVar14 == (undefined *)0x0) {
        bVar4 = true;
      }
      else {
        do {
          iVar25 = (int)puVar14 + -0x81550c;
          if (9 < iVar25) break;
          if (lVar19 < -0xccccccccccccccc) {
            bVar4 = false;
            goto code_r0x0057a680;
          }
          if (lVar19 * 10 < (long)((long)iVar25 | 0x8000000000000000U)) {
            bVar4 = false;
            lVar19 = -0x7ffffffffffffff8;
            goto code_r0x0057a680;
          }
          pbVar34 = pbVar34 + 1;
          lVar19 = lVar19 * 10 - (long)iVar25;
          puVar14 = &UNK_0081550c;
          _memchr(&UNK_0081550c,(long)(char)*pbVar34,0xb);
        } while (puVar14 != (undefined *)0x0);
        bVar4 = true;
      }
code_r0x0057a680:
      bVar10 = bVar2 == 0x2d;
      lStack_178 = -lVar19;
      if (bVar10) {
        lStack_178 = lVar19;
      }
      if (((pbVar34 == pbVar15) || (!bVar4)) ||
         ((lVar19 == -0x8000000000000000 && !bVar10 || (lVar19 == 0 && bVar10)))) goto LAB_0057ab5c;
      bVar4 = true;
      break;
    case 0x75:
      bVar2 = *pbVar15;
      if (bVar2 == 0x2d) {
        pbVar15 = pbVar15 + 1;
      }
      puVar14 = &UNK_0081550c;
      _memchr(&UNK_0081550c,(long)(char)*pbVar15,0xb);
      uVar11 = 0;
      pbVar34 = pbVar15;
      if (puVar14 == (undefined *)0x0) {
        bVar10 = true;
      }
      else {
        do {
          uVar3 = (int)puVar14 - 0x81550c;
          if (9 < (int)uVar3) break;
          if ((int)uVar11 < -0xccccccc) {
            bVar10 = false;
            goto code_r0x0057a724;
          }
          if ((int)(uVar11 * 10) < (int)(uVar3 | 0x80000000)) {
            bVar10 = false;
            uVar11 = 0x80000008;
            goto code_r0x0057a724;
          }
          uVar11 = uVar11 * 10 - uVar3;
          pbVar34 = pbVar34 + 1;
          puVar14 = &UNK_0081550c;
          _memchr(&UNK_0081550c,(long)(char)*pbVar34,0xb);
        } while (puVar14 != (undefined *)0x0);
        bVar10 = true;
      }
code_r0x0057a724:
      if (((pbVar34 == pbVar15) || (!bVar10)) ||
         ((uVar11 == 0x80000000 && bVar2 != 0x2d || (uVar11 == 0 && bVar2 == 0x2d))))
      goto LAB_0057ab5c;
      uVar3 = -uVar11;
      if (bVar2 == 0x2d) {
        uVar3 = uVar11;
      }
      if (uVar3 - 8 < 0xfffffff9) goto LAB_0057ab5c;
      if (6 < uVar3) {
        uVar3 = uVar3 - 7;
      }
      uStack_98 = CONCAT44(uStack_98._4_4_,uVar3);
      break;
    case 0x77:
      bVar2 = *pbVar15;
      if (bVar2 == 0x2d) {
        pbVar15 = pbVar15 + 1;
      }
      puVar14 = &UNK_0081550c;
      _memchr(&UNK_0081550c,(long)(char)*pbVar15,0xb);
      uVar11 = 0;
      pbVar34 = pbVar15;
      if (puVar14 == (undefined *)0x0) {
        bVar10 = true;
      }
      else {
        do {
          uVar3 = (int)puVar14 - 0x81550c;
          if (9 < (int)uVar3) break;
          if ((int)uVar11 < -0xccccccc) {
            bVar10 = false;
            goto code_r0x0057a6d0;
          }
          if ((int)(uVar11 * 10) < (int)(uVar3 | 0x80000000)) {
            bVar10 = false;
            uVar11 = 0x80000008;
            goto code_r0x0057a6d0;
          }
          uVar11 = uVar11 * 10 - uVar3;
          pbVar34 = pbVar34 + 1;
          puVar14 = &UNK_0081550c;
          _memchr(&UNK_0081550c,(long)(char)*pbVar34,0xb);
        } while (puVar14 != (undefined *)0x0);
        bVar10 = true;
      }
code_r0x0057a6d0:
      if ((((pbVar34 == pbVar15) || (!bVar10)) || (uVar11 == 0x80000000 && bVar2 != 0x2d)) ||
         (uVar11 == 0 && bVar2 == 0x2d)) goto LAB_0057ab5c;
      uVar3 = -uVar11;
      if (bVar2 == 0x2d) {
        uVar3 = uVar11;
      }
      if (6 < uVar3) goto LAB_0057ab5c;
      uStack_98 = CONCAT44(uStack_98._4_4_,uVar3);
      break;
    case 0x7a:
      func_0x0057b44c(pbVar15,0,&uStack_bc);
      bVar5 = (bool)(pbVar15 != (byte *)0x0 | bVar5);
      pbVar34 = pbVar15;
    }
    pbVar15 = pbVar34;
    pbVar36 = pbStack_190;
    if (pbVar34 == (byte *)0x0) {
LAB_0057ab5c:
      if ((((uStack_150 & 0x100000000) != 0) && ((uStack_150 & 1) != 0)) && ((int)uStack_a8 < 0xc))
      {
        uStack_a8 = uStack_a8 + 0xc;
      }
LAB_0057ab80:
      if (param_6 == (char *)0x0) {
LAB_0057ac00:
        uVar20 = 0;
      }
      else {
        if (param_6[0x17] < '\0') {
          param_6[8] = '\x15';
          param_6[9] = '\0';
          param_6[10] = '\0';
          param_6[0xb] = '\0';
          param_6[0xc] = '\0';
          param_6[0xd] = '\0';
          param_6[0xe] = '\0';
          param_6[0xf] = '\0';
          param_6 = *(char **)param_6;
        }
        else {
          param_6[0x17] = '\x15';
        }
        builtin_strncpy(param_6,"Failed to parse input",0x16);
joined_r0x0057b0a8:
        uVar20 = 0;
      }
joined_r0x0057ac58:
      if ((long)uStack_c8 < 0) {
        __ZdlPv(pcStack_d8);
      }
      return uVar20;
    }
  } while( true );
  while (___maskrune(uVar13,0x4000), (int)uVar13 != 0) {
LAB_005799e4:
    pbVar36 = pbVar36 + 1;
    uVar13 = (ulong)(char)*pbVar36;
    if (-1 < (char)*pbVar36) {
      if ((*(uint *)(puVar8 + (uVar13 & 0xffffffff) * 4 + 0x3c) & 0x4000) == 0) break;
      goto LAB_005799e4;
    }
  }
  goto LAB_00579974;
}



/* Entry: 0057b2c0; end: 0057b8a3;  */

char * FUN_0057b2c0(char *param_1,long *param_2)

{
  long lVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  
  cVar3 = *param_1;
  pcVar2 = param_1;
  if (cVar3 == '-') {
    pcVar2 = param_1 + 1;
  }
  puVar6 = &UNK_0081550c;
  _memchr(&UNK_0081550c,(long)*pcVar2,0xb);
  lVar8 = 0;
  pcVar10 = pcVar2;
  if (puVar6 == (undefined *)0x0) {
    bVar5 = true;
  }
  else {
    iVar7 = 3;
    if (cVar3 != '-') {
      iVar7 = 4;
    }
    pcVar11 = param_1 + (cVar3 == '-');
    do {
      pcVar9 = pcVar11;
      pcVar11 = pcVar9 + 1;
      iVar4 = (int)puVar6 + -0x81550c;
      if (9 < iVar4) break;
      if (lVar8 < -0xccccccccccccccc) {
        bVar5 = false;
        goto LAB_0057b3d0;
      }
      if (lVar8 * 10 < (long)((long)iVar4 | 0x8000000000000000U)) {
        bVar5 = false;
        lVar8 = -0x7ffffffffffffff8;
        goto LAB_0057b3d0;
      }
      lVar8 = lVar8 * 10 - (long)iVar4;
      iVar4 = iVar7 + -1;
      if (iVar7 < 1) {
        iVar7 = 0;
      }
      else {
        iVar7 = iVar4;
        if (iVar4 == 0) {
          bVar5 = true;
          pcVar10 = pcVar11;
          goto LAB_0057b3d0;
        }
      }
      pcVar10 = pcVar10 + 1;
      puVar6 = &UNK_0081550c;
      _memchr(&UNK_0081550c,(long)*pcVar11,0xb);
      pcVar9 = pcVar10;
    } while (puVar6 != (undefined *)0x0);
    bVar5 = true;
    pcVar10 = pcVar9;
  }
LAB_0057b3d0:
  pcVar11 = (char *)0x0;
  if (((bVar5) && (pcVar10 != pcVar2 && (lVar8 != -0x8000000000000000 || cVar3 == '-'))) &&
     (lVar8 != 0 || cVar3 != '-')) {
    lVar1 = -lVar8;
    if (cVar3 == '-') {
      lVar1 = lVar8;
    }
    if (lVar1 - 10000U < 0xffffffffffffd509) {
      pcVar11 = (char *)0x0;
    }
    else {
      *param_2 = lVar1;
      pcVar11 = pcVar10;
    }
  }
  return pcVar11;
}



/* Entry: 0057b8a4; end: 0057b973;  */

char * FUN_0057b8a4(char *param_1,long *param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  puVar2 = &UNK_0081550c;
  _memchr(&UNK_0081550c,(long)*param_1,0xb);
  if (puVar2 == (undefined *)0x0) {
LAB_0057b954:
    param_1 = (char *)0x0;
  }
  else {
    lVar5 = 0;
    uVar4 = 0;
    lVar3 = 0;
    do {
      iVar1 = (int)puVar2 + -0x81550c;
      if (9 < iVar1) {
        if (lVar5 == 0) goto LAB_0057b954;
        break;
      }
      if (uVar4 < 0xf) {
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 * 10 + (long)iVar1;
      }
      param_1 = param_1 + 1;
      puVar2 = &UNK_0081550c;
      _memchr(&UNK_0081550c,(long)*param_1,0xb);
      lVar5 = lVar5 + -1;
    } while (puVar2 != (undefined *)0x0);
    *param_2 = *(long *)(&UNK_008153d8 + (0xf - uVar4) * 8) * lVar3;
  }
  return param_1;
}



/* Entry: 0057b974; end: 0057b9fb;  */

bool FUN_0057b974(long *param_1,long *param_2)

{
  if (*param_2 < *param_1) {
    return true;
  }
  if (*param_2 == *param_1) {
    if ((char)param_2[1] < (char)param_1[1]) {
      return true;
    }
    if ((char)param_2[1] == (char)param_1[1]) {
      if (*(char *)((long)param_2 + 9) < *(char *)((long)param_1 + 9)) {
        return true;
      }
      if (*(char *)((long)param_2 + 9) == *(char *)((long)param_1 + 9)) {
        if (*(char *)((long)param_2 + 10) < *(char *)((long)param_1 + 10)) {
          return true;
        }
        if (*(char *)((long)param_2 + 10) == *(char *)((long)param_1 + 10)) {
          if (*(char *)((long)param_2 + 0xb) < *(char *)((long)param_1 + 0xb)) {
            return true;
          }
          if (*(char *)((long)param_2 + 0xb) == *(char *)((long)param_1 + 0xb)) {
            return *(char *)((long)param_2 + 0xc) < *(char *)((long)param_1 + 0xc);
          }
        }
      }
    }
  }
  return false;
}



/* Entry: 0057b9fc; end: 0057ba8b;  */

void FUN_0057b9fc(undefined8 param_1,long param_2,long param_3)

{
  FUN_005700e8(param_1,(long)(char)param_2,(param_2 << 0x30) >> 0x38,(param_2 << 0x28) >> 0x38,
               param_3 / 0x3c + ((param_2 << 0x20) >> 0x38),
               param_3 % 0x3c + ((param_2 << 0x18) >> 0x38));
  return;
}



/* Entry: 0057ba8c; end: 0057bce7;  */

bool FUN_0057ba8c(long *param_1,long *param_2)

{
  if (*param_1 < *param_2) {
    return true;
  }
  if (*param_1 == *param_2) {
    if ((char)param_1[1] < (char)param_2[1]) {
      return true;
    }
    if ((char)param_1[1] == (char)param_2[1]) {
      if (*(char *)((long)param_1 + 9) < *(char *)((long)param_2 + 9)) {
        return true;
      }
      if (*(char *)((long)param_1 + 9) == *(char *)((long)param_2 + 9)) {
        if (*(char *)((long)param_1 + 10) < *(char *)((long)param_2 + 10)) {
          return true;
        }
        if (*(char *)((long)param_1 + 10) == *(char *)((long)param_2 + 10)) {
          if (*(char *)((long)param_1 + 0xb) < *(char *)((long)param_2 + 0xb)) {
            return true;
          }
          if (*(char *)((long)param_1 + 0xb) == *(char *)((long)param_2 + 0xb)) {
            return *(char *)((long)param_1 + 0xc) < *(char *)((long)param_2 + 0xc);
          }
        }
      }
    }
  }
  return false;
}



/* Entry: 0057bce8; end: 0057bdab;  */

void FUN_0057bce8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)(char)param_2;
  lVar1 = (param_2 << 0x30) >> 0x38;
  lVar2 = (param_2 << 0x28) >> 0x38;
  lVar3 = (param_2 << 0x20) >> 0x38;
  if (param_3 == -0x8000000000000000) {
    FUN_005700e8(param_1,lVar4,lVar1,lVar2,lVar3 + 0x222222222222222,((param_2 << 0x18) >> 0x38) + 7
                );
    FUN_005700e8(param_1,(long)(char)lVar4,(lVar4 << 0x30) >> 0x38,(lVar4 << 0x28) >> 0x38,
                 (lVar4 << 0x20) >> 0x38,((lVar4 << 0x18) >> 0x38) + 1);
    return;
  }
  lVar5 = SUB168(SEXT816(param_3) * SEXT816(0x7777777777777777),8) - param_3;
  FUN_005700e8(param_1,lVar4,lVar1,lVar2,lVar3 + ((lVar5 >> 5) - (lVar5 >> 0x3f)),
               ((param_3 / 0x3c) * 0x3c - param_3) + ((param_2 << 0x18) >> 0x38));
  return;
}



/* Entry: 0057bdac; end: 0057c01f;  */

/* WARNING: Type propagation algorithm not settling */

dword * FUN_0057bdac(undefined8 *param_1,dword *param_2)

{
  qword qVar1;
  byte bVar2;
  code *pcVar3;
  dword *pdVar4;
  char **ppcVar5;
  segment_command *psVar6;
  char *pcVar7;
  dword *pdVar8;
  qword *pqVar9;
  long lVar10;
  segment_command *psVar11;
  qword *pqVar12;
  char *pcVar13;
  uint uVar14;
  int extraout_w8;
  int iVar15;
  char **ppcVar16;
  undefined8 *puVar17;
  long lVar18;
  segment_command *psVar19;
  qword *pqVar20;
  ulong uVar21;
  long *plVar22;
  undefined8 *puVar23;
  ulong uVar24;
  long *plVar25;
  dword *pdVar26;
  ulong uVar27;
  segment_command *psVar28;
  undefined8 *puVar29;
  char *pcVar30;
  dword *unaff_x24;
  char **ppcVar31;
  char **ppcVar32;
  undefined8 uVar33;
  qword qVar34;
  long lStack_e0;
  char *pcStack_d8;
  qword *pqStack_d0;
  undefined8 uStack_c8;
  dword *pdStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  bVar2 = *(byte *)((long)param_2 + 0x17);
  if ((long)(char)bVar2 < 0) {
    pdVar4 = *(dword **)param_2;
    plVar25 = *(long **)(param_2 + 2);
    if (&MACH_HEADER.cputype < plVar25) {
      plVar25 = (long *)((long)&MACH_HEADER.cputype + 1);
    }
  }
  else {
    uVar14 = (uint)(char)bVar2;
    if (4 < uVar14) {
      uVar14 = 5;
    }
    plVar25 = (long *)(ulong)uVar14;
    pdVar4 = param_2;
  }
  pcVar13 = "libc:";
  _memcmp(pdVar4,"libc:",plVar25);
  if (plVar25 != (long *)((long)&MACH_HEADER.cputype + 1U) || (int)pdVar4 != 0) {
    pdVar8 = &section_00000068.flags;
    __Znwm();
    *(undefined ***)pdVar8 = &PTR_FUN_00a01ec0;
    *(undefined8 *)(pdVar8 + 4) = 0;
    *(undefined8 *)(pdVar8 + 2) = 0;
    *(undefined8 *)(pdVar8 + 8) = 0;
    *(undefined8 *)(pdVar8 + 6) = 0;
    *(undefined8 *)(pdVar8 + 0xc) = 0;
    *(undefined8 *)(pdVar8 + 10) = 0;
    *(undefined8 *)(pdVar8 + 0x12) = 0;
    *(undefined8 *)(pdVar8 + 0x10) = 0;
    *(undefined8 *)(pdVar8 + 0x16) = 0;
    *(undefined8 *)(pdVar8 + 0x14) = 0;
    *(undefined8 *)(pdVar8 + 0x1a) = 0;
    *(undefined8 *)(pdVar8 + 0x18) = 0;
    *(undefined8 *)(pdVar8 + 0x1e) = 0;
    *(undefined8 *)(pdVar8 + 0x1c) = 0;
    *(undefined8 *)(pdVar8 + 0x20) = 0;
    *(undefined8 *)(pdVar8 + 0x26) = 0;
    *(undefined8 *)(pdVar8 + 0x28) = 0;
    pdVar4 = pdVar8;
    FUN_0057e840();
    pdVar26 = pdVar8;
    if (((ulong)pdVar4 & 1) == 0) {
      (**(code **)(*(long *)pdVar8 + 8))(pdVar8);
      pdVar26 = (dword *)0x0;
      pdVar4 = pdVar8;
    }
    *param_1 = pdVar26;
    return pdVar4;
  }
  if ((char)bVar2 < '\0') {
    pdVar26 = param_2 + 2;
    if (*(ulong *)pdVar26 < 5) goto LAB_0057bfe4;
    param_2 = *(dword **)param_2;
    uVar27 = *(ulong *)pdVar26 - 5;
    if (uVar27 < 0x7ffffffffffffff7) goto LAB_0057beac;
LAB_0057bf54:
    FUN_0040d740();
    iVar15 = extraout_w8;
LAB_0057bf58:
    pdVar26 = pdStack_58;
    if (uStack_50 != 9) {
      *(undefined1 *)(pdVar4 + 2) = 0;
      *param_1 = pdVar4;
      goto LAB_0057bfc4;
    }
  }
  else {
    if (bVar2 < 5) {
LAB_0057bfe4:
      FUN_00461b78();
      if ((long)uStack_48 < 0) {
        __ZdlPv(pdStack_58);
        __Unwind_Resume();
        (**(code **)(*plVar25 + 8))(plVar25);
      }
      __Unwind_Resume();
      if ((bRam0000000000b6b6a8 & 1) == 0) {
        iVar15 = 0xb6b6a8;
        ___cxa_guard_acquire();
        if (iVar15 != 0) {
          psVar11 = &segment_command_00000020;
          __Znwm();
          FUN_0057cad4();
          psRam0000000000b6b6a0 = psVar11;
          ___cxa_guard_release(0xb6b6a8);
        }
      }
      psVar11 = psRam0000000000b6b6a0;
      lStack_e0 = 0;
      pdVar26 = pdVar4;
      func_0x00576ee0(pdVar4,&lStack_e0);
      if (((int)pdVar26 != 0) && (lStack_e0 == 0)) {
        *(segment_command **)pcVar13 = psVar11;
        return (dword *)((long)&MACH_HEADER.magic + 1);
      }
      if ((bRam0000000000b62930 & 1) == 0) {
        iVar15 = 0xb62930;
        ___cxa_guard_acquire();
        if (iVar15 != 0) {
          pqVar12 = &segment_command_00000020.vmsize;
          __Znwm();
          *pqVar12 = 0x32aaaba7;
          pqVar12[2] = 0;
          pqVar12[1] = 0;
          pqVar12[4] = 0;
          pqVar12[3] = 0;
          pqVar12[6] = 0;
          pqVar12[5] = 0;
          pqVar12[7] = 0;
          pqRam0000000000b62928 = pqVar12;
          ___cxa_guard_release(0xb62930);
        }
      }
      pqVar12 = pqRam0000000000b62928;
      __ZNSt3__15mutex4lockEv(pqRam0000000000b62928);
      pcVar7 = pcRam0000000000b62920;
      if (((pcRam0000000000b62920 != (char *)0x0) &&
          (ppcVar32 = *(char ***)(pcRam0000000000b62920 + 8), ppcVar32 != (char **)0x0)) &&
         (*(qword *)(pcRam0000000000b62920 + 0x18) != 0)) {
        uVar27 = *(ulong *)(pdVar4 + 2);
        pdVar26 = *(dword **)pdVar4;
        if (-1 < (char)*(byte *)((long)pdVar4 + 0x17)) {
          uVar27 = (ulong)*(byte *)((long)pdVar4 + 0x17);
          pdVar26 = pdVar4;
        }
        ppcVar5 = &pcStack_d8;
        FUN_00459818(ppcVar5,pdVar26,uVar27);
        uVar27 = (long)ppcVar32 - 1;
        if (((ulong)ppcVar32 & uVar27) == 0) {
          ppcVar31 = (char **)((ulong)ppcVar5 & uVar27);
          plVar25 = *(long **)(*(long *)pcVar7 + (long)ppcVar31 * 8);
        }
        else {
          ppcVar31 = ppcVar5;
          if (ppcVar32 <= ppcVar5) {
            uVar21 = 0;
            if (ppcVar32 != (char **)0x0) {
              uVar21 = (ulong)ppcVar5 / (ulong)ppcVar32;
            }
            ppcVar31 = (char **)((long)ppcVar5 - uVar21 * (long)ppcVar32);
          }
          plVar25 = *(long **)(*(long *)pcVar7 + (long)ppcVar31 * 8);
        }
        if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
          unaff_x24 = *(dword **)pdVar4;
          uVar21 = *(ulong *)(pdVar4 + 2);
          if (-1 < (char)*(byte *)((long)pdVar4 + 0x17)) {
            unaff_x24 = pdVar4;
            uVar21 = (ulong)*(byte *)((long)pdVar4 + 0x17);
          }
          if (((ulong)ppcVar32 & uVar27) == 0) {
            do {
              if ((char **)plVar25[1] == ppcVar5) {
                bVar2 = *(byte *)((long)plVar25 + 0x27);
                uVar24 = plVar25[3];
                if (-1 < (char)bVar2) {
                  uVar24 = (ulong)bVar2;
                }
                if (uVar24 == uVar21) {
                  plVar22 = (long *)plVar25[2];
                  if (-1 < (char)bVar2) {
                    plVar22 = plVar25 + 2;
                  }
                  _memcmp(plVar22,unaff_x24,uVar21);
                  if ((int)plVar22 == 0) {
LAB_0057c224:
                    *(long *)pcVar13 = plVar25[5];
                    psVar6 = (segment_command *)plVar25[5];
                    __ZNSt3__15mutex6unlockEv(pqVar12);
                    return (dword *)(ulong)(psVar6 != psVar11);
                  }
                }
              }
              else if ((char **)((ulong)plVar25[1] & uVar27) != ppcVar31) break;
              plVar25 = (long *)*plVar25;
            } while (plVar25 != (long *)0x0);
          }
          else {
            do {
              ppcVar16 = (char **)plVar25[1];
              if (ppcVar16 == ppcVar5) {
                bVar2 = *(byte *)((long)plVar25 + 0x27);
                uVar27 = plVar25[3];
                if (-1 < (char)bVar2) {
                  uVar27 = (ulong)bVar2;
                }
                if (uVar27 == uVar21) {
                  plVar22 = (long *)plVar25[2];
                  if (-1 < (char)bVar2) {
                    plVar22 = plVar25 + 2;
                  }
                  _memcmp(plVar22,unaff_x24,uVar21);
                  if ((int)plVar22 == 0) goto LAB_0057c224;
                }
              }
              else {
                if (ppcVar32 <= ppcVar16) {
                  uVar27 = 0;
                  if (ppcVar32 != (char **)0x0) {
                    uVar27 = (ulong)ppcVar16 / (ulong)ppcVar32;
                  }
                  ppcVar16 = (char **)((long)ppcVar16 - uVar27 * (long)ppcVar32);
                }
                if (ppcVar16 != ppcVar31) break;
              }
              plVar25 = (long *)*plVar25;
            } while (plVar25 != (long *)0x0);
          }
        }
      }
      __ZNSt3__15mutex6unlockEv(pqVar12);
      psVar6 = &segment_command_00000020;
      __Znwm();
      if (*(char *)((long)pdVar4 + 0x17) < '\0') {
        FUN_002971d4(psVar6,*(undefined8 *)pdVar4,*(undefined8 *)(pdVar4 + 2));
      }
      else {
        uVar33 = *(undefined8 *)pdVar4;
        *(undefined8 *)psVar6->segname = *(undefined8 *)(pdVar4 + 2);
        *(undefined8 *)psVar6 = uVar33;
        *(undefined8 *)(psVar6->segname + 8) = *(undefined8 *)(pdVar4 + 4);
      }
      FUN_0057bdac(&psVar6->vmaddr,psVar6);
      if ((bRam0000000000b62930 & 1) == 0) {
        iVar15 = 0xb62930;
        ___cxa_guard_acquire();
        if (iVar15 != 0) {
          pqVar12 = &segment_command_00000020.vmsize;
          __Znwm();
          *pqVar12 = 0x32aaaba7;
          pqVar12[2] = 0;
          pqVar12[1] = 0;
          pqVar12[4] = 0;
          pqVar12[3] = 0;
          pqVar12[6] = 0;
          pqVar12[5] = 0;
          pqVar12[7] = 0;
          pqRam0000000000b62928 = pqVar12;
          ___cxa_guard_release(0xb62930);
        }
      }
      pqVar12 = pqRam0000000000b62928;
      __ZNSt3__15mutex4lockEv(pqRam0000000000b62928);
      if (pcRam0000000000b62920 == (char *)0x0) {
        pcVar7 = segment_command_00000020.segname;
        __Znwm();
        pcVar7[8] = '\0';
        pcVar7[9] = '\0';
        pcVar7[10] = '\0';
        pcVar7[0xb] = '\0';
        pcVar7[0xc] = '\0';
        pcVar7[0xd] = '\0';
        pcVar7[0xe] = '\0';
        pcVar7[0xf] = '\0';
        pcVar7[0] = '\0';
        pcVar7[1] = '\0';
        pcVar7[2] = '\0';
        pcVar7[3] = '\0';
        pcVar7[4] = '\0';
        pcVar7[5] = '\0';
        pcVar7[6] = '\0';
        pcVar7[7] = '\0';
        *(qword *)(pcVar7 + 0x18) = 0;
        *(qword *)(pcVar7 + 0x10) = 0;
        *(undefined4 *)(pcVar7 + 0x20) = 0x3f800000;
        pcRam0000000000b62920 = pcVar7;
      }
      pcVar7 = pcRam0000000000b62920;
      uVar27 = *(ulong *)(pdVar4 + 2);
      pdVar26 = *(dword **)pdVar4;
      if (-1 < (char)*(byte *)((long)pdVar4 + 0x17)) {
        uVar27 = (ulong)*(byte *)((long)pdVar4 + 0x17);
        pdVar26 = pdVar4;
      }
      pdVar8 = (dword *)&pcStack_d8;
      FUN_00459818(pdVar8,pdVar26,uVar27);
      puVar29 = *(undefined8 **)(pcVar7 + 8);
      if (puVar29 != (undefined8 *)0x0) {
        uVar27 = (long)puVar29 - 1;
        if (((ulong)puVar29 & uVar27) == 0) {
          unaff_x24 = (dword *)(uVar27 & (ulong)pdVar8);
          puVar17 = *(undefined8 **)(*(long *)pcVar7 + (long)unaff_x24 * 8);
        }
        else {
          unaff_x24 = pdVar8;
          if (puVar29 <= pdVar8) {
            uVar21 = 0;
            if (puVar29 != (undefined8 *)0x0) {
              uVar21 = (ulong)pdVar8 / (ulong)puVar29;
            }
            unaff_x24 = (dword *)((long)pdVar8 - uVar21 * (long)puVar29);
          }
          puVar17 = *(undefined8 **)(*(long *)pcVar7 + (long)unaff_x24 * 8);
        }
        if ((puVar17 != (undefined8 *)0x0) && (pcVar30 = (char *)*puVar17, pcVar30 != (char *)0x0))
        {
          pdVar26 = *(dword **)pdVar4;
          qVar34 = *(qword *)(pdVar4 + 2);
          if (-1 < (char)*(byte *)((long)pdVar4 + 0x17)) {
            pdVar26 = pdVar4;
            qVar34 = (ulong)*(byte *)((long)pdVar4 + 0x17);
          }
          if (((ulong)puVar29 & uVar27) == 0) {
            do {
              if ((dword *)*(undefined8 **)(pcVar30 + 8) == pdVar8) {
                bVar2 = pcVar30[0x27];
                qVar1 = *(qword *)(pcVar30 + 0x18);
                if (-1 < (char)bVar2) {
                  qVar1 = (ulong)bVar2;
                }
                if (qVar1 == qVar34) {
                  pqVar9 = *(qword **)(pcVar30 + 0x10);
                  if (-1 < (char)bVar2) {
                    pqVar9 = (qword *)(pcVar30 + 0x10);
                  }
                  _memcmp(pqVar9,pdVar26,qVar34);
                  if ((int)pqVar9 == 0) {
                    psVar19 = *(segment_command **)(pcVar30 + 0x28);
                    goto joined_r0x0057c880;
                  }
                }
              }
              else if ((dword *)((ulong)*(undefined8 **)(pcVar30 + 8) & uVar27) != unaff_x24) break;
              pcVar30 = *(char **)pcVar30;
            } while (pcVar30 != (char *)0x0);
          }
          else {
            do {
              puVar17 = *(undefined8 **)(pcVar30 + 8);
              if ((dword *)puVar17 == pdVar8) {
                bVar2 = pcVar30[0x27];
                qVar1 = *(qword *)(pcVar30 + 0x18);
                if (-1 < (char)bVar2) {
                  qVar1 = (ulong)bVar2;
                }
                if (qVar1 == qVar34) {
                  pqVar9 = *(qword **)(pcVar30 + 0x10);
                  if (-1 < (char)bVar2) {
                    pqVar9 = (qword *)(pcVar30 + 0x10);
                  }
                  _memcmp(pqVar9,pdVar26,qVar34);
                  if ((int)pqVar9 == 0) {
                    psVar19 = *(segment_command **)(pcVar30 + 0x28);
                    goto joined_r0x0057c880;
                  }
                }
              }
              else {
                if (puVar29 <= puVar17) {
                  uVar27 = 0;
                  if (puVar29 != (undefined8 *)0x0) {
                    uVar27 = (ulong)puVar17 / (ulong)puVar29;
                  }
                  puVar17 = (undefined8 *)((long)puVar17 - uVar27 * (long)puVar29);
                }
                if ((dword *)puVar17 != unaff_x24) break;
              }
              pcVar30 = *(char **)pcVar30;
            } while (pcVar30 != (char *)0x0);
          }
        }
      }
      pcVar30 = segment_command_00000020.segname + 8;
      __Znwm();
      pqVar9 = (qword *)(pcVar7 + 0x10);
      uStack_c8 = 0;
      pcVar30[0] = '\0';
      pcVar30[1] = '\0';
      pcVar30[2] = '\0';
      pcVar30[3] = '\0';
      pcVar30[4] = '\0';
      pcVar30[5] = '\0';
      pcVar30[6] = '\0';
      pcVar30[7] = '\0';
      *(dword **)(pcVar30 + 8) = pdVar8;
      pcStack_d8 = pcVar30;
      pqStack_d0 = pqVar9;
      if (*(char *)((long)pdVar4 + 0x17) < '\0') {
        FUN_002971d4(pcVar30 + 0x10,*(undefined8 *)pdVar4,*(undefined8 *)(pdVar4 + 2));
      }
      else {
        qVar34 = *(qword *)pdVar4;
        *(qword *)(pcVar30 + 0x18) = *(qword *)(pdVar4 + 2);
        *(qword *)(pcVar30 + 0x10) = qVar34;
        *(qword *)(pcVar30 + 0x20) = *(qword *)(pdVar4 + 4);
      }
      *(qword *)(pcVar30 + 0x28) = 0;
      uStack_c8 = CONCAT71(uStack_c8._1_7_,1);
      if ((puVar29 != (undefined8 *)0x0) &&
         ((float)(*(qword *)(pcVar7 + 0x18) + 1) <= *(float *)(pcVar7 + 0x20) * (float)puVar29)) {
        lVar18 = *(long *)pcVar7;
        pqVar20 = *(qword **)(lVar18 + (long)unaff_x24 * 8);
        goto joined_r0x0057c748;
      }
      uVar27 = 1;
      if ((undefined8 *)((long)&MACH_HEADER.magic + 2) < puVar29) {
        uVar27 = (ulong)(((ulong)puVar29 & (long)puVar29 - 1U) != 0);
      }
      puVar29 = (undefined8 *)(uVar27 | (long)puVar29 << 1);
      puVar17 = (undefined8 *)
                (long)((float)(*(qword *)(pcVar7 + 0x18) + 1) / *(float *)(pcVar7 + 0x20));
      if (puVar29 <= puVar17) {
        puVar29 = puVar17;
      }
      if ((long)puVar29 - 1U == 0) {
        puVar29 = (undefined8 *)((long)&MACH_HEADER.magic + 2);
      }
      else if (((ulong)puVar29 & (long)puVar29 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
      }
      puVar17 = *(undefined8 **)(pcVar7 + 8);
      if (puVar17 < puVar29) {
LAB_0057c5f4:
        if ((ulong)puVar29 >> 0x3d != 0) {
          FUN_0040cee8();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x57c96c);
          (*pcVar3)();
        }
        lVar18 = (long)puVar29 << 3;
        __Znwm();
        lVar10 = *(long *)pcVar7;
        *(long *)pcVar7 = lVar18;
        if (lVar10 != 0) {
          __ZdlPv();
          lVar18 = *(long *)pcVar7;
        }
        *(undefined8 **)(pcVar7 + 8) = puVar29;
        _bzero(lVar18,(long)puVar29 << 3);
        plVar25 = *(long **)(pcVar7 + 0x10);
        if (plVar25 != (long *)0x0) {
          puVar17 = (undefined8 *)plVar25[1];
          uVar27 = (long)puVar29 - 1;
          if (((ulong)puVar29 & uVar27) != 0) {
            if (puVar29 <= puVar17) {
              uVar27 = 0;
              if (puVar29 != (undefined8 *)0x0) {
                uVar27 = (ulong)puVar17 / (ulong)puVar29;
              }
              puVar17 = (undefined8 *)((long)puVar17 - uVar27 * (long)puVar29);
            }
            *(qword **)(lVar18 + (long)puVar17 * 8) = pqVar9;
            plVar22 = (long *)*plVar25;
joined_r0x0057c660:
            if (plVar22 != (long *)0x0) {
              do {
                puVar23 = (undefined8 *)plVar22[1];
                if (puVar29 <= puVar23) {
                  uVar27 = 0;
                  if (puVar29 != (undefined8 *)0x0) {
                    uVar27 = (ulong)puVar23 / (ulong)puVar29;
                  }
                  puVar23 = (undefined8 *)((long)puVar23 - uVar27 * (long)puVar29);
                }
                if (puVar23 != puVar17) {
                  if (*(long *)(lVar18 + (long)puVar23 * 8) == 0) goto code_r0x0057c6b8;
                  *plVar25 = *plVar22;
                  *plVar22 = **(long **)(lVar18 + (long)puVar23 * 8);
                  **(undefined8 **)(lVar18 + (long)puVar23 * 8) = plVar22;
                  plVar22 = plVar25;
                }
                plVar25 = plVar22;
                plVar22 = (long *)*plVar25;
                if (plVar22 == (long *)0x0) break;
              } while( true );
            }
            goto LAB_0057c72c;
          }
          uVar21 = (ulong)puVar17 & uVar27;
          *(qword **)(lVar18 + uVar21 * 8) = pqVar9;
          for (plVar22 = (long *)*plVar25; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
            uVar24 = plVar22[1] & uVar27;
            if (uVar24 != uVar21) {
              if (*(long *)(lVar18 + uVar24 * 8) == 0) {
                *(long **)(lVar18 + uVar24 * 8) = plVar25;
                uVar21 = uVar24;
              }
              else {
                *plVar25 = *plVar22;
                *plVar22 = **(undefined8 **)(lVar18 + uVar24 * 8);
                **(long **)(lVar18 + uVar24 * 8) = (long)plVar22;
                plVar22 = plVar25;
              }
            }
            plVar25 = plVar22;
          }
        }
LAB_0057c72c:
        uVar27 = (long)puVar29 - 1;
        uVar21 = (ulong)puVar29 & uVar27;
joined_r0x0057c83c:
        if (uVar21 != 0) {
          if (pdVar8 < puVar29) {
            lVar18 = *(long *)pcVar7;
            pqVar20 = *(qword **)(lVar18 + (long)pdVar8 * 8);
            unaff_x24 = pdVar8;
          }
          else {
            uVar27 = 0;
            if (puVar29 != (undefined8 *)0x0) {
              uVar27 = (ulong)pdVar8 / (ulong)puVar29;
            }
            unaff_x24 = (dword *)((long)pdVar8 - uVar27 * (long)puVar29);
            lVar18 = *(long *)pcVar7;
            pqVar20 = *(qword **)(lVar18 + (long)unaff_x24 * 8);
          }
          goto joined_r0x0057c748;
        }
      }
      else {
        if (puVar17 <= puVar29) {
LAB_0057c834:
          uVar27 = (long)puVar17 - 1;
          uVar21 = (ulong)puVar17 & uVar27;
          puVar29 = puVar17;
          goto joined_r0x0057c83c;
        }
        puVar23 = (undefined8 *)(long)((float)*(ulong *)(pcVar7 + 0x18) / *(float *)(pcVar7 + 0x20))
        ;
        if ((puVar17 < (undefined8 *)((long)&MACH_HEADER.magic + 3)) ||
           (((ulong)puVar17 & (long)puVar17 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((undefined8 *)((long)&MACH_HEADER.magic + 1) < puVar23) {
          puVar23 = (undefined8 *)(1L << (-LZCOUNT((long)puVar23 + -1) & 0x3fU));
        }
        if (puVar29 <= puVar23) {
          puVar29 = puVar23;
        }
        if (puVar17 <= puVar29) {
          puVar17 = *(undefined8 **)(pcVar7 + 8);
          goto LAB_0057c834;
        }
        if (puVar29 != (undefined8 *)0x0) goto LAB_0057c5f4;
        lVar18 = *(long *)pcVar7;
        pcVar7[0] = '\0';
        pcVar7[1] = '\0';
        pcVar7[2] = '\0';
        pcVar7[3] = '\0';
        pcVar7[4] = '\0';
        pcVar7[5] = '\0';
        pcVar7[6] = '\0';
        pcVar7[7] = '\0';
        if (lVar18 != 0) {
          __ZdlPv();
        }
        puVar29 = (undefined8 *)0x0;
        pcVar7[8] = '\0';
        pcVar7[9] = '\0';
        pcVar7[10] = '\0';
        pcVar7[0xb] = '\0';
        pcVar7[0xc] = '\0';
        pcVar7[0xd] = '\0';
        pcVar7[0xe] = '\0';
        pcVar7[0xf] = '\0';
        uVar27 = 0xffffffffffffffff;
      }
      lVar18 = *(long *)pcVar7;
      pqVar20 = *(qword **)(lVar18 + (long)(uVar27 & (ulong)pdVar8) * 8);
      unaff_x24 = (dword *)(uVar27 & (ulong)pdVar8);
joined_r0x0057c748:
      if (pqVar20 == (qword *)0x0) {
        *(qword *)pcVar30 = *pqVar9;
        *pqVar9 = (qword)pcVar30;
        *(qword **)(lVar18 + (long)unaff_x24 * 8) = pqVar9;
        if (*(qword *)pcVar30 != 0) {
          puVar17 = *(undefined8 **)(*(qword *)pcVar30 + 8);
          if (((ulong)puVar29 & (long)puVar29 - 1U) == 0) {
            *(char **)(lVar18 + ((ulong)puVar17 & (long)puVar29 - 1U) * 8) = pcVar30;
          }
          else {
            if (puVar29 <= puVar17) {
              uVar27 = 0;
              if (puVar29 != (undefined8 *)0x0) {
                uVar27 = (ulong)puVar17 / (ulong)puVar29;
              }
              puVar17 = (undefined8 *)((long)puVar17 - uVar27 * (long)puVar29);
            }
            *(char **)(lVar18 + (long)puVar17 * 8) = pcVar30;
          }
        }
      }
      else {
        *(qword *)pcVar30 = *pqVar20;
        *pqVar20 = (qword)pcVar30;
      }
      *(qword *)(pcVar7 + 0x18) = *(qword *)(pcVar7 + 0x18) + 1;
      psVar19 = *(segment_command **)(pcVar30 + 0x28);
joined_r0x0057c880:
      psVar28 = psVar6;
      if (psVar19 == (segment_command *)0x0) {
        psVar19 = psVar11;
        if (psVar6->vmaddr != 0) {
          psVar28 = (segment_command *)0x0;
          psVar19 = psVar6;
        }
        *(segment_command **)(pcVar30 + 0x28) = psVar19;
      }
      *(segment_command **)pcVar13 = psVar19;
      psVar6 = *(segment_command **)(pcVar30 + 0x28);
      __ZNSt3__15mutex6unlockEv(pqVar12);
      if (psVar28 != (segment_command *)0x0) {
        plVar25 = (long *)psVar28->vmaddr;
        psVar28->vmaddr = 0;
        if (plVar25 != (long *)0x0) {
          (**(code **)(*plVar25 + 8))();
        }
        if (psVar28->segname[0xf] < '\0') {
          uVar33._0_4_ = psVar28->cmd;
          uVar33._4_4_ = psVar28->cmdsize;
          __ZdlPv(uVar33);
        }
        __ZdlPv(psVar28);
      }
      return (dword *)(ulong)(psVar6 != psVar11);
    }
    uVar27 = (long)(char)bVar2 - 5;
    if (0x7ffffffffffffff6 < uVar27) goto LAB_0057bf54;
LAB_0057beac:
    if (uVar27 < 0x17) {
      uStack_48 = CONCAT17((char)uVar27,(undefined7)uStack_48);
      pdVar26 = (dword *)&pdStack_58;
      if (uVar27 != 0) goto LAB_0057beec;
    }
    else {
      pdVar4 = &MACH_HEADER.flags;
      if ((dword *)(uVar27 | 7) != (dword *)0x17) {
        pdVar4 = (dword *)(uVar27 | 7);
      }
      pdVar26 = (dword *)((long)pdVar4 + 1U);
      __Znwm();
      uStack_48 = (long)pdVar4 + 1U | 0x8000000000000000;
      pdStack_58 = pdVar26;
      uStack_50 = uVar27;
LAB_0057beec:
      _memmove(pdVar26,(undefined1 *)((long)param_2 + 5),uVar27);
    }
    *(undefined1 *)((long)pdVar26 + uVar27) = 0;
    pdVar4 = &MACH_HEADER.ncmds;
    __Znwm();
    *(undefined ***)pdVar4 = &PTR_FUN_00a02230;
    iVar15 = (int)uStack_48._7_1_;
    if ((long)uStack_48 < 0) goto LAB_0057bf58;
    if (uStack_48._7_1_ != '\t') {
      *(undefined1 *)(pdVar4 + 2) = 0;
      *param_1 = pdVar4;
      return pdVar4;
    }
    iVar15 = 9;
    pdVar26 = (dword *)&pdStack_58;
  }
  *(bool *)(pdVar4 + 2) =
       *(dword **)pdVar26 == (dword *)0x6d69746c61636f6c && (char)pdVar26[2] == 'e';
  *param_1 = pdVar4;
  if (-1 < iVar15) {
    return pdVar4;
  }
LAB_0057bfc4:
  __ZdlPv(pdStack_58);
  return pdStack_58;
code_r0x0057c6b8:
  *(long **)(lVar18 + (long)puVar23 * 8) = plVar25;
  plVar25 = plVar22;
  plVar22 = (long *)*plVar22;
  puVar17 = puVar23;
  goto joined_r0x0057c660;
}



/* Entry: 0057c020; end: 0057ca77;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_0057c020(char **param_1,long *param_2)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  code *pcVar4;
  int iVar5;
  segment_command *psVar6;
  qword *pqVar7;
  qword qVar8;
  long lVar9;
  segment_command *psVar10;
  qword *pqVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  segment_command *psVar15;
  qword *pqVar16;
  char **ppcVar17;
  ulong uVar18;
  long *plVar19;
  char **ppcVar20;
  ulong uVar21;
  segment_command *psVar22;
  char *pcVar23;
  char **unaff_x24;
  char **ppcVar24;
  char **ppcVar25;
  ulong uVar26;
  char *pcVar27;
  long lStack_80;
  char *pcStack_78;
  qword *pqStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000000b6b6a8 & 1) == 0) {
    iVar5 = 0xb6b6a8;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      psVar10 = &segment_command_00000020;
      __Znwm();
      FUN_0057cad4();
      psRam0000000000b6b6a0 = psVar10;
      ___cxa_guard_release(0xb6b6a8);
    }
  }
  psVar10 = psRam0000000000b6b6a0;
  lStack_80 = 0;
  ppcVar25 = param_1;
  func_0x00576ee0(param_1,&lStack_80);
  if (((int)ppcVar25 != 0) && (lStack_80 == 0)) {
    *param_2 = (long)psVar10;
    return true;
  }
  if ((bRam0000000000b62930 & 1) == 0) {
    iVar5 = 0xb62930;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      pqVar11 = &segment_command_00000020.vmsize;
      __Znwm();
      *pqVar11 = 0x32aaaba7;
      pqVar11[2] = 0;
      pqVar11[1] = 0;
      pqVar11[4] = 0;
      pqVar11[3] = 0;
      pqVar11[6] = 0;
      pqVar11[5] = 0;
      pqVar11[7] = 0;
      pqRam0000000000b62928 = pqVar11;
      ___cxa_guard_release(0xb62930);
    }
  }
  pqVar11 = pqRam0000000000b62928;
  __ZNSt3__15mutex4lockEv(pqRam0000000000b62928);
  pcVar23 = pcRam0000000000b62920;
  if (((pcRam0000000000b62920 != (char *)0x0) &&
      (ppcVar25 = *(char ***)(pcRam0000000000b62920 + 8), ppcVar25 != (char **)0x0)) &&
     (*(qword *)(pcRam0000000000b62920 + 0x18) != 0)) {
    pcVar1 = param_1[1];
    ppcVar24 = (char **)*param_1;
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      pcVar1 = (char *)(ulong)*(byte *)((long)param_1 + 0x17);
      ppcVar24 = param_1;
    }
    ppcVar17 = &pcStack_78;
    FUN_00459818(ppcVar17,ppcVar24,pcVar1);
    uVar26 = (long)ppcVar25 - 1;
    if (((ulong)ppcVar25 & uVar26) == 0) {
      ppcVar24 = (char **)((ulong)ppcVar17 & uVar26);
      plVar12 = *(long **)(*(long *)pcVar23 + (long)ppcVar24 * 8);
    }
    else {
      ppcVar24 = ppcVar17;
      if (ppcVar25 <= ppcVar17) {
        uVar18 = 0;
        if (ppcVar25 != (char **)0x0) {
          uVar18 = (ulong)ppcVar17 / (ulong)ppcVar25;
        }
        ppcVar24 = (char **)((long)ppcVar17 - uVar18 * (long)ppcVar25);
      }
      plVar12 = *(long **)(*(long *)pcVar23 + (long)ppcVar24 * 8);
    }
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      unaff_x24 = (char **)*param_1;
      pcVar23 = param_1[1];
      if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
        unaff_x24 = param_1;
        pcVar23 = (char *)(ulong)*(byte *)((long)param_1 + 0x17);
      }
      if (((ulong)ppcVar25 & uVar26) == 0) {
        do {
          if ((char **)plVar12[1] == ppcVar17) {
            bVar3 = *(byte *)((long)plVar12 + 0x27);
            pcVar1 = (char *)plVar12[3];
            if (-1 < (char)bVar3) {
              pcVar1 = (char *)(ulong)bVar3;
            }
            if (pcVar1 == pcVar23) {
              plVar19 = (long *)plVar12[2];
              if (-1 < (char)bVar3) {
                plVar19 = plVar12 + 2;
              }
              _memcmp(plVar19,unaff_x24,pcVar23);
              if ((int)plVar19 == 0) {
LAB_0057c224:
                *param_2 = plVar12[5];
                psVar6 = (segment_command *)plVar12[5];
                __ZNSt3__15mutex6unlockEv(pqVar11);
                return psVar6 != psVar10;
              }
            }
          }
          else if ((char **)((ulong)plVar12[1] & uVar26) != ppcVar24) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          ppcVar20 = (char **)plVar12[1];
          if (ppcVar20 == ppcVar17) {
            bVar3 = *(byte *)((long)plVar12 + 0x27);
            pcVar1 = (char *)plVar12[3];
            if (-1 < (char)bVar3) {
              pcVar1 = (char *)(ulong)bVar3;
            }
            if (pcVar1 == pcVar23) {
              plVar19 = (long *)plVar12[2];
              if (-1 < (char)bVar3) {
                plVar19 = plVar12 + 2;
              }
              _memcmp(plVar19,unaff_x24,pcVar23);
              if ((int)plVar19 == 0) goto LAB_0057c224;
            }
          }
          else {
            if (ppcVar25 <= ppcVar20) {
              uVar26 = 0;
              if (ppcVar25 != (char **)0x0) {
                uVar26 = (ulong)ppcVar20 / (ulong)ppcVar25;
              }
              ppcVar20 = (char **)((long)ppcVar20 - uVar26 * (long)ppcVar25);
            }
            if (ppcVar20 != ppcVar24) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  __ZNSt3__15mutex6unlockEv(pqVar11);
  psVar6 = &segment_command_00000020;
  __Znwm();
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    FUN_002971d4(psVar6,*param_1,param_1[1]);
  }
  else {
    pcVar23 = *param_1;
    *(char **)psVar6->segname = param_1[1];
    *(char **)psVar6 = pcVar23;
    *(char **)(psVar6->segname + 8) = param_1[2];
  }
  FUN_0057bdac(&psVar6->vmaddr,psVar6);
  if ((bRam0000000000b62930 & 1) == 0) {
    iVar5 = 0xb62930;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      pqVar11 = &segment_command_00000020.vmsize;
      __Znwm();
      *pqVar11 = 0x32aaaba7;
      pqVar11[2] = 0;
      pqVar11[1] = 0;
      pqVar11[4] = 0;
      pqVar11[3] = 0;
      pqVar11[6] = 0;
      pqVar11[5] = 0;
      pqVar11[7] = 0;
      pqRam0000000000b62928 = pqVar11;
      ___cxa_guard_release(0xb62930);
    }
  }
  pqVar11 = pqRam0000000000b62928;
  __ZNSt3__15mutex4lockEv(pqRam0000000000b62928);
  if (pcRam0000000000b62920 == (char *)0x0) {
    pcVar23 = segment_command_00000020.segname;
    __Znwm();
    pcVar23[8] = '\0';
    pcVar23[9] = '\0';
    pcVar23[10] = '\0';
    pcVar23[0xb] = '\0';
    pcVar23[0xc] = '\0';
    pcVar23[0xd] = '\0';
    pcVar23[0xe] = '\0';
    pcVar23[0xf] = '\0';
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    *(qword *)(pcVar23 + 0x18) = 0;
    *(qword *)(pcVar23 + 0x10) = 0;
    *(undefined4 *)(pcVar23 + 0x20) = 0x3f800000;
    pcRam0000000000b62920 = pcVar23;
  }
  pcVar1 = pcRam0000000000b62920;
  pcVar23 = param_1[1];
  ppcVar25 = (char **)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    pcVar23 = (char *)(ulong)*(byte *)((long)param_1 + 0x17);
    ppcVar25 = param_1;
  }
  ppcVar24 = &pcStack_78;
  FUN_00459818(ppcVar24,ppcVar25,pcVar23);
  ppcVar25 = *(char ***)(pcVar1 + 8);
  if (ppcVar25 != (char **)0x0) {
    uVar26 = (long)ppcVar25 - 1;
    if (((ulong)ppcVar25 & uVar26) == 0) {
      unaff_x24 = (char **)(uVar26 & (ulong)ppcVar24);
      puVar13 = *(undefined8 **)(*(long *)pcVar1 + (long)unaff_x24 * 8);
    }
    else {
      unaff_x24 = ppcVar24;
      if (ppcVar25 <= ppcVar24) {
        uVar18 = 0;
        if (ppcVar25 != (char **)0x0) {
          uVar18 = (ulong)ppcVar24 / (ulong)ppcVar25;
        }
        unaff_x24 = (char **)((long)ppcVar24 - uVar18 * (long)ppcVar25);
      }
      puVar13 = *(undefined8 **)(*(long *)pcVar1 + (long)unaff_x24 * 8);
    }
    if ((puVar13 != (undefined8 *)0x0) && (pcVar23 = (char *)*puVar13, pcVar23 != (char *)0x0)) {
      ppcVar17 = (char **)*param_1;
      pcVar27 = param_1[1];
      if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
        ppcVar17 = param_1;
        pcVar27 = (char *)(ulong)*(byte *)((long)param_1 + 0x17);
      }
      if (((ulong)ppcVar25 & uVar26) == 0) {
        do {
          if (*(char ***)(pcVar23 + 8) == ppcVar24) {
            bVar3 = pcVar23[0x27];
            pcVar2 = *(char **)(pcVar23 + 0x18);
            if (-1 < (char)bVar3) {
              pcVar2 = (char *)(ulong)bVar3;
            }
            if (pcVar2 == pcVar27) {
              pqVar7 = *(qword **)(pcVar23 + 0x10);
              if (-1 < (char)bVar3) {
                pqVar7 = (qword *)(pcVar23 + 0x10);
              }
              _memcmp(pqVar7,ppcVar17,pcVar27);
              if ((int)pqVar7 == 0) {
                psVar15 = *(segment_command **)(pcVar23 + 0x28);
                goto joined_r0x0057c880;
              }
            }
          }
          else if ((char **)((ulong)*(char ***)(pcVar23 + 8) & uVar26) != unaff_x24) break;
          pcVar23 = *(char **)pcVar23;
        } while (pcVar23 != (char *)0x0);
      }
      else {
        do {
          ppcVar20 = *(char ***)(pcVar23 + 8);
          if (ppcVar20 == ppcVar24) {
            bVar3 = pcVar23[0x27];
            pcVar2 = *(char **)(pcVar23 + 0x18);
            if (-1 < (char)bVar3) {
              pcVar2 = (char *)(ulong)bVar3;
            }
            if (pcVar2 == pcVar27) {
              pqVar7 = *(qword **)(pcVar23 + 0x10);
              if (-1 < (char)bVar3) {
                pqVar7 = (qword *)(pcVar23 + 0x10);
              }
              _memcmp(pqVar7,ppcVar17,pcVar27);
              if ((int)pqVar7 == 0) {
                psVar15 = *(segment_command **)(pcVar23 + 0x28);
                goto joined_r0x0057c880;
              }
            }
          }
          else {
            if (ppcVar25 <= ppcVar20) {
              uVar26 = 0;
              if (ppcVar25 != (char **)0x0) {
                uVar26 = (ulong)ppcVar20 / (ulong)ppcVar25;
              }
              ppcVar20 = (char **)((long)ppcVar20 - uVar26 * (long)ppcVar25);
            }
            if (ppcVar20 != unaff_x24) break;
          }
          pcVar23 = *(char **)pcVar23;
        } while (pcVar23 != (char *)0x0);
      }
    }
  }
  pcVar23 = segment_command_00000020.segname + 8;
  __Znwm();
  pqVar7 = (qword *)(pcVar1 + 0x10);
  uStack_68 = 0;
  pcVar23[0] = '\0';
  pcVar23[1] = '\0';
  pcVar23[2] = '\0';
  pcVar23[3] = '\0';
  pcVar23[4] = '\0';
  pcVar23[5] = '\0';
  pcVar23[6] = '\0';
  pcVar23[7] = '\0';
  *(char ***)(pcVar23 + 8) = ppcVar24;
  pcStack_78 = pcVar23;
  pqStack_70 = pqVar7;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    FUN_002971d4(pcVar23 + 0x10,*param_1,param_1[1]);
  }
  else {
    pcVar27 = *param_1;
    *(char **)(pcVar23 + 0x18) = param_1[1];
    *(char **)(pcVar23 + 0x10) = pcVar27;
    *(char **)(pcVar23 + 0x20) = param_1[2];
  }
  *(qword *)(pcVar23 + 0x28) = 0;
  uStack_68 = CONCAT71(uStack_68._1_7_,1);
  if ((ppcVar25 != (char **)0x0) &&
     ((float)(*(qword *)(pcVar1 + 0x18) + 1) <= *(float *)(pcVar1 + 0x20) * (float)ppcVar25)) {
    lVar14 = *(long *)pcVar1;
    pqVar16 = *(qword **)(lVar14 + (long)unaff_x24 * 8);
    goto joined_r0x0057c748;
  }
  uVar26 = 1;
  if ((char **)((long)&MACH_HEADER.magic + 2) < ppcVar25) {
    uVar26 = (ulong)(((ulong)ppcVar25 & (long)ppcVar25 - 1U) != 0);
  }
  ppcVar25 = (char **)(uVar26 | (long)ppcVar25 << 1);
  ppcVar17 = (char **)(long)((float)(*(qword *)(pcVar1 + 0x18) + 1) / *(float *)(pcVar1 + 0x20));
  if (ppcVar25 <= ppcVar17) {
    ppcVar25 = ppcVar17;
  }
  if ((long)ppcVar25 - 1U == 0) {
    ppcVar25 = (char **)((long)&MACH_HEADER.magic + 2);
  }
  else if (((ulong)ppcVar25 & (long)ppcVar25 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  ppcVar17 = *(char ***)(pcVar1 + 8);
  if (ppcVar17 < ppcVar25) {
LAB_0057c5f4:
    if ((ulong)ppcVar25 >> 0x3d != 0) {
      FUN_0040cee8();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x57c96c);
      (*pcVar4)();
    }
    lVar14 = (long)ppcVar25 << 3;
    __Znwm();
    lVar9 = *(long *)pcVar1;
    *(long *)pcVar1 = lVar14;
    if (lVar9 != 0) {
      __ZdlPv();
      lVar14 = *(long *)pcVar1;
    }
    *(char ***)(pcVar1 + 8) = ppcVar25;
    _bzero(lVar14,(long)ppcVar25 << 3);
    plVar12 = *(long **)(pcVar1 + 0x10);
    if (plVar12 != (long *)0x0) {
      ppcVar17 = (char **)plVar12[1];
      uVar26 = (long)ppcVar25 - 1;
      if (((ulong)ppcVar25 & uVar26) != 0) {
        if (ppcVar25 <= ppcVar17) {
          uVar26 = 0;
          if (ppcVar25 != (char **)0x0) {
            uVar26 = (ulong)ppcVar17 / (ulong)ppcVar25;
          }
          ppcVar17 = (char **)((long)ppcVar17 - uVar26 * (long)ppcVar25);
        }
        *(qword **)(lVar14 + (long)ppcVar17 * 8) = pqVar7;
        plVar19 = (long *)*plVar12;
joined_r0x0057c660:
        if (plVar19 != (long *)0x0) {
          do {
            ppcVar20 = (char **)plVar19[1];
            if (ppcVar25 <= ppcVar20) {
              uVar26 = 0;
              if (ppcVar25 != (char **)0x0) {
                uVar26 = (ulong)ppcVar20 / (ulong)ppcVar25;
              }
              ppcVar20 = (char **)((long)ppcVar20 - uVar26 * (long)ppcVar25);
            }
            if (ppcVar20 != ppcVar17) {
              if (*(long *)(lVar14 + (long)ppcVar20 * 8) == 0) goto code_r0x0057c6b8;
              *plVar12 = *plVar19;
              *plVar19 = **(long **)(lVar14 + (long)ppcVar20 * 8);
              **(undefined8 **)(lVar14 + (long)ppcVar20 * 8) = plVar19;
              plVar19 = plVar12;
            }
            plVar12 = plVar19;
            plVar19 = (long *)*plVar12;
            if (plVar19 == (long *)0x0) break;
          } while( true );
        }
        goto LAB_0057c72c;
      }
      uVar18 = (ulong)ppcVar17 & uVar26;
      *(qword **)(lVar14 + uVar18 * 8) = pqVar7;
      for (plVar19 = (long *)*plVar12; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
        uVar21 = plVar19[1] & uVar26;
        if (uVar21 != uVar18) {
          if (*(long *)(lVar14 + uVar21 * 8) == 0) {
            *(long **)(lVar14 + uVar21 * 8) = plVar12;
            uVar18 = uVar21;
          }
          else {
            *plVar12 = *plVar19;
            *plVar19 = **(undefined8 **)(lVar14 + uVar21 * 8);
            **(long **)(lVar14 + uVar21 * 8) = (long)plVar19;
            plVar19 = plVar12;
          }
        }
        plVar12 = plVar19;
      }
    }
LAB_0057c72c:
    uVar26 = (long)ppcVar25 - 1;
    uVar18 = (ulong)ppcVar25 & uVar26;
joined_r0x0057c83c:
    if (uVar18 != 0) {
      if (ppcVar24 < ppcVar25) {
        lVar14 = *(long *)pcVar1;
        pqVar16 = *(qword **)(lVar14 + (long)ppcVar24 * 8);
        unaff_x24 = ppcVar24;
      }
      else {
        uVar26 = 0;
        if (ppcVar25 != (char **)0x0) {
          uVar26 = (ulong)ppcVar24 / (ulong)ppcVar25;
        }
        unaff_x24 = (char **)((long)ppcVar24 - uVar26 * (long)ppcVar25);
        lVar14 = *(long *)pcVar1;
        pqVar16 = *(qword **)(lVar14 + (long)unaff_x24 * 8);
      }
      goto joined_r0x0057c748;
    }
  }
  else {
    if (ppcVar17 <= ppcVar25) {
LAB_0057c834:
      uVar26 = (long)ppcVar17 - 1;
      uVar18 = (ulong)ppcVar17 & uVar26;
      ppcVar25 = ppcVar17;
      goto joined_r0x0057c83c;
    }
    ppcVar20 = (char **)(long)((float)*(ulong *)(pcVar1 + 0x18) / *(float *)(pcVar1 + 0x20));
    if ((ppcVar17 < (char **)((long)&MACH_HEADER.magic + 3)) ||
       (((ulong)ppcVar17 & (long)ppcVar17 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((char **)((long)&MACH_HEADER.magic + 1) < ppcVar20) {
      ppcVar20 = (char **)(1L << (-LZCOUNT((long)ppcVar20 + -1) & 0x3fU));
    }
    if (ppcVar25 <= ppcVar20) {
      ppcVar25 = ppcVar20;
    }
    if (ppcVar17 <= ppcVar25) {
      ppcVar17 = *(char ***)(pcVar1 + 8);
      goto LAB_0057c834;
    }
    if (ppcVar25 != (char **)0x0) goto LAB_0057c5f4;
    lVar14 = *(long *)pcVar1;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    if (lVar14 != 0) {
      __ZdlPv();
    }
    ppcVar25 = (char **)0x0;
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    uVar26 = 0xffffffffffffffff;
  }
  lVar14 = *(long *)pcVar1;
  pqVar16 = *(qword **)(lVar14 + (long)(uVar26 & (ulong)ppcVar24) * 8);
  unaff_x24 = (char **)(uVar26 & (ulong)ppcVar24);
joined_r0x0057c748:
  if (pqVar16 == (qword *)0x0) {
    *(qword *)pcVar23 = *pqVar7;
    *pqVar7 = (qword)pcVar23;
    *(qword **)(lVar14 + (long)unaff_x24 * 8) = pqVar7;
    if (*(qword *)pcVar23 != 0) {
      ppcVar24 = *(char ***)(*(qword *)pcVar23 + 8);
      if (((ulong)ppcVar25 & (long)ppcVar25 - 1U) == 0) {
        *(char **)(lVar14 + ((ulong)ppcVar24 & (long)ppcVar25 - 1U) * 8) = pcVar23;
      }
      else {
        if (ppcVar25 <= ppcVar24) {
          uVar26 = 0;
          if (ppcVar25 != (char **)0x0) {
            uVar26 = (ulong)ppcVar24 / (ulong)ppcVar25;
          }
          ppcVar24 = (char **)((long)ppcVar24 - uVar26 * (long)ppcVar25);
        }
        *(char **)(lVar14 + (long)ppcVar24 * 8) = pcVar23;
      }
    }
  }
  else {
    *(qword *)pcVar23 = *pqVar16;
    *pqVar16 = (qword)pcVar23;
  }
  *(qword *)(pcVar1 + 0x18) = *(qword *)(pcVar1 + 0x18) + 1;
  psVar15 = *(segment_command **)(pcVar23 + 0x28);
joined_r0x0057c880:
  psVar22 = psVar6;
  if (psVar15 == (segment_command *)0x0) {
    psVar15 = psVar10;
    if (psVar6->vmaddr != 0) {
      psVar22 = (segment_command *)0x0;
      psVar15 = psVar6;
    }
    *(segment_command **)(pcVar23 + 0x28) = psVar15;
  }
  *param_2 = (long)psVar15;
  psVar6 = *(segment_command **)(pcVar23 + 0x28);
  __ZNSt3__15mutex6unlockEv(pqVar11);
  if (psVar22 != (segment_command *)0x0) {
    plVar12 = (long *)psVar22->vmaddr;
    psVar22->vmaddr = 0;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 8))();
    }
    if (psVar22->segname[0xf] < '\0') {
      qVar8._0_4_ = psVar22->cmd;
      qVar8._4_4_ = psVar22->cmdsize;
      __ZdlPv(qVar8);
    }
    __ZdlPv(psVar22);
  }
  return psVar6 != psVar10;
code_r0x0057c6b8:
  *(long **)(lVar14 + (long)ppcVar20 * 8) = plVar12;
  plVar12 = plVar19;
  plVar19 = (long *)*plVar19;
  ppcVar17 = ppcVar20;
  goto joined_r0x0057c660;
}



/* Entry: 0057ca78; end: 0057cad3;  */

undefined8 * FUN_0057ca78(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar2[3];
    puVar2[3] = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (*(char *)((long)puVar2 + 0x17) < '\0') {
      __ZdlPv(*puVar2);
    }
    __ZdlPv(puVar2);
  }
  return param_1;
}



/* Entry: 0057cad4; end: 0057cb8f;  */

undefined4 * FUN_0057cad4(undefined4 *param_1)

{
  dword *pdVar1;
  
  *(undefined1 *)((long)param_1 + 0x17) = 3;
  *param_1 = 0x435455;
  pdVar1 = &section_00000068.flags;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_FUN_00a01ec0;
  *(undefined8 *)(pdVar1 + 4) = 0;
  *(undefined8 *)(pdVar1 + 2) = 0;
  *(undefined8 *)(pdVar1 + 8) = 0;
  *(undefined8 *)(pdVar1 + 6) = 0;
  *(undefined8 *)(pdVar1 + 0xc) = 0;
  *(undefined8 *)(pdVar1 + 10) = 0;
  *(undefined8 *)(pdVar1 + 0x12) = 0;
  *(undefined8 *)(pdVar1 + 0x10) = 0;
  *(undefined8 *)(pdVar1 + 0x16) = 0;
  *(undefined8 *)(pdVar1 + 0x14) = 0;
  *(undefined8 *)(pdVar1 + 0x1a) = 0;
  *(undefined8 *)(pdVar1 + 0x18) = 0;
  *(undefined8 *)(pdVar1 + 0x1e) = 0;
  *(undefined8 *)(pdVar1 + 0x1c) = 0;
  *(undefined8 *)(pdVar1 + 0x20) = 0;
  *(undefined8 *)(pdVar1 + 0x26) = 0;
  *(undefined8 *)(pdVar1 + 0x28) = 0;
  FUN_0057dce8();
  *(dword **)(param_1 + 6) = pdVar1;
  return param_1;
}



/* Entry: 0057cb90; end: 0057cbef;  */

long * FUN_0057cb90(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if (((char)param_1[2] == '\x01') && (*(char *)(lVar1 + 0x27) < '\0')) {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x10));
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 0057cbf0; end: 0057cfdf;  */

bool FUN_0057cbf0(long param_1,int param_2,uint param_3,dword *param_4,undefined1 *param_5)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  short sVar6;
  code *pcVar7;
  bool bVar8;
  undefined8 *puVar9;
  char *pcVar10;
  ulong uVar11;
  undefined *puVar12;
  uint uVar13;
  dword *pdVar14;
  int *piVar15;
  long *plVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  int *piVar20;
  ulong uVar21;
  int iVar22;
  ulong uVar23;
  ulong uVar24;
  ulong unaff_x20;
  long *plVar25;
  byte *unaff_x22;
  undefined *puVar26;
  long *plVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  char *pcVar31;
  char *pcVar32;
  long lVar33;
  int iVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lStack_1d8;
  byte bStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined1 uStack_1bc;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined1 uStack_1ac;
  long lStack_1a8;
  byte bStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined1 uStack_18c;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined1 uStack_17c;
  byte bStack_172;
  byte bStack_171;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  int iStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  int iStack_138;
  int iStack_134;
  undefined2 uStack_130;
  char cStack_12e;
  int iStack_12c;
  int iStack_128;
  undefined2 uStack_124;
  char cStack_122;
  int iStack_120;
  ulong uStack_110;
  ulong uStack_108;
  char *pcStack_100;
  ulong uStack_f8;
  long *plStack_f0;
  long lStack_e8;
  byte *pbStack_e0;
  undefined1 *puStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long lStack_a8;
  char *pcStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  char *pcStack_88;
  dword *pdStack_80;
  uint uStack_74;
  dword *pdStack_70;
  int iStack_64;
  
  cVar4 = *(char *)(param_1 + 0x57);
  uVar35 = (ulong)cVar4;
  uVar28 = uVar35;
  if ((long)uVar35 < 0) {
    uVar28 = *(ulong *)(param_1 + 0x48);
  }
  plVar1 = (long *)(param_1 + 0x40);
  lVar29 = *(long *)(param_1 + 0x20);
  pcVar32 = *(char **)(param_1 + 0x28);
  pcStack_88 = pcVar32 + -lVar29;
  uVar30 = ((long)pcStack_88 >> 4) * -0x5555555555555555;
  uStack_74 = param_3;
  pdStack_70 = param_4;
  iStack_64 = param_2;
  if (pcStack_88 == (char *)0x0) {
    uVar24 = 0;
  }
  else {
    uVar24 = 0;
    bVar3 = *(byte *)((long)param_4 + 0x17);
    unaff_x22 = (byte *)(lVar29 + 0x29);
    pdStack_80 = *(dword **)param_4;
    uVar21 = *(ulong *)(param_4 + 2);
    uVar11 = uVar28;
    lStack_a8 = lVar29;
    pcStack_a0 = pcVar32;
    lStack_98 = param_1;
    puStack_90 = param_5;
    do {
      uVar28 = uVar11;
      if (cVar4 < '\0') {
        plVar25 = (long *)*plVar1;
        unaff_x20 = (ulong)*unaff_x22;
        uVar23 = (long)plVar25 + unaff_x20;
        _strlen();
        if ((char)bVar3 < '\0') goto LAB_0057ccd8;
LAB_0057ccb0:
        pdVar14 = pdStack_70;
        if (uVar23 == bVar3) {
LAB_0057ccec:
          _memcmp(pdVar14,(long)plVar25 + unaff_x20);
          uVar28 = unaff_x20;
          if ((int)pdVar14 != 0) {
            uVar28 = uVar11;
          }
        }
      }
      else {
        unaff_x20 = (ulong)*unaff_x22;
        uVar23 = (long)plVar1 + unaff_x20;
        _strlen();
        plVar25 = plVar1;
        if (-1 < (char)bVar3) goto LAB_0057ccb0;
LAB_0057ccd8:
        if (uVar23 == uVar21) {
          pdVar14 = pdStack_80;
          if (uVar21 == 0xffffffffffffffff) {
            FUN_00461b78();
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x57cfbc);
            (*pcVar7)();
          }
          goto LAB_0057ccec;
        }
      }
      param_5 = puStack_90;
      if (((*(int *)(unaff_x22 + -0x29) == iStack_64) && (unaff_x22[-1] == uStack_74)) &&
         (uVar28 == unaff_x20)) {
        if (0xff < uVar24) {
          return false;
        }
        goto LAB_0057cf7c;
      }
      uVar24 = uVar24 + 1;
      unaff_x22 = unaff_x22 + 0x30;
      uVar11 = uVar28;
    } while (uVar30 - uVar24 != 0);
    lVar29 = lStack_a8;
    uVar24 = uVar30;
    param_1 = lStack_98;
    pcVar32 = pcStack_a0;
    if (0xff < uVar30) {
      return false;
    }
  }
  uVar21 = 0;
  if (0xff < uVar28) {
    return false;
  }
  if (pcVar32 < *(undefined8 **)(param_1 + 0x30)) {
    *(qword *)(pcVar32 + 8) = 0;
    pcVar32[0] = '\0';
    pcVar32[1] = '\0';
    pcVar32[2] = '\0';
    pcVar32[3] = '\0';
    pcVar32[4] = '\0';
    pcVar32[5] = '\0';
    pcVar32[6] = '\0';
    pcVar32[7] = '\0';
    *(qword *)(pcVar32 + 0x18) = 0;
    *(qword *)(pcVar32 + 0x10) = 0;
    *(undefined8 *)(pcVar32 + 0x28) = 0;
    *(qword *)(pcVar32 + 0x20) = 0;
    *(qword *)(pcVar32 + 8) = 0x7b2;
    *(undefined2 *)(pcVar32 + 0x10) = 0x101;
    *(qword *)(pcVar32 + 0x18) = 0x7b2;
    *(undefined2 *)(pcVar32 + 0x20) = 0x101;
    *(char **)(param_1 + 0x28) = pcVar32 + 0x30;
    pcVar10 = pcVar32;
    goto LAB_0057cf24;
  }
  uVar11 = uVar30 + 1;
  if (uVar11 < 0x555555555555556) {
    lVar19 = (long)*(undefined8 **)(param_1 + 0x30) - lVar29 >> 4;
    uVar23 = lVar19 * 0x5555555555555556;
    if (uVar23 < uVar11 || uVar23 - uVar11 == 0) {
      uVar23 = uVar11;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar19 * -0x5555555555555555)) {
      uVar23 = 0x555555555555555;
    }
    unaff_x20 = uVar23 * 3;
    if (uVar23 == 0) {
      puVar9 = (undefined8 *)0x0;
      pdVar14 = (dword *)0x0;
      pcVar31 = (char *)0x0;
      pcVar10 = pcStack_88;
      if (pcStack_88 == (char *)0x0) {
LAB_0057ce4c:
        if (pcVar31 < puVar9 || (long)pcVar31 - (long)puVar9 == 0) {
          pcVar10 = segment_command_00000020.segname + 8;
          __Znwm();
          pdStack_80 = (dword *)(pcVar10 + 0x30);
          pdVar14 = pdStack_80;
          if (puVar9 != (undefined8 *)0x0) {
            __ZdlPv(puVar9);
            pdVar14 = pdStack_80;
          }
        }
        else {
          lVar19 = ((long)pcVar31 - (long)puVar9 >> 4) * -0x5555555555555555 + 1;
          pcVar10 = pcVar31 + ((ulong)(lVar19 - (lVar19 >> 0x3f)) >> 1) * -0x30;
        }
      }
    }
    else {
      if (0x555555555555555 < uVar23) goto LAB_0057cfc0;
      puVar9 = (undefined8 *)(uVar23 * 0x30);
      __Znwm();
      pcVar31 = (char *)((long)puVar9 + (long)pcStack_88);
      pdVar14 = (dword *)(puVar9 + uVar23 * 6);
      pcVar10 = pcVar31;
      if (pcStack_88 == (char *)(uVar23 * 0x30)) goto LAB_0057ce4c;
    }
    pdStack_80 = pdVar14;
    pcVar31 = pcStack_88 + lVar29;
    *(qword *)(pcVar10 + 8) = 0;
    pcVar10[0] = '\0';
    pcVar10[1] = '\0';
    pcVar10[2] = '\0';
    pcVar10[3] = '\0';
    pcVar10[4] = '\0';
    pcVar10[5] = '\0';
    pcVar10[6] = '\0';
    pcVar10[7] = '\0';
    *(qword *)(pcVar10 + 0x18) = 0;
    *(qword *)(pcVar10 + 0x10) = 0;
    *(undefined8 *)(pcVar10 + 0x28) = 0;
    *(qword *)(pcVar10 + 0x20) = 0;
    *(qword *)(pcVar10 + 8) = 0x7b2;
    *(undefined2 *)(pcVar10 + 0x10) = 0x101;
    *(qword *)(pcVar10 + 0x18) = 0x7b2;
    *(undefined2 *)(pcVar10 + 0x20) = 0x101;
    _memcpy(pcVar10 + 0x30,pcVar31,*(long *)(param_1 + 0x28) - (long)pcVar32);
    lVar29 = *(long *)(param_1 + 0x28);
    *(char **)(param_1 + 0x28) = pcVar31;
    lVar33 = (long)pcVar10 - ((long)pcVar32 - *(long *)(param_1 + 0x20));
    _memcpy(lVar33);
    lVar19 = *(long *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar33;
    *(long *)(param_1 + 0x28) = (long)(pcVar10 + 0x30) + (lVar29 - (long)pcVar32);
    *(dword **)(param_1 + 0x30) = pdStack_80;
    if (lVar19 != 0) {
      __ZdlPv();
    }
LAB_0057cf24:
    *(int *)pcVar10 = iStack_64;
    pcVar10[0x28] = (char)uStack_74;
    uVar35 = (ulong)*(char *)(param_1 + 0x57);
    if ((long)uVar35 < 0) {
      uVar35 = *(ulong *)(param_1 + 0x48);
    }
    if (uVar28 == uVar35) {
      uVar35 = *(ulong *)(pdStack_70 + 2);
      pdVar14 = *(dword **)pdStack_70;
      if (-1 < (char)*(byte *)((long)pdStack_70 + 0x17)) {
        uVar35 = (ulong)*(byte *)((long)pdStack_70 + 0x17);
        pdVar14 = pdStack_70;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar1,pdVar14,uVar35);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc(plVar1,1,0);
    }
    pcVar10[0x29] = (char)uVar28;
LAB_0057cf7c:
    *param_5 = (char)uVar24;
    return true;
  }
  func_0x00580934();
LAB_0057cfc0:
  FUN_0040cee8();
  if (unaff_x20 != 0) {
    __ZdlPv(unaff_x20);
  }
  uVar24 = uVar21;
  __Unwind_Resume();
  func_0x0040cf10();
  pcStack_b8 = FUN_0057cfe0;
  *(undefined1 *)(uVar24 + 0x88) = 0;
  if (*(char *)(uVar24 + 0x87) < '\0') {
    if (*(long *)(uVar24 + 0x78) == 0) {
      return true;
    }
  }
  else if (*(char *)(uVar24 + 0x87) == '\0') {
    return true;
  }
  uStack_170 = 0;
  uStack_168 = 0;
  lStack_160 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uVar11 = uVar24 + 0x70;
  uStack_110 = uVar35;
  uStack_108 = uVar28;
  pcStack_100 = pcVar32;
  uStack_f8 = uVar30;
  plStack_f0 = plVar1;
  lStack_e8 = param_1;
  pbStack_e0 = unaff_x22;
  puStack_d8 = param_5;
  uStack_d0 = unaff_x20;
  uStack_c8 = uVar21;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_005842a8(uVar11,&uStack_170);
  if (((uVar11 & 1) != 0) &&
     (uVar28 = uVar24, FUN_0057cbf0(uVar24,iStack_158,0,&uStack_170,&bStack_171), (uVar28 & 1) != 0)
     ) {
    uVar28 = uStack_148;
    if (-1 < (long)uStack_140) {
      uVar28 = uStack_140 >> 0x38;
    }
    if (uVar28 == 0) {
      uVar13 = (uint)*(byte *)(*(long *)(uVar24 + 0x10) + -0x28);
      if (uVar13 == bStack_171) {
LAB_0057d144:
        bVar8 = true;
        goto LAB_0057da14;
      }
      piVar15 = (int *)(*(long *)(uVar24 + 0x20) + (ulong)uVar13 * 0x30);
      piVar20 = (int *)(*(long *)(uVar24 + 0x20) + (ulong)(uint)bStack_171 * 0x30);
      if ((*piVar15 == *piVar20) && ((char)piVar15[10] == (char)piVar20[10])) {
LAB_0057d9fc:
        bVar8 = *(char *)((long)piVar15 + 0x29) == *(char *)((long)piVar20 + 0x29);
        goto LAB_0057da14;
      }
    }
    else {
      uVar28 = uVar24;
      FUN_0057cbf0(uVar24,iStack_138,1,&uStack_150,&bStack_172);
      if ((uVar28 & 1) != 0) {
        if (((iStack_134 != 1) || (uStack_130 != 0)) ||
           ((iStack_12c != 0 ||
            (((iStack_128 != 0 || (uStack_124 != 0x16d)) ||
             ((iStack_158 - iStack_138) + iStack_120 != 0x15180)))))) {
          lVar29 = *(long *)(uVar24 + 8);
          puVar26 = *(undefined **)(uVar24 + 0x10);
          lVar19 = (long)puVar26 - lVar29;
          uVar28 = (lVar19 >> 4) * -0x5555555555555555 + 0x324;
          if ((ulong)((*(long *)(uVar24 + 0x18) - lVar29 >> 4) * -0x5555555555555555) < uVar28) {
            if (0x555555555555555 < uVar28) {
              func_0x00580948();
LAB_0057da78:
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x57da7c);
              (*pcVar7)();
            }
            puVar12 = &UNK_000096c0 + lVar19;
            __Znwm();
            puVar26 = puVar12 + lVar19;
            _memcpy();
            *(undefined **)(uVar24 + 8) = puVar12;
            *(undefined **)(uVar24 + 0x10) = puVar26;
            *(undefined **)(uVar24 + 0x18) = puVar12 + uVar28 * 0x30;
            if (lVar29 != 0) {
              __ZdlPv(lVar29);
              puVar26 = *(undefined **)(uVar24 + 0x10);
            }
          }
          *(undefined1 *)(uVar24 + 0x88) = 1;
          lVar29 = *(long *)(puVar26 + -0x30);
          uVar28 = 0x7b2;
          FUN_005700e8(0x7b2,1,1,0,lVar29 / 0x3c,lVar29 % 0x3c);
          FUN_005700e8();
          *(ulong *)(uVar24 + 0x90) = uVar28;
          uVar13 = 1;
          if ((uVar28 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb8 >> 2 |
              uVar28 * -0x70a3d70a3d70a3d7 << 0x3e) < 0x28f5c28f5c28f5d) {
            uVar13 = (uint)((uVar28 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb0 >> 4 |
                            uVar28 * -0x70a3d70a3d70a3d7 << 0x3c) < 0xa3d70a3d70a3d7);
          }
          uVar2 = 0;
          if ((uVar28 & 3) == 0) {
            uVar2 = uVar13;
          }
          uVar35 = uVar28;
          func_0x0057bb14();
          uVar13 = (int)uVar28 +
                   (SUB164(SEXT816((long)uVar28) * ZEXT816(0xa3d70a3d70a3d70b),9) -
                   (SUB164(SEXT816((long)uVar28) * ZEXT816(0xa3d70a3d70a3d70b),0xc) >> 0x1f)) * -400
                   + 0x95f;
          uVar13 = ((uVar13 + (uVar13 >> 2)) - (uVar13 >> 2 & 0x3fff) / 0x19) +
                   (uVar13 >> 4 & 0xfff) / 0x19 + 1;
          uVar5 = (uVar13 & 0xffff) * 0x2493 >> 0x10;
          uVar13 = uVar13 + (uVar5 + ((uVar13 - uVar5 & 0xfffe) >> 1) >> 2) * -7;
          bStack_1a0 = bStack_172;
          uStack_198 = 0x7b2;
          uStack_190 = 0x101;
          uStack_18c = 0;
          uStack_188 = 0x7b2;
          uStack_180 = 0x101;
          lVar19 = uVar35 * 0x15180;
          iVar34 = 0;
          if ((uVar13 & 0xffff) != 0) {
            iVar34 = *(int *)(&UNK_008156d8 + ((ulong)(uVar13 + 6) & 0xffff) * 4) + 1;
          }
          uStack_17c = 0;
          bStack_1d0 = bStack_171;
          uStack_1c8 = 0x7b2;
          uStack_1c0 = 0x101;
          uStack_1bc = 0;
          uStack_1b8 = 0x7b2;
          uStack_1b0 = 0x101;
          uStack_1ac = 0;
          uVar35 = *(ulong *)(uVar24 + 0x90);
          uVar28 = uVar35 + 0x191;
          uVar30 = (ulong)uVar2;
          do {
            uVar13 = (uint)uVar30;
            if (iStack_134 == 2) {
              lVar33 = (long)(char)uStack_130;
              if (uStack_130._1_1_ == '\x05') {
                lVar33 = lVar33 + 1;
              }
              iVar18 = (int)*(short *)(&UNK_0081570c + lVar33 * 2 + uVar30 * 0x1c);
              sVar6 = (short)((iVar34 + iVar18) % 7);
              if (uStack_130._1_1_ != '\x05') {
                iVar18 = iVar18 + uStack_130._1_1_ * 7 +
                         (int)((short)((cStack_12e - sVar6) + 7) % 7) + -7;
                goto joined_r0x0057d630;
              }
              iVar18 = iVar18 + (short)~((short)((sVar6 - cStack_12e) + 6) % 7);
              if (iStack_128 == 2) goto LAB_0057d4c0;
LAB_0057d558:
              if (iStack_128 == 1) {
                iVar22 = (int)uStack_124;
              }
              else if (iStack_128 == 0) {
                iVar22 = (int)uStack_124 - ((uint)(uStack_124 < 0x3c) | (uVar13 ^ 0xffffffff) & 1);
              }
              else {
                iVar22 = 0;
              }
            }
            else {
              if (iStack_134 == 1) {
                iVar18 = (int)uStack_130;
              }
              else if (iStack_134 == 0) {
                iVar18 = (int)uStack_130 - ((uint)(uStack_130 < 0x3c) | (uVar13 ^ 0xffffffff) & 1);
              }
              else {
                iVar18 = 0;
              }
joined_r0x0057d630:
              if (iStack_128 != 2) goto LAB_0057d558;
LAB_0057d4c0:
              lVar33 = (long)(char)uStack_124;
              if (uStack_124._1_1_ == '\x05') {
                lVar33 = lVar33 + 1;
              }
              iVar22 = (int)*(short *)(&UNK_0081570c + lVar33 * 2 + uVar30 * 0x1c);
              sVar6 = (short)((iVar34 + iVar22) % 7);
              if (uStack_124._1_1_ == '\x05') {
                iVar22 = iVar22 + (short)~((short)((sVar6 - cStack_122) + 6) % 7);
              }
              else {
                iVar22 = iVar22 + uStack_124._1_1_ * 7 +
                         (int)((short)((cStack_122 - sVar6) + 7) % 7) + -7;
              }
            }
            lStack_1a8 = ((long)iVar18 * 0x15180 + lVar19 + (long)iStack_12c) - (long)iStack_158;
            lStack_1d8 = (lVar19 + (long)iVar22 * 0x15180 + (long)iStack_120) - (long)iStack_138;
            plVar1 = &lStack_1d8;
            plVar25 = &lStack_1a8;
            if (lStack_1d8 <= lStack_1a8) {
              plVar1 = &lStack_1a8;
              plVar25 = &lStack_1d8;
            }
            if (lVar29 < *plVar1) {
              plVar27 = *(long **)(uVar24 + 0x10);
              plVar16 = *(long **)(uVar24 + 0x18);
              if (lVar29 < *plVar25) {
                if (plVar27 < plVar16) {
                  lVar33 = *plVar25;
                  lVar36 = plVar25[3];
                  lVar17 = plVar25[2];
                  plVar27[1] = plVar25[1];
                  *plVar27 = lVar33;
                  plVar27[3] = lVar36;
                  plVar27[2] = lVar17;
                  lVar33 = plVar25[4];
                  plVar27[5] = plVar25[5];
                  plVar27[4] = lVar33;
                  plVar27 = plVar27 + 6;
LAB_0057d82c:
                  *(long **)(uVar24 + 0x10) = plVar27;
                  plVar16 = *(long **)(uVar24 + 0x18);
                  goto LAB_0057d834;
                }
                lVar33 = *(long *)(uVar24 + 8);
                uVar35 = ((long)plVar27 - lVar33 >> 4) * -0x5555555555555555 + 1;
                if (uVar35 < 0x555555555555556) {
                  lVar17 = (long)plVar16 - lVar33 >> 4;
                  uVar21 = lVar17 * 0x5555555555555556;
                  if (uVar21 < uVar35 || uVar21 - uVar35 == 0) {
                    uVar21 = uVar35;
                  }
                  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar17 * -0x5555555555555555)) {
                    uVar21 = 0x555555555555555;
                  }
                  if (uVar21 < 0x555555555555556) {
                    lVar17 = uVar21 * 0x30;
                    __Znwm();
                    plVar27 = (long *)(lVar17 + ((long)plVar27 - lVar33));
                    lVar36 = *plVar25;
                    lVar38 = plVar25[3];
                    lVar37 = plVar25[2];
                    plVar27[1] = plVar25[1];
                    *plVar27 = lVar36;
                    plVar27[3] = lVar38;
                    plVar27[2] = lVar37;
                    lVar36 = plVar25[4];
                    plVar27[5] = plVar25[5];
                    plVar27[4] = lVar36;
                    plVar27 = plVar27 + 6;
                    _memcpy();
                    *(long *)(uVar24 + 8) = lVar17;
                    *(long **)(uVar24 + 0x10) = plVar27;
                    *(ulong *)(uVar24 + 0x18) = lVar17 + uVar21 * 0x30;
                    if (lVar33 != 0) {
                      __ZdlPv(lVar33);
                    }
                    goto LAB_0057d82c;
                  }
LAB_0057da6c:
                  FUN_0040cee8();
                }
                else {
LAB_0057da64:
                  func_0x00580948();
                }
                goto LAB_0057da78;
              }
LAB_0057d834:
              if (plVar27 < plVar16) {
                lVar17 = plVar1[1];
                lVar33 = *plVar1;
                lVar36 = plVar1[2];
                lVar38 = plVar1[5];
                lVar37 = plVar1[4];
                plVar27[3] = plVar1[3];
                plVar27[2] = lVar36;
                plVar27[5] = lVar38;
                plVar27[4] = lVar37;
                plVar27[1] = lVar17;
                *plVar27 = lVar33;
                plVar27 = plVar27 + 6;
              }
              else {
                lVar33 = *(long *)(uVar24 + 8);
                uVar35 = ((long)plVar27 - lVar33 >> 4) * -0x5555555555555555 + 1;
                if (0x555555555555555 < uVar35) goto LAB_0057da64;
                lVar17 = (long)plVar16 - lVar33 >> 4;
                uVar21 = lVar17 * 0x5555555555555556;
                if (uVar21 < uVar35 || uVar21 - uVar35 == 0) {
                  uVar21 = uVar35;
                }
                if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar17 * -0x5555555555555555)) {
                  uVar21 = 0x555555555555555;
                }
                if (0x555555555555555 < uVar21) goto LAB_0057da6c;
                lVar17 = uVar21 * 0x30;
                __Znwm();
                plVar27 = (long *)(lVar17 + ((long)plVar27 - lVar33));
                lVar36 = *plVar1;
                lVar38 = plVar1[3];
                lVar37 = plVar1[2];
                plVar27[1] = plVar1[1];
                *plVar27 = lVar36;
                plVar27[3] = lVar38;
                plVar27[2] = lVar37;
                lVar36 = plVar1[4];
                plVar27[5] = plVar1[5];
                plVar27[4] = lVar36;
                plVar27 = plVar27 + 6;
                _memcpy();
                *(long *)(uVar24 + 8) = lVar17;
                *(long **)(uVar24 + 0x10) = plVar27;
                *(ulong *)(uVar24 + 0x18) = lVar17 + uVar21 * 0x30;
                if (lVar33 != 0) {
                  __ZdlPv(lVar33);
                }
              }
              *(long **)(uVar24 + 0x10) = plVar27;
              uVar35 = *(ulong *)(uVar24 + 0x90);
            }
            if (uVar35 == uVar28) goto LAB_0057d144;
            uVar35 = uVar35 + 1;
            if (uVar13 == 0 && (uVar35 & 3) == 0) {
              if ((uVar35 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb8 >> 2 |
                  uVar35 * -0x70a3d70a3d70a3d7 << 0x3e) < 0x28f5c28f5c28f5d) {
                uVar21 = (ulong)((uVar35 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb0 >> 4 |
                                 uVar35 * -0x70a3d70a3d70a3d7 << 0x3c) < 0xa3d70a3d70a3d7);
              }
              else {
                uVar21 = 1;
              }
            }
            else {
              uVar21 = 0;
            }
            lVar19 = lVar19 + *(int *)(&UNK_0081562c + uVar30 * 4);
            iVar34 = (*(int *)(&UNK_00815634 + uVar30 * 4) + iVar34) % 7;
            *(ulong *)(uVar24 + 0x90) = uVar35;
            uVar30 = uVar21;
          } while( true );
        }
        uVar13 = (uint)*(byte *)(*(long *)(uVar24 + 0x10) + -0x28);
        if (uVar13 == bStack_172) goto LAB_0057d144;
        piVar15 = (int *)(*(long *)(uVar24 + 0x20) + (ulong)uVar13 * 0x30);
        piVar20 = (int *)(*(long *)(uVar24 + 0x20) + (ulong)(uint)bStack_172 * 0x30);
        if ((*piVar15 == *piVar20) && ((char)piVar15[10] == (char)piVar20[10])) goto LAB_0057d9fc;
      }
    }
  }
  bVar8 = false;
LAB_0057da14:
  if ((long)uStack_140 < 0) {
    __ZdlPv(uStack_150);
  }
  if (lStack_160 < 0) {
    __ZdlPv(uStack_170);
  }
  return bVar8;
}



/* Entry: 0057cfe0; end: 0057dadf;  */

bool FUN_0057cfe0(ulong param_1)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  short sVar5;
  code *pcVar6;
  bool bVar7;
  undefined *puVar8;
  uint uVar9;
  int *piVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  int iVar14;
  int *piVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lStack_128;
  byte bStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined1 uStack_10c;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined1 uStack_fc;
  long lStack_f8;
  byte bStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined1 uStack_dc;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  byte bStack_c2;
  byte bStack_c1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  int iStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  int iStack_88;
  int iStack_84;
  undefined2 uStack_80;
  char cStack_7e;
  int iStack_7c;
  int iStack_78;
  undefined2 uStack_74;
  char cStack_72;
  int iStack_70;
  
  *(undefined1 *)(param_1 + 0x88) = 0;
  if (*(char *)(param_1 + 0x87) < '\0') {
    if (*(long *)(param_1 + 0x78) == 0) {
      return true;
    }
  }
  else if (*(char *)(param_1 + 0x87) == '\0') {
    return true;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_b0 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uVar22 = param_1 + 0x70;
  FUN_005842a8(uVar22,&uStack_c0);
  if (((uVar22 & 1) != 0) &&
     (uVar22 = param_1, FUN_0057cbf0(param_1,iStack_a8,0,&uStack_c0,&bStack_c1), (uVar22 & 1) != 0))
  {
    uVar22 = uStack_98;
    if (-1 < (long)uStack_90) {
      uVar22 = uStack_90 >> 0x38;
    }
    if (uVar22 == 0) {
      uVar9 = (uint)*(byte *)(*(long *)(param_1 + 0x10) + -0x28);
      if (uVar9 == bStack_c1) {
LAB_0057d144:
        bVar7 = true;
        goto LAB_0057da14;
      }
      piVar10 = (int *)(*(long *)(param_1 + 0x20) + (ulong)uVar9 * 0x30);
      piVar15 = (int *)(*(long *)(param_1 + 0x20) + (ulong)(uint)bStack_c1 * 0x30);
      if ((*piVar10 == *piVar15) && ((char)piVar10[10] == (char)piVar15[10])) {
LAB_0057d9fc:
        bVar7 = *(char *)((long)piVar10 + 0x29) == *(char *)((long)piVar15 + 0x29);
        goto LAB_0057da14;
      }
    }
    else {
      uVar22 = param_1;
      FUN_0057cbf0(param_1,iStack_88,1,&uStack_a0,&bStack_c2);
      if ((uVar22 & 1) != 0) {
        if (((((iStack_84 != 1) || (uStack_80 != 0)) || (iStack_7c != 0)) ||
            ((iStack_78 != 0 || (uStack_74 != 0x16d)))) ||
           ((iStack_a8 - iStack_88) + iStack_70 != 0x15180)) {
          lVar23 = *(long *)(param_1 + 8);
          puVar20 = *(undefined **)(param_1 + 0x10);
          lVar19 = (long)puVar20 - lVar23;
          uVar22 = (lVar19 >> 4) * -0x5555555555555555 + 0x324;
          if ((ulong)((*(long *)(param_1 + 0x18) - lVar23 >> 4) * -0x5555555555555555) < uVar22) {
            if (0x555555555555555 < uVar22) {
              func_0x00580948();
LAB_0057da78:
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x57da7c);
              (*pcVar6)();
            }
            puVar8 = &UNK_000096c0 + lVar19;
            __Znwm();
            puVar20 = puVar8 + lVar19;
            _memcpy();
            *(undefined **)(param_1 + 8) = puVar8;
            *(undefined **)(param_1 + 0x10) = puVar20;
            *(undefined **)(param_1 + 0x18) = puVar8 + uVar22 * 0x30;
            if (lVar23 != 0) {
              __ZdlPv(lVar23);
              puVar20 = *(undefined **)(param_1 + 0x10);
            }
          }
          *(undefined1 *)(param_1 + 0x88) = 1;
          lVar23 = *(long *)(puVar20 + -0x30);
          uVar22 = 0x7b2;
          FUN_005700e8(0x7b2,1,1,0,lVar23 / 0x3c,lVar23 % 0x3c);
          FUN_005700e8();
          *(ulong *)(param_1 + 0x90) = uVar22;
          uVar9 = 1;
          if ((uVar22 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb8 >> 2 |
              uVar22 * -0x70a3d70a3d70a3d7 << 0x3e) < 0x28f5c28f5c28f5d) {
            uVar9 = (uint)((uVar22 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb0 >> 4 |
                           uVar22 * -0x70a3d70a3d70a3d7 << 0x3c) < 0xa3d70a3d70a3d7);
          }
          uVar1 = 0;
          if ((uVar22 & 3) == 0) {
            uVar1 = uVar9;
          }
          uVar11 = uVar22;
          func_0x0057bb14();
          uVar9 = (int)uVar22 +
                  (SUB164(SEXT816((long)uVar22) * ZEXT816(0xa3d70a3d70a3d70b),9) -
                  (SUB164(SEXT816((long)uVar22) * ZEXT816(0xa3d70a3d70a3d70b),0xc) >> 0x1f)) * -400
                  + 0x95f;
          uVar9 = ((uVar9 + (uVar9 >> 2)) - (uVar9 >> 2 & 0x3fff) / 0x19) +
                  (uVar9 >> 4 & 0xfff) / 0x19 + 1;
          uVar3 = (uVar9 & 0xffff) * 0x2493 >> 0x10;
          uVar9 = uVar9 + (uVar3 + ((uVar9 - uVar3 & 0xfffe) >> 1) >> 2) * -7;
          bStack_f0 = bStack_c2;
          uStack_e8 = 0x7b2;
          uStack_e0 = 0x101;
          uStack_dc = 0;
          uStack_d8 = 0x7b2;
          uStack_d0 = 0x101;
          lVar19 = uVar11 * 0x15180;
          iVar25 = 0;
          if ((uVar9 & 0xffff) != 0) {
            iVar25 = *(int *)(&UNK_008156d8 + ((ulong)(uVar9 + 6) & 0xffff) * 4) + 1;
          }
          uStack_cc = 0;
          bStack_120 = bStack_c1;
          uStack_118 = 0x7b2;
          uStack_110 = 0x101;
          uStack_10c = 0;
          uStack_108 = 0x7b2;
          uStack_100 = 0x101;
          uStack_fc = 0;
          uVar11 = *(ulong *)(param_1 + 0x90);
          uVar22 = uVar11 + 0x191;
          uVar24 = (ulong)uVar1;
          do {
            uVar9 = (uint)uVar24;
            if (iStack_84 == 2) {
              lVar18 = (long)(char)uStack_80;
              if (uStack_80._1_1_ == '\x05') {
                lVar18 = lVar18 + 1;
              }
              iVar14 = (int)*(short *)(&UNK_0081570c + lVar18 * 2 + uVar24 * 0x1c);
              sVar5 = (short)((iVar25 + iVar14) % 7);
              if (uStack_80._1_1_ != '\x05') {
                iVar14 = iVar14 + uStack_80._1_1_ * 7 + (int)((short)((cStack_7e - sVar5) + 7) % 7)
                         + -7;
                goto joined_r0x0057d630;
              }
              iVar14 = iVar14 + (short)~((short)((sVar5 - cStack_7e) + 6) % 7);
              if (iStack_78 == 2) goto LAB_0057d4c0;
LAB_0057d558:
              if (iStack_78 == 1) {
                iVar17 = (int)uStack_74;
              }
              else if (iStack_78 == 0) {
                iVar17 = (int)uStack_74 - ((uint)(uStack_74 < 0x3c) | (uVar9 ^ 0xffffffff) & 1);
              }
              else {
                iVar17 = 0;
              }
            }
            else {
              if (iStack_84 == 1) {
                iVar14 = (int)uStack_80;
              }
              else if (iStack_84 == 0) {
                iVar14 = (int)uStack_80 - ((uint)(uStack_80 < 0x3c) | (uVar9 ^ 0xffffffff) & 1);
              }
              else {
                iVar14 = 0;
              }
joined_r0x0057d630:
              if (iStack_78 != 2) goto LAB_0057d558;
LAB_0057d4c0:
              lVar18 = (long)(char)uStack_74;
              if (uStack_74._1_1_ == '\x05') {
                lVar18 = lVar18 + 1;
              }
              iVar17 = (int)*(short *)(&UNK_0081570c + lVar18 * 2 + uVar24 * 0x1c);
              sVar5 = (short)((iVar25 + iVar17) % 7);
              if (uStack_74._1_1_ == '\x05') {
                iVar17 = iVar17 + (short)~((short)((sVar5 - cStack_72) + 6) % 7);
              }
              else {
                iVar17 = iVar17 + uStack_74._1_1_ * 7 + (int)((short)((cStack_72 - sVar5) + 7) % 7)
                         + -7;
              }
            }
            lStack_f8 = ((long)iVar14 * 0x15180 + lVar19 + (long)iStack_7c) - (long)iStack_a8;
            lStack_128 = (lVar19 + (long)iVar17 * 0x15180 + (long)iStack_70) - (long)iStack_88;
            plVar2 = &lStack_128;
            plVar4 = &lStack_f8;
            if (lStack_128 <= lStack_f8) {
              plVar2 = &lStack_f8;
              plVar4 = &lStack_128;
            }
            if (lVar23 < *plVar2) {
              plVar21 = *(long **)(param_1 + 0x10);
              plVar12 = *(long **)(param_1 + 0x18);
              if (lVar23 < *plVar4) {
                if (plVar21 < plVar12) {
                  lVar18 = *plVar4;
                  lVar26 = plVar4[3];
                  lVar13 = plVar4[2];
                  plVar21[1] = plVar4[1];
                  *plVar21 = lVar18;
                  plVar21[3] = lVar26;
                  plVar21[2] = lVar13;
                  lVar18 = plVar4[4];
                  plVar21[5] = plVar4[5];
                  plVar21[4] = lVar18;
                  plVar21 = plVar21 + 6;
LAB_0057d82c:
                  *(long **)(param_1 + 0x10) = plVar21;
                  plVar12 = *(long **)(param_1 + 0x18);
                  goto LAB_0057d834;
                }
                lVar18 = *(long *)(param_1 + 8);
                uVar11 = ((long)plVar21 - lVar18 >> 4) * -0x5555555555555555 + 1;
                if (uVar11 < 0x555555555555556) {
                  lVar13 = (long)plVar12 - lVar18 >> 4;
                  uVar16 = lVar13 * 0x5555555555555556;
                  if (uVar16 < uVar11 || uVar16 - uVar11 == 0) {
                    uVar16 = uVar11;
                  }
                  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar13 * -0x5555555555555555)) {
                    uVar16 = 0x555555555555555;
                  }
                  if (uVar16 < 0x555555555555556) {
                    lVar13 = uVar16 * 0x30;
                    __Znwm();
                    plVar21 = (long *)(lVar13 + ((long)plVar21 - lVar18));
                    lVar26 = *plVar4;
                    lVar28 = plVar4[3];
                    lVar27 = plVar4[2];
                    plVar21[1] = plVar4[1];
                    *plVar21 = lVar26;
                    plVar21[3] = lVar28;
                    plVar21[2] = lVar27;
                    lVar26 = plVar4[4];
                    plVar21[5] = plVar4[5];
                    plVar21[4] = lVar26;
                    plVar21 = plVar21 + 6;
                    _memcpy();
                    *(long *)(param_1 + 8) = lVar13;
                    *(long **)(param_1 + 0x10) = plVar21;
                    *(ulong *)(param_1 + 0x18) = lVar13 + uVar16 * 0x30;
                    if (lVar18 != 0) {
                      __ZdlPv(lVar18);
                    }
                    goto LAB_0057d82c;
                  }
LAB_0057da6c:
                  FUN_0040cee8();
                }
                else {
LAB_0057da64:
                  func_0x00580948();
                }
                goto LAB_0057da78;
              }
LAB_0057d834:
              if (plVar21 < plVar12) {
                lVar13 = plVar2[1];
                lVar18 = *plVar2;
                lVar26 = plVar2[2];
                lVar28 = plVar2[5];
                lVar27 = plVar2[4];
                plVar21[3] = plVar2[3];
                plVar21[2] = lVar26;
                plVar21[5] = lVar28;
                plVar21[4] = lVar27;
                plVar21[1] = lVar13;
                *plVar21 = lVar18;
                plVar21 = plVar21 + 6;
              }
              else {
                lVar18 = *(long *)(param_1 + 8);
                uVar11 = ((long)plVar21 - lVar18 >> 4) * -0x5555555555555555 + 1;
                if (0x555555555555555 < uVar11) goto LAB_0057da64;
                lVar13 = (long)plVar12 - lVar18 >> 4;
                uVar16 = lVar13 * 0x5555555555555556;
                if (uVar16 < uVar11 || uVar16 - uVar11 == 0) {
                  uVar16 = uVar11;
                }
                if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar13 * -0x5555555555555555)) {
                  uVar16 = 0x555555555555555;
                }
                if (0x555555555555555 < uVar16) goto LAB_0057da6c;
                lVar13 = uVar16 * 0x30;
                __Znwm();
                plVar21 = (long *)(lVar13 + ((long)plVar21 - lVar18));
                lVar26 = *plVar2;
                lVar28 = plVar2[3];
                lVar27 = plVar2[2];
                plVar21[1] = plVar2[1];
                *plVar21 = lVar26;
                plVar21[3] = lVar28;
                plVar21[2] = lVar27;
                lVar26 = plVar2[4];
                plVar21[5] = plVar2[5];
                plVar21[4] = lVar26;
                plVar21 = plVar21 + 6;
                _memcpy();
                *(long *)(param_1 + 8) = lVar13;
                *(long **)(param_1 + 0x10) = plVar21;
                *(ulong *)(param_1 + 0x18) = lVar13 + uVar16 * 0x30;
                if (lVar18 != 0) {
                  __ZdlPv(lVar18);
                }
              }
              *(long **)(param_1 + 0x10) = plVar21;
              uVar11 = *(ulong *)(param_1 + 0x90);
            }
            if (uVar11 == uVar22) goto LAB_0057d144;
            uVar11 = uVar11 + 1;
            if (uVar9 == 0 && (uVar11 & 3) == 0) {
              if ((uVar11 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb8 >> 2 |
                  uVar11 * -0x70a3d70a3d70a3d7 << 0x3e) < 0x28f5c28f5c28f5d) {
                uVar16 = (ulong)((uVar11 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb0 >> 4 |
                                 uVar11 * -0x70a3d70a3d70a3d7 << 0x3c) < 0xa3d70a3d70a3d7);
              }
              else {
                uVar16 = 1;
              }
            }
            else {
              uVar16 = 0;
            }
            lVar19 = lVar19 + *(int *)(&UNK_0081562c + uVar24 * 4);
            iVar25 = (*(int *)(&UNK_00815634 + uVar24 * 4) + iVar25) % 7;
            *(ulong *)(param_1 + 0x90) = uVar11;
            uVar24 = uVar16;
          } while( true );
        }
        uVar9 = (uint)*(byte *)(*(long *)(param_1 + 0x10) + -0x28);
        if (uVar9 == bStack_c2) goto LAB_0057d144;
        piVar10 = (int *)(*(long *)(param_1 + 0x20) + (ulong)uVar9 * 0x30);
        piVar15 = (int *)(*(long *)(param_1 + 0x20) + (ulong)(uint)bStack_c2 * 0x30);
        if ((*piVar10 == *piVar15) && ((char)piVar10[10] == (char)piVar15[10])) goto LAB_0057d9fc;
      }
    }
  }
  bVar7 = false;
LAB_0057da14:
  if ((long)uStack_90 < 0) {
    __ZdlPv(uStack_a0);
  }
  if (lStack_b0 < 0) {
    __ZdlPv(uStack_c0);
  }
  return bVar7;
}



/* Entry: 0057dae0; end: 0057db9b;  */

void FUN_0057dae0(long *param_1,ulong param_2,long param_3,undefined4 *param_4)

{
  long lVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *param_1;
  if ((ulong)((param_1[2] - lVar5 >> 4) * -0x5555555555555555) < param_2) {
    if (0x555555555555555 < param_2) {
      func_0x00580948();
      lVar5 = 0x7b2;
      cVar2 = '\x01';
      FUN_005700e8(0x7b2,1,1,0,param_3 / 0x3c,param_3 % 0x3c);
      uVar4 = (ulong)cVar2;
      FUN_005700e8();
      *param_1 = lVar5;
      param_1[1] = uVar4 & 0xffffffffff;
      *(undefined4 *)(param_1 + 2) = *param_4;
      *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)(param_4 + 10);
      if (-1 < *(char *)(param_2 + 0x57)) {
        param_1[3] = (long)(param_2 + 0x40) + (ulong)*(byte *)((long)param_4 + 0x29);
        return;
      }
      param_1[3] = *(long *)(param_2 + 0x40) + (ulong)*(byte *)((long)param_4 + 0x29);
      return;
    }
    lVar3 = param_1[1];
    lVar1 = param_2 * 0x30;
    __Znwm();
    _memcpy();
    *param_1 = lVar1;
    param_1[1] = lVar1 + (lVar3 - lVar5);
    param_1[2] = lVar1 + param_2 * 0x30;
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_0099c620)(lVar5);
      return;
    }
  }
  return;
}



/* Entry: 0057db9c; end: 0057dc8f;  */

void FUN_0057db9c(undefined8 *param_1,long param_2,long param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  ulong uVar3;
  
  uVar1 = 0x7b2;
  cVar2 = '\x01';
  FUN_005700e8(0x7b2,1,1,0,param_3 / 0x3c,param_3 % 0x3c);
  uVar3 = (ulong)cVar2;
  FUN_005700e8();
  *param_1 = uVar1;
  param_1[1] = uVar3 & 0xffffffffff;
  *(undefined4 *)(param_1 + 2) = *param_4;
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)(param_4 + 10);
  if (-1 < *(char *)(param_2 + 0x57)) {
    param_1[3] = param_2 + 0x40 + (ulong)*(byte *)((long)param_4 + 0x29);
    return;
  }
  param_1[3] = *(long *)(param_2 + 0x40) + (ulong)*(byte *)((long)param_4 + 0x29);
  return;
}



/* Entry: 0057dc90; end: 0057dce7;  */

undefined8 * FUN_0057dc90(undefined8 *param_1)

{
  char cVar1;
  
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
    cVar1 = *(char *)((long)param_1 + 0x17);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x17);
  }
  if (-1 < cVar1) {
    return param_1;
  }
  __ZdlPv(*param_1);
  return param_1;
}



/* Entry: 0057dce8; end: 0057e007;  */

undefined8 FUN_0057dce8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar9 = *(long *)(param_1 + 0x20);
  lVar10 = *(long *)(param_1 + 0x28);
  lVar1 = lVar10 - lVar9;
  if (lVar1 == 0) {
    FUN_0058095c((long *)(param_1 + 0x20),1);
    lVar10 = *(long *)(param_1 + 0x28);
  }
  else if (1 < (ulong)((lVar1 >> 4) * -0x5555555555555555)) {
    lVar10 = lVar9 + 0x30;
    *(long *)(param_1 + 0x28) = lVar10;
  }
  *(int *)(lVar10 + -0x30) = (int)*param_2;
  *(undefined2 *)(lVar10 + -8) = 0;
  plVar7 = (long *)(param_1 + 8);
  lVar9 = *plVar7;
  *(long *)(param_1 + 0x10) = lVar9;
  if ((ulong)((*(long *)(param_1 + 0x18) - lVar9 >> 4) * -0x5555555555555555) < 0xc) {
    lVar1 = 0x240;
    __Znwm();
    *(long *)(param_1 + 8) = lVar1;
    *(long *)(param_1 + 0x10) = lVar1;
    *(long *)(param_1 + 0x18) = lVar1 + 0x240;
    if (lVar9 != 0) {
      __ZdlPv(lVar9);
    }
  }
  lVar9 = 0;
  do {
    lVar8 = *(long *)(&UNK_00815640 + lVar9);
    plVar2 = plVar7;
    FUN_0057e044(plVar7,*(undefined8 *)(param_1 + 0x10));
    *plVar2 = lVar8;
    *(undefined1 *)(plVar2 + 1) = 0;
    lVar1 = 0x7b2;
    cVar4 = '\x01';
    FUN_005700e8(0x7b2,1,1,0,lVar8 / 0x3c,lVar8 % 0x3c);
    uVar5 = (ulong)cVar4;
    FUN_005700e8();
    uVar6 = (ulong)(char)uVar5;
    plVar2[2] = lVar1;
    plVar2[3] = uVar5 & 0xffffffffff;
    FUN_005700e8();
    plVar2[4] = lVar1;
    plVar2[5] = uVar6 & 0xffffffffff;
    lVar9 = lVar9 + 8;
  } while (lVar9 != 0x60);
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_00577374(&uStack_78,param_2);
  if (*(char *)(param_1 + 0x57) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined8 *)(param_1 + 0x48) = uStack_70;
  *(undefined8 *)(param_1 + 0x40) = uStack_78;
  *(undefined8 *)(param_1 + 0x50) = uStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc(param_1 + 0x40,1,0);
  if (*(char *)(param_1 + 0x87) < '\0') {
    **(undefined1 **)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x70) = 0;
    *(undefined1 *)(param_1 + 0x87) = 0;
  }
  *(undefined1 *)(param_1 + 0x88) = 0;
  uVar3 = 0x7b2;
  cVar4 = '\x01';
  FUN_0057044c(0x7b2,1,1,0x611722833944,0xf,0x1e,7);
  uVar5 = (ulong)cVar4;
  FUN_005700e8();
  *(undefined8 *)(lVar10 + -0x28) = uVar3;
  *(ulong *)(lVar10 + -0x20) = uVar5 & 0xffffffffff;
  uVar3 = 0x7b2;
  cVar4 = '\x01';
  FUN_0057044c(0x7b2,1,1,0xffff9ee8dd7cc6bb,8,0x1d,0x34);
  uVar5 = (ulong)cVar4;
  FUN_005700e8();
  *(undefined8 *)(lVar10 + -0x18) = uVar3;
  *(ulong *)(lVar10 + -0x10) = uVar5 & 0xffffffffff;
  FUN_0057e2f0(plVar7);
  return 1;
}



/* Entry: 0057e008; end: 0057e043;  */

void FUN_0057e008(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  
  lVar4 = param_1[1] - *param_1 >> 4;
  bVar3 = param_2 < (ulong)(lVar4 * -0x5555555555555555);
  uVar2 = param_2 + lVar4 * 0x5555555555555555;
  if (bVar3 || uVar2 == 0) {
    if (bVar3) {
      param_1[1] = *param_1 + param_2 * 0x30;
    }
    return;
  }
  puVar9 = (undefined8 *)param_1[1];
  if ((ulong)((param_1[2] - (long)puVar9 >> 4) * -0x5555555555555555) < uVar2) {
    lVar4 = (long)puVar9 - *param_1;
    uVar6 = uVar2 + (lVar4 >> 4) * -0x5555555555555555;
    if (0x555555555555555 < uVar6) {
      FUN_00580934();
LAB_00580af4:
      FUN_0040cee8();
      return;
    }
    lVar5 = param_1[2] - *param_1 >> 4;
    uVar7 = lVar5 * 0x5555555555555556;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
      uVar7 = uVar6;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar7 = 0x555555555555555;
    }
    if (uVar7 == 0) {
      lVar5 = 0;
    }
    else {
      if (0x555555555555555 < uVar7) goto LAB_00580af4;
      lVar5 = uVar7 * 0x30;
      __Znwm();
    }
    puVar1 = (undefined8 *)(lVar5 + lVar4);
    puVar8 = puVar1;
    do {
      puVar8[1] = 0;
      *puVar8 = 0;
      puVar8[3] = 0;
      puVar8[2] = 0;
      puVar8[5] = 0;
      puVar8[4] = 0;
      puVar8[1] = 0x7b2;
      *(undefined2 *)(puVar8 + 2) = 0x101;
      puVar8[3] = 0x7b2;
      *(undefined2 *)(puVar8 + 4) = 0x101;
      puVar8 = puVar8 + 6;
    } while (puVar8 != puVar1 + uVar2 * 6);
    lVar4 = *param_1;
    lVar10 = (long)puVar1 - ((long)puVar9 - lVar4);
    _memcpy(lVar10,lVar4);
    *param_1 = lVar10;
    param_1[1] = (long)(puVar1 + uVar2 * 6);
    param_1[2] = lVar5 + uVar7 * 0x30;
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_0099c620)(lVar4);
      return;
    }
  }
  else {
    puVar8 = puVar9;
    if (uVar2 != 0) {
      puVar8 = puVar9 + uVar2 * 6;
      do {
        puVar9[1] = 0;
        *puVar9 = 0;
        puVar9[3] = 0;
        puVar9[2] = 0;
        puVar9[5] = 0;
        puVar9[4] = 0;
        puVar9[1] = 0x7b2;
        *(undefined2 *)(puVar9 + 2) = 0x101;
        puVar9[3] = 0x7b2;
        *(undefined2 *)(puVar9 + 4) = 0x101;
        puVar9 = puVar9 + 6;
      } while (puVar9 != puVar8);
    }
    param_1[1] = (long)puVar8;
  }
  return;
}



/* Entry: 0057e044; end: 0057e2ef;  */

char * FUN_0057e044(char *param_1,char *param_2)

{
  qword qVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  char *pcVar5;
  dword *pdVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  char *pcVar11;
  long unaff_x22;
  char *pcVar12;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (puVar3 < *(undefined8 **)(param_1 + 0x10)) {
    if (param_2 != (char *)puVar3) {
      if (puVar3 + -6 < puVar3) {
        puVar3[3] = puVar3[-3];
        puVar3[2] = puVar3[-4];
        puVar3[5] = puVar3[-1];
        puVar3[4] = puVar3[-2];
        puVar3[1] = puVar3[-5];
        *puVar3 = puVar3[-6];
        *(undefined8 **)(param_1 + 8) = puVar3 + 6;
      }
      else {
        *(undefined8 **)(param_1 + 8) = puVar3;
      }
      if ((char *)puVar3 != param_2 + 0x30) {
        _memmove(param_2 + 0x30,param_2);
      }
      param_2[0] = '\0';
      param_2[1] = '\0';
      param_2[2] = '\0';
      param_2[3] = '\0';
      param_2[4] = '\0';
      param_2[5] = '\0';
      param_2[6] = '\0';
      param_2[7] = '\0';
      *(qword *)(param_2 + 8) = 0;
      *(qword *)(param_2 + 0x10) = 0x7b2;
      *(undefined2 *)(param_2 + 0x18) = 0x101;
      *(undefined4 *)(param_2 + 0x1a) = 0;
      *(undefined2 *)(param_2 + 0x1e) = 0;
      *(qword *)(param_2 + 0x20) = 0x7b2;
      *(undefined2 *)(param_2 + 0x28) = 0x101;
      *(undefined4 *)(param_2 + 0x2a) = 0;
      *(undefined2 *)(param_2 + 0x2e) = 0;
      return param_2;
    }
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[2] = 0x7b2;
    *(undefined2 *)(puVar3 + 3) = 0x101;
    puVar3[4] = 0x7b2;
    *(undefined2 *)(puVar3 + 5) = 0x101;
    *(undefined8 **)(param_1 + 8) = puVar3 + 6;
    return param_2;
  }
  lVar10 = *(long *)param_1;
  uVar4 = ((long)puVar3 - lVar10 >> 4) * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar4) {
    func_0x00580948();
LAB_0057e2d4:
    FUN_0040cee8();
    if (unaff_x22 != 0) {
      __ZdlPv();
    }
    __Unwind_Resume();
    pcVar9 = *(char **)param_1;
    pcVar11 = *(undefined1 **)(param_1 + 8) + -(long)pcVar9;
    pcVar5 = param_1;
    if (pcVar11 < (long *)(*(qword *)(param_1 + 0x10) - (long)pcVar9)) {
      if (*(undefined1 **)(param_1 + 8) == pcVar9) {
        pcVar12 = (char *)0x0;
      }
      else {
        if (0x555555555555555 < (ulong)(((long)pcVar11 >> 4) * -0x5555555555555555)) {
          FUN_0040cee8();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x57e3a0);
          (*pcVar2)();
        }
        pcVar12 = pcVar11;
        __Znwm();
      }
      pcVar5 = pcVar12;
      _memcpy(pcVar12,pcVar9,pcVar11);
      *(char **)param_1 = pcVar12;
      *(char **)(param_1 + 8) = pcVar12 + (long)pcVar11;
      *(char **)(param_1 + 0x10) = pcVar12 + (long)pcVar11;
      if (pcVar9 != (char *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_0099c620)(pcVar9);
        return pcVar9;
      }
    }
    return pcVar5;
  }
  lVar7 = (long)*(undefined8 **)(param_1 + 0x10) - lVar10 >> 4;
  uVar8 = lVar7 * 0x5555555555555556;
  if (uVar8 < uVar4 || uVar8 - uVar4 == 0) {
    uVar8 = uVar4;
  }
  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
    uVar8 = 0x555555555555555;
  }
  if (uVar8 == 0) {
    puVar3 = (undefined8 *)0x0;
    pcVar5 = param_2 + -lVar10;
    pdVar6 = (dword *)0x0;
    pcVar9 = (char *)0x0;
    if (pcVar5 != (char *)0x0) goto LAB_0057e244;
  }
  else {
    if (0x555555555555555 < uVar8) goto LAB_0057e2d4;
    puVar3 = (undefined8 *)(uVar8 * 0x30);
    __Znwm();
    pcVar5 = (char *)((long)puVar3 + ((long)param_2 - lVar10));
    pdVar6 = (dword *)(puVar3 + uVar8 * 6);
    pcVar9 = pcVar5;
    if ((long)param_2 - lVar10 != uVar8 * 0x30) goto LAB_0057e244;
  }
  if (pcVar9 < puVar3 || (long)pcVar9 - (long)puVar3 == 0) {
    pcVar5 = segment_command_00000020.segname + 8;
    __Znwm();
    pdVar6 = (dword *)(pcVar5 + 0x30);
    if (puVar3 != (undefined8 *)0x0) {
      __ZdlPv(puVar3);
    }
  }
  else {
    lVar10 = ((long)pcVar9 - (long)puVar3 >> 4) * -0x5555555555555555 + 1;
    pcVar5 = pcVar9 + ((ulong)(lVar10 - (lVar10 >> 0x3f)) >> 1) * -0x30;
  }
LAB_0057e244:
  *(qword *)(pcVar5 + 0x18) = 0;
  *(qword *)(pcVar5 + 0x10) = 0;
  *(undefined8 *)(pcVar5 + 0x28) = 0;
  *(qword *)(pcVar5 + 0x20) = 0;
  *(qword *)(pcVar5 + 8) = 0;
  pcVar5[0] = '\0';
  pcVar5[1] = '\0';
  pcVar5[2] = '\0';
  pcVar5[3] = '\0';
  pcVar5[4] = '\0';
  pcVar5[5] = '\0';
  pcVar5[6] = '\0';
  pcVar5[7] = '\0';
  *(qword *)(pcVar5 + 0x10) = 0x7b2;
  *(undefined2 *)(pcVar5 + 0x18) = 0x101;
  *(qword *)(pcVar5 + 0x20) = 0x7b2;
  *(undefined2 *)(pcVar5 + 0x28) = 0x101;
  _memcpy(pcVar5 + 0x30,param_2,*(qword *)(param_1 + 8) - (long)param_2);
  qVar1 = *(qword *)(param_1 + 8);
  *(char **)(param_1 + 8) = param_2;
  lVar7 = (long)pcVar5 - ((long)param_2 - *(long *)param_1);
  _memcpy(lVar7);
  lVar10 = *(long *)param_1;
  *(long *)param_1 = lVar7;
  *(qword *)(param_1 + 8) = (long)(pcVar5 + 0x30) + (qVar1 - (long)param_2);
  *(dword **)(param_1 + 0x10) = pdVar6;
  if (lVar10 != 0) {
    __ZdlPv();
  }
  return pcVar5;
}



/* Entry: 0057e2f0; end: 0057e3bf;  */

void FUN_0057e2f0(ulong *param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = *param_1;
  uVar3 = param_1[1] - uVar2;
  if (uVar3 < param_1[2] - uVar2) {
    if (param_1[1] == uVar2) {
      uVar4 = 0;
    }
    else {
      if (0x555555555555555 < (ulong)(((long)uVar3 >> 4) * -0x5555555555555555)) {
        FUN_0040cee8();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x57e3a0);
        (*pcVar1)();
      }
      uVar4 = uVar3;
      __Znwm();
    }
    _memcpy(uVar4,uVar2,uVar3);
    *param_1 = uVar4;
    param_1[1] = uVar4 + uVar3;
    param_1[2] = uVar4 + uVar3;
    if (uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_0099c620)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 0057e3c0; end: 0057e4d7;  */

undefined8 FUN_0057e3c0(ulong *param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = ((uint)*(byte *)(param_2 + 0x20) << 0x10 | (uint)*(byte *)(param_2 + 0x21) << 8 |
          (uint)*(byte *)(param_2 + 0x22)) << 8;
  if (-1 < (int)uVar1) {
    *param_1 = (ulong)(uVar1 | *(byte *)(param_2 + 0x23));
    uVar1 = ((uint)*(byte *)(param_2 + 0x24) << 0x10 | (uint)*(byte *)(param_2 + 0x25) << 8 |
            (uint)*(byte *)(param_2 + 0x26)) << 8;
    if (-1 < (int)uVar1) {
      param_1[1] = (ulong)(uVar1 | *(byte *)(param_2 + 0x27));
      uVar1 = ((uint)*(byte *)(param_2 + 0x28) << 0x10 | (uint)*(byte *)(param_2 + 0x29) << 8 |
              (uint)*(byte *)(param_2 + 0x2a)) << 8;
      if (-1 < (int)uVar1) {
        param_1[2] = (ulong)(uVar1 | *(byte *)(param_2 + 0x2b));
        uVar1 = ((uint)*(byte *)(param_2 + 0x1c) << 0x10 | (uint)*(byte *)(param_2 + 0x1d) << 8 |
                (uint)*(byte *)(param_2 + 0x1e)) << 8;
        if (-1 < (int)uVar1) {
          param_1[3] = (ulong)(uVar1 | *(byte *)(param_2 + 0x1f));
          uVar1 = ((uint)*(byte *)(param_2 + 0x18) << 0x10 | (uint)*(byte *)(param_2 + 0x19) << 8 |
                  (uint)*(byte *)(param_2 + 0x1a)) << 8;
          if (-1 < (int)uVar1) {
            param_1[4] = (ulong)(uVar1 | *(byte *)(param_2 + 0x1b));
            uVar1 = ((uint)*(byte *)(param_2 + 0x14) << 0x10 | (uint)*(byte *)(param_2 + 0x15) << 8
                    | (uint)*(byte *)(param_2 + 0x16)) << 8;
            if (-1 < (int)uVar1) {
              param_1[5] = (ulong)(uVar1 | *(byte *)(param_2 + 0x17));
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}



/* Entry: 0057e4d8; end: 0057e557;  */

long * FUN_0057e4d8(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (param_2 < 0) {
      FUN_0052fd94();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x57e53c);
      (*pcVar1)();
    }
    lVar2 = param_2;
    __Znwm();
    *param_1 = lVar2;
    param_1[2] = lVar2 + param_2;
    _bzero();
    param_1[1] = lVar2 + param_2;
  }
  return param_1;
}



/* Entry: 0057e558; end: 0057e7b7;  */

long * FUN_0057e558(long *param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  plVar8 = (long *)*param_1;
  puVar4 = (undefined8 *)param_1[1];
  lVar9 = (long)puVar4 - (long)plVar8;
  bVar2 = param_2 < (ulong)((lVar9 >> 4) * -0x5555555555555555);
  uVar1 = param_2 + (lVar9 >> 4) * 0x5555555555555555;
  if (bVar2 || uVar1 == 0) {
    if (bVar2) {
      param_1[1] = (long)(plVar8 + param_2 * 6);
    }
    return param_1;
  }
  if (uVar1 <= (ulong)((param_1[2] - (long)puVar4 >> 4) * -0x5555555555555555)) {
    puVar6 = puVar4 + uVar1 * 6;
    do {
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar4[2] = 0x7b2;
      *(undefined2 *)(puVar4 + 3) = 0x101;
      puVar4[4] = 0x7b2;
      *(undefined2 *)(puVar4 + 5) = 0x101;
      puVar4 = puVar4 + 6;
    } while (puVar4 != puVar6);
    param_1[1] = (long)puVar6;
    return param_1;
  }
  if (param_2 < 0x555555555555556) {
    lVar5 = param_1[2] - (long)plVar8 >> 4;
    uVar7 = lVar5 * 0x5555555555555556;
    if (uVar7 < param_2 || uVar7 - param_2 == 0) {
      uVar7 = param_2;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar7 = 0x555555555555555;
    }
    if (uVar7 < 0x555555555555556) {
      lVar5 = uVar7 * 0x30;
      __Znwm();
      puVar6 = (undefined8 *)(lVar5 + lVar9);
      puVar4 = puVar6;
      do {
        puVar4[3] = 0;
        puVar4[2] = 0;
        puVar4[5] = 0;
        puVar4[4] = 0;
        puVar4[1] = 0;
        *puVar4 = 0;
        puVar4[2] = 0x7b2;
        *(undefined2 *)(puVar4 + 3) = 0x101;
        puVar4[4] = 0x7b2;
        *(undefined2 *)(puVar4 + 5) = 0x101;
        puVar4 = puVar4 + 6;
      } while (puVar4 != puVar6 + uVar1 * 6);
      plVar10 = (long *)((long)puVar6 - lVar9);
      plVar3 = plVar10;
      _memcpy(plVar10,plVar8,lVar9);
      *param_1 = (long)plVar10;
      param_1[1] = (long)(puVar6 + uVar1 * 6);
      param_1[2] = lVar5 + uVar7 * 0x30;
      if (plVar8 == (long *)0x0) {
        return plVar3;
      }
      goto __ZdlPv;
    }
  }
  else {
    func_0x00580948();
  }
  FUN_0040cee8();
  plVar8 = (long *)*param_1;
  plVar3 = param_1;
  if ((ulong)((param_1[2] - (long)plVar8 >> 4) * -0x5555555555555555) < param_2) {
    if (0x555555555555555 < param_2) {
      FUN_00580934();
      if (param_1[2] < *(long *)(param_2 + 0x10)) {
LAB_0057e7c8:
        return (long *)((long)&MACH_HEADER.magic + 1);
      }
      if (param_1[2] == *(long *)(param_2 + 0x10)) {
        if ((char)param_1[3] < *(char *)(param_2 + 0x18)) goto LAB_0057e7c8;
        if ((char)param_1[3] == *(char *)(param_2 + 0x18)) {
          if (*(char *)((long)param_1 + 0x19) < *(char *)(param_2 + 0x19)) goto LAB_0057e7c8;
          if (*(char *)((long)param_1 + 0x19) == *(char *)(param_2 + 0x19)) {
            if (*(char *)((long)param_1 + 0x1a) < *(char *)(param_2 + 0x1a)) goto LAB_0057e7c8;
            if (*(char *)((long)param_1 + 0x1a) == *(char *)(param_2 + 0x1a)) {
              if (*(char *)((long)param_1 + 0x1b) < *(char *)(param_2 + 0x1b)) goto LAB_0057e7c8;
              if (*(char *)((long)param_1 + 0x1b) == *(char *)(param_2 + 0x1b)) {
                return (long *)(ulong)(*(char *)((long)param_1 + 0x1c) < *(char *)(param_2 + 0x1c));
              }
            }
          }
        }
      }
      return (long *)0x0;
    }
    lVar9 = param_1[1];
    plVar10 = (long *)(param_2 * 0x30);
    __Znwm();
    plVar3 = plVar10;
    _memcpy();
    *param_1 = (long)plVar10;
    param_1[1] = (long)plVar10 + (lVar9 - (long)plVar8);
    param_1[2] = (long)(plVar10 + param_2 * 6);
    if (plVar8 != (long *)0x0) {
__ZdlPv:
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_0099c620)(plVar8);
      return plVar8;
    }
  }
  return plVar3;
}



/* Entry: 0057e7b8; end: 0057e83f;  */

bool FUN_0057e7b8(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x10) < *(long *)(param_2 + 0x10)) {
    return true;
  }
  if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
    if (*(char *)(param_1 + 0x18) < *(char *)(param_2 + 0x18)) {
      return true;
    }
    if (*(char *)(param_1 + 0x18) == *(char *)(param_2 + 0x18)) {
      if (*(char *)(param_1 + 0x19) < *(char *)(param_2 + 0x19)) {
        return true;
      }
      if (*(char *)(param_1 + 0x19) == *(char *)(param_2 + 0x19)) {
        if (*(char *)(param_1 + 0x1a) < *(char *)(param_2 + 0x1a)) {
          return true;
        }
        if (*(char *)(param_1 + 0x1a) == *(char *)(param_2 + 0x1a)) {
          if (*(char *)(param_1 + 0x1b) < *(char *)(param_2 + 0x1b)) {
            return true;
          }
          if (*(char *)(param_1 + 0x1b) == *(char *)(param_2 + 0x1b)) {
            return *(char *)(param_1 + 0x1c) < *(char *)(param_2 + 0x1c);
          }
        }
      }
    }
  }
  return false;
}



/* Entry: 0057e840; end: 0057f1f7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0057e840(undefined ********param_1,undefined ********param_2)

{
  undefined *******pppppppuVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined ********ppppppppuVar5;
  undefined ********ppppppppuVar6;
  long lVar7;
  undefined ******ppppppuVar8;
  char cVar9;
  uint uVar10;
  long *extraout_x8;
  ulong uVar11;
  undefined ********ppppppppuVar12;
  int iVar13;
  byte *pbVar14;
  undefined *******pppppppuVar15;
  long lVar16;
  undefined *******pppppppuVar17;
  undefined ******ppppppuVar18;
  undefined *******pppppppuVar19;
  undefined *******pppppppuVar20;
  long lVar21;
  undefined ********unaff_x21;
  undefined ********unaff_x22;
  undefined ********ppppppppuVar22;
  undefined *******pppppppuStack_158;
  undefined ********ppppppppuStack_150;
  undefined ********ppppppppuStack_148;
  undefined ********ppppppppuStack_140;
  undefined ********ppppppppuStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  ulong uStack_118;
  undefined ********ppppppppuStack_110;
  undefined *******pppppppuStack_108;
  undefined *******pppppppuStack_100;
  undefined *******pppppppuStack_f8;
  undefined *******pppppppuStack_f0;
  undefined ********appppppppuStack_e0 [3];
  undefined ********ppppppppuStack_c8;
  undefined ********ppppppppuStack_c0;
  ulong uStack_b8;
  undefined ********ppppppppuStack_b0;
  undefined ********ppppppppuStack_a8;
  undefined ********ppppppppuStack_a0;
  int iStack_94;
  char cStack_90;
  byte bStack_80;
  byte bStack_7f;
  byte bStack_7e;
  byte bStack_7d;
  byte bStack_7c;
  byte bStack_7b;
  byte bStack_7a;
  byte bStack_79;
  byte bStack_78;
  byte bStack_77;
  byte bStack_76;
  byte bStack_75;
  byte bStack_74;
  byte bStack_73;
  byte bStack_72;
  byte bStack_71;
  byte bStack_70;
  byte bStack_6f;
  byte bStack_6e;
  byte bStack_6d;
  byte bStack_6c;
  byte bStack_6b;
  byte bStack_6a;
  byte bStack_69;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  pppppppuStack_108 = (undefined *******)0x0;
  ppppppppuVar12 = param_2;
  func_0x00576ee0(param_2,&pppppppuStack_108);
  if ((int)ppppppppuVar12 != 0) {
    ppppppppuVar12 = &pppppppuStack_108;
    FUN_0057dce8(param_1);
    ppppppppuVar5 = (undefined ********)((long)&MACH_HEADER.magic + 1);
    goto LAB_0057e964;
  }
  unaff_x21 = (undefined ********)&ppppppppuStack_c8;
  ppppppppuStack_c8 = (undefined ********)&PTR_FUN_00a01f28;
  ppppppppuVar12 = (undefined ********)&ppppppppuStack_c8;
  ppppppppuStack_b0 = unaff_x21;
  (*(code *)PTR_FUN_00b1e658)(&ppppppppuStack_110,param_2);
  if (ppppppppuStack_b0 == unaff_x21) {
    lVar7 = 0x20;
LAB_0057e8ec:
    (**(code **)((long)*ppppppppuStack_b0 + lVar7))();
  }
  else if (ppppppppuStack_b0 != (undefined ********)0x0) {
    lVar7 = 0x28;
    goto LAB_0057e8ec;
  }
  param_2 = ppppppppuStack_110;
  if (ppppppppuStack_110 == (undefined ********)0x0) {
    ppppppppuVar5 = (undefined ********)0x0;
    goto LAB_0057e964;
  }
  ppppppppuVar12 = (undefined ********)&iStack_94;
  ppppppppuVar5 = ppppppppuStack_110;
  (*(code *)(*ppppppppuStack_110)[2])(ppppppppuStack_110,ppppppppuVar12,0x2c);
  cVar9 = cStack_90;
  if (((ppppppppuVar5 == (undefined ********)(segment_command_00000020.segname + 4)) &&
      (unaff_x22 = (undefined ********)0x66695a54, iStack_94 == 0x66695a54)) &&
     (uVar10 = ((uint)bStack_74 << 0x10 | (uint)bStack_73 << 8 | (uint)bStack_72) << 8,
     -1 < (int)uVar10)) {
    ppppppppuStack_c8 = (undefined ********)(ulong)(uVar10 | bStack_71);
    uVar10 = ((uint)bStack_70 << 0x10 | (uint)bStack_6f << 8 | (uint)bStack_6e) << 8;
    if ((int)uVar10 < 0) goto LAB_0057e934;
    unaff_x21 = (undefined ********)(ulong)(uVar10 | bStack_6d);
    uVar10 = ((uint)bStack_6c << 0x10 | (uint)bStack_6b << 8 | (uint)bStack_6a) << 8;
    ppppppppuStack_c0 = unaff_x21;
    if ((int)uVar10 < 0) goto LAB_0057e934;
    uStack_b8 = (ulong)(uVar10 | bStack_69);
    uVar10 = ((uint)bStack_78 << 0x10 | (uint)bStack_77 << 8 | (uint)bStack_76) << 8;
    if ((int)uVar10 < 0) goto LAB_0057e934;
    ppppppppuStack_b0 = (undefined ********)(ulong)(uVar10 | bStack_75);
    uVar10 = ((uint)bStack_7c << 0x10 | (uint)bStack_7b << 8 | (uint)bStack_7a) << 8;
    if ((int)uVar10 < 0) goto LAB_0057e934;
    ppppppppuStack_a8 = (undefined ********)(ulong)(uVar10 | bStack_79);
    uVar10 = ((uint)bStack_80 << 0x10 | (uint)bStack_7f << 8 | (uint)bStack_7e) << 8;
    if ((int)uVar10 < 0) goto LAB_0057e934;
    ppppppppuStack_a0 = (undefined ********)(ulong)(uVar10 | bStack_7d);
    if (cStack_90 != '\0') {
      ppppppppuVar12 =
           (undefined ********)
           ((long)ppppppppuStack_c8 * 5 + (long)unaff_x21 * 6 + uStack_b8 +
            (long)ppppppppuStack_b0 * 8 + (long)ppppppppuStack_a8 + (long)ppppppppuStack_a0);
      ppppppppuVar5 = param_2;
      (*(code *)(*param_2)[3])();
      if ((int)ppppppppuVar5 == 0) {
        ppppppppuVar12 = (undefined ********)&iStack_94;
        ppppppppuVar5 = param_2;
        (*(code *)(*param_2)[2])(param_2,ppppppppuVar12,0x2c);
        if (ppppppppuVar5 == (undefined ********)(segment_command_00000020.segname + 4)) {
          ppppppppuVar5 = (undefined ********)0x0;
          if ((iStack_94 == 0x66695a54) && (cStack_90 != '\0')) {
            ppppppppuVar5 = (undefined ********)&ppppppppuStack_c8;
            ppppppppuVar12 = (undefined ********)&iStack_94;
            FUN_0057e3c0();
            if ((int)ppppppppuVar5 != 0) {
              uVar11 = 8;
              goto LAB_0057eb38;
            }
          }
          goto LAB_0057e938;
        }
      }
      goto LAB_0057e934;
    }
    uVar11 = 4;
LAB_0057eb38:
    unaff_x21 = ppppppppuStack_c0;
    ppppppppuVar22 = ppppppppuStack_c8;
    ppppppppuVar5 = (undefined ********)0x0;
    if ((ppppppppuStack_c0 != (undefined ********)0x0) &&
       (ppppppppuStack_b0 == (undefined ********)0x0)) {
      if (((ppppppppuStack_a8 == (undefined ********)0x0) ||
          (ppppppppuStack_a8 == ppppppppuStack_c0)) &&
         ((ppppppppuStack_a0 == (undefined ********)0x0 || (ppppppppuStack_a0 == ppppppppuStack_c0))
         )) {
        uStack_118 = uStack_b8;
        ppppppppuVar5 =
             (undefined ********)
             ((long)ppppppppuStack_a0 +
             (long)ppppppppuStack_a8 +
             uStack_b8 + (long)ppppppppuStack_c8 * (uVar11 | 1) + (long)ppppppppuStack_c0 * 6);
        FUN_0057e4d8(appppppppuStack_e0,ppppppppuVar5);
        unaff_x22 = appppppppuStack_e0[0];
        ppppppppuVar6 = param_2;
        ppppppppuVar12 = appppppppuStack_e0[0];
        (*(code *)(*param_2)[2])(param_2,appppppppuStack_e0[0],ppppppppuVar5);
        if (ppppppppuVar6 == ppppppppuVar5) {
          FUN_0057dae0(param_1 + 1,(long)ppppppppuVar22 + 2);
          ppppppppuVar12 = ppppppppuVar22;
          FUN_0057e558(param_1 + 1);
          if (ppppppppuVar22 == (undefined ********)0x0) {
            bVar4 = 0;
            goto LAB_0057ecf4;
          }
          pppppppuVar15 = param_1[1];
          uVar10 = (uint)*(byte *)unaff_x22 << 0x10 | (uint)*(byte *)((long)unaff_x22 + 1) << 8;
          if (cVar9 == '\0') {
            ppppppuVar8 = (undefined ******)
                          (long)(int)((uint)*(byte *)((long)unaff_x22 + 3) |
                                     (uVar10 | *(byte *)((long)unaff_x22 + 2)) << 8);
          }
          else {
            ppppppuVar8 = (undefined ******)
                          ((ulong)*(byte *)((long)unaff_x22 + 7) |
                           (ulong)*(byte *)((long)unaff_x22 + 5) << 0x10 |
                          ((ulong)*(byte *)((long)unaff_x22 + 3) << 0x18 |
                           (ulong)(uVar10 | *(byte *)((long)unaff_x22 + 2)) << 0x20 |
                           (ulong)*(byte *)((long)unaff_x22 + 4) << 0x10 |
                          (ulong)*(byte *)((long)unaff_x22 + 6)) << 8);
          }
          *pppppppuVar15 = ppppppuVar8;
          pppppppuVar17 = pppppppuVar15;
          ppppppppuVar5 = ppppppppuVar22;
          do {
            ppppppppuVar5 = (undefined ********)((long)ppppppppuVar5 + -1);
            unaff_x22 = (undefined ********)((long)unaff_x22 + uVar11);
            if (ppppppppuVar5 == (undefined ********)0x0) {
              bVar4 = 0;
              pppppppuVar15 = pppppppuVar15 + 1;
              ppppppppuVar5 = ppppppppuVar22;
              ppppppppuVar6 = unaff_x22;
              goto LAB_0057ecd0;
            }
            uVar10 = (uint)*(byte *)unaff_x22 << 0x10 | (uint)*(byte *)((long)unaff_x22 + 1) << 8;
            if (cVar9 == '\0') {
              ppppppuVar8 = (undefined ******)
                            ((long)(int)((uVar10 | *(byte *)((long)unaff_x22 + 2)) << 8) |
                            (ulong)*(byte *)((long)unaff_x22 + 3));
            }
            else {
              ppppppuVar8 = (undefined ******)
                            ((ulong)*(byte *)((long)unaff_x22 + 7) |
                             (ulong)*(byte *)((long)unaff_x22 + 5) << 0x10 |
                            ((ulong)*(byte *)((long)unaff_x22 + 3) << 0x18 |
                             (ulong)(uVar10 | *(byte *)((long)unaff_x22 + 2)) << 0x20 |
                             (ulong)*(byte *)((long)unaff_x22 + 4) << 0x10 |
                            (ulong)*(byte *)((long)unaff_x22 + 6)) << 8);
            }
            pppppppuVar17[6] = ppppppuVar8;
            ppppppuVar18 = *pppppppuVar17;
            pppppppuVar17 = pppppppuVar17 + 6;
          } while ((long)ppppppuVar18 < (long)ppppppuVar8);
        }
        goto LAB_0057ee7c;
      }
      goto LAB_0057e934;
    }
  }
  else {
LAB_0057e934:
    ppppppppuVar5 = (undefined ********)0x0;
  }
  goto LAB_0057e938;
  while( true ) {
    bVar4 = bVar2 == 0 | bVar4;
    ppppppppuVar5 = (undefined ********)((long)ppppppppuVar5 + -1);
    pppppppuVar15 = pppppppuVar15 + 6;
    ppppppppuVar6 = unaff_x22;
    if (ppppppppuVar5 == (undefined ********)0x0) break;
LAB_0057ecd0:
    unaff_x22 = (undefined ********)((long)ppppppppuVar6 + 1);
    bVar2 = *(byte *)ppppppppuVar6;
    *(byte *)pppppppuVar15 = bVar2;
    if (unaff_x21 <= (undefined ********)(ulong)bVar2) goto LAB_0057ee7c;
  }
LAB_0057ecf4:
  func_0x0057e6fc(param_1 + 4,(long)unaff_x21 + 2);
  ppppppppuVar12 = unaff_x21;
  FUN_0057e008(param_1 + 4);
  pppppppuVar15 = param_1[4];
  pbVar14 = (byte *)((long)pppppppuVar15 + 0x29);
  ppppppppuVar5 = unaff_x21;
  do {
    uVar10 = (*(uint *)unaff_x22 & 0xff00ff00) >> 8 | (*(uint *)unaff_x22 & 0xff00ff) << 8;
    uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
    *(uint *)(pbVar14 + -0x29) = uVar10;
    if (uVar10 - 0x15180 < 0xfffd5d01) goto LAB_0057ee7c;
    pbVar14[-1] = *(char *)((long)unaff_x22 + 4) != '\0';
    bVar2 = *(byte *)((long)unaff_x22 + 5);
    *pbVar14 = bVar2;
    if (uStack_118 <= bVar2) goto LAB_0057ee7c;
    unaff_x22 = (undefined ********)((long)unaff_x22 + 6);
    ppppppppuVar5 = (undefined ********)((long)ppppppppuVar5 + -1);
    pbVar14 = pbVar14 + 0x30;
  } while (ppppppppuVar5 != (undefined ********)0x0);
  *(undefined1 *)(param_1 + 7) = 0;
  if (!(bool)(ppppppppuVar22 == (undefined ********)0x0 | bVar4 ^ 1)) {
    if ((*(char *)(pppppppuVar15 + 5) == '\x01') &&
       (uVar11 = (ulong)*(byte *)(param_1[1] + 1), uVar11 != 0)) {
      pppppppuVar17 = pppppppuVar15 + uVar11 * 6 + 5;
      do {
        iVar13 = (int)uVar11;
        if (*(char *)pppppppuVar17 != '\x01') {
          ppppppppuVar12 = (undefined ********)(uVar11 & 0xff);
          goto joined_r0x0057ee08;
        }
        uVar11 = uVar11 - 1;
        pppppppuVar17 = pppppppuVar17 + -6;
      } while ((uVar11 & 0xff) != 0);
    }
    ppppppppuVar5 = (undefined ********)0x0;
    ppppppppuVar12 = ppppppppuVar5;
    while( true ) {
      iVar13 = (int)ppppppppuVar5;
joined_r0x0057ee08:
      if (unaff_x21 == ppppppppuVar12) goto LAB_0057ee0c;
      if (*(char *)(pppppppuVar15 + (long)ppppppppuVar12 * 6 + 5) != '\x01') break;
      ppppppppuVar5 = (undefined ********)(ulong)(iVar13 + 1);
      ppppppppuVar12 = (undefined ********)((ulong)ppppppppuVar5 & 0xff);
    }
    *(char *)(param_1 + 7) = (char)iVar13;
  }
LAB_0057ee0c:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
            (param_1 + 8,uStack_118 + 10);
  FUN_00460cf4(param_1 + 8,unaff_x22,uStack_118);
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    *(undefined1 *)param_1[0xe] = 0;
    param_1[0xf] = (undefined *******)0x0;
  }
  else {
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)((long)param_1 + 0x87) = 0;
  }
  if (cStack_90 == '\0') {
LAB_0057eef8:
    pppppppuVar15 = (undefined *******)(long)*(char *)((long)param_1 + 0x6f);
    if ((long)pppppppuVar15 < 0) {
      pppppppuVar15 = param_1[0xc];
    }
    if (pppppppuVar15 == (undefined *******)0x0) {
      (*(code *)(*param_2)[4])(&pppppppuStack_100,param_2);
      if (*(char *)((long)param_1 + 0x6f) < '\0') {
        __ZdlPv(param_1[0xb]);
      }
      param_1[0xc] = pppppppuStack_f8;
      param_1[0xb] = (undefined *******)CONCAT71(pppppppuStack_100._1_7_,(byte)pppppppuStack_100);
      param_1[0xd] = pppppppuStack_f0;
    }
    if ((undefined ********)((long)&MACH_HEADER.magic + 1) < ppppppppuStack_c8) {
      pppppppuVar15 = param_1[1] + (long)ppppppppuStack_c8 * 6 + -0xb;
      do {
        if ((uint)*(byte *)(pppppppuVar15 + 6) != (uint)*(byte *)pppppppuVar15) {
          pppppppuVar17 = param_1[4] + (ulong)(uint)*(byte *)(pppppppuVar15 + 6) * 6;
          pppppppuVar19 = param_1[4] + (ulong)(uint)*(byte *)pppppppuVar15 * 6;
          if (((*(int *)pppppppuVar17 != *(int *)pppppppuVar19) ||
              (*(char *)(pppppppuVar17 + 5) != *(char *)(pppppppuVar19 + 5))) ||
             (*(char *)((long)pppppppuVar17 + 0x29) != *(char *)((long)pppppppuVar19 + 0x29)))
          goto LAB_0057efc0;
        }
        ppppppppuStack_c8 = (undefined ********)((long)ppppppppuStack_c8 + -1);
        pppppppuVar15 = pppppppuVar15 + -6;
      } while ((undefined ********)((long)&MACH_HEADER.magic + 1) < ppppppppuStack_c8);
      ppppppppuStack_c8 = (undefined ********)((long)&MACH_HEADER.magic + 1);
    }
LAB_0057efc0:
    FUN_0057e558(param_1 + 1);
    ppppppppuVar12 = (undefined ********)param_1[1];
    if ((ppppppppuVar12 == (undefined ********)param_1[2]) || (-1 < (long)*ppppppppuVar12)) {
      ppppppppuVar5 = param_1 + 1;
      FUN_0057e044();
      *ppppppppuVar5 = (undefined *******)0xf800000000000000;
      *(undefined1 *)(ppppppppuVar5 + 1) = *(undefined1 *)(param_1 + 7);
    }
    ppppppppuVar5 = param_1;
    FUN_0057cfe0();
    if ((int)ppppppppuVar5 != 0) {
      ppppppppuVar12 = (undefined ********)param_1[2];
      if ((long)ppppppppuVar12[-6] < 0) {
        uVar3 = *(undefined1 *)(ppppppppuVar12 + -5);
        ppppppppuVar12 = param_1 + 1;
        FUN_0057e044();
        *ppppppppuVar12 = (undefined *******)0x7fffffff;
        *(undefined1 *)(ppppppppuVar12 + 1) = uVar3;
        ppppppppuVar12 = (undefined ********)param_1[2];
      }
      ppppppppuVar22 = (undefined ********)param_1[1];
      if (ppppppppuVar12 != ppppppppuVar22) {
        unaff_x22 = (undefined ********)0x0;
        lVar7 = 0;
        param_2 = (undefined ********)(param_1[4] + (ulong)*(byte *)(param_1 + 7) * 6);
        do {
          unaff_x21 = (undefined ********)((long)ppppppppuVar22 + (long)unaff_x22);
          FUN_0057db9c(&pppppppuStack_100,param_1,*unaff_x21,param_2);
          pppppppuVar15 =
               (undefined *******)CONCAT71(pppppppuStack_100._1_7_,(byte)pppppppuStack_100);
          pppppppuVar17 = pppppppuStack_f8;
          FUN_0057bce8(pppppppuVar15,pppppppuStack_f8,1);
          unaff_x21[4] = pppppppuVar15;
          unaff_x21[5] = pppppppuVar17;
          param_2 = (undefined ********)(param_1[4] + (ulong)*(byte *)(unaff_x21 + 1) * 6);
          ppppppppuVar12 = param_1;
          FUN_0057db9c(&pppppppuStack_100,param_1,*unaff_x21,param_2);
          unaff_x21[3] = pppppppuStack_f8;
          unaff_x21[2] = (undefined *******)
                         CONCAT71(pppppppuStack_100._1_7_,(byte)pppppppuStack_100);
          ppppppppuVar22 = (undefined ********)param_1[1];
          if (lVar7 != 0) {
            ppppppppuVar5 = (undefined ********)((long)ppppppppuVar22 + (long)unaff_x22 + -0x30);
            ppppppppuVar12 = unaff_x21;
            FUN_0057e7b8();
            if ((int)ppppppppuVar5 == 0) goto LAB_0057ee80;
          }
          lVar7 = lVar7 + 1;
          unaff_x22 = unaff_x22 + 6;
        } while (lVar7 != ((long)param_1[2] - (long)ppppppppuVar22 >> 4) * -0x5555555555555555);
      }
      unaff_x21 = (undefined ********)param_1[5];
      for (param_2 = (undefined ********)param_1[4]; param_2 != unaff_x21; param_2 = param_2 + 6) {
        FUN_0057db9c(&pppppppuStack_100,param_1,0x7fffffffffffffff,param_2);
        param_2[2] = pppppppuStack_f8;
        param_2[1] = (undefined *******)CONCAT71(pppppppuStack_100._1_7_,(byte)pppppppuStack_100);
        ppppppppuVar12 = param_1;
        FUN_0057db9c(&pppppppuStack_100,param_1,0x8000000000000000,param_2);
        param_2[4] = pppppppuStack_f8;
        param_2[3] = (undefined *******)CONCAT71(pppppppuStack_100._1_7_,(byte)pppppppuStack_100);
      }
      FUN_0057e2f0(param_1 + 1);
      ppppppppuVar5 = (undefined ********)((long)&MACH_HEADER.magic + 1);
    }
  }
  else {
    ppppppppuVar12 = &pppppppuStack_100;
    ppppppppuVar5 = param_2;
    (*(code *)(*param_2)[2])(param_2,ppppppppuVar12,1);
    if (ppppppppuVar5 == (undefined ********)((long)&MACH_HEADER.magic + 1) &&
        (byte)pppppppuStack_100 == 10) {
      ppppppppuVar12 = &pppppppuStack_100;
      ppppppppuVar5 = param_2;
      (*(code *)(*param_2)[2])(param_2,ppppppppuVar12,1);
      while( true ) {
        uVar10 = (uint)(byte)pppppppuStack_100;
        if (ppppppppuVar5 != (undefined ********)((long)&MACH_HEADER.magic + 1)) {
          uVar10 = 0xffffffff;
        }
        if (uVar10 == 0xffffffff) goto LAB_0057ee7c;
        if (uVar10 == 10) break;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (param_1 + 0xe,(int)(char)uVar10);
        ppppppppuVar12 = &pppppppuStack_100;
        ppppppppuVar5 = param_2;
        (*(code *)(*param_2)[2])(param_2,ppppppppuVar12,1);
      }
      goto LAB_0057eef8;
    }
LAB_0057ee7c:
    ppppppppuVar5 = (undefined ********)0x0;
  }
LAB_0057ee80:
  if (appppppppuStack_e0[0] != (undefined ********)0x0) {
    __ZdlPv(appppppppuStack_e0[0]);
  }
LAB_0057e938:
  ppppppppuVar22 = ppppppppuStack_110;
  ppppppppuStack_110 = (undefined ********)0x0;
  if (ppppppppuVar22 != (undefined ********)0x0) {
    (*(code *)(*ppppppppuVar22)[1])(ppppppppuVar22);
  }
LAB_0057e964:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (appppppppuStack_e0[0] != (undefined ********)0x0) {
    __ZdlPv();
  }
  ppppppppuVar22 = ppppppppuStack_110;
  ppppppppuStack_110 = (undefined ********)0x0;
  if (ppppppppuVar22 != (undefined ********)0x0) {
    (*(code *)(*ppppppppuVar22)[1])();
    __Unwind_Resume();
    ppppppppuVar22 = ppppppppuStack_b0;
    if (ppppppppuStack_b0 == unaff_x21) {
      (*(code *)(*ppppppppuStack_b0)[4])();
      ppppppppuVar22 = ppppppppuVar5;
      __Unwind_Resume();
    }
    if (ppppppppuVar22 != (undefined ********)0x0) {
      (*(code *)(*ppppppppuVar22)[5])();
      __Unwind_Resume();
    }
  }
  ppppppppuVar22 = ppppppppuVar5;
  __Unwind_Resume();
  pcStack_128 = FUN_0057f1f8;
  lVar7 = 0;
  ppppppppuStack_150 = unaff_x22;
  ppppppppuStack_148 = unaff_x21;
  ppppppppuStack_140 = param_2;
  ppppppppuStack_138 = ppppppppuVar5;
  puStack_130 = &stack0xfffffffffffffff0;
  __ZNSt3__16chrono12system_clock11from_time_tEl();
  lVar7 = SUB168(SEXT816(lVar7) * SEXT816(-0x431bde82d7b634db),8);
  lVar7 = ((lVar7 >> 0x12) - (lVar7 >> 0x3f)) + (long)*ppppppppuVar12;
  pppppppuVar15 = ppppppppuVar22[1];
  if (lVar7 < (long)*pppppppuVar15) {
    pppppppuVar17 = ppppppppuVar22[4] + (ulong)*(byte *)(ppppppppuVar22 + 7) * 6;
    ppppppuVar8 = (undefined ******)0x7b2;
    cVar9 = '\x01';
    FUN_005700e8(0x7b2,1,1,0,lVar7 / 0x3c,lVar7 % 0x3c);
    uVar11 = (ulong)cVar9;
  }
  else {
    lVar21 = (long)ppppppppuVar22[2] - (long)pppppppuVar15;
    lVar16 = *(long *)((long)pppppppuVar15 + lVar21 + -0x30);
    if (lVar7 < lVar16) {
      pppppppuVar17 = (undefined *******)((lVar21 >> 4) * -0x5555555555555555);
      pppppppuVar19 = ppppppppuVar22[0x13];
      if (((pppppppuVar19 == (undefined *******)0x0) || (pppppppuVar17 <= pppppppuVar19)) ||
         ((pppppppuVar19 = pppppppuVar15 + (long)pppppppuVar19 * 6, lVar7 < (long)pppppppuVar19[-6]
          || ((long)*pppppppuVar19 <= lVar7)))) {
        pppppppuVar19 = pppppppuVar15;
        if (ppppppppuVar22[2] != pppppppuVar15) {
          do {
            pppppppuVar20 = (undefined *******)((ulong)pppppppuVar17 >> 1);
            pppppppuVar1 = (undefined *******)((long)pppppppuVar17 + ~(ulong)pppppppuVar20);
            pppppppuVar17 = pppppppuVar20;
            if ((long)pppppppuVar19[(long)pppppppuVar20 * 6] <= lVar7) {
              pppppppuVar17 = pppppppuVar1;
              pppppppuVar19 = pppppppuVar19 + (long)pppppppuVar20 * 6 + 6;
            }
          } while (pppppppuVar17 != (undefined *******)0x0);
        }
        ppppppppuVar22[0x13] =
             (undefined *******)
             (((long)pppppppuVar19 - (long)pppppppuVar15 >> 4) * -0x5555555555555555);
        pppppppuVar17 = ppppppppuVar22[4] + (ulong)*(byte *)(pppppppuVar19 + -5) * 6;
        ppppppuVar8 = pppppppuVar19[-4];
        uVar11 = (ulong)(char)pppppppuVar19[-3];
      }
      else {
        pppppppuVar17 = ppppppppuVar22[4] + (ulong)*(byte *)(pppppppuVar19 + -5) * 6;
        ppppppuVar8 = pppppppuVar19[-4];
        uVar11 = (ulong)(char)pppppppuVar19[-3];
      }
    }
    else {
      if (*(char *)(ppppppppuVar22 + 0x11) == '\x01') {
        lVar7 = (lVar7 - lVar16) / 0x2f0605980 + 1;
        pppppppuStack_158 = *ppppppppuVar12 + lVar7 * -0x5e0c0b30;
        (*(code *)(*ppppppppuVar22)[2])(extraout_x8,ppppppppuVar22,&pppppppuStack_158);
        lVar7 = *extraout_x8 + lVar7 * 400;
        uVar11 = (ulong)(char)extraout_x8[1];
        FUN_005700e8(lVar7,uVar11,(long)*(char *)((long)extraout_x8 + 9),
                     (long)*(char *)((long)extraout_x8 + 10),
                     (long)*(char *)((long)extraout_x8 + 0xb),
                     (long)*(char *)((long)extraout_x8 + 0xc));
        *extraout_x8 = lVar7;
        extraout_x8[1] = uVar11 & 0xffffffffff;
        return;
      }
      pppppppuVar17 = ppppppppuVar22[4] + (ulong)*(byte *)((long)pppppppuVar15 + lVar21 + -0x28) * 6
      ;
      ppppppuVar8 = *(undefined *******)((long)pppppppuVar15 + lVar21 + -0x20);
      uVar11 = (ulong)(char)*(undefined8 *)((long)pppppppuVar15 + lVar21 + -0x18);
    }
  }
  FUN_005700e8();
  *extraout_x8 = (long)ppppppuVar8;
  extraout_x8[1] = uVar11 & 0xffffffffff;
  *(undefined4 *)(extraout_x8 + 2) = *(undefined4 *)pppppppuVar17;
  *(undefined1 *)((long)extraout_x8 + 0x14) = *(undefined1 *)(pppppppuVar17 + 5);
  ppppppppuVar12 = ppppppppuVar22 + 8;
  if (*(char *)((long)ppppppppuVar22 + 0x57) < '\0') {
    ppppppppuVar12 = (undefined ********)*ppppppppuVar12;
  }
  extraout_x8[3] = (long)ppppppppuVar12 + (ulong)*(byte *)((long)pppppppuVar17 + 0x29);
  return;
}



/* Entry: 0057f1f8; end: 0057f573;  */

void FUN_0057f1f8(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  long lStack_38;
  
  lVar1 = 0;
  __ZNSt3__16chrono12system_clock11from_time_tEl();
  lVar1 = SUB168(SEXT816(lVar1) * SEXT816(-0x431bde82d7b634db),8);
  lVar1 = ((lVar1 >> 0x12) - (lVar1 >> 0x3f)) + *param_3;
  plVar5 = (long *)param_2[1];
  if (lVar1 < *plVar5) {
    puVar10 = (undefined4 *)(param_2[4] + (ulong)*(byte *)(param_2 + 7) * 0x30);
    lVar2 = 0x7b2;
    cVar3 = '\x01';
    FUN_005700e8(0x7b2,1,1,0,lVar1 / 0x3c,lVar1 % 0x3c);
    uVar4 = (ulong)cVar3;
  }
  else {
    lVar9 = param_2[2] - (long)plVar5;
    lVar2 = *(long *)((long)plVar5 + lVar9 + -0x30);
    if (lVar1 < lVar2) {
      uVar4 = (lVar9 >> 4) * -0x5555555555555555;
      uVar7 = param_2[0x13];
      if ((((uVar7 == 0) || (uVar4 <= uVar7)) || (plVar6 = plVar5 + uVar7 * 6, lVar1 < plVar6[-6]))
         || (*plVar6 <= lVar1)) {
        plVar6 = plVar5;
        if ((long *)param_2[2] != plVar5) {
          do {
            uVar8 = uVar4 >> 1;
            uVar7 = uVar4 + ~uVar8;
            uVar4 = uVar8;
            if (plVar6[uVar8 * 6] <= lVar1) {
              uVar4 = uVar7;
              plVar6 = plVar6 + uVar8 * 6 + 6;
            }
          } while (uVar4 != 0);
        }
        param_2[0x13] = ((long)plVar6 - (long)plVar5 >> 4) * -0x5555555555555555;
        puVar10 = (undefined4 *)(param_2[4] + (ulong)*(byte *)(plVar6 + -5) * 0x30);
        lVar2 = plVar6[-4];
        uVar4 = (ulong)(char)plVar6[-3];
      }
      else {
        puVar10 = (undefined4 *)(param_2[4] + (ulong)*(byte *)(plVar6 + -5) * 0x30);
        lVar2 = plVar6[-4];
        uVar4 = (ulong)(char)plVar6[-3];
      }
    }
    else {
      if ((char)param_2[0x11] == '\x01') {
        lVar1 = (lVar1 - lVar2) / 0x2f0605980 + 1;
        lStack_38 = *param_3 + lVar1 * -0x2f0605980;
        (**(code **)(*param_2 + 0x10))(param_1,param_2,&lStack_38);
        lVar1 = *param_1 + lVar1 * 400;
        uVar4 = (ulong)(char)param_1[1];
        FUN_005700e8(lVar1,uVar4,(long)*(char *)((long)param_1 + 9),
                     (long)*(char *)((long)param_1 + 10),(long)*(char *)((long)param_1 + 0xb),
                     (long)*(char *)((long)param_1 + 0xc));
        *param_1 = lVar1;
        param_1[1] = uVar4 & 0xffffffffff;
        return;
      }
      puVar10 = (undefined4 *)(param_2[4] + (ulong)*(byte *)((long)plVar5 + lVar9 + -0x28) * 0x30);
      lVar2 = *(long *)((long)plVar5 + lVar9 + -0x20);
      uVar4 = (ulong)(char)*(undefined8 *)((long)plVar5 + lVar9 + -0x18);
    }
  }
  FUN_005700e8();
  *param_1 = lVar2;
  param_1[1] = uVar4 & 0xffffffffff;
  *(undefined4 *)(param_1 + 2) = *puVar10;
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)(puVar10 + 10);
  plVar5 = param_2 + 8;
  if (*(char *)((long)param_2 + 0x57) < '\0') {
    plVar5 = (long *)*plVar5;
  }
  param_1[3] = (long)plVar5 + (ulong)*(byte *)((long)puVar10 + 0x29);
  return;
}



/* Entry: 0057f574; end: 0057ff2b;  */

void FUN_0057f574(undefined4 *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  
  plVar7 = (long *)param_2[1];
  plVar1 = (long *)param_2[2];
  lVar11 = *param_3;
  if ((plVar7[2] <= lVar11) &&
     ((lVar11 != plVar7[2] ||
      (((char)plVar7[3] <= (char)param_3[1] &&
       (((char)param_3[1] != (char)plVar7[3] ||
        ((*(char *)((long)plVar7 + 0x19) <= *(char *)((long)param_3 + 9) &&
         ((*(char *)((long)param_3 + 9) != *(char *)((long)plVar7 + 0x19) ||
          ((*(char *)((long)plVar7 + 0x1a) <= *(char *)((long)param_3 + 10) &&
           ((*(char *)((long)param_3 + 10) != *(char *)((long)plVar7 + 0x1a) ||
            ((*(char *)((long)plVar7 + 0x1b) <= *(char *)((long)param_3 + 0xb) &&
             ((*(char *)((long)param_3 + 0xb) != *(char *)((long)plVar7 + 0x1b) ||
              (*(char *)((long)plVar7 + 0x1c) <= *(char *)((long)param_3 + 0xc)))))))))))))))))))))
  {
    if ((lVar11 < plVar1[-4]) ||
       ((plVar6 = plVar1, lVar11 == plVar1[-4] &&
        (((int)(char)param_3[1] < (int)(uint)*(byte *)(plVar1 + -3) ||
         (((int)(char)param_3[1] == (uint)*(byte *)(plVar1 + -3) &&
          (((int)*(char *)((long)param_3 + 9) < (int)(uint)*(byte *)((long)plVar1 + -0x17) ||
           (((int)*(char *)((long)param_3 + 9) == (uint)*(byte *)((long)plVar1 + -0x17) &&
            (((int)*(char *)((long)param_3 + 10) < (int)(uint)*(byte *)((long)plVar1 + -0x16) ||
             (((int)*(char *)((long)param_3 + 10) == (uint)*(byte *)((long)plVar1 + -0x16) &&
              (((int)*(char *)((long)param_3 + 0xb) < (int)(uint)*(byte *)((long)plVar1 + -0x15) ||
               (((int)*(char *)((long)param_3 + 0xb) == (uint)*(byte *)((long)plVar1 + -0x15) &&
                ((int)*(char *)((long)param_3 + 0xc) < (int)(uint)*(byte *)((long)plVar1 + -0x14))))
               ))))))))))))))))) {
      uVar9 = ((long)plVar1 - (long)plVar7 >> 4) * -0x5555555555555555;
      uVar10 = param_2[0x14];
      if ((uVar10 != 0) && (uVar10 < uVar9)) {
        plVar6 = plVar7 + uVar10 * 6;
        if ((plVar6[-4] <= lVar11) &&
           (((lVar11 != plVar6[-4] ||
             (((int)(uint)*(byte *)(plVar6 + -3) <= (int)(char)param_3[1] &&
              (((int)(char)param_3[1] != (uint)*(byte *)(plVar6 + -3) ||
               (((int)(uint)*(byte *)((long)plVar6 + -0x17) <= (int)*(char *)((long)param_3 + 9) &&
                (((int)*(char *)((long)param_3 + 9) != (uint)*(byte *)((long)plVar6 + -0x17) ||
                 (((int)(uint)*(byte *)((long)plVar6 + -0x16) <= (int)*(char *)((long)param_3 + 10)
                  && (((int)*(char *)((long)param_3 + 10) != (uint)*(byte *)((long)plVar6 + -0x16)
                      || (((int)(uint)*(byte *)((long)plVar6 + -0x15) <=
                           (int)*(char *)((long)param_3 + 0xb) &&
                          (((int)*(char *)((long)param_3 + 0xb) !=
                            (uint)*(byte *)((long)plVar6 + -0x15) ||
                           ((int)(uint)*(byte *)((long)plVar6 + -0x14) <=
                            (int)*(char *)((long)param_3 + 0xc))))))))))))))))))) &&
            ((lVar11 < plVar6[2] ||
             ((lVar11 == plVar6[2] &&
              (((char)param_3[1] < (char)plVar6[3] ||
               (((char)param_3[1] == (char)plVar6[3] &&
                ((*(char *)((long)param_3 + 9) < *(char *)((long)plVar6 + 0x19) ||
                 ((*(char *)((long)param_3 + 9) == *(char *)((long)plVar6 + 0x19) &&
                  ((*(char *)((long)param_3 + 10) < *(char *)((long)plVar6 + 0x1a) ||
                   ((*(char *)((long)param_3 + 10) == *(char *)((long)plVar6 + 0x1a) &&
                    ((*(char *)((long)param_3 + 0xb) < *(char *)((long)plVar6 + 0x1b) ||
                     ((*(char *)((long)param_3 + 0xb) == *(char *)((long)plVar6 + 0x1b) &&
                      (*(char *)((long)param_3 + 0xc) < *(char *)((long)plVar6 + 0x1c)))))))))))))))
               )))))))))) goto LAB_0057f7a4;
      }
      plVar6 = plVar7;
      if (plVar1 != plVar7) {
        do {
          uVar10 = uVar9 >> 1;
          if ((plVar6[uVar10 * 6 + 2] <= lVar11) &&
             ((lVar11 != plVar6[uVar10 * 6 + 2] ||
              (((char)plVar6[uVar10 * 6 + 3] <= (char)param_3[1] &&
               (((char)param_3[1] != (char)plVar6[uVar10 * 6 + 3] ||
                ((cVar2 = *(char *)((long)plVar6 + uVar10 * 0x30 + 0x19),
                 cVar2 <= *(char *)((long)param_3 + 9) &&
                 ((*(char *)((long)param_3 + 9) != cVar2 ||
                  ((cVar2 = *(char *)((long)plVar6 + uVar10 * 0x30 + 0x1a),
                   cVar2 <= *(char *)((long)param_3 + 10) &&
                   ((*(char *)((long)param_3 + 10) != cVar2 ||
                    ((cVar2 = *(char *)((long)plVar6 + uVar10 * 0x30 + 0x1b),
                     cVar2 <= *(char *)((long)param_3 + 0xb) &&
                     ((*(char *)((long)param_3 + 0xb) != cVar2 ||
                      (*(char *)((long)plVar6 + uVar10 * 0x30 + 0x1c) <=
                       *(char *)((long)param_3 + 0xc))))))))))))))))))))) {
            plVar6 = plVar6 + uVar10 * 6 + 6;
            uVar10 = uVar9 + ~uVar10;
          }
          uVar9 = uVar10;
        } while (uVar10 != 0);
      }
      param_2[0x14] = ((long)plVar6 - (long)plVar7 >> 4) * -0x5555555555555555;
    }
LAB_0057f7a4:
    if (plVar6 != plVar7) {
      if (plVar6 == plVar1) {
        lVar11 = *param_3;
        if ((plVar6[-2] < lVar11) ||
           ((plVar6[-2] == lVar11 &&
            (((int)(uint)*(byte *)(plVar6 + -1) < (int)(char)param_3[1] ||
             (((uint)*(byte *)(plVar6 + -1) == (int)(char)param_3[1] &&
              (((int)(uint)*(byte *)((long)plVar6 + -7) < (int)*(char *)((long)param_3 + 9) ||
               (((uint)*(byte *)((long)plVar6 + -7) == (int)*(char *)((long)param_3 + 9) &&
                (((int)(uint)*(byte *)((long)plVar6 + -6) < (int)*(char *)((long)param_3 + 10) ||
                 (((uint)*(byte *)((long)plVar6 + -6) == (int)*(char *)((long)param_3 + 10) &&
                  (((int)(uint)*(byte *)((long)plVar6 + -5) < (int)*(char *)((long)param_3 + 0xb) ||
                   (((uint)*(byte *)((long)plVar6 + -5) == (int)*(char *)((long)param_3 + 0xb) &&
                    ((int)(uint)*(byte *)((long)plVar6 + -4) < (int)*(char *)((long)param_3 + 0xc)))
                   )))))))))))))))))) {
          if (((char)param_2[0x11] == '\x01') && (param_2[0x12] < lVar11)) {
            lVar4 = lVar11 + ~param_2[0x12];
            lVar13 = lVar4 / 400 + 1;
            FUN_005700e8(lVar11 + lVar13 * -400,(long)(char)param_3[1],
                         (long)*(char *)((long)param_3 + 9),(long)*(char *)((long)param_3 + 10),
                         (long)*(char *)((long)param_3 + 0xb),(long)*(char *)((long)param_3 + 0xc));
            (**(code **)(*param_2 + 0x18))(param_1,param_2,&stack0xffffffffffffffa0);
            if (lVar4 < 0x440d117690) {
              uVar9 = lVar13 * 0x2f0605980;
              uVar10 = uVar9 ^ 0x7fffffffffffffff;
              uVar14 = *(long *)(param_1 + 2) + uVar9;
              uVar15 = *(long *)(param_1 + 4) + uVar9;
              *(ulong *)(param_1 + 4) =
                   uVar15 ^ (uVar15 ^ 0x7ff8000000000000) &
                            -(ulong)((long)uVar10 < *(long *)(param_1 + 4));
              *(ulong *)(param_1 + 2) =
                   uVar14 ^ (uVar14 ^ 0x7ff8000000000000) &
                            -(ulong)((long)uVar10 < *(long *)(param_1 + 2));
              lVar11 = 0x7fffffffffffffff;
              if (*(long *)(param_1 + 6) <= (long)uVar10) {
                lVar11 = *(long *)(param_1 + 6) + uVar9;
              }
              *(long *)(param_1 + 6) = lVar11;
              return;
            }
          }
          else {
            lVar13 = param_2[4] + (ulong)*(byte *)(plVar6 + -5) * 0x30;
            if ((lVar11 <= *(long *)(lVar13 + 8)) &&
               ((*(long *)(lVar13 + 8) != lVar11 ||
                (((char)param_3[1] <= *(char *)(lVar13 + 0x10) &&
                 ((*(char *)(lVar13 + 0x10) != (char)param_3[1] ||
                  ((*(char *)((long)param_3 + 9) <= *(char *)(lVar13 + 0x11) &&
                   ((*(char *)(lVar13 + 0x11) != *(char *)((long)param_3 + 9) ||
                    ((*(char *)((long)param_3 + 10) <= *(char *)(lVar13 + 0x12) &&
                     ((*(char *)(lVar13 + 0x12) != *(char *)((long)param_3 + 10) ||
                      ((*(char *)((long)param_3 + 0xb) <= *(char *)(lVar13 + 0x13) &&
                       ((*(char *)(lVar13 + 0x13) != *(char *)((long)param_3 + 0xb) ||
                        (*(char *)((long)param_3 + 0xc) <= *(char *)(lVar13 + 0x14))))))))))))))))))
                ))) {
              lVar5 = plVar6[-6];
              lVar12 = param_3[1];
              lVar13 = plVar6[-3];
              func_0x0057bb14(lVar11,(int)(char)lVar12,(lVar12 << 0x30) >> 0x38,plVar6[-4],
                              (int)(char)lVar13,(lVar13 << 0x30) >> 0x38);
              lVar4 = 0;
              __ZNSt3__16chrono12system_clock11from_time_tEl();
              *param_1 = 0;
              lVar11 = lVar4 / 1000000 + lVar5 +
                       (long)(((int)((ulong)lVar12 >> 8) >> 0x18) -
                             ((int)((ulong)lVar13 >> 8) >> 0x18)) +
                       ((lVar11 * 0x18 +
                        (long)((((int)lVar12 << 8) >> 0x18) - (((int)lVar13 << 8) >> 0x18))) * 0x3c
                       + (long)(((int)lVar12 >> 0x18) - ((int)lVar13 >> 0x18))) * 0x3c;
              *(long *)(param_1 + 4) = lVar11;
              *(long *)(param_1 + 6) = lVar11;
              *(long *)(param_1 + 2) = lVar11;
              return;
            }
            *param_1 = 0;
          }
          *(undefined8 *)(param_1 + 6) = 0x7fffffffffffffff;
          *(undefined8 *)(param_1 + 4) = 0x7ff8000000000000;
          *(undefined8 *)(param_1 + 2) = 0x7ff8000000000000;
          return;
        }
LAB_0057fb54:
        plVar7 = plVar6 + -6;
        *param_1 = 2;
        lVar12 = *plVar7;
        lVar11 = plVar6[-2];
        lVar13 = plVar6[-1];
        lVar4 = param_3[1];
        func_0x0057bb14(lVar11,(int)(char)lVar13,(lVar13 << 0x30) >> 0x38,*param_3,(int)(char)lVar4,
                        (lVar4 << 0x30) >> 0x38);
        lVar5 = 0;
        __ZNSt3__16chrono12system_clock11from_time_tEl();
        *(long *)(param_1 + 2) =
             lVar5 / 1000000 + lVar12 +
             ~(((lVar11 * 0x18 + (long)((((int)lVar13 << 8) >> 0x18) - (((int)lVar4 << 8) >> 0x18)))
                * 0x3c + (long)(((int)lVar13 >> 0x18) - ((int)lVar4 >> 0x18))) * 0x3c +
              (long)(((int)((ulong)lVar13 >> 8) >> 0x18) - ((int)((ulong)lVar4 >> 8) >> 0x18)));
        lVar13 = *plVar7;
        lVar11 = 0;
        __ZNSt3__16chrono12system_clock11from_time_tEl();
        *(long *)(param_1 + 4) = lVar11 / 1000000 + lVar13;
        lVar12 = *plVar7;
        lVar11 = *param_3;
        lVar13 = param_3[1];
        lVar4 = plVar6[-3];
        func_0x0057bb14(lVar11,(int)(char)lVar13,(lVar13 << 0x30) >> 0x38,plVar6[-4],
                        (int)(char)lVar4,(lVar4 << 0x30) >> 0x38);
        lVar5 = 0;
        __ZNSt3__16chrono12system_clock11from_time_tEl();
        *(long *)(param_1 + 6) =
             lVar5 / 1000000 + lVar12 +
             (long)(((int)((ulong)lVar13 >> 8) >> 0x18) - ((int)((ulong)lVar4 >> 8) >> 0x18)) +
             ((lVar11 * 0x18 + (long)((((int)lVar13 << 8) >> 0x18) - (((int)lVar4 << 8) >> 0x18))) *
              0x3c + (long)(((int)lVar13 >> 0x18) - ((int)lVar4 >> 0x18))) * 0x3c;
        return;
      }
      lVar11 = *param_3;
      plVar7 = plVar6;
      if ((lVar11 <= plVar6[4]) &&
         ((plVar6[4] != lVar11 ||
          (((char)param_3[1] <= (char)plVar6[5] &&
           (((char)plVar6[5] != (char)param_3[1] ||
            ((*(char *)((long)param_3 + 9) <= *(char *)((long)plVar6 + 0x29) &&
             ((*(char *)((long)plVar6 + 0x29) != *(char *)((long)param_3 + 9) ||
              ((*(char *)((long)param_3 + 10) <= *(char *)((long)plVar6 + 0x2a) &&
               ((*(char *)((long)plVar6 + 0x2a) != *(char *)((long)param_3 + 10) ||
                ((*(char *)((long)param_3 + 0xb) <= *(char *)((long)plVar6 + 0x2b) &&
                 ((*(char *)((long)plVar6 + 0x2b) != *(char *)((long)param_3 + 0xb) ||
                  (*(char *)((long)param_3 + 0xc) <= *(char *)((long)plVar6 + 0x2c))))))))))))))))))
          ))) {
        if ((plVar6[-2] < lVar11) ||
           ((plVar6[-2] == lVar11 &&
            (((int)(uint)*(byte *)(plVar6 + -1) < (int)(char)param_3[1] ||
             (((uint)*(byte *)(plVar6 + -1) == (int)(char)param_3[1] &&
              (((int)(uint)*(byte *)((long)plVar6 + -7) < (int)*(char *)((long)param_3 + 9) ||
               (((uint)*(byte *)((long)plVar6 + -7) == (int)*(char *)((long)param_3 + 9) &&
                (((int)(uint)*(byte *)((long)plVar6 + -6) < (int)*(char *)((long)param_3 + 10) ||
                 (((uint)*(byte *)((long)plVar6 + -6) == (int)*(char *)((long)param_3 + 10) &&
                  (((int)(uint)*(byte *)((long)plVar6 + -5) < (int)*(char *)((long)param_3 + 0xb) ||
                   (((uint)*(byte *)((long)plVar6 + -5) == (int)*(char *)((long)param_3 + 0xb) &&
                    ((int)(uint)*(byte *)((long)plVar6 + -4) < (int)*(char *)((long)param_3 + 0xc)))
                   )))))))))))))))))) {
          lVar5 = plVar6[-6];
          lVar12 = param_3[1];
          lVar13 = plVar6[-3];
          func_0x0057bb14(lVar11,(int)(char)lVar12,(lVar12 << 0x30) >> 0x38,plVar6[-4],
                          (int)(char)lVar13,(lVar13 << 0x30) >> 0x38);
          lVar4 = 0;
          __ZNSt3__16chrono12system_clock11from_time_tEl();
          *param_1 = 0;
          lVar11 = lVar4 / 1000000 + lVar5 +
                   (long)(((int)((ulong)lVar12 >> 8) >> 0x18) - ((int)((ulong)lVar13 >> 8) >> 0x18))
                   + ((lVar11 * 0x18 +
                      (long)((((int)lVar12 << 8) >> 0x18) - (((int)lVar13 << 8) >> 0x18))) * 0x3c +
                     (long)(((int)lVar12 >> 0x18) - ((int)lVar13 >> 0x18))) * 0x3c;
          *(long *)(param_1 + 4) = lVar11;
          *(long *)(param_1 + 6) = lVar11;
          *(long *)(param_1 + 2) = lVar11;
          return;
        }
        goto LAB_0057fb54;
      }
      goto LAB_0057f7e4;
    }
    lVar11 = *param_3;
  }
  if ((lVar11 <= plVar7[4]) &&
     ((plVar7[4] != lVar11 ||
      (((char)param_3[1] <= (char)plVar7[5] &&
       (((char)plVar7[5] != (char)param_3[1] ||
        ((*(char *)((long)param_3 + 9) <= *(char *)((long)plVar7 + 0x29) &&
         ((*(char *)((long)plVar7 + 0x29) != *(char *)((long)param_3 + 9) ||
          ((*(char *)((long)param_3 + 10) <= *(char *)((long)plVar7 + 0x2a) &&
           ((*(char *)((long)plVar7 + 0x2a) != *(char *)((long)param_3 + 10) ||
            ((*(char *)((long)param_3 + 0xb) <= *(char *)((long)plVar7 + 0x2b) &&
             ((*(char *)((long)plVar7 + 0x2b) != *(char *)((long)param_3 + 0xb) ||
              (*(char *)((long)param_3 + 0xc) <= *(char *)((long)plVar7 + 0x2c)))))))))))))))))))))
  {
    piVar8 = (int *)(param_2[4] + (ulong)*(byte *)(param_2 + 7) * 0x30);
    if ((lVar11 < *(long *)(piVar8 + 6)) ||
       ((lVar11 == *(long *)(piVar8 + 6) &&
        (((char)param_3[1] < (char)piVar8[8] ||
         (((char)param_3[1] == (char)piVar8[8] &&
          ((*(char *)((long)param_3 + 9) < *(char *)((long)piVar8 + 0x21) ||
           ((*(char *)((long)param_3 + 9) == *(char *)((long)piVar8 + 0x21) &&
            ((*(char *)((long)param_3 + 10) < *(char *)((long)piVar8 + 0x22) ||
             ((*(char *)((long)param_3 + 10) == *(char *)((long)piVar8 + 0x22) &&
              ((*(char *)((long)param_3 + 0xb) < *(char *)((long)piVar8 + 0x23) ||
               ((*(char *)((long)param_3 + 0xb) == *(char *)((long)piVar8 + 0x23) &&
                (*(char *)((long)param_3 + 0xc) < (char)piVar8[9])))))))))))))))))))) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 6) = 0x8000000000000000;
      *(undefined8 *)(param_1 + 4) = 0x8000000000000000;
      *(undefined8 *)(param_1 + 2) = 0x8000000000000000;
    }
    else {
      lVar5 = param_3[1];
      uVar3 = 0x7b2;
      lVar4 = 1;
      FUN_005700e8(0x7b2,1,1,0,(long)(*piVar8 / 0x3c),(long)(*piVar8 % 0x3c));
      func_0x0057bb14(lVar11,(int)(char)lVar5,(lVar5 << 0x30) >> 0x38,uVar3,(int)(char)lVar4,
                      (lVar4 << 0x30) >> 0x38);
      lVar13 = 0;
      __ZNSt3__16chrono12system_clock11from_time_tEl();
      *param_1 = 0;
      lVar11 = lVar13 / 1000000 +
               (long)(((int)((ulong)lVar5 >> 8) >> 0x18) - ((int)((ulong)lVar4 >> 8) >> 0x18)) +
               ((lVar11 * 0x18 + (long)((((int)lVar5 << 8) >> 0x18) - (((int)lVar4 << 8) >> 0x18)))
                * 0x3c + (long)(((int)lVar5 >> 0x18) - ((int)lVar4 >> 0x18))) * 0x3c;
      *(long *)(param_1 + 4) = lVar11;
      *(long *)(param_1 + 6) = lVar11;
      *(long *)(param_1 + 2) = lVar11;
    }
    return;
  }
LAB_0057f7e4:
  *param_1 = 1;
  lVar12 = *plVar7;
  lVar11 = *param_3;
  lVar13 = param_3[1];
  lVar4 = plVar7[5];
  func_0x0057bb14(lVar11,(int)(char)lVar13,(lVar13 << 0x30) >> 0x38,plVar7[4],(int)(char)lVar4,
                  (lVar4 << 0x30) >> 0x38);
  lVar5 = 0;
  __ZNSt3__16chrono12system_clock11from_time_tEl();
  *(long *)(param_1 + 2) =
       lVar12 + lVar5 / 1000000 +
       (long)(((int)((ulong)lVar13 >> 8) >> 0x18) - ((int)((ulong)lVar4 >> 8) >> 0x18)) +
       ((lVar11 * 0x18 + (long)((((int)lVar13 << 8) >> 0x18) - (((int)lVar4 << 8) >> 0x18))) * 0x3c
       + (long)(((int)lVar13 >> 0x18) - ((int)lVar4 >> 0x18))) * 0x3c + -1;
  lVar13 = *plVar7;
  lVar11 = 0;
  __ZNSt3__16chrono12system_clock11from_time_tEl();
  *(long *)(param_1 + 4) = lVar11 / 1000000 + lVar13;
  lVar12 = *plVar7;
  lVar11 = plVar7[2];
  lVar13 = plVar7[3];
  lVar4 = param_3[1];
  func_0x0057bb14(lVar11,(int)(char)lVar13,(lVar13 << 0x30) >> 0x38,*param_3,(int)(char)lVar4,
                  (lVar4 << 0x30) >> 0x38);
  lVar5 = 0;
  __ZNSt3__16chrono12system_clock11from_time_tEl();
  *(long *)(param_1 + 6) =
       lVar5 / 1000000 + lVar12 +
       (long)(((int)((ulong)lVar4 >> 8) >> 0x18) - ((int)((ulong)lVar13 >> 8) >> 0x18)) +
       ((lVar11 * 0x18 + (long)((((int)lVar13 << 8) >> 0x18) - (((int)lVar4 << 8) >> 0x18))) * 0x3c
       + (long)(((int)lVar13 >> 0x18) - ((int)lVar4 >> 0x18))) * -0x3c;
  return;
}



/* Entry: 0057ff2c; end: 00580223;  */

void FUN_0057ff2c(undefined4 *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = 1;
  lVar4 = *param_2;
  lVar3 = *param_3;
  lVar5 = param_3[1];
  lVar1 = param_2[5];
  func_0x0057bb14(lVar3,(int)(char)lVar5,(lVar5 << 0x30) >> 0x38,param_2[4],(int)(char)lVar1,
                  (lVar1 << 0x30) >> 0x38);
  lVar2 = 0;
  __ZNSt3__16chrono12system_clock11from_time_tEl();
  *(long *)(param_1 + 2) =
       lVar4 + lVar2 / 1000000 +
       (long)(((int)((ulong)lVar5 >> 8) >> 0x18) - ((int)((ulong)lVar1 >> 8) >> 0x18)) +
       ((lVar3 * 0x18 + (long)((((int)lVar5 << 8) >> 0x18) - (((int)lVar1 << 8) >> 0x18))) * 0x3c +
       (long)(((int)lVar5 >> 0x18) - ((int)lVar1 >> 0x18))) * 0x3c + -1;
  lVar5 = *param_2;
  lVar3 = 0;
  __ZNSt3__16chrono12system_clock11from_time_tEl();
  *(long *)(param_1 + 4) = lVar3 / 1000000 + lVar5;
  lVar4 = *param_2;
  lVar3 = param_2[2];
  lVar5 = param_2[3];
  lVar1 = param_3[1];
  func_0x0057bb14(lVar3,(int)(char)lVar5,(lVar5 << 0x30) >> 0x38,*param_3,(int)(char)lVar1,
                  (lVar1 << 0x30) >> 0x38);
  lVar2 = 0;
  __ZNSt3__16chrono12system_clock11from_time_tEl();
  *(long *)(param_1 + 6) =
       lVar2 / 1000000 + lVar4 +
       (long)(((int)((ulong)lVar1 >> 8) >> 0x18) - ((int)((ulong)lVar5 >> 8) >> 0x18)) +
       ((lVar3 * 0x18 + (long)((((int)lVar5 << 8) >> 0x18) - (((int)lVar1 << 8) >> 0x18))) * 0x3c +
       (long)(((int)lVar5 >> 0x18) - ((int)lVar1 >> 0x18))) * -0x3c;
  return;
}



/* Entry: 00580224; end: 0058024b;  */

void FUN_00580224(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (-1 < *(char *)(param_2 + 0x6f)) {
    uVar3 = *(ulong *)(param_2 + 0x58);
    param_1[1] = *(ulong *)(param_2 + 0x60);
    *param_1 = uVar3;
    param_1[2] = *(ulong *)(param_2 + 0x68);
    return;
  }
  uVar3 = *(ulong *)(param_2 + 0x60);
  if (uVar3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar3;
  }
  else {
    if (0x7ffffffffffffff7 < uVar3) {
      FUN_0026329c(param_1,*(undefined8 *)(param_2 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x002972c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(undefined *)0x2972c4)();
      return;
    }
    uVar1 = 0x19;
    if ((uVar3 | 7) != 0x17) {
      uVar1 = (uVar3 | 7) + 1;
    }
    uVar2 = uVar1;
    __Znwm();
    param_1[1] = uVar3;
    param_1[2] = uVar1 | 0x8000000000000000;
    *param_1 = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_0099a400)();
  return;
}



/* Entry: 0058024c; end: 00580477;  */

void FUN_0058024c(ulong *param_1)

{
  long lVar1;
  dword *pdVar2;
  code *pcVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined1 auStack_138 [8];
  long lStack_130;
  long lStack_120;
  long lStack_118;
  ulong uStack_110;
  undefined8 uStack_100;
  char cStack_e9;
  ulong uStack_e8;
  uint uStack_e0;
  undefined **appuStack_d8 [19];
  
  FUN_004799f4(&ppuStack_148);
  FUN_00462690(&ppuStack_148,"#trans=",7);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
  FUN_00462690(&ppuStack_148," #types=",8);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
  FUN_00462690(&ppuStack_148," spec=\'",7);
  FUN_00462690();
  FUN_00462690();
  if ((uStack_e0 >> 4 & 1) == 0) {
    if ((uStack_e0 >> 3 & 1) == 0) {
      uVar5 = 0;
      *(undefined1 *)((long)param_1 + 0x17) = 0;
      goto LAB_005803b0;
    }
    uVar5 = lStack_120 - lStack_130;
    lVar1 = lStack_130;
  }
  else {
    if (uStack_e8 < uStack_110) {
      uStack_e8 = uStack_110;
    }
    uVar5 = uStack_e8 - lStack_118;
    lVar1 = lStack_118;
  }
  if (0x7ffffffffffffff6 < uVar5) {
    FUN_0040d740();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x580464);
    (*pcVar3)();
  }
  if (uVar5 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar5;
    puVar4 = param_1;
    if (uVar5 == 0) goto LAB_005803b0;
  }
  else {
    pdVar2 = &MACH_HEADER.flags;
    if ((dword *)(uVar5 | 7) != (dword *)0x17) {
      pdVar2 = (dword *)(uVar5 | 7);
    }
    puVar4 = (ulong *)((long)pdVar2 + 1);
    __Znwm();
    param_1[1] = uVar5;
    param_1[2] = (ulong)((long)pdVar2 + 1) | 0x8000000000000000;
    *param_1 = (ulong)puVar4;
  }
  _memmove(puVar4,lVar1,uVar5);
  param_1 = puVar4;
LAB_005803b0:
  *(undefined1 *)((long)param_1 + uVar5) = 0;
  appuStack_d8[0] = &PTR_FUN_009e7e18;
  ppuStack_148 = &PTR_FUN_009e7df0;
  ppuStack_140 = &PTR_FUN_009e5de0;
  if (cStack_e9 < '\0') {
    __ZdlPv(uStack_100);
  }
  ppuStack_140 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_00998de8 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_138);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_148,&PTR_PTR_009e7e30);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_d8);
  return;
}



/* Entry: 00580478; end: 00580803;  */

undefined8 FUN_00580478(long param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  byte *pbVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  
  plVar3 = *(long **)(param_1 + 8);
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar3 != plVar4) {
    lVar6 = 0x30;
    if (-0x800000000000000 < *plVar3) {
      lVar6 = 0;
    }
    plVar3 = (long *)((long)plVar3 + lVar6);
    lVar6 = 0;
    __ZNSt3__16chrono12system_clock11from_time_tEl();
    plVar11 = plVar3;
    if ((long)plVar4 - (long)plVar3 != 0) {
      lVar6 = SUB168(SEXT816(lVar6) * SEXT816(-0x431bde82d7b634db),8);
      uVar7 = ((long)plVar4 - (long)plVar3 >> 4) * -0x5555555555555555;
      do {
        uVar9 = uVar7 >> 1;
        uVar1 = uVar7 + ~uVar9;
        uVar7 = uVar9;
        if (plVar11[uVar9 * 6] <= ((lVar6 >> 0x12) - (lVar6 >> 0x3f)) + *param_2) {
          uVar7 = uVar1;
          plVar11 = plVar11 + uVar9 * 6 + 6;
        }
      } while (uVar7 != 0);
    }
    if (plVar11 != plVar4) {
      do {
        pbVar2 = (byte *)(param_1 + 0x38);
        if (plVar11 != plVar3) {
          pbVar2 = (byte *)(plVar11 + -5);
        }
        if ((uint)*pbVar2 != (uint)*(byte *)(plVar11 + 1)) {
          piVar8 = (int *)(*(long *)(param_1 + 0x20) + (ulong)(uint)*pbVar2 * 0x30);
          piVar10 = (int *)(*(long *)(param_1 + 0x20) + (ulong)(uint)*(byte *)(plVar11 + 1) * 0x30);
          if (((*piVar8 != *piVar10) || ((char)piVar8[10] != (char)piVar10[10])) ||
             (*(char *)((long)piVar8 + 0x29) != *(char *)((long)piVar10 + 0x29))) break;
        }
        plVar11 = plVar11 + 6;
      } while (plVar11 != plVar4);
    }
    if (plVar11 != plVar4) {
      lVar6 = plVar11[4];
      lVar5 = plVar11[5];
      uVar7 = (ulong)(char)lVar5;
      FUN_005700e8(lVar6,uVar7,(lVar5 << 0x30) >> 0x38,(lVar5 << 0x28) >> 0x38,
                   (lVar5 << 0x20) >> 0x38,((lVar5 << 0x18) >> 0x38) + 1);
      *param_3 = lVar6;
      param_3[1] = uVar7 & 0xffffffffff;
      lVar6 = plVar11[2];
      param_3[3] = plVar11[3];
      param_3[2] = lVar6;
      return 1;
    }
  }
  return 0;
}



/* Entry: 00580804; end: 00580933;  */

undefined8 * FUN_00580804(undefined8 *param_1)

{
  char cVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_00a01ec0;
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    __ZdlPv(param_1[0xe]);
    cVar1 = *(char *)((long)param_1 + 0x6f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x6f);
  }
  if (cVar1 < '\0') {
    __ZdlPv(param_1[0xb]);
    cVar1 = *(char *)((long)param_1 + 0x57);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x57);
  }
  if (cVar1 < '\0') {
    __ZdlPv(param_1[8]);
    lVar2 = param_1[4];
  }
  else {
    lVar2 = param_1[4];
  }
  if (lVar2 != 0) {
    param_1[5] = lVar2;
    __ZdlPv();
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 00580934; end: 0058095b;  */

void FUN_00580934(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  FUN_0040d774("vector");
  pcVar2 = "vector";
  FUN_0040d774();
  puVar7 = *(undefined8 **)((long)pcVar2 + 8);
  if ((ulong)((*(long *)((long)pcVar2 + 0x10) - (long)puVar7 >> 4) * -0x5555555555555555) < param_2)
  {
    lVar9 = (long)puVar7 - *(long *)pcVar2;
    uVar4 = param_2 + (lVar9 >> 4) * -0x5555555555555555;
    if (0x555555555555555 < uVar4) {
      FUN_00580934();
LAB_00580af4:
      FUN_0040cee8();
      return;
    }
    lVar3 = *(long *)((long)pcVar2 + 0x10) - *(long *)pcVar2 >> 4;
    uVar5 = lVar3 * 0x5555555555555556;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar5 = uVar4;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar5 = 0x555555555555555;
    }
    if (uVar5 == 0) {
      lVar3 = 0;
    }
    else {
      if (0x555555555555555 < uVar5) goto LAB_00580af4;
      lVar3 = uVar5 * 0x30;
      __Znwm();
    }
    puVar1 = (undefined8 *)(lVar3 + lVar9);
    puVar6 = puVar1;
    do {
      puVar6[1] = 0;
      *puVar6 = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      puVar6[5] = 0;
      puVar6[4] = 0;
      puVar6[1] = 0x7b2;
      *(undefined2 *)(puVar6 + 2) = 0x101;
      puVar6[3] = 0x7b2;
      *(undefined2 *)(puVar6 + 4) = 0x101;
      puVar6 = puVar6 + 6;
    } while (puVar6 != puVar1 + param_2 * 6);
    lVar9 = *(long *)pcVar2;
    lVar8 = (long)puVar1 - ((long)puVar7 - lVar9);
    _memcpy(lVar8,lVar9);
    *(long *)pcVar2 = lVar8;
    *(undefined8 **)((long)pcVar2 + 8) = puVar1 + param_2 * 6;
    *(ulong *)((long)pcVar2 + 0x10) = lVar3 + uVar5 * 0x30;
    if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_0099c620)(lVar9);
      return;
    }
  }
  else {
    puVar6 = puVar7;
    if (param_2 != 0) {
      puVar6 = puVar7 + param_2 * 6;
      do {
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7[3] = 0;
        puVar7[2] = 0;
        puVar7[5] = 0;
        puVar7[4] = 0;
        puVar7[1] = 0x7b2;
        *(undefined2 *)(puVar7 + 2) = 0x101;
        puVar7[3] = 0x7b2;
        *(undefined2 *)(puVar7 + 4) = 0x101;
        puVar7 = puVar7 + 6;
      } while (puVar7 != puVar6);
    }
    *(undefined8 **)((long)pcVar2 + 8) = puVar6;
  }
  return;
}



/* Entry: 0058095c; end: 00580af7;  */

void FUN_0058095c(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  
  puVar6 = (undefined8 *)param_1[1];
  if ((ulong)((param_1[2] - (long)puVar6 >> 4) * -0x5555555555555555) < param_2) {
    lVar8 = (long)puVar6 - *param_1;
    uVar3 = param_2 + (lVar8 >> 4) * -0x5555555555555555;
    if (0x555555555555555 < uVar3) {
      FUN_00580934();
LAB_00580af4:
      FUN_0040cee8();
      return;
    }
    lVar2 = param_1[2] - *param_1 >> 4;
    uVar4 = lVar2 * 0x5555555555555556;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar4 = uVar3;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar2 * -0x5555555555555555)) {
      uVar4 = 0x555555555555555;
    }
    if (uVar4 == 0) {
      lVar2 = 0;
    }
    else {
      if (0x555555555555555 < uVar4) goto LAB_00580af4;
      lVar2 = uVar4 * 0x30;
      __Znwm();
    }
    puVar1 = (undefined8 *)(lVar2 + lVar8);
    puVar5 = puVar1;
    do {
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[1] = 0x7b2;
      *(undefined2 *)(puVar5 + 2) = 0x101;
      puVar5[3] = 0x7b2;
      *(undefined2 *)(puVar5 + 4) = 0x101;
      puVar5 = puVar5 + 6;
    } while (puVar5 != puVar1 + param_2 * 6);
    lVar8 = *param_1;
    lVar7 = (long)puVar1 - ((long)puVar6 - lVar8);
    _memcpy(lVar7,lVar8);
    *param_1 = lVar7;
    param_1[1] = (long)(puVar1 + param_2 * 6);
    param_1[2] = lVar2 + uVar4 * 0x30;
    if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_0099c620)(lVar8);
      return;
    }
  }
  else {
    puVar5 = puVar6;
    if (param_2 != 0) {
      puVar5 = puVar6 + param_2 * 6;
      do {
        puVar6[1] = 0;
        *puVar6 = 0;
        puVar6[3] = 0;
        puVar6[2] = 0;
        puVar6[5] = 0;
        puVar6[4] = 0;
        puVar6[1] = 0x7b2;
        *(undefined2 *)(puVar6 + 2) = 0x101;
        puVar6[3] = 0x7b2;
        *(undefined2 *)(puVar6 + 4) = 0x101;
        puVar6 = puVar6 + 6;
      } while (puVar6 != puVar5);
    }
    param_1[1] = (long)puVar5;
  }
  return;
}



/* Entry: 00580af8; end: 00580aff;  */

void FUN_00580af8(void)

{
  return;
}



/* Entry: 00580b00; end: 00580b23;  */

void FUN_00580b00(void)

{
  dword *pdVar1;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_FUN_00a01f28;
  return;
}



/* Entry: 00580b24; end: 00580b4b;  */

void FUN_00580b24(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00a01f28;
  return;
}



/* Entry: 00580b4c; end: 00581fd7;  */

/* WARNING: Removing unreachable block (ram,0x00581448) */
/* WARNING: Removing unreachable block (ram,0x00581a24) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00580b4c(char **param_1,undefined8 param_2,segment_command *param_3)

{
  long lVar1;
  char **ppcVar2;
  segment_command *psVar3;
  byte *pbVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  dword *pdVar8;
  code *pcVar9;
  bool bVar10;
  segment_command *psVar11;
  segment_command *psVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  qword *pqVar16;
  char *pcVar17;
  uint uVar18;
  dword *pdVar19;
  segment_command *psVar20;
  int iVar21;
  uint uVar22;
  segment_command *psVar23;
  ulong uVar24;
  char *pcVar25;
  segment_command *psVar26;
  segment_command *psVar27;
  segment_command *psVar28;
  char **unaff_x27;
  char **ppcVar29;
  char **ppcVar30;
  long lVar31;
  char **ppcStack_358;
  segment_command *psStack_350;
  undefined1 auStack_348 [32];
  segment_command *psStack_328;
  undefined8 uStack_320;
  segment_command *psStack_318;
  segment_command *psStack_310;
  undefined8 uStack_308;
  undefined1 auStack_2fa [2];
  segment_command sStack_2f8;
  undefined8 *puStack_270;
  undefined4 uStack_160;
  int iStack_15c;
  undefined **appuStack_150 [6];
  undefined8 uStack_120;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  char *pcStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  char *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  qword qStack_78;
  
  qStack_78 = *(qword *)PTR____stack_chk_guard_00999f88;
  cVar6 = *(char *)((long)param_3->segname + 0xf);
  psVar26 = (segment_command *)(long)cVar6;
  if ((long)psVar26 < 0) {
    psVar12 = *(segment_command **)param_3;
    uVar24 = *(ulong *)param_3->segname;
    if (4 < uVar24) {
      uVar24 = 5;
    }
  }
  else {
    uVar18 = (uint)cVar6;
    if (4 < uVar18) {
      uVar18 = 5;
    }
    uVar24 = (ulong)uVar18;
    psVar12 = param_3;
  }
  _memcmp(psVar12,"file:",uVar24);
  psVar23 = (segment_command *)((long)&MACH_HEADER.cputype + 1);
  if ((int)psVar12 != 0 || uVar24 != 5) {
    psVar23 = (segment_command *)0x0;
  }
  sStack_2f8._0_8_ = (segment_command *)0x0;
  sStack_2f8.segname[0] = '\0';
  sStack_2f8.segname[1] = '\0';
  sStack_2f8.segname[2] = '\0';
  sStack_2f8.segname[3] = '\0';
  sStack_2f8.segname[4] = '\0';
  sStack_2f8.segname[5] = '\0';
  sStack_2f8.segname[6] = '\0';
  sStack_2f8.segname[7] = '\0';
  sStack_2f8.segname[8] = '\0';
  sStack_2f8.segname[9] = '\0';
  sStack_2f8.segname[10] = '\0';
  sStack_2f8.segname[0xb] = '\0';
  sStack_2f8.segname[0xc] = '\0';
  sStack_2f8.segname[0xd] = '\0';
  sStack_2f8.segname[0xe] = '\0';
  sStack_2f8.segname[0xf] = '\0';
  if (cVar6 < 0) {
    if ((psVar23 != *(segment_command **)param_3->segname) &&
       (psVar23->segname[*(qword *)param_3 - 8] == '/')) goto LAB_00580c14;
LAB_00580c2c:
    pcVar25 = "TZDIR";
    _getenv();
    pcVar17 = "/usr/share/zoneinfo";
    if ((pcVar25 != (char *)0x0) && (*pcVar25 != '\0')) {
      pcVar17 = pcVar25;
    }
    pcVar25 = pcVar17;
    _strlen(pcVar17);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&sStack_2f8,pcVar17,pcVar25);
    if ((long)sStack_2f8.segname._8_8_ < 0) {
      uVar24 = (sStack_2f8.segname._8_8_ & 0x7fffffffffffffff) - 1;
      if (sStack_2f8.segname._0_8_ == uVar24) {
        if ((sStack_2f8.segname._8_8_ & 0x7fffffffffffffff) == 0x7ffffffffffffff7) {
          FUN_0040d740();
          goto LAB_00581ef4;
        }
        psVar12 = (segment_command *)sStack_2f8._0_8_;
        if (uVar24 < 0x3ffffffffffffff3) {
          if (uVar24 == 0) {
            psVar26 = (segment_command *)((long)&MACH_HEADER.sizeofcmds + 3);
          }
          else {
            pdVar19 = (dword *)(uVar24 * 2 | 7);
            pdVar8 = &MACH_HEADER.flags;
            if (pdVar19 != (dword *)0x17) {
              pdVar8 = pdVar19;
            }
            psVar26 = (segment_command *)((long)&MACH_HEADER.sizeofcmds + 3);
            if (0xb < uVar24) {
              psVar26 = (segment_command *)((long)pdVar8 + 1);
            }
          }
          goto LAB_00580c88;
        }
        bVar10 = false;
        psVar26 = (segment_command *)0x7ffffffffffffff7;
LAB_00580c90:
        psVar11 = psVar26;
        __Znwm();
        if (uVar24 != 0) {
          _memmove(psVar11,psVar12,uVar24);
        }
        if (!bVar10) {
          __ZdlPv(psVar12);
        }
        sStack_2f8.segname._8_8_ = (ulong)psVar26 | 0x8000000000000000;
        sStack_2f8.segname._0_8_ = uVar24 + 1;
        *(undefined2 *)((long)psVar11->segname + (uVar24 - 8)) = 0x2f;
        bVar5 = *(byte *)((long)param_3->segname + 0xf);
        sStack_2f8._0_8_ = psVar11;
      }
      else {
        *(undefined2 *)((long)(sStack_2f8._0_8_ + 8) + (sStack_2f8.segname._0_8_ - 8)) = 0x2f;
        bVar5 = *(byte *)((long)param_3->segname + 0xf);
        sStack_2f8.segname._0_8_ = sStack_2f8.segname._0_8_ + 1;
      }
    }
    else {
      if (sStack_2f8.segname[0xf] == 0x16) {
        uVar24 = 0x16;
        psVar12 = &sStack_2f8;
        psVar26 = (segment_command *)(segment_command_00000020.segname + 8);
LAB_00580c88:
        bVar10 = uVar24 == 0x16;
        goto LAB_00580c90;
      }
      uVar24 = (ulong)(byte)sStack_2f8.segname[0xf];
      sStack_2f8.segname._8_8_ =
           CONCAT17(sStack_2f8.segname[0xf] + 1,sStack_2f8.segname._8_7_) & 0x7fffffffffffffff;
      (sStack_2f8.segname + (uVar24 - 8))[0] = '/';
      (sStack_2f8.segname + (uVar24 - 8))[1] = '\0';
      bVar5 = *(byte *)((long)param_3->segname + 0xf);
    }
    psVar26 = (segment_command *)(ulong)bVar5;
    if ((char)bVar5 < '\0') goto LAB_00580d8c;
LAB_00580c18:
    psVar26 = (segment_command *)((ulong)psVar26 & 0xff);
    psVar12 = param_3;
    if (psVar23 <= psVar26) goto LAB_00580d9c;
  }
  else {
    if ((psVar23 == psVar26) || (psVar23->segname[(long)((long)param_3->segname + -0x10)] != '/'))
    goto LAB_00580c2c;
LAB_00580c14:
    if (((uint)(int)cVar6 >> 7 & 1) == 0) goto LAB_00580c18;
LAB_00580d8c:
    psVar26 = *(segment_command **)param_3->segname;
    if (psVar23 <= psVar26) {
      psVar12 = *(segment_command **)param_3;
LAB_00580d9c:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&sStack_2f8,psVar23->segname + (long)((long)psVar12->segname + -0x10),
                 (long)psVar26 - (long)psVar23);
      psVar26 = (segment_command *)sStack_2f8._0_8_;
      if (-1 < (long)sStack_2f8.segname._8_8_) {
        psVar26 = &sStack_2f8;
      }
      _fopen(psVar26,"rb");
      if (psVar26 == (segment_command *)0x0) {
        pcVar25 = (char *)0x0;
        *param_1 = (char *)0x0;
      }
      else {
        psVar12 = &segment_command_00000020;
        __Znwm();
        *(undefined ***)psVar12 = &PTR_FUN_00a01fa8;
        *(segment_command **)psVar12->segname = psVar26;
        *(undefined **)((long)psVar12->segname + 8) = PTR__fclose_0099a218;
        psVar12->vmaddr = 0xffffffffffffffff;
        *param_1 = (char *)psVar12;
        pcVar25 = (char *)psVar12;
      }
      if ((long)sStack_2f8.segname._8_8_ < 0) {
        __ZdlPv(sStack_2f8._0_8_);
      }
      if ((segment_command *)pcVar25 != (segment_command *)0x0) goto LAB_00581c50;
      *param_1 = (char *)0x0;
      bVar5 = *(byte *)((long)param_3->segname + 0xf);
      if ((char)bVar5 < '\0') {
        psVar26 = *(segment_command **)param_3;
        uVar24 = *(ulong *)param_3->segname;
        if (4 < uVar24) {
          uVar24 = 5;
        }
      }
      else {
        uVar18 = (uint)(char)bVar5;
        if (4 < bVar5) {
          uVar18 = 5;
        }
        uVar24 = (ulong)uVar18;
        psVar26 = param_3;
      }
      _memcmp(psVar26,"file:",uVar24);
      lVar1 = 5;
      if ((int)psVar26 != 0 || uVar24 != 5) {
        lVar1 = 0;
      }
      pcVar25 = "/data/misc/zoneinfo/current/tzdata";
      _fopen("/data/misc/zoneinfo/current/tzdata","rb");
      psVar23 = (segment_command *)auStack_b0;
      ppcStack_358 = param_1;
      if ((segment_command *)pcVar25 != (segment_command *)0x0) {
        puVar13 = &uStack_90;
        _fread(puVar13,1,0x18,pcVar25);
        if ((dword *)puVar13 == &MACH_HEADER.flags) {
          if ((dword)uStack_90 == 0x61647a74 && uStack_90._4_2_ == 0x6174) {
            uVar18 = (uint)uStack_88._4_1_ << 0x10 | (uint)uStack_88._5_1_ << 8 |
                     (uint)uStack_88._6_1_;
            if (-1 < (int)(uVar18 << 8)) {
              uVar18 = (uint)uStack_88._7_1_ | uVar18 << 8;
              uVar22 = ((uint)uStack_80 & 0xff00ff00) >> 8 | ((uint)uStack_80 & 0xff00ff) << 8;
              uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
              uVar7 = uVar22 - uVar18;
              if ((int)uVar18 <= (int)uVar22) {
                cVar6 = uStack_88._3_1_;
                psVar26 = (segment_command *)pcVar25;
                _fseek(pcVar25,uVar18,0);
                if ((((int)psVar26 == 0) && (0x33 < uVar7)) &&
                   (uVar24 = (ulong)(long)(int)uVar7 / 0x34, uVar24 * 0x34 - (long)(int)uVar7 == 0))
                {
                  lVar31 = -uVar24;
                  do {
                    psVar26 = &sStack_2f8;
                    _fread(psVar26,1,0x34,pcVar25);
                    bVar5 = sStack_2f8.fileoff._7_1_;
                    if (((psVar26 != (segment_command *)(segment_command_00000020.segname + 0xc)) ||
                        (uVar18 = ((uint)sStack_2f8.fileoff & 0xff00ff00) >> 8 |
                                  ((uint)sStack_2f8.fileoff & 0xff00ff) << 8,
                        iVar21 = (uVar18 >> 0x10 | uVar18 << 0x10) + uVar22, iVar21 < 0)) ||
                       (uVar18 = ((uint)sStack_2f8.fileoff._4_1_ << 0x10 |
                                  (uint)sStack_2f8.fileoff._5_1_ << 8 |
                                 (uint)sStack_2f8.fileoff._6_1_) << 8, (int)uVar18 < 0)) break;
                    sStack_2f8.fileoff._0_4_ = (uint)sStack_2f8.fileoff & 0xffffff00;
                    psVar26 = *(segment_command **)param_3;
                    if (-1 < *(char *)((long)param_3->segname + 0xf)) {
                      psVar26 = param_3;
                    }
                    lVar15 = (long)psVar26->segname + lVar1 + -8;
                    _strcmp(lVar15,&sStack_2f8);
                    if ((int)lVar15 == 0) {
                      psVar26 = (segment_command *)pcVar25;
                      _fseek(pcVar25,iVar21,0);
                      if ((int)psVar26 == 0) goto LAB_00581cbc;
                      break;
                    }
                    bVar10 = lVar31 != -1;
                    lVar31 = lVar31 + 1;
                  } while (bVar10);
                }
              }
            }
          }
        }
        _fclose(pcVar25);
      }
      pcVar25 = "/system/usr/share/zoneinfo/tzdata";
      _fopen("/system/usr/share/zoneinfo/tzdata","rb");
      if ((segment_command *)pcVar25 != (segment_command *)0x0) {
        puVar13 = &uStack_90;
        _fread(puVar13,1,0x18,pcVar25);
        if ((dword *)puVar13 == &MACH_HEADER.flags) {
          if ((dword)uStack_90 == 0x61647a74 && uStack_90._4_2_ == 0x6174) {
            uVar18 = (uint)uStack_88._4_1_ << 0x10 | (uint)uStack_88._5_1_ << 8 |
                     (uint)uStack_88._6_1_;
            if (-1 < (int)(uVar18 << 8)) {
              uVar18 = (uint)uStack_88._7_1_ | uVar18 << 8;
              uVar22 = ((uint)uStack_80 & 0xff00ff00) >> 8 | ((uint)uStack_80 & 0xff00ff) << 8;
              uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
              uVar7 = uVar22 - uVar18;
              if ((int)uVar18 <= (int)uVar22) {
                cVar6 = uStack_88._3_1_;
                psVar26 = (segment_command *)pcVar25;
                _fseek(pcVar25,uVar18,0);
                if ((((int)psVar26 == 0) && (0x33 < uVar7)) &&
                   (uVar24 = (ulong)(long)(int)uVar7 / 0x34, uVar24 * 0x34 - (long)(int)uVar7 == 0))
                {
                  lVar31 = -uVar24;
                  do {
                    psVar26 = &sStack_2f8;
                    _fread(psVar26,1,0x34,pcVar25);
                    bVar5 = sStack_2f8.fileoff._7_1_;
                    if (((psVar26 != (segment_command *)(segment_command_00000020.segname + 0xc)) ||
                        (uVar18 = ((uint)sStack_2f8.fileoff & 0xff00ff00) >> 8 |
                                  ((uint)sStack_2f8.fileoff & 0xff00ff) << 8,
                        iVar21 = (uVar18 >> 0x10 | uVar18 << 0x10) + uVar22, iVar21 < 0)) ||
                       (uVar18 = ((uint)sStack_2f8.fileoff._4_1_ << 0x10 |
                                  (uint)sStack_2f8.fileoff._5_1_ << 8 |
                                 (uint)sStack_2f8.fileoff._6_1_) << 8, (int)uVar18 < 0)) break;
                    sStack_2f8.fileoff._0_4_ = (uint)sStack_2f8.fileoff & 0xffffff00;
                    psVar26 = *(segment_command **)param_3;
                    if (-1 < *(char *)((long)param_3->segname + 0xf)) {
                      psVar26 = param_3;
                    }
                    lVar15 = (long)psVar26->segname + lVar1 + -8;
                    _strcmp(lVar15,&sStack_2f8);
                    if ((int)lVar15 == 0) {
                      psVar26 = (segment_command *)pcVar25;
                      _fseek(pcVar25,iVar21,0);
                      if ((int)psVar26 == 0) goto LAB_00581cbc;
                      break;
                    }
                    bVar10 = lVar31 != -1;
                    lVar31 = lVar31 + 1;
                  } while (bVar10);
                }
              }
            }
          }
        }
        _fclose(pcVar25);
      }
      *param_1 = (char *)0x0;
      cVar6 = *(char *)((long)param_3->segname + 0xf);
      psVar26 = (segment_command *)(long)cVar6;
      if ((long)psVar26 < 0) {
        psVar12 = *(segment_command **)param_3;
        uVar24 = *(ulong *)param_3->segname;
        if (4 < uVar24) {
          uVar24 = 5;
        }
      }
      else {
        uVar18 = (uint)cVar6;
        if (4 < uVar18) {
          uVar18 = 5;
        }
        uVar24 = (ulong)uVar18;
        psVar12 = param_3;
      }
      _memcmp(psVar12,"file:",uVar24);
      psVar11 = (segment_command *)((long)&MACH_HEADER.cputype + 1);
      if ((int)psVar12 != 0 || uVar24 != 5) {
        psVar11 = (segment_command *)0x0;
      }
      auStack_b0._8_8_ = "/pkg/data/tzdata/";
      auStack_b0._0_8_ = "/config/data/tzdata/";
      uStack_a0 = "/data/tzdata/";
      pcStack_b8 = "";
      if (cVar6 < '\0') {
        if (psVar11 != *(segment_command **)param_3->segname) {
          psVar12 = *(segment_command **)param_3;
          goto LAB_00580ff8;
        }
LAB_00580fdc:
        ppcVar30 = &pcStack_98;
        ppcVar2 = (char **)auStack_b0;
      }
      else {
        psVar12 = param_3;
        if (psVar11 == psVar26) goto LAB_00580fdc;
LAB_00580ff8:
        bVar10 = psVar11->segname[(long)((long)psVar12->segname + -0x10)] != '/';
        ppcVar2 = &pcStack_b8;
        if (bVar10) {
          ppcVar2 = (char **)auStack_b0;
        }
        lVar1 = 8;
        if (bVar10) {
          lVar1 = 0x18;
        }
        ppcVar30 = (char **)((long)ppcVar2 + lVar1);
      }
LAB_0058103c:
      do {
        ppcVar29 = ppcVar2;
        psVar27 = (segment_command *)*ppcVar29;
        psVar12 = psVar27;
        _strlen();
        if ((segment_command *)0x7ffffffffffffff6 < psVar12) {
          FUN_0040d740();
          goto LAB_00581ef4;
        }
        if ((segment_command *)((long)&MACH_HEADER.sizeofcmds + 2) < psVar12) {
          pdVar8 = &MACH_HEADER.flags;
          if ((dword *)((ulong)psVar12 | 7) != (dword *)0x17) {
            pdVar8 = (dword *)((ulong)psVar12 | 7);
          }
          psVar20 = (segment_command *)((long)pdVar8 + 1);
          __Znwm();
          uStack_308 = (ulong)((long)pdVar8 + 1) | 0x8000000000000000;
          psStack_318 = psVar20;
          psStack_310 = psVar12;
LAB_005810bc:
          _memmove(psVar20,psVar27,psVar12);
          *(char *)((long)psVar12->segname + (long)((long)psVar20->segname + -0x10)) = '\0';
          psVar12 = psStack_310;
          psStack_350 = (segment_command *)(long)uStack_308._7_1_;
          if (-1 < (long)psStack_350) goto LAB_00581080;
          FUN_002971d4(auStack_348 + 0x18,psStack_318,psStack_310);
        }
        else {
          uStack_308 = CONCAT17((char)psVar12,(undefined7)uStack_308);
          psVar20 = (segment_command *)&psStack_318;
          if (psVar12 != (segment_command *)0x0) goto LAB_005810bc;
                    /* WARNING: Ignoring partial resolution of indirect */
          psStack_318._0_1_ = 0;
          psStack_350 = (segment_command *)0x0;
LAB_00581080:
          psStack_328 = psStack_310;
          auStack_348._24_8_ = psStack_318;
          uStack_320 = uStack_308;
          psVar12 = psStack_350;
        }
        if (psVar12 == (segment_command *)0x0) {
LAB_005811f4:
          cVar6 = *(char *)((long)param_3->segname + 0xf);
joined_r0x005811f8:
          psVar12 = (segment_command *)(long)cVar6;
          if (-1 < (long)psVar12) goto LAB_005811fc;
LAB_00581254:
          psVar12 = *(segment_command **)param_3->segname;
          if (psVar12 < psVar11) goto LAB_00581da8;
          psVar27 = *(segment_command **)param_3;
        }
        else {
          if ((long)uStack_320 < 0) {
            uVar24 = (uStack_320 & 0x7fffffffffffffff) - 1;
            psVar12 = (segment_command *)auStack_348._24_8_;
            psVar27 = psStack_328;
            if (uVar24 - (long)psStack_328 < 0xf) {
              psVar26 = (segment_command *)((long)psStack_328->segname + 7);
              if ((long)psVar26 - uVar24 <= 0x7ffffffffffffff7 - (uStack_320 & 0x7fffffffffffffff))
              {
                if (uVar24 < 0x3ffffffffffffff3) goto LAB_0058116c;
                psVar23 = (segment_command *)0x0;
                psVar20 = (segment_command *)0x7ffffffffffffff7;
                goto LAB_0058119c;
              }
              FUN_0040d740();
              goto LAB_00581ef4;
            }
          }
          else {
            psVar27 = (segment_command *)(ulong)uStack_320._7_1_;
            if (uStack_320._7_1_ - 8 < 0xf) {
              psVar26 = (segment_command *)((long)psVar27->segname + 7);
              uVar24 = 0x16;
              psVar12 = (segment_command *)(auStack_348 + 0x18);
LAB_0058116c:
              psVar23 = psVar26;
              if (psVar26 <= (segment_command *)(uVar24 * 2)) {
                psVar23 = (segment_command *)(uVar24 * 2);
              }
              pdVar8 = &MACH_HEADER.flags;
              if ((dword *)((ulong)psVar23 | 7) != (dword *)0x17) {
                pdVar8 = (dword *)((ulong)psVar23 | 7);
              }
              psVar20 = (segment_command *)((long)&MACH_HEADER.sizeofcmds + 3);
              if ((segment_command *)((long)&MACH_HEADER.sizeofcmds + 2) < psVar23) {
                psVar20 = (segment_command *)((long)pdVar8 + 1);
              }
              psVar23 = (segment_command *)(ulong)(uVar24 == 0x16);
LAB_0058119c:
              psVar28 = psVar20;
              __Znwm();
              if (psVar27 != (segment_command *)0x0) {
                _memmove(psVar28,psVar12,psVar27);
              }
              builtin_strncpy((char *)((long)psVar27->segname +
                                      (long)((long)psVar28->segname + -0x10)),"zoneinfo/tzif2/",0xf)
              ;
              if ((int)psVar23 == 0) {
                __ZdlPv(psVar12);
              }
              uStack_320 = (ulong)psVar20 | 0x8000000000000000;
              *(char *)((long)psVar26->segname + (long)((long)psVar28->segname + -0x10)) = '\0';
              auStack_348._24_8_ = psVar28;
              psStack_328 = psVar26;
              goto LAB_005811f4;
            }
            psVar12 = (segment_command *)(auStack_348 + 0x18);
          }
          builtin_strncpy((char *)((long)psVar27->segname + (long)((long)psVar12->segname + -0x10)),
                          "zoneinfo/tzif2/",0xf);
          psVar27 = (segment_command *)((long)psVar27->segname + 7);
          if (-1 < (long)uStack_320) {
            uStack_320 = CONCAT17((char)psVar27,(undefined7)uStack_320) & 0x7fffffffffffffff;
            *(char *)((long)psVar27->segname + (long)((long)psVar12->segname + -0x10)) = '\0';
            cVar6 = *(char *)((long)param_3->segname + 0xf);
            goto joined_r0x005811f8;
          }
          psStack_328 = psVar27;
          *(char *)((long)psVar27->segname + (long)((long)psVar12->segname + -0x10)) = '\0';
          psVar12 = (segment_command *)(long)*(char *)((long)param_3->segname + 0xf);
          if ((long)psVar12 < 0) goto LAB_00581254;
LAB_005811fc:
          psVar27 = param_3;
          if (psVar12 < psVar11) {
LAB_00581da8:
            FUN_00461b78();
            goto LAB_00581ef4;
          }
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (auStack_348 + 0x18,psVar11->segname + (long)((long)psVar27->segname + -0x10),
                   (long)psVar12 - (long)psVar11);
        pcVar25 = (char *)auStack_348._24_8_;
        if (-1 < (long)uStack_320) {
          pcVar25 = (char *)(auStack_348 + 0x18);
        }
        _fopen(pcVar25,"rb");
        iVar21 = (int)psStack_350;
        if ((segment_command *)pcVar25 != (segment_command *)0x0) {
          auStack_348._0_8_ = (segment_command *)0x0;
          auStack_348[8] = '\0';
          auStack_348[9] = '\0';
          auStack_348[10] = '\0';
          auStack_348[0xb] = '\0';
          auStack_348[0xc] = '\0';
          auStack_348[0xd] = '\0';
          auStack_348[0xe] = '\0';
          auStack_348[0xf] = '\0';
          auStack_348[0x10] = '\0';
          auStack_348[0x11] = '\0';
          auStack_348[0x12] = '\0';
          auStack_348[0x13] = '\0';
          auStack_348[0x14] = '\0';
          auStack_348[0x15] = '\0';
          auStack_348[0x16] = '\0';
          auStack_348[0x17] = 0;
          param_3 = psStack_310;
          if (-1 < iVar21) {
            param_3 = psStack_350;
          }
          unaff_x27 = param_1;
          if (param_3 == (segment_command *)0x0) goto LAB_00581bfc;
          psVar26 = psStack_318;
          if (-1 < iVar21) {
            psVar26 = (segment_command *)&psStack_318;
          }
          psVar23 = (segment_command *)((long)param_3->segname + 4);
          if (psVar23 < (segment_command *)0x7ffffffffffffff7) {
            if (psVar23 < (segment_command *)((long)&MACH_HEADER.sizeofcmds + 3)) goto LAB_00581388;
            pdVar8 = &MACH_HEADER.flags;
            if ((dword *)((ulong)psVar23 | 7) != (dword *)0x17) {
              pdVar8 = (dword *)((ulong)psVar23 | 7);
            }
            psVar12 = (segment_command *)((long)pdVar8 + 1);
            __Znwm();
            uStack_80 = (ulong)((long)pdVar8 + 1) | 0x8000000000000000;
            uStack_90 = psVar12;
            uStack_88 = psVar23;
            goto LAB_00581398;
          }
          FUN_0040d740();
          goto LAB_00581ef4;
        }
        if ((long)uStack_320 < 0) {
          __ZdlPv(auStack_348._24_8_);
          if (iVar21 < 0) goto LAB_005812ac;
LAB_00581030:
          ppcVar2 = ppcVar29 + 1;
          if (ppcVar29 + 1 == ppcVar30) break;
          goto LAB_0058103c;
        }
        if (-1 < iVar21) goto LAB_00581030;
LAB_005812ac:
        __ZdlPv(psStack_318);
        ppcVar2 = ppcVar29 + 1;
      } while (ppcVar29 + 1 != ppcVar30);
      unaff_x27 = ppcVar29 + 1;
      *param_1 = (char *)0x0;
      if (*(qword *)PTR____stack_chk_guard_00999f88 == qStack_78) {
        return;
      }
LAB_00581384:
      do {
        ___stack_chk_fail();
        param_1 = unaff_x27;
LAB_00581388:
        uStack_88 = (segment_command *)0x0;
        uStack_90 = (segment_command *)0x0;
        psVar12 = (segment_command *)&uStack_90;
        uStack_80 = (long)psVar23 << 0x38;
LAB_00581398:
        _memmove(psVar12,psVar26,param_3);
        builtin_strncpy((char *)((long)param_3->segname + (long)((long)psVar12->segname + -0x10)),
                        "revision.txt",0xd);
        uStack_120 = 0;
        appuStack_150[0] =
             &PTR___ZTv0_n24_NSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_00a02100;
        sStack_2f8._0_8_ = &PTR___ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_00a020d8;
        sStack_2f8.segname[0] = '\0';
        sStack_2f8.segname[1] = '\0';
        sStack_2f8.segname[2] = '\0';
        sStack_2f8.segname[3] = '\0';
        sStack_2f8.segname[4] = '\0';
        sStack_2f8.segname[5] = '\0';
        sStack_2f8.segname[6] = '\0';
        sStack_2f8.segname[7] = '\0';
        __ZNSt3__18ios_base4initEPv(appuStack_150,sStack_2f8.segname + 8);
        uStack_c8 = 0;
        uStack_c0 = 0xffffffff;
        sStack_2f8._0_8_ = &PTR_FUN_00a02068;
        appuStack_150[0] = &PTR_DAT_00a02090;
        FUN_005823dc(sStack_2f8.segname + 8);
        if (puStack_270 == (undefined8 *)0x0) {
          puVar13 = &uStack_90;
          _fopen(puVar13,"r");
          puStack_270 = puVar13;
          if (puVar13 == (undefined8 *)0x0) goto LAB_00581424;
          uStack_160 = 8;
          if (iStack_15c == 0x22) {
            _setbuf();
            iStack_15c = 0;
          }
        }
        else {
LAB_00581424:
          __ZNSt3__18ios_base5clearEj
                    (sStack_2f8.segname +
                     (((segment_command *)(sStack_2f8._0_8_ + -0x48))->filesize - 8),
                     *(uint *)(sStack_2f8.segname +
                              ((segment_command *)(sStack_2f8._0_8_ + -0x48))->filesize + 0x18) | 4)
          ;
        }
        if (puStack_270 != (undefined8 *)0x0) {
          __ZNKSt3__18ios_base6getlocEv
                    (&uStack_90,
                     sStack_2f8.segname +
                     (((segment_command *)(sStack_2f8._0_8_ + -0x48))->filesize - 8));
          plVar14 = &uStack_90;
          __ZNKSt3__16locale9use_facetERNS0_2idE(plVar14,PTR___ZNSt3__15ctypeIcE2idE_00998bc8);
          (**(code **)(*plVar14 + 0x38))();
          __ZNSt3__16localeD1Ev(&uStack_90);
          __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6sentryC1ERS3_b
                    (auStack_2fa + 1,&sStack_2f8,1);
          if (auStack_2fa[1] == '\x01') {
            if ((char)auStack_348[0x17] < '\0') {
              *(char *)(dword *)auStack_348._0_8_ = '\0';
              auStack_348[8] = '\0';
              auStack_348[9] = '\0';
              auStack_348[10] = '\0';
              auStack_348[0xb] = '\0';
              auStack_348[0xc] = '\0';
              auStack_348[0xd] = '\0';
              auStack_348[0xe] = '\0';
              auStack_348[0xf] = '\0';
            }
            else {
              auStack_348._0_8_ = auStack_348._0_8_ & 0xffffffffffffff00;
              auStack_348[0x17] = 0;
            }
            param_3 = *(segment_command **)
                       (sStack_2f8.segname +
                       ((segment_command *)(sStack_2f8._0_8_ + -0x48))->filesize + 0x20);
            if ((byte *)param_3->vmaddr == (byte *)param_3->vmsize) {
              psVar12 = param_3;
              (**(code **)(*(qword *)param_3 + 0x48))();
              if ((int)psVar12 != -1) goto LAB_00581774;
            }
            else {
              psVar12 = (segment_command *)(ulong)*(byte *)param_3->vmaddr;
LAB_00581774:
              do {
                psVar11 = (segment_command *)param_3->vmaddr;
                psVar27 = (segment_command *)param_3->vmsize;
                if (psVar11 == (segment_command *)param_3->vmsize) {
                  auStack_2fa[0] = SUB81(psVar12,0);
                  psVar11 = (segment_command *)auStack_2fa;
                  psVar27 = (segment_command *)(auStack_2fa + 1);
                }
                psVar12 = psVar11;
                _memchr(psVar11,(int)plVar14,(long)psVar27 - (long)psVar11);
                if (psVar12 != (segment_command *)0x0) {
                  psVar27 = psVar12;
                }
                psVar20 = (segment_command *)(ulong)auStack_348[0x17];
                psVar23 = (segment_command *)CONCAT17(auStack_348[0xf],auStack_348._8_7_);
                if (-1 < (char)auStack_348[0x17]) {
                  psVar23 = psVar20;
                }
                psVar26 = (segment_command *)(0x7ffffffffffffff6 - (long)psVar23);
                psVar28 = (segment_command *)((long)psVar27 - (long)psVar11);
                if (psVar26 <= psVar28) {
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (auStack_348,psVar11,psVar26);
                  if (psVar11 != (segment_command *)auStack_2fa) {
                    uVar18 = 4;
                    param_3->vmaddr = (long)psVar26->segname + (param_3->vmaddr - 8);
                    goto LAB_00581bac;
                  }
                  if (psVar23 != (segment_command *)0x7ffffffffffffff6) {
                    if (param_3->vmaddr != param_3->vmsize) {
                      uVar18 = 4;
                      param_3->vmaddr = param_3->vmaddr + 1;
                      goto LAB_00581bac;
                    }
                    (**(code **)(*(qword *)param_3 + 0x50))(param_3);
                  }
                  uVar18 = 4;
                  goto LAB_00581bac;
                }
                if ((char)auStack_348[0x17] < '\0') {
                  if (psVar27 != psVar11) {
                    uVar24 = (CONCAT17(auStack_348[0x17],auStack_348._16_7_) & 0x7fffffffffffffff) -
                             1;
                    uVar18 = (uint)(CONCAT17(auStack_348[0x17],auStack_348._16_7_) >> 0x20);
                    uVar22 = uVar18 >> 0x1f;
                    uVar18 = uVar18 >> 0x1f;
                    psVar26 = (segment_command *)auStack_348._0_8_;
                    psVar20 = (segment_command *)CONCAT17(auStack_348[0xf],auStack_348._8_7_);
                    goto joined_r0x00581838;
                  }
joined_r0x00581a34:
                  if (psVar11 == (segment_command *)auStack_2fa) goto LAB_00581984;
LAB_00581a38:
                  pcVar17 = psVar28->segname + (param_3->vmaddr - 8);
                  param_3->vmaddr = (qword)pcVar17;
                  if (psVar12 == (segment_command *)0x0) {
                    if ((byte *)pcVar17 != (byte *)param_3->vmsize) goto LAB_00581784;
                    goto LAB_00581a58;
                  }
LAB_00581aac:
                  psVar23 = (segment_command *)auStack_2fa;
                  uVar18 = 0;
                  param_3->vmaddr = (qword)(pcVar17 + 1);
                  goto LAB_00581bac;
                }
                param_1 = param_1;
                if (psVar27 == psVar11) goto joined_r0x00581a34;
                uVar22 = 0;
                uVar18 = 0;
                psVar26 = (segment_command *)auStack_348;
                uVar24 = 0x16;
joined_r0x00581838:
                if ((psVar26 <= psVar11) &&
                   (uVar18 = uVar22,
                   psVar11 < (segment_command *)
                             (psVar20->segname + (long)(psVar26->segname + -0x10) + 1))) {
                  if (psVar28 < (segment_command *)0x7ffffffffffffff7) {
                    if ((segment_command *)((long)&MACH_HEADER.sizeofcmds + 2) < psVar28) {
                      pdVar8 = &MACH_HEADER.flags;
                      if ((dword *)((ulong)psVar28 | 7) != (dword *)0x17) {
                        pdVar8 = (dword *)((ulong)psVar28 | 7);
                      }
                      psVar26 = (segment_command *)((long)pdVar8 + 1);
                      __Znwm();
                      uStack_80 = (ulong)((long)pdVar8 + 1) | 0x8000000000000000;
                      uStack_90 = psVar26;
                      uStack_88 = psVar28;
                    }
                    else {
                      uStack_80 = CONCAT17((char)psVar28,(undefined7)uStack_80);
                      psVar26 = (segment_command *)&uStack_90;
                    }
                    _memcpy(psVar26,psVar11,psVar28);
                    *(char *)((long)psVar26 + (long)psVar28) = '\0';
                    psVar23 = uStack_88;
                    psVar20 = uStack_90;
                    if (-1 < (long)uStack_80) {
                      psVar23 = (segment_command *)(uStack_80 >> 0x38);
                      psVar20 = (segment_command *)&uStack_90;
                    }
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (auStack_348,psVar20,psVar23);
                    param_1 = ppcStack_358;
                    goto joined_r0x00581a34;
                  }
LAB_00581dc0:
                  FUN_0040d740();
                  goto LAB_00581ef4;
                }
                if ((segment_command *)(uVar24 - (long)psVar20) < psVar28) {
                  pcVar17 = (char *)((long)psVar20 + (long)psVar28);
                  if (0x7ffffffffffffff6 - uVar24 < (long)pcVar17 - uVar24) goto LAB_00581dc0;
                  psVar23 = (segment_command *)auStack_348._0_8_;
                  if (-1 < (char)auStack_348[0x17]) {
                    psVar23 = (segment_command *)auStack_348;
                  }
                  if (pcVar17 <= (char *)(uVar24 * 2)) {
                    pcVar17 = (char *)(uVar24 * 2);
                  }
                  pdVar8 = &MACH_HEADER.flags;
                  if ((dword *)((ulong)pcVar17 | 7) != (dword *)0x17) {
                    pdVar8 = (dword *)((ulong)pcVar17 | 7);
                  }
                  psVar3 = (segment_command *)((long)&MACH_HEADER.sizeofcmds + 3);
                  if ((char *)((long)&MACH_HEADER.sizeofcmds + 2) < pcVar17) {
                    psVar3 = (segment_command *)((long)pdVar8 + 1);
                  }
                  if (0x3ffffffffffffff2 < uVar24) {
                    psVar3 = (segment_command *)0x7ffffffffffffff7;
                  }
                  psVar26 = psVar3;
                  __Znwm();
                  if (psVar20 != (segment_command *)0x0) {
                    _memmove(psVar26,psVar23,psVar20);
                  }
                  if (uVar24 != 0x16) {
                    __ZdlPv(psVar23);
                  }
                  auStack_348[0x17] = (byte)((ulong)psVar3 >> 0x38) | 0x80;
                  auStack_348._8_7_ = SUB87(psVar20,0);
                  auStack_348[0xf] = (char)((ulong)psVar20 >> 0x38);
                  auStack_348._16_7_ = SUB87(psVar3,0);
                  auStack_348._0_8_ = psVar26;
                }
                else {
                  psVar26 = (segment_command *)auStack_348._0_8_;
                  if (uVar18 == 0) {
                    psVar26 = (segment_command *)auStack_348;
                  }
                }
                pcVar17 = (char *)((long)psVar20 + (long)psVar28);
                psVar26 = (segment_command *)(psVar20->segname + (long)(psVar26->segname + -0x10));
                _memmove(psVar26,psVar11,psVar28);
                *(char *)((long)psVar26 + (long)psVar28) = '\0';
                if (-1 < (char)auStack_348[0x17]) {
                  auStack_348[0x17] = (byte)pcVar17 & 0x7f;
                  param_1 = ppcStack_358;
                  goto joined_r0x00581a34;
                }
                auStack_348._8_7_ = SUB87(pcVar17,0);
                auStack_348[0xf] = (char)((ulong)pcVar17 >> 0x38);
                param_1 = ppcStack_358;
                if (psVar11 != (segment_command *)auStack_2fa) goto LAB_00581a38;
LAB_00581984:
                psVar23 = (segment_command *)auStack_2fa;
                pcVar17 = (char *)param_3->vmaddr;
                pbVar4 = (byte *)param_3->vmsize;
                if (psVar27 != psVar23) {
                  if ((byte *)pcVar17 == pbVar4) {
                    (**(code **)(*(qword *)param_3 + 0x50))(param_3);
                    pcVar17 = (char *)param_3->vmaddr;
                    pbVar4 = (byte *)param_3->vmsize;
                    param_1 = ppcStack_358;
                  }
                  else {
                    pcVar17 = pcVar17 + 1;
                    param_3->vmaddr = (qword)pcVar17;
                  }
                }
                if (psVar12 != (segment_command *)0x0) {
                  if ((byte *)pcVar17 != pbVar4) goto LAB_00581aac;
                  (**(code **)(*(qword *)param_3 + 0x50))(param_3);
                  uVar18 = 0;
                  goto LAB_00581bac;
                }
                if ((byte *)pcVar17 == pbVar4) {
LAB_00581a58:
                  psVar12 = param_3;
                  (**(code **)(*(qword *)param_3 + 0x48))();
                }
                else {
LAB_00581784:
                  psVar12 = (segment_command *)(ulong)(byte)*pcVar17;
                }
                psVar23 = (segment_command *)auStack_2fa;
              } while ((int)psVar12 != -1);
            }
            uVar24 = CONCAT17(auStack_348[0xf],auStack_348._8_7_);
            if (-1 < (char)auStack_348[0x17]) {
              uVar24 = (ulong)auStack_348[0x17];
            }
            uVar18 = 6;
            if (uVar24 != 0) {
              uVar18 = 2;
            }
LAB_00581bac:
            __ZNSt3__18ios_base5clearEj
                      (sStack_2f8.segname +
                       (((segment_command *)(sStack_2f8._0_8_ + -0x48))->filesize - 8),
                       *(uint *)(sStack_2f8.segname +
                                ((segment_command *)(sStack_2f8._0_8_ + -0x48))->filesize + 0x18) |
                       uVar18);
          }
        }
        sStack_2f8._0_8_ = &PTR_FUN_00a02068;
        appuStack_150[0] = &PTR_DAT_00a02090;
        FUN_00583300(sStack_2f8.segname + 8);
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(&sStack_2f8,&PTR_PTR_00a020a8);
        __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_150);
        unaff_x27 = param_1;
LAB_00581bfc:
        pqVar16 = &segment_command_00000020.vmaddr;
        __Znwm();
        pqVar16[5] = CONCAT17(auStack_348[0xf],auStack_348._8_7_);
        *(ulong *)((long)pqVar16 + 0x2f) = CONCAT71(auStack_348._16_7_,auStack_348[0xf]);
        pqVar16[2] = (qword)PTR__fclose_0099a218;
        pqVar16[3] = 0xffffffffffffffff;
        *pqVar16 = (qword)&PTR_FUN_00a021d0;
        pqVar16[1] = (qword)pcVar25;
        pqVar16[4] = auStack_348._0_8_;
        *(byte *)((long)pqVar16 + 0x37) = auStack_348[0x17];
        *unaff_x27 = (char *)pqVar16;
        if ((long)uStack_320 < 0) {
          __ZdlPv(auStack_348._24_8_);
        }
        if ((int)psStack_350 < 0) {
          __ZdlPv(psStack_318);
          if (*(qword *)PTR____stack_chk_guard_00999f88 == qStack_78) {
            return;
          }
        }
        else {
LAB_00581c50:
          if (*(qword *)PTR____stack_chk_guard_00999f88 == qStack_78) {
            return;
          }
        }
      } while( true );
    }
  }
  FUN_00461b78();
LAB_00581ef4:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x581ef8);
  (*pcVar9)();
LAB_00581cbc:
  unaff_x27 = (char **)(ulong)bVar5;
  param_3 = (segment_command *)((long)&uStack_90 + 6);
  if (cVar6 != '\0') {
    param_3 = (segment_command *)"";
  }
  psVar26 = (segment_command *)&segment_command_00000020.vmaddr;
  __Znwm();
  psVar12 = param_3;
  _strlen();
  if ((segment_command *)0x7ffffffffffffff6 < psVar12) {
    FUN_0040d740();
    goto LAB_00581ef4;
  }
  if ((segment_command *)((long)&MACH_HEADER.sizeofcmds + 2) < psVar12) {
    pdVar8 = &MACH_HEADER.flags;
    if ((dword *)((ulong)psVar12 | 7) != (dword *)0x17) {
      pdVar8 = (dword *)((ulong)psVar12 | 7);
    }
    pcVar17 = (char *)((long)pdVar8 + 1U);
    __Znwm();
    uStack_a0 = (char *)((long)pdVar8 + 1U | 0x8000000000000000);
    auStack_b0._0_8_ = pcVar17;
    auStack_b0._8_8_ = psVar12;
LAB_00581d3c:
    _memcpy(pcVar17,param_3,psVar12);
  }
  else {
    uStack_a0 = (char *)CONCAT17((char)psVar12,(undefined7)uStack_a0);
    pcVar17 = auStack_b0;
    if (psVar12 != (segment_command *)0x0) goto LAB_00581d3c;
  }
  pcVar17[(long)psVar12] = '\0';
  *(undefined **)((long)psVar26->segname + 8) = PTR__fclose_0099a218;
  psVar26->vmaddr = (ulong)(uVar18 | bVar5);
  *(undefined ***)psVar26 = &PTR_FUN_00a01ff8;
  *(char **)psVar26->segname = pcVar25;
  psVar26->fileoff = auStack_b0._8_8_;
  psVar26->vmsize = auStack_b0._0_8_;
  psVar26->filesize = (qword)uStack_a0;
  *param_1 = (char *)psVar26;
  if (*(qword *)PTR____stack_chk_guard_00999f88 == qStack_78) {
    return;
  }
  goto LAB_00581384;
}



/* Entry: 00581fd8; end: 00582037;  */

/* WARNING: Removing unreachable block (ram,0x00582004) */
/* WARNING: Removing unreachable block (ram,0x00582028) */

long FUN_00581fd8(long param_1,long param_2)

{
  if (*(undefined **)(param_2 + 8) != &DAT_00815a2e) {
    return 0;
  }
  return param_1 + 8;
}



/* Entry: 00582038; end: 00582043;  */

undefined ** FUN_00582038(void)

{
  return &PTR_DAT_00a02210;
}



/* Entry: 00582044; end: 00582087;  */

undefined8 * FUN_00582044(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_00a01fa8;
  param_1[1] = 0;
  if (lVar1 != 0) {
    (*(code *)param_1[2])(lVar1);
  }
  return param_1;
}



/* Entry: 00582088; end: 005820cb;  */

void FUN_00582088(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_00a01fa8;
  param_1[1] = 0;
  if (lVar1 != 0) {
    (*(code *)param_1[2])(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_1);
  return;
}



/* Entry: 005820cc; end: 00582163;  */

void FUN_005820cc(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  if (param_3 <= *(ulong *)(param_1 + 0x18)) {
    uVar1 = param_3;
  }
  _fread(param_2,1,uVar1,*(undefined8 *)(param_1 + 8));
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) - param_2;
  return;
}



/* Entry: 00582164; end: 0058216f;  */

void FUN_00582164(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 00582170; end: 005821e3;  */

undefined8 * FUN_00582170(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_00a01ff8;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
    lVar1 = param_1[1];
    *param_1 = &PTR_FUN_00a01fa8;
    param_1[1] = 0;
  }
  else {
    lVar1 = param_1[1];
    *param_1 = &PTR_FUN_00a01fa8;
    param_1[1] = 0;
  }
  if (lVar1 != 0) {
    (*(code *)param_1[2])();
  }
  return param_1;
}



/* Entry: 005821e4; end: 00582257;  */

void FUN_005821e4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_00a01ff8;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
    lVar1 = param_1[1];
    *param_1 = &PTR_FUN_00a01fa8;
    param_1[1] = 0;
  }
  else {
    lVar1 = param_1[1];
    *param_1 = &PTR_FUN_00a01fa8;
    param_1[1] = 0;
  }
  if (lVar1 != 0) {
    (*(code *)param_1[2])();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_1);
  return;
}



/* Entry: 00582258; end: 0058227f;  */

void FUN_00582258(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (-1 < *(char *)(param_2 + 0x37)) {
    uVar3 = *(ulong *)(param_2 + 0x20);
    param_1[1] = *(ulong *)(param_2 + 0x28);
    *param_1 = uVar3;
    param_1[2] = *(ulong *)(param_2 + 0x30);
    return;
  }
  uVar3 = *(ulong *)(param_2 + 0x28);
  if (uVar3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar3;
  }
  else {
    if (0x7ffffffffffffff7 < uVar3) {
      FUN_0026329c(param_1,*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x002972c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(undefined *)0x2972c4)();
      return;
    }
    uVar1 = 0x19;
    if ((uVar3 | 7) != 0x17) {
      uVar1 = (uVar3 | 7) + 1;
    }
    uVar2 = uVar1;
    __Znwm();
    param_1[1] = uVar3;
    param_1[2] = uVar1 | 0x8000000000000000;
    *param_1 = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_0099a400)();
  return;
}



/* Entry: 00582280; end: 005822d3;  */

undefined8 * FUN_00582280(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a02068;
  param_1[0x35] = &PTR_DAT_00a02090;
  FUN_00583300(param_1 + 2);
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(param_1,&PTR_PTR_00a020a8);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(param_1 + 0x35);
  return param_1;
}



/* Entry: 005822d4; end: 005822d7;  */

long * FUN_005822d4(long *param_1)

{
  long lVar1;
  
  *param_1 = (long)&PTR_FUN_00a02138;
  lVar1 = param_1[0xf];
  if (lVar1 != 0) {
    func_0x005829a4(param_1);
    _fclose(lVar1);
    param_1[0xf] = 0;
    (**(code **)(*param_1 + 0x18))(param_1,0,0);
  }
  if (((char)param_1[0x32] == '\x01') && (param_1[8] != 0)) {
    __ZdaPv();
  }
  if ((*(char *)((long)param_1 + 0x191) == '\x01') && (param_1[0xd] != 0)) {
    __ZdaPv();
  }
  *param_1 = (long)(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_00998de8 + 0x10);
  __ZNSt3__16localeD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 005822d8; end: 005823db;  */

void FUN_005822d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a02068;
  param_1[0x35] = &PTR_DAT_00a02090;
  FUN_00583300(param_1 + 2);
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(param_1,&PTR_PTR_00a020a8);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(param_1 + 0x35);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_1);
  return;
}



/* Entry: 005823dc; end: 00582543;  */

long * FUN_005823dc(long *param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined1 auStack_38 [8];
  
  *param_1 = (long)(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_00998de8 + 0x10);
  __ZNSt3__16localeC1Ev(param_1 + 1);
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *param_1 = (long)&PTR_FUN_00a02138;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)((long)param_1 + 0x184) = 0;
  *(undefined8 *)((long)param_1 + 0x17c) = 0;
  *(undefined4 *)((long)param_1 + 0x18c) = 0x20;
  *(undefined2 *)(param_1 + 0x32) = 0;
  *(undefined1 *)((long)param_1 + 0x192) = 0;
  __ZNSt3__16localeC1ERKS0_(auStack_38,param_1 + 1);
  puVar1 = auStack_38;
  __ZNKSt3__16locale9has_facetERNS0_2idE
            (puVar1,PTR___ZNSt3__17codecvtIcc11__mbstate_tE2idE_00998c50);
  __ZNSt3__16localeD1Ev(auStack_38);
  if ((int)puVar1 != 0) {
    __ZNSt3__16localeC1ERKS0_(auStack_38,param_1 + 1);
    puVar1 = auStack_38;
    __ZNKSt3__16locale9use_facetERNS0_2idE
              (puVar1,PTR___ZNSt3__17codecvtIcc11__mbstate_tE2idE_00998c50);
    param_1[0x10] = (long)puVar1;
    __ZNSt3__16localeD1Ev(auStack_38);
    plVar2 = (long *)param_1[0x10];
    (**(code **)(*plVar2 + 0x38))();
    *(char *)((long)param_1 + 0x192) = (char)plVar2;
  }
  (**(code **)(*param_1 + 0x18))(param_1,0,0x1000);
  return param_1;
}



/* Entry: 00582544; end: 00582557;  */

void FUN_00582544(void)

{
  FUN_00583300();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00582558; end: 00582653;  */

void FUN_00582558(long *param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  
  (**(code **)(*param_1 + 0x30))();
  __ZNKSt3__16locale9use_facetERNS0_2idE
            (param_2,PTR___ZNSt3__17codecvtIcc11__mbstate_tE2idE_00998c50);
  param_1[0x10] = (long)param_2;
  bVar1 = *(byte *)((long)param_1 + 0x192);
  (**(code **)(*param_2 + 0x38))();
  *(char *)((long)param_1 + 0x192) = (char)param_2;
  if ((uint)bVar1 != (uint)param_2) {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    if ((uint)param_2 == 0) {
      if (((*(byte *)(param_1 + 0x32) & 1) == 0) && ((long *)param_1[8] != param_1 + 0xb)) {
        lVar2 = param_1[0xc];
        param_1[0xd] = param_1[8];
        param_1[0xe] = lVar2;
        *(undefined1 *)((long)param_1 + 0x191) = 0;
        __Znam();
        param_1[8] = lVar2;
        *(undefined1 *)(param_1 + 0x32) = 1;
        return;
      }
      lVar2 = param_1[0xc];
      param_1[0xe] = lVar2;
      __Znam();
      param_1[0xd] = lVar2;
      *(undefined1 *)((long)param_1 + 0x191) = 1;
      return;
    }
    if ((*(byte *)(param_1 + 0x32) != 0) && (param_1[8] != 0)) {
      __ZdaPv();
    }
    *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)((long)param_1 + 0x191);
    lVar2 = param_1[0xe];
    param_1[8] = param_1[0xd];
    *(undefined1 *)((long)param_1 + 0x191) = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xc] = lVar2;
  }
  return;
}



/* Entry: 00582654; end: 005827b7;  */

long FUN_00582654(long param_1,long param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (((param_2 == 0) && (param_3 == 0)) && (*(int *)(param_1 + 0x18c) == 0x20)) {
    if (*(long *)(param_1 + 0x78) == 0) {
      uVar3 = 0x22;
    }
    else {
      _setbuf(*(long *)(param_1 + 0x78),0);
      uVar3 = 0;
    }
    *(undefined4 *)(param_1 + 0x18c) = uVar3;
  }
  if ((*(char *)(param_1 + 400) == '\x01') && (*(long *)(param_1 + 0x40) != 0)) {
    __ZdaPv();
  }
  if ((*(char *)(param_1 + 0x191) == '\x01') && (*(long *)(param_1 + 0x68) != 0)) {
    __ZdaPv();
  }
  *(ulong *)(param_1 + 0x60) = param_3;
  if (param_3 < 9) {
    *(long *)(param_1 + 0x40) = param_1 + 0x58;
    *(undefined8 *)(param_1 + 0x60) = 8;
    *(undefined1 *)(param_1 + 400) = 0;
    if ((*(byte *)(param_1 + 0x192) & 1) == 0) {
      uVar2 = 8;
      *(undefined8 *)(param_1 + 0x70) = 8;
LAB_00582728:
      __Znam();
      *(ulong *)(param_1 + 0x68) = uVar2;
      *(undefined1 *)(param_1 + 0x191) = 1;
      return param_1;
    }
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x192);
    if ((param_2 == 0) || (bVar1 == 0)) {
      uVar2 = param_3;
      __Znam();
      *(ulong *)(param_1 + 0x40) = uVar2;
      *(undefined1 *)(param_1 + 400) = 1;
      if ((bVar1 & 1) == 0) {
        uVar2 = param_3;
        if ((long)param_3 < 9) {
          uVar2 = 8;
        }
        *(ulong *)(param_1 + 0x70) = uVar2;
        if ((param_2 != 0) && (8 < (long)param_3)) {
          *(long *)(param_1 + 0x68) = param_2;
          *(undefined1 *)(param_1 + 0x191) = 0;
          return param_1;
        }
        goto LAB_00582728;
      }
    }
    else {
      *(long *)(param_1 + 0x40) = param_2;
      *(undefined1 *)(param_1 + 400) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x191) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  return param_1;
}



/* Entry: 005827b8; end: 005828c7;  */

void FUN_005827b8(long *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *extraout_x8;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  plVar1 = (long *)param_2[0x10];
  if (plVar1 == (long *)0x0) {
    FUN_00583180();
    if ((plVar1[0xf] != 0) && (plVar3 = plVar1, (**(code **)(*plVar1 + 0x30))(), (int)plVar3 == 0))
    {
      lVar4 = plVar1[0xf];
      _fseeko(lVar4,param_3[0x10],0);
      if ((int)lVar4 == 0) {
        lVar2 = param_3[1];
        lVar4 = *param_3;
        lVar7 = param_3[3];
        lVar6 = param_3[2];
        lVar9 = param_3[5];
        lVar8 = param_3[4];
        lVar11 = param_3[7];
        lVar10 = param_3[6];
        lVar13 = param_3[9];
        lVar12 = param_3[8];
        lVar15 = param_3[0xb];
        lVar14 = param_3[10];
        lVar17 = param_3[0xd];
        lVar16 = param_3[0xc];
        lVar18 = param_3[0xe];
        plVar1[0x20] = param_3[0xf];
        plVar1[0x1f] = lVar18;
        plVar1[0x1e] = lVar17;
        plVar1[0x1d] = lVar16;
        plVar1[0x1c] = lVar15;
        plVar1[0x1b] = lVar14;
        plVar1[0x1a] = lVar13;
        plVar1[0x19] = lVar12;
        plVar1[0x18] = lVar11;
        plVar1[0x17] = lVar10;
        plVar1[0x16] = lVar9;
        plVar1[0x15] = lVar8;
        plVar1[0x14] = lVar7;
        plVar1[0x13] = lVar6;
        plVar1[0x12] = lVar2;
        plVar1[0x11] = lVar4;
        lVar2 = param_3[1];
        lVar4 = *param_3;
        lVar7 = param_3[3];
        lVar6 = param_3[2];
        lVar8 = param_3[4];
        lVar10 = param_3[7];
        lVar9 = param_3[6];
        extraout_x8[5] = param_3[5];
        extraout_x8[4] = lVar8;
        extraout_x8[7] = lVar10;
        extraout_x8[6] = lVar9;
        extraout_x8[1] = lVar2;
        *extraout_x8 = lVar4;
        extraout_x8[3] = lVar7;
        extraout_x8[2] = lVar6;
        lVar2 = param_3[9];
        lVar4 = param_3[8];
        lVar7 = param_3[0xb];
        lVar6 = param_3[10];
        lVar9 = param_3[0xd];
        lVar8 = param_3[0xc];
        lVar11 = param_3[0xf];
        lVar10 = param_3[0xe];
        extraout_x8[0x10] = param_3[0x10];
        extraout_x8[0xd] = lVar9;
        extraout_x8[0xc] = lVar8;
        extraout_x8[0xf] = lVar11;
        extraout_x8[0xe] = lVar10;
        extraout_x8[9] = lVar2;
        extraout_x8[8] = lVar4;
        extraout_x8[0xb] = lVar7;
        extraout_x8[10] = lVar6;
        return;
      }
    }
    extraout_x8[0xd] = 0;
    extraout_x8[0xc] = 0;
    extraout_x8[0xf] = 0;
    extraout_x8[0xe] = 0;
    extraout_x8[9] = 0;
    extraout_x8[8] = 0;
    extraout_x8[0xb] = 0;
    extraout_x8[10] = 0;
    extraout_x8[5] = 0;
    extraout_x8[4] = 0;
    extraout_x8[7] = 0;
    extraout_x8[6] = 0;
    extraout_x8[1] = 0;
    *extraout_x8 = 0;
    extraout_x8[3] = 0;
    extraout_x8[2] = 0;
    extraout_x8[0x10] = -1;
    return;
  }
  (**(code **)(*plVar1 + 0x30))();
  if (((param_2[0xf] != 0) &&
      (((iVar5 = (int)plVar1, param_3 == (long *)0x0 || (0 < iVar5)) &&
       (plVar1 = param_2, (**(code **)(*param_2 + 0x30))(), (int)plVar1 == 0)))) &&
     ((uint)param_4 < 3)) {
    lVar2 = param_2[0xf];
    lVar4 = (long)param_3 * (long)iVar5;
    if (iVar5 < 1) {
      lVar4 = 0;
    }
    _fseeko(lVar2,lVar4,param_4);
    if ((int)lVar2 == 0) {
      lVar4 = param_2[0xf];
      _ftello();
      param_1[0x10] = lVar4;
      lVar4 = param_2[0x19];
      lVar6 = param_2[0x1c];
      lVar2 = param_2[0x1b];
      param_1[9] = param_2[0x1a];
      param_1[8] = lVar4;
      param_1[0xb] = lVar6;
      param_1[10] = lVar2;
      lVar4 = param_2[0x1d];
      lVar6 = param_2[0x20];
      lVar2 = param_2[0x1f];
      param_1[0xd] = param_2[0x1e];
      param_1[0xc] = lVar4;
      param_1[0xf] = lVar6;
      param_1[0xe] = lVar2;
      lVar4 = param_2[0x11];
      lVar6 = param_2[0x14];
      lVar2 = param_2[0x13];
      param_1[1] = param_2[0x12];
      *param_1 = lVar4;
      param_1[3] = lVar6;
      param_1[2] = lVar2;
      lVar4 = param_2[0x15];
      lVar6 = param_2[0x18];
      lVar2 = param_2[0x17];
      param_1[5] = param_2[0x16];
      param_1[4] = lVar4;
      param_1[7] = lVar6;
      param_1[6] = lVar2;
      return;
    }
  }
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0x10] = -1;
  return;
}


