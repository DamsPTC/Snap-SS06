/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b562f70; end: 10b562fff;  */

long FUN_10b562f70(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b562fa8;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b562fa8:
    lVar3 = 0;
    goto LAB_10b562fac;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b562fac:
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
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



/* Entry: 10b563000; end: 10b563003;  */

void FUN_10b563000(long param_1,long param_2)

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
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
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
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b563004; end: 10b5630a3;  */

void FUN_10b563004(long param_1,long param_2)

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
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
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
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5630a4; end: 10b5630ab;  */

void FUN_10b5630a4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x28);
  }
  *puVar1 = &PTR_FUN_110d086f0;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b5630ac; end: 10b5630fb;  */

void FUN_10b5630ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110d086f0;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b5630fc; end: 10b56311b;  */

long * FUN_10b5630fc(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  undefined8 extraout_x8_00;
  uint extraout_w10;
  uint uVar6;
  uint extraout_w10_00;
  long lVar7;
  long *unaff_x20;
  int iVar8;
  undefined8 *unaff_x22;
  int iVar9;
  long lVar10;
  
  lVar7 = (long)*(char *)((long)unaff_x22 + 0x17);
  if ((-1 < lVar7) || (lVar7 = unaff_x22[1], lVar7 < 0x80)) {
    lVar10 = *param_1;
    uVar6 = (int)param_2 << 3;
    uVar2 = uVar6;
    func_0x0001001a5b20();
    if (lVar7 <= lVar10 + ~((long)unaff_x20 + (long)(int)uVar2) + 0x10) {
      lVar10 = (long)unaff_x20 + 2;
      for (uVar6 = uVar6 | 2; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
        *(byte *)(lVar10 + -2) = (byte)uVar6 | 0x80;
        lVar10 = lVar10 + 1;
      }
      *(byte *)(lVar10 + -2) = (byte)uVar6;
      *(char *)(lVar10 + -1) = (char)lVar7;
      puVar1 = (undefined8 *)*unaff_x22;
      if (-1 < *(char *)((long)unaff_x22 + 0x17)) {
        puVar1 = unaff_x22;
      }
      func_0x000107c610b4(lVar10,puVar1,lVar7);
      return (long *)(lVar10 + lVar7);
    }
  }
  func_0x00010b4d564c(param_1,param_2);
  func_0x00010b4d56cc();
  uVar6 = extraout_w10;
  while (0x7f < uVar6) {
    func_0x00010b4d576c();
    uVar6 = extraout_w10_00;
  }
  func_0x00010b4d56b4();
  uVar5 = extraout_x8;
  while (0x7f < (uint)uVar5) {
    func_0x00010b4d5758();
    uVar5 = extraout_x8_00;
  }
  func_0x00010b4d5660();
  iVar8 = (int)unaff_x22;
  if ((*(char *)((long)param_1 + 0x39) == '\x01') &&
     ((*param_1 - (long)unaff_x20) + 0x10 <= (long)iVar8)) {
    plVar3 = param_1;
    func_0x000107c303e0(param_1,unaff_x20);
    plVar4 = (long *)param_1[6];
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2,unaff_x22);
    if (((ulong)plVar4 & 1) == 0) {
      func_0x00010b4d56e4();
    }
    return plVar3;
  }
  if (*param_1 - (long)unaff_x20 < (long)iVar8) {
    while( true ) {
      iVar9 = ((int)*param_1 - (int)unaff_x20) + 0x10;
      iVar8 = (int)unaff_x22;
      unaff_x22 = (undefined8 *)(ulong)(uint)(iVar8 - iVar9);
      if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
      func_0x00010b4d5738();
      lVar7 = (long)unaff_x20 + (long)iVar9;
      unaff_x20 = param_1;
      func_0x000107c303e4(param_1,lVar7);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x20 + (long)iVar8);
  }
  _memcpy(unaff_x20);
  return (long *)((long)unaff_x20 + (long)iVar8);
}



/* Entry: 10b56311c; end: 10b563147;  */

undefined8 * FUN_10b56311c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110d087b8;
  param_1[1] = param_2;
  FUN_10b563148();
  return param_1;
}



/* Entry: 10b563148; end: 10b5631b3;  */

void FUN_10b563148(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = param_2;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = param_2;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined **)(param_1 + 0x88) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x90) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x98) = &DAT_11383d918;
  *(undefined **)(param_1 + 0xa0) = &DAT_11383d918;
  *(undefined **)(param_1 + 0xa8) = &DAT_11383d918;
  *(undefined **)(param_1 + 0xb0) = &DAT_11383d918;
  *(undefined **)(param_1 + 0xb8) = &DAT_11383d918;
  *(undefined **)(param_1 + 0xc0) = &DAT_11383d918;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  return;
}



/* Entry: 10b5631b4; end: 10b5631e3;  */

long FUN_10b5631b4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5631e4(param_1);
  return param_1;
}



/* Entry: 10b5631e4; end: 10b563243;  */

/* WARNING: Possible PIC construction at 0x00010b5646c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b5646d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b5646c8) */
/* WARNING: Removing unreachable block (ram,0x00010b5646d8) */

long FUN_10b5631e4(long param_1)

{
  char in_NG;
  char in_OV;
  
  func_0x000107c30258(param_1 + 0x88);
  func_0x000107c30258(param_1 + 0x90);
  func_0x000107c30258(param_1 + 0x98);
  func_0x000107c30258(param_1 + 0xa0);
  func_0x000107c30258(param_1 + 0xa8);
  func_0x000107c30258(param_1 + 0xb0);
  func_0x000107c30258(param_1 + 0xb8);
  func_0x000107c30258(param_1 + 0xc0);
  func_0x00010006804c(param_1 + 0x70);
  if (in_NG == in_OV) {
    func_0x0001002a998c(param_1 + 0x10);
  }
  return param_1 + 0x10;
}



/* Entry: 10b563244; end: 10b563247;  */

long FUN_10b563244(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5631e4(param_1);
  return param_1;
}



/* Entry: 10b563248; end: 10b56325b;  */

void FUN_10b563248(void)

{
  FUN_10b5631b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56325c; end: 10b563267;  */

undefined ** FUN_10b56325c(void)

{
  return &PTR_DAT_110d08848;
}



/* Entry: 10b563268; end: 10b5632fb;  */

void FUN_10b563268(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  func_0x000107c3025c(param_1 + 0x88);
  func_0x000107c3025c(param_1 + 0x90);
  func_0x000107c3025c(param_1 + 0x98);
  func_0x000107c3025c(param_1 + 0xa0);
  func_0x000107c3025c(param_1 + 0xa8);
  func_0x000107c3025c(param_1 + 0xb0);
  func_0x000107c3025c(param_1 + 0xb8);
  func_0x000107c3025c(param_1 + 0xc0);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0xfc) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5632fc; end: 10b5638c7;  */

uint * FUN_10b5632fc(uint *param_1,uint *param_2,uint *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint *puVar7;
  ulong uVar8;
  long extraout_x8;
  long lVar9;
  long extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  ulong extraout_x8_10;
  ulong uVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  
  puVar5 = param_1;
  puVar7 = param_3;
  func_0x00010b564a54(*(undefined8 *)(param_1 + 0x22));
  lVar9 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar9 = *(long *)(puVar7 + 2);
  }
  if (lVar9 != 0) {
    puVar5 = param_3;
    func_0x000107c280a0(param_3,1);
    param_2 = puVar5;
  }
  func_0x00010b564a54(*(undefined8 *)(param_1 + 0x24));
  lVar9 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar9 = *(long *)(puVar7 + 2);
  }
  if (lVar9 != 0) {
    puVar5 = param_3;
    func_0x000107c280a0(param_3,2);
    param_2 = puVar5;
  }
  uVar2 = param_1[8];
  if (0 < (int)uVar2) {
    func_0x00010b5648e8();
    param_2 = (uint *)((long)puVar5 + 2);
    *(undefined1 *)puVar5 = 0x1a;
    puVar7 = puVar5;
    while (0x7f < uVar2) {
      func_0x00010b564928();
    }
    *(char *)((long)puVar5 + 1) = (char)uVar2;
    puVar5 = puVar7;
    do {
      func_0x00010b5648e8();
      func_0x00010b564a60();
      uVar8 = extraout_x8_01;
      while (bVar3 = 0x7f < uVar8, bVar3) {
        func_0x00010b5649a0();
        uVar8 = extraout_x8_02;
      }
      func_0x00010b5649c0();
    } while (!bVar3);
  }
  if (param_1[0x32] != 0) {
    func_0x00010b564a88();
    func_0x0001088bdd44();
    param_2 = puVar5;
  }
  if (param_1[0x33] != 0) {
    func_0x00010b564a88();
    func_0x0001088b96ec();
    param_2 = puVar5;
  }
  uVar2 = param_1[0xe];
  puVar12 = (undefined8 *)(ulong)uVar2;
  if (0 < (int)uVar2) {
    func_0x00010b5648e8();
    param_2 = (uint *)((long)puVar5 + 2);
    *(undefined1 *)puVar5 = 0x32;
    puVar7 = puVar5;
    while (0x7f < uVar2) {
      func_0x00010b564928();
    }
    *(char *)((long)puVar5 + 1) = (char)uVar2;
    puVar12 = *(undefined8 **)(param_1 + 0xc);
    puVar5 = puVar7;
    do {
      func_0x00010b5648e8();
      func_0x00010b564a60();
      uVar8 = extraout_x8_03;
      while (bVar3 = 0x7f < uVar8, bVar3) {
        func_0x00010b5649a0();
        uVar8 = extraout_x8_04;
      }
      func_0x00010b5649c0();
    } while (!bVar3);
  }
  if (param_1[0x36] != 0) {
    func_0x00010b564a88();
    func_0x00010598f468();
    param_2 = puVar5;
  }
  puVar7 = *(uint **)(param_1 + 0x34);
  if (puVar7 != (uint *)0x0) {
    func_0x00010b564a88();
    func_0x00010599ce18();
    param_2 = puVar5;
  }
  func_0x00010b564a48(*(undefined8 *)(param_1 + 0x26));
  if ((long)puVar7 < 0) {
    puVar7 = (uint *)0x0;
    if (puVar12[1] != 0) {
      puVar12 = (undefined8 *)*puVar12;
      goto LAB_10b563498;
    }
  }
  else if ((int)puVar7 != 0) {
LAB_10b563498:
    func_0x00010b564a08(puVar12);
    puVar7 = (uint *)0x9;
    puVar5 = param_3;
    func_0x00010b56493c();
    param_2 = puVar5;
  }
  puVar4 = puVar5;
  if ((char)param_1[0x37] == '\x01') {
    func_0x00010b5648e8();
    puVar4 = (uint *)0x50;
    func_0x000107c280a8();
    func_0x00010b5649b4();
    puVar7 = puVar5;
    param_2 = puVar4;
  }
  uVar2 = param_1[0x14];
  if (0 < (int)uVar2) {
    func_0x00010b5648e8();
    param_2 = (uint *)((long)puVar4 + 2);
    *(undefined1 *)puVar4 = 0x5a;
    puVar5 = puVar4;
    while (0x7f < uVar2) {
      func_0x00010b564928();
    }
    *(char *)((long)puVar4 + 1) = (char)uVar2;
    puVar4 = puVar5;
    do {
      func_0x00010b5648e8();
      func_0x00010b564a60();
      uVar8 = extraout_x8_05;
      while (bVar3 = 0x7f < uVar8, bVar3) {
        func_0x00010b5649a0();
        uVar8 = extraout_x8_06;
      }
      func_0x00010b5649c0();
    } while (!bVar3);
  }
  uVar2 = param_1[0x1a];
  if (0 < (int)uVar2) {
    func_0x00010b5648e8();
    param_2 = (uint *)((long)puVar4 + 2);
    *(undefined1 *)puVar4 = 0x62;
    puVar5 = puVar4;
    while (0x7f < uVar2) {
      func_0x00010b564928();
    }
    *(char *)((long)puVar4 + 1) = (char)uVar2;
    puVar4 = puVar5;
    do {
      func_0x00010b5648e8();
      func_0x00010b564a60();
      uVar8 = extraout_x8_07;
      while (bVar3 = 0x7f < uVar8, bVar3) {
        func_0x00010b5649a0();
        uVar8 = extraout_x8_08;
      }
      func_0x00010b5649c0();
    } while (!bVar3);
  }
  uVar2 = param_1[0x20];
  puVar12 = (undefined8 *)(ulong)uVar2;
  if (0 < (int)uVar2) {
    func_0x00010b5648e8();
    param_2 = (uint *)((long)puVar4 + 2);
    *(undefined1 *)puVar4 = 0x6a;
    puVar5 = puVar4;
    while (0x7f < uVar2) {
      func_0x00010b564928();
    }
    *(char *)((long)puVar4 + 1) = (char)uVar2;
    puVar12 = *(undefined8 **)(param_1 + 0x1e);
    puVar4 = puVar5;
    do {
      func_0x00010b5648e8();
      func_0x00010b564a60();
      uVar8 = extraout_x8_09;
      while (bVar3 = 0x7f < uVar8, bVar3) {
        func_0x00010b5649a0();
        uVar8 = extraout_x8_10;
      }
      func_0x00010b5649c0();
    } while (!bVar3);
  }
  func_0x00010b564a48(*(undefined8 *)(param_1 + 0x28));
  if ((long)puVar7 < 0) {
    puVar7 = (uint *)0x0;
    if (puVar12[1] != 0) {
      puVar6 = (undefined8 *)*puVar12;
      goto LAB_10b563614;
    }
  }
  else {
    puVar6 = puVar12;
    if ((int)puVar7 != 0) {
LAB_10b563614:
      func_0x00010b564a08(puVar6);
      puVar7 = (uint *)0xe;
      puVar4 = param_3;
      func_0x00010b56493c();
      param_2 = puVar4;
    }
  }
  func_0x00010b564a48(*(undefined8 *)(param_1 + 0x2a));
  if ((long)puVar7 < 0) {
    puVar7 = (uint *)0x0;
    if (puVar12[1] != 0) {
      puVar6 = (undefined8 *)*puVar12;
      goto LAB_10b563654;
    }
  }
  else {
    puVar6 = puVar12;
    if ((int)puVar7 != 0) {
LAB_10b563654:
      func_0x00010b564a08(puVar6);
      puVar7 = (uint *)0xf;
      puVar4 = param_3;
      func_0x00010b56493c();
      param_2 = puVar4;
    }
  }
  puVar5 = puVar4;
  if (param_1[0x38] != 0) {
    func_0x00010b5648e8();
    puVar5 = (uint *)0x80;
    func_0x000107c280a8();
    func_0x00010b56491c();
    puVar7 = puVar4;
    param_2 = puVar5;
  }
  puVar4 = puVar5;
  if (param_1[0x39] != 0) {
    func_0x00010b5648e8();
    puVar4 = (uint *)0x88;
    func_0x000107c280a8();
    func_0x00010b56491c();
    puVar7 = puVar5;
    param_2 = puVar4;
  }
  puVar5 = puVar4;
  if (param_1[0x3a] != 0) {
    func_0x00010b5648e8();
    puVar5 = (uint *)0x90;
    func_0x000107c280a8();
    func_0x00010b56491c();
    puVar7 = puVar4;
    param_2 = puVar5;
  }
  puVar4 = puVar5;
  if (param_1[0x3b] != 0) {
    func_0x00010b5648e8();
    puVar4 = (uint *)0x98;
    func_0x000107c280a8();
    func_0x00010b56491c();
    puVar7 = puVar5;
    param_2 = puVar4;
  }
  puVar5 = puVar4;
  if (param_1[0x3c] != 0) {
    func_0x00010b5648e8();
    uVar2 = param_1[0x3c];
    puVar12 = (undefined8 *)(ulong)uVar2;
    puVar5 = (uint *)0xa5;
    func_0x000107c280a8();
    param_2 = puVar5 + 1;
    *puVar5 = uVar2;
    puVar7 = puVar4;
  }
  puVar4 = puVar5;
  if (param_1[0x3d] != 0) {
    func_0x00010b5648e8();
    puVar4 = (uint *)0xa8;
    func_0x000107c280a8();
    func_0x00010b56491c();
    puVar7 = puVar5;
    param_2 = puVar4;
  }
  puVar5 = puVar4;
  if (param_1[0x3e] != 0) {
    func_0x00010b5648e8();
    uVar2 = param_1[0x3e];
    puVar12 = (undefined8 *)(ulong)uVar2;
    puVar5 = (uint *)0xb5;
    func_0x000107c280a8();
    param_2 = puVar5 + 1;
    *puVar5 = uVar2;
    puVar7 = puVar4;
  }
  puVar4 = puVar5;
  if (param_1[0x3f] != 0) {
    func_0x00010b5648e8();
    puVar4 = (uint *)0xb8;
    func_0x000107c280a8();
    func_0x00010b56491c();
    puVar7 = puVar5;
    param_2 = puVar4;
  }
  if (param_1[0x40] != 0) {
    func_0x00010b5648e8();
    param_2 = (uint *)0xc0;
    func_0x000107c280a8();
    func_0x00010b56491c();
    puVar7 = puVar4;
  }
  func_0x00010b564a48(*(undefined8 *)(param_1 + 0x2c));
  if ((long)puVar7 < 0) {
    puVar7 = (uint *)0x0;
    if (puVar12[1] != 0) {
      puVar6 = (undefined8 *)*puVar12;
      goto LAB_10b5637d8;
    }
  }
  else {
    puVar6 = puVar12;
    if ((int)puVar7 != 0) {
LAB_10b5637d8:
      func_0x00010b564a08(puVar6);
      puVar7 = (uint *)0x19;
      param_2 = param_3;
      func_0x00010b56493c();
    }
  }
  func_0x00010b564a48(*(undefined8 *)(param_1 + 0x2e));
  if ((long)puVar7 < 0) {
    puVar7 = (uint *)0x0;
    if (puVar12[1] != 0) {
      puVar6 = (undefined8 *)*puVar12;
      goto LAB_10b563818;
    }
  }
  else {
    puVar6 = puVar12;
    if ((int)puVar7 != 0) {
LAB_10b563818:
      func_0x00010b564a08(puVar6);
      puVar7 = (uint *)0x1a;
      param_2 = param_3;
      func_0x00010b56493c();
    }
  }
  func_0x00010b564a48(*(undefined8 *)(param_1 + 0x30));
  if ((long)puVar7 < 0) {
    if (puVar12[1] == 0) goto LAB_10b563874;
    puVar12 = (undefined8 *)*puVar12;
  }
  else if ((int)puVar7 == 0) goto LAB_10b563874;
  func_0x00010b564a08(puVar12);
  param_2 = param_3;
  func_0x00010b56493c(param_3,0x1b);
LAB_10b563874:
  if ((*(ulong *)(param_1 + 2) & 1) == 0) {
    return param_2;
  }
  uVar10 = *(ulong *)(param_1 + 2) & 0xfffffffffffffffe;
  uVar8 = (ulong)*(char *)(uVar10 + 0x1f);
  if ((long)uVar8 < 0) {
    lVar9 = *(long *)(uVar10 + 8);
    uVar8 = *(ulong *)(uVar10 + 0x10);
  }
  else {
    lVar9 = uVar10 + 8;
  }
  if (*(long *)param_3 - (long)param_2 < (long)(int)uVar8) {
    while( true ) {
      iVar13 = ((int)*(undefined8 *)param_3 - (int)param_2) + 0x10;
      iVar11 = (int)uVar8;
      uVar8 = (ulong)(uint)(iVar11 - iVar13);
      if (iVar11 - iVar13 == 0 || iVar11 < iVar13) break;
      func_0x00010b4d5738();
      puVar1 = (undefined1 *)((long)param_2 + (long)iVar13);
      param_2 = param_3;
      func_0x000107c303e4(param_3,puVar1);
    }
    func_0x00010b4d5738();
    return (uint *)((long)param_2 + (long)iVar11);
  }
  _memcpy(param_2,lVar9,uVar8 & 0xffffffff);
  return (uint *)((long)param_2 + (long)(int)uVar8);
}



/* Entry: 10b5638c8; end: 10b563bc7;  */

void FUN_10b5638c8(long param_1)

{
  int iVar1;
  ulong uVar2;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  int extraout_w8_07;
  int extraout_w8_08;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  lVar3 = param_1 + 0x10;
  FUN_10b4d3e0c();
  iVar1 = (int)lVar3;
  *(int *)(param_1 + 0x20) = iVar1;
  if (lVar3 == 0) {
    iVar9 = 0;
  }
  else {
    func_0x00010b564978((long)iVar1);
    iVar9 = extraout_w8 + 1;
  }
  lVar3 = param_1 + 0x28;
  FUN_10b4d3e0c();
  iVar6 = (int)lVar3;
  *(int *)(param_1 + 0x38) = iVar6;
  if (lVar3 == 0) {
    iVar10 = 0;
  }
  else {
    func_0x00010b564978((long)iVar6);
    iVar10 = extraout_w8_00 + 1;
  }
  lVar3 = param_1 + 0x40;
  FUN_10b4d3e0c();
  iVar7 = (int)lVar3;
  *(int *)(param_1 + 0x50) = iVar7;
  if (lVar3 == 0) {
    iVar11 = 0;
  }
  else {
    func_0x00010b564978((long)iVar7);
    iVar11 = extraout_w8_01 + 1;
  }
  lVar3 = param_1 + 0x58;
  FUN_10b4d3e0c();
  iVar8 = (int)lVar3;
  *(int *)(param_1 + 0x68) = iVar8;
  if (lVar3 == 0) {
    iVar12 = 0;
  }
  else {
    func_0x00010b564978((long)iVar8);
    iVar12 = extraout_w8_02 + 1;
  }
  lVar3 = param_1 + 0x70;
  FUN_10b4d3e0c();
  *(int *)(param_1 + 0x80) = (int)lVar3;
  if (lVar3 == 0) {
    iVar4 = 0;
  }
  else {
    func_0x00010b564978((long)(int)lVar3);
    iVar4 = extraout_w8_03 + 1;
  }
  uVar2 = *(ulong *)(param_1 + 0x88) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar2 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar2 + 8);
  }
  iVar1 = iVar9 + iVar1 + iVar6 + iVar10 + iVar7 + iVar11 + iVar8 + iVar12 + (int)lVar3 + iVar4;
  if (lVar5 != 0) {
    func_0x000107c28098();
    func_0x00010b564a2c();
  }
  func_0x00010b564a20(*(undefined8 *)(param_1 + 0x90));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c28098();
    func_0x00010b564a2c();
  }
  func_0x00010b564a20(*(undefined8 *)(param_1 + 0x98));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010b564a2c();
  }
  func_0x00010b564a20(*(undefined8 *)(param_1 + 0xa0));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010b564a2c();
  }
  func_0x00010b564a20(*(undefined8 *)(param_1 + 0xa8));
  lVar3 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010b564a2c();
  }
  func_0x00010b564a20(*(undefined8 *)(param_1 + 0xb0));
  lVar3 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    iVar1 = iVar1 + (int)uVar2 + 2;
  }
  func_0x00010b564a20(*(undefined8 *)(param_1 + 0xb8));
  lVar3 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    iVar1 = iVar1 + (int)uVar2 + 2;
  }
  func_0x00010b564a20(*(undefined8 *)(param_1 + 0xc0));
  lVar3 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    iVar1 = iVar1 + (int)uVar2 + 2;
  }
  if (*(int *)(param_1 + 200) != 0) {
    func_0x00010b564948();
  }
  if (*(int *)(param_1 + 0xcc) != 0) {
    func_0x00010b564948();
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    func_0x00010b564948();
  }
  if (*(int *)(param_1 + 0xd8) != 0) {
    func_0x00010b564948();
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0xdc) * 2;
  if (*(int *)(param_1 + 0xe0) != 0) {
    func_0x00010b5648f4();
    iVar1 = extraout_w8_04;
  }
  if (*(int *)(param_1 + 0xe4) != 0) {
    func_0x00010b5648f4();
    iVar1 = extraout_w8_05;
  }
  if (*(int *)(param_1 + 0xe8) != 0) {
    func_0x00010b5648f4();
    iVar1 = extraout_w8_06;
  }
  if (*(int *)(param_1 + 0xec) != 0) {
    func_0x00010b5648f4();
    iVar1 = extraout_w8_07;
  }
  if (*(int *)(param_1 + 0xf0) != 0) {
    iVar1 = iVar1 + 6;
  }
  if (*(int *)(param_1 + 0xf4) != 0) {
    func_0x00010b5648f4();
    iVar1 = extraout_w8_08;
  }
  if (*(int *)(param_1 + 0xf8) != 0) {
    iVar1 = iVar1 + 6;
  }
  if (*(int *)(param_1 + 0xfc) != 0) {
    func_0x00010b564a10((int)LZCOUNT((long)*(int *)(param_1 + 0xfc)) * -9 + 0x280);
  }
  if (*(int *)(param_1 + 0x100) != 0) {
    func_0x00010b564a10((int)LZCOUNT((long)*(int *)(param_1 + 0x100)) * -9 + 0x280);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x104) = iVar1;
  return;
}



/* Entry: 10b563bc8; end: 10b563bcb;  */

void FUN_10b563bc8(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  
  func_0x000107c282d0(param_1 + 0x10,param_2 + 0x10);
  func_0x000107c282d0(param_1 + 0x28,param_2 + 0x28);
  func_0x000107c282d0(param_1 + 0x40,param_2 + 0x40);
  func_0x000107c282d0(param_1 + 0x58,param_2 + 0x58);
  lVar1 = param_2 + 0x70;
  func_0x000107c282d0(param_1 + 0x70);
  func_0x00010b5649e4(*(undefined8 *)(param_2 + 0x88));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5649d8();
    }
    func_0x000107c30248(param_1 + 0x88);
  }
  func_0x00010b5649e4(*(undefined8 *)(param_2 + 0x90));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5649d8();
    }
    func_0x000107c30248(param_1 + 0x90);
  }
  func_0x00010b5649e4(*(undefined8 *)(param_2 + 0x98));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5649d8();
    }
    func_0x000107c30248(param_1 + 0x98);
  }
  func_0x00010b5649e4(*(undefined8 *)(param_2 + 0xa0));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5649d8();
    }
    func_0x000107c30248(param_1 + 0xa0);
  }
  func_0x00010b5649e4(*(undefined8 *)(param_2 + 0xa8));
  lVar2 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5649d8();
    }
    func_0x000107c30248(param_1 + 0xa8);
  }
  func_0x00010b5649e4(*(undefined8 *)(param_2 + 0xb0));
  lVar2 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5649d8();
    }
    func_0x000107c30248(param_1 + 0xb0);
  }
  func_0x00010b5649e4(*(undefined8 *)(param_2 + 0xb8));
  lVar2 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5649d8();
    }
    func_0x000107c30248(param_1 + 0xb8);
  }
  func_0x00010b5649e4(*(undefined8 *)(param_2 + 0xc0));
  lVar2 = extraout_x8_06;
  if (extraout_x8_06 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5649d8();
    }
    func_0x000107c30248(param_1 + 0xc0);
  }
  if (*(int *)(param_2 + 200) != 0) {
    *(int *)(param_1 + 200) = *(int *)(param_2 + 200);
  }
  if (*(int *)(param_2 + 0xcc) != 0) {
    *(int *)(param_1 + 0xcc) = *(int *)(param_2 + 0xcc);
  }
  if (*(long *)(param_2 + 0xd0) != 0) {
    *(long *)(param_1 + 0xd0) = *(long *)(param_2 + 0xd0);
  }
  if (*(int *)(param_2 + 0xd8) != 0) {
    *(int *)(param_1 + 0xd8) = *(int *)(param_2 + 0xd8);
  }
  if (*(char *)(param_2 + 0xdc) == '\x01') {
    *(undefined1 *)(param_1 + 0xdc) = 1;
  }
  if (*(int *)(param_2 + 0xe0) != 0) {
    *(int *)(param_1 + 0xe0) = *(int *)(param_2 + 0xe0);
  }
  if (*(int *)(param_2 + 0xe4) != 0) {
    *(int *)(param_1 + 0xe4) = *(int *)(param_2 + 0xe4);
  }
  if (*(int *)(param_2 + 0xe8) != 0) {
    *(int *)(param_1 + 0xe8) = *(int *)(param_2 + 0xe8);
  }
  if (*(int *)(param_2 + 0xec) != 0) {
    *(int *)(param_1 + 0xec) = *(int *)(param_2 + 0xec);
  }
  if (*(int *)(param_2 + 0xf0) != 0) {
    *(int *)(param_1 + 0xf0) = *(int *)(param_2 + 0xf0);
  }
  if (*(int *)(param_2 + 0xf4) != 0) {
    *(int *)(param_1 + 0xf4) = *(int *)(param_2 + 0xf4);
  }
  if (*(int *)(param_2 + 0xf8) != 0) {
    *(int *)(param_1 + 0xf8) = *(int *)(param_2 + 0xf8);
  }
  if (*(int *)(param_2 + 0xfc) != 0) {
    *(int *)(param_1 + 0xfc) = *(int *)(param_2 + 0xfc);
  }
  if (*(int *)(param_2 + 0x100) != 0) {
    *(int *)(param_1 + 0x100) = *(int *)(param_2 + 0x100);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b563bcc; end: 10b563e9b;  */

void FUN_10b563bcc(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  
  func_0x000107c282d0(param_1 + 0x10,param_2 + 0x10);
  func_0x000107c282d0(param_1 + 0x28,param_2 + 0x28);
  func_0x000107c282d0(param_1 + 0x40,param_2 + 0x40);
  func_0x000107c282d0(param_1 + 0x58,param_2 + 0x58);
  lVar1 = param_2 + 0x70;
  func_0x000107c282d0(param_1 + 0x70);
  func_0x00010b5649e4(*(undefined8 *)(param_2 + 0x88));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5649d8();
    }
    func_0x000107c30248(param_1 + 0x88);
  }
  func_0x00010b5649e4(*(undefined8 *)(param_2 + 0x90));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5649d8();
    }
    func_0x000107c30248(param_1 + 0x90);
  }
  func_0x00010b5649e4(*(undefined8 *)(param_2 + 0x98));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5649d8();
    }
    func_0x000107c30248(param_1 + 0x98);
  }
  func_0x00010b5649e4(*(undefined8 *)(param_2 + 0xa0));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5649d8();
    }
    func_0x000107c30248(param_1 + 0xa0);
  }
  func_0x00010b5649e4(*(undefined8 *)(param_2 + 0xa8));
  lVar2 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5649d8();
    }
    func_0x000107c30248(param_1 + 0xa8);
  }
  func_0x00010b5649e4(*(undefined8 *)(param_2 + 0xb0));
  lVar2 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5649d8();
    }
    func_0x000107c30248(param_1 + 0xb0);
  }
  func_0x00010b5649e4(*(undefined8 *)(param_2 + 0xb8));
  lVar2 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5649d8();
    }
    func_0x000107c30248(param_1 + 0xb8);
  }
  func_0x00010b5649e4(*(undefined8 *)(param_2 + 0xc0));
  lVar2 = extraout_x8_06;
  if (extraout_x8_06 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5649d8();
    }
    func_0x000107c30248(param_1 + 0xc0);
  }
  if (*(int *)(param_2 + 200) != 0) {
    *(int *)(param_1 + 200) = *(int *)(param_2 + 200);
  }
  if (*(int *)(param_2 + 0xcc) != 0) {
    *(int *)(param_1 + 0xcc) = *(int *)(param_2 + 0xcc);
  }
  if (*(long *)(param_2 + 0xd0) != 0) {
    *(long *)(param_1 + 0xd0) = *(long *)(param_2 + 0xd0);
  }
  if (*(int *)(param_2 + 0xd8) != 0) {
    *(int *)(param_1 + 0xd8) = *(int *)(param_2 + 0xd8);
  }
  if (*(char *)(param_2 + 0xdc) == '\x01') {
    *(undefined1 *)(param_1 + 0xdc) = 1;
  }
  if (*(int *)(param_2 + 0xe0) != 0) {
    *(int *)(param_1 + 0xe0) = *(int *)(param_2 + 0xe0);
  }
  if (*(int *)(param_2 + 0xe4) != 0) {
    *(int *)(param_1 + 0xe4) = *(int *)(param_2 + 0xe4);
  }
  if (*(int *)(param_2 + 0xe8) != 0) {
    *(int *)(param_1 + 0xe8) = *(int *)(param_2 + 0xe8);
  }
  if (*(int *)(param_2 + 0xec) != 0) {
    *(int *)(param_1 + 0xec) = *(int *)(param_2 + 0xec);
  }
  if (*(int *)(param_2 + 0xf0) != 0) {
    *(int *)(param_1 + 0xf0) = *(int *)(param_2 + 0xf0);
  }
  if (*(int *)(param_2 + 0xf4) != 0) {
    *(int *)(param_1 + 0xf4) = *(int *)(param_2 + 0xf4);
  }
  if (*(int *)(param_2 + 0xf8) != 0) {
    *(int *)(param_1 + 0xf8) = *(int *)(param_2 + 0xf8);
  }
  if (*(int *)(param_2 + 0xfc) != 0) {
    *(int *)(param_1 + 0xfc) = *(int *)(param_2 + 0xfc);
  }
  if (*(int *)(param_2 + 0x100) != 0) {
    *(int *)(param_1 + 0x100) = *(int *)(param_2 + 0x100);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b563e9c; end: 10b563ed3;  */

void FUN_10b563e9c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined **)(param_1 + 0x48) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x50) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x58) = &DAT_11383d918;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  return;
}



/* Entry: 10b563ed4; end: 10b563f03;  */

long FUN_10b563ed4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b563f04(param_1);
  return param_1;
}



/* Entry: 10b563f04; end: 10b563f4b;  */

long FUN_10b563f04(long param_1)

{
  func_0x000107c30258(param_1 + 0x48);
  func_0x000107c30258(param_1 + 0x50);
  func_0x000107c30258(param_1 + 0x58);
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_10b5631b4();
  }
  __ZdlPv();
  func_0x00010598e0e4(param_1 + 0x30);
  func_0x00010598e0e4(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 10b563f4c; end: 10b563f4f;  */

long FUN_10b563f4c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b563f04(param_1);
  return param_1;
}



/* Entry: 10b563f50; end: 10b563f63;  */

void FUN_10b563f50(void)

{
  FUN_10b563ed4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b563f64; end: 10b563f6f;  */

undefined ** FUN_10b563f64(void)

{
  return &PTR_DAT_110d08898;
}



/* Entry: 10b563f70; end: 10b563fdf;  */

void FUN_10b563f70(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  func_0x000107c3025c(param_1 + 0x48);
  func_0x000107c3025c(param_1 + 0x50);
  func_0x000107c3025c(param_1 + 0x58);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b563268(*(undefined8 *)(param_1 + 0x60));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b563fe0; end: 10b5644e3;  */

long * FUN_10b563fe0(long *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar8;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong uVar9;
  ulong *puVar10;
  int iVar11;
  int iVar12;
  
  plVar4 = param_1;
  plVar5 = param_3;
  if (param_1[0xd] != 0) {
    plVar4 = param_3;
    func_0x000105991a14();
    plVar5 = param_2;
    param_2 = plVar4;
  }
  plVar3 = plVar4;
  if ((int)param_1[0xe] != 0) {
    func_0x00010b564910();
    plVar3 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar4);
    func_0x00010b56491c();
    param_2 = plVar3;
  }
  func_0x00010b564a54(param_1[9]);
  lVar7 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar7 = plVar5[1];
  }
  if (lVar7 != 0) {
    plVar3 = param_3;
    func_0x000107c280a0(param_3,3);
    param_2 = plVar3;
  }
  plVar4 = plVar3;
  if (*(int *)((long)param_1 + 0x74) != 0) {
    func_0x00010b564910();
    plVar4 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar3);
    func_0x00010b56491c();
    param_2 = plVar4;
  }
  func_0x00010b564a54(param_1[10]);
  lVar7 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar7 = plVar5[1];
  }
  if (lVar7 != 0) {
    plVar4 = param_3;
    func_0x000107c280a0(param_3,5);
    param_2 = plVar4;
  }
  func_0x00010b564a54(param_1[0xb]);
  lVar7 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar7 = plVar5[1];
  }
  if (lVar7 != 0) {
    plVar4 = param_3;
    func_0x000107c280a0(param_3,8);
    param_2 = plVar4;
  }
  plVar5 = plVar4;
  if (param_1[0xf] != 0) {
    func_0x00010b564910();
    plVar5 = (long *)0x48;
    func_0x000107c280a8(0x48,plVar4);
    func_0x00010b5649f0();
    param_2 = plVar5;
  }
  uVar2 = *(uint *)(param_1 + 5);
  if (0 < (int)uVar2) {
    func_0x00010b564910();
    puVar6 = (undefined1 *)((long)plVar5 + 2);
    *(undefined1 *)plVar5 = 0x52;
    while (0x7f < uVar2) {
      func_0x00010b564a74();
    }
    puVar6[-1] = (char)uVar2;
    puVar10 = (ulong *)param_1[4];
    puVar1 = puVar10 + (int)param_1[3];
    do {
      func_0x00010b564910();
      uVar8 = *puVar10;
      param_2 = (long *)((long)plVar5 + 1);
      while (0x7f < uVar8) {
        func_0x00010b564a94();
        uVar8 = extraout_x8_02;
      }
      puVar10 = puVar10 + 1;
      *(char *)((long)param_2 + -1) = (char)uVar8;
    } while (puVar10 < puVar1);
  }
  uVar2 = *(uint *)(param_1 + 8);
  if (0 < (int)uVar2) {
    func_0x00010b564910();
    puVar6 = (undefined1 *)((long)plVar5 + 2);
    *(undefined1 *)plVar5 = 0x5a;
    while (0x7f < uVar2) {
      func_0x00010b564a74();
    }
    puVar6[-1] = (char)uVar2;
    puVar10 = (ulong *)param_1[7];
    puVar1 = puVar10 + (int)param_1[6];
    do {
      func_0x00010b564910();
      uVar8 = *puVar10;
      param_2 = (long *)((long)plVar5 + 1);
      while (0x7f < uVar8) {
        func_0x00010b564a94();
        uVar8 = extraout_x8_03;
      }
      puVar10 = puVar10 + 1;
      *(char *)((long)param_2 + -1) = (char)uVar8;
    } while (puVar10 < puVar1);
  }
  if (param_1[0x10] != 0) {
    plVar5 = param_3;
    func_0x000106af68a8(param_3,param_1[0x10],param_2);
    param_2 = plVar5;
  }
  if (param_1[0x11] != 0) {
    plVar5 = param_3;
    func_0x000106af6948(param_3,param_1[0x11],param_2);
    param_2 = plVar5;
  }
  plVar4 = plVar5;
  if ((char)param_1[0x12] == '\x01') {
    func_0x00010b564910();
    plVar4 = (long *)0x70;
    func_0x000107c280a8(0x70,plVar5);
    func_0x00010b5649b4();
    param_2 = plVar4;
  }
  plVar5 = plVar4;
  if (*(char *)((long)param_1 + 0x91) == '\x01') {
    func_0x00010b564910();
    plVar5 = (long *)0x78;
    func_0x000107c280a8(0x78,plVar4);
    func_0x00010b5649b4();
    param_2 = plVar5;
  }
  plVar4 = plVar5;
  if (*(int *)((long)param_1 + 0x94) != 0) {
    func_0x00010b564910();
    plVar4 = (long *)0x80;
    func_0x000107c280a8(0x80,plVar5);
    func_0x00010b5649b4();
    param_2 = plVar4;
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    plVar4 = (long *)0x11;
    func_0x000107c303cc(0x11,param_1[0xc],*(undefined4 *)(param_1[0xc] + 0x104));
    param_2 = plVar4;
  }
  plVar5 = plVar4;
  if (param_1[0x13] != 0) {
    func_0x00010b564910();
    plVar5 = (long *)0x90;
    func_0x000107c280a8(0x90,plVar4);
    func_0x00010b5649f0();
    param_2 = plVar5;
  }
  if (param_1[0x14] != 0) {
    func_0x00010b564910();
    param_2 = (long *)0x98;
    func_0x000107c280a8(0x98,plVar5);
    func_0x00010b5649f0();
  }
  if ((param_1[1] & 1U) != 0) {
    uVar9 = param_1[1] & 0xfffffffffffffffe;
    uVar8 = (ulong)*(char *)(uVar9 + 0x1f);
    if ((long)uVar8 < 0) {
      lVar7 = *(long *)(uVar9 + 8);
      uVar8 = *(ulong *)(uVar9 + 0x10);
    }
    else {
      lVar7 = uVar9 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar8) {
      while( true ) {
        iVar12 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar11 = (int)uVar8;
        uVar8 = (ulong)(uint)(iVar11 - iVar12);
        if (iVar11 - iVar12 == 0 || iVar11 < iVar12) break;
        func_0x00010b4d5738();
        puVar6 = (undefined1 *)((long)param_2 + (long)iVar12);
        param_2 = param_3;
        func_0x000107c303e4(param_3,puVar6);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar11);
    }
    _memcpy(param_2,lVar7,uVar8 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar8);
  }
  return param_2;
}



/* Entry: 10b5644e4; end: 10b56469f;  */

void FUN_10b5644e4(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  func_0x00010598be78(param_1 + 0x18,param_2 + 0x18);
  lVar2 = param_2 + 0x30;
  func_0x00010598be78(param_1 + 0x30);
  func_0x00010b5649e4(*(undefined8 *)(param_2 + 0x48));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5649d8();
    }
    func_0x000107c30248(param_1 + 0x48);
  }
  func_0x00010b5649e4(*(undefined8 *)(param_2 + 0x50));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5649d8();
    }
    func_0x000107c30248(param_1 + 0x50);
  }
  func_0x00010b5649e4(*(undefined8 *)(param_2 + 0x58));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5649d8();
    }
    func_0x000107c30248(param_1 + 0x58);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x60) == 0) {
      FUN_10b564758(uVar4,*(undefined8 *)(param_2 + 0x60));
      *(ulong *)(param_1 + 0x60) = uVar4;
    }
    else {
      FUN_10b563bcc();
    }
  }
  if (*(long *)(param_2 + 0x68) != 0) {
    *(long *)(param_1 + 0x68) = *(long *)(param_2 + 0x68);
  }
  if (*(int *)(param_2 + 0x70) != 0) {
    *(int *)(param_1 + 0x70) = *(int *)(param_2 + 0x70);
  }
  if (*(int *)(param_2 + 0x74) != 0) {
    *(int *)(param_1 + 0x74) = *(int *)(param_2 + 0x74);
  }
  if (*(long *)(param_2 + 0x78) != 0) {
    *(long *)(param_1 + 0x78) = *(long *)(param_2 + 0x78);
  }
  if (*(long *)(param_2 + 0x80) != 0) {
    *(long *)(param_1 + 0x80) = *(long *)(param_2 + 0x80);
  }
  if (*(long *)(param_2 + 0x88) != 0) {
    *(long *)(param_1 + 0x88) = *(long *)(param_2 + 0x88);
  }
  if (*(char *)(param_2 + 0x90) == '\x01') {
    *(undefined1 *)(param_1 + 0x90) = 1;
  }
  if (*(char *)(param_2 + 0x91) == '\x01') {
    *(undefined1 *)(param_1 + 0x91) = 1;
  }
  if (*(int *)(param_2 + 0x94) != 0) {
    *(int *)(param_1 + 0x94) = *(int *)(param_2 + 0x94);
  }
  if (*(long *)(param_2 + 0x98) != 0) {
    *(long *)(param_1 + 0x98) = *(long *)(param_2 + 0x98);
  }
  if (*(long *)(param_2 + 0xa0) != 0) {
    *(long *)(param_1 + 0xa0) = *(long *)(param_2 + 0xa0);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5646a0; end: 10b5646af;  */

undefined8 * FUN_10b5646a0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x108;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x108);
  }
  *puVar1 = &PTR_FUN_110d087b8;
  puVar1[1] = param_2;
  FUN_10b563148();
  return puVar1;
}



/* Entry: 10b5646b0; end: 10b564757;  */

/* WARNING: Possible PIC construction at 0x00010b5646c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b5646d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b5646c8) */
/* WARNING: Removing unreachable block (ram,0x00010b5646d8) */

long FUN_10b5646b0(long param_1)

{
  char in_NG;
  char in_OV;
  
  func_0x00010006804c(param_1 + 0x60);
  if (in_NG == in_OV) {
    func_0x0001002a998c(param_1);
  }
  return param_1;
}



/* Entry: 10b564758; end: 10b5648e7;  */

undefined8 * FUN_10b564758(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x108;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x108);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d087b8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_10b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x00010b564a38(puVar1 + 2);
  *(undefined4 *)(puVar1 + 4) = 0;
  func_0x00010b564a38(puVar1 + 5);
  *(undefined4 *)(puVar1 + 7) = 0;
  func_0x00010b564a38(puVar1 + 8);
  *(undefined4 *)(puVar1 + 10) = 0;
  func_0x00010b564a38(puVar1 + 0xb);
  *(undefined4 *)(puVar1 + 0xd) = 0;
  func_0x00010b564a38(puVar1 + 0xe);
  *(undefined4 *)(puVar1 + 0x10) = 0;
  lVar2 = param_2 + 0x88;
  func_0x00010b5649d0();
  puVar1[0x11] = lVar2;
  lVar2 = param_2 + 0x90;
  func_0x00010b5649d0();
  puVar1[0x12] = lVar2;
  lVar2 = param_2 + 0x98;
  func_0x00010b5649d0();
  puVar1[0x13] = lVar2;
  lVar2 = param_2 + 0xa0;
  func_0x00010b5649d0();
  puVar1[0x14] = lVar2;
  lVar2 = param_2 + 0xa8;
  func_0x00010b5649d0();
  puVar1[0x15] = lVar2;
  lVar2 = param_2 + 0xb0;
  func_0x00010b5649d0();
  puVar1[0x16] = lVar2;
  lVar2 = param_2 + 0xb8;
  func_0x00010b5649d0();
  puVar1[0x17] = lVar2;
  lVar2 = param_2 + 0xc0;
  func_0x00010b5649d0();
  puVar1[0x18] = lVar2;
  *(undefined4 *)((long)puVar1 + 0x104) = 0;
  uVar4 = *(undefined8 *)(param_2 + 0xd0);
  uVar3 = *(undefined8 *)(param_2 + 200);
  uVar6 = *(undefined8 *)(param_2 + 0xe0);
  uVar5 = *(undefined8 *)(param_2 + 0xd8);
  uVar8 = *(undefined8 *)(param_2 + 0xf0);
  uVar7 = *(undefined8 *)(param_2 + 0xe8);
  uVar9 = *(undefined8 *)(param_2 + 0xf4);
  *(undefined8 *)((long)puVar1 + 0xfc) = *(undefined8 *)(param_2 + 0xfc);
  *(undefined8 *)((long)puVar1 + 0xf4) = uVar9;
  puVar1[0x1e] = uVar8;
  puVar1[0x1d] = uVar7;
  puVar1[0x1c] = uVar6;
  puVar1[0x1b] = uVar5;
  puVar1[0x1a] = uVar4;
  puVar1[0x19] = uVar3;
  return puVar1;
}



/* Entry: 10b5648e8; end: 10b564ae7;  */

ulong * FUN_10b5648e8(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *unaff_x19;
  ulong *unaff_x21;
  
  if (unaff_x21 < (ulong *)*unaff_x19) {
    return unaff_x21;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    unaff_x21 = (ulong *)((long)puVar2 + (long)((int)unaff_x21 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= unaff_x21);
  return unaff_x21;
}



/* Entry: 10b564ae8; end: 10b564b0f;  */

long FUN_10b564ae8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b564b10; end: 10b564b5f;  */

undefined8 * FUN_10b564b10(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d08918;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  func_0x00010b564aa8(param_1,param_3);
  return param_1;
}



/* Entry: 10b564b60; end: 10b564b63;  */

long FUN_10b564b60(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b564b64; end: 10b564b77;  */

void FUN_10b564b64(void)

{
  FUN_10b564ae8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b564b78; end: 10b564b9b;  */

undefined ** FUN_10b564b78(void)

{
  return &PTR_DAT_110d08958;
}



/* Entry: 10b564b9c; end: 10b564c37;  */

long * FUN_10b564b9c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  plVar2 = plVar1;
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar2 = param_3;
    func_0x000107c282cc(param_3,*(long *)(param_1 + 0x18),plVar1);
  }
  plVar1 = plVar2;
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar1 = param_3;
    func_0x00010599ccb0(param_3,*(long *)(param_1 + 0x20),plVar2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)plVar1 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)plVar1) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)plVar1 + (long)iVar7;
        plVar1 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar1 + (long)iVar6);
    }
    _memcpy(plVar1,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)plVar1 + (long)(int)uVar4);
  }
  return plVar1;
}



/* Entry: 10b564c38; end: 10b564cc3;  */

ulong FUN_10b564c38(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x28) = (int)uVar1;
  return uVar1;
}



/* Entry: 10b564cc4; end: 10b564d0f;  */

void FUN_10b564cc4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_110d08918;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b564d10; end: 10b564d17;  */

void FUN_10b564d10(void)

{
  return;
}



/* Entry: 10b564d18; end: 10b564ecb;  */

void FUN_10b564d18(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 2:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b566b88();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_10b564e54;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b5659dc();
    }
    break;
  case 3:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b566b88();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_10b564e54;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b56581c();
    }
    break;
  case 4:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b566b88();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_10b564e54;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b565a94();
    }
    break;
  case 5:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b566b88();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_10b564e54;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b565c54();
    }
    break;
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b566b88();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10b564e54;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b565d0c();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b566b88();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_10b564e54;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b565e60();
    }
    break;
  case 8:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b566b88();
      uVar1 = extraout_x8_06;
    }
    if (uVar1 != 0) goto LAB_10b564e54;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b565fb4();
    }
    break;
  case 9:
    func_0x00010b566bb8();
    goto LAB_10b564e54;
  case 10:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b566b88();
      uVar1 = extraout_x8_07;
    }
    if (uVar1 != 0) goto LAB_10b564e54;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b566108();
    }
    break;
  case 0xb:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b566b88();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10b564e54;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b566334();
    }
    break;
  default:
    goto LAB_10b564e54;
  }
  __ZdlPv();
LAB_10b564e54:
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b564ecc; end: 10b564ef7;  */

undefined8 FUN_10b564ecc(undefined8 param_1)

{
  func_0x00010b566b18();
  FUN_10b564ef8(param_1);
  return param_1;
}



/* Entry: 10b564ef8; end: 10b564f0b;  */

void FUN_10b564ef8(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 2:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b566b88();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_10b564e54;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b5659dc();
    }
    break;
  case 3:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b566b88();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_10b564e54;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b56581c();
    }
    break;
  case 4:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b566b88();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_10b564e54;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b565a94();
    }
    break;
  case 5:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b566b88();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_10b564e54;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b565c54();
    }
    break;
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b566b88();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10b564e54;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b565d0c();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b566b88();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_10b564e54;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b565e60();
    }
    break;
  case 8:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b566b88();
      uVar1 = extraout_x8_06;
    }
    if (uVar1 != 0) goto LAB_10b564e54;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b565fb4();
    }
    break;
  case 9:
    func_0x00010b566bb8();
    goto LAB_10b564e54;
  case 10:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b566b88();
      uVar1 = extraout_x8_07;
    }
    if (uVar1 != 0) goto LAB_10b564e54;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b566108();
    }
    break;
  case 0xb:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b566b88();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10b564e54;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b566334();
    }
    break;
  default:
    goto LAB_10b564e54;
  }
  __ZdlPv();
LAB_10b564e54:
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b564f0c; end: 10b564f1f;  */

void FUN_10b564f0c(void)

{
  FUN_10b564ecc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b564f20; end: 10b564f4f;  */

undefined8 FUN_10b564f20(undefined8 param_1)

{
  func_0x00010b566b18();
  return param_1;
}



/* Entry: 10b564f50; end: 10b564f83;  */

void FUN_10b564f50(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_10b564d18();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b564f84; end: 10b56510b;  */

long * FUN_10b564f84(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  int iVar3;
  long *unaff_x22;
  long *plVar4;
  int iVar5;
  
  plVar4 = param_3;
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x10);
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280b8();
  }
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 2:
    plVar4 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x18) + 0x10);
    param_2 = (long *)0x2;
    break;
  case 3:
    plVar4 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x18) + 0x20);
    param_2 = (long *)0x3;
    break;
  case 4:
    plVar4 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x18) + 0x20);
    param_2 = (long *)0x4;
    break;
  case 5:
    plVar4 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x18) + 0x10);
    param_2 = (long *)0x5;
    break;
  case 6:
    plVar4 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x18) + 0x18);
    param_2 = (long *)0x6;
    break;
  case 7:
    plVar4 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x18) + 0x18);
    param_2 = (long *)0x7;
    break;
  case 8:
    plVar4 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x18) + 0x18);
    param_2 = (long *)0x8;
    break;
  case 9:
    func_0x00010b566b0c(*(undefined8 *)(param_1 + 0x18));
    func_0x00010b566af4();
    param_2 = param_3;
    func_0x000107c280a0(param_3,9);
    plVar4 = unaff_x22;
    goto LAB_10b5650ac;
  case 10:
    plVar4 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x18) + 0x28);
    param_2 = (long *)0xa;
    break;
  case 0xb:
    plVar4 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x18) + 0x38);
    param_2 = (long *)0xb;
    break;
  default:
    goto LAB_10b5650ac;
  }
  func_0x000107c303cc();
LAB_10b5650ac:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b566ba0();
  if ((long)plVar4 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if ((long)(int)plVar4 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar2,(ulong)plVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar4);
  }
  while( true ) {
    iVar5 = ((int)*param_3 - (int)param_2) + 0x10;
    iVar3 = (int)plVar4;
    plVar4 = (long *)(ulong)(uint)(iVar3 - iVar5);
    if (iVar3 - iVar5 == 0 || iVar3 < iVar5) break;
    func_0x00010b4d5738();
    lVar2 = (long)param_2 + (long)iVar5;
    param_2 = param_3;
    func_0x000107c303e4(param_3,lVar2);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_2 + (long)iVar3);
}



/* Entry: 10b56510c; end: 10b56522b;  */

long FUN_10b56510c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  
  lVar2 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar2 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 2:
    lVar3 = *(long *)(param_1 + 0x18);
    func_0x00010b565a64();
    break;
  case 3:
    lVar3 = *(long *)(param_1 + 0x18);
    FUN_10b565960();
    break;
  case 4:
    lVar3 = *(long *)(param_1 + 0x18);
    FUN_10b565bd8();
    break;
  case 5:
    lVar3 = *(long *)(param_1 + 0x18);
    func_0x00010b565cdc();
    break;
  case 6:
    lVar3 = *(long *)(param_1 + 0x18);
    FUN_10b565e04();
    break;
  case 7:
    lVar3 = *(long *)(param_1 + 0x18);
    FUN_10b565f58();
    break;
  case 8:
    lVar3 = *(long *)(param_1 + 0x18);
    FUN_10b5660ac();
    break;
  case 9:
    uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
    func_0x000107c282a0();
    lVar2 = lVar2 + uVar1;
    goto code_r0x00010b5651fc;
  case 10:
    lVar3 = *(long *)(param_1 + 0x18);
    FUN_10b56629c();
    break;
  case 0xb:
    lVar3 = *(long *)(param_1 + 0x18);
    FUN_10b566568();
    break;
  default:
    goto LAB_10b565200;
  }
  lVar2 = lVar2 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6);
code_r0x00010b5651fc:
  lVar2 = lVar2 + 1;
LAB_10b565200:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b566c48();
    lVar3 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x20) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b56522c; end: 10b5654db;  */

void FUN_10b56522c(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  iVar2 = *(int *)(param_2 + 0x24);
  if (iVar2 == 0) goto LAB_10b5654a0;
  iVar3 = *(int *)(param_1 + 0x24);
  lVar4 = param_1;
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_10b564d18();
    }
    *(int *)(param_1 + 0x24) = iVar2;
  }
  switch(iVar2) {
  case 2:
    if (iVar3 == iVar2) {
      func_0x00010b566aa8();
      FUN_10b5654dc();
      goto LAB_10b5654a0;
    }
    func_0x00010b566b94();
    FUN_10b5666c4();
    break;
  case 3:
    if (iVar3 == iVar2) {
      func_0x00010b566aa8();
      func_0x00010b5654e8();
      goto LAB_10b5654a0;
    }
    func_0x00010b566b94();
    func_0x00010b56672c();
    break;
  case 4:
    if (iVar3 == iVar2) {
      func_0x00010b566aa8();
      func_0x00010b565554();
      goto LAB_10b5654a0;
    }
    func_0x00010b566b94();
    func_0x00010b566784();
    break;
  case 5:
    if (iVar3 == iVar2) {
      func_0x00010b566aa8();
      FUN_10b5655c0();
      goto LAB_10b5654a0;
    }
    func_0x00010b566b94();
    FUN_10b5667dc();
    break;
  case 6:
    if (iVar3 == iVar2) {
      func_0x00010b566aa8();
      func_0x00010b5655cc();
      goto LAB_10b5654a0;
    }
    func_0x00010b566b94();
    func_0x00010b566844();
    break;
  case 7:
    if (iVar3 == iVar2) {
      func_0x00010b566aa8();
      func_0x00010b565614();
      goto LAB_10b5654a0;
    }
    func_0x00010b566b94();
    func_0x00010b566890();
    break;
  case 8:
    if (iVar3 == iVar2) {
      func_0x00010b566aa8();
      func_0x00010b56565c();
      goto LAB_10b5654a0;
    }
    func_0x00010b566b94();
    func_0x00010b5668dc();
    break;
  case 9:
    if (iVar3 != iVar2) {
      *(undefined **)(param_1 + 0x18) = &DAT_11383d918;
    }
    puVar1 = (undefined *)(*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc);
    if (*(int *)(param_2 + 0x24) != 9) {
      puVar1 = &DAT_11383d918;
    }
    func_0x000107c30248(param_1 + 0x18,puVar1,uVar5);
    goto LAB_10b5654a0;
  case 10:
    if (iVar3 == iVar2) {
      func_0x00010b566aa8();
      func_0x00010b5656a4();
      goto LAB_10b5654a0;
    }
    func_0x00010b566b94();
    func_0x00010b566928();
    break;
  case 0xb:
    if (iVar3 == iVar2) {
      func_0x00010b566aa8();
      func_0x00010b565738();
      goto LAB_10b5654a0;
    }
    func_0x00010b566b94();
    func_0x00010b566998();
    break;
  default:
    goto LAB_10b5654a0;
  }
  *(long *)(param_1 + 0x18) = lVar4;
LAB_10b5654a0:
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5654dc; end: 10b5654e7;  */

void FUN_10b5654dc(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5654e8; end: 10b5655bf;  */

void FUN_10b5654e8(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  FUN_10b566a20();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b566b2c();
    }
    func_0x00010b566b68();
  }
  func_0x00010b566b38(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b566b2c();
    }
    func_0x00010b566be0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b566ac8();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5655c0; end: 10b5655cb;  */

void FUN_10b5655c0(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5655cc; end: 10b56581b;  */

void FUN_10b5655cc(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_10b566a20();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b566b2c();
    }
    func_0x00010b566b68();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b566ac8();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b56581c; end: 10b565847;  */

undefined8 FUN_10b56581c(undefined8 param_1)

{
  func_0x00010b566b18();
  func_0x00010b566b60();
  func_0x00010b566bb8();
  return param_1;
}



/* Entry: 10b565848; end: 10b56585b;  */

void FUN_10b565848(void)

{
  FUN_10b56581c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56585c; end: 10b565867;  */

undefined ** FUN_10b56585c(void)

{
  return &PTR_DAT_110d08d50;
}



/* Entry: 10b565868; end: 10b565897;  */

void FUN_10b565868(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b566a9c();
  func_0x00010b566bd8();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b565898; end: 10b56595f;  */

long * FUN_10b565898(long *param_1,long *param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long unaff_x21;
  int iVar3;
  long unaff_x22;
  long *plVar4;
  int iVar5;
  
  plVar2 = param_2;
  plVar4 = param_3;
  func_0x00010b566a50();
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5658d0;
  }
  else if ((int)plVar2 != 0) {
LAB_10b5658d0:
    param_4 = (long *)&UNK_10f77ae77;
    func_0x00010b566af4();
    plVar2 = (long *)0x1;
    param_1 = param_3;
    func_0x00010b566a44();
    param_2 = param_1;
  }
  func_0x00010b566b0c(*(undefined8 *)(unaff_x21 + 0x18));
  if ((long)plVar2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b56592c;
  }
  else if ((int)plVar2 == 0) goto LAB_10b56592c;
  param_4 = (long *)&UNK_10f77aec7;
  func_0x00010b566af4();
  func_0x00010b566a44(param_3,2);
  param_1 = param_3;
  param_2 = param_3;
LAB_10b56592c:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b566ba0();
  if ((long)plVar4 < 0) {
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  func_0x00010b566c3c();
  if (*param_1 - (long)param_4 < (long)(int)plVar4) {
    while( true ) {
      iVar5 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar3 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar3 - iVar5);
      if (iVar3 - iVar5 == 0 || iVar3 < iVar5) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar5);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)plVar4);
}



/* Entry: 10b565960; end: 10b5659d7;  */

long FUN_10b565960(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x00010b566a64();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar2 = param_1 + 1;
  }
  func_0x00010b566b20(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b566bac();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b566c48();
    lVar1 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x20) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b5659d8; end: 10b5659db;  */

void FUN_10b5659d8(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  FUN_10b566a20();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b566b2c();
    }
    func_0x00010b566b68();
  }
  func_0x00010b566b38(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b566b2c();
    }
    func_0x00010b566be0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b566ac8();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5659dc; end: 10b5659ff;  */

undefined8 FUN_10b5659dc(undefined8 param_1)

{
  func_0x00010b566b18();
  return param_1;
}



/* Entry: 10b565a00; end: 10b565a13;  */

void FUN_10b565a00(void)

{
  FUN_10b5659dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b565a14; end: 10b565a93;  */

undefined ** FUN_10b565a14(void)

{
  return &PTR_DAT_110d08db8;
}



/* Entry: 10b565a94; end: 10b565abf;  */

undefined8 FUN_10b565a94(undefined8 param_1)

{
  func_0x00010b566b18();
  func_0x00010b566b60();
  func_0x00010b566bb8();
  return param_1;
}



/* Entry: 10b565ac0; end: 10b565ad3;  */

void FUN_10b565ac0(void)

{
  FUN_10b565a94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b565ad4; end: 10b565adf;  */

undefined ** FUN_10b565ad4(void)

{
  return &PTR_DAT_110d08e28;
}



/* Entry: 10b565ae0; end: 10b565b0f;  */

void FUN_10b565ae0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b566a9c();
  func_0x00010b566bd8();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b565b10; end: 10b565bd7;  */

long * FUN_10b565b10(long *param_1,long *param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long unaff_x21;
  int iVar3;
  long unaff_x22;
  long *plVar4;
  int iVar5;
  
  plVar2 = param_2;
  plVar4 = param_3;
  func_0x00010b566a50();
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b565b48;
  }
  else if ((int)plVar2 != 0) {
LAB_10b565b48:
    param_4 = (long *)&UNK_10f77af16;
    func_0x00010b566af4();
    plVar2 = (long *)0x1;
    param_1 = param_3;
    func_0x00010b566a44();
    param_2 = param_1;
  }
  func_0x00010b566b0c(*(undefined8 *)(unaff_x21 + 0x18));
  if ((long)plVar2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b565ba4;
  }
  else if ((int)plVar2 == 0) goto LAB_10b565ba4;
  param_4 = (long *)&UNK_10f77af64;
  func_0x00010b566af4();
  func_0x00010b566a44(param_3,2);
  param_1 = param_3;
  param_2 = param_3;
LAB_10b565ba4:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b566ba0();
  if ((long)plVar4 < 0) {
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  func_0x00010b566c3c();
  if (*param_1 - (long)param_4 < (long)(int)plVar4) {
    while( true ) {
      iVar5 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar3 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar3 - iVar5);
      if (iVar3 - iVar5 == 0 || iVar3 < iVar5) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar5);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)plVar4);
}



/* Entry: 10b565bd8; end: 10b565c4f;  */

long FUN_10b565bd8(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x00010b566a64();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar2 = param_1 + 1;
  }
  func_0x00010b566b20(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b566bac();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b566c48();
    lVar1 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x20) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b565c50; end: 10b565c53;  */

void FUN_10b565c50(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  FUN_10b566a20();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b566b2c();
    }
    func_0x00010b566b68();
  }
  func_0x00010b566b38(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b566b2c();
    }
    func_0x00010b566be0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b566ac8();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b565c54; end: 10b565c77;  */

undefined8 FUN_10b565c54(undefined8 param_1)

{
  func_0x00010b566b18();
  return param_1;
}



/* Entry: 10b565c78; end: 10b565c8b;  */

void FUN_10b565c78(void)

{
  FUN_10b565c54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b565c8c; end: 10b565d0b;  */

undefined ** FUN_10b565c8c(void)

{
  return &PTR_DAT_110d08e90;
}



/* Entry: 10b565d0c; end: 10b565d33;  */

undefined8 FUN_10b565d0c(undefined8 param_1)

{
  func_0x00010b566b18();
  func_0x00010b566b60();
  return param_1;
}



/* Entry: 10b565d34; end: 10b565d47;  */

void FUN_10b565d34(void)

{
  FUN_10b565d0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b565d48; end: 10b565d53;  */

undefined ** FUN_10b565d48(void)

{
  return &PTR_DAT_110d08ef8;
}



/* Entry: 10b565d54; end: 10b565d7f;  */

void FUN_10b565d54(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b566a9c();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b565d80; end: 10b565e03;  */

long * FUN_10b565d80(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  long *plVar4;
  int iVar5;
  
  plVar1 = param_2;
  plVar4 = param_3;
  func_0x00010b566a50();
  if ((long)plVar1 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b565dcc;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)plVar1 == 0) goto LAB_10b565dcc;
  func_0x00010b566af4();
  func_0x00010b566ad8();
  param_2 = unaff_x22;
LAB_10b565dcc:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b566ba0();
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
      func_0x00010b4d5738();
      lVar2 = (long)param_2 + (long)iVar5;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar3);
  }
  _memcpy(param_2,lVar2,(ulong)plVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar4);
}



/* Entry: 10b565e04; end: 10b565e5b;  */

void FUN_10b565e04(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b566a64();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b566c48();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 10b565e5c; end: 10b565e5f;  */

void FUN_10b565e5c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_10b566a20();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b566b2c();
    }
    func_0x00010b566b68();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b566ac8();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b565e60; end: 10b565e87;  */

undefined8 FUN_10b565e60(undefined8 param_1)

{
  func_0x00010b566b18();
  func_0x00010b566b60();
  return param_1;
}



/* Entry: 10b565e88; end: 10b565e9b;  */

void FUN_10b565e88(void)

{
  FUN_10b565e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b565e9c; end: 10b565ea7;  */

undefined ** FUN_10b565e9c(void)

{
  return &PTR_DAT_110d08f60;
}



/* Entry: 10b565ea8; end: 10b565ed3;  */

void FUN_10b565ea8(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b566a9c();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b565ed4; end: 10b565f57;  */

long * FUN_10b565ed4(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  long *plVar4;
  int iVar5;
  
  plVar1 = param_2;
  plVar4 = param_3;
  func_0x00010b566a50();
  if ((long)plVar1 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b565f20;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)plVar1 == 0) goto LAB_10b565f20;
  func_0x00010b566af4();
  func_0x00010b566ad8();
  param_2 = unaff_x22;
LAB_10b565f20:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b566ba0();
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
      func_0x00010b4d5738();
      lVar2 = (long)param_2 + (long)iVar5;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar3);
  }
  _memcpy(param_2,lVar2,(ulong)plVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar4);
}



/* Entry: 10b565f58; end: 10b565faf;  */

void FUN_10b565f58(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b566a64();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b566c48();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 10b565fb0; end: 10b565fb3;  */

void FUN_10b565fb0(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_10b566a20();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b566b2c();
    }
    func_0x00010b566b68();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b566ac8();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b565fb4; end: 10b565fdb;  */

undefined8 FUN_10b565fb4(undefined8 param_1)

{
  func_0x00010b566b18();
  func_0x00010b566b60();
  return param_1;
}



/* Entry: 10b565fdc; end: 10b565fef;  */

void FUN_10b565fdc(void)

{
  FUN_10b565fb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b565ff0; end: 10b565ffb;  */

undefined ** FUN_10b565ff0(void)

{
  return &PTR_DAT_110d08fd0;
}



/* Entry: 10b565ffc; end: 10b566027;  */

void FUN_10b565ffc(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b566a9c();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b566028; end: 10b5660ab;  */

long * FUN_10b566028(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  long *plVar4;
  int iVar5;
  
  plVar1 = param_2;
  plVar4 = param_3;
  func_0x00010b566a50();
  if ((long)plVar1 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b566074;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)plVar1 == 0) goto LAB_10b566074;
  func_0x00010b566af4();
  func_0x00010b566ad8();
  param_2 = unaff_x22;
LAB_10b566074:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b566ba0();
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
      func_0x00010b4d5738();
      lVar2 = (long)param_2 + (long)iVar5;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar3);
  }
  _memcpy(param_2,lVar2,(ulong)plVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar4);
}



/* Entry: 10b5660ac; end: 10b566103;  */

void FUN_10b5660ac(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b566a64();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b566c48();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 10b566104; end: 10b566107;  */

void FUN_10b566104(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_10b566a20();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b566b2c();
    }
    func_0x00010b566b68();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b566ac8();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b566108; end: 10b56613b;  */

long FUN_10b566108(long param_1)

{
  func_0x00010b566b18();
  func_0x00010b566b60();
  func_0x00010b566bb8();
  func_0x000107c30258(param_1 + 0x20);
  return param_1;
}



/* Entry: 10b56613c; end: 10b56614f;  */

void FUN_10b56613c(void)

{
  FUN_10b566108();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b566150; end: 10b56615b;  */

undefined ** FUN_10b566150(void)

{
  return &PTR_DAT_110d09038;
}



/* Entry: 10b56615c; end: 10b566193;  */

void FUN_10b56615c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b566a9c();
  func_0x00010b566bd8();
  func_0x000107c3025c(unaff_x19 + 0x20);
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b566194; end: 10b56629b;  */

long * FUN_10b566194(long *param_1,long *param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long unaff_x21;
  int iVar3;
  long unaff_x22;
  long *plVar4;
  int iVar5;
  
  plVar2 = param_2;
  plVar4 = param_3;
  func_0x00010b566a50();
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5661cc;
  }
  else if ((int)plVar2 != 0) {
LAB_10b5661cc:
    param_4 = (long *)&UNK_10f77b0a6;
    func_0x00010b566af4();
    plVar2 = (long *)0x1;
    param_1 = param_3;
    func_0x00010b566a44();
    param_2 = param_1;
  }
  func_0x00010b566b0c(*(undefined8 *)(unaff_x21 + 0x18));
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b56620c;
  }
  else if ((int)plVar2 != 0) {
LAB_10b56620c:
    param_4 = (long *)&UNK_10f77b0f9;
    func_0x00010b566af4();
    plVar2 = (long *)0x2;
    param_1 = param_3;
    func_0x00010b566a44();
    param_2 = param_1;
  }
  func_0x00010b566b0c(*(undefined8 *)(unaff_x21 + 0x20));
  if ((long)plVar2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b566268;
  }
  else if ((int)plVar2 == 0) goto LAB_10b566268;
  param_4 = (long *)&UNK_10f77b15f;
  func_0x00010b566af4();
  func_0x00010b566a44(param_3,3);
  param_1 = param_3;
  param_2 = param_3;
LAB_10b566268:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b566ba0();
  if ((long)plVar4 < 0) {
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  func_0x00010b566c3c();
  if (*param_1 - (long)param_4 < (long)(int)plVar4) {
    while( true ) {
      iVar5 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar3 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar3 - iVar5);
      if (iVar3 - iVar5 == 0 || iVar3 < iVar5) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar5);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)plVar4);
}



/* Entry: 10b56629c; end: 10b56632f;  */

long FUN_10b56629c(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x00010b566a64();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar2 = param_1 + 1;
  }
  func_0x00010b566b20(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b566bac();
  }
  func_0x00010b566b20(*(undefined8 *)(unaff_x19 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b566bac();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b566c48();
    lVar1 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x28) = (int)lVar2;
  return lVar2;
}


